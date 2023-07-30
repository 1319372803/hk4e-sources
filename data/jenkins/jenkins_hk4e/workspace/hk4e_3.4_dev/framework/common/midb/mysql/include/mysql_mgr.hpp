// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/midb/mysql/include/mysql_mgr.hpp

// Line 46: range 000000000CA21114-000000000CA214A7
void __fastcall common::midb::MySqlMgrT<std::mutex>::final(common::midb::MySqlMgrT<std::mutex> *const this)
{
  std::_Rb_tree_node<std::pair<short unsigned int const,std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> > > > *M_parent; // rsi
  common::midb::MySqlMgrT<std::mutex>::PoolMap *p_pool_map; // rax
  unsigned __int64 p_M_parent; // rdi
  __int64 v5; // rcx
  std::_Rb_tree_header *v6; // rax
  unsigned __int64 v7; // rdx

  p_pool_map = &this->pool_map_;
  p_M_parent = (unsigned __int64)&this->pool_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)((p_M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_parent);
    goto LABEL_9;
  }
  M_parent = (std::_Rb_tree_node<std::pair<short unsigned int const,std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> > > > *)this->pool_map_._M_t._M_impl._M_header._M_parent;
  std::_Rb_tree<unsigned short,std::pair<unsigned short const,std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex>>>,std::_Select1st<std::pair<unsigned short const,std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex>>>>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex>>>>>::_M_erase(
    &p_pool_map->_M_t,
    M_parent);
  p_M_parent = (unsigned __int64)&this->pool_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&this->pool_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_store8(p_M_parent, M_parent);
    goto LABEL_10;
  }
  this->pool_map_._M_t._M_impl._M_header._M_parent = 0LL;
  v6 = &this->pool_map_._M_t._M_impl.std::_Rb_tree_header;
  p_M_parent = (unsigned __int64)&this->pool_map_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&this->pool_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8(p_M_parent, M_parent);
    goto LABEL_11;
  }
  this->pool_map_._M_t._M_impl._M_header._M_left = &v6->_M_header;
  p_M_parent = (unsigned __int64)&this->pool_map_._M_t._M_impl._M_header._M_right;
  v7 = (unsigned __int64)&this->pool_map_._M_t._M_impl._M_header._M_right >> 3;
  if ( *(_BYTE *)(v7 + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_store8(p_M_parent, M_parent);
    goto LABEL_12;
  }
  this->pool_map_._M_t._M_impl._M_header._M_right = &v6->_M_header;
  p_M_parent = (unsigned __int64)&this->pool_map_._M_t._M_impl._M_node_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->pool_map_._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_store8(p_M_parent, M_parent);
    goto LABEL_13;
  }
  this->pool_map_._M_t._M_impl._M_node_count = 0LL;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) >= 0 )
  {
    this->is_init_ = 0;
    return;
  }
LABEL_13:
  __asan_report_store1(this, M_parent, v7, v5);
  common::midb::MySqlMgrT<std::mutex>::~MySqlMgrT(this);
};

// Line 54: range 000000000CA28F14-000000000CA29214
int __fastcall common::midb::MySqlMgrT<std::mutex>::init(
        common::midb::MySqlMgrT<std::mutex> *const this,
        const char *conf_file_path)
{
  common::tools::PTree *v2; // rbx
  _DWORD *v3; // r12
  std::forward_iterator_tag v4; // cl
  __int64 v5; // rax
  const char *v6; // rdx
  std::forward_iterator_tag v7; // cl
  int v8; // r13d
  std::string path; // [rsp+10h] [rbp-B8h] BYREF
  char v11[152]; // [rsp+30h] [rbp-98h] BYREF

  v2 = (common::tools::PTree *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v2 = (common::tools::PTree *)v5;
  }
  v2->impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)1102416563;
  v2[1].impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)"2 32 8 5 pt:58 64 8 13 db_conf_pt:60";
  v2[2].impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)common::midb::MySqlMgrT<std::mutex>::init;
  v3 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202116352;
  common::tools::PTree::PTree(v2 + 4);
  path._M_dataplus._M_p = path._anon_0._M_local_buf;
  if ( conf_file_path )
    v6 = &conf_file_path[strlen(conf_file_path)];
  else
    v6 = (const char *)-1LL;
  std::string::_M_construct<char const*>(&path, conf_file_path, v6, v4);
  common::tools::PTree::readXml(v2 + 4, &path);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
    operator delete(path._M_dataplus._M_p);
  path._M_dataplus._M_p = path._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&path, &byte_19ECF526[-6], byte_19ECF526, v7);
  common::tools::PTree::getChild(v2 + 4, &path);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
    operator delete(path._M_dataplus._M_p);
  v8 = common::midb::MySqlMgrT<std::mutex>::init(this, v2 + 8, 0);
  common::tools::PTree::~PTree(v2 + 8);
  common::tools::PTree::~PTree(v2 + 4);
  if ( v11 == (char *)v2 )
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
  return v8;
};

// Line 161: range 000000000CA25120-000000000CA2527F
int __fastcall common::midb::MySqlMgrT<std::mutex>::reload(
        common::midb::MySqlMgrT<std::mutex> *const this,
        const common::tools::PTree *pt)
{
  std::forward_iterator_tag v2; // cl
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  int MysqlExtra; // r13d
  std::string child_name; // [rsp+10h] [rbp-98h] BYREF
  char v9[120]; // [rsp+30h] [rbp-78h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v3 = v5;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 12 mysql_pt:163";
  *(_QWORD *)(v3 + 16) = common::midb::MySqlMgrT<std::mutex>::reload;
  v4 = v3 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, &byte_19ECEDEE[-14], byte_19ECEDEE, v2);
  common::tools::PTree::getChild(pt, &child_name);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  MysqlExtra = common::midb::MySqlMgrT<std::mutex>::loadMysqlExtra(this, (const common::tools::PTree *)(v3 + 32));
  common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 32));
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return MysqlExtra;
};

// Line 213: range 000000000CA25282-000000000CA25820
void __fastcall common::midb::MySqlMgrT<std::mutex>::release(
        common::midb::MySqlMgrT<std::mutex> *const this,
        mysqlpp::Connection *conn,
        uint16_t index,
        bool is_destroy)
{
  unsigned __int64 v6; // rbx
  _DWORD *v7; // r13
  int v8; // eax
  std::_Rb_tree<short unsigned int,std::pair<short unsigned int const,std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> > >,std::_Select1st<std::pair<short unsigned int const,std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> > > >,std::less<short unsigned int>,std::allocator<std::pair<short unsigned int const,std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> > > > >::iterator v9; // rax
  std::_Rb_tree_header *v10; // r14
  common::midb::MysqlConnPoolT<std::mutex> *M_parent; // rdi
  __int64 v12; // rax
  pthread_rwlock_t *ostr; // r14
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  char **v16; // rdi
  char *v17; // rdi
  void *p_config_shared_mu; // rdi
  char *v19; // rdi
  int v20; // eax
  common::midb::MySqlMgrT<std::mutex> *i; // rax
  unsigned __int64 p_M_right; // rax
  common::midb::MysqlConnPoolT<std::mutex> *M_right; // rdi
  struct _Unwind_Exception *v24; // rbx
  std::_Rb_tree_iterator<std::pair<short unsigned int const,std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> > > >::_Base_ptr n; // [rsp+10h] [rbp-D8h]
  size_t na; // [rsp+10h] [rbp-D8h]
  size_t nb; // [rsp+10h] [rbp-D8h]
  size_t nc; // [rsp+10h] [rbp-D8h]
  bool is_need_destroy; // [rsp+18h] [rbp-D0h]
  unsigned int __k; // [rsp+2Ch] [rbp-BCh] BYREF
  common::milog::MiLogStream v32; // [rsp+30h] [rbp-B8h] BYREF
  char v33[152]; // [rsp+50h] [rbp-98h] BYREF

  v6 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_1(96LL);
    if ( v12 )
      v6 = v12;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 2 9 index:213 64 4 11 err_num:221";
  *(_QWORD *)(v6 + 16) = common::midb::MySqlMgrT<std::mutex>::release;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234688015;
  v7[536862722] = -202116348;
  *(_WORD *)(v6 + 48) = index;
  if ( !conn )
  {
    common::milog::MiLogStream::MiLogStream(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./include/mysql_mgr.hpp",
      "release",
      217);
    common::milog::MiLogStream::operator()(
      &v32,
      "try to release null connection with index=%u",
      *(unsigned __int16 *)(v6 + 48));
    common::milog::MiLogStream::~MiLogStream(&v32);
    goto LABEL_9;
  }
  v8 = mysqlpp::Connection::errnum(conn);
  *(_DWORD *)(v6 + 64) = v8;
  if ( v8 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./include/mysql_mgr.hpp",
      "release",
      226);
    ostr = (pthread_rwlock_t *)v32.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v32.ostr_ >> 3) + 0x7FFF8000) )
    {
      p_cur = v32.ostr_;
      __asan_report_load8(v32.ostr_);
    }
    else
    {
      p_cur = (common::milog::MilogStringStream *)&v32.ostr_->buffer_.cur_;
      if ( !*(_BYTE *)(((unsigned __int64)&v32.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      {
        cur = v32.ostr_->buffer_.cur_;
        na = (size_t)&v32.ostr_->buffer_.data_[-(int)cur + 0x4000];
        if ( na > 0xC )
          na = 13LL;
        memcpy(cur, "[MYSQL] conn:", na);
        *(&ostr->__align + 1) += na;
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v32.ostr_, conn);
        ostr = (pthread_rwlock_t *)v32.ostr_;
        if ( !*(_BYTE *)(((unsigned __int64)v32.ostr_ >> 3) + 0x7FFF8000) )
        {
          v16 = &v32.ostr_->buffer_.cur_;
          if ( !*(_BYTE *)(((unsigned __int64)&v32.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
          {
            v17 = v32.ostr_->buffer_.cur_;
            nb = (size_t)&v32.ostr_->buffer_.data_[-(int)v17 + 0x4000];
            if ( nb > 7 )
              nb = 8LL;
            memcpy(v17, " err_no:", nb);
            *(&ostr->__align + 1) += nb;
            common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v32.ostr_, *(_DWORD *)(v6 + 64));
            ostr = (pthread_rwlock_t *)v32.ostr_;
            if ( !*(_BYTE *)(((unsigned __int64)v32.ostr_ >> 3) + 0x7FFF8000) )
            {
              p_config_shared_mu = &v32.ostr_->buffer_.cur_;
              if ( !*(_BYTE *)(((unsigned __int64)&v32.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
              {
                v19 = v32.ostr_->buffer_.cur_;
                nc = (size_t)&v32.ostr_->buffer_.data_[-(int)v19 + 0x4000];
                if ( nc > 6 )
                  nc = 7LL;
                memcpy(v19, " index:", nc);
                *(&ostr->__align + 1) += nc;
                common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                  v32.ostr_,
                  *(_WORD *)(v6 + 48));
                p_config_shared_mu = &v32;
                common::milog::MiLogStream::~MiLogStream(&v32);
                ostr = &this->config_shared_mu_._M_impl._M_rwlock;
                while ( &_pthread_key_create )
                {
                  p_config_shared_mu = &this->config_shared_mu_;
                  v20 = pthread_rwlock_rdlock(&this->config_shared_mu_._M_impl._M_rwlock);
                  if ( v20 != 11 )
                    goto LABEL_37;
                }
                goto LABEL_36;
              }
LABEL_35:
              __asan_report_load8(p_config_shared_mu);
LABEL_36:
              v20 = 0;
LABEL_37:
              if ( v20 == 35 )
              {
                __asan_handle_no_return(p_config_shared_mu);
                std::__throw_system_error(35);
              }
              if ( &this->err_reconnect_set_._M_t._M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int>>::find(&this->err_reconnect_set_._M_t, (const unsigned int *)(v6 + 64))._M_node )
              {
                __k = 0;
                is_need_destroy = &this->err_reconnect_set_._M_t._M_impl.std::_Rb_tree_header != (std::_Rb_tree_header *)std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int>>::find(&this->err_reconnect_set_._M_t, &__k)._M_node;
              }
              else
              {
                is_need_destroy = 1;
              }
              if ( &_pthread_key_create )
                pthread_rwlock_unlock(ostr);
              if ( is_need_destroy )
                is_destroy = is_need_destroy;
              goto LABEL_5;
            }
LABEL_34:
            p_config_shared_mu = ostr;
            __asan_report_load8(ostr);
            goto LABEL_35;
          }
LABEL_33:
          __asan_report_load8(v16);
          goto LABEL_34;
        }
LABEL_32:
        v16 = (char **)ostr;
        __asan_report_load8(ostr);
        goto LABEL_33;
      }
    }
    __asan_report_load8(p_cur);
    goto LABEL_32;
  }
  is_need_destroy = 0;
LABEL_5:
  v9._M_node = std::_Rb_tree<unsigned short,std::pair<unsigned short const,std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex>>>,std::_Select1st<std::pair<unsigned short const,std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex>>>>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex>>>>>::find(
                 &this->pool_map_._M_t,
                 (const unsigned __int16 *)(v6 + 48))._M_node;
  n = v9._M_node;
  v10 = &this->pool_map_._M_t._M_impl.std::_Rb_tree_header;
  if ( (std::_Rb_tree_header *)v9._M_node == &this->pool_map_._M_t._M_impl.std::_Rb_tree_header )
    goto LABEL_47;
  if ( *(_BYTE *)(((unsigned __int64)&v9._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&v9._M_node[1]._M_parent);
    goto LABEL_47;
  }
  M_parent = (common::midb::MysqlConnPoolT<std::mutex> *)v9._M_node[1]._M_parent;
  if ( !M_parent )
  {
LABEL_47:
    common::milog::MiLogStream::MiLogStream(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./include/mysql_mgr.hpp",
      "release",
      240);
    common::milog::MiLogStream::operator()(
      &v32,
      "fail to find db index=%u, try to release this connection on each pool.",
      *(unsigned __int16 *)(v6 + 48));
    common::milog::MiLogStream::~MiLogStream(&v32);
    if ( *(_BYTE *)(((unsigned __int64)&this->pool_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
    {
      p_M_right = __asan_report_load8(&this->pool_map_._M_t._M_impl._M_header._M_left);
      goto LABEL_50;
    }
    for ( i = (common::midb::MySqlMgrT<std::mutex> *)this->pool_map_._M_t._M_impl._M_header._M_left;
          ;
          i = (common::midb::MySqlMgrT<std::mutex> *)std::_Rb_tree_increment((std::_Rb_tree_node_base *)this) )
    {
      this = i;
      if ( v10 == (std::_Rb_tree_header *)i )
        goto LABEL_9;
      p_M_right = (unsigned __int64)&i->pool_map_._M_t._M_impl._M_header._M_right;
      if ( *(_BYTE *)((p_M_right >> 3) + 0x7FFF8000) )
        break;
      M_right = (common::midb::MysqlConnPoolT<std::mutex> *)this->pool_map_._M_t._M_impl._M_header._M_right;
      if ( M_right )
        goto LABEL_51;
LABEL_52:
      ;
    }
LABEL_50:
    M_right = (common::midb::MysqlConnPoolT<std::mutex> *)p_M_right;
    __asan_report_load8(p_M_right);
LABEL_51:
    common::midb::MysqlConnPoolT<std::mutex>::release(M_right, conn, is_destroy);
    goto LABEL_52;
  }
  common::midb::MysqlConnPoolT<std::mutex>::release(M_parent, conn, is_destroy);
  if ( is_need_destroy )
  {
    if ( *(_BYTE *)(((unsigned __int64)&n[1]._M_parent >> 3) + 0x7FFF8000) )
    {
      v24 = (struct _Unwind_Exception *)__asan_report_load8(&n[1]._M_parent);
      common::milog::MiLogStream::~MiLogStream(&v32);
      __asan_handle_no_return(&v32);
      _Unwind_Resume(v24);
    }
    common::midb::MysqlConnPoolT<std::mutex>::removeUnusedConnections((common::midb::MysqlConnPoolT<std::mutex> *const)n[1]._M_parent);
  }
LABEL_9:
  if ( v33 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 261: range 000000000CA2247C-000000000CA226AC
std::string *__fastcall common::midb::MySqlMgrT<std::mutex>::getDbname[abi:cxx11](
        std::string *retstr,
        const common::midb::MySqlMgrT<std::mutex> *const this,
        uint16_t index)
{
  std::string *v3; // rbp
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r13
  char *M_right; // rsi
  std::_Rb_tree<short unsigned int,std::pair<short unsigned int const,std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> > >,std::_Select1st<std::pair<short unsigned int const,std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> > > >,std::less<short unsigned int>,std::allocator<std::pair<short unsigned int const,std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> > > > >::const_iterator v9; // rax
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  std::forward_iterator_tag v13; // cl
  struct _Unwind_Exception *v15; // rbx
  common::milog::MiLogStream v16; // [rsp+10h] [rbp-98h] BYREF
  char v17[120]; // [rsp+30h] [rbp-78h] BYREF

  v3 = retstr;
  v6 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_0(64LL);
    if ( v12 )
      v6 = v12;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 2 9 index:261";
  *(_QWORD *)(v6 + 16) = common::midb::MySqlMgrT<std::mutex>::getDbname[abi:cxx11];
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116350;
  *(_WORD *)(v6 + 32) = index;
  M_right = (char *)(v6 + 32);
  v9._M_node = std::_Rb_tree<unsigned short,std::pair<unsigned short const,std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex>>>,std::_Select1st<std::pair<unsigned short const,std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex>>>>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex>>>>>::find(
                 &this->pool_map_._M_t,
                 (const unsigned __int16 *)(v6 + 32))._M_node;
  if ( &this->pool_map_._M_t._M_impl.std::_Rb_tree_header != (std::_Rb_tree_header *)v9._M_node )
  {
    if ( *(_BYTE *)(((unsigned __int64)&v9._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&v9._M_node[1]._M_parent);
    }
    else
    {
      M_parent = v9._M_node[1]._M_parent;
      if ( M_parent )
      {
        v11 = (unsigned __int64)retstr >> 3;
        if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
        {
          __asan_report_store8(retstr, M_right);
        }
        else
        {
          retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
          retstr = (std::string *)&M_parent[5]._M_right;
          if ( !*(_BYTE *)(((unsigned __int64)&M_parent[5]._M_right >> 3) + 0x7FFF8000) )
          {
            M_right = (char *)M_parent[5]._M_right;
            retstr = (std::string *)&M_parent[6];
            if ( !*(_BYTE *)(((unsigned __int64)&M_parent[6] >> 3) + 0x7FFF8000) )
            {
              std::string::_M_construct<char *>(
                v3,
                M_right,
                &M_right[*(_QWORD *)&M_parent[6]._M_color],
                (std::forward_iterator_tag)v11);
              goto LABEL_18;
            }
            goto LABEL_15;
          }
        }
        __asan_report_load8(retstr);
LABEL_15:
        __asan_report_load8(retstr);
        goto LABEL_16;
      }
    }
  }
  common::milog::MiLogStream::MiLogStream(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./include/mysql_mgr.hpp",
    "getDbname",
    266);
  M_right = "fail to find db index=%u";
  common::milog::MiLogStream::operator()(&v16, "fail to find db index=%u", *(unsigned __int16 *)(v6 + 32));
LABEL_16:
  common::milog::MiLogStream::~MiLogStream(&v16);
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    v15 = (struct _Unwind_Exception *)__asan_report_store8(v3, M_right);
    common::milog::MiLogStream::~MiLogStream(&v16);
    __asan_handle_no_return(&v16);
    _Unwind_Resume(v15);
  }
  v3->_M_dataplus._M_p = v3->_anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v3, byte_19ECEBE0, byte_19ECEBE0, v13);
LABEL_18:
  if ( v17 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v3;
};
