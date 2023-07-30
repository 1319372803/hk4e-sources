// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/aclient/include/aclient_mgr.hpp

// Line 31: range 000000000C872654-000000000C872702
void __cdecl common::minet::AClientMgr<DispatchConnect>::~AClientMgr(
        common::minet::AClientMgr<DispatchConnect> *const this)
{
  int (**v1)(...); // rdx
  boost::asio::io_context *i; // rbx

  v1 = (int (**)(...))(&`vtable for'common::minet::AClientMgr<DispatchConnect> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_AClientBase = v1;
  common::minet::AClientMgr<DispatchConnect>::final(this);
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::~flat_map(&this->conn_map_);
  boost::thread_group::~thread_group(&this->ioc_thread_group_);
  if ( this != (common::minet::AClientMgr<DispatchConnect> *const)-16LL )
  {
    for ( i = (boost::asio::io_context *)&this->ioc_thread_group_;
          i != this->ioc_arr_;
          boost::asio::io_context::~io_context(i) )
    {
      --i;
    }
  }
};

// Line 31: range 000000000C872704-000000000C8727B2
void __cdecl common::minet::AClientMgr<GameserverConnect>::~AClientMgr(
        common::minet::AClientMgr<GameserverConnect> *const this)
{
  int (**v1)(...); // rdx
  boost::asio::io_context *i; // rbx

  v1 = (int (**)(...))(&`vtable for'common::minet::AClientMgr<GameserverConnect> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_AClientBase = v1;
  common::minet::AClientMgr<GameserverConnect>::final(this);
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::~flat_map(&this->conn_map_);
  boost::thread_group::~thread_group(&this->ioc_thread_group_);
  if ( this != (common::minet::AClientMgr<GameserverConnect> *const)-16LL )
  {
    for ( i = (boost::asio::io_context *)&this->ioc_thread_group_;
          i != this->ioc_arr_;
          boost::asio::io_context::~io_context(i) )
    {
      --i;
    }
  }
};

// Line 31: range 000000000C8725A4-000000000C872652
void __cdecl common::minet::AClientMgr<PathfindingserverConnect>::~AClientMgr(
        common::minet::AClientMgr<PathfindingserverConnect> *const this)
{
  int (**v1)(...); // rdx
  boost::asio::io_context *i; // rbx

  v1 = (int (**)(...))(&`vtable for'common::minet::AClientMgr<PathfindingserverConnect> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_AClientBase = v1;
  common::minet::AClientMgr<PathfindingserverConnect>::final(this);
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::~flat_map(&this->conn_map_);
  boost::thread_group::~thread_group(&this->ioc_thread_group_);
  if ( this != (common::minet::AClientMgr<PathfindingserverConnect> *const)-16LL )
  {
    for ( i = (boost::asio::io_context *)&this->ioc_thread_group_;
          i != this->ioc_arr_;
          boost::asio::io_context::~io_context(i) )
    {
      --i;
    }
  }
};

// Line 31: range 000000000C8724F4-000000000C8725A2
void __cdecl common::minet::AClientMgr<TothemoonserverConnect>::~AClientMgr(
        common::minet::AClientMgr<TothemoonserverConnect> *const this)
{
  int (**v1)(...); // rdx
  boost::asio::io_context *i; // rbx

  v1 = (int (**)(...))(&`vtable for'common::minet::AClientMgr<TothemoonserverConnect> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_AClientBase = v1;
  common::minet::AClientMgr<TothemoonserverConnect>::final(this);
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::~flat_map(&this->conn_map_);
  boost::thread_group::~thread_group(&this->ioc_thread_group_);
  if ( this != (common::minet::AClientMgr<TothemoonserverConnect> *const)-16LL )
  {
    for ( i = (boost::asio::io_context *)&this->ioc_thread_group_;
          i != this->ioc_arr_;
          boost::asio::io_context::~io_context(i) )
    {
      --i;
    }
  }
};

// Line 40: range 000000000C865A24-000000000C865B5D
int __cdecl common::minet::AClientMgr<DispatchConnect>::final(common::minet::AClientMgr<DispatchConnect> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int result; // eax
  char v5[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 8 wlock:42";
  *(_QWORD *)(v1 + 16) = common::minet::AClientMgr<DispatchConnect>::final;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::unique_lock<std::shared_mutex>::unique_lock(
    (std::unique_lock<std::shared_mutex> *const)(v1 + 32),
    &this->shared_mu_);
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect>>>,void>::priv_destroy_all(&this->conn_map_.m_flat_tree.m_data.m_seq);
  std::atomic<common::minet::AClientMgr<DispatchConnect>::Status>::operator=(&this->status_, STATUS_UN_INIT_3);
  std::unique_lock<std::shared_mutex>::~unique_lock((std::unique_lock<std::shared_mutex> *const)(v1 + 32));
  result = 0;
  if ( v5 == (char *)v1 )
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

// Line 40: range 000000000C7CDD04-000000000C7CDE3D
int __cdecl common::minet::AClientMgr<GameserverConnect>::final(
        common::minet::AClientMgr<GameserverConnect> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int result; // eax
  char v5[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 8 wlock:42";
  *(_QWORD *)(v1 + 16) = common::minet::AClientMgr<GameserverConnect>::final;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::unique_lock<std::shared_mutex>::unique_lock(
    (std::unique_lock<std::shared_mutex> *const)(v1 + 32),
    &this->shared_mu_);
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect>>>,void>::priv_destroy_all(&this->conn_map_.m_flat_tree.m_data.m_seq);
  std::atomic<common::minet::AClientMgr<GameserverConnect>::Status>::operator=(&this->status_, STATUS_UN_INIT_0);
  std::unique_lock<std::shared_mutex>::~unique_lock((std::unique_lock<std::shared_mutex> *const)(v1 + 32));
  result = 0;
  if ( v5 == (char *)v1 )
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

// Line 40: range 000000000C7CE03A-000000000C7CE173
int __cdecl common::minet::AClientMgr<PathfindingserverConnect>::final(
        common::minet::AClientMgr<PathfindingserverConnect> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int result; // eax
  char v5[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 8 wlock:42";
  *(_QWORD *)(v1 + 16) = common::minet::AClientMgr<PathfindingserverConnect>::final;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::unique_lock<std::shared_mutex>::unique_lock(
    (std::unique_lock<std::shared_mutex> *const)(v1 + 32),
    &this->shared_mu_);
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect>>>,void>::priv_destroy_all(&this->conn_map_.m_flat_tree.m_data.m_seq);
  std::atomic<common::minet::AClientMgr<PathfindingserverConnect>::Status>::operator=(&this->status_, STATUS_UN_INIT_1);
  std::unique_lock<std::shared_mutex>::~unique_lock((std::unique_lock<std::shared_mutex> *const)(v1 + 32));
  result = 0;
  if ( v5 == (char *)v1 )
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

// Line 40: range 000000000C7CE356-000000000C7CE48F
int __cdecl common::minet::AClientMgr<TothemoonserverConnect>::final(
        common::minet::AClientMgr<TothemoonserverConnect> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int result; // eax
  char v5[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 8 wlock:42";
  *(_QWORD *)(v1 + 16) = common::minet::AClientMgr<TothemoonserverConnect>::final;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::unique_lock<std::shared_mutex>::unique_lock(
    (std::unique_lock<std::shared_mutex> *const)(v1 + 32),
    &this->shared_mu_);
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect>>>,void>::priv_destroy_all(&this->conn_map_.m_flat_tree.m_data.m_seq);
  std::atomic<common::minet::AClientMgr<TothemoonserverConnect>::Status>::operator=(&this->status_, STATUS_UN_INIT_2);
  std::unique_lock<std::shared_mutex>::~unique_lock((std::unique_lock<std::shared_mutex> *const)(v1 + 32));
  result = 0;
  if ( v5 == (char *)v1 )
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

// Line 53: range 000000000C85A8E8-000000000C85ACFA
int __cdecl common::minet::AClientMgr<DispatchConnect>::init(
        common::minet::AClientMgr<DispatchConnect> *const this,
        uint32_t self_app_id,
        const char *conf_file_path)
{
  common::tools::PTree *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned __int64 v6; // rax
  int v7; // r14d
  int result; // eax
  std::allocator<char> __a; // [rsp+27h] [rbp-B9h] BYREF
  std::string path; // [rsp+30h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (common::tools::PTree *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (common::tools::PTree *)v4;
  }
  v3->impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)1102416563;
  v3[1].impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)"2 32 8 5 pt:57 64 8 13 db_conf_pt:59";
  v3[2].impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)common::minet::AClientMgr<DispatchConnect>::init;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  common::tools::PTree::PTree(v3 + 4);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&path, conf_file_path, &__a);
  common::tools::PTree::readXml(v3 + 4, &path);
  std::string::~string(&path);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&path, "GlobalConf.ClientConf", &__a);
  common::tools::PTree::getChild(v3 + 4, &path);
  std::string::~string(&path);
  std::allocator<char>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v6 = (unsigned __int64)(this->_vptr_AClientBase + 1);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(this->_vptr_AClientBase + 1);
  v7 = (*(__int64 (__fastcall **)(common::minet::AClientMgr<DispatchConnect> *const, _QWORD, common::tools::PTree *))v6)(
         this,
         self_app_id,
         v3 + 8);
  common::tools::PTree::~PTree(v3 + 8);
  common::tools::PTree::~PTree(v3 + 4);
  result = v7;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 53: range 000000000C859E1A-000000000C85A22C
int __cdecl common::minet::AClientMgr<GameserverConnect>::init(
        common::minet::AClientMgr<GameserverConnect> *const this,
        uint32_t self_app_id,
        const char *conf_file_path)
{
  common::tools::PTree *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned __int64 v6; // rax
  int v7; // r14d
  int result; // eax
  std::allocator<char> __a; // [rsp+27h] [rbp-B9h] BYREF
  std::string path; // [rsp+30h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (common::tools::PTree *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (common::tools::PTree *)v4;
  }
  v3->impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)1102416563;
  v3[1].impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)"2 32 8 5 pt:57 64 8 13 db_conf_pt:59";
  v3[2].impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)common::minet::AClientMgr<GameserverConnect>::init;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  common::tools::PTree::PTree(v3 + 4);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&path, conf_file_path, &__a);
  common::tools::PTree::readXml(v3 + 4, &path);
  std::string::~string(&path);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&path, "GlobalConf.ClientConf", &__a);
  common::tools::PTree::getChild(v3 + 4, &path);
  std::string::~string(&path);
  std::allocator<char>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v6 = (unsigned __int64)(this->_vptr_AClientBase + 1);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(this->_vptr_AClientBase + 1);
  v7 = (*(__int64 (__fastcall **)(common::minet::AClientMgr<GameserverConnect> *const, _QWORD, common::tools::PTree *))v6)(
         this,
         self_app_id,
         v3 + 8);
  common::tools::PTree::~PTree(v3 + 8);
  common::tools::PTree::~PTree(v3 + 4);
  result = v7;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 53: range 000000000C859030-000000000C859442
int __cdecl common::minet::AClientMgr<PathfindingserverConnect>::init(
        common::minet::AClientMgr<PathfindingserverConnect> *const this,
        uint32_t self_app_id,
        const char *conf_file_path)
{
  common::tools::PTree *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned __int64 v6; // rax
  int v7; // r14d
  int result; // eax
  std::allocator<char> __a; // [rsp+27h] [rbp-B9h] BYREF
  std::string path; // [rsp+30h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (common::tools::PTree *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (common::tools::PTree *)v4;
  }
  v3->impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)1102416563;
  v3[1].impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)"2 32 8 5 pt:57 64 8 13 db_conf_pt:59";
  v3[2].impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)common::minet::AClientMgr<PathfindingserverConnect>::init;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  common::tools::PTree::PTree(v3 + 4);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&path, conf_file_path, &__a);
  common::tools::PTree::readXml(v3 + 4, &path);
  std::string::~string(&path);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&path, "GlobalConf.ClientConf", &__a);
  common::tools::PTree::getChild(v3 + 4, &path);
  std::string::~string(&path);
  std::allocator<char>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v6 = (unsigned __int64)(this->_vptr_AClientBase + 1);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(this->_vptr_AClientBase + 1);
  v7 = (*(__int64 (__fastcall **)(common::minet::AClientMgr<PathfindingserverConnect> *const, _QWORD, common::tools::PTree *))v6)(
         this,
         self_app_id,
         v3 + 8);
  common::tools::PTree::~PTree(v3 + 8);
  common::tools::PTree::~PTree(v3 + 4);
  result = v7;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 53: range 000000000C857CD2-000000000C8580E4
int __cdecl common::minet::AClientMgr<TothemoonserverConnect>::init(
        common::minet::AClientMgr<TothemoonserverConnect> *const this,
        uint32_t self_app_id,
        const char *conf_file_path)
{
  common::tools::PTree *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned __int64 v6; // rax
  int v7; // r14d
  int result; // eax
  std::allocator<char> __a; // [rsp+27h] [rbp-B9h] BYREF
  std::string path; // [rsp+30h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (common::tools::PTree *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (common::tools::PTree *)v4;
  }
  v3->impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)1102416563;
  v3[1].impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)"2 32 8 5 pt:57 64 8 13 db_conf_pt:59";
  v3[2].impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)common::minet::AClientMgr<TothemoonserverConnect>::init;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  common::tools::PTree::PTree(v3 + 4);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&path, conf_file_path, &__a);
  common::tools::PTree::readXml(v3 + 4, &path);
  std::string::~string(&path);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&path, "GlobalConf.ClientConf", &__a);
  common::tools::PTree::getChild(v3 + 4, &path);
  std::string::~string(&path);
  std::allocator<char>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v6 = (unsigned __int64)(this->_vptr_AClientBase + 1);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(this->_vptr_AClientBase + 1);
  v7 = (*(__int64 (__fastcall **)(common::minet::AClientMgr<TothemoonserverConnect> *const, _QWORD, common::tools::PTree *))v6)(
         this,
         self_app_id,
         v3 + 8);
  common::tools::PTree::~PTree(v3 + 8);
  common::tools::PTree::~PTree(v3 + 4);
  result = v7;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 73: range 000000000C85ACFC-000000000C85D0A1
int __cdecl common::minet::AClientMgr<DispatchConnect>::init(
        common::minet::AClientMgr<DispatchConnect> *const this,
        uint32_t self_app_id,
        const common::tools::PTree *pt)
{
  unsigned __int64 v3; // r15
  __int64 v4; // rax
  _DWORD *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  uint16_t v8; // si
  uint16_t v9; // di
  unsigned int v10; // ecx
  unsigned int recv_buf_len; // ebx
  unsigned int v12; // edx
  bool v13; // dl
  bool v14; // cl
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  uint32_t v19; // ecx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rbx
  std::list<std::pair<std::string,common::tools::PTree>>::size_type thread_num; // rbx
  std::list<std::pair<std::string,common::tools::PTree>>::size_type v25; // rcx
  common::tools::PTree *p_second; // rbx
  _BOOL4 v27; // ebx
  common::tools::PTree *v28; // rbx
  common::tools::PTree *v29; // rbx
  _BOOL4 v30; // ebx
  uint32_t v31; // eax
  int v32; // ebx
  uint32_t v33; // r12d
  uint16_t v34; // bx
  const char *v35; // rax
  std::shared_ptr<DispatchConnect> *v36; // r8
  unsigned int v37; // ebx
  const char *v38; // rax
  unsigned int v39; // r12d
  unsigned int v40; // ebx
  const char *v41; // rax
  int v42; // ebx
  __int64 v43; // r9
  __int64 v44; // r8
  void *p_m_size; // rdi
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_size; // rsi
  _BOOL4 v47; // r11d
  uint32_t v48; // r10d
  __int64 v49; // rcx
  int result; // eax
  uint16_t keep_alive_sec; // [rsp+Ch] [rbp-2D4h]
  uint16_t timeout_sec; // [rsp+10h] [rbp-2D0h]
  bool is_cut_packet; // [rsp+14h] [rbp-2CCh]
  uint32_t target_app_id; // [rsp+18h] [rbp-2C8h]
  uint32_t max_send_packet_len; // [rsp+1Ch] [rbp-2C4h]
  bool is_async_send; // [rsp+20h] [rbp-2C0h]
  uint32_t cache_packet_max_num; // [rsp+24h] [rbp-2BCh]
  std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // [rsp+28h] [rbp-2B8h]
  uint32_t reconnect_max_interval; // [rsp+30h] [rbp-2B0h]
  int v60; // [rsp+34h] [rbp-2ACh]
  uint32_t reconnect_min_interval; // [rsp+40h] [rbp-2A0h]
  std::allocator<char> __a; // [rsp+51h] [rbp-28Fh] BYREF
  uint16_t port; // [rsp+52h] [rbp-28Eh]
  uint32_t ioc_index; // [rsp+54h] [rbp-28Ch]
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_begin; // [rsp+58h] [rbp-288h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_end; // [rsp+60h] [rbp-280h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>> *__for_range; // [rsp+68h] [rbp-278h]
  std::pair<std::string,common::tools::PTree> *p; // [rsp+70h] [rbp-270h]
  unsigned int *p_conn_map; // [rsp+80h] [rbp-260h]
  unsigned int *args_0; // [rsp+88h] [rbp-258h]
  std::shared_ptr<DispatchConnect> *v74; // [rsp+90h] [rbp-250h]
  std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<DispatchConnect> >*,false>,bool> *v75; // [rsp+98h] [rbp-248h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v76; // [rsp+A0h] [rbp-240h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v77; // [rsp+A8h] [rbp-238h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v78; // [rsp+B0h] [rbp-230h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v79; // [rsp+B8h] [rbp-228h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v80; // [rsp+C0h] [rbp-220h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v81; // [rsp+C8h] [rbp-218h]
  std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<DispatchConnect> >*,false>,bool> v82; // [rsp+D0h] [rbp-210h] BYREF
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > > > v83; // [rsp+E0h] [rbp-200h] BYREF
  std::string v84; // [rsp+110h] [rbp-1D0h] BYREF
  std::string v85; // [rsp+130h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v86; // [rsp+150h] [rbp-190h] BYREF
  char v87[368]; // [rsp+170h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v87;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 17 target_app_id:140 64 8 16 pt_conn_list:126 96 16 15 connect_ptr:157 128 24 17 pt_child"
                        "_list:127 192 32 14 app_id_str:139 256 32 6 ip:147";
  *(_QWORD *)(v3 + 16) = common::minet::AClientMgr<DispatchConnect>::init;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  if ( std::atomic<common::minet::AClientMgr<DispatchConnect>::Status>::operator common::minet::AClientMgr<DispatchConnect>::Status(&this->status_) )
  {
    common::milog::MiLogStream::create(
      &v86,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "../framework/common/minet/aclient/include/aclient_mgr.hpp",
      "init",
      77);
    v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v86, (const char (*)[19])"client_mgr status=");
    v7 = common::milog::MiLogStream::operator<<<std::atomic<common::minet::AClientMgr<DispatchConnect>::Status>,(std::atomic<common::minet::AClientMgr<DispatchConnect>::Status>*)0>(
           v6,
           &this->status_);
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v7,
      (const char (*)[40])", try to add dynamic server xml it now.");
    common::milog::MiLogStream::~MiLogStream(&v86);
    v60 = 1;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "KeepAliveSec.<xmlattr>.value", &__a);
    v8 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)&v86);
    if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) <= 1 )
    {
      __asan_report_store2(&this->keep_alive_sec_);
    }
    this->keep_alive_sec_ = v8;
    std::string::~string(&v86);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "TimeoutSec.<xmlattr>.value", &__a);
    v9 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)&v86);
    if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 98) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) )
    {
      v9 = (_WORD)this + 610;
      __asan_report_store2(&this->timeout_sec_);
    }
    this->timeout_sec_ = v9;
    std::string::~string(&v86);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "RecvBufLen.<xmlattr>.value", &__a);
    v10 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)&v86);
    if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->recv_buf_len_);
    }
    this->recv_buf_len_ = v10;
    std::string::~string(&v86);
    std::allocator<char>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->recv_buf_len_);
    }
    recv_buf_len = this->recv_buf_len_;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v83.m_data.m_seq.m_holder.m_capacity,
      "MaxSendPacketLen.<xmlattr>.value",
      &__a);
    v12 = common::tools::PTree::get<unsigned int>(
            pt,
            (const std::string *)&v83.m_data.m_seq.m_holder.m_capacity,
            recv_buf_len);
    if ( *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->max_send_packet_len_);
    }
    this->max_send_packet_len_ = v12;
    std::string::~string(&v83.m_data.m_seq.m_holder.m_capacity);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "CutPacket.<xmlattr>.value", &__a);
    v13 = common::tools::PTree::get<bool>(pt, (const std::string *)&v86);
    if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_cut_packet_);
    this->is_cut_packet_ = v13;
    std::string::~string(&v86);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v84, "AsyncSend.<xmlattr>.value", &__a);
    v14 = common::tools::PTree::get<bool>(pt, &v84, 0);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_async_send_);
    }
    this->is_async_send_ = v14;
    std::string::~string(&v84);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v85, "AsyncSend.<xmlattr>.CachePacketMaxNum", &__a);
    v15 = common::tools::PTree::get<unsigned int>(pt, &v85, 0xC8u);
    if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_store4(&this->cache_packet_max_num_);
    }
    this->cache_packet_max_num_ = v15;
    std::string::~string(&v85);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "ThreadNum.<xmlattr>.value", &__a);
    v16 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)&v86);
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->thread_num_);
    }
    this->thread_num_ = v16;
    std::string::~string(&v86);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 192),
      "Reconnect.<xmlattr>.min_interval",
      &__a);
    v17 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)(v3 + 192), 0x3E8u);
    if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->reconnect_min_interval_);
    }
    this->reconnect_min_interval_ = v17;
    std::string::~string((void *)(v3 + 192));
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 256),
      "Reconnect.<xmlattr>.max_interval",
      &__a);
    v18 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)(v3 + 256), 0xBB8u);
    if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_store4(&this->reconnect_max_interval_);
    }
    this->reconnect_max_interval_ = v18;
    std::string::~string((void *)(v3 + 256));
    std::allocator<char>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->reconnect_min_interval_);
    }
    v19 = this->reconnect_min_interval_;
    if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->reconnect_max_interval_);
    }
    if ( v19 <= this->reconnect_max_interval_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->recv_buf_len_);
      }
      if ( this->recv_buf_len_ > 9 && this->recv_buf_len_ <= 0x800 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load1(&this->is_async_send_);
        }
        if ( !this->is_async_send_ )
          goto LABEL_46;
        if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cache_packet_max_num_);
        }
        if ( this->cache_packet_max_num_ )
        {
LABEL_46:
          if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&this->thread_num_);
          }
          if ( this->thread_num_ && this->thread_num_ <= 0x10 )
          {
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
            std::allocator<char>::allocator(&__a);
            std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "ConnectList", &__a);
            common::tools::PTree::getChild(pt, (const std::string *)&v86);
            std::string::~string(&v86);
            std::allocator<char>::~allocator(&__a);
            common::tools::PTree::getAllChild[abi:cxx11](
              (std::list<std::pair<std::string,common::tools::PTree>> *)(v3 + 128),
              (const common::tools::PTree *const)(v3 + 64));
            common::milog::MiLogStream::create(
              &v86,
              &common::milog::MiLogDefault::default_log_obj_,
              2u,
              "../framework/common/minet/aclient/include/aclient_mgr.hpp",
              "init",
              129);
            v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    &v86,
                    (const char (*)[16])"PTreeList size:");
            __for_end._M_node = (std::__detail::_List_node_base *)std::list<std::pair<std::string,common::tools::PTree>>::size((const std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 128));
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v23,
              (const unsigned __int64 *)&__for_end);
            common::milog::MiLogStream::~MiLogStream(&v86);
            if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&this->thread_num_);
            }
            thread_num = this->thread_num_;
            if ( thread_num > std::list<std::pair<std::string,common::tools::PTree>>::size((const std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 128)) )
            {
              common::milog::MiLogStream::create(
                &v86,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                "init",
                132);
              v25 = std::list<std::pair<std::string,common::tools::PTree>>::size((const std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 128));
              if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&this->thread_num_);
              }
              common::milog::MiLogStream::operator()(
                &v86,
                "thread_num_ %d is bigger than connect list size %lu",
                this->thread_num_,
                v25);
              common::milog::MiLogStream::~MiLogStream(&v86);
            }
            ioc_index = 0;
            __for_range = (std::list<std::pair<std::string,common::tools::PTree>> *)(v3 + 128);
            __for_begin._M_node = std::list<std::pair<std::string,common::tools::PTree>>::begin((std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 128))._M_node;
            __for_end._M_node = std::list<std::pair<std::string,common::tools::PTree>>::end(__for_range)._M_node;
            while ( std::operator!=(&__for_begin, &__for_end) )
            {
              p = std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator*(&__for_begin);
              p_second = &p->second;
              std::allocator<char>::allocator(&__a);
              std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "<xmlattr>.app_id", &__a);
              common::tools::PTree::get<std::string>((std::string *)(v3 + 192), p_second, (const std::string *)&v86);
              std::string::~string(&v86);
              std::allocator<char>::~allocator(&__a);
              std::string::basic_string(&v86, v3 + 192);
              *(_DWORD *)(v3 + 48) = common::tools::AppIdUtils::getAppId((std::string *)&v86);
              std::string::~string(&v86);
              if ( *(_DWORD *)(v3 + 48) )
              {
                v28 = &p->second;
                std::allocator<char>::allocator(&__a);
                std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "<xmlattr>.ip", &__a);
                common::tools::PTree::get<std::string>((std::string *)(v3 + 256), v28, (const std::string *)&v86);
                std::string::~string(&v86);
                std::allocator<char>::~allocator(&__a);
                v29 = &p->second;
                std::allocator<char>::allocator(&__a);
                std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "<xmlattr>.port", &__a);
                port = common::tools::PTree::get<unsigned short>(v29, (const std::string *)&v86);
                std::string::~string(&v86);
                std::allocator<char>::~allocator(&__a);
                if ( port )
                {
                  v31 = ioc_index++;
                  if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3)
                                                                         + 0x7FFF8000) )
                  {
                    v31 = __asan_report_load4(&this->thread_num_);
                  }
                  common::tools::perf::make_shared<DispatchConnect,boost::asio::io_context &>(
                    (boost::asio::io_context *)(v3 + 96),
                    &this->ioc_arr_[v31 % this->thread_num_]);
                  if ( std::operator==<DispatchConnect>(0LL, (const std::shared_ptr<DispatchConnect> *)(v3 + 96)) )
                  {
                    common::milog::MiLogStream::create(
                      &v86,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                      "init",
                      160);
                    common::milog::MiLogStream::operator()(&v86, "new ConnectT failed.");
                    common::milog::MiLogStream::~MiLogStream(&v86);
                    v60 = 1;
                    v32 = 0;
                  }
                  else
                  {
                    v58 = std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                    if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3)
                                                                           + 0x7FFF8000) )
                    {
                      __asan_report_load4(&this->reconnect_max_interval_);
                    }
                    reconnect_max_interval = this->reconnect_max_interval_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&this->reconnect_min_interval_);
                    }
                    reconnect_min_interval = this->reconnect_min_interval_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                                           + 0x7FFF8000) )
                    {
                      __asan_report_load4(&this->cache_packet_max_num_);
                    }
                    cache_packet_max_num = this->cache_packet_max_num_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3)
                                                                         + 0x7FFF8000) )
                    {
                      __asan_report_load1(&this->is_async_send_);
                    }
                    is_async_send = this->is_async_send_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&this->max_send_packet_len_);
                    }
                    max_send_packet_len = this->max_send_packet_len_;
                    target_app_id = *(_DWORD *)(v3 + 48);
                    if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
                      __asan_report_load1(&this->is_cut_packet_);
                    is_cut_packet = this->is_cut_packet_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)this + 98) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_load2(&this->timeout_sec_);
                    }
                    timeout_sec = this->timeout_sec_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) <= 1 )
                    {
                      __asan_report_load2(&this->keep_alive_sec_);
                    }
                    keep_alive_sec = this->keep_alive_sec_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3)
                                                                           + 0x7FFF8000) )
                    {
                      __asan_report_load4(&this->recv_buf_len_);
                    }
                    v33 = this->recv_buf_len_;
                    v34 = port;
                    v35 = (const char *)std::string::c_str(v3 + 256);
                    if ( common::minet::AClientConnect::init(
                           v58,
                           self_app_id,
                           v35,
                           v34,
                           v33,
                           keep_alive_sec,
                           timeout_sec,
                           is_cut_packet,
                           target_app_id,
                           max_send_packet_len,
                           is_async_send,
                           cache_packet_max_num,
                           reconnect_min_interval,
                           reconnect_max_interval) )
                    {
                      common::milog::MiLogStream::create(
                        &v86,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                        "init",
                        167);
                      v37 = port;
                      v38 = (const char *)std::string::c_str(v3 + 256);
                      common::milog::MiLogStream::operator()(&v86, "init ConnectT %s:%u failed.", v38, v37);
                      common::milog::MiLogStream::~MiLogStream(&v86);
                      v60 = 1;
                      v32 = 0;
                    }
                    else
                    {
                      p_conn_map = (unsigned int *)&this->conn_map_;
                      args_0 = (unsigned int *)(v3 + 96);
                      v74 = (std::shared_ptr<DispatchConnect> *)(v3 + 48);
                      boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect>>,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect>>>>::emplace_unique<unsigned int &,std::shared_ptr<DispatchConnect>&>(
                        &v83,
                        (unsigned int *)&this->conn_map_,
                        (std::shared_ptr<DispatchConnect> *)(v3 + 48),
                        (unsigned int *)(v3 + 96),
                        v36);
                      v75 = (std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<DispatchConnect> >*,false>,bool> *)&v83;
                      std::pair<boost::container::vec_iterator<std::pair*<unsigned int,std::shared_ptr<DispatchConnect>>,false>,bool>::pair(
                        &v82,
                        (const std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<DispatchConnect> >*,false>,bool> *)&v83);
                      if ( v82.second )
                      {
                        v32 = 1;
                      }
                      else
                      {
                        common::milog::MiLogStream::create(
                          &v86,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                          "init",
                          173);
                        v39 = *(_DWORD *)(v3 + 48);
                        v40 = port;
                        v41 = (const char *)std::string::c_str(v3 + 256);
                        common::milog::MiLogStream::operator()(
                          &v86,
                          "duplicate connection %s:%u, app_id=%u.",
                          v41,
                          v40,
                          v39);
                        common::milog::MiLogStream::~MiLogStream(&v86);
                        v60 = 1;
                        v32 = 0;
                      }
                    }
                  }
                  std::shared_ptr<DispatchConnect>::~shared_ptr((std::shared_ptr<DispatchConnect> *const)(v3 + 96));
                  v30 = v32 == 1;
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v86,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                    "init",
                    152);
                  common::milog::MiLogStream::operator()(&v86, "ConnetT port is 0");
                  common::milog::MiLogStream::~MiLogStream(&v86);
                  v60 = 1;
                  v30 = 0;
                }
                std::string::~string((void *)(v3 + 256));
                v27 = v30;
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v86,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                  "init",
                  143);
                common::milog::MiLogStream::operator()(&v86, "ConnetT app_id is 0");
                common::milog::MiLogStream::~MiLogStream(&v86);
                v60 = 1;
                v27 = 0;
              }
              std::string::~string((void *)(v3 + 192));
              if ( !v27 )
              {
                v42 = 0;
                goto LABEL_100;
              }
              std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator++(&__for_begin);
            }
            v42 = 1;
LABEL_100:
            std::list<std::pair<std::string,common::tools::PTree>>::~list((std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 128));
            common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 64));
            if ( v42 == 1 )
            {
              v76 = &this->conn_map_;
              v77 = &this->conn_map_;
              v78 = &this->conn_map_;
              if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3)
                            + 0x7FFF8000) )
                __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
              if ( v78->m_flat_tree.m_data.m_seq.m_holder.m_size )
              {
                std::atomic<common::minet::AClientMgr<DispatchConnect>::Status>::operator=(
                  &this->status_,
                  STATUS_INIT_5);
                common::milog::MiLogStream::create(
                  &v86,
                  &common::milog::MiLogDefault::default_log_obj_,
                  2u,
                  "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                  "init",
                  195);
                if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3)
                                                                       + 0x7FFF8000) )
                {
                  __asan_report_load4(&this->reconnect_max_interval_);
                }
                v43 = this->reconnect_max_interval_;
                if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&this->reconnect_min_interval_);
                }
                v44 = this->reconnect_min_interval_;
                if ( *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3)
                                                                     + 0x7FFF8000) )
                {
                  __asan_report_load1(&this->is_async_send_);
                }
                p_m_size = (void *)this->is_async_send_;
                v79 = &this->conn_map_;
                v80 = &this->conn_map_;
                v81 = &this->conn_map_;
                if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3)
                              + 0x7FFF8000) )
                {
                  p_m_size = &this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size;
                  __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
                }
                m_size = v81->m_flat_tree.m_data.m_seq.m_holder.m_size;
                if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
                {
                  p_m_size = &this->is_cut_packet_;
                  __asan_report_load1(&this->is_cut_packet_);
                }
                v47 = this->is_cut_packet_;
                if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3)
                                                                       + 0x7FFF8000) )
                {
                  p_m_size = &this->recv_buf_len_;
                  __asan_report_load4(&this->recv_buf_len_);
                }
                v48 = this->recv_buf_len_;
                if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this + 98) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3)
                                                                      + 0x7FFF8000) )
                {
                  p_m_size = &this->timeout_sec_;
                  __asan_report_load2(&this->timeout_sec_);
                }
                v49 = this->timeout_sec_;
                if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) <= 1 )
                {
                  p_m_size = &this->keep_alive_sec_;
                  __asan_report_load2(&this->keep_alive_sec_);
                }
                common::milog::MiLogStream::operator()(
                  &v86,
                  "AClientMgr init succ with keep_alive_sec=%u, timeout_sec=%u, recv_buf_len=%u, cut_packet=%d, connect_n"
                  "um=%lu async_send=%d, reconnect min_interval=%u max_interval=%u.",
                  this->keep_alive_sec_,
                  v49,
                  v48,
                  v47,
                  m_size,
                  p_m_size,
                  v44,
                  v43);
                common::milog::MiLogStream::~MiLogStream(&v86);
                v60 = 0;
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v86,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                  "init",
                  188);
                common::milog::MiLogStream::operator()(&v86, "ConnectList is empty, please check your configure file.");
                common::milog::MiLogStream::~MiLogStream(&v86);
                v60 = 1;
              }
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v86,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "../framework/common/minet/aclient/include/aclient_mgr.hpp",
              "init",
              117);
            common::milog::MiLogStream::operator()(&v86, "thread_num must between %d and %d.", 1LL, 16LL);
            common::milog::MiLogStream::~MiLogStream(&v86);
            v60 = 1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v86,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "../framework/common/minet/aclient/include/aclient_mgr.hpp",
            "init",
            111);
          common::milog::MiLogStream::operator()(&v86, "is_async_send_ is true, cache_packet_max_num_ must > 0!");
          common::milog::MiLogStream::~MiLogStream(&v86);
          v60 = 1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v86,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
          "init",
          104);
        common::milog::MiLogStream::operator()(&v86, "recv_buf_len(KB) must between %d and %d.", 10LL, 2048LL);
        common::milog::MiLogStream::~MiLogStream(&v86);
        v60 = 1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v86,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "../framework/common/minet/aclient/include/aclient_mgr.hpp",
        "init",
        98);
      v20 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v86,
              (const char (*)[32])"AClient reconnect min_interval:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->reconnect_min_interval_);
      v22 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v21, (const char (*)[15])" max_interval:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &this->reconnect_max_interval_);
      common::milog::MiLogStream::~MiLogStream(&v86);
      v60 = -1;
    }
  }
  result = v60;
  if ( v87 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
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

// Line 73: range 000000000C7AF634-000000000C7B19D9
int __cdecl common::minet::AClientMgr<GameserverConnect>::init(
        common::minet::AClientMgr<GameserverConnect> *const this,
        uint32_t self_app_id,
        const common::tools::PTree *pt)
{
  unsigned __int64 v3; // r15
  __int64 v4; // rax
  _DWORD *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  uint16_t v8; // si
  uint16_t v9; // di
  unsigned int v10; // ecx
  unsigned int recv_buf_len; // ebx
  unsigned int v12; // edx
  bool v13; // dl
  bool v14; // cl
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  uint32_t v19; // ecx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rbx
  std::list<std::pair<std::string,common::tools::PTree>>::size_type thread_num; // rbx
  std::list<std::pair<std::string,common::tools::PTree>>::size_type v25; // rcx
  common::tools::PTree *p_second; // rbx
  _BOOL4 v27; // ebx
  common::tools::PTree *v28; // rbx
  common::tools::PTree *v29; // rbx
  _BOOL4 v30; // ebx
  uint32_t v31; // eax
  int v32; // ebx
  uint32_t v33; // r12d
  uint16_t v34; // bx
  const char *v35; // rax
  std::shared_ptr<GameserverConnect> *v36; // r8
  unsigned int v37; // ebx
  const char *v38; // rax
  unsigned int v39; // r12d
  unsigned int v40; // ebx
  const char *v41; // rax
  int v42; // ebx
  __int64 v43; // r9
  __int64 v44; // r8
  void *p_m_size; // rdi
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_size; // rsi
  _BOOL4 v47; // r11d
  uint32_t v48; // r10d
  __int64 v49; // rcx
  int result; // eax
  uint16_t keep_alive_sec; // [rsp+Ch] [rbp-2D4h]
  uint16_t timeout_sec; // [rsp+10h] [rbp-2D0h]
  bool is_cut_packet; // [rsp+14h] [rbp-2CCh]
  uint32_t target_app_id; // [rsp+18h] [rbp-2C8h]
  uint32_t max_send_packet_len; // [rsp+1Ch] [rbp-2C4h]
  bool is_async_send; // [rsp+20h] [rbp-2C0h]
  uint32_t cache_packet_max_num; // [rsp+24h] [rbp-2BCh]
  std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // [rsp+28h] [rbp-2B8h]
  uint32_t reconnect_max_interval; // [rsp+30h] [rbp-2B0h]
  int v60; // [rsp+34h] [rbp-2ACh]
  uint32_t reconnect_min_interval; // [rsp+40h] [rbp-2A0h]
  std::allocator<char> __a; // [rsp+51h] [rbp-28Fh] BYREF
  uint16_t port; // [rsp+52h] [rbp-28Eh]
  uint32_t ioc_index; // [rsp+54h] [rbp-28Ch]
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_begin; // [rsp+58h] [rbp-288h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_end; // [rsp+60h] [rbp-280h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>> *__for_range; // [rsp+68h] [rbp-278h]
  std::pair<std::string,common::tools::PTree> *p; // [rsp+70h] [rbp-270h]
  unsigned int *p_conn_map; // [rsp+80h] [rbp-260h]
  unsigned int *args_0; // [rsp+88h] [rbp-258h]
  std::shared_ptr<GameserverConnect> *v74; // [rsp+90h] [rbp-250h]
  std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<GameserverConnect> >*,false>,bool> *v75; // [rsp+98h] [rbp-248h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v76; // [rsp+A0h] [rbp-240h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v77; // [rsp+A8h] [rbp-238h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v78; // [rsp+B0h] [rbp-230h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v79; // [rsp+B8h] [rbp-228h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v80; // [rsp+C0h] [rbp-220h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v81; // [rsp+C8h] [rbp-218h]
  std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<GameserverConnect> >*,false>,bool> v82; // [rsp+D0h] [rbp-210h] BYREF
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > > > v83; // [rsp+E0h] [rbp-200h] BYREF
  std::string v84; // [rsp+110h] [rbp-1D0h] BYREF
  std::string v85; // [rsp+130h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v86; // [rsp+150h] [rbp-190h] BYREF
  char v87[368]; // [rsp+170h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v87;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 17 target_app_id:140 64 8 16 pt_conn_list:126 96 16 15 connect_ptr:157 128 24 17 pt_child"
                        "_list:127 192 32 14 app_id_str:139 256 32 6 ip:147";
  *(_QWORD *)(v3 + 16) = common::minet::AClientMgr<GameserverConnect>::init;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  if ( std::atomic<common::minet::AClientMgr<GameserverConnect>::Status>::operator common::minet::AClientMgr<GameserverConnect>::Status(&this->status_) )
  {
    common::milog::MiLogStream::create(
      &v86,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "../framework/common/minet/aclient/include/aclient_mgr.hpp",
      "init",
      77);
    v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v86, (const char (*)[19])"client_mgr status=");
    v7 = common::milog::MiLogStream::operator<<<std::atomic<common::minet::AClientMgr<GameserverConnect>::Status>,(std::atomic<common::minet::AClientMgr<GameserverConnect>::Status>*)0>(
           v6,
           &this->status_);
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v7,
      (const char (*)[40])", try to add dynamic server xml it now.");
    common::milog::MiLogStream::~MiLogStream(&v86);
    v60 = 1;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "KeepAliveSec.<xmlattr>.value", &__a);
    v8 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)&v86);
    if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) <= 1 )
    {
      __asan_report_store2(&this->keep_alive_sec_);
    }
    this->keep_alive_sec_ = v8;
    std::string::~string(&v86);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "TimeoutSec.<xmlattr>.value", &__a);
    v9 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)&v86);
    if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 98) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) )
    {
      v9 = (_WORD)this + 610;
      __asan_report_store2(&this->timeout_sec_);
    }
    this->timeout_sec_ = v9;
    std::string::~string(&v86);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "RecvBufLen.<xmlattr>.value", &__a);
    v10 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)&v86);
    if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->recv_buf_len_);
    }
    this->recv_buf_len_ = v10;
    std::string::~string(&v86);
    std::allocator<char>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->recv_buf_len_);
    }
    recv_buf_len = this->recv_buf_len_;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v83.m_data.m_seq.m_holder.m_capacity,
      "MaxSendPacketLen.<xmlattr>.value",
      &__a);
    v12 = common::tools::PTree::get<unsigned int>(
            pt,
            (const std::string *)&v83.m_data.m_seq.m_holder.m_capacity,
            recv_buf_len);
    if ( *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->max_send_packet_len_);
    }
    this->max_send_packet_len_ = v12;
    std::string::~string(&v83.m_data.m_seq.m_holder.m_capacity);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "CutPacket.<xmlattr>.value", &__a);
    v13 = common::tools::PTree::get<bool>(pt, (const std::string *)&v86);
    if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_cut_packet_);
    this->is_cut_packet_ = v13;
    std::string::~string(&v86);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v84, "AsyncSend.<xmlattr>.value", &__a);
    v14 = common::tools::PTree::get<bool>(pt, &v84, 0);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_async_send_);
    }
    this->is_async_send_ = v14;
    std::string::~string(&v84);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v85, "AsyncSend.<xmlattr>.CachePacketMaxNum", &__a);
    v15 = common::tools::PTree::get<unsigned int>(pt, &v85, 0xC8u);
    if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_store4(&this->cache_packet_max_num_);
    }
    this->cache_packet_max_num_ = v15;
    std::string::~string(&v85);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "ThreadNum.<xmlattr>.value", &__a);
    v16 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)&v86);
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->thread_num_);
    }
    this->thread_num_ = v16;
    std::string::~string(&v86);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 192),
      "Reconnect.<xmlattr>.min_interval",
      &__a);
    v17 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)(v3 + 192), 0x3E8u);
    if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->reconnect_min_interval_);
    }
    this->reconnect_min_interval_ = v17;
    std::string::~string((void *)(v3 + 192));
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 256),
      "Reconnect.<xmlattr>.max_interval",
      &__a);
    v18 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)(v3 + 256), 0xBB8u);
    if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_store4(&this->reconnect_max_interval_);
    }
    this->reconnect_max_interval_ = v18;
    std::string::~string((void *)(v3 + 256));
    std::allocator<char>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->reconnect_min_interval_);
    }
    v19 = this->reconnect_min_interval_;
    if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->reconnect_max_interval_);
    }
    if ( v19 <= this->reconnect_max_interval_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->recv_buf_len_);
      }
      if ( this->recv_buf_len_ > 9 && this->recv_buf_len_ <= 0x800 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load1(&this->is_async_send_);
        }
        if ( !this->is_async_send_ )
          goto LABEL_46;
        if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cache_packet_max_num_);
        }
        if ( this->cache_packet_max_num_ )
        {
LABEL_46:
          if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&this->thread_num_);
          }
          if ( this->thread_num_ && this->thread_num_ <= 0x10 )
          {
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
            std::allocator<char>::allocator(&__a);
            std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "ConnectList", &__a);
            common::tools::PTree::getChild(pt, (const std::string *)&v86);
            std::string::~string(&v86);
            std::allocator<char>::~allocator(&__a);
            common::tools::PTree::getAllChild[abi:cxx11](
              (std::list<std::pair<std::string,common::tools::PTree>> *)(v3 + 128),
              (const common::tools::PTree *const)(v3 + 64));
            common::milog::MiLogStream::create(
              &v86,
              &common::milog::MiLogDefault::default_log_obj_,
              2u,
              "../framework/common/minet/aclient/include/aclient_mgr.hpp",
              "init",
              129);
            v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    &v86,
                    (const char (*)[16])"PTreeList size:");
            __for_end._M_node = (std::__detail::_List_node_base *)std::list<std::pair<std::string,common::tools::PTree>>::size((const std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 128));
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v23,
              (const unsigned __int64 *)&__for_end);
            common::milog::MiLogStream::~MiLogStream(&v86);
            if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&this->thread_num_);
            }
            thread_num = this->thread_num_;
            if ( thread_num > std::list<std::pair<std::string,common::tools::PTree>>::size((const std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 128)) )
            {
              common::milog::MiLogStream::create(
                &v86,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                "init",
                132);
              v25 = std::list<std::pair<std::string,common::tools::PTree>>::size((const std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 128));
              if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&this->thread_num_);
              }
              common::milog::MiLogStream::operator()(
                &v86,
                "thread_num_ %d is bigger than connect list size %lu",
                this->thread_num_,
                v25);
              common::milog::MiLogStream::~MiLogStream(&v86);
            }
            ioc_index = 0;
            __for_range = (std::list<std::pair<std::string,common::tools::PTree>> *)(v3 + 128);
            __for_begin._M_node = std::list<std::pair<std::string,common::tools::PTree>>::begin((std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 128))._M_node;
            __for_end._M_node = std::list<std::pair<std::string,common::tools::PTree>>::end(__for_range)._M_node;
            while ( std::operator!=(&__for_begin, &__for_end) )
            {
              p = std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator*(&__for_begin);
              p_second = &p->second;
              std::allocator<char>::allocator(&__a);
              std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "<xmlattr>.app_id", &__a);
              common::tools::PTree::get<std::string>((std::string *)(v3 + 192), p_second, (const std::string *)&v86);
              std::string::~string(&v86);
              std::allocator<char>::~allocator(&__a);
              std::string::basic_string(&v86, v3 + 192);
              *(_DWORD *)(v3 + 48) = common::tools::AppIdUtils::getAppId((std::string *)&v86);
              std::string::~string(&v86);
              if ( *(_DWORD *)(v3 + 48) )
              {
                v28 = &p->second;
                std::allocator<char>::allocator(&__a);
                std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "<xmlattr>.ip", &__a);
                common::tools::PTree::get<std::string>((std::string *)(v3 + 256), v28, (const std::string *)&v86);
                std::string::~string(&v86);
                std::allocator<char>::~allocator(&__a);
                v29 = &p->second;
                std::allocator<char>::allocator(&__a);
                std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "<xmlattr>.port", &__a);
                port = common::tools::PTree::get<unsigned short>(v29, (const std::string *)&v86);
                std::string::~string(&v86);
                std::allocator<char>::~allocator(&__a);
                if ( port )
                {
                  v31 = ioc_index++;
                  if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3)
                                                                         + 0x7FFF8000) )
                  {
                    v31 = __asan_report_load4(&this->thread_num_);
                  }
                  common::tools::perf::make_shared<GameserverConnect,boost::asio::io_context &>(
                    (boost::asio::io_context *)(v3 + 96),
                    &this->ioc_arr_[v31 % this->thread_num_]);
                  if ( std::operator==<GameserverConnect>(0LL, (const std::shared_ptr<GameserverConnect> *)(v3 + 96)) )
                  {
                    common::milog::MiLogStream::create(
                      &v86,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                      "init",
                      160);
                    common::milog::MiLogStream::operator()(&v86, "new ConnectT failed.");
                    common::milog::MiLogStream::~MiLogStream(&v86);
                    v60 = 1;
                    v32 = 0;
                  }
                  else
                  {
                    v58 = std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                    if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3)
                                                                           + 0x7FFF8000) )
                    {
                      __asan_report_load4(&this->reconnect_max_interval_);
                    }
                    reconnect_max_interval = this->reconnect_max_interval_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&this->reconnect_min_interval_);
                    }
                    reconnect_min_interval = this->reconnect_min_interval_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                                           + 0x7FFF8000) )
                    {
                      __asan_report_load4(&this->cache_packet_max_num_);
                    }
                    cache_packet_max_num = this->cache_packet_max_num_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3)
                                                                         + 0x7FFF8000) )
                    {
                      __asan_report_load1(&this->is_async_send_);
                    }
                    is_async_send = this->is_async_send_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&this->max_send_packet_len_);
                    }
                    max_send_packet_len = this->max_send_packet_len_;
                    target_app_id = *(_DWORD *)(v3 + 48);
                    if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
                      __asan_report_load1(&this->is_cut_packet_);
                    is_cut_packet = this->is_cut_packet_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)this + 98) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_load2(&this->timeout_sec_);
                    }
                    timeout_sec = this->timeout_sec_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) <= 1 )
                    {
                      __asan_report_load2(&this->keep_alive_sec_);
                    }
                    keep_alive_sec = this->keep_alive_sec_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3)
                                                                           + 0x7FFF8000) )
                    {
                      __asan_report_load4(&this->recv_buf_len_);
                    }
                    v33 = this->recv_buf_len_;
                    v34 = port;
                    v35 = (const char *)std::string::c_str(v3 + 256);
                    if ( common::minet::AClientConnect::init(
                           v58,
                           self_app_id,
                           v35,
                           v34,
                           v33,
                           keep_alive_sec,
                           timeout_sec,
                           is_cut_packet,
                           target_app_id,
                           max_send_packet_len,
                           is_async_send,
                           cache_packet_max_num,
                           reconnect_min_interval,
                           reconnect_max_interval) )
                    {
                      common::milog::MiLogStream::create(
                        &v86,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                        "init",
                        167);
                      v37 = port;
                      v38 = (const char *)std::string::c_str(v3 + 256);
                      common::milog::MiLogStream::operator()(&v86, "init ConnectT %s:%u failed.", v38, v37);
                      common::milog::MiLogStream::~MiLogStream(&v86);
                      v60 = 1;
                      v32 = 0;
                    }
                    else
                    {
                      p_conn_map = (unsigned int *)&this->conn_map_;
                      args_0 = (unsigned int *)(v3 + 96);
                      v74 = (std::shared_ptr<GameserverConnect> *)(v3 + 48);
                      boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect>>,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect>>>>::emplace_unique<unsigned int &,std::shared_ptr<GameserverConnect>&>(
                        &v83,
                        (unsigned int *)&this->conn_map_,
                        (std::shared_ptr<GameserverConnect> *)(v3 + 48),
                        (unsigned int *)(v3 + 96),
                        v36);
                      v75 = (std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<GameserverConnect> >*,false>,bool> *)&v83;
                      std::pair<boost::container::vec_iterator<std::pair*<unsigned int,std::shared_ptr<GameserverConnect>>,false>,bool>::pair(
                        &v82,
                        (const std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<GameserverConnect> >*,false>,bool> *)&v83);
                      if ( v82.second )
                      {
                        v32 = 1;
                      }
                      else
                      {
                        common::milog::MiLogStream::create(
                          &v86,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                          "init",
                          173);
                        v39 = *(_DWORD *)(v3 + 48);
                        v40 = port;
                        v41 = (const char *)std::string::c_str(v3 + 256);
                        common::milog::MiLogStream::operator()(
                          &v86,
                          "duplicate connection %s:%u, app_id=%u.",
                          v41,
                          v40,
                          v39);
                        common::milog::MiLogStream::~MiLogStream(&v86);
                        v60 = 1;
                        v32 = 0;
                      }
                    }
                  }
                  std::shared_ptr<GameserverConnect>::~shared_ptr((std::shared_ptr<GameserverConnect> *const)(v3 + 96));
                  v30 = v32 == 1;
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v86,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                    "init",
                    152);
                  common::milog::MiLogStream::operator()(&v86, "ConnetT port is 0");
                  common::milog::MiLogStream::~MiLogStream(&v86);
                  v60 = 1;
                  v30 = 0;
                }
                std::string::~string((void *)(v3 + 256));
                v27 = v30;
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v86,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                  "init",
                  143);
                common::milog::MiLogStream::operator()(&v86, "ConnetT app_id is 0");
                common::milog::MiLogStream::~MiLogStream(&v86);
                v60 = 1;
                v27 = 0;
              }
              std::string::~string((void *)(v3 + 192));
              if ( !v27 )
              {
                v42 = 0;
                goto LABEL_100;
              }
              std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator++(&__for_begin);
            }
            v42 = 1;
LABEL_100:
            std::list<std::pair<std::string,common::tools::PTree>>::~list((std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 128));
            common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 64));
            if ( v42 == 1 )
            {
              v76 = &this->conn_map_;
              v77 = &this->conn_map_;
              v78 = &this->conn_map_;
              if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3)
                            + 0x7FFF8000) )
                __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
              if ( v78->m_flat_tree.m_data.m_seq.m_holder.m_size )
              {
                std::atomic<common::minet::AClientMgr<GameserverConnect>::Status>::operator=(
                  &this->status_,
                  STATUS_INIT_1);
                common::milog::MiLogStream::create(
                  &v86,
                  &common::milog::MiLogDefault::default_log_obj_,
                  2u,
                  "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                  "init",
                  195);
                if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3)
                                                                       + 0x7FFF8000) )
                {
                  __asan_report_load4(&this->reconnect_max_interval_);
                }
                v43 = this->reconnect_max_interval_;
                if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&this->reconnect_min_interval_);
                }
                v44 = this->reconnect_min_interval_;
                if ( *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3)
                                                                     + 0x7FFF8000) )
                {
                  __asan_report_load1(&this->is_async_send_);
                }
                p_m_size = (void *)this->is_async_send_;
                v79 = &this->conn_map_;
                v80 = &this->conn_map_;
                v81 = &this->conn_map_;
                if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3)
                              + 0x7FFF8000) )
                {
                  p_m_size = &this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size;
                  __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
                }
                m_size = v81->m_flat_tree.m_data.m_seq.m_holder.m_size;
                if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
                {
                  p_m_size = &this->is_cut_packet_;
                  __asan_report_load1(&this->is_cut_packet_);
                }
                v47 = this->is_cut_packet_;
                if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3)
                                                                       + 0x7FFF8000) )
                {
                  p_m_size = &this->recv_buf_len_;
                  __asan_report_load4(&this->recv_buf_len_);
                }
                v48 = this->recv_buf_len_;
                if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this + 98) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3)
                                                                      + 0x7FFF8000) )
                {
                  p_m_size = &this->timeout_sec_;
                  __asan_report_load2(&this->timeout_sec_);
                }
                v49 = this->timeout_sec_;
                if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) <= 1 )
                {
                  p_m_size = &this->keep_alive_sec_;
                  __asan_report_load2(&this->keep_alive_sec_);
                }
                common::milog::MiLogStream::operator()(
                  &v86,
                  "AClientMgr init succ with keep_alive_sec=%u, timeout_sec=%u, recv_buf_len=%u, cut_packet=%d, connect_n"
                  "um=%lu async_send=%d, reconnect min_interval=%u max_interval=%u.",
                  this->keep_alive_sec_,
                  v49,
                  v48,
                  v47,
                  m_size,
                  p_m_size,
                  v44,
                  v43);
                common::milog::MiLogStream::~MiLogStream(&v86);
                v60 = 0;
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v86,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                  "init",
                  188);
                common::milog::MiLogStream::operator()(&v86, "ConnectList is empty, please check your configure file.");
                common::milog::MiLogStream::~MiLogStream(&v86);
                v60 = 1;
              }
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v86,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "../framework/common/minet/aclient/include/aclient_mgr.hpp",
              "init",
              117);
            common::milog::MiLogStream::operator()(&v86, "thread_num must between %d and %d.", 1LL, 16LL);
            common::milog::MiLogStream::~MiLogStream(&v86);
            v60 = 1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v86,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "../framework/common/minet/aclient/include/aclient_mgr.hpp",
            "init",
            111);
          common::milog::MiLogStream::operator()(&v86, "is_async_send_ is true, cache_packet_max_num_ must > 0!");
          common::milog::MiLogStream::~MiLogStream(&v86);
          v60 = 1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v86,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
          "init",
          104);
        common::milog::MiLogStream::operator()(&v86, "recv_buf_len(KB) must between %d and %d.", 10LL, 2048LL);
        common::milog::MiLogStream::~MiLogStream(&v86);
        v60 = 1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v86,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "../framework/common/minet/aclient/include/aclient_mgr.hpp",
        "init",
        98);
      v20 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v86,
              (const char (*)[32])"AClient reconnect min_interval:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->reconnect_min_interval_);
      v22 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v21, (const char (*)[15])" max_interval:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &this->reconnect_max_interval_);
      common::milog::MiLogStream::~MiLogStream(&v86);
      v60 = -1;
    }
  }
  result = v60;
  if ( v87 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
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

// Line 73: range 000000000C7B1A9C-000000000C7B3E41
int __cdecl common::minet::AClientMgr<PathfindingserverConnect>::init(
        common::minet::AClientMgr<PathfindingserverConnect> *const this,
        uint32_t self_app_id,
        const common::tools::PTree *pt)
{
  unsigned __int64 v3; // r15
  __int64 v4; // rax
  _DWORD *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  uint16_t v8; // si
  uint16_t v9; // di
  unsigned int v10; // ecx
  unsigned int recv_buf_len; // ebx
  unsigned int v12; // edx
  bool v13; // dl
  bool v14; // cl
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  uint32_t v19; // ecx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rbx
  std::list<std::pair<std::string,common::tools::PTree>>::size_type thread_num; // rbx
  std::list<std::pair<std::string,common::tools::PTree>>::size_type v25; // rcx
  common::tools::PTree *p_second; // rbx
  _BOOL4 v27; // ebx
  common::tools::PTree *v28; // rbx
  common::tools::PTree *v29; // rbx
  _BOOL4 v30; // ebx
  uint32_t v31; // eax
  int v32; // ebx
  uint32_t v33; // r12d
  uint16_t v34; // bx
  const char *v35; // rax
  std::shared_ptr<PathfindingserverConnect> *v36; // r8
  unsigned int v37; // ebx
  const char *v38; // rax
  unsigned int v39; // r12d
  unsigned int v40; // ebx
  const char *v41; // rax
  int v42; // ebx
  __int64 v43; // r9
  __int64 v44; // r8
  void *p_m_size; // rdi
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_size; // rsi
  _BOOL4 v47; // r11d
  uint32_t v48; // r10d
  __int64 v49; // rcx
  int result; // eax
  uint16_t keep_alive_sec; // [rsp+Ch] [rbp-2D4h]
  uint16_t timeout_sec; // [rsp+10h] [rbp-2D0h]
  bool is_cut_packet; // [rsp+14h] [rbp-2CCh]
  uint32_t target_app_id; // [rsp+18h] [rbp-2C8h]
  uint32_t max_send_packet_len; // [rsp+1Ch] [rbp-2C4h]
  bool is_async_send; // [rsp+20h] [rbp-2C0h]
  uint32_t cache_packet_max_num; // [rsp+24h] [rbp-2BCh]
  std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // [rsp+28h] [rbp-2B8h]
  uint32_t reconnect_max_interval; // [rsp+30h] [rbp-2B0h]
  int v60; // [rsp+34h] [rbp-2ACh]
  uint32_t reconnect_min_interval; // [rsp+40h] [rbp-2A0h]
  std::allocator<char> __a; // [rsp+51h] [rbp-28Fh] BYREF
  uint16_t port; // [rsp+52h] [rbp-28Eh]
  uint32_t ioc_index; // [rsp+54h] [rbp-28Ch]
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_begin; // [rsp+58h] [rbp-288h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_end; // [rsp+60h] [rbp-280h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>> *__for_range; // [rsp+68h] [rbp-278h]
  std::pair<std::string,common::tools::PTree> *p; // [rsp+70h] [rbp-270h]
  unsigned int *p_conn_map; // [rsp+80h] [rbp-260h]
  unsigned int *args_0; // [rsp+88h] [rbp-258h]
  std::shared_ptr<PathfindingserverConnect> *v74; // [rsp+90h] [rbp-250h]
  std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >*,false>,bool> *v75; // [rsp+98h] [rbp-248h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v76; // [rsp+A0h] [rbp-240h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v77; // [rsp+A8h] [rbp-238h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v78; // [rsp+B0h] [rbp-230h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v79; // [rsp+B8h] [rbp-228h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v80; // [rsp+C0h] [rbp-220h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v81; // [rsp+C8h] [rbp-218h]
  std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >*,false>,bool> v82; // [rsp+D0h] [rbp-210h] BYREF
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > > > v83; // [rsp+E0h] [rbp-200h] BYREF
  std::string v84; // [rsp+110h] [rbp-1D0h] BYREF
  std::string v85; // [rsp+130h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v86; // [rsp+150h] [rbp-190h] BYREF
  char v87[368]; // [rsp+170h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v87;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 17 target_app_id:140 64 8 16 pt_conn_list:126 96 16 15 connect_ptr:157 128 24 17 pt_child"
                        "_list:127 192 32 14 app_id_str:139 256 32 6 ip:147";
  *(_QWORD *)(v3 + 16) = common::minet::AClientMgr<PathfindingserverConnect>::init;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  if ( std::atomic<common::minet::AClientMgr<PathfindingserverConnect>::Status>::operator common::minet::AClientMgr<PathfindingserverConnect>::Status(&this->status_) )
  {
    common::milog::MiLogStream::create(
      &v86,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "../framework/common/minet/aclient/include/aclient_mgr.hpp",
      "init",
      77);
    v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v86, (const char (*)[19])"client_mgr status=");
    v7 = common::milog::MiLogStream::operator<<<std::atomic<common::minet::AClientMgr<PathfindingserverConnect>::Status>,(std::atomic<common::minet::AClientMgr<PathfindingserverConnect>::Status>*)0>(
           v6,
           &this->status_);
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v7,
      (const char (*)[40])", try to add dynamic server xml it now.");
    common::milog::MiLogStream::~MiLogStream(&v86);
    v60 = 1;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "KeepAliveSec.<xmlattr>.value", &__a);
    v8 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)&v86);
    if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) <= 1 )
    {
      __asan_report_store2(&this->keep_alive_sec_);
    }
    this->keep_alive_sec_ = v8;
    std::string::~string(&v86);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "TimeoutSec.<xmlattr>.value", &__a);
    v9 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)&v86);
    if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 98) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) )
    {
      v9 = (_WORD)this + 610;
      __asan_report_store2(&this->timeout_sec_);
    }
    this->timeout_sec_ = v9;
    std::string::~string(&v86);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "RecvBufLen.<xmlattr>.value", &__a);
    v10 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)&v86);
    if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->recv_buf_len_);
    }
    this->recv_buf_len_ = v10;
    std::string::~string(&v86);
    std::allocator<char>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->recv_buf_len_);
    }
    recv_buf_len = this->recv_buf_len_;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v83.m_data.m_seq.m_holder.m_capacity,
      "MaxSendPacketLen.<xmlattr>.value",
      &__a);
    v12 = common::tools::PTree::get<unsigned int>(
            pt,
            (const std::string *)&v83.m_data.m_seq.m_holder.m_capacity,
            recv_buf_len);
    if ( *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->max_send_packet_len_);
    }
    this->max_send_packet_len_ = v12;
    std::string::~string(&v83.m_data.m_seq.m_holder.m_capacity);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "CutPacket.<xmlattr>.value", &__a);
    v13 = common::tools::PTree::get<bool>(pt, (const std::string *)&v86);
    if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_cut_packet_);
    this->is_cut_packet_ = v13;
    std::string::~string(&v86);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v84, "AsyncSend.<xmlattr>.value", &__a);
    v14 = common::tools::PTree::get<bool>(pt, &v84, 0);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_async_send_);
    }
    this->is_async_send_ = v14;
    std::string::~string(&v84);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v85, "AsyncSend.<xmlattr>.CachePacketMaxNum", &__a);
    v15 = common::tools::PTree::get<unsigned int>(pt, &v85, 0xC8u);
    if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_store4(&this->cache_packet_max_num_);
    }
    this->cache_packet_max_num_ = v15;
    std::string::~string(&v85);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "ThreadNum.<xmlattr>.value", &__a);
    v16 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)&v86);
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->thread_num_);
    }
    this->thread_num_ = v16;
    std::string::~string(&v86);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 192),
      "Reconnect.<xmlattr>.min_interval",
      &__a);
    v17 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)(v3 + 192), 0x3E8u);
    if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->reconnect_min_interval_);
    }
    this->reconnect_min_interval_ = v17;
    std::string::~string((void *)(v3 + 192));
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 256),
      "Reconnect.<xmlattr>.max_interval",
      &__a);
    v18 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)(v3 + 256), 0xBB8u);
    if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_store4(&this->reconnect_max_interval_);
    }
    this->reconnect_max_interval_ = v18;
    std::string::~string((void *)(v3 + 256));
    std::allocator<char>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->reconnect_min_interval_);
    }
    v19 = this->reconnect_min_interval_;
    if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->reconnect_max_interval_);
    }
    if ( v19 <= this->reconnect_max_interval_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->recv_buf_len_);
      }
      if ( this->recv_buf_len_ > 9 && this->recv_buf_len_ <= 0x800 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load1(&this->is_async_send_);
        }
        if ( !this->is_async_send_ )
          goto LABEL_46;
        if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cache_packet_max_num_);
        }
        if ( this->cache_packet_max_num_ )
        {
LABEL_46:
          if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&this->thread_num_);
          }
          if ( this->thread_num_ && this->thread_num_ <= 0x10 )
          {
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
            std::allocator<char>::allocator(&__a);
            std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "ConnectList", &__a);
            common::tools::PTree::getChild(pt, (const std::string *)&v86);
            std::string::~string(&v86);
            std::allocator<char>::~allocator(&__a);
            common::tools::PTree::getAllChild[abi:cxx11](
              (std::list<std::pair<std::string,common::tools::PTree>> *)(v3 + 128),
              (const common::tools::PTree *const)(v3 + 64));
            common::milog::MiLogStream::create(
              &v86,
              &common::milog::MiLogDefault::default_log_obj_,
              2u,
              "../framework/common/minet/aclient/include/aclient_mgr.hpp",
              "init",
              129);
            v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    &v86,
                    (const char (*)[16])"PTreeList size:");
            __for_end._M_node = (std::__detail::_List_node_base *)std::list<std::pair<std::string,common::tools::PTree>>::size((const std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 128));
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v23,
              (const unsigned __int64 *)&__for_end);
            common::milog::MiLogStream::~MiLogStream(&v86);
            if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&this->thread_num_);
            }
            thread_num = this->thread_num_;
            if ( thread_num > std::list<std::pair<std::string,common::tools::PTree>>::size((const std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 128)) )
            {
              common::milog::MiLogStream::create(
                &v86,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                "init",
                132);
              v25 = std::list<std::pair<std::string,common::tools::PTree>>::size((const std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 128));
              if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&this->thread_num_);
              }
              common::milog::MiLogStream::operator()(
                &v86,
                "thread_num_ %d is bigger than connect list size %lu",
                this->thread_num_,
                v25);
              common::milog::MiLogStream::~MiLogStream(&v86);
            }
            ioc_index = 0;
            __for_range = (std::list<std::pair<std::string,common::tools::PTree>> *)(v3 + 128);
            __for_begin._M_node = std::list<std::pair<std::string,common::tools::PTree>>::begin((std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 128))._M_node;
            __for_end._M_node = std::list<std::pair<std::string,common::tools::PTree>>::end(__for_range)._M_node;
            while ( std::operator!=(&__for_begin, &__for_end) )
            {
              p = std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator*(&__for_begin);
              p_second = &p->second;
              std::allocator<char>::allocator(&__a);
              std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "<xmlattr>.app_id", &__a);
              common::tools::PTree::get<std::string>((std::string *)(v3 + 192), p_second, (const std::string *)&v86);
              std::string::~string(&v86);
              std::allocator<char>::~allocator(&__a);
              std::string::basic_string(&v86, v3 + 192);
              *(_DWORD *)(v3 + 48) = common::tools::AppIdUtils::getAppId((std::string *)&v86);
              std::string::~string(&v86);
              if ( *(_DWORD *)(v3 + 48) )
              {
                v28 = &p->second;
                std::allocator<char>::allocator(&__a);
                std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "<xmlattr>.ip", &__a);
                common::tools::PTree::get<std::string>((std::string *)(v3 + 256), v28, (const std::string *)&v86);
                std::string::~string(&v86);
                std::allocator<char>::~allocator(&__a);
                v29 = &p->second;
                std::allocator<char>::allocator(&__a);
                std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "<xmlattr>.port", &__a);
                port = common::tools::PTree::get<unsigned short>(v29, (const std::string *)&v86);
                std::string::~string(&v86);
                std::allocator<char>::~allocator(&__a);
                if ( port )
                {
                  v31 = ioc_index++;
                  if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3)
                                                                         + 0x7FFF8000) )
                  {
                    v31 = __asan_report_load4(&this->thread_num_);
                  }
                  common::tools::perf::make_shared<PathfindingserverConnect,boost::asio::io_context &>(
                    (boost::asio::io_context *)(v3 + 96),
                    &this->ioc_arr_[v31 % this->thread_num_]);
                  if ( std::operator==<PathfindingserverConnect>(
                         0LL,
                         (const std::shared_ptr<PathfindingserverConnect> *)(v3 + 96)) )
                  {
                    common::milog::MiLogStream::create(
                      &v86,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                      "init",
                      160);
                    common::milog::MiLogStream::operator()(&v86, "new ConnectT failed.");
                    common::milog::MiLogStream::~MiLogStream(&v86);
                    v60 = 1;
                    v32 = 0;
                  }
                  else
                  {
                    v58 = std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                    if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3)
                                                                           + 0x7FFF8000) )
                    {
                      __asan_report_load4(&this->reconnect_max_interval_);
                    }
                    reconnect_max_interval = this->reconnect_max_interval_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&this->reconnect_min_interval_);
                    }
                    reconnect_min_interval = this->reconnect_min_interval_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                                           + 0x7FFF8000) )
                    {
                      __asan_report_load4(&this->cache_packet_max_num_);
                    }
                    cache_packet_max_num = this->cache_packet_max_num_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3)
                                                                         + 0x7FFF8000) )
                    {
                      __asan_report_load1(&this->is_async_send_);
                    }
                    is_async_send = this->is_async_send_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&this->max_send_packet_len_);
                    }
                    max_send_packet_len = this->max_send_packet_len_;
                    target_app_id = *(_DWORD *)(v3 + 48);
                    if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
                      __asan_report_load1(&this->is_cut_packet_);
                    is_cut_packet = this->is_cut_packet_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)this + 98) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_load2(&this->timeout_sec_);
                    }
                    timeout_sec = this->timeout_sec_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) <= 1 )
                    {
                      __asan_report_load2(&this->keep_alive_sec_);
                    }
                    keep_alive_sec = this->keep_alive_sec_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3)
                                                                           + 0x7FFF8000) )
                    {
                      __asan_report_load4(&this->recv_buf_len_);
                    }
                    v33 = this->recv_buf_len_;
                    v34 = port;
                    v35 = (const char *)std::string::c_str(v3 + 256);
                    if ( common::minet::AClientConnect::init(
                           v58,
                           self_app_id,
                           v35,
                           v34,
                           v33,
                           keep_alive_sec,
                           timeout_sec,
                           is_cut_packet,
                           target_app_id,
                           max_send_packet_len,
                           is_async_send,
                           cache_packet_max_num,
                           reconnect_min_interval,
                           reconnect_max_interval) )
                    {
                      common::milog::MiLogStream::create(
                        &v86,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                        "init",
                        167);
                      v37 = port;
                      v38 = (const char *)std::string::c_str(v3 + 256);
                      common::milog::MiLogStream::operator()(&v86, "init ConnectT %s:%u failed.", v38, v37);
                      common::milog::MiLogStream::~MiLogStream(&v86);
                      v60 = 1;
                      v32 = 0;
                    }
                    else
                    {
                      p_conn_map = (unsigned int *)&this->conn_map_;
                      args_0 = (unsigned int *)(v3 + 96);
                      v74 = (std::shared_ptr<PathfindingserverConnect> *)(v3 + 48);
                      boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect>>,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect>>>>::emplace_unique<unsigned int &,std::shared_ptr<PathfindingserverConnect>&>(
                        &v83,
                        (unsigned int *)&this->conn_map_,
                        (std::shared_ptr<PathfindingserverConnect> *)(v3 + 48),
                        (unsigned int *)(v3 + 96),
                        v36);
                      v75 = (std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >*,false>,bool> *)&v83;
                      std::pair<boost::container::vec_iterator<std::pair*<unsigned int,std::shared_ptr<PathfindingserverConnect>>,false>,bool>::pair(
                        &v82,
                        (const std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >*,false>,bool> *)&v83);
                      if ( v82.second )
                      {
                        v32 = 1;
                      }
                      else
                      {
                        common::milog::MiLogStream::create(
                          &v86,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                          "init",
                          173);
                        v39 = *(_DWORD *)(v3 + 48);
                        v40 = port;
                        v41 = (const char *)std::string::c_str(v3 + 256);
                        common::milog::MiLogStream::operator()(
                          &v86,
                          "duplicate connection %s:%u, app_id=%u.",
                          v41,
                          v40,
                          v39);
                        common::milog::MiLogStream::~MiLogStream(&v86);
                        v60 = 1;
                        v32 = 0;
                      }
                    }
                  }
                  std::shared_ptr<PathfindingserverConnect>::~shared_ptr((std::shared_ptr<PathfindingserverConnect> *const)(v3 + 96));
                  v30 = v32 == 1;
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v86,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                    "init",
                    152);
                  common::milog::MiLogStream::operator()(&v86, "ConnetT port is 0");
                  common::milog::MiLogStream::~MiLogStream(&v86);
                  v60 = 1;
                  v30 = 0;
                }
                std::string::~string((void *)(v3 + 256));
                v27 = v30;
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v86,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                  "init",
                  143);
                common::milog::MiLogStream::operator()(&v86, "ConnetT app_id is 0");
                common::milog::MiLogStream::~MiLogStream(&v86);
                v60 = 1;
                v27 = 0;
              }
              std::string::~string((void *)(v3 + 192));
              if ( !v27 )
              {
                v42 = 0;
                goto LABEL_100;
              }
              std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator++(&__for_begin);
            }
            v42 = 1;
LABEL_100:
            std::list<std::pair<std::string,common::tools::PTree>>::~list((std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 128));
            common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 64));
            if ( v42 == 1 )
            {
              v76 = &this->conn_map_;
              v77 = &this->conn_map_;
              v78 = &this->conn_map_;
              if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3)
                            + 0x7FFF8000) )
                __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
              if ( v78->m_flat_tree.m_data.m_seq.m_holder.m_size )
              {
                std::atomic<common::minet::AClientMgr<PathfindingserverConnect>::Status>::operator=(
                  &this->status_,
                  STATUS_INIT_2);
                common::milog::MiLogStream::create(
                  &v86,
                  &common::milog::MiLogDefault::default_log_obj_,
                  2u,
                  "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                  "init",
                  195);
                if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3)
                                                                       + 0x7FFF8000) )
                {
                  __asan_report_load4(&this->reconnect_max_interval_);
                }
                v43 = this->reconnect_max_interval_;
                if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&this->reconnect_min_interval_);
                }
                v44 = this->reconnect_min_interval_;
                if ( *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3)
                                                                     + 0x7FFF8000) )
                {
                  __asan_report_load1(&this->is_async_send_);
                }
                p_m_size = (void *)this->is_async_send_;
                v79 = &this->conn_map_;
                v80 = &this->conn_map_;
                v81 = &this->conn_map_;
                if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3)
                              + 0x7FFF8000) )
                {
                  p_m_size = &this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size;
                  __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
                }
                m_size = v81->m_flat_tree.m_data.m_seq.m_holder.m_size;
                if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
                {
                  p_m_size = &this->is_cut_packet_;
                  __asan_report_load1(&this->is_cut_packet_);
                }
                v47 = this->is_cut_packet_;
                if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3)
                                                                       + 0x7FFF8000) )
                {
                  p_m_size = &this->recv_buf_len_;
                  __asan_report_load4(&this->recv_buf_len_);
                }
                v48 = this->recv_buf_len_;
                if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this + 98) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3)
                                                                      + 0x7FFF8000) )
                {
                  p_m_size = &this->timeout_sec_;
                  __asan_report_load2(&this->timeout_sec_);
                }
                v49 = this->timeout_sec_;
                if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) <= 1 )
                {
                  p_m_size = &this->keep_alive_sec_;
                  __asan_report_load2(&this->keep_alive_sec_);
                }
                common::milog::MiLogStream::operator()(
                  &v86,
                  "AClientMgr init succ with keep_alive_sec=%u, timeout_sec=%u, recv_buf_len=%u, cut_packet=%d, connect_n"
                  "um=%lu async_send=%d, reconnect min_interval=%u max_interval=%u.",
                  this->keep_alive_sec_,
                  v49,
                  v48,
                  v47,
                  m_size,
                  p_m_size,
                  v44,
                  v43);
                common::milog::MiLogStream::~MiLogStream(&v86);
                v60 = 0;
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v86,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                  "init",
                  188);
                common::milog::MiLogStream::operator()(&v86, "ConnectList is empty, please check your configure file.");
                common::milog::MiLogStream::~MiLogStream(&v86);
                v60 = 1;
              }
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v86,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "../framework/common/minet/aclient/include/aclient_mgr.hpp",
              "init",
              117);
            common::milog::MiLogStream::operator()(&v86, "thread_num must between %d and %d.", 1LL, 16LL);
            common::milog::MiLogStream::~MiLogStream(&v86);
            v60 = 1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v86,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "../framework/common/minet/aclient/include/aclient_mgr.hpp",
            "init",
            111);
          common::milog::MiLogStream::operator()(&v86, "is_async_send_ is true, cache_packet_max_num_ must > 0!");
          common::milog::MiLogStream::~MiLogStream(&v86);
          v60 = 1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v86,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
          "init",
          104);
        common::milog::MiLogStream::operator()(&v86, "recv_buf_len(KB) must between %d and %d.", 10LL, 2048LL);
        common::milog::MiLogStream::~MiLogStream(&v86);
        v60 = 1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v86,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "../framework/common/minet/aclient/include/aclient_mgr.hpp",
        "init",
        98);
      v20 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v86,
              (const char (*)[32])"AClient reconnect min_interval:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->reconnect_min_interval_);
      v22 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v21, (const char (*)[15])" max_interval:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &this->reconnect_max_interval_);
      common::milog::MiLogStream::~MiLogStream(&v86);
      v60 = -1;
    }
  }
  result = v60;
  if ( v87 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
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

// Line 73: range 000000000C7B3E98-000000000C7B623D
int __cdecl common::minet::AClientMgr<TothemoonserverConnect>::init(
        common::minet::AClientMgr<TothemoonserverConnect> *const this,
        uint32_t self_app_id,
        const common::tools::PTree *pt)
{
  unsigned __int64 v3; // r15
  __int64 v4; // rax
  _DWORD *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  uint16_t v8; // si
  uint16_t v9; // di
  unsigned int v10; // ecx
  unsigned int recv_buf_len; // ebx
  unsigned int v12; // edx
  bool v13; // dl
  bool v14; // cl
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  uint32_t v19; // ecx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rbx
  std::list<std::pair<std::string,common::tools::PTree>>::size_type thread_num; // rbx
  std::list<std::pair<std::string,common::tools::PTree>>::size_type v25; // rcx
  common::tools::PTree *p_second; // rbx
  _BOOL4 v27; // ebx
  common::tools::PTree *v28; // rbx
  common::tools::PTree *v29; // rbx
  _BOOL4 v30; // ebx
  uint32_t v31; // eax
  int v32; // ebx
  uint32_t v33; // r12d
  uint16_t v34; // bx
  const char *v35; // rax
  std::shared_ptr<TothemoonserverConnect> *v36; // r8
  unsigned int v37; // ebx
  const char *v38; // rax
  unsigned int v39; // r12d
  unsigned int v40; // ebx
  const char *v41; // rax
  int v42; // ebx
  __int64 v43; // r9
  __int64 v44; // r8
  void *p_m_size; // rdi
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_size; // rsi
  _BOOL4 v47; // r11d
  uint32_t v48; // r10d
  __int64 v49; // rcx
  int result; // eax
  uint16_t keep_alive_sec; // [rsp+Ch] [rbp-2D4h]
  uint16_t timeout_sec; // [rsp+10h] [rbp-2D0h]
  bool is_cut_packet; // [rsp+14h] [rbp-2CCh]
  uint32_t target_app_id; // [rsp+18h] [rbp-2C8h]
  uint32_t max_send_packet_len; // [rsp+1Ch] [rbp-2C4h]
  bool is_async_send; // [rsp+20h] [rbp-2C0h]
  uint32_t cache_packet_max_num; // [rsp+24h] [rbp-2BCh]
  std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // [rsp+28h] [rbp-2B8h]
  uint32_t reconnect_max_interval; // [rsp+30h] [rbp-2B0h]
  int v60; // [rsp+34h] [rbp-2ACh]
  uint32_t reconnect_min_interval; // [rsp+40h] [rbp-2A0h]
  std::allocator<char> __a; // [rsp+51h] [rbp-28Fh] BYREF
  uint16_t port; // [rsp+52h] [rbp-28Eh]
  uint32_t ioc_index; // [rsp+54h] [rbp-28Ch]
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_begin; // [rsp+58h] [rbp-288h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_end; // [rsp+60h] [rbp-280h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>> *__for_range; // [rsp+68h] [rbp-278h]
  std::pair<std::string,common::tools::PTree> *p; // [rsp+70h] [rbp-270h]
  unsigned int *p_conn_map; // [rsp+80h] [rbp-260h]
  unsigned int *args_0; // [rsp+88h] [rbp-258h]
  std::shared_ptr<TothemoonserverConnect> *v74; // [rsp+90h] [rbp-250h]
  std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >*,false>,bool> *v75; // [rsp+98h] [rbp-248h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v76; // [rsp+A0h] [rbp-240h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v77; // [rsp+A8h] [rbp-238h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v78; // [rsp+B0h] [rbp-230h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v79; // [rsp+B8h] [rbp-228h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v80; // [rsp+C0h] [rbp-220h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v81; // [rsp+C8h] [rbp-218h]
  std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >*,false>,bool> v82; // [rsp+D0h] [rbp-210h] BYREF
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > > > v83; // [rsp+E0h] [rbp-200h] BYREF
  std::string v84; // [rsp+110h] [rbp-1D0h] BYREF
  std::string v85; // [rsp+130h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v86; // [rsp+150h] [rbp-190h] BYREF
  char v87[368]; // [rsp+170h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v87;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 17 target_app_id:140 64 8 16 pt_conn_list:126 96 16 15 connect_ptr:157 128 24 17 pt_child"
                        "_list:127 192 32 14 app_id_str:139 256 32 6 ip:147";
  *(_QWORD *)(v3 + 16) = common::minet::AClientMgr<TothemoonserverConnect>::init;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  if ( std::atomic<common::minet::AClientMgr<TothemoonserverConnect>::Status>::operator common::minet::AClientMgr<TothemoonserverConnect>::Status(&this->status_) )
  {
    common::milog::MiLogStream::create(
      &v86,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "../framework/common/minet/aclient/include/aclient_mgr.hpp",
      "init",
      77);
    v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v86, (const char (*)[19])"client_mgr status=");
    v7 = common::milog::MiLogStream::operator<<<std::atomic<common::minet::AClientMgr<TothemoonserverConnect>::Status>,(std::atomic<common::minet::AClientMgr<TothemoonserverConnect>::Status>*)0>(
           v6,
           &this->status_);
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v7,
      (const char (*)[40])", try to add dynamic server xml it now.");
    common::milog::MiLogStream::~MiLogStream(&v86);
    v60 = 1;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "KeepAliveSec.<xmlattr>.value", &__a);
    v8 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)&v86);
    if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) <= 1 )
    {
      __asan_report_store2(&this->keep_alive_sec_);
    }
    this->keep_alive_sec_ = v8;
    std::string::~string(&v86);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "TimeoutSec.<xmlattr>.value", &__a);
    v9 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)&v86);
    if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 98) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) )
    {
      v9 = (_WORD)this + 610;
      __asan_report_store2(&this->timeout_sec_);
    }
    this->timeout_sec_ = v9;
    std::string::~string(&v86);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "RecvBufLen.<xmlattr>.value", &__a);
    v10 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)&v86);
    if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->recv_buf_len_);
    }
    this->recv_buf_len_ = v10;
    std::string::~string(&v86);
    std::allocator<char>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->recv_buf_len_);
    }
    recv_buf_len = this->recv_buf_len_;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v83.m_data.m_seq.m_holder.m_capacity,
      "MaxSendPacketLen.<xmlattr>.value",
      &__a);
    v12 = common::tools::PTree::get<unsigned int>(
            pt,
            (const std::string *)&v83.m_data.m_seq.m_holder.m_capacity,
            recv_buf_len);
    if ( *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->max_send_packet_len_);
    }
    this->max_send_packet_len_ = v12;
    std::string::~string(&v83.m_data.m_seq.m_holder.m_capacity);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "CutPacket.<xmlattr>.value", &__a);
    v13 = common::tools::PTree::get<bool>(pt, (const std::string *)&v86);
    if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_cut_packet_);
    this->is_cut_packet_ = v13;
    std::string::~string(&v86);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v84, "AsyncSend.<xmlattr>.value", &__a);
    v14 = common::tools::PTree::get<bool>(pt, &v84, 0);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_async_send_);
    }
    this->is_async_send_ = v14;
    std::string::~string(&v84);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v85, "AsyncSend.<xmlattr>.CachePacketMaxNum", &__a);
    v15 = common::tools::PTree::get<unsigned int>(pt, &v85, 0xC8u);
    if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_store4(&this->cache_packet_max_num_);
    }
    this->cache_packet_max_num_ = v15;
    std::string::~string(&v85);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "ThreadNum.<xmlattr>.value", &__a);
    v16 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)&v86);
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->thread_num_);
    }
    this->thread_num_ = v16;
    std::string::~string(&v86);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 192),
      "Reconnect.<xmlattr>.min_interval",
      &__a);
    v17 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)(v3 + 192), 0x3E8u);
    if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->reconnect_min_interval_);
    }
    this->reconnect_min_interval_ = v17;
    std::string::~string((void *)(v3 + 192));
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 256),
      "Reconnect.<xmlattr>.max_interval",
      &__a);
    v18 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)(v3 + 256), 0xBB8u);
    if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_store4(&this->reconnect_max_interval_);
    }
    this->reconnect_max_interval_ = v18;
    std::string::~string((void *)(v3 + 256));
    std::allocator<char>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->reconnect_min_interval_);
    }
    v19 = this->reconnect_min_interval_;
    if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->reconnect_max_interval_);
    }
    if ( v19 <= this->reconnect_max_interval_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->recv_buf_len_);
      }
      if ( this->recv_buf_len_ > 9 && this->recv_buf_len_ <= 0x800 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load1(&this->is_async_send_);
        }
        if ( !this->is_async_send_ )
          goto LABEL_46;
        if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cache_packet_max_num_);
        }
        if ( this->cache_packet_max_num_ )
        {
LABEL_46:
          if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&this->thread_num_);
          }
          if ( this->thread_num_ && this->thread_num_ <= 0x10 )
          {
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
            std::allocator<char>::allocator(&__a);
            std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "ConnectList", &__a);
            common::tools::PTree::getChild(pt, (const std::string *)&v86);
            std::string::~string(&v86);
            std::allocator<char>::~allocator(&__a);
            common::tools::PTree::getAllChild[abi:cxx11](
              (std::list<std::pair<std::string,common::tools::PTree>> *)(v3 + 128),
              (const common::tools::PTree *const)(v3 + 64));
            common::milog::MiLogStream::create(
              &v86,
              &common::milog::MiLogDefault::default_log_obj_,
              2u,
              "../framework/common/minet/aclient/include/aclient_mgr.hpp",
              "init",
              129);
            v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    &v86,
                    (const char (*)[16])"PTreeList size:");
            __for_end._M_node = (std::__detail::_List_node_base *)std::list<std::pair<std::string,common::tools::PTree>>::size((const std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 128));
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v23,
              (const unsigned __int64 *)&__for_end);
            common::milog::MiLogStream::~MiLogStream(&v86);
            if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&this->thread_num_);
            }
            thread_num = this->thread_num_;
            if ( thread_num > std::list<std::pair<std::string,common::tools::PTree>>::size((const std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 128)) )
            {
              common::milog::MiLogStream::create(
                &v86,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                "init",
                132);
              v25 = std::list<std::pair<std::string,common::tools::PTree>>::size((const std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 128));
              if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&this->thread_num_);
              }
              common::milog::MiLogStream::operator()(
                &v86,
                "thread_num_ %d is bigger than connect list size %lu",
                this->thread_num_,
                v25);
              common::milog::MiLogStream::~MiLogStream(&v86);
            }
            ioc_index = 0;
            __for_range = (std::list<std::pair<std::string,common::tools::PTree>> *)(v3 + 128);
            __for_begin._M_node = std::list<std::pair<std::string,common::tools::PTree>>::begin((std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 128))._M_node;
            __for_end._M_node = std::list<std::pair<std::string,common::tools::PTree>>::end(__for_range)._M_node;
            while ( std::operator!=(&__for_begin, &__for_end) )
            {
              p = std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator*(&__for_begin);
              p_second = &p->second;
              std::allocator<char>::allocator(&__a);
              std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "<xmlattr>.app_id", &__a);
              common::tools::PTree::get<std::string>((std::string *)(v3 + 192), p_second, (const std::string *)&v86);
              std::string::~string(&v86);
              std::allocator<char>::~allocator(&__a);
              std::string::basic_string(&v86, v3 + 192);
              *(_DWORD *)(v3 + 48) = common::tools::AppIdUtils::getAppId((std::string *)&v86);
              std::string::~string(&v86);
              if ( *(_DWORD *)(v3 + 48) )
              {
                v28 = &p->second;
                std::allocator<char>::allocator(&__a);
                std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "<xmlattr>.ip", &__a);
                common::tools::PTree::get<std::string>((std::string *)(v3 + 256), v28, (const std::string *)&v86);
                std::string::~string(&v86);
                std::allocator<char>::~allocator(&__a);
                v29 = &p->second;
                std::allocator<char>::allocator(&__a);
                std::string::basic_string<std::allocator<char>>((std::string *const)&v86, "<xmlattr>.port", &__a);
                port = common::tools::PTree::get<unsigned short>(v29, (const std::string *)&v86);
                std::string::~string(&v86);
                std::allocator<char>::~allocator(&__a);
                if ( port )
                {
                  v31 = ioc_index++;
                  if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3)
                                                                         + 0x7FFF8000) )
                  {
                    v31 = __asan_report_load4(&this->thread_num_);
                  }
                  common::tools::perf::make_shared<TothemoonserverConnect,boost::asio::io_context &>(
                    (boost::asio::io_context *)(v3 + 96),
                    &this->ioc_arr_[v31 % this->thread_num_]);
                  if ( std::operator==<TothemoonserverConnect>(
                         0LL,
                         (const std::shared_ptr<TothemoonserverConnect> *)(v3 + 96)) )
                  {
                    common::milog::MiLogStream::create(
                      &v86,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                      "init",
                      160);
                    common::milog::MiLogStream::operator()(&v86, "new ConnectT failed.");
                    common::milog::MiLogStream::~MiLogStream(&v86);
                    v60 = 1;
                    v32 = 0;
                  }
                  else
                  {
                    v58 = std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                    if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3)
                                                                           + 0x7FFF8000) )
                    {
                      __asan_report_load4(&this->reconnect_max_interval_);
                    }
                    reconnect_max_interval = this->reconnect_max_interval_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&this->reconnect_min_interval_);
                    }
                    reconnect_min_interval = this->reconnect_min_interval_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                                           + 0x7FFF8000) )
                    {
                      __asan_report_load4(&this->cache_packet_max_num_);
                    }
                    cache_packet_max_num = this->cache_packet_max_num_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3)
                                                                         + 0x7FFF8000) )
                    {
                      __asan_report_load1(&this->is_async_send_);
                    }
                    is_async_send = this->is_async_send_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&this->max_send_packet_len_);
                    }
                    max_send_packet_len = this->max_send_packet_len_;
                    target_app_id = *(_DWORD *)(v3 + 48);
                    if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
                      __asan_report_load1(&this->is_cut_packet_);
                    is_cut_packet = this->is_cut_packet_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)this + 98) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_load2(&this->timeout_sec_);
                    }
                    timeout_sec = this->timeout_sec_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) <= 1 )
                    {
                      __asan_report_load2(&this->keep_alive_sec_);
                    }
                    keep_alive_sec = this->keep_alive_sec_;
                    if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3)
                                                                           + 0x7FFF8000) )
                    {
                      __asan_report_load4(&this->recv_buf_len_);
                    }
                    v33 = this->recv_buf_len_;
                    v34 = port;
                    v35 = (const char *)std::string::c_str(v3 + 256);
                    if ( common::minet::AClientConnect::init(
                           v58,
                           self_app_id,
                           v35,
                           v34,
                           v33,
                           keep_alive_sec,
                           timeout_sec,
                           is_cut_packet,
                           target_app_id,
                           max_send_packet_len,
                           is_async_send,
                           cache_packet_max_num,
                           reconnect_min_interval,
                           reconnect_max_interval) )
                    {
                      common::milog::MiLogStream::create(
                        &v86,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                        "init",
                        167);
                      v37 = port;
                      v38 = (const char *)std::string::c_str(v3 + 256);
                      common::milog::MiLogStream::operator()(&v86, "init ConnectT %s:%u failed.", v38, v37);
                      common::milog::MiLogStream::~MiLogStream(&v86);
                      v60 = 1;
                      v32 = 0;
                    }
                    else
                    {
                      p_conn_map = (unsigned int *)&this->conn_map_;
                      args_0 = (unsigned int *)(v3 + 96);
                      v74 = (std::shared_ptr<TothemoonserverConnect> *)(v3 + 48);
                      boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect>>,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect>>>>::emplace_unique<unsigned int &,std::shared_ptr<TothemoonserverConnect>&>(
                        &v83,
                        (unsigned int *)&this->conn_map_,
                        (std::shared_ptr<TothemoonserverConnect> *)(v3 + 48),
                        (unsigned int *)(v3 + 96),
                        v36);
                      v75 = (std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >*,false>,bool> *)&v83;
                      std::pair<boost::container::vec_iterator<std::pair*<unsigned int,std::shared_ptr<TothemoonserverConnect>>,false>,bool>::pair(
                        &v82,
                        (const std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >*,false>,bool> *)&v83);
                      if ( v82.second )
                      {
                        v32 = 1;
                      }
                      else
                      {
                        common::milog::MiLogStream::create(
                          &v86,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                          "init",
                          173);
                        v39 = *(_DWORD *)(v3 + 48);
                        v40 = port;
                        v41 = (const char *)std::string::c_str(v3 + 256);
                        common::milog::MiLogStream::operator()(
                          &v86,
                          "duplicate connection %s:%u, app_id=%u.",
                          v41,
                          v40,
                          v39);
                        common::milog::MiLogStream::~MiLogStream(&v86);
                        v60 = 1;
                        v32 = 0;
                      }
                    }
                  }
                  std::shared_ptr<TothemoonserverConnect>::~shared_ptr((std::shared_ptr<TothemoonserverConnect> *const)(v3 + 96));
                  v30 = v32 == 1;
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v86,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                    "init",
                    152);
                  common::milog::MiLogStream::operator()(&v86, "ConnetT port is 0");
                  common::milog::MiLogStream::~MiLogStream(&v86);
                  v60 = 1;
                  v30 = 0;
                }
                std::string::~string((void *)(v3 + 256));
                v27 = v30;
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v86,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                  "init",
                  143);
                common::milog::MiLogStream::operator()(&v86, "ConnetT app_id is 0");
                common::milog::MiLogStream::~MiLogStream(&v86);
                v60 = 1;
                v27 = 0;
              }
              std::string::~string((void *)(v3 + 192));
              if ( !v27 )
              {
                v42 = 0;
                goto LABEL_100;
              }
              std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator++(&__for_begin);
            }
            v42 = 1;
LABEL_100:
            std::list<std::pair<std::string,common::tools::PTree>>::~list((std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 128));
            common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 64));
            if ( v42 == 1 )
            {
              v76 = &this->conn_map_;
              v77 = &this->conn_map_;
              v78 = &this->conn_map_;
              if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3)
                            + 0x7FFF8000) )
                __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
              if ( v78->m_flat_tree.m_data.m_seq.m_holder.m_size )
              {
                std::atomic<common::minet::AClientMgr<TothemoonserverConnect>::Status>::operator=(
                  &this->status_,
                  STATUS_INIT_3);
                common::milog::MiLogStream::create(
                  &v86,
                  &common::milog::MiLogDefault::default_log_obj_,
                  2u,
                  "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                  "init",
                  195);
                if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3)
                                                                       + 0x7FFF8000) )
                {
                  __asan_report_load4(&this->reconnect_max_interval_);
                }
                v43 = this->reconnect_max_interval_;
                if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&this->reconnect_min_interval_);
                }
                v44 = this->reconnect_min_interval_;
                if ( *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3)
                                                                     + 0x7FFF8000) )
                {
                  __asan_report_load1(&this->is_async_send_);
                }
                p_m_size = (void *)this->is_async_send_;
                v79 = &this->conn_map_;
                v80 = &this->conn_map_;
                v81 = &this->conn_map_;
                if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3)
                              + 0x7FFF8000) )
                {
                  p_m_size = &this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size;
                  __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
                }
                m_size = v81->m_flat_tree.m_data.m_seq.m_holder.m_size;
                if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
                {
                  p_m_size = &this->is_cut_packet_;
                  __asan_report_load1(&this->is_cut_packet_);
                }
                v47 = this->is_cut_packet_;
                if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3)
                                                                       + 0x7FFF8000) )
                {
                  p_m_size = &this->recv_buf_len_;
                  __asan_report_load4(&this->recv_buf_len_);
                }
                v48 = this->recv_buf_len_;
                if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this + 98) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3)
                                                                      + 0x7FFF8000) )
                {
                  p_m_size = &this->timeout_sec_;
                  __asan_report_load2(&this->timeout_sec_);
                }
                v49 = this->timeout_sec_;
                if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) <= 1 )
                {
                  p_m_size = &this->keep_alive_sec_;
                  __asan_report_load2(&this->keep_alive_sec_);
                }
                common::milog::MiLogStream::operator()(
                  &v86,
                  "AClientMgr init succ with keep_alive_sec=%u, timeout_sec=%u, recv_buf_len=%u, cut_packet=%d, connect_n"
                  "um=%lu async_send=%d, reconnect min_interval=%u max_interval=%u.",
                  this->keep_alive_sec_,
                  v49,
                  v48,
                  v47,
                  m_size,
                  p_m_size,
                  v44,
                  v43);
                common::milog::MiLogStream::~MiLogStream(&v86);
                v60 = 0;
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v86,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                  "init",
                  188);
                common::milog::MiLogStream::operator()(&v86, "ConnectList is empty, please check your configure file.");
                common::milog::MiLogStream::~MiLogStream(&v86);
                v60 = 1;
              }
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v86,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "../framework/common/minet/aclient/include/aclient_mgr.hpp",
              "init",
              117);
            common::milog::MiLogStream::operator()(&v86, "thread_num must between %d and %d.", 1LL, 16LL);
            common::milog::MiLogStream::~MiLogStream(&v86);
            v60 = 1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v86,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "../framework/common/minet/aclient/include/aclient_mgr.hpp",
            "init",
            111);
          common::milog::MiLogStream::operator()(&v86, "is_async_send_ is true, cache_packet_max_num_ must > 0!");
          common::milog::MiLogStream::~MiLogStream(&v86);
          v60 = 1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v86,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
          "init",
          104);
        common::milog::MiLogStream::operator()(&v86, "recv_buf_len(KB) must between %d and %d.", 10LL, 2048LL);
        common::milog::MiLogStream::~MiLogStream(&v86);
        v60 = 1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v86,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "../framework/common/minet/aclient/include/aclient_mgr.hpp",
        "init",
        98);
      v20 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v86,
              (const char (*)[32])"AClient reconnect min_interval:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->reconnect_min_interval_);
      v22 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v21, (const char (*)[15])" max_interval:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &this->reconnect_max_interval_);
      common::milog::MiLogStream::~MiLogStream(&v86);
      v60 = -1;
    }
  }
  result = v60;
  if ( v87 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
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

// Line 201: range 000000000C85D19A-000000000C85E4D5
int __cdecl common::minet::AClientMgr<DispatchConnect>::reload(
        common::minet::AClientMgr<DispatchConnect> *const this,
        uint32_t self_app_id,
        const common::tools::PTree *pt)
{
  unsigned __int64 v3; // r15
  __int64 v4; // rax
  _DWORD *v5; // r14
  unsigned __int64 v6; // rax
  common::tools::PTree *p_second; // rbx
  int v8; // ebx
  common::tools::PTree *v9; // rbx
  common::tools::PTree *v10; // rbx
  _BOOL4 v12; // ebx
  bool v13; // bl
  uint32_t v14; // eax
  int v15; // ebx
  uint32_t recv_buf_len; // r12d
  uint16_t v17; // bx
  const char *v18; // rdx
  unsigned int v19; // ebx
  const char *v20; // rdx
  int v21; // ebx
  std::shared_ptr<DispatchConnect> *M_current; // rbx
  std::vector<std::shared_ptr<DispatchConnect>>::iterator v23; // rax
  std::vector<std::shared_ptr<DispatchConnect>>::size_type v24; // rbx
  const std::shared_ptr<DispatchConnect> *v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  uint32_t TargetAppId; // r12d
  std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  unsigned int RemotePort; // ebx
  std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  const char *RemoteIp; // rax
  std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  std::shared_ptr<DispatchConnect> *v36; // r8
  std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  uint32_t v39; // r12d
  std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  unsigned int v41; // ebx
  std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  const char *v43; // rax
  int v44; // ebx
  std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  uint32_t v46; // r12d
  std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  unsigned int v48; // ebx
  std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  const char *v50; // rax
  int result; // eax
  uint16_t keep_alive_sec; // [rsp+10h] [rbp-2A0h]
  uint16_t timeout_sec; // [rsp+14h] [rbp-29Ch]
  bool is_cut_packet; // [rsp+18h] [rbp-298h]
  uint32_t max_send_packet_len; // [rsp+1Ch] [rbp-294h]
  bool is_async_send; // [rsp+20h] [rbp-290h]
  uint32_t cache_packet_max_num; // [rsp+24h] [rbp-28Ch]
  std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // [rsp+28h] [rbp-288h]
  uint32_t reconnect_max_interval; // [rsp+30h] [rbp-280h]
  int v60; // [rsp+34h] [rbp-27Ch]
  uint32_t reconnect_min_interval; // [rsp+40h] [rbp-270h]
  std::allocator<char> __a; // [rsp+55h] [rbp-25Bh] BYREF
  uint16_t port; // [rsp+56h] [rbp-25Ah]
  uint32_t v65; // [rsp+58h] [rbp-258h] BYREF
  uint32_t ioc_index; // [rsp+5Ch] [rbp-254h]
  uint32_t idx; // [rsp+60h] [rbp-250h]
  uint32_t target_app_id; // [rsp+64h] [rbp-24Ch]
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_begin; // [rsp+68h] [rbp-248h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_end; // [rsp+70h] [rbp-240h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>> *__for_range; // [rsp+78h] [rbp-238h]
  std::pair<std::string,common::tools::PTree> *p; // [rsp+80h] [rbp-230h]
  unsigned int *p_conn_map; // [rsp+90h] [rbp-220h]
  unsigned int *args_0; // [rsp+98h] [rbp-218h]
  std::shared_ptr<DispatchConnect> *v75; // [rsp+A0h] [rbp-210h]
  std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<DispatchConnect> >*,false>,bool> *v76; // [rsp+A8h] [rbp-208h]
  std::shared_ptr<DispatchConnect> v77; // [rsp+B0h] [rbp-200h] BYREF
  common::milog::MiLogStream v78; // [rsp+C0h] [rbp-1F0h] BYREF
  char v79[464]; // [rsp+E0h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 8 16 pt_conn_list:214 64 16 15 connect_ptr:264 96 16 9 wlock:274 128 16 15 connect_ptr:238 "
                        "160 24 16 new_conn_vec:211 224 24 17 pt_child_list:215 288 32 14 app_id_str:219 352 32 6 ip:226";
  *(_QWORD *)(v3 + 16) = common::minet::AClientMgr<DispatchConnect>::reload;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v6 = (unsigned __int64)(this->_vptr_AClientBase + 7);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(this->_vptr_AClientBase + 7);
  if ( (*(unsigned __int8 (__fastcall **)(common::minet::AClientMgr<DispatchConnect> *const))v6)(this) != 1 )
  {
    common::milog::MiLogStream::create(
      &v78,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aclient/include/aclient_mgr.hpp",
      "reload",
      207);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v78, (const char (*)[22])"isRun() return false!");
    common::milog::MiLogStream::~MiLogStream(&v78);
    v60 = -1;
  }
  else
  {
    std::vector<std::shared_ptr<DispatchConnect>>::vector((std::vector<std::shared_ptr<DispatchConnect>> *const)(v3 + 160));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v78, "ConnectList", &__a);
    common::tools::PTree::getChild(pt, (const std::string *)&v78);
    std::string::~string(&v78);
    std::allocator<char>::~allocator(&__a);
    common::tools::PTree::getAllChild[abi:cxx11](
      (std::list<std::pair<std::string,common::tools::PTree>> *)(v3 + 224),
      (const common::tools::PTree *const)(v3 + 32));
    ioc_index = 0;
    __for_range = (std::list<std::pair<std::string,common::tools::PTree>> *)(v3 + 224);
    __for_begin._M_node = std::list<std::pair<std::string,common::tools::PTree>>::begin((std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 224))._M_node;
    __for_end._M_node = std::list<std::pair<std::string,common::tools::PTree>>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      p = std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator*(&__for_begin);
      p_second = &p->second;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v78, "<xmlattr>.app_id", &__a);
      common::tools::PTree::get<std::string>((std::string *)(v3 + 288), p_second, (const std::string *)&v78);
      std::string::~string(&v78);
      std::allocator<char>::~allocator(&__a);
      std::string::basic_string(&v78, v3 + 288);
      target_app_id = common::tools::AppIdUtils::getAppId((std::string *)&v78);
      std::string::~string(&v78);
      if ( target_app_id )
      {
        v9 = &p->second;
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v78, "<xmlattr>.ip", &__a);
        common::tools::PTree::get<std::string>((std::string *)(v3 + 352), v9, (const std::string *)&v78);
        std::string::~string(&v78);
        std::allocator<char>::~allocator(&__a);
        v10 = &p->second;
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v78, "<xmlattr>.port", &__a);
        port = common::tools::PTree::get<unsigned short>(v10, (const std::string *)&v78);
        std::string::~string(&v78);
        std::allocator<char>::~allocator(&__a);
        if ( (unsigned __int8)std::string::empty(v3 + 352) || !port )
        {
          v12 = 0;
        }
        else
        {
          common::minet::AClientMgr<DispatchConnect>::findConnectByAppId(
            (common::minet::AClientMgr<DispatchConnect> *const)&v77,
            (uint32_t)this);
          v13 = std::operator!=<DispatchConnect>(0LL, &v77);
          std::shared_ptr<DispatchConnect>::~shared_ptr(&v77);
          if ( v13 )
          {
            v12 = 0;
          }
          else
          {
            v14 = ioc_index++;
            if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              v14 = __asan_report_load4(&this->thread_num_);
            }
            common::tools::perf::make_shared<DispatchConnect,boost::asio::io_context &>(
              (boost::asio::io_context *)(v3 + 128),
              &this->ioc_arr_[v14 % this->thread_num_]);
            if ( std::operator==<DispatchConnect>(0LL, (const std::shared_ptr<DispatchConnect> *)(v3 + 128)) )
            {
              v15 = 0;
            }
            else
            {
              v58 = std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&this->reconnect_max_interval_);
              }
              reconnect_max_interval = this->reconnect_max_interval_;
              if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->reconnect_min_interval_);
              }
              reconnect_min_interval = this->reconnect_min_interval_;
              if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&this->cache_packet_max_num_);
              }
              cache_packet_max_num = this->cache_packet_max_num_;
              if ( *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3)
                                                                   + 0x7FFF8000) )
              {
                __asan_report_load1(&this->is_async_send_);
              }
              is_async_send = this->is_async_send_;
              if ( *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->max_send_packet_len_);
              }
              max_send_packet_len = this->max_send_packet_len_;
              if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
                __asan_report_load1(&this->is_cut_packet_);
              is_cut_packet = this->is_cut_packet_;
              if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 98) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load2(&this->timeout_sec_);
              }
              timeout_sec = this->timeout_sec_;
              if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) <= 1 )
              {
                __asan_report_load2(&this->keep_alive_sec_);
              }
              keep_alive_sec = this->keep_alive_sec_;
              if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&this->recv_buf_len_);
              }
              recv_buf_len = this->recv_buf_len_;
              v17 = port;
              v18 = (const char *)std::string::c_str(v3 + 352);
              if ( common::minet::AClientConnect::init(
                     v58,
                     self_app_id,
                     v18,
                     v17,
                     recv_buf_len,
                     keep_alive_sec,
                     timeout_sec,
                     is_cut_packet,
                     target_app_id,
                     max_send_packet_len,
                     is_async_send,
                     cache_packet_max_num,
                     reconnect_min_interval,
                     reconnect_max_interval) )
              {
                v15 = 0;
              }
              else
              {
                std::vector<std::shared_ptr<DispatchConnect>>::push_back(
                  (std::vector<std::shared_ptr<DispatchConnect>> *const)(v3 + 160),
                  (const std::vector<std::shared_ptr<DispatchConnect>>::value_type *)(v3 + 128));
                common::milog::MiLogStream::create(
                  &v78,
                  &common::milog::MiLogDefault::default_log_obj_,
                  2u,
                  "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                  "reload",
                  249);
                v19 = port;
                v20 = (const char *)std::string::c_str(v3 + 352);
                common::milog::MiLogStream::operator()(&v78, "add new server ip: %s, port: %u", v20, v19);
                common::milog::MiLogStream::~MiLogStream(&v78);
                v15 = 1;
              }
            }
            std::shared_ptr<DispatchConnect>::~shared_ptr((std::shared_ptr<DispatchConnect> *const)(v3 + 128));
            v12 = v15 == 1;
          }
        }
        std::string::~string((void *)(v3 + 352));
        if ( v12 )
          v8 = 2;
        else
          v8 = 1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v78,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
          "reload",
          223);
        common::milog::MiLogStream::operator()(&v78, "ConnetT target_app_id is 0");
        common::milog::MiLogStream::~MiLogStream(&v78);
        v60 = 1;
        v8 = 0;
      }
      std::string::~string((void *)(v3 + 288));
      if ( !v8 )
      {
        v21 = 0;
        goto LABEL_55;
      }
      std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator++(&__for_begin);
    }
    v21 = 1;
LABEL_55:
    std::list<std::pair<std::string,common::tools::PTree>>::~list((std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 224));
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 32));
    if ( v21 == 1 )
    {
      if ( !std::vector<std::shared_ptr<DispatchConnect>>::empty((const std::vector<std::shared_ptr<DispatchConnect>> *const)(v3 + 160)) )
      {
        M_current = std::vector<std::shared_ptr<DispatchConnect>>::end((std::vector<std::shared_ptr<DispatchConnect>> *const)(v3 + 160))._M_current;
        v23._M_current = std::vector<std::shared_ptr<DispatchConnect>>::begin((std::vector<std::shared_ptr<DispatchConnect>> *const)(v3 + 160))._M_current;
        std::random_shuffle<__gnu_cxx::__normal_iterator<std::shared_ptr<DispatchConnect> *,std::vector<std::shared_ptr<DispatchConnect>>>>(
          v23,
          (__gnu_cxx::__normal_iterator<std::shared_ptr<DispatchConnect>*,std::vector<std::shared_ptr<DispatchConnect>> >)M_current);
        for ( idx = 0; ; ++idx )
        {
          v24 = idx;
          if ( v24 >= std::vector<std::shared_ptr<DispatchConnect>>::size((const std::vector<std::shared_ptr<DispatchConnect>> *const)(v3 + 160)) )
            break;
          v25 = std::vector<std::shared_ptr<DispatchConnect>>::operator[](
                  (std::vector<std::shared_ptr<DispatchConnect>> *const)(v3 + 160),
                  idx);
          std::shared_ptr<DispatchConnect>::shared_ptr((std::shared_ptr<DispatchConnect> *const)(v3 + 64), v25);
          v26 = (unsigned __int64)std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
            v26 = __asan_report_load8(v26);
          v27 = *(_QWORD *)v26 + 24LL;
          if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
            v26 = __asan_report_load8(*(_QWORD *)v26 + 24LL);
          if ( (*(unsigned int (__fastcall **)(unsigned __int64, __int64))v27)(v26, 60LL) )
          {
            v28 = std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            common::minet::AClientConnect::stop(v28);
            common::milog::MiLogStream::create(
              &v78,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "../framework/common/minet/aclient/include/aclient_mgr.hpp",
              "reload",
              269);
            v29 = std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            TargetAppId = common::minet::AClientConnect::getTargetAppId(v29);
            v31 = std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            RemotePort = common::minet::AClientConnect::getRemotePort(v31);
            v33 = std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            RemoteIp = common::minet::AClientConnect::getRemoteIp(v33);
            common::milog::MiLogStream::operator()(
              &v78,
              "reload connect start failed, connection %s:%u target_app_id=%u",
              RemoteIp,
              RemotePort,
              TargetAppId);
            common::milog::MiLogStream::~MiLogStream(&v78);
          }
          else
          {
            std::unique_lock<std::shared_mutex>::unique_lock(
              (std::unique_lock<std::shared_mutex> *const)(v3 + 96),
              &this->shared_mu_);
            v35 = std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            v65 = common::minet::AClientConnect::getTargetAppId(v35);
            p_conn_map = (unsigned int *)&this->conn_map_;
            args_0 = (unsigned int *)(v3 + 64);
            v75 = (std::shared_ptr<DispatchConnect> *)&v65;
            boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect>>,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect>>>>::emplace_unique<unsigned int,std::shared_ptr<DispatchConnect>&>(
              (boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > > > *const)(v3 + 128),
              (unsigned int *)&this->conn_map_,
              (std::shared_ptr<DispatchConnect> *)&v65,
              (unsigned int *)(v3 + 64),
              v36);
            v76 = (std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<DispatchConnect> >*,false>,bool> *)(v3 + 128);
            std::pair<boost::container::vec_iterator<std::pair*<unsigned int,std::shared_ptr<DispatchConnect>>,false>,bool>::pair(
              (std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<DispatchConnect> >*,false>,bool> *const)&v77,
              (const std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<DispatchConnect> >*,false>,bool> *)(v3 + 128));
            if ( LOBYTE(v77._M_refcount._M_pi) )
            {
              v44 = 1;
            }
            else
            {
              v37 = std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              common::minet::AClientConnect::stop(v37);
              common::milog::MiLogStream::create(
                &v78,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                "reload",
                278);
              v38 = std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v39 = common::minet::AClientConnect::getTargetAppId(v38);
              v40 = std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v41 = common::minet::AClientConnect::getRemotePort(v40);
              v42 = std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v43 = common::minet::AClientConnect::getRemoteIp(v42);
              common::milog::MiLogStream::operator()(
                &v78,
                "duplicate connection %s:%u, target_app_id=%u.",
                v43,
                v41,
                v39);
              common::milog::MiLogStream::~MiLogStream(&v78);
              v44 = 0;
            }
            std::unique_lock<std::shared_mutex>::~unique_lock((std::unique_lock<std::shared_mutex> *const)(v3 + 96));
            if ( v44 == 1 )
            {
              common::milog::MiLogStream::create(
                &v78,
                &common::milog::MiLogDefault::default_log_obj_,
                2u,
                "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                "reload",
                282);
              v45 = std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v46 = common::minet::AClientConnect::getTargetAppId(v45);
              v47 = std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v48 = common::minet::AClientConnect::getRemotePort(v47);
              v49 = std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v50 = common::minet::AClientConnect::getRemoteIp(v49);
              common::milog::MiLogStream::operator()(&v78, "add new server %s:%u, app_id=%u.", v50, v48, v46);
              common::milog::MiLogStream::~MiLogStream(&v78);
            }
          }
          std::shared_ptr<DispatchConnect>::~shared_ptr((std::shared_ptr<DispatchConnect> *const)(v3 + 64));
        }
      }
      v60 = 0;
    }
    std::vector<std::shared_ptr<DispatchConnect>>::~vector((std::vector<std::shared_ptr<DispatchConnect>> *const)(v3 + 160));
  }
  result = v60;
  if ( v79 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 201: range 000000000C7B63FE-000000000C7B7739
int __cdecl common::minet::AClientMgr<GameserverConnect>::reload(
        common::minet::AClientMgr<GameserverConnect> *const this,
        uint32_t self_app_id,
        const common::tools::PTree *pt)
{
  unsigned __int64 v3; // r15
  __int64 v4; // rax
  _DWORD *v5; // r14
  unsigned __int64 v6; // rax
  common::tools::PTree *p_second; // rbx
  int v8; // ebx
  common::tools::PTree *v9; // rbx
  common::tools::PTree *v10; // rbx
  _BOOL4 v12; // ebx
  bool v13; // bl
  uint32_t v14; // eax
  int v15; // ebx
  uint32_t recv_buf_len; // r12d
  uint16_t v17; // bx
  const char *v18; // rdx
  unsigned int v19; // ebx
  const char *v20; // rdx
  int v21; // ebx
  std::shared_ptr<GameserverConnect> *M_current; // rbx
  std::vector<std::shared_ptr<GameserverConnect>>::iterator v23; // rax
  std::vector<std::shared_ptr<GameserverConnect>>::size_type v24; // rbx
  const std::shared_ptr<GameserverConnect> *v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  uint32_t TargetAppId; // r12d
  std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  unsigned int RemotePort; // ebx
  std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  const char *RemoteIp; // rax
  std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  std::shared_ptr<GameserverConnect> *v36; // r8
  std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  uint32_t v39; // r12d
  std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  unsigned int v41; // ebx
  std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  const char *v43; // rax
  int v44; // ebx
  std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  uint32_t v46; // r12d
  std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  unsigned int v48; // ebx
  std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  const char *v50; // rax
  int result; // eax
  uint16_t keep_alive_sec; // [rsp+10h] [rbp-2A0h]
  uint16_t timeout_sec; // [rsp+14h] [rbp-29Ch]
  bool is_cut_packet; // [rsp+18h] [rbp-298h]
  uint32_t max_send_packet_len; // [rsp+1Ch] [rbp-294h]
  bool is_async_send; // [rsp+20h] [rbp-290h]
  uint32_t cache_packet_max_num; // [rsp+24h] [rbp-28Ch]
  std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // [rsp+28h] [rbp-288h]
  uint32_t reconnect_max_interval; // [rsp+30h] [rbp-280h]
  int v60; // [rsp+34h] [rbp-27Ch]
  uint32_t reconnect_min_interval; // [rsp+40h] [rbp-270h]
  std::allocator<char> __a; // [rsp+55h] [rbp-25Bh] BYREF
  uint16_t port; // [rsp+56h] [rbp-25Ah]
  uint32_t v65; // [rsp+58h] [rbp-258h] BYREF
  uint32_t ioc_index; // [rsp+5Ch] [rbp-254h]
  uint32_t idx; // [rsp+60h] [rbp-250h]
  uint32_t target_app_id; // [rsp+64h] [rbp-24Ch]
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_begin; // [rsp+68h] [rbp-248h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_end; // [rsp+70h] [rbp-240h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>> *__for_range; // [rsp+78h] [rbp-238h]
  std::pair<std::string,common::tools::PTree> *p; // [rsp+80h] [rbp-230h]
  unsigned int *p_conn_map; // [rsp+90h] [rbp-220h]
  unsigned int *args_0; // [rsp+98h] [rbp-218h]
  std::shared_ptr<GameserverConnect> *v75; // [rsp+A0h] [rbp-210h]
  std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<GameserverConnect> >*,false>,bool> *v76; // [rsp+A8h] [rbp-208h]
  std::shared_ptr<GameserverConnect> v77; // [rsp+B0h] [rbp-200h] BYREF
  common::milog::MiLogStream v78; // [rsp+C0h] [rbp-1F0h] BYREF
  char v79[464]; // [rsp+E0h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 8 16 pt_conn_list:214 64 16 15 connect_ptr:264 96 16 9 wlock:274 128 16 15 connect_ptr:238 "
                        "160 24 16 new_conn_vec:211 224 24 17 pt_child_list:215 288 32 14 app_id_str:219 352 32 6 ip:226";
  *(_QWORD *)(v3 + 16) = common::minet::AClientMgr<GameserverConnect>::reload;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v6 = (unsigned __int64)(this->_vptr_AClientBase + 7);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(this->_vptr_AClientBase + 7);
  if ( (*(unsigned __int8 (__fastcall **)(common::minet::AClientMgr<GameserverConnect> *const))v6)(this) != 1 )
  {
    common::milog::MiLogStream::create(
      &v78,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aclient/include/aclient_mgr.hpp",
      "reload",
      207);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v78, (const char (*)[22])"isRun() return false!");
    common::milog::MiLogStream::~MiLogStream(&v78);
    v60 = -1;
  }
  else
  {
    std::vector<std::shared_ptr<GameserverConnect>>::vector((std::vector<std::shared_ptr<GameserverConnect>> *const)(v3 + 160));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v78, "ConnectList", &__a);
    common::tools::PTree::getChild(pt, (const std::string *)&v78);
    std::string::~string(&v78);
    std::allocator<char>::~allocator(&__a);
    common::tools::PTree::getAllChild[abi:cxx11](
      (std::list<std::pair<std::string,common::tools::PTree>> *)(v3 + 224),
      (const common::tools::PTree *const)(v3 + 32));
    ioc_index = 0;
    __for_range = (std::list<std::pair<std::string,common::tools::PTree>> *)(v3 + 224);
    __for_begin._M_node = std::list<std::pair<std::string,common::tools::PTree>>::begin((std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 224))._M_node;
    __for_end._M_node = std::list<std::pair<std::string,common::tools::PTree>>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      p = std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator*(&__for_begin);
      p_second = &p->second;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v78, "<xmlattr>.app_id", &__a);
      common::tools::PTree::get<std::string>((std::string *)(v3 + 288), p_second, (const std::string *)&v78);
      std::string::~string(&v78);
      std::allocator<char>::~allocator(&__a);
      std::string::basic_string(&v78, v3 + 288);
      target_app_id = common::tools::AppIdUtils::getAppId((std::string *)&v78);
      std::string::~string(&v78);
      if ( target_app_id )
      {
        v9 = &p->second;
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v78, "<xmlattr>.ip", &__a);
        common::tools::PTree::get<std::string>((std::string *)(v3 + 352), v9, (const std::string *)&v78);
        std::string::~string(&v78);
        std::allocator<char>::~allocator(&__a);
        v10 = &p->second;
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v78, "<xmlattr>.port", &__a);
        port = common::tools::PTree::get<unsigned short>(v10, (const std::string *)&v78);
        std::string::~string(&v78);
        std::allocator<char>::~allocator(&__a);
        if ( (unsigned __int8)std::string::empty(v3 + 352) || !port )
        {
          v12 = 0;
        }
        else
        {
          common::minet::AClientMgr<GameserverConnect>::findConnectByAppId(
            (common::minet::AClientMgr<GameserverConnect> *const)&v77,
            (uint32_t)this);
          v13 = std::operator!=<GameserverConnect>(0LL, &v77);
          std::shared_ptr<GameserverConnect>::~shared_ptr(&v77);
          if ( v13 )
          {
            v12 = 0;
          }
          else
          {
            v14 = ioc_index++;
            if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              v14 = __asan_report_load4(&this->thread_num_);
            }
            common::tools::perf::make_shared<GameserverConnect,boost::asio::io_context &>(
              (boost::asio::io_context *)(v3 + 128),
              &this->ioc_arr_[v14 % this->thread_num_]);
            if ( std::operator==<GameserverConnect>(0LL, (const std::shared_ptr<GameserverConnect> *)(v3 + 128)) )
            {
              v15 = 0;
            }
            else
            {
              v58 = std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&this->reconnect_max_interval_);
              }
              reconnect_max_interval = this->reconnect_max_interval_;
              if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->reconnect_min_interval_);
              }
              reconnect_min_interval = this->reconnect_min_interval_;
              if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&this->cache_packet_max_num_);
              }
              cache_packet_max_num = this->cache_packet_max_num_;
              if ( *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3)
                                                                   + 0x7FFF8000) )
              {
                __asan_report_load1(&this->is_async_send_);
              }
              is_async_send = this->is_async_send_;
              if ( *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->max_send_packet_len_);
              }
              max_send_packet_len = this->max_send_packet_len_;
              if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
                __asan_report_load1(&this->is_cut_packet_);
              is_cut_packet = this->is_cut_packet_;
              if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 98) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load2(&this->timeout_sec_);
              }
              timeout_sec = this->timeout_sec_;
              if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) <= 1 )
              {
                __asan_report_load2(&this->keep_alive_sec_);
              }
              keep_alive_sec = this->keep_alive_sec_;
              if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&this->recv_buf_len_);
              }
              recv_buf_len = this->recv_buf_len_;
              v17 = port;
              v18 = (const char *)std::string::c_str(v3 + 352);
              if ( common::minet::AClientConnect::init(
                     v58,
                     self_app_id,
                     v18,
                     v17,
                     recv_buf_len,
                     keep_alive_sec,
                     timeout_sec,
                     is_cut_packet,
                     target_app_id,
                     max_send_packet_len,
                     is_async_send,
                     cache_packet_max_num,
                     reconnect_min_interval,
                     reconnect_max_interval) )
              {
                v15 = 0;
              }
              else
              {
                std::vector<std::shared_ptr<GameserverConnect>>::push_back(
                  (std::vector<std::shared_ptr<GameserverConnect>> *const)(v3 + 160),
                  (const std::vector<std::shared_ptr<GameserverConnect>>::value_type *)(v3 + 128));
                common::milog::MiLogStream::create(
                  &v78,
                  &common::milog::MiLogDefault::default_log_obj_,
                  2u,
                  "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                  "reload",
                  249);
                v19 = port;
                v20 = (const char *)std::string::c_str(v3 + 352);
                common::milog::MiLogStream::operator()(&v78, "add new server ip: %s, port: %u", v20, v19);
                common::milog::MiLogStream::~MiLogStream(&v78);
                v15 = 1;
              }
            }
            std::shared_ptr<GameserverConnect>::~shared_ptr((std::shared_ptr<GameserverConnect> *const)(v3 + 128));
            v12 = v15 == 1;
          }
        }
        std::string::~string((void *)(v3 + 352));
        if ( v12 )
          v8 = 2;
        else
          v8 = 1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v78,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
          "reload",
          223);
        common::milog::MiLogStream::operator()(&v78, "ConnetT target_app_id is 0");
        common::milog::MiLogStream::~MiLogStream(&v78);
        v60 = 1;
        v8 = 0;
      }
      std::string::~string((void *)(v3 + 288));
      if ( !v8 )
      {
        v21 = 0;
        goto LABEL_55;
      }
      std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator++(&__for_begin);
    }
    v21 = 1;
LABEL_55:
    std::list<std::pair<std::string,common::tools::PTree>>::~list((std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 224));
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 32));
    if ( v21 == 1 )
    {
      if ( !std::vector<std::shared_ptr<GameserverConnect>>::empty((const std::vector<std::shared_ptr<GameserverConnect>> *const)(v3 + 160)) )
      {
        M_current = std::vector<std::shared_ptr<GameserverConnect>>::end((std::vector<std::shared_ptr<GameserverConnect>> *const)(v3 + 160))._M_current;
        v23._M_current = std::vector<std::shared_ptr<GameserverConnect>>::begin((std::vector<std::shared_ptr<GameserverConnect>> *const)(v3 + 160))._M_current;
        std::random_shuffle<__gnu_cxx::__normal_iterator<std::shared_ptr<GameserverConnect> *,std::vector<std::shared_ptr<GameserverConnect>>>>(
          v23,
          (__gnu_cxx::__normal_iterator<std::shared_ptr<GameserverConnect>*,std::vector<std::shared_ptr<GameserverConnect>> >)M_current);
        for ( idx = 0; ; ++idx )
        {
          v24 = idx;
          if ( v24 >= std::vector<std::shared_ptr<GameserverConnect>>::size((const std::vector<std::shared_ptr<GameserverConnect>> *const)(v3 + 160)) )
            break;
          v25 = std::vector<std::shared_ptr<GameserverConnect>>::operator[](
                  (std::vector<std::shared_ptr<GameserverConnect>> *const)(v3 + 160),
                  idx);
          std::shared_ptr<GameserverConnect>::shared_ptr((std::shared_ptr<GameserverConnect> *const)(v3 + 64), v25);
          v26 = (unsigned __int64)std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
            v26 = __asan_report_load8(v26);
          v27 = *(_QWORD *)v26 + 24LL;
          if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
            v26 = __asan_report_load8(*(_QWORD *)v26 + 24LL);
          if ( (*(unsigned int (__fastcall **)(unsigned __int64, __int64))v27)(v26, 60LL) )
          {
            v28 = std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            common::minet::AClientConnect::stop(v28);
            common::milog::MiLogStream::create(
              &v78,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "../framework/common/minet/aclient/include/aclient_mgr.hpp",
              "reload",
              269);
            v29 = std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            TargetAppId = common::minet::AClientConnect::getTargetAppId(v29);
            v31 = std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            RemotePort = common::minet::AClientConnect::getRemotePort(v31);
            v33 = std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            RemoteIp = common::minet::AClientConnect::getRemoteIp(v33);
            common::milog::MiLogStream::operator()(
              &v78,
              "reload connect start failed, connection %s:%u target_app_id=%u",
              RemoteIp,
              RemotePort,
              TargetAppId);
            common::milog::MiLogStream::~MiLogStream(&v78);
          }
          else
          {
            std::unique_lock<std::shared_mutex>::unique_lock(
              (std::unique_lock<std::shared_mutex> *const)(v3 + 96),
              &this->shared_mu_);
            v35 = std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            v65 = common::minet::AClientConnect::getTargetAppId(v35);
            p_conn_map = (unsigned int *)&this->conn_map_;
            args_0 = (unsigned int *)(v3 + 64);
            v75 = (std::shared_ptr<GameserverConnect> *)&v65;
            boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect>>,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect>>>>::emplace_unique<unsigned int,std::shared_ptr<GameserverConnect>&>(
              (boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > > > *const)(v3 + 128),
              (unsigned int *)&this->conn_map_,
              (std::shared_ptr<GameserverConnect> *)&v65,
              (unsigned int *)(v3 + 64),
              v36);
            v76 = (std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<GameserverConnect> >*,false>,bool> *)(v3 + 128);
            std::pair<boost::container::vec_iterator<std::pair*<unsigned int,std::shared_ptr<GameserverConnect>>,false>,bool>::pair(
              (std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<GameserverConnect> >*,false>,bool> *const)&v77,
              (const std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<GameserverConnect> >*,false>,bool> *)(v3 + 128));
            if ( LOBYTE(v77._M_refcount._M_pi) )
            {
              v44 = 1;
            }
            else
            {
              v37 = std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              common::minet::AClientConnect::stop(v37);
              common::milog::MiLogStream::create(
                &v78,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                "reload",
                278);
              v38 = std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v39 = common::minet::AClientConnect::getTargetAppId(v38);
              v40 = std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v41 = common::minet::AClientConnect::getRemotePort(v40);
              v42 = std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v43 = common::minet::AClientConnect::getRemoteIp(v42);
              common::milog::MiLogStream::operator()(
                &v78,
                "duplicate connection %s:%u, target_app_id=%u.",
                v43,
                v41,
                v39);
              common::milog::MiLogStream::~MiLogStream(&v78);
              v44 = 0;
            }
            std::unique_lock<std::shared_mutex>::~unique_lock((std::unique_lock<std::shared_mutex> *const)(v3 + 96));
            if ( v44 == 1 )
            {
              common::milog::MiLogStream::create(
                &v78,
                &common::milog::MiLogDefault::default_log_obj_,
                2u,
                "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                "reload",
                282);
              v45 = std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v46 = common::minet::AClientConnect::getTargetAppId(v45);
              v47 = std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v48 = common::minet::AClientConnect::getRemotePort(v47);
              v49 = std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v50 = common::minet::AClientConnect::getRemoteIp(v49);
              common::milog::MiLogStream::operator()(&v78, "add new server %s:%u, app_id=%u.", v50, v48, v46);
              common::milog::MiLogStream::~MiLogStream(&v78);
            }
          }
          std::shared_ptr<GameserverConnect>::~shared_ptr((std::shared_ptr<GameserverConnect> *const)(v3 + 64));
        }
      }
      v60 = 0;
    }
    std::vector<std::shared_ptr<GameserverConnect>>::~vector((std::vector<std::shared_ptr<GameserverConnect>> *const)(v3 + 160));
  }
  result = v60;
  if ( v79 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 201: range 000000000C7B7884-000000000C7B8BBF
int __cdecl common::minet::AClientMgr<PathfindingserverConnect>::reload(
        common::minet::AClientMgr<PathfindingserverConnect> *const this,
        uint32_t self_app_id,
        const common::tools::PTree *pt)
{
  unsigned __int64 v3; // r15
  __int64 v4; // rax
  _DWORD *v5; // r14
  unsigned __int64 v6; // rax
  common::tools::PTree *p_second; // rbx
  int v8; // ebx
  common::tools::PTree *v9; // rbx
  common::tools::PTree *v10; // rbx
  _BOOL4 v12; // ebx
  bool v13; // bl
  uint32_t v14; // eax
  int v15; // ebx
  uint32_t recv_buf_len; // r12d
  uint16_t v17; // bx
  const char *v18; // rdx
  unsigned int v19; // ebx
  const char *v20; // rdx
  int v21; // ebx
  std::shared_ptr<PathfindingserverConnect> *M_current; // rbx
  std::vector<std::shared_ptr<PathfindingserverConnect>>::iterator v23; // rax
  std::vector<std::shared_ptr<PathfindingserverConnect>>::size_type v24; // rbx
  const std::shared_ptr<PathfindingserverConnect> *v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  uint32_t TargetAppId; // r12d
  std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  unsigned int RemotePort; // ebx
  std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  const char *RemoteIp; // rax
  std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  std::shared_ptr<PathfindingserverConnect> *v36; // r8
  std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  uint32_t v39; // r12d
  std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  unsigned int v41; // ebx
  std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  const char *v43; // rax
  int v44; // ebx
  std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  uint32_t v46; // r12d
  std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  unsigned int v48; // ebx
  std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  const char *v50; // rax
  int result; // eax
  uint16_t keep_alive_sec; // [rsp+10h] [rbp-2A0h]
  uint16_t timeout_sec; // [rsp+14h] [rbp-29Ch]
  bool is_cut_packet; // [rsp+18h] [rbp-298h]
  uint32_t max_send_packet_len; // [rsp+1Ch] [rbp-294h]
  bool is_async_send; // [rsp+20h] [rbp-290h]
  uint32_t cache_packet_max_num; // [rsp+24h] [rbp-28Ch]
  std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // [rsp+28h] [rbp-288h]
  uint32_t reconnect_max_interval; // [rsp+30h] [rbp-280h]
  int v60; // [rsp+34h] [rbp-27Ch]
  uint32_t reconnect_min_interval; // [rsp+40h] [rbp-270h]
  std::allocator<char> __a; // [rsp+55h] [rbp-25Bh] BYREF
  uint16_t port; // [rsp+56h] [rbp-25Ah]
  uint32_t v65; // [rsp+58h] [rbp-258h] BYREF
  uint32_t ioc_index; // [rsp+5Ch] [rbp-254h]
  uint32_t idx; // [rsp+60h] [rbp-250h]
  uint32_t target_app_id; // [rsp+64h] [rbp-24Ch]
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_begin; // [rsp+68h] [rbp-248h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_end; // [rsp+70h] [rbp-240h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>> *__for_range; // [rsp+78h] [rbp-238h]
  std::pair<std::string,common::tools::PTree> *p; // [rsp+80h] [rbp-230h]
  unsigned int *p_conn_map; // [rsp+90h] [rbp-220h]
  unsigned int *args_0; // [rsp+98h] [rbp-218h]
  std::shared_ptr<PathfindingserverConnect> *v75; // [rsp+A0h] [rbp-210h]
  std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >*,false>,bool> *v76; // [rsp+A8h] [rbp-208h]
  std::shared_ptr<PathfindingserverConnect> v77; // [rsp+B0h] [rbp-200h] BYREF
  common::milog::MiLogStream v78; // [rsp+C0h] [rbp-1F0h] BYREF
  char v79[464]; // [rsp+E0h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 8 16 pt_conn_list:214 64 16 15 connect_ptr:264 96 16 9 wlock:274 128 16 15 connect_ptr:238 "
                        "160 24 16 new_conn_vec:211 224 24 17 pt_child_list:215 288 32 14 app_id_str:219 352 32 6 ip:226";
  *(_QWORD *)(v3 + 16) = common::minet::AClientMgr<PathfindingserverConnect>::reload;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v6 = (unsigned __int64)(this->_vptr_AClientBase + 7);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(this->_vptr_AClientBase + 7);
  if ( (*(unsigned __int8 (__fastcall **)(common::minet::AClientMgr<PathfindingserverConnect> *const))v6)(this) != 1 )
  {
    common::milog::MiLogStream::create(
      &v78,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aclient/include/aclient_mgr.hpp",
      "reload",
      207);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v78, (const char (*)[22])"isRun() return false!");
    common::milog::MiLogStream::~MiLogStream(&v78);
    v60 = -1;
  }
  else
  {
    std::vector<std::shared_ptr<PathfindingserverConnect>>::vector((std::vector<std::shared_ptr<PathfindingserverConnect>> *const)(v3 + 160));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v78, "ConnectList", &__a);
    common::tools::PTree::getChild(pt, (const std::string *)&v78);
    std::string::~string(&v78);
    std::allocator<char>::~allocator(&__a);
    common::tools::PTree::getAllChild[abi:cxx11](
      (std::list<std::pair<std::string,common::tools::PTree>> *)(v3 + 224),
      (const common::tools::PTree *const)(v3 + 32));
    ioc_index = 0;
    __for_range = (std::list<std::pair<std::string,common::tools::PTree>> *)(v3 + 224);
    __for_begin._M_node = std::list<std::pair<std::string,common::tools::PTree>>::begin((std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 224))._M_node;
    __for_end._M_node = std::list<std::pair<std::string,common::tools::PTree>>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      p = std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator*(&__for_begin);
      p_second = &p->second;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v78, "<xmlattr>.app_id", &__a);
      common::tools::PTree::get<std::string>((std::string *)(v3 + 288), p_second, (const std::string *)&v78);
      std::string::~string(&v78);
      std::allocator<char>::~allocator(&__a);
      std::string::basic_string(&v78, v3 + 288);
      target_app_id = common::tools::AppIdUtils::getAppId((std::string *)&v78);
      std::string::~string(&v78);
      if ( target_app_id )
      {
        v9 = &p->second;
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v78, "<xmlattr>.ip", &__a);
        common::tools::PTree::get<std::string>((std::string *)(v3 + 352), v9, (const std::string *)&v78);
        std::string::~string(&v78);
        std::allocator<char>::~allocator(&__a);
        v10 = &p->second;
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v78, "<xmlattr>.port", &__a);
        port = common::tools::PTree::get<unsigned short>(v10, (const std::string *)&v78);
        std::string::~string(&v78);
        std::allocator<char>::~allocator(&__a);
        if ( (unsigned __int8)std::string::empty(v3 + 352) || !port )
        {
          v12 = 0;
        }
        else
        {
          common::minet::AClientMgr<PathfindingserverConnect>::findConnectByAppId(
            (common::minet::AClientMgr<PathfindingserverConnect> *const)&v77,
            (uint32_t)this);
          v13 = std::operator!=<PathfindingserverConnect>(0LL, &v77);
          std::shared_ptr<PathfindingserverConnect>::~shared_ptr(&v77);
          if ( v13 )
          {
            v12 = 0;
          }
          else
          {
            v14 = ioc_index++;
            if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              v14 = __asan_report_load4(&this->thread_num_);
            }
            common::tools::perf::make_shared<PathfindingserverConnect,boost::asio::io_context &>(
              (boost::asio::io_context *)(v3 + 128),
              &this->ioc_arr_[v14 % this->thread_num_]);
            if ( std::operator==<PathfindingserverConnect>(
                   0LL,
                   (const std::shared_ptr<PathfindingserverConnect> *)(v3 + 128)) )
            {
              v15 = 0;
            }
            else
            {
              v58 = std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&this->reconnect_max_interval_);
              }
              reconnect_max_interval = this->reconnect_max_interval_;
              if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->reconnect_min_interval_);
              }
              reconnect_min_interval = this->reconnect_min_interval_;
              if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&this->cache_packet_max_num_);
              }
              cache_packet_max_num = this->cache_packet_max_num_;
              if ( *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3)
                                                                   + 0x7FFF8000) )
              {
                __asan_report_load1(&this->is_async_send_);
              }
              is_async_send = this->is_async_send_;
              if ( *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->max_send_packet_len_);
              }
              max_send_packet_len = this->max_send_packet_len_;
              if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
                __asan_report_load1(&this->is_cut_packet_);
              is_cut_packet = this->is_cut_packet_;
              if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 98) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load2(&this->timeout_sec_);
              }
              timeout_sec = this->timeout_sec_;
              if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) <= 1 )
              {
                __asan_report_load2(&this->keep_alive_sec_);
              }
              keep_alive_sec = this->keep_alive_sec_;
              if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&this->recv_buf_len_);
              }
              recv_buf_len = this->recv_buf_len_;
              v17 = port;
              v18 = (const char *)std::string::c_str(v3 + 352);
              if ( common::minet::AClientConnect::init(
                     v58,
                     self_app_id,
                     v18,
                     v17,
                     recv_buf_len,
                     keep_alive_sec,
                     timeout_sec,
                     is_cut_packet,
                     target_app_id,
                     max_send_packet_len,
                     is_async_send,
                     cache_packet_max_num,
                     reconnect_min_interval,
                     reconnect_max_interval) )
              {
                v15 = 0;
              }
              else
              {
                std::vector<std::shared_ptr<PathfindingserverConnect>>::push_back(
                  (std::vector<std::shared_ptr<PathfindingserverConnect>> *const)(v3 + 160),
                  (const std::vector<std::shared_ptr<PathfindingserverConnect>>::value_type *)(v3 + 128));
                common::milog::MiLogStream::create(
                  &v78,
                  &common::milog::MiLogDefault::default_log_obj_,
                  2u,
                  "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                  "reload",
                  249);
                v19 = port;
                v20 = (const char *)std::string::c_str(v3 + 352);
                common::milog::MiLogStream::operator()(&v78, "add new server ip: %s, port: %u", v20, v19);
                common::milog::MiLogStream::~MiLogStream(&v78);
                v15 = 1;
              }
            }
            std::shared_ptr<PathfindingserverConnect>::~shared_ptr((std::shared_ptr<PathfindingserverConnect> *const)(v3 + 128));
            v12 = v15 == 1;
          }
        }
        std::string::~string((void *)(v3 + 352));
        if ( v12 )
          v8 = 2;
        else
          v8 = 1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v78,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
          "reload",
          223);
        common::milog::MiLogStream::operator()(&v78, "ConnetT target_app_id is 0");
        common::milog::MiLogStream::~MiLogStream(&v78);
        v60 = 1;
        v8 = 0;
      }
      std::string::~string((void *)(v3 + 288));
      if ( !v8 )
      {
        v21 = 0;
        goto LABEL_55;
      }
      std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator++(&__for_begin);
    }
    v21 = 1;
LABEL_55:
    std::list<std::pair<std::string,common::tools::PTree>>::~list((std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 224));
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 32));
    if ( v21 == 1 )
    {
      if ( !std::vector<std::shared_ptr<PathfindingserverConnect>>::empty((const std::vector<std::shared_ptr<PathfindingserverConnect>> *const)(v3 + 160)) )
      {
        M_current = std::vector<std::shared_ptr<PathfindingserverConnect>>::end((std::vector<std::shared_ptr<PathfindingserverConnect>> *const)(v3 + 160))._M_current;
        v23._M_current = std::vector<std::shared_ptr<PathfindingserverConnect>>::begin((std::vector<std::shared_ptr<PathfindingserverConnect>> *const)(v3 + 160))._M_current;
        std::random_shuffle<__gnu_cxx::__normal_iterator<std::shared_ptr<PathfindingserverConnect> *,std::vector<std::shared_ptr<PathfindingserverConnect>>>>(
          v23,
          (__gnu_cxx::__normal_iterator<std::shared_ptr<PathfindingserverConnect>*,std::vector<std::shared_ptr<PathfindingserverConnect>> >)M_current);
        for ( idx = 0; ; ++idx )
        {
          v24 = idx;
          if ( v24 >= std::vector<std::shared_ptr<PathfindingserverConnect>>::size((const std::vector<std::shared_ptr<PathfindingserverConnect>> *const)(v3 + 160)) )
            break;
          v25 = std::vector<std::shared_ptr<PathfindingserverConnect>>::operator[](
                  (std::vector<std::shared_ptr<PathfindingserverConnect>> *const)(v3 + 160),
                  idx);
          std::shared_ptr<PathfindingserverConnect>::shared_ptr(
            (std::shared_ptr<PathfindingserverConnect> *const)(v3 + 64),
            v25);
          v26 = (unsigned __int64)std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
            v26 = __asan_report_load8(v26);
          v27 = *(_QWORD *)v26 + 24LL;
          if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
            v26 = __asan_report_load8(*(_QWORD *)v26 + 24LL);
          if ( (*(unsigned int (__fastcall **)(unsigned __int64, __int64))v27)(v26, 60LL) )
          {
            v28 = std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            common::minet::AClientConnect::stop(v28);
            common::milog::MiLogStream::create(
              &v78,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "../framework/common/minet/aclient/include/aclient_mgr.hpp",
              "reload",
              269);
            v29 = std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            TargetAppId = common::minet::AClientConnect::getTargetAppId(v29);
            v31 = std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            RemotePort = common::minet::AClientConnect::getRemotePort(v31);
            v33 = std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            RemoteIp = common::minet::AClientConnect::getRemoteIp(v33);
            common::milog::MiLogStream::operator()(
              &v78,
              "reload connect start failed, connection %s:%u target_app_id=%u",
              RemoteIp,
              RemotePort,
              TargetAppId);
            common::milog::MiLogStream::~MiLogStream(&v78);
          }
          else
          {
            std::unique_lock<std::shared_mutex>::unique_lock(
              (std::unique_lock<std::shared_mutex> *const)(v3 + 96),
              &this->shared_mu_);
            v35 = std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            v65 = common::minet::AClientConnect::getTargetAppId(v35);
            p_conn_map = (unsigned int *)&this->conn_map_;
            args_0 = (unsigned int *)(v3 + 64);
            v75 = (std::shared_ptr<PathfindingserverConnect> *)&v65;
            boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect>>,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect>>>>::emplace_unique<unsigned int,std::shared_ptr<PathfindingserverConnect>&>(
              (boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > > > *const)(v3 + 128),
              (unsigned int *)&this->conn_map_,
              (std::shared_ptr<PathfindingserverConnect> *)&v65,
              (unsigned int *)(v3 + 64),
              v36);
            v76 = (std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >*,false>,bool> *)(v3 + 128);
            std::pair<boost::container::vec_iterator<std::pair*<unsigned int,std::shared_ptr<PathfindingserverConnect>>,false>,bool>::pair(
              (std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >*,false>,bool> *const)&v77,
              (const std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >*,false>,bool> *)(v3 + 128));
            if ( LOBYTE(v77._M_refcount._M_pi) )
            {
              v44 = 1;
            }
            else
            {
              v37 = std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              common::minet::AClientConnect::stop(v37);
              common::milog::MiLogStream::create(
                &v78,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                "reload",
                278);
              v38 = std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v39 = common::minet::AClientConnect::getTargetAppId(v38);
              v40 = std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v41 = common::minet::AClientConnect::getRemotePort(v40);
              v42 = std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v43 = common::minet::AClientConnect::getRemoteIp(v42);
              common::milog::MiLogStream::operator()(
                &v78,
                "duplicate connection %s:%u, target_app_id=%u.",
                v43,
                v41,
                v39);
              common::milog::MiLogStream::~MiLogStream(&v78);
              v44 = 0;
            }
            std::unique_lock<std::shared_mutex>::~unique_lock((std::unique_lock<std::shared_mutex> *const)(v3 + 96));
            if ( v44 == 1 )
            {
              common::milog::MiLogStream::create(
                &v78,
                &common::milog::MiLogDefault::default_log_obj_,
                2u,
                "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                "reload",
                282);
              v45 = std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v46 = common::minet::AClientConnect::getTargetAppId(v45);
              v47 = std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v48 = common::minet::AClientConnect::getRemotePort(v47);
              v49 = std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v50 = common::minet::AClientConnect::getRemoteIp(v49);
              common::milog::MiLogStream::operator()(&v78, "add new server %s:%u, app_id=%u.", v50, v48, v46);
              common::milog::MiLogStream::~MiLogStream(&v78);
            }
          }
          std::shared_ptr<PathfindingserverConnect>::~shared_ptr((std::shared_ptr<PathfindingserverConnect> *const)(v3 + 64));
        }
      }
      v60 = 0;
    }
    std::vector<std::shared_ptr<PathfindingserverConnect>>::~vector((std::vector<std::shared_ptr<PathfindingserverConnect>> *const)(v3 + 160));
  }
  result = v60;
  if ( v79 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 201: range 000000000C7B8CB8-000000000C7B9FF3
int __cdecl common::minet::AClientMgr<TothemoonserverConnect>::reload(
        common::minet::AClientMgr<TothemoonserverConnect> *const this,
        uint32_t self_app_id,
        const common::tools::PTree *pt)
{
  unsigned __int64 v3; // r15
  __int64 v4; // rax
  _DWORD *v5; // r14
  unsigned __int64 v6; // rax
  common::tools::PTree *p_second; // rbx
  int v8; // ebx
  common::tools::PTree *v9; // rbx
  common::tools::PTree *v10; // rbx
  _BOOL4 v12; // ebx
  bool v13; // bl
  uint32_t v14; // eax
  int v15; // ebx
  uint32_t recv_buf_len; // r12d
  uint16_t v17; // bx
  const char *v18; // rdx
  unsigned int v19; // ebx
  const char *v20; // rdx
  int v21; // ebx
  std::shared_ptr<TothemoonserverConnect> *M_current; // rbx
  std::vector<std::shared_ptr<TothemoonserverConnect>>::iterator v23; // rax
  std::vector<std::shared_ptr<TothemoonserverConnect>>::size_type v24; // rbx
  const std::shared_ptr<TothemoonserverConnect> *v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  uint32_t TargetAppId; // r12d
  std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  unsigned int RemotePort; // ebx
  std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  const char *RemoteIp; // rax
  std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  std::shared_ptr<TothemoonserverConnect> *v36; // r8
  std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  uint32_t v39; // r12d
  std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  unsigned int v41; // ebx
  std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  const char *v43; // rax
  int v44; // ebx
  std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  uint32_t v46; // r12d
  std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  unsigned int v48; // ebx
  std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  const char *v50; // rax
  int result; // eax
  uint16_t keep_alive_sec; // [rsp+10h] [rbp-2A0h]
  uint16_t timeout_sec; // [rsp+14h] [rbp-29Ch]
  bool is_cut_packet; // [rsp+18h] [rbp-298h]
  uint32_t max_send_packet_len; // [rsp+1Ch] [rbp-294h]
  bool is_async_send; // [rsp+20h] [rbp-290h]
  uint32_t cache_packet_max_num; // [rsp+24h] [rbp-28Ch]
  std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // [rsp+28h] [rbp-288h]
  uint32_t reconnect_max_interval; // [rsp+30h] [rbp-280h]
  int v60; // [rsp+34h] [rbp-27Ch]
  uint32_t reconnect_min_interval; // [rsp+40h] [rbp-270h]
  std::allocator<char> __a; // [rsp+55h] [rbp-25Bh] BYREF
  uint16_t port; // [rsp+56h] [rbp-25Ah]
  uint32_t v65; // [rsp+58h] [rbp-258h] BYREF
  uint32_t ioc_index; // [rsp+5Ch] [rbp-254h]
  uint32_t idx; // [rsp+60h] [rbp-250h]
  uint32_t target_app_id; // [rsp+64h] [rbp-24Ch]
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_begin; // [rsp+68h] [rbp-248h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_end; // [rsp+70h] [rbp-240h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>> *__for_range; // [rsp+78h] [rbp-238h]
  std::pair<std::string,common::tools::PTree> *p; // [rsp+80h] [rbp-230h]
  unsigned int *p_conn_map; // [rsp+90h] [rbp-220h]
  unsigned int *args_0; // [rsp+98h] [rbp-218h]
  std::shared_ptr<TothemoonserverConnect> *v75; // [rsp+A0h] [rbp-210h]
  std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >*,false>,bool> *v76; // [rsp+A8h] [rbp-208h]
  std::shared_ptr<TothemoonserverConnect> v77; // [rsp+B0h] [rbp-200h] BYREF
  common::milog::MiLogStream v78; // [rsp+C0h] [rbp-1F0h] BYREF
  char v79[464]; // [rsp+E0h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 8 16 pt_conn_list:214 64 16 15 connect_ptr:264 96 16 9 wlock:274 128 16 15 connect_ptr:238 "
                        "160 24 16 new_conn_vec:211 224 24 17 pt_child_list:215 288 32 14 app_id_str:219 352 32 6 ip:226";
  *(_QWORD *)(v3 + 16) = common::minet::AClientMgr<TothemoonserverConnect>::reload;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v6 = (unsigned __int64)(this->_vptr_AClientBase + 7);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(this->_vptr_AClientBase + 7);
  if ( (*(unsigned __int8 (__fastcall **)(common::minet::AClientMgr<TothemoonserverConnect> *const))v6)(this) != 1 )
  {
    common::milog::MiLogStream::create(
      &v78,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aclient/include/aclient_mgr.hpp",
      "reload",
      207);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v78, (const char (*)[22])"isRun() return false!");
    common::milog::MiLogStream::~MiLogStream(&v78);
    v60 = -1;
  }
  else
  {
    std::vector<std::shared_ptr<TothemoonserverConnect>>::vector((std::vector<std::shared_ptr<TothemoonserverConnect>> *const)(v3 + 160));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v78, "ConnectList", &__a);
    common::tools::PTree::getChild(pt, (const std::string *)&v78);
    std::string::~string(&v78);
    std::allocator<char>::~allocator(&__a);
    common::tools::PTree::getAllChild[abi:cxx11](
      (std::list<std::pair<std::string,common::tools::PTree>> *)(v3 + 224),
      (const common::tools::PTree *const)(v3 + 32));
    ioc_index = 0;
    __for_range = (std::list<std::pair<std::string,common::tools::PTree>> *)(v3 + 224);
    __for_begin._M_node = std::list<std::pair<std::string,common::tools::PTree>>::begin((std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 224))._M_node;
    __for_end._M_node = std::list<std::pair<std::string,common::tools::PTree>>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      p = std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator*(&__for_begin);
      p_second = &p->second;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v78, "<xmlattr>.app_id", &__a);
      common::tools::PTree::get<std::string>((std::string *)(v3 + 288), p_second, (const std::string *)&v78);
      std::string::~string(&v78);
      std::allocator<char>::~allocator(&__a);
      std::string::basic_string(&v78, v3 + 288);
      target_app_id = common::tools::AppIdUtils::getAppId((std::string *)&v78);
      std::string::~string(&v78);
      if ( target_app_id )
      {
        v9 = &p->second;
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v78, "<xmlattr>.ip", &__a);
        common::tools::PTree::get<std::string>((std::string *)(v3 + 352), v9, (const std::string *)&v78);
        std::string::~string(&v78);
        std::allocator<char>::~allocator(&__a);
        v10 = &p->second;
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v78, "<xmlattr>.port", &__a);
        port = common::tools::PTree::get<unsigned short>(v10, (const std::string *)&v78);
        std::string::~string(&v78);
        std::allocator<char>::~allocator(&__a);
        if ( (unsigned __int8)std::string::empty(v3 + 352) || !port )
        {
          v12 = 0;
        }
        else
        {
          common::minet::AClientMgr<TothemoonserverConnect>::findConnectByAppId(
            (common::minet::AClientMgr<TothemoonserverConnect> *const)&v77,
            (uint32_t)this);
          v13 = std::operator!=<TothemoonserverConnect>(0LL, &v77);
          std::shared_ptr<TothemoonserverConnect>::~shared_ptr(&v77);
          if ( v13 )
          {
            v12 = 0;
          }
          else
          {
            v14 = ioc_index++;
            if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              v14 = __asan_report_load4(&this->thread_num_);
            }
            common::tools::perf::make_shared<TothemoonserverConnect,boost::asio::io_context &>(
              (boost::asio::io_context *)(v3 + 128),
              &this->ioc_arr_[v14 % this->thread_num_]);
            if ( std::operator==<TothemoonserverConnect>(
                   0LL,
                   (const std::shared_ptr<TothemoonserverConnect> *)(v3 + 128)) )
            {
              v15 = 0;
            }
            else
            {
              v58 = std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&this->reconnect_max_interval_);
              }
              reconnect_max_interval = this->reconnect_max_interval_;
              if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->reconnect_min_interval_);
              }
              reconnect_min_interval = this->reconnect_min_interval_;
              if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&this->cache_packet_max_num_);
              }
              cache_packet_max_num = this->cache_packet_max_num_;
              if ( *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3)
                                                                   + 0x7FFF8000) )
              {
                __asan_report_load1(&this->is_async_send_);
              }
              is_async_send = this->is_async_send_;
              if ( *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->max_send_packet_len_);
              }
              max_send_packet_len = this->max_send_packet_len_;
              if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
                __asan_report_load1(&this->is_cut_packet_);
              is_cut_packet = this->is_cut_packet_;
              if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 98) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load2(&this->timeout_sec_);
              }
              timeout_sec = this->timeout_sec_;
              if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) <= 1 )
              {
                __asan_report_load2(&this->keep_alive_sec_);
              }
              keep_alive_sec = this->keep_alive_sec_;
              if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&this->recv_buf_len_);
              }
              recv_buf_len = this->recv_buf_len_;
              v17 = port;
              v18 = (const char *)std::string::c_str(v3 + 352);
              if ( common::minet::AClientConnect::init(
                     v58,
                     self_app_id,
                     v18,
                     v17,
                     recv_buf_len,
                     keep_alive_sec,
                     timeout_sec,
                     is_cut_packet,
                     target_app_id,
                     max_send_packet_len,
                     is_async_send,
                     cache_packet_max_num,
                     reconnect_min_interval,
                     reconnect_max_interval) )
              {
                v15 = 0;
              }
              else
              {
                std::vector<std::shared_ptr<TothemoonserverConnect>>::push_back(
                  (std::vector<std::shared_ptr<TothemoonserverConnect>> *const)(v3 + 160),
                  (const std::vector<std::shared_ptr<TothemoonserverConnect>>::value_type *)(v3 + 128));
                common::milog::MiLogStream::create(
                  &v78,
                  &common::milog::MiLogDefault::default_log_obj_,
                  2u,
                  "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                  "reload",
                  249);
                v19 = port;
                v20 = (const char *)std::string::c_str(v3 + 352);
                common::milog::MiLogStream::operator()(&v78, "add new server ip: %s, port: %u", v20, v19);
                common::milog::MiLogStream::~MiLogStream(&v78);
                v15 = 1;
              }
            }
            std::shared_ptr<TothemoonserverConnect>::~shared_ptr((std::shared_ptr<TothemoonserverConnect> *const)(v3 + 128));
            v12 = v15 == 1;
          }
        }
        std::string::~string((void *)(v3 + 352));
        if ( v12 )
          v8 = 2;
        else
          v8 = 1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v78,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
          "reload",
          223);
        common::milog::MiLogStream::operator()(&v78, "ConnetT target_app_id is 0");
        common::milog::MiLogStream::~MiLogStream(&v78);
        v60 = 1;
        v8 = 0;
      }
      std::string::~string((void *)(v3 + 288));
      if ( !v8 )
      {
        v21 = 0;
        goto LABEL_55;
      }
      std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator++(&__for_begin);
    }
    v21 = 1;
LABEL_55:
    std::list<std::pair<std::string,common::tools::PTree>>::~list((std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 224));
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 32));
    if ( v21 == 1 )
    {
      if ( !std::vector<std::shared_ptr<TothemoonserverConnect>>::empty((const std::vector<std::shared_ptr<TothemoonserverConnect>> *const)(v3 + 160)) )
      {
        M_current = std::vector<std::shared_ptr<TothemoonserverConnect>>::end((std::vector<std::shared_ptr<TothemoonserverConnect>> *const)(v3 + 160))._M_current;
        v23._M_current = std::vector<std::shared_ptr<TothemoonserverConnect>>::begin((std::vector<std::shared_ptr<TothemoonserverConnect>> *const)(v3 + 160))._M_current;
        std::random_shuffle<__gnu_cxx::__normal_iterator<std::shared_ptr<TothemoonserverConnect> *,std::vector<std::shared_ptr<TothemoonserverConnect>>>>(
          v23,
          (__gnu_cxx::__normal_iterator<std::shared_ptr<TothemoonserverConnect>*,std::vector<std::shared_ptr<TothemoonserverConnect>> >)M_current);
        for ( idx = 0; ; ++idx )
        {
          v24 = idx;
          if ( v24 >= std::vector<std::shared_ptr<TothemoonserverConnect>>::size((const std::vector<std::shared_ptr<TothemoonserverConnect>> *const)(v3 + 160)) )
            break;
          v25 = std::vector<std::shared_ptr<TothemoonserverConnect>>::operator[](
                  (std::vector<std::shared_ptr<TothemoonserverConnect>> *const)(v3 + 160),
                  idx);
          std::shared_ptr<TothemoonserverConnect>::shared_ptr(
            (std::shared_ptr<TothemoonserverConnect> *const)(v3 + 64),
            v25);
          v26 = (unsigned __int64)std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
            v26 = __asan_report_load8(v26);
          v27 = *(_QWORD *)v26 + 24LL;
          if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
            v26 = __asan_report_load8(*(_QWORD *)v26 + 24LL);
          if ( (*(unsigned int (__fastcall **)(unsigned __int64, __int64))v27)(v26, 60LL) )
          {
            v28 = std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            common::minet::AClientConnect::stop(v28);
            common::milog::MiLogStream::create(
              &v78,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "../framework/common/minet/aclient/include/aclient_mgr.hpp",
              "reload",
              269);
            v29 = std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            TargetAppId = common::minet::AClientConnect::getTargetAppId(v29);
            v31 = std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            RemotePort = common::minet::AClientConnect::getRemotePort(v31);
            v33 = std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            RemoteIp = common::minet::AClientConnect::getRemoteIp(v33);
            common::milog::MiLogStream::operator()(
              &v78,
              "reload connect start failed, connection %s:%u target_app_id=%u",
              RemoteIp,
              RemotePort,
              TargetAppId);
            common::milog::MiLogStream::~MiLogStream(&v78);
          }
          else
          {
            std::unique_lock<std::shared_mutex>::unique_lock(
              (std::unique_lock<std::shared_mutex> *const)(v3 + 96),
              &this->shared_mu_);
            v35 = std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            v65 = common::minet::AClientConnect::getTargetAppId(v35);
            p_conn_map = (unsigned int *)&this->conn_map_;
            args_0 = (unsigned int *)(v3 + 64);
            v75 = (std::shared_ptr<TothemoonserverConnect> *)&v65;
            boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect>>,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect>>>>::emplace_unique<unsigned int,std::shared_ptr<TothemoonserverConnect>&>(
              (boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > > > *const)(v3 + 128),
              (unsigned int *)&this->conn_map_,
              (std::shared_ptr<TothemoonserverConnect> *)&v65,
              (unsigned int *)(v3 + 64),
              v36);
            v76 = (std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >*,false>,bool> *)(v3 + 128);
            std::pair<boost::container::vec_iterator<std::pair*<unsigned int,std::shared_ptr<TothemoonserverConnect>>,false>,bool>::pair(
              (std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >*,false>,bool> *const)&v77,
              (const std::pair<boost::container::vec_iterator<std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >*,false>,bool> *)(v3 + 128));
            if ( LOBYTE(v77._M_refcount._M_pi) )
            {
              v44 = 1;
            }
            else
            {
              v37 = std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              common::minet::AClientConnect::stop(v37);
              common::milog::MiLogStream::create(
                &v78,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                "reload",
                278);
              v38 = std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v39 = common::minet::AClientConnect::getTargetAppId(v38);
              v40 = std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v41 = common::minet::AClientConnect::getRemotePort(v40);
              v42 = std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v43 = common::minet::AClientConnect::getRemoteIp(v42);
              common::milog::MiLogStream::operator()(
                &v78,
                "duplicate connection %s:%u, target_app_id=%u.",
                v43,
                v41,
                v39);
              common::milog::MiLogStream::~MiLogStream(&v78);
              v44 = 0;
            }
            std::unique_lock<std::shared_mutex>::~unique_lock((std::unique_lock<std::shared_mutex> *const)(v3 + 96));
            if ( v44 == 1 )
            {
              common::milog::MiLogStream::create(
                &v78,
                &common::milog::MiLogDefault::default_log_obj_,
                2u,
                "../framework/common/minet/aclient/include/aclient_mgr.hpp",
                "reload",
                282);
              v45 = std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v46 = common::minet::AClientConnect::getTargetAppId(v45);
              v47 = std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v48 = common::minet::AClientConnect::getRemotePort(v47);
              v49 = std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v50 = common::minet::AClientConnect::getRemoteIp(v49);
              common::milog::MiLogStream::operator()(&v78, "add new server %s:%u, app_id=%u.", v50, v48, v46);
              common::milog::MiLogStream::~MiLogStream(&v78);
            }
          }
          std::shared_ptr<TothemoonserverConnect>::~shared_ptr((std::shared_ptr<TothemoonserverConnect> *const)(v3 + 64));
        }
      }
      v60 = 0;
    }
    std::vector<std::shared_ptr<TothemoonserverConnect>>::~vector((std::vector<std::shared_ptr<TothemoonserverConnect>> *const)(v3 + 160));
  }
  result = v60;
  if ( v79 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 294: range 000000000C85E4D6-000000000C85EEE5
int __cdecl common::minet::AClientMgr<DispatchConnect>::start(common::minet::AClientMgr<DispatchConnect> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  int v6; // r14d
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type v7; // rcx
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *v8; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer m_start; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  char v12; // al
  __int64 v13; // rcx
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *v14; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v15; // rdx
  std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  int result; // eax
  char v19; // [rsp+6h] [rbp-20Ah]
  char v20; // [rsp+7h] [rbp-209h]
  uint32_t idx_0; // [rsp+28h] [rbp-1E8h]
  uint32_t idx; // [rsp+2Ch] [rbp-1E4h]
  uint32_t k; // [rsp+30h] [rbp-1E0h]
  uint32_t i; // [rsp+34h] [rbp-1DCh]
  __int64 v25; // [rsp+38h] [rbp-1D8h] BYREF
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> v26; // [rsp+40h] [rbp-1D0h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *p_conn_map; // [rsp+58h] [rbp-1B8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v28; // [rsp+60h] [rbp-1B0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v29; // [rsp+68h] [rbp-1A8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v30; // [rsp+70h] [rbp-1A0h]
  __int64 v31; // [rsp+78h] [rbp-198h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v32; // [rsp+80h] [rbp-190h]
  __int64 v33; // [rsp+88h] [rbp-188h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void>::size_type n; // [rsp+90h] [rbp-180h]
  __int64 v35; // [rsp+98h] [rbp-178h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *v36; // [rsp+A0h] [rbp-170h]
  unsigned __int64 v37; // [rsp+A8h] [rbp-168h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *v38; // [rsp+B0h] [rbp-160h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *v39; // [rsp+B8h] [rbp-158h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v40; // [rsp+C0h] [rbp-150h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v41; // [rsp+C8h] [rbp-148h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v42; // [rsp+D0h] [rbp-140h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v43; // [rsp+D8h] [rbp-138h]
  __int64 v44; // [rsp+E0h] [rbp-130h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v45; // [rsp+E8h] [rbp-128h]
  __int64 v46; // [rsp+F0h] [rbp-120h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void>::size_type v47; // [rsp+F8h] [rbp-118h]
  __int64 v48; // [rsp+100h] [rbp-110h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *v49; // [rsp+108h] [rbp-108h]
  unsigned __int64 v50; // [rsp+110h] [rbp-100h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *v51; // [rsp+118h] [rbp-F8h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *v52; // [rsp+120h] [rbp-F0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v53; // [rsp+128h] [rbp-E8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v54; // [rsp+130h] [rbp-E0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v55; // [rsp+138h] [rbp-D8h]
  common::milog::MiLogStream v56; // [rsp+140h] [rbp-D0h] BYREF
  common::milog::MiLogStream v57; // [rsp+160h] [rbp-B0h] BYREF
  char v58[144]; // [rsp+180h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 16 9 rlock:302";
  *(_QWORD *)(v1 + 16) = common::minet::AClientMgr<DispatchConnect>::start;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -202178560;
  if ( std::atomic<common::minet::AClientMgr<DispatchConnect>::Status>::operator common::minet::AClientMgr<DispatchConnect>::Status(&this->status_) == STATUS_INIT_5 )
  {
    std::shared_lock<std::shared_mutex>::shared_lock(
      (std::shared_lock<std::shared_mutex> *const)(v1 + 64),
      &this->shared_mu_);
    for ( idx_0 = 0; ; ++idx_0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->thread_num_);
      }
      if ( idx_0 >= this->thread_num_ )
        break;
      boost::bind<void,common::minet::AClientMgr<DispatchConnect>,unsigned int,common::minet::AClientMgr<DispatchConnect>*,unsigned int>(
        (boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AClientMgr<DispatchConnect>,unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AClientMgr<DispatchConnect>*>,boost::_bi::value<unsigned int> > > *)&v57,
        (void (*)(common::minet::AClientMgr<DispatchConnect> *, unsigned int))common::minet::AClientMgr<DispatchConnect>::iosThreadHandler,
        0LL,
        (unsigned int)this);
      boost::thread_group::create_thread<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AClientMgr<DispatchConnect>,unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AClientMgr<DispatchConnect>*>,boost::_bi::value<unsigned int>>>>(
        &this->ioc_thread_group_,
        (boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AClientMgr<DispatchConnect>,unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AClientMgr<DispatchConnect>*>,boost::_bi::value<unsigned int> > >)v57);
    }
    for ( idx = 0; ; ++idx )
    {
      v7 = idx;
      p_conn_map = &this->conn_map_;
      v28 = &this->conn_map_;
      v29 = &this->conn_map_;
      if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
      if ( v7 >= v29->m_flat_tree.m_data.m_seq.m_holder.m_size )
        break;
      v30 = &this->conn_map_;
      v31 = idx;
      v32 = &this->conn_map_;
      v33 = idx;
      n = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void>::size_type)&this->conn_map_;
      v35 = idx;
      *(_BYTE *)(v1 + 48) = v19;
      boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect>>>,void>::nth(
        &v26,
        n);
      v36 = &v26;
      v37 = (unsigned __int64)&v25;
      v38 = &v26;
      v39 = &v26;
      v8 = &v26;
      if ( *(_BYTE *)(((unsigned __int64)&v26 >> 3) + 0x7FFF8000) )
        v8 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *)__asan_report_load8(&v26);
      m_start = v8->m_holder.m_start;
      if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)v37 = m_start;
      v26.m_holder.m_size = v25 + 8;
      if ( !std::__shared_ptr<DispatchConnect,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<DispatchConnect,(__gnu_cxx::_Lock_policy)2> *const)(v25 + 8)) )
        goto LABEL_25;
      v10 = (unsigned __int64)std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)v26.m_holder.m_size);
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8(v10);
      v11 = *(_QWORD *)v10 + 16LL;
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8(*(_QWORD *)v10 + 16LL);
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v11)(v10) )
LABEL_25:
        v12 = 1;
      else
        v12 = 0;
      if ( v12 )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
          "start",
          317);
        common::milog::MiLogStream::operator()(&v56, "start connect failed.");
        common::milog::MiLogStream::~MiLogStream(&v56);
        break;
      }
      usleep(0x3E8u);
    }
    v13 = idx;
    v40 = &this->conn_map_;
    v41 = &this->conn_map_;
    v42 = &this->conn_map_;
    if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
    if ( v13 == v42->m_flat_tree.m_data.m_seq.m_holder.m_size )
    {
      std::atomic<common::minet::AClientMgr<DispatchConnect>::Status>::operator=(&this->status_, STATUS_START_2);
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "../framework/common/minet/aclient/include/aclient_mgr.hpp",
        "start",
        346);
      v17 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v56,
              (const char (*)[29])"start client_mgr succ, size:");
      v53 = &this->conn_map_;
      v54 = &this->conn_map_;
      v55 = &this->conn_map_;
      if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
      v26.m_holder.m_start = (boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer)v55->m_flat_tree.m_data.m_seq.m_holder.m_size;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v17, (const unsigned __int64 *)&v26);
      common::milog::MiLogStream::~MiLogStream(&v56);
      v6 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/aclient/include/aclient_mgr.hpp",
        "start",
        325);
      common::milog::MiLogStream::operator()(&v56, "start fail roll back idx:%u", idx);
      common::milog::MiLogStream::~MiLogStream(&v56);
      for ( k = 0; k < idx; ++k )
      {
        v43 = &this->conn_map_;
        v44 = k;
        v45 = &this->conn_map_;
        v46 = k;
        v47 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void>::size_type)&this->conn_map_;
        v48 = k;
        *(_BYTE *)(v1 + 48) = v20;
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect>>>,void>::nth(
          &v26,
          v47);
        v49 = &v26;
        v50 = (unsigned __int64)&v25;
        v51 = &v26;
        v52 = &v26;
        v14 = &v26;
        if ( *(_BYTE *)(((unsigned __int64)&v26 >> 3) + 0x7FFF8000) )
          v14 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *)__asan_report_load8(&v26);
        v15 = v14->m_holder.m_start;
        if ( *(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(_QWORD *)v50 = v15;
        v26.m_holder.m_capacity = v25 + 8;
        if ( std::__shared_ptr<DispatchConnect,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<DispatchConnect,(__gnu_cxx::_Lock_policy)2> *const)(v25 + 8)) )
        {
          v16 = std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)v26.m_holder.m_capacity);
          common::minet::AClientConnect::stop(v16);
        }
      }
      std::atomic<common::minet::AClientMgr<DispatchConnect>::Status>::operator=(&this->status_, STATUS_STOPPING_3);
      for ( i = 0; ; ++i )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->thread_num_);
        }
        if ( this->thread_num_ <= i )
          break;
        boost::asio::io_context::stop(&this->ioc_arr_[i]);
      }
      boost::thread_group::join_all(&this->ioc_thread_group_);
      std::atomic<common::minet::AClientMgr<DispatchConnect>::Status>::operator=(&this->status_, STATUS_INIT_5);
      v6 = 1;
    }
    std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v1 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aclient/include/aclient_mgr.hpp",
      "start",
      298);
    v4 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v57, (const char (*)[19])"client_mgr status=");
    v5 = common::milog::MiLogStream::operator<<<std::atomic<common::minet::AClientMgr<DispatchConnect>::Status>,(std::atomic<common::minet::AClientMgr<DispatchConnect>::Status>*)0>(
           v4,
           &this->status_);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v5, (const char (*)[23])", can not init it now.");
    common::milog::MiLogStream::~MiLogStream(&v57);
    v6 = 1;
  }
  result = v6;
  if ( v58 == (char *)v1 )
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

// Line 294: range 000000000C7B9FF4-000000000C7BAA03
int __cdecl common::minet::AClientMgr<GameserverConnect>::start(
        common::minet::AClientMgr<GameserverConnect> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  int v6; // r14d
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type v7; // rcx
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *v8; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer m_start; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  char v12; // al
  __int64 v13; // rcx
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *v14; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v15; // rdx
  std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  int result; // eax
  char v19; // [rsp+6h] [rbp-20Ah]
  char v20; // [rsp+7h] [rbp-209h]
  uint32_t idx_0; // [rsp+28h] [rbp-1E8h]
  uint32_t idx; // [rsp+2Ch] [rbp-1E4h]
  uint32_t k; // [rsp+30h] [rbp-1E0h]
  uint32_t i; // [rsp+34h] [rbp-1DCh]
  __int64 v25; // [rsp+38h] [rbp-1D8h] BYREF
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> v26; // [rsp+40h] [rbp-1D0h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *p_conn_map; // [rsp+58h] [rbp-1B8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v28; // [rsp+60h] [rbp-1B0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v29; // [rsp+68h] [rbp-1A8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v30; // [rsp+70h] [rbp-1A0h]
  __int64 v31; // [rsp+78h] [rbp-198h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v32; // [rsp+80h] [rbp-190h]
  __int64 v33; // [rsp+88h] [rbp-188h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void>::size_type n; // [rsp+90h] [rbp-180h]
  __int64 v35; // [rsp+98h] [rbp-178h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *v36; // [rsp+A0h] [rbp-170h]
  unsigned __int64 v37; // [rsp+A8h] [rbp-168h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *v38; // [rsp+B0h] [rbp-160h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *v39; // [rsp+B8h] [rbp-158h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v40; // [rsp+C0h] [rbp-150h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v41; // [rsp+C8h] [rbp-148h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v42; // [rsp+D0h] [rbp-140h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v43; // [rsp+D8h] [rbp-138h]
  __int64 v44; // [rsp+E0h] [rbp-130h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v45; // [rsp+E8h] [rbp-128h]
  __int64 v46; // [rsp+F0h] [rbp-120h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void>::size_type v47; // [rsp+F8h] [rbp-118h]
  __int64 v48; // [rsp+100h] [rbp-110h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *v49; // [rsp+108h] [rbp-108h]
  unsigned __int64 v50; // [rsp+110h] [rbp-100h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *v51; // [rsp+118h] [rbp-F8h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *v52; // [rsp+120h] [rbp-F0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v53; // [rsp+128h] [rbp-E8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v54; // [rsp+130h] [rbp-E0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v55; // [rsp+138h] [rbp-D8h]
  common::milog::MiLogStream v56; // [rsp+140h] [rbp-D0h] BYREF
  common::milog::MiLogStream v57; // [rsp+160h] [rbp-B0h] BYREF
  char v58[144]; // [rsp+180h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 16 9 rlock:302";
  *(_QWORD *)(v1 + 16) = common::minet::AClientMgr<GameserverConnect>::start;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -202178560;
  if ( std::atomic<common::minet::AClientMgr<GameserverConnect>::Status>::operator common::minet::AClientMgr<GameserverConnect>::Status(&this->status_) == STATUS_INIT_1 )
  {
    std::shared_lock<std::shared_mutex>::shared_lock(
      (std::shared_lock<std::shared_mutex> *const)(v1 + 64),
      &this->shared_mu_);
    for ( idx_0 = 0; ; ++idx_0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->thread_num_);
      }
      if ( idx_0 >= this->thread_num_ )
        break;
      boost::bind<void,common::minet::AClientMgr<GameserverConnect>,unsigned int,common::minet::AClientMgr<GameserverConnect>*,unsigned int>(
        (boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AClientMgr<GameserverConnect>,unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AClientMgr<GameserverConnect>*>,boost::_bi::value<unsigned int> > > *)&v57,
        (void (*)(common::minet::AClientMgr<GameserverConnect> *, unsigned int))common::minet::AClientMgr<GameserverConnect>::iosThreadHandler,
        0LL,
        (unsigned int)this);
      boost::thread_group::create_thread<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AClientMgr<GameserverConnect>,unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AClientMgr<GameserverConnect>*>,boost::_bi::value<unsigned int>>>>(
        &this->ioc_thread_group_,
        (boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AClientMgr<GameserverConnect>,unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AClientMgr<GameserverConnect>*>,boost::_bi::value<unsigned int> > >)v57);
    }
    for ( idx = 0; ; ++idx )
    {
      v7 = idx;
      p_conn_map = &this->conn_map_;
      v28 = &this->conn_map_;
      v29 = &this->conn_map_;
      if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
      if ( v7 >= v29->m_flat_tree.m_data.m_seq.m_holder.m_size )
        break;
      v30 = &this->conn_map_;
      v31 = idx;
      v32 = &this->conn_map_;
      v33 = idx;
      n = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void>::size_type)&this->conn_map_;
      v35 = idx;
      *(_BYTE *)(v1 + 48) = v19;
      boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect>>>,void>::nth(
        &v26,
        n);
      v36 = &v26;
      v37 = (unsigned __int64)&v25;
      v38 = &v26;
      v39 = &v26;
      v8 = &v26;
      if ( *(_BYTE *)(((unsigned __int64)&v26 >> 3) + 0x7FFF8000) )
        v8 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *)__asan_report_load8(&v26);
      m_start = v8->m_holder.m_start;
      if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)v37 = m_start;
      v26.m_holder.m_size = v25 + 8;
      if ( !std::__shared_ptr<GameserverConnect,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<GameserverConnect,(__gnu_cxx::_Lock_policy)2> *const)(v25 + 8)) )
        goto LABEL_25;
      v10 = (unsigned __int64)std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)v26.m_holder.m_size);
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8(v10);
      v11 = *(_QWORD *)v10 + 16LL;
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8(*(_QWORD *)v10 + 16LL);
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v11)(v10) )
LABEL_25:
        v12 = 1;
      else
        v12 = 0;
      if ( v12 )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
          "start",
          317);
        common::milog::MiLogStream::operator()(&v56, "start connect failed.");
        common::milog::MiLogStream::~MiLogStream(&v56);
        break;
      }
      usleep(0x3E8u);
    }
    v13 = idx;
    v40 = &this->conn_map_;
    v41 = &this->conn_map_;
    v42 = &this->conn_map_;
    if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
    if ( v13 == v42->m_flat_tree.m_data.m_seq.m_holder.m_size )
    {
      std::atomic<common::minet::AClientMgr<GameserverConnect>::Status>::operator=(&this->status_, STATUS_START);
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "../framework/common/minet/aclient/include/aclient_mgr.hpp",
        "start",
        346);
      v17 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v56,
              (const char (*)[29])"start client_mgr succ, size:");
      v53 = &this->conn_map_;
      v54 = &this->conn_map_;
      v55 = &this->conn_map_;
      if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
      v26.m_holder.m_start = (boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer)v55->m_flat_tree.m_data.m_seq.m_holder.m_size;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v17, (const unsigned __int64 *)&v26);
      common::milog::MiLogStream::~MiLogStream(&v56);
      v6 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/aclient/include/aclient_mgr.hpp",
        "start",
        325);
      common::milog::MiLogStream::operator()(&v56, "start fail roll back idx:%u", idx);
      common::milog::MiLogStream::~MiLogStream(&v56);
      for ( k = 0; k < idx; ++k )
      {
        v43 = &this->conn_map_;
        v44 = k;
        v45 = &this->conn_map_;
        v46 = k;
        v47 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void>::size_type)&this->conn_map_;
        v48 = k;
        *(_BYTE *)(v1 + 48) = v20;
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect>>>,void>::nth(
          &v26,
          v47);
        v49 = &v26;
        v50 = (unsigned __int64)&v25;
        v51 = &v26;
        v52 = &v26;
        v14 = &v26;
        if ( *(_BYTE *)(((unsigned __int64)&v26 >> 3) + 0x7FFF8000) )
          v14 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *)__asan_report_load8(&v26);
        v15 = v14->m_holder.m_start;
        if ( *(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(_QWORD *)v50 = v15;
        v26.m_holder.m_capacity = v25 + 8;
        if ( std::__shared_ptr<GameserverConnect,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<GameserverConnect,(__gnu_cxx::_Lock_policy)2> *const)(v25 + 8)) )
        {
          v16 = std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)v26.m_holder.m_capacity);
          common::minet::AClientConnect::stop(v16);
        }
      }
      std::atomic<common::minet::AClientMgr<GameserverConnect>::Status>::operator=(&this->status_, STATUS_STOPPING_0);
      for ( i = 0; ; ++i )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->thread_num_);
        }
        if ( this->thread_num_ <= i )
          break;
        boost::asio::io_context::stop(&this->ioc_arr_[i]);
      }
      boost::thread_group::join_all(&this->ioc_thread_group_);
      std::atomic<common::minet::AClientMgr<GameserverConnect>::Status>::operator=(&this->status_, STATUS_INIT_1);
      v6 = 1;
    }
    std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v1 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aclient/include/aclient_mgr.hpp",
      "start",
      298);
    v4 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v57, (const char (*)[19])"client_mgr status=");
    v5 = common::milog::MiLogStream::operator<<<std::atomic<common::minet::AClientMgr<GameserverConnect>::Status>,(std::atomic<common::minet::AClientMgr<GameserverConnect>::Status>*)0>(
           v4,
           &this->status_);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v5, (const char (*)[23])", can not init it now.");
    common::milog::MiLogStream::~MiLogStream(&v57);
    v6 = 1;
  }
  result = v6;
  if ( v58 == (char *)v1 )
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

// Line 294: range 000000000C7BAA04-000000000C7BB413
int __cdecl common::minet::AClientMgr<PathfindingserverConnect>::start(
        common::minet::AClientMgr<PathfindingserverConnect> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  int v6; // r14d
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type v7; // rcx
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *v8; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer m_start; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  char v12; // al
  __int64 v13; // rcx
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *v14; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v15; // rdx
  std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  int result; // eax
  char v19; // [rsp+6h] [rbp-20Ah]
  char v20; // [rsp+7h] [rbp-209h]
  uint32_t idx_0; // [rsp+28h] [rbp-1E8h]
  uint32_t idx; // [rsp+2Ch] [rbp-1E4h]
  uint32_t k; // [rsp+30h] [rbp-1E0h]
  uint32_t i; // [rsp+34h] [rbp-1DCh]
  __int64 v25; // [rsp+38h] [rbp-1D8h] BYREF
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> v26; // [rsp+40h] [rbp-1D0h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *p_conn_map; // [rsp+58h] [rbp-1B8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v28; // [rsp+60h] [rbp-1B0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v29; // [rsp+68h] [rbp-1A8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v30; // [rsp+70h] [rbp-1A0h]
  __int64 v31; // [rsp+78h] [rbp-198h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v32; // [rsp+80h] [rbp-190h]
  __int64 v33; // [rsp+88h] [rbp-188h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void>::size_type n; // [rsp+90h] [rbp-180h]
  __int64 v35; // [rsp+98h] [rbp-178h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *v36; // [rsp+A0h] [rbp-170h]
  unsigned __int64 v37; // [rsp+A8h] [rbp-168h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *v38; // [rsp+B0h] [rbp-160h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *v39; // [rsp+B8h] [rbp-158h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v40; // [rsp+C0h] [rbp-150h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v41; // [rsp+C8h] [rbp-148h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v42; // [rsp+D0h] [rbp-140h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v43; // [rsp+D8h] [rbp-138h]
  __int64 v44; // [rsp+E0h] [rbp-130h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v45; // [rsp+E8h] [rbp-128h]
  __int64 v46; // [rsp+F0h] [rbp-120h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void>::size_type v47; // [rsp+F8h] [rbp-118h]
  __int64 v48; // [rsp+100h] [rbp-110h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *v49; // [rsp+108h] [rbp-108h]
  unsigned __int64 v50; // [rsp+110h] [rbp-100h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *v51; // [rsp+118h] [rbp-F8h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *v52; // [rsp+120h] [rbp-F0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v53; // [rsp+128h] [rbp-E8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v54; // [rsp+130h] [rbp-E0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v55; // [rsp+138h] [rbp-D8h]
  common::milog::MiLogStream v56; // [rsp+140h] [rbp-D0h] BYREF
  common::milog::MiLogStream v57; // [rsp+160h] [rbp-B0h] BYREF
  char v58[144]; // [rsp+180h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 16 9 rlock:302";
  *(_QWORD *)(v1 + 16) = common::minet::AClientMgr<PathfindingserverConnect>::start;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -202178560;
  if ( std::atomic<common::minet::AClientMgr<PathfindingserverConnect>::Status>::operator common::minet::AClientMgr<PathfindingserverConnect>::Status(&this->status_) == STATUS_INIT_2 )
  {
    std::shared_lock<std::shared_mutex>::shared_lock(
      (std::shared_lock<std::shared_mutex> *const)(v1 + 64),
      &this->shared_mu_);
    for ( idx_0 = 0; ; ++idx_0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->thread_num_);
      }
      if ( idx_0 >= this->thread_num_ )
        break;
      boost::bind<void,common::minet::AClientMgr<PathfindingserverConnect>,unsigned int,common::minet::AClientMgr<PathfindingserverConnect>*,unsigned int>(
        (boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AClientMgr<PathfindingserverConnect>,unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AClientMgr<PathfindingserverConnect>*>,boost::_bi::value<unsigned int> > > *)&v57,
        (void (*)(common::minet::AClientMgr<PathfindingserverConnect> *, unsigned int))common::minet::AClientMgr<PathfindingserverConnect>::iosThreadHandler,
        0LL,
        (unsigned int)this);
      boost::thread_group::create_thread<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AClientMgr<PathfindingserverConnect>,unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AClientMgr<PathfindingserverConnect>*>,boost::_bi::value<unsigned int>>>>(
        &this->ioc_thread_group_,
        (boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AClientMgr<PathfindingserverConnect>,unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AClientMgr<PathfindingserverConnect>*>,boost::_bi::value<unsigned int> > >)v57);
    }
    for ( idx = 0; ; ++idx )
    {
      v7 = idx;
      p_conn_map = &this->conn_map_;
      v28 = &this->conn_map_;
      v29 = &this->conn_map_;
      if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
      if ( v7 >= v29->m_flat_tree.m_data.m_seq.m_holder.m_size )
        break;
      v30 = &this->conn_map_;
      v31 = idx;
      v32 = &this->conn_map_;
      v33 = idx;
      n = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void>::size_type)&this->conn_map_;
      v35 = idx;
      *(_BYTE *)(v1 + 48) = v19;
      boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect>>>,void>::nth(
        &v26,
        n);
      v36 = &v26;
      v37 = (unsigned __int64)&v25;
      v38 = &v26;
      v39 = &v26;
      v8 = &v26;
      if ( *(_BYTE *)(((unsigned __int64)&v26 >> 3) + 0x7FFF8000) )
        v8 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *)__asan_report_load8(&v26);
      m_start = v8->m_holder.m_start;
      if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)v37 = m_start;
      v26.m_holder.m_size = v25 + 8;
      if ( !std::__shared_ptr<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2> *const)(v25 + 8)) )
        goto LABEL_25;
      v10 = (unsigned __int64)std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)v26.m_holder.m_size);
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8(v10);
      v11 = *(_QWORD *)v10 + 16LL;
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8(*(_QWORD *)v10 + 16LL);
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v11)(v10) )
LABEL_25:
        v12 = 1;
      else
        v12 = 0;
      if ( v12 )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
          "start",
          317);
        common::milog::MiLogStream::operator()(&v56, "start connect failed.");
        common::milog::MiLogStream::~MiLogStream(&v56);
        break;
      }
      usleep(0x3E8u);
    }
    v13 = idx;
    v40 = &this->conn_map_;
    v41 = &this->conn_map_;
    v42 = &this->conn_map_;
    if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
    if ( v13 == v42->m_flat_tree.m_data.m_seq.m_holder.m_size )
    {
      std::atomic<common::minet::AClientMgr<PathfindingserverConnect>::Status>::operator=(
        &this->status_,
        STATUS_START_0);
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "../framework/common/minet/aclient/include/aclient_mgr.hpp",
        "start",
        346);
      v17 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v56,
              (const char (*)[29])"start client_mgr succ, size:");
      v53 = &this->conn_map_;
      v54 = &this->conn_map_;
      v55 = &this->conn_map_;
      if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
      v26.m_holder.m_start = (boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer)v55->m_flat_tree.m_data.m_seq.m_holder.m_size;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v17, (const unsigned __int64 *)&v26);
      common::milog::MiLogStream::~MiLogStream(&v56);
      v6 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/aclient/include/aclient_mgr.hpp",
        "start",
        325);
      common::milog::MiLogStream::operator()(&v56, "start fail roll back idx:%u", idx);
      common::milog::MiLogStream::~MiLogStream(&v56);
      for ( k = 0; k < idx; ++k )
      {
        v43 = &this->conn_map_;
        v44 = k;
        v45 = &this->conn_map_;
        v46 = k;
        v47 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void>::size_type)&this->conn_map_;
        v48 = k;
        *(_BYTE *)(v1 + 48) = v20;
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect>>>,void>::nth(
          &v26,
          v47);
        v49 = &v26;
        v50 = (unsigned __int64)&v25;
        v51 = &v26;
        v52 = &v26;
        v14 = &v26;
        if ( *(_BYTE *)(((unsigned __int64)&v26 >> 3) + 0x7FFF8000) )
          v14 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *)__asan_report_load8(&v26);
        v15 = v14->m_holder.m_start;
        if ( *(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(_QWORD *)v50 = v15;
        v26.m_holder.m_capacity = v25 + 8;
        if ( std::__shared_ptr<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2> *const)(v25 + 8)) )
        {
          v16 = std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)v26.m_holder.m_capacity);
          common::minet::AClientConnect::stop(v16);
        }
      }
      std::atomic<common::minet::AClientMgr<PathfindingserverConnect>::Status>::operator=(
        &this->status_,
        STATUS_STOPPING_1);
      for ( i = 0; ; ++i )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->thread_num_);
        }
        if ( this->thread_num_ <= i )
          break;
        boost::asio::io_context::stop(&this->ioc_arr_[i]);
      }
      boost::thread_group::join_all(&this->ioc_thread_group_);
      std::atomic<common::minet::AClientMgr<PathfindingserverConnect>::Status>::operator=(&this->status_, STATUS_INIT_2);
      v6 = 1;
    }
    std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v1 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aclient/include/aclient_mgr.hpp",
      "start",
      298);
    v4 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v57, (const char (*)[19])"client_mgr status=");
    v5 = common::milog::MiLogStream::operator<<<std::atomic<common::minet::AClientMgr<PathfindingserverConnect>::Status>,(std::atomic<common::minet::AClientMgr<PathfindingserverConnect>::Status>*)0>(
           v4,
           &this->status_);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v5, (const char (*)[23])", can not init it now.");
    common::milog::MiLogStream::~MiLogStream(&v57);
    v6 = 1;
  }
  result = v6;
  if ( v58 == (char *)v1 )
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

// Line 294: range 000000000C7BB414-000000000C7BBE23
int __cdecl common::minet::AClientMgr<TothemoonserverConnect>::start(
        common::minet::AClientMgr<TothemoonserverConnect> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  int v6; // r14d
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type v7; // rcx
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *v8; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer m_start; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  char v12; // al
  __int64 v13; // rcx
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *v14; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v15; // rdx
  std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  int result; // eax
  char v19; // [rsp+6h] [rbp-20Ah]
  char v20; // [rsp+7h] [rbp-209h]
  uint32_t idx_0; // [rsp+28h] [rbp-1E8h]
  uint32_t idx; // [rsp+2Ch] [rbp-1E4h]
  uint32_t k; // [rsp+30h] [rbp-1E0h]
  uint32_t i; // [rsp+34h] [rbp-1DCh]
  __int64 v25; // [rsp+38h] [rbp-1D8h] BYREF
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> v26; // [rsp+40h] [rbp-1D0h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *p_conn_map; // [rsp+58h] [rbp-1B8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v28; // [rsp+60h] [rbp-1B0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v29; // [rsp+68h] [rbp-1A8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v30; // [rsp+70h] [rbp-1A0h]
  __int64 v31; // [rsp+78h] [rbp-198h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v32; // [rsp+80h] [rbp-190h]
  __int64 v33; // [rsp+88h] [rbp-188h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void>::size_type n; // [rsp+90h] [rbp-180h]
  __int64 v35; // [rsp+98h] [rbp-178h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *v36; // [rsp+A0h] [rbp-170h]
  unsigned __int64 v37; // [rsp+A8h] [rbp-168h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *v38; // [rsp+B0h] [rbp-160h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *v39; // [rsp+B8h] [rbp-158h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v40; // [rsp+C0h] [rbp-150h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v41; // [rsp+C8h] [rbp-148h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v42; // [rsp+D0h] [rbp-140h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v43; // [rsp+D8h] [rbp-138h]
  __int64 v44; // [rsp+E0h] [rbp-130h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v45; // [rsp+E8h] [rbp-128h]
  __int64 v46; // [rsp+F0h] [rbp-120h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void>::size_type v47; // [rsp+F8h] [rbp-118h]
  __int64 v48; // [rsp+100h] [rbp-110h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *v49; // [rsp+108h] [rbp-108h]
  unsigned __int64 v50; // [rsp+110h] [rbp-100h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *v51; // [rsp+118h] [rbp-F8h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *v52; // [rsp+120h] [rbp-F0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v53; // [rsp+128h] [rbp-E8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v54; // [rsp+130h] [rbp-E0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v55; // [rsp+138h] [rbp-D8h]
  common::milog::MiLogStream v56; // [rsp+140h] [rbp-D0h] BYREF
  common::milog::MiLogStream v57; // [rsp+160h] [rbp-B0h] BYREF
  char v58[144]; // [rsp+180h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 16 9 rlock:302";
  *(_QWORD *)(v1 + 16) = common::minet::AClientMgr<TothemoonserverConnect>::start;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -202178560;
  if ( std::atomic<common::minet::AClientMgr<TothemoonserverConnect>::Status>::operator common::minet::AClientMgr<TothemoonserverConnect>::Status(&this->status_) == STATUS_INIT_3 )
  {
    std::shared_lock<std::shared_mutex>::shared_lock(
      (std::shared_lock<std::shared_mutex> *const)(v1 + 64),
      &this->shared_mu_);
    for ( idx_0 = 0; ; ++idx_0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->thread_num_);
      }
      if ( idx_0 >= this->thread_num_ )
        break;
      boost::bind<void,common::minet::AClientMgr<TothemoonserverConnect>,unsigned int,common::minet::AClientMgr<TothemoonserverConnect>*,unsigned int>(
        (boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AClientMgr<TothemoonserverConnect>,unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AClientMgr<TothemoonserverConnect>*>,boost::_bi::value<unsigned int> > > *)&v57,
        (void (*)(common::minet::AClientMgr<TothemoonserverConnect> *, unsigned int))common::minet::AClientMgr<TothemoonserverConnect>::iosThreadHandler,
        0LL,
        (unsigned int)this);
      boost::thread_group::create_thread<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AClientMgr<TothemoonserverConnect>,unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AClientMgr<TothemoonserverConnect>*>,boost::_bi::value<unsigned int>>>>(
        &this->ioc_thread_group_,
        (boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AClientMgr<TothemoonserverConnect>,unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AClientMgr<TothemoonserverConnect>*>,boost::_bi::value<unsigned int> > >)v57);
    }
    for ( idx = 0; ; ++idx )
    {
      v7 = idx;
      p_conn_map = &this->conn_map_;
      v28 = &this->conn_map_;
      v29 = &this->conn_map_;
      if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
      if ( v7 >= v29->m_flat_tree.m_data.m_seq.m_holder.m_size )
        break;
      v30 = &this->conn_map_;
      v31 = idx;
      v32 = &this->conn_map_;
      v33 = idx;
      n = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void>::size_type)&this->conn_map_;
      v35 = idx;
      *(_BYTE *)(v1 + 48) = v19;
      boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect>>>,void>::nth(
        &v26,
        n);
      v36 = &v26;
      v37 = (unsigned __int64)&v25;
      v38 = &v26;
      v39 = &v26;
      v8 = &v26;
      if ( *(_BYTE *)(((unsigned __int64)&v26 >> 3) + 0x7FFF8000) )
        v8 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *)__asan_report_load8(&v26);
      m_start = v8->m_holder.m_start;
      if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)v37 = m_start;
      v26.m_holder.m_size = v25 + 8;
      if ( !std::__shared_ptr<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2> *const)(v25 + 8)) )
        goto LABEL_25;
      v10 = (unsigned __int64)std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)v26.m_holder.m_size);
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8(v10);
      v11 = *(_QWORD *)v10 + 16LL;
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8(*(_QWORD *)v10 + 16LL);
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v11)(v10) )
LABEL_25:
        v12 = 1;
      else
        v12 = 0;
      if ( v12 )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
          "start",
          317);
        common::milog::MiLogStream::operator()(&v56, "start connect failed.");
        common::milog::MiLogStream::~MiLogStream(&v56);
        break;
      }
      usleep(0x3E8u);
    }
    v13 = idx;
    v40 = &this->conn_map_;
    v41 = &this->conn_map_;
    v42 = &this->conn_map_;
    if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
    if ( v13 == v42->m_flat_tree.m_data.m_seq.m_holder.m_size )
    {
      std::atomic<common::minet::AClientMgr<TothemoonserverConnect>::Status>::operator=(&this->status_, STATUS_START_1);
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "../framework/common/minet/aclient/include/aclient_mgr.hpp",
        "start",
        346);
      v17 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v56,
              (const char (*)[29])"start client_mgr succ, size:");
      v53 = &this->conn_map_;
      v54 = &this->conn_map_;
      v55 = &this->conn_map_;
      if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
      v26.m_holder.m_start = (boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer)v55->m_flat_tree.m_data.m_seq.m_holder.m_size;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v17, (const unsigned __int64 *)&v26);
      common::milog::MiLogStream::~MiLogStream(&v56);
      v6 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/aclient/include/aclient_mgr.hpp",
        "start",
        325);
      common::milog::MiLogStream::operator()(&v56, "start fail roll back idx:%u", idx);
      common::milog::MiLogStream::~MiLogStream(&v56);
      for ( k = 0; k < idx; ++k )
      {
        v43 = &this->conn_map_;
        v44 = k;
        v45 = &this->conn_map_;
        v46 = k;
        v47 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void>::size_type)&this->conn_map_;
        v48 = k;
        *(_BYTE *)(v1 + 48) = v20;
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect>>>,void>::nth(
          &v26,
          v47);
        v49 = &v26;
        v50 = (unsigned __int64)&v25;
        v51 = &v26;
        v52 = &v26;
        v14 = &v26;
        if ( *(_BYTE *)(((unsigned __int64)&v26 >> 3) + 0x7FFF8000) )
          v14 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *)__asan_report_load8(&v26);
        v15 = v14->m_holder.m_start;
        if ( *(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(_QWORD *)v50 = v15;
        v26.m_holder.m_capacity = v25 + 8;
        if ( std::__shared_ptr<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2> *const)(v25 + 8)) )
        {
          v16 = std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)v26.m_holder.m_capacity);
          common::minet::AClientConnect::stop(v16);
        }
      }
      std::atomic<common::minet::AClientMgr<TothemoonserverConnect>::Status>::operator=(
        &this->status_,
        STATUS_STOPPING_2);
      for ( i = 0; ; ++i )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->thread_num_);
        }
        if ( this->thread_num_ <= i )
          break;
        boost::asio::io_context::stop(&this->ioc_arr_[i]);
      }
      boost::thread_group::join_all(&this->ioc_thread_group_);
      std::atomic<common::minet::AClientMgr<TothemoonserverConnect>::Status>::operator=(&this->status_, STATUS_INIT_3);
      v6 = 1;
    }
    std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v1 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/aclient/include/aclient_mgr.hpp",
      "start",
      298);
    v4 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v57, (const char (*)[19])"client_mgr status=");
    v5 = common::milog::MiLogStream::operator<<<std::atomic<common::minet::AClientMgr<TothemoonserverConnect>::Status>,(std::atomic<common::minet::AClientMgr<TothemoonserverConnect>::Status>*)0>(
           v4,
           &this->status_);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v5, (const char (*)[23])", can not init it now.");
    common::milog::MiLogStream::~MiLogStream(&v57);
    v6 = 1;
  }
  result = v6;
  if ( v58 == (char *)v1 )
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

// Line 354: range 000000000C85EF1A-000000000C85F54A
int __cdecl common::minet::AClientMgr<DispatchConnect>::nonBlockStop(
        common::minet::AClientMgr<DispatchConnect> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *p_m_size; // rdi
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v5; // rax
  __int64 m_start; // rax
  char *v7; // rax
  std::pair<unsigned int,std::shared_ptr<DispatchConnect> > *v8; // rdx
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v9; // rax
  __int64 v10; // rax
  char *v11; // rax
  std::pair<unsigned int,std::shared_ptr<DispatchConnect> > *v12; // rdx
  int result; // eax
  common::minet::AClientMgr<DispatchConnect>::Status last_status; // [rsp+14h] [rbp-16Ch]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator __for_begin; // [rsp+18h] [rbp-168h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator __for_end; // [rsp+20h] [rbp-160h] BYREF
  char v19[8]; // [rsp+28h] [rbp-158h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *__for_range; // [rsp+30h] [rbp-150h]
  std::pair<unsigned int,std::shared_ptr<DispatchConnect> > *__in; // [rsp+38h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int,std::shared_ptr<DispatchConnect> > >::type *_; // [rsp+40h] [rbp-140h]
  std::tuple_element<1,std::pair<unsigned int,std::shared_ptr<DispatchConnect> > >::type *conn; // [rsp+48h] [rbp-138h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v24; // [rsp+50h] [rbp-130h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v25; // [rsp+58h] [rbp-128h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v26; // [rsp+60h] [rbp-120h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v27; // [rsp+68h] [rbp-118h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v28; // [rsp+70h] [rbp-110h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_size; // [rsp+78h] [rbp-108h]
  char *v30; // [rsp+80h] [rbp-100h]
  __int64 v31; // [rsp+88h] [rbp-F8h]
  char *v32; // [rsp+90h] [rbp-F0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *p_for_end; // [rsp+98h] [rbp-E8h]
  char *v34; // [rsp+A0h] [rbp-E0h]
  char *v35; // [rsp+A8h] [rbp-D8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *p_conn_map; // [rsp+B0h] [rbp-D0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v37; // [rsp+B8h] [rbp-C8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v38; // [rsp+C0h] [rbp-C0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v39; // [rsp+C8h] [rbp-B8h]
  char *v40; // [rsp+D0h] [rbp-B0h]
  __int64 v41; // [rsp+D8h] [rbp-A8h]
  char *v42; // [rsp+E0h] [rbp-A0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *p_for_begin; // [rsp+E8h] [rbp-98h]
  char *v44; // [rsp+F0h] [rbp-90h]
  char *v45; // [rsp+F8h] [rbp-88h]
  common::milog::MiLogStream v46; // [rsp+100h] [rbp-80h] BYREF
  char v47[96]; // [rsp+120h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 9 rlock:362";
  *(_QWORD *)(v1 + 16) = common::minet::AClientMgr<DispatchConnect>::nonBlockStop;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::milog::MiLogStream::create(
    &v46,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
    "nonBlockStop",
    356);
  common::milog::MiLogStream::operator()(&v46, "start to stop client");
  common::milog::MiLogStream::~MiLogStream(&v46);
  last_status = std::atomic<common::minet::AClientMgr<DispatchConnect>::Status>::operator common::minet::AClientMgr<DispatchConnect>::Status(&this->status_);
  std::atomic<common::minet::AClientMgr<DispatchConnect>::Status>::operator=(&this->status_, STATUS_STOPPING_3);
  if ( last_status == STATUS_START_2 )
  {
    p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)(v1 + 32);
    std::shared_lock<std::shared_mutex>::shared_lock(
      (std::shared_lock<std::shared_mutex> *const)(v1 + 32),
      &this->shared_mu_);
    __for_range = &this->conn_map_;
    p_conn_map = &this->conn_map_;
    v37 = &this->conn_map_;
    v38 = &this->conn_map_;
    v39 = &this->conn_map_;
    v5 = &this->conn_map_;
    if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_ >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)&this->conn_map_;
      v5 = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *)__asan_report_load8(&this->conn_map_);
    }
    m_start = (__int64)v5->m_flat_tree.m_data.m_seq.m_holder.m_start;
    v40 = v19;
    v41 = m_start;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)v19;
      __asan_report_store8();
    }
    *(_QWORD *)v40 = v41;
    v42 = v19;
    p_for_begin = &__for_begin;
    v44 = v19;
    v45 = v19;
    v7 = v19;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)v19;
      v7 = (char *)__asan_report_load8(v19);
    }
    v8 = *(std::pair<unsigned int,std::shared_ptr<DispatchConnect> > **)v7;
    if ( *(_BYTE *)(((unsigned __int64)p_for_begin >> 3) + 0x7FFF8000) )
    {
      p_m_size = p_for_begin;
      __asan_report_store8();
    }
    p_for_begin->m_ptr = v8;
    v24 = __for_range;
    v25 = __for_range;
    v26 = __for_range;
    v27 = __for_range;
    v9 = __for_range;
    if ( *(_BYTE *)(((unsigned __int64)__for_range >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)__for_range;
      v9 = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *)__asan_report_load8(__for_range);
    }
    v28 = v9->m_flat_tree.m_data.m_seq.m_holder.m_start;
    if ( *(_BYTE *)(((unsigned __int64)&v26->m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)&v26->m_flat_tree.m_data.m_seq.m_holder.m_size;
      __asan_report_load8(&v26->m_flat_tree.m_data.m_seq.m_holder.m_size);
    }
    m_size = v26->m_flat_tree.m_data.m_seq.m_holder.m_size;
    if ( m_size )
      v10 = (__int64)&v28[m_size];
    else
      v10 = (__int64)v28;
    v30 = v19;
    v31 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)v19;
      __asan_report_store8();
    }
    *(_QWORD *)v30 = v31;
    v32 = v19;
    p_for_end = &__for_end;
    v34 = v19;
    v35 = v19;
    v11 = v19;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)v19;
      v11 = (char *)__asan_report_load8(v19);
    }
    v12 = *(std::pair<unsigned int,std::shared_ptr<DispatchConnect> > **)v11;
    if ( *(_BYTE *)(((unsigned __int64)p_for_end >> 3) + 0x7FFF8000) )
    {
      p_m_size = p_for_end;
      __asan_report_store8();
    }
    p_for_end->m_ptr = v12;
    while ( __for_begin.m_ptr != __for_end.m_ptr )
    {
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return(p_m_size);
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x8Eu,
          "boost::container::vec_iterator<Pointer, IsConst>::reference boost::container::vec_iterator<Pointer, IsConst>::"
          "operator*() const [with Pointer = std::pair<unsigned int, std::shared_ptr<DispatchConnect> >*; bool IsConst = "
          "false; boost::container::vec_iterator<Pointer, IsConst>::reference = std::pair<unsigned int, std::shared_ptr<D"
          "ispatchConnect> >&]");
      }
      __in = __for_begin.m_ptr;
      _ = std::get<0ul,unsigned int,std::shared_ptr<DispatchConnect>>(__for_begin.m_ptr);
      conn = std::get<1ul,unsigned int,std::shared_ptr<DispatchConnect>>(__in);
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)conn;
      if ( !std::__shared_ptr<DispatchConnect,(__gnu_cxx::_Lock_policy)2>::operator bool(conn)
        || (p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn),
            common::minet::AClientConnect::stop((common::minet::AClientConnect *const)p_m_size)) )
      {
        common::milog::MiLogStream::create(
          &v46,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
          "nonBlockStop",
          368);
        common::milog::MiLogStream::operator()(&v46, "stop connect failed.");
        p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)&v46;
        common::milog::MiLogStream::~MiLogStream(&v46);
      }
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return(p_m_size);
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x98u,
          "boost::container::vec_iterator<Pointer, IsConst>& boost::container::vec_iterator<Pointer, IsConst>::operator++"
          "() [with Pointer = std::pair<unsigned int, std::shared_ptr<DispatchConnect> >*; bool IsConst = false]");
      }
      ++__for_begin.m_ptr;
    }
    std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v1 + 32));
  }
  result = 0;
  if ( v47 == (char *)v1 )
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

// Line 354: range 000000000C7D22D2-000000000C7D2902
int __cdecl common::minet::AClientMgr<GameserverConnect>::nonBlockStop(
        common::minet::AClientMgr<GameserverConnect> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *p_m_size; // rdi
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v5; // rax
  __int64 m_start; // rax
  char *v7; // rax
  std::pair<unsigned int,std::shared_ptr<GameserverConnect> > *v8; // rdx
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v9; // rax
  __int64 v10; // rax
  char *v11; // rax
  std::pair<unsigned int,std::shared_ptr<GameserverConnect> > *v12; // rdx
  int result; // eax
  common::minet::AClientMgr<GameserverConnect>::Status last_status; // [rsp+14h] [rbp-16Ch]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator __for_begin; // [rsp+18h] [rbp-168h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator __for_end; // [rsp+20h] [rbp-160h] BYREF
  char v19[8]; // [rsp+28h] [rbp-158h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *__for_range; // [rsp+30h] [rbp-150h]
  std::pair<unsigned int,std::shared_ptr<GameserverConnect> > *__in; // [rsp+38h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int,std::shared_ptr<GameserverConnect> > >::type *_; // [rsp+40h] [rbp-140h]
  std::tuple_element<1,std::pair<unsigned int,std::shared_ptr<GameserverConnect> > >::type *conn; // [rsp+48h] [rbp-138h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v24; // [rsp+50h] [rbp-130h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v25; // [rsp+58h] [rbp-128h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v26; // [rsp+60h] [rbp-120h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v27; // [rsp+68h] [rbp-118h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v28; // [rsp+70h] [rbp-110h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_size; // [rsp+78h] [rbp-108h]
  char *v30; // [rsp+80h] [rbp-100h]
  __int64 v31; // [rsp+88h] [rbp-F8h]
  char *v32; // [rsp+90h] [rbp-F0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *p_for_end; // [rsp+98h] [rbp-E8h]
  char *v34; // [rsp+A0h] [rbp-E0h]
  char *v35; // [rsp+A8h] [rbp-D8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *p_conn_map; // [rsp+B0h] [rbp-D0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v37; // [rsp+B8h] [rbp-C8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v38; // [rsp+C0h] [rbp-C0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v39; // [rsp+C8h] [rbp-B8h]
  char *v40; // [rsp+D0h] [rbp-B0h]
  __int64 v41; // [rsp+D8h] [rbp-A8h]
  char *v42; // [rsp+E0h] [rbp-A0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *p_for_begin; // [rsp+E8h] [rbp-98h]
  char *v44; // [rsp+F0h] [rbp-90h]
  char *v45; // [rsp+F8h] [rbp-88h]
  common::milog::MiLogStream v46; // [rsp+100h] [rbp-80h] BYREF
  char v47[96]; // [rsp+120h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 9 rlock:362";
  *(_QWORD *)(v1 + 16) = common::minet::AClientMgr<GameserverConnect>::nonBlockStop;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::milog::MiLogStream::create(
    &v46,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
    "nonBlockStop",
    356);
  common::milog::MiLogStream::operator()(&v46, "start to stop client");
  common::milog::MiLogStream::~MiLogStream(&v46);
  last_status = std::atomic<common::minet::AClientMgr<GameserverConnect>::Status>::operator common::minet::AClientMgr<GameserverConnect>::Status(&this->status_);
  std::atomic<common::minet::AClientMgr<GameserverConnect>::Status>::operator=(&this->status_, STATUS_STOPPING_0);
  if ( last_status == STATUS_START )
  {
    p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)(v1 + 32);
    std::shared_lock<std::shared_mutex>::shared_lock(
      (std::shared_lock<std::shared_mutex> *const)(v1 + 32),
      &this->shared_mu_);
    __for_range = &this->conn_map_;
    p_conn_map = &this->conn_map_;
    v37 = &this->conn_map_;
    v38 = &this->conn_map_;
    v39 = &this->conn_map_;
    v5 = &this->conn_map_;
    if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_ >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)&this->conn_map_;
      v5 = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *)__asan_report_load8(&this->conn_map_);
    }
    m_start = (__int64)v5->m_flat_tree.m_data.m_seq.m_holder.m_start;
    v40 = v19;
    v41 = m_start;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)v19;
      __asan_report_store8();
    }
    *(_QWORD *)v40 = v41;
    v42 = v19;
    p_for_begin = &__for_begin;
    v44 = v19;
    v45 = v19;
    v7 = v19;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)v19;
      v7 = (char *)__asan_report_load8(v19);
    }
    v8 = *(std::pair<unsigned int,std::shared_ptr<GameserverConnect> > **)v7;
    if ( *(_BYTE *)(((unsigned __int64)p_for_begin >> 3) + 0x7FFF8000) )
    {
      p_m_size = p_for_begin;
      __asan_report_store8();
    }
    p_for_begin->m_ptr = v8;
    v24 = __for_range;
    v25 = __for_range;
    v26 = __for_range;
    v27 = __for_range;
    v9 = __for_range;
    if ( *(_BYTE *)(((unsigned __int64)__for_range >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)__for_range;
      v9 = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *)__asan_report_load8(__for_range);
    }
    v28 = v9->m_flat_tree.m_data.m_seq.m_holder.m_start;
    if ( *(_BYTE *)(((unsigned __int64)&v26->m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)&v26->m_flat_tree.m_data.m_seq.m_holder.m_size;
      __asan_report_load8(&v26->m_flat_tree.m_data.m_seq.m_holder.m_size);
    }
    m_size = v26->m_flat_tree.m_data.m_seq.m_holder.m_size;
    if ( m_size )
      v10 = (__int64)&v28[m_size];
    else
      v10 = (__int64)v28;
    v30 = v19;
    v31 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)v19;
      __asan_report_store8();
    }
    *(_QWORD *)v30 = v31;
    v32 = v19;
    p_for_end = &__for_end;
    v34 = v19;
    v35 = v19;
    v11 = v19;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)v19;
      v11 = (char *)__asan_report_load8(v19);
    }
    v12 = *(std::pair<unsigned int,std::shared_ptr<GameserverConnect> > **)v11;
    if ( *(_BYTE *)(((unsigned __int64)p_for_end >> 3) + 0x7FFF8000) )
    {
      p_m_size = p_for_end;
      __asan_report_store8();
    }
    p_for_end->m_ptr = v12;
    while ( __for_begin.m_ptr != __for_end.m_ptr )
    {
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return(p_m_size);
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x8Eu,
          "boost::container::vec_iterator<Pointer, IsConst>::reference boost::container::vec_iterator<Pointer, IsConst>::"
          "operator*() const [with Pointer = std::pair<unsigned int, std::shared_ptr<GameserverConnect> >*; bool IsConst "
          "= false; boost::container::vec_iterator<Pointer, IsConst>::reference = std::pair<unsigned int, std::shared_ptr"
          "<GameserverConnect> >&]");
      }
      __in = __for_begin.m_ptr;
      _ = std::get<0ul,unsigned int,std::shared_ptr<GameserverConnect>>(__for_begin.m_ptr);
      conn = std::get<1ul,unsigned int,std::shared_ptr<GameserverConnect>>(__in);
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)conn;
      if ( !std::__shared_ptr<GameserverConnect,(__gnu_cxx::_Lock_policy)2>::operator bool(conn)
        || (p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn),
            common::minet::AClientConnect::stop((common::minet::AClientConnect *const)p_m_size)) )
      {
        common::milog::MiLogStream::create(
          &v46,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
          "nonBlockStop",
          368);
        common::milog::MiLogStream::operator()(&v46, "stop connect failed.");
        p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)&v46;
        common::milog::MiLogStream::~MiLogStream(&v46);
      }
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return(p_m_size);
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x98u,
          "boost::container::vec_iterator<Pointer, IsConst>& boost::container::vec_iterator<Pointer, IsConst>::operator++"
          "() [with Pointer = std::pair<unsigned int, std::shared_ptr<GameserverConnect> >*; bool IsConst = false]");
      }
      ++__for_begin.m_ptr;
    }
    std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v1 + 32));
  }
  result = 0;
  if ( v47 == (char *)v1 )
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

// Line 354: range 000000000C7D2A84-000000000C7D30B4
int __cdecl common::minet::AClientMgr<PathfindingserverConnect>::nonBlockStop(
        common::minet::AClientMgr<PathfindingserverConnect> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *p_m_size; // rdi
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v5; // rax
  __int64 m_start; // rax
  char *v7; // rax
  std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > *v8; // rdx
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v9; // rax
  __int64 v10; // rax
  char *v11; // rax
  std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > *v12; // rdx
  int result; // eax
  common::minet::AClientMgr<PathfindingserverConnect>::Status last_status; // [rsp+14h] [rbp-16Ch]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator __for_begin; // [rsp+18h] [rbp-168h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator __for_end; // [rsp+20h] [rbp-160h] BYREF
  char v19[8]; // [rsp+28h] [rbp-158h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *__for_range; // [rsp+30h] [rbp-150h]
  std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > *__in; // [rsp+38h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >::type *_; // [rsp+40h] [rbp-140h]
  std::tuple_element<1,std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >::type *conn; // [rsp+48h] [rbp-138h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v24; // [rsp+50h] [rbp-130h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v25; // [rsp+58h] [rbp-128h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v26; // [rsp+60h] [rbp-120h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v27; // [rsp+68h] [rbp-118h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v28; // [rsp+70h] [rbp-110h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_size; // [rsp+78h] [rbp-108h]
  char *v30; // [rsp+80h] [rbp-100h]
  __int64 v31; // [rsp+88h] [rbp-F8h]
  char *v32; // [rsp+90h] [rbp-F0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *p_for_end; // [rsp+98h] [rbp-E8h]
  char *v34; // [rsp+A0h] [rbp-E0h]
  char *v35; // [rsp+A8h] [rbp-D8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *p_conn_map; // [rsp+B0h] [rbp-D0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v37; // [rsp+B8h] [rbp-C8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v38; // [rsp+C0h] [rbp-C0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v39; // [rsp+C8h] [rbp-B8h]
  char *v40; // [rsp+D0h] [rbp-B0h]
  __int64 v41; // [rsp+D8h] [rbp-A8h]
  char *v42; // [rsp+E0h] [rbp-A0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *p_for_begin; // [rsp+E8h] [rbp-98h]
  char *v44; // [rsp+F0h] [rbp-90h]
  char *v45; // [rsp+F8h] [rbp-88h]
  common::milog::MiLogStream v46; // [rsp+100h] [rbp-80h] BYREF
  char v47[96]; // [rsp+120h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 9 rlock:362";
  *(_QWORD *)(v1 + 16) = common::minet::AClientMgr<PathfindingserverConnect>::nonBlockStop;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::milog::MiLogStream::create(
    &v46,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
    "nonBlockStop",
    356);
  common::milog::MiLogStream::operator()(&v46, "start to stop client");
  common::milog::MiLogStream::~MiLogStream(&v46);
  last_status = std::atomic<common::minet::AClientMgr<PathfindingserverConnect>::Status>::operator common::minet::AClientMgr<PathfindingserverConnect>::Status(&this->status_);
  std::atomic<common::minet::AClientMgr<PathfindingserverConnect>::Status>::operator=(&this->status_, STATUS_STOPPING_1);
  if ( last_status == STATUS_START_0 )
  {
    p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)(v1 + 32);
    std::shared_lock<std::shared_mutex>::shared_lock(
      (std::shared_lock<std::shared_mutex> *const)(v1 + 32),
      &this->shared_mu_);
    __for_range = &this->conn_map_;
    p_conn_map = &this->conn_map_;
    v37 = &this->conn_map_;
    v38 = &this->conn_map_;
    v39 = &this->conn_map_;
    v5 = &this->conn_map_;
    if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_ >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)&this->conn_map_;
      v5 = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *)__asan_report_load8(&this->conn_map_);
    }
    m_start = (__int64)v5->m_flat_tree.m_data.m_seq.m_holder.m_start;
    v40 = v19;
    v41 = m_start;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)v19;
      __asan_report_store8();
    }
    *(_QWORD *)v40 = v41;
    v42 = v19;
    p_for_begin = &__for_begin;
    v44 = v19;
    v45 = v19;
    v7 = v19;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)v19;
      v7 = (char *)__asan_report_load8(v19);
    }
    v8 = *(std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > **)v7;
    if ( *(_BYTE *)(((unsigned __int64)p_for_begin >> 3) + 0x7FFF8000) )
    {
      p_m_size = p_for_begin;
      __asan_report_store8();
    }
    p_for_begin->m_ptr = v8;
    v24 = __for_range;
    v25 = __for_range;
    v26 = __for_range;
    v27 = __for_range;
    v9 = __for_range;
    if ( *(_BYTE *)(((unsigned __int64)__for_range >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)__for_range;
      v9 = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *)__asan_report_load8(__for_range);
    }
    v28 = v9->m_flat_tree.m_data.m_seq.m_holder.m_start;
    if ( *(_BYTE *)(((unsigned __int64)&v26->m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)&v26->m_flat_tree.m_data.m_seq.m_holder.m_size;
      __asan_report_load8(&v26->m_flat_tree.m_data.m_seq.m_holder.m_size);
    }
    m_size = v26->m_flat_tree.m_data.m_seq.m_holder.m_size;
    if ( m_size )
      v10 = (__int64)&v28[m_size];
    else
      v10 = (__int64)v28;
    v30 = v19;
    v31 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)v19;
      __asan_report_store8();
    }
    *(_QWORD *)v30 = v31;
    v32 = v19;
    p_for_end = &__for_end;
    v34 = v19;
    v35 = v19;
    v11 = v19;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)v19;
      v11 = (char *)__asan_report_load8(v19);
    }
    v12 = *(std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > **)v11;
    if ( *(_BYTE *)(((unsigned __int64)p_for_end >> 3) + 0x7FFF8000) )
    {
      p_m_size = p_for_end;
      __asan_report_store8();
    }
    p_for_end->m_ptr = v12;
    while ( __for_begin.m_ptr != __for_end.m_ptr )
    {
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return(p_m_size);
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x8Eu,
          "boost::container::vec_iterator<Pointer, IsConst>::reference boost::container::vec_iterator<Pointer, IsConst>::"
          "operator*() const [with Pointer = std::pair<unsigned int, std::shared_ptr<PathfindingserverConnect> >*; bool I"
          "sConst = false; boost::container::vec_iterator<Pointer, IsConst>::reference = std::pair<unsigned int, std::sha"
          "red_ptr<PathfindingserverConnect> >&]");
      }
      __in = __for_begin.m_ptr;
      _ = std::get<0ul,unsigned int,std::shared_ptr<PathfindingserverConnect>>(__for_begin.m_ptr);
      conn = std::get<1ul,unsigned int,std::shared_ptr<PathfindingserverConnect>>(__in);
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)conn;
      if ( !std::__shared_ptr<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2>::operator bool(conn)
        || (p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn),
            common::minet::AClientConnect::stop((common::minet::AClientConnect *const)p_m_size)) )
      {
        common::milog::MiLogStream::create(
          &v46,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
          "nonBlockStop",
          368);
        common::milog::MiLogStream::operator()(&v46, "stop connect failed.");
        p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)&v46;
        common::milog::MiLogStream::~MiLogStream(&v46);
      }
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return(p_m_size);
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x98u,
          "boost::container::vec_iterator<Pointer, IsConst>& boost::container::vec_iterator<Pointer, IsConst>::operator++"
          "() [with Pointer = std::pair<unsigned int, std::shared_ptr<PathfindingserverConnect> >*; bool IsConst = false]");
      }
      ++__for_begin.m_ptr;
    }
    std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v1 + 32));
  }
  result = 0;
  if ( v47 == (char *)v1 )
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

// Line 354: range 000000000C7D3236-000000000C7D3866
int __cdecl common::minet::AClientMgr<TothemoonserverConnect>::nonBlockStop(
        common::minet::AClientMgr<TothemoonserverConnect> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *p_m_size; // rdi
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v5; // rax
  __int64 m_start; // rax
  char *v7; // rax
  std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > *v8; // rdx
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v9; // rax
  __int64 v10; // rax
  char *v11; // rax
  std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > *v12; // rdx
  int result; // eax
  common::minet::AClientMgr<TothemoonserverConnect>::Status last_status; // [rsp+14h] [rbp-16Ch]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator __for_begin; // [rsp+18h] [rbp-168h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator __for_end; // [rsp+20h] [rbp-160h] BYREF
  char v19[8]; // [rsp+28h] [rbp-158h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *__for_range; // [rsp+30h] [rbp-150h]
  std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > *__in; // [rsp+38h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >::type *_; // [rsp+40h] [rbp-140h]
  std::tuple_element<1,std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >::type *conn; // [rsp+48h] [rbp-138h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v24; // [rsp+50h] [rbp-130h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v25; // [rsp+58h] [rbp-128h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v26; // [rsp+60h] [rbp-120h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v27; // [rsp+68h] [rbp-118h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v28; // [rsp+70h] [rbp-110h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_size; // [rsp+78h] [rbp-108h]
  char *v30; // [rsp+80h] [rbp-100h]
  __int64 v31; // [rsp+88h] [rbp-F8h]
  char *v32; // [rsp+90h] [rbp-F0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *p_for_end; // [rsp+98h] [rbp-E8h]
  char *v34; // [rsp+A0h] [rbp-E0h]
  char *v35; // [rsp+A8h] [rbp-D8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *p_conn_map; // [rsp+B0h] [rbp-D0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v37; // [rsp+B8h] [rbp-C8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v38; // [rsp+C0h] [rbp-C0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v39; // [rsp+C8h] [rbp-B8h]
  char *v40; // [rsp+D0h] [rbp-B0h]
  __int64 v41; // [rsp+D8h] [rbp-A8h]
  char *v42; // [rsp+E0h] [rbp-A0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *p_for_begin; // [rsp+E8h] [rbp-98h]
  char *v44; // [rsp+F0h] [rbp-90h]
  char *v45; // [rsp+F8h] [rbp-88h]
  common::milog::MiLogStream v46; // [rsp+100h] [rbp-80h] BYREF
  char v47[96]; // [rsp+120h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 9 rlock:362";
  *(_QWORD *)(v1 + 16) = common::minet::AClientMgr<TothemoonserverConnect>::nonBlockStop;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::milog::MiLogStream::create(
    &v46,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
    "nonBlockStop",
    356);
  common::milog::MiLogStream::operator()(&v46, "start to stop client");
  common::milog::MiLogStream::~MiLogStream(&v46);
  last_status = std::atomic<common::minet::AClientMgr<TothemoonserverConnect>::Status>::operator common::minet::AClientMgr<TothemoonserverConnect>::Status(&this->status_);
  std::atomic<common::minet::AClientMgr<TothemoonserverConnect>::Status>::operator=(&this->status_, STATUS_STOPPING_2);
  if ( last_status == STATUS_START_1 )
  {
    p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)(v1 + 32);
    std::shared_lock<std::shared_mutex>::shared_lock(
      (std::shared_lock<std::shared_mutex> *const)(v1 + 32),
      &this->shared_mu_);
    __for_range = &this->conn_map_;
    p_conn_map = &this->conn_map_;
    v37 = &this->conn_map_;
    v38 = &this->conn_map_;
    v39 = &this->conn_map_;
    v5 = &this->conn_map_;
    if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_ >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)&this->conn_map_;
      v5 = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *)__asan_report_load8(&this->conn_map_);
    }
    m_start = (__int64)v5->m_flat_tree.m_data.m_seq.m_holder.m_start;
    v40 = v19;
    v41 = m_start;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)v19;
      __asan_report_store8();
    }
    *(_QWORD *)v40 = v41;
    v42 = v19;
    p_for_begin = &__for_begin;
    v44 = v19;
    v45 = v19;
    v7 = v19;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)v19;
      v7 = (char *)__asan_report_load8(v19);
    }
    v8 = *(std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > **)v7;
    if ( *(_BYTE *)(((unsigned __int64)p_for_begin >> 3) + 0x7FFF8000) )
    {
      p_m_size = p_for_begin;
      __asan_report_store8();
    }
    p_for_begin->m_ptr = v8;
    v24 = __for_range;
    v25 = __for_range;
    v26 = __for_range;
    v27 = __for_range;
    v9 = __for_range;
    if ( *(_BYTE *)(((unsigned __int64)__for_range >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)__for_range;
      v9 = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *)__asan_report_load8(__for_range);
    }
    v28 = v9->m_flat_tree.m_data.m_seq.m_holder.m_start;
    if ( *(_BYTE *)(((unsigned __int64)&v26->m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)&v26->m_flat_tree.m_data.m_seq.m_holder.m_size;
      __asan_report_load8(&v26->m_flat_tree.m_data.m_seq.m_holder.m_size);
    }
    m_size = v26->m_flat_tree.m_data.m_seq.m_holder.m_size;
    if ( m_size )
      v10 = (__int64)&v28[m_size];
    else
      v10 = (__int64)v28;
    v30 = v19;
    v31 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)v19;
      __asan_report_store8();
    }
    *(_QWORD *)v30 = v31;
    v32 = v19;
    p_for_end = &__for_end;
    v34 = v19;
    v35 = v19;
    v11 = v19;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)v19;
      v11 = (char *)__asan_report_load8(v19);
    }
    v12 = *(std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > **)v11;
    if ( *(_BYTE *)(((unsigned __int64)p_for_end >> 3) + 0x7FFF8000) )
    {
      p_m_size = p_for_end;
      __asan_report_store8();
    }
    p_for_end->m_ptr = v12;
    while ( __for_begin.m_ptr != __for_end.m_ptr )
    {
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return(p_m_size);
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x8Eu,
          "boost::container::vec_iterator<Pointer, IsConst>::reference boost::container::vec_iterator<Pointer, IsConst>::"
          "operator*() const [with Pointer = std::pair<unsigned int, std::shared_ptr<TothemoonserverConnect> >*; bool IsC"
          "onst = false; boost::container::vec_iterator<Pointer, IsConst>::reference = std::pair<unsigned int, std::share"
          "d_ptr<TothemoonserverConnect> >&]");
      }
      __in = __for_begin.m_ptr;
      _ = std::get<0ul,unsigned int,std::shared_ptr<TothemoonserverConnect>>(__for_begin.m_ptr);
      conn = std::get<1ul,unsigned int,std::shared_ptr<TothemoonserverConnect>>(__in);
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)conn;
      if ( !std::__shared_ptr<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2>::operator bool(conn)
        || (p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn),
            common::minet::AClientConnect::stop((common::minet::AClientConnect *const)p_m_size)) )
      {
        common::milog::MiLogStream::create(
          &v46,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
          "nonBlockStop",
          368);
        common::milog::MiLogStream::operator()(&v46, "stop connect failed.");
        p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)&v46;
        common::milog::MiLogStream::~MiLogStream(&v46);
      }
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return(p_m_size);
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x98u,
          "boost::container::vec_iterator<Pointer, IsConst>& boost::container::vec_iterator<Pointer, IsConst>::operator++"
          "() [with Pointer = std::pair<unsigned int, std::shared_ptr<TothemoonserverConnect> >*; bool IsConst = false]");
      }
      ++__for_begin.m_ptr;
    }
    std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v1 + 32));
  }
  result = 0;
  if ( v47 == (char *)v1 )
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

// Line 380: range 000000000C85F54C-000000000C85F6CA
int __cdecl common::minet::AClientMgr<DispatchConnect>::join(common::minet::AClientMgr<DispatchConnect> *const this)
{
  uint32_t i; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v3; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
    "join",
    382);
  common::milog::MiLogStream::operator()(&v3, "wait for all client stopped ...");
  common::milog::MiLogStream::~MiLogStream(&v3);
  for ( i = 0; ; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->thread_num_);
    }
    if ( this->thread_num_ <= i )
      break;
    boost::asio::io_context::stop(&this->ioc_arr_[i]);
  }
  boost::thread_group::join_all(&this->ioc_thread_group_);
  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
    "join",
    388);
  common::milog::MiLogStream::operator()(&v3, "stop client succ");
  common::milog::MiLogStream::~MiLogStream(&v3);
  return 0;
};

// Line 380: range 000000000C7D2904-000000000C7D2A82
int __cdecl common::minet::AClientMgr<GameserverConnect>::join(
        common::minet::AClientMgr<GameserverConnect> *const this)
{
  uint32_t i; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v3; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
    "join",
    382);
  common::milog::MiLogStream::operator()(&v3, "wait for all client stopped ...");
  common::milog::MiLogStream::~MiLogStream(&v3);
  for ( i = 0; ; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->thread_num_);
    }
    if ( this->thread_num_ <= i )
      break;
    boost::asio::io_context::stop(&this->ioc_arr_[i]);
  }
  boost::thread_group::join_all(&this->ioc_thread_group_);
  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
    "join",
    388);
  common::milog::MiLogStream::operator()(&v3, "stop client succ");
  common::milog::MiLogStream::~MiLogStream(&v3);
  return 0;
};

// Line 380: range 000000000C7D30B6-000000000C7D3234
int __cdecl common::minet::AClientMgr<PathfindingserverConnect>::join(
        common::minet::AClientMgr<PathfindingserverConnect> *const this)
{
  uint32_t i; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v3; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
    "join",
    382);
  common::milog::MiLogStream::operator()(&v3, "wait for all client stopped ...");
  common::milog::MiLogStream::~MiLogStream(&v3);
  for ( i = 0; ; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->thread_num_);
    }
    if ( this->thread_num_ <= i )
      break;
    boost::asio::io_context::stop(&this->ioc_arr_[i]);
  }
  boost::thread_group::join_all(&this->ioc_thread_group_);
  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
    "join",
    388);
  common::milog::MiLogStream::operator()(&v3, "stop client succ");
  common::milog::MiLogStream::~MiLogStream(&v3);
  return 0;
};

// Line 380: range 000000000C7D3868-000000000C7D39E6
int __cdecl common::minet::AClientMgr<TothemoonserverConnect>::join(
        common::minet::AClientMgr<TothemoonserverConnect> *const this)
{
  uint32_t i; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v3; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
    "join",
    382);
  common::milog::MiLogStream::operator()(&v3, "wait for all client stopped ...");
  common::milog::MiLogStream::~MiLogStream(&v3);
  for ( i = 0; ; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->thread_num_);
    }
    if ( this->thread_num_ <= i )
      break;
    boost::asio::io_context::stop(&this->ioc_arr_[i]);
  }
  boost::thread_group::join_all(&this->ioc_thread_group_);
  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
    "join",
    388);
  common::milog::MiLogStream::operator()(&v3, "stop client succ");
  common::milog::MiLogStream::~MiLogStream(&v3);
  return 0;
};

// Line 396: range 000000000C85F6CC-000000000C85F799
int __cdecl common::minet::AClientMgr<DispatchConnect>::blockStop(
        common::minet::AClientMgr<DispatchConnect> *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v1 = (unsigned __int64)(this->_vptr_AClientBase + 4);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(this->_vptr_AClientBase + 4);
  if ( (*(unsigned int (__fastcall **)(common::minet::AClientMgr<DispatchConnect> *const))v1)(this) )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v3 = (unsigned __int64)(this->_vptr_AClientBase + 5);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(this->_vptr_AClientBase + 5);
  return (*(__int64 (__fastcall **)(common::minet::AClientMgr<DispatchConnect> *const))v3)(this);
};

// Line 396: range 000000000C7BBFFE-000000000C7BC0CB
int __cdecl common::minet::AClientMgr<GameserverConnect>::blockStop(
        common::minet::AClientMgr<GameserverConnect> *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v1 = (unsigned __int64)(this->_vptr_AClientBase + 4);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(this->_vptr_AClientBase + 4);
  if ( (*(unsigned int (__fastcall **)(common::minet::AClientMgr<GameserverConnect> *const))v1)(this) )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v3 = (unsigned __int64)(this->_vptr_AClientBase + 5);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(this->_vptr_AClientBase + 5);
  return (*(__int64 (__fastcall **)(common::minet::AClientMgr<GameserverConnect> *const))v3)(this);
};

// Line 396: range 000000000C7BC0CC-000000000C7BC199
int __cdecl common::minet::AClientMgr<PathfindingserverConnect>::blockStop(
        common::minet::AClientMgr<PathfindingserverConnect> *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v1 = (unsigned __int64)(this->_vptr_AClientBase + 4);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(this->_vptr_AClientBase + 4);
  if ( (*(unsigned int (__fastcall **)(common::minet::AClientMgr<PathfindingserverConnect> *const))v1)(this) )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v3 = (unsigned __int64)(this->_vptr_AClientBase + 5);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(this->_vptr_AClientBase + 5);
  return (*(__int64 (__fastcall **)(common::minet::AClientMgr<PathfindingserverConnect> *const))v3)(this);
};

// Line 396: range 000000000C7BC19A-000000000C7BC267
int __cdecl common::minet::AClientMgr<TothemoonserverConnect>::blockStop(
        common::minet::AClientMgr<TothemoonserverConnect> *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v1 = (unsigned __int64)(this->_vptr_AClientBase + 4);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(this->_vptr_AClientBase + 4);
  if ( (*(unsigned int (__fastcall **)(common::minet::AClientMgr<TothemoonserverConnect> *const))v1)(this) )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v3 = (unsigned __int64)(this->_vptr_AClientBase + 5);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(this->_vptr_AClientBase + 5);
  return (*(__int64 (__fastcall **)(common::minet::AClientMgr<TothemoonserverConnect> *const))v3)(this);
};

// Line 410: range 000000000C867132-000000000C8671F0
bool __cdecl common::minet::AClientMgr<DispatchConnect>::isValidConnect(
        common::minet::AClientMgr<DispatchConnect> *const this,
        common::minet::AClientMgr<DispatchConnect>::ConnectPtr *p_connect_ptr)
{
  std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx

  if ( std::operator==<DispatchConnect>(0LL, p_connect_ptr) )
    return 0;
  v3 = std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_connect_ptr);
  if ( !common::minet::AClientConnect::isConnect(v3) )
    return 0;
  v4 = (unsigned __int64)std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_connect_ptr);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(v4);
  v5 = *(_QWORD *)v4 + 64LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)v4 + 64LL);
  return (*(unsigned __int8 (__fastcall **)(unsigned __int64))v5)(v4) == 0;
};

// Line 410: range 000000000C7D4640-000000000C7D46FE
bool __cdecl common::minet::AClientMgr<GameserverConnect>::isValidConnect(
        common::minet::AClientMgr<GameserverConnect> *const this,
        common::minet::AClientMgr<GameserverConnect>::ConnectPtr *p_connect_ptr)
{
  std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx

  if ( std::operator==<GameserverConnect>(0LL, p_connect_ptr) )
    return 0;
  v3 = std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_connect_ptr);
  if ( !common::minet::AClientConnect::isConnect(v3) )
    return 0;
  v4 = (unsigned __int64)std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_connect_ptr);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(v4);
  v5 = *(_QWORD *)v4 + 64LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)v4 + 64LL);
  return (*(unsigned __int8 (__fastcall **)(unsigned __int64))v5)(v4) == 0;
};

// Line 410: range 000000000C7D4700-000000000C7D47BE
bool __cdecl common::minet::AClientMgr<PathfindingserverConnect>::isValidConnect(
        common::minet::AClientMgr<PathfindingserverConnect> *const this,
        common::minet::AClientMgr<PathfindingserverConnect>::ConnectPtr *p_connect_ptr)
{
  std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx

  if ( std::operator==<PathfindingserverConnect>(0LL, p_connect_ptr) )
    return 0;
  v3 = std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_connect_ptr);
  if ( !common::minet::AClientConnect::isConnect(v3) )
    return 0;
  v4 = (unsigned __int64)std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_connect_ptr);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(v4);
  v5 = *(_QWORD *)v4 + 64LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)v4 + 64LL);
  return (*(unsigned __int8 (__fastcall **)(unsigned __int64))v5)(v4) == 0;
};

// Line 410: range 000000000C86432C-000000000C8643EA
bool __cdecl common::minet::AClientMgr<TothemoonserverConnect>::isValidConnect(
        common::minet::AClientMgr<TothemoonserverConnect> *const this,
        common::minet::AClientMgr<TothemoonserverConnect>::ConnectPtr *p_connect_ptr)
{
  std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx

  if ( std::operator==<TothemoonserverConnect>(0LL, p_connect_ptr) )
    return 0;
  v3 = std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_connect_ptr);
  if ( !common::minet::AClientConnect::isConnect(v3) )
    return 0;
  v4 = (unsigned __int64)std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_connect_ptr);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(v4);
  v5 = *(_QWORD *)v4 + 64LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)v4 + 64LL);
  return (*(unsigned __int8 (__fastcall **)(unsigned __int64))v5)(v4) == 0;
};

// Line 430: range 000000000C85F7BE-000000000C85F8FD
uint32_t __cdecl common::minet::AClientMgr<DispatchConnect>::getConnectNum(
        common::minet::AClientMgr<DispatchConnect> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t m_size; // r15d
  uint32_t result; // eax
  char v6[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 9 rlock:432";
  *(_QWORD *)(v1 + 16) = common::minet::AClientMgr<DispatchConnect>::getConnectNum;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::shared_lock<std::shared_mutex>::shared_lock(
    (std::shared_lock<std::shared_mutex> *const)(v1 + 32),
    &this->shared_mu_);
  if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
  m_size = this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size;
  std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v1 + 32));
  result = m_size;
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

// Line 430: range 000000000C7BBE24-000000000C7BBF63
uint32_t __cdecl common::minet::AClientMgr<GameserverConnect>::getConnectNum(
        common::minet::AClientMgr<GameserverConnect> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t m_size; // r15d
  uint32_t result; // eax
  char v6[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 9 rlock:432";
  *(_QWORD *)(v1 + 16) = common::minet::AClientMgr<GameserverConnect>::getConnectNum;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::shared_lock<std::shared_mutex>::shared_lock(
    (std::shared_lock<std::shared_mutex> *const)(v1 + 32),
    &this->shared_mu_);
  if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
  m_size = this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size;
  std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v1 + 32));
  result = m_size;
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

// Line 430: range 000000000C859444-000000000C859583
uint32_t __cdecl common::minet::AClientMgr<PathfindingserverConnect>::getConnectNum(
        common::minet::AClientMgr<PathfindingserverConnect> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t m_size; // r15d
  uint32_t result; // eax
  char v6[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 9 rlock:432";
  *(_QWORD *)(v1 + 16) = common::minet::AClientMgr<PathfindingserverConnect>::getConnectNum;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::shared_lock<std::shared_mutex>::shared_lock(
    (std::shared_lock<std::shared_mutex> *const)(v1 + 32),
    &this->shared_mu_);
  if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
  m_size = this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size;
  std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v1 + 32));
  result = m_size;
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

// Line 430: range 000000000C8580E6-000000000C858225
uint32_t __cdecl common::minet::AClientMgr<TothemoonserverConnect>::getConnectNum(
        common::minet::AClientMgr<TothemoonserverConnect> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t m_size; // r15d
  uint32_t result; // eax
  char v6[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 9 rlock:432";
  *(_QWORD *)(v1 + 16) = common::minet::AClientMgr<TothemoonserverConnect>::getConnectNum;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::shared_lock<std::shared_mutex>::shared_lock(
    (std::shared_lock<std::shared_mutex> *const)(v1 + 32),
    &this->shared_mu_);
  if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
  m_size = this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size;
  std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v1 + 32));
  result = m_size;
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

// Line 440: range 000000000C85F8FE-000000000C85FE70
uint32_t __cdecl common::minet::AClientMgr<DispatchConnect>::getValidConnectNum(
        common::minet::AClientMgr<DispatchConnect> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t v4; // r14d
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *p_m_size; // rdi
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v6; // rax
  __int64 m_start; // rax
  char *v8; // rax
  std::pair<unsigned int,std::shared_ptr<DispatchConnect> > *v9; // rdx
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v10; // rax
  __int64 v11; // rax
  char *v12; // rax
  std::pair<unsigned int,std::shared_ptr<DispatchConnect> > *v13; // rdx
  bool isValidConnect; // r14
  uint32_t result; // eax
  uint32_t res; // [rsp+14h] [rbp-16Ch]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator __for_begin; // [rsp+18h] [rbp-168h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator __for_end; // [rsp+20h] [rbp-160h] BYREF
  char v20[8]; // [rsp+28h] [rbp-158h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *__for_range; // [rsp+30h] [rbp-150h]
  std::pair<unsigned int,std::shared_ptr<DispatchConnect> > *__in; // [rsp+38h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int,std::shared_ptr<DispatchConnect> > >::type *_; // [rsp+40h] [rbp-140h]
  std::tuple_element<1,std::pair<unsigned int,std::shared_ptr<DispatchConnect> > >::type *conn; // [rsp+48h] [rbp-138h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v25; // [rsp+50h] [rbp-130h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v26; // [rsp+58h] [rbp-128h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v27; // [rsp+60h] [rbp-120h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v28; // [rsp+68h] [rbp-118h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v29; // [rsp+70h] [rbp-110h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_size; // [rsp+78h] [rbp-108h]
  char *v31; // [rsp+80h] [rbp-100h]
  __int64 v32; // [rsp+88h] [rbp-F8h]
  char *v33; // [rsp+90h] [rbp-F0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *p_for_end; // [rsp+98h] [rbp-E8h]
  char *v35; // [rsp+A0h] [rbp-E0h]
  char *v36; // [rsp+A8h] [rbp-D8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *p_conn_map; // [rsp+B0h] [rbp-D0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v38; // [rsp+B8h] [rbp-C8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v39; // [rsp+C0h] [rbp-C0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v40; // [rsp+C8h] [rbp-B8h]
  char *v41; // [rsp+D0h] [rbp-B0h]
  __int64 v42; // [rsp+D8h] [rbp-A8h]
  char *v43; // [rsp+E0h] [rbp-A0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *p_for_begin; // [rsp+E8h] [rbp-98h]
  char *v45; // [rsp+F0h] [rbp-90h]
  char *v46; // [rsp+F8h] [rbp-88h]
  std::shared_ptr<DispatchConnect> p_connect_ptr; // [rsp+100h] [rbp-80h] BYREF
  char v48[112]; // [rsp+110h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 9 rlock:447";
  *(_QWORD *)(v1 + 16) = common::minet::AClientMgr<DispatchConnect>::getValidConnectNum;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( std::atomic<common::minet::AClientMgr<DispatchConnect>::Status>::operator common::minet::AClientMgr<DispatchConnect>::Status(&this->status_) == STATUS_START_2 )
  {
    res = 0;
    p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)(v1 + 32);
    std::shared_lock<std::shared_mutex>::shared_lock(
      (std::shared_lock<std::shared_mutex> *const)(v1 + 32),
      &this->shared_mu_);
    __for_range = &this->conn_map_;
    p_conn_map = &this->conn_map_;
    v38 = &this->conn_map_;
    v39 = &this->conn_map_;
    v40 = &this->conn_map_;
    v6 = &this->conn_map_;
    if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_ >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)&this->conn_map_;
      v6 = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *)__asan_report_load8(&this->conn_map_);
    }
    m_start = (__int64)v6->m_flat_tree.m_data.m_seq.m_holder.m_start;
    v41 = v20;
    v42 = m_start;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)v20;
      __asan_report_store8();
    }
    *(_QWORD *)v41 = v42;
    v43 = v20;
    p_for_begin = &__for_begin;
    v45 = v20;
    v46 = v20;
    v8 = v20;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)v20;
      v8 = (char *)__asan_report_load8(v20);
    }
    v9 = *(std::pair<unsigned int,std::shared_ptr<DispatchConnect> > **)v8;
    if ( *(_BYTE *)(((unsigned __int64)p_for_begin >> 3) + 0x7FFF8000) )
    {
      p_m_size = p_for_begin;
      __asan_report_store8();
    }
    p_for_begin->m_ptr = v9;
    v25 = __for_range;
    v26 = __for_range;
    v27 = __for_range;
    v28 = __for_range;
    v10 = __for_range;
    if ( *(_BYTE *)(((unsigned __int64)__for_range >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)__for_range;
      v10 = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *)__asan_report_load8(__for_range);
    }
    v29 = v10->m_flat_tree.m_data.m_seq.m_holder.m_start;
    if ( *(_BYTE *)(((unsigned __int64)&v27->m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)&v27->m_flat_tree.m_data.m_seq.m_holder.m_size;
      __asan_report_load8(&v27->m_flat_tree.m_data.m_seq.m_holder.m_size);
    }
    m_size = v27->m_flat_tree.m_data.m_seq.m_holder.m_size;
    if ( m_size )
      v11 = (__int64)&v29[m_size];
    else
      v11 = (__int64)v29;
    v31 = v20;
    v32 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)v20;
      __asan_report_store8();
    }
    *(_QWORD *)v31 = v32;
    v33 = v20;
    p_for_end = &__for_end;
    v35 = v20;
    v36 = v20;
    v12 = v20;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)v20;
      v12 = (char *)__asan_report_load8(v20);
    }
    v13 = *(std::pair<unsigned int,std::shared_ptr<DispatchConnect> > **)v12;
    if ( *(_BYTE *)(((unsigned __int64)p_for_end >> 3) + 0x7FFF8000) )
    {
      p_m_size = p_for_end;
      __asan_report_store8();
    }
    p_for_end->m_ptr = v13;
    while ( __for_begin.m_ptr != __for_end.m_ptr )
    {
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return(p_m_size);
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x8Eu,
          "boost::container::vec_iterator<Pointer, IsConst>::reference boost::container::vec_iterator<Pointer, IsConst>::"
          "operator*() const [with Pointer = std::pair<unsigned int, std::shared_ptr<DispatchConnect> >*; bool IsConst = "
          "false; boost::container::vec_iterator<Pointer, IsConst>::reference = std::pair<unsigned int, std::shared_ptr<D"
          "ispatchConnect> >&]");
      }
      __in = __for_begin.m_ptr;
      _ = std::get<0ul,unsigned int,std::shared_ptr<DispatchConnect>>(__for_begin.m_ptr);
      conn = std::get<1ul,unsigned int,std::shared_ptr<DispatchConnect>>(__in);
      std::shared_ptr<DispatchConnect>::shared_ptr(&p_connect_ptr, conn);
      isValidConnect = common::minet::AClientMgr<DispatchConnect>::isValidConnect(this, &p_connect_ptr);
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)&p_connect_ptr;
      std::shared_ptr<DispatchConnect>::~shared_ptr(&p_connect_ptr);
      if ( isValidConnect )
        ++res;
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return(&p_connect_ptr);
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x98u,
          "boost::container::vec_iterator<Pointer, IsConst>& boost::container::vec_iterator<Pointer, IsConst>::operator++"
          "() [with Pointer = std::pair<unsigned int, std::shared_ptr<DispatchConnect> >*; bool IsConst = false]");
      }
      ++__for_begin.m_ptr;
    }
    v4 = res;
    std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v1 + 32));
  }
  else
  {
    v4 = 0;
  }
  result = v4;
  if ( v48 == (char *)v1 )
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

// Line 440: range 000000000C7BDC8E-000000000C7BE200
uint32_t __cdecl common::minet::AClientMgr<GameserverConnect>::getValidConnectNum(
        common::minet::AClientMgr<GameserverConnect> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t v4; // r14d
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *p_m_size; // rdi
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v6; // rax
  __int64 m_start; // rax
  char *v8; // rax
  std::pair<unsigned int,std::shared_ptr<GameserverConnect> > *v9; // rdx
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v10; // rax
  __int64 v11; // rax
  char *v12; // rax
  std::pair<unsigned int,std::shared_ptr<GameserverConnect> > *v13; // rdx
  bool isValidConnect; // r14
  uint32_t result; // eax
  uint32_t res; // [rsp+14h] [rbp-16Ch]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator __for_begin; // [rsp+18h] [rbp-168h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator __for_end; // [rsp+20h] [rbp-160h] BYREF
  char v20[8]; // [rsp+28h] [rbp-158h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *__for_range; // [rsp+30h] [rbp-150h]
  std::pair<unsigned int,std::shared_ptr<GameserverConnect> > *__in; // [rsp+38h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int,std::shared_ptr<GameserverConnect> > >::type *_; // [rsp+40h] [rbp-140h]
  std::tuple_element<1,std::pair<unsigned int,std::shared_ptr<GameserverConnect> > >::type *conn; // [rsp+48h] [rbp-138h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v25; // [rsp+50h] [rbp-130h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v26; // [rsp+58h] [rbp-128h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v27; // [rsp+60h] [rbp-120h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v28; // [rsp+68h] [rbp-118h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v29; // [rsp+70h] [rbp-110h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_size; // [rsp+78h] [rbp-108h]
  char *v31; // [rsp+80h] [rbp-100h]
  __int64 v32; // [rsp+88h] [rbp-F8h]
  char *v33; // [rsp+90h] [rbp-F0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *p_for_end; // [rsp+98h] [rbp-E8h]
  char *v35; // [rsp+A0h] [rbp-E0h]
  char *v36; // [rsp+A8h] [rbp-D8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *p_conn_map; // [rsp+B0h] [rbp-D0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v38; // [rsp+B8h] [rbp-C8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v39; // [rsp+C0h] [rbp-C0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v40; // [rsp+C8h] [rbp-B8h]
  char *v41; // [rsp+D0h] [rbp-B0h]
  __int64 v42; // [rsp+D8h] [rbp-A8h]
  char *v43; // [rsp+E0h] [rbp-A0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *p_for_begin; // [rsp+E8h] [rbp-98h]
  char *v45; // [rsp+F0h] [rbp-90h]
  char *v46; // [rsp+F8h] [rbp-88h]
  std::shared_ptr<GameserverConnect> p_connect_ptr; // [rsp+100h] [rbp-80h] BYREF
  char v48[112]; // [rsp+110h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 9 rlock:447";
  *(_QWORD *)(v1 + 16) = common::minet::AClientMgr<GameserverConnect>::getValidConnectNum;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( std::atomic<common::minet::AClientMgr<GameserverConnect>::Status>::operator common::minet::AClientMgr<GameserverConnect>::Status(&this->status_) == STATUS_START )
  {
    res = 0;
    p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)(v1 + 32);
    std::shared_lock<std::shared_mutex>::shared_lock(
      (std::shared_lock<std::shared_mutex> *const)(v1 + 32),
      &this->shared_mu_);
    __for_range = &this->conn_map_;
    p_conn_map = &this->conn_map_;
    v38 = &this->conn_map_;
    v39 = &this->conn_map_;
    v40 = &this->conn_map_;
    v6 = &this->conn_map_;
    if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_ >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)&this->conn_map_;
      v6 = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *)__asan_report_load8(&this->conn_map_);
    }
    m_start = (__int64)v6->m_flat_tree.m_data.m_seq.m_holder.m_start;
    v41 = v20;
    v42 = m_start;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)v20;
      __asan_report_store8();
    }
    *(_QWORD *)v41 = v42;
    v43 = v20;
    p_for_begin = &__for_begin;
    v45 = v20;
    v46 = v20;
    v8 = v20;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)v20;
      v8 = (char *)__asan_report_load8(v20);
    }
    v9 = *(std::pair<unsigned int,std::shared_ptr<GameserverConnect> > **)v8;
    if ( *(_BYTE *)(((unsigned __int64)p_for_begin >> 3) + 0x7FFF8000) )
    {
      p_m_size = p_for_begin;
      __asan_report_store8();
    }
    p_for_begin->m_ptr = v9;
    v25 = __for_range;
    v26 = __for_range;
    v27 = __for_range;
    v28 = __for_range;
    v10 = __for_range;
    if ( *(_BYTE *)(((unsigned __int64)__for_range >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)__for_range;
      v10 = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *)__asan_report_load8(__for_range);
    }
    v29 = v10->m_flat_tree.m_data.m_seq.m_holder.m_start;
    if ( *(_BYTE *)(((unsigned __int64)&v27->m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)&v27->m_flat_tree.m_data.m_seq.m_holder.m_size;
      __asan_report_load8(&v27->m_flat_tree.m_data.m_seq.m_holder.m_size);
    }
    m_size = v27->m_flat_tree.m_data.m_seq.m_holder.m_size;
    if ( m_size )
      v11 = (__int64)&v29[m_size];
    else
      v11 = (__int64)v29;
    v31 = v20;
    v32 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)v20;
      __asan_report_store8();
    }
    *(_QWORD *)v31 = v32;
    v33 = v20;
    p_for_end = &__for_end;
    v35 = v20;
    v36 = v20;
    v12 = v20;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)v20;
      v12 = (char *)__asan_report_load8(v20);
    }
    v13 = *(std::pair<unsigned int,std::shared_ptr<GameserverConnect> > **)v12;
    if ( *(_BYTE *)(((unsigned __int64)p_for_end >> 3) + 0x7FFF8000) )
    {
      p_m_size = p_for_end;
      __asan_report_store8();
    }
    p_for_end->m_ptr = v13;
    while ( __for_begin.m_ptr != __for_end.m_ptr )
    {
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return(p_m_size);
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x8Eu,
          "boost::container::vec_iterator<Pointer, IsConst>::reference boost::container::vec_iterator<Pointer, IsConst>::"
          "operator*() const [with Pointer = std::pair<unsigned int, std::shared_ptr<GameserverConnect> >*; bool IsConst "
          "= false; boost::container::vec_iterator<Pointer, IsConst>::reference = std::pair<unsigned int, std::shared_ptr"
          "<GameserverConnect> >&]");
      }
      __in = __for_begin.m_ptr;
      _ = std::get<0ul,unsigned int,std::shared_ptr<GameserverConnect>>(__for_begin.m_ptr);
      conn = std::get<1ul,unsigned int,std::shared_ptr<GameserverConnect>>(__in);
      std::shared_ptr<GameserverConnect>::shared_ptr(&p_connect_ptr, conn);
      isValidConnect = common::minet::AClientMgr<GameserverConnect>::isValidConnect(this, &p_connect_ptr);
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)&p_connect_ptr;
      std::shared_ptr<GameserverConnect>::~shared_ptr(&p_connect_ptr);
      if ( isValidConnect )
        ++res;
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return(&p_connect_ptr);
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x98u,
          "boost::container::vec_iterator<Pointer, IsConst>& boost::container::vec_iterator<Pointer, IsConst>::operator++"
          "() [with Pointer = std::pair<unsigned int, std::shared_ptr<GameserverConnect> >*; bool IsConst = false]");
      }
      ++__for_begin.m_ptr;
    }
    v4 = res;
    std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v1 + 32));
  }
  else
  {
    v4 = 0;
  }
  result = v4;
  if ( v48 == (char *)v1 )
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

// Line 440: range 000000000C7BE27A-000000000C7BE7EC
uint32_t __cdecl common::minet::AClientMgr<PathfindingserverConnect>::getValidConnectNum(
        common::minet::AClientMgr<PathfindingserverConnect> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t v4; // r14d
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *p_m_size; // rdi
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v6; // rax
  __int64 m_start; // rax
  char *v8; // rax
  std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > *v9; // rdx
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v10; // rax
  __int64 v11; // rax
  char *v12; // rax
  std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > *v13; // rdx
  bool isValidConnect; // r14
  uint32_t result; // eax
  uint32_t res; // [rsp+14h] [rbp-16Ch]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator __for_begin; // [rsp+18h] [rbp-168h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator __for_end; // [rsp+20h] [rbp-160h] BYREF
  char v20[8]; // [rsp+28h] [rbp-158h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *__for_range; // [rsp+30h] [rbp-150h]
  std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > *__in; // [rsp+38h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >::type *_; // [rsp+40h] [rbp-140h]
  std::tuple_element<1,std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >::type *conn; // [rsp+48h] [rbp-138h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v25; // [rsp+50h] [rbp-130h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v26; // [rsp+58h] [rbp-128h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v27; // [rsp+60h] [rbp-120h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v28; // [rsp+68h] [rbp-118h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v29; // [rsp+70h] [rbp-110h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_size; // [rsp+78h] [rbp-108h]
  char *v31; // [rsp+80h] [rbp-100h]
  __int64 v32; // [rsp+88h] [rbp-F8h]
  char *v33; // [rsp+90h] [rbp-F0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *p_for_end; // [rsp+98h] [rbp-E8h]
  char *v35; // [rsp+A0h] [rbp-E0h]
  char *v36; // [rsp+A8h] [rbp-D8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *p_conn_map; // [rsp+B0h] [rbp-D0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v38; // [rsp+B8h] [rbp-C8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v39; // [rsp+C0h] [rbp-C0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v40; // [rsp+C8h] [rbp-B8h]
  char *v41; // [rsp+D0h] [rbp-B0h]
  __int64 v42; // [rsp+D8h] [rbp-A8h]
  char *v43; // [rsp+E0h] [rbp-A0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *p_for_begin; // [rsp+E8h] [rbp-98h]
  char *v45; // [rsp+F0h] [rbp-90h]
  char *v46; // [rsp+F8h] [rbp-88h]
  std::shared_ptr<PathfindingserverConnect> p_connect_ptr; // [rsp+100h] [rbp-80h] BYREF
  char v48[112]; // [rsp+110h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 9 rlock:447";
  *(_QWORD *)(v1 + 16) = common::minet::AClientMgr<PathfindingserverConnect>::getValidConnectNum;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( std::atomic<common::minet::AClientMgr<PathfindingserverConnect>::Status>::operator common::minet::AClientMgr<PathfindingserverConnect>::Status(&this->status_) == STATUS_START_0 )
  {
    res = 0;
    p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)(v1 + 32);
    std::shared_lock<std::shared_mutex>::shared_lock(
      (std::shared_lock<std::shared_mutex> *const)(v1 + 32),
      &this->shared_mu_);
    __for_range = &this->conn_map_;
    p_conn_map = &this->conn_map_;
    v38 = &this->conn_map_;
    v39 = &this->conn_map_;
    v40 = &this->conn_map_;
    v6 = &this->conn_map_;
    if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_ >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)&this->conn_map_;
      v6 = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *)__asan_report_load8(&this->conn_map_);
    }
    m_start = (__int64)v6->m_flat_tree.m_data.m_seq.m_holder.m_start;
    v41 = v20;
    v42 = m_start;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)v20;
      __asan_report_store8();
    }
    *(_QWORD *)v41 = v42;
    v43 = v20;
    p_for_begin = &__for_begin;
    v45 = v20;
    v46 = v20;
    v8 = v20;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)v20;
      v8 = (char *)__asan_report_load8(v20);
    }
    v9 = *(std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > **)v8;
    if ( *(_BYTE *)(((unsigned __int64)p_for_begin >> 3) + 0x7FFF8000) )
    {
      p_m_size = p_for_begin;
      __asan_report_store8();
    }
    p_for_begin->m_ptr = v9;
    v25 = __for_range;
    v26 = __for_range;
    v27 = __for_range;
    v28 = __for_range;
    v10 = __for_range;
    if ( *(_BYTE *)(((unsigned __int64)__for_range >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)__for_range;
      v10 = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *)__asan_report_load8(__for_range);
    }
    v29 = v10->m_flat_tree.m_data.m_seq.m_holder.m_start;
    if ( *(_BYTE *)(((unsigned __int64)&v27->m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)&v27->m_flat_tree.m_data.m_seq.m_holder.m_size;
      __asan_report_load8(&v27->m_flat_tree.m_data.m_seq.m_holder.m_size);
    }
    m_size = v27->m_flat_tree.m_data.m_seq.m_holder.m_size;
    if ( m_size )
      v11 = (__int64)&v29[m_size];
    else
      v11 = (__int64)v29;
    v31 = v20;
    v32 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)v20;
      __asan_report_store8();
    }
    *(_QWORD *)v31 = v32;
    v33 = v20;
    p_for_end = &__for_end;
    v35 = v20;
    v36 = v20;
    v12 = v20;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)v20;
      v12 = (char *)__asan_report_load8(v20);
    }
    v13 = *(std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > **)v12;
    if ( *(_BYTE *)(((unsigned __int64)p_for_end >> 3) + 0x7FFF8000) )
    {
      p_m_size = p_for_end;
      __asan_report_store8();
    }
    p_for_end->m_ptr = v13;
    while ( __for_begin.m_ptr != __for_end.m_ptr )
    {
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return(p_m_size);
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x8Eu,
          "boost::container::vec_iterator<Pointer, IsConst>::reference boost::container::vec_iterator<Pointer, IsConst>::"
          "operator*() const [with Pointer = std::pair<unsigned int, std::shared_ptr<PathfindingserverConnect> >*; bool I"
          "sConst = false; boost::container::vec_iterator<Pointer, IsConst>::reference = std::pair<unsigned int, std::sha"
          "red_ptr<PathfindingserverConnect> >&]");
      }
      __in = __for_begin.m_ptr;
      _ = std::get<0ul,unsigned int,std::shared_ptr<PathfindingserverConnect>>(__for_begin.m_ptr);
      conn = std::get<1ul,unsigned int,std::shared_ptr<PathfindingserverConnect>>(__in);
      std::shared_ptr<PathfindingserverConnect>::shared_ptr(&p_connect_ptr, conn);
      isValidConnect = common::minet::AClientMgr<PathfindingserverConnect>::isValidConnect(this, &p_connect_ptr);
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)&p_connect_ptr;
      std::shared_ptr<PathfindingserverConnect>::~shared_ptr(&p_connect_ptr);
      if ( isValidConnect )
        ++res;
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return(&p_connect_ptr);
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x98u,
          "boost::container::vec_iterator<Pointer, IsConst>& boost::container::vec_iterator<Pointer, IsConst>::operator++"
          "() [with Pointer = std::pair<unsigned int, std::shared_ptr<PathfindingserverConnect> >*; bool IsConst = false]");
      }
      ++__for_begin.m_ptr;
    }
    v4 = res;
    std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v1 + 32));
  }
  else
  {
    v4 = 0;
  }
  result = v4;
  if ( v48 == (char *)v1 )
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

// Line 440: range 000000000C858226-000000000C858798
uint32_t __cdecl common::minet::AClientMgr<TothemoonserverConnect>::getValidConnectNum(
        common::minet::AClientMgr<TothemoonserverConnect> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t v4; // r14d
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *p_m_size; // rdi
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v6; // rax
  __int64 m_start; // rax
  char *v8; // rax
  std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > *v9; // rdx
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v10; // rax
  __int64 v11; // rax
  char *v12; // rax
  std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > *v13; // rdx
  bool isValidConnect; // r14
  uint32_t result; // eax
  uint32_t res; // [rsp+14h] [rbp-16Ch]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator __for_begin; // [rsp+18h] [rbp-168h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator __for_end; // [rsp+20h] [rbp-160h] BYREF
  char v20[8]; // [rsp+28h] [rbp-158h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *__for_range; // [rsp+30h] [rbp-150h]
  std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > *__in; // [rsp+38h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >::type *_; // [rsp+40h] [rbp-140h]
  std::tuple_element<1,std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >::type *conn; // [rsp+48h] [rbp-138h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v25; // [rsp+50h] [rbp-130h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v26; // [rsp+58h] [rbp-128h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v27; // [rsp+60h] [rbp-120h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v28; // [rsp+68h] [rbp-118h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v29; // [rsp+70h] [rbp-110h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_size; // [rsp+78h] [rbp-108h]
  char *v31; // [rsp+80h] [rbp-100h]
  __int64 v32; // [rsp+88h] [rbp-F8h]
  char *v33; // [rsp+90h] [rbp-F0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *p_for_end; // [rsp+98h] [rbp-E8h]
  char *v35; // [rsp+A0h] [rbp-E0h]
  char *v36; // [rsp+A8h] [rbp-D8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *p_conn_map; // [rsp+B0h] [rbp-D0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v38; // [rsp+B8h] [rbp-C8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v39; // [rsp+C0h] [rbp-C0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v40; // [rsp+C8h] [rbp-B8h]
  char *v41; // [rsp+D0h] [rbp-B0h]
  __int64 v42; // [rsp+D8h] [rbp-A8h]
  char *v43; // [rsp+E0h] [rbp-A0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *p_for_begin; // [rsp+E8h] [rbp-98h]
  char *v45; // [rsp+F0h] [rbp-90h]
  char *v46; // [rsp+F8h] [rbp-88h]
  std::shared_ptr<TothemoonserverConnect> p_connect_ptr; // [rsp+100h] [rbp-80h] BYREF
  char v48[112]; // [rsp+110h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 9 rlock:447";
  *(_QWORD *)(v1 + 16) = common::minet::AClientMgr<TothemoonserverConnect>::getValidConnectNum;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( std::atomic<common::minet::AClientMgr<TothemoonserverConnect>::Status>::operator common::minet::AClientMgr<TothemoonserverConnect>::Status(&this->status_) == STATUS_START_1 )
  {
    res = 0;
    p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)(v1 + 32);
    std::shared_lock<std::shared_mutex>::shared_lock(
      (std::shared_lock<std::shared_mutex> *const)(v1 + 32),
      &this->shared_mu_);
    __for_range = &this->conn_map_;
    p_conn_map = &this->conn_map_;
    v38 = &this->conn_map_;
    v39 = &this->conn_map_;
    v40 = &this->conn_map_;
    v6 = &this->conn_map_;
    if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_ >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)&this->conn_map_;
      v6 = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *)__asan_report_load8(&this->conn_map_);
    }
    m_start = (__int64)v6->m_flat_tree.m_data.m_seq.m_holder.m_start;
    v41 = v20;
    v42 = m_start;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)v20;
      __asan_report_store8();
    }
    *(_QWORD *)v41 = v42;
    v43 = v20;
    p_for_begin = &__for_begin;
    v45 = v20;
    v46 = v20;
    v8 = v20;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)v20;
      v8 = (char *)__asan_report_load8(v20);
    }
    v9 = *(std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > **)v8;
    if ( *(_BYTE *)(((unsigned __int64)p_for_begin >> 3) + 0x7FFF8000) )
    {
      p_m_size = p_for_begin;
      __asan_report_store8();
    }
    p_for_begin->m_ptr = v9;
    v25 = __for_range;
    v26 = __for_range;
    v27 = __for_range;
    v28 = __for_range;
    v10 = __for_range;
    if ( *(_BYTE *)(((unsigned __int64)__for_range >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)__for_range;
      v10 = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *)__asan_report_load8(__for_range);
    }
    v29 = v10->m_flat_tree.m_data.m_seq.m_holder.m_start;
    if ( *(_BYTE *)(((unsigned __int64)&v27->m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)&v27->m_flat_tree.m_data.m_seq.m_holder.m_size;
      __asan_report_load8(&v27->m_flat_tree.m_data.m_seq.m_holder.m_size);
    }
    m_size = v27->m_flat_tree.m_data.m_seq.m_holder.m_size;
    if ( m_size )
      v11 = (__int64)&v29[m_size];
    else
      v11 = (__int64)v29;
    v31 = v20;
    v32 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)v20;
      __asan_report_store8();
    }
    *(_QWORD *)v31 = v32;
    v33 = v20;
    p_for_end = &__for_end;
    v35 = v20;
    v36 = v20;
    v12 = v20;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)v20;
      v12 = (char *)__asan_report_load8(v20);
    }
    v13 = *(std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > **)v12;
    if ( *(_BYTE *)(((unsigned __int64)p_for_end >> 3) + 0x7FFF8000) )
    {
      p_m_size = p_for_end;
      __asan_report_store8();
    }
    p_for_end->m_ptr = v13;
    while ( __for_begin.m_ptr != __for_end.m_ptr )
    {
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return(p_m_size);
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x8Eu,
          "boost::container::vec_iterator<Pointer, IsConst>::reference boost::container::vec_iterator<Pointer, IsConst>::"
          "operator*() const [with Pointer = std::pair<unsigned int, std::shared_ptr<TothemoonserverConnect> >*; bool IsC"
          "onst = false; boost::container::vec_iterator<Pointer, IsConst>::reference = std::pair<unsigned int, std::share"
          "d_ptr<TothemoonserverConnect> >&]");
      }
      __in = __for_begin.m_ptr;
      _ = std::get<0ul,unsigned int,std::shared_ptr<TothemoonserverConnect>>(__for_begin.m_ptr);
      conn = std::get<1ul,unsigned int,std::shared_ptr<TothemoonserverConnect>>(__in);
      std::shared_ptr<TothemoonserverConnect>::shared_ptr(&p_connect_ptr, conn);
      isValidConnect = common::minet::AClientMgr<TothemoonserverConnect>::isValidConnect(this, &p_connect_ptr);
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)&p_connect_ptr;
      std::shared_ptr<TothemoonserverConnect>::~shared_ptr(&p_connect_ptr);
      if ( isValidConnect )
        ++res;
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return(&p_connect_ptr);
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x98u,
          "boost::container::vec_iterator<Pointer, IsConst>& boost::container::vec_iterator<Pointer, IsConst>::operator++"
          "() [with Pointer = std::pair<unsigned int, std::shared_ptr<TothemoonserverConnect> >*; bool IsConst = false]");
      }
      ++__for_begin.m_ptr;
    }
    v4 = res;
    std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v1 + 32));
  }
  else
  {
    v4 = 0;
  }
  result = v4;
  if ( v48 == (char *)v1 )
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

// Line 460: range 000000000C865E8C-000000000C866320
common::minet::AClientMgr<DispatchConnect> *__fastcall common::minet::AClientMgr<DispatchConnect>::findConnectByAppId(
        common::minet::AClientMgr<DispatchConnect> *const this,
        __int64 app_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > > > *v6; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer m_start; // rdx
  __int64 *v8; // rax
  __int64 v9; // rax
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > > > *v10; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v11; // rdx
  std::shared_lock<std::shared_mutex>::mutex_type *v14; // [rsp+28h] [rbp-158h] BYREF
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > > > v15; // [rsp+30h] [rbp-150h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-138h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > > > *v17; // [rsp+50h] [rbp-130h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > > > *v18; // [rsp+58h] [rbp-128h]
  __int64 v19; // [rsp+60h] [rbp-120h]
  __int64 v20; // [rsp+68h] [rbp-118h]
  __int64 v21; // [rsp+70h] [rbp-110h]
  __int64 v22; // [rsp+78h] [rbp-108h]
  __int64 v23; // [rsp+80h] [rbp-100h]
  __int64 v24; // [rsp+88h] [rbp-F8h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > > > *v25; // [rsp+90h] [rbp-F0h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > *v26; // [rsp+98h] [rbp-E8h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > > > *v27; // [rsp+A0h] [rbp-E0h]
  unsigned __int64 v28; // [rsp+A8h] [rbp-D8h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > > > *v29; // [rsp+B0h] [rbp-D0h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > > > *v30; // [rsp+B8h] [rbp-C8h]
  common::milog::MiLogStream v31; // [rsp+C0h] [rbp-C0h] BYREF
  char v32[160]; // [rsp+E0h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 10 app_id:460 64 8 8 iter:463 96 16 9 rlock:462";
  *(_QWORD *)(v3 + 16) = common::minet::AClientMgr<DispatchConnect>::findConnectByAppId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  std::shared_lock<std::shared_mutex>::shared_lock(
    (std::shared_lock<std::shared_mutex> *const)(v3 + 96),
    (std::shared_lock<std::shared_mutex>::mutex_type *)(app_id + 640));
  v15.m_data.m_seq.m_holder.m_size = app_id + 696;
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect>>,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect>>>>::find(
    &v15,
    (const boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > > >::key_type *)(app_id + 696));
  v15.m_data.m_seq.m_holder.m_capacity = (boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type)&v15;
  v16 = v3 + 64;
  v17 = &v15;
  v18 = &v15;
  v6 = &v15;
  if ( *(_BYTE *)(((unsigned __int64)&v15 >> 3) + 0x7FFF8000) )
    v6 = (boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > > > *)__asan_report_load8(&v15);
  m_start = v6->m_data.m_seq.m_holder.m_start;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)v16 = m_start;
  v19 = app_id + 696;
  v20 = app_id + 696;
  v21 = app_id + 696;
  v22 = app_id + 696;
  v8 = (__int64 *)(app_id + 696);
  if ( *(_BYTE *)(((unsigned __int64)(app_id + 696) >> 3) + 0x7FFF8000) )
    v8 = (__int64 *)__asan_report_load8(app_id + 696);
  v23 = *v8;
  if ( *(_BYTE *)(((unsigned __int64)(v21 + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v21 + 8);
  v24 = *(_QWORD *)(v21 + 8);
  if ( v24 )
    v9 = 24 * v24 + v23;
  else
    v9 = v23;
  v25 = &v15;
  v26 = (boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > *)v9;
  if ( *(_BYTE *)(((unsigned __int64)&v15 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v25->m_data.m_seq.m_holder.m_start = v26;
  v27 = &v15;
  v28 = (unsigned __int64)&v14;
  v29 = &v15;
  v30 = &v15;
  v10 = &v15;
  if ( *(_BYTE *)(((unsigned __int64)&v15 >> 3) + 0x7FFF8000) )
    v10 = (boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > > > *)__asan_report_load8(&v15);
  v11 = v10->m_data.m_seq.m_holder.m_start;
  if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)v28 = v11;
  if ( *(std::shared_lock<std::shared_mutex>::mutex_type **)(v3 + 64) == v14 )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "../framework/common/minet/aclient/include/aclient_mgr.hpp",
      "findConnectByAppId",
      469);
    common::milog::MiLogStream::operator()(&v31, "can not find connect to app_id=%u", *(unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v31);
    std::shared_ptr<DispatchConnect>::shared_ptr((std::shared_ptr<DispatchConnect> *const)this, 0LL);
  }
  else
  {
    std::shared_ptr<DispatchConnect>::shared_ptr(
      (std::shared_ptr<DispatchConnect> *const)this,
      (const std::shared_ptr<DispatchConnect> *)(*(_QWORD *)(v3 + 64) + 8LL));
  }
  std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v3 + 96));
  if ( v32 == (char *)v3 )
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

// Line 460: range 000000000C7CE620-000000000C7CEAB4
common::minet::AClientMgr<GameserverConnect> *__fastcall common::minet::AClientMgr<GameserverConnect>::findConnectByAppId(
        common::minet::AClientMgr<GameserverConnect> *const this,
        __int64 app_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > > > *v6; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer m_start; // rdx
  __int64 *v8; // rax
  __int64 v9; // rax
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > > > *v10; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v11; // rdx
  std::shared_lock<std::shared_mutex>::mutex_type *v14; // [rsp+28h] [rbp-158h] BYREF
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > > > v15; // [rsp+30h] [rbp-150h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-138h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > > > *v17; // [rsp+50h] [rbp-130h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > > > *v18; // [rsp+58h] [rbp-128h]
  __int64 v19; // [rsp+60h] [rbp-120h]
  __int64 v20; // [rsp+68h] [rbp-118h]
  __int64 v21; // [rsp+70h] [rbp-110h]
  __int64 v22; // [rsp+78h] [rbp-108h]
  __int64 v23; // [rsp+80h] [rbp-100h]
  __int64 v24; // [rsp+88h] [rbp-F8h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > > > *v25; // [rsp+90h] [rbp-F0h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > *v26; // [rsp+98h] [rbp-E8h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > > > *v27; // [rsp+A0h] [rbp-E0h]
  unsigned __int64 v28; // [rsp+A8h] [rbp-D8h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > > > *v29; // [rsp+B0h] [rbp-D0h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > > > *v30; // [rsp+B8h] [rbp-C8h]
  common::milog::MiLogStream v31; // [rsp+C0h] [rbp-C0h] BYREF
  char v32[160]; // [rsp+E0h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 10 app_id:460 64 8 8 iter:463 96 16 9 rlock:462";
  *(_QWORD *)(v3 + 16) = common::minet::AClientMgr<GameserverConnect>::findConnectByAppId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  std::shared_lock<std::shared_mutex>::shared_lock(
    (std::shared_lock<std::shared_mutex> *const)(v3 + 96),
    (std::shared_lock<std::shared_mutex>::mutex_type *)(app_id + 640));
  v15.m_data.m_seq.m_holder.m_size = app_id + 696;
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect>>,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect>>>>::find(
    &v15,
    (const boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > > >::key_type *)(app_id + 696));
  v15.m_data.m_seq.m_holder.m_capacity = (boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type)&v15;
  v16 = v3 + 64;
  v17 = &v15;
  v18 = &v15;
  v6 = &v15;
  if ( *(_BYTE *)(((unsigned __int64)&v15 >> 3) + 0x7FFF8000) )
    v6 = (boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > > > *)__asan_report_load8(&v15);
  m_start = v6->m_data.m_seq.m_holder.m_start;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)v16 = m_start;
  v19 = app_id + 696;
  v20 = app_id + 696;
  v21 = app_id + 696;
  v22 = app_id + 696;
  v8 = (__int64 *)(app_id + 696);
  if ( *(_BYTE *)(((unsigned __int64)(app_id + 696) >> 3) + 0x7FFF8000) )
    v8 = (__int64 *)__asan_report_load8(app_id + 696);
  v23 = *v8;
  if ( *(_BYTE *)(((unsigned __int64)(v21 + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v21 + 8);
  v24 = *(_QWORD *)(v21 + 8);
  if ( v24 )
    v9 = 24 * v24 + v23;
  else
    v9 = v23;
  v25 = &v15;
  v26 = (boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > *)v9;
  if ( *(_BYTE *)(((unsigned __int64)&v15 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v25->m_data.m_seq.m_holder.m_start = v26;
  v27 = &v15;
  v28 = (unsigned __int64)&v14;
  v29 = &v15;
  v30 = &v15;
  v10 = &v15;
  if ( *(_BYTE *)(((unsigned __int64)&v15 >> 3) + 0x7FFF8000) )
    v10 = (boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > > > *)__asan_report_load8(&v15);
  v11 = v10->m_data.m_seq.m_holder.m_start;
  if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)v28 = v11;
  if ( *(std::shared_lock<std::shared_mutex>::mutex_type **)(v3 + 64) == v14 )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "../framework/common/minet/aclient/include/aclient_mgr.hpp",
      "findConnectByAppId",
      469);
    common::milog::MiLogStream::operator()(&v31, "can not find connect to app_id=%u", *(unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v31);
    std::shared_ptr<GameserverConnect>::shared_ptr((std::shared_ptr<GameserverConnect> *const)this, 0LL);
  }
  else
  {
    std::shared_ptr<GameserverConnect>::shared_ptr(
      (std::shared_ptr<GameserverConnect> *const)this,
      (const std::shared_ptr<GameserverConnect> *)(*(_QWORD *)(v3 + 64) + 8LL));
  }
  std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v3 + 96));
  if ( v32 == (char *)v3 )
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

// Line 460: range 000000000C7CF1D0-000000000C7CF664
common::minet::AClientMgr<PathfindingserverConnect> *__fastcall common::minet::AClientMgr<PathfindingserverConnect>::findConnectByAppId(
        common::minet::AClientMgr<PathfindingserverConnect> *const this,
        __int64 app_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > > > *v6; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer m_start; // rdx
  __int64 *v8; // rax
  __int64 v9; // rax
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > > > *v10; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v11; // rdx
  std::shared_lock<std::shared_mutex>::mutex_type *v14; // [rsp+28h] [rbp-158h] BYREF
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > > > v15; // [rsp+30h] [rbp-150h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-138h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > > > *v17; // [rsp+50h] [rbp-130h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > > > *v18; // [rsp+58h] [rbp-128h]
  __int64 v19; // [rsp+60h] [rbp-120h]
  __int64 v20; // [rsp+68h] [rbp-118h]
  __int64 v21; // [rsp+70h] [rbp-110h]
  __int64 v22; // [rsp+78h] [rbp-108h]
  __int64 v23; // [rsp+80h] [rbp-100h]
  __int64 v24; // [rsp+88h] [rbp-F8h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > > > *v25; // [rsp+90h] [rbp-F0h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > *v26; // [rsp+98h] [rbp-E8h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > > > *v27; // [rsp+A0h] [rbp-E0h]
  unsigned __int64 v28; // [rsp+A8h] [rbp-D8h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > > > *v29; // [rsp+B0h] [rbp-D0h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > > > *v30; // [rsp+B8h] [rbp-C8h]
  common::milog::MiLogStream v31; // [rsp+C0h] [rbp-C0h] BYREF
  char v32[160]; // [rsp+E0h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 10 app_id:460 64 8 8 iter:463 96 16 9 rlock:462";
  *(_QWORD *)(v3 + 16) = common::minet::AClientMgr<PathfindingserverConnect>::findConnectByAppId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  std::shared_lock<std::shared_mutex>::shared_lock(
    (std::shared_lock<std::shared_mutex> *const)(v3 + 96),
    (std::shared_lock<std::shared_mutex>::mutex_type *)(app_id + 640));
  v15.m_data.m_seq.m_holder.m_size = app_id + 696;
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect>>,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect>>>>::find(
    &v15,
    (const boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > > >::key_type *)(app_id + 696));
  v15.m_data.m_seq.m_holder.m_capacity = (boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type)&v15;
  v16 = v3 + 64;
  v17 = &v15;
  v18 = &v15;
  v6 = &v15;
  if ( *(_BYTE *)(((unsigned __int64)&v15 >> 3) + 0x7FFF8000) )
    v6 = (boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > > > *)__asan_report_load8(&v15);
  m_start = v6->m_data.m_seq.m_holder.m_start;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)v16 = m_start;
  v19 = app_id + 696;
  v20 = app_id + 696;
  v21 = app_id + 696;
  v22 = app_id + 696;
  v8 = (__int64 *)(app_id + 696);
  if ( *(_BYTE *)(((unsigned __int64)(app_id + 696) >> 3) + 0x7FFF8000) )
    v8 = (__int64 *)__asan_report_load8(app_id + 696);
  v23 = *v8;
  if ( *(_BYTE *)(((unsigned __int64)(v21 + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v21 + 8);
  v24 = *(_QWORD *)(v21 + 8);
  if ( v24 )
    v9 = 24 * v24 + v23;
  else
    v9 = v23;
  v25 = &v15;
  v26 = (boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > *)v9;
  if ( *(_BYTE *)(((unsigned __int64)&v15 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v25->m_data.m_seq.m_holder.m_start = v26;
  v27 = &v15;
  v28 = (unsigned __int64)&v14;
  v29 = &v15;
  v30 = &v15;
  v10 = &v15;
  if ( *(_BYTE *)(((unsigned __int64)&v15 >> 3) + 0x7FFF8000) )
    v10 = (boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > > > *)__asan_report_load8(&v15);
  v11 = v10->m_data.m_seq.m_holder.m_start;
  if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)v28 = v11;
  if ( *(std::shared_lock<std::shared_mutex>::mutex_type **)(v3 + 64) == v14 )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "../framework/common/minet/aclient/include/aclient_mgr.hpp",
      "findConnectByAppId",
      469);
    common::milog::MiLogStream::operator()(&v31, "can not find connect to app_id=%u", *(unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v31);
    std::shared_ptr<PathfindingserverConnect>::shared_ptr((std::shared_ptr<PathfindingserverConnect> *const)this, 0LL);
  }
  else
  {
    std::shared_ptr<PathfindingserverConnect>::shared_ptr(
      (std::shared_ptr<PathfindingserverConnect> *const)this,
      (const std::shared_ptr<PathfindingserverConnect> *)(*(_QWORD *)(v3 + 64) + 8LL));
  }
  std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v3 + 96));
  if ( v32 == (char *)v3 )
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

// Line 460: range 000000000C7CFC80-000000000C7D0114
common::minet::AClientMgr<TothemoonserverConnect> *__fastcall common::minet::AClientMgr<TothemoonserverConnect>::findConnectByAppId(
        common::minet::AClientMgr<TothemoonserverConnect> *const this,
        __int64 app_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > > > *v6; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer m_start; // rdx
  __int64 *v8; // rax
  __int64 v9; // rax
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > > > *v10; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v11; // rdx
  std::shared_lock<std::shared_mutex>::mutex_type *v14; // [rsp+28h] [rbp-158h] BYREF
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > > > v15; // [rsp+30h] [rbp-150h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-138h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > > > *v17; // [rsp+50h] [rbp-130h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > > > *v18; // [rsp+58h] [rbp-128h]
  __int64 v19; // [rsp+60h] [rbp-120h]
  __int64 v20; // [rsp+68h] [rbp-118h]
  __int64 v21; // [rsp+70h] [rbp-110h]
  __int64 v22; // [rsp+78h] [rbp-108h]
  __int64 v23; // [rsp+80h] [rbp-100h]
  __int64 v24; // [rsp+88h] [rbp-F8h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > > > *v25; // [rsp+90h] [rbp-F0h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > *v26; // [rsp+98h] [rbp-E8h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > > > *v27; // [rsp+A0h] [rbp-E0h]
  unsigned __int64 v28; // [rsp+A8h] [rbp-D8h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > > > *v29; // [rsp+B0h] [rbp-D0h]
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > > > *v30; // [rsp+B8h] [rbp-C8h]
  common::milog::MiLogStream v31; // [rsp+C0h] [rbp-C0h] BYREF
  char v32[160]; // [rsp+E0h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 10 app_id:460 64 8 8 iter:463 96 16 9 rlock:462";
  *(_QWORD *)(v3 + 16) = common::minet::AClientMgr<TothemoonserverConnect>::findConnectByAppId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  std::shared_lock<std::shared_mutex>::shared_lock(
    (std::shared_lock<std::shared_mutex> *const)(v3 + 96),
    (std::shared_lock<std::shared_mutex>::mutex_type *)(app_id + 640));
  v15.m_data.m_seq.m_holder.m_size = app_id + 696;
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect>>,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect>>>>::find(
    &v15,
    (const boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > > >::key_type *)(app_id + 696));
  v15.m_data.m_seq.m_holder.m_capacity = (boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type)&v15;
  v16 = v3 + 64;
  v17 = &v15;
  v18 = &v15;
  v6 = &v15;
  if ( *(_BYTE *)(((unsigned __int64)&v15 >> 3) + 0x7FFF8000) )
    v6 = (boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > > > *)__asan_report_load8(&v15);
  m_start = v6->m_data.m_seq.m_holder.m_start;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)v16 = m_start;
  v19 = app_id + 696;
  v20 = app_id + 696;
  v21 = app_id + 696;
  v22 = app_id + 696;
  v8 = (__int64 *)(app_id + 696);
  if ( *(_BYTE *)(((unsigned __int64)(app_id + 696) >> 3) + 0x7FFF8000) )
    v8 = (__int64 *)__asan_report_load8(app_id + 696);
  v23 = *v8;
  if ( *(_BYTE *)(((unsigned __int64)(v21 + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v21 + 8);
  v24 = *(_QWORD *)(v21 + 8);
  if ( v24 )
    v9 = 24 * v24 + v23;
  else
    v9 = v23;
  v25 = &v15;
  v26 = (boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > *)v9;
  if ( *(_BYTE *)(((unsigned __int64)&v15 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v25->m_data.m_seq.m_holder.m_start = v26;
  v27 = &v15;
  v28 = (unsigned __int64)&v14;
  v29 = &v15;
  v30 = &v15;
  v10 = &v15;
  if ( *(_BYTE *)(((unsigned __int64)&v15 >> 3) + 0x7FFF8000) )
    v10 = (boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > > > *)__asan_report_load8(&v15);
  v11 = v10->m_data.m_seq.m_holder.m_start;
  if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)v28 = v11;
  if ( *(std::shared_lock<std::shared_mutex>::mutex_type **)(v3 + 64) == v14 )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "../framework/common/minet/aclient/include/aclient_mgr.hpp",
      "findConnectByAppId",
      469);
    common::milog::MiLogStream::operator()(&v31, "can not find connect to app_id=%u", *(unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v31);
    std::shared_ptr<TothemoonserverConnect>::shared_ptr((std::shared_ptr<TothemoonserverConnect> *const)this, 0LL);
  }
  else
  {
    std::shared_ptr<TothemoonserverConnect>::shared_ptr(
      (std::shared_ptr<TothemoonserverConnect> *const)this,
      (const std::shared_ptr<TothemoonserverConnect> *)(*(_QWORD *)(v3 + 64) + 8LL));
  }
  std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v3 + 96));
  if ( v32 == (char *)v3 )
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

// Line 474: range 000000000C7BD5CA-000000000C7BDB78
std::string *__cdecl common::minet::AClientMgr<GameserverConnect>::getDescByAppId[abi:cxx11](
        std::string *retstr,
        common::minet::AClientMgr<GameserverConnect> *const this,
        uint32_t app_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const char *RemoteIp; // rax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-161h] BYREF
  std::string v11; // [rsp+30h] [rbp-160h] BYREF
  std::string v12; // [rsp+50h] [rbp-140h] BYREF
  std::string v13; // [rsp+70h] [rbp-120h] BYREF
  std::string __rhs; // [rsp+90h] [rbp-100h] BYREF
  std::string __lhs; // [rsp+B0h] [rbp-E0h] BYREF
  std::string v16; // [rsp+D0h] [rbp-C0h] BYREF
  std::string v17; // [rsp+F0h] [rbp-A0h] BYREF
  std::string v18; // [rsp+110h] [rbp-80h] BYREF
  char v19[96]; // [rsp+130h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 conn_ptr:476";
  *(_QWORD *)(v3 + 16) = common::minet::AClientMgr<GameserverConnect>::getDescByAppId[abi:cxx11];
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::minet::AClientMgr<GameserverConnect>::findConnectByAppId(
    (common::minet::AClientMgr<GameserverConnect> *const)(v3 + 32),
    (__int64)this,
    app_id);
  if ( std::operator==<GameserverConnect>((const std::shared_ptr<GameserverConnect> *)(v3 + 32), 0LL) )
  {
    std::to_string(&v17, app_id);
    common::tools::AppIdUtils::getAppIdStr[abi:cxx11](&__rhs, app_id);
    std::operator+<char>(&__lhs, "[empty conn][", &__rhs);
    std::operator+<char>(&v16, &__lhs, "][");
    std::operator+<char>(&v18, &v16, &v17);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                            + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
    std::operator+<char>(retstr, &v18, "]");
    std::string::~string(&v18);
    std::string::~string(&v16);
    std::string::~string(&__lhs);
    std::string::~string(&__rhs);
    std::string::~string(&v17);
  }
  else
  {
    std::to_string(&v17, app_id);
    common::tools::AppIdUtils::getAppIdStr[abi:cxx11](&__rhs, app_id);
    std::allocator<char>::allocator(&__a);
    v6 = std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    RemoteIp = common::minet::AClientConnect::getRemoteIp(v6);
    std::string::basic_string<std::allocator<char>>(&v11, RemoteIp, &__a);
    std::operator+<char>(&v12, "[", &v11);
    std::operator+<char>(&v13, &v12, "][");
    std::operator+<char>(&__lhs, &v13, &__rhs);
    std::operator+<char>(&v16, &__lhs, "][");
    std::operator+<char>(&v18, &v16, &v17);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                            + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
    std::operator+<char>(retstr, &v18, "]");
    std::string::~string(&v18);
    std::string::~string(&v16);
    std::string::~string(&__lhs);
    std::string::~string(&v13);
    std::string::~string(&v12);
    std::string::~string(&v11);
    std::allocator<char>::~allocator(&__a);
    std::string::~string(&__rhs);
    std::string::~string(&v17);
  }
  std::shared_ptr<GameserverConnect>::~shared_ptr((std::shared_ptr<GameserverConnect> *const)(v3 + 32));
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 487: range 000000000C8671F2-000000000C867D0C
// local variable allocation has failed, the output may be wrong!
common::minet::AClientMgr<DispatchConnect>::ConnectPtr __cdecl common::minet::AClientMgr<DispatchConnect>::findConnectByConnOffset(
        common::minet::AClientMgr<DispatchConnect> *const this,
        uint32_t conn_offset,
        bool is_allow_adjust)
{
  bool v3; // cl
  char v4; // r15
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  char v8; // al
  _BOOL8 v9; // rdx
  unsigned __int64 v10; // rcx
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *v11; // rax
  std::pair<unsigned int,std::shared_ptr<DispatchConnect> > *m_start; // rdx
  const common::minet::AClientConnect *v13; // rdi
  __int64 *v14; // rax
  __int64 v15; // rax
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *v16; // rax
  std::pair<unsigned int,std::shared_ptr<DispatchConnect> > *v17; // rdx
  __int64 *v18; // rax
  __int64 v19; // rax
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *v20; // rax
  std::pair<unsigned int,std::shared_ptr<DispatchConnect> > *v21; // rdx
  common::milog::MiLogStream *v23; // rcx
  common::minet::AClientMgr<DispatchConnect>::ConnectPtr result; // rax
  bool is_allow_adjusta; // [rsp+8h] [rbp-288h]
  _BOOL4 conn_offseta; // [rsp+Ch] [rbp-284h]
  uint32_t conn_idx; // [rsp+24h] [rbp-26Ch]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator __for_begin; // [rsp+28h] [rbp-268h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator __for_end; // [rsp+30h] [rbp-260h] BYREF
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> v31; // [rsp+38h] [rbp-258h] BYREF
  std::pair<unsigned int,std::shared_ptr<DispatchConnect> > *__in; // [rsp+50h] [rbp-240h]
  std::tuple_element<0,std::pair<unsigned int,std::shared_ptr<DispatchConnect> > >::type *_; // [rsp+58h] [rbp-238h]
  std::tuple_element<1,std::pair<unsigned int,std::shared_ptr<DispatchConnect> > >::type *conn_0; // [rsp+60h] [rbp-230h]
  __int64 v35; // [rsp+68h] [rbp-228h]
  __int64 v36; // [rsp+70h] [rbp-220h]
  __int64 v37; // [rsp+78h] [rbp-218h]
  __int64 v38; // [rsp+80h] [rbp-210h]
  __int64 v39; // [rsp+88h] [rbp-208h]
  __int64 v40; // [rsp+90h] [rbp-200h]
  __int64 v41; // [rsp+98h] [rbp-1F8h]
  __int64 v42; // [rsp+A0h] [rbp-1F0h]
  __int64 v43; // [rsp+A8h] [rbp-1E8h]
  __int64 v44; // [rsp+B0h] [rbp-1E0h]
  __int64 v45; // [rsp+B8h] [rbp-1D8h]
  __int64 v46; // [rsp+C0h] [rbp-1D0h]
  __int64 v47; // [rsp+C8h] [rbp-1C8h]
  __int64 v48; // [rsp+D0h] [rbp-1C0h]
  __int64 v49; // [rsp+D8h] [rbp-1B8h]
  __int64 v50; // [rsp+E0h] [rbp-1B0h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void>::size_type n; // [rsp+E8h] [rbp-1A8h]
  __int64 v52; // [rsp+F0h] [rbp-1A0h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *v53; // [rsp+F8h] [rbp-198h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *p_for_end; // [rsp+100h] [rbp-190h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *v55; // [rsp+108h] [rbp-188h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *v56; // [rsp+110h] [rbp-180h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_capacity; // [rsp+118h] [rbp-178h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type v58; // [rsp+120h] [rbp-170h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type v59; // [rsp+128h] [rbp-168h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type v60; // [rsp+130h] [rbp-160h]
  __int64 v61; // [rsp+138h] [rbp-158h]
  __int64 v62; // [rsp+140h] [rbp-150h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *v63; // [rsp+148h] [rbp-148h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > *v64; // [rsp+150h] [rbp-140h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *v65; // [rsp+158h] [rbp-138h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *v66; // [rsp+160h] [rbp-130h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *v67; // [rsp+168h] [rbp-128h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *v68; // [rsp+170h] [rbp-120h]
  __int64 v69; // [rsp+178h] [rbp-118h]
  __int64 v70; // [rsp+180h] [rbp-110h]
  __int64 v71; // [rsp+188h] [rbp-108h]
  __int64 v72; // [rsp+190h] [rbp-100h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *v73; // [rsp+198h] [rbp-F8h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > *v74; // [rsp+1A0h] [rbp-F0h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *v75; // [rsp+1A8h] [rbp-E8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *p_for_begin; // [rsp+1B0h] [rbp-E0h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *v77; // [rsp+1B8h] [rbp-D8h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *v78; // [rsp+1C0h] [rbp-D0h]
  __int64 v79; // [rsp+1C8h] [rbp-C8h]
  __int64 v80; // [rsp+1D0h] [rbp-C0h]
  __int64 v81; // [rsp+1D8h] [rbp-B8h]
  common::milog::MiLogStream v82; // [rsp+1E0h] [rbp-B0h] BYREF
  char v83[144]; // [rsp+200h] [rbp-90h] BYREF

  conn_offseta = is_allow_adjust;
  is_allow_adjusta = v3;
  v5 = (unsigned __int64)v83;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 9 <unknown> 64 16 9 rlock:489";
  *(_QWORD *)(v5 + 16) = common::minet::AClientMgr<DispatchConnect>::findConnectByConnOffset;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202178560;
  std::shared_lock<std::shared_mutex>::shared_lock(
    (std::shared_lock<std::shared_mutex> *const)(v5 + 64),
    (std::shared_lock<std::shared_mutex>::mutex_type *)(*(_QWORD *)&conn_offset + 640LL));
  if ( std::atomic<common::minet::AClientMgr<DispatchConnect>::Status>::operator common::minet::AClientMgr<DispatchConnect>::Status((const std::atomic<common::minet::AClientMgr<DispatchConnect>::Status> *const)(*(_QWORD *)&conn_offset + 8LL)) != STATUS_START_2 )
    goto LABEL_8;
  v35 = *(_QWORD *)&conn_offset + 696LL;
  v36 = *(_QWORD *)&conn_offset + 696LL;
  v37 = *(_QWORD *)&conn_offset + 696LL;
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 704LL) >> 3) + 0x7FFF8000) )
    __asan_report_load8(*(_QWORD *)&conn_offset + 704LL);
  if ( *(_QWORD *)(v37 + 8) )
    v8 = 0;
  else
LABEL_8:
    v8 = 1;
  if ( v8 )
  {
    std::shared_ptr<DispatchConnect>::shared_ptr((std::shared_ptr<DispatchConnect> *const)this, 0LL);
  }
  else
  {
    v9 = conn_offseta;
    v41 = *(_QWORD *)&conn_offset + 696LL;
    v42 = *(_QWORD *)&conn_offset + 696LL;
    v43 = *(_QWORD *)&conn_offset + 696LL;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 704LL) >> 3) + 0x7FFF8000) )
      __asan_report_load8(*(_QWORD *)&conn_offset + 704LL);
    conn_idx = (unsigned __int64)v9 % *(_QWORD *)(v43 + 8);
    v10 = conn_idx;
    v38 = *(_QWORD *)&conn_offset + 696LL;
    v39 = *(_QWORD *)&conn_offset + 696LL;
    v40 = *(_QWORD *)&conn_offset + 696LL;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 704LL) >> 3) + 0x7FFF8000) )
      __asan_report_load8(*(_QWORD *)&conn_offset + 704LL);
    if ( v10 < *(_QWORD *)(v40 + 8) )
    {
      v47 = *(_QWORD *)&conn_offset + 696LL;
      v48 = conn_idx;
      v49 = *(_QWORD *)&conn_offset + 696LL;
      v50 = conn_idx;
      n = *(_QWORD *)&conn_offset + 696LL;
      v52 = conn_idx;
      *(_BYTE *)(v5 + 48) = v4;
      boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect>>>,void>::nth(
        &v31,
        n);
      v53 = &v31;
      p_for_end = &__for_end;
      v55 = &v31;
      v56 = &v31;
      v11 = &v31;
      if ( *(_BYTE *)(((unsigned __int64)&v31 >> 3) + 0x7FFF8000) )
        v11 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *)__asan_report_load8(&v31);
      m_start = (std::pair<unsigned int,std::shared_ptr<DispatchConnect> > *)v11->m_holder.m_start;
      if ( *(_BYTE *)(((unsigned __int64)p_for_end >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      p_for_end->m_ptr = m_start;
      v31.m_holder.m_size = (boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type)&__for_end.m_ptr->second;
      v13 = std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__for_end.m_ptr->second);
      if ( common::minet::AClientConnect::isConnect(v13) )
      {
        std::shared_ptr<DispatchConnect>::shared_ptr(
          (std::shared_ptr<DispatchConnect> *const)this,
          (const std::shared_ptr<DispatchConnect> *)v31.m_holder.m_size);
      }
      else if ( !is_allow_adjusta )
      {
        common::milog::MiLogStream::create(
          &v82,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
          "findConnectByConnOffset",
          510);
        common::milog::MiLogStream::operator()(&v82, "conn_idx=%u not connect.", conn_idx);
        common::milog::MiLogStream::~MiLogStream(&v82);
        std::shared_ptr<DispatchConnect>::shared_ptr((std::shared_ptr<DispatchConnect> *const)this, 0LL);
      }
      else
      {
        v31.m_holder.m_capacity = *(_QWORD *)&conn_offset + 696LL;
        v69 = *(_QWORD *)&conn_offset + 696LL;
        v70 = *(_QWORD *)&conn_offset + 696LL;
        v71 = *(_QWORD *)&conn_offset + 696LL;
        v72 = *(_QWORD *)&conn_offset + 696LL;
        v14 = (__int64 *)(*(_QWORD *)&conn_offset + 696LL);
        if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 696LL) >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)(*(_QWORD *)&conn_offset + 696LL);
          v14 = (__int64 *)__asan_report_load8(*(_QWORD *)&conn_offset + 696LL);
        }
        v15 = *v14;
        v73 = &v31;
        v74 = (boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > *)v15;
        if ( *(_BYTE *)(((unsigned __int64)&v31 >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)&v31;
          __asan_report_store8();
        }
        v73->m_holder.m_start = v74;
        v75 = &v31;
        p_for_begin = &__for_begin;
        v77 = &v31;
        v78 = &v31;
        v16 = &v31;
        if ( *(_BYTE *)(((unsigned __int64)&v31 >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)&v31;
          v16 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *)__asan_report_load8(&v31);
        }
        v17 = (std::pair<unsigned int,std::shared_ptr<DispatchConnect> > *)v16->m_holder.m_start;
        if ( *(_BYTE *)(((unsigned __int64)p_for_begin >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)p_for_begin;
          __asan_report_store8();
        }
        p_for_begin->m_ptr = v17;
        m_capacity = v31.m_holder.m_capacity;
        v58 = v31.m_holder.m_capacity;
        v59 = v31.m_holder.m_capacity;
        v60 = v31.m_holder.m_capacity;
        v18 = (__int64 *)v31.m_holder.m_capacity;
        if ( *(_BYTE *)((v31.m_holder.m_capacity >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)v31.m_holder.m_capacity;
          v18 = (__int64 *)__asan_report_load8(v31.m_holder.m_capacity);
        }
        v61 = *v18;
        if ( *(_BYTE *)(((v59 + 8) >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)(v59 + 8);
          __asan_report_load8(v59 + 8);
        }
        v62 = *(_QWORD *)(v59 + 8);
        if ( v62 )
          v19 = 24 * v62 + v61;
        else
          v19 = v61;
        v63 = &v31;
        v64 = (boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > *)v19;
        if ( *(_BYTE *)(((unsigned __int64)&v31 >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)&v31;
          __asan_report_store8();
        }
        v63->m_holder.m_start = v64;
        v65 = &v31;
        v66 = &__for_end;
        v67 = &v31;
        v68 = &v31;
        v20 = &v31;
        if ( *(_BYTE *)(((unsigned __int64)&v31 >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)&v31;
          v20 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,void> *)__asan_report_load8(&v31);
        }
        v21 = (std::pair<unsigned int,std::shared_ptr<DispatchConnect> > *)v20->m_holder.m_start;
        if ( *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)v66;
          __asan_report_store8();
        }
        v66->m_ptr = v21;
        while ( __for_begin.m_ptr != __for_end.m_ptr )
        {
          if ( !__for_begin.m_ptr )
          {
            __asan_handle_no_return(v13);
            __assert_fail(
              "!!m_ptr",
              "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
              0x8Eu,
              "boost::container::vec_iterator<Pointer, IsConst>::reference boost::container::vec_iterator<Pointer, IsCons"
              "t>::operator*() const [with Pointer = std::pair<unsigned int, std::shared_ptr<DispatchConnect> >*; bool Is"
              "Const = false; boost::container::vec_iterator<Pointer, IsConst>::reference = std::pair<unsigned int, std::"
              "shared_ptr<DispatchConnect> >&]");
          }
          __in = __for_begin.m_ptr;
          _ = std::get<0ul,unsigned int,std::shared_ptr<DispatchConnect>>(__for_begin.m_ptr);
          conn_0 = std::get<1ul,unsigned int,std::shared_ptr<DispatchConnect>>(__in);
          v13 = (const common::minet::AClientConnect *)conn_0;
          if ( std::__shared_ptr<DispatchConnect,(__gnu_cxx::_Lock_policy)2>::operator bool(conn_0) )
          {
            v13 = std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_0);
            if ( common::minet::AClientConnect::isConnect(v13) )
            {
              std::shared_ptr<DispatchConnect>::shared_ptr((std::shared_ptr<DispatchConnect> *const)this, conn_0);
              goto LABEL_65;
            }
          }
          if ( !__for_begin.m_ptr )
          {
            __asan_handle_no_return(v13);
            __assert_fail(
              "!!m_ptr",
              "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
              0x98u,
              "boost::container::vec_iterator<Pointer, IsConst>& boost::container::vec_iterator<Pointer, IsConst>::operat"
              "or++() [with Pointer = std::pair<unsigned int, std::shared_ptr<DispatchConnect> >*; bool IsConst = false]");
          }
          ++__for_begin.m_ptr;
        }
        common::milog::MiLogStream::create(
          &v82,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
          "findConnectByConnOffset",
          525);
        v23 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                &v82,
                (const char (*)[55])"[NETWORK] [ECS] can not find any usable connect, size:");
        v79 = *(_QWORD *)&conn_offset + 696LL;
        v80 = *(_QWORD *)&conn_offset + 696LL;
        v81 = *(_QWORD *)&conn_offset + 696LL;
        if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 704LL) >> 3) + 0x7FFF8000) )
          __asan_report_load8(*(_QWORD *)&conn_offset + 704LL);
        v31.m_holder.m_start = *(boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer *)(v81 + 8);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v23, (const unsigned __int64 *)&v31);
        common::milog::MiLogStream::~MiLogStream(&v82);
        std::shared_ptr<DispatchConnect>::shared_ptr((std::shared_ptr<DispatchConnect> *const)this, 0LL);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v82,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "../framework/common/minet/aclient/include/aclient_mgr.hpp",
        "findConnectByConnOffset",
        499);
      v44 = *(_QWORD *)&conn_offset + 696LL;
      v45 = *(_QWORD *)&conn_offset + 696LL;
      v46 = *(_QWORD *)&conn_offset + 696LL;
      if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 704LL) >> 3) + 0x7FFF8000) )
        __asan_report_load8(*(_QWORD *)&conn_offset + 704LL);
      common::milog::MiLogStream::operator()(
        &v82,
        "conn_idx=%u greator than conn_map_.size=%lu",
        conn_idx,
        *(_QWORD *)(v46 + 8));
      common::milog::MiLogStream::~MiLogStream(&v82);
      std::shared_ptr<DispatchConnect>::shared_ptr((std::shared_ptr<DispatchConnect> *const)this, 0LL);
    }
  }
LABEL_65:
  std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v5 + 64));
  if ( v83 == (char *)v5 )
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
  result._M_ptr = (std::__shared_ptr<DispatchConnect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 487: range 000000000C7D3A7E-000000000C7D4598
// local variable allocation has failed, the output may be wrong!
common::minet::AClientMgr<GameserverConnect>::ConnectPtr __cdecl common::minet::AClientMgr<GameserverConnect>::findConnectByConnOffset(
        common::minet::AClientMgr<GameserverConnect> *const this,
        uint32_t conn_offset,
        bool is_allow_adjust)
{
  bool v3; // cl
  char v4; // r15
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  char v8; // al
  _BOOL8 v9; // rdx
  unsigned __int64 v10; // rcx
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *v11; // rax
  std::pair<unsigned int,std::shared_ptr<GameserverConnect> > *m_start; // rdx
  const common::minet::AClientConnect *v13; // rdi
  __int64 *v14; // rax
  __int64 v15; // rax
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *v16; // rax
  std::pair<unsigned int,std::shared_ptr<GameserverConnect> > *v17; // rdx
  __int64 *v18; // rax
  __int64 v19; // rax
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *v20; // rax
  std::pair<unsigned int,std::shared_ptr<GameserverConnect> > *v21; // rdx
  common::milog::MiLogStream *v23; // rcx
  common::minet::AClientMgr<GameserverConnect>::ConnectPtr result; // rax
  bool is_allow_adjusta; // [rsp+8h] [rbp-288h]
  _BOOL4 conn_offseta; // [rsp+Ch] [rbp-284h]
  uint32_t conn_idx; // [rsp+24h] [rbp-26Ch]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator __for_begin; // [rsp+28h] [rbp-268h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator __for_end; // [rsp+30h] [rbp-260h] BYREF
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> v31; // [rsp+38h] [rbp-258h] BYREF
  std::pair<unsigned int,std::shared_ptr<GameserverConnect> > *__in; // [rsp+50h] [rbp-240h]
  std::tuple_element<0,std::pair<unsigned int,std::shared_ptr<GameserverConnect> > >::type *_; // [rsp+58h] [rbp-238h]
  std::tuple_element<1,std::pair<unsigned int,std::shared_ptr<GameserverConnect> > >::type *conn_0; // [rsp+60h] [rbp-230h]
  __int64 v35; // [rsp+68h] [rbp-228h]
  __int64 v36; // [rsp+70h] [rbp-220h]
  __int64 v37; // [rsp+78h] [rbp-218h]
  __int64 v38; // [rsp+80h] [rbp-210h]
  __int64 v39; // [rsp+88h] [rbp-208h]
  __int64 v40; // [rsp+90h] [rbp-200h]
  __int64 v41; // [rsp+98h] [rbp-1F8h]
  __int64 v42; // [rsp+A0h] [rbp-1F0h]
  __int64 v43; // [rsp+A8h] [rbp-1E8h]
  __int64 v44; // [rsp+B0h] [rbp-1E0h]
  __int64 v45; // [rsp+B8h] [rbp-1D8h]
  __int64 v46; // [rsp+C0h] [rbp-1D0h]
  __int64 v47; // [rsp+C8h] [rbp-1C8h]
  __int64 v48; // [rsp+D0h] [rbp-1C0h]
  __int64 v49; // [rsp+D8h] [rbp-1B8h]
  __int64 v50; // [rsp+E0h] [rbp-1B0h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void>::size_type n; // [rsp+E8h] [rbp-1A8h]
  __int64 v52; // [rsp+F0h] [rbp-1A0h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *v53; // [rsp+F8h] [rbp-198h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *p_for_end; // [rsp+100h] [rbp-190h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *v55; // [rsp+108h] [rbp-188h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *v56; // [rsp+110h] [rbp-180h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_capacity; // [rsp+118h] [rbp-178h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type v58; // [rsp+120h] [rbp-170h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type v59; // [rsp+128h] [rbp-168h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type v60; // [rsp+130h] [rbp-160h]
  __int64 v61; // [rsp+138h] [rbp-158h]
  __int64 v62; // [rsp+140h] [rbp-150h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *v63; // [rsp+148h] [rbp-148h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > *v64; // [rsp+150h] [rbp-140h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *v65; // [rsp+158h] [rbp-138h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *v66; // [rsp+160h] [rbp-130h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *v67; // [rsp+168h] [rbp-128h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *v68; // [rsp+170h] [rbp-120h]
  __int64 v69; // [rsp+178h] [rbp-118h]
  __int64 v70; // [rsp+180h] [rbp-110h]
  __int64 v71; // [rsp+188h] [rbp-108h]
  __int64 v72; // [rsp+190h] [rbp-100h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *v73; // [rsp+198h] [rbp-F8h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > *v74; // [rsp+1A0h] [rbp-F0h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *v75; // [rsp+1A8h] [rbp-E8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *p_for_begin; // [rsp+1B0h] [rbp-E0h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *v77; // [rsp+1B8h] [rbp-D8h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *v78; // [rsp+1C0h] [rbp-D0h]
  __int64 v79; // [rsp+1C8h] [rbp-C8h]
  __int64 v80; // [rsp+1D0h] [rbp-C0h]
  __int64 v81; // [rsp+1D8h] [rbp-B8h]
  common::milog::MiLogStream v82; // [rsp+1E0h] [rbp-B0h] BYREF
  char v83[144]; // [rsp+200h] [rbp-90h] BYREF

  conn_offseta = is_allow_adjust;
  is_allow_adjusta = v3;
  v5 = (unsigned __int64)v83;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 9 <unknown> 64 16 9 rlock:489";
  *(_QWORD *)(v5 + 16) = common::minet::AClientMgr<GameserverConnect>::findConnectByConnOffset;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202178560;
  std::shared_lock<std::shared_mutex>::shared_lock(
    (std::shared_lock<std::shared_mutex> *const)(v5 + 64),
    (std::shared_lock<std::shared_mutex>::mutex_type *)(*(_QWORD *)&conn_offset + 640LL));
  if ( std::atomic<common::minet::AClientMgr<GameserverConnect>::Status>::operator common::minet::AClientMgr<GameserverConnect>::Status((const std::atomic<common::minet::AClientMgr<GameserverConnect>::Status> *const)(*(_QWORD *)&conn_offset + 8LL)) != STATUS_START )
    goto LABEL_8;
  v35 = *(_QWORD *)&conn_offset + 696LL;
  v36 = *(_QWORD *)&conn_offset + 696LL;
  v37 = *(_QWORD *)&conn_offset + 696LL;
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 704LL) >> 3) + 0x7FFF8000) )
    __asan_report_load8(*(_QWORD *)&conn_offset + 704LL);
  if ( *(_QWORD *)(v37 + 8) )
    v8 = 0;
  else
LABEL_8:
    v8 = 1;
  if ( v8 )
  {
    std::shared_ptr<GameserverConnect>::shared_ptr((std::shared_ptr<GameserverConnect> *const)this, 0LL);
  }
  else
  {
    v9 = conn_offseta;
    v41 = *(_QWORD *)&conn_offset + 696LL;
    v42 = *(_QWORD *)&conn_offset + 696LL;
    v43 = *(_QWORD *)&conn_offset + 696LL;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 704LL) >> 3) + 0x7FFF8000) )
      __asan_report_load8(*(_QWORD *)&conn_offset + 704LL);
    conn_idx = (unsigned __int64)v9 % *(_QWORD *)(v43 + 8);
    v10 = conn_idx;
    v38 = *(_QWORD *)&conn_offset + 696LL;
    v39 = *(_QWORD *)&conn_offset + 696LL;
    v40 = *(_QWORD *)&conn_offset + 696LL;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 704LL) >> 3) + 0x7FFF8000) )
      __asan_report_load8(*(_QWORD *)&conn_offset + 704LL);
    if ( v10 < *(_QWORD *)(v40 + 8) )
    {
      v47 = *(_QWORD *)&conn_offset + 696LL;
      v48 = conn_idx;
      v49 = *(_QWORD *)&conn_offset + 696LL;
      v50 = conn_idx;
      n = *(_QWORD *)&conn_offset + 696LL;
      v52 = conn_idx;
      *(_BYTE *)(v5 + 48) = v4;
      boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect>>>,void>::nth(
        &v31,
        n);
      v53 = &v31;
      p_for_end = &__for_end;
      v55 = &v31;
      v56 = &v31;
      v11 = &v31;
      if ( *(_BYTE *)(((unsigned __int64)&v31 >> 3) + 0x7FFF8000) )
        v11 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *)__asan_report_load8(&v31);
      m_start = (std::pair<unsigned int,std::shared_ptr<GameserverConnect> > *)v11->m_holder.m_start;
      if ( *(_BYTE *)(((unsigned __int64)p_for_end >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      p_for_end->m_ptr = m_start;
      v31.m_holder.m_size = (boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type)&__for_end.m_ptr->second;
      v13 = std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__for_end.m_ptr->second);
      if ( common::minet::AClientConnect::isConnect(v13) )
      {
        std::shared_ptr<GameserverConnect>::shared_ptr(
          (std::shared_ptr<GameserverConnect> *const)this,
          (const std::shared_ptr<GameserverConnect> *)v31.m_holder.m_size);
      }
      else if ( !is_allow_adjusta )
      {
        common::milog::MiLogStream::create(
          &v82,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
          "findConnectByConnOffset",
          510);
        common::milog::MiLogStream::operator()(&v82, "conn_idx=%u not connect.", conn_idx);
        common::milog::MiLogStream::~MiLogStream(&v82);
        std::shared_ptr<GameserverConnect>::shared_ptr((std::shared_ptr<GameserverConnect> *const)this, 0LL);
      }
      else
      {
        v31.m_holder.m_capacity = *(_QWORD *)&conn_offset + 696LL;
        v69 = *(_QWORD *)&conn_offset + 696LL;
        v70 = *(_QWORD *)&conn_offset + 696LL;
        v71 = *(_QWORD *)&conn_offset + 696LL;
        v72 = *(_QWORD *)&conn_offset + 696LL;
        v14 = (__int64 *)(*(_QWORD *)&conn_offset + 696LL);
        if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 696LL) >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)(*(_QWORD *)&conn_offset + 696LL);
          v14 = (__int64 *)__asan_report_load8(*(_QWORD *)&conn_offset + 696LL);
        }
        v15 = *v14;
        v73 = &v31;
        v74 = (boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > *)v15;
        if ( *(_BYTE *)(((unsigned __int64)&v31 >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)&v31;
          __asan_report_store8();
        }
        v73->m_holder.m_start = v74;
        v75 = &v31;
        p_for_begin = &__for_begin;
        v77 = &v31;
        v78 = &v31;
        v16 = &v31;
        if ( *(_BYTE *)(((unsigned __int64)&v31 >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)&v31;
          v16 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *)__asan_report_load8(&v31);
        }
        v17 = (std::pair<unsigned int,std::shared_ptr<GameserverConnect> > *)v16->m_holder.m_start;
        if ( *(_BYTE *)(((unsigned __int64)p_for_begin >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)p_for_begin;
          __asan_report_store8();
        }
        p_for_begin->m_ptr = v17;
        m_capacity = v31.m_holder.m_capacity;
        v58 = v31.m_holder.m_capacity;
        v59 = v31.m_holder.m_capacity;
        v60 = v31.m_holder.m_capacity;
        v18 = (__int64 *)v31.m_holder.m_capacity;
        if ( *(_BYTE *)((v31.m_holder.m_capacity >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)v31.m_holder.m_capacity;
          v18 = (__int64 *)__asan_report_load8(v31.m_holder.m_capacity);
        }
        v61 = *v18;
        if ( *(_BYTE *)(((v59 + 8) >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)(v59 + 8);
          __asan_report_load8(v59 + 8);
        }
        v62 = *(_QWORD *)(v59 + 8);
        if ( v62 )
          v19 = 24 * v62 + v61;
        else
          v19 = v61;
        v63 = &v31;
        v64 = (boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > *)v19;
        if ( *(_BYTE *)(((unsigned __int64)&v31 >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)&v31;
          __asan_report_store8();
        }
        v63->m_holder.m_start = v64;
        v65 = &v31;
        v66 = &__for_end;
        v67 = &v31;
        v68 = &v31;
        v20 = &v31;
        if ( *(_BYTE *)(((unsigned __int64)&v31 >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)&v31;
          v20 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,void> *)__asan_report_load8(&v31);
        }
        v21 = (std::pair<unsigned int,std::shared_ptr<GameserverConnect> > *)v20->m_holder.m_start;
        if ( *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)v66;
          __asan_report_store8();
        }
        v66->m_ptr = v21;
        while ( __for_begin.m_ptr != __for_end.m_ptr )
        {
          if ( !__for_begin.m_ptr )
          {
            __asan_handle_no_return(v13);
            __assert_fail(
              "!!m_ptr",
              "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
              0x8Eu,
              "boost::container::vec_iterator<Pointer, IsConst>::reference boost::container::vec_iterator<Pointer, IsCons"
              "t>::operator*() const [with Pointer = std::pair<unsigned int, std::shared_ptr<GameserverConnect> >*; bool "
              "IsConst = false; boost::container::vec_iterator<Pointer, IsConst>::reference = std::pair<unsigned int, std"
              "::shared_ptr<GameserverConnect> >&]");
          }
          __in = __for_begin.m_ptr;
          _ = std::get<0ul,unsigned int,std::shared_ptr<GameserverConnect>>(__for_begin.m_ptr);
          conn_0 = std::get<1ul,unsigned int,std::shared_ptr<GameserverConnect>>(__in);
          v13 = (const common::minet::AClientConnect *)conn_0;
          if ( std::__shared_ptr<GameserverConnect,(__gnu_cxx::_Lock_policy)2>::operator bool(conn_0) )
          {
            v13 = std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_0);
            if ( common::minet::AClientConnect::isConnect(v13) )
            {
              std::shared_ptr<GameserverConnect>::shared_ptr((std::shared_ptr<GameserverConnect> *const)this, conn_0);
              goto LABEL_65;
            }
          }
          if ( !__for_begin.m_ptr )
          {
            __asan_handle_no_return(v13);
            __assert_fail(
              "!!m_ptr",
              "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
              0x98u,
              "boost::container::vec_iterator<Pointer, IsConst>& boost::container::vec_iterator<Pointer, IsConst>::operat"
              "or++() [with Pointer = std::pair<unsigned int, std::shared_ptr<GameserverConnect> >*; bool IsConst = false]");
          }
          ++__for_begin.m_ptr;
        }
        common::milog::MiLogStream::create(
          &v82,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
          "findConnectByConnOffset",
          525);
        v23 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                &v82,
                (const char (*)[55])"[NETWORK] [ECS] can not find any usable connect, size:");
        v79 = *(_QWORD *)&conn_offset + 696LL;
        v80 = *(_QWORD *)&conn_offset + 696LL;
        v81 = *(_QWORD *)&conn_offset + 696LL;
        if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 704LL) >> 3) + 0x7FFF8000) )
          __asan_report_load8(*(_QWORD *)&conn_offset + 704LL);
        v31.m_holder.m_start = *(boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer *)(v81 + 8);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v23, (const unsigned __int64 *)&v31);
        common::milog::MiLogStream::~MiLogStream(&v82);
        std::shared_ptr<GameserverConnect>::shared_ptr((std::shared_ptr<GameserverConnect> *const)this, 0LL);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v82,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "../framework/common/minet/aclient/include/aclient_mgr.hpp",
        "findConnectByConnOffset",
        499);
      v44 = *(_QWORD *)&conn_offset + 696LL;
      v45 = *(_QWORD *)&conn_offset + 696LL;
      v46 = *(_QWORD *)&conn_offset + 696LL;
      if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 704LL) >> 3) + 0x7FFF8000) )
        __asan_report_load8(*(_QWORD *)&conn_offset + 704LL);
      common::milog::MiLogStream::operator()(
        &v82,
        "conn_idx=%u greator than conn_map_.size=%lu",
        conn_idx,
        *(_QWORD *)(v46 + 8));
      common::milog::MiLogStream::~MiLogStream(&v82);
      std::shared_ptr<GameserverConnect>::shared_ptr((std::shared_ptr<GameserverConnect> *const)this, 0LL);
    }
  }
LABEL_65:
  std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v5 + 64));
  if ( v83 == (char *)v5 )
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
  result._M_ptr = (std::__shared_ptr<GameserverConnect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 487: range 000000000C864F08-000000000C865A22
// local variable allocation has failed, the output may be wrong!
common::minet::AClientMgr<PathfindingserverConnect>::ConnectPtr __cdecl common::minet::AClientMgr<PathfindingserverConnect>::findConnectByConnOffset(
        common::minet::AClientMgr<PathfindingserverConnect> *const this,
        uint32_t conn_offset,
        bool is_allow_adjust)
{
  bool v3; // cl
  char v4; // r15
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  char v8; // al
  _BOOL8 v9; // rdx
  unsigned __int64 v10; // rcx
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *v11; // rax
  std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > *m_start; // rdx
  const common::minet::AClientConnect *v13; // rdi
  __int64 *v14; // rax
  __int64 v15; // rax
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *v16; // rax
  std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > *v17; // rdx
  __int64 *v18; // rax
  __int64 v19; // rax
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *v20; // rax
  std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > *v21; // rdx
  common::milog::MiLogStream *v23; // rcx
  common::minet::AClientMgr<PathfindingserverConnect>::ConnectPtr result; // rax
  bool is_allow_adjusta; // [rsp+8h] [rbp-288h]
  _BOOL4 conn_offseta; // [rsp+Ch] [rbp-284h]
  uint32_t conn_idx; // [rsp+24h] [rbp-26Ch]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator __for_begin; // [rsp+28h] [rbp-268h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator __for_end; // [rsp+30h] [rbp-260h] BYREF
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> v31; // [rsp+38h] [rbp-258h] BYREF
  std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > *__in; // [rsp+50h] [rbp-240h]
  std::tuple_element<0,std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >::type *_; // [rsp+58h] [rbp-238h]
  std::tuple_element<1,std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >::type *conn_0; // [rsp+60h] [rbp-230h]
  __int64 v35; // [rsp+68h] [rbp-228h]
  __int64 v36; // [rsp+70h] [rbp-220h]
  __int64 v37; // [rsp+78h] [rbp-218h]
  __int64 v38; // [rsp+80h] [rbp-210h]
  __int64 v39; // [rsp+88h] [rbp-208h]
  __int64 v40; // [rsp+90h] [rbp-200h]
  __int64 v41; // [rsp+98h] [rbp-1F8h]
  __int64 v42; // [rsp+A0h] [rbp-1F0h]
  __int64 v43; // [rsp+A8h] [rbp-1E8h]
  __int64 v44; // [rsp+B0h] [rbp-1E0h]
  __int64 v45; // [rsp+B8h] [rbp-1D8h]
  __int64 v46; // [rsp+C0h] [rbp-1D0h]
  __int64 v47; // [rsp+C8h] [rbp-1C8h]
  __int64 v48; // [rsp+D0h] [rbp-1C0h]
  __int64 v49; // [rsp+D8h] [rbp-1B8h]
  __int64 v50; // [rsp+E0h] [rbp-1B0h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void>::size_type n; // [rsp+E8h] [rbp-1A8h]
  __int64 v52; // [rsp+F0h] [rbp-1A0h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *v53; // [rsp+F8h] [rbp-198h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *p_for_end; // [rsp+100h] [rbp-190h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *v55; // [rsp+108h] [rbp-188h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *v56; // [rsp+110h] [rbp-180h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_capacity; // [rsp+118h] [rbp-178h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type v58; // [rsp+120h] [rbp-170h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type v59; // [rsp+128h] [rbp-168h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type v60; // [rsp+130h] [rbp-160h]
  __int64 v61; // [rsp+138h] [rbp-158h]
  __int64 v62; // [rsp+140h] [rbp-150h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *v63; // [rsp+148h] [rbp-148h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > *v64; // [rsp+150h] [rbp-140h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *v65; // [rsp+158h] [rbp-138h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *v66; // [rsp+160h] [rbp-130h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *v67; // [rsp+168h] [rbp-128h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *v68; // [rsp+170h] [rbp-120h]
  __int64 v69; // [rsp+178h] [rbp-118h]
  __int64 v70; // [rsp+180h] [rbp-110h]
  __int64 v71; // [rsp+188h] [rbp-108h]
  __int64 v72; // [rsp+190h] [rbp-100h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *v73; // [rsp+198h] [rbp-F8h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > *v74; // [rsp+1A0h] [rbp-F0h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *v75; // [rsp+1A8h] [rbp-E8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *p_for_begin; // [rsp+1B0h] [rbp-E0h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *v77; // [rsp+1B8h] [rbp-D8h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *v78; // [rsp+1C0h] [rbp-D0h]
  __int64 v79; // [rsp+1C8h] [rbp-C8h]
  __int64 v80; // [rsp+1D0h] [rbp-C0h]
  __int64 v81; // [rsp+1D8h] [rbp-B8h]
  common::milog::MiLogStream v82; // [rsp+1E0h] [rbp-B0h] BYREF
  char v83[144]; // [rsp+200h] [rbp-90h] BYREF

  conn_offseta = is_allow_adjust;
  is_allow_adjusta = v3;
  v5 = (unsigned __int64)v83;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 9 <unknown> 64 16 9 rlock:489";
  *(_QWORD *)(v5 + 16) = common::minet::AClientMgr<PathfindingserverConnect>::findConnectByConnOffset;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202178560;
  std::shared_lock<std::shared_mutex>::shared_lock(
    (std::shared_lock<std::shared_mutex> *const)(v5 + 64),
    (std::shared_lock<std::shared_mutex>::mutex_type *)(*(_QWORD *)&conn_offset + 640LL));
  if ( std::atomic<common::minet::AClientMgr<PathfindingserverConnect>::Status>::operator common::minet::AClientMgr<PathfindingserverConnect>::Status((const std::atomic<common::minet::AClientMgr<PathfindingserverConnect>::Status> *const)(*(_QWORD *)&conn_offset + 8LL)) != STATUS_START_0 )
    goto LABEL_8;
  v35 = *(_QWORD *)&conn_offset + 696LL;
  v36 = *(_QWORD *)&conn_offset + 696LL;
  v37 = *(_QWORD *)&conn_offset + 696LL;
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 704LL) >> 3) + 0x7FFF8000) )
    __asan_report_load8(*(_QWORD *)&conn_offset + 704LL);
  if ( *(_QWORD *)(v37 + 8) )
    v8 = 0;
  else
LABEL_8:
    v8 = 1;
  if ( v8 )
  {
    std::shared_ptr<PathfindingserverConnect>::shared_ptr((std::shared_ptr<PathfindingserverConnect> *const)this, 0LL);
  }
  else
  {
    v9 = conn_offseta;
    v41 = *(_QWORD *)&conn_offset + 696LL;
    v42 = *(_QWORD *)&conn_offset + 696LL;
    v43 = *(_QWORD *)&conn_offset + 696LL;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 704LL) >> 3) + 0x7FFF8000) )
      __asan_report_load8(*(_QWORD *)&conn_offset + 704LL);
    conn_idx = (unsigned __int64)v9 % *(_QWORD *)(v43 + 8);
    v10 = conn_idx;
    v38 = *(_QWORD *)&conn_offset + 696LL;
    v39 = *(_QWORD *)&conn_offset + 696LL;
    v40 = *(_QWORD *)&conn_offset + 696LL;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 704LL) >> 3) + 0x7FFF8000) )
      __asan_report_load8(*(_QWORD *)&conn_offset + 704LL);
    if ( v10 < *(_QWORD *)(v40 + 8) )
    {
      v47 = *(_QWORD *)&conn_offset + 696LL;
      v48 = conn_idx;
      v49 = *(_QWORD *)&conn_offset + 696LL;
      v50 = conn_idx;
      n = *(_QWORD *)&conn_offset + 696LL;
      v52 = conn_idx;
      *(_BYTE *)(v5 + 48) = v4;
      boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect>>>,void>::nth(
        &v31,
        n);
      v53 = &v31;
      p_for_end = &__for_end;
      v55 = &v31;
      v56 = &v31;
      v11 = &v31;
      if ( *(_BYTE *)(((unsigned __int64)&v31 >> 3) + 0x7FFF8000) )
        v11 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *)__asan_report_load8(&v31);
      m_start = (std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > *)v11->m_holder.m_start;
      if ( *(_BYTE *)(((unsigned __int64)p_for_end >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      p_for_end->m_ptr = m_start;
      v31.m_holder.m_size = (boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type)&__for_end.m_ptr->second;
      v13 = std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__for_end.m_ptr->second);
      if ( common::minet::AClientConnect::isConnect(v13) )
      {
        std::shared_ptr<PathfindingserverConnect>::shared_ptr(
          (std::shared_ptr<PathfindingserverConnect> *const)this,
          (const std::shared_ptr<PathfindingserverConnect> *)v31.m_holder.m_size);
      }
      else if ( !is_allow_adjusta )
      {
        common::milog::MiLogStream::create(
          &v82,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
          "findConnectByConnOffset",
          510);
        common::milog::MiLogStream::operator()(&v82, "conn_idx=%u not connect.", conn_idx);
        common::milog::MiLogStream::~MiLogStream(&v82);
        std::shared_ptr<PathfindingserverConnect>::shared_ptr(
          (std::shared_ptr<PathfindingserverConnect> *const)this,
          0LL);
      }
      else
      {
        v31.m_holder.m_capacity = *(_QWORD *)&conn_offset + 696LL;
        v69 = *(_QWORD *)&conn_offset + 696LL;
        v70 = *(_QWORD *)&conn_offset + 696LL;
        v71 = *(_QWORD *)&conn_offset + 696LL;
        v72 = *(_QWORD *)&conn_offset + 696LL;
        v14 = (__int64 *)(*(_QWORD *)&conn_offset + 696LL);
        if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 696LL) >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)(*(_QWORD *)&conn_offset + 696LL);
          v14 = (__int64 *)__asan_report_load8(*(_QWORD *)&conn_offset + 696LL);
        }
        v15 = *v14;
        v73 = &v31;
        v74 = (boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > *)v15;
        if ( *(_BYTE *)(((unsigned __int64)&v31 >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)&v31;
          __asan_report_store8();
        }
        v73->m_holder.m_start = v74;
        v75 = &v31;
        p_for_begin = &__for_begin;
        v77 = &v31;
        v78 = &v31;
        v16 = &v31;
        if ( *(_BYTE *)(((unsigned __int64)&v31 >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)&v31;
          v16 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *)__asan_report_load8(&v31);
        }
        v17 = (std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > *)v16->m_holder.m_start;
        if ( *(_BYTE *)(((unsigned __int64)p_for_begin >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)p_for_begin;
          __asan_report_store8();
        }
        p_for_begin->m_ptr = v17;
        m_capacity = v31.m_holder.m_capacity;
        v58 = v31.m_holder.m_capacity;
        v59 = v31.m_holder.m_capacity;
        v60 = v31.m_holder.m_capacity;
        v18 = (__int64 *)v31.m_holder.m_capacity;
        if ( *(_BYTE *)((v31.m_holder.m_capacity >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)v31.m_holder.m_capacity;
          v18 = (__int64 *)__asan_report_load8(v31.m_holder.m_capacity);
        }
        v61 = *v18;
        if ( *(_BYTE *)(((v59 + 8) >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)(v59 + 8);
          __asan_report_load8(v59 + 8);
        }
        v62 = *(_QWORD *)(v59 + 8);
        if ( v62 )
          v19 = 24 * v62 + v61;
        else
          v19 = v61;
        v63 = &v31;
        v64 = (boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > *)v19;
        if ( *(_BYTE *)(((unsigned __int64)&v31 >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)&v31;
          __asan_report_store8();
        }
        v63->m_holder.m_start = v64;
        v65 = &v31;
        v66 = &__for_end;
        v67 = &v31;
        v68 = &v31;
        v20 = &v31;
        if ( *(_BYTE *)(((unsigned __int64)&v31 >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)&v31;
          v20 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,void> *)__asan_report_load8(&v31);
        }
        v21 = (std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > *)v20->m_holder.m_start;
        if ( *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)v66;
          __asan_report_store8();
        }
        v66->m_ptr = v21;
        while ( __for_begin.m_ptr != __for_end.m_ptr )
        {
          if ( !__for_begin.m_ptr )
          {
            __asan_handle_no_return(v13);
            __assert_fail(
              "!!m_ptr",
              "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
              0x8Eu,
              "boost::container::vec_iterator<Pointer, IsConst>::reference boost::container::vec_iterator<Pointer, IsCons"
              "t>::operator*() const [with Pointer = std::pair<unsigned int, std::shared_ptr<PathfindingserverConnect> >*"
              "; bool IsConst = false; boost::container::vec_iterator<Pointer, IsConst>::reference = std::pair<unsigned i"
              "nt, std::shared_ptr<PathfindingserverConnect> >&]");
          }
          __in = __for_begin.m_ptr;
          _ = std::get<0ul,unsigned int,std::shared_ptr<PathfindingserverConnect>>(__for_begin.m_ptr);
          conn_0 = std::get<1ul,unsigned int,std::shared_ptr<PathfindingserverConnect>>(__in);
          v13 = (const common::minet::AClientConnect *)conn_0;
          if ( std::__shared_ptr<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2>::operator bool(conn_0) )
          {
            v13 = std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_0);
            if ( common::minet::AClientConnect::isConnect(v13) )
            {
              std::shared_ptr<PathfindingserverConnect>::shared_ptr(
                (std::shared_ptr<PathfindingserverConnect> *const)this,
                conn_0);
              goto LABEL_65;
            }
          }
          if ( !__for_begin.m_ptr )
          {
            __asan_handle_no_return(v13);
            __assert_fail(
              "!!m_ptr",
              "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
              0x98u,
              "boost::container::vec_iterator<Pointer, IsConst>& boost::container::vec_iterator<Pointer, IsConst>::operat"
              "or++() [with Pointer = std::pair<unsigned int, std::shared_ptr<PathfindingserverConnect> >*; bool IsConst = false]");
          }
          ++__for_begin.m_ptr;
        }
        common::milog::MiLogStream::create(
          &v82,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
          "findConnectByConnOffset",
          525);
        v23 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                &v82,
                (const char (*)[55])"[NETWORK] [ECS] can not find any usable connect, size:");
        v79 = *(_QWORD *)&conn_offset + 696LL;
        v80 = *(_QWORD *)&conn_offset + 696LL;
        v81 = *(_QWORD *)&conn_offset + 696LL;
        if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 704LL) >> 3) + 0x7FFF8000) )
          __asan_report_load8(*(_QWORD *)&conn_offset + 704LL);
        v31.m_holder.m_start = *(boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer *)(v81 + 8);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v23, (const unsigned __int64 *)&v31);
        common::milog::MiLogStream::~MiLogStream(&v82);
        std::shared_ptr<PathfindingserverConnect>::shared_ptr(
          (std::shared_ptr<PathfindingserverConnect> *const)this,
          0LL);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v82,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "../framework/common/minet/aclient/include/aclient_mgr.hpp",
        "findConnectByConnOffset",
        499);
      v44 = *(_QWORD *)&conn_offset + 696LL;
      v45 = *(_QWORD *)&conn_offset + 696LL;
      v46 = *(_QWORD *)&conn_offset + 696LL;
      if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 704LL) >> 3) + 0x7FFF8000) )
        __asan_report_load8(*(_QWORD *)&conn_offset + 704LL);
      common::milog::MiLogStream::operator()(
        &v82,
        "conn_idx=%u greator than conn_map_.size=%lu",
        conn_idx,
        *(_QWORD *)(v46 + 8));
      common::milog::MiLogStream::~MiLogStream(&v82);
      std::shared_ptr<PathfindingserverConnect>::shared_ptr((std::shared_ptr<PathfindingserverConnect> *const)this, 0LL);
    }
  }
LABEL_65:
  std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v5 + 64));
  if ( v83 == (char *)v5 )
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
  result._M_ptr = (std::__shared_ptr<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 487: range 000000000C8643EC-000000000C864F06
// local variable allocation has failed, the output may be wrong!
common::minet::AClientMgr<TothemoonserverConnect>::ConnectPtr __cdecl common::minet::AClientMgr<TothemoonserverConnect>::findConnectByConnOffset(
        common::minet::AClientMgr<TothemoonserverConnect> *const this,
        uint32_t conn_offset,
        bool is_allow_adjust)
{
  bool v3; // cl
  char v4; // r15
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  char v8; // al
  _BOOL8 v9; // rdx
  unsigned __int64 v10; // rcx
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *v11; // rax
  std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > *m_start; // rdx
  const common::minet::AClientConnect *v13; // rdi
  __int64 *v14; // rax
  __int64 v15; // rax
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *v16; // rax
  std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > *v17; // rdx
  __int64 *v18; // rax
  __int64 v19; // rax
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *v20; // rax
  std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > *v21; // rdx
  common::milog::MiLogStream *v23; // rcx
  common::minet::AClientMgr<TothemoonserverConnect>::ConnectPtr result; // rax
  bool is_allow_adjusta; // [rsp+8h] [rbp-288h]
  _BOOL4 conn_offseta; // [rsp+Ch] [rbp-284h]
  uint32_t conn_idx; // [rsp+24h] [rbp-26Ch]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator __for_begin; // [rsp+28h] [rbp-268h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator __for_end; // [rsp+30h] [rbp-260h] BYREF
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> v31; // [rsp+38h] [rbp-258h] BYREF
  std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > *__in; // [rsp+50h] [rbp-240h]
  std::tuple_element<0,std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >::type *_; // [rsp+58h] [rbp-238h]
  std::tuple_element<1,std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >::type *conn_0; // [rsp+60h] [rbp-230h]
  __int64 v35; // [rsp+68h] [rbp-228h]
  __int64 v36; // [rsp+70h] [rbp-220h]
  __int64 v37; // [rsp+78h] [rbp-218h]
  __int64 v38; // [rsp+80h] [rbp-210h]
  __int64 v39; // [rsp+88h] [rbp-208h]
  __int64 v40; // [rsp+90h] [rbp-200h]
  __int64 v41; // [rsp+98h] [rbp-1F8h]
  __int64 v42; // [rsp+A0h] [rbp-1F0h]
  __int64 v43; // [rsp+A8h] [rbp-1E8h]
  __int64 v44; // [rsp+B0h] [rbp-1E0h]
  __int64 v45; // [rsp+B8h] [rbp-1D8h]
  __int64 v46; // [rsp+C0h] [rbp-1D0h]
  __int64 v47; // [rsp+C8h] [rbp-1C8h]
  __int64 v48; // [rsp+D0h] [rbp-1C0h]
  __int64 v49; // [rsp+D8h] [rbp-1B8h]
  __int64 v50; // [rsp+E0h] [rbp-1B0h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void>::size_type n; // [rsp+E8h] [rbp-1A8h]
  __int64 v52; // [rsp+F0h] [rbp-1A0h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *v53; // [rsp+F8h] [rbp-198h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *p_for_end; // [rsp+100h] [rbp-190h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *v55; // [rsp+108h] [rbp-188h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *v56; // [rsp+110h] [rbp-180h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_capacity; // [rsp+118h] [rbp-178h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type v58; // [rsp+120h] [rbp-170h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type v59; // [rsp+128h] [rbp-168h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type v60; // [rsp+130h] [rbp-160h]
  __int64 v61; // [rsp+138h] [rbp-158h]
  __int64 v62; // [rsp+140h] [rbp-150h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *v63; // [rsp+148h] [rbp-148h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > *v64; // [rsp+150h] [rbp-140h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *v65; // [rsp+158h] [rbp-138h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *v66; // [rsp+160h] [rbp-130h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *v67; // [rsp+168h] [rbp-128h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *v68; // [rsp+170h] [rbp-120h]
  __int64 v69; // [rsp+178h] [rbp-118h]
  __int64 v70; // [rsp+180h] [rbp-110h]
  __int64 v71; // [rsp+188h] [rbp-108h]
  __int64 v72; // [rsp+190h] [rbp-100h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *v73; // [rsp+198h] [rbp-F8h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > *v74; // [rsp+1A0h] [rbp-F0h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *v75; // [rsp+1A8h] [rbp-E8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *p_for_begin; // [rsp+1B0h] [rbp-E0h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *v77; // [rsp+1B8h] [rbp-D8h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *v78; // [rsp+1C0h] [rbp-D0h]
  __int64 v79; // [rsp+1C8h] [rbp-C8h]
  __int64 v80; // [rsp+1D0h] [rbp-C0h]
  __int64 v81; // [rsp+1D8h] [rbp-B8h]
  common::milog::MiLogStream v82; // [rsp+1E0h] [rbp-B0h] BYREF
  char v83[144]; // [rsp+200h] [rbp-90h] BYREF

  conn_offseta = is_allow_adjust;
  is_allow_adjusta = v3;
  v5 = (unsigned __int64)v83;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 9 <unknown> 64 16 9 rlock:489";
  *(_QWORD *)(v5 + 16) = common::minet::AClientMgr<TothemoonserverConnect>::findConnectByConnOffset;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202178560;
  std::shared_lock<std::shared_mutex>::shared_lock(
    (std::shared_lock<std::shared_mutex> *const)(v5 + 64),
    (std::shared_lock<std::shared_mutex>::mutex_type *)(*(_QWORD *)&conn_offset + 640LL));
  if ( std::atomic<common::minet::AClientMgr<TothemoonserverConnect>::Status>::operator common::minet::AClientMgr<TothemoonserverConnect>::Status((const std::atomic<common::minet::AClientMgr<TothemoonserverConnect>::Status> *const)(*(_QWORD *)&conn_offset + 8LL)) != STATUS_START_1 )
    goto LABEL_8;
  v35 = *(_QWORD *)&conn_offset + 696LL;
  v36 = *(_QWORD *)&conn_offset + 696LL;
  v37 = *(_QWORD *)&conn_offset + 696LL;
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 704LL) >> 3) + 0x7FFF8000) )
    __asan_report_load8(*(_QWORD *)&conn_offset + 704LL);
  if ( *(_QWORD *)(v37 + 8) )
    v8 = 0;
  else
LABEL_8:
    v8 = 1;
  if ( v8 )
  {
    std::shared_ptr<TothemoonserverConnect>::shared_ptr((std::shared_ptr<TothemoonserverConnect> *const)this, 0LL);
  }
  else
  {
    v9 = conn_offseta;
    v41 = *(_QWORD *)&conn_offset + 696LL;
    v42 = *(_QWORD *)&conn_offset + 696LL;
    v43 = *(_QWORD *)&conn_offset + 696LL;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 704LL) >> 3) + 0x7FFF8000) )
      __asan_report_load8(*(_QWORD *)&conn_offset + 704LL);
    conn_idx = (unsigned __int64)v9 % *(_QWORD *)(v43 + 8);
    v10 = conn_idx;
    v38 = *(_QWORD *)&conn_offset + 696LL;
    v39 = *(_QWORD *)&conn_offset + 696LL;
    v40 = *(_QWORD *)&conn_offset + 696LL;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 704LL) >> 3) + 0x7FFF8000) )
      __asan_report_load8(*(_QWORD *)&conn_offset + 704LL);
    if ( v10 < *(_QWORD *)(v40 + 8) )
    {
      v47 = *(_QWORD *)&conn_offset + 696LL;
      v48 = conn_idx;
      v49 = *(_QWORD *)&conn_offset + 696LL;
      v50 = conn_idx;
      n = *(_QWORD *)&conn_offset + 696LL;
      v52 = conn_idx;
      *(_BYTE *)(v5 + 48) = v4;
      boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect>>>,void>::nth(
        &v31,
        n);
      v53 = &v31;
      p_for_end = &__for_end;
      v55 = &v31;
      v56 = &v31;
      v11 = &v31;
      if ( *(_BYTE *)(((unsigned __int64)&v31 >> 3) + 0x7FFF8000) )
        v11 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *)__asan_report_load8(&v31);
      m_start = (std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > *)v11->m_holder.m_start;
      if ( *(_BYTE *)(((unsigned __int64)p_for_end >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      p_for_end->m_ptr = m_start;
      v31.m_holder.m_size = (boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type)&__for_end.m_ptr->second;
      v13 = std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__for_end.m_ptr->second);
      if ( common::minet::AClientConnect::isConnect(v13) )
      {
        std::shared_ptr<TothemoonserverConnect>::shared_ptr(
          (std::shared_ptr<TothemoonserverConnect> *const)this,
          (const std::shared_ptr<TothemoonserverConnect> *)v31.m_holder.m_size);
      }
      else if ( !is_allow_adjusta )
      {
        common::milog::MiLogStream::create(
          &v82,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
          "findConnectByConnOffset",
          510);
        common::milog::MiLogStream::operator()(&v82, "conn_idx=%u not connect.", conn_idx);
        common::milog::MiLogStream::~MiLogStream(&v82);
        std::shared_ptr<TothemoonserverConnect>::shared_ptr((std::shared_ptr<TothemoonserverConnect> *const)this, 0LL);
      }
      else
      {
        v31.m_holder.m_capacity = *(_QWORD *)&conn_offset + 696LL;
        v69 = *(_QWORD *)&conn_offset + 696LL;
        v70 = *(_QWORD *)&conn_offset + 696LL;
        v71 = *(_QWORD *)&conn_offset + 696LL;
        v72 = *(_QWORD *)&conn_offset + 696LL;
        v14 = (__int64 *)(*(_QWORD *)&conn_offset + 696LL);
        if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 696LL) >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)(*(_QWORD *)&conn_offset + 696LL);
          v14 = (__int64 *)__asan_report_load8(*(_QWORD *)&conn_offset + 696LL);
        }
        v15 = *v14;
        v73 = &v31;
        v74 = (boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > *)v15;
        if ( *(_BYTE *)(((unsigned __int64)&v31 >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)&v31;
          __asan_report_store8();
        }
        v73->m_holder.m_start = v74;
        v75 = &v31;
        p_for_begin = &__for_begin;
        v77 = &v31;
        v78 = &v31;
        v16 = &v31;
        if ( *(_BYTE *)(((unsigned __int64)&v31 >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)&v31;
          v16 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *)__asan_report_load8(&v31);
        }
        v17 = (std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > *)v16->m_holder.m_start;
        if ( *(_BYTE *)(((unsigned __int64)p_for_begin >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)p_for_begin;
          __asan_report_store8();
        }
        p_for_begin->m_ptr = v17;
        m_capacity = v31.m_holder.m_capacity;
        v58 = v31.m_holder.m_capacity;
        v59 = v31.m_holder.m_capacity;
        v60 = v31.m_holder.m_capacity;
        v18 = (__int64 *)v31.m_holder.m_capacity;
        if ( *(_BYTE *)((v31.m_holder.m_capacity >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)v31.m_holder.m_capacity;
          v18 = (__int64 *)__asan_report_load8(v31.m_holder.m_capacity);
        }
        v61 = *v18;
        if ( *(_BYTE *)(((v59 + 8) >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)(v59 + 8);
          __asan_report_load8(v59 + 8);
        }
        v62 = *(_QWORD *)(v59 + 8);
        if ( v62 )
          v19 = 24 * v62 + v61;
        else
          v19 = v61;
        v63 = &v31;
        v64 = (boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > *)v19;
        if ( *(_BYTE *)(((unsigned __int64)&v31 >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)&v31;
          __asan_report_store8();
        }
        v63->m_holder.m_start = v64;
        v65 = &v31;
        v66 = &__for_end;
        v67 = &v31;
        v68 = &v31;
        v20 = &v31;
        if ( *(_BYTE *)(((unsigned __int64)&v31 >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)&v31;
          v20 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,void> *)__asan_report_load8(&v31);
        }
        v21 = (std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > *)v20->m_holder.m_start;
        if ( *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) )
        {
          v13 = (const common::minet::AClientConnect *)v66;
          __asan_report_store8();
        }
        v66->m_ptr = v21;
        while ( __for_begin.m_ptr != __for_end.m_ptr )
        {
          if ( !__for_begin.m_ptr )
          {
            __asan_handle_no_return(v13);
            __assert_fail(
              "!!m_ptr",
              "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
              0x8Eu,
              "boost::container::vec_iterator<Pointer, IsConst>::reference boost::container::vec_iterator<Pointer, IsCons"
              "t>::operator*() const [with Pointer = std::pair<unsigned int, std::shared_ptr<TothemoonserverConnect> >*; "
              "bool IsConst = false; boost::container::vec_iterator<Pointer, IsConst>::reference = std::pair<unsigned int"
              ", std::shared_ptr<TothemoonserverConnect> >&]");
          }
          __in = __for_begin.m_ptr;
          _ = std::get<0ul,unsigned int,std::shared_ptr<TothemoonserverConnect>>(__for_begin.m_ptr);
          conn_0 = std::get<1ul,unsigned int,std::shared_ptr<TothemoonserverConnect>>(__in);
          v13 = (const common::minet::AClientConnect *)conn_0;
          if ( std::__shared_ptr<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2>::operator bool(conn_0) )
          {
            v13 = std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_0);
            if ( common::minet::AClientConnect::isConnect(v13) )
            {
              std::shared_ptr<TothemoonserverConnect>::shared_ptr(
                (std::shared_ptr<TothemoonserverConnect> *const)this,
                conn_0);
              goto LABEL_65;
            }
          }
          if ( !__for_begin.m_ptr )
          {
            __asan_handle_no_return(v13);
            __assert_fail(
              "!!m_ptr",
              "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
              0x98u,
              "boost::container::vec_iterator<Pointer, IsConst>& boost::container::vec_iterator<Pointer, IsConst>::operat"
              "or++() [with Pointer = std::pair<unsigned int, std::shared_ptr<TothemoonserverConnect> >*; bool IsConst = false]");
          }
          ++__for_begin.m_ptr;
        }
        common::milog::MiLogStream::create(
          &v82,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/aclient/include/aclient_mgr.hpp",
          "findConnectByConnOffset",
          525);
        v23 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                &v82,
                (const char (*)[55])"[NETWORK] [ECS] can not find any usable connect, size:");
        v79 = *(_QWORD *)&conn_offset + 696LL;
        v80 = *(_QWORD *)&conn_offset + 696LL;
        v81 = *(_QWORD *)&conn_offset + 696LL;
        if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 704LL) >> 3) + 0x7FFF8000) )
          __asan_report_load8(*(_QWORD *)&conn_offset + 704LL);
        v31.m_holder.m_start = *(boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer *)(v81 + 8);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v23, (const unsigned __int64 *)&v31);
        common::milog::MiLogStream::~MiLogStream(&v82);
        std::shared_ptr<TothemoonserverConnect>::shared_ptr((std::shared_ptr<TothemoonserverConnect> *const)this, 0LL);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v82,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "../framework/common/minet/aclient/include/aclient_mgr.hpp",
        "findConnectByConnOffset",
        499);
      v44 = *(_QWORD *)&conn_offset + 696LL;
      v45 = *(_QWORD *)&conn_offset + 696LL;
      v46 = *(_QWORD *)&conn_offset + 696LL;
      if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&conn_offset + 704LL) >> 3) + 0x7FFF8000) )
        __asan_report_load8(*(_QWORD *)&conn_offset + 704LL);
      common::milog::MiLogStream::operator()(
        &v82,
        "conn_idx=%u greator than conn_map_.size=%lu",
        conn_idx,
        *(_QWORD *)(v46 + 8));
      common::milog::MiLogStream::~MiLogStream(&v82);
      std::shared_ptr<TothemoonserverConnect>::shared_ptr((std::shared_ptr<TothemoonserverConnect> *const)this, 0LL);
    }
  }
LABEL_65:
  std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v5 + 64));
  if ( v83 == (char *)v5 )
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
  result._M_ptr = (std::__shared_ptr<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 535: range 000000000C85FE72-000000000C860041
int __cdecl common::minet::AClientMgr<DispatchConnect>::sendPacketByAppId(
        common::minet::AClientMgr<DispatchConnect> *const this,
        common::minet::PacketPtr *p_packet_ptr,
        uint32_t app_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int v6; // r14d
  std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  unsigned __int64 v9; // rax
  __int64 (__fastcall *v10)(std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int result; // eax
  std::shared_ptr<common::minet::Packet> v13; // [rsp+20h] [rbp-80h] BYREF
  char v14[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 connect_ptr:537";
  *(_QWORD *)(v3 + 16) = common::minet::AClientMgr<DispatchConnect>::sendPacketByAppId;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::minet::AClientMgr<DispatchConnect>::findConnectByAppId(
    (common::minet::AClientMgr<DispatchConnect> *const)(v3 + 32),
    (__int64)this,
    app_id);
  if ( std::operator==<DispatchConnect>(0LL, (const std::shared_ptr<DispatchConnect> *)(v3 + 32)) )
  {
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v7);
    v9 = (unsigned __int64)(v8->_vptr_AClientConnect + 12);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(v8->_vptr_AClientConnect + 12);
    v10 = *(__int64 (__fastcall **)(std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v9;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v13, p_packet_ptr);
    v6 = v10(v8, &v13);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v13);
  }
  std::shared_ptr<DispatchConnect>::~shared_ptr((std::shared_ptr<DispatchConnect> *const)(v3 + 32));
  result = v6;
  if ( v14 == (char *)v3 )
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

// Line 535: range 000000000C7BD168-000000000C7BD337
int __cdecl common::minet::AClientMgr<GameserverConnect>::sendPacketByAppId(
        common::minet::AClientMgr<GameserverConnect> *const this,
        common::minet::PacketPtr *p_packet_ptr,
        uint32_t app_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int v6; // r14d
  std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  unsigned __int64 v9; // rax
  __int64 (__fastcall *v10)(std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int result; // eax
  std::shared_ptr<common::minet::Packet> v13; // [rsp+20h] [rbp-80h] BYREF
  char v14[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 connect_ptr:537";
  *(_QWORD *)(v3 + 16) = common::minet::AClientMgr<GameserverConnect>::sendPacketByAppId;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::minet::AClientMgr<GameserverConnect>::findConnectByAppId(
    (common::minet::AClientMgr<GameserverConnect> *const)(v3 + 32),
    (__int64)this,
    app_id);
  if ( std::operator==<GameserverConnect>(0LL, (const std::shared_ptr<GameserverConnect> *)(v3 + 32)) )
  {
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v7);
    v9 = (unsigned __int64)(v8->_vptr_AClientConnect + 12);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(v8->_vptr_AClientConnect + 12);
    v10 = *(__int64 (__fastcall **)(std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v9;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v13, p_packet_ptr);
    v6 = v10(v8, &v13);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v13);
  }
  std::shared_ptr<GameserverConnect>::~shared_ptr((std::shared_ptr<GameserverConnect> *const)(v3 + 32));
  result = v6;
  if ( v14 == (char *)v3 )
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

// Line 535: range 000000000C7BC888-000000000C7BCA57
int __cdecl common::minet::AClientMgr<PathfindingserverConnect>::sendPacketByAppId(
        common::minet::AClientMgr<PathfindingserverConnect> *const this,
        common::minet::PacketPtr *p_packet_ptr,
        uint32_t app_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int v6; // r14d
  std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  unsigned __int64 v9; // rax
  __int64 (__fastcall *v10)(std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int result; // eax
  std::shared_ptr<common::minet::Packet> v13; // [rsp+20h] [rbp-80h] BYREF
  char v14[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 connect_ptr:537";
  *(_QWORD *)(v3 + 16) = common::minet::AClientMgr<PathfindingserverConnect>::sendPacketByAppId;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::minet::AClientMgr<PathfindingserverConnect>::findConnectByAppId(
    (common::minet::AClientMgr<PathfindingserverConnect> *const)(v3 + 32),
    (__int64)this,
    app_id);
  if ( std::operator==<PathfindingserverConnect>(0LL, (const std::shared_ptr<PathfindingserverConnect> *)(v3 + 32)) )
  {
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v7);
    v9 = (unsigned __int64)(v8->_vptr_AClientConnect + 12);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(v8->_vptr_AClientConnect + 12);
    v10 = *(__int64 (__fastcall **)(std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v9;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v13, p_packet_ptr);
    v6 = v10(v8, &v13);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v13);
  }
  std::shared_ptr<PathfindingserverConnect>::~shared_ptr((std::shared_ptr<PathfindingserverConnect> *const)(v3 + 32));
  result = v6;
  if ( v14 == (char *)v3 )
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

// Line 535: range 000000000C7BCF98-000000000C7BD167
int __cdecl common::minet::AClientMgr<TothemoonserverConnect>::sendPacketByAppId(
        common::minet::AClientMgr<TothemoonserverConnect> *const this,
        common::minet::PacketPtr *p_packet_ptr,
        uint32_t app_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int v6; // r14d
  std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  unsigned __int64 v9; // rax
  __int64 (__fastcall *v10)(std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int result; // eax
  std::shared_ptr<common::minet::Packet> v13; // [rsp+20h] [rbp-80h] BYREF
  char v14[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 connect_ptr:537";
  *(_QWORD *)(v3 + 16) = common::minet::AClientMgr<TothemoonserverConnect>::sendPacketByAppId;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::minet::AClientMgr<TothemoonserverConnect>::findConnectByAppId(
    (common::minet::AClientMgr<TothemoonserverConnect> *const)(v3 + 32),
    (__int64)this,
    app_id);
  if ( std::operator==<TothemoonserverConnect>(0LL, (const std::shared_ptr<TothemoonserverConnect> *)(v3 + 32)) )
  {
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v7);
    v9 = (unsigned __int64)(v8->_vptr_AClientConnect + 12);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(v8->_vptr_AClientConnect + 12);
    v10 = *(__int64 (__fastcall **)(std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v9;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v13, p_packet_ptr);
    v6 = v10(v8, &v13);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v13);
  }
  std::shared_ptr<TothemoonserverConnect>::~shared_ptr((std::shared_ptr<TothemoonserverConnect> *const)(v3 + 32));
  result = v6;
  if ( v14 == (char *)v3 )
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

// Line 547: range 000000000C860042-000000000C86021D
int __cdecl common::minet::AClientMgr<DispatchConnect>::sendPacket(
        common::minet::AClientMgr<DispatchConnect> *const this,
        common::minet::PacketPtr *p_packet_ptr,
        uint32_t conn_offset,
        bool is_allow_adjust)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int v7; // r14d
  std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  unsigned __int64 v10; // rax
  __int64 (__fastcall *v11)(std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int result; // eax
  char conn_offseta; // [rsp+Ch] [rbp-94h]
  std::shared_ptr<common::minet::Packet> v14; // [rsp+20h] [rbp-80h] BYREF
  char v15[112]; // [rsp+30h] [rbp-70h] BYREF

  conn_offseta = conn_offset;
  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 15 connect_ptr:549";
  *(_QWORD *)(v4 + 16) = common::minet::AClientMgr<DispatchConnect>::sendPacket;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  common::minet::AClientMgr<DispatchConnect>::findConnectByConnOffset(
    (common::minet::AClientMgr<DispatchConnect> *const)(v4 + 32),
    (uint32_t)this,
    conn_offseta);
  if ( std::operator==<DispatchConnect>(0LL, (const std::shared_ptr<DispatchConnect> *)(v4 + 32)) )
  {
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v8);
    v10 = (unsigned __int64)(v9->_vptr_AClientConnect + 12);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(v9->_vptr_AClientConnect + 12);
    v11 = *(__int64 (__fastcall **)(std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v10;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v14, p_packet_ptr);
    v7 = v11(v9, &v14);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v14);
  }
  std::shared_ptr<DispatchConnect>::~shared_ptr((std::shared_ptr<DispatchConnect> *const)(v4 + 32));
  result = v7;
  if ( v15 == (char *)v4 )
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

// Line 547: range 000000000C7BD338-000000000C7BD513
int __cdecl common::minet::AClientMgr<GameserverConnect>::sendPacket(
        common::minet::AClientMgr<GameserverConnect> *const this,
        common::minet::PacketPtr *p_packet_ptr,
        uint32_t conn_offset,
        bool is_allow_adjust)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int v7; // r14d
  std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  unsigned __int64 v10; // rax
  __int64 (__fastcall *v11)(std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int result; // eax
  char conn_offseta; // [rsp+Ch] [rbp-94h]
  std::shared_ptr<common::minet::Packet> v14; // [rsp+20h] [rbp-80h] BYREF
  char v15[112]; // [rsp+30h] [rbp-70h] BYREF

  conn_offseta = conn_offset;
  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 15 connect_ptr:549";
  *(_QWORD *)(v4 + 16) = common::minet::AClientMgr<GameserverConnect>::sendPacket;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  common::minet::AClientMgr<GameserverConnect>::findConnectByConnOffset(
    (common::minet::AClientMgr<GameserverConnect> *const)(v4 + 32),
    (uint32_t)this,
    conn_offseta);
  if ( std::operator==<GameserverConnect>(0LL, (const std::shared_ptr<GameserverConnect> *)(v4 + 32)) )
  {
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v8);
    v10 = (unsigned __int64)(v9->_vptr_AClientConnect + 12);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(v9->_vptr_AClientConnect + 12);
    v11 = *(__int64 (__fastcall **)(std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v10;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v14, p_packet_ptr);
    v7 = v11(v9, &v14);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v14);
  }
  std::shared_ptr<GameserverConnect>::~shared_ptr((std::shared_ptr<GameserverConnect> *const)(v4 + 32));
  result = v7;
  if ( v15 == (char *)v4 )
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

// Line 547: range 000000000C859584-000000000C85975F
int __cdecl common::minet::AClientMgr<PathfindingserverConnect>::sendPacket(
        common::minet::AClientMgr<PathfindingserverConnect> *const this,
        common::minet::PacketPtr *p_packet_ptr,
        uint32_t conn_offset,
        bool is_allow_adjust)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int v7; // r14d
  std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  unsigned __int64 v10; // rax
  __int64 (__fastcall *v11)(std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int result; // eax
  char conn_offseta; // [rsp+Ch] [rbp-94h]
  std::shared_ptr<common::minet::Packet> v14; // [rsp+20h] [rbp-80h] BYREF
  char v15[112]; // [rsp+30h] [rbp-70h] BYREF

  conn_offseta = conn_offset;
  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 15 connect_ptr:549";
  *(_QWORD *)(v4 + 16) = common::minet::AClientMgr<PathfindingserverConnect>::sendPacket;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  common::minet::AClientMgr<PathfindingserverConnect>::findConnectByConnOffset(
    (common::minet::AClientMgr<PathfindingserverConnect> *const)(v4 + 32),
    (uint32_t)this,
    conn_offseta);
  if ( std::operator==<PathfindingserverConnect>(0LL, (const std::shared_ptr<PathfindingserverConnect> *)(v4 + 32)) )
  {
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v8);
    v10 = (unsigned __int64)(v9->_vptr_AClientConnect + 12);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(v9->_vptr_AClientConnect + 12);
    v11 = *(__int64 (__fastcall **)(std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v10;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v14, p_packet_ptr);
    v7 = v11(v9, &v14);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v14);
  }
  std::shared_ptr<PathfindingserverConnect>::~shared_ptr((std::shared_ptr<PathfindingserverConnect> *const)(v4 + 32));
  result = v7;
  if ( v15 == (char *)v4 )
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

// Line 547: range 000000000C85879A-000000000C858975
int __cdecl common::minet::AClientMgr<TothemoonserverConnect>::sendPacket(
        common::minet::AClientMgr<TothemoonserverConnect> *const this,
        common::minet::PacketPtr *p_packet_ptr,
        uint32_t conn_offset,
        bool is_allow_adjust)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int v7; // r14d
  std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  unsigned __int64 v10; // rax
  __int64 (__fastcall *v11)(std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int result; // eax
  char conn_offseta; // [rsp+Ch] [rbp-94h]
  std::shared_ptr<common::minet::Packet> v14; // [rsp+20h] [rbp-80h] BYREF
  char v15[112]; // [rsp+30h] [rbp-70h] BYREF

  conn_offseta = conn_offset;
  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 15 connect_ptr:549";
  *(_QWORD *)(v4 + 16) = common::minet::AClientMgr<TothemoonserverConnect>::sendPacket;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  common::minet::AClientMgr<TothemoonserverConnect>::findConnectByConnOffset(
    (common::minet::AClientMgr<TothemoonserverConnect> *const)(v4 + 32),
    (uint32_t)this,
    conn_offseta);
  if ( std::operator==<TothemoonserverConnect>(0LL, (const std::shared_ptr<TothemoonserverConnect> *)(v4 + 32)) )
  {
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v8);
    v10 = (unsigned __int64)(v9->_vptr_AClientConnect + 12);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(v9->_vptr_AClientConnect + 12);
    v11 = *(__int64 (__fastcall **)(std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v10;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v14, p_packet_ptr);
    v7 = v11(v9, &v14);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v14);
  }
  std::shared_ptr<TothemoonserverConnect>::~shared_ptr((std::shared_ptr<TothemoonserverConnect> *const)(v4 + 32));
  result = v7;
  if ( v15 == (char *)v4 )
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

// Line 559: range 000000000C86021E-000000000C8608D6
int __cdecl common::minet::AClientMgr<DispatchConnect>::broadcastPacket(
        common::minet::AClientMgr<DispatchConnect> *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v6; // r13d
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *p_m_size; // rdi
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v8; // rax
  __int64 m_start; // rax
  char *v10; // rax
  std::pair<unsigned int,std::shared_ptr<DispatchConnect> > *v11; // rdx
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v12; // rax
  __int64 v13; // rax
  char *v14; // rax
  std::pair<unsigned int,std::shared_ptr<DispatchConnect> > *v15; // rdx
  char v16; // r15
  std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r13
  unsigned __int64 v19; // rax
  char v20; // r13
  __int64 v21; // rcx
  int result; // eax
  unsigned int (__fastcall *v23)(std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // [rsp+8h] [rbp-1A8h]
  uint32_t succ_num; // [rsp+2Ch] [rbp-184h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator __for_begin; // [rsp+30h] [rbp-180h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator __for_end; // [rsp+38h] [rbp-178h] BYREF
  char v28[8]; // [rsp+40h] [rbp-170h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *__for_range; // [rsp+48h] [rbp-168h]
  std::pair<unsigned int,std::shared_ptr<DispatchConnect> > *__in; // [rsp+50h] [rbp-160h]
  std::tuple_element<0,std::pair<unsigned int,std::shared_ptr<DispatchConnect> > >::type *_; // [rsp+58h] [rbp-158h]
  std::tuple_element<1,std::pair<unsigned int,std::shared_ptr<DispatchConnect> > >::type *conn; // [rsp+60h] [rbp-150h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v33; // [rsp+68h] [rbp-148h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v34; // [rsp+70h] [rbp-140h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v35; // [rsp+78h] [rbp-138h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v36; // [rsp+80h] [rbp-130h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v37; // [rsp+88h] [rbp-128h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_size; // [rsp+90h] [rbp-120h]
  char *v39; // [rsp+98h] [rbp-118h]
  __int64 v40; // [rsp+A0h] [rbp-110h]
  char *v41; // [rsp+A8h] [rbp-108h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *p_for_end; // [rsp+B0h] [rbp-100h]
  char *v43; // [rsp+B8h] [rbp-F8h]
  char *v44; // [rsp+C0h] [rbp-F0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *p_conn_map; // [rsp+C8h] [rbp-E8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v46; // [rsp+D0h] [rbp-E0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v47; // [rsp+D8h] [rbp-D8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v48; // [rsp+E0h] [rbp-D0h]
  char *v49; // [rsp+E8h] [rbp-C8h]
  __int64 v50; // [rsp+F0h] [rbp-C0h]
  char *v51; // [rsp+F8h] [rbp-B8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *p_for_begin; // [rsp+100h] [rbp-B0h]
  char *v53; // [rsp+108h] [rbp-A8h]
  char *v54; // [rsp+110h] [rbp-A0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v55; // [rsp+118h] [rbp-98h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v56; // [rsp+120h] [rbp-90h]
  boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *v57; // [rsp+128h] [rbp-88h]
  std::shared_ptr<common::minet::Packet> v58; // [rsp+130h] [rbp-80h] BYREF
  char v59[112]; // [rsp+140h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 rlock:566";
  *(_QWORD *)(v2 + 16) = common::minet::AClientMgr<DispatchConnect>::broadcastPacket;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::atomic<common::minet::AClientMgr<DispatchConnect>::Status>::operator common::minet::AClientMgr<DispatchConnect>::Status(&this->status_) != STATUS_START_2
    || std::operator==<common::minet::Packet>(0LL, p_packet_ptr) )
  {
    v6 = -1;
  }
  else
  {
    p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)(v2 + 32);
    std::shared_lock<std::shared_mutex>::shared_lock(
      (std::shared_lock<std::shared_mutex> *const)(v2 + 32),
      &this->shared_mu_);
    succ_num = 0;
    __for_range = &this->conn_map_;
    p_conn_map = &this->conn_map_;
    v46 = &this->conn_map_;
    v47 = &this->conn_map_;
    v48 = &this->conn_map_;
    v8 = &this->conn_map_;
    if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_ >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)&this->conn_map_;
      v8 = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *)__asan_report_load8(&this->conn_map_);
    }
    m_start = (__int64)v8->m_flat_tree.m_data.m_seq.m_holder.m_start;
    v49 = v28;
    v50 = m_start;
    if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)v28;
      __asan_report_store8();
    }
    *(_QWORD *)v49 = v50;
    v51 = v28;
    p_for_begin = &__for_begin;
    v53 = v28;
    v54 = v28;
    v10 = v28;
    if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)v28;
      v10 = (char *)__asan_report_load8(v28);
    }
    v11 = *(std::pair<unsigned int,std::shared_ptr<DispatchConnect> > **)v10;
    if ( *(_BYTE *)(((unsigned __int64)p_for_begin >> 3) + 0x7FFF8000) )
    {
      p_m_size = p_for_begin;
      __asan_report_store8();
    }
    p_for_begin->m_ptr = v11;
    v33 = __for_range;
    v34 = __for_range;
    v35 = __for_range;
    v36 = __for_range;
    v12 = __for_range;
    if ( *(_BYTE *)(((unsigned __int64)__for_range >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)__for_range;
      v12 = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void> *)__asan_report_load8(__for_range);
    }
    v37 = v12->m_flat_tree.m_data.m_seq.m_holder.m_start;
    if ( *(_BYTE *)(((unsigned __int64)&v35->m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)&v35->m_flat_tree.m_data.m_seq.m_holder.m_size;
      __asan_report_load8(&v35->m_flat_tree.m_data.m_seq.m_holder.m_size);
    }
    m_size = v35->m_flat_tree.m_data.m_seq.m_holder.m_size;
    if ( m_size )
      v13 = (__int64)&v37[m_size];
    else
      v13 = (__int64)v37;
    v39 = v28;
    v40 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)v28;
      __asan_report_store8();
    }
    *(_QWORD *)v39 = v40;
    v41 = v28;
    p_for_end = &__for_end;
    v43 = v28;
    v44 = v28;
    v14 = v28;
    if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)v28;
      v14 = (char *)__asan_report_load8(v28);
    }
    v15 = *(std::pair<unsigned int,std::shared_ptr<DispatchConnect> > **)v14;
    if ( *(_BYTE *)(((unsigned __int64)p_for_end >> 3) + 0x7FFF8000) )
    {
      p_m_size = p_for_end;
      __asan_report_store8();
    }
    p_for_end->m_ptr = v15;
    while ( __for_begin.m_ptr != __for_end.m_ptr )
    {
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return(p_m_size);
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x8Eu,
          "boost::container::vec_iterator<Pointer, IsConst>::reference boost::container::vec_iterator<Pointer, IsConst>::"
          "operator*() const [with Pointer = std::pair<unsigned int, std::shared_ptr<DispatchConnect> >*; bool IsConst = "
          "false; boost::container::vec_iterator<Pointer, IsConst>::reference = std::pair<unsigned int, std::shared_ptr<D"
          "ispatchConnect> >&]");
      }
      __in = __for_begin.m_ptr;
      _ = std::get<0ul,unsigned int,std::shared_ptr<DispatchConnect>>(__for_begin.m_ptr);
      conn = std::get<1ul,unsigned int,std::shared_ptr<DispatchConnect>>(__in);
      v16 = 0;
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)conn;
      if ( !std::__shared_ptr<DispatchConnect,(__gnu_cxx::_Lock_policy)2>::operator bool(conn) )
        goto LABEL_42;
      v17 = std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn);
      v18 = v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v17);
      v19 = (unsigned __int64)(v18->_vptr_AClientConnect + 12);
      if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        v19 = __asan_report_load8(v18->_vptr_AClientConnect + 12);
      v23 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<DispatchConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v19;
      std::shared_ptr<common::minet::Packet>::shared_ptr(&v58, p_packet_ptr);
      v16 = 1;
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)v18;
      if ( v23(v18, &v58) )
LABEL_42:
        v20 = 0;
      else
        v20 = 1;
      if ( v16 )
      {
        p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<DispatchConnect>,std::less<unsigned int>,void>::iterator *)&v58;
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&v58);
      }
      if ( v20 )
        ++succ_num;
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return(p_m_size);
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x98u,
          "boost::container::vec_iterator<Pointer, IsConst>& boost::container::vec_iterator<Pointer, IsConst>::operator++"
          "() [with Pointer = std::pair<unsigned int, std::shared_ptr<DispatchConnect> >*; bool IsConst = false]");
      }
      ++__for_begin.m_ptr;
    }
    v21 = succ_num;
    v55 = &this->conn_map_;
    v56 = &this->conn_map_;
    v57 = &this->conn_map_;
    if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
    if ( v21 == v57->m_flat_tree.m_data.m_seq.m_holder.m_size )
      v6 = 0;
    else
      v6 = -1;
    std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v2 + 32));
  }
  result = v6;
  if ( v59 == (char *)v2 )
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

// Line 559: range 000000000C85A22E-000000000C85A8E6
int __cdecl common::minet::AClientMgr<GameserverConnect>::broadcastPacket(
        common::minet::AClientMgr<GameserverConnect> *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v6; // r13d
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *p_m_size; // rdi
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v8; // rax
  __int64 m_start; // rax
  char *v10; // rax
  std::pair<unsigned int,std::shared_ptr<GameserverConnect> > *v11; // rdx
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v12; // rax
  __int64 v13; // rax
  char *v14; // rax
  std::pair<unsigned int,std::shared_ptr<GameserverConnect> > *v15; // rdx
  char v16; // r15
  std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r13
  unsigned __int64 v19; // rax
  char v20; // r13
  __int64 v21; // rcx
  int result; // eax
  unsigned int (__fastcall *v23)(std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // [rsp+8h] [rbp-1A8h]
  uint32_t succ_num; // [rsp+2Ch] [rbp-184h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator __for_begin; // [rsp+30h] [rbp-180h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator __for_end; // [rsp+38h] [rbp-178h] BYREF
  char v28[8]; // [rsp+40h] [rbp-170h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *__for_range; // [rsp+48h] [rbp-168h]
  std::pair<unsigned int,std::shared_ptr<GameserverConnect> > *__in; // [rsp+50h] [rbp-160h]
  std::tuple_element<0,std::pair<unsigned int,std::shared_ptr<GameserverConnect> > >::type *_; // [rsp+58h] [rbp-158h]
  std::tuple_element<1,std::pair<unsigned int,std::shared_ptr<GameserverConnect> > >::type *conn; // [rsp+60h] [rbp-150h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v33; // [rsp+68h] [rbp-148h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v34; // [rsp+70h] [rbp-140h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v35; // [rsp+78h] [rbp-138h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v36; // [rsp+80h] [rbp-130h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v37; // [rsp+88h] [rbp-128h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_size; // [rsp+90h] [rbp-120h]
  char *v39; // [rsp+98h] [rbp-118h]
  __int64 v40; // [rsp+A0h] [rbp-110h]
  char *v41; // [rsp+A8h] [rbp-108h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *p_for_end; // [rsp+B0h] [rbp-100h]
  char *v43; // [rsp+B8h] [rbp-F8h]
  char *v44; // [rsp+C0h] [rbp-F0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *p_conn_map; // [rsp+C8h] [rbp-E8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v46; // [rsp+D0h] [rbp-E0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v47; // [rsp+D8h] [rbp-D8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v48; // [rsp+E0h] [rbp-D0h]
  char *v49; // [rsp+E8h] [rbp-C8h]
  __int64 v50; // [rsp+F0h] [rbp-C0h]
  char *v51; // [rsp+F8h] [rbp-B8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *p_for_begin; // [rsp+100h] [rbp-B0h]
  char *v53; // [rsp+108h] [rbp-A8h]
  char *v54; // [rsp+110h] [rbp-A0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v55; // [rsp+118h] [rbp-98h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v56; // [rsp+120h] [rbp-90h]
  boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *v57; // [rsp+128h] [rbp-88h]
  std::shared_ptr<common::minet::Packet> v58; // [rsp+130h] [rbp-80h] BYREF
  char v59[112]; // [rsp+140h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 rlock:566";
  *(_QWORD *)(v2 + 16) = common::minet::AClientMgr<GameserverConnect>::broadcastPacket;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::atomic<common::minet::AClientMgr<GameserverConnect>::Status>::operator common::minet::AClientMgr<GameserverConnect>::Status(&this->status_) != STATUS_START
    || std::operator==<common::minet::Packet>(0LL, p_packet_ptr) )
  {
    v6 = -1;
  }
  else
  {
    p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)(v2 + 32);
    std::shared_lock<std::shared_mutex>::shared_lock(
      (std::shared_lock<std::shared_mutex> *const)(v2 + 32),
      &this->shared_mu_);
    succ_num = 0;
    __for_range = &this->conn_map_;
    p_conn_map = &this->conn_map_;
    v46 = &this->conn_map_;
    v47 = &this->conn_map_;
    v48 = &this->conn_map_;
    v8 = &this->conn_map_;
    if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_ >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)&this->conn_map_;
      v8 = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *)__asan_report_load8(&this->conn_map_);
    }
    m_start = (__int64)v8->m_flat_tree.m_data.m_seq.m_holder.m_start;
    v49 = v28;
    v50 = m_start;
    if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)v28;
      __asan_report_store8();
    }
    *(_QWORD *)v49 = v50;
    v51 = v28;
    p_for_begin = &__for_begin;
    v53 = v28;
    v54 = v28;
    v10 = v28;
    if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)v28;
      v10 = (char *)__asan_report_load8(v28);
    }
    v11 = *(std::pair<unsigned int,std::shared_ptr<GameserverConnect> > **)v10;
    if ( *(_BYTE *)(((unsigned __int64)p_for_begin >> 3) + 0x7FFF8000) )
    {
      p_m_size = p_for_begin;
      __asan_report_store8();
    }
    p_for_begin->m_ptr = v11;
    v33 = __for_range;
    v34 = __for_range;
    v35 = __for_range;
    v36 = __for_range;
    v12 = __for_range;
    if ( *(_BYTE *)(((unsigned __int64)__for_range >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)__for_range;
      v12 = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void> *)__asan_report_load8(__for_range);
    }
    v37 = v12->m_flat_tree.m_data.m_seq.m_holder.m_start;
    if ( *(_BYTE *)(((unsigned __int64)&v35->m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)&v35->m_flat_tree.m_data.m_seq.m_holder.m_size;
      __asan_report_load8(&v35->m_flat_tree.m_data.m_seq.m_holder.m_size);
    }
    m_size = v35->m_flat_tree.m_data.m_seq.m_holder.m_size;
    if ( m_size )
      v13 = (__int64)&v37[m_size];
    else
      v13 = (__int64)v37;
    v39 = v28;
    v40 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)v28;
      __asan_report_store8();
    }
    *(_QWORD *)v39 = v40;
    v41 = v28;
    p_for_end = &__for_end;
    v43 = v28;
    v44 = v28;
    v14 = v28;
    if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)v28;
      v14 = (char *)__asan_report_load8(v28);
    }
    v15 = *(std::pair<unsigned int,std::shared_ptr<GameserverConnect> > **)v14;
    if ( *(_BYTE *)(((unsigned __int64)p_for_end >> 3) + 0x7FFF8000) )
    {
      p_m_size = p_for_end;
      __asan_report_store8();
    }
    p_for_end->m_ptr = v15;
    while ( __for_begin.m_ptr != __for_end.m_ptr )
    {
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return(p_m_size);
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x8Eu,
          "boost::container::vec_iterator<Pointer, IsConst>::reference boost::container::vec_iterator<Pointer, IsConst>::"
          "operator*() const [with Pointer = std::pair<unsigned int, std::shared_ptr<GameserverConnect> >*; bool IsConst "
          "= false; boost::container::vec_iterator<Pointer, IsConst>::reference = std::pair<unsigned int, std::shared_ptr"
          "<GameserverConnect> >&]");
      }
      __in = __for_begin.m_ptr;
      _ = std::get<0ul,unsigned int,std::shared_ptr<GameserverConnect>>(__for_begin.m_ptr);
      conn = std::get<1ul,unsigned int,std::shared_ptr<GameserverConnect>>(__in);
      v16 = 0;
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)conn;
      if ( !std::__shared_ptr<GameserverConnect,(__gnu_cxx::_Lock_policy)2>::operator bool(conn) )
        goto LABEL_42;
      v17 = std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn);
      v18 = v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v17);
      v19 = (unsigned __int64)(v18->_vptr_AClientConnect + 12);
      if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        v19 = __asan_report_load8(v18->_vptr_AClientConnect + 12);
      v23 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<GameserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v19;
      std::shared_ptr<common::minet::Packet>::shared_ptr(&v58, p_packet_ptr);
      v16 = 1;
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)v18;
      if ( v23(v18, &v58) )
LABEL_42:
        v20 = 0;
      else
        v20 = 1;
      if ( v16 )
      {
        p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<GameserverConnect>,std::less<unsigned int>,void>::iterator *)&v58;
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&v58);
      }
      if ( v20 )
        ++succ_num;
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return(p_m_size);
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x98u,
          "boost::container::vec_iterator<Pointer, IsConst>& boost::container::vec_iterator<Pointer, IsConst>::operator++"
          "() [with Pointer = std::pair<unsigned int, std::shared_ptr<GameserverConnect> >*; bool IsConst = false]");
      }
      ++__for_begin.m_ptr;
    }
    v21 = succ_num;
    v55 = &this->conn_map_;
    v56 = &this->conn_map_;
    v57 = &this->conn_map_;
    if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
    if ( v21 == v57->m_flat_tree.m_data.m_seq.m_holder.m_size )
      v6 = 0;
    else
      v6 = -1;
    std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v2 + 32));
  }
  result = v6;
  if ( v59 == (char *)v2 )
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

// Line 559: range 000000000C859760-000000000C859E18
int __cdecl common::minet::AClientMgr<PathfindingserverConnect>::broadcastPacket(
        common::minet::AClientMgr<PathfindingserverConnect> *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v6; // r13d
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *p_m_size; // rdi
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v8; // rax
  __int64 m_start; // rax
  char *v10; // rax
  std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > *v11; // rdx
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v12; // rax
  __int64 v13; // rax
  char *v14; // rax
  std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > *v15; // rdx
  char v16; // r15
  std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r13
  unsigned __int64 v19; // rax
  char v20; // r13
  __int64 v21; // rcx
  int result; // eax
  unsigned int (__fastcall *v23)(std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // [rsp+8h] [rbp-1A8h]
  uint32_t succ_num; // [rsp+2Ch] [rbp-184h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator __for_begin; // [rsp+30h] [rbp-180h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator __for_end; // [rsp+38h] [rbp-178h] BYREF
  char v28[8]; // [rsp+40h] [rbp-170h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *__for_range; // [rsp+48h] [rbp-168h]
  std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > *__in; // [rsp+50h] [rbp-160h]
  std::tuple_element<0,std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >::type *_; // [rsp+58h] [rbp-158h]
  std::tuple_element<1,std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >::type *conn; // [rsp+60h] [rbp-150h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v33; // [rsp+68h] [rbp-148h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v34; // [rsp+70h] [rbp-140h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v35; // [rsp+78h] [rbp-138h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v36; // [rsp+80h] [rbp-130h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v37; // [rsp+88h] [rbp-128h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_size; // [rsp+90h] [rbp-120h]
  char *v39; // [rsp+98h] [rbp-118h]
  __int64 v40; // [rsp+A0h] [rbp-110h]
  char *v41; // [rsp+A8h] [rbp-108h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *p_for_end; // [rsp+B0h] [rbp-100h]
  char *v43; // [rsp+B8h] [rbp-F8h]
  char *v44; // [rsp+C0h] [rbp-F0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *p_conn_map; // [rsp+C8h] [rbp-E8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v46; // [rsp+D0h] [rbp-E0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v47; // [rsp+D8h] [rbp-D8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v48; // [rsp+E0h] [rbp-D0h]
  char *v49; // [rsp+E8h] [rbp-C8h]
  __int64 v50; // [rsp+F0h] [rbp-C0h]
  char *v51; // [rsp+F8h] [rbp-B8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *p_for_begin; // [rsp+100h] [rbp-B0h]
  char *v53; // [rsp+108h] [rbp-A8h]
  char *v54; // [rsp+110h] [rbp-A0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v55; // [rsp+118h] [rbp-98h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v56; // [rsp+120h] [rbp-90h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v57; // [rsp+128h] [rbp-88h]
  std::shared_ptr<common::minet::Packet> v58; // [rsp+130h] [rbp-80h] BYREF
  char v59[112]; // [rsp+140h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 rlock:566";
  *(_QWORD *)(v2 + 16) = common::minet::AClientMgr<PathfindingserverConnect>::broadcastPacket;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::atomic<common::minet::AClientMgr<PathfindingserverConnect>::Status>::operator common::minet::AClientMgr<PathfindingserverConnect>::Status(&this->status_) != STATUS_START_0
    || std::operator==<common::minet::Packet>(0LL, p_packet_ptr) )
  {
    v6 = -1;
  }
  else
  {
    p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)(v2 + 32);
    std::shared_lock<std::shared_mutex>::shared_lock(
      (std::shared_lock<std::shared_mutex> *const)(v2 + 32),
      &this->shared_mu_);
    succ_num = 0;
    __for_range = &this->conn_map_;
    p_conn_map = &this->conn_map_;
    v46 = &this->conn_map_;
    v47 = &this->conn_map_;
    v48 = &this->conn_map_;
    v8 = &this->conn_map_;
    if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_ >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)&this->conn_map_;
      v8 = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *)__asan_report_load8(&this->conn_map_);
    }
    m_start = (__int64)v8->m_flat_tree.m_data.m_seq.m_holder.m_start;
    v49 = v28;
    v50 = m_start;
    if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)v28;
      __asan_report_store8();
    }
    *(_QWORD *)v49 = v50;
    v51 = v28;
    p_for_begin = &__for_begin;
    v53 = v28;
    v54 = v28;
    v10 = v28;
    if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)v28;
      v10 = (char *)__asan_report_load8(v28);
    }
    v11 = *(std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > **)v10;
    if ( *(_BYTE *)(((unsigned __int64)p_for_begin >> 3) + 0x7FFF8000) )
    {
      p_m_size = p_for_begin;
      __asan_report_store8();
    }
    p_for_begin->m_ptr = v11;
    v33 = __for_range;
    v34 = __for_range;
    v35 = __for_range;
    v36 = __for_range;
    v12 = __for_range;
    if ( *(_BYTE *)(((unsigned __int64)__for_range >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)__for_range;
      v12 = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *)__asan_report_load8(__for_range);
    }
    v37 = v12->m_flat_tree.m_data.m_seq.m_holder.m_start;
    if ( *(_BYTE *)(((unsigned __int64)&v35->m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)&v35->m_flat_tree.m_data.m_seq.m_holder.m_size;
      __asan_report_load8(&v35->m_flat_tree.m_data.m_seq.m_holder.m_size);
    }
    m_size = v35->m_flat_tree.m_data.m_seq.m_holder.m_size;
    if ( m_size )
      v13 = (__int64)&v37[m_size];
    else
      v13 = (__int64)v37;
    v39 = v28;
    v40 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)v28;
      __asan_report_store8();
    }
    *(_QWORD *)v39 = v40;
    v41 = v28;
    p_for_end = &__for_end;
    v43 = v28;
    v44 = v28;
    v14 = v28;
    if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)v28;
      v14 = (char *)__asan_report_load8(v28);
    }
    v15 = *(std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > **)v14;
    if ( *(_BYTE *)(((unsigned __int64)p_for_end >> 3) + 0x7FFF8000) )
    {
      p_m_size = p_for_end;
      __asan_report_store8();
    }
    p_for_end->m_ptr = v15;
    while ( __for_begin.m_ptr != __for_end.m_ptr )
    {
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return(p_m_size);
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x8Eu,
          "boost::container::vec_iterator<Pointer, IsConst>::reference boost::container::vec_iterator<Pointer, IsConst>::"
          "operator*() const [with Pointer = std::pair<unsigned int, std::shared_ptr<PathfindingserverConnect> >*; bool I"
          "sConst = false; boost::container::vec_iterator<Pointer, IsConst>::reference = std::pair<unsigned int, std::sha"
          "red_ptr<PathfindingserverConnect> >&]");
      }
      __in = __for_begin.m_ptr;
      _ = std::get<0ul,unsigned int,std::shared_ptr<PathfindingserverConnect>>(__for_begin.m_ptr);
      conn = std::get<1ul,unsigned int,std::shared_ptr<PathfindingserverConnect>>(__in);
      v16 = 0;
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)conn;
      if ( !std::__shared_ptr<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2>::operator bool(conn) )
        goto LABEL_42;
      v17 = std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn);
      v18 = v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v17);
      v19 = (unsigned __int64)(v18->_vptr_AClientConnect + 12);
      if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        v19 = __asan_report_load8(v18->_vptr_AClientConnect + 12);
      v23 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<PathfindingserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v19;
      std::shared_ptr<common::minet::Packet>::shared_ptr(&v58, p_packet_ptr);
      v16 = 1;
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)v18;
      if ( v23(v18, &v58) )
LABEL_42:
        v20 = 0;
      else
        v20 = 1;
      if ( v16 )
      {
        p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator *)&v58;
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&v58);
      }
      if ( v20 )
        ++succ_num;
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return(p_m_size);
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x98u,
          "boost::container::vec_iterator<Pointer, IsConst>& boost::container::vec_iterator<Pointer, IsConst>::operator++"
          "() [with Pointer = std::pair<unsigned int, std::shared_ptr<PathfindingserverConnect> >*; bool IsConst = false]");
      }
      ++__for_begin.m_ptr;
    }
    v21 = succ_num;
    v55 = &this->conn_map_;
    v56 = &this->conn_map_;
    v57 = &this->conn_map_;
    if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
    if ( v21 == v57->m_flat_tree.m_data.m_seq.m_holder.m_size )
      v6 = 0;
    else
      v6 = -1;
    std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v2 + 32));
  }
  result = v6;
  if ( v59 == (char *)v2 )
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

// Line 559: range 000000000C858976-000000000C85902E
int __cdecl common::minet::AClientMgr<TothemoonserverConnect>::broadcastPacket(
        common::minet::AClientMgr<TothemoonserverConnect> *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v6; // r13d
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *p_m_size; // rdi
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v8; // rax
  __int64 m_start; // rax
  char *v10; // rax
  std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > *v11; // rdx
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v12; // rax
  __int64 v13; // rax
  char *v14; // rax
  std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > *v15; // rdx
  char v16; // r15
  std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r13
  unsigned __int64 v19; // rax
  char v20; // r13
  __int64 v21; // rcx
  int result; // eax
  unsigned int (__fastcall *v23)(std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // [rsp+8h] [rbp-1A8h]
  uint32_t succ_num; // [rsp+2Ch] [rbp-184h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator __for_begin; // [rsp+30h] [rbp-180h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator __for_end; // [rsp+38h] [rbp-178h] BYREF
  char v28[8]; // [rsp+40h] [rbp-170h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *__for_range; // [rsp+48h] [rbp-168h]
  std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > *__in; // [rsp+50h] [rbp-160h]
  std::tuple_element<0,std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >::type *_; // [rsp+58h] [rbp-158h]
  std::tuple_element<1,std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >::type *conn; // [rsp+60h] [rbp-150h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v33; // [rsp+68h] [rbp-148h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v34; // [rsp+70h] [rbp-140h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v35; // [rsp+78h] [rbp-138h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v36; // [rsp+80h] [rbp-130h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v37; // [rsp+88h] [rbp-128h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_size; // [rsp+90h] [rbp-120h]
  char *v39; // [rsp+98h] [rbp-118h]
  __int64 v40; // [rsp+A0h] [rbp-110h]
  char *v41; // [rsp+A8h] [rbp-108h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *p_for_end; // [rsp+B0h] [rbp-100h]
  char *v43; // [rsp+B8h] [rbp-F8h]
  char *v44; // [rsp+C0h] [rbp-F0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *p_conn_map; // [rsp+C8h] [rbp-E8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v46; // [rsp+D0h] [rbp-E0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v47; // [rsp+D8h] [rbp-D8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v48; // [rsp+E0h] [rbp-D0h]
  char *v49; // [rsp+E8h] [rbp-C8h]
  __int64 v50; // [rsp+F0h] [rbp-C0h]
  char *v51; // [rsp+F8h] [rbp-B8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *p_for_begin; // [rsp+100h] [rbp-B0h]
  char *v53; // [rsp+108h] [rbp-A8h]
  char *v54; // [rsp+110h] [rbp-A0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v55; // [rsp+118h] [rbp-98h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v56; // [rsp+120h] [rbp-90h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v57; // [rsp+128h] [rbp-88h]
  std::shared_ptr<common::minet::Packet> v58; // [rsp+130h] [rbp-80h] BYREF
  char v59[112]; // [rsp+140h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 rlock:566";
  *(_QWORD *)(v2 + 16) = common::minet::AClientMgr<TothemoonserverConnect>::broadcastPacket;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::atomic<common::minet::AClientMgr<TothemoonserverConnect>::Status>::operator common::minet::AClientMgr<TothemoonserverConnect>::Status(&this->status_) != STATUS_START_1
    || std::operator==<common::minet::Packet>(0LL, p_packet_ptr) )
  {
    v6 = -1;
  }
  else
  {
    p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)(v2 + 32);
    std::shared_lock<std::shared_mutex>::shared_lock(
      (std::shared_lock<std::shared_mutex> *const)(v2 + 32),
      &this->shared_mu_);
    succ_num = 0;
    __for_range = &this->conn_map_;
    p_conn_map = &this->conn_map_;
    v46 = &this->conn_map_;
    v47 = &this->conn_map_;
    v48 = &this->conn_map_;
    v8 = &this->conn_map_;
    if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_ >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)&this->conn_map_;
      v8 = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *)__asan_report_load8(&this->conn_map_);
    }
    m_start = (__int64)v8->m_flat_tree.m_data.m_seq.m_holder.m_start;
    v49 = v28;
    v50 = m_start;
    if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)v28;
      __asan_report_store8();
    }
    *(_QWORD *)v49 = v50;
    v51 = v28;
    p_for_begin = &__for_begin;
    v53 = v28;
    v54 = v28;
    v10 = v28;
    if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)v28;
      v10 = (char *)__asan_report_load8(v28);
    }
    v11 = *(std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > **)v10;
    if ( *(_BYTE *)(((unsigned __int64)p_for_begin >> 3) + 0x7FFF8000) )
    {
      p_m_size = p_for_begin;
      __asan_report_store8();
    }
    p_for_begin->m_ptr = v11;
    v33 = __for_range;
    v34 = __for_range;
    v35 = __for_range;
    v36 = __for_range;
    v12 = __for_range;
    if ( *(_BYTE *)(((unsigned __int64)__for_range >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)__for_range;
      v12 = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *)__asan_report_load8(__for_range);
    }
    v37 = v12->m_flat_tree.m_data.m_seq.m_holder.m_start;
    if ( *(_BYTE *)(((unsigned __int64)&v35->m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)&v35->m_flat_tree.m_data.m_seq.m_holder.m_size;
      __asan_report_load8(&v35->m_flat_tree.m_data.m_seq.m_holder.m_size);
    }
    m_size = v35->m_flat_tree.m_data.m_seq.m_holder.m_size;
    if ( m_size )
      v13 = (__int64)&v37[m_size];
    else
      v13 = (__int64)v37;
    v39 = v28;
    v40 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)v28;
      __asan_report_store8();
    }
    *(_QWORD *)v39 = v40;
    v41 = v28;
    p_for_end = &__for_end;
    v43 = v28;
    v44 = v28;
    v14 = v28;
    if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
    {
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)v28;
      v14 = (char *)__asan_report_load8(v28);
    }
    v15 = *(std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > **)v14;
    if ( *(_BYTE *)(((unsigned __int64)p_for_end >> 3) + 0x7FFF8000) )
    {
      p_m_size = p_for_end;
      __asan_report_store8();
    }
    p_for_end->m_ptr = v15;
    while ( __for_begin.m_ptr != __for_end.m_ptr )
    {
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return(p_m_size);
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x8Eu,
          "boost::container::vec_iterator<Pointer, IsConst>::reference boost::container::vec_iterator<Pointer, IsConst>::"
          "operator*() const [with Pointer = std::pair<unsigned int, std::shared_ptr<TothemoonserverConnect> >*; bool IsC"
          "onst = false; boost::container::vec_iterator<Pointer, IsConst>::reference = std::pair<unsigned int, std::share"
          "d_ptr<TothemoonserverConnect> >&]");
      }
      __in = __for_begin.m_ptr;
      _ = std::get<0ul,unsigned int,std::shared_ptr<TothemoonserverConnect>>(__for_begin.m_ptr);
      conn = std::get<1ul,unsigned int,std::shared_ptr<TothemoonserverConnect>>(__in);
      v16 = 0;
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)conn;
      if ( !std::__shared_ptr<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2>::operator bool(conn) )
        goto LABEL_42;
      v17 = std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn);
      v18 = v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v17);
      v19 = (unsigned __int64)(v18->_vptr_AClientConnect + 12);
      if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        v19 = __asan_report_load8(v18->_vptr_AClientConnect + 12);
      v23 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<TothemoonserverConnect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v19;
      std::shared_ptr<common::minet::Packet>::shared_ptr(&v58, p_packet_ptr);
      v16 = 1;
      p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)v18;
      if ( v23(v18, &v58) )
LABEL_42:
        v20 = 0;
      else
        v20 = 1;
      if ( v16 )
      {
        p_m_size = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator *)&v58;
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&v58);
      }
      if ( v20 )
        ++succ_num;
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return(p_m_size);
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x98u,
          "boost::container::vec_iterator<Pointer, IsConst>& boost::container::vec_iterator<Pointer, IsConst>::operator++"
          "() [with Pointer = std::pair<unsigned int, std::shared_ptr<TothemoonserverConnect> >*; bool IsConst = false]");
      }
      ++__for_begin.m_ptr;
    }
    v21 = succ_num;
    v55 = &this->conn_map_;
    v56 = &this->conn_map_;
    v57 = &this->conn_map_;
    if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->conn_map_.m_flat_tree.m_data.m_seq.m_holder.m_size);
    if ( v21 == v57->m_flat_tree.m_data.m_seq.m_holder.m_size )
      v6 = 0;
    else
      v6 = -1;
    std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v2 + 32));
  }
  result = v6;
  if ( v59 == (char *)v2 )
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

// Line 582: range 000000000C8667B2-000000000C866CB8
void __fastcall common::minet::AClientMgr<DispatchConnect>::iosThreadHandler(
        common::minet::AClientMgr<DispatchConnect> *const this,
        uint32_t thread_index)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  const char *v9; // r14
  pthread_t v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 val; // [rsp+18h] [rbp-E8h] BYREF
  boost::asio::io_context *ioc; // [rsp+20h] [rbp-E0h]
  std::string __rhs; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 10 status:584 64 4 16 thread_index:582";
  *(_QWORD *)(v2 + 16) = common::minet::AClientMgr<DispatchConnect>::iosThreadHandler;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = thread_index;
  *(_DWORD *)(v2 + 48) = std::atomic<common::minet::AClientMgr<DispatchConnect>::Status>::load(
                           &this->status_,
                           memory_order_seq_cst);
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
    "iosThreadHandler",
    585);
  v5 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
         &v15,
         (const char (*)[33])"iosThreadHandler: begin, status:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v15);
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
    "iosThreadHandler",
    586);
  v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v15, (const char (*)[14])"[THREAD] tid:");
  val = syscall(186LL);
  v7 = common::milog::MiLogStream::operator<<<long,(long *)0>(v6, &val);
  v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" aclient io:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
  common::milog::MiLogStream::~MiLogStream(&v15);
  std::to_string(&__rhs, *(_DWORD *)(v2 + 64));
  std::operator+<char>((std::string *)&v15, "aclient_io:", &__rhs);
  v9 = (const char *)std::string::c_str(&v15);
  v10 = pthread_self();
  pthread_setname_np(v10, v9);
  std::string::~string(&v15);
  std::string::~string(&__rhs);
  ioc = &this->ioc_arr_[*(unsigned int *)(v2 + 64)];
  while ( *(_DWORD *)(v2 + 48) == 2 || *(_DWORD *)(v2 + 48) == 1 )
  {
    boost::asio::io_context::run(ioc);
    if ( boost::asio::io_context::stopped(ioc) )
      boost::asio::io_context::restart(ioc);
    *(_DWORD *)(v2 + 48) = std::atomic<common::minet::AClientMgr<DispatchConnect>::Status>::load(
                             &this->status_,
                             memory_order_seq_cst);
  }
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
    "iosThreadHandler",
    611);
  v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          &v15,
          (const char (*)[31])"iosThreadHandler: end, status:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v15);
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

// Line 582: range 000000000C7D06B2-000000000C7D0BB8
void __fastcall common::minet::AClientMgr<GameserverConnect>::iosThreadHandler(
        common::minet::AClientMgr<GameserverConnect> *const this,
        uint32_t thread_index)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  const char *v9; // r14
  pthread_t v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 val; // [rsp+18h] [rbp-E8h] BYREF
  boost::asio::io_context *ioc; // [rsp+20h] [rbp-E0h]
  std::string __rhs; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 10 status:584 64 4 16 thread_index:582";
  *(_QWORD *)(v2 + 16) = common::minet::AClientMgr<GameserverConnect>::iosThreadHandler;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = thread_index;
  *(_DWORD *)(v2 + 48) = std::atomic<common::minet::AClientMgr<GameserverConnect>::Status>::load(
                           &this->status_,
                           memory_order_seq_cst);
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
    "iosThreadHandler",
    585);
  v5 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
         &v15,
         (const char (*)[33])"iosThreadHandler: begin, status:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v15);
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
    "iosThreadHandler",
    586);
  v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v15, (const char (*)[14])"[THREAD] tid:");
  val = syscall(186LL);
  v7 = common::milog::MiLogStream::operator<<<long,(long *)0>(v6, &val);
  v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" aclient io:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
  common::milog::MiLogStream::~MiLogStream(&v15);
  std::to_string(&__rhs, *(_DWORD *)(v2 + 64));
  std::operator+<char>((std::string *)&v15, "aclient_io:", &__rhs);
  v9 = (const char *)std::string::c_str(&v15);
  v10 = pthread_self();
  pthread_setname_np(v10, v9);
  std::string::~string(&v15);
  std::string::~string(&__rhs);
  ioc = &this->ioc_arr_[*(unsigned int *)(v2 + 64)];
  while ( *(_DWORD *)(v2 + 48) == 2 || *(_DWORD *)(v2 + 48) == 1 )
  {
    boost::asio::io_context::run(ioc);
    if ( boost::asio::io_context::stopped(ioc) )
      boost::asio::io_context::restart(ioc);
    *(_DWORD *)(v2 + 48) = std::atomic<common::minet::AClientMgr<GameserverConnect>::Status>::load(
                             &this->status_,
                             memory_order_seq_cst);
  }
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
    "iosThreadHandler",
    611);
  v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          &v15,
          (const char (*)[31])"iosThreadHandler: end, status:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v15);
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

// Line 582: range 000000000C7D1012-000000000C7D1518
void __fastcall common::minet::AClientMgr<PathfindingserverConnect>::iosThreadHandler(
        common::minet::AClientMgr<PathfindingserverConnect> *const this,
        uint32_t thread_index)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  const char *v9; // r14
  pthread_t v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 val; // [rsp+18h] [rbp-E8h] BYREF
  boost::asio::io_context *ioc; // [rsp+20h] [rbp-E0h]
  std::string __rhs; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 10 status:584 64 4 16 thread_index:582";
  *(_QWORD *)(v2 + 16) = common::minet::AClientMgr<PathfindingserverConnect>::iosThreadHandler;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = thread_index;
  *(_DWORD *)(v2 + 48) = std::atomic<common::minet::AClientMgr<PathfindingserverConnect>::Status>::load(
                           &this->status_,
                           memory_order_seq_cst);
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
    "iosThreadHandler",
    585);
  v5 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
         &v15,
         (const char (*)[33])"iosThreadHandler: begin, status:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v15);
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
    "iosThreadHandler",
    586);
  v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v15, (const char (*)[14])"[THREAD] tid:");
  val = syscall(186LL);
  v7 = common::milog::MiLogStream::operator<<<long,(long *)0>(v6, &val);
  v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" aclient io:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
  common::milog::MiLogStream::~MiLogStream(&v15);
  std::to_string(&__rhs, *(_DWORD *)(v2 + 64));
  std::operator+<char>((std::string *)&v15, "aclient_io:", &__rhs);
  v9 = (const char *)std::string::c_str(&v15);
  v10 = pthread_self();
  pthread_setname_np(v10, v9);
  std::string::~string(&v15);
  std::string::~string(&__rhs);
  ioc = &this->ioc_arr_[*(unsigned int *)(v2 + 64)];
  while ( *(_DWORD *)(v2 + 48) == 2 || *(_DWORD *)(v2 + 48) == 1 )
  {
    boost::asio::io_context::run(ioc);
    if ( boost::asio::io_context::stopped(ioc) )
      boost::asio::io_context::restart(ioc);
    *(_DWORD *)(v2 + 48) = std::atomic<common::minet::AClientMgr<PathfindingserverConnect>::Status>::load(
                             &this->status_,
                             memory_order_seq_cst);
  }
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
    "iosThreadHandler",
    611);
  v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          &v15,
          (const char (*)[31])"iosThreadHandler: end, status:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v15);
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

// Line 582: range 000000000C7D1972-000000000C7D1E78
void __fastcall common::minet::AClientMgr<TothemoonserverConnect>::iosThreadHandler(
        common::minet::AClientMgr<TothemoonserverConnect> *const this,
        uint32_t thread_index)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  const char *v9; // r14
  pthread_t v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 val; // [rsp+18h] [rbp-E8h] BYREF
  boost::asio::io_context *ioc; // [rsp+20h] [rbp-E0h]
  std::string __rhs; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 10 status:584 64 4 16 thread_index:582";
  *(_QWORD *)(v2 + 16) = common::minet::AClientMgr<TothemoonserverConnect>::iosThreadHandler;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = thread_index;
  *(_DWORD *)(v2 + 48) = std::atomic<common::minet::AClientMgr<TothemoonserverConnect>::Status>::load(
                           &this->status_,
                           memory_order_seq_cst);
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
    "iosThreadHandler",
    585);
  v5 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
         &v15,
         (const char (*)[33])"iosThreadHandler: begin, status:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v15);
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
    "iosThreadHandler",
    586);
  v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v15, (const char (*)[14])"[THREAD] tid:");
  val = syscall(186LL);
  v7 = common::milog::MiLogStream::operator<<<long,(long *)0>(v6, &val);
  v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" aclient io:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
  common::milog::MiLogStream::~MiLogStream(&v15);
  std::to_string(&__rhs, *(_DWORD *)(v2 + 64));
  std::operator+<char>((std::string *)&v15, "aclient_io:", &__rhs);
  v9 = (const char *)std::string::c_str(&v15);
  v10 = pthread_self();
  pthread_setname_np(v10, v9);
  std::string::~string(&v15);
  std::string::~string(&__rhs);
  ioc = &this->ioc_arr_[*(unsigned int *)(v2 + 64)];
  while ( *(_DWORD *)(v2 + 48) == 2 || *(_DWORD *)(v2 + 48) == 1 )
  {
    boost::asio::io_context::run(ioc);
    if ( boost::asio::io_context::stopped(ioc) )
      boost::asio::io_context::restart(ioc);
    *(_DWORD *)(v2 + 48) = std::atomic<common::minet::AClientMgr<TothemoonserverConnect>::Status>::load(
                             &this->status_,
                             memory_order_seq_cst);
  }
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "../framework/common/minet/aclient/include/aclient_mgr.hpp",
    "iosThreadHandler",
    611);
  v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          &v15,
          (const char (*)[31])"iosThreadHandler: end, status:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v15);
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

// Line 615: range 000000000C7BC37C-000000000C7BC887
std::vector<unsigned int> *__cdecl common::minet::AClientMgr<PathfindingserverConnect>::getAllConnTargetAppIdVec(
        std::vector<unsigned int> *retstr,
        common::minet::AClientMgr<PathfindingserverConnect> *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v5; // rax
  __int64 m_start; // rax
  char *v7; // rax
  unsigned int *v8; // rdx
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v9; // rax
  __int64 v10; // rax
  char *v11; // rax
  unsigned int *v12; // rdx
  std::vector<unsigned int> *p_target_app_id_vec; // [rsp+8h] [rbp-158h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator __for_begin; // [rsp+18h] [rbp-148h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void>::iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  char v17[8]; // [rsp+28h] [rbp-138h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *__for_range; // [rsp+30h] [rbp-130h]
  std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > *__in; // [rsp+38h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >::type *app_id; // [rsp+40h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >::type *_; // [rsp+48h] [rbp-118h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v22; // [rsp+50h] [rbp-110h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v23; // [rsp+58h] [rbp-108h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v24; // [rsp+60h] [rbp-100h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v25; // [rsp+68h] [rbp-F8h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v26; // [rsp+70h] [rbp-F0h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_size; // [rsp+78h] [rbp-E8h]
  char *v28; // [rsp+80h] [rbp-E0h]
  __int64 v29; // [rsp+88h] [rbp-D8h]
  char *v30; // [rsp+90h] [rbp-D0h]
  std::vector<unsigned int> *p_for_end; // [rsp+98h] [rbp-C8h]
  char *v32; // [rsp+A0h] [rbp-C0h]
  char *v33; // [rsp+A8h] [rbp-B8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *p_conn_map; // [rsp+B0h] [rbp-B0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v35; // [rsp+B8h] [rbp-A8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v36; // [rsp+C0h] [rbp-A0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *v37; // [rsp+C8h] [rbp-98h]
  char *v38; // [rsp+D0h] [rbp-90h]
  __int64 v39; // [rsp+D8h] [rbp-88h]
  char *v40; // [rsp+E0h] [rbp-80h]
  std::vector<unsigned int> *p_for_begin; // [rsp+E8h] [rbp-78h]
  char *v42; // [rsp+F0h] [rbp-70h]
  char *v43; // [rsp+F8h] [rbp-68h]
  char v44[96]; // [rsp+100h] [rbp-60h] BYREF

  p_target_app_id_vec = retstr;
  v2 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 rlock:617";
  *(_QWORD *)(v2 + 16) = common::minet::AClientMgr<PathfindingserverConnect>::getAllConnTargetAppIdVec;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::shared_lock<std::shared_mutex>::shared_lock(
    (std::shared_lock<std::shared_mutex> *const)(v2 + 32),
    &this->shared_mu_);
  std::vector<unsigned int>::vector(retstr);
  __for_range = &this->conn_map_;
  p_conn_map = &this->conn_map_;
  v35 = &this->conn_map_;
  v36 = &this->conn_map_;
  v37 = &this->conn_map_;
  v5 = &this->conn_map_;
  if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_ >> 3) + 0x7FFF8000) )
  {
    retstr = (std::vector<unsigned int> *)&this->conn_map_;
    v5 = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *)__asan_report_load8(&this->conn_map_);
  }
  m_start = (__int64)v5->m_flat_tree.m_data.m_seq.m_holder.m_start;
  v38 = v17;
  v39 = m_start;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    retstr = (std::vector<unsigned int> *)v17;
    __asan_report_store8();
  }
  *(_QWORD *)v38 = v39;
  v40 = v17;
  p_for_begin = (std::vector<unsigned int> *)&__for_begin;
  v42 = v17;
  v43 = v17;
  v7 = v17;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    retstr = (std::vector<unsigned int> *)v17;
    v7 = (char *)__asan_report_load8(v17);
  }
  v8 = *(unsigned int **)v7;
  if ( *(_BYTE *)(((unsigned __int64)p_for_begin >> 3) + 0x7FFF8000) )
  {
    retstr = p_for_begin;
    __asan_report_store8();
  }
  p_for_begin->_M_impl._M_start = v8;
  v22 = __for_range;
  v23 = __for_range;
  v24 = __for_range;
  v25 = __for_range;
  v9 = __for_range;
  if ( *(_BYTE *)(((unsigned __int64)__for_range >> 3) + 0x7FFF8000) )
  {
    retstr = (std::vector<unsigned int> *)__for_range;
    v9 = (boost::container::flat_map<unsigned int,std::shared_ptr<PathfindingserverConnect>,std::less<unsigned int>,void> *)__asan_report_load8(__for_range);
  }
  v26 = v9->m_flat_tree.m_data.m_seq.m_holder.m_start;
  if ( *(_BYTE *)(((unsigned __int64)&v24->m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
  {
    retstr = (std::vector<unsigned int> *)&v24->m_flat_tree.m_data.m_seq.m_holder.m_size;
    __asan_report_load8(&v24->m_flat_tree.m_data.m_seq.m_holder.m_size);
  }
  m_size = v24->m_flat_tree.m_data.m_seq.m_holder.m_size;
  if ( m_size )
    v10 = (__int64)&v26[m_size];
  else
    v10 = (__int64)v26;
  v28 = v17;
  v29 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    retstr = (std::vector<unsigned int> *)v17;
    __asan_report_store8();
  }
  *(_QWORD *)v28 = v29;
  v30 = v17;
  p_for_end = (std::vector<unsigned int> *)&__for_end;
  v32 = v17;
  v33 = v17;
  v11 = v17;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    retstr = (std::vector<unsigned int> *)v17;
    v11 = (char *)__asan_report_load8(v17);
  }
  v12 = *(unsigned int **)v11;
  if ( *(_BYTE *)(((unsigned __int64)p_for_end >> 3) + 0x7FFF8000) )
  {
    retstr = p_for_end;
    __asan_report_store8();
  }
  p_for_end->_M_impl._M_start = v12;
  while ( __for_begin.m_ptr != __for_end.m_ptr )
  {
    if ( !__for_begin.m_ptr )
    {
      __asan_handle_no_return(retstr);
      __assert_fail(
        "!!m_ptr",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
        0x8Eu,
        "boost::container::vec_iterator<Pointer, IsConst>::reference boost::container::vec_iterator<Pointer, IsConst>::op"
        "erator*() const [with Pointer = std::pair<unsigned int, std::shared_ptr<PathfindingserverConnect> >*; bool IsCon"
        "st = false; boost::container::vec_iterator<Pointer, IsConst>::reference = std::pair<unsigned int, std::shared_pt"
        "r<PathfindingserverConnect> >&]");
    }
    __in = __for_begin.m_ptr;
    app_id = std::get<0ul,unsigned int,std::shared_ptr<PathfindingserverConnect>>(__for_begin.m_ptr);
    _ = std::get<1ul,unsigned int,std::shared_ptr<PathfindingserverConnect>>(__in);
    retstr = p_target_app_id_vec;
    std::vector<unsigned int>::push_back(p_target_app_id_vec, app_id);
    if ( !__for_begin.m_ptr )
    {
      __asan_handle_no_return(p_target_app_id_vec);
      __assert_fail(
        "!!m_ptr",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
        0x98u,
        "boost::container::vec_iterator<Pointer, IsConst>& boost::container::vec_iterator<Pointer, IsConst>::operator++()"
        " [with Pointer = std::pair<unsigned int, std::shared_ptr<PathfindingserverConnect> >*; bool IsConst = false]");
    }
    ++__for_begin.m_ptr;
  }
  std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v2 + 32));
  if ( v44 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return p_target_app_id_vec;
};

// Line 615: range 000000000C7BCA8C-000000000C7BCF97
std::vector<unsigned int> *__cdecl common::minet::AClientMgr<TothemoonserverConnect>::getAllConnTargetAppIdVec(
        std::vector<unsigned int> *retstr,
        common::minet::AClientMgr<TothemoonserverConnect> *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v5; // rax
  __int64 m_start; // rax
  char *v7; // rax
  unsigned int *v8; // rdx
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v9; // rax
  __int64 v10; // rax
  char *v11; // rax
  unsigned int *v12; // rdx
  std::vector<unsigned int> *p_target_app_id_vec; // [rsp+8h] [rbp-158h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator __for_begin; // [rsp+18h] [rbp-148h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void>::iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  char v17[8]; // [rsp+28h] [rbp-138h] BYREF
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *__for_range; // [rsp+30h] [rbp-130h]
  std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > *__in; // [rsp+38h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >::type *app_id; // [rsp+40h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >::type *_; // [rsp+48h] [rbp-118h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v22; // [rsp+50h] [rbp-110h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v23; // [rsp+58h] [rbp-108h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v24; // [rsp+60h] [rbp-100h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v25; // [rsp+68h] [rbp-F8h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v26; // [rsp+70h] [rbp-F0h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_size; // [rsp+78h] [rbp-E8h]
  char *v28; // [rsp+80h] [rbp-E0h]
  __int64 v29; // [rsp+88h] [rbp-D8h]
  char *v30; // [rsp+90h] [rbp-D0h]
  std::vector<unsigned int> *p_for_end; // [rsp+98h] [rbp-C8h]
  char *v32; // [rsp+A0h] [rbp-C0h]
  char *v33; // [rsp+A8h] [rbp-B8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *p_conn_map; // [rsp+B0h] [rbp-B0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v35; // [rsp+B8h] [rbp-A8h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v36; // [rsp+C0h] [rbp-A0h]
  boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *v37; // [rsp+C8h] [rbp-98h]
  char *v38; // [rsp+D0h] [rbp-90h]
  __int64 v39; // [rsp+D8h] [rbp-88h]
  char *v40; // [rsp+E0h] [rbp-80h]
  std::vector<unsigned int> *p_for_begin; // [rsp+E8h] [rbp-78h]
  char *v42; // [rsp+F0h] [rbp-70h]
  char *v43; // [rsp+F8h] [rbp-68h]
  char v44[96]; // [rsp+100h] [rbp-60h] BYREF

  p_target_app_id_vec = retstr;
  v2 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 rlock:617";
  *(_QWORD *)(v2 + 16) = common::minet::AClientMgr<TothemoonserverConnect>::getAllConnTargetAppIdVec;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::shared_lock<std::shared_mutex>::shared_lock(
    (std::shared_lock<std::shared_mutex> *const)(v2 + 32),
    &this->shared_mu_);
  std::vector<unsigned int>::vector(retstr);
  __for_range = &this->conn_map_;
  p_conn_map = &this->conn_map_;
  v35 = &this->conn_map_;
  v36 = &this->conn_map_;
  v37 = &this->conn_map_;
  v5 = &this->conn_map_;
  if ( *(_BYTE *)(((unsigned __int64)&this->conn_map_ >> 3) + 0x7FFF8000) )
  {
    retstr = (std::vector<unsigned int> *)&this->conn_map_;
    v5 = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *)__asan_report_load8(&this->conn_map_);
  }
  m_start = (__int64)v5->m_flat_tree.m_data.m_seq.m_holder.m_start;
  v38 = v17;
  v39 = m_start;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    retstr = (std::vector<unsigned int> *)v17;
    __asan_report_store8();
  }
  *(_QWORD *)v38 = v39;
  v40 = v17;
  p_for_begin = (std::vector<unsigned int> *)&__for_begin;
  v42 = v17;
  v43 = v17;
  v7 = v17;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    retstr = (std::vector<unsigned int> *)v17;
    v7 = (char *)__asan_report_load8(v17);
  }
  v8 = *(unsigned int **)v7;
  if ( *(_BYTE *)(((unsigned __int64)p_for_begin >> 3) + 0x7FFF8000) )
  {
    retstr = p_for_begin;
    __asan_report_store8();
  }
  p_for_begin->_M_impl._M_start = v8;
  v22 = __for_range;
  v23 = __for_range;
  v24 = __for_range;
  v25 = __for_range;
  v9 = __for_range;
  if ( *(_BYTE *)(((unsigned __int64)__for_range >> 3) + 0x7FFF8000) )
  {
    retstr = (std::vector<unsigned int> *)__for_range;
    v9 = (boost::container::flat_map<unsigned int,std::shared_ptr<TothemoonserverConnect>,std::less<unsigned int>,void> *)__asan_report_load8(__for_range);
  }
  v26 = v9->m_flat_tree.m_data.m_seq.m_holder.m_start;
  if ( *(_BYTE *)(((unsigned __int64)&v24->m_flat_tree.m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
  {
    retstr = (std::vector<unsigned int> *)&v24->m_flat_tree.m_data.m_seq.m_holder.m_size;
    __asan_report_load8(&v24->m_flat_tree.m_data.m_seq.m_holder.m_size);
  }
  m_size = v24->m_flat_tree.m_data.m_seq.m_holder.m_size;
  if ( m_size )
    v10 = (__int64)&v26[m_size];
  else
    v10 = (__int64)v26;
  v28 = v17;
  v29 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    retstr = (std::vector<unsigned int> *)v17;
    __asan_report_store8();
  }
  *(_QWORD *)v28 = v29;
  v30 = v17;
  p_for_end = (std::vector<unsigned int> *)&__for_end;
  v32 = v17;
  v33 = v17;
  v11 = v17;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    retstr = (std::vector<unsigned int> *)v17;
    v11 = (char *)__asan_report_load8(v17);
  }
  v12 = *(unsigned int **)v11;
  if ( *(_BYTE *)(((unsigned __int64)p_for_end >> 3) + 0x7FFF8000) )
  {
    retstr = p_for_end;
    __asan_report_store8();
  }
  p_for_end->_M_impl._M_start = v12;
  while ( __for_begin.m_ptr != __for_end.m_ptr )
  {
    if ( !__for_begin.m_ptr )
    {
      __asan_handle_no_return(retstr);
      __assert_fail(
        "!!m_ptr",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
        0x8Eu,
        "boost::container::vec_iterator<Pointer, IsConst>::reference boost::container::vec_iterator<Pointer, IsConst>::op"
        "erator*() const [with Pointer = std::pair<unsigned int, std::shared_ptr<TothemoonserverConnect> >*; bool IsConst"
        " = false; boost::container::vec_iterator<Pointer, IsConst>::reference = std::pair<unsigned int, std::shared_ptr<"
        "TothemoonserverConnect> >&]");
    }
    __in = __for_begin.m_ptr;
    app_id = std::get<0ul,unsigned int,std::shared_ptr<TothemoonserverConnect>>(__for_begin.m_ptr);
    _ = std::get<1ul,unsigned int,std::shared_ptr<TothemoonserverConnect>>(__in);
    retstr = p_target_app_id_vec;
    std::vector<unsigned int>::push_back(p_target_app_id_vec, app_id);
    if ( !__for_begin.m_ptr )
    {
      __asan_handle_no_return(p_target_app_id_vec);
      __assert_fail(
        "!!m_ptr",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
        0x98u,
        "boost::container::vec_iterator<Pointer, IsConst>& boost::container::vec_iterator<Pointer, IsConst>::operator++()"
        " [with Pointer = std::pair<unsigned int, std::shared_ptr<TothemoonserverConnect> >*; bool IsConst = false]");
    }
    ++__for_begin.m_ptr;
  }
  std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v2 + 32));
  if ( v44 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return p_target_app_id_vec;
};
