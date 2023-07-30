// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/midb/redis/src/redis_conn_pool.cpp

// Line 26: range 000000000CAAD28C-000000000CAAD7AC
void __fastcall common::midb::RedisConnPool::RedisConnPool(
        common::midb::RedisConnPool *const this,
        const std::string *name,
        const std::string *host,
        const uint16_t port,
        const std::string *pwd,
        const uint16_t db,
        uint32_t pool_max_size,
        bool is_cluster,
        uint32_t expire_min_time,
        uint32_t expire_max_time,
        uint32_t connect_timeout)
{
  const std::string *v11; // rbp
  const std::string *v12; // r12
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // r13
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v14; // r14
  std::string *p_M_string_length; // rdi
  char *v17; // rdx
  std::forward_iterator_tag v18; // cl
  __int64 v19; // rax
  std::forward_iterator_tag v20; // cl
  std::string *p_port; // rdi
  char v22; // al
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 *p_db; // rdi
  char v26; // al
  __int64 v27; // rdx
  char v28; // dl
  char v29; // al
  char v30; // dl
  char v31; // al
  std::_Rb_tree_header *v32; // rax
  char v33; // dl
  char v34; // al
  struct _Unwind_Exception *v35; // rbp
  std::string::pointer M_p; // rdi
  std::string::pointer v37; // rdi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(this, name);
    goto LABEL_9;
  }
  v12 = host;
  v11 = pwd;
  p_anon_0 = &this->name_._anon_0;
  this->name_._M_dataplus._M_p = this->name_._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)name >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    p_M_string_length = (std::string *)name;
    __asan_report_load8(name);
    goto LABEL_10;
  }
  p_M_string_length = (std::string *)&name->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&name->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_load8(p_M_string_length);
    goto LABEL_11;
  }
  v17 = &name->_M_dataplus._M_p[name->_M_string_length];
  name = (const std::string *)name->_M_dataplus._M_p;
  std::string::_M_construct<char *>(&this->name_, (char *)name, v17, (std::forward_iterator_tag)port);
  p_M_string_length = &this->host_;
  v14 = &this->host_._anon_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->host_ >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_store8(p_M_string_length, name);
    goto LABEL_12;
  }
  this->host_._M_dataplus._M_p = (std::string::pointer)v14;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    v19 = __asan_report_load8(v12);
    goto LABEL_13;
  }
  name = (const std::string *)v12->_M_dataplus._M_p;
  v19 = (__int64)&v12->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v12->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8(v19);
    goto LABEL_14;
  }
  std::string::_M_construct<char *>(p_M_string_length, (char *)name, (char *)name + v12->_M_string_length, v18);
LABEL_14:
  p_port = (std::string *)&this->port_;
  v22 = *(_BYTE *)(((unsigned __int64)&this->port_ >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 1 )
  {
    __asan_report_store2(p_port);
    goto LABEL_21;
  }
  this->port_ = port;
  p_port = &this->pwd_;
  if ( *(_BYTE *)(((unsigned __int64)&this->pwd_ >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8(p_port, name);
    goto LABEL_22;
  }
  this->pwd_._M_dataplus._M_p = this->pwd_._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    v23 = __asan_report_load8(v11);
    goto LABEL_23;
  }
  name = (const std::string *)v11->_M_dataplus._M_p;
  v23 = (__int64)&v11->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v11->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(v23);
    goto LABEL_24;
  }
  std::string::_M_construct<char *>(p_port, (char *)name, (char *)name + v11->_M_string_length, v20);
LABEL_24:
  p_db = (__int64 *)&this->db_;
  v26 = *(_BYTE *)(((unsigned __int64)&this->db_ >> 3) + 0x7FFF8000);
  if ( v26 && v26 <= 1 )
  {
    __asan_report_store2(p_db);
LABEL_50:
    __asan_report_store4(p_db, name);
    goto LABEL_51;
  }
  this->db_ = db;
  p_db = (__int64 *)&this->pool_max_size_;
  v27 = *(unsigned __int8 *)(((unsigned __int64)&this->pool_max_size_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 108) & 7) + 3) >= (char)v27 && (_BYTE)v27 )
    goto LABEL_50;
  this->pool_max_size_ = pool_max_size;
  p_db = (__int64 *)&this->is_cluster_;
  if ( *(char *)(((unsigned __int64)&this->is_cluster_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_51:
    __asan_report_store1(p_db, name, v27, v24);
LABEL_52:
    __asan_report_store4(p_db, name);
LABEL_53:
    __asan_report_store4(p_db, name);
LABEL_54:
    __asan_report_store4(p_db, name);
    goto LABEL_55;
  }
  this->is_cluster_ = is_cluster;
  p_db = (__int64 *)&this->expire_min_time_;
  v28 = *(_BYTE *)(((unsigned __int64)&this->expire_min_time_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 116) & 7) + 3) >= v28 && v28 )
    goto LABEL_52;
  this->expire_min_time_ = expire_min_time;
  p_db = (__int64 *)&this->expire_max_time_;
  v29 = *(_BYTE *)(((unsigned __int64)&this->expire_max_time_ >> 3) + 0x7FFF8000);
  if ( v29 && v29 <= 3 )
    goto LABEL_53;
  this->expire_max_time_ = expire_max_time;
  p_db = (__int64 *)&this->connect_timeout_;
  v30 = *(_BYTE *)(((unsigned __int64)&this->connect_timeout_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 124) & 7) + 3) >= v30 && v30 )
    goto LABEL_54;
  this->connect_timeout_ = connect_timeout;
  p_db = (__int64 *)&this->conn_ptr_vec_;
  if ( *(_BYTE *)(((unsigned __int64)&this->conn_ptr_vec_ >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_store8(p_db, name);
    goto LABEL_56;
  }
  this->conn_ptr_vec_._M_impl._M_start = 0LL;
  p_db = (__int64 *)&this->conn_ptr_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->conn_ptr_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_store8(p_db, name);
    goto LABEL_57;
  }
  this->conn_ptr_vec_._M_impl._M_finish = 0LL;
  p_db = (__int64 *)&this->conn_ptr_vec_._M_impl._M_end_of_storage;
  if ( *(_BYTE *)(((unsigned __int64)&this->conn_ptr_vec_._M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_store8(p_db, name);
LABEL_58:
    __asan_report_store4(p_db, name);
    goto LABEL_59;
  }
  this->conn_ptr_vec_._M_impl._M_end_of_storage = 0LL;
  p_db = (__int64 *)&this->conn_ptr_map_._M_t._M_impl.std::_Rb_tree_header;
  v31 = *(_BYTE *)(((unsigned __int64)&this->conn_ptr_map_._M_t._M_impl.std::_Rb_tree_header >> 3) + 0x7FFF8000);
  if ( v31 && v31 <= 3 )
    goto LABEL_58;
  this->conn_ptr_map_._M_t._M_impl._M_header._M_color = _S_red;
  p_db = (__int64 *)&this->conn_ptr_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&this->conn_ptr_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_store8(p_db, name);
    goto LABEL_60;
  }
  this->conn_ptr_map_._M_t._M_impl._M_header._M_parent = 0LL;
  v32 = &this->conn_ptr_map_._M_t._M_impl.std::_Rb_tree_header;
  p_db = (__int64 *)&this->conn_ptr_map_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&this->conn_ptr_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_store8(p_db, name);
    goto LABEL_61;
  }
  this->conn_ptr_map_._M_t._M_impl._M_header._M_left = &v32->_M_header;
  p_db = (__int64 *)&this->conn_ptr_map_._M_t._M_impl._M_header._M_right;
  if ( *(_BYTE *)(((unsigned __int64)&this->conn_ptr_map_._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
  {
LABEL_61:
    __asan_report_store8(p_db, name);
    goto LABEL_62;
  }
  this->conn_ptr_map_._M_t._M_impl._M_header._M_right = &v32->_M_header;
  p_db = (__int64 *)&this->conn_ptr_map_._M_t._M_impl._M_node_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->conn_ptr_map_._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    __asan_report_store8(p_db, name);
LABEL_63:
    name = (const std::string *)40;
    __asan_report_store_n(p_db, 40LL);
    goto LABEL_64;
  }
  this->conn_ptr_map_._M_t._M_impl._M_node_count = 0LL;
  p_db = &this->mutex_._M_mutex.__align;
  v33 = *(_BYTE *)((((unsigned __int64)&this->mutex_._M_mutex.__align + 39) >> 3) + 0x7FFF8000);
  LOBYTE(name) = v33 <= (((unsigned __int8)this - 17) & 7);
  if ( ((v33 != 0) & (unsigned __int8)name) != 0 || *(char *)(((unsigned __int64)&this->mutex_ >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_63;
  this->mutex_._M_mutex.__align = 0LL;
  *(&this->mutex_._M_mutex.__align + 1) = 0LL;
  *(&this->mutex_._M_mutex.__align + 2) = 0LL;
  this->mutex_._M_mutex.__data.__list.__prev = 0LL;
  this->mutex_._M_mutex.__data.__list.__next = 0LL;
  p_db = &this->mutex_._M_mutex.__align + 2;
  v34 = *(_BYTE *)(((unsigned __int64)(&this->mutex_._M_mutex.__align + 2) >> 3) + 0x7FFF8000);
  if ( v34 && v34 <= 3 )
  {
LABEL_64:
    v35 = (struct _Unwind_Exception *)__asan_report_store4(p_db, name);
    if ( *(_BYTE *)(((unsigned __int64)&this->host_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->host_);
    M_p = this->host_._M_dataplus._M_p;
    if ( v14 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_p )
      operator delete(M_p);
    while ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      v35 = (struct _Unwind_Exception *)__asan_report_load8(this);
    v37 = this->name_._M_dataplus._M_p;
    if ( p_anon_0 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)this->name_._M_dataplus._M_p )
      operator delete(v37);
    __asan_handle_no_return(v37);
    _Unwind_Resume(v35);
  }
  this->mutex_._M_mutex.__data.__kind = 1;
};

// Line 51: range 000000000CAADFB8-000000000CAAE53C
common::midb::RedisConnBase *__fastcall common::midb::RedisConnPool::grab(common::midb::RedisConnPool *const this)
{
  std::recursive_mutex *p_mutex; // r12
  std::recursive_mutex *v3; // rdi
  int v4; // ebp
  common::midb::RedisConnPool::ConnPtrVec *p_M_finish; // rdi
  common::midb::RedisConnBase **M_finish; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rdi
  common::milog::MilogStringStream *ostr; // r12
  void *p_cur; // rdi
  char *cur; // rdi
  size_t v13; // rbp
  char v14; // al
  std::forward_iterator_tag v15; // cl
  std::string::size_type *p_M_string_length; // rax
  std::string *v17; // rdi
  std::string::size_type v18; // rax
  std::string::size_type M_allocated_capacity; // rsi
  std::string::size_type v20; // rsi
  __int64 M_p; // rsi
  unsigned __int64 v22; // rax
  std::string::size_type M_string_length; // rdx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  char **p_data; // rdi
  char *v29; // rdi
  size_t v30; // rbp
  struct _Unwind_Exception *v31; // rbx
  common::milog::MiLogStream v32; // [rsp+0h] [rbp-98h] BYREF
  void *src; // [rsp+20h] [rbp-78h]
  unsigned __int64 v34; // [rsp+28h] [rbp-70h]
  __m128i v35; // [rsp+30h] [rbp-68h] BYREF
  std::string v36; // [rsp+40h] [rbp-58h] BYREF
  std::string v37; // [rsp+60h] [rbp-38h] BYREF

  p_mutex = &this->mutex_;
  if ( &_pthread_key_create )
  {
    v3 = &this->mutex_;
    v4 = pthread_mutex_lock(&v3->_M_mutex);
    if ( v4 )
    {
      __asan_handle_no_return(v3);
      std::__throw_system_error(v4);
    }
  }
  p_M_finish = (common::midb::RedisConnPool::ConnPtrVec *)&this->conn_ptr_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->conn_ptr_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_finish);
    goto LABEL_18;
  }
  M_finish = this->conn_ptr_vec_._M_impl._M_finish;
  p_M_finish = &this->conn_ptr_vec_;
  if ( *(_BYTE *)(((unsigned __int64)&this->conn_ptr_vec_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(p_M_finish);
LABEL_19:
    __asan_report_load8(p_M_finish);
    goto LABEL_20;
  }
  if ( this->conn_ptr_vec_._M_impl._M_start != M_finish )
  {
    p_M_finish = (common::midb::RedisConnPool::ConnPtrVec *)(M_finish - 1);
    if ( !*(_BYTE *)(((unsigned __int64)(M_finish - 1) >> 3) + 0x7FFF8000) )
    {
      v7 = (unsigned __int64)*(M_finish - 1);
      this->conn_ptr_vec_._M_impl._M_finish = M_finish - 1;
      goto LABEL_8;
    }
    goto LABEL_19;
  }
LABEL_20:
  v7 = 0LL;
LABEL_8:
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_mutex->_M_mutex);
  if ( v7 )
  {
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    {
      v8 = v7;
      __asan_report_load8(v7);
    }
    else
    {
      v8 = *(_QWORD *)v7 + 24LL;
      if ( !*(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      {
        if ( !(*(unsigned int (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 24LL))(v7) )
          goto LABEL_14;
LABEL_23:
        common::midb::RedisConnPool::release(this, (common::midb::RedisConnBase *)v7, 1);
        common::milog::MiLogStream::MiLogStream(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_conn_pool.cpp",
          "grab",
          68);
        ostr = v32.ostr_;
        if ( *(_BYTE *)(((unsigned __int64)v32.ostr_ >> 3) + 0x7FFF8000) )
        {
          p_cur = v32.ostr_;
          __asan_report_load8(v32.ostr_);
        }
        else
        {
          p_cur = &v32.ostr_->buffer_.cur_;
          if ( !*(_BYTE *)(((unsigned __int64)&v32.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
          {
            cur = v32.ostr_->buffer_.cur_;
            v13 = (size_t)&v32.ostr_->buffer_.data_[-(int)cur + 0x4000];
            if ( v13 > 0x2A )
              v13 = 43LL;
            memcpy(cur, "[REDIS][NETWORK][ECS] conn_ptr grab failed:", v13);
            ostr->buffer_.cur_ += v13;
            p_cur = &this->port_;
            v14 = *(_BYTE *)(((unsigned __int64)&this->port_ >> 3) + 0x7FFF8000);
            if ( !v14 || v14 > 1 )
            {
              __gnu_cxx::__to_xstring<std::string,char>(
                &v37,
                (int (*)(char *, std::size_t, const char *, ___va_list_tag *))&vsnprintf,
                0x10uLL,
                "%d",
                this->port_);
              goto LABEL_33;
            }
LABEL_32:
            __asan_report_load2(p_cur);
LABEL_33:
            v36._M_dataplus._M_p = v36._anon_0._M_local_buf;
            if ( *(_BYTE *)(((unsigned __int64)&this->host_ >> 3) + 0x7FFF8000) )
            {
              p_M_string_length = (std::string::size_type *)__asan_report_load8(&this->host_);
            }
            else
            {
              p_M_string_length = &this->host_._M_string_length;
              if ( !*(_BYTE *)(((unsigned __int64)&this->host_._M_string_length >> 3) + 0x7FFF8000) )
              {
                v17 = &v36;
                std::string::_M_construct<char *>(
                  &v36,
                  this->host_._M_dataplus._M_p,
                  &this->host_._M_dataplus._M_p[this->host_._M_string_length],
                  v15);
                goto LABEL_38;
              }
            }
            v17 = (std::string *)p_M_string_length;
            __asan_report_load8(p_M_string_length);
LABEL_38:
            if ( v36._M_string_length == 0x3FFFFFFFFFFFFFFFLL )
            {
              __asan_handle_no_return(v17);
              std::__throw_length_error("basic_string::append");
            }
            std::string::_M_append(&v36, ":");
            v18 = v36._M_string_length + v37._M_string_length;
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v36._M_dataplus._M_p == &v36._anon_0 )
              M_allocated_capacity = 15LL;
            else
              M_allocated_capacity = v36._anon_0._M_allocated_capacity;
            if ( v18 > M_allocated_capacity
              && ((std::string::$CFBEC286C7F52157F7E59FC354047095 *)v37._M_dataplus._M_p == &v37._anon_0
                ? (v20 = 15LL)
                : (v20 = v37._anon_0._M_allocated_capacity),
                  v18 <= v20) )
            {
              M_string_length = v37._M_string_length;
              if ( v37._M_string_length )
                M_string_length = 0LL;
              M_p = 0LL;
              v22 = std::string::_M_replace(&v37, 0LL, M_string_length, v36._M_dataplus._M_p, v36._M_string_length);
            }
            else
            {
              M_p = (__int64)v37._M_dataplus._M_p;
              v22 = std::string::_M_append(&v36, v37._M_dataplus._M_p);
            }
            src = &v35;
            if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
            {
              v22 = __asan_report_load8(v22);
            }
            else
            {
              v24 = v22 + 16;
              if ( *(_QWORD *)v22 != v22 + 16 )
              {
                src = *(void **)v22;
                v25 = v22 + 16;
                if ( !*(_BYTE *)(((v22 + 16) >> 3) + 0x7FFF8000) )
                {
                  v35.m128i_i64[0] = *(_QWORD *)(v22 + 16);
                  goto LABEL_60;
                }
                goto LABEL_80;
              }
            }
            v25 = v24;
            M_p = *(unsigned __int8 *)(((v22 + 31) >> 3) + 0x7FFF8000);
            if ( (*(_BYTE *)((v24 >> 3) + 0x7FFF8000) == 0
               || *(_BYTE *)((v24 >> 3) + 0x7FFF8000) > (unsigned __int8)(v24 & 7))
              && ((_BYTE)M_p == 0 || (char)M_p > (char)((v22 + 31) & 7)) )
            {
              v35 = _mm_loadu_si128((const __m128i *)(v22 + 16));
LABEL_60:
              v25 = v22 + 8;
              if ( !*(_BYTE *)(((v22 + 8) >> 3) + 0x7FFF8000) )
              {
                v34 = *(_QWORD *)(v22 + 8);
                *(_QWORD *)v22 = v24;
                *(_QWORD *)(v22 + 8) = 0LL;
                v25 = v22 + 16;
                v26 = *(unsigned __int8 *)(((v22 + 16) >> 3) + 0x7FFF8000);
                v27 = ((_BYTE)v22 + 16) & 7;
                if ( (char)v26 > (char)v27 || !(_BYTE)v26 )
                {
                  *(_BYTE *)(v22 + 16) = 0;
                  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v36._M_dataplus._M_p != &v36._anon_0 )
                    operator delete(v36._M_dataplus._M_p);
                  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v37._M_dataplus._M_p != &v37._anon_0 )
                    operator delete(v37._M_dataplus._M_p);
                  ostr = v32.ostr_;
                  if ( !*(_BYTE *)(((unsigned __int64)v32.ostr_ >> 3) + 0x7FFF8000) )
                  {
                    p_data = &v32.ostr_->buffer_.cur_;
                    if ( !*(_BYTE *)(((unsigned __int64)&v32.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                    {
                      v29 = v32.ostr_->buffer_.cur_;
                      v30 = (size_t)&v32.ostr_->buffer_.data_[-(int)v29 + 0x4000];
                      if ( v34 <= v30 )
                        v30 = v34;
                      memcpy(v29, src, v30);
                      ostr->buffer_.cur_ += v30;
                      if ( src != &v35 )
                        operator delete(src);
                      common::milog::MiLogStream::~MiLogStream(&v32);
                      return common::midb::RedisConnPool::create(this);
                    }
LABEL_84:
                    v31 = (struct _Unwind_Exception *)__asan_report_load8(p_data);
                    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v36._M_dataplus._M_p != &v36._anon_0 )
                      operator delete(v36._M_dataplus._M_p);
                    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v37._M_dataplus._M_p != &v37._anon_0 )
                      operator delete(v37._M_dataplus._M_p);
                    common::milog::MiLogStream::~MiLogStream(&v32);
                    __asan_handle_no_return(&v32);
                    _Unwind_Resume(v31);
                  }
LABEL_83:
                  p_data = &ostr->buffer_.data_;
                  __asan_report_load8(ostr);
                  goto LABEL_84;
                }
LABEL_82:
                __asan_report_store1(v25, M_p, v26, v27);
                goto LABEL_83;
              }
LABEL_81:
              __asan_report_load8(v25);
              goto LABEL_82;
            }
            M_p = 16LL;
            __asan_report_load_n(v24, 16LL);
LABEL_80:
            __asan_report_load8(v25);
            goto LABEL_81;
          }
        }
        __asan_report_load8(p_cur);
        goto LABEL_32;
      }
    }
    __asan_report_load8(v8);
    goto LABEL_23;
  }
LABEL_14:
  if ( !v7 )
    return common::midb::RedisConnPool::create(this);
  return (common::midb::RedisConnBase *)v7;
};

// Line 122: range 000000000CAAD7B2-000000000CAADFB6
common::midb::RedisConnBase *__fastcall common::midb::RedisConnPool::create(common::midb::RedisConnPool *const this)
{
  __int64 v1; // rdx
  std::nothrow_t *v2; // rsi
  common::milog::MilogStringStream *ostr; // r14
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r13
  bool *p_is_cluster; // rdi
  unsigned __int64 v8; // rax
  char v9; // dl
  char v10; // cl
  unsigned __int64 v11; // rdi
  common::milog::MilogStringStream *v12; // rdi
  unsigned __int64 v13; // rdx
  uint32_t *p_connect_timeout; // rdx
  char v15; // cl
  uint16_t *p_db; // rdx
  char v17; // al
  uint16_t *p_port; // rdx
  char v19; // al
  std::_Rb_tree<common::midb::RedisConnBase*,std::pair<common::midb::RedisConnBase* const,unsigned int>,std::_Select1st<std::pair<common::midb::RedisConnBase* const,unsigned int> >,std::less<common::midb::RedisConnBase*>,std::allocator<std::pair<common::midb::RedisConnBase* const,unsigned int> > >::const_iterator v20; // rsi
  std::recursive_mutex *p_expire_max_time; // rdi
  char v22; // al
  char v23; // dl
  unsigned int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // eax
  std::_Rb_tree<common::midb::RedisConnBase*,std::pair<common::midb::RedisConnBase* const,unsigned int>,std::_Select1st<std::pair<common::midb::RedisConnBase* const,unsigned int> >,std::less<common::midb::RedisConnBase*>,std::allocator<std::pair<common::midb::RedisConnBase* const,unsigned int> > >::iterator v27; // rax
  std::_Rb_tree<common::midb::RedisConnBase*,std::pair<common::midb::RedisConnBase* const,unsigned int>,std::_Select1st<std::pair<common::midb::RedisConnBase* const,unsigned int> >,std::less<common::midb::RedisConnBase*>,std::allocator<std::pair<common::midb::RedisConnBase* const,unsigned int> > >::iterator v28; // r9
  std::_Rb_tree_iterator<std::pair<common::midb::RedisConnBase* const,unsigned int> >::_Base_ptr M_node; // rdi
  unsigned __int64 v30; // rax
  std::_Rb_tree<common::midb::RedisConnBase*,std::pair<common::midb::RedisConnBase* const,unsigned int>,std::_Select1st<std::pair<common::midb::RedisConnBase* const,unsigned int> >,std::less<common::midb::RedisConnBase*>,std::allocator<std::pair<common::midb::RedisConnBase* const,unsigned int> > >::iterator v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdi
  char v35; // dl
  char v36; // cl
  unsigned __int64 v37; // rdi
  char v38; // dl
  common::milog::MilogStringStream *v39; // r14
  char *v40; // rdi
  size_t v41; // rbx
  common::midb::RedisConnBase *v42; // rbx
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  size_t v45; // rbx
  unsigned __int64 v46; // rdx
  unsigned __int64 p_M_parent; // rdi
  char v48; // cl
  void *p_host; // rdi
  char v50; // al
  std::tuple<common::midb::RedisConnBase* const&> *v52; // [rsp+0h] [rbp-C8h]
  std::tuple<> *now; // [rsp+8h] [rbp-C0h]
  std::recursive_mutex *mutex; // [rsp+18h] [rbp-B0h]
  std::tuple<> v55; // [rsp+27h] [rbp-A1h] BYREF
  std::tuple<common::midb::RedisConnBase* const&> v56; // [rsp+28h] [rbp-A0h] BYREF
  common::milog::MiLogStream v57; // [rsp+30h] [rbp-98h] BYREF
  char v58[120]; // [rsp+50h] [rbp-78h] BYREF

  v5 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v32 = __asan_stack_malloc_0(64LL);
    if ( v32 )
      v5 = v32;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 12 conn_ptr:124";
  *(_QWORD *)(v5 + 16) = common::midb::RedisConnPool::create;
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  *(_QWORD *)(v5 + 32) = 0LL;
  p_is_cluster = &this->is_cluster_;
  if ( *(char *)(((unsigned __int64)&this->is_cluster_ >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(p_is_cluster, v2, v1);
LABEL_39:
    __asan_report_store4(p_is_cluster, v2);
LABEL_40:
    v8 = __asan_report_store4(p_is_cluster, v2);
    goto LABEL_41;
  }
  if ( this->is_cluster_ )
    goto LABEL_43;
  v2 = &std::nothrow;
  v8 = operator new(0x18uLL, &std::nothrow);
  if ( !v8 )
  {
LABEL_12:
    *(_QWORD *)(v5 + 32) = v8;
    goto LABEL_13;
  }
  p_is_cluster = (bool *)(v8 + 8);
  v9 = *(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
    goto LABEL_39;
  *(_DWORD *)(v8 + 8) = 0;
  p_is_cluster = (bool *)(v8 + 12);
  v10 = *(_BYTE *)(((v8 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v8 + 12) & 7) + 3) >= v10 && v10 )
    goto LABEL_40;
  *(_DWORD *)(v8 + 12) = 0;
  if ( !*(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
    *(_QWORD *)v8 = &`vtable for'common::midb::RedisConn + 2;
    v11 = v8 + 16;
    if ( !*(_BYTE *)(((v8 + 16) >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)(v8 + 16) = 0LL;
      goto LABEL_12;
    }
    goto LABEL_42;
  }
LABEL_41:
  v11 = v8;
  __asan_report_store8(v8, v2);
LABEL_42:
  __asan_report_store8(v11, v2);
LABEL_43:
  v33 = operator new(0x28uLL, &std::nothrow);
  if ( v33 )
  {
    v34 = v33 + 8;
    v35 = *(_BYTE *)(((v33 + 8) >> 3) + 0x7FFF8000);
    if ( v35 && v35 <= 3 )
    {
      __asan_report_store4(v34, &std::nothrow);
    }
    else
    {
      *(_DWORD *)(v33 + 8) = 0;
      v34 = v33 + 12;
      v36 = *(_BYTE *)(((v33 + 12) >> 3) + 0x7FFF8000);
      if ( (char)(((v33 + 12) & 7) + 3) < v36 || !v36 )
      {
        *(_DWORD *)(v33 + 12) = 0;
        if ( !*(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)v33 = &`vtable for'common::midb::RedisClusterConn + 2;
          v37 = v33 + 16;
          if ( !*(_BYTE *)(((v33 + 16) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(v33 + 16) = 0LL;
            v37 = v33 + 24;
            if ( !*(_BYTE *)(((v33 + 24) >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)(v33 + 24) = 0LL;
              v37 = v33 + 32;
              v38 = *(_BYTE *)(((v33 + 32) >> 3) + 0x7FFF8000);
              if ( !v38 || v38 > 3 )
              {
                *(_DWORD *)(v33 + 32) = 0;
                goto LABEL_54;
              }
LABEL_60:
              __asan_report_store4(v37, &std::nothrow);
              goto LABEL_61;
            }
LABEL_59:
            __asan_report_store8(v37, &std::nothrow);
            goto LABEL_60;
          }
LABEL_58:
          __asan_report_store8(v37, &std::nothrow);
          goto LABEL_59;
        }
LABEL_57:
        v37 = v33;
        __asan_report_store8(v33, &std::nothrow);
        goto LABEL_58;
      }
    }
    v33 = __asan_report_store4(v34, &std::nothrow);
    goto LABEL_57;
  }
LABEL_54:
  *(_QWORD *)(v5 + 32) = v33;
LABEL_13:
  v12 = *(common::milog::MilogStringStream **)(v5 + 32);
  if ( v12 )
  {
    if ( !*(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      v13 = (unsigned __int64)(v12->buffer_.data_ + 16);
      if ( !*(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      {
        p_connect_timeout = &this->connect_timeout_;
        v15 = *(_BYTE *)(((unsigned __int64)&this->connect_timeout_ >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)this + 124) & 7) + 3) < v15 || !v15 )
        {
          p_db = &this->db_;
          v17 = *(_BYTE *)(((unsigned __int64)&this->db_ >> 3) + 0x7FFF8000);
          if ( !v17 || v17 > 1 )
          {
            p_port = &this->port_;
            v19 = *(_BYTE *)(((unsigned __int64)&this->port_ >> 3) + 0x7FFF8000);
            if ( !v19 || v19 > 1 )
            {
              v20._M_node = (std::_Rb_tree_const_iterator<std::pair<common::midb::RedisConnBase* const,unsigned int> >::_Base_ptr)&this->host_;
              if ( !(*((unsigned int (__fastcall **)(common::milog::MilogStringStream *, std::string *, _QWORD, __int64, std::string *, _QWORD, _QWORD))v12->buffer_.data_
                     + 2))(
                      v12,
                      &this->host_,
                      this->port_,
                      10LL,
                      &this->pwd_,
                      this->db_,
                      this->connect_timeout_) )
              {
                now = (std::tuple<> *)time(0LL);
                p_expire_max_time = (std::recursive_mutex *)&this->expire_max_time_;
                v22 = *(_BYTE *)(((unsigned __int64)&this->expire_max_time_ >> 3) + 0x7FFF8000);
                if ( !v22 || v22 > 3 )
                {
                  v20._M_node = (std::_Rb_tree_const_iterator<std::pair<common::midb::RedisConnBase* const,unsigned int> >::_Base_ptr)this->expire_max_time_;
                  p_expire_max_time = (std::recursive_mutex *)&this->expire_min_time_;
                  v23 = *(_BYTE *)(((unsigned __int64)&this->expire_min_time_ >> 3) + 0x7FFF8000);
                  if ( (char)((((_BYTE)this + 116) & 7) + 3) < v23 || !v23 )
                  {
                    v24 = common::tools::RandomUtils::rand<unsigned int>(
                            this->expire_min_time_,
                            (unsigned int)v20._M_node);
                    v25 = *(_QWORD *)(v5 + 32);
                    v26 = (_DWORD)now + v24;
                    p_expire_max_time = (std::recursive_mutex *)(v25 + 12);
                    v20._M_node = (std::_Rb_tree_const_iterator<std::pair<common::midb::RedisConnBase* const,unsigned int> >::_Base_ptr)*(unsigned __int8 *)(((unsigned __int64)(v25 + 12) >> 3) + 0x7FFF8000);
                    if ( (char)(((v25 + 12) & 7) + 3) < SLOBYTE(v20._M_node) || !LOBYTE(v20._M_node) )
                    {
                      *(_DWORD *)(v25 + 12) = v26;
                      mutex = &this->mutex_;
                      if ( !&_pthread_key_create
                        || (p_expire_max_time = &this->mutex_,
                            LODWORD(ostr) = pthread_mutex_lock(&this->mutex_._M_mutex),
                            !(_DWORD)ostr) )
                      {
                        if ( *(_BYTE *)(((unsigned __int64)&this->conn_ptr_map_._M_t._M_impl._M_header._M_parent >> 3)
                                      + 0x7FFF8000) )
                        {
                          v30 = __asan_report_load8(&this->conn_ptr_map_._M_t._M_impl._M_header._M_parent);
                        }
                        else
                        {
                          v27._M_node = std::_Rb_tree<common::midb::RedisConnBase *,std::pair<common::midb::RedisConnBase * const,unsigned int>,std::_Select1st<std::pair<common::midb::RedisConnBase * const,unsigned int>>,std::less<common::midb::RedisConnBase *>,std::allocator<std::pair<common::midb::RedisConnBase * const,unsigned int>>>::_M_lower_bound(
                                          &this->conn_ptr_map_._M_t,
                                          (std::_Rb_tree<common::midb::RedisConnBase*,std::pair<common::midb::RedisConnBase* const,unsigned int>,std::_Select1st<std::pair<common::midb::RedisConnBase* const,unsigned int> >,std::less<common::midb::RedisConnBase*>,std::allocator<std::pair<common::midb::RedisConnBase* const,unsigned int> > >::_Link_type)this->conn_ptr_map_._M_t._M_impl._M_header._M_parent,
                                          &this->conn_ptr_map_._M_t._M_impl._M_header,
                                          (common::midb::RedisConnBase *const *)(v5 + 32))._M_node;
                          M_node = v27._M_node;
                          v20._M_node = v27._M_node;
                          if ( &this->conn_ptr_map_._M_t._M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)v27._M_node )
                          {
LABEL_35:
                            v56._M_head_impl = (common::midb::RedisConnBase *const *)(v5 + 32);
                            v31._M_node = std::_Rb_tree<common::midb::RedisConnBase *,std::pair<common::midb::RedisConnBase * const,unsigned int>,std::_Select1st<std::pair<common::midb::RedisConnBase * const,unsigned int>>,std::less<common::midb::RedisConnBase *>,std::allocator<std::pair<common::midb::RedisConnBase * const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<common::midb::RedisConnBase * const&>,std::tuple<>>(
                                            &this->conn_ptr_map_._M_t,
                                            v20,
                                            &std::piecewise_construct,
                                            &v56,
                                            &v55,
                                            (const std::piecewise_construct_t *)v28._M_node,
                                            v52,
                                            now)._M_node;
LABEL_92:
                            M_node = v31._M_node;
                            goto LABEL_93;
                          }
                          v30 = (unsigned __int64)&v27._M_node[1];
                          if ( !*(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
                          {
                            if ( *(_QWORD *)(v5 + 32) >= *(_QWORD *)&M_node[1]._M_color )
                            {
LABEL_93:
                              p_M_parent = (unsigned __int64)&M_node[1]._M_parent;
                              v48 = *(_BYTE *)((p_M_parent >> 3) + 0x7FFF8000);
                              if ( (char)((p_M_parent & 7) + 3) >= v48 && v48 )
                              {
                                __asan_report_store4(p_M_parent, v20._M_node);
                              }
                              else
                              {
                                *(_DWORD *)p_M_parent = (_DWORD)now;
                                common::milog::MiLogStream::MiLogStream(
                                  &v57,
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  1u,
                                  "src/redis_conn_pool.cpp",
                                  "create",
                                  157);
                              }
                              p_host = &this->port_;
                              v50 = *(_BYTE *)(((unsigned __int64)&this->port_ >> 3) + 0x7FFF8000);
                              if ( v50 && v50 <= 1 )
                              {
                                __asan_report_load2(p_host);
                              }
                              else
                              {
                                p_host = &this->host_;
                                if ( !*(_BYTE *)(((unsigned __int64)&this->host_ >> 3) + 0x7FFF8000) )
                                {
                                  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                                  {
                                    common::milog::MiLogStream::operator()(
                                      &v57,
                                      "create new connect to %s %s:%u succ.",
                                      this->name_._M_dataplus._M_p,
                                      this->host_._M_dataplus._M_p,
                                      this->port_);
                                    goto LABEL_105;
                                  }
LABEL_104:
                                  __asan_report_load8(this);
LABEL_105:
                                  common::milog::MiLogStream::~MiLogStream(&v57);
                                  v42 = *(common::midb::RedisConnBase **)(v5 + 32);
                                  if ( &_pthread_key_create )
                                    pthread_mutex_unlock(&mutex->_M_mutex);
                                  goto LABEL_107;
                                }
                              }
                              __asan_report_load8(p_host);
                              goto LABEL_104;
                            }
                            goto LABEL_35;
                          }
                        }
                        v31._M_node = (std::_Rb_tree_iterator<std::pair<common::midb::RedisConnBase* const,unsigned int> >::_Base_ptr)__asan_report_load8(v30);
                        goto LABEL_92;
                      }
LABEL_89:
                      __asan_handle_no_return(p_expire_max_time);
                      std::__throw_system_error((int)ostr);
                    }
LABEL_88:
                    __asan_report_store4(p_expire_max_time, v20._M_node);
                    goto LABEL_89;
                  }
LABEL_87:
                  __asan_report_load4(p_expire_max_time);
                  goto LABEL_88;
                }
LABEL_86:
                __asan_report_load4(p_expire_max_time);
                goto LABEL_87;
              }
LABEL_73:
              v20._M_node = (std::_Rb_tree_const_iterator<std::pair<common::midb::RedisConnBase* const,unsigned int> >::_Base_ptr)&common::milog::MiLogDefault::default_log_obj_;
              common::milog::MiLogStream::MiLogStream(
                &v57,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "src/redis_conn_pool.cpp",
                "create",
                144);
              ostr = v57.ostr_;
              if ( *(_BYTE *)(((unsigned __int64)v57.ostr_ >> 3) + 0x7FFF8000) )
              {
                p_cur = v57.ostr_;
                __asan_report_load8(v57.ostr_);
              }
              else
              {
                p_cur = (common::milog::MilogStringStream *)&v57.ostr_->buffer_.cur_;
                if ( !*(_BYTE *)(((unsigned __int64)&v57.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                {
                  cur = v57.ostr_->buffer_.cur_;
                  v45 = (size_t)&v57.ostr_->buffer_.data_[-(int)cur + 0x4000];
                  if ( v45 > 0x1B )
                    v45 = 28LL;
                  v20._M_node = (std::_Rb_tree_const_iterator<std::pair<common::midb::RedisConnBase* const,unsigned int> >::_Base_ptr)"[REDIS] new conn init failed";
                  memcpy(cur, "[REDIS] new conn init failed", v45);
                  ostr->buffer_.cur_ += v45;
                  common::milog::MiLogStream::~MiLogStream(&v57);
                  p_cur = *(common::milog::MilogStringStream **)(v5 + 32);
                  if ( !p_cur )
                    goto LABEL_81;
                  if ( !*(_BYTE *)(((unsigned __int64)p_cur >> 3) + 0x7FFF8000) )
                  {
                    v46 = (unsigned __int64)(p_cur->buffer_.data_ + 8);
                    if ( !*(_BYTE *)((v46 >> 3) + 0x7FFF8000) )
                    {
                      (*((void (**)(void))p_cur->buffer_.data_ + 1))();
LABEL_81:
                      v42 = 0LL;
                      goto LABEL_107;
                    }
LABEL_85:
                    p_expire_max_time = (std::recursive_mutex *)v46;
                    __asan_report_load8(v46);
                    goto LABEL_86;
                  }
LABEL_84:
                  __asan_report_load8(p_cur);
                  goto LABEL_85;
                }
              }
              __asan_report_load8(p_cur);
              goto LABEL_84;
            }
LABEL_72:
            __asan_report_load2(p_port);
            goto LABEL_73;
          }
LABEL_71:
          __asan_report_load2(p_db);
          goto LABEL_72;
        }
LABEL_70:
        __asan_report_load4(p_connect_timeout);
        goto LABEL_71;
      }
LABEL_69:
      __asan_report_load8(v13);
      goto LABEL_70;
    }
LABEL_68:
    __asan_report_load8(v12);
    goto LABEL_69;
  }
LABEL_61:
  common::milog::MiLogStream::MiLogStream(
    &v57,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/redis_conn_pool.cpp",
    "create",
    138);
  v39 = v57.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v57.ostr_ >> 3) + 0x7FFF8000) )
  {
    v12 = v57.ostr_;
    __asan_report_load8(v57.ostr_);
    goto LABEL_67;
  }
  v12 = (common::milog::MilogStringStream *)&v57.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v57.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_load8(v12);
    goto LABEL_68;
  }
  v40 = v57.ostr_->buffer_.cur_;
  v41 = (size_t)&v57.ostr_->buffer_.data_[-(int)v40 + 0x4000];
  if ( v41 > 0x16 )
    v41 = 23LL;
  memcpy(v40, "[REDIS] new conn failed", v41);
  v39->buffer_.cur_ += v41;
  common::milog::MiLogStream::~MiLogStream(&v57);
  v42 = *(common::midb::RedisConnBase **)(v5 + 32);
LABEL_107:
  if ( v58 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v42;
};

// Line 202: range 000000000CAAE541-000000000CAAE558
void __cdecl GLOBAL__sub_I_redis_conn_pool_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 202: range 000000000CAAC64A-000000000CAAD287
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/redis_conn_pool.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      if ( !`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero )
      {
        `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = 1;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
        {
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, &std::__ioinit);
          JUMPOUT(0xCAAC6DDLL);
        }
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                             + 9;
      }
    }
    __asan_after_dynamic_init();
  }
};
