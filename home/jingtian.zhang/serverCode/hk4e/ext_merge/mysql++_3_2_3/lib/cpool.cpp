// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/cpool.cpp

// Line 73: range 000000000CF81000-000000000CF81078
__int64 __fastcall mysqlpp::ConnectionPool::clear(mysqlpp::ConnectionPool *this, char a2)
{
  mysqlpp::ConnectionPool *M_next; // rbx
  mysqlpp::ConnectionPool *v3; // rax
  mysqlpp::ConnectionPool::PoolIt it; // [rsp+8h] [rbp-40h] BYREF

  mysqlpp::BeecryptMutex::lock(&this->mutex_);
  M_next = (mysqlpp::ConnectionPool *)this->pool_._M_impl._M_node._M_next;
  while ( M_next != (mysqlpp::ConnectionPool *)&this->pool_ )
  {
    v3 = M_next;
    M_next = (mysqlpp::ConnectionPool *)M_next->_vptr_ConnectionPool;
    if ( a2 || !LOBYTE(v3->mutex_.pmutex_) )
    {
      it._M_node = (std::__detail::_List_node_base *)v3;
      mysqlpp::ConnectionPool::remove(this, &it);
    }
  }
  return mysqlpp::BeecryptMutex::unlock(&this->mutex_);
};

// Line 94: range 000000000CF81100-000000000CF81115
mysqlpp::Connection *__fastcall mysqlpp::ConnectionPool::exchange(
        mysqlpp::ConnectionPool *const this,
        const mysqlpp::Connection *pc)
{
  mysqlpp::ConnectionPool::remove(this, pc);
  return (mysqlpp::Connection *)(*((__int64 (__fastcall **)(mysqlpp::ConnectionPool *const))this->_vptr_ConnectionPool
                                 + 3))(this);
};

// Line 112: range 000000000CF80F50-000000000CF80FB2
mysqlpp::Connection *__fastcall mysqlpp::ConnectionPool::find_mru(mysqlpp::ConnectionPool *const this)
{
  std::__detail::_List_node_base *M_next; // rdx
  mysqlpp::ConnectionPool::PoolT *p_pool; // rsi
  mysqlpp::Connection *result; // rax
  std::__detail::_List_node_base *i; // rax
  char v5; // cl

  M_next = this->pool_._M_impl._M_node._M_next;
  p_pool = &this->pool_;
  result = 0LL;
  if ( M_next != (std::__detail::_List_node_base *)&this->pool_ )
  {
    for ( i = M_next->_M_next; i != (std::__detail::_List_node_base *)p_pool; i = i->_M_next )
    {
      v5 = (char)M_next[2]._M_next;
      if ( v5 == LOBYTE(i[2]._M_next) )
        v5 = (__int64)M_next[1]._M_prev < (__int64)i[1]._M_prev;
      if ( v5 )
        M_next = i;
    }
    if ( p_pool == (mysqlpp::ConnectionPool::PoolT *)M_next || LOBYTE(M_next[2]._M_next) )
    {
      return 0LL;
    }
    else
    {
      LOBYTE(M_next[2]._M_next) = 1;
      return (mysqlpp::Connection *)M_next[1]._M_next;
    }
  }
  return result;
};

// Line 127: range 000000000CF811E0-000000000CF81275
mysqlpp::Connection *__fastcall mysqlpp::ConnectionPool::grab(mysqlpp::ConnectionPool *this)
{
  mysqlpp::Connection *mru; // r12
  __int64 v3; // r13
  time_t v4; // r12
  __int64 v5; // rax
  std::__detail::_List_node_base *M_prev; // rax

  mysqlpp::BeecryptMutex::lock(&this->mutex_);
  mysqlpp::ConnectionPool::remove_old_connections(this);
  mru = mysqlpp::ConnectionPool::find_mru(this);
  if ( !mru )
  {
    v3 = (*((__int64 (__fastcall **)(mysqlpp::ConnectionPool *))this->_vptr_ConnectionPool + 6))(this);
    v4 = time(0LL);
    v5 = operator new(0x28uLL);
    *(_QWORD *)(v5 + 24) = v4;
    *(_QWORD *)(v5 + 16) = v3;
    *(_BYTE *)(v5 + 32) = 1;
    std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v5, &this->pool_._M_impl._M_node);
    M_prev = this->pool_._M_impl._M_node._M_prev;
    ++this->pool_._M_impl._M_node._M_size;
    mru = (mysqlpp::Connection *)M_prev[1]._M_next;
  }
  mysqlpp::BeecryptMutex::unlock(&this->mutex_);
  return mru;
};

// Line 145: range 000000000CF80EF0-000000000CF80F4A
void __fastcall mysqlpp::ConnectionPool::release(mysqlpp::ConnectionPool *const this, const mysqlpp::Connection *pc)
{
  mysqlpp::BeecryptMutex *p_mutex; // r13
  std::__detail::_List_node_base *M_next; // rbx
  mysqlpp::ConnectionPool::PoolT *p_pool; // rdi

  p_mutex = &this->mutex_;
  mysqlpp::BeecryptMutex::lock(&this->mutex_);
  M_next = this->pool_._M_impl._M_node._M_next;
  p_pool = &this->pool_;
  if ( M_next != (std::__detail::_List_node_base *)p_pool )
  {
    while ( (const mysqlpp::Connection *)M_next[1]._M_next != pc )
    {
      M_next = M_next->_M_next;
      if ( M_next == (std::__detail::_List_node_base *)p_pool )
        goto LABEL_6;
    }
    LOBYTE(M_next[2]._M_next) = 0;
    M_next[1]._M_prev = (std::__detail::_List_node_base *)time(0LL);
  }
LABEL_6:
  mysqlpp::BeecryptMutex::unlock(p_mutex);
};

// Line 171: range 000000000CF81080-000000000CF810ED
__int64 __fastcall mysqlpp::ConnectionPool::remove(mysqlpp::ConnectionPool *this, const mysqlpp::Connection *a2)
{
  std::__detail::_List_node_base *M_next; // rax
  char v3; // cl
  mysqlpp::ConnectionPool::PoolIt it; // [rsp+8h] [rbp-20h] BYREF

  mysqlpp::BeecryptMutex::lock(&this->mutex_);
  M_next = this->pool_._M_impl._M_node._M_next;
  it._M_node = M_next;
  if ( M_next != (std::__detail::_List_node_base *)&this->pool_ )
  {
    v3 = 0;
    while ( (const mysqlpp::Connection *)M_next[1]._M_next != a2 )
    {
      M_next = M_next->_M_next;
      v3 = 1;
      if ( M_next == (std::__detail::_List_node_base *)&this->pool_ )
        return mysqlpp::BeecryptMutex::unlock(&this->mutex_);
    }
    if ( v3 )
      it._M_node = M_next;
    mysqlpp::ConnectionPool::remove(this, &it);
  }
  return mysqlpp::BeecryptMutex::unlock(&this->mutex_);
};

// Line 184: range 000000000CF80FC0-000000000CF80FF3
void __fastcall mysqlpp::ConnectionPool::remove(
        mysqlpp::ConnectionPool *const this,
        const mysqlpp::ConnectionPool::PoolIt *it)
{
  std::__detail::_List_node_base *M_node; // rbp

  (*((void (__fastcall **)(mysqlpp::ConnectionPool *const, std::__detail::_List_node_base *))this->_vptr_ConnectionPool
   + 7))(
    this,
    it->_M_node[1]._M_next);
  M_node = it->_M_node;
  --this->pool_._M_impl._M_node._M_size;
  std::__detail::_List_node_base::_M_unhook(M_node);
  operator delete(M_node);
};

// Line 197: range 000000000CF81160-000000000CF811DB
void __fastcall mysqlpp::ConnectionPool::remove_old_connections(mysqlpp::ConnectionPool *const this)
{
  __int64 v1; // rbx
  time_t v2; // rax
  std::__detail::_List_node_base *M_next; // rdx
  __int64 v4; // rax
  mysqlpp::ConnectionPool::PoolT *p_pool; // rbx
  __int64 v6; // rbp
  std::__detail::_List_node_base *v7; // r12
  mysqlpp::ConnectionPool::PoolIt v8; // [rsp+8h] [rbp-30h] BYREF

  v1 = (*((unsigned int (__fastcall **)(mysqlpp::ConnectionPool *const))this->_vptr_ConnectionPool + 8))(this);
  v2 = time(0LL);
  M_next = this->pool_._M_impl._M_node._M_next;
  v4 = v2 - v1;
  p_pool = &this->pool_;
  v6 = v4;
  while ( M_next != (std::__detail::_List_node_base *)p_pool )
  {
    while ( v6 < (__int64)M_next[1]._M_prev || LOBYTE(M_next[2]._M_next) == 1 )
    {
      M_next = M_next->_M_next;
      if ( M_next == (std::__detail::_List_node_base *)p_pool )
        return;
    }
    if ( M_next == (std::__detail::_List_node_base *)p_pool )
      break;
    v7 = M_next->_M_next;
    v8._M_node = M_next;
    mysqlpp::ConnectionPool::remove(this, &v8);
    M_next = v7;
  }
};

// Line 211: range 000000000CF81120-000000000CF8115C
mysqlpp::Connection *__fastcall mysqlpp::ConnectionPool::safe_grab(mysqlpp::ConnectionPool *const this)
{
  mysqlpp::Connection *v1; // rbp

  while ( 1 )
  {
    v1 = (mysqlpp::Connection *)(*((__int64 (__fastcall **)(mysqlpp::ConnectionPool *const))this->_vptr_ConnectionPool
                                 + 3))(this);
    if ( mysqlpp::Connection::ping(v1) )
      break;
    mysqlpp::ConnectionPool::remove(this, v1);
  }
  return v1;
};
