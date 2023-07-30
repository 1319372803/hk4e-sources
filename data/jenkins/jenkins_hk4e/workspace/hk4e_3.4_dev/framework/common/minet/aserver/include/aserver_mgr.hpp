// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/aserver/include/aserver_mgr.hpp

// Line 30: range 000000000C69F86C-000000000C69FE9C
void __cdecl common::minet::AServerMgr<GateserverSession>::AServerMgr(
        common::minet::AServerMgr<GateserverSession> *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r12
  boost::asio::io_context *ioc_arr; // r13

  common::minet::AServerBase::AServerBase(this);
  v2 = (int (**)(...))(&`vtable for'common::minet::AServerMgr<GateserverSession> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AServerBase = v2;
  std::atomic<common::minet::AServerMgr<GateserverSession>::Status>::atomic(&this->status_, STATUS_UN_INIT);
  boost::thread_group::thread_group(&this->ios_thread_group_);
  if ( *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->listen_port_);
  }
  this->listen_port_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->recv_buf_len_, (((_BYTE)this + 100) & 7u) + 3);
  }
  this->recv_buf_len_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->thread_num_);
  }
  this->thread_num_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 106) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->timeout_sec_);
  }
  this->timeout_sec_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->keep_alive_sec_);
  }
  this->keep_alive_sec_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 110) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->max_conn_num_);
  }
  this->max_conn_num_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_cut_packet_, (((_BYTE)this + 110) & 7u) + 1, &this->is_cut_packet_);
  this->is_cut_packet_ = 0;
  v3 = ((_BYTE)this + 113) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_no_delay_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_no_delay_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_no_delay_, v3, v4);
  this->is_no_delay_ = 0;
  v5 = ((_BYTE)this + 114) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_async_send_, v5, v6);
  this->is_async_send_ = 0;
  v7 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cache_packet_max_num_, v7);
  }
  this->cache_packet_max_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_send_packet_len_, v7);
  }
  this->max_send_packet_len_ = 0;
  v8 = ((_BYTE)this + 124) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->is_player_session_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_player_session_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_player_session_, v8, v9);
  this->is_player_session_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->backlog_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->backlog_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->backlog_num_, v8);
  }
  this->backlog_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->next_session_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_session_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->next_session_id_, (((_BYTE)this - 124) & 7u) + 3);
  }
  this->next_session_id_ = 1;
  common::tools::MemPool::MemPool(&this->recv_buf_pool_, 0x400u);
  common::tools::ObjectPool<GateserverSession>::ObjectPool(&this->session_pool_, 0x400u);
  v10 = 15LL;
  ioc_arr = this->ioc_arr_;
  while ( v10 >= 0 )
  {
    boost::asio::io_context::io_context(ioc_arr++);
    --v10;
  }
  std::recursive_mutex::recursive_mutex(&this->session_mgr_mu_);
  std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::unordered_map(&this->session_map_);
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>>::Data::Data(&this->app_id_to_session_map_.m_flat_tree.m_data);
  boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::basic_socket_acceptor<boost::asio::io_context>(
    &this->acceptor_,
    this->ioc_arr_,
    0LL);
  std::function<int ()(void)>::function(&this->thread_start_callback_);
  std::function<void ()(void)>::function(&this->thread_end_callback_);
};

// Line 30: range 000000000C69F054-000000000C69F684
void __cdecl common::minet::AServerMgr<HttpSession>::AServerMgr(common::minet::AServerMgr<HttpSession> *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r12
  boost::asio::io_context *ioc_arr; // r13

  common::minet::AServerBase::AServerBase(this);
  v2 = (int (**)(...))(&`vtable for'common::minet::AServerMgr<HttpSession> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AServerBase = v2;
  std::atomic<common::minet::AServerMgr<HttpSession>::Status>::atomic(&this->status_, STATUS_UN_INIT_0);
  boost::thread_group::thread_group(&this->ios_thread_group_);
  if ( *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->listen_port_);
  }
  this->listen_port_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->recv_buf_len_, (((_BYTE)this + 100) & 7u) + 3);
  }
  this->recv_buf_len_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->thread_num_);
  }
  this->thread_num_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 106) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->timeout_sec_);
  }
  this->timeout_sec_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->keep_alive_sec_);
  }
  this->keep_alive_sec_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 110) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->max_conn_num_);
  }
  this->max_conn_num_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_cut_packet_, (((_BYTE)this + 110) & 7u) + 1, &this->is_cut_packet_);
  this->is_cut_packet_ = 0;
  v3 = ((_BYTE)this + 113) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_no_delay_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_no_delay_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_no_delay_, v3, v4);
  this->is_no_delay_ = 0;
  v5 = ((_BYTE)this + 114) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_async_send_, v5, v6);
  this->is_async_send_ = 0;
  v7 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cache_packet_max_num_, v7);
  }
  this->cache_packet_max_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_send_packet_len_, v7);
  }
  this->max_send_packet_len_ = 0;
  v8 = ((_BYTE)this + 124) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->is_player_session_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_player_session_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_player_session_, v8, v9);
  this->is_player_session_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->backlog_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->backlog_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->backlog_num_, v8);
  }
  this->backlog_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->next_session_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_session_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->next_session_id_, (((_BYTE)this - 124) & 7u) + 3);
  }
  this->next_session_id_ = 1;
  common::tools::MemPool::MemPool(&this->recv_buf_pool_, 0x400u);
  common::tools::ObjectPool<HttpSession>::ObjectPool(&this->session_pool_, 0x400u);
  v10 = 15LL;
  ioc_arr = this->ioc_arr_;
  while ( v10 >= 0 )
  {
    boost::asio::io_context::io_context(ioc_arr++);
    --v10;
  }
  std::recursive_mutex::recursive_mutex(&this->session_mgr_mu_);
  std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::unordered_map(&this->session_map_);
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>>::Data::Data(&this->app_id_to_session_map_.m_flat_tree.m_data);
  boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::basic_socket_acceptor<boost::asio::io_context>(
    &this->acceptor_,
    this->ioc_arr_,
    0LL);
  std::function<int ()(void)>::function(&this->thread_start_callback_);
  std::function<void ()(void)>::function(&this->thread_end_callback_);
};

// Line 36: range 000000000C6BEA66-000000000C6BEB78
void __cdecl common::minet::AServerMgr<GateserverSession>::~AServerMgr(
        common::minet::AServerMgr<GateserverSession> *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  boost::asio::io_context *i; // rbx

  v2 = (int (**)(...))(&`vtable for'common::minet::AServerMgr<GateserverSession> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AServerBase = v2;
  std::function<void ()(void)>::~function(&this->thread_end_callback_);
  std::function<int ()(void)>::~function(&this->thread_start_callback_);
  boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::~basic_socket_acceptor(&this->acceptor_);
  boost::container::flat_map<unsigned int,std::shared_ptr<GateserverSession>,std::less<unsigned int>,void>::~flat_map(&this->app_id_to_session_map_);
  std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::~unordered_map(&this->session_map_);
  if ( this != (common::minet::AServerMgr<GateserverSession> *const)-416LL )
  {
    for ( i = (boost::asio::io_context *)&this->session_mgr_mu_;
          i != this->ioc_arr_;
          boost::asio::io_context::~io_context(i) )
    {
      --i;
    }
  }
  common::tools::ObjectPool<GateserverSession>::~ObjectPool(&this->session_pool_);
  common::tools::MemPool::~MemPool(&this->recv_buf_pool_);
  boost::thread_group::~thread_group(&this->ios_thread_group_);
};

// Line 36: range 000000000C6BEB7A-000000000C6BEC8C
void __cdecl common::minet::AServerMgr<HttpSession>::~AServerMgr(common::minet::AServerMgr<HttpSession> *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  boost::asio::io_context *i; // rbx

  v2 = (int (**)(...))(&`vtable for'common::minet::AServerMgr<HttpSession> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AServerBase = v2;
  std::function<void ()(void)>::~function(&this->thread_end_callback_);
  std::function<int ()(void)>::~function(&this->thread_start_callback_);
  boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::~basic_socket_acceptor(&this->acceptor_);
  boost::container::flat_map<unsigned int,std::shared_ptr<HttpSession>,std::less<unsigned int>,void>::~flat_map(&this->app_id_to_session_map_);
  std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::~unordered_map(&this->session_map_);
  if ( this != (common::minet::AServerMgr<HttpSession> *const)-416LL )
  {
    for ( i = (boost::asio::io_context *)&this->session_mgr_mu_;
          i != this->ioc_arr_;
          boost::asio::io_context::~io_context(i) )
    {
      --i;
    }
  }
  common::tools::ObjectPool<HttpSession>::~ObjectPool(&this->session_pool_);
  common::tools::MemPool::~MemPool(&this->recv_buf_pool_);
  boost::thread_group::~thread_group(&this->ios_thread_group_);
};

// Line 47: range 000000000C6B13DE-000000000C6B1405
int32_t __cdecl common::minet::AServerMgr<GateserverSession>::final(
        common::minet::AServerMgr<GateserverSession> *const this)
{
  std::atomic<common::minet::AServerMgr<GateserverSession>::Status>::operator=(&this->status_, STATUS_UN_INIT);
  return 0;
};

// Line 47: range 000000000C6B4B86-000000000C6B4BAD
int32_t __cdecl common::minet::AServerMgr<HttpSession>::final(common::minet::AServerMgr<HttpSession> *const this)
{
  std::atomic<common::minet::AServerMgr<HttpSession>::Status>::operator=(&this->status_, STATUS_UN_INIT_0);
  return 0;
};

// Line 60: range 000000000C6A8BA4-000000000C6A8FAA
int32_t __cdecl common::minet::AServerMgr<GateserverSession>::init(
        common::minet::AServerMgr<GateserverSession> *const this,
        const char *conf_file_path)
{
  common::tools::PTree *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  int32_t v6; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+27h] [rbp-B9h] BYREF
  std::string path; // [rsp+30h] [rbp-B0h] BYREF
  char v10[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (common::tools::PTree *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (common::tools::PTree *)v3;
  }
  v2->impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)1102416563;
  v2[1].impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)"2 32 8 5 pt:64 64 8 13 db_conf_pt:66";
  v2[2].impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)common::minet::AServerMgr<GateserverSession>::init;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  common::tools::PTree::PTree(v2 + 4);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&path, conf_file_path, &__a);
  common::tools::PTree::readXml(v2 + 4, &path);
  std::string::~string(&path);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&path, "GlobalConf.ServerConf", &__a);
  common::tools::PTree::getChild(v2 + 4, &path);
  std::string::~string(&path);
  std::allocator<char>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = (unsigned __int64)(this->_vptr_AServerBase + 1);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(this->_vptr_AServerBase + 1);
  v6 = (*(__int64 (__fastcall **)(common::minet::AServerMgr<GateserverSession> *const, common::tools::PTree *))v5)(
         this,
         v2 + 8);
  common::tools::PTree::~PTree(v2 + 8);
  common::tools::PTree::~PTree(v2 + 4);
  result = v6;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 60: range 000000000C6ABC50-000000000C6AC056
int32_t __cdecl common::minet::AServerMgr<HttpSession>::init(
        common::minet::AServerMgr<HttpSession> *const this,
        const char *conf_file_path)
{
  common::tools::PTree *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  int32_t v6; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+27h] [rbp-B9h] BYREF
  std::string path; // [rsp+30h] [rbp-B0h] BYREF
  char v10[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (common::tools::PTree *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (common::tools::PTree *)v3;
  }
  v2->impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)1102416563;
  v2[1].impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)"2 32 8 5 pt:64 64 8 13 db_conf_pt:66";
  v2[2].impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)common::minet::AServerMgr<HttpSession>::init;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  common::tools::PTree::PTree(v2 + 4);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&path, conf_file_path, &__a);
  common::tools::PTree::readXml(v2 + 4, &path);
  std::string::~string(&path);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&path, "GlobalConf.ServerConf", &__a);
  common::tools::PTree::getChild(v2 + 4, &path);
  std::string::~string(&path);
  std::allocator<char>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = (unsigned __int64)(this->_vptr_AServerBase + 1);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(this->_vptr_AServerBase + 1);
  v6 = (*(__int64 (__fastcall **)(common::minet::AServerMgr<HttpSession> *const, common::tools::PTree *))v5)(
         this,
         v2 + 8);
  common::tools::PTree::~PTree(v2 + 8);
  common::tools::PTree::~PTree(v2 + 4);
  result = v6;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 79: range 000000000C6A8FAC-000000000C6AA45D
int32_t __cdecl common::minet::AServerMgr<GateserverSession>::init(
        common::minet::AServerMgr<GateserverSession> *const this,
        const common::tools::PTree *pt)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  unsigned __int16 v5; // dx
  common::milog::MiLogStream *v6; // rsi
  unsigned int v7; // ecx
  char v8; // dl
  unsigned int recv_buf_len; // ebx
  std::string *p_path; // rsi
  unsigned int v11; // edx
  char v12; // al
  unsigned __int16 v13; // dx
  unsigned __int16 v14; // cx
  unsigned __int16 v15; // cx
  unsigned __int16 v16; // cx
  common::milog::MiLogStream *v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rdx
  char v20; // al
  bool v21; // cl
  char v22; // dl
  std::string *v23; // rsi
  __int64 v24; // rdx
  bool v25; // cl
  char v26; // dl
  std::string *v27; // rsi
  __int64 v28; // rdx
  std::string *v29; // rsi
  unsigned int v30; // ecx
  char v31; // dl
  bool v32; // cl
  char v33; // dl
  std::string *v34; // rsi
  __int64 v35; // rdx
  std::string *v36; // rsi
  unsigned int v37; // edx
  char v38; // al
  common::milog::MiLogStream *v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 backlog_num; // r9
  _BOOL8 is_cut_packet; // r8
  void *max_conn_num; // rdi
  __int64 timeout_sec; // rsi
  unsigned int keep_alive_sec; // r11d
  unsigned int thread_num; // r10d
  __int64 v48; // rcx
  std::allocator<char> __a; // [rsp+17h] [rbp-F9h] BYREF
  std::string path; // [rsp+20h] [rbp-F0h] BYREF
  std::string v54; // [rsp+40h] [rbp-D0h] BYREF
  std::string v55; // [rsp+60h] [rbp-B0h] BYREF
  std::string v56; // [rsp+80h] [rbp-90h] BYREF
  std::string v57; // [rsp+A0h] [rbp-70h] BYREF
  std::string v58; // [rsp+C0h] [rbp-50h] BYREF
  common::milog::MiLogStream v59; // [rsp+E0h] [rbp-30h] BYREF

  if ( std::atomic<common::minet::AServerMgr<GateserverSession>::Status>::operator common::minet::AServerMgr<GateserverSession>::Status(&this->status_) )
  {
    common::milog::MiLogStream::create(
      &v59,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "init",
      83);
    v2 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v59, (const char (*)[19])"server_mgr status=");
    v3 = common::milog::MiLogStream::operator<<<std::atomic<common::minet::AServerMgr<GateserverSession>::Status>,(std::atomic<common::minet::AServerMgr<GateserverSession>::Status>*)0>(
           v2,
           &this->status_);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v3, (const char (*)[22])", do not init it now.");
    common::milog::MiLogStream::~MiLogStream(&v59);
    return -1;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v59, "ListenPort.<xmlattr>.value", &__a);
    v5 = common::tools::PTree::get<unsigned short>(pt, (const std::string *)&v59);
    if ( *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) <= 1 )
    {
      __asan_report_store2(&this->listen_port_);
    }
    this->listen_port_ = v5;
    std::string::~string(&v59);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v59, "RecvBufLen.<xmlattr>.value", &__a);
    v6 = &v59;
    v7 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)&v59);
    v8 = *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000);
    if ( v8 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v8 )
    {
      LOBYTE(v6) = v8 != 0;
      __asan_report_store4(&this->recv_buf_len_, v6);
    }
    this->recv_buf_len_ = v7;
    std::string::~string(&v59);
    std::allocator<char>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->recv_buf_len_);
    }
    recv_buf_len = this->recv_buf_len_;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&path, "MaxSendPacketLen.<xmlattr>.value", &__a);
    p_path = &path;
    v11 = common::tools::PTree::get<unsigned int>(pt, &path, recv_buf_len);
    v12 = *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000);
    if ( v12 != 0 && v12 <= 3 )
    {
      LOBYTE(p_path) = v12 != 0;
      __asan_report_store4(&this->max_send_packet_len_, p_path);
    }
    this->max_send_packet_len_ = v11;
    std::string::~string(&path);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v59, "ThreadNum.<xmlattr>.value", &__a);
    v13 = common::tools::PTree::get<unsigned short>(pt, (const std::string *)&v59);
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 1 )
    {
      __asan_report_store2(&this->thread_num_);
    }
    this->thread_num_ = v13;
    std::string::~string(&v59);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v59, "TimeoutSec.<xmlattr>.value", &__a);
    v14 = common::tools::PTree::get<unsigned short>(pt, (const std::string *)&v59);
    if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 106) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store2(&this->timeout_sec_);
    }
    this->timeout_sec_ = v14;
    std::string::~string(&v59);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v59, "KeepAliveSec.<xmlattr>.value", &__a);
    v15 = common::tools::PTree::get<unsigned short>(pt, (const std::string *)&v59);
    if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 108) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store2(&this->keep_alive_sec_);
    }
    this->keep_alive_sec_ = v15;
    std::string::~string(&v59);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v59, "MaxConnNum.<xmlattr>.value", &__a);
    v16 = common::tools::PTree::get<unsigned short>(pt, (const std::string *)&v59);
    if ( *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 110) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store2(&this->max_conn_num_);
    }
    this->max_conn_num_ = v16;
    std::string::~string(&v59);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v59, "CutPacket.<xmlattr>.value", &__a);
    v17 = &v59;
    LOBYTE(v18) = common::tools::PTree::get<bool>(pt, (const std::string *)&v59);
    v19 = v18;
    v20 = *(_BYTE *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000);
    if ( v20 < 0 )
    {
      LOBYTE(v17) = v20 != 0;
      __asan_report_store1(&this->is_cut_packet_, v17, v19);
    }
    this->is_cut_packet_ = v19;
    std::string::~string(&v59);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v54, "NoDelay.<xmlattr>.value", &__a);
    v23 = &v54;
    v21 = common::tools::PTree::get<bool>(pt, &v54, 0);
    v22 = *(_BYTE *)(((unsigned __int64)&this->is_no_delay_ >> 3) + 0x7FFF8000);
    LOBYTE(v23) = v22 != 0;
    v24 = (v22 != 0) & (unsigned __int8)((((unsigned __int8)this + 113) & 7) >= v22);
    if ( (_BYTE)v24 )
      __asan_report_store1(&this->is_no_delay_, v23, v24);
    this->is_no_delay_ = v21;
    std::string::~string(&v54);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v55, "AsyncSend.<xmlattr>.value", &__a);
    v27 = &v55;
    v25 = common::tools::PTree::get<bool>(pt, &v55, 0);
    v26 = *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000);
    LOBYTE(v27) = v26 != 0;
    v28 = (v26 != 0) & (unsigned __int8)((((unsigned __int8)this + 114) & 7) >= v26);
    if ( (_BYTE)v28 )
      __asan_report_store1(&this->is_async_send_, v27, v28);
    this->is_async_send_ = v25;
    std::string::~string(&v55);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v56, "AsyncSend.<xmlattr>.CachePacketMaxNum", &__a);
    v29 = &v56;
    v30 = common::tools::PTree::get<unsigned int>(pt, &v56, 0xC8u);
    v31 = *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000);
    if ( v31 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v31 )
    {
      LOBYTE(v29) = v31 != 0;
      __asan_report_store4(&this->cache_packet_max_num_, v29);
    }
    this->cache_packet_max_num_ = v30;
    std::string::~string(&v56);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v57, "PlayerServer.<xmlattr>.value", &__a);
    v34 = &v57;
    v32 = common::tools::PTree::get<bool>(pt, &v57, 0);
    v33 = *(_BYTE *)(((unsigned __int64)&this->is_player_session_ >> 3) + 0x7FFF8000);
    LOBYTE(v34) = v33 != 0;
    v35 = (v33 != 0) & (unsigned __int8)((((unsigned __int8)this + 124) & 7) >= v33);
    if ( (_BYTE)v35 )
      __asan_report_store1(&this->is_player_session_, v34, v35);
    this->is_player_session_ = v32;
    std::string::~string(&v57);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v58, "Backlog.<xmlattr>.value", &__a);
    v36 = &v58;
    v37 = common::tools::PTree::get<unsigned int>(pt, &v58, 0x800u);
    v38 = *(_BYTE *)(((unsigned __int64)&this->backlog_num_ >> 3) + 0x7FFF8000);
    if ( v38 != 0 && v38 <= 3 )
    {
      LOBYTE(v36) = v38 != 0;
      __asan_report_store4(&this->backlog_num_, v36);
    }
    this->backlog_num_ = v37;
    std::string::~string(&v58);
    std::allocator<char>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) <= 1 )
    {
      __asan_report_load2(&this->listen_port_);
    }
    if ( this->listen_port_ > 0x63u )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->recv_buf_len_);
      }
      if ( this->recv_buf_len_ > 9 && this->recv_buf_len_ <= 0x800 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 1 )
        {
          __asan_report_load2(&this->thread_num_);
        }
        if ( this->thread_num_ && this->thread_num_ <= 0x10u )
        {
          v40 = ((_BYTE)this + 114) & 7;
          v41 = (*(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v40 >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000));
          if ( (_BYTE)v41 )
            __asan_report_load1(&this->is_async_send_, v40, v41);
          if ( !this->is_async_send_ )
            goto LABEL_52;
          if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&this->cache_packet_max_num_);
          }
          if ( this->cache_packet_max_num_ )
          {
LABEL_52:
            if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&this->recv_buf_len_);
            }
            this->recv_buf_len_ <<= 10;
            if ( *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->max_send_packet_len_);
            }
            this->max_send_packet_len_ <<= 10;
            common::tools::MemPool::setMemLen(&this->recv_buf_pool_, this->recv_buf_len_);
            common::milog::MiLogStream::create(
              &v59,
              &common::milog::MiLogDefault::default_log_obj_,
              2u,
              "../framework/common/minet/aserver/include/aserver_mgr.hpp",
              "init",
              133);
            if ( *(_BYTE *)(((unsigned __int64)&this->backlog_num_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->backlog_num_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->backlog_num_);
            }
            backlog_num = this->backlog_num_;
            if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(
                &this->is_cut_packet_,
                &common::milog::MiLogDefault::default_log_obj_,
                &this->is_cut_packet_);
            is_cut_packet = this->is_cut_packet_;
            if ( *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 110) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load2(&this->max_conn_num_);
            }
            max_conn_num = (void *)this->max_conn_num_;
            if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 106) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              max_conn_num = &this->timeout_sec_;
              __asan_report_load2(&this->timeout_sec_);
            }
            timeout_sec = this->timeout_sec_;
            if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 108) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              max_conn_num = &this->keep_alive_sec_;
              __asan_report_load2(&this->keep_alive_sec_);
            }
            keep_alive_sec = this->keep_alive_sec_;
            if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 1 )
            {
              max_conn_num = &this->thread_num_;
              __asan_report_load2(&this->thread_num_);
            }
            thread_num = this->thread_num_;
            if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              max_conn_num = &this->recv_buf_len_;
              __asan_report_load4(&this->recv_buf_len_);
            }
            v48 = this->recv_buf_len_;
            if ( *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) <= 1 )
            {
              max_conn_num = &this->listen_port_;
              __asan_report_load2(&this->listen_port_);
            }
            common::milog::MiLogStream::operator()(
              &v59,
              "aserver init succ with listen_port=%u, recv_buf_len=%u, thread_num=%u, keep_alive_sec=%u, timeout_sec=%u, "
              "max_conn_num=%u, is_cut_packet=%d, backlog_num=%d",
              this->listen_port_,
              v48,
              thread_num,
              keep_alive_sec,
              timeout_sec,
              max_conn_num,
              is_cut_packet,
              backlog_num);
            common::milog::MiLogStream::~MiLogStream(&v59);
            std::atomic<common::minet::AServerMgr<GateserverSession>::Status>::operator=(&this->status_, STATUS_INIT);
            return 0;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v59,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "../framework/common/minet/aserver/include/aserver_mgr.hpp",
              "init",
              121);
            common::milog::MiLogStream::operator()(&v59, "is_async_send_ is true, cache_packet_max_num_ must > 0!");
            common::milog::MiLogStream::~MiLogStream(&v59);
            return 1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v59,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "../framework/common/minet/aserver/include/aserver_mgr.hpp",
            "init",
            114);
          common::milog::MiLogStream::operator()(&v59, "thread_num must between %d and %d.", 1LL, 16LL);
          common::milog::MiLogStream::~MiLogStream(&v59);
          return 1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aserver/include/aserver_mgr.hpp",
          "init",
          109);
        common::milog::MiLogStream::operator()(&v59, "recv_buf_len(KB) must between %d and %d.", 10LL, 2048LL);
        common::milog::MiLogStream::~MiLogStream(&v59);
        return 1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v59,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "../framework/common/minet/aserver/include/aserver_mgr.hpp",
        "init",
        104);
      v39 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              &v59,
              (const char (*)[21])"invalid listen port:");
      common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v39, &this->listen_port_);
      common::milog::MiLogStream::~MiLogStream(&v59);
      return 1;
    }
  }
};

// Line 79: range 000000000C6AC058-000000000C6AD509
int32_t __cdecl common::minet::AServerMgr<HttpSession>::init(
        common::minet::AServerMgr<HttpSession> *const this,
        const common::tools::PTree *pt)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  unsigned __int16 v5; // dx
  common::milog::MiLogStream *v6; // rsi
  unsigned int v7; // ecx
  char v8; // dl
  unsigned int recv_buf_len; // ebx
  std::string *p_path; // rsi
  unsigned int v11; // edx
  char v12; // al
  unsigned __int16 v13; // dx
  unsigned __int16 v14; // cx
  unsigned __int16 v15; // cx
  unsigned __int16 v16; // cx
  common::milog::MiLogStream *v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rdx
  char v20; // al
  bool v21; // cl
  char v22; // dl
  std::string *v23; // rsi
  __int64 v24; // rdx
  bool v25; // cl
  char v26; // dl
  std::string *v27; // rsi
  __int64 v28; // rdx
  std::string *v29; // rsi
  unsigned int v30; // ecx
  char v31; // dl
  bool v32; // cl
  char v33; // dl
  std::string *v34; // rsi
  __int64 v35; // rdx
  std::string *v36; // rsi
  unsigned int v37; // edx
  char v38; // al
  common::milog::MiLogStream *v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 backlog_num; // r9
  _BOOL8 is_cut_packet; // r8
  void *max_conn_num; // rdi
  __int64 timeout_sec; // rsi
  unsigned int keep_alive_sec; // r11d
  unsigned int thread_num; // r10d
  __int64 v48; // rcx
  std::allocator<char> __a; // [rsp+17h] [rbp-F9h] BYREF
  std::string path; // [rsp+20h] [rbp-F0h] BYREF
  std::string v54; // [rsp+40h] [rbp-D0h] BYREF
  std::string v55; // [rsp+60h] [rbp-B0h] BYREF
  std::string v56; // [rsp+80h] [rbp-90h] BYREF
  std::string v57; // [rsp+A0h] [rbp-70h] BYREF
  std::string v58; // [rsp+C0h] [rbp-50h] BYREF
  common::milog::MiLogStream v59; // [rsp+E0h] [rbp-30h] BYREF

  if ( std::atomic<common::minet::AServerMgr<HttpSession>::Status>::operator common::minet::AServerMgr<HttpSession>::Status(&this->status_) )
  {
    common::milog::MiLogStream::create(
      &v59,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "init",
      83);
    v2 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v59, (const char (*)[19])"server_mgr status=");
    v3 = common::milog::MiLogStream::operator<<<std::atomic<common::minet::AServerMgr<HttpSession>::Status>,(std::atomic<common::minet::AServerMgr<HttpSession>::Status>*)0>(
           v2,
           &this->status_);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v3, (const char (*)[22])", do not init it now.");
    common::milog::MiLogStream::~MiLogStream(&v59);
    return -1;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v59, "ListenPort.<xmlattr>.value", &__a);
    v5 = common::tools::PTree::get<unsigned short>(pt, (const std::string *)&v59);
    if ( *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) <= 1 )
    {
      __asan_report_store2(&this->listen_port_);
    }
    this->listen_port_ = v5;
    std::string::~string(&v59);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v59, "RecvBufLen.<xmlattr>.value", &__a);
    v6 = &v59;
    v7 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)&v59);
    v8 = *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000);
    if ( v8 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v8 )
    {
      LOBYTE(v6) = v8 != 0;
      __asan_report_store4(&this->recv_buf_len_, v6);
    }
    this->recv_buf_len_ = v7;
    std::string::~string(&v59);
    std::allocator<char>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->recv_buf_len_);
    }
    recv_buf_len = this->recv_buf_len_;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&path, "MaxSendPacketLen.<xmlattr>.value", &__a);
    p_path = &path;
    v11 = common::tools::PTree::get<unsigned int>(pt, &path, recv_buf_len);
    v12 = *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000);
    if ( v12 != 0 && v12 <= 3 )
    {
      LOBYTE(p_path) = v12 != 0;
      __asan_report_store4(&this->max_send_packet_len_, p_path);
    }
    this->max_send_packet_len_ = v11;
    std::string::~string(&path);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v59, "ThreadNum.<xmlattr>.value", &__a);
    v13 = common::tools::PTree::get<unsigned short>(pt, (const std::string *)&v59);
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 1 )
    {
      __asan_report_store2(&this->thread_num_);
    }
    this->thread_num_ = v13;
    std::string::~string(&v59);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v59, "TimeoutSec.<xmlattr>.value", &__a);
    v14 = common::tools::PTree::get<unsigned short>(pt, (const std::string *)&v59);
    if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 106) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store2(&this->timeout_sec_);
    }
    this->timeout_sec_ = v14;
    std::string::~string(&v59);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v59, "KeepAliveSec.<xmlattr>.value", &__a);
    v15 = common::tools::PTree::get<unsigned short>(pt, (const std::string *)&v59);
    if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 108) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store2(&this->keep_alive_sec_);
    }
    this->keep_alive_sec_ = v15;
    std::string::~string(&v59);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v59, "MaxConnNum.<xmlattr>.value", &__a);
    v16 = common::tools::PTree::get<unsigned short>(pt, (const std::string *)&v59);
    if ( *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 110) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store2(&this->max_conn_num_);
    }
    this->max_conn_num_ = v16;
    std::string::~string(&v59);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v59, "CutPacket.<xmlattr>.value", &__a);
    v17 = &v59;
    LOBYTE(v18) = common::tools::PTree::get<bool>(pt, (const std::string *)&v59);
    v19 = v18;
    v20 = *(_BYTE *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000);
    if ( v20 < 0 )
    {
      LOBYTE(v17) = v20 != 0;
      __asan_report_store1(&this->is_cut_packet_, v17, v19);
    }
    this->is_cut_packet_ = v19;
    std::string::~string(&v59);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v54, "NoDelay.<xmlattr>.value", &__a);
    v23 = &v54;
    v21 = common::tools::PTree::get<bool>(pt, &v54, 0);
    v22 = *(_BYTE *)(((unsigned __int64)&this->is_no_delay_ >> 3) + 0x7FFF8000);
    LOBYTE(v23) = v22 != 0;
    v24 = (v22 != 0) & (unsigned __int8)((((unsigned __int8)this + 113) & 7) >= v22);
    if ( (_BYTE)v24 )
      __asan_report_store1(&this->is_no_delay_, v23, v24);
    this->is_no_delay_ = v21;
    std::string::~string(&v54);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v55, "AsyncSend.<xmlattr>.value", &__a);
    v27 = &v55;
    v25 = common::tools::PTree::get<bool>(pt, &v55, 0);
    v26 = *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000);
    LOBYTE(v27) = v26 != 0;
    v28 = (v26 != 0) & (unsigned __int8)((((unsigned __int8)this + 114) & 7) >= v26);
    if ( (_BYTE)v28 )
      __asan_report_store1(&this->is_async_send_, v27, v28);
    this->is_async_send_ = v25;
    std::string::~string(&v55);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v56, "AsyncSend.<xmlattr>.CachePacketMaxNum", &__a);
    v29 = &v56;
    v30 = common::tools::PTree::get<unsigned int>(pt, &v56, 0xC8u);
    v31 = *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000);
    if ( v31 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v31 )
    {
      LOBYTE(v29) = v31 != 0;
      __asan_report_store4(&this->cache_packet_max_num_, v29);
    }
    this->cache_packet_max_num_ = v30;
    std::string::~string(&v56);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v57, "PlayerServer.<xmlattr>.value", &__a);
    v34 = &v57;
    v32 = common::tools::PTree::get<bool>(pt, &v57, 0);
    v33 = *(_BYTE *)(((unsigned __int64)&this->is_player_session_ >> 3) + 0x7FFF8000);
    LOBYTE(v34) = v33 != 0;
    v35 = (v33 != 0) & (unsigned __int8)((((unsigned __int8)this + 124) & 7) >= v33);
    if ( (_BYTE)v35 )
      __asan_report_store1(&this->is_player_session_, v34, v35);
    this->is_player_session_ = v32;
    std::string::~string(&v57);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v58, "Backlog.<xmlattr>.value", &__a);
    v36 = &v58;
    v37 = common::tools::PTree::get<unsigned int>(pt, &v58, 0x800u);
    v38 = *(_BYTE *)(((unsigned __int64)&this->backlog_num_ >> 3) + 0x7FFF8000);
    if ( v38 != 0 && v38 <= 3 )
    {
      LOBYTE(v36) = v38 != 0;
      __asan_report_store4(&this->backlog_num_, v36);
    }
    this->backlog_num_ = v37;
    std::string::~string(&v58);
    std::allocator<char>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) <= 1 )
    {
      __asan_report_load2(&this->listen_port_);
    }
    if ( this->listen_port_ > 0x63u )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->recv_buf_len_);
      }
      if ( this->recv_buf_len_ > 9 && this->recv_buf_len_ <= 0x800 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 1 )
        {
          __asan_report_load2(&this->thread_num_);
        }
        if ( this->thread_num_ && this->thread_num_ <= 0x10u )
        {
          v40 = ((_BYTE)this + 114) & 7;
          v41 = (*(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v40 >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000));
          if ( (_BYTE)v41 )
            __asan_report_load1(&this->is_async_send_, v40, v41);
          if ( !this->is_async_send_ )
            goto LABEL_52;
          if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&this->cache_packet_max_num_);
          }
          if ( this->cache_packet_max_num_ )
          {
LABEL_52:
            if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&this->recv_buf_len_);
            }
            this->recv_buf_len_ <<= 10;
            if ( *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->max_send_packet_len_);
            }
            this->max_send_packet_len_ <<= 10;
            common::tools::MemPool::setMemLen(&this->recv_buf_pool_, this->recv_buf_len_);
            common::milog::MiLogStream::create(
              &v59,
              &common::milog::MiLogDefault::default_log_obj_,
              2u,
              "../framework/common/minet/aserver/include/aserver_mgr.hpp",
              "init",
              133);
            if ( *(_BYTE *)(((unsigned __int64)&this->backlog_num_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->backlog_num_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->backlog_num_);
            }
            backlog_num = this->backlog_num_;
            if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(
                &this->is_cut_packet_,
                &common::milog::MiLogDefault::default_log_obj_,
                &this->is_cut_packet_);
            is_cut_packet = this->is_cut_packet_;
            if ( *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 110) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load2(&this->max_conn_num_);
            }
            max_conn_num = (void *)this->max_conn_num_;
            if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 106) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              max_conn_num = &this->timeout_sec_;
              __asan_report_load2(&this->timeout_sec_);
            }
            timeout_sec = this->timeout_sec_;
            if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 108) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              max_conn_num = &this->keep_alive_sec_;
              __asan_report_load2(&this->keep_alive_sec_);
            }
            keep_alive_sec = this->keep_alive_sec_;
            if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 1 )
            {
              max_conn_num = &this->thread_num_;
              __asan_report_load2(&this->thread_num_);
            }
            thread_num = this->thread_num_;
            if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              max_conn_num = &this->recv_buf_len_;
              __asan_report_load4(&this->recv_buf_len_);
            }
            v48 = this->recv_buf_len_;
            if ( *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) <= 1 )
            {
              max_conn_num = &this->listen_port_;
              __asan_report_load2(&this->listen_port_);
            }
            common::milog::MiLogStream::operator()(
              &v59,
              "aserver init succ with listen_port=%u, recv_buf_len=%u, thread_num=%u, keep_alive_sec=%u, timeout_sec=%u, "
              "max_conn_num=%u, is_cut_packet=%d, backlog_num=%d",
              this->listen_port_,
              v48,
              thread_num,
              keep_alive_sec,
              timeout_sec,
              max_conn_num,
              is_cut_packet,
              backlog_num);
            common::milog::MiLogStream::~MiLogStream(&v59);
            std::atomic<common::minet::AServerMgr<HttpSession>::Status>::operator=(&this->status_, STATUS_INIT_1);
            return 0;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v59,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "../framework/common/minet/aserver/include/aserver_mgr.hpp",
              "init",
              121);
            common::milog::MiLogStream::operator()(&v59, "is_async_send_ is true, cache_packet_max_num_ must > 0!");
            common::milog::MiLogStream::~MiLogStream(&v59);
            return 1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v59,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "../framework/common/minet/aserver/include/aserver_mgr.hpp",
            "init",
            114);
          common::milog::MiLogStream::operator()(&v59, "thread_num must between %d and %d.", 1LL, 16LL);
          common::milog::MiLogStream::~MiLogStream(&v59);
          return 1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aserver/include/aserver_mgr.hpp",
          "init",
          109);
        common::milog::MiLogStream::operator()(&v59, "recv_buf_len(KB) must between %d and %d.", 10LL, 2048LL);
        common::milog::MiLogStream::~MiLogStream(&v59);
        return 1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v59,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "../framework/common/minet/aserver/include/aserver_mgr.hpp",
        "init",
        104);
      v39 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              &v59,
              (const char (*)[21])"invalid listen port:");
      common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v39, &this->listen_port_);
      common::milog::MiLogStream::~MiLogStream(&v59);
      return 1;
    }
  }
};

// Line 154: range 000000000C6AA45E-000000000C6AA7B3
int32_t __cdecl common::minet::AServerMgr<GateserverSession>::start(
        common::minet::AServerMgr<GateserverSession> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  uint16_t idx; // [rsp+2Eh] [rbp-C2h]
  boost::asio::io_context::strand s; // [rsp+30h] [rbp-C0h] BYREF
  boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > function; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v10; // [rsp+60h] [rbp-90h] BYREF
  char v11[112]; // [rsp+80h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 14 spawn_attr:165";
  *(_QWORD *)(v1 + 16) = common::minet::AServerMgr<GateserverSession>::start;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( std::atomic<common::minet::AServerMgr<GateserverSession>::Status>::operator common::minet::AServerMgr<GateserverSession>::Status(&this->status_) == STATUS_INIT )
  {
    std::atomic<common::minet::AServerMgr<GateserverSession>::Status>::operator=(&this->status_, STATUS_START);
    boost::context::basic_fixedsize_stack<boost::context::stack_traits>::basic_fixedsize_stack(
      (boost::context::basic_fixedsize_stack<boost::context::stack_traits> *const)(v1 + 32),
      0x4B4000uLL);
    boost::bind<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,common::minet::AServerMgr<GateserverSession>*,boost::arg<1>>(
      &function,
      (int (*)(common::minet::AServerMgr<GateserverSession> *, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >))common::minet::AServerMgr<GateserverSession>::listenCoroutine,
      0LL,
      (boost::arg<1>)this);
    boost::asio::io_context::strand::strand(&s, this->ioc_arr_);
    boost::asio::spawn<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>(
      &s,
      &function,
      (const boost::context::basic_fixedsize_stack<boost::context::stack_traits> *)(v1 + 32));
    boost::asio::io_context::strand::~strand(&s);
    for ( idx = 0; ; ++idx )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 1 )
      {
        __asan_report_load2(&this->thread_num_);
      }
      if ( idx >= this->thread_num_ )
        break;
      boost::bind<void,common::minet::AServerMgr<GateserverSession>,unsigned short,common::minet::AServerMgr<GateserverSession>*,unsigned short>(
        (boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > > *)&v10,
        (void (*)(common::minet::AServerMgr<GateserverSession> *, unsigned __int16))common::minet::AServerMgr<GateserverSession>::iosThreadHandler,
        0LL,
        (unsigned __int16)this);
      boost::thread_group::create_thread<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<unsigned short>>>>(
        &this->ios_thread_group_,
        (boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > >)v10);
    }
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "start",
      158);
    v4 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v10, (const char (*)[19])"server_mgr status=");
    v5 = common::milog::MiLogStream::operator<<<std::atomic<common::minet::AServerMgr<GateserverSession>::Status>,(std::atomic<common::minet::AServerMgr<GateserverSession>::Status>*)0>(
           v4,
           &this->status_);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v5, (const char (*)[21])", can not start now.");
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 1;
  }
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 154: range 000000000C6AD50A-000000000C6AD85F
int32_t __cdecl common::minet::AServerMgr<HttpSession>::start(common::minet::AServerMgr<HttpSession> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  uint16_t idx; // [rsp+2Eh] [rbp-C2h]
  boost::asio::io_context::strand s; // [rsp+30h] [rbp-C0h] BYREF
  boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > function; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v10; // [rsp+60h] [rbp-90h] BYREF
  char v11[112]; // [rsp+80h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 14 spawn_attr:165";
  *(_QWORD *)(v1 + 16) = common::minet::AServerMgr<HttpSession>::start;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( std::atomic<common::minet::AServerMgr<HttpSession>::Status>::operator common::minet::AServerMgr<HttpSession>::Status(&this->status_) == STATUS_INIT_1 )
  {
    std::atomic<common::minet::AServerMgr<HttpSession>::Status>::operator=(&this->status_, STATUS_START_1);
    boost::context::basic_fixedsize_stack<boost::context::stack_traits>::basic_fixedsize_stack(
      (boost::context::basic_fixedsize_stack<boost::context::stack_traits> *const)(v1 + 32),
      0x4B4000uLL);
    boost::bind<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,common::minet::AServerMgr<HttpSession>*,boost::arg<1>>(
      &function,
      (int (*)(common::minet::AServerMgr<HttpSession> *, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >))common::minet::AServerMgr<HttpSession>::listenCoroutine,
      0LL,
      (boost::arg<1>)this);
    boost::asio::io_context::strand::strand(&s, this->ioc_arr_);
    boost::asio::spawn<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>(
      &s,
      &function,
      (const boost::context::basic_fixedsize_stack<boost::context::stack_traits> *)(v1 + 32));
    boost::asio::io_context::strand::~strand(&s);
    for ( idx = 0; ; ++idx )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 1 )
      {
        __asan_report_load2(&this->thread_num_);
      }
      if ( idx >= this->thread_num_ )
        break;
      boost::bind<void,common::minet::AServerMgr<HttpSession>,unsigned short,common::minet::AServerMgr<HttpSession>*,unsigned short>(
        (boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > > *)&v10,
        (void (*)(common::minet::AServerMgr<HttpSession> *, unsigned __int16))common::minet::AServerMgr<HttpSession>::iosThreadHandler,
        0LL,
        (unsigned __int16)this);
      boost::thread_group::create_thread<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<unsigned short>>>>(
        &this->ios_thread_group_,
        (boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > >)v10);
    }
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "start",
      158);
    v4 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v10, (const char (*)[19])"server_mgr status=");
    v5 = common::milog::MiLogStream::operator<<<std::atomic<common::minet::AServerMgr<HttpSession>::Status>,(std::atomic<common::minet::AServerMgr<HttpSession>::Status>*)0>(
           v4,
           &this->status_);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v5, (const char (*)[21])", can not start now.");
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 1;
  }
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 180: range 000000000C6AA7B4-000000000C6AAB68
int32_t __cdecl common::minet::AServerMgr<GateserverSession>::nonBlockStop(
        common::minet::AServerMgr<GateserverSession> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession> >,false,false>::pointer v4; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession> >,false,false>::pointer v5; // rax
  std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  int32_t result; // eax
  common::minet::AServerMgr<GateserverSession>::Status last_status; // [rsp+1Ch] [rbp-B4h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<GateserverSession> >,false> __y; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-A0h] BYREF
  char v11[128]; // [rsp+50h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 8 lock:199 64 8 6 it:200";
  *(_QWORD *)(v1 + 16) = common::minet::AServerMgr<GateserverSession>::nonBlockStop;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202116352;
  last_status = std::atomic<common::minet::AServerMgr<GateserverSession>::Status>::operator common::minet::AServerMgr<GateserverSession>::Status(&this->status_);
  std::atomic<common::minet::AServerMgr<GateserverSession>::Status>::operator=(&this->status_, STATUS_STOPPING);
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "../framework/common/minet/aserver/include/aserver_mgr.hpp",
    "nonBlockStop",
    187);
  common::milog::MiLogStream::operator()(&v10, "start to stop server.");
  common::milog::MiLogStream::~MiLogStream(&v10);
  if ( last_status == STATUS_START )
  {
    boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::cancel(&this->acceptor_);
    std::lock_guard<std::recursive_mutex>::lock_guard(
      (std::lock_guard<std::recursive_mutex> *const)(v1 + 32),
      &this->session_mgr_mu_);
    *(std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::iterator *)(v1 + 64) = std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::begin(&this->session_map_);
    while ( 1 )
    {
      __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::end(&this->session_map_)._M_cur;
      if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<GateserverSession>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<GateserverSession> >,false> *)(v1 + 64),
              &__y) )
        break;
      v4 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession> >,false,false> *const)(v1 + 64));
      if ( std::__shared_ptr<GateserverSession,(__gnu_cxx::_Lock_policy)2>::operator bool(&v4->second) )
      {
        v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession> >,false,false> *const)(v1 + 64));
        v6 = std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5->second);
        common::minet::AServerSession::stop(v6);
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession>>,false,false>::operator++(
        (std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession> >,false,false> *const)(v1 + 64),
        0);
    }
    std::lock_guard<std::recursive_mutex>::~lock_guard((std::lock_guard<std::recursive_mutex> *const)(v1 + 32));
  }
  result = 0;
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 180: range 000000000C6AD860-000000000C6ADC14
int32_t __cdecl common::minet::AServerMgr<HttpSession>::nonBlockStop(
        common::minet::AServerMgr<HttpSession> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession> >,false,false>::pointer v4; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession> >,false,false>::pointer v5; // rax
  std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  int32_t result; // eax
  common::minet::AServerMgr<HttpSession>::Status last_status; // [rsp+1Ch] [rbp-B4h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<HttpSession> >,false> __y; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-A0h] BYREF
  char v11[128]; // [rsp+50h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 8 lock:199 64 8 6 it:200";
  *(_QWORD *)(v1 + 16) = common::minet::AServerMgr<HttpSession>::nonBlockStop;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202116352;
  last_status = std::atomic<common::minet::AServerMgr<HttpSession>::Status>::operator common::minet::AServerMgr<HttpSession>::Status(&this->status_);
  std::atomic<common::minet::AServerMgr<HttpSession>::Status>::operator=(&this->status_, STATUS_STOPPING_1);
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "../framework/common/minet/aserver/include/aserver_mgr.hpp",
    "nonBlockStop",
    187);
  common::milog::MiLogStream::operator()(&v10, "start to stop server.");
  common::milog::MiLogStream::~MiLogStream(&v10);
  if ( last_status == STATUS_START_1 )
  {
    boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::cancel(&this->acceptor_);
    std::lock_guard<std::recursive_mutex>::lock_guard(
      (std::lock_guard<std::recursive_mutex> *const)(v1 + 32),
      &this->session_mgr_mu_);
    *(std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::iterator *)(v1 + 64) = std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::begin(&this->session_map_);
    while ( 1 )
    {
      __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::end(&this->session_map_)._M_cur;
      if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<HttpSession>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<HttpSession> >,false> *)(v1 + 64),
              &__y) )
        break;
      v4 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession> >,false,false> *const)(v1 + 64));
      if ( std::__shared_ptr<HttpSession,(__gnu_cxx::_Lock_policy)2>::operator bool(&v4->second) )
      {
        v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession> >,false,false> *const)(v1 + 64));
        v6 = std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5->second);
        common::minet::AServerSession::stop(v6);
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession>>,false,false>::operator++(
        (std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession> >,false,false> *const)(v1 + 64),
        0);
    }
    std::lock_guard<std::recursive_mutex>::~lock_guard((std::lock_guard<std::recursive_mutex> *const)(v1 + 32));
  }
  result = 0;
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 214: range 000000000C6AAB6A-000000000C6AAECB
int32_t __cdecl common::minet::AServerMgr<GateserverSession>::join(
        common::minet::AServerMgr<GateserverSession> *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  unsigned __int64 v4; // rax
  char v5; // al
  std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::size_type v6; // rax
  uint16_t idx; // [rsp+1Ah] [rbp-36h]
  uint32_t connected_num; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  if ( std::atomic<common::minet::AServerMgr<GateserverSession>::Status>::operator common::minet::AServerMgr<GateserverSession>::Status(&this->status_) == STATUS_STOPPING )
  {
    connected_num = 0;
    while ( 1 )
    {
      if ( boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::is_open(&this->acceptor_) )
        goto LABEL_10;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v4 = (unsigned __int64)(this->_vptr_AServerBase + 12);
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        v4 = __asan_report_load8(this->_vptr_AServerBase + 12);
      connected_num = (*(__int64 (__fastcall **)(common::minet::AServerMgr<GateserverSession> *const))v4)(this);
      if ( connected_num )
LABEL_10:
        v5 = 1;
      else
        v5 = 0;
      if ( !v5 )
        break;
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "../framework/common/minet/aserver/include/aserver_mgr.hpp",
        "join",
        226);
      v6 = std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::size(&this->session_map_);
      common::milog::MiLogStream::operator()(
        &v9,
        "wait for %u start session close, total session: %lu",
        connected_num,
        v6);
      common::milog::MiLogStream::~MiLogStream(&v9);
      sleep(1u);
    }
    std::atomic<common::minet::AServerMgr<GateserverSession>::Status>::operator=(&this->status_, STATUS_STOPPED);
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "join",
      233);
    common::milog::MiLogStream::operator()(&v9, "all session closed, wait for server thread exit ...");
    common::milog::MiLogStream::~MiLogStream(&v9);
    for ( idx = 0; ; ++idx )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 1 )
      {
        __asan_report_load2(&this->thread_num_);
      }
      if ( idx >= this->thread_num_ )
        break;
      boost::asio::io_context::stop(&this->ioc_arr_[idx]);
    }
    boost::thread_group::join_all(&this->ios_thread_group_);
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "join",
      240);
    common::milog::MiLogStream::operator()(&v9, "server stop succ.");
    common::milog::MiLogStream::~MiLogStream(&v9);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "join",
      218);
    v1 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v9, (const char (*)[19])"server_mgr status=");
    v2 = common::milog::MiLogStream::operator<<<std::atomic<common::minet::AServerMgr<GateserverSession>::Status>,(std::atomic<common::minet::AServerMgr<GateserverSession>::Status>*)0>(
           v1,
           &this->status_);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v2, (const char (*)[20])", can not join now.");
    common::milog::MiLogStream::~MiLogStream(&v9);
    return 1;
  }
};

// Line 214: range 000000000C6ADC16-000000000C6ADF77
int32_t __cdecl common::minet::AServerMgr<HttpSession>::join(common::minet::AServerMgr<HttpSession> *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  unsigned __int64 v4; // rax
  char v5; // al
  std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::size_type v6; // rax
  uint16_t idx; // [rsp+1Ah] [rbp-36h]
  uint32_t connected_num; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  if ( std::atomic<common::minet::AServerMgr<HttpSession>::Status>::operator common::minet::AServerMgr<HttpSession>::Status(&this->status_) == STATUS_STOPPING_1 )
  {
    connected_num = 0;
    while ( 1 )
    {
      if ( boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::is_open(&this->acceptor_) )
        goto LABEL_10;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v4 = (unsigned __int64)(this->_vptr_AServerBase + 12);
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        v4 = __asan_report_load8(this->_vptr_AServerBase + 12);
      connected_num = (*(__int64 (__fastcall **)(common::minet::AServerMgr<HttpSession> *const))v4)(this);
      if ( connected_num )
LABEL_10:
        v5 = 1;
      else
        v5 = 0;
      if ( !v5 )
        break;
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "../framework/common/minet/aserver/include/aserver_mgr.hpp",
        "join",
        226);
      v6 = std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::size(&this->session_map_);
      common::milog::MiLogStream::operator()(
        &v9,
        "wait for %u start session close, total session: %lu",
        connected_num,
        v6);
      common::milog::MiLogStream::~MiLogStream(&v9);
      sleep(1u);
    }
    std::atomic<common::minet::AServerMgr<HttpSession>::Status>::operator=(&this->status_, STATUS_STOPPED_0);
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "join",
      233);
    common::milog::MiLogStream::operator()(&v9, "all session closed, wait for server thread exit ...");
    common::milog::MiLogStream::~MiLogStream(&v9);
    for ( idx = 0; ; ++idx )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 1 )
      {
        __asan_report_load2(&this->thread_num_);
      }
      if ( idx >= this->thread_num_ )
        break;
      boost::asio::io_context::stop(&this->ioc_arr_[idx]);
    }
    boost::thread_group::join_all(&this->ios_thread_group_);
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "join",
      240);
    common::milog::MiLogStream::operator()(&v9, "server stop succ.");
    common::milog::MiLogStream::~MiLogStream(&v9);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "join",
      218);
    v1 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v9, (const char (*)[19])"server_mgr status=");
    v2 = common::milog::MiLogStream::operator<<<std::atomic<common::minet::AServerMgr<HttpSession>::Status>,(std::atomic<common::minet::AServerMgr<HttpSession>::Status>*)0>(
           v1,
           &this->status_);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v2, (const char (*)[20])", can not join now.");
    common::milog::MiLogStream::~MiLogStream(&v9);
    return 1;
  }
};

// Line 245: range 000000000C6AB54E-000000000C6AB643
uint32_t __cdecl common::minet::AServerMgr<GateserverSession>::getConnectNum(
        common::minet::AServerMgr<GateserverSession> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t v4; // r15d
  uint32_t result; // eax
  char v6[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 8 lock:247";
  *(_QWORD *)(v1 + 16) = common::minet::AServerMgr<GateserverSession>::getConnectNum;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  std::lock_guard<std::recursive_mutex>::lock_guard(
    (std::lock_guard<std::recursive_mutex> *const)(v1 + 32),
    &this->session_mgr_mu_);
  v4 = std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::size(&this->session_map_);
  std::lock_guard<std::recursive_mutex>::~lock_guard((std::lock_guard<std::recursive_mutex> *const)(v1 + 32));
  result = v4;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 245: range 000000000C6AE5FA-000000000C6AE6EF
uint32_t __cdecl common::minet::AServerMgr<HttpSession>::getConnectNum(
        common::minet::AServerMgr<HttpSession> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t v4; // r15d
  uint32_t result; // eax
  char v6[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 8 lock:247";
  *(_QWORD *)(v1 + 16) = common::minet::AServerMgr<HttpSession>::getConnectNum;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  std::lock_guard<std::recursive_mutex>::lock_guard(
    (std::lock_guard<std::recursive_mutex> *const)(v1 + 32),
    &this->session_mgr_mu_);
  v4 = std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::size(&this->session_map_);
  std::lock_guard<std::recursive_mutex>::~lock_guard((std::lock_guard<std::recursive_mutex> *const)(v1 + 32));
  result = v4;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 252: range 000000000C6AB644-000000000C6AB824
uint32_t __cdecl common::minet::AServerMgr<GateserverSession>::getValidConnectNum(
        common::minet::AServerMgr<GateserverSession> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession> >,false,false>::pointer v4; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession> >,false,false>::pointer v5; // rax
  std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t result; // eax
  uint32_t num; // [rsp+14h] [rbp-9Ch]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<GateserverSession> >,false> __y; // [rsp+18h] [rbp-98h] BYREF
  char v11[144]; // [rsp+20h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 8 lock:255 64 8 6 it:256";
  *(_QWORD *)(v1 + 16) = common::minet::AServerMgr<GateserverSession>::getValidConnectNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202116352;
  num = 0;
  std::lock_guard<std::recursive_mutex>::lock_guard(
    (std::lock_guard<std::recursive_mutex> *const)(v1 + 32),
    &this->session_mgr_mu_);
  *(std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::iterator *)(v1 + 64) = std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::begin(&this->session_map_);
  while ( 1 )
  {
    __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::end(&this->session_map_)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<GateserverSession>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<GateserverSession> >,false> *)(v1 + 64),
            &__y) )
      break;
    v4 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession> >,false,false> *const)(v1 + 64));
    if ( std::__shared_ptr<GateserverSession,(__gnu_cxx::_Lock_policy)2>::operator bool(&v4->second) )
    {
      v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession> >,false,false> *const)(v1 + 64));
      v6 = std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5->second);
      if ( common::minet::AServerSession::isConnected(v6) )
        ++num;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession>>,false,false>::operator++(
      (std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession> >,false,false> *const)(v1 + 64),
      0);
  }
  std::lock_guard<std::recursive_mutex>::~lock_guard((std::lock_guard<std::recursive_mutex> *const)(v1 + 32));
  result = num;
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 252: range 000000000C6AE6F0-000000000C6AE8D0
uint32_t __cdecl common::minet::AServerMgr<HttpSession>::getValidConnectNum(
        common::minet::AServerMgr<HttpSession> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession> >,false,false>::pointer v4; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession> >,false,false>::pointer v5; // rax
  std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t result; // eax
  uint32_t num; // [rsp+14h] [rbp-9Ch]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<HttpSession> >,false> __y; // [rsp+18h] [rbp-98h] BYREF
  char v11[144]; // [rsp+20h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 8 lock:255 64 8 6 it:256";
  *(_QWORD *)(v1 + 16) = common::minet::AServerMgr<HttpSession>::getValidConnectNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202116352;
  num = 0;
  std::lock_guard<std::recursive_mutex>::lock_guard(
    (std::lock_guard<std::recursive_mutex> *const)(v1 + 32),
    &this->session_mgr_mu_);
  *(std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::iterator *)(v1 + 64) = std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::begin(&this->session_map_);
  while ( 1 )
  {
    __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::end(&this->session_map_)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<HttpSession>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<HttpSession> >,false> *)(v1 + 64),
            &__y) )
      break;
    v4 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession> >,false,false> *const)(v1 + 64));
    if ( std::__shared_ptr<HttpSession,(__gnu_cxx::_Lock_policy)2>::operator bool(&v4->second) )
    {
      v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession> >,false,false> *const)(v1 + 64));
      v6 = std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5->second);
      if ( common::minet::AServerSession::isConnected(v6) )
        ++num;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession>>,false,false>::operator++(
      (std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession> >,false,false> *const)(v1 + 64),
      0);
  }
  std::lock_guard<std::recursive_mutex>::~lock_guard((std::lock_guard<std::recursive_mutex> *const)(v1 + 32));
  result = num;
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 268: range 000000000C6AAECC-000000000C6AAF99
int32_t __cdecl common::minet::AServerMgr<GateserverSession>::blockStop(
        common::minet::AServerMgr<GateserverSession> *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v1 = (unsigned __int64)(this->_vptr_AServerBase + 3);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(this->_vptr_AServerBase + 3);
  if ( (*(unsigned int (__fastcall **)(common::minet::AServerMgr<GateserverSession> *const))v1)(this) )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v3 = (unsigned __int64)(this->_vptr_AServerBase + 4);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(this->_vptr_AServerBase + 4);
  return (*(__int64 (__fastcall **)(common::minet::AServerMgr<GateserverSession> *const))v3)(this);
};

// Line 268: range 000000000C6ADF78-000000000C6AE045
int32_t __cdecl common::minet::AServerMgr<HttpSession>::blockStop(common::minet::AServerMgr<HttpSession> *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v1 = (unsigned __int64)(this->_vptr_AServerBase + 3);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(this->_vptr_AServerBase + 3);
  if ( (*(unsigned int (__fastcall **)(common::minet::AServerMgr<HttpSession> *const))v1)(this) )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v3 = (unsigned __int64)(this->_vptr_AServerBase + 4);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(this->_vptr_AServerBase + 4);
  return (*(__int64 (__fastcall **)(common::minet::AServerMgr<HttpSession> *const))v3)(this);
};

// Line 283: range 000000000C6B1A26-000000000C6B2BCA
int32_t __cdecl common::minet::AServerMgr<GateserverSession>::listenCoroutine(
        common::minet::AServerMgr<GateserverSession> *const this,
        boost::asio::yield_context *p_yield)
{
  unsigned __int64 v2; // r15
  __int64 v3; // rax
  _DWORD *v4; // r14
  unsigned __int16 listen_port; // r12
  common::milog::MiLogStream *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r12
  boost::asio::ip::tcp::acceptor *p_acceptor; // rcx
  __int64 recv_buf_len; // rcx
  std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  boost::asio::ip::tcp::socket *Socket; // rax
  const char *v13; // rax
  uint32_t next_session_id; // eax
  uint32_t v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rdx
  bool is_player_session; // r11
  uint32_t cache_packet_max_num; // r10d
  __int64 v20; // rsi
  __int64 v21; // rdx
  bool is_async_send; // r9
  uint32_t max_send_packet_len; // r8d
  __int64 v24; // rsi
  __int64 v25; // rdx
  bool is_no_delay; // r13
  bool is_cut_packet; // r12
  uint16_t timeout_sec; // si
  std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::size_type max_conn_num; // r12
  std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  const char *ClientIp; // rcx
  std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  std::shared_ptr<GateserverSession> *v35; // rax
  std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::size_type v37; // r12
  std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  uint32_t SessionId; // eax
  __int64 v40; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // [rsp+8h] [rbp-1D8h]
  int val; // [rsp+2Ch] [rbp-1B4h] BYREF
  boost::asio::ip::tcp internet_protocol; // [rsp+30h] [rbp-1B0h] BYREF
  uint32_t session_id; // [rsp+34h] [rbp-1ACh]
  common::milog::MiLogStream v47; // [rsp+40h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v48; // [rsp+60h] [rbp-180h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > handler; // [rsp+80h] [rbp-160h] BYREF
  char v50[304]; // [rsp+B0h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 4 19 send_buf_option:292 48 4 19 recv_buf_option:293 64 4 15 send_option:300 80 4 15 recv_o"
                        "ption:302 96 8 8 lock:362 128 16 6 ec:312 160 16 11 session:316 192 28 12 endpoint:288";
  *(_QWORD *)(v2 + 16) = common::minet::AServerMgr<GateserverSession>::listenCoroutine;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = 0x4000000;
  v4[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&this->listen_port_);
  }
  listen_port = this->listen_port_;
  internet_protocol.family_ = boost::asio::ip::tcp::v4().family_;
  boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>::basic_endpoint(
    (boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> *const)(v2 + 192),
    &internet_protocol,
    listen_port);
  internet_protocol.family_ = boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>::protocol((const boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> *const)(v2 + 192)).family_;
  boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::open(
    &this->acceptor_,
    &internet_protocol);
  if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->recv_buf_len_);
  }
  boost::asio::detail::socket_option::integer<1,7>::integer(
    (boost::asio::detail::socket_option::integer<1,7> *const)(v2 + 32),
    this->recv_buf_len_);
  if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->recv_buf_len_);
  }
  boost::asio::detail::socket_option::integer<1,8>::integer(
    (boost::asio::detail::socket_option::integer<1,8> *const)(v2 + 48),
    this->recv_buf_len_);
  boost::asio::detail::socket_option::boolean<1,2>::boolean(
    (boost::asio::detail::socket_option::boolean<1,2> *const)&internet_protocol,
    1);
  boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::set_option<boost::asio::detail::socket_option::boolean<1,2>>(
    &this->acceptor_,
    (const boost::asio::detail::socket_option::boolean<1,2> *)&internet_protocol);
  internet_protocol.family_ = *(_DWORD *)(v2 + 32);
  boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::set_option<boost::asio::detail::socket_option::integer<1,7>>(
    &this->acceptor_,
    (const boost::asio::detail::socket_option::integer<1,7> *)&internet_protocol);
  internet_protocol.family_ = *(_DWORD *)(v2 + 48);
  boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::set_option<boost::asio::detail::socket_option::integer<1,8>>(
    &this->acceptor_,
    (const boost::asio::detail::socket_option::integer<1,8> *)&internet_protocol);
  boost::asio::detail::socket_option::integer<1,7>::integer((boost::asio::detail::socket_option::integer<1,7> *const)(v2 + 64));
  boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::get_option<boost::asio::detail::socket_option::integer<1,7>>(
    &this->acceptor_,
    (boost::asio::detail::socket_option::integer<1,7> *)(v2 + 64));
  boost::asio::detail::socket_option::integer<1,8>::integer((boost::asio::detail::socket_option::integer<1,8> *const)(v2 + 80));
  boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::get_option<boost::asio::detail::socket_option::integer<1,8>>(
    &this->acceptor_,
    (boost::asio::detail::socket_option::integer<1,8> *)(v2 + 80));
  common::milog::MiLogStream::create(
    &v48,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "../framework/common/minet/aserver/include/aserver_mgr.hpp",
    "listenCoroutine",
    304);
  v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
         &v48,
         (const char (*)[29])"acceptor: send_buffer_size: ");
  val = boost::asio::detail::socket_option::integer<1,7>::value((const boost::asio::detail::socket_option::integer<1,7> *const)(v2 + 64));
  v7 = common::milog::MiLogStream::operator<<<int,(int *)0>(v6, &val);
  v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v7, (const char (*)[23])" receive_buffer_size: ");
  internet_protocol.family_ = boost::asio::detail::socket_option::integer<1,8>::value((const boost::asio::detail::socket_option::integer<1,8> *const)(v2 + 80));
  common::milog::MiLogStream::operator<<<int,(int *)0>(v8, &internet_protocol.family_);
  common::milog::MiLogStream::~MiLogStream(&v48);
  boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::bind(
    &this->acceptor_,
    (const boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::endpoint_type *)(v2 + 192));
  p_acceptor = &this->acceptor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->backlog_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->backlog_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->backlog_num_);
  }
  boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::listen(p_acceptor, this->backlog_num_);
  common::milog::MiLogStream::create(
    &v48,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "../framework/common/minet/aserver/include/aserver_mgr.hpp",
    "listenCoroutine",
    310);
  if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->recv_buf_len_);
  }
  recv_buf_len = this->recv_buf_len_;
  if ( *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&this->listen_port_);
  }
  common::milog::MiLogStream::operator()(
    &v48,
    "bind on %u succ with socket buf_len=%u",
    this->listen_port_,
    recv_buf_len);
  common::milog::MiLogStream::~MiLogStream(&v48);
  *(_DWORD *)(v2 + 128) = 0;
  *(_BYTE *)(v2 + 132) = 0;
  *(_QWORD *)(v2 + 136) = &boost::system::detail::cat_holder<void>::system_category_instance;
  while ( std::atomic<common::minet::AServerMgr<GateserverSession>::Status>::operator common::minet::AServerMgr<GateserverSession>::Status(&this->status_) == STATUS_START )
  {
    common::minet::AServerMgr<GateserverSession>::grabSession((common::minet::AServerMgr<GateserverSession> *const)(v2 + 160));
    if ( std::operator==<GateserverSession>(0LL, (const std::shared_ptr<GateserverSession> *)(v2 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/aserver/include/aserver_mgr.hpp",
        "listenCoroutine",
        319);
      common::milog::MiLogStream::operator()(&v48, "release session failed.");
      common::milog::MiLogStream::~MiLogStream(&v48);
    }
    else
    {
      boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::operator[](
        &handler,
        p_yield,
        (boost::system::error_code *)(v2 + 128));
      v11 = std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
      Socket = common::minet::AServerSession::getSocket(v11);
      boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::async_accept<boost::asio::ip::tcp,boost::asio::executor,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
        &this->acceptor_,
        Socket,
        &handler,
        0LL);
      boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
      if ( boost::system::error_code::operator bool((const boost::system::error_code *const)(v2 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aserver/include/aserver_mgr.hpp",
          "listenCoroutine",
          327);
        boost::system::error_code::message[abi:cxx11](
          (std::string *)&v48,
          (const boost::system::error_code *const)(v2 + 128));
        v13 = (const char *)std::string::c_str(&v48);
        common::milog::MiLogStream::operator()(&v47, "accept error: %s", v13);
        std::string::~string(&v48);
        common::milog::MiLogStream::~MiLogStream(&v47);
      }
      else if ( std::atomic<common::minet::AServerMgr<GateserverSession>::Status>::operator common::minet::AServerMgr<GateserverSession>::Status(&this->status_) == STATUS_START )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->next_session_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_session_id_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&this->next_session_id_);
        }
        next_session_id = this->next_session_id_;
        this->next_session_id_ = next_session_id + 1;
        session_id = next_session_id;
        if ( !next_session_id )
        {
          v15 = this->next_session_id_;
          this->next_session_id_ = v15 + 1;
          session_id = v15;
        }
        v42 = std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        v16 = ((_BYTE)this + 124) & 7;
        v17 = (*(_BYTE *)(((unsigned __int64)&this->is_player_session_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&this->is_player_session_ >> 3) + 0x7FFF8000));
        if ( (_BYTE)v17 )
          __asan_report_load1(&this->is_player_session_, v16, v17);
        is_player_session = this->is_player_session_;
        if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cache_packet_max_num_);
        }
        cache_packet_max_num = this->cache_packet_max_num_;
        v20 = ((_BYTE)this + 114) & 7;
        v21 = (*(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000));
        if ( (_BYTE)v21 )
          __asan_report_load1(&this->is_async_send_, v20, v21);
        is_async_send = this->is_async_send_;
        if ( *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->max_send_packet_len_);
        }
        max_send_packet_len = this->max_send_packet_len_;
        v24 = ((_BYTE)this + 113) & 7;
        v25 = (*(_BYTE *)(((unsigned __int64)&this->is_no_delay_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v24 >= *(_BYTE *)(((unsigned __int64)&this->is_no_delay_ >> 3) + 0x7FFF8000));
        if ( (_BYTE)v25 )
          __asan_report_load1(&this->is_no_delay_, v24, v25);
        is_no_delay = this->is_no_delay_;
        if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->is_cut_packet_, v24, &this->is_cut_packet_);
        is_cut_packet = this->is_cut_packet_;
        if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 106) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load2(&this->timeout_sec_);
        }
        timeout_sec = this->timeout_sec_;
        if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 108) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load2(&this->keep_alive_sec_);
        }
        if ( common::minet::AServerSession::init(
               v42,
               session_id,
               this->keep_alive_sec_,
               timeout_sec,
               is_cut_packet,
               is_no_delay,
               max_send_packet_len,
               is_async_send,
               cache_packet_max_num,
               is_player_session) )
        {
          common::milog::MiLogStream::create(
            &v48,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "../framework/common/minet/aserver/include/aserver_mgr.hpp",
            "listenCoroutine",
            348);
          common::milog::MiLogStream::operator()(&v48, "init session error.");
          common::milog::MiLogStream::~MiLogStream(&v48);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 110) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load2(&this->max_conn_num_);
          }
          if ( this->max_conn_num_
            && (max_conn_num = this->max_conn_num_,
                max_conn_num <= std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::size(&this->session_map_)) )
          {
            common::milog::MiLogStream::create(
              &v48,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "../framework/common/minet/aserver/include/aserver_mgr.hpp",
              "listenCoroutine",
              355);
            v31 = std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            ClientIp = common::minet::AServerSession::getClientIp(v31);
            if ( *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 110) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load2(&this->max_conn_num_);
            }
            common::milog::MiLogStream::operator()(
              &v48,
              "connect num reach upper limit=%u, drop connect from %s",
              this->max_conn_num_,
              ClientIp);
            common::milog::MiLogStream::~MiLogStream(&v48);
            v33 = std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            common::minet::AServerSession::forceDisconnect(v33);
          }
          else
          {
            std::lock_guard<std::recursive_mutex>::lock_guard(
              (std::lock_guard<std::recursive_mutex> *const)(v2 + 96),
              &this->session_mgr_mu_);
            v34 = std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            internet_protocol.family_ = common::minet::AServerSession::getSessionId(v34);
            v35 = std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::operator[](
                    &this->session_map_,
                    (std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::key_type *)&internet_protocol);
            std::shared_ptr<GateserverSession>::operator=(v35, (const std::shared_ptr<GateserverSession> *)(v2 + 160));
            std::lock_guard<std::recursive_mutex>::~lock_guard((std::lock_guard<std::recursive_mutex> *const)(v2 + 96));
            v36 = std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            common::minet::AServerSession::start(v36);
            common::milog::MiLogStream::create(
              &v48,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "../framework/common/minet/aserver/include/aserver_mgr.hpp",
              "listenCoroutine",
              371);
            v37 = std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::size(&this->session_map_);
            v38 = std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            SessionId = common::minet::AServerSession::getSessionId(v38);
            common::milog::MiLogStream::operator()(&v48, "accept new session=%u, cur session count=%lu", SessionId, v37);
            common::milog::MiLogStream::~MiLogStream(&v48);
          }
        }
      }
    }
    std::shared_ptr<GateserverSession>::~shared_ptr((std::shared_ptr<GateserverSession> *const)(v2 + 160));
  }
  boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::close(&this->acceptor_);
  common::milog::MiLogStream::create(
    &v48,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "../framework/common/minet/aserver/include/aserver_mgr.hpp",
    "listenCoroutine",
    383);
  if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->recv_buf_len_);
  }
  v40 = this->recv_buf_len_;
  if ( *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&this->listen_port_);
  }
  common::milog::MiLogStream::operator()(&v48, "close on %u succ with socket buf_len=%u", this->listen_port_, v40);
  common::milog::MiLogStream::~MiLogStream(&v48);
  result = 0;
  if ( v50 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 283: range 000000000C6B4D04-000000000C6B5EA8
int32_t __cdecl common::minet::AServerMgr<HttpSession>::listenCoroutine(
        common::minet::AServerMgr<HttpSession> *const this,
        boost::asio::yield_context *p_yield)
{
  unsigned __int64 v2; // r15
  __int64 v3; // rax
  _DWORD *v4; // r14
  unsigned __int16 listen_port; // r12
  common::milog::MiLogStream *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r12
  boost::asio::ip::tcp::acceptor *p_acceptor; // rcx
  __int64 recv_buf_len; // rcx
  std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  boost::asio::ip::tcp::socket *Socket; // rax
  const char *v13; // rax
  uint32_t next_session_id; // eax
  uint32_t v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rdx
  bool is_player_session; // r11
  uint32_t cache_packet_max_num; // r10d
  __int64 v20; // rsi
  __int64 v21; // rdx
  bool is_async_send; // r9
  uint32_t max_send_packet_len; // r8d
  __int64 v24; // rsi
  __int64 v25; // rdx
  bool is_no_delay; // r13
  bool is_cut_packet; // r12
  uint16_t timeout_sec; // si
  std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::size_type max_conn_num; // r12
  std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  const char *ClientIp; // rcx
  std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  std::shared_ptr<HttpSession> *v35; // rax
  std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::size_type v37; // r12
  std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  uint32_t SessionId; // eax
  __int64 v40; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // [rsp+8h] [rbp-1D8h]
  int val; // [rsp+2Ch] [rbp-1B4h] BYREF
  boost::asio::ip::tcp internet_protocol; // [rsp+30h] [rbp-1B0h] BYREF
  uint32_t session_id; // [rsp+34h] [rbp-1ACh]
  common::milog::MiLogStream v47; // [rsp+40h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v48; // [rsp+60h] [rbp-180h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > handler; // [rsp+80h] [rbp-160h] BYREF
  char v50[304]; // [rsp+B0h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 4 19 send_buf_option:292 48 4 19 recv_buf_option:293 64 4 15 send_option:300 80 4 15 recv_o"
                        "ption:302 96 8 8 lock:362 128 16 6 ec:312 160 16 11 session:316 192 28 12 endpoint:288";
  *(_QWORD *)(v2 + 16) = common::minet::AServerMgr<HttpSession>::listenCoroutine;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = 0x4000000;
  v4[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&this->listen_port_);
  }
  listen_port = this->listen_port_;
  internet_protocol.family_ = boost::asio::ip::tcp::v4().family_;
  boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>::basic_endpoint(
    (boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> *const)(v2 + 192),
    &internet_protocol,
    listen_port);
  internet_protocol.family_ = boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>::protocol((const boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> *const)(v2 + 192)).family_;
  boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::open(
    &this->acceptor_,
    &internet_protocol);
  if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->recv_buf_len_);
  }
  boost::asio::detail::socket_option::integer<1,7>::integer(
    (boost::asio::detail::socket_option::integer<1,7> *const)(v2 + 32),
    this->recv_buf_len_);
  if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->recv_buf_len_);
  }
  boost::asio::detail::socket_option::integer<1,8>::integer(
    (boost::asio::detail::socket_option::integer<1,8> *const)(v2 + 48),
    this->recv_buf_len_);
  boost::asio::detail::socket_option::boolean<1,2>::boolean(
    (boost::asio::detail::socket_option::boolean<1,2> *const)&internet_protocol,
    1);
  boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::set_option<boost::asio::detail::socket_option::boolean<1,2>>(
    &this->acceptor_,
    (const boost::asio::detail::socket_option::boolean<1,2> *)&internet_protocol);
  internet_protocol.family_ = *(_DWORD *)(v2 + 32);
  boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::set_option<boost::asio::detail::socket_option::integer<1,7>>(
    &this->acceptor_,
    (const boost::asio::detail::socket_option::integer<1,7> *)&internet_protocol);
  internet_protocol.family_ = *(_DWORD *)(v2 + 48);
  boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::set_option<boost::asio::detail::socket_option::integer<1,8>>(
    &this->acceptor_,
    (const boost::asio::detail::socket_option::integer<1,8> *)&internet_protocol);
  boost::asio::detail::socket_option::integer<1,7>::integer((boost::asio::detail::socket_option::integer<1,7> *const)(v2 + 64));
  boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::get_option<boost::asio::detail::socket_option::integer<1,7>>(
    &this->acceptor_,
    (boost::asio::detail::socket_option::integer<1,7> *)(v2 + 64));
  boost::asio::detail::socket_option::integer<1,8>::integer((boost::asio::detail::socket_option::integer<1,8> *const)(v2 + 80));
  boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::get_option<boost::asio::detail::socket_option::integer<1,8>>(
    &this->acceptor_,
    (boost::asio::detail::socket_option::integer<1,8> *)(v2 + 80));
  common::milog::MiLogStream::create(
    &v48,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "../framework/common/minet/aserver/include/aserver_mgr.hpp",
    "listenCoroutine",
    304);
  v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
         &v48,
         (const char (*)[29])"acceptor: send_buffer_size: ");
  val = boost::asio::detail::socket_option::integer<1,7>::value((const boost::asio::detail::socket_option::integer<1,7> *const)(v2 + 64));
  v7 = common::milog::MiLogStream::operator<<<int,(int *)0>(v6, &val);
  v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v7, (const char (*)[23])" receive_buffer_size: ");
  internet_protocol.family_ = boost::asio::detail::socket_option::integer<1,8>::value((const boost::asio::detail::socket_option::integer<1,8> *const)(v2 + 80));
  common::milog::MiLogStream::operator<<<int,(int *)0>(v8, &internet_protocol.family_);
  common::milog::MiLogStream::~MiLogStream(&v48);
  boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::bind(
    &this->acceptor_,
    (const boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::endpoint_type *)(v2 + 192));
  p_acceptor = &this->acceptor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->backlog_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->backlog_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->backlog_num_);
  }
  boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::listen(p_acceptor, this->backlog_num_);
  common::milog::MiLogStream::create(
    &v48,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "../framework/common/minet/aserver/include/aserver_mgr.hpp",
    "listenCoroutine",
    310);
  if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->recv_buf_len_);
  }
  recv_buf_len = this->recv_buf_len_;
  if ( *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&this->listen_port_);
  }
  common::milog::MiLogStream::operator()(
    &v48,
    "bind on %u succ with socket buf_len=%u",
    this->listen_port_,
    recv_buf_len);
  common::milog::MiLogStream::~MiLogStream(&v48);
  *(_DWORD *)(v2 + 128) = 0;
  *(_BYTE *)(v2 + 132) = 0;
  *(_QWORD *)(v2 + 136) = &boost::system::detail::cat_holder<void>::system_category_instance;
  while ( std::atomic<common::minet::AServerMgr<HttpSession>::Status>::operator common::minet::AServerMgr<HttpSession>::Status(&this->status_) == STATUS_START_1 )
  {
    common::minet::AServerMgr<HttpSession>::grabSession((common::minet::AServerMgr<HttpSession> *const)(v2 + 160));
    if ( std::operator==<HttpSession>(0LL, (const std::shared_ptr<HttpSession> *)(v2 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/aserver/include/aserver_mgr.hpp",
        "listenCoroutine",
        319);
      common::milog::MiLogStream::operator()(&v48, "release session failed.");
      common::milog::MiLogStream::~MiLogStream(&v48);
    }
    else
    {
      boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::operator[](
        &handler,
        p_yield,
        (boost::system::error_code *)(v2 + 128));
      v11 = std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
      Socket = common::minet::AServerSession::getSocket(v11);
      boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::async_accept<boost::asio::ip::tcp,boost::asio::executor,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
        &this->acceptor_,
        Socket,
        &handler,
        0LL);
      boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
      if ( boost::system::error_code::operator bool((const boost::system::error_code *const)(v2 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aserver/include/aserver_mgr.hpp",
          "listenCoroutine",
          327);
        boost::system::error_code::message[abi:cxx11](
          (std::string *)&v48,
          (const boost::system::error_code *const)(v2 + 128));
        v13 = (const char *)std::string::c_str(&v48);
        common::milog::MiLogStream::operator()(&v47, "accept error: %s", v13);
        std::string::~string(&v48);
        common::milog::MiLogStream::~MiLogStream(&v47);
      }
      else if ( std::atomic<common::minet::AServerMgr<HttpSession>::Status>::operator common::minet::AServerMgr<HttpSession>::Status(&this->status_) == STATUS_START_1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->next_session_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_session_id_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&this->next_session_id_);
        }
        next_session_id = this->next_session_id_;
        this->next_session_id_ = next_session_id + 1;
        session_id = next_session_id;
        if ( !next_session_id )
        {
          v15 = this->next_session_id_;
          this->next_session_id_ = v15 + 1;
          session_id = v15;
        }
        v42 = std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        v16 = ((_BYTE)this + 124) & 7;
        v17 = (*(_BYTE *)(((unsigned __int64)&this->is_player_session_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&this->is_player_session_ >> 3) + 0x7FFF8000));
        if ( (_BYTE)v17 )
          __asan_report_load1(&this->is_player_session_, v16, v17);
        is_player_session = this->is_player_session_;
        if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cache_packet_max_num_);
        }
        cache_packet_max_num = this->cache_packet_max_num_;
        v20 = ((_BYTE)this + 114) & 7;
        v21 = (*(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000));
        if ( (_BYTE)v21 )
          __asan_report_load1(&this->is_async_send_, v20, v21);
        is_async_send = this->is_async_send_;
        if ( *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->max_send_packet_len_);
        }
        max_send_packet_len = this->max_send_packet_len_;
        v24 = ((_BYTE)this + 113) & 7;
        v25 = (*(_BYTE *)(((unsigned __int64)&this->is_no_delay_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v24 >= *(_BYTE *)(((unsigned __int64)&this->is_no_delay_ >> 3) + 0x7FFF8000));
        if ( (_BYTE)v25 )
          __asan_report_load1(&this->is_no_delay_, v24, v25);
        is_no_delay = this->is_no_delay_;
        if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->is_cut_packet_, v24, &this->is_cut_packet_);
        is_cut_packet = this->is_cut_packet_;
        if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 106) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load2(&this->timeout_sec_);
        }
        timeout_sec = this->timeout_sec_;
        if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 108) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load2(&this->keep_alive_sec_);
        }
        if ( common::minet::AServerSession::init(
               v42,
               session_id,
               this->keep_alive_sec_,
               timeout_sec,
               is_cut_packet,
               is_no_delay,
               max_send_packet_len,
               is_async_send,
               cache_packet_max_num,
               is_player_session) )
        {
          common::milog::MiLogStream::create(
            &v48,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "../framework/common/minet/aserver/include/aserver_mgr.hpp",
            "listenCoroutine",
            348);
          common::milog::MiLogStream::operator()(&v48, "init session error.");
          common::milog::MiLogStream::~MiLogStream(&v48);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 110) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load2(&this->max_conn_num_);
          }
          if ( this->max_conn_num_
            && (max_conn_num = this->max_conn_num_,
                max_conn_num <= std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::size(&this->session_map_)) )
          {
            common::milog::MiLogStream::create(
              &v48,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "../framework/common/minet/aserver/include/aserver_mgr.hpp",
              "listenCoroutine",
              355);
            v31 = std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            ClientIp = common::minet::AServerSession::getClientIp(v31);
            if ( *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 110) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load2(&this->max_conn_num_);
            }
            common::milog::MiLogStream::operator()(
              &v48,
              "connect num reach upper limit=%u, drop connect from %s",
              this->max_conn_num_,
              ClientIp);
            common::milog::MiLogStream::~MiLogStream(&v48);
            v33 = std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            common::minet::AServerSession::forceDisconnect(v33);
          }
          else
          {
            std::lock_guard<std::recursive_mutex>::lock_guard(
              (std::lock_guard<std::recursive_mutex> *const)(v2 + 96),
              &this->session_mgr_mu_);
            v34 = std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            internet_protocol.family_ = common::minet::AServerSession::getSessionId(v34);
            v35 = std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::operator[](
                    &this->session_map_,
                    (std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::key_type *)&internet_protocol);
            std::shared_ptr<HttpSession>::operator=(v35, (const std::shared_ptr<HttpSession> *)(v2 + 160));
            std::lock_guard<std::recursive_mutex>::~lock_guard((std::lock_guard<std::recursive_mutex> *const)(v2 + 96));
            v36 = std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            common::minet::AServerSession::start(v36);
            common::milog::MiLogStream::create(
              &v48,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "../framework/common/minet/aserver/include/aserver_mgr.hpp",
              "listenCoroutine",
              371);
            v37 = std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::size(&this->session_map_);
            v38 = std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            SessionId = common::minet::AServerSession::getSessionId(v38);
            common::milog::MiLogStream::operator()(&v48, "accept new session=%u, cur session count=%lu", SessionId, v37);
            common::milog::MiLogStream::~MiLogStream(&v48);
          }
        }
      }
    }
    std::shared_ptr<HttpSession>::~shared_ptr((std::shared_ptr<HttpSession> *const)(v2 + 160));
  }
  boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::close(&this->acceptor_);
  common::milog::MiLogStream::create(
    &v48,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "../framework/common/minet/aserver/include/aserver_mgr.hpp",
    "listenCoroutine",
    383);
  if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->recv_buf_len_);
  }
  v40 = this->recv_buf_len_;
  if ( *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&this->listen_port_);
  }
  common::milog::MiLogStream::operator()(&v48, "close on %u succ with socket buf_len=%u", this->listen_port_, v40);
  common::milog::MiLogStream::~MiLogStream(&v48);
  result = 0;
  if ( v50 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 394: range 000000000C6B2DD2-000000000C6B3552
void __fastcall common::minet::AServerMgr<GateserverSession>::iosThreadHandler(
        common::minet::AServerMgr<GateserverSession> *const this,
        uint16_t thread_idx)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  pthread_t v10; // rax
  common::milog::MiLogStream *v11; // [rsp+8h] [rbp-148h]
  common::milog::MiLogStream *v12; // [rsp+8h] [rbp-148h]
  int s; // [rsp+20h] [rbp-130h] BYREF
  uint32_t status; // [rsp+24h] [rbp-12Ch]
  __int64 val; // [rsp+28h] [rbp-128h] BYREF
  boost::asio::io_context *ioc; // [rsp+30h] [rbp-120h]
  std::string __rhs; // [rsp+40h] [rbp-110h] BYREF
  common::milog::MiLogStream v18; // [rsp+60h] [rbp-F0h] BYREF
  char v19[208]; // [rsp+80h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 2 14 thread_idx:394 48 80 6 dt:419";
  *(_QWORD *)(v2 + 16) = common::minet::AServerMgr<GateserverSession>::iosThreadHandler;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61954;
  v4[536862724] = -202116109;
  *(_WORD *)(v2 + 32) = thread_idx;
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&this->thread_num_);
  }
  if ( this->thread_num_ > *(_WORD *)(v2 + 32) )
  {
    if ( std::atomic<common::minet::AServerMgr<GateserverSession>::Status>::operator common::minet::AServerMgr<GateserverSession>::Status(&this->status_) )
    {
      if ( std::operator!=<int>(&this->thread_start_callback_, 0LL)
        && std::function<int ()(void)>::operator()(&this->thread_start_callback_) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "../framework/common/minet/aserver/include/aserver_mgr.hpp",
          "iosThreadHandler",
          408);
        common::milog::MiLogStream::operator()(&v18, "server_mgr thread_start_callback_ fails");
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "../framework/common/minet/aserver/include/aserver_mgr.hpp",
          "iosThreadHandler",
          412);
        v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v18, (const char (*)[14])"[THREAD] tid:");
        val = syscall(186LL);
        v8 = common::milog::MiLogStream::operator<<<long,(long *)0>(v11, &val);
        v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
               v8,
               (const char (*)[18])" aserver thread: ");
        common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
          v9,
          (const unsigned __int16 *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v18);
        std::to_string(&__rhs, *(unsigned __int16 *)(v2 + 32));
        std::operator+<char>((std::string *)&v18, "aserver_io:", &__rhs);
        v12 = (common::milog::MiLogStream *)std::string::c_str(&v18);
        v10 = pthread_self();
        pthread_setname_np(v10, (const char *)v12);
        std::string::~string(&v18);
        std::string::~string(&__rhs);
        ioc = &this->ioc_arr_[*(unsigned __int16 *)(v2 + 32)];
        s = 1;
        boost::posix_time::seconds::seconds<int>((boost::posix_time::seconds *const)&val, &s, 0LL);
        boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::basic_deadline_timer<boost::asio::io_context>(
          (boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *const)(v2 + 48),
          ioc,
          (const boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::duration_type *)&val,
          0LL);
        boost::bind<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *,common::minet::AServerMgr<GateserverSession>*,boost::arg<1> (*)(void),boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>(
          (boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *)&v18,
          (void (*)(common::minet::AServerMgr<GateserverSession> *, const boost::system::error_code *, boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *))common::minet::AServerMgr<GateserverSession>::iosTimeoutHandler,
          0LL,
          (boost::arg<1> (*)(void))this,
          (boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *)boost::asio::placeholders::error);
        boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::async_wait<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>>>>(
          (boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *const)(v2 + 48),
          (boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *)&v18);
        status = std::atomic<common::minet::AServerMgr<GateserverSession>::Status>::load(
                   &this->status_,
                   memory_order_seq_cst);
        if ( status == 2 || status == 3 )
        {
          boost::asio::io_context::run(ioc);
          status = std::atomic<common::minet::AServerMgr<GateserverSession>::Status>::load(
                     &this->status_,
                     memory_order_seq_cst);
        }
        if ( std::function<void ()(void)>::operator bool(&this->thread_end_callback_) )
          std::function<void ()(void)>::operator()(&this->thread_end_callback_);
        boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::~basic_deadline_timer((boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *const)(v2 + 48));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "../framework/common/minet/aserver/include/aserver_mgr.hpp",
        "iosThreadHandler",
        403);
      v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v18,
             (const char (*)[19])"server_mgr status=");
      v6 = common::milog::MiLogStream::operator<<<std::atomic<common::minet::AServerMgr<GateserverSession>::Status>,(std::atomic<common::minet::AServerMgr<GateserverSession>::Status>*)0>(
             v5,
             &this->status_);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])", can not run ioc now.");
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "iosThreadHandler",
      398);
    common::milog::MiLogStream::operator()(
      &v18,
      "error thread_idx=%u while thread_num=%u.",
      *(unsigned __int16 *)(v2 + 32),
      this->thread_num_);
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 394: range 000000000C6B60B0-000000000C6B6830
void __fastcall common::minet::AServerMgr<HttpSession>::iosThreadHandler(
        common::minet::AServerMgr<HttpSession> *const this,
        uint16_t thread_idx)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  pthread_t v10; // rax
  common::milog::MiLogStream *v11; // [rsp+8h] [rbp-148h]
  common::milog::MiLogStream *v12; // [rsp+8h] [rbp-148h]
  int s; // [rsp+20h] [rbp-130h] BYREF
  uint32_t status; // [rsp+24h] [rbp-12Ch]
  __int64 val; // [rsp+28h] [rbp-128h] BYREF
  boost::asio::io_context *ioc; // [rsp+30h] [rbp-120h]
  std::string __rhs; // [rsp+40h] [rbp-110h] BYREF
  common::milog::MiLogStream v18; // [rsp+60h] [rbp-F0h] BYREF
  char v19[208]; // [rsp+80h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 2 14 thread_idx:394 48 80 6 dt:419";
  *(_QWORD *)(v2 + 16) = common::minet::AServerMgr<HttpSession>::iosThreadHandler;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61954;
  v4[536862724] = -202116109;
  *(_WORD *)(v2 + 32) = thread_idx;
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&this->thread_num_);
  }
  if ( this->thread_num_ > *(_WORD *)(v2 + 32) )
  {
    if ( std::atomic<common::minet::AServerMgr<HttpSession>::Status>::operator common::minet::AServerMgr<HttpSession>::Status(&this->status_) )
    {
      if ( std::operator!=<int>(&this->thread_start_callback_, 0LL)
        && std::function<int ()(void)>::operator()(&this->thread_start_callback_) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "../framework/common/minet/aserver/include/aserver_mgr.hpp",
          "iosThreadHandler",
          408);
        common::milog::MiLogStream::operator()(&v18, "server_mgr thread_start_callback_ fails");
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "../framework/common/minet/aserver/include/aserver_mgr.hpp",
          "iosThreadHandler",
          412);
        v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v18, (const char (*)[14])"[THREAD] tid:");
        val = syscall(186LL);
        v8 = common::milog::MiLogStream::operator<<<long,(long *)0>(v11, &val);
        v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
               v8,
               (const char (*)[18])" aserver thread: ");
        common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
          v9,
          (const unsigned __int16 *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v18);
        std::to_string(&__rhs, *(unsigned __int16 *)(v2 + 32));
        std::operator+<char>((std::string *)&v18, "aserver_io:", &__rhs);
        v12 = (common::milog::MiLogStream *)std::string::c_str(&v18);
        v10 = pthread_self();
        pthread_setname_np(v10, (const char *)v12);
        std::string::~string(&v18);
        std::string::~string(&__rhs);
        ioc = &this->ioc_arr_[*(unsigned __int16 *)(v2 + 32)];
        s = 1;
        boost::posix_time::seconds::seconds<int>((boost::posix_time::seconds *const)&val, &s, 0LL);
        boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::basic_deadline_timer<boost::asio::io_context>(
          (boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *const)(v2 + 48),
          ioc,
          (const boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::duration_type *)&val,
          0LL);
        boost::bind<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *,common::minet::AServerMgr<HttpSession>*,boost::arg<1> (*)(void),boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>(
          (boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *)&v18,
          (void (*)(common::minet::AServerMgr<HttpSession> *, const boost::system::error_code *, boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *))common::minet::AServerMgr<HttpSession>::iosTimeoutHandler,
          0LL,
          (boost::arg<1> (*)(void))this,
          (boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *)boost::asio::placeholders::error);
        boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::async_wait<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>>>>(
          (boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *const)(v2 + 48),
          (boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *)&v18);
        status = std::atomic<common::minet::AServerMgr<HttpSession>::Status>::load(&this->status_, memory_order_seq_cst);
        if ( status == 2 || status == 3 )
        {
          boost::asio::io_context::run(ioc);
          status = std::atomic<common::minet::AServerMgr<HttpSession>::Status>::load(
                     &this->status_,
                     memory_order_seq_cst);
        }
        if ( std::function<void ()(void)>::operator bool(&this->thread_end_callback_) )
          std::function<void ()(void)>::operator()(&this->thread_end_callback_);
        boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::~basic_deadline_timer((boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *const)(v2 + 48));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "../framework/common/minet/aserver/include/aserver_mgr.hpp",
        "iosThreadHandler",
        403);
      v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v18,
             (const char (*)[19])"server_mgr status=");
      v6 = common::milog::MiLogStream::operator<<<std::atomic<common::minet::AServerMgr<HttpSession>::Status>,(std::atomic<common::minet::AServerMgr<HttpSession>::Status>*)0>(
             v5,
             &this->status_);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])", can not run ioc now.");
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "iosThreadHandler",
      398);
    common::milog::MiLogStream::operator()(
      &v18,
      "error thread_idx=%u while thread_num=%u.",
      *(unsigned __int16 *)(v2 + 32),
      this->thread_num_);
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 446: range 000000000C6BAFCA-000000000C6BB0D0
void __cdecl common::minet::AServerMgr<GateserverSession>::iosTimeoutHandler(
        common::minet::AServerMgr<GateserverSession> *const this,
        const boost::system::error_code *a2,
        boost::asio::deadline_timer *dt_ptr)
{
  int s; // [rsp+24h] [rbp-5Ch] BYREF
  boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> > > v6; // [rsp+28h] [rbp-58h] BYREF
  boost::posix_time::seconds v7; // [rsp+30h] [rbp-50h] BYREF
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::time_type expiry_time; // [rsp+38h] [rbp-48h] BYREF
  boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > handler; // [rsp+40h] [rbp-40h] BYREF

  if ( dt_ptr
    && std::atomic<common::minet::AServerMgr<GateserverSession>::Status>::operator common::minet::AServerMgr<GateserverSession>::Status(&this->status_) == STATUS_START )
  {
    s = 1;
    boost::posix_time::seconds::seconds<int>(&v7, &s, 0LL);
    v6.time_.time_count_.value_ = boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::expires_at(dt_ptr).time_.time_count_.value_;
    expiry_time.time_.time_count_.value_ = boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>>::operator+(
                                             &v6,
                                             &v7).time_.time_count_.value_;
    boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::expires_at(
      dt_ptr,
      &expiry_time);
    boost::bind<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *,common::minet::AServerMgr<GateserverSession>*,boost::arg<1> (*)(void),boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>(
      &handler,
      (void (*)(common::minet::AServerMgr<GateserverSession> *, const boost::system::error_code *, boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *))common::minet::AServerMgr<GateserverSession>::iosTimeoutHandler,
      0LL,
      (boost::arg<1> (*)(void))this,
      (boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *)boost::asio::placeholders::error);
    boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::async_wait<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>>>>(
      dt_ptr,
      &handler);
  }
};

// Line 446: range 000000000C6BD148-000000000C6BD24E
void __cdecl common::minet::AServerMgr<HttpSession>::iosTimeoutHandler(
        common::minet::AServerMgr<HttpSession> *const this,
        const boost::system::error_code *a2,
        boost::asio::deadline_timer *dt_ptr)
{
  int s; // [rsp+24h] [rbp-5Ch] BYREF
  boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> > > v6; // [rsp+28h] [rbp-58h] BYREF
  boost::posix_time::seconds v7; // [rsp+30h] [rbp-50h] BYREF
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::time_type expiry_time; // [rsp+38h] [rbp-48h] BYREF
  boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > handler; // [rsp+40h] [rbp-40h] BYREF

  if ( dt_ptr
    && std::atomic<common::minet::AServerMgr<HttpSession>::Status>::operator common::minet::AServerMgr<HttpSession>::Status(&this->status_) == STATUS_START_1 )
  {
    s = 1;
    boost::posix_time::seconds::seconds<int>(&v7, &s, 0LL);
    v6.time_.time_count_.value_ = boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::expires_at(dt_ptr).time_.time_count_.value_;
    expiry_time.time_.time_count_.value_ = boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>>::operator+(
                                             &v6,
                                             &v7).time_.time_count_.value_;
    boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::expires_at(
      dt_ptr,
      &expiry_time);
    boost::bind<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *,common::minet::AServerMgr<HttpSession>*,boost::arg<1> (*)(void),boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>(
      &handler,
      (void (*)(common::minet::AServerMgr<HttpSession> *, const boost::system::error_code *, boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *))common::minet::AServerMgr<HttpSession>::iosTimeoutHandler,
      0LL,
      (boost::arg<1> (*)(void))this,
      (boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *)boost::asio::placeholders::error);
    boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::async_wait<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>>>>(
      dt_ptr,
      &handler);
  }
};

// Line 462: range 000000000C6B9B2E-000000000C6BA348
std::shared_ptr<GateserverSession> __cdecl common::minet::AServerMgr<GateserverSession>::grabSession(
        common::minet::AServerMgr<GateserverSession> *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  unsigned __int64 v4; // r14
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::shared_ptr<GateserverSession> result; // rax
  common::tools::ObjectPool<GateserverSession> *p_thread_num; // rdi
  unsigned int v9; // esi
  boost::asio::io_context *v10; // rdx
  common::minet::AServerSession *p_recv_buf_len; // rdi
  common::minet::AServerSession::ReleaseSignal *ReleaseSignal; // r12
  common::minet::AServerSession::UpdateAppIdSignal *UpdateAppIdSignal; // r12
  boost::arg<2> v14; // r8
  common::minet::AServerMgr<GateserverSession> *thisa; // [rsp+40h] [rbp-140h]
  GateserverSession *session; // [rsp+58h] [rbp-128h]
  char *recv_buf; // [rsp+68h] [rbp-118h]
  boost::signals2::signal<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex> v19; // [rsp+70h] [rbp-110h] BYREF
  boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > __d; // [rsp+90h] [rbp-F0h] BYREF
  common::milog::MiLogStream v21; // [rsp+B0h] [rbp-D0h] BYREF
  boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> > v22; // [rsp+D0h] [rbp-B0h] BYREF
  char v23[112]; // [rsp+110h] [rbp-70h] BYREF

  thisa = (common::minet::AServerMgr<GateserverSession> *)v1;
  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 lock:470";
  *(_QWORD *)(v2 + 16) = common::minet::AServerMgr<GateserverSession>::grabSession;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( std::atomic<common::minet::AServerMgr<GateserverSession>::Status>::operator common::minet::AServerMgr<GateserverSession>::Status((const std::atomic<common::minet::AServerMgr<GateserverSession>::Status> *const)(v1 + 8)) == STATUS_UN_INIT )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "grabSession",
      466);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v21, (const char (*)[19])"server_mgr status=");
    v6 = common::milog::MiLogStream::operator<<<std::atomic<common::minet::AServerMgr<GateserverSession>::Status>,(std::atomic<common::minet::AServerMgr<GateserverSession>::Status>*)0>(
           v5,
           (const std::atomic<common::minet::AServerMgr<GateserverSession>::Status> *)(v1 + 8));
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      v6,
      (const char (*)[28])", can not grab session now.");
    common::milog::MiLogStream::~MiLogStream(&v21);
    std::shared_ptr<GateserverSession>::shared_ptr((std::shared_ptr<GateserverSession> *const)this, 0LL);
    goto LABEL_28;
  }
  std::lock_guard<std::recursive_mutex>::lock_guard(
    (std::lock_guard<std::recursive_mutex> *const)(v2 + 32),
    (std::lock_guard<std::recursive_mutex>::mutex_type *)(v1 + 672));
  session = 0LL;
  recv_buf = (char *)common::tools::MemPool::malloc((common::tools::MemPool *const)(v1 + 392), 1);
  if ( !recv_buf )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "grabSession",
      480);
    if ( *(_BYTE *)(((unsigned __int64)(v1 + 356) >> 3) + 0x7FFF8000) != 0
      && (char)(((v1 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v1 + 356) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1 + 356);
    }
    common::milog::MiLogStream::operator()(
      &v21,
      "malloc recv_buf with len=%u from mem_pool failed.",
      *(unsigned int *)(v1 + 356));
    common::milog::MiLogStream::~MiLogStream(&v21);
    goto LABEL_26;
  }
  if ( *(_BYTE *)(((unsigned __int64)(v1 + 360) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(v1 + 360) >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(v1 + 360);
  }
  if ( *(_WORD *)(v1 + 360) == 1 )
  {
    session = common::tools::ObjectPool<GateserverSession>::construct<boost::asio::io_context &>(
                (common::tools::ObjectPool<GateserverSession> *const)(v1 + 408),
                (boost::asio::io_context *)(v1 + 416),
                (boost::asio::io_context *)(v1 + 416));
  }
  else
  {
    p_thread_num = (common::tools::ObjectPool<GateserverSession> *)(v1 + 408);
    if ( *(_BYTE *)(((unsigned __int64)(v1 + 388) >> 3) + 0x7FFF8000) != 0
      && (char)(((v1 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v1 + 388) >> 3) + 0x7FFF8000) )
    {
      p_thread_num = (common::tools::ObjectPool<GateserverSession> *)(v1 + 388);
      __asan_report_load4(v1 + 388);
    }
    v9 = *(_DWORD *)(v1 + 388);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->thread_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->thread_num_ >> 3) + 0x7FFF8000) <= 1 )
    {
      p_thread_num = (common::tools::ObjectPool<GateserverSession> *)&thisa->thread_num_;
      __asan_report_load2(&thisa->thread_num_);
    }
    v10 = (boost::asio::io_context *)(16 * (v9 % ((unsigned int)thisa->thread_num_ - 1) + 1 + 26LL));
    session = common::tools::ObjectPool<GateserverSession>::construct<boost::asio::io_context &>(
                p_thread_num,
                (boost::asio::io_context *)((char *)thisa + (_QWORD)v10),
                v10);
  }
  if ( !session )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "grabSession",
      495);
    common::milog::MiLogStream::operator()(&v21, "malloc SessionT from mem_pool failed.");
    common::milog::MiLogStream::~MiLogStream(&v21);
LABEL_26:
    common::tools::ObjectPool<GateserverSession>::destroy(&thisa->session_pool_, session);
    common::tools::MemPool::free(&thisa->recv_buf_pool_, recv_buf);
    std::shared_ptr<GateserverSession>::shared_ptr((std::shared_ptr<GateserverSession> *const)this, 0LL);
    goto LABEL_27;
  }
  p_recv_buf_len = session;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->recv_buf_len_ >> 3) + 0x7FFF8000) )
  {
    p_recv_buf_len = (common::minet::AServerSession *)&thisa->recv_buf_len_;
    __asan_report_load4(&thisa->recv_buf_len_);
  }
  if ( common::minet::AServerSession::setRecvBuf(p_recv_buf_len, recv_buf, thisa->recv_buf_len_) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "grabSession",
      502);
    common::milog::MiLogStream::operator()(&v21, "setRecvBuf for SessionT failed.");
    common::milog::MiLogStream::~MiLogStream(&v21);
    goto LABEL_26;
  }
  ReleaseSignal = common::minet::AServerSession::getReleaseSignal(session);
  boost::bind<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,common::minet::AServerMgr<GateserverSession>*,boost::arg<1>>(
    &__d,
    (int (*)(common::minet::AServerMgr<GateserverSession> *, common::minet::AServerSession *))common::minet::AServerMgr<GateserverSession>::eraseSession,
    0LL,
    (boost::arg<1>)thisa);
  boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>::slot<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>(
    &v22,
    &__d);
  boost::signals2::signal<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::connect(
    &v19,
    (const boost::signals2::signal<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::slot_type *)ReleaseSignal,
    (boost::signals2::connect_position)&v22);
  boost::signals2::connection::~connection((boost::signals2::connection *const)&v19);
  boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>::~slot(&v22);
  UpdateAppIdSignal = common::minet::AServerSession::getUpdateAppIdSignal(session);
  boost::bind<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int,common::minet::AServerMgr<GateserverSession>*,boost::arg<1>,boost::arg<2>>(
    (boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *)&__d,
    (int (*)(common::minet::AServerMgr<GateserverSession> *, common::minet::AServerSession *, unsigned int))common::minet::AServerMgr<GateserverSession>::updateSessionAppId,
    0LL,
    (boost::arg<1>)thisa,
    v14);
  boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>::slot<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>(
    (boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > *const)&v22,
    (const boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *)&__d);
  boost::signals2::signal<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::connect(
    (boost::signals2::signal<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex> *const)&v19._pimpl.pn,
    (const boost::signals2::signal<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::slot_type *)UpdateAppIdSignal,
    (boost::signals2::connect_position)&v22);
  boost::signals2::connection::~connection((boost::signals2::connection *const)&v19._pimpl.pn);
  boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>::~slot((boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > *const)&v22);
  boost::bind<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,common::minet::AServerMgr<GateserverSession>*,boost::arg<1>>(
    &__d,
    (int (*)(common::minet::AServerMgr<GateserverSession> *, common::minet::AServerSession *))common::minet::AServerMgr<GateserverSession>::releaseSession,
    0LL,
    (boost::arg<1>)thisa);
  std::shared_ptr<GateserverSession>::shared_ptr<GateserverSession,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,void>(
    (std::shared_ptr<GateserverSession> *const)this,
    session,
    __d);
LABEL_27:
  std::lock_guard<std::recursive_mutex>::~lock_guard((std::lock_guard<std::recursive_mutex> *const)(v2 + 32));
LABEL_28:
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<GateserverSession,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 462: range 000000000C6BC302-000000000C6BCB1C
std::shared_ptr<HttpSession> __cdecl common::minet::AServerMgr<HttpSession>::grabSession(
        common::minet::AServerMgr<HttpSession> *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  unsigned __int64 v4; // r14
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::shared_ptr<HttpSession> result; // rax
  common::tools::ObjectPool<HttpSession> *p_thread_num; // rdi
  unsigned int v9; // esi
  boost::asio::io_context *v10; // rdx
  common::minet::AServerSession *p_recv_buf_len; // rdi
  common::minet::AServerSession::ReleaseSignal *ReleaseSignal; // r12
  common::minet::AServerSession::UpdateAppIdSignal *UpdateAppIdSignal; // r12
  boost::arg<2> v14; // r8
  common::minet::AServerMgr<HttpSession> *thisa; // [rsp+40h] [rbp-140h]
  HttpSession *session; // [rsp+58h] [rbp-128h]
  char *recv_buf; // [rsp+68h] [rbp-118h]
  boost::signals2::signal<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex> v19; // [rsp+70h] [rbp-110h] BYREF
  boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > __d; // [rsp+90h] [rbp-F0h] BYREF
  common::milog::MiLogStream v21; // [rsp+B0h] [rbp-D0h] BYREF
  boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> > v22; // [rsp+D0h] [rbp-B0h] BYREF
  char v23[112]; // [rsp+110h] [rbp-70h] BYREF

  thisa = (common::minet::AServerMgr<HttpSession> *)v1;
  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 lock:470";
  *(_QWORD *)(v2 + 16) = common::minet::AServerMgr<HttpSession>::grabSession;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( std::atomic<common::minet::AServerMgr<HttpSession>::Status>::operator common::minet::AServerMgr<HttpSession>::Status((const std::atomic<common::minet::AServerMgr<HttpSession>::Status> *const)(v1 + 8)) == STATUS_UN_INIT_0 )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "grabSession",
      466);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v21, (const char (*)[19])"server_mgr status=");
    v6 = common::milog::MiLogStream::operator<<<std::atomic<common::minet::AServerMgr<HttpSession>::Status>,(std::atomic<common::minet::AServerMgr<HttpSession>::Status>*)0>(
           v5,
           (const std::atomic<common::minet::AServerMgr<HttpSession>::Status> *)(v1 + 8));
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      v6,
      (const char (*)[28])", can not grab session now.");
    common::milog::MiLogStream::~MiLogStream(&v21);
    std::shared_ptr<HttpSession>::shared_ptr((std::shared_ptr<HttpSession> *const)this, 0LL);
    goto LABEL_28;
  }
  std::lock_guard<std::recursive_mutex>::lock_guard(
    (std::lock_guard<std::recursive_mutex> *const)(v2 + 32),
    (std::lock_guard<std::recursive_mutex>::mutex_type *)(v1 + 672));
  session = 0LL;
  recv_buf = (char *)common::tools::MemPool::malloc((common::tools::MemPool *const)(v1 + 392), 1);
  if ( !recv_buf )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "grabSession",
      480);
    if ( *(_BYTE *)(((unsigned __int64)(v1 + 356) >> 3) + 0x7FFF8000) != 0
      && (char)(((v1 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v1 + 356) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1 + 356);
    }
    common::milog::MiLogStream::operator()(
      &v21,
      "malloc recv_buf with len=%u from mem_pool failed.",
      *(unsigned int *)(v1 + 356));
    common::milog::MiLogStream::~MiLogStream(&v21);
    goto LABEL_26;
  }
  if ( *(_BYTE *)(((unsigned __int64)(v1 + 360) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(v1 + 360) >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(v1 + 360);
  }
  if ( *(_WORD *)(v1 + 360) == 1 )
  {
    session = common::tools::ObjectPool<HttpSession>::construct<boost::asio::io_context &>(
                (common::tools::ObjectPool<HttpSession> *const)(v1 + 408),
                (boost::asio::io_context *)(v1 + 416),
                (boost::asio::io_context *)(v1 + 416));
  }
  else
  {
    p_thread_num = (common::tools::ObjectPool<HttpSession> *)(v1 + 408);
    if ( *(_BYTE *)(((unsigned __int64)(v1 + 388) >> 3) + 0x7FFF8000) != 0
      && (char)(((v1 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v1 + 388) >> 3) + 0x7FFF8000) )
    {
      p_thread_num = (common::tools::ObjectPool<HttpSession> *)(v1 + 388);
      __asan_report_load4(v1 + 388);
    }
    v9 = *(_DWORD *)(v1 + 388);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->thread_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->thread_num_ >> 3) + 0x7FFF8000) <= 1 )
    {
      p_thread_num = (common::tools::ObjectPool<HttpSession> *)&thisa->thread_num_;
      __asan_report_load2(&thisa->thread_num_);
    }
    v10 = (boost::asio::io_context *)(16 * (v9 % ((unsigned int)thisa->thread_num_ - 1) + 1 + 26LL));
    session = common::tools::ObjectPool<HttpSession>::construct<boost::asio::io_context &>(
                p_thread_num,
                (boost::asio::io_context *)((char *)thisa + (_QWORD)v10),
                v10);
  }
  if ( !session )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "grabSession",
      495);
    common::milog::MiLogStream::operator()(&v21, "malloc SessionT from mem_pool failed.");
    common::milog::MiLogStream::~MiLogStream(&v21);
LABEL_26:
    common::tools::ObjectPool<HttpSession>::destroy(&thisa->session_pool_, session);
    common::tools::MemPool::free(&thisa->recv_buf_pool_, recv_buf);
    std::shared_ptr<HttpSession>::shared_ptr((std::shared_ptr<HttpSession> *const)this, 0LL);
    goto LABEL_27;
  }
  p_recv_buf_len = session;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->recv_buf_len_ >> 3) + 0x7FFF8000) )
  {
    p_recv_buf_len = (common::minet::AServerSession *)&thisa->recv_buf_len_;
    __asan_report_load4(&thisa->recv_buf_len_);
  }
  if ( common::minet::AServerSession::setRecvBuf(p_recv_buf_len, recv_buf, thisa->recv_buf_len_) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "grabSession",
      502);
    common::milog::MiLogStream::operator()(&v21, "setRecvBuf for SessionT failed.");
    common::milog::MiLogStream::~MiLogStream(&v21);
    goto LABEL_26;
  }
  ReleaseSignal = common::minet::AServerSession::getReleaseSignal(session);
  boost::bind<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,common::minet::AServerMgr<HttpSession>*,boost::arg<1>>(
    &__d,
    (int (*)(common::minet::AServerMgr<HttpSession> *, common::minet::AServerSession *))common::minet::AServerMgr<HttpSession>::eraseSession,
    0LL,
    (boost::arg<1>)thisa);
  boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>::slot<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>(
    &v22,
    &__d);
  boost::signals2::signal<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::connect(
    &v19,
    (const boost::signals2::signal<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::slot_type *)ReleaseSignal,
    (boost::signals2::connect_position)&v22);
  boost::signals2::connection::~connection((boost::signals2::connection *const)&v19);
  boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>::~slot(&v22);
  UpdateAppIdSignal = common::minet::AServerSession::getUpdateAppIdSignal(session);
  boost::bind<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int,common::minet::AServerMgr<HttpSession>*,boost::arg<1>,boost::arg<2>>(
    (boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *)&__d,
    (int (*)(common::minet::AServerMgr<HttpSession> *, common::minet::AServerSession *, unsigned int))common::minet::AServerMgr<HttpSession>::updateSessionAppId,
    0LL,
    (boost::arg<1>)thisa,
    v14);
  boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>::slot<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>(
    (boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > *const)&v22,
    (const boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *)&__d);
  boost::signals2::signal<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::connect(
    (boost::signals2::signal<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex> *const)&v19._pimpl.pn,
    (const boost::signals2::signal<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::slot_type *)UpdateAppIdSignal,
    (boost::signals2::connect_position)&v22);
  boost::signals2::connection::~connection((boost::signals2::connection *const)&v19._pimpl.pn);
  boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>::~slot((boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > *const)&v22);
  boost::bind<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,common::minet::AServerMgr<HttpSession>*,boost::arg<1>>(
    &__d,
    (int (*)(common::minet::AServerMgr<HttpSession> *, common::minet::AServerSession *))common::minet::AServerMgr<HttpSession>::releaseSession,
    0LL,
    (boost::arg<1>)thisa);
  std::shared_ptr<HttpSession>::shared_ptr<HttpSession,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,void>(
    (std::shared_ptr<HttpSession> *const)this,
    session,
    __d);
LABEL_27:
  std::lock_guard<std::recursive_mutex>::~lock_guard((std::lock_guard<std::recursive_mutex> *const)(v2 + 32));
LABEL_28:
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<HttpSession,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 521: range 000000000C6C1880-000000000C6C1A9E
int32_t __cdecl common::minet::AServerMgr<GateserverSession>::releaseSession(
        common::minet::AServerMgr<GateserverSession> *const this,
        common::minet::AServerSession *session_)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  char *RecvBuf; // rax
  int32_t result; // eax
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-90h] BYREF
  char v9[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 lock:534";
  *(_QWORD *)(v2 + 16) = common::minet::AServerMgr<GateserverSession>::releaseSession;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( std::atomic<common::minet::AServerMgr<GateserverSession>::Status>::operator common::minet::AServerMgr<GateserverSession>::Status(&this->status_) )
  {
    if ( session_ )
    {
      std::lock_guard<std::recursive_mutex>::lock_guard(
        (std::lock_guard<std::recursive_mutex> *const)(v2 + 32),
        &this->session_mgr_mu_);
      RecvBuf = common::minet::AServerSession::getRecvBuf(session_);
      common::tools::MemPool::free(&this->recv_buf_pool_, RecvBuf);
      common::tools::ObjectPool<GateserverSession>::destroy(&this->session_pool_, (GateserverSession *)session_);
      v5 = 0;
      std::lock_guard<std::recursive_mutex>::~lock_guard((std::lock_guard<std::recursive_mutex> *const)(v2 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/aserver/include/aserver_mgr.hpp",
        "releaseSession",
        530);
      common::milog::MiLogStream::operator()(&v8, "can not release nullptr seesion.");
      common::milog::MiLogStream::~MiLogStream(&v8);
      v5 = 1;
    }
  }
  else
  {
    v5 = 1;
  }
  result = v5;
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

// Line 521: range 000000000C6C5654-000000000C6C5872
int32_t __cdecl common::minet::AServerMgr<HttpSession>::releaseSession(
        common::minet::AServerMgr<HttpSession> *const this,
        common::minet::AServerSession *session_)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  char *RecvBuf; // rax
  int32_t result; // eax
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-90h] BYREF
  char v9[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 lock:534";
  *(_QWORD *)(v2 + 16) = common::minet::AServerMgr<HttpSession>::releaseSession;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( std::atomic<common::minet::AServerMgr<HttpSession>::Status>::operator common::minet::AServerMgr<HttpSession>::Status(&this->status_) )
  {
    if ( session_ )
    {
      std::lock_guard<std::recursive_mutex>::lock_guard(
        (std::lock_guard<std::recursive_mutex> *const)(v2 + 32),
        &this->session_mgr_mu_);
      RecvBuf = common::minet::AServerSession::getRecvBuf(session_);
      common::tools::MemPool::free(&this->recv_buf_pool_, RecvBuf);
      common::tools::ObjectPool<HttpSession>::destroy(&this->session_pool_, (HttpSession *)session_);
      v5 = 0;
      std::lock_guard<std::recursive_mutex>::~lock_guard((std::lock_guard<std::recursive_mutex> *const)(v2 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/aserver/include/aserver_mgr.hpp",
        "releaseSession",
        530);
      common::milog::MiLogStream::operator()(&v8, "can not release nullptr seesion.");
      common::milog::MiLogStream::~MiLogStream(&v8);
      v5 = 1;
    }
  }
  else
  {
    v5 = 1;
  }
  result = v5;
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

// Line 543: range 000000000C6C022A-000000000C6C0D04
int32_t __cdecl common::minet::AServerMgr<GateserverSession>::eraseSession(
        common::minet::AServerMgr<GateserverSession> *const this,
        common::minet::AServerSession *session_)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::size_type v6; // r15
  uint32_t AppId; // eax
  const char *v8; // r14
  uint32_t SessionId; // eax
  boost::container::flat_map<unsigned int,std::shared_ptr<GateserverSession>,std::less<unsigned int>,void> *p_app_id_to_session_map; // rsi
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *v11; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer m_start; // rdx
  boost::container::flat_map<unsigned int,std::shared_ptr<GateserverSession>,std::less<unsigned int>,void> *v13; // rax
  __int64 v14; // rax
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *v15; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v16; // rdx
  std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t v18; // r14d
  __int64 *v19; // rax
  boost::container::flat_map<unsigned int,std::shared_ptr<GateserverSession>,std::less<unsigned int>,void> *v20; // rcx
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 *v24; // rax
  boost::container::flat_map<unsigned int,std::shared_ptr<GateserverSession>,std::less<unsigned int>,void> *v25; // rsi
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *v26; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v27; // rdx
  std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  uint32_t v29; // r15d
  uint32_t v30; // r14d
  uint32_t v31; // eax
  const char *v32; // rax
  uint32_t v33; // r14d
  uint32_t v34; // eax
  const char *v35; // rax
  uint32_t v36; // eax
  const char *v37; // r14
  uint32_t v38; // eax
  std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::key_type __x; // [rsp+24h] [rbp-1FCh] BYREF
  __int64 v41; // [rsp+28h] [rbp-1F8h] BYREF
  __int64 v42; // [rsp+30h] [rbp-1F0h] BYREF
  __int64 v43; // [rsp+38h] [rbp-1E8h] BYREF
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > v44; // [rsp+40h] [rbp-1E0h] BYREF
  unsigned __int64 v45; // [rsp+58h] [rbp-1C8h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *v46; // [rsp+60h] [rbp-1C0h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *v47; // [rsp+68h] [rbp-1B8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GateserverSession>,std::less<unsigned int>,void> *v48; // [rsp+70h] [rbp-1B0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GateserverSession>,std::less<unsigned int>,void> *v49; // [rsp+78h] [rbp-1A8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GateserverSession>,std::less<unsigned int>,void> *v50; // [rsp+80h] [rbp-1A0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GateserverSession>,std::less<unsigned int>,void> *v51; // [rsp+88h] [rbp-198h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v52; // [rsp+90h] [rbp-190h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_size; // [rsp+98h] [rbp-188h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *v54; // [rsp+A0h] [rbp-180h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *v55; // [rsp+A8h] [rbp-178h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *v56; // [rsp+B0h] [rbp-170h]
  unsigned __int64 v57; // [rsp+B8h] [rbp-168h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *v58; // [rsp+C0h] [rbp-160h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *v59; // [rsp+C8h] [rbp-158h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GateserverSession>,std::less<unsigned int>,void> *v60; // [rsp+D0h] [rbp-150h]
  __int64 *v61; // [rsp+D8h] [rbp-148h]
  __int64 *v62; // [rsp+E0h] [rbp-140h]
  __int64 *v63; // [rsp+E8h] [rbp-138h]
  unsigned __int64 v64; // [rsp+F0h] [rbp-130h]
  __int64 *v65; // [rsp+F8h] [rbp-128h]
  __int64 *v66; // [rsp+100h] [rbp-120h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::const_iterator *p_position; // [rsp+108h] [rbp-118h]
  __int64 *v68; // [rsp+110h] [rbp-110h]
  __int64 *v69; // [rsp+118h] [rbp-108h]
  __int64 *v70; // [rsp+120h] [rbp-100h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *v71; // [rsp+128h] [rbp-F8h]
  unsigned __int64 v72; // [rsp+130h] [rbp-F0h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *v73; // [rsp+138h] [rbp-E8h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *v74; // [rsp+140h] [rbp-E0h]
  char *v75; // [rsp+148h] [rbp-D8h]
  common::milog::MiLogStream v76; // [rsp+150h] [rbp-D0h] BYREF
  std::string v77; // [rsp+170h] [rbp-B0h] BYREF
  char v78[144]; // [rsp+190h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v78;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 8 lock:555 64 8 6 it:559";
  *(_QWORD *)(v2 + 16) = common::minet::AServerMgr<GateserverSession>::eraseSession;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( session_ )
  {
    common::milog::MiLogStream::create(
      &v76,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "eraseSession",
      550);
    v6 = std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::size(&this->session_map_);
    AppId = common::minet::AServerSession::getAppId(session_);
    common::tools::AppIdUtils::getAppIdStr[abi:cxx11](&v77, AppId);
    v8 = (const char *)std::string::c_str(&v77);
    SessionId = common::minet::AServerSession::getSessionId(session_);
    common::milog::MiLogStream::operator()(
      &v76,
      "session erased, session_id=%u app_id=%s, cur_count:%lu",
      SessionId,
      v8,
      v6);
    std::string::~string(&v77);
    common::milog::MiLogStream::~MiLogStream(&v76);
    std::lock_guard<std::recursive_mutex>::lock_guard(
      (std::lock_guard<std::recursive_mutex> *const)(v2 + 32),
      &this->session_mgr_mu_);
    __x = common::minet::AServerSession::getSessionId(session_);
    std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::erase(&this->session_map_, &__x);
    if ( common::minet::AServerSession::getAppId(session_) )
    {
      __x = common::minet::AServerSession::getAppId(session_);
      v44.m_data.m_seq.m_holder.m_size = (boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type)&this->app_id_to_session_map_;
      p_app_id_to_session_map = &this->app_id_to_session_map_;
      boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>>::find(
        &v44,
        (const boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > >::key_type *)&this->app_id_to_session_map_);
      v44.m_data.m_seq.m_holder.m_capacity = (boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type)&v44;
      v45 = v2 + 64;
      v46 = &v44;
      v47 = &v44;
      v11 = &v44;
      if ( *(_BYTE *)(((unsigned __int64)&v44 >> 3) + 0x7FFF8000) )
        v11 = (boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *)__asan_report_load8(&v44);
      m_start = v11->m_data.m_seq.m_holder.m_start;
      if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
        __asan_report_store8(v45, p_app_id_to_session_map);
      *(_QWORD *)v45 = m_start;
      v48 = &this->app_id_to_session_map_;
      v49 = &this->app_id_to_session_map_;
      v50 = &this->app_id_to_session_map_;
      v51 = &this->app_id_to_session_map_;
      v13 = &this->app_id_to_session_map_;
      if ( *(_BYTE *)(((unsigned __int64)&this->app_id_to_session_map_ >> 3) + 0x7FFF8000) )
        v13 = (boost::container::flat_map<unsigned int,std::shared_ptr<GateserverSession>,std::less<unsigned int>,void> *)__asan_report_load8(&this->app_id_to_session_map_);
      v52 = v13->m_flat_tree.m_data.m_seq.m_holder.m_start;
      if ( *(_BYTE *)(((unsigned __int64)&v50->m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
        __asan_report_load8(&v50->m_flat_tree.m_data.m_seq.m_holder.m_size);
      m_size = v50->m_flat_tree.m_data.m_seq.m_holder.m_size;
      if ( m_size )
        v14 = (__int64)&v52[m_size];
      else
        v14 = (__int64)v52;
      v54 = &v44;
      v55 = (boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *)v14;
      if ( *(_BYTE *)(((unsigned __int64)&v44 >> 3) + 0x7FFF8000) )
        __asan_report_store8(&v44, p_app_id_to_session_map);
      v54->m_data.m_seq.m_holder.m_start = v55;
      v56 = &v44;
      v57 = (unsigned __int64)&v43;
      v58 = &v44;
      v59 = &v44;
      v15 = &v44;
      if ( *(_BYTE *)(((unsigned __int64)&v44 >> 3) + 0x7FFF8000) )
        v15 = (boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *)__asan_report_load8(&v44);
      v16 = v15->m_data.m_seq.m_holder.m_start;
      if ( *(_BYTE *)((v57 >> 3) + 0x7FFF8000) )
        __asan_report_store8(v57, p_app_id_to_session_map);
      *(_QWORD *)v57 = v16;
      if ( *(_QWORD *)(v2 + 64) == v43 )
      {
        if ( *(char *)(((unsigned __int64)&session_->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&session_->is_cut_packet_, p_app_id_to_session_map, &session_->is_cut_packet_);
        if ( session_->is_cut_packet_ )
        {
          common::milog::MiLogStream::create(
            &v76,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "../framework/common/minet/aserver/include/aserver_mgr.hpp",
            "eraseSession",
            583);
          v36 = common::minet::AServerSession::getAppId(session_);
          common::tools::AppIdUtils::getAppIdStr[abi:cxx11](&v77, v36);
          v37 = (const char *)std::string::c_str(&v77);
          v38 = common::minet::AServerSession::getSessionId(session_);
          common::milog::MiLogStream::operator()(&v76, "eraseSession session_id:%u donot find the app_id:%s", v38, v37);
          std::string::~string(&v77);
          common::milog::MiLogStream::~MiLogStream(&v76);
        }
      }
      else if ( std::operator!=<GateserverSession>(
                  0LL,
                  (const std::shared_ptr<GateserverSession> *)(*(_QWORD *)(v2 + 64) + 8LL)) )
      {
        v17 = std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(_QWORD *)(v2 + 64) + 8LL));
        v18 = common::minet::AServerSession::getSessionId(v17);
        if ( v18 == common::minet::AServerSession::getSessionId(session_) )
        {
          v75 = (char *)(v2 + 64);
          v19 = (__int64 *)(v2 + 64);
          if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
            v19 = (__int64 *)__asan_report_load8(v2 + 64);
          v41 = *v19;
          v60 = &this->app_id_to_session_map_;
          v61 = &v41;
          v20 = &this->app_id_to_session_map_;
          v62 = &v41;
          v63 = &v41;
          v64 = (unsigned __int64)&v43;
          v65 = &v41;
          v66 = &v41;
          v21 = &v41;
          if ( *(_BYTE *)(((unsigned __int64)&v41 >> 3) + 0x7FFF8000) )
            v21 = (__int64 *)__asan_report_load8(&v41);
          v22 = *v21;
          v23 = *(unsigned __int8 *)((v64 >> 3) + 0x7FFF8000);
          if ( (_BYTE)v23 )
            __asan_report_store8(v64, v23);
          *(_QWORD *)v64 = v22;
          p_position = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::const_iterator *)v20;
          v68 = &v43;
          v69 = &v43;
          v70 = &v43;
          v24 = &v43;
          if ( *(_BYTE *)(((unsigned __int64)&v43 >> 3) + 0x7FFF8000) )
            v24 = (__int64 *)__asan_report_load8(&v43);
          v42 = *v24;
          v25 = v20;
          boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,void>::erase(
            &v44.m_data.m_seq,
            (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::const_iterator *)v20);
          v71 = &v44;
          v72 = (unsigned __int64)&v42;
          v73 = &v44;
          v74 = &v44;
          v26 = &v44;
          if ( *(_BYTE *)(((unsigned __int64)&v44 >> 3) + 0x7FFF8000) )
            v26 = (boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *)__asan_report_load8(&v44);
          v27 = v26->m_data.m_seq.m_holder.m_start;
          if ( *(_BYTE *)((v72 >> 3) + 0x7FFF8000) )
            __asan_report_store8(v72, v25);
          *(_QWORD *)v72 = v27;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v76,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "../framework/common/minet/aserver/include/aserver_mgr.hpp",
            "eraseSession",
            570);
          v28 = std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(_QWORD *)(v2 + 64) + 8LL));
          v29 = common::minet::AServerSession::getSessionId(v28);
          v30 = common::minet::AServerSession::getSessionId(session_);
          v31 = common::minet::AServerSession::getAppId(session_);
          common::tools::AppIdUtils::getAppIdStr[abi:cxx11](&v77, v31);
          v32 = (const char *)std::string::c_str(&v77);
          common::milog::MiLogStream::operator()(
            &v76,
            "eraseSession app_id:%s session_id:%u donot match session_id:%u in map",
            v32,
            v30,
            v29);
          std::string::~string(&v77);
          common::milog::MiLogStream::~MiLogStream(&v76);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v76,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aserver/include/aserver_mgr.hpp",
          "eraseSession",
          575);
        v33 = common::minet::AServerSession::getSessionId(session_);
        v34 = common::minet::AServerSession::getAppId(session_);
        common::tools::AppIdUtils::getAppIdStr[abi:cxx11](&v77, v34);
        v35 = (const char *)std::string::c_str(&v77);
        common::milog::MiLogStream::operator()(
          &v76,
          "eraseSession app_id:%s session_id:%u session_ptr == null in map",
          v35,
          v33);
        std::string::~string(&v77);
        common::milog::MiLogStream::~MiLogStream(&v76);
      }
    }
    std::lock_guard<std::recursive_mutex>::~lock_guard((std::lock_guard<std::recursive_mutex> *const)(v2 + 32));
    result = 0;
  }
  else
  {
    result = 1;
  }
  if ( v78 == (char *)v2 )
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

// Line 543: range 000000000C6C4270-000000000C6C4D4A
int32_t __cdecl common::minet::AServerMgr<HttpSession>::eraseSession(
        common::minet::AServerMgr<HttpSession> *const this,
        common::minet::AServerSession *session_)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::size_type v6; // r15
  uint32_t AppId; // eax
  const char *v8; // r14
  uint32_t SessionId; // eax
  boost::container::flat_map<unsigned int,std::shared_ptr<HttpSession>,std::less<unsigned int>,void> *p_app_id_to_session_map; // rsi
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *v11; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer m_start; // rdx
  boost::container::flat_map<unsigned int,std::shared_ptr<HttpSession>,std::less<unsigned int>,void> *v13; // rax
  __int64 v14; // rax
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *v15; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v16; // rdx
  std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t v18; // r14d
  __int64 *v19; // rax
  boost::container::flat_map<unsigned int,std::shared_ptr<HttpSession>,std::less<unsigned int>,void> *v20; // rcx
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 *v24; // rax
  boost::container::flat_map<unsigned int,std::shared_ptr<HttpSession>,std::less<unsigned int>,void> *v25; // rsi
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *v26; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v27; // rdx
  std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  uint32_t v29; // r15d
  uint32_t v30; // r14d
  uint32_t v31; // eax
  const char *v32; // rax
  uint32_t v33; // r14d
  uint32_t v34; // eax
  const char *v35; // rax
  uint32_t v36; // eax
  const char *v37; // r14
  uint32_t v38; // eax
  std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::key_type __x; // [rsp+24h] [rbp-1FCh] BYREF
  __int64 v41; // [rsp+28h] [rbp-1F8h] BYREF
  __int64 v42; // [rsp+30h] [rbp-1F0h] BYREF
  __int64 v43; // [rsp+38h] [rbp-1E8h] BYREF
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > v44; // [rsp+40h] [rbp-1E0h] BYREF
  unsigned __int64 v45; // [rsp+58h] [rbp-1C8h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *v46; // [rsp+60h] [rbp-1C0h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *v47; // [rsp+68h] [rbp-1B8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<HttpSession>,std::less<unsigned int>,void> *v48; // [rsp+70h] [rbp-1B0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<HttpSession>,std::less<unsigned int>,void> *v49; // [rsp+78h] [rbp-1A8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<HttpSession>,std::less<unsigned int>,void> *v50; // [rsp+80h] [rbp-1A0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<HttpSession>,std::less<unsigned int>,void> *v51; // [rsp+88h] [rbp-198h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v52; // [rsp+90h] [rbp-190h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_size; // [rsp+98h] [rbp-188h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *v54; // [rsp+A0h] [rbp-180h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *v55; // [rsp+A8h] [rbp-178h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *v56; // [rsp+B0h] [rbp-170h]
  unsigned __int64 v57; // [rsp+B8h] [rbp-168h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *v58; // [rsp+C0h] [rbp-160h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *v59; // [rsp+C8h] [rbp-158h]
  boost::container::flat_map<unsigned int,std::shared_ptr<HttpSession>,std::less<unsigned int>,void> *v60; // [rsp+D0h] [rbp-150h]
  __int64 *v61; // [rsp+D8h] [rbp-148h]
  __int64 *v62; // [rsp+E0h] [rbp-140h]
  __int64 *v63; // [rsp+E8h] [rbp-138h]
  unsigned __int64 v64; // [rsp+F0h] [rbp-130h]
  __int64 *v65; // [rsp+F8h] [rbp-128h]
  __int64 *v66; // [rsp+100h] [rbp-120h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::const_iterator *p_position; // [rsp+108h] [rbp-118h]
  __int64 *v68; // [rsp+110h] [rbp-110h]
  __int64 *v69; // [rsp+118h] [rbp-108h]
  __int64 *v70; // [rsp+120h] [rbp-100h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *v71; // [rsp+128h] [rbp-F8h]
  unsigned __int64 v72; // [rsp+130h] [rbp-F0h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *v73; // [rsp+138h] [rbp-E8h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *v74; // [rsp+140h] [rbp-E0h]
  char *v75; // [rsp+148h] [rbp-D8h]
  common::milog::MiLogStream v76; // [rsp+150h] [rbp-D0h] BYREF
  std::string v77; // [rsp+170h] [rbp-B0h] BYREF
  char v78[144]; // [rsp+190h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v78;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 8 lock:555 64 8 6 it:559";
  *(_QWORD *)(v2 + 16) = common::minet::AServerMgr<HttpSession>::eraseSession;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( session_ )
  {
    common::milog::MiLogStream::create(
      &v76,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "eraseSession",
      550);
    v6 = std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::size(&this->session_map_);
    AppId = common::minet::AServerSession::getAppId(session_);
    common::tools::AppIdUtils::getAppIdStr[abi:cxx11](&v77, AppId);
    v8 = (const char *)std::string::c_str(&v77);
    SessionId = common::minet::AServerSession::getSessionId(session_);
    common::milog::MiLogStream::operator()(
      &v76,
      "session erased, session_id=%u app_id=%s, cur_count:%lu",
      SessionId,
      v8,
      v6);
    std::string::~string(&v77);
    common::milog::MiLogStream::~MiLogStream(&v76);
    std::lock_guard<std::recursive_mutex>::lock_guard(
      (std::lock_guard<std::recursive_mutex> *const)(v2 + 32),
      &this->session_mgr_mu_);
    __x = common::minet::AServerSession::getSessionId(session_);
    std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::erase(&this->session_map_, &__x);
    if ( common::minet::AServerSession::getAppId(session_) )
    {
      __x = common::minet::AServerSession::getAppId(session_);
      v44.m_data.m_seq.m_holder.m_size = (boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type)&this->app_id_to_session_map_;
      p_app_id_to_session_map = &this->app_id_to_session_map_;
      boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>>::find(
        &v44,
        (const boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > >::key_type *)&this->app_id_to_session_map_);
      v44.m_data.m_seq.m_holder.m_capacity = (boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type)&v44;
      v45 = v2 + 64;
      v46 = &v44;
      v47 = &v44;
      v11 = &v44;
      if ( *(_BYTE *)(((unsigned __int64)&v44 >> 3) + 0x7FFF8000) )
        v11 = (boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *)__asan_report_load8(&v44);
      m_start = v11->m_data.m_seq.m_holder.m_start;
      if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
        __asan_report_store8(v45, p_app_id_to_session_map);
      *(_QWORD *)v45 = m_start;
      v48 = &this->app_id_to_session_map_;
      v49 = &this->app_id_to_session_map_;
      v50 = &this->app_id_to_session_map_;
      v51 = &this->app_id_to_session_map_;
      v13 = &this->app_id_to_session_map_;
      if ( *(_BYTE *)(((unsigned __int64)&this->app_id_to_session_map_ >> 3) + 0x7FFF8000) )
        v13 = (boost::container::flat_map<unsigned int,std::shared_ptr<HttpSession>,std::less<unsigned int>,void> *)__asan_report_load8(&this->app_id_to_session_map_);
      v52 = v13->m_flat_tree.m_data.m_seq.m_holder.m_start;
      if ( *(_BYTE *)(((unsigned __int64)&v50->m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
        __asan_report_load8(&v50->m_flat_tree.m_data.m_seq.m_holder.m_size);
      m_size = v50->m_flat_tree.m_data.m_seq.m_holder.m_size;
      if ( m_size )
        v14 = (__int64)&v52[m_size];
      else
        v14 = (__int64)v52;
      v54 = &v44;
      v55 = (boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *)v14;
      if ( *(_BYTE *)(((unsigned __int64)&v44 >> 3) + 0x7FFF8000) )
        __asan_report_store8(&v44, p_app_id_to_session_map);
      v54->m_data.m_seq.m_holder.m_start = v55;
      v56 = &v44;
      v57 = (unsigned __int64)&v43;
      v58 = &v44;
      v59 = &v44;
      v15 = &v44;
      if ( *(_BYTE *)(((unsigned __int64)&v44 >> 3) + 0x7FFF8000) )
        v15 = (boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *)__asan_report_load8(&v44);
      v16 = v15->m_data.m_seq.m_holder.m_start;
      if ( *(_BYTE *)((v57 >> 3) + 0x7FFF8000) )
        __asan_report_store8(v57, p_app_id_to_session_map);
      *(_QWORD *)v57 = v16;
      if ( *(_QWORD *)(v2 + 64) == v43 )
      {
        if ( *(char *)(((unsigned __int64)&session_->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&session_->is_cut_packet_, p_app_id_to_session_map, &session_->is_cut_packet_);
        if ( session_->is_cut_packet_ )
        {
          common::milog::MiLogStream::create(
            &v76,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "../framework/common/minet/aserver/include/aserver_mgr.hpp",
            "eraseSession",
            583);
          v36 = common::minet::AServerSession::getAppId(session_);
          common::tools::AppIdUtils::getAppIdStr[abi:cxx11](&v77, v36);
          v37 = (const char *)std::string::c_str(&v77);
          v38 = common::minet::AServerSession::getSessionId(session_);
          common::milog::MiLogStream::operator()(&v76, "eraseSession session_id:%u donot find the app_id:%s", v38, v37);
          std::string::~string(&v77);
          common::milog::MiLogStream::~MiLogStream(&v76);
        }
      }
      else if ( std::operator!=<HttpSession>(0LL, (const std::shared_ptr<HttpSession> *)(*(_QWORD *)(v2 + 64) + 8LL)) )
      {
        v17 = std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(_QWORD *)(v2 + 64) + 8LL));
        v18 = common::minet::AServerSession::getSessionId(v17);
        if ( v18 == common::minet::AServerSession::getSessionId(session_) )
        {
          v75 = (char *)(v2 + 64);
          v19 = (__int64 *)(v2 + 64);
          if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
            v19 = (__int64 *)__asan_report_load8(v2 + 64);
          v41 = *v19;
          v60 = &this->app_id_to_session_map_;
          v61 = &v41;
          v20 = &this->app_id_to_session_map_;
          v62 = &v41;
          v63 = &v41;
          v64 = (unsigned __int64)&v43;
          v65 = &v41;
          v66 = &v41;
          v21 = &v41;
          if ( *(_BYTE *)(((unsigned __int64)&v41 >> 3) + 0x7FFF8000) )
            v21 = (__int64 *)__asan_report_load8(&v41);
          v22 = *v21;
          v23 = *(unsigned __int8 *)((v64 >> 3) + 0x7FFF8000);
          if ( (_BYTE)v23 )
            __asan_report_store8(v64, v23);
          *(_QWORD *)v64 = v22;
          p_position = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::const_iterator *)v20;
          v68 = &v43;
          v69 = &v43;
          v70 = &v43;
          v24 = &v43;
          if ( *(_BYTE *)(((unsigned __int64)&v43 >> 3) + 0x7FFF8000) )
            v24 = (__int64 *)__asan_report_load8(&v43);
          v42 = *v24;
          v25 = v20;
          boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,void>::erase(
            &v44.m_data.m_seq,
            (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::const_iterator *)v20);
          v71 = &v44;
          v72 = (unsigned __int64)&v42;
          v73 = &v44;
          v74 = &v44;
          v26 = &v44;
          if ( *(_BYTE *)(((unsigned __int64)&v44 >> 3) + 0x7FFF8000) )
            v26 = (boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *)__asan_report_load8(&v44);
          v27 = v26->m_data.m_seq.m_holder.m_start;
          if ( *(_BYTE *)((v72 >> 3) + 0x7FFF8000) )
            __asan_report_store8(v72, v25);
          *(_QWORD *)v72 = v27;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v76,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "../framework/common/minet/aserver/include/aserver_mgr.hpp",
            "eraseSession",
            570);
          v28 = std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(_QWORD *)(v2 + 64) + 8LL));
          v29 = common::minet::AServerSession::getSessionId(v28);
          v30 = common::minet::AServerSession::getSessionId(session_);
          v31 = common::minet::AServerSession::getAppId(session_);
          common::tools::AppIdUtils::getAppIdStr[abi:cxx11](&v77, v31);
          v32 = (const char *)std::string::c_str(&v77);
          common::milog::MiLogStream::operator()(
            &v76,
            "eraseSession app_id:%s session_id:%u donot match session_id:%u in map",
            v32,
            v30,
            v29);
          std::string::~string(&v77);
          common::milog::MiLogStream::~MiLogStream(&v76);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v76,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aserver/include/aserver_mgr.hpp",
          "eraseSession",
          575);
        v33 = common::minet::AServerSession::getSessionId(session_);
        v34 = common::minet::AServerSession::getAppId(session_);
        common::tools::AppIdUtils::getAppIdStr[abi:cxx11](&v77, v34);
        v35 = (const char *)std::string::c_str(&v77);
        common::milog::MiLogStream::operator()(
          &v76,
          "eraseSession app_id:%s session_id:%u session_ptr == null in map",
          v35,
          v33);
        std::string::~string(&v77);
        common::milog::MiLogStream::~MiLogStream(&v76);
      }
    }
    std::lock_guard<std::recursive_mutex>::~lock_guard((std::lock_guard<std::recursive_mutex> *const)(v2 + 32));
    result = 0;
  }
  else
  {
    result = 1;
  }
  if ( v78 == (char *)v2 )
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

// Line 595: range 000000000C6C10B8-000000000C6C15C3
__int64 __fastcall common::minet::AServerMgr<GateserverSession>::updateSessionAppId(
        common::minet::AServerMgr<GateserverSession> *const this,
        common::minet::AServerSession *session_,
        uint32_t app_id)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  uint32_t v7; // eax
  _BOOL4 v8; // r15d
  std::shared_ptr<GateserverSession> *v9; // r8
  uint32_t SessionId; // eax
  int v11; // r15d
  uint32_t v12; // eax
  uint32_t v13; // r15d
  const char *v14; // rax
  __int64 result; // rax
  std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<GateserverSession> >*,false>,bool> v17; // [rsp+40h] [rbp-110h] BYREF
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > v18; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v19; // [rsp+80h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+A0h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 10 app_id:595 64 8 8 lock:604 96 16 15 session_ptr:612";
  *(_QWORD *)(v4 + 16) = common::minet::AServerMgr<GateserverSession>::updateSessionAppId;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 48) = app_id;
  if ( session_ )
  {
    std::lock_guard<std::recursive_mutex>::lock_guard(
      (std::lock_guard<std::recursive_mutex> *const)(v4 + 64),
      &this->session_mgr_mu_);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::minet::AServerSession::getSessionId(session_);
      common::minet::AServerMgr<GateserverSession>::findSession(
        (common::minet::AServerMgr<GateserverSession> *const)(v4 + 96),
        (uint32_t)this);
      if ( std::operator==<GateserverSession>((const std::shared_ptr<GateserverSession> *)(v4 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "../framework/common/minet/aserver/include/aserver_mgr.hpp",
          "updateSessionAppId",
          615);
        SessionId = common::minet::AServerSession::getSessionId(session_);
        common::milog::MiLogStream::operator()(&v19, "findSession failed, session_id=%u", SessionId);
        common::milog::MiLogStream::~MiLogStream(&v19);
        v3 = -1;
        v11 = 0;
      }
      else
      {
        boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>>::emplace_unique<unsigned int &,std::shared_ptr<GateserverSession>&>(
          &v18,
          (unsigned int *)&this->app_id_to_session_map_,
          (std::shared_ptr<GateserverSession> *)(v4 + 48),
          (unsigned int *)(v4 + 96),
          v9);
        std::pair<boost::container::vec_iterator<std::pair*<unsigned int,std::shared_ptr<GateserverSession>>,false>,bool>::pair(
          &v17,
          (const std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<GateserverSession> >*,false>,bool> *)&v18);
        if ( v17.second )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v18.m_data.m_seq.m_holder.m_capacity,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "../framework/common/minet/aserver/include/aserver_mgr.hpp",
            "updateSessionAppId",
            624);
          v13 = common::minet::AServerSession::getSessionId(session_);
          common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)&v19, *(_DWORD *)(v4 + 48));
          v14 = (const char *)std::string::c_str(&v19);
          common::milog::MiLogStream::operator()(
            (common::milog::MiLogStream *const)&v18.m_data.m_seq.m_holder.m_capacity,
            "update client session app_id=%s, session_id=%u",
            v14,
            v13);
          std::string::~string(&v19);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v18.m_data.m_seq.m_holder.m_capacity);
          v11 = 1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "../framework/common/minet/aserver/include/aserver_mgr.hpp",
            "updateSessionAppId",
            620);
          v12 = common::minet::AServerSession::getSessionId(session_);
          common::milog::MiLogStream::operator()(
            &v19,
            "[NETWORK][ECS]duplicate client session app_id=%u, session_id=%u",
            *(unsigned int *)(v4 + 48),
            v12);
          common::milog::MiLogStream::~MiLogStream(&v19);
          v3 = -1;
          v11 = 0;
        }
      }
      std::shared_ptr<GateserverSession>::~shared_ptr((std::shared_ptr<GateserverSession> *const)(v4 + 96));
      v8 = v11 == 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "../framework/common/minet/aserver/include/aserver_mgr.hpp",
        "updateSessionAppId",
        608);
      v7 = common::minet::AServerSession::getSessionId(session_);
      common::milog::MiLogStream::operator()(&v19, "session app_id is 0, session_id=%u", v7);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v3 = -1;
      v8 = 0;
    }
    std::lock_guard<std::recursive_mutex>::~lock_guard((std::lock_guard<std::recursive_mutex> *const)(v4 + 64));
    if ( v8 )
      v3 = 0;
  }
  else
  {
    v3 = 1;
  }
  result = v3;
  if ( v20 == (char *)v4 )
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
  return result;
};

// Line 595: range 000000000C6C4F46-000000000C6C5451
__int64 __fastcall common::minet::AServerMgr<HttpSession>::updateSessionAppId(
        common::minet::AServerMgr<HttpSession> *const this,
        common::minet::AServerSession *session_,
        uint32_t app_id)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  uint32_t v7; // eax
  _BOOL4 v8; // r15d
  std::shared_ptr<HttpSession> *v9; // r8
  uint32_t SessionId; // eax
  int v11; // r15d
  uint32_t v12; // eax
  uint32_t v13; // r15d
  const char *v14; // rax
  __int64 result; // rax
  std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<HttpSession> >*,false>,bool> v17; // [rsp+40h] [rbp-110h] BYREF
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > v18; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v19; // [rsp+80h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+A0h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 10 app_id:595 64 8 8 lock:604 96 16 15 session_ptr:612";
  *(_QWORD *)(v4 + 16) = common::minet::AServerMgr<HttpSession>::updateSessionAppId;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 48) = app_id;
  if ( session_ )
  {
    std::lock_guard<std::recursive_mutex>::lock_guard(
      (std::lock_guard<std::recursive_mutex> *const)(v4 + 64),
      &this->session_mgr_mu_);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::minet::AServerSession::getSessionId(session_);
      common::minet::AServerMgr<HttpSession>::findSession(
        (common::minet::AServerMgr<HttpSession> *const)(v4 + 96),
        (uint32_t)this);
      if ( std::operator==<HttpSession>((const std::shared_ptr<HttpSession> *)(v4 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "../framework/common/minet/aserver/include/aserver_mgr.hpp",
          "updateSessionAppId",
          615);
        SessionId = common::minet::AServerSession::getSessionId(session_);
        common::milog::MiLogStream::operator()(&v19, "findSession failed, session_id=%u", SessionId);
        common::milog::MiLogStream::~MiLogStream(&v19);
        v3 = -1;
        v11 = 0;
      }
      else
      {
        boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>>::emplace_unique<unsigned int &,std::shared_ptr<HttpSession>&>(
          &v18,
          (unsigned int *)&this->app_id_to_session_map_,
          (std::shared_ptr<HttpSession> *)(v4 + 48),
          (unsigned int *)(v4 + 96),
          v9);
        std::pair<boost::container::vec_iterator<std::pair*<unsigned int,std::shared_ptr<HttpSession>>,false>,bool>::pair(
          &v17,
          (const std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<HttpSession> >*,false>,bool> *)&v18);
        if ( v17.second )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v18.m_data.m_seq.m_holder.m_capacity,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "../framework/common/minet/aserver/include/aserver_mgr.hpp",
            "updateSessionAppId",
            624);
          v13 = common::minet::AServerSession::getSessionId(session_);
          common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)&v19, *(_DWORD *)(v4 + 48));
          v14 = (const char *)std::string::c_str(&v19);
          common::milog::MiLogStream::operator()(
            (common::milog::MiLogStream *const)&v18.m_data.m_seq.m_holder.m_capacity,
            "update client session app_id=%s, session_id=%u",
            v14,
            v13);
          std::string::~string(&v19);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v18.m_data.m_seq.m_holder.m_capacity);
          v11 = 1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "../framework/common/minet/aserver/include/aserver_mgr.hpp",
            "updateSessionAppId",
            620);
          v12 = common::minet::AServerSession::getSessionId(session_);
          common::milog::MiLogStream::operator()(
            &v19,
            "[NETWORK][ECS]duplicate client session app_id=%u, session_id=%u",
            *(unsigned int *)(v4 + 48),
            v12);
          common::milog::MiLogStream::~MiLogStream(&v19);
          v3 = -1;
          v11 = 0;
        }
      }
      std::shared_ptr<HttpSession>::~shared_ptr((std::shared_ptr<HttpSession> *const)(v4 + 96));
      v8 = v11 == 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "../framework/common/minet/aserver/include/aserver_mgr.hpp",
        "updateSessionAppId",
        608);
      v7 = common::minet::AServerSession::getSessionId(session_);
      common::milog::MiLogStream::operator()(&v19, "session app_id is 0, session_id=%u", v7);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v3 = -1;
      v8 = 0;
    }
    std::lock_guard<std::recursive_mutex>::~lock_guard((std::lock_guard<std::recursive_mutex> *const)(v4 + 64));
    if ( v8 )
      v3 = 0;
  }
  else
  {
    v3 = 1;
  }
  result = v3;
  if ( v20 == (char *)v4 )
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
  return result;
};

// Line 632: range 000000000C6C86AC-000000000C6C8898
common::minet::AServerMgr<GateserverSession> *__fastcall common::minet::AServerMgr<GateserverSession>::findSession(
        common::minet::AServerMgr<GateserverSession> *const this,
        __int64 session_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession> >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<GateserverSession> >,false> __y; // [rsp+28h] [rbp-A8h] BYREF
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 session_id:632 64 8 8 lock:634 96 8 6 it:636";
  *(_QWORD *)(v3 + 16) = common::minet::AServerMgr<GateserverSession>::findSession;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  std::lock_guard<std::recursive_mutex>::lock_guard(
    (std::lock_guard<std::recursive_mutex> *const)(v3 + 64),
    (std::lock_guard<std::recursive_mutex>::mutex_type *)(session_id + 672));
  *(std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::find(
                                                                                                  (std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>> *const)(session_id + 712),
                                                                                                  (const std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::end((std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>> *const)(session_id + 712))._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<GateserverSession>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<GateserverSession> >,false> *)(v3 + 96),
         &__y) )
  {
    std::shared_ptr<GateserverSession>::shared_ptr((std::shared_ptr<GateserverSession> *const)this, 0LL);
  }
  else
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession> >,false,false> *const)(v3 + 96));
    std::shared_ptr<GateserverSession>::shared_ptr((std::shared_ptr<GateserverSession> *const)this, &v6->second);
  }
  std::lock_guard<std::recursive_mutex>::~lock_guard((std::lock_guard<std::recursive_mutex> *const)(v3 + 64));
  if ( v10 == (char *)v3 )
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
  return this;
};

// Line 632: range 000000000C6CB08E-000000000C6CB27A
common::minet::AServerMgr<HttpSession> *__fastcall common::minet::AServerMgr<HttpSession>::findSession(
        common::minet::AServerMgr<HttpSession> *const this,
        __int64 session_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession> >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<HttpSession> >,false> __y; // [rsp+28h] [rbp-A8h] BYREF
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 session_id:632 64 8 8 lock:634 96 8 6 it:636";
  *(_QWORD *)(v3 + 16) = common::minet::AServerMgr<HttpSession>::findSession;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  std::lock_guard<std::recursive_mutex>::lock_guard(
    (std::lock_guard<std::recursive_mutex> *const)(v3 + 64),
    (std::lock_guard<std::recursive_mutex>::mutex_type *)(session_id + 672));
  *(std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::find(
                                                                                            (std::unordered_map<unsigned int,std::shared_ptr<HttpSession>> *const)(session_id + 712),
                                                                                            (const std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::end((std::unordered_map<unsigned int,std::shared_ptr<HttpSession>> *const)(session_id + 712))._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<HttpSession>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<HttpSession> >,false> *)(v3 + 96),
         &__y) )
  {
    std::shared_ptr<HttpSession>::shared_ptr((std::shared_ptr<HttpSession> *const)this, 0LL);
  }
  else
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession> >,false,false> *const)(v3 + 96));
    std::shared_ptr<HttpSession>::shared_ptr((std::shared_ptr<HttpSession> *const)this, &v6->second);
  }
  std::lock_guard<std::recursive_mutex>::~lock_guard((std::lock_guard<std::recursive_mutex> *const)(v3 + 64));
  if ( v10 == (char *)v3 )
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
  return this;
};

// Line 646: range 000000000C6B41EA-000000000C6B460C
common::minet::AServerMgr<GateserverSession> *__fastcall common::minet::AServerMgr<GateserverSession>::findSessionByAppId(
        common::minet::AServerMgr<GateserverSession> *const this,
        __int64 app_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 v6; // rsi
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *v7; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer m_start; // rdx
  __int64 *v9; // rax
  __int64 v10; // rax
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *v11; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v12; // rdx
  std::lock_guard<std::recursive_mutex>::mutex_type *v16; // [rsp+28h] [rbp-138h] BYREF
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > v17; // [rsp+30h] [rbp-130h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-118h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *v19; // [rsp+50h] [rbp-110h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *v20; // [rsp+58h] [rbp-108h]
  __int64 v21; // [rsp+60h] [rbp-100h]
  __int64 v22; // [rsp+68h] [rbp-F8h]
  __int64 v23; // [rsp+70h] [rbp-F0h]
  __int64 v24; // [rsp+78h] [rbp-E8h]
  __int64 v25; // [rsp+80h] [rbp-E0h]
  __int64 v26; // [rsp+88h] [rbp-D8h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *v27; // [rsp+90h] [rbp-D0h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *v28; // [rsp+98h] [rbp-C8h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *v29; // [rsp+A0h] [rbp-C0h]
  unsigned __int64 v30; // [rsp+A8h] [rbp-B8h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *v31; // [rsp+B0h] [rbp-B0h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *v32; // [rsp+B8h] [rbp-A8h]
  char v33[160]; // [rsp+C0h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 10 app_id:646 64 8 8 lock:648 96 8 6 it:650";
  *(_QWORD *)(v3 + 16) = common::minet::AServerMgr<GateserverSession>::findSessionByAppId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  std::lock_guard<std::recursive_mutex>::lock_guard(
    (std::lock_guard<std::recursive_mutex> *const)(v3 + 64),
    (std::lock_guard<std::recursive_mutex>::mutex_type *)(app_id + 672));
  v17.m_data.m_seq.m_holder.m_size = app_id + 768;
  v6 = app_id + 768;
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>>::find(
    &v17,
    (const boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > >::key_type *)(app_id + 768));
  v17.m_data.m_seq.m_holder.m_capacity = (boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type)&v17;
  v18 = v3 + 96;
  v19 = &v17;
  v20 = &v17;
  v7 = &v17;
  if ( *(_BYTE *)(((unsigned __int64)&v17 >> 3) + 0x7FFF8000) )
    v7 = (boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *)__asan_report_load8(&v17);
  m_start = v7->m_data.m_seq.m_holder.m_start;
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
    __asan_report_store8(v18, v6);
  *(_QWORD *)v18 = m_start;
  v21 = app_id + 768;
  v22 = app_id + 768;
  v23 = app_id + 768;
  v24 = app_id + 768;
  v9 = (__int64 *)(app_id + 768);
  if ( *(_BYTE *)(((unsigned __int64)(app_id + 768) >> 3) + 0x7FFF8000) )
    v9 = (__int64 *)__asan_report_load8(app_id + 768);
  v25 = *v9;
  if ( *(_BYTE *)(((unsigned __int64)(v23 + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v23 + 8);
  v26 = *(_QWORD *)(v23 + 8);
  if ( v26 )
    v10 = 24 * v26 + v25;
  else
    v10 = v25;
  v27 = &v17;
  v28 = (boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *)v10;
  if ( *(_BYTE *)(((unsigned __int64)&v17 >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v17, v6);
  v27->m_data.m_seq.m_holder.m_start = v28;
  v29 = &v17;
  v30 = (unsigned __int64)&v16;
  v31 = &v17;
  v32 = &v17;
  v11 = &v17;
  if ( *(_BYTE *)(((unsigned __int64)&v17 >> 3) + 0x7FFF8000) )
    v11 = (boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *)__asan_report_load8(&v17);
  v12 = v11->m_data.m_seq.m_holder.m_start;
  if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
    __asan_report_store8(v30, v6);
  *(_QWORD *)v30 = v12;
  if ( *(std::lock_guard<std::recursive_mutex>::mutex_type **)(v3 + 96) == v16 )
    std::shared_ptr<GateserverSession>::shared_ptr((std::shared_ptr<GateserverSession> *const)this, 0LL);
  else
    std::shared_ptr<GateserverSession>::shared_ptr(
      (std::shared_ptr<GateserverSession> *const)this,
      (const std::shared_ptr<GateserverSession> *)(*(_QWORD *)(v3 + 96) + 8LL));
  std::lock_guard<std::recursive_mutex>::~lock_guard((std::lock_guard<std::recursive_mutex> *const)(v3 + 64));
  if ( v33 == (char *)v3 )
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
  return this;
};

// Line 646: range 000000000C6B7258-000000000C6B767A
common::minet::AServerMgr<HttpSession> *__fastcall common::minet::AServerMgr<HttpSession>::findSessionByAppId(
        common::minet::AServerMgr<HttpSession> *const this,
        __int64 app_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 v6; // rsi
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *v7; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer m_start; // rdx
  __int64 *v9; // rax
  __int64 v10; // rax
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *v11; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v12; // rdx
  std::lock_guard<std::recursive_mutex>::mutex_type *v16; // [rsp+28h] [rbp-138h] BYREF
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > v17; // [rsp+30h] [rbp-130h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-118h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *v19; // [rsp+50h] [rbp-110h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *v20; // [rsp+58h] [rbp-108h]
  __int64 v21; // [rsp+60h] [rbp-100h]
  __int64 v22; // [rsp+68h] [rbp-F8h]
  __int64 v23; // [rsp+70h] [rbp-F0h]
  __int64 v24; // [rsp+78h] [rbp-E8h]
  __int64 v25; // [rsp+80h] [rbp-E0h]
  __int64 v26; // [rsp+88h] [rbp-D8h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *v27; // [rsp+90h] [rbp-D0h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *v28; // [rsp+98h] [rbp-C8h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *v29; // [rsp+A0h] [rbp-C0h]
  unsigned __int64 v30; // [rsp+A8h] [rbp-B8h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *v31; // [rsp+B0h] [rbp-B0h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *v32; // [rsp+B8h] [rbp-A8h]
  char v33[160]; // [rsp+C0h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 10 app_id:646 64 8 8 lock:648 96 8 6 it:650";
  *(_QWORD *)(v3 + 16) = common::minet::AServerMgr<HttpSession>::findSessionByAppId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  std::lock_guard<std::recursive_mutex>::lock_guard(
    (std::lock_guard<std::recursive_mutex> *const)(v3 + 64),
    (std::lock_guard<std::recursive_mutex>::mutex_type *)(app_id + 672));
  v17.m_data.m_seq.m_holder.m_size = app_id + 768;
  v6 = app_id + 768;
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>>::find(
    &v17,
    (const boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > >::key_type *)(app_id + 768));
  v17.m_data.m_seq.m_holder.m_capacity = (boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type)&v17;
  v18 = v3 + 96;
  v19 = &v17;
  v20 = &v17;
  v7 = &v17;
  if ( *(_BYTE *)(((unsigned __int64)&v17 >> 3) + 0x7FFF8000) )
    v7 = (boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *)__asan_report_load8(&v17);
  m_start = v7->m_data.m_seq.m_holder.m_start;
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
    __asan_report_store8(v18, v6);
  *(_QWORD *)v18 = m_start;
  v21 = app_id + 768;
  v22 = app_id + 768;
  v23 = app_id + 768;
  v24 = app_id + 768;
  v9 = (__int64 *)(app_id + 768);
  if ( *(_BYTE *)(((unsigned __int64)(app_id + 768) >> 3) + 0x7FFF8000) )
    v9 = (__int64 *)__asan_report_load8(app_id + 768);
  v25 = *v9;
  if ( *(_BYTE *)(((unsigned __int64)(v23 + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v23 + 8);
  v26 = *(_QWORD *)(v23 + 8);
  if ( v26 )
    v10 = 24 * v26 + v25;
  else
    v10 = v25;
  v27 = &v17;
  v28 = (boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *)v10;
  if ( *(_BYTE *)(((unsigned __int64)&v17 >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v17, v6);
  v27->m_data.m_seq.m_holder.m_start = v28;
  v29 = &v17;
  v30 = (unsigned __int64)&v16;
  v31 = &v17;
  v32 = &v17;
  v11 = &v17;
  if ( *(_BYTE *)(((unsigned __int64)&v17 >> 3) + 0x7FFF8000) )
    v11 = (boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *)__asan_report_load8(&v17);
  v12 = v11->m_data.m_seq.m_holder.m_start;
  if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
    __asan_report_store8(v30, v6);
  *(_QWORD *)v30 = v12;
  if ( *(std::lock_guard<std::recursive_mutex>::mutex_type **)(v3 + 96) == v16 )
    std::shared_ptr<HttpSession>::shared_ptr((std::shared_ptr<HttpSession> *const)this, 0LL);
  else
    std::shared_ptr<HttpSession>::shared_ptr(
      (std::shared_ptr<HttpSession> *const)this,
      (const std::shared_ptr<HttpSession> *)(*(_QWORD *)(v3 + 96) + 8LL));
  std::lock_guard<std::recursive_mutex>::~lock_guard((std::lock_guard<std::recursive_mutex> *const)(v3 + 64));
  if ( v33 == (char *)v3 )
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
  return this;
};

// Line 660: range 000000000C6B462E-000000000C6B4B84
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GateserverSession> __cdecl common::minet::AServerMgr<GateserverSession>::findSessionByConnOffset(
        common::minet::AServerMgr<GateserverSession> *const this,
        uint32_t conn_offset)
{
  uint32_t v2; // edx
  char v3; // r15
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::size_type v9; // rsi
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *v10; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer m_start; // rdx
  std::shared_ptr<GateserverSession> result; // rax
  uint32_t conn_offseta; // [rsp+Ch] [rbp-194h]
  uint32_t idx; // [rsp+2Ch] [rbp-174h]
  __int64 v15; // [rsp+30h] [rbp-170h] BYREF
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> v16; // [rsp+38h] [rbp-168h] BYREF
  __int64 v17; // [rsp+50h] [rbp-150h]
  __int64 v18; // [rsp+58h] [rbp-148h]
  __int64 v19; // [rsp+60h] [rbp-140h]
  __int64 v20; // [rsp+68h] [rbp-138h]
  __int64 v21; // [rsp+70h] [rbp-130h]
  __int64 v22; // [rsp+78h] [rbp-128h]
  __int64 v23; // [rsp+80h] [rbp-120h]
  __int64 v24; // [rsp+88h] [rbp-118h]
  __int64 v25; // [rsp+90h] [rbp-110h]
  __int64 v26; // [rsp+98h] [rbp-108h]
  __int64 v27; // [rsp+A0h] [rbp-100h]
  __int64 v28; // [rsp+A8h] [rbp-F8h]
  __int64 v29; // [rsp+B0h] [rbp-F0h]
  __int64 v30; // [rsp+B8h] [rbp-E8h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::size_type n; // [rsp+C0h] [rbp-E0h]
  __int64 v32; // [rsp+C8h] [rbp-D8h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *v33; // [rsp+D0h] [rbp-D0h]
  unsigned __int64 v34; // [rsp+D8h] [rbp-C8h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *v35; // [rsp+E0h] [rbp-C0h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *v36; // [rsp+E8h] [rbp-B8h]
  common::milog::MiLogStream v37; // [rsp+F0h] [rbp-B0h] BYREF
  char v38[144]; // [rsp+110h] [rbp-90h] BYREF

  conn_offseta = v2;
  v4 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 9 <unknown> 64 8 8 lock:662";
  *(_QWORD *)(v4 + 16) = common::minet::AServerMgr<GateserverSession>::findSessionByConnOffset;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -202116352;
  std::lock_guard<std::recursive_mutex>::lock_guard(
    (std::lock_guard<std::recursive_mutex> *const)(v4 + 64),
    (std::lock_guard<std::recursive_mutex>::mutex_type *)(*(_QWORD *)&conn_offset + 672LL));
  v16.m_holder.m_size = *(_QWORD *)&conn_offset + 768LL;
  v16.m_holder.m_capacity = *(_QWORD *)&conn_offset + 768LL;
  v17 = *(_QWORD *)&conn_offset + 768LL;
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 776LL) >> 3) + 0x7FFF8000) )
    __asan_report_load8(*(_QWORD *)&conn_offset + 776LL);
  if ( *(_QWORD *)(v17 + 8) )
  {
    v7 = conn_offseta;
    v21 = *(_QWORD *)&conn_offset + 768LL;
    v22 = *(_QWORD *)&conn_offset + 768LL;
    v23 = *(_QWORD *)&conn_offset + 768LL;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 776LL) >> 3) + 0x7FFF8000) )
      __asan_report_load8(*(_QWORD *)&conn_offset + 776LL);
    idx = v7 % *(_QWORD *)(v23 + 8);
    v8 = idx;
    v18 = *(_QWORD *)&conn_offset + 768LL;
    v19 = *(_QWORD *)&conn_offset + 768LL;
    v20 = *(_QWORD *)&conn_offset + 768LL;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 776LL) >> 3) + 0x7FFF8000) )
      __asan_report_load8(*(_QWORD *)&conn_offset + 776LL);
    if ( v8 < *(_QWORD *)(v20 + 8) )
    {
      v27 = *(_QWORD *)&conn_offset + 768LL;
      v28 = idx;
      v29 = *(_QWORD *)&conn_offset + 768LL;
      v30 = idx;
      n = *(_QWORD *)&conn_offset + 768LL;
      v32 = idx;
      *(_BYTE *)(v4 + 48) = v3;
      v9 = n;
      boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,void>::nth(
        &v16,
        n);
      v33 = &v16;
      v34 = (unsigned __int64)&v15;
      v35 = &v16;
      v36 = &v16;
      v10 = &v16;
      if ( *(_BYTE *)(((unsigned __int64)&v16 >> 3) + 0x7FFF8000) )
        v10 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *)__asan_report_load8(&v16);
      m_start = v10->m_holder.m_start;
      if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
        __asan_report_store8(v34, v9);
      *(_QWORD *)v34 = m_start;
      std::shared_ptr<GateserverSession>::shared_ptr(
        (std::shared_ptr<GateserverSession> *const)this,
        (const std::shared_ptr<GateserverSession> *)(v15 + 8));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "../framework/common/minet/aserver/include/aserver_mgr.hpp",
        "findSessionByConnOffset",
        679);
      v24 = *(_QWORD *)&conn_offset + 768LL;
      v25 = *(_QWORD *)&conn_offset + 768LL;
      v26 = *(_QWORD *)&conn_offset + 768LL;
      if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 776LL) >> 3) + 0x7FFF8000) )
        __asan_report_load8(*(_QWORD *)&conn_offset + 776LL);
      common::milog::MiLogStream::operator()(
        &v37,
        "idx=%u greator than app_id_to_session_map_ size=%lu",
        idx,
        *(_QWORD *)(v26 + 8));
      common::milog::MiLogStream::~MiLogStream(&v37);
      std::shared_ptr<GateserverSession>::shared_ptr((std::shared_ptr<GateserverSession> *const)this, 0LL);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "findSessionByConnOffset",
      666);
    common::milog::MiLogStream::operator()(&v37, "app_id_to_session_map_ is empty");
    common::milog::MiLogStream::~MiLogStream(&v37);
    std::shared_ptr<GateserverSession>::shared_ptr((std::shared_ptr<GateserverSession> *const)this, 0LL);
  }
  std::lock_guard<std::recursive_mutex>::~lock_guard((std::lock_guard<std::recursive_mutex> *const)(v4 + 64));
  if ( v38 == (char *)v4 )
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
  result._M_ptr = (std::__shared_ptr<GateserverSession,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 660: range 000000000C6B769C-000000000C6B7BF2
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<HttpSession> __cdecl common::minet::AServerMgr<HttpSession>::findSessionByConnOffset(
        common::minet::AServerMgr<HttpSession> *const this,
        uint32_t conn_offset)
{
  uint32_t v2; // edx
  char v3; // r15
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::size_type v9; // rsi
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *v10; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer m_start; // rdx
  std::shared_ptr<HttpSession> result; // rax
  uint32_t conn_offseta; // [rsp+Ch] [rbp-194h]
  uint32_t idx; // [rsp+2Ch] [rbp-174h]
  __int64 v15; // [rsp+30h] [rbp-170h] BYREF
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> v16; // [rsp+38h] [rbp-168h] BYREF
  __int64 v17; // [rsp+50h] [rbp-150h]
  __int64 v18; // [rsp+58h] [rbp-148h]
  __int64 v19; // [rsp+60h] [rbp-140h]
  __int64 v20; // [rsp+68h] [rbp-138h]
  __int64 v21; // [rsp+70h] [rbp-130h]
  __int64 v22; // [rsp+78h] [rbp-128h]
  __int64 v23; // [rsp+80h] [rbp-120h]
  __int64 v24; // [rsp+88h] [rbp-118h]
  __int64 v25; // [rsp+90h] [rbp-110h]
  __int64 v26; // [rsp+98h] [rbp-108h]
  __int64 v27; // [rsp+A0h] [rbp-100h]
  __int64 v28; // [rsp+A8h] [rbp-F8h]
  __int64 v29; // [rsp+B0h] [rbp-F0h]
  __int64 v30; // [rsp+B8h] [rbp-E8h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::size_type n; // [rsp+C0h] [rbp-E0h]
  __int64 v32; // [rsp+C8h] [rbp-D8h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *v33; // [rsp+D0h] [rbp-D0h]
  unsigned __int64 v34; // [rsp+D8h] [rbp-C8h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *v35; // [rsp+E0h] [rbp-C0h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *v36; // [rsp+E8h] [rbp-B8h]
  common::milog::MiLogStream v37; // [rsp+F0h] [rbp-B0h] BYREF
  char v38[144]; // [rsp+110h] [rbp-90h] BYREF

  conn_offseta = v2;
  v4 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 9 <unknown> 64 8 8 lock:662";
  *(_QWORD *)(v4 + 16) = common::minet::AServerMgr<HttpSession>::findSessionByConnOffset;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -202116352;
  std::lock_guard<std::recursive_mutex>::lock_guard(
    (std::lock_guard<std::recursive_mutex> *const)(v4 + 64),
    (std::lock_guard<std::recursive_mutex>::mutex_type *)(*(_QWORD *)&conn_offset + 672LL));
  v16.m_holder.m_size = *(_QWORD *)&conn_offset + 768LL;
  v16.m_holder.m_capacity = *(_QWORD *)&conn_offset + 768LL;
  v17 = *(_QWORD *)&conn_offset + 768LL;
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 776LL) >> 3) + 0x7FFF8000) )
    __asan_report_load8(*(_QWORD *)&conn_offset + 776LL);
  if ( *(_QWORD *)(v17 + 8) )
  {
    v7 = conn_offseta;
    v21 = *(_QWORD *)&conn_offset + 768LL;
    v22 = *(_QWORD *)&conn_offset + 768LL;
    v23 = *(_QWORD *)&conn_offset + 768LL;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 776LL) >> 3) + 0x7FFF8000) )
      __asan_report_load8(*(_QWORD *)&conn_offset + 776LL);
    idx = v7 % *(_QWORD *)(v23 + 8);
    v8 = idx;
    v18 = *(_QWORD *)&conn_offset + 768LL;
    v19 = *(_QWORD *)&conn_offset + 768LL;
    v20 = *(_QWORD *)&conn_offset + 768LL;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 776LL) >> 3) + 0x7FFF8000) )
      __asan_report_load8(*(_QWORD *)&conn_offset + 776LL);
    if ( v8 < *(_QWORD *)(v20 + 8) )
    {
      v27 = *(_QWORD *)&conn_offset + 768LL;
      v28 = idx;
      v29 = *(_QWORD *)&conn_offset + 768LL;
      v30 = idx;
      n = *(_QWORD *)&conn_offset + 768LL;
      v32 = idx;
      *(_BYTE *)(v4 + 48) = v3;
      v9 = n;
      boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,void>::nth(
        &v16,
        n);
      v33 = &v16;
      v34 = (unsigned __int64)&v15;
      v35 = &v16;
      v36 = &v16;
      v10 = &v16;
      if ( *(_BYTE *)(((unsigned __int64)&v16 >> 3) + 0x7FFF8000) )
        v10 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *)__asan_report_load8(&v16);
      m_start = v10->m_holder.m_start;
      if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
        __asan_report_store8(v34, v9);
      *(_QWORD *)v34 = m_start;
      std::shared_ptr<HttpSession>::shared_ptr(
        (std::shared_ptr<HttpSession> *const)this,
        (const std::shared_ptr<HttpSession> *)(v15 + 8));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "../framework/common/minet/aserver/include/aserver_mgr.hpp",
        "findSessionByConnOffset",
        679);
      v24 = *(_QWORD *)&conn_offset + 768LL;
      v25 = *(_QWORD *)&conn_offset + 768LL;
      v26 = *(_QWORD *)&conn_offset + 768LL;
      if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 776LL) >> 3) + 0x7FFF8000) )
        __asan_report_load8(*(_QWORD *)&conn_offset + 776LL);
      common::milog::MiLogStream::operator()(
        &v37,
        "idx=%u greator than app_id_to_session_map_ size=%lu",
        idx,
        *(_QWORD *)(v26 + 8));
      common::milog::MiLogStream::~MiLogStream(&v37);
      std::shared_ptr<HttpSession>::shared_ptr((std::shared_ptr<HttpSession> *const)this, 0LL);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "findSessionByConnOffset",
      666);
    common::milog::MiLogStream::operator()(&v37, "app_id_to_session_map_ is empty");
    common::milog::MiLogStream::~MiLogStream(&v37);
    std::shared_ptr<HttpSession>::shared_ptr((std::shared_ptr<HttpSession> *const)this, 0LL);
  }
  std::lock_guard<std::recursive_mutex>::~lock_guard((std::lock_guard<std::recursive_mutex> *const)(v4 + 64));
  if ( v38 == (char *)v4 )
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
  result._M_ptr = (std::__shared_ptr<HttpSession,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 687: range 000000000C6AAF9A-000000000C6AAFBD
bool __cdecl common::minet::AServerMgr<GateserverSession>::isRun(
        common::minet::AServerMgr<GateserverSession> *const this)
{
  return std::atomic<common::minet::AServerMgr<GateserverSession>::Status>::operator common::minet::AServerMgr<GateserverSession>::Status(&this->status_) == STATUS_START;
};

// Line 687: range 000000000C6AE046-000000000C6AE069
bool __cdecl common::minet::AServerMgr<HttpSession>::isRun(common::minet::AServerMgr<HttpSession> *const this)
{
  return std::atomic<common::minet::AServerMgr<HttpSession>::Status>::operator common::minet::AServerMgr<HttpSession>::Status(&this->status_) == STATUS_START_1;
};

// Line 694: range 000000000C6AB4A8-000000000C6AB4F5
uint16_t __cdecl common::minet::AServerMgr<GateserverSession>::getListenPort(
        common::minet::AServerMgr<GateserverSession> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&this->listen_port_);
  }
  return this->listen_port_;
};

// Line 694: range 000000000C6AE554-000000000C6AE5A1
uint16_t __cdecl common::minet::AServerMgr<HttpSession>::getListenPort(
        common::minet::AServerMgr<HttpSession> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&this->listen_port_);
  }
  return this->listen_port_;
};

// Line 701: range 000000000C6AB012-000000000C6AB4A7
int32_t __cdecl common::minet::AServerMgr<GateserverSession>::broadcastPacket(
        common::minet::AServerMgr<GateserverSession> *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession> >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession> >,false,false>::pointer v7; // rax
  std::size_t v8; // rax
  const std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false> *v9; // rax
  std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  unsigned __int64 v12; // rax
  unsigned int (__fastcall *v13)(std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  bool v14; // r14
  std::vector<std::shared_ptr<GateserverSession>>::size_type v15; // rax
  std::vector<std::shared_ptr<GateserverSession>>::size_type v16; // rax
  int32_t result; // eax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<GateserverSession> >,false> __y; // [rsp+28h] [rbp-118h] BYREF
  std::size_t succ_count; // [rsp+30h] [rbp-110h]
  std::size_t idx; // [rsp+38h] [rbp-108h]
  std::shared_ptr<common::minet::Packet> v21; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 8 lock:712 64 8 6 it:713 96 24 15 session_vec:710";
  *(_QWORD *)(v2 + 16) = common::minet::AServerMgr<GateserverSession>::broadcastPacket;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( std::operator==<common::minet::Packet>(0LL, p_packet_ptr) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "broadcastPacket",
      705);
    common::milog::MiLogStream::operator()(&v22, "packet is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v5 = -1;
  }
  else
  {
    std::vector<std::shared_ptr<GateserverSession>>::vector((std::vector<std::shared_ptr<GateserverSession>> *const)(v2 + 96));
    std::lock_guard<std::recursive_mutex>::lock_guard(
      (std::lock_guard<std::recursive_mutex> *const)(v2 + 32),
      &this->session_mgr_mu_);
    *(std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::begin(&this->session_map_);
    while ( 1 )
    {
      __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<GateserverSession>>::end(&this->session_map_)._M_cur;
      if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<GateserverSession>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<GateserverSession> >,false> *)(v2 + 64),
              &__y) )
        break;
      v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession> >,false,false> *const)(v2 + 64));
      if ( std::__shared_ptr<GateserverSession,(__gnu_cxx::_Lock_policy)2>::operator bool(&v6->second) )
      {
        v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession> >,false,false> *const)(v2 + 64));
        std::vector<std::shared_ptr<GateserverSession>>::push_back(
          (std::vector<std::shared_ptr<GateserverSession>> *const)(v2 + 96),
          &v7->second);
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<GateserverSession> >,false,false> *const)(v2 + 64));
    }
    std::lock_guard<std::recursive_mutex>::~lock_guard((std::lock_guard<std::recursive_mutex> *const)(v2 + 32));
    succ_count = 0LL;
    for ( idx = 0LL; ; ++idx )
    {
      v8 = std::vector<std::shared_ptr<GateserverSession>>::size((const std::vector<std::shared_ptr<GateserverSession>> *const)(v2 + 96));
      if ( idx >= v8 )
        break;
      v9 = (const std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<GateserverSession>>::operator[]((std::vector<std::shared_ptr<GateserverSession>> *const)(v2 + 96), idx);
      v10 = std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v9);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v10);
      v12 = (unsigned __int64)(v11->_vptr_AServerSession + 10);
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8(v11->_vptr_AServerSession + 10);
      v13 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v12;
      std::shared_ptr<common::minet::Packet>::shared_ptr(&v21, p_packet_ptr);
      v14 = v13(v11, &v21) == 0;
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v21);
      if ( v14 )
        ++succ_count;
    }
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "broadcastPacket",
      732);
    v15 = std::vector<std::shared_ptr<GateserverSession>>::size((const std::vector<std::shared_ptr<GateserverSession>> *const)(v2 + 96));
    common::milog::MiLogStream::operator()(&v22, "broadcast data to %lu session, %lu succ", v15, succ_count);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v16 = std::vector<std::shared_ptr<GateserverSession>>::size((const std::vector<std::shared_ptr<GateserverSession>> *const)(v2 + 96));
    if ( succ_count == v16 )
      v5 = 0;
    else
      v5 = -1;
    std::vector<std::shared_ptr<GateserverSession>>::~vector((std::vector<std::shared_ptr<GateserverSession>> *const)(v2 + 96));
  }
  result = v5;
  if ( v23 == (char *)v2 )
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

// Line 701: range 000000000C6AE0BE-000000000C6AE553
int32_t __cdecl common::minet::AServerMgr<HttpSession>::broadcastPacket(
        common::minet::AServerMgr<HttpSession> *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession> >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession> >,false,false>::pointer v7; // rax
  std::size_t v8; // rax
  const std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false> *v9; // rax
  std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  unsigned __int64 v12; // rax
  unsigned int (__fastcall *v13)(std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  bool v14; // r14
  std::vector<std::shared_ptr<HttpSession>>::size_type v15; // rax
  std::vector<std::shared_ptr<HttpSession>>::size_type v16; // rax
  int32_t result; // eax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<HttpSession> >,false> __y; // [rsp+28h] [rbp-118h] BYREF
  std::size_t succ_count; // [rsp+30h] [rbp-110h]
  std::size_t idx; // [rsp+38h] [rbp-108h]
  std::shared_ptr<common::minet::Packet> v21; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 8 lock:712 64 8 6 it:713 96 24 15 session_vec:710";
  *(_QWORD *)(v2 + 16) = common::minet::AServerMgr<HttpSession>::broadcastPacket;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( std::operator==<common::minet::Packet>(0LL, p_packet_ptr) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "broadcastPacket",
      705);
    common::milog::MiLogStream::operator()(&v22, "packet is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v5 = -1;
  }
  else
  {
    std::vector<std::shared_ptr<HttpSession>>::vector((std::vector<std::shared_ptr<HttpSession>> *const)(v2 + 96));
    std::lock_guard<std::recursive_mutex>::lock_guard(
      (std::lock_guard<std::recursive_mutex> *const)(v2 + 32),
      &this->session_mgr_mu_);
    *(std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::begin(&this->session_map_);
    while ( 1 )
    {
      __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<HttpSession>>::end(&this->session_map_)._M_cur;
      if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<HttpSession>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<HttpSession> >,false> *)(v2 + 64),
              &__y) )
        break;
      v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession> >,false,false> *const)(v2 + 64));
      if ( std::__shared_ptr<HttpSession,(__gnu_cxx::_Lock_policy)2>::operator bool(&v6->second) )
      {
        v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession> >,false,false> *const)(v2 + 64));
        std::vector<std::shared_ptr<HttpSession>>::push_back(
          (std::vector<std::shared_ptr<HttpSession>> *const)(v2 + 96),
          &v7->second);
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HttpSession> >,false,false> *const)(v2 + 64));
    }
    std::lock_guard<std::recursive_mutex>::~lock_guard((std::lock_guard<std::recursive_mutex> *const)(v2 + 32));
    succ_count = 0LL;
    for ( idx = 0LL; ; ++idx )
    {
      v8 = std::vector<std::shared_ptr<HttpSession>>::size((const std::vector<std::shared_ptr<HttpSession>> *const)(v2 + 96));
      if ( idx >= v8 )
        break;
      v9 = (const std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<HttpSession>>::operator[](
                                                                                                   (std::vector<std::shared_ptr<HttpSession>> *const)(v2 + 96),
                                                                                                   idx);
      v10 = std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v9);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v10);
      v12 = (unsigned __int64)(v11->_vptr_AServerSession + 10);
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8(v11->_vptr_AServerSession + 10);
      v13 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v12;
      std::shared_ptr<common::minet::Packet>::shared_ptr(&v21, p_packet_ptr);
      v14 = v13(v11, &v21) == 0;
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v21);
      if ( v14 )
        ++succ_count;
    }
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "broadcastPacket",
      732);
    v15 = std::vector<std::shared_ptr<HttpSession>>::size((const std::vector<std::shared_ptr<HttpSession>> *const)(v2 + 96));
    common::milog::MiLogStream::operator()(&v22, "broadcast data to %lu session, %lu succ", v15, succ_count);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v16 = std::vector<std::shared_ptr<HttpSession>>::size((const std::vector<std::shared_ptr<HttpSession>> *const)(v2 + 96));
    if ( succ_count == v16 )
      v5 = 0;
    else
      v5 = -1;
    std::vector<std::shared_ptr<HttpSession>>::~vector((std::vector<std::shared_ptr<HttpSession>> *const)(v2 + 96));
  }
  result = v5;
  if ( v23 == (char *)v2 )
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

// Line 737: range 000000000C6AB826-000000000C6ABA7F
int __cdecl common::minet::AServerMgr<GateserverSession>::sendPacketByAppId(
        common::minet::AServerMgr<GateserverSession> *const this,
        common::minet::PacketPtr *p_packet_ptr,
        uint32_t app_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int v6; // r14d
  std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  unsigned __int64 v9; // rax
  __int64 (__fastcall *v10)(std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int result; // eax
  std::shared_ptr<common::minet::Packet> v13; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 session_ptr:739";
  *(_QWORD *)(v3 + 16) = common::minet::AServerMgr<GateserverSession>::sendPacketByAppId;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::minet::AServerMgr<GateserverSession>::findSessionByAppId(
    (common::minet::AServerMgr<GateserverSession> *const)(v3 + 32),
    (__int64)this,
    app_id);
  if ( std::operator==<GateserverSession>(0LL, (const std::shared_ptr<GateserverSession> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "sendPacketByAppId",
      742);
    common::milog::MiLogStream::operator()(&v14, "[NETWORK][ECS]can not find session app_id=%u", app_id);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v7);
    v9 = (unsigned __int64)(v8->_vptr_AServerSession + 10);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(v8->_vptr_AServerSession + 10);
    v10 = *(__int64 (__fastcall **)(std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v9;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v13, p_packet_ptr);
    v6 = v10(v8, &v13);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v13);
  }
  std::shared_ptr<GateserverSession>::~shared_ptr((std::shared_ptr<GateserverSession> *const)(v3 + 32));
  result = v6;
  if ( v15 == (char *)v3 )
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

// Line 737: range 000000000C6AE8D2-000000000C6AEB2B
int __cdecl common::minet::AServerMgr<HttpSession>::sendPacketByAppId(
        common::minet::AServerMgr<HttpSession> *const this,
        common::minet::PacketPtr *p_packet_ptr,
        uint32_t app_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int v6; // r14d
  std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  unsigned __int64 v9; // rax
  __int64 (__fastcall *v10)(std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int result; // eax
  std::shared_ptr<common::minet::Packet> v13; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 session_ptr:739";
  *(_QWORD *)(v3 + 16) = common::minet::AServerMgr<HttpSession>::sendPacketByAppId;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::minet::AServerMgr<HttpSession>::findSessionByAppId(
    (common::minet::AServerMgr<HttpSession> *const)(v3 + 32),
    (__int64)this,
    app_id);
  if ( std::operator==<HttpSession>(0LL, (const std::shared_ptr<HttpSession> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aserver/include/aserver_mgr.hpp",
      "sendPacketByAppId",
      742);
    common::milog::MiLogStream::operator()(&v14, "[NETWORK][ECS]can not find session app_id=%u", app_id);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v7);
    v9 = (unsigned __int64)(v8->_vptr_AServerSession + 10);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(v8->_vptr_AServerSession + 10);
    v10 = *(__int64 (__fastcall **)(std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v9;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v13, p_packet_ptr);
    v6 = v10(v8, &v13);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v13);
  }
  std::shared_ptr<HttpSession>::~shared_ptr((std::shared_ptr<HttpSession> *const)(v3 + 32));
  result = v6;
  if ( v15 == (char *)v3 )
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

// Line 749: range 000000000C6ABA80-000000000C6ABC4F
int __cdecl common::minet::AServerMgr<GateserverSession>::sendPacket(
        common::minet::AServerMgr<GateserverSession> *const this,
        common::minet::PacketPtr *p_packet_ptr,
        uint32_t conn_offset)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int v6; // r14d
  std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  unsigned __int64 v9; // rax
  __int64 (__fastcall *v10)(std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int result; // eax
  std::shared_ptr<common::minet::Packet> v12; // [rsp+20h] [rbp-80h] BYREF
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 session_ptr:751";
  *(_QWORD *)(v3 + 16) = common::minet::AServerMgr<GateserverSession>::sendPacket;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::minet::AServerMgr<GateserverSession>::findSessionByConnOffset(
    (common::minet::AServerMgr<GateserverSession> *const)(v3 + 32),
    (uint32_t)this);
  if ( std::operator==<GateserverSession>(0LL, (const std::shared_ptr<GateserverSession> *)(v3 + 32)) )
  {
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v7);
    v9 = (unsigned __int64)(v8->_vptr_AServerSession + 10);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(v8->_vptr_AServerSession + 10);
    v10 = *(__int64 (__fastcall **)(std::__shared_ptr_access<GateserverSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v9;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v12, p_packet_ptr);
    v6 = v10(v8, &v12);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v12);
  }
  std::shared_ptr<GateserverSession>::~shared_ptr((std::shared_ptr<GateserverSession> *const)(v3 + 32));
  result = v6;
  if ( v13 == (char *)v3 )
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

// Line 749: range 000000000C6AEB2C-000000000C6AECFB
int __cdecl common::minet::AServerMgr<HttpSession>::sendPacket(
        common::minet::AServerMgr<HttpSession> *const this,
        common::minet::PacketPtr *p_packet_ptr,
        uint32_t conn_offset)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int v6; // r14d
  std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  unsigned __int64 v9; // rax
  __int64 (__fastcall *v10)(std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int result; // eax
  std::shared_ptr<common::minet::Packet> v12; // [rsp+20h] [rbp-80h] BYREF
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 session_ptr:751";
  *(_QWORD *)(v3 + 16) = common::minet::AServerMgr<HttpSession>::sendPacket;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::minet::AServerMgr<HttpSession>::findSessionByConnOffset(
    (common::minet::AServerMgr<HttpSession> *const)(v3 + 32),
    (uint32_t)this);
  if ( std::operator==<HttpSession>(0LL, (const std::shared_ptr<HttpSession> *)(v3 + 32)) )
  {
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v7);
    v9 = (unsigned __int64)(v8->_vptr_AServerSession + 10);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(v8->_vptr_AServerSession + 10);
    v10 = *(__int64 (__fastcall **)(std::__shared_ptr_access<HttpSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v9;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v12, p_packet_ptr);
    v6 = v10(v8, &v12);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v12);
  }
  std::shared_ptr<HttpSession>::~shared_ptr((std::shared_ptr<HttpSession> *const)(v3 + 32));
  result = v6;
  if ( v13 == (char *)v3 )
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
