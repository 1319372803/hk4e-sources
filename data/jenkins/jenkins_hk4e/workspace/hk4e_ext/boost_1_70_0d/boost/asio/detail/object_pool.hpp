// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/object_pool.hpp

// Line 39: range 000000000C669D80-000000000C669DD8
boost::asio::detail::epoll_reactor::descriptor_state *__cdecl boost::asio::detail::object_pool_access::create<boost::asio::detail::epoll_reactor::descriptor_state,bool>(
        bool arg)
{
  boost::asio::detail::epoll_reactor::descriptor_state *v1; // rbx

  v1 = (boost::asio::detail::epoll_reactor::descriptor_state *)operator new(0xA8uLL);
  boost::asio::detail::epoll_reactor::descriptor_state::descriptor_state(v1, arg);
  return v1;
};

// Line 45: range 000000000C676F0D-000000000C676F3F
void __cdecl boost::asio::detail::object_pool_access::destroy<boost::asio::detail::epoll_reactor::descriptor_state>(
        boost::asio::detail::epoll_reactor::descriptor_state *o)
{
  if ( o )
  {
    boost::asio::detail::epoll_reactor::descriptor_state::~descriptor_state(o);
    operator delete(o, 0xA8uLL);
  }
};

// Line 51: range 000000000C669C8E-000000000C669C9F
boost::asio::detail::epoll_reactor::descriptor_state **__cdecl boost::asio::detail::object_pool_access::next<boost::asio::detail::epoll_reactor::descriptor_state>(
        boost::asio::detail::epoll_reactor::descriptor_state *o)
{
  return &o->next_;
};

// Line 57: range 000000000C669CA0-000000000C669CB1
boost::asio::detail::epoll_reactor::descriptor_state **__cdecl boost::asio::detail::object_pool_access::prev<boost::asio::detail::epoll_reactor::descriptor_state>(
        boost::asio::detail::epoll_reactor::descriptor_state *o)
{
  return &o->prev_;
};

// Line 69: range 000000000C65C7DC-000000000C65C853
void __cdecl boost::asio::detail::object_pool<boost::asio::detail::epoll_reactor::descriptor_state>::object_pool(
        boost::asio::detail::object_pool<boost::asio::detail::epoll_reactor::descriptor_state> *const this)
{
  boost::asio::detail::noncopyable::noncopyable((boost::asio::detail::noncopyable *const)this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->live_list_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->free_list_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->free_list_ = 0LL;
};

// Line 76: range 000000000C65C854-000000000C65C8E1
void __cdecl boost::asio::detail::object_pool<boost::asio::detail::epoll_reactor::descriptor_state>::~object_pool(
        boost::asio::detail::object_pool<boost::asio::detail::epoll_reactor::descriptor_state> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  boost::asio::detail::object_pool<boost::asio::detail::epoll_reactor::descriptor_state>::destroy_list(
    this,
    this->live_list_);
  if ( *(_BYTE *)(((unsigned __int64)&this->free_list_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->free_list_);
  boost::asio::detail::object_pool<boost::asio::detail::epoll_reactor::descriptor_state>::destroy_list(
    this,
    this->free_list_);
  boost::asio::detail::noncopyable::~noncopyable((boost::asio::detail::noncopyable *const)this);
};

// Line 83: range 000000000C65C9C2-000000000C65C9F7
boost::asio::detail::epoll_reactor::descriptor_state *__cdecl boost::asio::detail::object_pool<boost::asio::detail::epoll_reactor::descriptor_state>::first(
        boost::asio::detail::object_pool<boost::asio::detail::epoll_reactor::descriptor_state> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->live_list_;
};

// Line 108: range 000000000C65D416-000000000C65D5F4
boost::asio::detail::epoll_reactor::descriptor_state *__cdecl boost::asio::detail::object_pool<boost::asio::detail::epoll_reactor::descriptor_state>::alloc<bool>(
        boost::asio::detail::object_pool<boost::asio::detail::epoll_reactor::descriptor_state> *const this,
        bool arg)
{
  unsigned __int64 v2; // rax
  boost::asio::detail::epoll_reactor::descriptor_state *v3; // rdx
  boost::asio::detail::epoll_reactor::descriptor_state *live_list; // rbx
  boost::asio::detail::epoll_reactor::descriptor_state **v5; // rax
  boost::asio::detail::epoll_reactor::descriptor_state **v6; // rax
  boost::asio::detail::epoll_reactor::descriptor_state **v7; // rax
  boost::asio::detail::epoll_reactor::descriptor_state *o; // [rsp+18h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)&this->free_list_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->free_list_);
  o = this->free_list_;
  if ( o )
  {
    v2 = (unsigned __int64)boost::asio::detail::object_pool_access::next<boost::asio::detail::epoll_reactor::descriptor_state>(this->free_list_);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8(v2);
    v3 = *(boost::asio::detail::epoll_reactor::descriptor_state **)v2;
    if ( *(_BYTE *)(((unsigned __int64)&this->free_list_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->free_list_ = v3;
  }
  else
  {
    o = boost::asio::detail::object_pool_access::create<boost::asio::detail::epoll_reactor::descriptor_state,bool>(arg);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  live_list = this->live_list_;
  v5 = boost::asio::detail::object_pool_access::next<boost::asio::detail::epoll_reactor::descriptor_state>(o);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *v5 = live_list;
  v6 = boost::asio::detail::object_pool_access::prev<boost::asio::detail::epoll_reactor::descriptor_state>(o);
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *v6 = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( this->live_list_ )
  {
    v7 = boost::asio::detail::object_pool_access::prev<boost::asio::detail::epoll_reactor::descriptor_state>(this->live_list_);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *v7 = o;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->live_list_ = o;
  return o;
};

// Line 126: range 000000000C65CB82-000000000C65CE6B
void __cdecl boost::asio::detail::object_pool<boost::asio::detail::epoll_reactor::descriptor_state>::free(
        boost::asio::detail::object_pool<boost::asio::detail::epoll_reactor::descriptor_state> *const this,
        boost::asio::detail::epoll_reactor::descriptor_state *o)
{
  unsigned __int64 v2; // rax
  boost::asio::detail::epoll_reactor::descriptor_state *v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  boost::asio::detail::epoll_reactor::descriptor_state *v6; // rbx
  unsigned __int64 v7; // rax
  boost::asio::detail::epoll_reactor::descriptor_state **v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  boost::asio::detail::epoll_reactor::descriptor_state *v11; // rbx
  unsigned __int64 v12; // rax
  boost::asio::detail::epoll_reactor::descriptor_state **v13; // rax
  boost::asio::detail::epoll_reactor::descriptor_state *free_list; // rbx
  boost::asio::detail::epoll_reactor::descriptor_state **v15; // rax
  boost::asio::detail::epoll_reactor::descriptor_state **v16; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( o == this->live_list_ )
  {
    v2 = (unsigned __int64)boost::asio::detail::object_pool_access::next<boost::asio::detail::epoll_reactor::descriptor_state>(o);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8(v2);
    v3 = *(boost::asio::detail::epoll_reactor::descriptor_state **)v2;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->live_list_ = v3;
  }
  v4 = (unsigned __int64)boost::asio::detail::object_pool_access::prev<boost::asio::detail::epoll_reactor::descriptor_state>(o);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(v4);
  if ( *(_QWORD *)v4 )
  {
    v5 = (unsigned __int64)boost::asio::detail::object_pool_access::next<boost::asio::detail::epoll_reactor::descriptor_state>(o);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(v5);
    v6 = *(boost::asio::detail::epoll_reactor::descriptor_state **)v5;
    v7 = (unsigned __int64)boost::asio::detail::object_pool_access::prev<boost::asio::detail::epoll_reactor::descriptor_state>(o);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(v7);
    v8 = boost::asio::detail::object_pool_access::next<boost::asio::detail::epoll_reactor::descriptor_state>(*(boost::asio::detail::epoll_reactor::descriptor_state **)v7);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *v8 = v6;
  }
  v9 = (unsigned __int64)boost::asio::detail::object_pool_access::next<boost::asio::detail::epoll_reactor::descriptor_state>(o);
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    v9 = __asan_report_load8(v9);
  if ( *(_QWORD *)v9 )
  {
    v10 = (unsigned __int64)boost::asio::detail::object_pool_access::prev<boost::asio::detail::epoll_reactor::descriptor_state>(o);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(v10);
    v11 = *(boost::asio::detail::epoll_reactor::descriptor_state **)v10;
    v12 = (unsigned __int64)boost::asio::detail::object_pool_access::next<boost::asio::detail::epoll_reactor::descriptor_state>(o);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8(v12);
    v13 = boost::asio::detail::object_pool_access::prev<boost::asio::detail::epoll_reactor::descriptor_state>(*(boost::asio::detail::epoll_reactor::descriptor_state **)v12);
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *v13 = v11;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->free_list_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->free_list_);
  free_list = this->free_list_;
  v15 = boost::asio::detail::object_pool_access::next<boost::asio::detail::epoll_reactor::descriptor_state>(o);
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *v15 = free_list;
  v16 = boost::asio::detail::object_pool_access::prev<boost::asio::detail::epoll_reactor::descriptor_state>(o);
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *v16 = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->free_list_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->free_list_ = o;
};

// Line 150: range 000000000C669B8E-000000000C669BF0
void __cdecl boost::asio::detail::object_pool<boost::asio::detail::epoll_reactor::descriptor_state>::destroy_list(
        boost::asio::detail::object_pool<boost::asio::detail::epoll_reactor::descriptor_state> *const this,
        boost::asio::detail::epoll_reactor::descriptor_state *list)
{
  unsigned __int64 v2; // rax
  boost::asio::detail::epoll_reactor::descriptor_state *o; // [rsp+18h] [rbp-8h]

  while ( list )
  {
    o = list;
    v2 = (unsigned __int64)boost::asio::detail::object_pool_access::next<boost::asio::detail::epoll_reactor::descriptor_state>(list);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8(v2);
    list = *(boost::asio::detail::epoll_reactor::descriptor_state **)v2;
    boost::asio::detail::object_pool_access::destroy<boost::asio::detail::epoll_reactor::descriptor_state>(o);
  }
};
