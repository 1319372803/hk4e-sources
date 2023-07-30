// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/midb/redis/src/redis_mgr.cpp

// Line 47: range 000000000CA7B8F8-000000000CA7BADF
int32_t __fastcall common::midb::RedisMgr::final(common::midb::RedisMgr *const this)
{
  std::_Rb_tree_node<std::pair<unsigned int const,std::shared_ptr<common::midb::RedisConnPool> > > *M_parent; // rsi
  common::midb::RedisMgr::PoolPtrMap *p_pool_ptr_map; // rax
  unsigned __int64 p_M_parent; // rdi
  __int64 v5; // rcx
  std::_Rb_tree_header *v6; // rax
  unsigned __int64 v7; // rdx

  p_pool_ptr_map = &this->pool_ptr_map_;
  p_M_parent = (unsigned __int64)&this->pool_ptr_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)((p_M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_parent);
    goto LABEL_9;
  }
  M_parent = (std::_Rb_tree_node<std::pair<unsigned int const,std::shared_ptr<common::midb::RedisConnPool> > > *)this->pool_ptr_map_._M_t._M_impl._M_header._M_parent;
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::shared_ptr<common::midb::RedisConnPool>>,std::_Select1st<std::pair<unsigned int const,std::shared_ptr<common::midb::RedisConnPool>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<common::midb::RedisConnPool>>>>::_M_erase(
    &p_pool_ptr_map->_M_t,
    M_parent);
  p_M_parent = (unsigned __int64)&this->pool_ptr_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&this->pool_ptr_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_store8(p_M_parent, M_parent);
    goto LABEL_10;
  }
  this->pool_ptr_map_._M_t._M_impl._M_header._M_parent = 0LL;
  v6 = &this->pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header;
  p_M_parent = (unsigned __int64)&this->pool_ptr_map_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&this->pool_ptr_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8(p_M_parent, M_parent);
    goto LABEL_11;
  }
  this->pool_ptr_map_._M_t._M_impl._M_header._M_left = &v6->_M_header;
  p_M_parent = (unsigned __int64)&this->pool_ptr_map_._M_t._M_impl._M_header._M_right;
  v7 = (unsigned __int64)&this->pool_ptr_map_._M_t._M_impl._M_header._M_right >> 3;
  if ( *(_BYTE *)(v7 + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_store8(p_M_parent, M_parent);
    goto LABEL_12;
  }
  this->pool_ptr_map_._M_t._M_impl._M_header._M_right = &v6->_M_header;
  p_M_parent = (unsigned __int64)&this->pool_ptr_map_._M_t._M_impl._M_node_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->pool_ptr_map_._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_store8(p_M_parent, M_parent);
    goto LABEL_13;
  }
  this->pool_ptr_map_._M_t._M_impl._M_node_count = 0LL;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_13:
    __asan_report_store1(this, M_parent, v7, v5);
    JUMPOUT(0xCA7B9CFLL);
  }
  this->is_init_ = 0;
  return 0;
};

// Line 79: range 000000000CAA7C74-000000000CAA9D84
// local variable allocation has failed, the output may be wrong!
int32_t __fastcall common::midb::RedisMgr::init(
        common::midb::RedisMgr *const this,
        const common::tools::PTree *pt,
        uint32_t pool_max_size)
{
  bool *p_is_cluster; // rdi
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // rax
  int32_t v7; // ebx
  std::forward_iterator_tag v9; // cl
  std::forward_iterator_tag v10; // cl
  char v11; // cl
  const common::tools::PTree *i; // r12
  std::forward_iterator_tag v13; // cl
  unsigned __int64 v14; // rdi
  std::string::pointer M_p; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  std::string::size_type M_string_length; // rax
  std::string::size_type v19; // rax
  __int64 v20; // rdx
  std::string::size_type v21; // rcx
  char v22; // al
  __int64 v23; // rdx
  __int64 v24; // rdx
  char v25; // al
  __int64 v26; // rcx
  unsigned __int64 v27; // rdi
  std::string::pointer v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  std::string::size_type v31; // rax
  std::string::size_type v32; // rax
  __int64 v33; // rdx
  std::string::size_type v34; // rcx
  char v35; // al
  __int64 v36; // rdx
  __int64 v37; // rdx
  char v38; // al
  __int64 v39; // rcx
  std::forward_iterator_tag v40; // cl
  unsigned __int64 v41; // rdi
  std::string::pointer v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  std::string::size_type v45; // rax
  std::string::size_type v46; // rax
  __int64 v47; // rdx
  std::string::size_type v48; // rcx
  char v49; // al
  __int64 v50; // rdx
  __int64 v51; // rdx
  char v52; // al
  __int64 v53; // rcx
  std::forward_iterator_tag v54; // cl
  bool v55; // al
  __int64 v56; // rdx
  __int64 v57; // rcx
  common::milog::MiLogStream *v58; // rsi
  unsigned __int64 v59; // r12
  char v60; // al
  std::forward_iterator_tag v61; // cl
  unsigned __int64 v62; // r13
  unsigned __int64 v63; // rdi
  char v64; // al
  char v65; // dl
  __int64 v66; // rdx
  common::midb::RedisConnPool *v67; // r12
  common::midb::RedisConnPool *v68; // rdi
  common::midb::RedisConnBase *v69; // rax
  char *v70; // rsi
  unsigned __int64 v71; // r13
  bool *v72; // rdi
  char v73; // al
  __int64 v74; // rdx
  char v75; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v76; // rdi
  char *v77; // rdi
  char *v78; // rdi
  char *v79; // rdi
  std::pair<unsigned int,std::shared_ptr<common::midb::RedisConnPool> > *p_M_use_count; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v81; // rax
  char v82; // cl
  char v83; // cl
  size_t M_pi; // r12
  _Atomic_word *v85; // rax
  char v86; // cl
  signed __int32 v87; // eax
  char v88; // dl
  unsigned __int64 v89; // rdi
  volatile signed __int32 *v90; // rax
  char v91; // cl
  signed __int32 v92; // eax
  unsigned __int64 v93; // rdi
  char v94; // dl
  common::milog::MilogStringStream *ostr; // r13
  void *p_cur; // rdi
  char *cur; // rdi
  common::milog::MilogStringStream *v98; // r13
  char *v99; // rdi
  common::milog::MilogStringStream *v100; // r13
  char *v101; // rdi
  common::milog::MilogStringStream *v102; // r13
  char *v103; // rdi
  common::milog::MilogStringStream *v104; // r13
  char *v105; // rdi
  common::milog::MilogStringStream *v106; // r13
  char *v107; // rdi
  common::milog::MilogStringStream *v108; // r13
  char *v109; // rdi
  char v110; // al
  __int64 v111; // rdx
  const char *v112; // r14
  size_t v113; // rax
  size_t v114; // rdi
  void *v115; // rdi
  size_t v116; // r13
  volatile signed __int32 *v117; // rax
  size_t v118; // rdi
  signed __int32 v119; // eax
  unsigned __int64 v120; // rdi
  const common::tools::PTree *v121; // r12
  void *v122; // rdi
  size_t v123; // r13
  char v124; // dl
  unsigned __int64 v125; // rdi
  volatile signed __int32 *v126; // rax
  signed __int32 v127; // eax
  char v128; // dl
  __int64 v129; // rdx
  __int64 v130; // rcx
  char *v131; // rdi
  char *v132; // rdi
  char *v133; // rdi
  struct _Unwind_Exception *v134; // rbx
  _DWORD *v135; // [rsp+8h] [rbp-348h]
  unsigned __int64 v136; // [rsp+10h] [rbp-340h]
  common::midb::RedisConnPool *v137; // [rsp+18h] [rbp-338h]
  std::string::size_type v138; // [rsp+20h] [rbp-330h]
  std::string::size_type v139; // [rsp+28h] [rbp-328h]
  std::string::size_type v140; // [rsp+30h] [rbp-320h]
  unsigned int expire_max_time; // [rsp+3Ch] [rbp-314h]
  unsigned int expire_min_time; // [rsp+40h] [rbp-310h]
  unsigned int connect_timeout; // [rsp+44h] [rbp-30Ch]
  unsigned __int64 v145; // [rsp+48h] [rbp-308h]
  uint16_t db; // [rsp+50h] [rbp-300h]
  uint32_t port; // [rsp+54h] [rbp-2FCh]
  std::pair<unsigned int,std::shared_ptr<common::midb::RedisConnPool> > v149; // [rsp+60h] [rbp-2F0h] BYREF
  std::string path; // [rsp+80h] [rbp-2D0h] BYREF
  std::string v151; // [rsp+A0h] [rbp-2B0h] BYREF
  std::string v152; // [rsp+C0h] [rbp-290h] BYREF
  std::string v153; // [rsp+E0h] [rbp-270h] BYREF
  std::string v154; // [rsp+100h] [rbp-250h] BYREF
  std::string v155; // [rsp+120h] [rbp-230h] BYREF
  std::string v156; // [rsp+140h] [rbp-210h] BYREF
  common::milog::MiLogStream v157; // [rsp+160h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v158; // [rsp+180h] [rbp-1D0h] BYREF
  char v159[432]; // [rsp+1A0h] [rbp-1B0h] BYREF

  v136 = (unsigned __int64)v159;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(384LL);
    if ( v6 )
      v136 = v6;
  }
  *(_QWORD *)v136 = 1102416563LL;
  *(_QWORD *)(v136 + 8) = "8 32 1 4 __a2 48 4 8 index:88 64 16 12 pool_ptr:127 96 16 7 __guard 128 24 14 db_pt_list:107 1"
                          "92 32 7 name:89 256 32 7 host:89 320 32 6 pwd:89";
  *(_QWORD *)(v136 + 16) = common::midb::RedisMgr::init;
  v135 = (_DWORD *)(v136 >> 3);
  v135[536862720] = -235802127;
  v135[536862721] = -234556927;
  v135[536862722] = -219021312;
  v135[536862723] = -219021312;
  v135[536862724] = -234881024;
  v135[536862725] = -218959118;
  v135[536862727] = -218959118;
  v135[536862729] = -218959118;
  v135[536862731] = -202116109;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(this, pt, *(_QWORD *)&pool_max_size);
    goto LABEL_10;
  }
  if ( this->is_init_ )
  {
LABEL_10:
    common::milog::MiLogStream::MiLogStream(
      &v158,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "init",
      82);
    common::milog::MiLogStream::operator()(&v158, "can not re init mgr.");
    common::milog::MiLogStream::~MiLogStream(&v158);
    v7 = 1;
    goto LABEL_11;
  }
  *(_QWORD *)(v136 + 192) = v136 + 208;
  *(_QWORD *)(v136 + 200) = 0LL;
  *(_BYTE *)(v136 + 208) = 0;
  *(_QWORD *)(v136 + 256) = v136 + 272;
  *(_QWORD *)(v136 + 264) = 0LL;
  *(_BYTE *)(v136 + 272) = 0;
  *(_QWORD *)(v136 + 320) = v136 + 336;
  *(_QWORD *)(v136 + 328) = 0LL;
  *(_BYTE *)(v136 + 336) = 0;
  p_is_cluster = &this->is_cluster_;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_cluster_ >> 3) + 0x7FFF8000);
  v5 = ((_BYTE)this + 1) & 7;
  if ( v4 <= (char)v5 && v4 )
  {
    __asan_report_store1(p_is_cluster, pt, v5, common::midb::RedisMgr::init);
  }
  else
  {
    this->is_cluster_ = 0;
    path._M_dataplus._M_p = path._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(
      &path,
      &byte_1A0D2359[-25],
      byte_1A0D2359,
      (std::forward_iterator_tag)common::midb::RedisMgr::init);
  }
  expire_min_time = common::tools::PTree::get<unsigned int>(pt, &path, 0xE10u);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
    operator delete(path._M_dataplus._M_p);
  v151._M_dataplus._M_p = v151._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v151, &byte_1A0D2399[-25], byte_1A0D2399, v9);
  expire_max_time = common::tools::PTree::get<unsigned int>(pt, &v151, 0x1C20u);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v151._M_dataplus._M_p != &v151._anon_0 )
    operator delete(v151._M_dataplus._M_p);
  v152._M_dataplus._M_p = v152._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v152, &byte_1A0D23D9[-25], byte_1A0D23D9, v10);
  connect_timeout = common::tools::PTree::get<unsigned int>(pt, &v152, 5u);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v152._M_dataplus._M_p != &v152._anon_0 )
    operator delete(v152._M_dataplus._M_p);
  common::milog::MiLogStream::MiLogStream(
    &v158,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/redis_mgr.cpp",
    "init",
    95);
  common::milog::MiLogStream::operator()(
    &v158,
    "redis expire_min_time=%u expire_max_time=%u connect_timeout=%u",
    expire_min_time,
    expire_max_time,
    connect_timeout);
  common::milog::MiLogStream::~MiLogStream(&v158);
  if ( expire_min_time > expire_max_time )
  {
    common::milog::MiLogStream::MiLogStream(
      &v158,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/redis_mgr.cpp",
      "init",
      98);
    common::milog::MiLogStream::operator()(&v158, "redis expire time dismatch");
    common::milog::MiLogStream::~MiLogStream(&v158);
    v7 = -1;
LABEL_167:
    v77 = *(char **)(v136 + 320);
    if ( v77 != (char *)(v136 + 336) )
      operator delete(v77);
    v78 = *(char **)(v136 + 256);
    if ( v78 != (char *)(v136 + 272) )
      operator delete(v78);
    v79 = *(char **)(v136 + 192);
    if ( v79 != (char *)(v136 + 208) )
      operator delete(v79);
    goto LABEL_11;
  }
  if ( !connect_timeout )
  {
    common::milog::MiLogStream::MiLogStream(
      &v158,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/redis_mgr.cpp",
      "init",
      103);
    common::milog::MiLogStream::operator()(&v158, "redis connect timeout is error");
    common::milog::MiLogStream::~MiLogStream(&v158);
    v7 = -1;
    goto LABEL_167;
  }
  common::tools::PTree::getAllChild[abi:cxx11](
    (std::list<std::pair<std::string,common::tools::PTree>> *)(v136 + 128),
    pt);
  for ( i = *(const common::tools::PTree **)(v136 + 128); ; i = *(const common::tools::PTree **)v145 )
  {
    v145 = (unsigned __int64)i;
    if ( i == (const common::tools::PTree *)(v136 + 128) )
      goto LABEL_316;
    v121 = i + 6;
    v158.log_ = (common::milog::MiLog *)&v158.ostr_ptr_._M_refcount;
    std::string::_M_construct<char const*>(
      (std::string *const)&v158,
      &byte_1A0D24EF[-15],
      byte_1A0D24EF,
      (std::forward_iterator_tag)v11);
    *(_DWORD *)(v136 + 48) = common::tools::PTree::get<unsigned int>(v121, (const std::string *)&v158);
    if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v158.log_ != &v158.ostr_ptr_._M_refcount )
      operator delete(v158.log_);
    v158.log_ = (common::milog::MiLog *)&v158.ostr_ptr_._M_refcount;
    std::string::_M_construct<char const*>((std::string *const)&v158, &byte_1A0D252E[-14], byte_1A0D252E, v13);
    common::tools::PTree::get<std::string>(&v153, v121, (const std::string *)&v158);
    v14 = *(_QWORD *)(v136 + 192);
    M_p = v153._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v153._M_dataplus._M_p == &v153._anon_0 )
    {
      if ( v153._M_string_length )
      {
        if ( v153._M_string_length == 1 )
        {
          v22 = *(_BYTE *)(((unsigned __int64)v153._M_dataplus._M_p >> 3) + 0x7FFF8000);
          v23 = (__int64)v153._M_dataplus._M_p & 7;
          if ( v22 <= (char)v23 && v22 )
          {
            v14 = (unsigned __int64)v153._M_dataplus._M_p;
            __asan_report_load1(v153._M_dataplus._M_p, v153._M_dataplus._M_p, v23);
          }
          else
          {
            v24 = (unsigned __int8)*v153._M_dataplus._M_p;
            v25 = *(_BYTE *)((v14 >> 3) + 0x7FFF8000);
            v26 = *(_QWORD *)(v136 + 192) & 7LL;
            if ( v25 > (char)v26 || !v25 )
            {
              *(_BYTE *)v14 = v24;
              goto LABEL_43;
            }
          }
          __asan_report_store1(v14, M_p, v24, v26);
LABEL_53:
          __asan_report_store1(v14, M_p, v20, v21);
          goto LABEL_54;
        }
        memcpy((void *)v14, v153._M_dataplus._M_p, v153._M_string_length);
      }
LABEL_43:
      M_string_length = v153._M_string_length;
      *(_QWORD *)(v136 + 200) = v153._M_string_length;
      v19 = *(_QWORD *)(v136 + 192) + M_string_length;
      v14 = v19;
      v20 = *(unsigned __int8 *)((v19 >> 3) + 0x7FFF8000);
      v21 = v19 & 7;
      if ( (char)v20 > (char)v21 || !(_BYTE)v20 )
      {
        *(_BYTE *)v19 = 0;
        goto LABEL_33;
      }
      goto LABEL_53;
    }
    if ( v14 != v136 + 208 )
    {
      v140 = *(_QWORD *)(v136 + 208);
      goto LABEL_31;
    }
LABEL_54:
    v14 = 0LL;
LABEL_31:
    *(_QWORD *)(v136 + 192) = M_p;
    *(_QWORD *)(v136 + 200) = v153._M_string_length;
    *(_QWORD *)(v136 + 208) = v153._anon_0._M_allocated_capacity;
    if ( v14 )
    {
      v153._M_dataplus._M_p = (std::string::pointer)v14;
      v153._anon_0._M_allocated_capacity = v140;
    }
    else
    {
      v153._M_dataplus._M_p = v153._anon_0._M_local_buf;
    }
LABEL_33:
    v153._M_string_length = 0LL;
    v16 = *(unsigned __int8 *)(((unsigned __int64)v153._M_dataplus._M_p >> 3) + 0x7FFF8000);
    v17 = (__int64)v153._M_dataplus._M_p & 7;
    if ( (char)v16 <= (char)v17 && (_BYTE)v16 )
    {
      __asan_report_store1(v153._M_dataplus._M_p, M_p, v16, v17);
    }
    else
    {
      *v153._M_dataplus._M_p = 0;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v153._M_dataplus._M_p != &v153._anon_0 )
        operator delete(v153._M_dataplus._M_p);
      if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v158.log_ != &v158.ostr_ptr_._M_refcount )
        operator delete(v158.log_);
      v158.log_ = (common::milog::MiLog *)&v158.ostr_ptr_._M_refcount;
      std::string::_M_construct<char const*>(
        (std::string *const)&v158,
        &byte_1A0D256E[-14],
        byte_1A0D256E,
        (std::forward_iterator_tag)v17);
    }
    common::tools::PTree::get<std::string>(&v154, v121, (const std::string *)&v158);
    v27 = *(_QWORD *)(v136 + 256);
    v28 = v154._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v154._M_dataplus._M_p == &v154._anon_0 )
    {
      if ( v154._M_string_length )
      {
        if ( v154._M_string_length == 1 )
        {
          v35 = *(_BYTE *)(((unsigned __int64)v154._M_dataplus._M_p >> 3) + 0x7FFF8000);
          v36 = (__int64)v154._M_dataplus._M_p & 7;
          if ( v35 <= (char)v36 && v35 )
          {
            v27 = (unsigned __int64)v154._M_dataplus._M_p;
            __asan_report_load1(v154._M_dataplus._M_p, v154._M_dataplus._M_p, v36);
          }
          else
          {
            v37 = (unsigned __int8)*v154._M_dataplus._M_p;
            v38 = *(_BYTE *)((v27 >> 3) + 0x7FFF8000);
            v39 = *(_QWORD *)(v136 + 256) & 7LL;
            if ( v38 > (char)v39 || !v38 )
            {
              *(_BYTE *)v27 = v37;
              goto LABEL_72;
            }
          }
          __asan_report_store1(v27, v28, v37, v39);
LABEL_82:
          __asan_report_store1(v27, v28, v33, v34);
          goto LABEL_83;
        }
        memcpy((void *)v27, v154._M_dataplus._M_p, v154._M_string_length);
      }
LABEL_72:
      v31 = v154._M_string_length;
      *(_QWORD *)(v136 + 264) = v154._M_string_length;
      v32 = *(_QWORD *)(v136 + 256) + v31;
      v27 = v32;
      v33 = *(unsigned __int8 *)((v32 >> 3) + 0x7FFF8000);
      v34 = v32 & 7;
      if ( (char)v33 > (char)v34 || !(_BYTE)v33 )
      {
        *(_BYTE *)v32 = 0;
        goto LABEL_62;
      }
      goto LABEL_82;
    }
    if ( v27 != v136 + 272 )
    {
      v139 = *(_QWORD *)(v136 + 272);
      goto LABEL_60;
    }
LABEL_83:
    v27 = 0LL;
LABEL_60:
    *(_QWORD *)(v136 + 256) = v28;
    *(_QWORD *)(v136 + 264) = v154._M_string_length;
    *(_QWORD *)(v136 + 272) = v154._anon_0._M_allocated_capacity;
    if ( v27 )
    {
      v154._M_dataplus._M_p = (std::string::pointer)v27;
      v154._anon_0._M_allocated_capacity = v139;
    }
    else
    {
      v154._M_dataplus._M_p = v154._anon_0._M_local_buf;
    }
LABEL_62:
    v154._M_string_length = 0LL;
    v29 = *(unsigned __int8 *)(((unsigned __int64)v154._M_dataplus._M_p >> 3) + 0x7FFF8000);
    v30 = (__int64)v154._M_dataplus._M_p & 7;
    if ( (char)v29 <= (char)v30 && (_BYTE)v29 )
    {
      __asan_report_store1(v154._M_dataplus._M_p, v28, v29, v30);
    }
    else
    {
      *v154._M_dataplus._M_p = 0;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v154._M_dataplus._M_p != &v154._anon_0 )
        operator delete(v154._M_dataplus._M_p);
      if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v158.log_ != &v158.ostr_ptr_._M_refcount )
        operator delete(v158.log_);
      v158.log_ = (common::milog::MiLog *)&v158.ostr_ptr_._M_refcount;
      std::string::_M_construct<char const*>(
        (std::string *const)&v158,
        &byte_1A0D25AE[-14],
        byte_1A0D25AE,
        (std::forward_iterator_tag)v30);
    }
    port = common::tools::PTree::get<unsigned int>(v121, (const std::string *)&v158);
    if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v158.log_ != &v158.ostr_ptr_._M_refcount )
      operator delete(v158.log_);
    v158.log_ = (common::milog::MiLog *)&v158.ostr_ptr_._M_refcount;
    std::string::_M_construct<char const*>((std::string *const)&v158, &byte_1A0D25ED[-13], byte_1A0D25ED, v40);
    common::tools::PTree::get<std::string>(&v155, v121, (const std::string *)&v158);
    v41 = *(_QWORD *)(v136 + 320);
    v42 = v155._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v155._M_dataplus._M_p == &v155._anon_0 )
    {
      if ( v155._M_string_length )
      {
        if ( v155._M_string_length == 1 )
        {
          v49 = *(_BYTE *)(((unsigned __int64)v155._M_dataplus._M_p >> 3) + 0x7FFF8000);
          v50 = (__int64)v155._M_dataplus._M_p & 7;
          if ( v49 <= (char)v50 && v49 )
          {
            v41 = (unsigned __int64)v155._M_dataplus._M_p;
            __asan_report_load1(v155._M_dataplus._M_p, v155._M_dataplus._M_p, v50);
          }
          else
          {
            v51 = (unsigned __int8)*v155._M_dataplus._M_p;
            v52 = *(_BYTE *)((v41 >> 3) + 0x7FFF8000);
            v53 = *(_QWORD *)(v136 + 320) & 7LL;
            if ( v52 > (char)v53 || !v52 )
            {
              *(_BYTE *)v41 = v51;
              goto LABEL_103;
            }
          }
          __asan_report_store1(v41, v42, v51, v53);
LABEL_113:
          __asan_report_store1(v41, v42, v47, v48);
          goto LABEL_114;
        }
        memcpy((void *)v41, v155._M_dataplus._M_p, v155._M_string_length);
      }
LABEL_103:
      v45 = v155._M_string_length;
      *(_QWORD *)(v136 + 328) = v155._M_string_length;
      v46 = *(_QWORD *)(v136 + 320) + v45;
      v41 = v46;
      v47 = *(unsigned __int8 *)((v46 >> 3) + 0x7FFF8000);
      v48 = v46 & 7;
      if ( (char)v47 > (char)v48 || !(_BYTE)v47 )
      {
        *(_BYTE *)v46 = 0;
        goto LABEL_93;
      }
      goto LABEL_113;
    }
    if ( v41 != v136 + 336 )
    {
      v138 = *(_QWORD *)(v136 + 336);
      goto LABEL_91;
    }
LABEL_114:
    v41 = 0LL;
LABEL_91:
    *(_QWORD *)(v136 + 320) = v42;
    *(_QWORD *)(v136 + 328) = v155._M_string_length;
    *(_QWORD *)(v136 + 336) = v155._anon_0._M_allocated_capacity;
    if ( v41 )
    {
      v155._M_dataplus._M_p = (std::string::pointer)v41;
      v155._anon_0._M_allocated_capacity = v138;
    }
    else
    {
      v155._M_dataplus._M_p = v155._anon_0._M_local_buf;
    }
LABEL_93:
    v155._M_string_length = 0LL;
    v43 = *(unsigned __int8 *)(((unsigned __int64)v155._M_dataplus._M_p >> 3) + 0x7FFF8000);
    v44 = (__int64)v155._M_dataplus._M_p & 7;
    if ( (char)v43 <= (char)v44 && (_BYTE)v43 )
    {
      __asan_report_store1(v155._M_dataplus._M_p, v42, v43, v44);
    }
    else
    {
      *v155._M_dataplus._M_p = 0;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v155._M_dataplus._M_p != &v155._anon_0 )
        operator delete(v155._M_dataplus._M_p);
      if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v158.log_ != &v158.ostr_ptr_._M_refcount )
        operator delete(v158.log_);
      v158.log_ = (common::milog::MiLog *)&v158.ostr_ptr_._M_refcount;
      std::string::_M_construct<char const*>(
        (std::string *const)&v158,
        &byte_1A0D262C[-12],
        byte_1A0D262C,
        (std::forward_iterator_tag)v44);
    }
    db = common::tools::PTree::get<unsigned int>(v121, (const std::string *)&v158);
    if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v158.log_ != &v158.ostr_ptr_._M_refcount )
      operator delete(v158.log_);
    v156._M_dataplus._M_p = v156._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v156, &byte_1A0D2674[-20], byte_1A0D2674, v54);
    v55 = common::tools::PTree::get<bool>(v121, &v156, 0);
    v56 = *(unsigned __int8 *)(((unsigned __int64)&this->is_cluster_ >> 3) + 0x7FFF8000);
    v57 = ((_BYTE)this + 1) & 7;
    if ( (char)v56 <= (char)v57 && (_BYTE)v56 )
    {
      __asan_report_store1(&this->is_cluster_, &v156, v56, v57);
LABEL_129:
      common::milog::MiLogStream::MiLogStream(
        &v158,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_mgr.cpp",
        "init",
        122);
      common::milog::MiLogStream::operator()(&v158, "redis with index=%u is more than 1.", *(unsigned int *)(v136 + 48));
      common::milog::MiLogStream::~MiLogStream(&v158);
      v7 = 1;
LABEL_166:
      std::_List_base<std::pair<std::string,common::tools::PTree>>::_M_clear((std::_List_base<std::pair<std::string,common::tools::PTree>> *const)(v136 + 128));
      goto LABEL_167;
    }
    this->is_cluster_ = v55;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v156._M_dataplus._M_p != &v156._anon_0 )
      operator delete(v156._M_dataplus._M_p);
    v58 = (common::milog::MiLogStream *)(v136 + 48);
    if ( &this->pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header != (std::_Rb_tree_header *)std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::shared_ptr<common::midb::RedisConnPool>>,std::_Select1st<std::pair<unsigned int const,std::shared_ptr<common::midb::RedisConnPool>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<common::midb::RedisConnPool>>>>::find(
                                                                                             &this->pool_ptr_map_._M_t,
                                                                                             (const unsigned int *)(v136 + 48))._M_node )
      goto LABEL_129;
    v59 = (unsigned __int64)&this->is_cluster_;
    v60 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
    if ( v60 <= (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) && v60 )
    {
      __asan_report_load1(
        &common::tools::perf::MemoryPerf::is_record,
        v58,
        (unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7);
      goto LABEL_131;
    }
    if ( !common::tools::perf::MemoryPerf::is_record )
    {
      v70 = (char *)(v136 + 32);
      std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<common::midb::RedisConnPool,std::allocator<common::midb::RedisConnPool>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_ptr_inplace<common::midb::RedisConnPool,std::allocator<common::midb::RedisConnPool>,(__gnu_cxx::_Lock_policy)2> > *)(v136 + 32));
      v71 = *(_QWORD *)(v136 + 104);
      v72 = (bool *)(v71 + 8);
      v73 = *(_BYTE *)(((v71 + 8) >> 3) + 0x7FFF8000);
      if ( v73 && v73 <= 3 )
      {
        __asan_report_store4(v72, v70);
      }
      else
      {
        *(_DWORD *)(v71 + 8) = 1;
        v72 = (bool *)(v71 + 12);
        v74 = *(unsigned __int8 *)(((v71 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v71 + 12) & 7) + 3) < (char)v74 || !(_BYTE)v74 )
        {
          *(_DWORD *)(v71 + 12) = 1;
          v72 = (bool *)v71;
          if ( !*(_BYTE *)((v71 >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)v71 = &`vtable for'std::_Sp_counted_ptr_inplace<common::midb::RedisConnPool,std::allocator<common::midb::RedisConnPool>,(__gnu_cxx::_Lock_policy)2>
                           + 2;
            v72 = &this->is_cluster_;
            v75 = *(_BYTE *)((v59 >> 3) + 0x7FFF8000);
            v59 &= 7u;
            if ( v75 > (char)v59 || !v75 )
            {
              v59 = v71 + 16;
              common::midb::RedisConnPool::RedisConnPool(
                (common::midb::RedisConnPool *const)(v71 + 16),
                (const std::string *)(v136 + 192),
                (const std::string *)(v136 + 256),
                port,
                (const std::string *)(v136 + 320),
                db,
                pool_max_size,
                this->is_cluster_,
                expire_min_time,
                expire_max_time,
                connect_timeout);
LABEL_162:
              *(_QWORD *)(v136 + 104) = 0LL;
              *(_QWORD *)(v136 + 72) = v71;
              *(_QWORD *)(v136 + 64) = v59;
              goto LABEL_148;
            }
LABEL_161:
            __asan_report_load1(v72, v70, v74);
            goto LABEL_162;
          }
LABEL_160:
          __asan_report_store8(v72, v70);
          goto LABEL_161;
        }
      }
      __asan_report_store4(v72, v70);
      goto LABEL_160;
    }
    v58 = (common::milog::MiLogStream *)(v136 + 32);
    std::__allocate_guarded<common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::midb::RedisConnPool,common::tools::perf::allocator<common::midb::RedisConnPool,common::midb::RedisConnPool>,(__gnu_cxx::_Lock_policy)2>,common::midb::RedisConnPool>>((common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::midb::RedisConnPool,common::tools::perf::allocator<common::midb::RedisConnPool,common::midb::RedisConnPool>,(__gnu_cxx::_Lock_policy)2>,common::midb::RedisConnPool> *)(v136 + 32));
LABEL_131:
    v62 = *(_QWORD *)(v136 + 104);
    v63 = v62 + 8;
    v64 = *(_BYTE *)(((v62 + 8) >> 3) + 0x7FFF8000);
    if ( v64 && v64 <= 3 )
    {
      __asan_report_store4(v63, v58);
LABEL_139:
      __asan_report_store4(v63, v58);
LABEL_140:
      __asan_report_store8(v63, v58);
LABEL_141:
      v58 = &v158;
      common::tools::perf::MemoryPerfRecorder::construct(
        &common::tools::perf::MemoryPerf::recorder,
        (const std::string *)&v158,
        0xF0uLL);
      if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v158.log_ != &v158.ostr_ptr_._M_refcount )
        operator delete(v158.log_);
      goto LABEL_143;
    }
    *(_DWORD *)(v62 + 8) = 1;
    v63 = v62 + 12;
    v65 = *(_BYTE *)(((v62 + 12) >> 3) + 0x7FFF8000);
    if ( (char)(((v62 + 12) & 7) + 3) >= v65 && v65 )
      goto LABEL_139;
    *(_DWORD *)(v62 + 12) = 1;
    v63 = v62;
    if ( *(_BYTE *)((v62 >> 3) + 0x7FFF8000) )
      goto LABEL_140;
    *(_QWORD *)v62 = &`vtable for'std::_Sp_counted_ptr_inplace<common::midb::RedisConnPool,common::tools::perf::allocator<common::midb::RedisConnPool,common::midb::RedisConnPool>,(__gnu_cxx::_Lock_policy)2>
                   + 2;
    v137 = (common::midb::RedisConnPool *)(v62 + 16);
    if ( common::tools::perf::MemoryPerf::is_record )
    {
      v158.log_ = (common::milog::MiLog *)&v158.ostr_ptr_._M_refcount;
      std::string::_M_construct<char const*>((std::string *const)&v158, "N6common4midb13RedisConnPoolE", "", v61);
      goto LABEL_141;
    }
LABEL_143:
    v66 = *(unsigned __int8 *)((v59 >> 3) + 0x7FFF8000);
    v67 = (common::midb::RedisConnPool *)(v59 & 7);
    if ( (char)v66 <= (char)v67 && (_BYTE)v66 )
    {
      __asan_report_load1(&this->is_cluster_, v58, v66);
    }
    else
    {
      v67 = v137;
      common::midb::RedisConnPool::RedisConnPool(
        v137,
        (const std::string *)(v136 + 192),
        (const std::string *)(v136 + 256),
        port,
        (const std::string *)(v136 + 320),
        db,
        pool_max_size,
        this->is_cluster_,
        expire_min_time,
        expire_max_time,
        connect_timeout);
    }
    *(_QWORD *)(v136 + 104) = 0LL;
    *(_QWORD *)(v136 + 72) = v62;
    *(_QWORD *)(v136 + 64) = v67;
LABEL_148:
    v68 = *(common::midb::RedisConnPool **)(v136 + 64);
    if ( !v68 )
    {
      common::milog::MiLogStream::MiLogStream(
        &v158,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_mgr.cpp",
        "init",
        130);
      common::milog::MiLogStream::operator()(&v158, "init conn_pool for redis %s failed.", *(const char **)(v136 + 192));
      common::milog::MiLogStream::~MiLogStream(&v158);
      v7 = 1;
      goto LABEL_164;
    }
    v69 = common::midb::RedisConnPool::grab(v68);
    pt = (const common::tools::PTree *)v69;
    if ( !v69 )
    {
      common::milog::MiLogStream::MiLogStream(
        &v158,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_mgr.cpp",
        "init",
        138);
      common::milog::MiLogStream::operator()(
        &v158,
        "canot grab connection from redis %s.",
        *(const char **)(v136 + 192));
      common::milog::MiLogStream::~MiLogStream(&v158);
      v7 = -1;
LABEL_164:
      v76 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v136 + 72);
      if ( v76 )
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v76);
      goto LABEL_166;
    }
    common::midb::RedisConnPool::release(*(common::midb::RedisConnPool *const *)(v136 + 64), v69, 1);
    v149.first = *(_DWORD *)(v136 + 48);
    v149.second._M_ptr = *(std::__shared_ptr<common::midb::RedisConnPool,(__gnu_cxx::_Lock_policy)2>::element_type **)(v136 + 64);
    v81 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v136 + 72);
    v149.second._M_refcount._M_pi = v81;
    if ( !v81 )
      goto LABEL_181;
    p_M_use_count = (std::pair<unsigned int,std::shared_ptr<common::midb::RedisConnPool> > *)&v81->_M_use_count;
    if ( &_pthread_key_create )
    {
      v82 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v82 || !v82 )
      {
        _InterlockedAdd((volatile signed __int32 *)p_M_use_count, 1u);
LABEL_181:
        pt = (const common::tools::PTree *)&v149;
        std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::shared_ptr<common::midb::RedisConnPool>>,std::_Select1st<std::pair<unsigned int const,std::shared_ptr<common::midb::RedisConnPool>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<common::midb::RedisConnPool>>>>::_M_emplace_unique<std::pair<unsigned int,std::shared_ptr<common::midb::RedisConnPool>>>(
          &this->pool_ptr_map_._M_t,
          &v149,
          p_M_use_count);
        goto LABEL_187;
      }
      v81 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(&v81->_M_use_count, pt);
    }
    v83 = *(_BYTE *)(((unsigned __int64)&v81->_M_use_count >> 3) + 0x7FFF8000);
    p_M_use_count = (std::pair<unsigned int,std::shared_ptr<common::midb::RedisConnPool> > *)((((_BYTE)v81 + 8) & 7u) + 3);
    if ( (char)((((_BYTE)v81 + 8) & 7) + 3) < v83 || !v83 )
    {
      ++v81->_M_use_count;
      goto LABEL_181;
    }
    __asan_report_load4(&v81->_M_use_count);
LABEL_187:
    M_pi = (size_t)v149.second._M_refcount._M_pi;
    if ( !v149.second._M_refcount._M_pi )
      goto LABEL_193;
    v85 = &v149.second._M_refcount._M_pi->_M_use_count;
    if ( &_pthread_key_create )
    {
      v86 = *(_BYTE *)(((unsigned __int64)v85 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v85 & 7) + 3) < v86 || !v86 )
      {
        v87 = _InterlockedExchangeAdd(v85, 0xFFFFFFFF);
        goto LABEL_192;
      }
      __asan_report_store4(&v149.second._M_refcount._M_pi->_M_use_count, pt);
    }
    v88 = *(_BYTE *)(((M_pi + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((M_pi + 8) & 7) + 3) >= v88 && v88 )
    {
      __asan_report_load4(M_pi + 8);
      goto LABEL_199;
    }
    v87 = *(_DWORD *)(M_pi + 8);
    *(_DWORD *)(M_pi + 8) = v87 - 1;
LABEL_192:
    if ( v87 != 1 )
      goto LABEL_193;
LABEL_199:
    v89 = M_pi;
    if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(M_pi);
LABEL_210:
      __asan_report_load8(v89);
      goto LABEL_211;
    }
    v89 = *(_QWORD *)M_pi + 16LL;
    if ( *(_BYTE *)((v89 >> 3) + 0x7FFF8000) )
      goto LABEL_210;
    (*(void (__fastcall **)(size_t))(*(_QWORD *)M_pi + 16LL))(M_pi);
    v90 = (volatile signed __int32 *)(M_pi + 12);
    if ( !&_pthread_key_create )
      goto LABEL_212;
    v89 = M_pi + 12;
    v91 = *(_BYTE *)(((unsigned __int64)v90 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v90 & 7) + 3) < v91 || !v91 )
    {
      v92 = _InterlockedExchangeAdd(v90, 0xFFFFFFFF);
      goto LABEL_205;
    }
LABEL_211:
    __asan_report_store4(v89, pt);
LABEL_212:
    v93 = M_pi + 12;
    v94 = *(_BYTE *)(((M_pi + 12) >> 3) + 0x7FFF8000);
    if ( (char)(((M_pi + 12) & 7) + 3) >= v94 && v94 )
    {
      __asan_report_load4(v93);
LABEL_216:
      __asan_report_load8(v93);
      goto LABEL_217;
    }
    v92 = *(_DWORD *)(M_pi + 12);
    *(_DWORD *)(M_pi + 12) = v92 - 1;
LABEL_205:
    if ( v92 != 1 )
      goto LABEL_193;
    v93 = M_pi;
    if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
      goto LABEL_216;
    v93 = *(_QWORD *)M_pi + 24LL;
    if ( !*(_BYTE *)((v93 >> 3) + 0x7FFF8000) )
    {
      (*(void (__fastcall **)(size_t))(*(_QWORD *)M_pi + 24LL))(M_pi);
LABEL_193:
      pt = (const common::tools::PTree *)&common::milog::MiLogDefault::default_log_obj_;
      common::milog::MiLogStream::MiLogStream(
        &v157,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "src/redis_mgr.cpp",
        "init",
        146);
      goto LABEL_218;
    }
LABEL_217:
    __asan_report_load8(v93);
LABEL_218:
    ostr = v157.ostr_;
    p_cur = v157.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v157.ostr_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v157.ostr_);
LABEL_267:
      __asan_report_load8(p_cur);
LABEL_268:
      __asan_report_load8(p_cur);
LABEL_269:
      __asan_report_load8(p_cur);
LABEL_270:
      __asan_report_load8(p_cur);
LABEL_271:
      __asan_report_load8(p_cur);
LABEL_272:
      __asan_report_load8(p_cur);
LABEL_273:
      __asan_report_load8(p_cur);
LABEL_274:
      __asan_report_load8(p_cur);
LABEL_275:
      __asan_report_load8(p_cur);
LABEL_276:
      __asan_report_load8(p_cur);
LABEL_277:
      __asan_report_load8(p_cur);
LABEL_278:
      __asan_report_load8(p_cur);
LABEL_279:
      __asan_report_load8(p_cur);
LABEL_280:
      __asan_report_load1(p_cur, pt, v111);
      goto LABEL_281;
    }
    M_pi = (size_t)(v157.ostr_->buffer_.data_ + 0x4000);
    p_cur = &v157.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v157.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_267;
    cur = v157.ostr_->buffer_.cur_;
    M_pi = (int)M_pi - (int)cur;
    if ( M_pi > 0xB )
      M_pi = 12LL;
    memcpy(cur, "redis index:", M_pi);
    ostr->buffer_.cur_ += M_pi;
    pt = (const common::tools::PTree *)*(unsigned int *)(v136 + 48);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v157.ostr_, (unsigned int)pt);
    v98 = v157.ostr_;
    p_cur = v157.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v157.ostr_ >> 3) + 0x7FFF8000) )
      goto LABEL_268;
    M_pi = (size_t)(v157.ostr_->buffer_.data_ + 0x4000);
    p_cur = &v157.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v157.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_269;
    v99 = v157.ostr_->buffer_.cur_;
    M_pi = (int)M_pi - (int)v99;
    if ( M_pi > 5 )
      M_pi = 6LL;
    memcpy(v99, " name:", M_pi);
    v98->buffer_.cur_ += M_pi;
    v100 = v157.ostr_;
    pt = *(const common::tools::PTree **)(v136 + 192);
    p_cur = v157.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v157.ostr_ >> 3) + 0x7FFF8000) )
      goto LABEL_270;
    M_pi = (size_t)(v157.ostr_->buffer_.data_ + 0x4000);
    p_cur = &v157.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v157.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_271;
    v101 = v157.ostr_->buffer_.cur_;
    M_pi = (int)M_pi - (int)v101;
    if ( *(_QWORD *)(v136 + 200) <= M_pi )
      M_pi = *(_QWORD *)(v136 + 200);
    memcpy(v101, pt, M_pi);
    v100->buffer_.cur_ += M_pi;
    v102 = v157.ostr_;
    p_cur = v157.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v157.ostr_ >> 3) + 0x7FFF8000) )
      goto LABEL_272;
    M_pi = (size_t)(v157.ostr_->buffer_.data_ + 0x4000);
    p_cur = &v157.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v157.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_273;
    v103 = v157.ostr_->buffer_.cur_;
    M_pi = (int)M_pi - (int)v103;
    if ( M_pi > 5 )
      M_pi = 6LL;
    memcpy(v103, " host:", M_pi);
    v102->buffer_.cur_ += M_pi;
    v104 = v157.ostr_;
    pt = *(const common::tools::PTree **)(v136 + 256);
    p_cur = v157.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v157.ostr_ >> 3) + 0x7FFF8000) )
      goto LABEL_274;
    M_pi = (size_t)(v157.ostr_->buffer_.data_ + 0x4000);
    p_cur = &v157.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v157.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_275;
    v105 = v157.ostr_->buffer_.cur_;
    M_pi = (int)M_pi - (int)v105;
    if ( *(_QWORD *)(v136 + 264) <= M_pi )
      M_pi = *(_QWORD *)(v136 + 264);
    memcpy(v105, pt, M_pi);
    v104->buffer_.cur_ += M_pi;
    v106 = v157.ostr_;
    p_cur = v157.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v157.ostr_ >> 3) + 0x7FFF8000) )
      goto LABEL_276;
    M_pi = (size_t)(v157.ostr_->buffer_.data_ + 0x4000);
    p_cur = &v157.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v157.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_277;
    v107 = v157.ostr_->buffer_.cur_;
    M_pi = (int)M_pi - (int)v107;
    if ( M_pi > 5 )
      M_pi = 6LL;
    memcpy(v107, " port:", M_pi);
    v106->buffer_.cur_ += M_pi;
    pt = (const common::tools::PTree *)port;
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v157.ostr_, port);
    v108 = v157.ostr_;
    p_cur = v157.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v157.ostr_ >> 3) + 0x7FFF8000) )
      goto LABEL_278;
    M_pi = (size_t)(v157.ostr_->buffer_.data_ + 0x4000);
    p_cur = &v157.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v157.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_279;
    v109 = v157.ostr_->buffer_.cur_;
    M_pi = (int)M_pi - (int)v109;
    if ( M_pi > 0xB )
      M_pi = 12LL;
    pt = (const common::tools::PTree *)" is_cluster:";
    memcpy(v109, " is_cluster:", M_pi);
    v108->buffer_.cur_ += M_pi;
    p_cur = &this->is_cluster_;
    v110 = *(_BYTE *)(((unsigned __int64)&this->is_cluster_ >> 3) + 0x7FFF8000);
    v111 = ((_BYTE)this + 1) & 7;
    if ( v110 <= (char)v111 && v110 )
      goto LABEL_280;
    M_pi = (size_t)v157.ostr_;
    if ( this->is_cluster_ )
    {
      v112 = "true";
      goto LABEL_250;
    }
LABEL_281:
    v112 = "false";
LABEL_250:
    if ( v112 )
    {
      v113 = strlen(v112);
      v114 = M_pi;
      if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(M_pi);
      }
      else
      {
        v114 = M_pi + 8;
        if ( !*(_BYTE *)(((M_pi + 8) >> 3) + 0x7FFF8000) )
        {
          v115 = *(void **)(M_pi + 8);
          v116 = *(_DWORD *)M_pi + 0x4000 - (int)v115;
          if ( v113 <= v116 )
            v116 = v113;
          pt = (const common::tools::PTree *)v112;
          memcpy(v115, v112, v116);
          *(_QWORD *)(M_pi + 8) += v116;
          goto LABEL_256;
        }
      }
      __asan_report_load8(v114);
    }
    v118 = M_pi;
    if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(M_pi);
LABEL_290:
      __asan_report_load8(v118);
      goto LABEL_291;
    }
    v118 = M_pi + 8;
    if ( *(_BYTE *)(((M_pi + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_290;
    v122 = *(void **)(M_pi + 8);
    v123 = *(_DWORD *)M_pi + 0x4000 - (int)v122;
    if ( v123 > 5 )
      v123 = 6LL;
    pt = (const common::tools::PTree *)"(null)";
    memcpy(v122, "(null)", v123);
    *(_QWORD *)(M_pi + 8) += v123;
LABEL_256:
    common::milog::MiLogStream::~MiLogStream(&v157);
    M_pi = *(_QWORD *)(v136 + 72);
    if ( !M_pi )
      goto LABEL_262;
    v117 = (volatile signed __int32 *)(M_pi + 8);
    if ( !&_pthread_key_create )
      goto LABEL_292;
    v118 = M_pi + 8;
    v11 = *(_BYTE *)(((unsigned __int64)v117 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v117 & 7) + 3) < v11 || !v11 )
    {
      v119 = _InterlockedExchangeAdd(v117, 0xFFFFFFFF);
      goto LABEL_261;
    }
LABEL_291:
    __asan_report_store4(v118, pt);
LABEL_292:
    v124 = *(_BYTE *)(((M_pi + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((M_pi + 8) & 7) + 3) >= v124 && v124 )
    {
      __asan_report_load4(M_pi + 8);
      goto LABEL_296;
    }
    v119 = *(_DWORD *)(M_pi + 8);
    *(_DWORD *)(M_pi + 8) = v119 - 1;
LABEL_261:
    if ( v119 != 1 )
      goto LABEL_262;
LABEL_296:
    v125 = M_pi;
    if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(M_pi);
LABEL_307:
      __asan_report_load8(v125);
LABEL_308:
      __asan_report_store4(v125, pt);
      goto LABEL_309;
    }
    v125 = *(_QWORD *)M_pi + 16LL;
    if ( *(_BYTE *)((v125 >> 3) + 0x7FFF8000) )
      goto LABEL_307;
    (*(void (__fastcall **)(size_t))(*(_QWORD *)M_pi + 16LL))(M_pi);
    v126 = (volatile signed __int32 *)(M_pi + 12);
    if ( &_pthread_key_create )
    {
      v125 = M_pi + 12;
      v11 = *(_BYTE *)(((unsigned __int64)v126 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v126 & 7) + 3) < v11 || !v11 )
      {
        v127 = _InterlockedExchangeAdd(v126, 0xFFFFFFFF);
        goto LABEL_302;
      }
      goto LABEL_308;
    }
LABEL_309:
    v120 = M_pi + 12;
    v128 = *(_BYTE *)(((M_pi + 12) >> 3) + 0x7FFF8000);
    if ( (char)(((M_pi + 12) & 7) + 3) >= v128 )
    {
      if ( v128 )
        break;
    }
    v127 = *(_DWORD *)(M_pi + 12);
    *(_DWORD *)(M_pi + 12) = v127 - 1;
LABEL_302:
    if ( v127 == 1 )
    {
      v120 = M_pi;
      if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
        goto LABEL_313;
      v120 = *(_QWORD *)M_pi + 24LL;
      if ( *(_BYTE *)((v120 >> 3) + 0x7FFF8000) )
        goto LABEL_314;
      (*(void (__fastcall **)(size_t))(*(_QWORD *)M_pi + 24LL))(M_pi);
    }
LABEL_262:
    v120 = v145;
    if ( *(_BYTE *)((v145 >> 3) + 0x7FFF8000) )
      goto LABEL_315;
  }
  __asan_report_load4(v120);
LABEL_313:
  __asan_report_load8(v120);
LABEL_314:
  __asan_report_load8(v120);
LABEL_315:
  __asan_report_load8(v120);
LABEL_316:
  std::_List_base<std::pair<std::string,common::tools::PTree>>::_M_clear((std::_List_base<std::pair<std::string,common::tools::PTree>> *const)(v136 + 128));
  v131 = *(char **)(v136 + 320);
  if ( v131 != (char *)(v136 + 336) )
    operator delete(v131);
  v132 = *(char **)(v136 + 256);
  if ( v132 != (char *)(v136 + 272) )
    operator delete(v132);
  v133 = *(char **)(v136 + 192);
  if ( v133 != (char *)(v136 + 208) )
    operator delete(v133);
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
    v134 = (struct _Unwind_Exception *)__asan_report_store1(this, pt, v129, v130);
    common::milog::MiLogStream::~MiLogStream(&v158);
    __asan_handle_no_return(&v158);
    _Unwind_Resume(v134);
  }
  this->is_init_ = 1;
  v7 = 0;
LABEL_11:
  if ( v159 == (char *)v136 )
  {
    *(_QWORD *)((v136 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v136 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v136 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v136 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v136 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v136 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v136 = 1172321806LL;
    *(_QWORD *)((v136 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v136 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v136 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v136 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v136 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v136 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v7;
};

// Line 201: range 000000000CA99B78-000000000CA99E2E
int32_t __fastcall common::midb::RedisMgr::releaseConn(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnBase *conn_ptr,
        const uint32_t index)
{
  common::midb::RedisMgr *v3; // rbx
  unsigned __int64 v4; // rbp
  _DWORD *v5; // r14
  int v6; // r13d
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::shared_ptr<common::midb::RedisConnPool> >,std::_Select1st<std::pair<unsigned int const,std::shared_ptr<common::midb::RedisConnPool> > >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<common::midb::RedisConnPool> > > >::iterator v7; // rax
  std::_Rb_tree_header *v8; // r13
  common::midb::RedisConnPool *M_parent; // rdi
  int32_t result; // eax
  __int64 v11; // rax
  common::midb::RedisMgr *i; // rax
  std::_Rb_tree_node_base::_Base_ptr *p_M_right; // rax
  bool indexb; // [rsp+8h] [rbp-D0h]
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-B8h] BYREF
  char v17[152]; // [rsp+40h] [rbp-98h] BYREF

  v3 = this;
  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(96LL);
    if ( v11 )
      v4 = v11;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 9 index:200 64 8 12 conn_ptr:200";
  *(_QWORD *)(v4 + 16) = common::midb::RedisMgr::releaseConn;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_QWORD *)(v4 + 64) = conn_ptr;
  *(_DWORD *)(v4 + 48) = index;
  if ( conn_ptr )
  {
    if ( &_pthread_key_create )
    {
      v6 = pthread_mutex_lock(&this->set_mutex_._M_mutex);
      if ( v6 )
      {
        __asan_handle_no_return(&this->set_mutex_);
        std::__throw_system_error(v6);
      }
    }
    if ( &this->destory_conn_ptr_set_._M_t._M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)std::_Rb_tree<common::midb::RedisConnBase *,common::midb::RedisConnBase *,std::_Identity<common::midb::RedisConnBase *>,std::less<common::midb::RedisConnBase *>,std::allocator<common::midb::RedisConnBase *>>::find(
                                                                                                     &this->destory_conn_ptr_set_._M_t,
                                                                                                     (common::midb::RedisConnBase *const *)(v4 + 64))._M_node )
    {
      indexb = 0;
    }
    else
    {
      std::_Rb_tree<common::midb::RedisConnBase *,common::midb::RedisConnBase *,std::_Identity<common::midb::RedisConnBase *>,std::less<common::midb::RedisConnBase *>,std::allocator<common::midb::RedisConnBase *>>::erase(
        &this->destory_conn_ptr_set_._M_t,
        (common::midb::RedisConnBase *const *)(v4 + 64));
      indexb = 1;
    }
    if ( &_pthread_key_create )
      pthread_mutex_unlock(&this->set_mutex_._M_mutex);
    v7._M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::shared_ptr<common::midb::RedisConnPool>>,std::_Select1st<std::pair<unsigned int const,std::shared_ptr<common::midb::RedisConnPool>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<common::midb::RedisConnPool>>>>::find(
                   &this->pool_ptr_map_._M_t,
                   (const unsigned int *)(v4 + 48))._M_node;
    v8 = &this->pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header;
    if ( (std::_Rb_tree_header *)v7._M_node != &this->pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header )
    {
      if ( *(_BYTE *)(((unsigned __int64)&v7._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(&v7._M_node[1]._M_parent);
      }
      else
      {
        M_parent = (common::midb::RedisConnPool *)v7._M_node[1]._M_parent;
        if ( M_parent )
        {
          result = common::midb::RedisConnPool::release(M_parent, *(common::midb::RedisConnBase **)(v4 + 64), indexb);
          goto LABEL_27;
        }
      }
    }
    common::milog::MiLogStream::MiLogStream(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "releaseConn",
      222);
    common::milog::MiLogStream::operator()(
      &v16,
      "fail to find redis index=%u, try to release this connection on each pool.",
      *(unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v16);
    if ( *(_BYTE *)(((unsigned __int64)&v3->pool_ptr_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&v3->pool_ptr_map_._M_t._M_impl._M_header._M_left);
      goto LABEL_21;
    }
    for ( i = (common::midb::RedisMgr *)v3->pool_ptr_map_._M_t._M_impl._M_header._M_left;
          ;
          i = (common::midb::RedisMgr *)std::_Rb_tree_increment((std::_Rb_tree_node_base *)v3) )
    {
      v3 = i;
      if ( v8 == (std::_Rb_tree_header *)i )
        break;
      p_M_right = &i->pool_ptr_map_._M_t._M_impl._M_header._M_right;
      if ( *(_BYTE *)(((unsigned __int64)p_M_right >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_M_right);
        goto LABEL_25;
      }
LABEL_21:
      common::midb::RedisConnPool::release(
        (common::midb::RedisConnPool *const)v3->pool_ptr_map_._M_t._M_impl._M_header._M_right,
        *(common::midb::RedisConnBase **)(v4 + 64),
        indexb);
    }
    result = 0;
  }
  else
  {
LABEL_25:
    result = -1;
  }
LABEL_27:
  if ( v17 == (char *)v4 )
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
  return result;
};

// Line 237: range 000000000CA9F732-000000000CA9FDB6
// local variable allocation has failed, the output may be wrong!
common::midb::RedisReplyPtr common::midb::RedisMgr::command(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const char *format,
        ...)
{
  const char *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int128 v9; // xmm3
  __int128 v10; // xmm4
  __int128 v11; // xmm5
  __int128 v12; // xmm6
  __int128 v13; // xmm7
  std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type *v14; // r12
  common::midb::RedisMgr *v15; // r14
  uint32_t v16; // r15d
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rbx
  _DWORD *v19; // r13
  common::midb::RedisReplyPtr result; // rax
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  volatile signed __int32 *p_type; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v25; // rax
  volatile signed __int32 *p_M_use_count; // rdi
  int32_t v27; // eax
  char v28; // cl
  int32_t v29; // r15d
  __int64 v30; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v31; // rdi
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rdx
  const char *v34; // rax
  unsigned __int64 v35; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v36; // rax
  volatile signed __int32 *v37; // rdi
  char v38; // cl
  char v39; // dl
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // rdi
  char v42; // dl
  struct _Unwind_Exception *v43; // rbp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v44; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v45; // rdi
  const char *formata; // [rsp+8h] [rbp-1C0h]
  common::midb::RedisReplyPtr reply_ptr; // [rsp+10h] [rbp-1B8h] BYREF
  common::milog::MiLogStream v48; // [rsp+20h] [rbp-1A8h] BYREF
  char v49[160]; // [rsp+40h] [rbp-188h] BYREF
  char v50; // [rsp+E0h] [rbp-E8h] BYREF
  __int64 v51; // [rsp+100h] [rbp-C8h]
  __int64 v52; // [rsp+108h] [rbp-C0h]
  __int128 v53; // [rsp+110h] [rbp-B8h]
  __int128 v54; // [rsp+120h] [rbp-A8h]
  __int128 v55; // [rsp+130h] [rbp-98h]
  __int128 v56; // [rsp+140h] [rbp-88h]
  __int128 v57; // [rsp+150h] [rbp-78h]
  __int128 v58; // [rsp+160h] [rbp-68h]
  __int128 v59; // [rsp+170h] [rbp-58h]
  __int128 v60; // [rsp+180h] [rbp-48h]
  char v61; // [rsp+1D0h] [rbp+8h] BYREF

  v53 = v6;
  v54 = v7;
  v55 = v8;
  v56 = v9;
  v57 = v10;
  v58 = v11;
  v59 = v12;
  v60 = v13;
  v14 = (std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  v15 = *(common::midb::RedisMgr **)&index;
  v16 = (unsigned int)format;
  formata = v3;
  v51 = v4;
  v52 = v5;
  v17 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v23 = __asan_stack_malloc_2(160LL);
    if ( v23 )
      v17 = v23;
  }
  v18 = v17 + 160;
  *(_QWORD *)v17 = 1102416563LL;
  *(_QWORD *)(v17 + 8) = "3 32 16 12 conn_ptr:239 64 16 13 reply_ptr:248 96 24 6 ap:246";
  *(_QWORD *)(v17 + 16) = common::midb::RedisMgr::command;
  v19 = (_DWORD *)(v17 >> 3);
  v19[536862720] = -235802127;
  v19[536862721] = -219021312;
  v19[536862722] = -219021312;
  v19[536862723] = -218103808;
  v19[536862724] = -202116109;
  result = (common::midb::RedisReplyPtr)common::midb::RedisMgr::grabConn(*(common::midb::RedisMgr *const *)&index, v16);
  if ( *(_QWORD *)(v17 + 32) )
  {
    *(_DWORD *)(v17 + 96) = 32;
    *(_DWORD *)(v17 + 100) = 48;
    *(_QWORD *)(v17 + 104) = &v61;
    *(_QWORD *)(v17 + 112) = &v50;
    *(_QWORD *)&index = *(_QWORD *)(v17 + 32);
    if ( !*(_BYTE *)((*(_QWORD *)&index >> 3) + 0x7FFF8000LL) )
    {
      v21 = **(_QWORD **)&index + 32LL;
      if ( !*(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64, _QWORD, const char *, unsigned __int64))(**(_QWORD **)&index + 32LL))(
          v17 + 64,
          *(_QWORD *)&index,
          formata,
          v17 + 96);
        goto LABEL_24;
      }
LABEL_23:
      __asan_report_load8(v21);
LABEL_24:
      reply_ptr._M_ptr = *(std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type **)(v17 + 64);
      v25 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v17 + 72);
      reply_ptr._M_refcount._M_pi = v25;
      if ( v25 )
      {
        p_M_use_count = &v25->_M_use_count;
        if ( &_pthread_key_create )
        {
          v22 = *(unsigned __int8 *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < (char)v22 || !(_BYTE)v22 )
          {
            _InterlockedAdd(p_M_use_count, 1u);
            goto LABEL_29;
          }
          v25 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(
                                                                       p_M_use_count,
                                                                       *(_QWORD *)&index);
        }
        v28 = *(_BYTE *)(((unsigned __int64)&v25->_M_use_count >> 3) + 0x7FFF8000);
        v22 = (((_BYTE)v25 + 8) & 7u) + 3;
        if ( (char)((((_BYTE)v25 + 8) & 7) + 3) >= v28 && v28 )
        {
          v27 = __asan_report_load4(&v25->_M_use_count);
LABEL_35:
          v29 = v27;
          if ( reply_ptr._M_refcount._M_pi )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(reply_ptr._M_refcount._M_pi);
          if ( !v29 )
          {
LABEL_38:
            result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((unsigned __int64)v14 >> 3);
            if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
            {
              p_type = &v14->type;
              __asan_report_store8(v14, *(_QWORD *)&index);
            }
            else
            {
              *(_QWORD *)&v14->type = *(_QWORD *)(v17 + 64);
              p_type = (volatile signed __int32 *)&v14->integer;
              if ( !*(_BYTE *)(((unsigned __int64)&v14->integer >> 3) + 0x7FFF8000) )
              {
                v14->integer = 0LL;
                v30 = *(_QWORD *)(v17 + 72);
                *(_QWORD *)(v17 + 72) = 0LL;
                v14->integer = v30;
                *(_QWORD *)(v17 + 64) = 0LL;
                v31 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v17 + 72);
                if ( v31 )
                  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v31);
                goto LABEL_11;
              }
            }
            __asan_report_store8(p_type, *(_QWORD *)&index);
            goto LABEL_62;
          }
          common::milog::MiLogStream::MiLogStream(
            &v48,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_mgr.cpp",
            "command",
            254);
          v32 = *(_QWORD *)(v17 + 32);
          if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v32);
          }
          else
          {
            v33 = *(_QWORD *)v32 + 120LL;
            if ( !*(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
            {
              v34 = (const char *)(*(__int64 (**)(void))(*(_QWORD *)v32 + 120LL))();
              goto LABEL_47;
            }
          }
          v34 = (const char *)__asan_report_load8(v33);
LABEL_47:
          *(_QWORD *)&index = "[REDIS]error:%s";
          common::milog::MiLogStream::operator()(&v48, "[REDIS]error:%s", v34);
          common::milog::MiLogStream::~MiLogStream(&v48);
          reply_ptr._M_ptr = *(std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type **)(v17 + 32);
          v36 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v17 + 40);
          reply_ptr._M_refcount._M_pi = v36;
          if ( v36 )
          {
            v37 = &v36->_M_use_count;
            if ( &_pthread_key_create )
            {
              v35 = *(unsigned __int8 *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000);
              if ( (char)(((unsigned __int8)v37 & 7) + 3) < (char)v35 || !(_BYTE)v35 )
              {
                _InterlockedAdd(v37, 1u);
                goto LABEL_52;
              }
              v36 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v37, "[REDIS]error:%s");
            }
            v38 = *(_BYTE *)(((unsigned __int64)&v36->_M_use_count >> 3) + 0x7FFF8000);
            v35 = (((_BYTE)v36 + 8) & 7u) + 3;
            if ( (char)((((_BYTE)v36 + 8) & 7) + 3) >= v38 && v38 )
            {
              __asan_report_load4(&v36->_M_use_count);
LABEL_58:
              if ( reply_ptr._M_refcount._M_pi )
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(reply_ptr._M_refcount._M_pi);
              goto LABEL_38;
            }
            ++v36->_M_use_count;
          }
LABEL_52:
          *(_QWORD *)&index = &reply_ptr;
          common::midb::RedisMgr::markConnToDestory(v15, (common::midb::RedisConnPtr)__PAIR128__(v35, &reply_ptr));
          goto LABEL_58;
        }
        ++v25->_M_use_count;
      }
LABEL_29:
      *(_QWORD *)&index = &reply_ptr;
      v27 = common::midb::RedisMgr::checkReply(v15, (common::midb::RedisReplyPtr)__PAIR128__(v22, &reply_ptr));
      goto LABEL_35;
    }
LABEL_22:
    v21 = *(_QWORD *)&index;
    __asan_report_load8(*(_QWORD *)&index);
    goto LABEL_23;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(this, *(_QWORD *)&index);
    goto LABEL_21;
  }
  *(_QWORD *)&this->is_init_ = 0LL;
  this = (common::midb::RedisMgr *const)((char *)this + 8);
  if ( *(_BYTE *)(((unsigned __int64)&v14->integer >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8(this, *(_QWORD *)&index);
    goto LABEL_22;
  }
  v14->integer = 0LL;
LABEL_11:
  v18 = *(_QWORD *)(v17 + 40);
  if ( !v18 )
    goto LABEL_17;
  p_type = (volatile signed __int32 *)(v18 + 8);
  if ( !&_pthread_key_create )
    goto LABEL_63;
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*(unsigned __int8 *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_type & 7) + 3) < SLOBYTE(result._M_refcount._M_pi)
    || !LOBYTE(result._M_refcount._M_pi) )
  {
    LODWORD(result._M_ptr) = _InterlockedExchangeAdd(p_type, 0xFFFFFFFF);
    goto LABEL_16;
  }
LABEL_62:
  __asan_report_store4(p_type, *(_QWORD *)&index);
LABEL_63:
  v39 = *(_BYTE *)(((v18 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v18 + 8) & 7) + 3) >= v39 && v39 )
  {
    __asan_report_load4(v18 + 8);
    goto LABEL_67;
  }
  LODWORD(result._M_ptr) = *(_DWORD *)(v18 + 8);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(unsigned int)(LODWORD(result._M_ptr)
                                                                                               - 1);
  *(_DWORD *)(v18 + 8) = result._M_refcount._M_pi;
LABEL_16:
  if ( LODWORD(result._M_ptr) != 1 )
    goto LABEL_17;
LABEL_67:
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
  {
    v40 = v18;
    __asan_report_load8(v18);
    goto LABEL_78;
  }
  v40 = *(_QWORD *)v18 + 16LL;
  if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_load8(v40);
    goto LABEL_79;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v18 + 16LL))(v18);
  v40 = v18 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_80;
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*(unsigned __int8 *)((v40 >> 3) + 0x7FFF8000);
  if ( (char)((v40 & 7) + 3) < SLOBYTE(result._M_refcount._M_pi) || !LOBYTE(result._M_refcount._M_pi) )
  {
    LODWORD(result._M_ptr) = _InterlockedExchangeAdd((volatile signed __int32 *)v40, 0xFFFFFFFF);
    goto LABEL_73;
  }
LABEL_79:
  __asan_report_store4(v40, *(_QWORD *)&index);
LABEL_80:
  v42 = *(_BYTE *)(((v18 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v18 + 12) & 7) + 3) >= v42 && v42 )
  {
    __asan_report_load4(v18 + 12);
LABEL_84:
    v41 = v18;
    __asan_report_load8(v18);
LABEL_85:
    v43 = (struct _Unwind_Exception *)__asan_report_load8(v41);
    if ( reply_ptr._M_refcount._M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(reply_ptr._M_refcount._M_pi);
    v44 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v18 - 88);
    if ( v44 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v44);
    v45 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v18 - 120);
    if ( v45 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v45);
    __asan_handle_no_return(v45);
    _Unwind_Resume(v43);
  }
  LODWORD(result._M_ptr) = *(_DWORD *)(v18 + 12);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(unsigned int)(LODWORD(result._M_ptr)
                                                                                               - 1);
  *(_DWORD *)(v18 + 12) = result._M_refcount._M_pi;
LABEL_73:
  if ( LODWORD(result._M_ptr) != 1 )
    goto LABEL_17;
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
    goto LABEL_84;
  v41 = *(_QWORD *)v18 + 24LL;
  if ( *(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
    goto LABEL_85;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v18 + 24LL))(v18);
LABEL_17:
  if ( v49 == (char *)v17 )
  {
    *(_QWORD *)((v17 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v17 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v17 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v17 = 1172321806LL;
    *(_QWORD *)((v17 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v17 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v17 >> 3) + 0x7FFF8010) = -168430091;
  }
  result._M_ptr = v14;
  return result;
};

// Line 282: range 000000000CA7BAE4-000000000CA7C195
// local variable allocation has failed, the output may be wrong!
common::midb::RedisReplyPtr common::midb::RedisMgr::command(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        const char *format,
        ...)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  __int128 v9; // xmm4
  __int128 v10; // xmm5
  __int128 v11; // xmm6
  __int128 v12; // xmm7
  common::midb::RedisMgr::PoolPtrMap *v13; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r13
  char *v16; // rbp
  _DWORD *v17; // r14
  int (**vptr__Sp_counted_base)(...); // rsi
  __int64 v19; // rsi
  volatile signed __int32 *p_M_use_count; // rdi
  unsigned __int64 v21; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // rax
  common::midb::RedisReplyPtr *p_reply_ptr; // rsi
  int32_t v24; // eax
  char *v26; // rax
  common::midb::RedisMgr *v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rsi
  volatile signed __int32 *v30; // rsi
  __int64 v31; // rsi
  char v32; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v33; // r15
  _Atomic_word *v34; // rdi
  char v35; // dl
  signed __int32 M_use_count; // eax
  common::midb::RedisMgr::PoolPtrMap *v37; // rdi
  __int64 v38; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v39; // rdi
  __int64 v40; // rsi
  char v41; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v43; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v45; // rdi
  __int64 v46; // rsi
  char v47; // dl
  int (**v48)(...); // rdi
  unsigned __int64 v49; // rdx
  const char *v50; // rax
  const char *v51; // rsi
  unsigned __int64 v52; // rdx
  volatile signed __int32 *v53; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v54; // rax
  common::midb::RedisReplyPtr *v55; // rsi
  char v56; // cl
  __int64 v57; // rsi
  __int64 v58; // rsi
  struct _Unwind_Exception *v59; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v60; // rdi
  common::midb::RedisReplyPtr result; // rax
  common::midb::RedisMgr *thisa; // [rsp+10h] [rbp-1A8h]
  int32_t v63; // [rsp+1Ch] [rbp-19Ch]
  common::midb::RedisReplyPtr reply_ptr; // [rsp+20h] [rbp-198h] BYREF
  common::milog::MiLogStream v65; // [rsp+30h] [rbp-188h] BYREF
  char v66[128]; // [rsp+50h] [rbp-168h] BYREF
  char v67; // [rsp+D0h] [rbp-E8h] BYREF
  __int64 v68; // [rsp+F0h] [rbp-C8h]
  __int64 v69; // [rsp+F8h] [rbp-C0h]
  __int128 v70; // [rsp+100h] [rbp-B8h]
  __int128 v71; // [rsp+110h] [rbp-A8h]
  __int128 v72; // [rsp+120h] [rbp-98h]
  __int128 v73; // [rsp+130h] [rbp-88h]
  __int128 v74; // [rsp+140h] [rbp-78h]
  __int128 v75; // [rsp+150h] [rbp-68h]
  __int128 v76; // [rsp+160h] [rbp-58h]
  __int128 v77; // [rsp+170h] [rbp-48h]
  char v78; // [rsp+1C0h] [rbp+8h] BYREF

  v68 = v3;
  v69 = v4;
  v70 = v5;
  v71 = v6;
  v72 = v7;
  v73 = v8;
  v74 = v9;
  v75 = v10;
  v76 = v11;
  v77 = v12;
  v13 = (common::midb::RedisMgr::PoolPtrMap *)this;
  thisa = (common::midb::RedisMgr *)conn_ptr._M_ptr;
  M_pi = conn_ptr._M_refcount._M_pi;
  v16 = v66;
  if ( _asan_option_detect_stack_use_after_return )
  {
    if ( __asan_stack_malloc_1(128LL) )
      v16 = v26;
  }
  *(_QWORD *)v16 = 1102416563LL;
  *((_QWORD *)v16 + 1) = "2 32 16 13 reply_ptr:292 64 24 6 ap:290";
  *((_QWORD *)v16 + 2) = common::midb::RedisMgr::command;
  v17 = (_DWORD *)((unsigned __int64)v16 >> 3);
  v17[536862720] = -235802127;
  v17[536862721] = -219021312;
  v17[536862722] = -218103808;
  v17[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(M_pi);
    goto LABEL_15;
  }
  if ( !M_pi->_vptr__Sp_counted_base )
  {
LABEL_15:
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8(this, v28);
    }
    else
    {
      *(_QWORD *)&this->is_init_ = 0LL;
      this = (common::midb::RedisMgr *const)((char *)this + 8);
      if ( !*(_BYTE *)(((unsigned __int64)&v13->_M_t._M_impl.std::_Rb_tree_header >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)&v13->_M_t._M_impl._M_header._M_color = 0LL;
        goto LABEL_18;
      }
    }
    __asan_report_store8(this, v29);
    goto LABEL_23;
  }
  *((_DWORD *)v16 + 16) = 32;
  *((_DWORD *)v16 + 17) = 48;
  *((_QWORD *)v16 + 9) = &v78;
  *((_QWORD *)v16 + 10) = &v67;
  vptr__Sp_counted_base = M_pi->_vptr__Sp_counted_base;
  if ( *(_BYTE *)(((unsigned __int64)M_pi->_vptr__Sp_counted_base >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    p_M_use_count = v30;
    __asan_report_load8(v30);
    goto LABEL_24;
  }
  p_M_use_count = (volatile signed __int32 *)(*(_QWORD *)v19 + 32LL);
  if ( *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(p_M_use_count);
LABEL_25:
    v22 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count, v31);
    goto LABEL_26;
  }
  (*(void (__fastcall **)(char *, __int64, const char *, char *))(*(_QWORD *)v19 + 32LL))(
    v16 + 32,
    v19,
    format,
    v16 + 64);
  reply_ptr._M_ptr = (std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type *)*((_QWORD *)v16 + 4);
  v22 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v16 + 5);
  reply_ptr._M_refcount._M_pi = v22;
  if ( !v22 )
  {
LABEL_11:
    p_reply_ptr = &reply_ptr;
    v24 = common::midb::RedisMgr::checkReply(thisa, (common::midb::RedisReplyPtr)__PAIR128__(v21, &reply_ptr));
    goto LABEL_30;
  }
  p_M_use_count = &v22->_M_use_count;
  if ( &_pthread_key_create )
  {
    v21 = *(unsigned __int8 *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < (char)v21 || !(_BYTE)v21 )
    {
      _InterlockedAdd(p_M_use_count, 1u);
      goto LABEL_11;
    }
    goto LABEL_25;
  }
LABEL_26:
  v32 = *(_BYTE *)(((unsigned __int64)&v22->_M_use_count >> 3) + 0x7FFF8000);
  v21 = (((_BYTE)v22 + 8) & 7u) + 3;
  if ( (char)((((_BYTE)v22 + 8) & 7) + 3) < v32 || !v32 )
  {
    ++v22->_M_use_count;
    goto LABEL_11;
  }
  v24 = __asan_report_load4(&v22->_M_use_count);
LABEL_30:
  v63 = v24;
  v33 = reply_ptr._M_refcount._M_pi;
  if ( !reply_ptr._M_refcount._M_pi )
    goto LABEL_36;
  v34 = &reply_ptr._M_refcount._M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v35 = *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v34 & 7) + 3) < v35 || !v35 )
    {
      M_use_count = _InterlockedExchangeAdd(v34, 0xFFFFFFFF);
      goto LABEL_35;
    }
    __asan_report_store4(v34, v40);
  }
  v41 = *(_BYTE *)(((unsigned __int64)&v33->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v33 + 8) & 7) + 3) >= v41 && v41 )
  {
    __asan_report_load4(&v33->_M_use_count);
    goto LABEL_46;
  }
  M_use_count = v33->_M_use_count;
  v33->_M_use_count = M_use_count - 1;
LABEL_35:
  if ( M_use_count != 1 )
    goto LABEL_36;
LABEL_46:
  if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)v33;
    __asan_report_load8(v33);
    goto LABEL_57;
  }
  p_M_weak_count = (volatile signed __int32 *)(v33->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_58;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v33->_vptr__Sp_counted_base + 2))(v33);
  p_M_weak_count = &v33->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_59;
  v43 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v43 || !v43 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_52;
  }
LABEL_58:
  __asan_report_store4(p_M_weak_count, v46);
LABEL_59:
  v47 = *(_BYTE *)(((unsigned __int64)&v33->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v33 + 12) & 7) + 3) >= v47 && v47 )
  {
    __asan_report_load4(&v33->_M_weak_count);
LABEL_63:
    v45 = (unsigned __int64)v33;
    __asan_report_load8(v33);
    goto LABEL_64;
  }
  M_weak_count = v33->_M_weak_count;
  v33->_M_weak_count = M_weak_count - 1;
LABEL_52:
  if ( M_weak_count != 1 )
    goto LABEL_36;
  if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
    goto LABEL_63;
  v45 = (unsigned __int64)(v33->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
  {
LABEL_64:
    __asan_report_load8(v45);
    goto LABEL_65;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v33->_vptr__Sp_counted_base + 3))(v33);
LABEL_36:
  if ( !v63 )
    goto LABEL_37;
LABEL_65:
  common::milog::MiLogStream::MiLogStream(
    &v65,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/redis_mgr.cpp",
    "command",
    298);
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    v48 = (int (**)(...))M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_70;
  }
  v48 = M_pi->_vptr__Sp_counted_base;
  if ( *(_BYTE *)(((unsigned __int64)M_pi->_vptr__Sp_counted_base >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    __asan_report_load8(v48);
    goto LABEL_71;
  }
  v49 = (unsigned __int64)*v48 + 120;
  if ( !*(_BYTE *)((v49 >> 3) + 0x7FFF8000) )
  {
    v50 = (const char *)(*((__int64 (**)(void))*v48 + 15))();
    goto LABEL_72;
  }
LABEL_71:
  v50 = (const char *)__asan_report_load8(v49);
LABEL_72:
  v51 = "[REDIS][NETWORK][ECS]error:%s";
  common::milog::MiLogStream::operator()(&v65, "[REDIS][NETWORK][ECS]error:%s", v50);
  common::milog::MiLogStream::~MiLogStream(&v65);
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    v53 = (volatile signed __int32 *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_81;
  }
  reply_ptr._M_ptr = (std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type *)M_pi->_vptr__Sp_counted_base;
  v53 = &M_pi->_M_use_count;
  if ( *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    __asan_report_load8(v53);
LABEL_82:
    v54 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(
                                                                 v53,
                                                                 "[REDIS][NETWORK][ECS]error:%s");
    goto LABEL_83;
  }
  v54 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&M_pi->_M_use_count;
  reply_ptr._M_refcount._M_pi = v54;
  if ( !v54 )
  {
LABEL_79:
    v55 = &reply_ptr;
    common::midb::RedisMgr::markConnToDestory(thisa, (common::midb::RedisConnPtr)__PAIR128__(v52, &reply_ptr));
    goto LABEL_87;
  }
  v53 = &v54->_M_use_count;
  if ( &_pthread_key_create )
  {
    v52 = *(unsigned __int8 *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v53 & 7) + 3) < (char)v52 || !(_BYTE)v52 )
    {
      _InterlockedAdd(v53, 1u);
      goto LABEL_79;
    }
    goto LABEL_82;
  }
LABEL_83:
  v56 = *(_BYTE *)(((unsigned __int64)&v54->_M_use_count >> 3) + 0x7FFF8000);
  v52 = (((_BYTE)v54 + 8) & 7u) + 3;
  if ( (char)((((_BYTE)v54 + 8) & 7) + 3) < v56 || !v56 )
  {
    ++v54->_M_use_count;
    goto LABEL_79;
  }
  __asan_report_load4(&v54->_M_use_count);
LABEL_87:
  if ( reply_ptr._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(reply_ptr._M_refcount._M_pi);
LABEL_37:
  conn_ptr._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((unsigned __int64)v13 >> 3);
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    v37 = v13;
    __asan_report_store8(v13, v57);
LABEL_90:
    v59 = (struct _Unwind_Exception *)__asan_report_store8(v37, v58);
    if ( reply_ptr._M_refcount._M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(reply_ptr._M_refcount._M_pi);
    v60 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v16 + 5);
    if ( v60 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v60);
    __asan_handle_no_return(v60);
    _Unwind_Resume(v59);
  }
  *(_QWORD *)v13->_M_t._M_impl.gap0 = *((_QWORD *)v16 + 4);
  v37 = (common::midb::RedisMgr::PoolPtrMap *)&v13->_M_t._M_impl.std::_Rb_tree_header;
  if ( *(_BYTE *)(((unsigned __int64)&v13->_M_t._M_impl.std::_Rb_tree_header >> 3) + 0x7FFF8000) )
    goto LABEL_90;
  *(_QWORD *)&v13->_M_t._M_impl._M_header._M_color = 0LL;
  v38 = *((_QWORD *)v16 + 5);
  *((_QWORD *)v16 + 5) = 0LL;
  *(_QWORD *)&v13->_M_t._M_impl._M_header._M_color = v38;
  *((_QWORD *)v16 + 4) = 0LL;
  v39 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v16 + 5);
  if ( v39 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v39);
LABEL_18:
  if ( v66 == v16 )
  {
    *(_QWORD *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)(((unsigned __int64)v16 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v16 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v16 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v27 = (common::midb::RedisMgr *)v13;
  result._M_refcount._M_pi = conn_ptr._M_refcount._M_pi;
  return result;
};

// Line 306: range 000000000CA7C19A-000000000CA7C924
// local variable allocation has failed, the output may be wrong!
common::midb::RedisMgr *__fastcall common::midb::RedisMgr::cmdBeginTrans(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr)
{
  common::midb::RedisMgr *v2; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r13
  unsigned __int64 v4; // rbp
  volatile signed __int32 *v5; // r12
  unsigned __int64 v6; // r14
  std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type *vptr__Sp_counted_base; // rsi
  unsigned __int64 v8; // rsi
  __int64 v9; // rsi
  volatile signed __int32 *p_M_use_count; // rdi
  unsigned __int64 v11; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v12; // rax
  common::midb::RedisReplyPtr *p_reply_ptr; // rsi
  int32_t v14; // eax
  __int64 v15; // rax
  __int64 v17; // rsi
  __int64 v18; // rsi
  volatile signed __int32 *v19; // rsi
  __int64 v20; // rsi
  char v21; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // r15
  _Atomic_word *v23; // rdi
  char v24; // dl
  signed __int32 M_use_count; // eax
  volatile signed __int32 *p_is_init; // rdi
  __int64 v27; // rax
  char v28; // dl
  signed __int32 v29; // eax
  volatile signed __int32 *v30; // rdi
  char v31; // dl
  signed __int32 v32; // eax
  unsigned __int64 v33; // rdi
  __int64 v34; // rsi
  char v35; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v37; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v39; // rdi
  __int64 v40; // rsi
  char v41; // dl
  int (**v42)(...); // rdi
  unsigned __int64 v43; // rdx
  const char *v44; // rax
  const char *v45; // rsi
  unsigned __int64 v46; // rdx
  volatile signed __int32 *v47; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v48; // rax
  common::midb::RedisReplyPtr *v49; // rsi
  char v50; // cl
  __int64 v51; // rsi
  __int64 v52; // rsi
  __int64 v53; // rsi
  char v54; // dl
  __int64 v55; // rsi
  char v56; // dl
  struct _Unwind_Exception *v57; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v58; // rdi
  common::midb::RedisMgr *thisa; // [rsp+10h] [rbp-B8h]
  int32_t v60; // [rsp+1Ch] [rbp-ACh]
  common::midb::RedisReplyPtr reply_ptr; // [rsp+20h] [rbp-A8h] BYREF
  common::milog::MiLogStream v62; // [rsp+30h] [rbp-98h] BYREF
  char v63[120]; // [rsp+50h] [rbp-78h] BYREF

  v2 = this;
  thisa = (common::midb::RedisMgr *)conn_ptr._M_ptr;
  M_pi = conn_ptr._M_refcount._M_pi;
  v4 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v4 = v15;
  }
  v5 = (volatile signed __int32 *)(v4 + 64);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 13 reply_ptr:311";
  *(_QWORD *)(v4 + 16) = common::midb::RedisMgr::cmdBeginTrans;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(M_pi);
    goto LABEL_15;
  }
  vptr__Sp_counted_base = (std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type *)M_pi->_vptr__Sp_counted_base;
  if ( !M_pi->_vptr__Sp_counted_base )
  {
LABEL_15:
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8(this, v17);
    }
    else
    {
      *(_QWORD *)&this->is_init_ = 0LL;
      this = (common::midb::RedisMgr *const)((char *)this + 8);
      if ( !*(_BYTE *)(((unsigned __int64)&v2->pool_ptr_map_ >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)v2->pool_ptr_map_._M_t._M_impl.gap0 = 0LL;
        goto LABEL_18;
      }
    }
    __asan_report_store8(this, v18);
    goto LABEL_23;
  }
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    p_M_use_count = v19;
    __asan_report_load8(v19);
    goto LABEL_24;
  }
  p_M_use_count = (volatile signed __int32 *)(*(_QWORD *)v9 + 96LL);
  if ( *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(p_M_use_count);
LABEL_25:
    v12 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count, v20);
    goto LABEL_26;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 96LL))(v4 + 32);
  reply_ptr._M_ptr = *(std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type **)(v4 + 32);
  v12 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 40);
  reply_ptr._M_refcount._M_pi = v12;
  if ( !v12 )
  {
LABEL_11:
    p_reply_ptr = &reply_ptr;
    v14 = common::midb::RedisMgr::checkReply(thisa, (common::midb::RedisReplyPtr)__PAIR128__(v11, &reply_ptr));
    goto LABEL_30;
  }
  p_M_use_count = &v12->_M_use_count;
  if ( &_pthread_key_create )
  {
    v11 = *(unsigned __int8 *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < (char)v11 || !(_BYTE)v11 )
    {
      _InterlockedAdd(p_M_use_count, 1u);
      goto LABEL_11;
    }
    goto LABEL_25;
  }
LABEL_26:
  v21 = *(_BYTE *)(((unsigned __int64)&v12->_M_use_count >> 3) + 0x7FFF8000);
  v11 = (((_BYTE)v12 + 8) & 7u) + 3;
  if ( (char)((((_BYTE)v12 + 8) & 7) + 3) < v21 || !v21 )
  {
    ++v12->_M_use_count;
    goto LABEL_11;
  }
  v14 = __asan_report_load4(&v12->_M_use_count);
LABEL_30:
  v60 = v14;
  v22 = reply_ptr._M_refcount._M_pi;
  if ( !reply_ptr._M_refcount._M_pi )
    goto LABEL_36;
  v23 = &reply_ptr._M_refcount._M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v24 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v23 & 7) + 3) < v24 || !v24 )
    {
      M_use_count = _InterlockedExchangeAdd(v23, 0xFFFFFFFF);
      goto LABEL_35;
    }
    __asan_report_store4(v23, v34);
  }
  v35 = *(_BYTE *)(((unsigned __int64)&v22->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v22 + 8) & 7) + 3) >= v35 && v35 )
  {
    __asan_report_load4(&v22->_M_use_count);
    goto LABEL_60;
  }
  M_use_count = v22->_M_use_count;
  v22->_M_use_count = M_use_count - 1;
LABEL_35:
  if ( M_use_count != 1 )
    goto LABEL_36;
LABEL_60:
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)v22;
    __asan_report_load8(v22);
    goto LABEL_71;
  }
  p_M_weak_count = (volatile signed __int32 *)(v22->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_72;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v22->_vptr__Sp_counted_base + 2))(v22);
  p_M_weak_count = &v22->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_73;
  v37 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v37 || !v37 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_66;
  }
LABEL_72:
  __asan_report_store4(p_M_weak_count, v40);
LABEL_73:
  v41 = *(_BYTE *)(((unsigned __int64)&v22->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v22 + 12) & 7) + 3) >= v41 && v41 )
  {
    __asan_report_load4(&v22->_M_weak_count);
LABEL_77:
    v39 = (unsigned __int64)v22;
    __asan_report_load8(v22);
    goto LABEL_78;
  }
  M_weak_count = v22->_M_weak_count;
  v22->_M_weak_count = M_weak_count - 1;
LABEL_66:
  if ( M_weak_count != 1 )
    goto LABEL_36;
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
    goto LABEL_77;
  v39 = (unsigned __int64)(v22->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_load8(v39);
    goto LABEL_79;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v22->_vptr__Sp_counted_base + 3))(v22);
LABEL_36:
  if ( !v60 )
    goto LABEL_37;
LABEL_79:
  common::milog::MiLogStream::MiLogStream(
    &v62,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/redis_mgr.cpp",
    "cmdBeginTrans",
    314);
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    v42 = (int (**)(...))M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_84;
  }
  v42 = M_pi->_vptr__Sp_counted_base;
  if ( *(_BYTE *)(((unsigned __int64)M_pi->_vptr__Sp_counted_base >> 3) + 0x7FFF8000) )
  {
LABEL_84:
    __asan_report_load8(v42);
    goto LABEL_85;
  }
  v43 = (unsigned __int64)*v42 + 120;
  if ( !*(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
  {
    v44 = (const char *)(*((__int64 (**)(void))*v42 + 15))();
    goto LABEL_86;
  }
LABEL_85:
  v44 = (const char *)__asan_report_load8(v43);
LABEL_86:
  v45 = "[REDIS][NETWORK][ECS]error:%s";
  common::milog::MiLogStream::operator()(&v62, "[REDIS][NETWORK][ECS]error:%s", v44);
  common::milog::MiLogStream::~MiLogStream(&v62);
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    v47 = (volatile signed __int32 *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_95;
  }
  reply_ptr._M_ptr = (std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type *)M_pi->_vptr__Sp_counted_base;
  v47 = &M_pi->_M_use_count;
  if ( *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000) )
  {
LABEL_95:
    __asan_report_load8(v47);
LABEL_96:
    v48 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(
                                                                 v47,
                                                                 "[REDIS][NETWORK][ECS]error:%s");
    goto LABEL_97;
  }
  v48 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&M_pi->_M_use_count;
  reply_ptr._M_refcount._M_pi = v48;
  if ( !v48 )
  {
LABEL_93:
    v49 = &reply_ptr;
    common::midb::RedisMgr::markConnToDestory(thisa, (common::midb::RedisConnPtr)__PAIR128__(v46, &reply_ptr));
    goto LABEL_101;
  }
  v47 = &v48->_M_use_count;
  if ( &_pthread_key_create )
  {
    v46 = *(unsigned __int8 *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v47 & 7) + 3) < (char)v46 || !(_BYTE)v46 )
    {
      _InterlockedAdd(v47, 1u);
      goto LABEL_93;
    }
    goto LABEL_96;
  }
LABEL_97:
  v50 = *(_BYTE *)(((unsigned __int64)&v48->_M_use_count >> 3) + 0x7FFF8000);
  v46 = (((_BYTE)v48 + 8) & 7u) + 3;
  if ( (char)((((_BYTE)v48 + 8) & 7) + 3) < v50 || !v50 )
  {
    ++v48->_M_use_count;
    goto LABEL_93;
  }
  __asan_report_load4(&v48->_M_use_count);
LABEL_101:
  if ( reply_ptr._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(reply_ptr._M_refcount._M_pi);
LABEL_37:
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    p_is_init = (volatile signed __int32 *)&v2->is_init_;
    __asan_report_store8(v2, v51);
    goto LABEL_104;
  }
  *(_QWORD *)&v2->is_init_ = *(_QWORD *)(v4 + 32);
  p_is_init = (volatile signed __int32 *)v2->pool_ptr_map_._M_t._M_impl.gap0;
  if ( *(_BYTE *)(((unsigned __int64)&v2->pool_ptr_map_ >> 3) + 0x7FFF8000) )
  {
LABEL_104:
    __asan_report_store8(p_is_init, v52);
    goto LABEL_105;
  }
  *(_QWORD *)v2->pool_ptr_map_._M_t._M_impl.gap0 = 0LL;
  v27 = *(_QWORD *)(v4 + 40);
  *(_QWORD *)(v4 + 40) = 0LL;
  *(_QWORD *)v2->pool_ptr_map_._M_t._M_impl.gap0 = v27;
  *(_QWORD *)(v4 + 32) = 0LL;
  v5 = *(volatile signed __int32 **)(v4 + 40);
  if ( !v5 )
    goto LABEL_18;
  p_is_init = v5 + 2;
  if ( !&_pthread_key_create )
    goto LABEL_106;
  v28 = *(_BYTE *)(((unsigned __int64)p_is_init >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_is_init & 7) + 3) < v28 || !v28 )
  {
    v29 = _InterlockedExchangeAdd(p_is_init, 0xFFFFFFFF);
    goto LABEL_44;
  }
LABEL_105:
  __asan_report_store4(p_is_init, v53);
LABEL_106:
  v54 = *(_BYTE *)(((unsigned __int64)(v5 + 2) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v5 + 8) & 7) + 3) >= v54 && v54 )
  {
    __asan_report_load4(v5 + 2);
LABEL_110:
    v30 = v5;
    __asan_report_load8(v5);
    goto LABEL_111;
  }
  v29 = *((_DWORD *)v5 + 2);
  *((_DWORD *)v5 + 2) = v29 - 1;
LABEL_44:
  if ( v29 != 1 )
    goto LABEL_18;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    goto LABEL_110;
  v30 = (volatile signed __int32 *)(*(_QWORD *)v5 + 16LL);
  if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
  {
LABEL_111:
    __asan_report_load8(v30);
    goto LABEL_112;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
  v30 = v5 + 3;
  if ( !&_pthread_key_create )
    goto LABEL_113;
  v31 = *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v30 & 7) + 3) < v31 || !v31 )
  {
    v32 = _InterlockedExchangeAdd(v30, 0xFFFFFFFF);
    goto LABEL_51;
  }
LABEL_112:
  __asan_report_store4(v30, v55);
LABEL_113:
  v56 = *(_BYTE *)(((unsigned __int64)(v5 + 3) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v5 + 12) & 7) + 3) >= v56 && v56 )
  {
    __asan_report_load4(v5 + 3);
LABEL_117:
    v33 = (unsigned __int64)v5;
    __asan_report_load8(v5);
LABEL_118:
    v57 = (struct _Unwind_Exception *)__asan_report_load8(v33);
    if ( reply_ptr._M_refcount._M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(reply_ptr._M_refcount._M_pi);
    v58 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v5 - 3);
    if ( v58 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v58);
    __asan_handle_no_return(v58);
    _Unwind_Resume(v57);
  }
  v32 = *((_DWORD *)v5 + 3);
  *((_DWORD *)v5 + 3) = v32 - 1;
LABEL_51:
  if ( v32 != 1 )
    goto LABEL_18;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    goto LABEL_117;
  v33 = *(_QWORD *)v5 + 24LL;
  if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
    goto LABEL_118;
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 24LL))(v5);
LABEL_18:
  if ( v63 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v2;
};

// Line 321: range 000000000CA7C92A-000000000CA7D0BA
// local variable allocation has failed, the output may be wrong!
common::midb::RedisMgr *__fastcall common::midb::RedisMgr::cmdBeginTrans(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        const std::string *key)
{
  common::midb::RedisMgr *v3; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r13
  unsigned __int64 v6; // rbp
  volatile signed __int32 *v7; // r12
  unsigned __int64 v8; // r14
  std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type *vptr__Sp_counted_base; // rsi
  unsigned __int64 v10; // rsi
  __int64 v11; // rsi
  volatile signed __int32 *p_M_use_count; // rdi
  unsigned __int64 v13; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v14; // rax
  common::midb::RedisReplyPtr *p_reply_ptr; // rsi
  int32_t v16; // eax
  __int64 v17; // rax
  __int64 v19; // rsi
  __int64 v20; // rsi
  volatile signed __int32 *v21; // rsi
  __int64 v22; // rsi
  char v23; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // r15
  _Atomic_word *v25; // rdi
  char v26; // dl
  signed __int32 M_use_count; // eax
  volatile signed __int32 *p_is_init; // rdi
  __int64 v29; // rax
  char v30; // dl
  signed __int32 v31; // eax
  volatile signed __int32 *v32; // rdi
  char v33; // dl
  signed __int32 v34; // eax
  unsigned __int64 v35; // rdi
  __int64 v36; // rsi
  char v37; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v39; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v41; // rdi
  __int64 v42; // rsi
  char v43; // dl
  int (**v44)(...); // rdi
  unsigned __int64 v45; // rdx
  const char *v46; // rax
  const char *v47; // rsi
  unsigned __int64 v48; // rdx
  volatile signed __int32 *v49; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v50; // rax
  common::midb::RedisReplyPtr *v51; // rsi
  char v52; // cl
  __int64 v53; // rsi
  __int64 v54; // rsi
  __int64 v55; // rsi
  char v56; // dl
  __int64 v57; // rsi
  char v58; // dl
  struct _Unwind_Exception *v59; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v60; // rdi
  common::midb::RedisMgr *thisa; // [rsp+10h] [rbp-B8h]
  int32_t v62; // [rsp+1Ch] [rbp-ACh]
  common::midb::RedisReplyPtr reply_ptr; // [rsp+20h] [rbp-A8h] BYREF
  common::milog::MiLogStream v64; // [rsp+30h] [rbp-98h] BYREF
  char v65[120]; // [rsp+50h] [rbp-78h] BYREF

  v3 = this;
  thisa = (common::midb::RedisMgr *)conn_ptr._M_ptr;
  M_pi = conn_ptr._M_refcount._M_pi;
  v6 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_0(64LL);
    if ( v17 )
      v6 = v17;
  }
  v7 = (volatile signed __int32 *)(v6 + 64);
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 13 reply_ptr:326";
  *(_QWORD *)(v6 + 16) = common::midb::RedisMgr::cmdBeginTrans;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(M_pi);
    goto LABEL_15;
  }
  vptr__Sp_counted_base = (std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type *)M_pi->_vptr__Sp_counted_base;
  if ( !M_pi->_vptr__Sp_counted_base )
  {
LABEL_15:
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8(this, v19);
    }
    else
    {
      *(_QWORD *)&this->is_init_ = 0LL;
      this = (common::midb::RedisMgr *const)((char *)this + 8);
      if ( !*(_BYTE *)(((unsigned __int64)&v3->pool_ptr_map_ >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)v3->pool_ptr_map_._M_t._M_impl.gap0 = 0LL;
        goto LABEL_18;
      }
    }
    __asan_report_store8(this, v20);
    goto LABEL_23;
  }
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    p_M_use_count = v21;
    __asan_report_load8(v21);
    goto LABEL_24;
  }
  p_M_use_count = (volatile signed __int32 *)(*(_QWORD *)v11 + 88LL);
  if ( *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(p_M_use_count);
LABEL_25:
    v14 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count, v22);
    goto LABEL_26;
  }
  (*(void (__fastcall **)(unsigned __int64, __int64, const std::string *))(*(_QWORD *)v11 + 88LL))(v6 + 32, v11, key);
  reply_ptr._M_ptr = *(std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type **)(v6 + 32);
  v14 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 40);
  reply_ptr._M_refcount._M_pi = v14;
  if ( !v14 )
  {
LABEL_11:
    p_reply_ptr = &reply_ptr;
    v16 = common::midb::RedisMgr::checkReply(thisa, (common::midb::RedisReplyPtr)__PAIR128__(v13, &reply_ptr));
    goto LABEL_30;
  }
  p_M_use_count = &v14->_M_use_count;
  if ( &_pthread_key_create )
  {
    v13 = *(unsigned __int8 *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < (char)v13 || !(_BYTE)v13 )
    {
      _InterlockedAdd(p_M_use_count, 1u);
      goto LABEL_11;
    }
    goto LABEL_25;
  }
LABEL_26:
  v23 = *(_BYTE *)(((unsigned __int64)&v14->_M_use_count >> 3) + 0x7FFF8000);
  v13 = (((_BYTE)v14 + 8) & 7u) + 3;
  if ( (char)((((_BYTE)v14 + 8) & 7) + 3) < v23 || !v23 )
  {
    ++v14->_M_use_count;
    goto LABEL_11;
  }
  v16 = __asan_report_load4(&v14->_M_use_count);
LABEL_30:
  v62 = v16;
  v24 = reply_ptr._M_refcount._M_pi;
  if ( !reply_ptr._M_refcount._M_pi )
    goto LABEL_36;
  v25 = &reply_ptr._M_refcount._M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v26 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v25 & 7) + 3) < v26 || !v26 )
    {
      M_use_count = _InterlockedExchangeAdd(v25, 0xFFFFFFFF);
      goto LABEL_35;
    }
    __asan_report_store4(v25, v36);
  }
  v37 = *(_BYTE *)(((unsigned __int64)&v24->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v24 + 8) & 7) + 3) >= v37 && v37 )
  {
    __asan_report_load4(&v24->_M_use_count);
    goto LABEL_60;
  }
  M_use_count = v24->_M_use_count;
  v24->_M_use_count = M_use_count - 1;
LABEL_35:
  if ( M_use_count != 1 )
    goto LABEL_36;
LABEL_60:
  if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)v24;
    __asan_report_load8(v24);
    goto LABEL_71;
  }
  p_M_weak_count = (volatile signed __int32 *)(v24->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_72;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v24->_vptr__Sp_counted_base + 2))(v24);
  p_M_weak_count = &v24->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_73;
  v39 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v39 || !v39 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_66;
  }
LABEL_72:
  __asan_report_store4(p_M_weak_count, v42);
LABEL_73:
  v43 = *(_BYTE *)(((unsigned __int64)&v24->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v24 + 12) & 7) + 3) >= v43 && v43 )
  {
    __asan_report_load4(&v24->_M_weak_count);
LABEL_77:
    v41 = (unsigned __int64)v24;
    __asan_report_load8(v24);
    goto LABEL_78;
  }
  M_weak_count = v24->_M_weak_count;
  v24->_M_weak_count = M_weak_count - 1;
LABEL_66:
  if ( M_weak_count != 1 )
    goto LABEL_36;
  if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
    goto LABEL_77;
  v41 = (unsigned __int64)(v24->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_load8(v41);
    goto LABEL_79;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v24->_vptr__Sp_counted_base + 3))(v24);
LABEL_36:
  if ( !v62 )
    goto LABEL_37;
LABEL_79:
  common::milog::MiLogStream::MiLogStream(
    &v64,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/redis_mgr.cpp",
    "cmdBeginTrans",
    329);
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    v44 = (int (**)(...))M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_84;
  }
  v44 = M_pi->_vptr__Sp_counted_base;
  if ( *(_BYTE *)(((unsigned __int64)M_pi->_vptr__Sp_counted_base >> 3) + 0x7FFF8000) )
  {
LABEL_84:
    __asan_report_load8(v44);
    goto LABEL_85;
  }
  v45 = (unsigned __int64)*v44 + 120;
  if ( !*(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
  {
    v46 = (const char *)(*((__int64 (**)(void))*v44 + 15))();
    goto LABEL_86;
  }
LABEL_85:
  v46 = (const char *)__asan_report_load8(v45);
LABEL_86:
  v47 = "error:%s";
  common::milog::MiLogStream::operator()(&v64, "error:%s", v46);
  common::milog::MiLogStream::~MiLogStream(&v64);
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    v49 = (volatile signed __int32 *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_95;
  }
  reply_ptr._M_ptr = (std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type *)M_pi->_vptr__Sp_counted_base;
  v49 = &M_pi->_M_use_count;
  if ( *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000) )
  {
LABEL_95:
    __asan_report_load8(v49);
LABEL_96:
    v50 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v49, "error:%s");
    goto LABEL_97;
  }
  v50 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&M_pi->_M_use_count;
  reply_ptr._M_refcount._M_pi = v50;
  if ( !v50 )
  {
LABEL_93:
    v51 = &reply_ptr;
    common::midb::RedisMgr::markConnToDestory(thisa, (common::midb::RedisConnPtr)__PAIR128__(v48, &reply_ptr));
    goto LABEL_101;
  }
  v49 = &v50->_M_use_count;
  if ( &_pthread_key_create )
  {
    v48 = *(unsigned __int8 *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v49 & 7) + 3) < (char)v48 || !(_BYTE)v48 )
    {
      _InterlockedAdd(v49, 1u);
      goto LABEL_93;
    }
    goto LABEL_96;
  }
LABEL_97:
  v52 = *(_BYTE *)(((unsigned __int64)&v50->_M_use_count >> 3) + 0x7FFF8000);
  v48 = (((_BYTE)v50 + 8) & 7u) + 3;
  if ( (char)((((_BYTE)v50 + 8) & 7) + 3) < v52 || !v52 )
  {
    ++v50->_M_use_count;
    goto LABEL_93;
  }
  __asan_report_load4(&v50->_M_use_count);
LABEL_101:
  if ( reply_ptr._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(reply_ptr._M_refcount._M_pi);
LABEL_37:
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    p_is_init = (volatile signed __int32 *)&v3->is_init_;
    __asan_report_store8(v3, v53);
    goto LABEL_104;
  }
  *(_QWORD *)&v3->is_init_ = *(_QWORD *)(v6 + 32);
  p_is_init = (volatile signed __int32 *)v3->pool_ptr_map_._M_t._M_impl.gap0;
  if ( *(_BYTE *)(((unsigned __int64)&v3->pool_ptr_map_ >> 3) + 0x7FFF8000) )
  {
LABEL_104:
    __asan_report_store8(p_is_init, v54);
    goto LABEL_105;
  }
  *(_QWORD *)v3->pool_ptr_map_._M_t._M_impl.gap0 = 0LL;
  v29 = *(_QWORD *)(v6 + 40);
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_QWORD *)v3->pool_ptr_map_._M_t._M_impl.gap0 = v29;
  *(_QWORD *)(v6 + 32) = 0LL;
  v7 = *(volatile signed __int32 **)(v6 + 40);
  if ( !v7 )
    goto LABEL_18;
  p_is_init = v7 + 2;
  if ( !&_pthread_key_create )
    goto LABEL_106;
  v30 = *(_BYTE *)(((unsigned __int64)p_is_init >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_is_init & 7) + 3) < v30 || !v30 )
  {
    v31 = _InterlockedExchangeAdd(p_is_init, 0xFFFFFFFF);
    goto LABEL_44;
  }
LABEL_105:
  __asan_report_store4(p_is_init, v55);
LABEL_106:
  v56 = *(_BYTE *)(((unsigned __int64)(v7 + 2) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v7 + 8) & 7) + 3) >= v56 && v56 )
  {
    __asan_report_load4(v7 + 2);
LABEL_110:
    v32 = v7;
    __asan_report_load8(v7);
    goto LABEL_111;
  }
  v31 = *((_DWORD *)v7 + 2);
  *((_DWORD *)v7 + 2) = v31 - 1;
LABEL_44:
  if ( v31 != 1 )
    goto LABEL_18;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    goto LABEL_110;
  v32 = (volatile signed __int32 *)(*(_QWORD *)v7 + 16LL);
  if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
  {
LABEL_111:
    __asan_report_load8(v32);
    goto LABEL_112;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
  v32 = v7 + 3;
  if ( !&_pthread_key_create )
    goto LABEL_113;
  v33 = *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v32 & 7) + 3) < v33 || !v33 )
  {
    v34 = _InterlockedExchangeAdd(v32, 0xFFFFFFFF);
    goto LABEL_51;
  }
LABEL_112:
  __asan_report_store4(v32, v57);
LABEL_113:
  v58 = *(_BYTE *)(((unsigned __int64)(v7 + 3) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v7 + 12) & 7) + 3) >= v58 && v58 )
  {
    __asan_report_load4(v7 + 3);
LABEL_117:
    v35 = (unsigned __int64)v7;
    __asan_report_load8(v7);
LABEL_118:
    v59 = (struct _Unwind_Exception *)__asan_report_load8(v35);
    if ( reply_ptr._M_refcount._M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(reply_ptr._M_refcount._M_pi);
    v60 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v7 - 3);
    if ( v60 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v60);
    __asan_handle_no_return(v60);
    _Unwind_Resume(v59);
  }
  v34 = *((_DWORD *)v7 + 3);
  *((_DWORD *)v7 + 3) = v34 - 1;
LABEL_51:
  if ( v34 != 1 )
    goto LABEL_18;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    goto LABEL_117;
  v35 = *(_QWORD *)v7 + 24LL;
  if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
    goto LABEL_118;
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 24LL))(v7);
LABEL_18:
  if ( v65 == (char *)v6 )
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

// Line 336: range 000000000CA7D0C0-000000000CA7D84A
// local variable allocation has failed, the output may be wrong!
common::midb::RedisMgr *__fastcall common::midb::RedisMgr::cmdExecTrans(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr)
{
  common::midb::RedisMgr *v2; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r13
  unsigned __int64 v4; // rbp
  volatile signed __int32 *v5; // r12
  unsigned __int64 v6; // r14
  std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type *vptr__Sp_counted_base; // rsi
  unsigned __int64 v8; // rsi
  __int64 v9; // rsi
  volatile signed __int32 *p_M_use_count; // rdi
  unsigned __int64 v11; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v12; // rax
  common::midb::RedisReplyPtr *p_reply_ptr; // rsi
  int32_t v14; // eax
  __int64 v15; // rax
  __int64 v17; // rsi
  __int64 v18; // rsi
  volatile signed __int32 *v19; // rsi
  __int64 v20; // rsi
  char v21; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // r15
  _Atomic_word *v23; // rdi
  char v24; // dl
  signed __int32 M_use_count; // eax
  volatile signed __int32 *p_is_init; // rdi
  __int64 v27; // rax
  char v28; // dl
  signed __int32 v29; // eax
  volatile signed __int32 *v30; // rdi
  char v31; // dl
  signed __int32 v32; // eax
  unsigned __int64 v33; // rdi
  __int64 v34; // rsi
  char v35; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v37; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v39; // rdi
  __int64 v40; // rsi
  char v41; // dl
  int (**v42)(...); // rdi
  unsigned __int64 v43; // rdx
  const char *v44; // rax
  const char *v45; // rsi
  unsigned __int64 v46; // rdx
  volatile signed __int32 *v47; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v48; // rax
  common::midb::RedisReplyPtr *v49; // rsi
  char v50; // cl
  __int64 v51; // rsi
  __int64 v52; // rsi
  __int64 v53; // rsi
  char v54; // dl
  __int64 v55; // rsi
  char v56; // dl
  struct _Unwind_Exception *v57; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v58; // rdi
  common::midb::RedisMgr *thisa; // [rsp+10h] [rbp-B8h]
  int32_t v60; // [rsp+1Ch] [rbp-ACh]
  common::midb::RedisReplyPtr reply_ptr; // [rsp+20h] [rbp-A8h] BYREF
  common::milog::MiLogStream v62; // [rsp+30h] [rbp-98h] BYREF
  char v63[120]; // [rsp+50h] [rbp-78h] BYREF

  v2 = this;
  thisa = (common::midb::RedisMgr *)conn_ptr._M_ptr;
  M_pi = conn_ptr._M_refcount._M_pi;
  v4 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v4 = v15;
  }
  v5 = (volatile signed __int32 *)(v4 + 64);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 13 reply_ptr:341";
  *(_QWORD *)(v4 + 16) = common::midb::RedisMgr::cmdExecTrans;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(M_pi);
    goto LABEL_15;
  }
  vptr__Sp_counted_base = (std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type *)M_pi->_vptr__Sp_counted_base;
  if ( !M_pi->_vptr__Sp_counted_base )
  {
LABEL_15:
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8(this, v17);
    }
    else
    {
      *(_QWORD *)&this->is_init_ = 0LL;
      this = (common::midb::RedisMgr *const)((char *)this + 8);
      if ( !*(_BYTE *)(((unsigned __int64)&v2->pool_ptr_map_ >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)v2->pool_ptr_map_._M_t._M_impl.gap0 = 0LL;
        goto LABEL_18;
      }
    }
    __asan_report_store8(this, v18);
    goto LABEL_23;
  }
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    p_M_use_count = v19;
    __asan_report_load8(v19);
    goto LABEL_24;
  }
  p_M_use_count = (volatile signed __int32 *)(*(_QWORD *)v9 + 104LL);
  if ( *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(p_M_use_count);
LABEL_25:
    v12 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count, v20);
    goto LABEL_26;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 104LL))(v4 + 32);
  reply_ptr._M_ptr = *(std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type **)(v4 + 32);
  v12 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 40);
  reply_ptr._M_refcount._M_pi = v12;
  if ( !v12 )
  {
LABEL_11:
    p_reply_ptr = &reply_ptr;
    v14 = common::midb::RedisMgr::checkReply(thisa, (common::midb::RedisReplyPtr)__PAIR128__(v11, &reply_ptr));
    goto LABEL_30;
  }
  p_M_use_count = &v12->_M_use_count;
  if ( &_pthread_key_create )
  {
    v11 = *(unsigned __int8 *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < (char)v11 || !(_BYTE)v11 )
    {
      _InterlockedAdd(p_M_use_count, 1u);
      goto LABEL_11;
    }
    goto LABEL_25;
  }
LABEL_26:
  v21 = *(_BYTE *)(((unsigned __int64)&v12->_M_use_count >> 3) + 0x7FFF8000);
  v11 = (((_BYTE)v12 + 8) & 7u) + 3;
  if ( (char)((((_BYTE)v12 + 8) & 7) + 3) < v21 || !v21 )
  {
    ++v12->_M_use_count;
    goto LABEL_11;
  }
  v14 = __asan_report_load4(&v12->_M_use_count);
LABEL_30:
  v60 = v14;
  v22 = reply_ptr._M_refcount._M_pi;
  if ( !reply_ptr._M_refcount._M_pi )
    goto LABEL_36;
  v23 = &reply_ptr._M_refcount._M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v24 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v23 & 7) + 3) < v24 || !v24 )
    {
      M_use_count = _InterlockedExchangeAdd(v23, 0xFFFFFFFF);
      goto LABEL_35;
    }
    __asan_report_store4(v23, v34);
  }
  v35 = *(_BYTE *)(((unsigned __int64)&v22->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v22 + 8) & 7) + 3) >= v35 && v35 )
  {
    __asan_report_load4(&v22->_M_use_count);
    goto LABEL_60;
  }
  M_use_count = v22->_M_use_count;
  v22->_M_use_count = M_use_count - 1;
LABEL_35:
  if ( M_use_count != 1 )
    goto LABEL_36;
LABEL_60:
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)v22;
    __asan_report_load8(v22);
    goto LABEL_71;
  }
  p_M_weak_count = (volatile signed __int32 *)(v22->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_72;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v22->_vptr__Sp_counted_base + 2))(v22);
  p_M_weak_count = &v22->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_73;
  v37 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v37 || !v37 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_66;
  }
LABEL_72:
  __asan_report_store4(p_M_weak_count, v40);
LABEL_73:
  v41 = *(_BYTE *)(((unsigned __int64)&v22->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v22 + 12) & 7) + 3) >= v41 && v41 )
  {
    __asan_report_load4(&v22->_M_weak_count);
LABEL_77:
    v39 = (unsigned __int64)v22;
    __asan_report_load8(v22);
    goto LABEL_78;
  }
  M_weak_count = v22->_M_weak_count;
  v22->_M_weak_count = M_weak_count - 1;
LABEL_66:
  if ( M_weak_count != 1 )
    goto LABEL_36;
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
    goto LABEL_77;
  v39 = (unsigned __int64)(v22->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_load8(v39);
    goto LABEL_79;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v22->_vptr__Sp_counted_base + 3))(v22);
LABEL_36:
  if ( !v60 )
    goto LABEL_37;
LABEL_79:
  common::milog::MiLogStream::MiLogStream(
    &v62,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/redis_mgr.cpp",
    "cmdExecTrans",
    344);
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    v42 = (int (**)(...))M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_84;
  }
  v42 = M_pi->_vptr__Sp_counted_base;
  if ( *(_BYTE *)(((unsigned __int64)M_pi->_vptr__Sp_counted_base >> 3) + 0x7FFF8000) )
  {
LABEL_84:
    __asan_report_load8(v42);
    goto LABEL_85;
  }
  v43 = (unsigned __int64)*v42 + 120;
  if ( !*(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
  {
    v44 = (const char *)(*((__int64 (**)(void))*v42 + 15))();
    goto LABEL_86;
  }
LABEL_85:
  v44 = (const char *)__asan_report_load8(v43);
LABEL_86:
  v45 = "error:%s";
  common::milog::MiLogStream::operator()(&v62, "error:%s", v44);
  common::milog::MiLogStream::~MiLogStream(&v62);
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    v47 = (volatile signed __int32 *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_95;
  }
  reply_ptr._M_ptr = (std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type *)M_pi->_vptr__Sp_counted_base;
  v47 = &M_pi->_M_use_count;
  if ( *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000) )
  {
LABEL_95:
    __asan_report_load8(v47);
LABEL_96:
    v48 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v47, "error:%s");
    goto LABEL_97;
  }
  v48 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&M_pi->_M_use_count;
  reply_ptr._M_refcount._M_pi = v48;
  if ( !v48 )
  {
LABEL_93:
    v49 = &reply_ptr;
    common::midb::RedisMgr::markConnToDestory(thisa, (common::midb::RedisConnPtr)__PAIR128__(v46, &reply_ptr));
    goto LABEL_101;
  }
  v47 = &v48->_M_use_count;
  if ( &_pthread_key_create )
  {
    v46 = *(unsigned __int8 *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v47 & 7) + 3) < (char)v46 || !(_BYTE)v46 )
    {
      _InterlockedAdd(v47, 1u);
      goto LABEL_93;
    }
    goto LABEL_96;
  }
LABEL_97:
  v50 = *(_BYTE *)(((unsigned __int64)&v48->_M_use_count >> 3) + 0x7FFF8000);
  v46 = (((_BYTE)v48 + 8) & 7u) + 3;
  if ( (char)((((_BYTE)v48 + 8) & 7) + 3) < v50 || !v50 )
  {
    ++v48->_M_use_count;
    goto LABEL_93;
  }
  __asan_report_load4(&v48->_M_use_count);
LABEL_101:
  if ( reply_ptr._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(reply_ptr._M_refcount._M_pi);
LABEL_37:
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    p_is_init = (volatile signed __int32 *)&v2->is_init_;
    __asan_report_store8(v2, v51);
    goto LABEL_104;
  }
  *(_QWORD *)&v2->is_init_ = *(_QWORD *)(v4 + 32);
  p_is_init = (volatile signed __int32 *)v2->pool_ptr_map_._M_t._M_impl.gap0;
  if ( *(_BYTE *)(((unsigned __int64)&v2->pool_ptr_map_ >> 3) + 0x7FFF8000) )
  {
LABEL_104:
    __asan_report_store8(p_is_init, v52);
    goto LABEL_105;
  }
  *(_QWORD *)v2->pool_ptr_map_._M_t._M_impl.gap0 = 0LL;
  v27 = *(_QWORD *)(v4 + 40);
  *(_QWORD *)(v4 + 40) = 0LL;
  *(_QWORD *)v2->pool_ptr_map_._M_t._M_impl.gap0 = v27;
  *(_QWORD *)(v4 + 32) = 0LL;
  v5 = *(volatile signed __int32 **)(v4 + 40);
  if ( !v5 )
    goto LABEL_18;
  p_is_init = v5 + 2;
  if ( !&_pthread_key_create )
    goto LABEL_106;
  v28 = *(_BYTE *)(((unsigned __int64)p_is_init >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_is_init & 7) + 3) < v28 || !v28 )
  {
    v29 = _InterlockedExchangeAdd(p_is_init, 0xFFFFFFFF);
    goto LABEL_44;
  }
LABEL_105:
  __asan_report_store4(p_is_init, v53);
LABEL_106:
  v54 = *(_BYTE *)(((unsigned __int64)(v5 + 2) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v5 + 8) & 7) + 3) >= v54 && v54 )
  {
    __asan_report_load4(v5 + 2);
LABEL_110:
    v30 = v5;
    __asan_report_load8(v5);
    goto LABEL_111;
  }
  v29 = *((_DWORD *)v5 + 2);
  *((_DWORD *)v5 + 2) = v29 - 1;
LABEL_44:
  if ( v29 != 1 )
    goto LABEL_18;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    goto LABEL_110;
  v30 = (volatile signed __int32 *)(*(_QWORD *)v5 + 16LL);
  if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
  {
LABEL_111:
    __asan_report_load8(v30);
    goto LABEL_112;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
  v30 = v5 + 3;
  if ( !&_pthread_key_create )
    goto LABEL_113;
  v31 = *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v30 & 7) + 3) < v31 || !v31 )
  {
    v32 = _InterlockedExchangeAdd(v30, 0xFFFFFFFF);
    goto LABEL_51;
  }
LABEL_112:
  __asan_report_store4(v30, v55);
LABEL_113:
  v56 = *(_BYTE *)(((unsigned __int64)(v5 + 3) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v5 + 12) & 7) + 3) >= v56 && v56 )
  {
    __asan_report_load4(v5 + 3);
LABEL_117:
    v33 = (unsigned __int64)v5;
    __asan_report_load8(v5);
LABEL_118:
    v57 = (struct _Unwind_Exception *)__asan_report_load8(v33);
    if ( reply_ptr._M_refcount._M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(reply_ptr._M_refcount._M_pi);
    v58 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v5 - 3);
    if ( v58 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v58);
    __asan_handle_no_return(v58);
    _Unwind_Resume(v57);
  }
  v32 = *((_DWORD *)v5 + 3);
  *((_DWORD *)v5 + 3) = v32 - 1;
LABEL_51:
  if ( v32 != 1 )
    goto LABEL_18;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    goto LABEL_117;
  v33 = *(_QWORD *)v5 + 24LL;
  if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
    goto LABEL_118;
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 24LL))(v5);
LABEL_18:
  if ( v63 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v2;
};

// Line 351: range 000000000CA7D850-000000000CA7DFDA
// local variable allocation has failed, the output may be wrong!
common::midb::RedisMgr *__fastcall common::midb::RedisMgr::cmdUnwatch(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr)
{
  common::midb::RedisMgr *v2; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r13
  unsigned __int64 v4; // rbp
  volatile signed __int32 *v5; // r12
  unsigned __int64 v6; // r14
  std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type *vptr__Sp_counted_base; // rsi
  unsigned __int64 v8; // rsi
  __int64 v9; // rsi
  volatile signed __int32 *p_M_use_count; // rdi
  unsigned __int64 v11; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v12; // rax
  common::midb::RedisReplyPtr *p_reply_ptr; // rsi
  int32_t v14; // eax
  __int64 v15; // rax
  __int64 v17; // rsi
  __int64 v18; // rsi
  volatile signed __int32 *v19; // rsi
  __int64 v20; // rsi
  char v21; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // r15
  _Atomic_word *v23; // rdi
  char v24; // dl
  signed __int32 M_use_count; // eax
  volatile signed __int32 *p_is_init; // rdi
  __int64 v27; // rax
  char v28; // dl
  signed __int32 v29; // eax
  volatile signed __int32 *v30; // rdi
  char v31; // dl
  signed __int32 v32; // eax
  unsigned __int64 v33; // rdi
  __int64 v34; // rsi
  char v35; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v37; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v39; // rdi
  __int64 v40; // rsi
  char v41; // dl
  int (**v42)(...); // rdi
  unsigned __int64 v43; // rdx
  const char *v44; // rax
  const char *v45; // rsi
  unsigned __int64 v46; // rdx
  volatile signed __int32 *v47; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v48; // rax
  common::midb::RedisReplyPtr *v49; // rsi
  char v50; // cl
  __int64 v51; // rsi
  __int64 v52; // rsi
  __int64 v53; // rsi
  char v54; // dl
  __int64 v55; // rsi
  char v56; // dl
  struct _Unwind_Exception *v57; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v58; // rdi
  common::midb::RedisMgr *thisa; // [rsp+10h] [rbp-B8h]
  int32_t v60; // [rsp+1Ch] [rbp-ACh]
  common::midb::RedisReplyPtr reply_ptr; // [rsp+20h] [rbp-A8h] BYREF
  common::milog::MiLogStream v62; // [rsp+30h] [rbp-98h] BYREF
  char v63[120]; // [rsp+50h] [rbp-78h] BYREF

  v2 = this;
  thisa = (common::midb::RedisMgr *)conn_ptr._M_ptr;
  M_pi = conn_ptr._M_refcount._M_pi;
  v4 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v4 = v15;
  }
  v5 = (volatile signed __int32 *)(v4 + 64);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 13 reply_ptr:356";
  *(_QWORD *)(v4 + 16) = common::midb::RedisMgr::cmdUnwatch;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(M_pi);
    goto LABEL_15;
  }
  vptr__Sp_counted_base = (std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type *)M_pi->_vptr__Sp_counted_base;
  if ( !M_pi->_vptr__Sp_counted_base )
  {
LABEL_15:
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8(this, v17);
    }
    else
    {
      *(_QWORD *)&this->is_init_ = 0LL;
      this = (common::midb::RedisMgr *const)((char *)this + 8);
      if ( !*(_BYTE *)(((unsigned __int64)&v2->pool_ptr_map_ >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)v2->pool_ptr_map_._M_t._M_impl.gap0 = 0LL;
        goto LABEL_18;
      }
    }
    __asan_report_store8(this, v18);
    goto LABEL_23;
  }
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    p_M_use_count = v19;
    __asan_report_load8(v19);
    goto LABEL_24;
  }
  p_M_use_count = (volatile signed __int32 *)(*(_QWORD *)v9 + 80LL);
  if ( *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(p_M_use_count);
LABEL_25:
    v12 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count, v20);
    goto LABEL_26;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 80LL))(v4 + 32);
  reply_ptr._M_ptr = *(std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type **)(v4 + 32);
  v12 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 40);
  reply_ptr._M_refcount._M_pi = v12;
  if ( !v12 )
  {
LABEL_11:
    p_reply_ptr = &reply_ptr;
    v14 = common::midb::RedisMgr::checkReply(thisa, (common::midb::RedisReplyPtr)__PAIR128__(v11, &reply_ptr));
    goto LABEL_30;
  }
  p_M_use_count = &v12->_M_use_count;
  if ( &_pthread_key_create )
  {
    v11 = *(unsigned __int8 *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < (char)v11 || !(_BYTE)v11 )
    {
      _InterlockedAdd(p_M_use_count, 1u);
      goto LABEL_11;
    }
    goto LABEL_25;
  }
LABEL_26:
  v21 = *(_BYTE *)(((unsigned __int64)&v12->_M_use_count >> 3) + 0x7FFF8000);
  v11 = (((_BYTE)v12 + 8) & 7u) + 3;
  if ( (char)((((_BYTE)v12 + 8) & 7) + 3) < v21 || !v21 )
  {
    ++v12->_M_use_count;
    goto LABEL_11;
  }
  v14 = __asan_report_load4(&v12->_M_use_count);
LABEL_30:
  v60 = v14;
  v22 = reply_ptr._M_refcount._M_pi;
  if ( !reply_ptr._M_refcount._M_pi )
    goto LABEL_36;
  v23 = &reply_ptr._M_refcount._M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v24 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v23 & 7) + 3) < v24 || !v24 )
    {
      M_use_count = _InterlockedExchangeAdd(v23, 0xFFFFFFFF);
      goto LABEL_35;
    }
    __asan_report_store4(v23, v34);
  }
  v35 = *(_BYTE *)(((unsigned __int64)&v22->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v22 + 8) & 7) + 3) >= v35 && v35 )
  {
    __asan_report_load4(&v22->_M_use_count);
    goto LABEL_60;
  }
  M_use_count = v22->_M_use_count;
  v22->_M_use_count = M_use_count - 1;
LABEL_35:
  if ( M_use_count != 1 )
    goto LABEL_36;
LABEL_60:
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)v22;
    __asan_report_load8(v22);
    goto LABEL_71;
  }
  p_M_weak_count = (volatile signed __int32 *)(v22->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_72;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v22->_vptr__Sp_counted_base + 2))(v22);
  p_M_weak_count = &v22->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_73;
  v37 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v37 || !v37 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_66;
  }
LABEL_72:
  __asan_report_store4(p_M_weak_count, v40);
LABEL_73:
  v41 = *(_BYTE *)(((unsigned __int64)&v22->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v22 + 12) & 7) + 3) >= v41 && v41 )
  {
    __asan_report_load4(&v22->_M_weak_count);
LABEL_77:
    v39 = (unsigned __int64)v22;
    __asan_report_load8(v22);
    goto LABEL_78;
  }
  M_weak_count = v22->_M_weak_count;
  v22->_M_weak_count = M_weak_count - 1;
LABEL_66:
  if ( M_weak_count != 1 )
    goto LABEL_36;
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
    goto LABEL_77;
  v39 = (unsigned __int64)(v22->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_load8(v39);
    goto LABEL_79;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v22->_vptr__Sp_counted_base + 3))(v22);
LABEL_36:
  if ( !v60 )
    goto LABEL_37;
LABEL_79:
  common::milog::MiLogStream::MiLogStream(
    &v62,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/redis_mgr.cpp",
    "cmdUnwatch",
    359);
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    v42 = (int (**)(...))M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_84;
  }
  v42 = M_pi->_vptr__Sp_counted_base;
  if ( *(_BYTE *)(((unsigned __int64)M_pi->_vptr__Sp_counted_base >> 3) + 0x7FFF8000) )
  {
LABEL_84:
    __asan_report_load8(v42);
    goto LABEL_85;
  }
  v43 = (unsigned __int64)*v42 + 120;
  if ( !*(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
  {
    v44 = (const char *)(*((__int64 (**)(void))*v42 + 15))();
    goto LABEL_86;
  }
LABEL_85:
  v44 = (const char *)__asan_report_load8(v43);
LABEL_86:
  v45 = "[REDIS][NETWORK][ECS]error:%s";
  common::milog::MiLogStream::operator()(&v62, "[REDIS][NETWORK][ECS]error:%s", v44);
  common::milog::MiLogStream::~MiLogStream(&v62);
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    v47 = (volatile signed __int32 *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_95;
  }
  reply_ptr._M_ptr = (std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type *)M_pi->_vptr__Sp_counted_base;
  v47 = &M_pi->_M_use_count;
  if ( *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000) )
  {
LABEL_95:
    __asan_report_load8(v47);
LABEL_96:
    v48 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(
                                                                 v47,
                                                                 "[REDIS][NETWORK][ECS]error:%s");
    goto LABEL_97;
  }
  v48 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&M_pi->_M_use_count;
  reply_ptr._M_refcount._M_pi = v48;
  if ( !v48 )
  {
LABEL_93:
    v49 = &reply_ptr;
    common::midb::RedisMgr::markConnToDestory(thisa, (common::midb::RedisConnPtr)__PAIR128__(v46, &reply_ptr));
    goto LABEL_101;
  }
  v47 = &v48->_M_use_count;
  if ( &_pthread_key_create )
  {
    v46 = *(unsigned __int8 *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v47 & 7) + 3) < (char)v46 || !(_BYTE)v46 )
    {
      _InterlockedAdd(v47, 1u);
      goto LABEL_93;
    }
    goto LABEL_96;
  }
LABEL_97:
  v50 = *(_BYTE *)(((unsigned __int64)&v48->_M_use_count >> 3) + 0x7FFF8000);
  v46 = (((_BYTE)v48 + 8) & 7u) + 3;
  if ( (char)((((_BYTE)v48 + 8) & 7) + 3) < v50 || !v50 )
  {
    ++v48->_M_use_count;
    goto LABEL_93;
  }
  __asan_report_load4(&v48->_M_use_count);
LABEL_101:
  if ( reply_ptr._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(reply_ptr._M_refcount._M_pi);
LABEL_37:
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    p_is_init = (volatile signed __int32 *)&v2->is_init_;
    __asan_report_store8(v2, v51);
    goto LABEL_104;
  }
  *(_QWORD *)&v2->is_init_ = *(_QWORD *)(v4 + 32);
  p_is_init = (volatile signed __int32 *)v2->pool_ptr_map_._M_t._M_impl.gap0;
  if ( *(_BYTE *)(((unsigned __int64)&v2->pool_ptr_map_ >> 3) + 0x7FFF8000) )
  {
LABEL_104:
    __asan_report_store8(p_is_init, v52);
    goto LABEL_105;
  }
  *(_QWORD *)v2->pool_ptr_map_._M_t._M_impl.gap0 = 0LL;
  v27 = *(_QWORD *)(v4 + 40);
  *(_QWORD *)(v4 + 40) = 0LL;
  *(_QWORD *)v2->pool_ptr_map_._M_t._M_impl.gap0 = v27;
  *(_QWORD *)(v4 + 32) = 0LL;
  v5 = *(volatile signed __int32 **)(v4 + 40);
  if ( !v5 )
    goto LABEL_18;
  p_is_init = v5 + 2;
  if ( !&_pthread_key_create )
    goto LABEL_106;
  v28 = *(_BYTE *)(((unsigned __int64)p_is_init >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_is_init & 7) + 3) < v28 || !v28 )
  {
    v29 = _InterlockedExchangeAdd(p_is_init, 0xFFFFFFFF);
    goto LABEL_44;
  }
LABEL_105:
  __asan_report_store4(p_is_init, v53);
LABEL_106:
  v54 = *(_BYTE *)(((unsigned __int64)(v5 + 2) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v5 + 8) & 7) + 3) >= v54 && v54 )
  {
    __asan_report_load4(v5 + 2);
LABEL_110:
    v30 = v5;
    __asan_report_load8(v5);
    goto LABEL_111;
  }
  v29 = *((_DWORD *)v5 + 2);
  *((_DWORD *)v5 + 2) = v29 - 1;
LABEL_44:
  if ( v29 != 1 )
    goto LABEL_18;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    goto LABEL_110;
  v30 = (volatile signed __int32 *)(*(_QWORD *)v5 + 16LL);
  if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
  {
LABEL_111:
    __asan_report_load8(v30);
    goto LABEL_112;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
  v30 = v5 + 3;
  if ( !&_pthread_key_create )
    goto LABEL_113;
  v31 = *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v30 & 7) + 3) < v31 || !v31 )
  {
    v32 = _InterlockedExchangeAdd(v30, 0xFFFFFFFF);
    goto LABEL_51;
  }
LABEL_112:
  __asan_report_store4(v30, v55);
LABEL_113:
  v56 = *(_BYTE *)(((unsigned __int64)(v5 + 3) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v5 + 12) & 7) + 3) >= v56 && v56 )
  {
    __asan_report_load4(v5 + 3);
LABEL_117:
    v33 = (unsigned __int64)v5;
    __asan_report_load8(v5);
LABEL_118:
    v57 = (struct _Unwind_Exception *)__asan_report_load8(v33);
    if ( reply_ptr._M_refcount._M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(reply_ptr._M_refcount._M_pi);
    v58 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v5 - 3);
    if ( v58 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v58);
    __asan_handle_no_return(v58);
    _Unwind_Resume(v57);
  }
  v32 = *((_DWORD *)v5 + 3);
  *((_DWORD *)v5 + 3) = v32 - 1;
LABEL_51:
  if ( v32 != 1 )
    goto LABEL_18;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    goto LABEL_117;
  v33 = *(_QWORD *)v5 + 24LL;
  if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
    goto LABEL_118;
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 24LL))(v5);
LABEL_18:
  if ( v63 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v2;
};

// Line 366: range 000000000CA7B712-000000000CA7B8D4
// local variable allocation has failed, the output may be wrong!
int32_t common::midb::RedisMgr::appendCommand(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        const char *format,
        ...)
{
  va_list va; // kr00_24
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r12
  unsigned __int64 v5; // rbx
  _DWORD *v6; // rbp
  unsigned __int64 v7; // rsi
  _QWORD *v8; // rsi
  __int64 *v9; // rsi
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  int32_t result; // eax
  __int64 v13; // rax
  __int64 v14; // rsi
  _BYTE v15[96]; // [rsp+0h] [rbp-138h] BYREF
  char v16; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+78h] [rbp-C0h]
  char v18; // [rsp+140h] [rbp+8h] BYREF

  va_start(va, conn_ptr);
  v17 = va_arg(va, _QWORD);
  va_end(va);
  M_pi = conn_ptr._M_refcount._M_pi;
  v5 = (unsigned __int64)va;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_1(96LL);
    if ( v13 )
      v5 = v13;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 6 ap:371";
  *(_QWORD *)(v5 + 16) = common::midb::RedisMgr::appendCommand;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
    v10 = v14;
    __asan_report_load8(v14);
    goto LABEL_12;
  }
  if ( *v8 )
  {
    *(_DWORD *)(v5 + 32) = 24;
    *(_DWORD *)(v5 + 36) = 48;
    *(_QWORD *)(v5 + 40) = &v18;
    *(_QWORD *)(v5 + 48) = &v16;
    v10 = *v9;
    if ( !*(_BYTE *)(((unsigned __int64)*v9 >> 3) + 0x7FFF8000) )
    {
      v11 = *(_QWORD *)v10 + 56LL;
      if ( !*(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      {
        result = (*(__int64 (__fastcall **)(__int64, std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *, unsigned __int64))(*(_QWORD *)v10 + 56LL))(
                   v10,
                   M_pi,
                   v5 + 32);
        goto LABEL_7;
      }
      goto LABEL_13;
    }
LABEL_12:
    __asan_report_load8(v10);
LABEL_13:
    __asan_report_load8(v11);
  }
  result = -1;
LABEL_7:
  if ( (_BYTE *)va == (_BYTE *)v5 )
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
  return result;
};

// Line 381: range 000000000CA7B8D6-000000000CA7B8F6
int32_t __fastcall common::midb::RedisMgr::freeReply(common::midb::RedisMgr *const this, redisReply_0 *reply_ptr)
{
  if ( !reply_ptr )
    return -1;
  freeReplyObject(reply_ptr);
  return 0;
};

// Line 391: range 000000000CAA0288-000000000CAA0456
int32_t __fastcall common::midb::RedisMgr::cmdGet(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        std::string *value)
{
  std::string *v6; // r8
  int32_t v7; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v8; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v10; // dl
  signed __int32 M_use_count; // eax
  char v13; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v15; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v17; // rdi
  char v18; // dl
  struct _Unwind_Exception *v19; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v7 = common::midb::RedisMgr::cmdGet(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v21),
         value,
         v6);
  v8 = v22;
  if ( v22 )
  {
    p_M_use_count = &v22->_M_use_count;
    if ( &_pthread_key_create )
    {
      v10 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v10 || !v10 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v21);
    }
    v13 = *(_BYTE *)(((unsigned __int64)&v8->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v8 + 8) & 7) + 3) >= v13 && v13 )
    {
      __asan_report_load4(&v8->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v8->_M_use_count;
    v8->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v7;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v8;
      __asan_report_load8(v8);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v8->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 2))(v8);
        p_M_weak_count = &v8->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v15 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v15 || !v15 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v21);
LABEL_26:
        v18 = *(_BYTE *)(((unsigned __int64)&v8->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v8 + 12) & 7) + 3) >= v18 && v18 )
        {
          __asan_report_load4(&v8->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v8->_M_weak_count;
        v8->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v7;
        if ( !*(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          v17 = (unsigned __int64)(v8->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 3))(v8);
            return v7;
          }
LABEL_31:
          v19 = (struct _Unwind_Exception *)__asan_report_load8(v17);
          v20 = v22;
          if ( v22 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v22);
          __asan_handle_no_return(v20);
          _Unwind_Resume(v19);
        }
LABEL_30:
        v17 = (unsigned __int64)v8;
        __asan_report_load8(v8);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v7;
};

// Line 429: range 000000000CAA045C-000000000CAA062A
int32_t __fastcall common::midb::RedisMgr::cmdMget(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::vector<std::string> *key_vec,
        std::vector<std::string> *value_vec)
{
  std::vector<std::string> *v6; // r8
  int32_t v7; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v8; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v10; // dl
  signed __int32 M_use_count; // eax
  char v13; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v15; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v17; // rdi
  char v18; // dl
  struct _Unwind_Exception *v19; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v7 = common::midb::RedisMgr::cmdMget(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key_vec, &v21),
         value_vec,
         v6);
  v8 = v22;
  if ( v22 )
  {
    p_M_use_count = &v22->_M_use_count;
    if ( &_pthread_key_create )
    {
      v10 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v10 || !v10 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v21);
    }
    v13 = *(_BYTE *)(((unsigned __int64)&v8->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v8 + 8) & 7) + 3) >= v13 && v13 )
    {
      __asan_report_load4(&v8->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v8->_M_use_count;
    v8->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v7;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v8;
      __asan_report_load8(v8);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v8->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 2))(v8);
        p_M_weak_count = &v8->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v15 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v15 || !v15 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v21);
LABEL_26:
        v18 = *(_BYTE *)(((unsigned __int64)&v8->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v8 + 12) & 7) + 3) >= v18 && v18 )
        {
          __asan_report_load4(&v8->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v8->_M_weak_count;
        v8->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v7;
        if ( !*(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          v17 = (unsigned __int64)(v8->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 3))(v8);
            return v7;
          }
LABEL_31:
          v19 = (struct _Unwind_Exception *)__asan_report_load8(v17);
          v20 = v22;
          if ( v22 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v22);
          __asan_handle_no_return(v20);
          _Unwind_Resume(v19);
        }
LABEL_30:
        v17 = (unsigned __int64)v8;
        __asan_report_load8(v8);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v7;
};

// Line 435: range 000000000CA97112-000000000CA97898
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::midb::RedisMgr::cmdMget(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        std::vector<std::string> *key_vec,
        std::vector<std::string> *value_vec)
{
  std::_Vector_base<std::string>::pointer M_start; // rbx
  std::string *i; // r13
  std::string *M_pi; // rbp
  unsigned __int64 v7; // r15
  const char *v8; // rsi
  std::forward_iterator_tag v9; // cl
  __int64 v10; // rax
  std::string *p_M_string_length; // rdi
  __int64 v12; // rbx
  std::string::size_type M_string_length; // r14
  std::string::pointer M_p; // rdi
  unsigned int v15; // ebx
  char *v16; // rdi
  std::string *v18; // rdi
  unsigned __int64 v19; // rbx
  const char *v20; // rcx
  volatile signed __int32 *p_M_use_count; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // rax
  char v23; // dl
  common::midb::RedisMgr *v24; // rsi
  unsigned __int64 v25; // rdi
  char v26; // al
  std::vector<std::string> *p_M_finish; // rdi
  __int64 v28; // rax
  std::_Vector_base<std::string>::pointer *v29; // rdi
  std::string *v30; // rdx
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  const char *v36; // rsi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v37; // rdi
  volatile signed __int32 *conn_ptra; // [rsp+10h] [rbp-128h]
  _DWORD *conn_ptr_8; // [rsp+18h] [rbp-120h]
  __int64 v42; // [rsp+30h] [rbp-108h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v43; // [rsp+38h] [rbp-100h]
  std::string s; // [rsp+40h] [rbp-F8h] BYREF
  std::string v45; // [rsp+60h] [rbp-D8h] BYREF
  char v46[184]; // [rsp+80h] [rbp-B8h] BYREF

  conn_ptra = (volatile signed __int32 *)conn_ptr._M_ptr;
  M_pi = (std::string *)conn_ptr._M_refcount._M_pi;
  v7 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_1(128LL);
    if ( v10 )
      v7 = v10;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 32 16 13 reply_ptr:456 64 32 7 cmd:442";
  *(_QWORD *)(v7 + 16) = common::midb::RedisMgr::cmdMget;
  conn_ptr_8 = (_DWORD *)(v7 >> 3);
  conn_ptr_8[536862720] = -235802127;
  conn_ptr_8[536862721] = -219021312;
  conn_ptr_8[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&M_pi->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&M_pi->_M_string_length);
    goto LABEL_9;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    p_M_string_length = M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_10;
  }
  if ( (std::string::pointer)M_pi->_M_string_length == M_pi->_M_dataplus._M_p )
  {
    v15 = 0;
    goto LABEL_22;
  }
  *(_QWORD *)(v7 + 64) = v7 + 80;
  v8 = &byte_1A0D13A4[-4];
  std::string::_M_construct<char const*>(
    (std::string *const)(v7 + 64),
    &byte_1A0D13A4[-4],
    byte_1A0D13A4,
    (std::forward_iterator_tag)(v7 + 0x80));
  for ( i = 0LL; ; i = (std::string *)(unsigned int)((_DWORD)i + 1) )
  {
    M_start = (std::_Vector_base<std::string>::pointer)(unsigned int)i;
    p_M_string_length = (std::string *)&M_pi->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&M_pi->_M_string_length >> 3) + 0x7FFF8000) )
    {
LABEL_10:
      __asan_report_load8(p_M_string_length);
LABEL_11:
      __asan_report_load8(p_M_string_length);
      goto LABEL_12;
    }
    p_M_string_length = M_pi;
    if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
      goto LABEL_11;
    if ( (unsigned int)i >= (unsigned __int64)((__int64)(M_pi->_M_string_length
                                                       - (unsigned __int64)M_pi->_M_dataplus._M_p) >> 5) )
      break;
    s._M_dataplus._M_p = s._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&s, &byte_1A0CF744[-4], byte_1A0CF744, v9);
LABEL_12:
    v12 = 32LL * (_QWORD)M_start;
    common::tools::StringUtils::trim(&v45, (const std::string *)&M_pi->_M_dataplus._M_p[v12], &s, 1);
    M_string_length = v45._M_string_length;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v45._M_dataplus._M_p != &v45._anon_0 )
      operator delete(v45._M_dataplus._M_p);
    M_p = s._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s._M_dataplus._M_p != &s._anon_0 )
      operator delete(s._M_dataplus._M_p);
    if ( !M_string_length )
    {
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&v45,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_mgr.cpp",
        "cmdMget",
        448);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v45, "find empty key in key_vec.");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v45);
      v15 = -1;
      goto LABEL_20;
    }
    if ( *(_QWORD *)(v7 + 72) == 0x3FFFFFFFFFFFFFFFLL )
    {
      __asan_handle_no_return(M_p);
      std::__throw_length_error("basic_string::append");
    }
    v8 = " ";
    std::string::_M_append(v7 + 64, " ");
    v18 = M_pi;
    if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(M_pi);
LABEL_31:
      __asan_report_load8(v18);
      goto LABEL_32;
    }
    v19 = (unsigned __int64)&M_pi->_M_dataplus._M_p[v12];
    v18 = (std::string *)(v19 + 8);
    if ( *(_BYTE *)(((v19 + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_31;
    v18 = (std::string *)v19;
    if ( !*(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
    {
      v8 = *(const char **)v19;
      std::string::_M_append(v7 + 64, *(_QWORD *)v19);
      continue;
    }
LABEL_32:
    __asan_report_load8(v18);
  }
  v20 = *(const char **)(v7 + 64);
  if ( *(_BYTE *)(((unsigned __int64)conn_ptra >> 3) + 0x7FFF8000) )
  {
    p_M_use_count = conn_ptra;
    __asan_report_load8(conn_ptra);
    goto LABEL_47;
  }
  v8 = (const char *)conn_ptra;
  v42 = *(_QWORD *)conn_ptra;
  p_M_use_count = conn_ptra + 2;
  if ( *(_BYTE *)(((unsigned __int64)(conn_ptra + 2) >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_load8(p_M_use_count);
    goto LABEL_48;
  }
  v22 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)conn_ptra + 1);
  v43 = v22;
  if ( !v22 )
    goto LABEL_45;
  p_M_use_count = &v22->_M_use_count;
  if ( &_pthread_key_create )
  {
    v23 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v23 || !v23 )
    {
      _InterlockedAdd(p_M_use_count, 1u);
      goto LABEL_45;
    }
LABEL_48:
    v22 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count, v8);
  }
  v24 = (common::midb::RedisMgr *)*(unsigned __int8 *)(((unsigned __int64)&v22->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v22 + 8) & 7) + 3) >= (char)v24 && (_BYTE)v24 )
  {
    __asan_report_load4(&v22->_M_use_count);
  }
  else
  {
    ++v22->_M_use_count;
LABEL_45:
    v24 = this;
    common::midb::RedisMgr::command(
      (common::midb::RedisMgr *const)(v7 + 32),
      (common::midb::RedisConnPtr)__PAIR128__(&v42, (unsigned __int64)this),
      v20);
  }
  if ( v43 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v43);
  v25 = *(_QWORD *)(v7 + 32);
  if ( v25 )
  {
    v26 = *(_BYTE *)((v25 >> 3) + 0x7FFF8000);
    if ( v26 && v26 <= 3 )
    {
      __asan_report_load4(v25);
    }
    else if ( *(_DWORD *)v25 != 6 )
    {
      if ( *(_BYTE *)(((unsigned __int64)key_vec >> 3) + 0x7FFF8000) )
      {
        p_M_finish = key_vec;
        __asan_report_load8(key_vec);
      }
      else
      {
        i = key_vec->_M_impl._M_start;
        p_M_finish = (std::vector<std::string> *)&key_vec->_M_impl._M_finish;
        if ( !*(_BYTE *)(((unsigned __int64)&key_vec->_M_impl._M_finish >> 3) + 0x7FFF8000) )
        {
          M_pi = key_vec->_M_impl._M_finish;
          if ( i == M_pi )
            goto LABEL_79;
          M_start = key_vec->_M_impl._M_start;
          while ( 2 )
          {
            if ( M_pi == M_start )
            {
              v29 = &key_vec->_M_impl._M_finish;
              if ( *(_BYTE *)(((unsigned __int64)&key_vec->_M_impl._M_finish >> 3) + 0x7FFF8000) )
              {
                __asan_report_store8(v29, v24);
                goto LABEL_81;
              }
              key_vec->_M_impl._M_finish = i;
LABEL_79:
              LODWORD(M_start) = 0;
              while ( 2 )
              {
                v31 = *(_QWORD *)(v7 + 32);
                v29 = (std::_Vector_base<std::string>::pointer *)(v31 + 48);
                if ( *(_BYTE *)(((unsigned __int64)(v31 + 48) >> 3) + 0x7FFF8000) )
                {
LABEL_81:
                  __asan_report_load8(v29);
                }
                else
                {
                  if ( (unsigned __int64)(unsigned int)M_start >= *(_QWORD *)(v31 + 48) )
                  {
                    v15 = 0;
                    goto LABEL_101;
                  }
                  v29 = (std::_Vector_base<std::string>::pointer *)(v31 + 56);
                  if ( !*(_BYTE *)(((unsigned __int64)(v31 + 56) >> 3) + 0x7FFF8000) )
                  {
                    v32 = *(_QWORD *)(v31 + 56) + 8LL * (unsigned int)M_start;
                    v29 = (std::_Vector_base<std::string>::pointer *)v32;
                    if ( !*(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
                    {
                      v33 = *(_QWORD *)v32;
                      if ( !v33 )
                        goto LABEL_88;
                      v29 = (std::_Vector_base<std::string>::pointer *)(v33 + 24);
                      if ( !*(_BYTE *)(((unsigned __int64)(v33 + 24) >> 3) + 0x7FFF8000) )
                      {
                        v34 = *(_QWORD *)(v33 + 24);
                        if ( !v34 )
                          goto LABEL_88;
                        v29 = (std::_Vector_base<std::string>::pointer *)(v33 + 32);
                        v35 = (unsigned __int64)(v33 + 32) >> 3;
                        if ( !*(_BYTE *)(v35 + 0x7FFF8000) )
                        {
                          v36 = *(const char **)(v33 + 32);
                          if ( v36 )
                          {
                            v45._M_dataplus._M_p = v45._anon_0._M_local_buf;
                            std::string::_M_construct<char const*>(&v45, v36, &v36[v34], (std::forward_iterator_tag)v35);
                            goto LABEL_86;
                          }
                          goto LABEL_88;
                        }
LABEL_85:
                        __asan_report_load8(v29);
LABEL_86:
                        std::vector<std::string>::emplace_back<std::string>(key_vec, &v45, v30);
                        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v45._M_dataplus._M_p != &v45._anon_0 )
                          operator delete(v45._M_dataplus._M_p);
LABEL_88:
                        LODWORD(M_start) = (_DWORD)M_start + 1;
                        continue;
                      }
LABEL_84:
                      __asan_report_load8(v29);
                      goto LABEL_85;
                    }
LABEL_83:
                    __asan_report_load8(v29);
                    goto LABEL_84;
                  }
                }
                break;
              }
              __asan_report_load8(v29);
              goto LABEL_83;
            }
            p_M_finish = (std::vector<std::string> *)M_start;
            if ( *(_BYTE *)(((unsigned __int64)M_start >> 3) + 0x7FFF8000) )
            {
LABEL_70:
              __asan_report_load8(p_M_finish);
            }
            else
            {
              p_M_finish = (std::vector<std::string> *)M_start->_M_dataplus._M_p;
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->_M_dataplus._M_p == &M_start->_anon_0 )
                goto LABEL_72;
            }
            operator delete(p_M_finish);
LABEL_72:
            ++M_start;
            continue;
          }
        }
      }
      __asan_report_load8(p_M_finish);
      goto LABEL_70;
    }
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdMget",
      463);
    v28 = *(_QWORD *)(v7 + 32);
    if ( *(_BYTE *)(((unsigned __int64)(v28 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v28 + 32);
    else
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&v45,
        "exec [%s] faild, %s",
        *(const char **)(v7 + 64),
        *(const char **)(v28 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v45);
    v15 = -1;
    goto LABEL_101;
  }
  v15 = -1;
LABEL_101:
  v37 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v7 + 40);
  if ( v37 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v37);
LABEL_20:
  v16 = *(char **)(v7 + 64);
  if ( v16 != (char *)(v7 + 80) )
    operator delete(v16);
LABEL_22:
  if ( v46 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v15;
};

// Line 489: range 000000000CAA0630-000000000CAA07F4
int32_t __fastcall common::midb::RedisMgr::cmdMget(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        std::map<std::string,std::string> *key_value_map)
{
  std::map<std::string,std::string> *v4; // rcx
  int32_t v5; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v6; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v8; // dl
  signed __int32 M_use_count; // eax
  char v11; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v13; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v15; // rdi
  char v16; // dl
  struct _Unwind_Exception *v17; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v18; // rdi
  __int64 v19; // [rsp+0h] [rbp-28h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // [rsp+8h] [rbp-20h]

  common::midb::RedisMgr::grabConn(this, index);
  v5 = common::midb::RedisMgr::cmdMget(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key_value_map, &v19),
         v4);
  v6 = v20;
  if ( v20 )
  {
    p_M_use_count = &v20->_M_use_count;
    if ( &_pthread_key_create )
    {
      v8 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v8 || !v8 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v19);
    }
    v11 = *(_BYTE *)(((unsigned __int64)&v6->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v6 + 8) & 7) + 3) >= v11 && v11 )
    {
      __asan_report_load4(&v6->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v6->_M_use_count;
    v6->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v5;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v6;
      __asan_report_load8(v6);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v6->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v6->_vptr__Sp_counted_base + 2))(v6);
        p_M_weak_count = &v6->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v13 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v13 || !v13 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v19);
LABEL_26:
        v16 = *(_BYTE *)(((unsigned __int64)&v6->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v6 + 12) & 7) + 3) >= v16 && v16 )
        {
          __asan_report_load4(&v6->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v6->_M_weak_count;
        v6->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v5;
        if ( !*(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          v15 = (unsigned __int64)(v6->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v6->_vptr__Sp_counted_base + 3))(v6);
            return v5;
          }
LABEL_31:
          v17 = (struct _Unwind_Exception *)__asan_report_load8(v15);
          v18 = v20;
          if ( v20 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
          __asan_handle_no_return(v18);
          _Unwind_Resume(v17);
        }
LABEL_30:
        v15 = (unsigned __int64)v6;
        __asan_report_load8(v6);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v5;
};

// Line 495: range 000000000CA9932E-000000000CA99B72
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::midb::RedisMgr::cmdMget(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        std::map<std::string,std::string> *key_value_map)
{
  __int64 *v3; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r12
  unsigned __int64 v5; // r14
  _DWORD *v6; // r15
  unsigned int v7; // ebx
  __int64 v9; // rax
  const char *v10; // rsi
  std::forward_iterator_tag v11; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *i; // rax
  std::string::size_type M_string_length; // r13
  std::string::pointer M_p; // rdi
  char *v15; // rdi
  __int64 *v16; // rdi
  const char *v17; // rcx
  volatile signed __int32 *p_M_use_count; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v19; // rax
  char v20; // dl
  common::midb::RedisMgr *v21; // rsi
  unsigned __int64 v22; // rdi
  char v23; // al
  __int64 v24; // rax
  char *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  _Atomic_word *v28; // rdi
  __int64 *v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rcx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v40; // rdi
  volatile signed __int32 *M_ptr; // [rsp+10h] [rbp-118h]
  __int64 conn_ptra; // [rsp+20h] [rbp-108h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v44; // [rsp+28h] [rbp-100h]
  std::string s; // [rsp+30h] [rbp-F8h] BYREF
  std::string v46; // [rsp+50h] [rbp-D8h] BYREF
  char v47[184]; // [rsp+70h] [rbp-B8h] BYREF

  M_ptr = (volatile signed __int32 *)conn_ptr._M_ptr;
  M_pi = conn_ptr._M_refcount._M_pi;
  v5 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v5 = v9;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 16 13 reply_ptr:516 64 32 7 cmd:502";
  *(_QWORD *)(v5 + 16) = common::midb::RedisMgr::cmdMget;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&M_pi[2]._M_use_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&M_pi[2]._M_use_count);
  }
  else if ( !*(_QWORD *)&M_pi[2]._M_use_count )
  {
    v7 = 0;
    goto LABEL_5;
  }
  *(_QWORD *)(v5 + 64) = v5 + 80;
  v10 = &byte_1A0D13A4[-4];
  std::string::_M_construct<char const*>(
    (std::string *const)(v5 + 64),
    &byte_1A0D13A4[-4],
    byte_1A0D13A4,
    (std::forward_iterator_tag)(v5 + 0x80));
  if ( *(_BYTE *)(((unsigned __int64)&M_pi[1]._M_use_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&M_pi[1]._M_use_count);
    goto LABEL_14;
  }
  for ( i = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&M_pi[1]._M_use_count;
        ;
        i = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)std::_Rb_tree_increment((std::_Rb_tree_node_base *)v3) )
  {
    v3 = (__int64 *)i;
    if ( &M_pi->_M_use_count == (_Atomic_word *)i )
      break;
    s._M_dataplus._M_p = s._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&s, &byte_1A0CF744[-4], byte_1A0CF744, v11);
LABEL_14:
    common::tools::StringUtils::trim(&v46, (const std::string *)v3 + 1, &s, 1);
    M_string_length = v46._M_string_length;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v46._M_dataplus._M_p != &v46._anon_0 )
      operator delete(v46._M_dataplus._M_p);
    M_p = s._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s._M_dataplus._M_p != &s._anon_0 )
      operator delete(s._M_dataplus._M_p);
    if ( !M_string_length )
    {
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&v46,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_mgr.cpp",
        "cmdMget",
        508);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&v46,
        "find empty key in key_value_map.");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v46);
      v7 = -1;
      goto LABEL_22;
    }
    if ( *(_QWORD *)(v5 + 72) == 0x3FFFFFFFFFFFFFFFLL )
    {
      __asan_handle_no_return(M_p);
      std::__throw_length_error("basic_string::append");
    }
    v10 = " ";
    std::string::_M_append(v5 + 64, " ");
    v16 = v3 + 5;
    if ( *(_BYTE *)(((unsigned __int64)(v3 + 5) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v16);
    }
    else
    {
      v16 = v3 + 4;
      if ( !*(_BYTE *)(((unsigned __int64)(v3 + 4) >> 3) + 0x7FFF8000) )
      {
        v10 = (const char *)v3[4];
        std::string::_M_append(v5 + 64, v10);
        continue;
      }
    }
    __asan_report_load8(v16);
  }
  v17 = *(const char **)(v5 + 64);
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
    p_M_use_count = M_ptr;
    __asan_report_load8(M_ptr);
    goto LABEL_42;
  }
  v3 = (__int64 *)M_ptr;
  conn_ptra = *(_QWORD *)M_ptr;
  p_M_use_count = M_ptr + 2;
  if ( *(_BYTE *)(((unsigned __int64)(M_ptr + 2) >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_load8(p_M_use_count);
    goto LABEL_43;
  }
  v19 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)M_ptr + 1);
  v44 = v19;
  if ( !v19 )
    goto LABEL_40;
  p_M_use_count = &v19->_M_use_count;
  if ( &_pthread_key_create )
  {
    v20 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v20 || !v20 )
    {
      _InterlockedAdd(p_M_use_count, 1u);
      goto LABEL_40;
    }
LABEL_43:
    v19 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count, v10);
  }
  v21 = (common::midb::RedisMgr *)*(unsigned __int8 *)(((unsigned __int64)&v19->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v19 + 8) & 7) + 3) >= (char)v21 && (_BYTE)v21 )
  {
    __asan_report_load4(&v19->_M_use_count);
  }
  else
  {
    ++v19->_M_use_count;
LABEL_40:
    v21 = this;
    common::midb::RedisMgr::command(
      (common::midb::RedisMgr *const)(v5 + 32),
      (common::midb::RedisConnPtr)__PAIR128__(&conn_ptra, (unsigned __int64)this),
      v17);
  }
  if ( v44 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v44);
  v22 = *(_QWORD *)(v5 + 32);
  if ( !v22 )
  {
LABEL_106:
    v7 = -1;
    goto LABEL_108;
  }
  v23 = *(_BYTE *)((v22 >> 3) + 0x7FFF8000);
  if ( v23 && v23 <= 3 )
  {
    __asan_report_load4(v22);
LABEL_60:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v46,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdMget",
      523);
    v26 = *(_QWORD *)(v5 + 32);
    if ( *(_BYTE *)(((unsigned __int64)(v26 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v26 + 32);
    else
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&v46,
        "exec [%s] faild, %s",
        *(const char **)(v5 + 64),
        *(const char **)(v26 + 32));
    goto LABEL_63;
  }
  if ( *(_DWORD *)v22 == 6 )
    goto LABEL_60;
  if ( *(_BYTE *)(((unsigned __int64)&M_pi[2]._M_use_count >> 3) + 0x7FFF8000) )
  {
    v24 = __asan_report_load8(&M_pi[2]._M_use_count);
    goto LABEL_65;
  }
  v24 = v22 + 48;
  if ( *(_BYTE *)(((v22 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    __asan_report_load8(v24);
    goto LABEL_66;
  }
  if ( *(_QWORD *)(v22 + 48) == *(_QWORD *)&M_pi[2]._M_use_count )
  {
    v25 = (char *)&M_pi[1]._M_use_count;
    if ( *(_BYTE *)(((unsigned __int64)&M_pi[1]._M_use_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v25);
      goto LABEL_72;
    }
    v3 = *(__int64 **)&M_pi[1]._M_use_count;
    LODWORD(M_pi) = 0;
    while ( 2 )
    {
      v35 = *(_QWORD *)(v5 + 32);
      v25 = (char *)(v35 + 48);
      if ( *(_BYTE *)(((unsigned __int64)(v35 + 48) >> 3) + 0x7FFF8000) )
      {
LABEL_72:
        __asan_report_load8(v25);
      }
      else
      {
        if ( (unsigned __int64)(unsigned int)M_pi >= *(_QWORD *)(v35 + 48) )
        {
          v7 = 0;
          goto LABEL_108;
        }
        v25 = (char *)(v35 + 56);
        if ( !*(_BYTE *)(((unsigned __int64)(v35 + 56) >> 3) + 0x7FFF8000) )
        {
          v36 = *(_QWORD *)(v35 + 56) + 8LL * (unsigned int)M_pi;
          v25 = (char *)v36;
          if ( !*(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
          {
            v37 = *(_QWORD *)v36;
            if ( v37 )
            {
              v29 = (__int64 *)(v37 + 24);
              if ( !*(_BYTE *)(((unsigned __int64)(v37 + 24) >> 3) + 0x7FFF8000) )
              {
                v38 = *(_QWORD *)(v37 + 24);
                if ( !v38 )
                  goto LABEL_85;
                v29 = (__int64 *)(v37 + 32);
                if ( !*(_BYTE *)(((unsigned __int64)(v37 + 32) >> 3) + 0x7FFF8000) )
                {
                  v39 = *(_QWORD *)(v37 + 32);
                  if ( v39 )
                  {
                    v32 = v3 + 9;
                    if ( *(_BYTE *)(((unsigned __int64)(v3 + 9) >> 3) + 0x7FFF8000) )
                      goto LABEL_105;
                    v21 = 0LL;
                    std::string::_M_replace(v3 + 8, 0LL, v3[9], v39, v38);
                    goto LABEL_90;
                  }
LABEL_85:
                  v32 = v3 + 9;
                  if ( *(_BYTE *)(((unsigned __int64)(v3 + 9) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store8(v32, v21);
LABEL_103:
                    __asan_report_load8(v32);
LABEL_104:
                    __asan_report_store1(v32, v21, v33, v34);
LABEL_105:
                    __asan_report_load8(v32);
                    goto LABEL_106;
                  }
                  v3[9] = 0LL;
                  v32 = v3 + 8;
                  if ( *(_BYTE *)(((unsigned __int64)(v3 + 8) >> 3) + 0x7FFF8000) )
                    goto LABEL_103;
                  v32 = (__int64 *)v3[8];
                  v33 = *(unsigned __int8 *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000);
                  v34 = (unsigned __int8)v32 & 7;
                  if ( (char)v33 <= ((unsigned __int8)v32 & 7) && (_BYTE)v33 )
                    goto LABEL_104;
                  *(_BYTE *)v3[8] = 0;
                  goto LABEL_90;
                }
LABEL_84:
                __asan_report_load8(v29);
                goto LABEL_85;
              }
LABEL_83:
              __asan_report_load8(v29);
              goto LABEL_84;
            }
LABEL_75:
            v29 = v3 + 9;
            if ( *(_BYTE *)(((unsigned __int64)(v3 + 9) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store8(v29, v21);
            }
            else
            {
              v3[9] = 0LL;
              v29 = v3 + 8;
              if ( !*(_BYTE *)(((unsigned __int64)(v3 + 8) >> 3) + 0x7FFF8000) )
              {
                v29 = (__int64 *)v3[8];
                v30 = *(unsigned __int8 *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000);
                v31 = (unsigned __int8)v29 & 7;
                if ( (char)v30 > ((unsigned __int8)v29 & 7) || !(_BYTE)v30 )
                {
                  *(_BYTE *)v3[8] = 0;
LABEL_90:
                  LODWORD(M_pi) = (_DWORD)M_pi + 1;
                  v3 = (__int64 *)std::_Rb_tree_increment((std::_Rb_tree_node_base *)v3);
                  continue;
                }
                goto LABEL_82;
              }
            }
            __asan_report_load8(v29);
LABEL_82:
            __asan_report_store1(v29, v21, v30, v31);
            goto LABEL_83;
          }
LABEL_74:
          __asan_report_load8(v25);
          goto LABEL_75;
        }
      }
      break;
    }
    __asan_report_load8(v25);
    goto LABEL_74;
  }
LABEL_66:
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)&v46,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/redis_mgr.cpp",
    "cmdMget",
    530);
  v27 = *(_QWORD *)(v5 + 32);
  v28 = (_Atomic_word *)(v27 + 48);
  if ( *(_BYTE *)(((unsigned __int64)(v27 + 48) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v28);
  }
  else
  {
    v28 = &M_pi[2]._M_use_count;
    if ( !*(_BYTE *)(((unsigned __int64)&M_pi[2]._M_use_count >> 3) + 0x7FFF8000) )
    {
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&v46,
        "mget %lu key, but only recv %lu",
        *(_QWORD *)&M_pi[2]._M_use_count,
        *(_QWORD *)(v27 + 48));
      goto LABEL_63;
    }
  }
  __asan_report_load8(v28);
LABEL_63:
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v46);
  v7 = -1;
LABEL_108:
  v40 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v5 + 40);
  if ( v40 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v40);
LABEL_22:
  v15 = *(char **)(v5 + 64);
  if ( v15 != (char *)(v5 + 80) )
    operator delete(v15);
LABEL_5:
  if ( v47 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v7;
};

// Line 558: range 000000000CAA07FA-000000000CAA09C8
int32_t __fastcall common::midb::RedisMgr::cmdSet(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        const std::string *value)
{
  const std::string *v6; // r8
  int32_t v7; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v8; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v10; // dl
  signed __int32 M_use_count; // eax
  char v13; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v15; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v17; // rdi
  char v18; // dl
  struct _Unwind_Exception *v19; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v7 = common::midb::RedisMgr::cmdSet(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v21),
         value,
         v6);
  v8 = v22;
  if ( v22 )
  {
    p_M_use_count = &v22->_M_use_count;
    if ( &_pthread_key_create )
    {
      v10 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v10 || !v10 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v21);
    }
    v13 = *(_BYTE *)(((unsigned __int64)&v8->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v8 + 8) & 7) + 3) >= v13 && v13 )
    {
      __asan_report_load4(&v8->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v8->_M_use_count;
    v8->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v7;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v8;
      __asan_report_load8(v8);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v8->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 2))(v8);
        p_M_weak_count = &v8->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v15 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v15 || !v15 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v21);
LABEL_26:
        v18 = *(_BYTE *)(((unsigned __int64)&v8->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v8 + 12) & 7) + 3) >= v18 && v18 )
        {
          __asan_report_load4(&v8->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v8->_M_weak_count;
        v8->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v7;
        if ( !*(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          v17 = (unsigned __int64)(v8->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 3))(v8);
            return v7;
          }
LABEL_31:
          v19 = (struct _Unwind_Exception *)__asan_report_load8(v17);
          v20 = v22;
          if ( v22 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v22);
          __asan_handle_no_return(v20);
          _Unwind_Resume(v19);
        }
LABEL_30:
        v17 = (unsigned __int64)v8;
        __asan_report_load8(v8);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v7;
};

// Line 564: range 000000000CA80BA0-000000000CA81DAF
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::midb::RedisMgr::cmdSet(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        unsigned __int64 key,
        const std::string *value)
{
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r13
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r15
  std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2>::element_type *v8; // rsi
  __int64 v9; // rax
  std::string::size_type v10; // rcx
  std::string::pointer v11; // r9
  std::string::pointer vptr__Sp_counted_base; // r8
  volatile signed __int32 *M_ptr; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v14; // rax
  char v15; // dl
  common::midb::RedisMgr *v16; // rsi
  unsigned int v17; // r12d
  __int64 v18; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v19; // r12
  _Atomic_word *p_M_use_count; // rdi
  char v21; // dl
  signed __int32 M_use_count; // eax
  unsigned __int64 v23; // rdi
  char v24; // al
  __int64 v25; // rax
  unsigned __int64 v26; // r14
  volatile signed __int32 *v27; // rdi
  char v28; // dl
  signed __int32 v29; // eax
  char v31; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v33; // dl
  signed __int32 M_weak_count; // eax
  char v35; // dl
  __int64 v36; // rax
  char v37; // dl
  unsigned __int64 v38; // rdi
  char v39; // dl
  signed __int32 v40; // eax
  unsigned __int64 v41; // rdi
  char v42; // dl
  struct _Unwind_Exception *v43; // rbx
  std::string::pointer M_p; // rdi
  std::string *s; // [rsp+10h] [rbp-D0h]
  common::midb::RedisConnPtr conn_ptra; // [rsp+18h] [rbp-C8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v48; // [rsp+28h] [rbp-B8h]
  std::string v49; // [rsp+30h] [rbp-B0h] BYREF
  std::string v50; // [rsp+50h] [rbp-90h] BYREF
  char v51[112]; // [rsp+70h] [rbp-70h] BYREF

  conn_ptra._M_ptr = conn_ptr._M_ptr;
  M_pi = conn_ptr._M_refcount._M_pi;
  v6 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_0(64LL);
    if ( v9 )
      v6 = v9;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 13 reply_ptr:573";
  *(_QWORD *)(v6 + 16) = common::midb::RedisMgr::cmdSet;
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  v49._M_dataplus._M_p = v49._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v49, &byte_1A0CF744[-4], byte_1A0CF744, (std::forward_iterator_tag)&v49);
  v8 = (std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2>::element_type *)M_pi;
  common::tools::StringUtils::trim(&v50, (const std::string *)M_pi, &v49, 1);
  s = (std::string *)v50._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v50._M_dataplus._M_p != &v50._anon_0 )
    operator delete(v50._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v49._M_dataplus._M_p != &v49._anon_0 )
    operator delete(v49._M_dataplus._M_p);
  if ( !s )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v50,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSet",
      568);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v50, "key is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v50);
    v17 = -1;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(((key + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(key + 8);
    goto LABEL_23;
  }
  v10 = *(_QWORD *)(key + 8);
  if ( *(_BYTE *)((key >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(key);
    goto LABEL_24;
  }
  v11 = *(std::string::pointer *)key;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(M_pi);
    goto LABEL_25;
  }
  vptr__Sp_counted_base = (std::string::pointer)M_pi->_vptr__Sp_counted_base;
  if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    M_ptr = (volatile signed __int32 *)conn_ptra._M_ptr;
    __asan_report_load8(conn_ptra._M_ptr);
    goto LABEL_26;
  }
  v8 = conn_ptra._M_ptr;
  conn_ptra._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)conn_ptra._M_ptr->_vptr_RedisConnBase;
  M_ptr = (volatile signed __int32 *)&conn_ptra._M_ptr->last_use_time;
  if ( *(_BYTE *)(((unsigned __int64)&conn_ptra._M_ptr->last_use_time >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(M_ptr);
LABEL_27:
    v14 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(M_ptr, v8);
    goto LABEL_28;
  }
  v14 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&conn_ptra._M_ptr->last_use_time;
  v48 = v14;
  if ( !v14 )
  {
LABEL_20:
    v16 = this;
    common::midb::RedisMgr::command(
      (common::midb::RedisMgr *const)(v6 + 32),
      (common::midb::RedisConnPtr)__PAIR128__(
                                    (common::midb::RedisConnPtr *)&conn_ptra._M_refcount,
                                    (unsigned __int64)this),
      "SET %s %b",
      vptr__Sp_counted_base,
      v11,
      v10);
    goto LABEL_32;
  }
  M_ptr = &v14->_M_use_count;
  if ( &_pthread_key_create )
  {
    v15 = *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)M_ptr & 7) + 3) < v15 || !v15 )
    {
      _InterlockedAdd(M_ptr, 1u);
      goto LABEL_20;
    }
    goto LABEL_27;
  }
LABEL_28:
  v16 = (common::midb::RedisMgr *)*(unsigned __int8 *)(((unsigned __int64)&v14->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v14 + 8) & 7) + 3) < (char)v16 || !(_BYTE)v16 )
  {
    ++v14->_M_use_count;
    goto LABEL_20;
  }
  __asan_report_load4(&v14->_M_use_count);
LABEL_32:
  v18 = (__int64)v48;
  v19 = v48;
  if ( !v48 )
    goto LABEL_38;
  p_M_use_count = &v48->_M_use_count;
  if ( &_pthread_key_create )
  {
    v21 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v21 || !v21 )
    {
      M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
      goto LABEL_37;
    }
    v18 = __asan_report_store4(p_M_use_count, v16);
  }
  v31 = *(_BYTE *)(((unsigned __int64)(v18 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v18 + 8) & 7) + 3) >= v31 && v31 )
  {
    __asan_report_load4(v18 + 8);
    goto LABEL_57;
  }
  M_use_count = v19->_M_use_count;
  v19->_M_use_count = M_use_count - 1;
LABEL_37:
  if ( M_use_count != 1 )
    goto LABEL_38;
LABEL_57:
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)v19;
    __asan_report_load8(v19);
    goto LABEL_68;
  }
  p_M_weak_count = (volatile signed __int32 *)(v19->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_69;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v19->_vptr__Sp_counted_base + 2))(v19);
  p_M_weak_count = &v19->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_70;
  v33 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v33 || !v33 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_63;
  }
LABEL_69:
  __asan_report_store4(p_M_weak_count, v16);
LABEL_70:
  v35 = *(_BYTE *)(((unsigned __int64)&v19->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v19 + 12) & 7) + 3) >= v35 && v35 )
  {
    __asan_report_load4(&v19->_M_weak_count);
LABEL_74:
    v23 = (unsigned __int64)v19;
    __asan_report_load8(v19);
    goto LABEL_75;
  }
  M_weak_count = v19->_M_weak_count;
  v19->_M_weak_count = M_weak_count - 1;
LABEL_63:
  if ( M_weak_count != 1 )
    goto LABEL_38;
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    goto LABEL_74;
  v23 = (unsigned __int64)(v19->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_load8(v23);
    goto LABEL_76;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v19->_vptr__Sp_counted_base + 3))(v19);
LABEL_38:
  v23 = *(_QWORD *)(v6 + 32);
  if ( v23 )
  {
    v24 = *(_BYTE *)((v23 >> 3) + 0x7FFF8000);
    if ( !v24 || v24 > 3 )
    {
      if ( *(_DWORD *)v23 != 6 )
      {
        v17 = 0;
        goto LABEL_43;
      }
LABEL_77:
      v16 = (common::midb::RedisMgr *)&common::milog::MiLogDefault::default_log_obj_;
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_mgr.cpp",
        "cmdSet",
        581);
      v36 = *(_QWORD *)(v6 + 32);
      if ( *(_BYTE *)(((unsigned __int64)(v36 + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v36 + 32);
      }
      else if ( !*(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
      {
        v16 = (common::midb::RedisMgr *)"set [%s] faild, %s";
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)&v50,
          "set [%s] faild, %s",
          (const char *)M_pi->_vptr__Sp_counted_base,
          *(const char **)(v36 + 32));
LABEL_82:
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v50);
        v17 = -1;
        goto LABEL_43;
      }
      __asan_report_load8(M_pi);
      goto LABEL_82;
    }
LABEL_76:
    __asan_report_load4(v23);
    goto LABEL_77;
  }
  v17 = -1;
LABEL_43:
  v25 = *(_QWORD *)(v6 + 40);
  v26 = v25;
  if ( !v25 )
    goto LABEL_49;
  v27 = (volatile signed __int32 *)(v25 + 8);
  if ( &_pthread_key_create )
  {
    v28 = *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v27 & 7) + 3) < v28 || !v28 )
    {
      v29 = _InterlockedExchangeAdd(v27, 0xFFFFFFFF);
      goto LABEL_48;
    }
    v25 = __asan_report_store4(v27, v16);
  }
  v37 = *(_BYTE *)(((unsigned __int64)(v25 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v25 + 8) & 7) + 3) >= v37 && v37 )
  {
    __asan_report_load4(v25 + 8);
    goto LABEL_89;
  }
  v29 = *(_DWORD *)(v26 + 8);
  *(_DWORD *)(v26 + 8) = v29 - 1;
LABEL_48:
  if ( v29 != 1 )
    goto LABEL_49;
LABEL_89:
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
  {
    v38 = v26;
    __asan_report_load8(v26);
    goto LABEL_100;
  }
  v38 = *(_QWORD *)v26 + 16LL;
  if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
  {
LABEL_100:
    __asan_report_load8(v38);
    goto LABEL_101;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v26 + 16LL))(v26);
  v38 = v26 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_102;
  v39 = *(_BYTE *)((v38 >> 3) + 0x7FFF8000);
  if ( (char)((v38 & 7) + 3) < v39 || !v39 )
  {
    v40 = _InterlockedExchangeAdd((volatile signed __int32 *)v38, 0xFFFFFFFF);
    goto LABEL_95;
  }
LABEL_101:
  __asan_report_store4(v38, v16);
LABEL_102:
  v42 = *(_BYTE *)(((v26 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v26 + 12) & 7) + 3) >= v42 && v42 )
  {
    __asan_report_load4(v26 + 12);
LABEL_106:
    v41 = v26;
    __asan_report_load8(v26);
LABEL_107:
    v43 = (struct _Unwind_Exception *)__asan_report_load8(v41);
    M_p = v49._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v49._M_dataplus._M_p != &v49._anon_0 )
      operator delete(v49._M_dataplus._M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v43);
  }
  v40 = *(_DWORD *)(v26 + 12);
  *(_DWORD *)(v26 + 12) = v40 - 1;
LABEL_95:
  if ( v40 != 1 )
    goto LABEL_49;
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
    goto LABEL_106;
  v41 = *(_QWORD *)v26 + 24LL;
  if ( *(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
    goto LABEL_107;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v26 + 24LL))(v26);
LABEL_49:
  if ( v51 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v17;
};

// Line 588: range 000000000CAA09CE-000000000CAA0BA6
int32_t __fastcall common::midb::RedisMgr::cmdSetex(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        const std::string *value,
        int32_t ttl)
{
  int32_t v8; // r9d
  int32_t v9; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v12; // dl
  signed __int32 M_use_count; // eax
  char v15; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v17; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v19; // rdi
  char v20; // dl
  struct _Unwind_Exception *v21; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // rdi
  __int64 v23; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v9 = common::midb::RedisMgr::cmdSetex(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v23),
         value,
         (const std::string *)(unsigned int)ttl,
         v8);
  v10 = v24;
  if ( v24 )
  {
    p_M_use_count = &v24->_M_use_count;
    if ( &_pthread_key_create )
    {
      v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v23);
    }
    v15 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v15 && v15 )
    {
      __asan_report_load4(&v10->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v10->_M_use_count;
    v10->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v9;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v10;
      __asan_report_load8(v10);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v10->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 2))(v10);
        p_M_weak_count = &v10->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v17 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v17 || !v17 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v23);
LABEL_26:
        v20 = *(_BYTE *)(((unsigned __int64)&v10->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v10 + 12) & 7) + 3) >= v20 && v20 )
        {
          __asan_report_load4(&v10->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v10->_M_weak_count;
        v10->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v9;
        if ( !*(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          v19 = (unsigned __int64)(v10->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 3))(v10);
            return v9;
          }
LABEL_31:
          v21 = (struct _Unwind_Exception *)__asan_report_load8(v19);
          v22 = v24;
          if ( v24 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v24);
          __asan_handle_no_return(v22);
          _Unwind_Resume(v21);
        }
LABEL_30:
        v19 = (unsigned __int64)v10;
        __asan_report_load8(v10);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v9;
};

// Line 619: range 000000000CAA4392-000000000CAA4556
int32_t __fastcall common::midb::RedisMgr::cmdMset(
        common::midb::RedisMgr *const this,
        uint32_t index,
        const std::map<std::string,std::string> *key_value_map)
{
  const std::map<std::string,std::string> *v4; // rcx
  int32_t v5; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v6; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v8; // dl
  signed __int32 M_use_count; // eax
  char v11; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v13; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v15; // rdi
  char v16; // dl
  struct _Unwind_Exception *v17; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v18; // rdi
  __int64 v19; // [rsp+0h] [rbp-28h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // [rsp+8h] [rbp-20h]

  common::midb::RedisMgr::grabConn(this, index);
  v5 = common::midb::RedisMgr::cmdMset(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key_value_map, &v19),
         v4);
  v6 = v20;
  if ( v20 )
  {
    p_M_use_count = &v20->_M_use_count;
    if ( &_pthread_key_create )
    {
      v8 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v8 || !v8 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v19);
    }
    v11 = *(_BYTE *)(((unsigned __int64)&v6->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v6 + 8) & 7) + 3) >= v11 && v11 )
    {
      __asan_report_load4(&v6->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v6->_M_use_count;
    v6->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v5;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v6;
      __asan_report_load8(v6);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v6->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v6->_vptr__Sp_counted_base + 2))(v6);
        p_M_weak_count = &v6->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v13 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v13 || !v13 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v19);
LABEL_26:
        v16 = *(_BYTE *)(((unsigned __int64)&v6->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v6 + 12) & 7) + 3) >= v16 && v16 )
        {
          __asan_report_load4(&v6->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v6->_M_weak_count;
        v6->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v5;
        if ( !*(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          v15 = (unsigned __int64)(v6->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v6->_vptr__Sp_counted_base + 3))(v6);
            return v5;
          }
LABEL_31:
          v17 = (struct _Unwind_Exception *)__asan_report_load8(v15);
          v18 = v20;
          if ( v20 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
          __asan_handle_no_return(v18);
          _Unwind_Resume(v17);
        }
LABEL_30:
        v15 = (unsigned __int64)v6;
        __asan_report_load8(v6);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v5;
};

// Line 625: range 000000000CA94EAC-000000000CA955AB
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::midb::RedisMgr::cmdMset(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        const std::map<std::string,std::string> *key_value_map)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r12
  __int64 v5; // r14
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r13
  unsigned __int64 v7; // r15
  _DWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  signed __int64 v12; // r12
  void *v13; // rsp
  void *v14; // rsp
  std::string *v15; // rdi
  const char *v16; // rsi
  std::forward_iterator_tag v17; // cl
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rsi
  char *p_M_use_count; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rsi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rsi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v31; // rdx
  unsigned __int64 v32; // rdx
  __int64 v33; // rsi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v34; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v35; // rdi
  unsigned int v36; // eax
  __int64 v37; // rcx
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // rsi
  __int64 v40; // rsi
  int (**vptr_RedisConnBase)(...); // rsi
  __int64 v42; // rsi
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // rdi
  char v47; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v48; // rdi
  char *v49; // rdi
  unsigned int v50; // ebx
  __int64 v51; // rax
  volatile signed __int32 *p_last_use_time; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v54; // rax
  std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  unsigned __int64 v56; // rdx
  const char *v57; // rax
  const char *v58; // rsi
  __int64 v59; // rsi
  char v60; // cl
  __int64 v61; // rsi
  unsigned __int64 v62; // [rsp+0h] [rbp-120h] BYREF
  unsigned __int64 v63; // [rsp+8h] [rbp-118h]
  uint32_t argv_num; // [rsp+14h] [rbp-10Ch]
  common::midb::RedisMgr *thisa; // [rsp+18h] [rbp-108h] BYREF
  char *v66; // [rsp+20h] [rbp-100h]
  _DWORD *v67; // [rsp+28h] [rbp-F8h]
  char *v68; // [rsp+30h] [rbp-F0h]
  common::midb::RedisConnPtr conn_ptra; // [rsp+38h] [rbp-E8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v70; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v71; // [rsp+50h] [rbp-D0h] BYREF
  char v72[128]; // [rsp+70h] [rbp-B0h] BYREF
  char v73[48]; // [rsp+F0h] [rbp-30h] BYREF

  thisa = this;
  conn_ptra._M_ptr = conn_ptr._M_ptr;
  M_pi = conn_ptr._M_refcount._M_pi;
  v7 = (unsigned __int64)v72;
  v66 = v72;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v22 = __asan_stack_malloc_1(128LL);
    if ( v22 )
      v7 = v22;
  }
  v68 = (char *)(v7 + 128);
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 32 16 13 reply_ptr:667 64 32 7 cmd:643";
  *(_QWORD *)(v7 + 16) = common::midb::RedisMgr::cmdMset;
  v8 = (_DWORD *)(v7 >> 3);
  v67 = v8;
  v8[536862720] = -235802127;
  v8[536862721] = -219021312;
  v8[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&M_pi[2]._M_use_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&M_pi[2]._M_use_count);
LABEL_13:
    __asan_report_load8(conn_ptra._M_ptr);
LABEL_14:
    __asan_report_store8(v3, v23);
    goto LABEL_15;
  }
  v9 = *(_QWORD *)&M_pi[2]._M_use_count;
  if ( !v9 )
  {
    v50 = 0;
    goto LABEL_51;
  }
  if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr >> 3) + 0x7FFF8000) )
    goto LABEL_13;
  if ( !conn_ptra._M_ptr->_vptr_RedisConnBase )
  {
    v50 = -1;
    goto LABEL_51;
  }
  argv_num = 2 * v9 + 1;
  v10 = 8LL * argv_num;
  v11 = 32LL - ((8 * (2 * (_BYTE)v9 + 1)) & 0x1F);
  v12 = (v10 + v11 + 103) & 0xFFFFFFFFFFFFFFF0LL;
  v13 = alloca(v10 + v11 + 88);
  v63 = ((unsigned __int64)&thisa + 7) & 0xFFFFFFFFFFFFFFE0LL;
  v3 = (((unsigned __int64)&thisa + 7) & 0xFFFFFFFFFFFFFFE0LL) + 32;
  __asan_alloca_poison(v3, v10);
  v14 = alloca(v12);
  v62 = ((unsigned __int64)&thisa + 7) & 0xFFFFFFFFFFFFFFE0LL;
  v4 = v3;
  __asan_alloca_poison(v3, v10);
  v5 = (__int64)v68;
  v15 = (std::string *)(v68 - 64);
  *((_QWORD *)v68 - 8) = v68 - 48;
  v16 = &byte_1A0D1264[-4];
  std::string::_M_construct<char const*>(v15, &byte_1A0D1264[-4], byte_1A0D1264, v17);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    goto LABEL_14;
  v18 = v63;
  *(_QWORD *)(v63 + 32) = *(_QWORD *)(v5 - 64);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    p_M_use_count = (char *)v4;
    __asan_report_store8(v4, v24);
    goto LABEL_16;
  }
  v19 = v62;
  *(_QWORD *)(v62 + 32) = *((_QWORD *)v68 - 7);
  p_M_use_count = (char *)&M_pi[1]._M_use_count;
  if ( *(_BYTE *)(((unsigned __int64)&M_pi[1]._M_use_count >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    v25 = __asan_report_load8(p_M_use_count);
    goto LABEL_17;
  }
  v21 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&M_pi[1]._M_use_count;
  v5 = 1LL;
  while ( 1 )
  {
    v35 = v21;
    if ( &M_pi->_M_use_count == (_Atomic_word *)v21 )
      break;
    v25 = (unsigned __int64)&v21[2];
    if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
    {
LABEL_17:
      v26 = __asan_report_load8(v25);
LABEL_18:
      v28 = __asan_report_store8(v26, v27);
LABEL_19:
      v29 = __asan_report_load8(v28);
LABEL_20:
      __asan_report_store8(v29, v30);
LABEL_21:
      __asan_report_load8(v31);
LABEL_22:
      __asan_report_store8(v32, v33);
LABEL_23:
      v35 = v34;
      v36 = __asan_report_load8(v34);
      goto LABEL_24;
    }
    v26 = v3 + 8LL * (unsigned int)v5;
    if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
      goto LABEL_18;
    *(_QWORD *)(v3 + 8LL * (unsigned int)v5) = v35[2]._vptr__Sp_counted_base;
    v28 = (__int64)&v35[2]._M_use_count;
    if ( *(_BYTE *)(((unsigned __int64)&v35[2]._M_use_count >> 3) + 0x7FFF8000) )
      goto LABEL_19;
    v29 = v4 + 8LL * (unsigned int)v5;
    if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
      goto LABEL_20;
    *(_QWORD *)(v4 + 8LL * (unsigned int)v5) = *(_QWORD *)&v35[2]._M_use_count;
    v36 = v5 + 1;
    v31 = v35 + 4;
    if ( *(_BYTE *)(((unsigned __int64)&v35[4] >> 3) + 0x7FFF8000) )
      goto LABEL_21;
    v32 = v3 + 8LL * v36;
    v38 = v32 >> 3;
    if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
      goto LABEL_22;
    *(_QWORD *)(v3 + 8LL * v36) = v35[4]._vptr__Sp_counted_base;
    v34 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((char *)v35 + 72);
    if ( *(_BYTE *)(((unsigned __int64)&v35[4]._M_use_count >> 3) + 0x7FFF8000) )
      goto LABEL_23;
    v37 = *(_QWORD *)&v35[4]._M_use_count;
    v39 = (v4 + 8LL * v36) >> 3;
    if ( *(_BYTE *)(v39 + 0x7FFF8000) )
    {
      __asan_report_store8(v4 + 8LL * v36, v40);
      break;
    }
LABEL_24:
    *(_QWORD *)(v4 + 8LL * v36) = v37;
    v5 = (unsigned int)(v5 + 2);
    v21 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)std::_Rb_tree_increment((const std::_Rb_tree_node_base *)v35);
  }
  if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(conn_ptra._M_ptr);
    goto LABEL_40;
  }
  vptr_RedisConnBase = conn_ptra._M_ptr->_vptr_RedisConnBase;
  if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr->_vptr_RedisConnBase >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    v43 = v45;
    __asan_report_load8(v45);
    goto LABEL_41;
  }
  v43 = *(_QWORD *)v42 + 48LL;
  if ( !*(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
  {
    v5 = (__int64)v68;
    (*(void (__fastcall **)(char *, __int64, _QWORD, unsigned __int64, unsigned __int64))(*(_QWORD *)v42 + 48LL))(
      v68 - 96,
      v42,
      argv_num,
      v3,
      v4);
    goto LABEL_42;
  }
LABEL_41:
  __asan_report_load8(v43);
LABEL_42:
  v46 = *(_QWORD *)(v5 - 96);
  if ( v46 )
  {
    v47 = *(_BYTE *)((v46 >> 3) + 0x7FFF8000);
    if ( v47 && v47 <= 3 )
    {
      __asan_report_load4(v46);
    }
    else if ( *(_DWORD *)v46 != 6 )
    {
      goto LABEL_46;
    }
  }
  if ( !v46 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v71,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdMset",
      674);
    if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr >> 3) + 0x7FFF8000) )
    {
      M_ptr = conn_ptra._M_ptr;
      __asan_report_load8(conn_ptra._M_ptr);
    }
    else
    {
      M_ptr = (std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2>::element_type *)conn_ptra._M_ptr->_vptr_RedisConnBase;
      if ( !*(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr->_vptr_RedisConnBase >> 3) + 0x7FFF8000) )
      {
        v56 = (unsigned __int64)(M_ptr->_vptr_RedisConnBase + 15);
        if ( !*(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
        {
          v57 = (const char *)(*((__int64 (**)(void))M_ptr->_vptr_RedisConnBase + 15))();
LABEL_71:
          v58 = "error:%s";
          common::milog::MiLogStream::operator()(&v71, "error:%s", v57);
          common::milog::MiLogStream::~MiLogStream(&v71);
          goto LABEL_56;
        }
LABEL_70:
        v57 = (const char *)__asan_report_load8(v56);
        goto LABEL_71;
      }
    }
    __asan_report_load8(M_ptr);
    goto LABEL_70;
  }
LABEL_56:
  if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr >> 3) + 0x7FFF8000) )
  {
    p_last_use_time = (volatile signed __int32 *)conn_ptra._M_ptr;
    __asan_report_load8(conn_ptra._M_ptr);
    goto LABEL_73;
  }
  conn_ptra._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)conn_ptra._M_ptr->_vptr_RedisConnBase;
  p_last_use_time = (volatile signed __int32 *)&conn_ptra._M_ptr->last_use_time;
  if ( *(_BYTE *)(((unsigned __int64)&conn_ptra._M_ptr->last_use_time >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    __asan_report_load8(p_last_use_time);
    goto LABEL_74;
  }
  v54 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&conn_ptra._M_ptr->last_use_time;
  v70 = v54;
  if ( !v54 )
    goto LABEL_63;
  p_last_use_time = &v54->_M_use_count;
  if ( &_pthread_key_create )
  {
    v44 = *(unsigned __int8 *)(((unsigned __int64)p_last_use_time >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_last_use_time & 7) + 3) < (char)v44 || !(_BYTE)v44 )
    {
      _InterlockedAdd(p_last_use_time, 1u);
      goto LABEL_63;
    }
LABEL_74:
    v54 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_last_use_time, v59);
  }
  v60 = *(_BYTE *)(((unsigned __int64)&v54->_M_use_count >> 3) + 0x7FFF8000);
  v44 = (((_BYTE)v54 + 8) & 7u) + 3;
  if ( (char)((((_BYTE)v54 + 8) & 7) + 3) >= v60 && v60 )
  {
    __asan_report_load4(&v54->_M_use_count);
  }
  else
  {
    ++v54->_M_use_count;
LABEL_63:
    common::midb::RedisMgr::markConnToDestory(
      thisa,
      (common::midb::RedisConnPtr)__PAIR128__(v44, (common::midb::RedisConnPtr *)&conn_ptra._M_refcount));
  }
  if ( v70 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v70);
LABEL_46:
  v48 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v68 - 11);
  if ( v48 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v48);
  v49 = (char *)*((_QWORD *)v68 - 8);
  if ( v49 != v68 - 48 )
    operator delete(v49);
  v50 = 0;
LABEL_51:
  if ( v66 == (char *)v7 )
  {
    v51 = (__int64)v67;
    *((_QWORD *)v67 + 268431360) = 0LL;
    *(_DWORD *)(v51 + 2147450892) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    v61 = (__int64)v67;
    *((_QWORD *)v67 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(v61 + 2147450888) = 0xF5F5F5F5F5F5F5F5LL;
  }
  __asan_allocas_unpoison(&v62, v73);
  return v50;
};

// Line 683: range 000000000CAA0BAC-000000000CAA0D70
int32_t __fastcall common::midb::RedisMgr::cmdDel(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key)
{
  const std::string *v4; // rcx
  int32_t v5; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v6; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v8; // dl
  signed __int32 M_use_count; // eax
  char v11; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v13; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v15; // rdi
  char v16; // dl
  struct _Unwind_Exception *v17; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v18; // rdi
  __int64 v19; // [rsp+0h] [rbp-28h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // [rsp+8h] [rbp-20h]

  common::midb::RedisMgr::grabConn(this, index);
  v5 = common::midb::RedisMgr::cmdDel(this, (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v19), v4);
  v6 = v20;
  if ( v20 )
  {
    p_M_use_count = &v20->_M_use_count;
    if ( &_pthread_key_create )
    {
      v8 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v8 || !v8 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v19);
    }
    v11 = *(_BYTE *)(((unsigned __int64)&v6->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v6 + 8) & 7) + 3) >= v11 && v11 )
    {
      __asan_report_load4(&v6->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v6->_M_use_count;
    v6->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v5;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v6;
      __asan_report_load8(v6);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v6->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v6->_vptr__Sp_counted_base + 2))(v6);
        p_M_weak_count = &v6->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v13 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v13 || !v13 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v19);
LABEL_26:
        v16 = *(_BYTE *)(((unsigned __int64)&v6->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v6 + 12) & 7) + 3) >= v16 && v16 )
        {
          __asan_report_load4(&v6->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v6->_M_weak_count;
        v6->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v5;
        if ( !*(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          v15 = (unsigned __int64)(v6->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v6->_vptr__Sp_counted_base + 3))(v6);
            return v5;
          }
LABEL_31:
          v17 = (struct _Unwind_Exception *)__asan_report_load8(v15);
          v18 = v20;
          if ( v20 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
          __asan_handle_no_return(v18);
          _Unwind_Resume(v17);
        }
LABEL_30:
        v15 = (unsigned __int64)v6;
        __asan_report_load8(v6);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v5;
};

// Line 688: range 000000000CA7F350-000000000CA7FA53
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::midb::RedisMgr::cmdDel(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        const std::string *key)
{
  volatile signed __int32 *M_ptr; // rbp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r12
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r14
  common::midb::RedisMgr *v7; // rsi
  __int64 v8; // rax
  std::string::size_type M_string_length; // r15
  const char *vptr__Sp_counted_base; // r8
  volatile signed __int32 *p_M_use_count; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v12; // rax
  char v13; // dl
  unsigned int v14; // r12d
  char v15; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v16; // rbp
  _Atomic_word *v17; // rdi
  char v18; // dl
  signed __int32 M_use_count; // eax
  unsigned __int64 v20; // rdi
  char v21; // al
  unsigned __int64 v22; // rbp
  volatile signed __int32 *v23; // rdi
  char v24; // dl
  signed __int32 v25; // eax
  char v27; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v29; // dl
  signed __int32 M_weak_count; // eax
  char v31; // dl
  __int64 v32; // rax
  char v33; // dl
  unsigned __int64 v34; // rdi
  char v35; // dl
  signed __int32 v36; // eax
  unsigned __int64 v37; // rdi
  char v38; // dl
  struct _Unwind_Exception *v39; // rbx
  std::string::pointer M_p; // rdi
  __int64 conn_ptra; // [rsp+10h] [rbp-C8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v43; // [rsp+18h] [rbp-C0h]
  std::string s; // [rsp+20h] [rbp-B8h] BYREF
  std::string v45; // [rsp+40h] [rbp-98h] BYREF
  char v46[120]; // [rsp+60h] [rbp-78h] BYREF

  M_ptr = (volatile signed __int32 *)conn_ptr._M_ptr;
  M_pi = conn_ptr._M_refcount._M_pi;
  v5 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v5 = v8;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 13 reply_ptr:697";
  *(_QWORD *)(v5 + 16) = common::midb::RedisMgr::cmdDel;
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  s._M_dataplus._M_p = s._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&s, &byte_1A0CF744[-4], byte_1A0CF744, (std::forward_iterator_tag)key);
  v7 = (common::midb::RedisMgr *)M_pi;
  common::tools::StringUtils::trim(&v45, (const std::string *)M_pi, &s, 1);
  M_string_length = v45._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v45._M_dataplus._M_p != &v45._anon_0 )
    operator delete(v45._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s._M_dataplus._M_p != &s._anon_0 )
    operator delete(s._M_dataplus._M_p);
  if ( !M_string_length )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdDel",
      692);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v45, "key is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v45);
    v14 = -1;
    goto LABEL_45;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(M_pi);
    goto LABEL_21;
  }
  vptr__Sp_counted_base = (const char *)M_pi->_vptr__Sp_counted_base;
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    p_M_use_count = M_ptr;
    __asan_report_load8(M_ptr);
    goto LABEL_22;
  }
  conn_ptra = *(_QWORD *)M_ptr;
  p_M_use_count = M_ptr + 2;
  if ( *(_BYTE *)(((unsigned __int64)(M_ptr + 2) >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(p_M_use_count);
LABEL_23:
    v12 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count, M_pi);
    goto LABEL_24;
  }
  v12 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)M_ptr + 1);
  v43 = v12;
  if ( !v12 )
  {
LABEL_18:
    v7 = this;
    common::midb::RedisMgr::command(
      (common::midb::RedisMgr *const)(v5 + 32),
      (common::midb::RedisConnPtr)__PAIR128__(&conn_ptra, (unsigned __int64)this),
      "DEL %s",
      vptr__Sp_counted_base);
    goto LABEL_28;
  }
  p_M_use_count = &v12->_M_use_count;
  if ( &_pthread_key_create )
  {
    v13 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v13 || !v13 )
    {
      _InterlockedAdd(p_M_use_count, 1u);
      goto LABEL_18;
    }
    goto LABEL_23;
  }
LABEL_24:
  v15 = *(_BYTE *)(((unsigned __int64)&v12->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v12 + 8) & 7) + 3) < v15 || !v15 )
  {
    ++v12->_M_use_count;
    goto LABEL_18;
  }
  __asan_report_load4(&v12->_M_use_count);
LABEL_28:
  v16 = v43;
  if ( !v43 )
    goto LABEL_34;
  v17 = &v43->_M_use_count;
  if ( &_pthread_key_create )
  {
    v18 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v17 & 7) + 3) < v18 || !v18 )
    {
      M_use_count = _InterlockedExchangeAdd(v17, 0xFFFFFFFF);
      goto LABEL_33;
    }
    __asan_report_store4(v17, v7);
  }
  v27 = *(_BYTE *)(((unsigned __int64)&v16->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v16 + 8) & 7) + 3) >= v27 && v27 )
  {
    __asan_report_load4(&v16->_M_use_count);
    goto LABEL_53;
  }
  M_use_count = v16->_M_use_count;
  v16->_M_use_count = M_use_count - 1;
LABEL_33:
  if ( M_use_count != 1 )
    goto LABEL_34;
LABEL_53:
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)v16;
    __asan_report_load8(v16);
    goto LABEL_64;
  }
  p_M_weak_count = (volatile signed __int32 *)(v16->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_64:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_65;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v16->_vptr__Sp_counted_base + 2))(v16);
  p_M_weak_count = &v16->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_66;
  v29 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v29 || !v29 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_59;
  }
LABEL_65:
  __asan_report_store4(p_M_weak_count, v7);
LABEL_66:
  v31 = *(_BYTE *)(((unsigned __int64)&v16->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v16 + 12) & 7) + 3) >= v31 && v31 )
  {
    __asan_report_load4(&v16->_M_weak_count);
LABEL_70:
    v20 = (unsigned __int64)v16;
    __asan_report_load8(v16);
    goto LABEL_71;
  }
  M_weak_count = v16->_M_weak_count;
  v16->_M_weak_count = M_weak_count - 1;
LABEL_59:
  if ( M_weak_count != 1 )
    goto LABEL_34;
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
    goto LABEL_70;
  v20 = (unsigned __int64)(v16->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_load8(v20);
    goto LABEL_72;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v16->_vptr__Sp_counted_base + 3))(v16);
LABEL_34:
  v20 = *(_QWORD *)(v5 + 32);
  if ( v20 )
  {
    v21 = *(_BYTE *)((v20 >> 3) + 0x7FFF8000);
    if ( !v21 || v21 > 3 )
    {
      if ( *(_DWORD *)v20 != 6 )
      {
        v14 = 0;
        goto LABEL_39;
      }
LABEL_73:
      v7 = (common::midb::RedisMgr *)&common::milog::MiLogDefault::default_log_obj_;
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&v45,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_mgr.cpp",
        "cmdDel",
        705);
      v32 = *(_QWORD *)(v5 + 32);
      if ( *(_BYTE *)(((unsigned __int64)(v32 + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v32 + 32);
      }
      else if ( !*(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
      {
        v7 = (common::midb::RedisMgr *)"del [%s] faild, %s";
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)&v45,
          "del [%s] faild, %s",
          (const char *)M_pi->_vptr__Sp_counted_base,
          *(const char **)(v32 + 32));
LABEL_78:
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v45);
        v14 = -1;
        goto LABEL_39;
      }
      __asan_report_load8(M_pi);
      goto LABEL_78;
    }
LABEL_72:
    __asan_report_load4(v20);
    goto LABEL_73;
  }
  v14 = -1;
LABEL_39:
  v22 = *(_QWORD *)(v5 + 40);
  if ( !v22 )
    goto LABEL_45;
  v23 = (volatile signed __int32 *)(v22 + 8);
  if ( &_pthread_key_create )
  {
    v24 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v23 & 7) + 3) < v24 || !v24 )
    {
      v25 = _InterlockedExchangeAdd(v23, 0xFFFFFFFF);
      goto LABEL_44;
    }
    __asan_report_store4(v23, v7);
  }
  v33 = *(_BYTE *)(((v22 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v22 + 8) & 7) + 3) >= v33 && v33 )
  {
    __asan_report_load4(v22 + 8);
    goto LABEL_85;
  }
  v25 = *(_DWORD *)(v22 + 8);
  *(_DWORD *)(v22 + 8) = v25 - 1;
LABEL_44:
  if ( v25 != 1 )
    goto LABEL_45;
LABEL_85:
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
  {
    v34 = v22;
    __asan_report_load8(v22);
    goto LABEL_96;
  }
  v34 = *(_QWORD *)v22 + 16LL;
  if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
  {
LABEL_96:
    __asan_report_load8(v34);
    goto LABEL_97;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v22 + 16LL))(v22);
  v34 = v22 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_98;
  v35 = *(_BYTE *)((v34 >> 3) + 0x7FFF8000);
  if ( (char)((v34 & 7) + 3) < v35 || !v35 )
  {
    v36 = _InterlockedExchangeAdd((volatile signed __int32 *)v34, 0xFFFFFFFF);
    goto LABEL_91;
  }
LABEL_97:
  __asan_report_store4(v34, v7);
LABEL_98:
  v38 = *(_BYTE *)(((v22 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v22 + 12) & 7) + 3) >= v38 && v38 )
  {
    __asan_report_load4(v22 + 12);
LABEL_102:
    v37 = v22;
    __asan_report_load8(v22);
LABEL_103:
    v39 = (struct _Unwind_Exception *)__asan_report_load8(v37);
    M_p = s._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s._M_dataplus._M_p != &s._anon_0 )
      operator delete(s._M_dataplus._M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v39);
  }
  v36 = *(_DWORD *)(v22 + 12);
  *(_DWORD *)(v22 + 12) = v36 - 1;
LABEL_91:
  if ( v36 != 1 )
    goto LABEL_45;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
    goto LABEL_102;
  v37 = *(_QWORD *)v22 + 24LL;
  if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
    goto LABEL_103;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v22 + 24LL))(v22);
LABEL_45:
  if ( v46 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v14;
};

// Line 712: range 000000000CAA5256-000000000CAA55EB
__int64 __fastcall common::midb::RedisMgr::cmdDel(common::midb::RedisMgr *const this, uint32_t index, __int64 a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::_Link_type v7; // rax
  std::size_t i; // rdx
  __int64 v9; // rax
  std::size_t v10; // rcx
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::_Link_type j; // rdx
  std::_Rb_tree_node<std::string > *M_right; // rcx
  std::_Rb_tree_node_base::_Base_ptr *p_M_right; // rdi
  unsigned int v14; // r12d
  unsigned __int64 v15; // rbp
  volatile signed __int32 *v16; // rdi
  char v17; // dl
  signed __int32 v18; // eax
  char v20; // dl
  unsigned __int64 v21; // rdi
  char v22; // dl
  signed __int32 v23; // eax
  unsigned __int64 v24; // rdi
  char v25; // dl
  struct _Unwind_Exception *v26; // rbx
  std::set<std::string> v27; // [rsp+0h] [rbp-B8h] BYREF
  std::_Rb_tree_node_base::_Base_ptr *conn_ptr_32; // [rsp+30h] [rbp-88h]
  __int64 conn_ptr_40; // [rsp+38h] [rbp-80h]
  char v30[120]; // [rsp+40h] [rbp-78h] BYREF

  v5 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_0(64LL);
    if ( v9 )
      v5 = v9;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 4 __an";
  *(_QWORD *)(v5 + 16) = common::midb::RedisMgr::cmdDel;
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  LODWORD(v27._M_t._M_impl._M_header._M_left) = 0;
  v27._M_t._M_impl._M_header._M_right = 0LL;
  v27._M_t._M_impl._M_node_count = (std::size_t)&v27._M_t._M_impl._M_header._M_left;
  conn_ptr_32 = &v27._M_t._M_impl._M_header._M_left;
  conn_ptr_40 = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)(a3 + 16) >> 3) + 0x7FFF8000) )
  {
    v7 = (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::_Link_type)__asan_report_load8(a3 + 16);
    goto LABEL_8;
  }
  if ( *(_QWORD *)(a3 + 16) )
  {
    *(_QWORD *)(v5 + 32) = &v27._M_t._M_impl._M_header._M_parent;
    v7 = std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_copy<std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_Alloc_node>(
           (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > > *const)&v27._M_t._M_impl._M_header._M_parent,
           *(std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::_Const_Link_type *)(a3 + 16),
           (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::_Base_ptr)&v27._M_t._M_impl._M_header._M_left,
           (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::_Alloc_node *)(v5 + 32));
    for ( i = (std::size_t)v7; ; i = v10 )
    {
      if ( *(_BYTE *)(((i + 16) >> 3) + 0x7FFF8000) )
      {
        v7 = (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::_Link_type)__asan_report_load8(i + 16);
        goto LABEL_13;
      }
      v10 = *(_QWORD *)(i + 16);
      if ( !v10 )
        break;
LABEL_8:
      ;
    }
    v27._M_t._M_impl._M_node_count = i;
    for ( j = v7; ; j = M_right )
    {
      p_M_right = &j->_M_right;
      if ( *(_BYTE *)(((unsigned __int64)&j->_M_right >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_M_right);
        goto LABEL_20;
      }
      M_right = (std::_Rb_tree_node<std::string > *)j->_M_right;
      if ( !M_right )
        break;
LABEL_13:
      ;
    }
    conn_ptr_32 = (std::_Rb_tree_node_base::_Base_ptr *)j;
    p_M_right = (std::_Rb_tree_node_base::_Base_ptr *)(a3 + 40);
    if ( !*(_BYTE *)(((unsigned __int64)(a3 + 40) >> 3) + 0x7FFF8000) )
    {
      conn_ptr_40 = *(_QWORD *)(a3 + 40);
      v27._M_t._M_impl._M_header._M_right = v7;
      goto LABEL_18;
    }
LABEL_20:
    __asan_report_load8(p_M_right);
  }
  else
  {
LABEL_18:
    common::midb::RedisMgr::grabConn(this, index);
  }
  v14 = common::midb::RedisMgr::cmdDel(
          this,
          (common::midb::RedisConnPtr)__PAIR128__((std::set<std::string> *)&v27._M_t._M_impl._M_header._M_parent, &v27),
          v27);
  v15 = *(_QWORD *)&v27._M_t._M_impl._M_header._M_color;
  if ( *(_QWORD *)&v27._M_t._M_impl._M_header._M_color )
  {
    v16 = (volatile signed __int32 *)(*(_QWORD *)&v27._M_t._M_impl._M_header._M_color + 8LL);
    if ( &_pthread_key_create )
    {
      v17 = *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v16 & 7) + 3) < v17 || !v17 )
      {
        v18 = _InterlockedExchangeAdd(v16, 0xFFFFFFFF);
        goto LABEL_26;
      }
      __asan_report_store4(v16, &v27);
    }
    v20 = *(_BYTE *)(((v15 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v15 + 8) & 7) + 3) >= v20 && v20 )
    {
      __asan_report_load4(v15 + 8);
      goto LABEL_35;
    }
    v18 = *(_DWORD *)(v15 + 8);
    *(_DWORD *)(v15 + 8) = v18 - 1;
LABEL_26:
    if ( v18 != 1 )
      goto LABEL_27;
LABEL_35:
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
    {
      v21 = v15;
      __asan_report_load8(v15);
    }
    else
    {
      v21 = *(_QWORD *)v15 + 16LL;
      if ( !*(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v15 + 16LL))(v15);
        v21 = v15 + 12;
        if ( !&_pthread_key_create )
          goto LABEL_48;
        v22 = *(_BYTE *)((v21 >> 3) + 0x7FFF8000);
        if ( (char)((v21 & 7) + 3) < v22 || !v22 )
        {
          v23 = _InterlockedExchangeAdd((volatile signed __int32 *)v21, 0xFFFFFFFF);
          goto LABEL_41;
        }
LABEL_47:
        __asan_report_store4(v21, &v27);
LABEL_48:
        v25 = *(_BYTE *)(((v15 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v15 + 12) & 7) + 3) >= v25 && v25 )
        {
          __asan_report_load4(v15 + 12);
          goto LABEL_52;
        }
        v23 = *(_DWORD *)(v15 + 12);
        *(_DWORD *)(v15 + 12) = v23 - 1;
LABEL_41:
        if ( v23 != 1 )
          goto LABEL_27;
        if ( !*(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        {
          v24 = *(_QWORD *)v15 + 24LL;
          if ( !*(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v15 + 24LL))(v15);
            goto LABEL_27;
          }
LABEL_53:
          v26 = (struct _Unwind_Exception *)__asan_report_load8(v24);
          if ( *(_QWORD *)&v27._M_t._M_impl._M_header._M_color )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(*(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *const *)&v27._M_t._M_impl._M_header._M_color);
          std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
            (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > > *const)&v27._M_t._M_impl._M_header._M_parent,
            (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::_Link_type)v27._M_t._M_impl._M_header._M_right);
          __asan_handle_no_return(&v27._M_t._M_impl._M_header._M_parent);
          _Unwind_Resume(v26);
        }
LABEL_52:
        v24 = v15;
        __asan_report_load8(v15);
        goto LABEL_53;
      }
    }
    __asan_report_load8(v21);
    goto LABEL_47;
  }
LABEL_27:
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
    (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > > *const)&v27._M_t._M_impl._M_header._M_parent,
    (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::_Link_type)v27._M_t._M_impl._M_header._M_right);
  if ( v30 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v14;
};

// Line 749: range 000000000CAA0D76-000000000CAA0F44
int32_t __fastcall common::midb::RedisMgr::cmdSAdd(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        const std::string *value)
{
  const std::string *v6; // r8
  int32_t v7; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v8; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v10; // dl
  signed __int32 M_use_count; // eax
  char v13; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v15; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v17; // rdi
  char v18; // dl
  struct _Unwind_Exception *v19; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v7 = common::midb::RedisMgr::cmdSAdd(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v21),
         value,
         v6);
  v8 = v22;
  if ( v22 )
  {
    p_M_use_count = &v22->_M_use_count;
    if ( &_pthread_key_create )
    {
      v10 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v10 || !v10 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v21);
    }
    v13 = *(_BYTE *)(((unsigned __int64)&v8->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v8 + 8) & 7) + 3) >= v13 && v13 )
    {
      __asan_report_load4(&v8->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v8->_M_use_count;
    v8->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v7;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v8;
      __asan_report_load8(v8);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v8->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 2))(v8);
        p_M_weak_count = &v8->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v15 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v15 || !v15 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v21);
LABEL_26:
        v18 = *(_BYTE *)(((unsigned __int64)&v8->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v8 + 12) & 7) + 3) >= v18 && v18 )
        {
          __asan_report_load4(&v8->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v8->_M_weak_count;
        v8->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v7;
        if ( !*(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          v17 = (unsigned __int64)(v8->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 3))(v8);
            return v7;
          }
LABEL_31:
          v19 = (struct _Unwind_Exception *)__asan_report_load8(v17);
          v20 = v22;
          if ( v22 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v22);
          __asan_handle_no_return(v20);
          _Unwind_Resume(v19);
        }
LABEL_30:
        v17 = (unsigned __int64)v8;
        __asan_report_load8(v8);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v7;
};

// Line 754: range 000000000CA841DC-000000000CA853EB
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::midb::RedisMgr::cmdSAdd(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        unsigned __int64 key,
        const std::string *value)
{
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r13
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r15
  std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2>::element_type *v8; // rsi
  __int64 v9; // rax
  std::string::size_type v10; // rcx
  std::string::pointer v11; // r9
  std::string::pointer vptr__Sp_counted_base; // r8
  volatile signed __int32 *M_ptr; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v14; // rax
  char v15; // dl
  common::midb::RedisMgr *v16; // rsi
  unsigned int v17; // r12d
  __int64 v18; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v19; // r12
  _Atomic_word *p_M_use_count; // rdi
  char v21; // dl
  signed __int32 M_use_count; // eax
  unsigned __int64 v23; // rdi
  char v24; // al
  __int64 v25; // rax
  unsigned __int64 v26; // r14
  volatile signed __int32 *v27; // rdi
  char v28; // dl
  signed __int32 v29; // eax
  char v31; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v33; // dl
  signed __int32 M_weak_count; // eax
  char v35; // dl
  __int64 v36; // rax
  char v37; // dl
  unsigned __int64 v38; // rdi
  char v39; // dl
  signed __int32 v40; // eax
  unsigned __int64 v41; // rdi
  char v42; // dl
  struct _Unwind_Exception *v43; // rbx
  std::string::pointer M_p; // rdi
  std::string *s; // [rsp+10h] [rbp-D0h]
  common::midb::RedisConnPtr conn_ptra; // [rsp+18h] [rbp-C8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v48; // [rsp+28h] [rbp-B8h]
  std::string v49; // [rsp+30h] [rbp-B0h] BYREF
  std::string v50; // [rsp+50h] [rbp-90h] BYREF
  char v51[112]; // [rsp+70h] [rbp-70h] BYREF

  conn_ptra._M_ptr = conn_ptr._M_ptr;
  M_pi = conn_ptr._M_refcount._M_pi;
  v6 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_0(64LL);
    if ( v9 )
      v6 = v9;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 13 reply_ptr:761";
  *(_QWORD *)(v6 + 16) = common::midb::RedisMgr::cmdSAdd;
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  v49._M_dataplus._M_p = v49._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v49, &byte_1A0CF744[-4], byte_1A0CF744, (std::forward_iterator_tag)&v49);
  v8 = (std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2>::element_type *)M_pi;
  common::tools::StringUtils::trim(&v50, (const std::string *)M_pi, &v49, 1);
  s = (std::string *)v50._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v50._M_dataplus._M_p != &v50._anon_0 )
    operator delete(v50._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v49._M_dataplus._M_p != &v49._anon_0 )
    operator delete(v49._M_dataplus._M_p);
  if ( !s )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v50,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSAdd",
      757);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v50, "key is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v50);
    v17 = -1;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(((key + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(key + 8);
    goto LABEL_23;
  }
  v10 = *(_QWORD *)(key + 8);
  if ( *(_BYTE *)((key >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(key);
    goto LABEL_24;
  }
  v11 = *(std::string::pointer *)key;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(M_pi);
    goto LABEL_25;
  }
  vptr__Sp_counted_base = (std::string::pointer)M_pi->_vptr__Sp_counted_base;
  if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    M_ptr = (volatile signed __int32 *)conn_ptra._M_ptr;
    __asan_report_load8(conn_ptra._M_ptr);
    goto LABEL_26;
  }
  v8 = conn_ptra._M_ptr;
  conn_ptra._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)conn_ptra._M_ptr->_vptr_RedisConnBase;
  M_ptr = (volatile signed __int32 *)&conn_ptra._M_ptr->last_use_time;
  if ( *(_BYTE *)(((unsigned __int64)&conn_ptra._M_ptr->last_use_time >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(M_ptr);
LABEL_27:
    v14 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(M_ptr, v8);
    goto LABEL_28;
  }
  v14 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&conn_ptra._M_ptr->last_use_time;
  v48 = v14;
  if ( !v14 )
  {
LABEL_20:
    v16 = this;
    common::midb::RedisMgr::command(
      (common::midb::RedisMgr *const)(v6 + 32),
      (common::midb::RedisConnPtr)__PAIR128__(
                                    (common::midb::RedisConnPtr *)&conn_ptra._M_refcount,
                                    (unsigned __int64)this),
      "SADD %s %b",
      vptr__Sp_counted_base,
      v11,
      v10);
    goto LABEL_32;
  }
  M_ptr = &v14->_M_use_count;
  if ( &_pthread_key_create )
  {
    v15 = *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)M_ptr & 7) + 3) < v15 || !v15 )
    {
      _InterlockedAdd(M_ptr, 1u);
      goto LABEL_20;
    }
    goto LABEL_27;
  }
LABEL_28:
  v16 = (common::midb::RedisMgr *)*(unsigned __int8 *)(((unsigned __int64)&v14->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v14 + 8) & 7) + 3) < (char)v16 || !(_BYTE)v16 )
  {
    ++v14->_M_use_count;
    goto LABEL_20;
  }
  __asan_report_load4(&v14->_M_use_count);
LABEL_32:
  v18 = (__int64)v48;
  v19 = v48;
  if ( !v48 )
    goto LABEL_38;
  p_M_use_count = &v48->_M_use_count;
  if ( &_pthread_key_create )
  {
    v21 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v21 || !v21 )
    {
      M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
      goto LABEL_37;
    }
    v18 = __asan_report_store4(p_M_use_count, v16);
  }
  v31 = *(_BYTE *)(((unsigned __int64)(v18 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v18 + 8) & 7) + 3) >= v31 && v31 )
  {
    __asan_report_load4(v18 + 8);
    goto LABEL_57;
  }
  M_use_count = v19->_M_use_count;
  v19->_M_use_count = M_use_count - 1;
LABEL_37:
  if ( M_use_count != 1 )
    goto LABEL_38;
LABEL_57:
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)v19;
    __asan_report_load8(v19);
    goto LABEL_68;
  }
  p_M_weak_count = (volatile signed __int32 *)(v19->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_69;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v19->_vptr__Sp_counted_base + 2))(v19);
  p_M_weak_count = &v19->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_70;
  v33 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v33 || !v33 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_63;
  }
LABEL_69:
  __asan_report_store4(p_M_weak_count, v16);
LABEL_70:
  v35 = *(_BYTE *)(((unsigned __int64)&v19->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v19 + 12) & 7) + 3) >= v35 && v35 )
  {
    __asan_report_load4(&v19->_M_weak_count);
LABEL_74:
    v23 = (unsigned __int64)v19;
    __asan_report_load8(v19);
    goto LABEL_75;
  }
  M_weak_count = v19->_M_weak_count;
  v19->_M_weak_count = M_weak_count - 1;
LABEL_63:
  if ( M_weak_count != 1 )
    goto LABEL_38;
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    goto LABEL_74;
  v23 = (unsigned __int64)(v19->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_load8(v23);
    goto LABEL_76;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v19->_vptr__Sp_counted_base + 3))(v19);
LABEL_38:
  v23 = *(_QWORD *)(v6 + 32);
  if ( v23 )
  {
    v24 = *(_BYTE *)((v23 >> 3) + 0x7FFF8000);
    if ( !v24 || v24 > 3 )
    {
      if ( *(_DWORD *)v23 != 6 )
      {
        v17 = 0;
        goto LABEL_43;
      }
LABEL_77:
      v16 = (common::midb::RedisMgr *)&common::milog::MiLogDefault::default_log_obj_;
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_mgr.cpp",
        "cmdSAdd",
        769);
      v36 = *(_QWORD *)(v6 + 32);
      if ( *(_BYTE *)(((unsigned __int64)(v36 + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v36 + 32);
      }
      else if ( !*(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
      {
        v16 = (common::midb::RedisMgr *)"sadd [%s] failed, %s";
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)&v50,
          "sadd [%s] failed, %s",
          (const char *)M_pi->_vptr__Sp_counted_base,
          *(const char **)(v36 + 32));
LABEL_82:
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v50);
        v17 = -1;
        goto LABEL_43;
      }
      __asan_report_load8(M_pi);
      goto LABEL_82;
    }
LABEL_76:
    __asan_report_load4(v23);
    goto LABEL_77;
  }
  v17 = -1;
LABEL_43:
  v25 = *(_QWORD *)(v6 + 40);
  v26 = v25;
  if ( !v25 )
    goto LABEL_49;
  v27 = (volatile signed __int32 *)(v25 + 8);
  if ( &_pthread_key_create )
  {
    v28 = *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v27 & 7) + 3) < v28 || !v28 )
    {
      v29 = _InterlockedExchangeAdd(v27, 0xFFFFFFFF);
      goto LABEL_48;
    }
    v25 = __asan_report_store4(v27, v16);
  }
  v37 = *(_BYTE *)(((unsigned __int64)(v25 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v25 + 8) & 7) + 3) >= v37 && v37 )
  {
    __asan_report_load4(v25 + 8);
    goto LABEL_89;
  }
  v29 = *(_DWORD *)(v26 + 8);
  *(_DWORD *)(v26 + 8) = v29 - 1;
LABEL_48:
  if ( v29 != 1 )
    goto LABEL_49;
LABEL_89:
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
  {
    v38 = v26;
    __asan_report_load8(v26);
    goto LABEL_100;
  }
  v38 = *(_QWORD *)v26 + 16LL;
  if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
  {
LABEL_100:
    __asan_report_load8(v38);
    goto LABEL_101;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v26 + 16LL))(v26);
  v38 = v26 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_102;
  v39 = *(_BYTE *)((v38 >> 3) + 0x7FFF8000);
  if ( (char)((v38 & 7) + 3) < v39 || !v39 )
  {
    v40 = _InterlockedExchangeAdd((volatile signed __int32 *)v38, 0xFFFFFFFF);
    goto LABEL_95;
  }
LABEL_101:
  __asan_report_store4(v38, v16);
LABEL_102:
  v42 = *(_BYTE *)(((v26 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v26 + 12) & 7) + 3) >= v42 && v42 )
  {
    __asan_report_load4(v26 + 12);
LABEL_106:
    v41 = v26;
    __asan_report_load8(v26);
LABEL_107:
    v43 = (struct _Unwind_Exception *)__asan_report_load8(v41);
    M_p = v49._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v49._M_dataplus._M_p != &v49._anon_0 )
      operator delete(v49._M_dataplus._M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v43);
  }
  v40 = *(_DWORD *)(v26 + 12);
  *(_DWORD *)(v26 + 12) = v40 - 1;
LABEL_95:
  if ( v40 != 1 )
    goto LABEL_49;
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
    goto LABEL_106;
  v41 = *(_QWORD *)v26 + 24LL;
  if ( *(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
    goto LABEL_107;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v26 + 24LL))(v26);
LABEL_49:
  if ( v51 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v17;
};

// Line 777: range 000000000CAA0F4A-000000000CAA1122
int32_t __fastcall common::midb::RedisMgr::cmdSAdd(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        const std::string *value,
        bool *is_repeated)
{
  bool *v8; // r9
  int32_t v9; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v12; // dl
  signed __int32 M_use_count; // eax
  char v15; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v17; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v19; // rdi
  char v20; // dl
  struct _Unwind_Exception *v21; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // rdi
  __int64 v23; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v9 = common::midb::RedisMgr::cmdSAdd(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v23),
         value,
         (const std::string *)is_repeated,
         v8);
  v10 = v24;
  if ( v24 )
  {
    p_M_use_count = &v24->_M_use_count;
    if ( &_pthread_key_create )
    {
      v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v23);
    }
    v15 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v15 && v15 )
    {
      __asan_report_load4(&v10->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v10->_M_use_count;
    v10->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v9;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v10;
      __asan_report_load8(v10);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v10->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 2))(v10);
        p_M_weak_count = &v10->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v17 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v17 || !v17 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v23);
LABEL_26:
        v20 = *(_BYTE *)(((unsigned __int64)&v10->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v10 + 12) & 7) + 3) >= v20 && v20 )
        {
          __asan_report_load4(&v10->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v10->_M_weak_count;
        v10->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v9;
        if ( !*(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          v19 = (unsigned __int64)(v10->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 3))(v10);
            return v9;
          }
LABEL_31:
          v21 = (struct _Unwind_Exception *)__asan_report_load8(v19);
          v22 = v24;
          if ( v24 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v24);
          __asan_handle_no_return(v22);
          _Unwind_Resume(v21);
        }
LABEL_30:
        v19 = (unsigned __int64)v10;
        __asan_report_load8(v10);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v9;
};

// Line 813: range 000000000CAA455C-000000000CAA472A
int32_t __fastcall common::midb::RedisMgr::cmdSAdd(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        std::set<std::string> *value_set)
{
  std::set<std::string> *v6; // r8
  int32_t v7; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v8; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v10; // dl
  signed __int32 M_use_count; // eax
  char v13; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v15; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v17; // rdi
  char v18; // dl
  struct _Unwind_Exception *v19; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v7 = common::midb::RedisMgr::cmdSAdd(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v21),
         (const std::string *)value_set,
         v6);
  v8 = v22;
  if ( v22 )
  {
    p_M_use_count = &v22->_M_use_count;
    if ( &_pthread_key_create )
    {
      v10 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v10 || !v10 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v21);
    }
    v13 = *(_BYTE *)(((unsigned __int64)&v8->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v8 + 8) & 7) + 3) >= v13 && v13 )
    {
      __asan_report_load4(&v8->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v8->_M_use_count;
    v8->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v7;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v8;
      __asan_report_load8(v8);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v8->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 2))(v8);
        p_M_weak_count = &v8->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v15 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v15 || !v15 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v21);
LABEL_26:
        v18 = *(_BYTE *)(((unsigned __int64)&v8->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v8 + 12) & 7) + 3) >= v18 && v18 )
        {
          __asan_report_load4(&v8->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v8->_M_weak_count;
        v8->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v7;
        if ( !*(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          v17 = (unsigned __int64)(v8->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 3))(v8);
            return v7;
          }
LABEL_31:
          v19 = (struct _Unwind_Exception *)__asan_report_load8(v17);
          v20 = v22;
          if ( v22 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v22);
          __asan_handle_no_return(v20);
          _Unwind_Resume(v19);
        }
LABEL_30:
        v17 = (unsigned __int64)v8;
        __asan_report_load8(v8);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v7;
};

// Line 818: range 000000000CA9789E-000000000CA980C0
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::midb::RedisMgr::cmdSAdd(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        const std::string *key,
        std::set<std::string> *value_set)
{
  const std::string *v4; // r15
  unsigned __int64 v5; // rax
  char *v6; // r12
  __int64 v7; // rax
  unsigned int v8; // ebx
  std::string::size_type M_string_length; // rbx
  char *v10; // rdi
  std::string::size_type v11; // rax
  __int64 v12; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  signed __int64 v16; // r14
  void *v17; // rsp
  unsigned __int64 v18; // r13
  void *v19; // rsp
  const char *vptr_RedisConnBase; // rsi
  std::forward_iterator_tag v21; // cl
  unsigned __int64 p_M_string_length; // rdi
  const std::string *v23; // rdi
  const std::string *i; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdx
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdi
  char v33; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v34; // rdi
  char *v35; // rdi
  volatile signed __int32 *p_last_use_time; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v37; // rax
  std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  unsigned __int64 v39; // rdx
  const char *v40; // rax
  char v41; // cl
  __int64 v42; // rsi
  __int64 v43; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v44; // [rsp+8h] [rbp-128h]
  unsigned __int64 v45; // [rsp+10h] [rbp-120h]
  uint32_t argv_num; // [rsp+1Ch] [rbp-114h] BYREF
  common::midb::RedisMgr *thisa; // [rsp+20h] [rbp-110h]
  char *v48; // [rsp+28h] [rbp-108h]
  __int64 v49; // [rsp+30h] [rbp-100h]
  char *v50; // [rsp+38h] [rbp-F8h]
  const std::string *keya; // [rsp+40h] [rbp-F0h]
  common::midb::RedisConnPtr conn_ptra; // [rsp+48h] [rbp-E8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v53; // [rsp+58h] [rbp-D8h]
  std::string v54; // [rsp+60h] [rbp-D0h] BYREF
  char v55[128]; // [rsp+80h] [rbp-B0h] BYREF
  char v56[48]; // [rsp+100h] [rbp-30h] BYREF

  thisa = this;
  conn_ptra._M_ptr = conn_ptr._M_ptr;
  keya = (const std::string *)conn_ptr._M_refcount._M_pi;
  v4 = key;
  v50 = v55;
  v48 = v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v50 = (char *)v7;
  }
  v5 = (unsigned __int64)v50;
  v6 = v50 + 128;
  *(_QWORD *)v50 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 16 13 reply_ptr:857 64 32 7 cmd:841";
  *(_QWORD *)(v5 + 16) = common::midb::RedisMgr::cmdSAdd;
  v5 >>= 3;
  v49 = v5;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -219021312;
  *(_DWORD *)(v5 + 2147450892) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(conn_ptra._M_ptr);
    goto LABEL_8;
  }
  if ( !conn_ptra._M_ptr->_vptr_RedisConnBase )
  {
LABEL_8:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v54,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSAdd",
      821);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&v54._anon_0._M_allocated_capacity + 1),
      "[REDIS]conn nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v54);
    v8 = -1;
    goto LABEL_17;
  }
  *((_QWORD *)v6 - 8) = v6 - 48;
  std::string::_M_construct<char const*>(
    (std::string *const)v6 - 2,
    &byte_1A0CF744[-4],
    byte_1A0CF744,
    (std::forward_iterator_tag)key);
  common::tools::StringUtils::trim(&v54, keya, (const std::string *)v6 - 2, 1);
  M_string_length = v54._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v54._M_dataplus._M_p != &v54._anon_0 )
    operator delete(v54._M_dataplus._M_p);
  v10 = (char *)*((_QWORD *)v6 - 8);
  if ( v10 != v6 - 48 )
    operator delete(v10);
  if ( !M_string_length )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v54,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSAdd",
      826);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v54, "key is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v54);
    v8 = -1;
    goto LABEL_17;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v4[1]._M_string_length >> 3) + 0x7FFF8000) )
  {
    LODWORD(v11) = __asan_report_load8(&v4[1]._M_string_length);
  }
  else
  {
    v11 = v4[1]._M_string_length;
    if ( !v11 )
    {
      v8 = 0;
      goto LABEL_17;
    }
  }
  argv_num = v11 + 2;
  v14 = 8LL * (unsigned int)(v11 + 2);
  v15 = 32LL - ((8 * ((_BYTE)v11 + 2)) & 0x1F);
  v16 = (v14 + v15 + 103) & 0xFFFFFFFFFFFFFFF0LL;
  v17 = alloca(v14 + v15 + 88);
  v45 = ((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL;
  v18 = (((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 32;
  __asan_alloca_poison(v18, v14);
  v19 = alloca(v16);
  v44 = ((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL;
  __asan_alloca_poison(v18, v14);
  *((_QWORD *)v6 - 8) = v6 - 48;
  vptr_RedisConnBase = &byte_1A0D14A4[-4];
  std::string::_M_construct<char const*>((std::string *const)v6 - 2, &byte_1A0D14A4[-4], byte_1A0D14A4, v21);
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8((((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 32, vptr_RedisConnBase);
    goto LABEL_31;
  }
  vptr_RedisConnBase = (const char *)v45;
  *(_QWORD *)(v45 + 32) = *((_QWORD *)v6 - 8);
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_store8((((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 32, vptr_RedisConnBase);
    goto LABEL_32;
  }
  vptr_RedisConnBase = (const char *)v44;
  *(_QWORD *)(v44 + 32) = *((_QWORD *)v6 - 7);
  if ( *(_BYTE *)(((unsigned __int64)keya >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    p_M_string_length = (unsigned __int64)keya;
    __asan_report_load8(keya);
    goto LABEL_33;
  }
  p_M_string_length = (((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 40;
  if ( *(_BYTE *)((p_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_store8(p_M_string_length, vptr_RedisConnBase);
    goto LABEL_34;
  }
  *(_QWORD *)((((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 0x28) = keya->_M_dataplus._M_p;
  p_M_string_length = (unsigned __int64)&keya->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&keya->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8(p_M_string_length);
    goto LABEL_35;
  }
  p_M_string_length = (((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 40;
  if ( *(_BYTE *)((p_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_store8(p_M_string_length, vptr_RedisConnBase);
    goto LABEL_36;
  }
  *(_QWORD *)((((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 0x28) = keya->_M_string_length;
  p_M_string_length = (unsigned __int64)(&v4->_anon_0._M_allocated_capacity + 1);
  if ( *(_BYTE *)(((unsigned __int64)(&v4->_anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    v25 = __asan_report_load8(p_M_string_length);
    goto LABEL_37;
  }
  v23 = (const std::string *)*(&v4->_anon_0._M_allocated_capacity + 1);
  v4 = (const std::string *)((char *)v4 + 8);
  LODWORD(v14) = 2;
  for ( i = v23; ; i = (const std::string *)std::_Rb_tree_increment((const std::_Rb_tree_node_base *)v28) )
  {
    v28 = (__int64)i;
    if ( i == v4 )
      break;
    v25 = (unsigned __int64)&i[1];
    if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
    {
LABEL_37:
      v26 = __asan_report_load8(v25);
LABEL_38:
      v27 = __asan_report_store8(v26, vptr_RedisConnBase);
LABEL_39:
      v28 = v27;
      __asan_report_load8(v27);
      goto LABEL_40;
    }
    v26 = v18 + 8LL * (unsigned int)v14;
    if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
      goto LABEL_38;
    *(_QWORD *)((((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 0x20 + 8LL * (unsigned int)v14) = *(_QWORD *)(v28 + 32);
    v27 = v28 + 40;
    if ( *(_BYTE *)(((unsigned __int64)(v28 + 40) >> 3) + 0x7FFF8000) )
      goto LABEL_39;
    v29 = *(_QWORD *)(v28 + 40);
    if ( *(_BYTE *)(((v18 + 8LL * (unsigned int)v14) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8(v18 + 8LL * (unsigned int)v14, vptr_RedisConnBase);
      break;
    }
LABEL_40:
    *(_QWORD *)((((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 0x20 + 8LL * (unsigned int)v14) = v29;
    LODWORD(v14) = v14 + 1;
  }
  if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(conn_ptra._M_ptr);
    goto LABEL_52;
  }
  vptr_RedisConnBase = (const char *)conn_ptra._M_ptr->_vptr_RedisConnBase;
  if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr->_vptr_RedisConnBase >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    v30 = (unsigned __int64)vptr_RedisConnBase;
    __asan_report_load8(vptr_RedisConnBase);
    goto LABEL_53;
  }
  v30 = *(_QWORD *)vptr_RedisConnBase + 48LL;
  if ( !*(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(char *, const char *, _QWORD, unsigned __int64, unsigned __int64))(*(_QWORD *)vptr_RedisConnBase
                                                                                             + 48LL))(
      v6 - 96,
      vptr_RedisConnBase,
      argv_num,
      (((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 32,
      (((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 32);
    goto LABEL_54;
  }
LABEL_53:
  __asan_report_load8(v30);
LABEL_54:
  v32 = *((_QWORD *)v6 - 12);
  if ( v32 )
  {
    v33 = *(_BYTE *)((v32 >> 3) + 0x7FFF8000);
    if ( v33 && v33 <= 3 )
    {
      __asan_report_load4(v32);
    }
    else if ( *(_DWORD *)v32 != 6 )
    {
      goto LABEL_58;
    }
  }
  if ( !v32 )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v54,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSAdd",
      864);
    if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr >> 3) + 0x7FFF8000) )
    {
      M_ptr = conn_ptra._M_ptr;
      __asan_report_load8(conn_ptra._M_ptr);
    }
    else
    {
      M_ptr = (std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2>::element_type *)conn_ptra._M_ptr->_vptr_RedisConnBase;
      if ( !*(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr->_vptr_RedisConnBase >> 3) + 0x7FFF8000) )
      {
        v39 = (unsigned __int64)(M_ptr->_vptr_RedisConnBase + 15);
        if ( !*(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
        {
          v40 = (const char *)(*((__int64 (**)(void))M_ptr->_vptr_RedisConnBase + 15))();
LABEL_80:
          vptr_RedisConnBase = "error:%s";
          common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v54, "error:%s", v40);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v54);
          goto LABEL_65;
        }
LABEL_79:
        v40 = (const char *)__asan_report_load8(v39);
        goto LABEL_80;
      }
    }
    __asan_report_load8(M_ptr);
    goto LABEL_79;
  }
LABEL_65:
  if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr >> 3) + 0x7FFF8000) )
  {
    p_last_use_time = (volatile signed __int32 *)conn_ptra._M_ptr;
    __asan_report_load8(conn_ptra._M_ptr);
    goto LABEL_82;
  }
  vptr_RedisConnBase = (const char *)conn_ptra._M_ptr;
  conn_ptra._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)conn_ptra._M_ptr->_vptr_RedisConnBase;
  p_last_use_time = (volatile signed __int32 *)&conn_ptra._M_ptr->last_use_time;
  if ( *(_BYTE *)(((unsigned __int64)&conn_ptra._M_ptr->last_use_time >> 3) + 0x7FFF8000) )
  {
LABEL_82:
    __asan_report_load8(p_last_use_time);
    goto LABEL_83;
  }
  v37 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&conn_ptra._M_ptr->last_use_time;
  v53 = v37;
  if ( !v37 )
    goto LABEL_72;
  p_last_use_time = &v37->_M_use_count;
  if ( &_pthread_key_create )
  {
    v31 = *(unsigned __int8 *)(((unsigned __int64)p_last_use_time >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_last_use_time & 7) + 3) < (char)v31 || !(_BYTE)v31 )
    {
      _InterlockedAdd(p_last_use_time, 1u);
      goto LABEL_72;
    }
LABEL_83:
    v37 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_last_use_time, vptr_RedisConnBase);
  }
  v41 = *(_BYTE *)(((unsigned __int64)&v37->_M_use_count >> 3) + 0x7FFF8000);
  v31 = (((_BYTE)v37 + 8) & 7u) + 3;
  if ( (char)((((_BYTE)v37 + 8) & 7) + 3) >= v41 && v41 )
  {
    __asan_report_load4(&v37->_M_use_count);
  }
  else
  {
    ++v37->_M_use_count;
LABEL_72:
    common::midb::RedisMgr::markConnToDestory(
      thisa,
      (common::midb::RedisConnPtr)__PAIR128__(v31, (common::midb::RedisConnPtr *)&conn_ptra._M_refcount));
  }
  if ( v53 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v53);
LABEL_58:
  v34 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v6 - 11);
  if ( v34 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v34);
  v35 = (char *)*((_QWORD *)v6 - 8);
  if ( v35 != v6 - 48 )
    operator delete(v35);
  v8 = 0;
LABEL_17:
  if ( v48 == v50 )
  {
    v12 = v49;
    *(_QWORD *)(v49 + 2147450880) = 0LL;
    *(_DWORD *)(v12 + 2147450892) = 0;
  }
  else
  {
    *(_QWORD *)v50 = 1172321806LL;
    v42 = v49;
    *(_QWORD *)(v49 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(v42 + 2147450888) = 0xF5F5F5F5F5F5F5F5LL;
  }
  __asan_allocas_unpoison(&v43, v56);
  return v8;
};

// Line 873: range 000000000CAA1128-000000000CAA1300
int32_t __fastcall common::midb::RedisMgr::cmdZSCore(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        const std::string *member,
        std::string *score)
{
  std::string *v8; // r9
  int32_t v9; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v12; // dl
  signed __int32 M_use_count; // eax
  char v15; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v17; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v19; // rdi
  char v20; // dl
  struct _Unwind_Exception *v21; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // rdi
  __int64 v23; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v9 = common::midb::RedisMgr::cmdZSCore(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v23),
         member,
         score,
         v8);
  v10 = v24;
  if ( v24 )
  {
    p_M_use_count = &v24->_M_use_count;
    if ( &_pthread_key_create )
    {
      v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v23);
    }
    v15 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v15 && v15 )
    {
      __asan_report_load4(&v10->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v10->_M_use_count;
    v10->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v9;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v10;
      __asan_report_load8(v10);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v10->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 2))(v10);
        p_M_weak_count = &v10->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v17 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v17 || !v17 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v23);
LABEL_26:
        v20 = *(_BYTE *)(((unsigned __int64)&v10->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v10 + 12) & 7) + 3) >= v20 && v20 )
        {
          __asan_report_load4(&v10->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v10->_M_weak_count;
        v10->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v9;
        if ( !*(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          v19 = (unsigned __int64)(v10->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 3))(v10);
            return v9;
          }
LABEL_31:
          v21 = (struct _Unwind_Exception *)__asan_report_load8(v19);
          v22 = v24;
          if ( v24 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v24);
          __asan_handle_no_return(v22);
          _Unwind_Resume(v21);
        }
LABEL_30:
        v19 = (unsigned __int64)v10;
        __asan_report_load8(v10);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v9;
};

// Line 906: range 000000000CAA4CAC-000000000CAA4E7A
int32_t __fastcall common::midb::RedisMgr::cmdSMembers(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        std::set<std::string> *value_set)
{
  std::set<std::string> *v6; // r8
  int32_t v7; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v8; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v10; // dl
  signed __int32 M_use_count; // eax
  char v13; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v15; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v17; // rdi
  char v18; // dl
  struct _Unwind_Exception *v19; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v7 = common::midb::RedisMgr::cmdSMembers(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v21),
         (const std::string *)value_set,
         v6);
  v8 = v22;
  if ( v22 )
  {
    p_M_use_count = &v22->_M_use_count;
    if ( &_pthread_key_create )
    {
      v10 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v10 || !v10 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v21);
    }
    v13 = *(_BYTE *)(((unsigned __int64)&v8->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v8 + 8) & 7) + 3) >= v13 && v13 )
    {
      __asan_report_load4(&v8->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v8->_M_use_count;
    v8->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v7;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v8;
      __asan_report_load8(v8);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v8->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 2))(v8);
        p_M_weak_count = &v8->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v15 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v15 || !v15 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v21);
LABEL_26:
        v18 = *(_BYTE *)(((unsigned __int64)&v8->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v8 + 12) & 7) + 3) >= v18 && v18 )
        {
          __asan_report_load4(&v8->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v8->_M_weak_count;
        v8->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v7;
        if ( !*(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          v17 = (unsigned __int64)(v8->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 3))(v8);
            return v7;
          }
LABEL_31:
          v19 = (struct _Unwind_Exception *)__asan_report_load8(v17);
          v20 = v22;
          if ( v22 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v22);
          __asan_handle_no_return(v20);
          _Unwind_Resume(v19);
        }
LABEL_30:
        v17 = (unsigned __int64)v8;
        __asan_report_load8(v8);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v7;
};

// Line 948: range 000000000CAA4E80-000000000CAA5058
int32_t __fastcall common::midb::RedisMgr::cmdSRandMember(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        uint32_t count,
        std::set<std::string> *value_set)
{
  uint32_t v7; // r13d
  std::set<std::string> *v8; // r9
  int32_t v9; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v12; // dl
  signed __int32 M_use_count; // eax
  char v15; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v17; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v19; // rdi
  char v20; // dl
  struct _Unwind_Exception *v21; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // rdi
  __int64 v23; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // [rsp+8h] [rbp-30h]

  v7 = (unsigned int)value_set;
  common::midb::RedisMgr::grabConn(this, index);
  v9 = common::midb::RedisMgr::cmdSRandMember(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v23),
         (const std::string *)count,
         v7,
         v8);
  v10 = v24;
  if ( v24 )
  {
    p_M_use_count = &v24->_M_use_count;
    if ( &_pthread_key_create )
    {
      v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v23);
    }
    v15 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v15 && v15 )
    {
      __asan_report_load4(&v10->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v10->_M_use_count;
    v10->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v9;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v10;
      __asan_report_load8(v10);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v10->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 2))(v10);
        p_M_weak_count = &v10->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v17 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v17 || !v17 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v23);
LABEL_26:
        v20 = *(_BYTE *)(((unsigned __int64)&v10->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v10 + 12) & 7) + 3) >= v20 && v20 )
        {
          __asan_report_load4(&v10->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v10->_M_weak_count;
        v10->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v9;
        if ( !*(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          v19 = (unsigned __int64)(v10->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 3))(v10);
            return v9;
          }
LABEL_31:
          v21 = (struct _Unwind_Exception *)__asan_report_load8(v19);
          v22 = v24;
          if ( v24 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v24);
          __asan_handle_no_return(v22);
          _Unwind_Resume(v21);
        }
LABEL_30:
        v19 = (unsigned __int64)v10;
        __asan_report_load8(v10);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v9;
};

// Line 953: range 000000000CA920DA-000000000CA929F7
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::midb::RedisMgr::cmdSRandMember(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        const std::string *key,
        std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > > *count,
        std::set<std::string> *value_set)
{
  volatile signed __int32 *M_ptr; // r12
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r15
  std::_Rb_tree_node<std::string > *M_parent; // rsi
  __int64 v10; // rax
  const char *vptr__Sp_counted_base; // r8
  volatile signed __int32 *p_M_use_count; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v13; // rax
  char v14; // dl
  unsigned int v15; // r12d
  char v16; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v17; // r12
  _Atomic_word *v18; // rdi
  char v19; // dl
  signed __int32 M_use_count; // eax
  unsigned __int64 v21; // rdi
  char v22; // al
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > > *v23; // r12
  unsigned __int64 p_M_parent; // rdi
  std::_Rb_tree_header *v25; // rax
  char v26; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v28; // dl
  signed __int32 M_weak_count; // eax
  char v30; // dl
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rbx
  volatile signed __int32 *v38; // rdi
  char v39; // dl
  signed __int32 v40; // eax
  char v42; // dl
  unsigned __int64 v43; // rdi
  char v44; // dl
  signed __int32 v45; // eax
  unsigned __int64 v46; // rdi
  char v47; // dl
  struct _Unwind_Exception *v48; // rbx
  std::string::pointer M_p; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *keya; // [rsp+8h] [rbp-F0h]
  std::string *s; // [rsp+10h] [rbp-E8h]
  uint32_t counta; // [rsp+2Ch] [rbp-CCh]
  __int64 conn_ptra; // [rsp+30h] [rbp-C8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v55; // [rsp+38h] [rbp-C0h]
  std::string v56; // [rsp+40h] [rbp-B8h] BYREF
  std::string __v; // [rsp+60h] [rbp-98h] BYREF
  char v58[120]; // [rsp+80h] [rbp-78h] BYREF

  M_ptr = (volatile signed __int32 *)conn_ptr._M_ptr;
  keya = conn_ptr._M_refcount._M_pi;
  counta = (unsigned int)key;
  v7 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_0(64LL);
    if ( v10 )
      v7 = v10;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 16 13 reply_ptr:960";
  *(_QWORD *)(v7 + 16) = common::midb::RedisMgr::cmdSRandMember;
  v8 = v7 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202178560;
  v56._M_dataplus._M_p = v56._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v56, &byte_1A0CF744[-4], byte_1A0CF744, (std::forward_iterator_tag)&v56);
  M_parent = (std::_Rb_tree_node<std::string > *)keya;
  common::tools::StringUtils::trim(&__v, (const std::string *)keya, &v56, 1);
  s = (std::string *)__v._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__v._M_dataplus._M_p != &__v._anon_0 )
    operator delete(__v._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v56._M_dataplus._M_p != &v56._anon_0 )
    operator delete(v56._M_dataplus._M_p);
  if ( !s )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&__v,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSRandMember",
      956);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&__v, "key is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__v);
    v15 = -1;
    goto LABEL_106;
  }
  if ( *(_BYTE *)(((unsigned __int64)keya >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(keya);
    goto LABEL_21;
  }
  vptr__Sp_counted_base = (const char *)keya->_vptr__Sp_counted_base;
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    p_M_use_count = M_ptr;
    __asan_report_load8(M_ptr);
    goto LABEL_22;
  }
  conn_ptra = *(_QWORD *)M_ptr;
  p_M_use_count = M_ptr + 2;
  if ( *(_BYTE *)(((unsigned __int64)(M_ptr + 2) >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(p_M_use_count);
LABEL_23:
    v13 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count, keya);
    goto LABEL_24;
  }
  v13 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)M_ptr + 1);
  v55 = v13;
  if ( !v13 )
  {
LABEL_18:
    M_parent = (std::_Rb_tree_node<std::string > *)this;
    common::midb::RedisMgr::command(
      (common::midb::RedisMgr *const)(v7 + 32),
      (common::midb::RedisConnPtr)__PAIR128__(&conn_ptra, (unsigned __int64)this),
      "SRANDMEMBER %s %d",
      vptr__Sp_counted_base,
      counta);
    goto LABEL_28;
  }
  p_M_use_count = &v13->_M_use_count;
  if ( &_pthread_key_create )
  {
    v14 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v14 || !v14 )
    {
      _InterlockedAdd(p_M_use_count, 1u);
      goto LABEL_18;
    }
    goto LABEL_23;
  }
LABEL_24:
  v16 = *(_BYTE *)(((unsigned __int64)&v13->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v13 + 8) & 7) + 3) < v16 || !v16 )
  {
    ++v13->_M_use_count;
    goto LABEL_18;
  }
  __asan_report_load4(&v13->_M_use_count);
LABEL_28:
  v17 = v55;
  if ( !v55 )
    goto LABEL_34;
  v18 = &v55->_M_use_count;
  if ( &_pthread_key_create )
  {
    v19 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v18 & 7) + 3) < v19 || !v19 )
    {
      M_use_count = _InterlockedExchangeAdd(v18, 0xFFFFFFFF);
      goto LABEL_33;
    }
    __asan_report_store4(v18, M_parent);
  }
  v26 = *(_BYTE *)(((unsigned __int64)&v17->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v17 + 8) & 7) + 3) >= v26 && v26 )
  {
    __asan_report_load4(&v17->_M_use_count);
    goto LABEL_49;
  }
  M_use_count = v17->_M_use_count;
  v17->_M_use_count = M_use_count - 1;
LABEL_33:
  if ( M_use_count != 1 )
    goto LABEL_34;
LABEL_49:
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)v17;
    __asan_report_load8(v17);
    goto LABEL_60;
  }
  p_M_weak_count = (volatile signed __int32 *)(v17->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_61;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v17->_vptr__Sp_counted_base + 2))(v17);
  p_M_weak_count = &v17->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_62;
  v28 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v28 || !v28 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_55;
  }
LABEL_61:
  __asan_report_store4(p_M_weak_count, M_parent);
LABEL_62:
  v30 = *(_BYTE *)(((unsigned __int64)&v17->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v17 + 12) & 7) + 3) >= v30 && v30 )
  {
    __asan_report_load4(&v17->_M_weak_count);
LABEL_66:
    v21 = (unsigned __int64)v17;
    __asan_report_load8(v17);
    goto LABEL_67;
  }
  M_weak_count = v17->_M_weak_count;
  v17->_M_weak_count = M_weak_count - 1;
LABEL_55:
  if ( M_weak_count != 1 )
    goto LABEL_34;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    goto LABEL_66;
  v21 = (unsigned __int64)(v17->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_load8(v21);
LABEL_68:
    __asan_report_load4(v21);
LABEL_69:
    M_parent = (std::_Rb_tree_node<std::string > *)&common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&__v,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSRandMember",
      967);
    v31 = *(_QWORD *)(v7 + 32);
    if ( *(_BYTE *)(((unsigned __int64)(v31 + 32) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v31 + 32);
    }
    else if ( !*(_BYTE *)(((unsigned __int64)keya >> 3) + 0x7FFF8000) )
    {
      M_parent = (std::_Rb_tree_node<std::string > *)"smembers [%s] failed, %s";
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&__v,
        "smembers [%s] failed, %s",
        (const char *)keya->_vptr__Sp_counted_base,
        *(const char **)(v31 + 32));
LABEL_74:
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__v);
      v15 = -1;
      goto LABEL_100;
    }
    __asan_report_load8(keya);
    goto LABEL_74;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v17->_vptr__Sp_counted_base + 3))(v17);
LABEL_34:
  v21 = *(_QWORD *)(v7 + 32);
  if ( !v21 )
  {
    v15 = -1;
    goto LABEL_100;
  }
  v22 = *(_BYTE *)((v21 >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
    goto LABEL_68;
  if ( *(_DWORD *)v21 == 6 )
    goto LABEL_69;
  v23 = count;
  p_M_parent = (unsigned __int64)&count->_M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&count->_M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_parent);
    goto LABEL_76;
  }
  M_parent = (std::_Rb_tree_node<std::string > *)count->_M_impl._M_header._M_parent;
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
    count,
    M_parent);
  p_M_parent = (unsigned __int64)&count->_M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&count->_M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_76:
    __asan_report_store8(p_M_parent, M_parent);
    goto LABEL_77;
  }
  count->_M_impl._M_header._M_parent = 0LL;
  v25 = &count->_M_impl.std::_Rb_tree_header;
  p_M_parent = (unsigned __int64)&count->_M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&count->_M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_77:
    __asan_report_store8(p_M_parent, M_parent);
    goto LABEL_78;
  }
  count->_M_impl._M_header._M_left = &v25->_M_header;
  p_M_parent = (unsigned __int64)&count->_M_impl._M_header._M_right;
  if ( *(_BYTE *)(((unsigned __int64)&count->_M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_store8(p_M_parent, M_parent);
    goto LABEL_79;
  }
  count->_M_impl._M_header._M_right = &v25->_M_header;
  p_M_parent = (unsigned __int64)&count->_M_impl._M_node_count;
  if ( *(_BYTE *)(((unsigned __int64)&count->_M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
LABEL_79:
    __asan_report_store8(p_M_parent, M_parent);
    goto LABEL_80;
  }
  count->_M_impl._M_node_count = 0LL;
  for ( LODWORD(count) = 0; ; LODWORD(count) = (_DWORD)count + 1 )
  {
    v32 = *(_QWORD *)(v7 + 32);
    p_M_parent = v32 + 48;
    if ( *(_BYTE *)(((unsigned __int64)(v32 + 48) >> 3) + 0x7FFF8000) )
    {
LABEL_80:
      __asan_report_load8(p_M_parent);
LABEL_81:
      __asan_report_load8(p_M_parent);
LABEL_82:
      __asan_report_load8(p_M_parent);
LABEL_83:
      __asan_report_load8(p_M_parent);
LABEL_84:
      __asan_report_load8(p_M_parent);
      goto LABEL_85;
    }
    if ( (unsigned __int64)(unsigned int)count >= *(_QWORD *)(v32 + 48) )
      break;
    p_M_parent = v32 + 56;
    if ( *(_BYTE *)(((unsigned __int64)(v32 + 56) >> 3) + 0x7FFF8000) )
      goto LABEL_81;
    v33 = *(_QWORD *)(v32 + 56) + 8LL * (unsigned int)count;
    p_M_parent = v33;
    if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
      goto LABEL_82;
    v34 = *(_QWORD *)v33;
    if ( !v34 )
      continue;
    p_M_parent = v34 + 24;
    if ( *(_BYTE *)(((unsigned __int64)(v34 + 24) >> 3) + 0x7FFF8000) )
      goto LABEL_83;
    v35 = *(_QWORD *)(v34 + 24);
    if ( !v35 )
      continue;
    p_M_parent = v34 + 32;
    v36 = (unsigned __int64)(v34 + 32) >> 3;
    if ( *(_BYTE *)(v36 + 0x7FFF8000) )
      goto LABEL_84;
    M_parent = *(std::_Rb_tree_node<std::string > **)(v34 + 32);
    if ( !M_parent )
      continue;
    __v._M_dataplus._M_p = __v._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(
      &__v,
      (const char *)M_parent,
      (const char *)M_parent + v35,
      (std::forward_iterator_tag)v36);
LABEL_85:
    M_parent = (std::_Rb_tree_node<std::string > *)&__v;
    std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_insert_unique<std::string>(
      v23,
      &__v);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__v._M_dataplus._M_p != &__v._anon_0 )
      operator delete(__v._M_dataplus._M_p);
  }
  v15 = 0;
LABEL_100:
  v37 = *(_QWORD *)(v7 + 40);
  if ( !v37 )
    goto LABEL_106;
  v38 = (volatile signed __int32 *)(v37 + 8);
  if ( &_pthread_key_create )
  {
    v39 = *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v38 & 7) + 3) < v39 || !v39 )
    {
      v40 = _InterlockedExchangeAdd(v38, 0xFFFFFFFF);
      goto LABEL_105;
    }
    __asan_report_store4(v38, M_parent);
  }
  v42 = *(_BYTE *)(((v37 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v37 + 8) & 7) + 3) >= v42 && v42 )
  {
    __asan_report_load4(v37 + 8);
    goto LABEL_114;
  }
  v40 = *(_DWORD *)(v37 + 8);
  *(_DWORD *)(v37 + 8) = v40 - 1;
LABEL_105:
  if ( v40 == 1 )
  {
LABEL_114:
    if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
    {
      v43 = v37;
      __asan_report_load8(v37);
    }
    else
    {
      v43 = *(_QWORD *)v37 + 16LL;
      if ( !*(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v37 + 16LL))(v37);
        v43 = v37 + 12;
        if ( !&_pthread_key_create )
          goto LABEL_127;
        v44 = *(_BYTE *)((v43 >> 3) + 0x7FFF8000);
        if ( (char)((v43 & 7) + 3) < v44 || !v44 )
        {
          v45 = _InterlockedExchangeAdd((volatile signed __int32 *)v43, 0xFFFFFFFF);
          goto LABEL_120;
        }
LABEL_126:
        __asan_report_store4(v43, M_parent);
LABEL_127:
        v47 = *(_BYTE *)(((v37 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v37 + 12) & 7) + 3) >= v47 && v47 )
        {
          __asan_report_load4(v37 + 12);
          goto LABEL_131;
        }
        v45 = *(_DWORD *)(v37 + 12);
        *(_DWORD *)(v37 + 12) = v45 - 1;
LABEL_120:
        if ( v45 != 1 )
          goto LABEL_106;
        if ( !*(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
        {
          v46 = *(_QWORD *)v37 + 24LL;
          if ( !*(_BYTE *)((v46 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v37 + 24LL))(v37);
            goto LABEL_106;
          }
LABEL_132:
          v48 = (struct _Unwind_Exception *)__asan_report_load8(v46);
          M_p = v56._M_dataplus._M_p;
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v56._M_dataplus._M_p != &v56._anon_0 )
            operator delete(v56._M_dataplus._M_p);
          __asan_handle_no_return(M_p);
          _Unwind_Resume(v48);
        }
LABEL_131:
        v46 = v37;
        __asan_report_load8(v37);
        goto LABEL_132;
      }
    }
    __asan_report_load8(v43);
    goto LABEL_126;
  }
LABEL_106:
  if ( v58 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v15;
};

// Line 990: range 000000000CAA1306-000000000CAA14D4
int32_t __fastcall common::midb::RedisMgr::cmdSCard(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        uint32_t *count)
{
  uint32_t *v6; // r8
  int32_t v7; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v8; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v10; // dl
  signed __int32 M_use_count; // eax
  char v13; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v15; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v17; // rdi
  char v18; // dl
  struct _Unwind_Exception *v19; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v7 = common::midb::RedisMgr::cmdSCard(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v21),
         (const std::string *)count,
         v6);
  v8 = v22;
  if ( v22 )
  {
    p_M_use_count = &v22->_M_use_count;
    if ( &_pthread_key_create )
    {
      v10 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v10 || !v10 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v21);
    }
    v13 = *(_BYTE *)(((unsigned __int64)&v8->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v8 + 8) & 7) + 3) >= v13 && v13 )
    {
      __asan_report_load4(&v8->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v8->_M_use_count;
    v8->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v7;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v8;
      __asan_report_load8(v8);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v8->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 2))(v8);
        p_M_weak_count = &v8->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v15 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v15 || !v15 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v21);
LABEL_26:
        v18 = *(_BYTE *)(((unsigned __int64)&v8->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v8 + 12) & 7) + 3) >= v18 && v18 )
        {
          __asan_report_load4(&v8->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v8->_M_weak_count;
        v8->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v7;
        if ( !*(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          v17 = (unsigned __int64)(v8->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 3))(v8);
            return v7;
          }
LABEL_31:
          v19 = (struct _Unwind_Exception *)__asan_report_load8(v17);
          v20 = v22;
          if ( v22 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v22);
          __asan_handle_no_return(v20);
          _Unwind_Resume(v19);
        }
LABEL_30:
        v17 = (unsigned __int64)v8;
        __asan_report_load8(v8);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v7;
};

// Line 995: range 000000000CA7EC06-000000000CA7F34A
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::midb::RedisMgr::cmdSCard(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        unsigned __int64 key,
        uint32_t *count)
{
  volatile signed __int32 *M_ptr; // rbp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r12
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r13
  common::midb::RedisMgr *v8; // rsi
  __int64 v9; // rax
  std::string::size_type M_string_length; // r15
  const char *vptr__Sp_counted_base; // r8
  volatile signed __int32 *p_M_use_count; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v13; // rax
  char v14; // dl
  unsigned int v15; // r12d
  char v16; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v17; // rbp
  _Atomic_word *v18; // rdi
  char v19; // dl
  signed __int32 M_use_count; // eax
  unsigned __int64 v21; // rdi
  char v22; // al
  char v23; // dl
  unsigned __int64 v24; // rbp
  volatile signed __int32 *v25; // rdi
  char v26; // dl
  signed __int32 v27; // eax
  char v29; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v31; // dl
  signed __int32 M_weak_count; // eax
  char v33; // dl
  char v34; // dl
  unsigned __int64 v35; // rdi
  char v36; // dl
  signed __int32 v37; // eax
  unsigned __int64 v38; // rdi
  char v39; // dl
  struct _Unwind_Exception *v40; // rbx
  std::string::pointer M_p; // rdi
  __int64 conn_ptra; // [rsp+20h] [rbp-C8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v45; // [rsp+28h] [rbp-C0h]
  std::string s; // [rsp+30h] [rbp-B8h] BYREF
  std::string v47; // [rsp+50h] [rbp-98h] BYREF
  char v48[120]; // [rsp+70h] [rbp-78h] BYREF

  M_ptr = (volatile signed __int32 *)conn_ptr._M_ptr;
  M_pi = conn_ptr._M_refcount._M_pi;
  v6 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_0(64LL);
    if ( v9 )
      v6 = v9;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 14 reply_ptr:1002";
  *(_QWORD *)(v6 + 16) = common::midb::RedisMgr::cmdSCard;
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  s._M_dataplus._M_p = s._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&s, &byte_1A0CF744[-4], byte_1A0CF744, (std::forward_iterator_tag)key);
  v8 = (common::midb::RedisMgr *)M_pi;
  common::tools::StringUtils::trim(&v47, (const std::string *)M_pi, &s, 1);
  M_string_length = v47._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v47._M_dataplus._M_p != &v47._anon_0 )
    operator delete(v47._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s._M_dataplus._M_p != &s._anon_0 )
    operator delete(s._M_dataplus._M_p);
  if ( !M_string_length )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v47,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSCard",
      998);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v47, "key is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v47);
    v15 = -1;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(M_pi);
    goto LABEL_21;
  }
  vptr__Sp_counted_base = (const char *)M_pi->_vptr__Sp_counted_base;
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    p_M_use_count = M_ptr;
    __asan_report_load8(M_ptr);
    goto LABEL_22;
  }
  conn_ptra = *(_QWORD *)M_ptr;
  p_M_use_count = M_ptr + 2;
  if ( *(_BYTE *)(((unsigned __int64)(M_ptr + 2) >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(p_M_use_count);
LABEL_23:
    v13 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count, M_pi);
    goto LABEL_24;
  }
  v13 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)M_ptr + 1);
  v45 = v13;
  if ( !v13 )
  {
LABEL_18:
    v8 = this;
    common::midb::RedisMgr::command(
      (common::midb::RedisMgr *const)(v6 + 32),
      (common::midb::RedisConnPtr)__PAIR128__(&conn_ptra, (unsigned __int64)this),
      "SCARD %s",
      vptr__Sp_counted_base);
    goto LABEL_28;
  }
  p_M_use_count = &v13->_M_use_count;
  if ( &_pthread_key_create )
  {
    v14 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v14 || !v14 )
    {
      _InterlockedAdd(p_M_use_count, 1u);
      goto LABEL_18;
    }
    goto LABEL_23;
  }
LABEL_24:
  v16 = *(_BYTE *)(((unsigned __int64)&v13->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v13 + 8) & 7) + 3) < v16 || !v16 )
  {
    ++v13->_M_use_count;
    goto LABEL_18;
  }
  __asan_report_load4(&v13->_M_use_count);
LABEL_28:
  v17 = v45;
  if ( !v45 )
    goto LABEL_34;
  v18 = &v45->_M_use_count;
  if ( &_pthread_key_create )
  {
    v19 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v18 & 7) + 3) < v19 || !v19 )
    {
      M_use_count = _InterlockedExchangeAdd(v18, 0xFFFFFFFF);
      goto LABEL_33;
    }
    __asan_report_store4(v18, v8);
  }
  v29 = *(_BYTE *)(((unsigned __int64)&v17->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v17 + 8) & 7) + 3) >= v29 && v29 )
  {
    __asan_report_load4(&v17->_M_use_count);
    goto LABEL_56;
  }
  M_use_count = v17->_M_use_count;
  v17->_M_use_count = M_use_count - 1;
LABEL_33:
  if ( M_use_count != 1 )
    goto LABEL_34;
LABEL_56:
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)v17;
    __asan_report_load8(v17);
    goto LABEL_67;
  }
  p_M_weak_count = (volatile signed __int32 *)(v17->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_68;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v17->_vptr__Sp_counted_base + 2))(v17);
  p_M_weak_count = &v17->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_69;
  v31 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v31 || !v31 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_62;
  }
LABEL_68:
  __asan_report_store4(p_M_weak_count, v8);
LABEL_69:
  v33 = *(_BYTE *)(((unsigned __int64)&v17->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v17 + 12) & 7) + 3) >= v33 && v33 )
  {
    __asan_report_load4(&v17->_M_weak_count);
LABEL_73:
    v21 = (unsigned __int64)v17;
    __asan_report_load8(v17);
    goto LABEL_74;
  }
  M_weak_count = v17->_M_weak_count;
  v17->_M_weak_count = M_weak_count - 1;
LABEL_62:
  if ( M_weak_count != 1 )
    goto LABEL_34;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    goto LABEL_73;
  v21 = (unsigned __int64)(v17->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
  {
LABEL_74:
    __asan_report_load8(v21);
LABEL_75:
    __asan_report_load4(v21);
    goto LABEL_76;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v17->_vptr__Sp_counted_base + 3))(v17);
LABEL_34:
  v21 = *(_QWORD *)(v6 + 32);
  if ( !v21 )
  {
LABEL_82:
    v15 = -1;
    goto LABEL_42;
  }
  v22 = *(_BYTE *)((v21 >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
    goto LABEL_75;
  if ( *(_DWORD *)v21 != 6 )
  {
    if ( *(_BYTE *)(((v21 + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v21 + 8);
    }
    else
    {
      v8 = (common::midb::RedisMgr *)key;
      v23 = *(_BYTE *)((key >> 3) + 0x7FFF8000);
      if ( (char)((key & 7) + 3) < v23 || !v23 )
      {
        *(_DWORD *)key = *(_QWORD *)(v21 + 8);
        v15 = 0;
        goto LABEL_42;
      }
    }
    __asan_report_store4(v8, v8);
    goto LABEL_82;
  }
LABEL_76:
  v8 = (common::midb::RedisMgr *)&common::milog::MiLogDefault::default_log_obj_;
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)&v47,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/redis_mgr.cpp",
    "cmdSCard",
    1010);
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(M_pi);
  }
  else
  {
    v8 = (common::midb::RedisMgr *)"scard [%s] failed";
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&v47,
      "scard [%s] failed",
      (const char *)M_pi->_vptr__Sp_counted_base);
  }
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v47);
  v15 = -1;
LABEL_42:
  v24 = *(_QWORD *)(v6 + 40);
  if ( !v24 )
    goto LABEL_48;
  v25 = (volatile signed __int32 *)(v24 + 8);
  if ( &_pthread_key_create )
  {
    v26 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v25 & 7) + 3) < v26 || !v26 )
    {
      v27 = _InterlockedExchangeAdd(v25, 0xFFFFFFFF);
      goto LABEL_47;
    }
    __asan_report_store4(v25, v8);
  }
  v34 = *(_BYTE *)(((v24 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v24 + 8) & 7) + 3) >= v34 && v34 )
  {
    __asan_report_load4(v24 + 8);
    goto LABEL_88;
  }
  v27 = *(_DWORD *)(v24 + 8);
  *(_DWORD *)(v24 + 8) = v27 - 1;
LABEL_47:
  if ( v27 != 1 )
    goto LABEL_48;
LABEL_88:
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
  {
    v35 = v24;
    __asan_report_load8(v24);
    goto LABEL_99;
  }
  v35 = *(_QWORD *)v24 + 16LL;
  if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
  {
LABEL_99:
    __asan_report_load8(v35);
    goto LABEL_100;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v24 + 16LL))(v24);
  v35 = v24 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_101;
  v36 = *(_BYTE *)((v35 >> 3) + 0x7FFF8000);
  if ( (char)((v35 & 7) + 3) < v36 || !v36 )
  {
    v37 = _InterlockedExchangeAdd((volatile signed __int32 *)v35, 0xFFFFFFFF);
    goto LABEL_94;
  }
LABEL_100:
  __asan_report_store4(v35, v8);
LABEL_101:
  v39 = *(_BYTE *)(((v24 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v24 + 12) & 7) + 3) >= v39 && v39 )
  {
    __asan_report_load4(v24 + 12);
LABEL_105:
    v38 = v24;
    __asan_report_load8(v24);
LABEL_106:
    v40 = (struct _Unwind_Exception *)__asan_report_load8(v38);
    M_p = s._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s._M_dataplus._M_p != &s._anon_0 )
      operator delete(s._M_dataplus._M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v40);
  }
  v37 = *(_DWORD *)(v24 + 12);
  *(_DWORD *)(v24 + 12) = v37 - 1;
LABEL_94:
  if ( v37 != 1 )
    goto LABEL_48;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
    goto LABEL_105;
  v38 = *(_QWORD *)v24 + 24LL;
  if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
    goto LABEL_106;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v24 + 24LL))(v24);
LABEL_48:
  if ( v48 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v15;
};

// Line 1019: range 000000000CAA14DA-000000000CAA16B2
int32_t __fastcall common::midb::RedisMgr::cmdSIsMember(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        const std::string *member,
        bool *is_member)
{
  bool *v8; // r9
  int32_t v9; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v12; // dl
  signed __int32 M_use_count; // eax
  char v15; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v17; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v19; // rdi
  char v20; // dl
  struct _Unwind_Exception *v21; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // rdi
  __int64 v23; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v9 = common::midb::RedisMgr::cmdSIsMember(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v23),
         member,
         (const std::string *)is_member,
         v8);
  v10 = v24;
  if ( v24 )
  {
    p_M_use_count = &v24->_M_use_count;
    if ( &_pthread_key_create )
    {
      v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v23);
    }
    v15 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v15 && v15 )
    {
      __asan_report_load4(&v10->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v10->_M_use_count;
    v10->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v9;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v10;
      __asan_report_load8(v10);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v10->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 2))(v10);
        p_M_weak_count = &v10->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v17 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v17 || !v17 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v23);
LABEL_26:
        v20 = *(_BYTE *)(((unsigned __int64)&v10->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v10 + 12) & 7) + 3) >= v20 && v20 )
        {
          __asan_report_load4(&v10->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v10->_M_weak_count;
        v10->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v9;
        if ( !*(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          v19 = (unsigned __int64)(v10->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 3))(v10);
            return v9;
          }
LABEL_31:
          v21 = (struct _Unwind_Exception *)__asan_report_load8(v19);
          v22 = v24;
          if ( v24 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v24);
          __asan_handle_no_return(v22);
          _Unwind_Resume(v21);
        }
LABEL_30:
        v19 = (unsigned __int64)v10;
        __asan_report_load8(v10);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v9;
};

// Line 1048: range 000000000CAA16B8-000000000CAA1886
int32_t __fastcall common::midb::RedisMgr::cmdSRem(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        const std::string *value)
{
  const std::string *v6; // r8
  int32_t v7; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v8; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v10; // dl
  signed __int32 M_use_count; // eax
  char v13; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v15; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v17; // rdi
  char v18; // dl
  struct _Unwind_Exception *v19; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v7 = common::midb::RedisMgr::cmdSRem(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v21),
         value,
         v6);
  v8 = v22;
  if ( v22 )
  {
    p_M_use_count = &v22->_M_use_count;
    if ( &_pthread_key_create )
    {
      v10 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v10 || !v10 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v21);
    }
    v13 = *(_BYTE *)(((unsigned __int64)&v8->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v8 + 8) & 7) + 3) >= v13 && v13 )
    {
      __asan_report_load4(&v8->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v8->_M_use_count;
    v8->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v7;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v8;
      __asan_report_load8(v8);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v8->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 2))(v8);
        p_M_weak_count = &v8->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v15 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v15 || !v15 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v21);
LABEL_26:
        v18 = *(_BYTE *)(((unsigned __int64)&v8->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v8 + 12) & 7) + 3) >= v18 && v18 )
        {
          __asan_report_load4(&v8->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v8->_M_weak_count;
        v8->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v7;
        if ( !*(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          v17 = (unsigned __int64)(v8->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 3))(v8);
            return v7;
          }
LABEL_31:
          v19 = (struct _Unwind_Exception *)__asan_report_load8(v17);
          v20 = v22;
          if ( v22 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v22);
          __asan_handle_no_return(v20);
          _Unwind_Resume(v19);
        }
LABEL_30:
        v17 = (unsigned __int64)v8;
        __asan_report_load8(v8);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v7;
};

// Line 1053: range 000000000CA81DB4-000000000CA82FC3
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::midb::RedisMgr::cmdSRem(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        unsigned __int64 key,
        const std::string *value)
{
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r13
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r15
  std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2>::element_type *v8; // rsi
  __int64 v9; // rax
  std::string::size_type v10; // rcx
  std::string::pointer v11; // r9
  std::string::pointer vptr__Sp_counted_base; // r8
  volatile signed __int32 *M_ptr; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v14; // rax
  char v15; // dl
  common::midb::RedisMgr *v16; // rsi
  unsigned int v17; // r12d
  __int64 v18; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v19; // r12
  _Atomic_word *p_M_use_count; // rdi
  char v21; // dl
  signed __int32 M_use_count; // eax
  unsigned __int64 v23; // rdi
  char v24; // al
  __int64 v25; // rax
  unsigned __int64 v26; // r14
  volatile signed __int32 *v27; // rdi
  char v28; // dl
  signed __int32 v29; // eax
  char v31; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v33; // dl
  signed __int32 M_weak_count; // eax
  char v35; // dl
  __int64 v36; // rax
  char v37; // dl
  unsigned __int64 v38; // rdi
  char v39; // dl
  signed __int32 v40; // eax
  unsigned __int64 v41; // rdi
  char v42; // dl
  struct _Unwind_Exception *v43; // rbx
  std::string::pointer M_p; // rdi
  std::string *s; // [rsp+10h] [rbp-D0h]
  common::midb::RedisConnPtr conn_ptra; // [rsp+18h] [rbp-C8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v48; // [rsp+28h] [rbp-B8h]
  std::string v49; // [rsp+30h] [rbp-B0h] BYREF
  std::string v50; // [rsp+50h] [rbp-90h] BYREF
  char v51[112]; // [rsp+70h] [rbp-70h] BYREF

  conn_ptra._M_ptr = conn_ptr._M_ptr;
  M_pi = conn_ptr._M_refcount._M_pi;
  v6 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_0(64LL);
    if ( v9 )
      v6 = v9;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 14 reply_ptr:1060";
  *(_QWORD *)(v6 + 16) = common::midb::RedisMgr::cmdSRem;
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  v49._M_dataplus._M_p = v49._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v49, &byte_1A0CF744[-4], byte_1A0CF744, (std::forward_iterator_tag)&v49);
  v8 = (std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2>::element_type *)M_pi;
  common::tools::StringUtils::trim(&v50, (const std::string *)M_pi, &v49, 1);
  s = (std::string *)v50._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v50._M_dataplus._M_p != &v50._anon_0 )
    operator delete(v50._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v49._M_dataplus._M_p != &v49._anon_0 )
    operator delete(v49._M_dataplus._M_p);
  if ( !s )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v50,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSRem",
      1056);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v50, "key is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v50);
    v17 = -1;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(((key + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(key + 8);
    goto LABEL_23;
  }
  v10 = *(_QWORD *)(key + 8);
  if ( *(_BYTE *)((key >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(key);
    goto LABEL_24;
  }
  v11 = *(std::string::pointer *)key;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(M_pi);
    goto LABEL_25;
  }
  vptr__Sp_counted_base = (std::string::pointer)M_pi->_vptr__Sp_counted_base;
  if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    M_ptr = (volatile signed __int32 *)conn_ptra._M_ptr;
    __asan_report_load8(conn_ptra._M_ptr);
    goto LABEL_26;
  }
  v8 = conn_ptra._M_ptr;
  conn_ptra._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)conn_ptra._M_ptr->_vptr_RedisConnBase;
  M_ptr = (volatile signed __int32 *)&conn_ptra._M_ptr->last_use_time;
  if ( *(_BYTE *)(((unsigned __int64)&conn_ptra._M_ptr->last_use_time >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(M_ptr);
LABEL_27:
    v14 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(M_ptr, v8);
    goto LABEL_28;
  }
  v14 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&conn_ptra._M_ptr->last_use_time;
  v48 = v14;
  if ( !v14 )
  {
LABEL_20:
    v16 = this;
    common::midb::RedisMgr::command(
      (common::midb::RedisMgr *const)(v6 + 32),
      (common::midb::RedisConnPtr)__PAIR128__(
                                    (common::midb::RedisConnPtr *)&conn_ptra._M_refcount,
                                    (unsigned __int64)this),
      "SREM %s %b",
      vptr__Sp_counted_base,
      v11,
      v10);
    goto LABEL_32;
  }
  M_ptr = &v14->_M_use_count;
  if ( &_pthread_key_create )
  {
    v15 = *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)M_ptr & 7) + 3) < v15 || !v15 )
    {
      _InterlockedAdd(M_ptr, 1u);
      goto LABEL_20;
    }
    goto LABEL_27;
  }
LABEL_28:
  v16 = (common::midb::RedisMgr *)*(unsigned __int8 *)(((unsigned __int64)&v14->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v14 + 8) & 7) + 3) < (char)v16 || !(_BYTE)v16 )
  {
    ++v14->_M_use_count;
    goto LABEL_20;
  }
  __asan_report_load4(&v14->_M_use_count);
LABEL_32:
  v18 = (__int64)v48;
  v19 = v48;
  if ( !v48 )
    goto LABEL_38;
  p_M_use_count = &v48->_M_use_count;
  if ( &_pthread_key_create )
  {
    v21 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v21 || !v21 )
    {
      M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
      goto LABEL_37;
    }
    v18 = __asan_report_store4(p_M_use_count, v16);
  }
  v31 = *(_BYTE *)(((unsigned __int64)(v18 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v18 + 8) & 7) + 3) >= v31 && v31 )
  {
    __asan_report_load4(v18 + 8);
    goto LABEL_57;
  }
  M_use_count = v19->_M_use_count;
  v19->_M_use_count = M_use_count - 1;
LABEL_37:
  if ( M_use_count != 1 )
    goto LABEL_38;
LABEL_57:
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)v19;
    __asan_report_load8(v19);
    goto LABEL_68;
  }
  p_M_weak_count = (volatile signed __int32 *)(v19->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_69;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v19->_vptr__Sp_counted_base + 2))(v19);
  p_M_weak_count = &v19->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_70;
  v33 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v33 || !v33 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_63;
  }
LABEL_69:
  __asan_report_store4(p_M_weak_count, v16);
LABEL_70:
  v35 = *(_BYTE *)(((unsigned __int64)&v19->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v19 + 12) & 7) + 3) >= v35 && v35 )
  {
    __asan_report_load4(&v19->_M_weak_count);
LABEL_74:
    v23 = (unsigned __int64)v19;
    __asan_report_load8(v19);
    goto LABEL_75;
  }
  M_weak_count = v19->_M_weak_count;
  v19->_M_weak_count = M_weak_count - 1;
LABEL_63:
  if ( M_weak_count != 1 )
    goto LABEL_38;
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    goto LABEL_74;
  v23 = (unsigned __int64)(v19->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_load8(v23);
    goto LABEL_76;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v19->_vptr__Sp_counted_base + 3))(v19);
LABEL_38:
  v23 = *(_QWORD *)(v6 + 32);
  if ( v23 )
  {
    v24 = *(_BYTE *)((v23 >> 3) + 0x7FFF8000);
    if ( !v24 || v24 > 3 )
    {
      if ( *(_DWORD *)v23 != 6 )
      {
        v17 = 0;
        goto LABEL_43;
      }
LABEL_77:
      v16 = (common::midb::RedisMgr *)&common::milog::MiLogDefault::default_log_obj_;
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_mgr.cpp",
        "cmdSRem",
        1068);
      v36 = *(_QWORD *)(v6 + 32);
      if ( *(_BYTE *)(((unsigned __int64)(v36 + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v36 + 32);
      }
      else if ( !*(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
      {
        v16 = (common::midb::RedisMgr *)"sadd [%s] failed, %s";
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)&v50,
          "sadd [%s] failed, %s",
          (const char *)M_pi->_vptr__Sp_counted_base,
          *(const char **)(v36 + 32));
LABEL_82:
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v50);
        v17 = -1;
        goto LABEL_43;
      }
      __asan_report_load8(M_pi);
      goto LABEL_82;
    }
LABEL_76:
    __asan_report_load4(v23);
    goto LABEL_77;
  }
  v17 = -1;
LABEL_43:
  v25 = *(_QWORD *)(v6 + 40);
  v26 = v25;
  if ( !v25 )
    goto LABEL_49;
  v27 = (volatile signed __int32 *)(v25 + 8);
  if ( &_pthread_key_create )
  {
    v28 = *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v27 & 7) + 3) < v28 || !v28 )
    {
      v29 = _InterlockedExchangeAdd(v27, 0xFFFFFFFF);
      goto LABEL_48;
    }
    v25 = __asan_report_store4(v27, v16);
  }
  v37 = *(_BYTE *)(((unsigned __int64)(v25 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v25 + 8) & 7) + 3) >= v37 && v37 )
  {
    __asan_report_load4(v25 + 8);
    goto LABEL_89;
  }
  v29 = *(_DWORD *)(v26 + 8);
  *(_DWORD *)(v26 + 8) = v29 - 1;
LABEL_48:
  if ( v29 != 1 )
    goto LABEL_49;
LABEL_89:
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
  {
    v38 = v26;
    __asan_report_load8(v26);
    goto LABEL_100;
  }
  v38 = *(_QWORD *)v26 + 16LL;
  if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
  {
LABEL_100:
    __asan_report_load8(v38);
    goto LABEL_101;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v26 + 16LL))(v26);
  v38 = v26 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_102;
  v39 = *(_BYTE *)((v38 >> 3) + 0x7FFF8000);
  if ( (char)((v38 & 7) + 3) < v39 || !v39 )
  {
    v40 = _InterlockedExchangeAdd((volatile signed __int32 *)v38, 0xFFFFFFFF);
    goto LABEL_95;
  }
LABEL_101:
  __asan_report_store4(v38, v16);
LABEL_102:
  v42 = *(_BYTE *)(((v26 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v26 + 12) & 7) + 3) >= v42 && v42 )
  {
    __asan_report_load4(v26 + 12);
LABEL_106:
    v41 = v26;
    __asan_report_load8(v26);
LABEL_107:
    v43 = (struct _Unwind_Exception *)__asan_report_load8(v41);
    M_p = v49._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v49._M_dataplus._M_p != &v49._anon_0 )
      operator delete(v49._M_dataplus._M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v43);
  }
  v40 = *(_DWORD *)(v26 + 12);
  *(_DWORD *)(v26 + 12) = v40 - 1;
LABEL_95:
  if ( v40 != 1 )
    goto LABEL_49;
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
    goto LABEL_106;
  v41 = *(_QWORD *)v26 + 24LL;
  if ( *(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
    goto LABEL_107;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v26 + 24LL))(v26);
LABEL_49:
  if ( v51 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v17;
};

// Line 1076: range 000000000CAA188C-000000000CAA1A64
int32_t __fastcall common::midb::RedisMgr::cmdSRem(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        const std::string *value,
        uint32_t *rem_num)
{
  uint32_t *v8; // r9
  int32_t v9; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v12; // dl
  signed __int32 M_use_count; // eax
  char v15; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v17; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v19; // rdi
  char v20; // dl
  struct _Unwind_Exception *v21; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // rdi
  __int64 v23; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v9 = common::midb::RedisMgr::cmdSRem(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v23),
         value,
         (const std::string *)rem_num,
         v8);
  v10 = v24;
  if ( v24 )
  {
    p_M_use_count = &v24->_M_use_count;
    if ( &_pthread_key_create )
    {
      v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v23);
    }
    v15 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v15 && v15 )
    {
      __asan_report_load4(&v10->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v10->_M_use_count;
    v10->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v9;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v10;
      __asan_report_load8(v10);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v10->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 2))(v10);
        p_M_weak_count = &v10->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v17 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v17 || !v17 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v23);
LABEL_26:
        v20 = *(_BYTE *)(((unsigned __int64)&v10->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v10 + 12) & 7) + 3) >= v20 && v20 )
        {
          __asan_report_load4(&v10->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v10->_M_weak_count;
        v10->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v9;
        if ( !*(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          v19 = (unsigned __int64)(v10->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 3))(v10);
            return v9;
          }
LABEL_31:
          v21 = (struct _Unwind_Exception *)__asan_report_load8(v19);
          v22 = v24;
          if ( v24 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v24);
          __asan_handle_no_return(v22);
          _Unwind_Resume(v21);
        }
LABEL_30:
        v19 = (unsigned __int64)v10;
        __asan_report_load8(v10);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v9;
};

// Line 1106: range 000000000CAA4730-000000000CAA48FE
int32_t __fastcall common::midb::RedisMgr::cmdSRem(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        std::set<std::string> *value_set)
{
  std::set<std::string> *v6; // r8
  int32_t v7; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v8; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v10; // dl
  signed __int32 M_use_count; // eax
  char v13; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v15; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v17; // rdi
  char v18; // dl
  struct _Unwind_Exception *v19; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v7 = common::midb::RedisMgr::cmdSRem(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v21),
         (const std::string *)value_set,
         v6);
  v8 = v22;
  if ( v22 )
  {
    p_M_use_count = &v22->_M_use_count;
    if ( &_pthread_key_create )
    {
      v10 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v10 || !v10 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v21);
    }
    v13 = *(_BYTE *)(((unsigned __int64)&v8->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v8 + 8) & 7) + 3) >= v13 && v13 )
    {
      __asan_report_load4(&v8->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v8->_M_use_count;
    v8->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v7;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v8;
      __asan_report_load8(v8);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v8->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 2))(v8);
        p_M_weak_count = &v8->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v15 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v15 || !v15 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v21);
LABEL_26:
        v18 = *(_BYTE *)(((unsigned __int64)&v8->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v8 + 12) & 7) + 3) >= v18 && v18 )
        {
          __asan_report_load4(&v8->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v8->_M_weak_count;
        v8->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v7;
        if ( !*(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          v17 = (unsigned __int64)(v8->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 3))(v8);
            return v7;
          }
LABEL_31:
          v19 = (struct _Unwind_Exception *)__asan_report_load8(v17);
          v20 = v22;
          if ( v22 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v22);
          __asan_handle_no_return(v20);
          _Unwind_Resume(v19);
        }
LABEL_30:
        v17 = (unsigned __int64)v8;
        __asan_report_load8(v8);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v7;
};

// Line 1111: range 000000000CA95FE4-000000000CA966CD
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::midb::RedisMgr::cmdSRem(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        const std::string *key,
        std::set<std::string> *value_set)
{
  unsigned __int64 v5; // r15
  _DWORD *v6; // rax
  std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  std::string::size_type M_string_length; // rax
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  signed __int64 v15; // r13
  void *v16; // rsp
  unsigned __int64 v17; // r12
  void *v18; // rsp
  __int64 v19; // rbx
  std::string *v20; // rdi
  const char *vptr_RedisConnBase; // rsi
  std::forward_iterator_tag v22; // cl
  unsigned __int64 p_M_string_length; // rdi
  const std::string *v24; // rdi
  const std::string *i; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rdx
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdi
  char v34; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v35; // rdi
  char *v36; // rdi
  volatile signed __int32 *p_last_use_time; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v38; // rax
  std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2>::element_type *v39; // rdi
  unsigned __int64 v40; // rdx
  const char *v41; // rax
  char v42; // cl
  __int64 v43; // rsi
  __int64 v44; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v45; // [rsp+8h] [rbp-128h]
  unsigned __int64 v46; // [rsp+10h] [rbp-120h]
  uint32_t argv_num; // [rsp+1Ch] [rbp-114h] BYREF
  common::midb::RedisMgr *thisa; // [rsp+20h] [rbp-110h]
  _DWORD *v49; // [rsp+28h] [rbp-108h]
  char *v50; // [rsp+30h] [rbp-100h]
  const std::string *keya; // [rsp+38h] [rbp-F8h]
  char *v52; // [rsp+40h] [rbp-F0h]
  common::midb::RedisConnPtr conn_ptra; // [rsp+48h] [rbp-E8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v54; // [rsp+58h] [rbp-D8h]
  common::milog::MiLogStream v55; // [rsp+60h] [rbp-D0h] BYREF
  char v56[128]; // [rsp+80h] [rbp-B0h] BYREF
  char v57[48]; // [rsp+100h] [rbp-30h] BYREF

  thisa = this;
  conn_ptra._M_ptr = conn_ptr._M_ptr;
  keya = (const std::string *)conn_ptr._M_refcount._M_pi;
  v5 = (unsigned __int64)v56;
  v50 = v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_1(128LL);
    if ( v12 )
      v5 = v12;
  }
  v52 = (char *)(v5 + 128);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 16 14 reply_ptr:1145 64 32 8 cmd:1129";
  *(_QWORD *)(v5 + 16) = common::midb::RedisMgr::cmdSRem;
  v6 = (_DWORD *)(v5 >> 3);
  v49 = v6;
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr >> 3) + 0x7FFF8000) )
  {
    M_ptr = conn_ptra._M_ptr;
    __asan_report_load8(conn_ptra._M_ptr);
LABEL_13:
    LODWORD(M_string_length) = __asan_report_load8(M_ptr);
    goto LABEL_14;
  }
  if ( !conn_ptra._M_ptr->_vptr_RedisConnBase )
  {
    v9 = -1;
    goto LABEL_7;
  }
  M_ptr = (std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2>::element_type *)&key[1]._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&key[1]._M_string_length >> 3) + 0x7FFF8000) )
    goto LABEL_13;
  M_string_length = key[1]._M_string_length;
  if ( !M_string_length )
  {
    v9 = 0;
    goto LABEL_7;
  }
LABEL_14:
  argv_num = M_string_length + 2;
  v13 = 8LL * (unsigned int)(M_string_length + 2);
  v14 = 32LL - ((8 * ((_BYTE)M_string_length + 2)) & 0x1F);
  v15 = (v13 + v14 + 103) & 0xFFFFFFFFFFFFFFF0LL;
  v16 = alloca(v13 + v14 + 88);
  v46 = ((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL;
  v17 = (((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 32;
  __asan_alloca_poison(v17, v13);
  v18 = alloca(v15);
  v45 = ((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL;
  __asan_alloca_poison(v17, v13);
  v19 = (__int64)v52;
  v20 = (std::string *)(v52 - 64);
  *((_QWORD *)v52 - 8) = v52 - 48;
  vptr_RedisConnBase = &byte_1A0D1324[-4];
  std::string::_M_construct<char const*>(v20, &byte_1A0D1324[-4], byte_1A0D1324, v22);
  if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8((((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 32, vptr_RedisConnBase);
    goto LABEL_23;
  }
  vptr_RedisConnBase = (const char *)v46;
  *(_QWORD *)(v46 + 32) = *(_QWORD *)(v19 - 64);
  if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_store8((((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 32, vptr_RedisConnBase);
    goto LABEL_24;
  }
  vptr_RedisConnBase = (const char *)v45;
  *(_QWORD *)(v45 + 32) = *((_QWORD *)v52 - 7);
  if ( *(_BYTE *)(((unsigned __int64)keya >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    p_M_string_length = (unsigned __int64)keya;
    __asan_report_load8(keya);
    goto LABEL_25;
  }
  p_M_string_length = (((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 40;
  if ( *(_BYTE *)((p_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8(p_M_string_length, vptr_RedisConnBase);
    goto LABEL_26;
  }
  *(_QWORD *)((((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 0x28) = keya->_M_dataplus._M_p;
  p_M_string_length = (unsigned __int64)&keya->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&keya->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(p_M_string_length);
    goto LABEL_27;
  }
  p_M_string_length = (((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 40;
  if ( *(_BYTE *)((p_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_store8(p_M_string_length, vptr_RedisConnBase);
    goto LABEL_28;
  }
  *(_QWORD *)((((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 0x28) = keya->_M_string_length;
  p_M_string_length = (unsigned __int64)(&key->_anon_0._M_allocated_capacity + 1);
  if ( *(_BYTE *)(((unsigned __int64)(&key->_anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    v26 = __asan_report_load8(p_M_string_length);
    goto LABEL_29;
  }
  v24 = (const std::string *)*(&key->_anon_0._M_allocated_capacity + 1);
  key = (const std::string *)((char *)key + 8);
  v19 = 2LL;
  for ( i = v24; ; i = (const std::string *)std::_Rb_tree_increment((const std::_Rb_tree_node_base *)v29) )
  {
    v29 = (__int64)i;
    if ( i == key )
      break;
    v26 = (unsigned __int64)&i[1];
    if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
    {
LABEL_29:
      v27 = __asan_report_load8(v26);
LABEL_30:
      v28 = __asan_report_store8(v27, vptr_RedisConnBase);
LABEL_31:
      v29 = v28;
      __asan_report_load8(v28);
      goto LABEL_32;
    }
    v27 = v17 + 8LL * (unsigned int)v19;
    if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
      goto LABEL_30;
    *(_QWORD *)((((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 0x20 + 8LL * (unsigned int)v19) = *(_QWORD *)(v29 + 32);
    v28 = v29 + 40;
    if ( *(_BYTE *)(((unsigned __int64)(v29 + 40) >> 3) + 0x7FFF8000) )
      goto LABEL_31;
    v30 = *(_QWORD *)(v29 + 40);
    if ( *(_BYTE *)(((v17 + 8LL * (unsigned int)v19) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8(v17 + 8LL * (unsigned int)v19, vptr_RedisConnBase);
      break;
    }
LABEL_32:
    *(_QWORD *)((((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 0x20 + 8LL * (unsigned int)v19) = v30;
    v19 = (unsigned int)(v19 + 1);
  }
  if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(conn_ptra._M_ptr);
    goto LABEL_44;
  }
  vptr_RedisConnBase = (const char *)conn_ptra._M_ptr->_vptr_RedisConnBase;
  if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr->_vptr_RedisConnBase >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    v31 = (unsigned __int64)vptr_RedisConnBase;
    __asan_report_load8(vptr_RedisConnBase);
    goto LABEL_45;
  }
  v31 = *(_QWORD *)vptr_RedisConnBase + 48LL;
  if ( !*(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
  {
    v19 = (__int64)v52;
    (*(void (__fastcall **)(char *, const char *, _QWORD, unsigned __int64, unsigned __int64))(*(_QWORD *)vptr_RedisConnBase
                                                                                             + 48LL))(
      v52 - 96,
      vptr_RedisConnBase,
      argv_num,
      (((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 32,
      (((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 32);
    goto LABEL_46;
  }
LABEL_45:
  __asan_report_load8(v31);
LABEL_46:
  v33 = *(_QWORD *)(v19 - 96);
  if ( v33 )
  {
    v34 = *(_BYTE *)((v33 >> 3) + 0x7FFF8000);
    if ( v34 && v34 <= 3 )
    {
      __asan_report_load4(v33);
    }
    else if ( *(_DWORD *)v33 != 6 )
    {
      goto LABEL_50;
    }
  }
  if ( !v33 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSRem",
      1152);
    if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr >> 3) + 0x7FFF8000) )
    {
      v39 = conn_ptra._M_ptr;
      __asan_report_load8(conn_ptra._M_ptr);
    }
    else
    {
      v39 = (std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2>::element_type *)conn_ptra._M_ptr->_vptr_RedisConnBase;
      if ( !*(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr->_vptr_RedisConnBase >> 3) + 0x7FFF8000) )
      {
        v40 = (unsigned __int64)(v39->_vptr_RedisConnBase + 15);
        if ( !*(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
        {
          v41 = (const char *)(*((__int64 (**)(void))v39->_vptr_RedisConnBase + 15))();
LABEL_72:
          vptr_RedisConnBase = "[REDIS][NETWORK]error:%s";
          common::milog::MiLogStream::operator()(&v55, "[REDIS][NETWORK]error:%s", v41);
          common::milog::MiLogStream::~MiLogStream(&v55);
          goto LABEL_57;
        }
LABEL_71:
        v41 = (const char *)__asan_report_load8(v40);
        goto LABEL_72;
      }
    }
    __asan_report_load8(v39);
    goto LABEL_71;
  }
LABEL_57:
  if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr >> 3) + 0x7FFF8000) )
  {
    p_last_use_time = (volatile signed __int32 *)conn_ptra._M_ptr;
    __asan_report_load8(conn_ptra._M_ptr);
    goto LABEL_74;
  }
  vptr_RedisConnBase = (const char *)conn_ptra._M_ptr;
  conn_ptra._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)conn_ptra._M_ptr->_vptr_RedisConnBase;
  p_last_use_time = (volatile signed __int32 *)&conn_ptra._M_ptr->last_use_time;
  if ( *(_BYTE *)(((unsigned __int64)&conn_ptra._M_ptr->last_use_time >> 3) + 0x7FFF8000) )
  {
LABEL_74:
    __asan_report_load8(p_last_use_time);
    goto LABEL_75;
  }
  v38 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&conn_ptra._M_ptr->last_use_time;
  v54 = v38;
  if ( !v38 )
    goto LABEL_64;
  p_last_use_time = &v38->_M_use_count;
  if ( &_pthread_key_create )
  {
    v32 = *(unsigned __int8 *)(((unsigned __int64)p_last_use_time >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_last_use_time & 7) + 3) < (char)v32 || !(_BYTE)v32 )
    {
      _InterlockedAdd(p_last_use_time, 1u);
      goto LABEL_64;
    }
LABEL_75:
    v38 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_last_use_time, vptr_RedisConnBase);
  }
  v42 = *(_BYTE *)(((unsigned __int64)&v38->_M_use_count >> 3) + 0x7FFF8000);
  v32 = (((_BYTE)v38 + 8) & 7u) + 3;
  if ( (char)((((_BYTE)v38 + 8) & 7) + 3) >= v42 && v42 )
  {
    __asan_report_load4(&v38->_M_use_count);
  }
  else
  {
    ++v38->_M_use_count;
LABEL_64:
    common::midb::RedisMgr::markConnToDestory(
      thisa,
      (common::midb::RedisConnPtr)__PAIR128__(v32, (common::midb::RedisConnPtr *)&conn_ptra._M_refcount));
  }
  if ( v54 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v54);
LABEL_50:
  v35 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v52 - 11);
  if ( v35 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v35);
  v36 = (char *)*((_QWORD *)v52 - 8);
  if ( v36 != v52 - 48 )
    operator delete(v36);
  v9 = 0;
LABEL_7:
  if ( v50 == (char *)v5 )
  {
    v10 = (__int64)v49;
    *((_QWORD *)v49 + 268431360) = 0LL;
    *(_DWORD *)(v10 + 2147450892) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    v43 = (__int64)v49;
    *((_QWORD *)v49 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(v43 + 2147450888) = 0xF5F5F5F5F5F5F5F5LL;
  }
  __asan_allocas_unpoison(&v44, v57);
  return v9;
};

// Line 1161: range 000000000CAA505E-000000000CAA5251
int32_t __fastcall common::midb::RedisMgr::cmdSScan(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        uint32_t cursor,
        uint32_t scan_count,
        std::set<std::string> *value_set,
        uint32_t *next_cursor)
{
  uint32_t v9; // r14d
  int32_t v10; // r14d
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v13; // dl
  signed __int32 M_use_count; // eax
  char v16; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v18; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v20; // rdi
  char v21; // dl
  struct _Unwind_Exception *v22; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v23; // rdi
  uint32_t *v24; // [rsp-8h] [rbp-58h]
  common::midb::RedisConnPtr conn_ptr; // [rsp+10h] [rbp-40h] BYREF

  v9 = (unsigned int)value_set;
  common::midb::RedisMgr::grabConn(this, index);
  v10 = common::midb::RedisMgr::cmdSScan(
          this,
          (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &conn_ptr),
          (const std::string *)cursor,
          scan_count,
          v9,
          (std::set<std::string> *)next_cursor,
          v24);
  M_pi = conn_ptr._M_refcount._M_pi;
  if ( conn_ptr._M_refcount._M_pi )
  {
    p_M_use_count = &conn_ptr._M_refcount._M_pi->_M_use_count;
    if ( &_pthread_key_create )
    {
      v13 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v13 || !v13 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &conn_ptr);
    }
    v16 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v16 && v16 )
    {
      __asan_report_load4(&M_pi->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = M_pi->_M_use_count;
    M_pi->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v10;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)M_pi;
      __asan_report_load8(M_pi);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 2))(M_pi);
        p_M_weak_count = &M_pi->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v18 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v18 || !v18 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &conn_ptr);
LABEL_26:
        v21 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v21 && v21 )
        {
          __asan_report_load4(&M_pi->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = M_pi->_M_weak_count;
        M_pi->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v10;
        if ( !*(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
        {
          v20 = (unsigned __int64)(M_pi->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base
             + 3))(M_pi);
            return v10;
          }
LABEL_31:
          v22 = (struct _Unwind_Exception *)__asan_report_load8(v20);
          v23 = conn_ptr._M_refcount._M_pi;
          if ( conn_ptr._M_refcount._M_pi )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(conn_ptr._M_refcount._M_pi);
          __asan_handle_no_return(v23);
          _Unwind_Resume(v22);
        }
LABEL_30:
        v20 = (unsigned __int64)M_pi;
        __asan_report_load8(M_pi);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v10;
};

// Line 1216: range 000000000CAA1A6A-000000000CAA1C38
int32_t __fastcall common::midb::RedisMgr::cmdExpire(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        uint32_t ttl)
{
  uint32_t v6; // r8d
  int32_t v7; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v8; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v10; // dl
  signed __int32 M_use_count; // eax
  char v13; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v15; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v17; // rdi
  char v18; // dl
  struct _Unwind_Exception *v19; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v7 = common::midb::RedisMgr::cmdExpire(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v21),
         (const std::string *)ttl,
         v6);
  v8 = v22;
  if ( v22 )
  {
    p_M_use_count = &v22->_M_use_count;
    if ( &_pthread_key_create )
    {
      v10 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v10 || !v10 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v21);
    }
    v13 = *(_BYTE *)(((unsigned __int64)&v8->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v8 + 8) & 7) + 3) >= v13 && v13 )
    {
      __asan_report_load4(&v8->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v8->_M_use_count;
    v8->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v7;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v8;
      __asan_report_load8(v8);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v8->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 2))(v8);
        p_M_weak_count = &v8->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v15 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v15 || !v15 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v21);
LABEL_26:
        v18 = *(_BYTE *)(((unsigned __int64)&v8->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v8 + 12) & 7) + 3) >= v18 && v18 )
        {
          __asan_report_load4(&v8->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v8->_M_weak_count;
        v8->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v7;
        if ( !*(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          v17 = (unsigned __int64)(v8->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 3))(v8);
            return v7;
          }
LABEL_31:
          v19 = (struct _Unwind_Exception *)__asan_report_load8(v17);
          v20 = v22;
          if ( v22 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v22);
          __asan_handle_no_return(v20);
          _Unwind_Resume(v19);
        }
LABEL_30:
        v17 = (unsigned __int64)v8;
        __asan_report_load8(v8);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v7;
};

// Line 1221: range 000000000CA8048C-000000000CA80B9A
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::midb::RedisMgr::cmdExpire(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        const std::string *key,
        uint32_t ttl)
{
  volatile signed __int32 *M_ptr; // rbp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r12
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r14
  common::midb::RedisMgr *v8; // rsi
  __int64 v9; // rax
  std::string::size_type M_string_length; // r15
  const char *vptr__Sp_counted_base; // r8
  volatile signed __int32 *p_M_use_count; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v13; // rax
  char v14; // dl
  unsigned int v15; // r12d
  char v16; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v17; // rbp
  _Atomic_word *v18; // rdi
  char v19; // dl
  signed __int32 M_use_count; // eax
  unsigned __int64 v21; // rdi
  char v22; // al
  unsigned __int64 v23; // rbp
  volatile signed __int32 *v24; // rdi
  char v25; // dl
  signed __int32 v26; // eax
  char v28; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v30; // dl
  signed __int32 M_weak_count; // eax
  char v32; // dl
  __int64 v33; // rax
  char v34; // dl
  unsigned __int64 v35; // rdi
  char v36; // dl
  signed __int32 v37; // eax
  unsigned __int64 v38; // rdi
  char v39; // dl
  struct _Unwind_Exception *v40; // rbx
  std::string::pointer M_p; // rdi
  uint32_t ttla; // [rsp+1Ch] [rbp-CCh]
  __int64 conn_ptra; // [rsp+20h] [rbp-C8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v45; // [rsp+28h] [rbp-C0h]
  std::string s; // [rsp+30h] [rbp-B8h] BYREF
  std::string v47; // [rsp+50h] [rbp-98h] BYREF
  char v48[120]; // [rsp+70h] [rbp-78h] BYREF

  M_ptr = (volatile signed __int32 *)conn_ptr._M_ptr;
  M_pi = conn_ptr._M_refcount._M_pi;
  ttla = (unsigned int)key;
  v6 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_0(64LL);
    if ( v9 )
      v6 = v9;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 14 reply_ptr:1228";
  *(_QWORD *)(v6 + 16) = common::midb::RedisMgr::cmdExpire;
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  s._M_dataplus._M_p = s._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&s, &byte_1A0CF744[-4], byte_1A0CF744, (std::forward_iterator_tag)key);
  v8 = (common::midb::RedisMgr *)M_pi;
  common::tools::StringUtils::trim(&v47, (const std::string *)M_pi, &s, 1);
  M_string_length = v47._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v47._M_dataplus._M_p != &v47._anon_0 )
    operator delete(v47._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s._M_dataplus._M_p != &s._anon_0 )
    operator delete(s._M_dataplus._M_p);
  if ( !M_string_length )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v47,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdExpire",
      1224);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v47, "key is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v47);
    v15 = -1;
    goto LABEL_45;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(M_pi);
    goto LABEL_21;
  }
  vptr__Sp_counted_base = (const char *)M_pi->_vptr__Sp_counted_base;
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    p_M_use_count = M_ptr;
    __asan_report_load8(M_ptr);
    goto LABEL_22;
  }
  conn_ptra = *(_QWORD *)M_ptr;
  p_M_use_count = M_ptr + 2;
  if ( *(_BYTE *)(((unsigned __int64)(M_ptr + 2) >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(p_M_use_count);
LABEL_23:
    v13 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count, M_pi);
    goto LABEL_24;
  }
  v13 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)M_ptr + 1);
  v45 = v13;
  if ( !v13 )
  {
LABEL_18:
    v8 = this;
    common::midb::RedisMgr::command(
      (common::midb::RedisMgr *const)(v6 + 32),
      (common::midb::RedisConnPtr)__PAIR128__(&conn_ptra, (unsigned __int64)this),
      "EXPIRE %s %d",
      vptr__Sp_counted_base,
      ttla);
    goto LABEL_28;
  }
  p_M_use_count = &v13->_M_use_count;
  if ( &_pthread_key_create )
  {
    v14 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v14 || !v14 )
    {
      _InterlockedAdd(p_M_use_count, 1u);
      goto LABEL_18;
    }
    goto LABEL_23;
  }
LABEL_24:
  v16 = *(_BYTE *)(((unsigned __int64)&v13->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v13 + 8) & 7) + 3) < v16 || !v16 )
  {
    ++v13->_M_use_count;
    goto LABEL_18;
  }
  __asan_report_load4(&v13->_M_use_count);
LABEL_28:
  v17 = v45;
  if ( !v45 )
    goto LABEL_34;
  v18 = &v45->_M_use_count;
  if ( &_pthread_key_create )
  {
    v19 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v18 & 7) + 3) < v19 || !v19 )
    {
      M_use_count = _InterlockedExchangeAdd(v18, 0xFFFFFFFF);
      goto LABEL_33;
    }
    __asan_report_store4(v18, v8);
  }
  v28 = *(_BYTE *)(((unsigned __int64)&v17->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v17 + 8) & 7) + 3) >= v28 && v28 )
  {
    __asan_report_load4(&v17->_M_use_count);
    goto LABEL_53;
  }
  M_use_count = v17->_M_use_count;
  v17->_M_use_count = M_use_count - 1;
LABEL_33:
  if ( M_use_count != 1 )
    goto LABEL_34;
LABEL_53:
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)v17;
    __asan_report_load8(v17);
    goto LABEL_64;
  }
  p_M_weak_count = (volatile signed __int32 *)(v17->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_64:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_65;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v17->_vptr__Sp_counted_base + 2))(v17);
  p_M_weak_count = &v17->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_66;
  v30 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v30 || !v30 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_59;
  }
LABEL_65:
  __asan_report_store4(p_M_weak_count, v8);
LABEL_66:
  v32 = *(_BYTE *)(((unsigned __int64)&v17->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v17 + 12) & 7) + 3) >= v32 && v32 )
  {
    __asan_report_load4(&v17->_M_weak_count);
LABEL_70:
    v21 = (unsigned __int64)v17;
    __asan_report_load8(v17);
    goto LABEL_71;
  }
  M_weak_count = v17->_M_weak_count;
  v17->_M_weak_count = M_weak_count - 1;
LABEL_59:
  if ( M_weak_count != 1 )
    goto LABEL_34;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    goto LABEL_70;
  v21 = (unsigned __int64)(v17->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_load8(v21);
    goto LABEL_72;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v17->_vptr__Sp_counted_base + 3))(v17);
LABEL_34:
  v21 = *(_QWORD *)(v6 + 32);
  if ( v21 )
  {
    v22 = *(_BYTE *)((v21 >> 3) + 0x7FFF8000);
    if ( !v22 || v22 > 3 )
    {
      if ( *(_DWORD *)v21 != 6 )
      {
        v15 = 0;
        goto LABEL_39;
      }
LABEL_73:
      v8 = (common::midb::RedisMgr *)&common::milog::MiLogDefault::default_log_obj_;
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&v47,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_mgr.cpp",
        "cmdExpire",
        1236);
      v33 = *(_QWORD *)(v6 + 32);
      if ( *(_BYTE *)(((unsigned __int64)(v33 + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v33 + 32);
      }
      else if ( !*(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
      {
        v8 = (common::midb::RedisMgr *)"expire [%s] failed, %s";
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)&v47,
          "expire [%s] failed, %s",
          (const char *)M_pi->_vptr__Sp_counted_base,
          *(const char **)(v33 + 32));
LABEL_78:
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v47);
        v15 = -1;
        goto LABEL_39;
      }
      __asan_report_load8(M_pi);
      goto LABEL_78;
    }
LABEL_72:
    __asan_report_load4(v21);
    goto LABEL_73;
  }
  v15 = -1;
LABEL_39:
  v23 = *(_QWORD *)(v6 + 40);
  if ( !v23 )
    goto LABEL_45;
  v24 = (volatile signed __int32 *)(v23 + 8);
  if ( &_pthread_key_create )
  {
    v25 = *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v24 & 7) + 3) < v25 || !v25 )
    {
      v26 = _InterlockedExchangeAdd(v24, 0xFFFFFFFF);
      goto LABEL_44;
    }
    __asan_report_store4(v24, v8);
  }
  v34 = *(_BYTE *)(((v23 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v23 + 8) & 7) + 3) >= v34 && v34 )
  {
    __asan_report_load4(v23 + 8);
    goto LABEL_85;
  }
  v26 = *(_DWORD *)(v23 + 8);
  *(_DWORD *)(v23 + 8) = v26 - 1;
LABEL_44:
  if ( v26 != 1 )
    goto LABEL_45;
LABEL_85:
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
    v35 = v23;
    __asan_report_load8(v23);
    goto LABEL_96;
  }
  v35 = *(_QWORD *)v23 + 16LL;
  if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
  {
LABEL_96:
    __asan_report_load8(v35);
    goto LABEL_97;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v23 + 16LL))(v23);
  v35 = v23 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_98;
  v36 = *(_BYTE *)((v35 >> 3) + 0x7FFF8000);
  if ( (char)((v35 & 7) + 3) < v36 || !v36 )
  {
    v37 = _InterlockedExchangeAdd((volatile signed __int32 *)v35, 0xFFFFFFFF);
    goto LABEL_91;
  }
LABEL_97:
  __asan_report_store4(v35, v8);
LABEL_98:
  v39 = *(_BYTE *)(((v23 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v23 + 12) & 7) + 3) >= v39 && v39 )
  {
    __asan_report_load4(v23 + 12);
LABEL_102:
    v38 = v23;
    __asan_report_load8(v23);
LABEL_103:
    v40 = (struct _Unwind_Exception *)__asan_report_load8(v38);
    M_p = s._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s._M_dataplus._M_p != &s._anon_0 )
      operator delete(s._M_dataplus._M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v40);
  }
  v37 = *(_DWORD *)(v23 + 12);
  *(_DWORD *)(v23 + 12) = v37 - 1;
LABEL_91:
  if ( v37 != 1 )
    goto LABEL_45;
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
    goto LABEL_102;
  v38 = *(_QWORD *)v23 + 24LL;
  if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
    goto LABEL_103;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v23 + 24LL))(v23);
LABEL_45:
  if ( v48 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v15;
};

// Line 1244: range 000000000CAA1C3E-000000000CAA1E1A
__int64 __fastcall common::midb::RedisMgr::cmdZAdd(
        common::midb::RedisMgr *const this,
        uint32_t index,
        const std::string *key,
        const std::string *value,
        double score)
{
  const std::string *v7; // r8
  unsigned int v8; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v11; // dl
  signed __int32 M_use_count; // eax
  char v14; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v16; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v18; // rdi
  char v19; // dl
  struct _Unwind_Exception *v20; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v21; // rdi
  common::midb::RedisConnPtr conn_ptr; // [rsp+10h] [rbp-38h] BYREF

  common::midb::RedisMgr::grabConn(this, index);
  v8 = common::midb::RedisMgr::cmdZAdd(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &conn_ptr),
         value,
         v7,
         score);
  M_pi = conn_ptr._M_refcount._M_pi;
  if ( conn_ptr._M_refcount._M_pi )
  {
    p_M_use_count = &conn_ptr._M_refcount._M_pi->_M_use_count;
    if ( &_pthread_key_create )
    {
      v11 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v11 || !v11 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &conn_ptr);
    }
    v14 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v14 && v14 )
    {
      __asan_report_load4(&M_pi->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = M_pi->_M_use_count;
    M_pi->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v8;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)M_pi;
      __asan_report_load8(M_pi);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 2))(M_pi);
        p_M_weak_count = &M_pi->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v16 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v16 || !v16 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &conn_ptr);
LABEL_26:
        v19 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v19 && v19 )
        {
          __asan_report_load4(&M_pi->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = M_pi->_M_weak_count;
        M_pi->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v8;
        if ( !*(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
        {
          v18 = (unsigned __int64)(M_pi->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base
             + 3))(M_pi);
            return v8;
          }
LABEL_31:
          v20 = (struct _Unwind_Exception *)__asan_report_load8(v18);
          v21 = conn_ptr._M_refcount._M_pi;
          if ( conn_ptr._M_refcount._M_pi )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(conn_ptr._M_refcount._M_pi);
          __asan_handle_no_return(v21);
          _Unwind_Resume(v20);
        }
LABEL_30:
        v18 = (unsigned __int64)M_pi;
        __asan_report_load8(M_pi);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v8;
};

// Line 1249: range 000000000CA85F6E-000000000CA88155
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::midb::RedisMgr::cmdZAdd(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        unsigned __int64 key,
        const std::string *value,
        double score)
{
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r13
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2>::element_type *v9; // rsi
  __int64 v10; // rax
  std::string::size_type v11; // rcx
  std::string::pointer v12; // r9
  std::string::pointer vptr__Sp_counted_base; // r8
  volatile signed __int32 *M_ptr; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v15; // rax
  char v16; // dl
  common::midb::RedisMgr *v17; // rsi
  unsigned int v18; // r12d
  __int64 v19; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // r12
  _Atomic_word *p_M_use_count; // rdi
  char v22; // dl
  signed __int32 M_use_count; // eax
  unsigned __int64 v24; // rdi
  char v25; // al
  __int64 v26; // rax
  unsigned __int64 v27; // r14
  volatile signed __int32 *v28; // rdi
  char v29; // dl
  signed __int32 v30; // eax
  char v32; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v34; // dl
  signed __int32 M_weak_count; // eax
  char v36; // dl
  __int64 v37; // rax
  char v38; // dl
  unsigned __int64 v39; // rdi
  char v40; // dl
  signed __int32 v41; // eax
  unsigned __int64 v42; // rdi
  char v43; // dl
  struct _Unwind_Exception *v44; // rbx
  std::string::pointer M_p; // rdi
  std::string *s; // [rsp+20h] [rbp-D0h]
  common::midb::RedisConnPtr conn_ptra; // [rsp+28h] [rbp-C8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v49; // [rsp+38h] [rbp-B8h]
  std::string v50; // [rsp+40h] [rbp-B0h] BYREF
  std::string v51; // [rsp+60h] [rbp-90h] BYREF
  char v52[112]; // [rsp+80h] [rbp-70h] BYREF

  conn_ptra._M_ptr = conn_ptr._M_ptr;
  M_pi = conn_ptr._M_refcount._M_pi;
  v7 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_0(64LL);
    if ( v10 )
      v7 = v10;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 16 14 reply_ptr:1256";
  *(_QWORD *)(v7 + 16) = common::midb::RedisMgr::cmdZAdd;
  v8 = v7 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202178560;
  v50._M_dataplus._M_p = v50._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v50, &byte_1A0CF744[-4], byte_1A0CF744, (std::forward_iterator_tag)&v50);
  v9 = (std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2>::element_type *)M_pi;
  common::tools::StringUtils::trim(&v51, (const std::string *)M_pi, &v50, 1);
  s = (std::string *)v51._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v51._M_dataplus._M_p != &v51._anon_0 )
    operator delete(v51._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v50._M_dataplus._M_p != &v50._anon_0 )
    operator delete(v50._M_dataplus._M_p);
  if ( !s )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v51,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdZAdd",
      1252);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v51, "key is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v51);
    v18 = -1;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(((key + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(key + 8);
    goto LABEL_23;
  }
  v11 = *(_QWORD *)(key + 8);
  if ( *(_BYTE *)((key >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(key);
    goto LABEL_24;
  }
  v12 = *(std::string::pointer *)key;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(M_pi);
    goto LABEL_25;
  }
  vptr__Sp_counted_base = (std::string::pointer)M_pi->_vptr__Sp_counted_base;
  if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    M_ptr = (volatile signed __int32 *)conn_ptra._M_ptr;
    __asan_report_load8(conn_ptra._M_ptr);
    goto LABEL_26;
  }
  v9 = conn_ptra._M_ptr;
  conn_ptra._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)conn_ptra._M_ptr->_vptr_RedisConnBase;
  M_ptr = (volatile signed __int32 *)&conn_ptra._M_ptr->last_use_time;
  if ( *(_BYTE *)(((unsigned __int64)&conn_ptra._M_ptr->last_use_time >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(M_ptr);
LABEL_27:
    v15 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(M_ptr, v9);
    goto LABEL_28;
  }
  v15 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&conn_ptra._M_ptr->last_use_time;
  v49 = v15;
  if ( !v15 )
  {
LABEL_20:
    v17 = this;
    common::midb::RedisMgr::command(
      (common::midb::RedisMgr *const)(v7 + 32),
      (common::midb::RedisConnPtr)__PAIR128__(
                                    (common::midb::RedisConnPtr *)&conn_ptra._M_refcount,
                                    (unsigned __int64)this),
      "ZADD %s %lf %b",
      vptr__Sp_counted_base,
      v12,
      score,
      v11);
    goto LABEL_32;
  }
  M_ptr = &v15->_M_use_count;
  if ( &_pthread_key_create )
  {
    v16 = *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)M_ptr & 7) + 3) < v16 || !v16 )
    {
      _InterlockedAdd(M_ptr, 1u);
      goto LABEL_20;
    }
    goto LABEL_27;
  }
LABEL_28:
  v17 = (common::midb::RedisMgr *)*(unsigned __int8 *)(((unsigned __int64)&v15->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v15 + 8) & 7) + 3) < (char)v17 || !(_BYTE)v17 )
  {
    ++v15->_M_use_count;
    goto LABEL_20;
  }
  __asan_report_load4(&v15->_M_use_count);
LABEL_32:
  v19 = (__int64)v49;
  v20 = v49;
  if ( !v49 )
    goto LABEL_38;
  p_M_use_count = &v49->_M_use_count;
  if ( &_pthread_key_create )
  {
    v22 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v22 || !v22 )
    {
      M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
      goto LABEL_37;
    }
    v19 = __asan_report_store4(p_M_use_count, v17);
  }
  v32 = *(_BYTE *)(((unsigned __int64)(v19 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v19 + 8) & 7) + 3) >= v32 && v32 )
  {
    __asan_report_load4(v19 + 8);
    goto LABEL_57;
  }
  M_use_count = v20->_M_use_count;
  v20->_M_use_count = M_use_count - 1;
LABEL_37:
  if ( M_use_count != 1 )
    goto LABEL_38;
LABEL_57:
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)v20;
    __asan_report_load8(v20);
    goto LABEL_68;
  }
  p_M_weak_count = (volatile signed __int32 *)(v20->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_69;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v20->_vptr__Sp_counted_base + 2))(v20);
  p_M_weak_count = &v20->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_70;
  v34 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v34 || !v34 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_63;
  }
LABEL_69:
  __asan_report_store4(p_M_weak_count, v17);
LABEL_70:
  v36 = *(_BYTE *)(((unsigned __int64)&v20->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v20 + 12) & 7) + 3) >= v36 && v36 )
  {
    __asan_report_load4(&v20->_M_weak_count);
LABEL_74:
    v24 = (unsigned __int64)v20;
    __asan_report_load8(v20);
    goto LABEL_75;
  }
  M_weak_count = v20->_M_weak_count;
  v20->_M_weak_count = M_weak_count - 1;
LABEL_63:
  if ( M_weak_count != 1 )
    goto LABEL_38;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    goto LABEL_74;
  v24 = (unsigned __int64)(v20->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_load8(v24);
    goto LABEL_76;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v20->_vptr__Sp_counted_base + 3))(v20);
LABEL_38:
  v24 = *(_QWORD *)(v7 + 32);
  if ( v24 )
  {
    v25 = *(_BYTE *)((v24 >> 3) + 0x7FFF8000);
    if ( !v25 || v25 > 3 )
    {
      if ( *(_DWORD *)v24 != 6 )
      {
        v18 = 0;
        goto LABEL_43;
      }
LABEL_77:
      v17 = (common::midb::RedisMgr *)&common::milog::MiLogDefault::default_log_obj_;
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&v51,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_mgr.cpp",
        "cmdZAdd",
        1264);
      v37 = *(_QWORD *)(v7 + 32);
      if ( *(_BYTE *)(((unsigned __int64)(v37 + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v37 + 32);
      }
      else if ( !*(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
      {
        v17 = (common::midb::RedisMgr *)"zadd [%s] failed, %s";
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)&v51,
          "zadd [%s] failed, %s",
          (const char *)M_pi->_vptr__Sp_counted_base,
          *(const char **)(v37 + 32));
LABEL_82:
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v51);
        v18 = -1;
        goto LABEL_43;
      }
      __asan_report_load8(M_pi);
      goto LABEL_82;
    }
LABEL_76:
    __asan_report_load4(v24);
    goto LABEL_77;
  }
  v18 = -1;
LABEL_43:
  v26 = *(_QWORD *)(v7 + 40);
  v27 = v26;
  if ( !v26 )
    goto LABEL_49;
  v28 = (volatile signed __int32 *)(v26 + 8);
  if ( &_pthread_key_create )
  {
    v29 = *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v28 & 7) + 3) < v29 || !v29 )
    {
      v30 = _InterlockedExchangeAdd(v28, 0xFFFFFFFF);
      goto LABEL_48;
    }
    v26 = __asan_report_store4(v28, v17);
  }
  v38 = *(_BYTE *)(((unsigned __int64)(v26 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v26 + 8) & 7) + 3) >= v38 && v38 )
  {
    __asan_report_load4(v26 + 8);
    goto LABEL_89;
  }
  v30 = *(_DWORD *)(v27 + 8);
  *(_DWORD *)(v27 + 8) = v30 - 1;
LABEL_48:
  if ( v30 != 1 )
    goto LABEL_49;
LABEL_89:
  if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
  {
    v39 = v27;
    __asan_report_load8(v27);
    goto LABEL_100;
  }
  v39 = *(_QWORD *)v27 + 16LL;
  if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
  {
LABEL_100:
    __asan_report_load8(v39);
    goto LABEL_101;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v27 + 16LL))(v27);
  v39 = v27 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_102;
  v40 = *(_BYTE *)((v39 >> 3) + 0x7FFF8000);
  if ( (char)((v39 & 7) + 3) < v40 || !v40 )
  {
    v41 = _InterlockedExchangeAdd((volatile signed __int32 *)v39, 0xFFFFFFFF);
    goto LABEL_95;
  }
LABEL_101:
  __asan_report_store4(v39, v17);
LABEL_102:
  v43 = *(_BYTE *)(((v27 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v27 + 12) & 7) + 3) >= v43 && v43 )
  {
    __asan_report_load4(v27 + 12);
LABEL_106:
    v42 = v27;
    __asan_report_load8(v27);
LABEL_107:
    v44 = (struct _Unwind_Exception *)__asan_report_load8(v42);
    M_p = v50._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v50._M_dataplus._M_p != &v50._anon_0 )
      operator delete(v50._M_dataplus._M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v44);
  }
  v41 = *(_DWORD *)(v27 + 12);
  *(_DWORD *)(v27 + 12) = v41 - 1;
LABEL_95:
  if ( v41 != 1 )
    goto LABEL_49;
  if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
    goto LABEL_106;
  v42 = *(_QWORD *)v27 + 24LL;
  if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
    goto LABEL_107;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v27 + 24LL))(v27);
LABEL_49:
  if ( v52 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v18;
};

// Line 1272: range 000000000CAA4904-000000000CAA4AD2
int32_t __fastcall common::midb::RedisMgr::cmdZAddUsingPipeline(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        const std::map<std::string,long int> *member_score_map)
{
  const std::map<std::string,long int> *v6; // r8
  int32_t v7; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v8; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v10; // dl
  signed __int32 M_use_count; // eax
  char v13; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v15; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v17; // rdi
  char v18; // dl
  struct _Unwind_Exception *v19; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v7 = common::midb::RedisMgr::cmdZAddUsingPipeline(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v21),
         (const std::string *)member_score_map,
         v6);
  v8 = v22;
  if ( v22 )
  {
    p_M_use_count = &v22->_M_use_count;
    if ( &_pthread_key_create )
    {
      v10 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v10 || !v10 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v21);
    }
    v13 = *(_BYTE *)(((unsigned __int64)&v8->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v8 + 8) & 7) + 3) >= v13 && v13 )
    {
      __asan_report_load4(&v8->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v8->_M_use_count;
    v8->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v7;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v8;
      __asan_report_load8(v8);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v8->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 2))(v8);
        p_M_weak_count = &v8->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v15 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v15 || !v15 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v21);
LABEL_26:
        v18 = *(_BYTE *)(((unsigned __int64)&v8->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v8 + 12) & 7) + 3) >= v18 && v18 )
        {
          __asan_report_load4(&v8->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v8->_M_weak_count;
        v8->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v7;
        if ( !*(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          v17 = (unsigned __int64)(v8->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 3))(v8);
            return v7;
          }
LABEL_31:
          v19 = (struct _Unwind_Exception *)__asan_report_load8(v17);
          v20 = v22;
          if ( v22 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v22);
          __asan_handle_no_return(v20);
          _Unwind_Resume(v19);
        }
LABEL_30:
        v17 = (unsigned __int64)v8;
        __asan_report_load8(v8);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v7;
};

// Line 1329: range 000000000CAA1E20-000000000CAA1FF8
int32_t __fastcall common::midb::RedisMgr::cmdZAddnx(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        const std::string *member,
        int64_t score)
{
  int64_t v8; // r9
  int32_t v9; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v12; // dl
  signed __int32 M_use_count; // eax
  char v15; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v17; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v19; // rdi
  char v20; // dl
  struct _Unwind_Exception *v21; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // rdi
  __int64 v23; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v9 = common::midb::RedisMgr::cmdZAddnx(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v23),
         member,
         (const std::string *)score,
         v8);
  v10 = v24;
  if ( v24 )
  {
    p_M_use_count = &v24->_M_use_count;
    if ( &_pthread_key_create )
    {
      v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v23);
    }
    v15 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v15 && v15 )
    {
      __asan_report_load4(&v10->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v10->_M_use_count;
    v10->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v9;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v10;
      __asan_report_load8(v10);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v10->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 2))(v10);
        p_M_weak_count = &v10->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v17 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v17 || !v17 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v23);
LABEL_26:
        v20 = *(_BYTE *)(((unsigned __int64)&v10->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v10 + 12) & 7) + 3) >= v20 && v20 )
        {
          __asan_report_load4(&v10->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v10->_M_weak_count;
        v10->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v9;
        if ( !*(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          v19 = (unsigned __int64)(v10->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 3))(v10);
            return v9;
          }
LABEL_31:
          v21 = (struct _Unwind_Exception *)__asan_report_load8(v19);
          v22 = v24;
          if ( v24 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v24);
          __asan_handle_no_return(v22);
          _Unwind_Resume(v21);
        }
LABEL_30:
        v19 = (unsigned __int64)v10;
        __asan_report_load8(v10);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v9;
};

// Line 1357: range 000000000CAA1FFE-000000000CAA21E0
int32_t __fastcall common::midb::RedisMgr::cmdZAddnx(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        const std::string *member,
        int64_t score,
        bool *is_repeated)
{
  int32_t v10; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v11; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v13; // dl
  signed __int32 M_use_count; // eax
  char v16; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v18; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v20; // rdi
  char v21; // dl
  struct _Unwind_Exception *v22; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v23; // rdi
  bool *v24; // [rsp+0h] [rbp-48h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v25; // [rsp+8h] [rbp-40h]

  common::midb::RedisMgr::grabConn(this, index);
  v10 = common::midb::RedisMgr::cmdZAddnx(
          this,
          (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v24),
          member,
          (const std::string *)score,
          (int64_t)is_repeated,
          v24);
  v11 = v25;
  if ( v25 )
  {
    p_M_use_count = &v25->_M_use_count;
    if ( &_pthread_key_create )
    {
      v13 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v13 || !v13 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v24);
    }
    v16 = *(_BYTE *)(((unsigned __int64)&v11->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v11 + 8) & 7) + 3) >= v16 && v16 )
    {
      __asan_report_load4(&v11->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v11->_M_use_count;
    v11->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v10;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v11;
      __asan_report_load8(v11);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v11->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v11->_vptr__Sp_counted_base + 2))(v11);
        p_M_weak_count = &v11->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v18 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v18 || !v18 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v24);
LABEL_26:
        v21 = *(_BYTE *)(((unsigned __int64)&v11->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v11 + 12) & 7) + 3) >= v21 && v21 )
        {
          __asan_report_load4(&v11->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v11->_M_weak_count;
        v11->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v10;
        if ( !*(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          v20 = (unsigned __int64)(v11->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v11->_vptr__Sp_counted_base + 3))(v11);
            return v10;
          }
LABEL_31:
          v22 = (struct _Unwind_Exception *)__asan_report_load8(v20);
          v23 = v25;
          if ( v25 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v25);
          __asan_handle_no_return(v23);
          _Unwind_Resume(v22);
        }
LABEL_30:
        v20 = (unsigned __int64)v11;
        __asan_report_load8(v11);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v10;
};

// Line 1386: range 000000000CAA21E6-000000000CAA23B4
int32_t __fastcall common::midb::RedisMgr::cmdZRevRangeByScore(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        std::vector<std::string> *value_vec)
{
  std::vector<std::string> *v6; // r8
  int32_t v7; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v8; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v10; // dl
  signed __int32 M_use_count; // eax
  char v13; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v15; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v17; // rdi
  char v18; // dl
  struct _Unwind_Exception *v19; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v7 = common::midb::RedisMgr::cmdZRevRangeByScore(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v21),
         (const std::string *)value_vec,
         v6);
  v8 = v22;
  if ( v22 )
  {
    p_M_use_count = &v22->_M_use_count;
    if ( &_pthread_key_create )
    {
      v10 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v10 || !v10 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v21);
    }
    v13 = *(_BYTE *)(((unsigned __int64)&v8->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v8 + 8) & 7) + 3) >= v13 && v13 )
    {
      __asan_report_load4(&v8->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v8->_M_use_count;
    v8->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v7;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v8;
      __asan_report_load8(v8);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v8->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 2))(v8);
        p_M_weak_count = &v8->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v15 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v15 || !v15 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v21);
LABEL_26:
        v18 = *(_BYTE *)(((unsigned __int64)&v8->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v8 + 12) & 7) + 3) >= v18 && v18 )
        {
          __asan_report_load4(&v8->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v8->_M_weak_count;
        v8->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v7;
        if ( !*(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          v17 = (unsigned __int64)(v8->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 3))(v8);
            return v7;
          }
LABEL_31:
          v19 = (struct _Unwind_Exception *)__asan_report_load8(v17);
          v20 = v22;
          if ( v22 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v22);
          __asan_handle_no_return(v20);
          _Unwind_Resume(v19);
        }
LABEL_30:
        v17 = (unsigned __int64)v8;
        __asan_report_load8(v8);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v7;
};

// Line 1391: range 000000000CA8FB40-000000000CA9041E
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::midb::RedisMgr::cmdZRevRangeByScore(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        std::vector<std::string> *key,
        std::vector<std::string> *value_vec)
{
  volatile signed __int32 *M_ptr; // rbx
  std::string::size_type M_pi; // r14
  unsigned __int64 v7; // r12
  const char *p_is_init; // rsi
  __int64 v9; // rax
  const char *v10; // r8
  volatile signed __int32 *p_M_use_count; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v12; // rax
  char v13; // dl
  unsigned int v14; // ebp
  char v15; // cl
  unsigned __int64 i; // rbx
  _Atomic_word *v17; // rdi
  char v18; // dl
  signed __int32 v19; // eax
  unsigned __int64 v20; // rdi
  char v21; // al
  std::string::size_type *p_M_finish; // rdi
  char v23; // dl
  unsigned __int64 v24; // rdi
  char v25; // dl
  signed __int32 v26; // eax
  char v27; // dl
  __int64 v28; // rax
  std::string::size_type *v29; // rdi
  std::string *v30; // rdx
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rbx
  volatile signed __int32 *v37; // rdi
  char v38; // dl
  signed __int32 v39; // eax
  char v41; // dl
  unsigned __int64 v42; // rdi
  char v43; // dl
  signed __int32 v44; // eax
  unsigned __int64 v45; // rdi
  char v46; // dl
  struct _Unwind_Exception *v47; // rbx
  std::string::pointer M_p; // rdi
  unsigned __int64 v49; // [rsp+0h] [rbp-E8h]
  std::string *s; // [rsp+8h] [rbp-E0h]
  __int64 conn_ptra; // [rsp+20h] [rbp-C8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v53; // [rsp+28h] [rbp-C0h]
  std::string v54; // [rsp+30h] [rbp-B8h] BYREF
  std::string v55; // [rsp+50h] [rbp-98h] BYREF
  char v56[120]; // [rsp+70h] [rbp-78h] BYREF

  M_ptr = (volatile signed __int32 *)conn_ptr._M_ptr;
  M_pi = (std::string::size_type)conn_ptr._M_refcount._M_pi;
  v7 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_0(64LL);
    if ( v9 )
      v7 = v9;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 16 14 reply_ptr:1398";
  *(_QWORD *)(v7 + 16) = common::midb::RedisMgr::cmdZRevRangeByScore;
  v49 = v7 >> 3;
  *(_DWORD *)(v49 + 2147450880) = -235802127;
  *(_DWORD *)(v49 + 2147450884) = -202178560;
  v54._M_dataplus._M_p = v54._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v54, &byte_1A0CF744[-4], byte_1A0CF744, (std::forward_iterator_tag)&v54);
  p_is_init = (const char *)M_pi;
  common::tools::StringUtils::trim(&v55, (const std::string *)M_pi, &v54, 1);
  s = (std::string *)v55._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v55._M_dataplus._M_p != &v55._anon_0 )
    operator delete(v55._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v54._M_dataplus._M_p != &v54._anon_0 )
    operator delete(v54._M_dataplus._M_p);
  if ( !s )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v55,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdZRevRangeByScore",
      1394);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v55, "key is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v55);
    v14 = -1;
    goto LABEL_112;
  }
  if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(M_pi);
    goto LABEL_21;
  }
  v10 = *(const char **)M_pi;
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    p_M_use_count = M_ptr;
    __asan_report_load8(M_ptr);
    goto LABEL_22;
  }
  conn_ptra = *(_QWORD *)M_ptr;
  p_M_use_count = M_ptr + 2;
  if ( *(_BYTE *)(((unsigned __int64)(M_ptr + 2) >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(p_M_use_count);
LABEL_23:
    v12 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count, M_pi);
    goto LABEL_24;
  }
  v12 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)M_ptr + 1);
  v53 = v12;
  if ( !v12 )
  {
LABEL_18:
    p_is_init = (const char *)&this->is_init_;
    common::midb::RedisMgr::command(
      (common::midb::RedisMgr *const)(v7 + 32),
      (common::midb::RedisConnPtr)__PAIR128__(&conn_ptra, (unsigned __int64)this),
      "ZREVRANGEBYSCORE %s +inf -inf",
      v10);
    goto LABEL_28;
  }
  p_M_use_count = &v12->_M_use_count;
  if ( &_pthread_key_create )
  {
    v13 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v13 || !v13 )
    {
      _InterlockedAdd(p_M_use_count, 1u);
      goto LABEL_18;
    }
    goto LABEL_23;
  }
LABEL_24:
  v15 = *(_BYTE *)(((unsigned __int64)&v12->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v12 + 8) & 7) + 3) < v15 || !v15 )
  {
    ++v12->_M_use_count;
    goto LABEL_18;
  }
  __asan_report_load4(&v12->_M_use_count);
LABEL_28:
  i = (unsigned __int64)v53;
  if ( !v53 )
    goto LABEL_34;
  v17 = &v53->_M_use_count;
  if ( &_pthread_key_create )
  {
    v18 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v17 & 7) + 3) < v18 || !v18 )
    {
      v19 = _InterlockedExchangeAdd(v17, 0xFFFFFFFF);
      goto LABEL_33;
    }
    __asan_report_store4(v17, p_is_init);
  }
  v23 = *(_BYTE *)(((i + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((i + 8) & 7) + 3) >= v23 && v23 )
  {
    __asan_report_load4(i + 8);
    goto LABEL_47;
  }
  v19 = *(_DWORD *)(i + 8);
  *(_DWORD *)(i + 8) = v19 - 1;
LABEL_33:
  if ( v19 != 1 )
    goto LABEL_34;
LABEL_47:
  if ( *(_BYTE *)((i >> 3) + 0x7FFF8000) )
  {
    v24 = i;
    __asan_report_load8(i);
    goto LABEL_58;
  }
  v24 = *(_QWORD *)i + 16LL;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_load8(v24);
    goto LABEL_59;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)i + 16LL))(i);
  v24 = i + 12;
  if ( !&_pthread_key_create )
    goto LABEL_60;
  v25 = *(_BYTE *)((v24 >> 3) + 0x7FFF8000);
  if ( (char)((v24 & 7) + 3) < v25 || !v25 )
  {
    v26 = _InterlockedExchangeAdd((volatile signed __int32 *)v24, 0xFFFFFFFF);
    goto LABEL_53;
  }
LABEL_59:
  __asan_report_store4(v24, p_is_init);
LABEL_60:
  v27 = *(_BYTE *)(((i + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((i + 12) & 7) + 3) >= v27 && v27 )
  {
    __asan_report_load4(i + 12);
LABEL_64:
    v20 = i;
    __asan_report_load8(i);
    goto LABEL_65;
  }
  v26 = *(_DWORD *)(i + 12);
  *(_DWORD *)(i + 12) = v26 - 1;
LABEL_53:
  if ( v26 != 1 )
    goto LABEL_34;
  if ( *(_BYTE *)((i >> 3) + 0x7FFF8000) )
    goto LABEL_64;
  v20 = *(_QWORD *)i + 24LL;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    __asan_report_load8(v20);
LABEL_66:
    __asan_report_load4(v20);
LABEL_67:
    p_is_init = (const char *)&common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v55,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdZRevRangeByScore",
      1405);
    v28 = *(_QWORD *)(v7 + 32);
    if ( *(_BYTE *)(((unsigned __int64)(v28 + 32) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v28 + 32);
    }
    else if ( !*(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
    {
      p_is_init = "smembers [%s] failed, %s";
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&v55,
        "smembers [%s] failed, %s",
        *(const char **)M_pi,
        *(const char **)(v28 + 32));
LABEL_72:
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v55);
      v14 = -1;
      goto LABEL_106;
    }
    __asan_report_load8(M_pi);
    goto LABEL_72;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)i + 24LL))(i);
LABEL_34:
  v20 = *(_QWORD *)(v7 + 32);
  if ( !v20 )
  {
    v14 = -1;
    goto LABEL_106;
  }
  v21 = *(_BYTE *)((v20 >> 3) + 0x7FFF8000);
  if ( v21 && v21 <= 3 )
    goto LABEL_66;
  if ( *(_DWORD *)v20 == 6 )
    goto LABEL_67;
  if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
  {
    p_M_finish = (std::string::size_type *)key;
    __asan_report_load8(key);
    goto LABEL_74;
  }
  s = key->_M_impl._M_start;
  p_M_finish = (std::string::size_type *)&key->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&key->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_74:
    __asan_report_load8(p_M_finish);
    goto LABEL_75;
  }
  M_pi = (std::string::size_type)key->_M_impl._M_finish;
  if ( s == (std::string *)M_pi )
    goto LABEL_84;
  for ( i = (unsigned __int64)key->_M_impl._M_start; M_pi != i; i += 32LL )
  {
    p_M_finish = (std::string::size_type *)i;
    if ( *(_BYTE *)((i >> 3) + 0x7FFF8000) )
    {
LABEL_75:
      __asan_report_load8(p_M_finish);
LABEL_76:
      operator delete(p_M_finish);
      continue;
    }
    p_M_finish = *(std::string::size_type **)i;
    if ( *(_QWORD *)i != i + 16 )
      goto LABEL_76;
  }
  v29 = (std::string::size_type *)&key->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&key->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(v29, p_is_init);
    goto LABEL_86;
  }
  key->_M_impl._M_finish = s;
LABEL_84:
  LODWORD(i) = 0;
  while ( 2 )
  {
    v31 = *(_QWORD *)(v7 + 32);
    v29 = (std::string::size_type *)(v31 + 48);
    if ( *(_BYTE *)(((unsigned __int64)(v31 + 48) >> 3) + 0x7FFF8000) )
    {
LABEL_86:
      __asan_report_load8(v29);
      goto LABEL_87;
    }
    if ( (unsigned __int64)(unsigned int)i < *(_QWORD *)(v31 + 48) )
    {
      v29 = (std::string::size_type *)(v31 + 56);
      if ( !*(_BYTE *)(((unsigned __int64)(v31 + 56) >> 3) + 0x7FFF8000) )
      {
        v32 = *(_QWORD *)(v31 + 56) + 8LL * (unsigned int)i;
        v29 = (std::string::size_type *)v32;
        if ( !*(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
        {
          v33 = *(_QWORD *)v32;
          if ( !v33 )
            goto LABEL_93;
          v29 = (std::string::size_type *)(v33 + 24);
          if ( !*(_BYTE *)(((unsigned __int64)(v33 + 24) >> 3) + 0x7FFF8000) )
          {
            v34 = *(_QWORD *)(v33 + 24);
            if ( !v34 )
              goto LABEL_93;
            v29 = (std::string::size_type *)(v33 + 32);
            v35 = (unsigned __int64)(v33 + 32) >> 3;
            if ( !*(_BYTE *)(v35 + 0x7FFF8000) )
            {
              p_is_init = *(const char **)(v33 + 32);
              if ( p_is_init )
              {
                v55._M_dataplus._M_p = v55._anon_0._M_local_buf;
                std::string::_M_construct<char const*>(&v55, p_is_init, &p_is_init[v34], (std::forward_iterator_tag)v35);
                goto LABEL_91;
              }
              goto LABEL_93;
            }
LABEL_90:
            __asan_report_load8(v29);
LABEL_91:
            p_is_init = (const char *)&v55;
            std::vector<std::string>::emplace_back<std::string>(key, &v55, v30);
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v55._M_dataplus._M_p != &v55._anon_0 )
              operator delete(v55._M_dataplus._M_p);
LABEL_93:
            LODWORD(i) = i + 1;
            continue;
          }
LABEL_89:
          __asan_report_load8(v29);
          goto LABEL_90;
        }
LABEL_88:
        __asan_report_load8(v29);
        goto LABEL_89;
      }
LABEL_87:
      __asan_report_load8(v29);
      goto LABEL_88;
    }
    break;
  }
  v14 = 0;
LABEL_106:
  v36 = *(_QWORD *)(v7 + 40);
  if ( !v36 )
    goto LABEL_112;
  v37 = (volatile signed __int32 *)(v36 + 8);
  if ( &_pthread_key_create )
  {
    v38 = *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v37 & 7) + 3) < v38 || !v38 )
    {
      v39 = _InterlockedExchangeAdd(v37, 0xFFFFFFFF);
      goto LABEL_111;
    }
    __asan_report_store4(v37, p_is_init);
  }
  v41 = *(_BYTE *)(((v36 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v36 + 8) & 7) + 3) >= v41 && v41 )
  {
    __asan_report_load4(v36 + 8);
    goto LABEL_120;
  }
  v39 = *(_DWORD *)(v36 + 8);
  *(_DWORD *)(v36 + 8) = v39 - 1;
LABEL_111:
  if ( v39 == 1 )
  {
LABEL_120:
    if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
    {
      v42 = v36;
      __asan_report_load8(v36);
    }
    else
    {
      v42 = *(_QWORD *)v36 + 16LL;
      if ( !*(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v36 + 16LL))(v36);
        v42 = v36 + 12;
        if ( !&_pthread_key_create )
          goto LABEL_133;
        v43 = *(_BYTE *)((v42 >> 3) + 0x7FFF8000);
        if ( (char)((v42 & 7) + 3) < v43 || !v43 )
        {
          v44 = _InterlockedExchangeAdd((volatile signed __int32 *)v42, 0xFFFFFFFF);
          goto LABEL_126;
        }
LABEL_132:
        __asan_report_store4(v42, p_is_init);
LABEL_133:
        v46 = *(_BYTE *)(((v36 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v36 + 12) & 7) + 3) >= v46 && v46 )
        {
          __asan_report_load4(v36 + 12);
          goto LABEL_137;
        }
        v44 = *(_DWORD *)(v36 + 12);
        *(_DWORD *)(v36 + 12) = v44 - 1;
LABEL_126:
        if ( v44 != 1 )
          goto LABEL_112;
        if ( !*(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
        {
          v45 = *(_QWORD *)v36 + 24LL;
          if ( !*(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v36 + 24LL))(v36);
            goto LABEL_112;
          }
LABEL_138:
          v47 = (struct _Unwind_Exception *)__asan_report_load8(v45);
          M_p = v54._M_dataplus._M_p;
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v54._M_dataplus._M_p != &v54._anon_0 )
            operator delete(v54._M_dataplus._M_p);
          __asan_handle_no_return(M_p);
          _Unwind_Resume(v47);
        }
LABEL_137:
        v45 = v36;
        __asan_report_load8(v36);
        goto LABEL_138;
      }
    }
    __asan_report_load8(v42);
    goto LABEL_132;
  }
LABEL_112:
  if ( v56 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v14;
};

// Line 1428: range 000000000CAA23BA-000000000CAA259C
int32_t __fastcall common::midb::RedisMgr::cmdZRevRangeByScore(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        const std::string *min,
        const std::string *max,
        std::vector<std::string> *member_vec)
{
  int32_t v10; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v11; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v13; // dl
  signed __int32 M_use_count; // eax
  char v16; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v18; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v20; // rdi
  char v21; // dl
  struct _Unwind_Exception *v22; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v23; // rdi
  std::vector<std::string> *v24; // [rsp+0h] [rbp-48h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v25; // [rsp+8h] [rbp-40h]

  common::midb::RedisMgr::grabConn(this, index);
  v10 = common::midb::RedisMgr::cmdZRevRangeByScore(
          this,
          (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v24),
          min,
          max,
          (const std::string *)member_vec,
          v24);
  v11 = v25;
  if ( v25 )
  {
    p_M_use_count = &v25->_M_use_count;
    if ( &_pthread_key_create )
    {
      v13 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v13 || !v13 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v24);
    }
    v16 = *(_BYTE *)(((unsigned __int64)&v11->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v11 + 8) & 7) + 3) >= v16 && v16 )
    {
      __asan_report_load4(&v11->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v11->_M_use_count;
    v11->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v10;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v11;
      __asan_report_load8(v11);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v11->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v11->_vptr__Sp_counted_base + 2))(v11);
        p_M_weak_count = &v11->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v18 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v18 || !v18 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v24);
LABEL_26:
        v21 = *(_BYTE *)(((unsigned __int64)&v11->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v11 + 12) & 7) + 3) >= v21 && v21 )
        {
          __asan_report_load4(&v11->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v11->_M_weak_count;
        v11->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v10;
        if ( !*(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          v20 = (unsigned __int64)(v11->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v11->_vptr__Sp_counted_base + 3))(v11);
            return v10;
          }
LABEL_31:
          v22 = (struct _Unwind_Exception *)__asan_report_load8(v20);
          v23 = v25;
          if ( v25 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v25);
          __asan_handle_no_return(v23);
          _Unwind_Resume(v22);
        }
LABEL_30:
        v20 = (unsigned __int64)v11;
        __asan_report_load8(v11);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v10;
};

// Line 1471: range 000000000CAA25A2-000000000CAA2784
int32_t __fastcall common::midb::RedisMgr::cmdZRangeByScore(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        const std::string *min,
        const std::string *max,
        std::vector<std::string> *member_vec)
{
  int32_t v10; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v11; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v13; // dl
  signed __int32 M_use_count; // eax
  char v16; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v18; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v20; // rdi
  char v21; // dl
  struct _Unwind_Exception *v22; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v23; // rdi
  std::vector<std::string> *v24; // [rsp+0h] [rbp-48h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v25; // [rsp+8h] [rbp-40h]

  common::midb::RedisMgr::grabConn(this, index);
  v10 = common::midb::RedisMgr::cmdZRangeByScore(
          this,
          (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v24),
          min,
          max,
          (const std::string *)member_vec,
          v24);
  v11 = v25;
  if ( v25 )
  {
    p_M_use_count = &v25->_M_use_count;
    if ( &_pthread_key_create )
    {
      v13 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v13 || !v13 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v24);
    }
    v16 = *(_BYTE *)(((unsigned __int64)&v11->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v11 + 8) & 7) + 3) >= v16 && v16 )
    {
      __asan_report_load4(&v11->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v11->_M_use_count;
    v11->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v10;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v11;
      __asan_report_load8(v11);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v11->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v11->_vptr__Sp_counted_base + 2))(v11);
        p_M_weak_count = &v11->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v18 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v18 || !v18 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v24);
LABEL_26:
        v21 = *(_BYTE *)(((unsigned __int64)&v11->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v11 + 12) & 7) + 3) >= v21 && v21 )
        {
          __asan_report_load4(&v11->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v11->_M_weak_count;
        v11->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v10;
        if ( !*(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          v20 = (unsigned __int64)(v11->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v11->_vptr__Sp_counted_base + 3))(v11);
            return v10;
          }
LABEL_31:
          v22 = (struct _Unwind_Exception *)__asan_report_load8(v20);
          v23 = v25;
          if ( v25 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v25);
          __asan_handle_no_return(v23);
          _Unwind_Resume(v22);
        }
LABEL_30:
        v20 = (unsigned __int64)v11;
        __asan_report_load8(v11);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v10;
};

// Line 1476: range 000000000CA90424-000000000CA920D5
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::midb::RedisMgr::cmdZRangeByScore(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        std::string::size_type key,
        unsigned __int64 min,
        std::vector<std::string> *max)
{
  std::string::size_type M_pi; // r14
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  const char *v8; // rcx
  const char *v9; // r9
  const char *v10; // r8
  unsigned __int64 v11; // rsi
  __int64 *v12; // rsi
  volatile signed __int32 *p_M_use_count; // rdi
  __int64 v14; // rsi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v15; // rax
  char v16; // dl
  const char *p_is_init; // rsi
  unsigned int v18; // r14d
  volatile signed __int32 *v19; // rsi
  unsigned __int64 i; // rbx
  _Atomic_word *v21; // rdi
  char v22; // dl
  signed __int32 v23; // eax
  unsigned __int64 v24; // rdi
  char v25; // al
  std::string::size_type *p_M_finish; // rdi
  char v27; // dl
  unsigned __int64 v28; // rdi
  char v29; // dl
  signed __int32 v30; // eax
  char v31; // dl
  __int64 v32; // rax
  std::string::size_type *v33; // rdi
  std::string *v34; // rdx
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rbx
  volatile signed __int32 *v41; // rdi
  char v42; // dl
  signed __int32 v43; // eax
  char v45; // dl
  unsigned __int64 v46; // rdi
  char v47; // dl
  signed __int32 v48; // eax
  unsigned __int64 v49; // rdi
  char v50; // dl
  struct _Unwind_Exception *v51; // rbx
  std::string::pointer M_p; // rdi
  std::string *s; // [rsp+18h] [rbp-E8h]
  unsigned __int64 v55; // [rsp+20h] [rbp-E0h]
  __int64 conn_ptra; // [rsp+40h] [rbp-C0h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v60; // [rsp+48h] [rbp-B8h]
  std::string v61; // [rsp+50h] [rbp-B0h] BYREF
  std::string v62; // [rsp+70h] [rbp-90h] BYREF
  char v63[112]; // [rsp+90h] [rbp-70h] BYREF

  M_pi = (std::string::size_type)conn_ptr._M_refcount._M_pi;
  v6 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 14 reply_ptr:1483";
  *(_QWORD *)(v6 + 16) = common::midb::RedisMgr::cmdZRangeByScore;
  v55 = v6 >> 3;
  *(_DWORD *)(v55 + 2147450880) = -235802127;
  *(_DWORD *)(v55 + 2147450884) = -202178560;
  v61._M_dataplus._M_p = v61._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v61, &byte_1A0CF744[-4], byte_1A0CF744, (std::forward_iterator_tag)&v61);
  common::tools::StringUtils::trim(&v62, (const std::string *)M_pi, &v61, 1);
  s = (std::string *)v62._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v62._M_dataplus._M_p != &v62._anon_0 )
    operator delete(v62._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v61._M_dataplus._M_p != &v61._anon_0 )
    operator delete(v61._M_dataplus._M_p);
  if ( !s )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v62,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdZRangeByScore",
      1479);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v62, "key is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62);
    v18 = -1;
    goto LABEL_116;
  }
  if ( *(_BYTE *)((min >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(min);
    goto LABEL_23;
  }
  v8 = *(const char **)min;
  if ( *(_BYTE *)((key >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(key);
    goto LABEL_24;
  }
  v9 = *(const char **)key;
  if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(M_pi);
    goto LABEL_25;
  }
  v10 = *(const char **)M_pi;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    p_M_use_count = v19;
    __asan_report_load8(v19);
    goto LABEL_26;
  }
  conn_ptra = *v12;
  p_M_use_count = (volatile signed __int32 *)(v12 + 1);
  if ( *(_BYTE *)(((unsigned __int64)(v12 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(p_M_use_count);
LABEL_27:
    v15 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count, M_pi);
    goto LABEL_28;
  }
  v15 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v14 + 8);
  v60 = v15;
  if ( !v15 )
  {
LABEL_20:
    p_is_init = (const char *)&this->is_init_;
    common::midb::RedisMgr::command(
      (common::midb::RedisMgr *const)(v6 + 32),
      (common::midb::RedisConnPtr)__PAIR128__(&conn_ptra, (unsigned __int64)this),
      "ZRANGEBYSCORE %s %s %s",
      v10,
      v9,
      v8);
    goto LABEL_32;
  }
  p_M_use_count = &v15->_M_use_count;
  if ( &_pthread_key_create )
  {
    v16 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v16 || !v16 )
    {
      _InterlockedAdd(p_M_use_count, 1u);
      goto LABEL_20;
    }
    goto LABEL_27;
  }
LABEL_28:
  p_is_init = (const char *)*(unsigned __int8 *)(((unsigned __int64)&v15->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v15 + 8) & 7) + 3) < (char)p_is_init || !(_BYTE)p_is_init )
  {
    ++v15->_M_use_count;
    goto LABEL_20;
  }
  __asan_report_load4(&v15->_M_use_count);
LABEL_32:
  i = (unsigned __int64)v60;
  if ( !v60 )
    goto LABEL_38;
  v21 = &v60->_M_use_count;
  if ( &_pthread_key_create )
  {
    v22 = *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v21 & 7) + 3) < v22 || !v22 )
    {
      v23 = _InterlockedExchangeAdd(v21, 0xFFFFFFFF);
      goto LABEL_37;
    }
    __asan_report_store4(v21, p_is_init);
  }
  v27 = *(_BYTE *)(((i + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((i + 8) & 7) + 3) >= v27 && v27 )
  {
    __asan_report_load4(i + 8);
    goto LABEL_51;
  }
  v23 = *(_DWORD *)(i + 8);
  *(_DWORD *)(i + 8) = v23 - 1;
LABEL_37:
  if ( v23 != 1 )
    goto LABEL_38;
LABEL_51:
  if ( *(_BYTE *)((i >> 3) + 0x7FFF8000) )
  {
    v28 = i;
    __asan_report_load8(i);
    goto LABEL_62;
  }
  v28 = *(_QWORD *)i + 16LL;
  if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    __asan_report_load8(v28);
    goto LABEL_63;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)i + 16LL))(i);
  v28 = i + 12;
  if ( !&_pthread_key_create )
    goto LABEL_64;
  v29 = *(_BYTE *)((v28 >> 3) + 0x7FFF8000);
  if ( (char)((v28 & 7) + 3) < v29 || !v29 )
  {
    v30 = _InterlockedExchangeAdd((volatile signed __int32 *)v28, 0xFFFFFFFF);
    goto LABEL_57;
  }
LABEL_63:
  __asan_report_store4(v28, p_is_init);
LABEL_64:
  v31 = *(_BYTE *)(((i + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((i + 12) & 7) + 3) >= v31 && v31 )
  {
    __asan_report_load4(i + 12);
LABEL_68:
    v24 = i;
    __asan_report_load8(i);
    goto LABEL_69;
  }
  v30 = *(_DWORD *)(i + 12);
  *(_DWORD *)(i + 12) = v30 - 1;
LABEL_57:
  if ( v30 != 1 )
    goto LABEL_38;
  if ( *(_BYTE *)((i >> 3) + 0x7FFF8000) )
    goto LABEL_68;
  v24 = *(_QWORD *)i + 24LL;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_load8(v24);
LABEL_70:
    __asan_report_load4(v24);
LABEL_71:
    p_is_init = (const char *)&common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v62,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdZRangeByScore",
      1490);
    v32 = *(_QWORD *)(v6 + 32);
    if ( *(_BYTE *)(((unsigned __int64)(v32 + 32) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v32 + 32);
    }
    else if ( !*(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
    {
      p_is_init = "ZRANGEBYSCORE [%s] failed, %s";
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&v62,
        "ZRANGEBYSCORE [%s] failed, %s",
        *(const char **)M_pi,
        *(const char **)(v32 + 32));
LABEL_76:
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62);
      v18 = -1;
      goto LABEL_110;
    }
    __asan_report_load8(M_pi);
    goto LABEL_76;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)i + 24LL))(i);
LABEL_38:
  v24 = *(_QWORD *)(v6 + 32);
  if ( !v24 )
  {
    v18 = -1;
    goto LABEL_110;
  }
  v25 = *(_BYTE *)((v24 >> 3) + 0x7FFF8000);
  if ( v25 && v25 <= 3 )
    goto LABEL_70;
  if ( *(_DWORD *)v24 == 6 )
    goto LABEL_71;
  if ( *(_BYTE *)(((unsigned __int64)max >> 3) + 0x7FFF8000) )
  {
    p_M_finish = (std::string::size_type *)max;
    __asan_report_load8(max);
    goto LABEL_78;
  }
  p_is_init = (const char *)max->_M_impl._M_start;
  key = (std::string::size_type)max->_M_impl._M_start;
  p_M_finish = (std::string::size_type *)&max->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&max->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_load8(p_M_finish);
    goto LABEL_79;
  }
  M_pi = (std::string::size_type)max->_M_impl._M_finish;
  if ( key == M_pi )
    goto LABEL_88;
  for ( i = (unsigned __int64)max->_M_impl._M_start; M_pi != i; i += 32LL )
  {
    p_M_finish = (std::string::size_type *)i;
    if ( *(_BYTE *)((i >> 3) + 0x7FFF8000) )
    {
LABEL_79:
      __asan_report_load8(p_M_finish);
LABEL_80:
      operator delete(p_M_finish);
      continue;
    }
    p_M_finish = *(std::string::size_type **)i;
    if ( *(_QWORD *)i != i + 16 )
      goto LABEL_80;
  }
  v33 = (std::string::size_type *)&max->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&max->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(v33, p_is_init);
    goto LABEL_90;
  }
  p_is_init = (const char *)key;
  max->_M_impl._M_finish = (std::_Vector_base<std::string>::pointer)key;
LABEL_88:
  LODWORD(i) = 0;
  while ( 2 )
  {
    v35 = *(_QWORD *)(v6 + 32);
    v33 = (std::string::size_type *)(v35 + 48);
    if ( *(_BYTE *)(((unsigned __int64)(v35 + 48) >> 3) + 0x7FFF8000) )
    {
LABEL_90:
      __asan_report_load8(v33);
      goto LABEL_91;
    }
    if ( (unsigned __int64)(unsigned int)i < *(_QWORD *)(v35 + 48) )
    {
      v33 = (std::string::size_type *)(v35 + 56);
      if ( !*(_BYTE *)(((unsigned __int64)(v35 + 56) >> 3) + 0x7FFF8000) )
      {
        v36 = *(_QWORD *)(v35 + 56) + 8LL * (unsigned int)i;
        v33 = (std::string::size_type *)v36;
        if ( !*(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
        {
          v37 = *(_QWORD *)v36;
          if ( !v37 )
            goto LABEL_97;
          v33 = (std::string::size_type *)(v37 + 24);
          if ( !*(_BYTE *)(((unsigned __int64)(v37 + 24) >> 3) + 0x7FFF8000) )
          {
            v38 = *(_QWORD *)(v37 + 24);
            if ( !v38 )
              goto LABEL_97;
            v33 = (std::string::size_type *)(v37 + 32);
            v39 = (unsigned __int64)(v37 + 32) >> 3;
            if ( !*(_BYTE *)(v39 + 0x7FFF8000) )
            {
              p_is_init = *(const char **)(v37 + 32);
              if ( p_is_init )
              {
                v62._M_dataplus._M_p = v62._anon_0._M_local_buf;
                std::string::_M_construct<char const*>(&v62, p_is_init, &p_is_init[v38], (std::forward_iterator_tag)v39);
                goto LABEL_95;
              }
              goto LABEL_97;
            }
LABEL_94:
            __asan_report_load8(v33);
LABEL_95:
            p_is_init = (const char *)&v62;
            std::vector<std::string>::emplace_back<std::string>(max, &v62, v34);
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v62._M_dataplus._M_p != &v62._anon_0 )
              operator delete(v62._M_dataplus._M_p);
LABEL_97:
            LODWORD(i) = i + 1;
            continue;
          }
LABEL_93:
          __asan_report_load8(v33);
          goto LABEL_94;
        }
LABEL_92:
        __asan_report_load8(v33);
        goto LABEL_93;
      }
LABEL_91:
      __asan_report_load8(v33);
      goto LABEL_92;
    }
    break;
  }
  v18 = 0;
LABEL_110:
  v40 = *(_QWORD *)(v6 + 40);
  if ( !v40 )
    goto LABEL_116;
  v41 = (volatile signed __int32 *)(v40 + 8);
  if ( &_pthread_key_create )
  {
    v42 = *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v41 & 7) + 3) < v42 || !v42 )
    {
      v43 = _InterlockedExchangeAdd(v41, 0xFFFFFFFF);
      goto LABEL_115;
    }
    __asan_report_store4(v41, p_is_init);
  }
  v45 = *(_BYTE *)(((v40 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v40 + 8) & 7) + 3) >= v45 && v45 )
  {
    __asan_report_load4(v40 + 8);
    goto LABEL_124;
  }
  v43 = *(_DWORD *)(v40 + 8);
  *(_DWORD *)(v40 + 8) = v43 - 1;
LABEL_115:
  if ( v43 == 1 )
  {
LABEL_124:
    if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
    {
      v46 = v40;
      __asan_report_load8(v40);
    }
    else
    {
      v46 = *(_QWORD *)v40 + 16LL;
      if ( !*(_BYTE *)((v46 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v40 + 16LL))(v40);
        v46 = v40 + 12;
        if ( !&_pthread_key_create )
          goto LABEL_137;
        v47 = *(_BYTE *)((v46 >> 3) + 0x7FFF8000);
        if ( (char)((v46 & 7) + 3) < v47 || !v47 )
        {
          v48 = _InterlockedExchangeAdd((volatile signed __int32 *)v46, 0xFFFFFFFF);
          goto LABEL_130;
        }
LABEL_136:
        __asan_report_store4(v46, p_is_init);
LABEL_137:
        v50 = *(_BYTE *)(((v40 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v40 + 12) & 7) + 3) >= v50 && v50 )
        {
          __asan_report_load4(v40 + 12);
          goto LABEL_141;
        }
        v48 = *(_DWORD *)(v40 + 12);
        *(_DWORD *)(v40 + 12) = v48 - 1;
LABEL_130:
        if ( v48 != 1 )
          goto LABEL_116;
        if ( !*(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
        {
          v49 = *(_QWORD *)v40 + 24LL;
          if ( !*(_BYTE *)((v49 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v40 + 24LL))(v40);
            goto LABEL_116;
          }
LABEL_142:
          v51 = (struct _Unwind_Exception *)__asan_report_load8(v49);
          M_p = v61._M_dataplus._M_p;
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v61._M_dataplus._M_p != &v61._anon_0 )
            operator delete(v61._M_dataplus._M_p);
          __asan_handle_no_return(M_p);
          _Unwind_Resume(v51);
        }
LABEL_141:
        v49 = v40;
        __asan_report_load8(v40);
        goto LABEL_142;
      }
    }
    __asan_report_load8(v46);
    goto LABEL_136;
  }
LABEL_116:
  if ( v63 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v18;
};

// Line 1514: range 000000000CAA278A-000000000CAA2958
int32_t __fastcall common::midb::RedisMgr::cmdZRem(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        const std::string *value)
{
  const std::string *v6; // r8
  int32_t v7; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v8; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v10; // dl
  signed __int32 M_use_count; // eax
  char v13; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v15; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v17; // rdi
  char v18; // dl
  struct _Unwind_Exception *v19; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v7 = common::midb::RedisMgr::cmdZRem(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v21),
         value,
         v6);
  v8 = v22;
  if ( v22 )
  {
    p_M_use_count = &v22->_M_use_count;
    if ( &_pthread_key_create )
    {
      v10 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v10 || !v10 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v21);
    }
    v13 = *(_BYTE *)(((unsigned __int64)&v8->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v8 + 8) & 7) + 3) >= v13 && v13 )
    {
      __asan_report_load4(&v8->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v8->_M_use_count;
    v8->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v7;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v8;
      __asan_report_load8(v8);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v8->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 2))(v8);
        p_M_weak_count = &v8->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v15 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v15 || !v15 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v21);
LABEL_26:
        v18 = *(_BYTE *)(((unsigned __int64)&v8->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v8 + 12) & 7) + 3) >= v18 && v18 )
        {
          __asan_report_load4(&v8->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v8->_M_weak_count;
        v8->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v7;
        if ( !*(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          v17 = (unsigned __int64)(v8->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 3))(v8);
            return v7;
          }
LABEL_31:
          v19 = (struct _Unwind_Exception *)__asan_report_load8(v17);
          v20 = v22;
          if ( v22 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v22);
          __asan_handle_no_return(v20);
          _Unwind_Resume(v19);
        }
LABEL_30:
        v17 = (unsigned __int64)v8;
        __asan_report_load8(v8);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v7;
};

// Line 1519: range 000000000CA82FC8-000000000CA841D7
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::midb::RedisMgr::cmdZRem(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        unsigned __int64 key,
        const std::string *value)
{
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r13
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r15
  std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2>::element_type *v8; // rsi
  __int64 v9; // rax
  std::string::size_type v10; // rcx
  std::string::pointer v11; // r9
  std::string::pointer vptr__Sp_counted_base; // r8
  volatile signed __int32 *M_ptr; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v14; // rax
  char v15; // dl
  common::midb::RedisMgr *v16; // rsi
  unsigned int v17; // r12d
  __int64 v18; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v19; // r12
  _Atomic_word *p_M_use_count; // rdi
  char v21; // dl
  signed __int32 M_use_count; // eax
  unsigned __int64 v23; // rdi
  char v24; // al
  __int64 v25; // rax
  unsigned __int64 v26; // r14
  volatile signed __int32 *v27; // rdi
  char v28; // dl
  signed __int32 v29; // eax
  char v31; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v33; // dl
  signed __int32 M_weak_count; // eax
  char v35; // dl
  __int64 v36; // rax
  char v37; // dl
  unsigned __int64 v38; // rdi
  char v39; // dl
  signed __int32 v40; // eax
  unsigned __int64 v41; // rdi
  char v42; // dl
  struct _Unwind_Exception *v43; // rbx
  std::string::pointer M_p; // rdi
  std::string *s; // [rsp+10h] [rbp-D0h]
  common::midb::RedisConnPtr conn_ptra; // [rsp+18h] [rbp-C8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v48; // [rsp+28h] [rbp-B8h]
  std::string v49; // [rsp+30h] [rbp-B0h] BYREF
  std::string v50; // [rsp+50h] [rbp-90h] BYREF
  char v51[112]; // [rsp+70h] [rbp-70h] BYREF

  conn_ptra._M_ptr = conn_ptr._M_ptr;
  M_pi = conn_ptr._M_refcount._M_pi;
  v6 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_0(64LL);
    if ( v9 )
      v6 = v9;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 14 reply_ptr:1526";
  *(_QWORD *)(v6 + 16) = common::midb::RedisMgr::cmdZRem;
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  v49._M_dataplus._M_p = v49._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v49, &byte_1A0CF744[-4], byte_1A0CF744, (std::forward_iterator_tag)&v49);
  v8 = (std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2>::element_type *)M_pi;
  common::tools::StringUtils::trim(&v50, (const std::string *)M_pi, &v49, 1);
  s = (std::string *)v50._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v50._M_dataplus._M_p != &v50._anon_0 )
    operator delete(v50._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v49._M_dataplus._M_p != &v49._anon_0 )
    operator delete(v49._M_dataplus._M_p);
  if ( !s )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v50,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdZRem",
      1522);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v50, "key is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v50);
    v17 = -1;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(((key + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(key + 8);
    goto LABEL_23;
  }
  v10 = *(_QWORD *)(key + 8);
  if ( *(_BYTE *)((key >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(key);
    goto LABEL_24;
  }
  v11 = *(std::string::pointer *)key;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(M_pi);
    goto LABEL_25;
  }
  vptr__Sp_counted_base = (std::string::pointer)M_pi->_vptr__Sp_counted_base;
  if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    M_ptr = (volatile signed __int32 *)conn_ptra._M_ptr;
    __asan_report_load8(conn_ptra._M_ptr);
    goto LABEL_26;
  }
  v8 = conn_ptra._M_ptr;
  conn_ptra._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)conn_ptra._M_ptr->_vptr_RedisConnBase;
  M_ptr = (volatile signed __int32 *)&conn_ptra._M_ptr->last_use_time;
  if ( *(_BYTE *)(((unsigned __int64)&conn_ptra._M_ptr->last_use_time >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(M_ptr);
LABEL_27:
    v14 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(M_ptr, v8);
    goto LABEL_28;
  }
  v14 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&conn_ptra._M_ptr->last_use_time;
  v48 = v14;
  if ( !v14 )
  {
LABEL_20:
    v16 = this;
    common::midb::RedisMgr::command(
      (common::midb::RedisMgr *const)(v6 + 32),
      (common::midb::RedisConnPtr)__PAIR128__(
                                    (common::midb::RedisConnPtr *)&conn_ptra._M_refcount,
                                    (unsigned __int64)this),
      "ZREM %s %b",
      vptr__Sp_counted_base,
      v11,
      v10);
    goto LABEL_32;
  }
  M_ptr = &v14->_M_use_count;
  if ( &_pthread_key_create )
  {
    v15 = *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)M_ptr & 7) + 3) < v15 || !v15 )
    {
      _InterlockedAdd(M_ptr, 1u);
      goto LABEL_20;
    }
    goto LABEL_27;
  }
LABEL_28:
  v16 = (common::midb::RedisMgr *)*(unsigned __int8 *)(((unsigned __int64)&v14->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v14 + 8) & 7) + 3) < (char)v16 || !(_BYTE)v16 )
  {
    ++v14->_M_use_count;
    goto LABEL_20;
  }
  __asan_report_load4(&v14->_M_use_count);
LABEL_32:
  v18 = (__int64)v48;
  v19 = v48;
  if ( !v48 )
    goto LABEL_38;
  p_M_use_count = &v48->_M_use_count;
  if ( &_pthread_key_create )
  {
    v21 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v21 || !v21 )
    {
      M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
      goto LABEL_37;
    }
    v18 = __asan_report_store4(p_M_use_count, v16);
  }
  v31 = *(_BYTE *)(((unsigned __int64)(v18 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v18 + 8) & 7) + 3) >= v31 && v31 )
  {
    __asan_report_load4(v18 + 8);
    goto LABEL_57;
  }
  M_use_count = v19->_M_use_count;
  v19->_M_use_count = M_use_count - 1;
LABEL_37:
  if ( M_use_count != 1 )
    goto LABEL_38;
LABEL_57:
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)v19;
    __asan_report_load8(v19);
    goto LABEL_68;
  }
  p_M_weak_count = (volatile signed __int32 *)(v19->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_69;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v19->_vptr__Sp_counted_base + 2))(v19);
  p_M_weak_count = &v19->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_70;
  v33 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v33 || !v33 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_63;
  }
LABEL_69:
  __asan_report_store4(p_M_weak_count, v16);
LABEL_70:
  v35 = *(_BYTE *)(((unsigned __int64)&v19->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v19 + 12) & 7) + 3) >= v35 && v35 )
  {
    __asan_report_load4(&v19->_M_weak_count);
LABEL_74:
    v23 = (unsigned __int64)v19;
    __asan_report_load8(v19);
    goto LABEL_75;
  }
  M_weak_count = v19->_M_weak_count;
  v19->_M_weak_count = M_weak_count - 1;
LABEL_63:
  if ( M_weak_count != 1 )
    goto LABEL_38;
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    goto LABEL_74;
  v23 = (unsigned __int64)(v19->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_load8(v23);
    goto LABEL_76;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v19->_vptr__Sp_counted_base + 3))(v19);
LABEL_38:
  v23 = *(_QWORD *)(v6 + 32);
  if ( v23 )
  {
    v24 = *(_BYTE *)((v23 >> 3) + 0x7FFF8000);
    if ( !v24 || v24 > 3 )
    {
      if ( *(_DWORD *)v23 != 6 )
      {
        v17 = 0;
        goto LABEL_43;
      }
LABEL_77:
      v16 = (common::midb::RedisMgr *)&common::milog::MiLogDefault::default_log_obj_;
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_mgr.cpp",
        "cmdZRem",
        1534);
      v36 = *(_QWORD *)(v6 + 32);
      if ( *(_BYTE *)(((unsigned __int64)(v36 + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v36 + 32);
      }
      else if ( !*(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
      {
        v16 = (common::midb::RedisMgr *)"sadd [%s] failed, %s";
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)&v50,
          "sadd [%s] failed, %s",
          (const char *)M_pi->_vptr__Sp_counted_base,
          *(const char **)(v36 + 32));
LABEL_82:
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v50);
        v17 = -1;
        goto LABEL_43;
      }
      __asan_report_load8(M_pi);
      goto LABEL_82;
    }
LABEL_76:
    __asan_report_load4(v23);
    goto LABEL_77;
  }
  v17 = -1;
LABEL_43:
  v25 = *(_QWORD *)(v6 + 40);
  v26 = v25;
  if ( !v25 )
    goto LABEL_49;
  v27 = (volatile signed __int32 *)(v25 + 8);
  if ( &_pthread_key_create )
  {
    v28 = *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v27 & 7) + 3) < v28 || !v28 )
    {
      v29 = _InterlockedExchangeAdd(v27, 0xFFFFFFFF);
      goto LABEL_48;
    }
    v25 = __asan_report_store4(v27, v16);
  }
  v37 = *(_BYTE *)(((unsigned __int64)(v25 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v25 + 8) & 7) + 3) >= v37 && v37 )
  {
    __asan_report_load4(v25 + 8);
    goto LABEL_89;
  }
  v29 = *(_DWORD *)(v26 + 8);
  *(_DWORD *)(v26 + 8) = v29 - 1;
LABEL_48:
  if ( v29 != 1 )
    goto LABEL_49;
LABEL_89:
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
  {
    v38 = v26;
    __asan_report_load8(v26);
    goto LABEL_100;
  }
  v38 = *(_QWORD *)v26 + 16LL;
  if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
  {
LABEL_100:
    __asan_report_load8(v38);
    goto LABEL_101;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v26 + 16LL))(v26);
  v38 = v26 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_102;
  v39 = *(_BYTE *)((v38 >> 3) + 0x7FFF8000);
  if ( (char)((v38 & 7) + 3) < v39 || !v39 )
  {
    v40 = _InterlockedExchangeAdd((volatile signed __int32 *)v38, 0xFFFFFFFF);
    goto LABEL_95;
  }
LABEL_101:
  __asan_report_store4(v38, v16);
LABEL_102:
  v42 = *(_BYTE *)(((v26 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v26 + 12) & 7) + 3) >= v42 && v42 )
  {
    __asan_report_load4(v26 + 12);
LABEL_106:
    v41 = v26;
    __asan_report_load8(v26);
LABEL_107:
    v43 = (struct _Unwind_Exception *)__asan_report_load8(v41);
    M_p = v49._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v49._M_dataplus._M_p != &v49._anon_0 )
      operator delete(v49._M_dataplus._M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v43);
  }
  v40 = *(_DWORD *)(v26 + 12);
  *(_DWORD *)(v26 + 12) = v40 - 1;
LABEL_95:
  if ( v40 != 1 )
    goto LABEL_49;
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
    goto LABEL_106;
  v41 = *(_QWORD *)v26 + 24LL;
  if ( *(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
    goto LABEL_107;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v26 + 24LL))(v26);
LABEL_49:
  if ( v51 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v17;
};

// Line 1542: range 000000000CAA295E-000000000CAA2B2C
int32_t __fastcall common::midb::RedisMgr::cmdZRem(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        const std::set<std::string> *member_set)
{
  const std::set<std::string> *v6; // r8
  int32_t v7; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v8; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v10; // dl
  signed __int32 M_use_count; // eax
  char v13; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v15; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v17; // rdi
  char v18; // dl
  struct _Unwind_Exception *v19; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v7 = common::midb::RedisMgr::cmdZRem(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v21),
         (const std::string *)member_set,
         v6);
  v8 = v22;
  if ( v22 )
  {
    p_M_use_count = &v22->_M_use_count;
    if ( &_pthread_key_create )
    {
      v10 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v10 || !v10 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v21);
    }
    v13 = *(_BYTE *)(((unsigned __int64)&v8->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v8 + 8) & 7) + 3) >= v13 && v13 )
    {
      __asan_report_load4(&v8->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v8->_M_use_count;
    v8->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v7;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v8;
      __asan_report_load8(v8);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v8->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 2))(v8);
        p_M_weak_count = &v8->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v15 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v15 || !v15 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v21);
LABEL_26:
        v18 = *(_BYTE *)(((unsigned __int64)&v8->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v8 + 12) & 7) + 3) >= v18 && v18 )
        {
          __asan_report_load4(&v8->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v8->_M_weak_count;
        v8->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v7;
        if ( !*(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          v17 = (unsigned __int64)(v8->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 3))(v8);
            return v7;
          }
LABEL_31:
          v19 = (struct _Unwind_Exception *)__asan_report_load8(v17);
          v20 = v22;
          if ( v22 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v22);
          __asan_handle_no_return(v20);
          _Unwind_Resume(v19);
        }
LABEL_30:
        v17 = (unsigned __int64)v8;
        __asan_report_load8(v8);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v7;
};

// Line 1587: range 000000000CAA2B32-000000000CAA2D0A
int32_t __fastcall common::midb::RedisMgr::cmdZRemRangeByScore(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        int64_t min_score,
        int64_t max_score)
{
  int64_t v8; // r9
  int32_t v9; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v12; // dl
  signed __int32 M_use_count; // eax
  char v15; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v17; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v19; // rdi
  char v20; // dl
  struct _Unwind_Exception *v21; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // rdi
  __int64 v23; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v9 = common::midb::RedisMgr::cmdZRemRangeByScore(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v23),
         (const std::string *)min_score,
         max_score,
         v8);
  v10 = v24;
  if ( v24 )
  {
    p_M_use_count = &v24->_M_use_count;
    if ( &_pthread_key_create )
    {
      v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v23);
    }
    v15 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v15 && v15 )
    {
      __asan_report_load4(&v10->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v10->_M_use_count;
    v10->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v9;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v10;
      __asan_report_load8(v10);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v10->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 2))(v10);
        p_M_weak_count = &v10->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v17 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v17 || !v17 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v23);
LABEL_26:
        v20 = *(_BYTE *)(((unsigned __int64)&v10->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v10 + 12) & 7) + 3) >= v20 && v20 )
        {
          __asan_report_load4(&v10->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v10->_M_weak_count;
        v10->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v9;
        if ( !*(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          v19 = (unsigned __int64)(v10->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 3))(v10);
            return v9;
          }
LABEL_31:
          v21 = (struct _Unwind_Exception *)__asan_report_load8(v19);
          v22 = v24;
          if ( v24 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v24);
          __asan_handle_no_return(v22);
          _Unwind_Resume(v21);
        }
LABEL_30:
        v19 = (unsigned __int64)v10;
        __asan_report_load8(v10);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v9;
};

// Line 1628: range 000000000CAA2D10-000000000CAA2EE8
int32_t __fastcall common::midb::RedisMgr::cmdZRemRangeByScore(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        const std::string *min,
        const std::string *max)
{
  const std::string *v8; // r9
  int32_t v9; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v12; // dl
  signed __int32 M_use_count; // eax
  char v15; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v17; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v19; // rdi
  char v20; // dl
  struct _Unwind_Exception *v21; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // rdi
  __int64 v23; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v9 = common::midb::RedisMgr::cmdZRemRangeByScore(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v23),
         min,
         max,
         v8);
  v10 = v24;
  if ( v24 )
  {
    p_M_use_count = &v24->_M_use_count;
    if ( &_pthread_key_create )
    {
      v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v23);
    }
    v15 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v15 && v15 )
    {
      __asan_report_load4(&v10->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v10->_M_use_count;
    v10->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v9;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v10;
      __asan_report_load8(v10);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v10->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 2))(v10);
        p_M_weak_count = &v10->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v17 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v17 || !v17 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v23);
LABEL_26:
        v20 = *(_BYTE *)(((unsigned __int64)&v10->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v10 + 12) & 7) + 3) >= v20 && v20 )
        {
          __asan_report_load4(&v10->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v10->_M_weak_count;
        v10->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v9;
        if ( !*(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          v19 = (unsigned __int64)(v10->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 3))(v10);
            return v9;
          }
LABEL_31:
          v21 = (struct _Unwind_Exception *)__asan_report_load8(v19);
          v22 = v24;
          if ( v24 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v24);
          __asan_handle_no_return(v22);
          _Unwind_Resume(v21);
        }
LABEL_30:
        v19 = (unsigned __int64)v10;
        __asan_report_load8(v10);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v9;
};

// Line 1633: range 000000000CA8D0B0-000000000CA8FB3A
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::midb::RedisMgr::cmdZRemRangeByScore(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        unsigned __int64 key,
        unsigned __int64 min,
        const std::string *max)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  std::string::size_type M_string_length; // r15
  const char *v9; // rcx
  const char *v10; // r9
  const char *M_p; // r8
  unsigned __int64 v12; // rsi
  __int64 *v13; // rsi
  volatile signed __int32 *p_M_use_count; // rdi
  __int64 v15; // rsi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v16; // rax
  char v17; // dl
  volatile signed __int32 *v18; // rsi
  char v19; // si
  unsigned __int64 v20; // rdi
  char v21; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // rdi
  __int64 v24; // rax
  const char *v25; // rcx
  __int64 v26; // rax
  const std::string *keya; // [rsp+28h] [rbp-C8h]
  __int64 conn_ptra; // [rsp+30h] [rbp-C0h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v32; // [rsp+38h] [rbp-B8h]
  std::string s; // [rsp+40h] [rbp-B0h] BYREF
  std::string v34; // [rsp+60h] [rbp-90h] BYREF
  char v35[112]; // [rsp+80h] [rbp-70h] BYREF

  keya = (const std::string *)conn_ptr._M_refcount._M_pi;
  v5 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v5 = v7;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 14 reply_ptr:1642";
  *(_QWORD *)(v5 + 16) = common::midb::RedisMgr::cmdZRemRangeByScore;
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  s._M_dataplus._M_p = s._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&s, &byte_1A0CF744[-4], byte_1A0CF744, (std::forward_iterator_tag)key);
  common::tools::StringUtils::trim(&v34, keya, &s, 1);
  M_string_length = v34._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v34._M_dataplus._M_p != &v34._anon_0 )
    operator delete(v34._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s._M_dataplus._M_p != &s._anon_0 )
    operator delete(s._M_dataplus._M_p);
  if ( !M_string_length )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdZRemRangeByScore",
      1637);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v34, "key is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v34);
    goto LABEL_42;
  }
  if ( *(_BYTE *)((min >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(min);
    goto LABEL_23;
  }
  v9 = *(const char **)min;
  if ( *(_BYTE *)((key >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(key);
    goto LABEL_24;
  }
  v10 = *(const char **)key;
  if ( *(_BYTE *)(((unsigned __int64)keya >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(keya);
    goto LABEL_25;
  }
  M_p = keya->_M_dataplus._M_p;
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    p_M_use_count = v18;
    __asan_report_load8(v18);
    goto LABEL_26;
  }
  conn_ptra = *v13;
  p_M_use_count = (volatile signed __int32 *)(v13 + 1);
  if ( *(_BYTE *)(((unsigned __int64)(v13 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(p_M_use_count);
LABEL_27:
    v16 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count, keya);
    goto LABEL_28;
  }
  v16 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v15 + 8);
  v32 = v16;
  if ( !v16 )
  {
LABEL_20:
    common::midb::RedisMgr::command(
      (common::midb::RedisMgr *const)(v5 + 32),
      (common::midb::RedisConnPtr)__PAIR128__(&conn_ptra, (unsigned __int64)this),
      "ZREMRANGEBYSCORE %s %s %s",
      M_p,
      v10,
      v9);
    goto LABEL_32;
  }
  p_M_use_count = &v16->_M_use_count;
  if ( &_pthread_key_create )
  {
    v17 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v17 || !v17 )
    {
      _InterlockedAdd(p_M_use_count, 1u);
      goto LABEL_20;
    }
    goto LABEL_27;
  }
LABEL_28:
  v19 = *(_BYTE *)(((unsigned __int64)&v16->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v16 + 8) & 7) + 3) < v19 || !v19 )
  {
    ++v16->_M_use_count;
    goto LABEL_20;
  }
  __asan_report_load4(&v16->_M_use_count);
LABEL_32:
  if ( v32 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v32);
  v20 = *(_QWORD *)(v5 + 32);
  if ( v20 )
  {
    v21 = *(_BYTE *)((v20 >> 3) + 0x7FFF8000);
    if ( v21 && v21 <= 3 )
    {
      __asan_report_load4(v20);
    }
    else if ( *(_DWORD *)v20 != 6 )
    {
      if ( *(_DWORD *)v20 == 3 )
      {
        LODWORD(M_string_length) = 0;
        goto LABEL_40;
      }
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_mgr.cpp",
        "cmdZRemRangeByScore",
        1656);
      v26 = *(_QWORD *)(v5 + 32);
      if ( *(_BYTE *)(((unsigned __int64)(v26 + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v26 + 32);
      }
      else
      {
        v25 = *(const char **)(v26 + 32);
        if ( !*(_BYTE *)(((unsigned __int64)keya >> 3) + 0x7FFF8000) )
          goto LABEL_48;
      }
      goto LABEL_50;
    }
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdZRemRangeByScore",
      1650);
    v24 = *(_QWORD *)(v5 + 32);
    if ( *(_BYTE *)(((unsigned __int64)(v24 + 32) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v24 + 32);
    }
    else
    {
      v25 = *(const char **)(v24 + 32);
      if ( !*(_BYTE *)(((unsigned __int64)keya >> 3) + 0x7FFF8000) )
      {
LABEL_48:
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)&v34,
          "ZREMRANGEBYSCORE [%s] failed, %s",
          keya->_M_dataplus._M_p,
          v25);
LABEL_51:
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v34);
        LODWORD(M_string_length) = -1;
        goto LABEL_40;
      }
    }
LABEL_50:
    __asan_report_load8(keya);
    goto LABEL_51;
  }
  LODWORD(M_string_length) = 0;
LABEL_40:
  v22 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v5 + 40);
  if ( v22 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v22);
LABEL_42:
  if ( v35 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return (unsigned int)M_string_length;
};

// Line 1664: range 000000000CAA2EEE-000000000CAA30D0
int32_t __fastcall common::midb::RedisMgr::cmdZCount(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        int64_t min_score,
        int64_t max_score,
        uint32_t *count)
{
  int32_t v10; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v11; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v13; // dl
  signed __int32 M_use_count; // eax
  char v16; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v18; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v20; // rdi
  char v21; // dl
  struct _Unwind_Exception *v22; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v23; // rdi
  uint32_t *v24; // [rsp+0h] [rbp-48h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v25; // [rsp+8h] [rbp-40h]

  common::midb::RedisMgr::grabConn(this, index);
  v10 = common::midb::RedisMgr::cmdZCount(
          this,
          (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v24),
          (const std::string *)min_score,
          max_score,
          (int64_t)count,
          v24);
  v11 = v25;
  if ( v25 )
  {
    p_M_use_count = &v25->_M_use_count;
    if ( &_pthread_key_create )
    {
      v13 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v13 || !v13 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v24);
    }
    v16 = *(_BYTE *)(((unsigned __int64)&v11->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v11 + 8) & 7) + 3) >= v16 && v16 )
    {
      __asan_report_load4(&v11->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v11->_M_use_count;
    v11->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v10;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v11;
      __asan_report_load8(v11);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v11->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v11->_vptr__Sp_counted_base + 2))(v11);
        p_M_weak_count = &v11->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v18 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v18 || !v18 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v24);
LABEL_26:
        v21 = *(_BYTE *)(((unsigned __int64)&v11->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v11 + 12) & 7) + 3) >= v21 && v21 )
        {
          __asan_report_load4(&v11->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v11->_M_weak_count;
        v11->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v10;
        if ( !*(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          v20 = (unsigned __int64)(v11->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v11->_vptr__Sp_counted_base + 3))(v11);
            return v10;
          }
LABEL_31:
          v22 = (struct _Unwind_Exception *)__asan_report_load8(v20);
          v23 = v25;
          if ( v25 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v25);
          __asan_handle_no_return(v23);
          _Unwind_Resume(v22);
        }
LABEL_30:
        v20 = (unsigned __int64)v11;
        __asan_report_load8(v11);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v10;
};

// Line 1707: range 000000000CAA30D6-000000000CAA32A4
int32_t __fastcall common::midb::RedisMgr::cmdZCard(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        uint32_t *count)
{
  uint32_t *v6; // r8
  int32_t v7; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v8; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v10; // dl
  signed __int32 M_use_count; // eax
  char v13; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v15; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v17; // rdi
  char v18; // dl
  struct _Unwind_Exception *v19; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v7 = common::midb::RedisMgr::cmdZCard(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v21),
         (const std::string *)count,
         v6);
  v8 = v22;
  if ( v22 )
  {
    p_M_use_count = &v22->_M_use_count;
    if ( &_pthread_key_create )
    {
      v10 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v10 || !v10 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v21);
    }
    v13 = *(_BYTE *)(((unsigned __int64)&v8->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v8 + 8) & 7) + 3) >= v13 && v13 )
    {
      __asan_report_load4(&v8->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v8->_M_use_count;
    v8->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v7;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v8;
      __asan_report_load8(v8);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v8->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 2))(v8);
        p_M_weak_count = &v8->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v15 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v15 || !v15 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v21);
LABEL_26:
        v18 = *(_BYTE *)(((unsigned __int64)&v8->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v8 + 12) & 7) + 3) >= v18 && v18 )
        {
          __asan_report_load4(&v8->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v8->_M_weak_count;
        v8->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v7;
        if ( !*(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          v17 = (unsigned __int64)(v8->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 3))(v8);
            return v7;
          }
LABEL_31:
          v19 = (struct _Unwind_Exception *)__asan_report_load8(v17);
          v20 = v22;
          if ( v22 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v22);
          __asan_handle_no_return(v20);
          _Unwind_Resume(v19);
        }
LABEL_30:
        v17 = (unsigned __int64)v8;
        __asan_report_load8(v8);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v7;
};

// Line 1712: range 000000000CA8CB8A-000000000CA8D0AB
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::midb::RedisMgr::cmdZCard(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        unsigned __int64 key,
        uint32_t *count)
{
  volatile signed __int32 *M_ptr; // r12
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rbp
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r13
  common::midb::RedisMgr *v8; // rsi
  __int64 v9; // rax
  std::string::size_type M_string_length; // r15
  const char *vptr__Sp_counted_base; // r8
  volatile signed __int32 *p_M_use_count; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v13; // rax
  char v14; // dl
  unsigned int v15; // ebp
  char v16; // cl
  unsigned __int64 v17; // rdi
  char v18; // al
  char v19; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 conn_ptra; // [rsp+20h] [rbp-C8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v27; // [rsp+28h] [rbp-C0h]
  std::string s; // [rsp+30h] [rbp-B8h] BYREF
  std::string v29; // [rsp+50h] [rbp-98h] BYREF
  char v30[120]; // [rsp+70h] [rbp-78h] BYREF

  M_ptr = (volatile signed __int32 *)conn_ptr._M_ptr;
  M_pi = conn_ptr._M_refcount._M_pi;
  v6 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_0(64LL);
    if ( v9 )
      v6 = v9;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 14 reply_ptr:1720";
  *(_QWORD *)(v6 + 16) = common::midb::RedisMgr::cmdZCard;
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  s._M_dataplus._M_p = s._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&s, &byte_1A0CF744[-4], byte_1A0CF744, (std::forward_iterator_tag)key);
  v8 = (common::midb::RedisMgr *)M_pi;
  common::tools::StringUtils::trim(&v29, (const std::string *)M_pi, &s, 1);
  M_string_length = v29._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v29._M_dataplus._M_p != &v29._anon_0 )
    operator delete(v29._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s._M_dataplus._M_p != &s._anon_0 )
    operator delete(s._M_dataplus._M_p);
  if ( !M_string_length )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdZCard",
      1716);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v29, "key is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v29);
    v15 = 0;
    goto LABEL_41;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(M_pi);
    goto LABEL_21;
  }
  vptr__Sp_counted_base = (const char *)M_pi->_vptr__Sp_counted_base;
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    p_M_use_count = M_ptr;
    __asan_report_load8(M_ptr);
    goto LABEL_22;
  }
  conn_ptra = *(_QWORD *)M_ptr;
  p_M_use_count = M_ptr + 2;
  if ( *(_BYTE *)(((unsigned __int64)(M_ptr + 2) >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(p_M_use_count);
LABEL_23:
    v13 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count, M_pi);
    goto LABEL_24;
  }
  v13 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)M_ptr + 1);
  v27 = v13;
  if ( !v13 )
  {
LABEL_18:
    v8 = this;
    common::midb::RedisMgr::command(
      (common::midb::RedisMgr *const)(v6 + 32),
      (common::midb::RedisConnPtr)__PAIR128__(&conn_ptra, (unsigned __int64)this),
      "ZCARD %s",
      vptr__Sp_counted_base);
    goto LABEL_28;
  }
  p_M_use_count = &v13->_M_use_count;
  if ( &_pthread_key_create )
  {
    v14 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v14 || !v14 )
    {
      _InterlockedAdd(p_M_use_count, 1u);
      goto LABEL_18;
    }
    goto LABEL_23;
  }
LABEL_24:
  v16 = *(_BYTE *)(((unsigned __int64)&v13->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v13 + 8) & 7) + 3) < v16 || !v16 )
  {
    ++v13->_M_use_count;
    goto LABEL_18;
  }
  __asan_report_load4(&v13->_M_use_count);
LABEL_28:
  if ( v27 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v27);
  v17 = *(_QWORD *)(v6 + 32);
  if ( v17 )
  {
    v18 = *(_BYTE *)((v17 >> 3) + 0x7FFF8000);
    if ( v18 && v18 <= 3 )
    {
      __asan_report_load4(v17);
    }
    else if ( *(_DWORD *)v17 != 6 )
    {
      if ( *(_DWORD *)v17 == 3 )
      {
        if ( *(_BYTE *)(((v17 + 8) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v17 + 8);
        }
        else
        {
          v8 = (common::midb::RedisMgr *)key;
          v19 = *(_BYTE *)((key >> 3) + 0x7FFF8000);
          if ( (char)((key & 7) + 3) < v19 || !v19 )
          {
            *(_DWORD *)key = *(_QWORD *)(v17 + 8);
            v15 = 0;
            goto LABEL_39;
          }
        }
        __asan_report_store4(v8, v8);
        goto LABEL_58;
      }
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_mgr.cpp",
        "cmdZCard",
        1734);
      v23 = *(_QWORD *)(v6 + 32);
      if ( *(_BYTE *)(((unsigned __int64)(v23 + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v23 + 32);
      }
      else if ( !*(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
      {
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)&v29,
          "ZCARD [%s] failed, %s",
          (const char *)M_pi->_vptr__Sp_counted_base,
          *(const char **)(v23 + 32));
        goto LABEL_50;
      }
      goto LABEL_49;
    }
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdZCard",
      1728);
    v22 = *(_QWORD *)(v6 + 32);
    if ( *(_BYTE *)(((unsigned __int64)(v22 + 32) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v22 + 32);
    }
    else if ( !*(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
    {
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&v29,
        "ZCOUNT [%s] failed, %s",
        (const char *)M_pi->_vptr__Sp_counted_base,
        *(const char **)(v22 + 32));
LABEL_50:
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v29);
      v15 = -1;
      goto LABEL_39;
    }
LABEL_49:
    __asan_report_load8(M_pi);
    goto LABEL_50;
  }
LABEL_58:
  v15 = 0;
LABEL_39:
  v20 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 40);
  if ( v20 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
LABEL_41:
  if ( v30 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v15;
};

// Line 1743: range 000000000CAA32AA-000000000CAA348C
int32_t __fastcall common::midb::RedisMgr::cmdZCount(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        const std::string *min,
        const std::string *max,
        uint32_t *count)
{
  int32_t v10; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v11; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v13; // dl
  signed __int32 M_use_count; // eax
  char v16; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v18; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v20; // rdi
  char v21; // dl
  struct _Unwind_Exception *v22; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v23; // rdi
  uint32_t *v24; // [rsp+0h] [rbp-48h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v25; // [rsp+8h] [rbp-40h]

  common::midb::RedisMgr::grabConn(this, index);
  v10 = common::midb::RedisMgr::cmdZCount(
          this,
          (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v24),
          min,
          max,
          (const std::string *)count,
          v24);
  v11 = v25;
  if ( v25 )
  {
    p_M_use_count = &v25->_M_use_count;
    if ( &_pthread_key_create )
    {
      v13 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v13 || !v13 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v24);
    }
    v16 = *(_BYTE *)(((unsigned __int64)&v11->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v11 + 8) & 7) + 3) >= v16 && v16 )
    {
      __asan_report_load4(&v11->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v11->_M_use_count;
    v11->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v10;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v11;
      __asan_report_load8(v11);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v11->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v11->_vptr__Sp_counted_base + 2))(v11);
        p_M_weak_count = &v11->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v18 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v18 || !v18 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v24);
LABEL_26:
        v21 = *(_BYTE *)(((unsigned __int64)&v11->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v11 + 12) & 7) + 3) >= v21 && v21 )
        {
          __asan_report_load4(&v11->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v11->_M_weak_count;
        v11->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v10;
        if ( !*(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          v20 = (unsigned __int64)(v11->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v11->_vptr__Sp_counted_base + 3))(v11);
            return v10;
          }
LABEL_31:
          v22 = (struct _Unwind_Exception *)__asan_report_load8(v20);
          v23 = v25;
          if ( v25 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v25);
          __asan_handle_no_return(v23);
          _Unwind_Resume(v22);
        }
LABEL_30:
        v20 = (unsigned __int64)v11;
        __asan_report_load8(v11);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v10;
};

// Line 1782: range 000000000CA9FDBC-000000000CAA0282
bool __fastcall common::midb::RedisMgr::isExist(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key)
{
  std::forward_iterator_tag v3; // cl
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  std::string::size_type M_string_length; // r14
  common::midb::RedisMgr *v9; // rsi
  const std::string *v10; // rdi
  char v11; // al
  unsigned __int64 v12; // rbp
  volatile signed __int32 *v13; // rdi
  char v14; // dl
  signed __int32 v15; // eax
  unsigned __int64 v16; // rdi
  char v17; // dl
  signed __int32 v18; // eax
  unsigned __int64 v19; // rdi
  __int64 v21; // rax
  char v22; // dl
  char v23; // dl
  struct _Unwind_Exception *v24; // rbx
  std::string::pointer M_p; // rdi
  std::string s; // [rsp+10h] [rbp-B8h] BYREF
  std::string v28; // [rsp+30h] [rbp-98h] BYREF
  char v29[120]; // [rsp+50h] [rbp-78h] BYREF

  v5 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v5 = v7;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 14 reply_ptr:1791";
  *(_QWORD *)(v5 + 16) = common::midb::RedisMgr::isExist;
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  s._M_dataplus._M_p = s._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&s, &byte_1A0CF744[-4], byte_1A0CF744, v3);
  common::tools::StringUtils::trim(&v28, key, &s, 1);
  M_string_length = v28._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v28._M_dataplus._M_p != &v28._anon_0 )
    operator delete(v28._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s._M_dataplus._M_p != &s._anon_0 )
    operator delete(s._M_dataplus._M_p);
  if ( M_string_length )
  {
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      v10 = key;
      __asan_report_load8(key);
    }
    else
    {
      v9 = this;
      common::midb::RedisMgr::command(
        (common::midb::RedisMgr *const)(v5 + 32),
        (const uint32_t)this,
        (const char *)index,
        "EXISTS %s",
        key->_M_dataplus._M_p);
      v10 = *(const std::string **)(v5 + 32);
      if ( !v10 )
      {
LABEL_46:
        LOBYTE(M_string_length) = 0;
LABEL_17:
        v12 = *(_QWORD *)(v5 + 40);
        if ( !v12 )
          goto LABEL_34;
        v13 = (volatile signed __int32 *)(v12 + 8);
        if ( &_pthread_key_create )
        {
          v14 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v13 & 7) + 3) < v14 || !v14 )
          {
            v15 = _InterlockedExchangeAdd(v13, 0xFFFFFFFF);
            goto LABEL_22;
          }
          __asan_report_store4(v13, v9);
        }
        v22 = *(_BYTE *)(((v12 + 8) >> 3) + 0x7FFF8000);
        if ( (char)(((v12 + 8) & 7) + 3) >= v22 && v22 )
        {
          __asan_report_load4(v12 + 8);
          goto LABEL_52;
        }
        v15 = *(_DWORD *)(v12 + 8);
        *(_DWORD *)(v12 + 8) = v15 - 1;
LABEL_22:
        if ( v15 != 1 )
          goto LABEL_34;
        if ( !*(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        {
          v16 = *(_QWORD *)v12 + 16LL;
          if ( !*(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 16LL))(v12);
            v16 = v12 + 12;
            if ( !&_pthread_key_create )
              goto LABEL_55;
            v17 = *(_BYTE *)((v16 >> 3) + 0x7FFF8000);
            if ( (char)((v16 & 7) + 3) < v17 || !v17 )
            {
              v18 = _InterlockedExchangeAdd((volatile signed __int32 *)v16, 0xFFFFFFFF);
              goto LABEL_29;
            }
LABEL_54:
            __asan_report_store4(v16, v9);
LABEL_55:
            v23 = *(_BYTE *)(((v12 + 12) >> 3) + 0x7FFF8000);
            if ( (char)(((v12 + 12) & 7) + 3) >= v23 && v23 )
            {
              __asan_report_load4(v12 + 12);
              goto LABEL_59;
            }
            v18 = *(_DWORD *)(v12 + 12);
            *(_DWORD *)(v12 + 12) = v18 - 1;
LABEL_29:
            if ( v18 != 1 )
              goto LABEL_34;
            if ( !*(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
            {
              v19 = *(_QWORD *)v12 + 24LL;
              if ( !*(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
              {
                (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 24LL))(v12);
                goto LABEL_34;
              }
LABEL_60:
              v24 = (struct _Unwind_Exception *)__asan_report_load8(v19);
              M_p = s._M_dataplus._M_p;
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s._M_dataplus._M_p != &s._anon_0 )
                operator delete(s._M_dataplus._M_p);
              __asan_handle_no_return(M_p);
              _Unwind_Resume(v24);
            }
LABEL_59:
            v19 = v12;
            __asan_report_load8(v12);
            goto LABEL_60;
          }
LABEL_53:
          __asan_report_load8(v16);
          goto LABEL_54;
        }
LABEL_52:
        v16 = v12;
        __asan_report_load8(v12);
        goto LABEL_53;
      }
      v11 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
      if ( !v11 || v11 > 3 )
      {
        if ( LODWORD(v10->_M_dataplus._M_p) != 6 )
        {
          if ( !*(_BYTE *)(((unsigned __int64)&v10->_M_string_length >> 3) + 0x7FFF8000) )
          {
            LOBYTE(M_string_length) = v10->_M_string_length == 1;
            goto LABEL_17;
          }
          __asan_report_load8(&v10->_M_string_length);
          goto LABEL_46;
        }
LABEL_39:
        v9 = (common::midb::RedisMgr *)&common::milog::MiLogDefault::default_log_obj_;
        common::milog::MiLogStream::MiLogStream(
          (common::milog::MiLogStream *const)&v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_mgr.cpp",
          "isExist",
          1798);
        v21 = *(_QWORD *)(v5 + 32);
        if ( *(_BYTE *)(((unsigned __int64)(v21 + 32) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v21 + 32);
        }
        else if ( !*(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
        {
          v9 = (common::midb::RedisMgr *)"EXISTS [%s] faild, %s";
          common::milog::MiLogStream::operator()(
            (common::milog::MiLogStream *const)&v28,
            "EXISTS [%s] faild, %s",
            key->_M_dataplus._M_p,
            *(const char **)(v21 + 32));
LABEL_44:
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v28);
          LOBYTE(M_string_length) = 0;
          goto LABEL_17;
        }
        __asan_report_load8(key);
        goto LABEL_44;
      }
    }
    __asan_report_load4(v10);
    goto LABEL_39;
  }
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)&v28,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/redis_mgr.cpp",
    "isExist",
    1786);
  common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v28, "key is empty");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v28);
LABEL_34:
  if ( v29 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return M_string_length;
};

// Line 1805: range 000000000CAA3492-000000000CAA3660
int32_t __fastcall common::midb::RedisMgr::cmdIncr(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        int64_t *value)
{
  int64_t *v6; // r8
  int32_t v7; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v8; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v10; // dl
  signed __int32 M_use_count; // eax
  char v13; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v15; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v17; // rdi
  char v18; // dl
  struct _Unwind_Exception *v19; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v7 = common::midb::RedisMgr::cmdIncr(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v21),
         (const std::string *)value,
         v6);
  v8 = v22;
  if ( v22 )
  {
    p_M_use_count = &v22->_M_use_count;
    if ( &_pthread_key_create )
    {
      v10 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v10 || !v10 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v21);
    }
    v13 = *(_BYTE *)(((unsigned __int64)&v8->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v8 + 8) & 7) + 3) >= v13 && v13 )
    {
      __asan_report_load4(&v8->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v8->_M_use_count;
    v8->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v7;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v8;
      __asan_report_load8(v8);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v8->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 2))(v8);
        p_M_weak_count = &v8->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v15 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v15 || !v15 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v21);
LABEL_26:
        v18 = *(_BYTE *)(((unsigned __int64)&v8->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v8 + 12) & 7) + 3) >= v18 && v18 )
        {
          __asan_report_load4(&v8->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v8->_M_weak_count;
        v8->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v7;
        if ( !*(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          v17 = (unsigned __int64)(v8->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 3))(v8);
            return v7;
          }
LABEL_31:
          v19 = (struct _Unwind_Exception *)__asan_report_load8(v17);
          v20 = v22;
          if ( v22 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v22);
          __asan_handle_no_return(v20);
          _Unwind_Resume(v19);
        }
LABEL_30:
        v17 = (unsigned __int64)v8;
        __asan_report_load8(v8);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v7;
};

// Line 1842: range 000000000CAA3666-000000000CAA3834
int32_t __fastcall common::midb::RedisMgr::cmdHLen(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        uint32_t *count)
{
  uint32_t *v6; // r8
  int32_t v7; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v8; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v10; // dl
  signed __int32 M_use_count; // eax
  char v13; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v15; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v17; // rdi
  char v18; // dl
  struct _Unwind_Exception *v19; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v7 = common::midb::RedisMgr::cmdHLen(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v21),
         (const std::string *)count,
         v6);
  v8 = v22;
  if ( v22 )
  {
    p_M_use_count = &v22->_M_use_count;
    if ( &_pthread_key_create )
    {
      v10 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v10 || !v10 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v21);
    }
    v13 = *(_BYTE *)(((unsigned __int64)&v8->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v8 + 8) & 7) + 3) >= v13 && v13 )
    {
      __asan_report_load4(&v8->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v8->_M_use_count;
    v8->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v7;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v8;
      __asan_report_load8(v8);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v8->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 2))(v8);
        p_M_weak_count = &v8->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v15 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v15 || !v15 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v21);
LABEL_26:
        v18 = *(_BYTE *)(((unsigned __int64)&v8->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v8 + 12) & 7) + 3) >= v18 && v18 )
        {
          __asan_report_load4(&v8->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v8->_M_weak_count;
        v8->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v7;
        if ( !*(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          v17 = (unsigned __int64)(v8->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 3))(v8);
            return v7;
          }
LABEL_31:
          v19 = (struct _Unwind_Exception *)__asan_report_load8(v17);
          v20 = v22;
          if ( v22 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v22);
          __asan_handle_no_return(v20);
          _Unwind_Resume(v19);
        }
LABEL_30:
        v17 = (unsigned __int64)v8;
        __asan_report_load8(v8);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v7;
};

// Line 1847: range 000000000CA7E4BC-000000000CA7EC00
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::midb::RedisMgr::cmdHLen(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        unsigned __int64 key,
        uint32_t *count)
{
  volatile signed __int32 *M_ptr; // rbp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r12
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r13
  common::midb::RedisMgr *v8; // rsi
  __int64 v9; // rax
  std::string::size_type M_string_length; // r15
  const char *vptr__Sp_counted_base; // r8
  volatile signed __int32 *p_M_use_count; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v13; // rax
  char v14; // dl
  unsigned int v15; // r12d
  char v16; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v17; // rbp
  _Atomic_word *v18; // rdi
  char v19; // dl
  signed __int32 M_use_count; // eax
  unsigned __int64 v21; // rdi
  char v22; // al
  char v23; // dl
  unsigned __int64 v24; // rbp
  volatile signed __int32 *v25; // rdi
  char v26; // dl
  signed __int32 v27; // eax
  char v29; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v31; // dl
  signed __int32 M_weak_count; // eax
  char v33; // dl
  char v34; // dl
  unsigned __int64 v35; // rdi
  char v36; // dl
  signed __int32 v37; // eax
  unsigned __int64 v38; // rdi
  char v39; // dl
  struct _Unwind_Exception *v40; // rbx
  std::string::pointer M_p; // rdi
  __int64 conn_ptra; // [rsp+20h] [rbp-C8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v45; // [rsp+28h] [rbp-C0h]
  std::string s; // [rsp+30h] [rbp-B8h] BYREF
  std::string v47; // [rsp+50h] [rbp-98h] BYREF
  char v48[120]; // [rsp+70h] [rbp-78h] BYREF

  M_ptr = (volatile signed __int32 *)conn_ptr._M_ptr;
  M_pi = conn_ptr._M_refcount._M_pi;
  v6 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_0(64LL);
    if ( v9 )
      v6 = v9;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 14 reply_ptr:1854";
  *(_QWORD *)(v6 + 16) = common::midb::RedisMgr::cmdHLen;
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  s._M_dataplus._M_p = s._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&s, &byte_1A0CF744[-4], byte_1A0CF744, (std::forward_iterator_tag)key);
  v8 = (common::midb::RedisMgr *)M_pi;
  common::tools::StringUtils::trim(&v47, (const std::string *)M_pi, &s, 1);
  M_string_length = v47._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v47._M_dataplus._M_p != &v47._anon_0 )
    operator delete(v47._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s._M_dataplus._M_p != &s._anon_0 )
    operator delete(s._M_dataplus._M_p);
  if ( !M_string_length )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v47,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdHLen",
      1850);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v47, "key is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v47);
    v15 = -1;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(M_pi);
    goto LABEL_21;
  }
  vptr__Sp_counted_base = (const char *)M_pi->_vptr__Sp_counted_base;
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    p_M_use_count = M_ptr;
    __asan_report_load8(M_ptr);
    goto LABEL_22;
  }
  conn_ptra = *(_QWORD *)M_ptr;
  p_M_use_count = M_ptr + 2;
  if ( *(_BYTE *)(((unsigned __int64)(M_ptr + 2) >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(p_M_use_count);
LABEL_23:
    v13 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count, M_pi);
    goto LABEL_24;
  }
  v13 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)M_ptr + 1);
  v45 = v13;
  if ( !v13 )
  {
LABEL_18:
    v8 = this;
    common::midb::RedisMgr::command(
      (common::midb::RedisMgr *const)(v6 + 32),
      (common::midb::RedisConnPtr)__PAIR128__(&conn_ptra, (unsigned __int64)this),
      "HLEN %s",
      vptr__Sp_counted_base);
    goto LABEL_28;
  }
  p_M_use_count = &v13->_M_use_count;
  if ( &_pthread_key_create )
  {
    v14 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v14 || !v14 )
    {
      _InterlockedAdd(p_M_use_count, 1u);
      goto LABEL_18;
    }
    goto LABEL_23;
  }
LABEL_24:
  v16 = *(_BYTE *)(((unsigned __int64)&v13->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v13 + 8) & 7) + 3) < v16 || !v16 )
  {
    ++v13->_M_use_count;
    goto LABEL_18;
  }
  __asan_report_load4(&v13->_M_use_count);
LABEL_28:
  v17 = v45;
  if ( !v45 )
    goto LABEL_34;
  v18 = &v45->_M_use_count;
  if ( &_pthread_key_create )
  {
    v19 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v18 & 7) + 3) < v19 || !v19 )
    {
      M_use_count = _InterlockedExchangeAdd(v18, 0xFFFFFFFF);
      goto LABEL_33;
    }
    __asan_report_store4(v18, v8);
  }
  v29 = *(_BYTE *)(((unsigned __int64)&v17->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v17 + 8) & 7) + 3) >= v29 && v29 )
  {
    __asan_report_load4(&v17->_M_use_count);
    goto LABEL_56;
  }
  M_use_count = v17->_M_use_count;
  v17->_M_use_count = M_use_count - 1;
LABEL_33:
  if ( M_use_count != 1 )
    goto LABEL_34;
LABEL_56:
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)v17;
    __asan_report_load8(v17);
    goto LABEL_67;
  }
  p_M_weak_count = (volatile signed __int32 *)(v17->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_68;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v17->_vptr__Sp_counted_base + 2))(v17);
  p_M_weak_count = &v17->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_69;
  v31 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v31 || !v31 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_62;
  }
LABEL_68:
  __asan_report_store4(p_M_weak_count, v8);
LABEL_69:
  v33 = *(_BYTE *)(((unsigned __int64)&v17->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v17 + 12) & 7) + 3) >= v33 && v33 )
  {
    __asan_report_load4(&v17->_M_weak_count);
LABEL_73:
    v21 = (unsigned __int64)v17;
    __asan_report_load8(v17);
    goto LABEL_74;
  }
  M_weak_count = v17->_M_weak_count;
  v17->_M_weak_count = M_weak_count - 1;
LABEL_62:
  if ( M_weak_count != 1 )
    goto LABEL_34;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    goto LABEL_73;
  v21 = (unsigned __int64)(v17->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
  {
LABEL_74:
    __asan_report_load8(v21);
LABEL_75:
    __asan_report_load4(v21);
    goto LABEL_76;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v17->_vptr__Sp_counted_base + 3))(v17);
LABEL_34:
  v21 = *(_QWORD *)(v6 + 32);
  if ( !v21 )
  {
LABEL_82:
    v15 = -1;
    goto LABEL_42;
  }
  v22 = *(_BYTE *)((v21 >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
    goto LABEL_75;
  if ( *(_DWORD *)v21 != 6 )
  {
    if ( *(_BYTE *)(((v21 + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v21 + 8);
    }
    else
    {
      v8 = (common::midb::RedisMgr *)key;
      v23 = *(_BYTE *)((key >> 3) + 0x7FFF8000);
      if ( (char)((key & 7) + 3) < v23 || !v23 )
      {
        *(_DWORD *)key = *(_QWORD *)(v21 + 8);
        v15 = 0;
        goto LABEL_42;
      }
    }
    __asan_report_store4(v8, v8);
    goto LABEL_82;
  }
LABEL_76:
  v8 = (common::midb::RedisMgr *)&common::milog::MiLogDefault::default_log_obj_;
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)&v47,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/redis_mgr.cpp",
    "cmdHLen",
    1862);
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(M_pi);
  }
  else
  {
    v8 = (common::midb::RedisMgr *)"scard [%s] failed";
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&v47,
      "scard [%s] failed",
      (const char *)M_pi->_vptr__Sp_counted_base);
  }
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v47);
  v15 = -1;
LABEL_42:
  v24 = *(_QWORD *)(v6 + 40);
  if ( !v24 )
    goto LABEL_48;
  v25 = (volatile signed __int32 *)(v24 + 8);
  if ( &_pthread_key_create )
  {
    v26 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v25 & 7) + 3) < v26 || !v26 )
    {
      v27 = _InterlockedExchangeAdd(v25, 0xFFFFFFFF);
      goto LABEL_47;
    }
    __asan_report_store4(v25, v8);
  }
  v34 = *(_BYTE *)(((v24 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v24 + 8) & 7) + 3) >= v34 && v34 )
  {
    __asan_report_load4(v24 + 8);
    goto LABEL_88;
  }
  v27 = *(_DWORD *)(v24 + 8);
  *(_DWORD *)(v24 + 8) = v27 - 1;
LABEL_47:
  if ( v27 != 1 )
    goto LABEL_48;
LABEL_88:
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
  {
    v35 = v24;
    __asan_report_load8(v24);
    goto LABEL_99;
  }
  v35 = *(_QWORD *)v24 + 16LL;
  if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
  {
LABEL_99:
    __asan_report_load8(v35);
    goto LABEL_100;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v24 + 16LL))(v24);
  v35 = v24 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_101;
  v36 = *(_BYTE *)((v35 >> 3) + 0x7FFF8000);
  if ( (char)((v35 & 7) + 3) < v36 || !v36 )
  {
    v37 = _InterlockedExchangeAdd((volatile signed __int32 *)v35, 0xFFFFFFFF);
    goto LABEL_94;
  }
LABEL_100:
  __asan_report_store4(v35, v8);
LABEL_101:
  v39 = *(_BYTE *)(((v24 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v24 + 12) & 7) + 3) >= v39 && v39 )
  {
    __asan_report_load4(v24 + 12);
LABEL_105:
    v38 = v24;
    __asan_report_load8(v24);
LABEL_106:
    v40 = (struct _Unwind_Exception *)__asan_report_load8(v38);
    M_p = s._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s._M_dataplus._M_p != &s._anon_0 )
      operator delete(s._M_dataplus._M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v40);
  }
  v37 = *(_DWORD *)(v24 + 12);
  *(_DWORD *)(v24 + 12) = v37 - 1;
LABEL_94:
  if ( v37 != 1 )
    goto LABEL_48;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
    goto LABEL_105;
  v38 = *(_QWORD *)v24 + 24LL;
  if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
    goto LABEL_106;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v24 + 24LL))(v24);
LABEL_48:
  if ( v48 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v15;
};

// Line 1871: range 000000000CAA383A-000000000CAA3A12
int32_t __fastcall common::midb::RedisMgr::cmdHSetnx(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        const std::string *field,
        const std::string *value)
{
  const std::string *v8; // r9
  int32_t v9; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v12; // dl
  signed __int32 M_use_count; // eax
  char v15; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v17; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v19; // rdi
  char v20; // dl
  struct _Unwind_Exception *v21; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // rdi
  __int64 v23; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v9 = common::midb::RedisMgr::cmdHSetnx(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v23),
         field,
         value,
         v8);
  v10 = v24;
  if ( v24 )
  {
    p_M_use_count = &v24->_M_use_count;
    if ( &_pthread_key_create )
    {
      v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v23);
    }
    v15 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v15 && v15 )
    {
      __asan_report_load4(&v10->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v10->_M_use_count;
    v10->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v9;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v10;
      __asan_report_load8(v10);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v10->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 2))(v10);
        p_M_weak_count = &v10->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v17 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v17 || !v17 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v23);
LABEL_26:
        v20 = *(_BYTE *)(((unsigned __int64)&v10->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v10 + 12) & 7) + 3) >= v20 && v20 )
        {
          __asan_report_load4(&v10->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v10->_M_weak_count;
        v10->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v9;
        if ( !*(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          v19 = (unsigned __int64)(v10->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 3))(v10);
            return v9;
          }
LABEL_31:
          v21 = (struct _Unwind_Exception *)__asan_report_load8(v19);
          v22 = v24;
          if ( v24 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v24);
          __asan_handle_no_return(v22);
          _Unwind_Resume(v21);
        }
LABEL_30:
        v19 = (unsigned __int64)v10;
        __asan_report_load8(v10);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v9;
};

// Line 1876: range 000000000CA929FC-000000000CA94EA6
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::midb::RedisMgr::cmdHSetnx(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        unsigned __int64 key,
        unsigned __int64 field,
        const std::string *value)
{
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r13
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  const char *p_is_init; // rsi
  __int64 v10; // rax
  std::string::pointer v11; // rcx
  std::string::pointer v12; // r9
  std::string::pointer vptr__Sp_counted_base; // r8
  volatile signed __int32 *M_ptr; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v15; // rax
  char v16; // dl
  unsigned int v17; // r12d
  char v18; // r10
  __int64 v19; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // r12
  _Atomic_word *p_M_use_count; // rdi
  char v22; // dl
  signed __int32 M_use_count; // eax
  unsigned __int64 v24; // rdi
  char v25; // al
  __int64 v26; // rax
  unsigned __int64 v27; // r14
  volatile signed __int32 *v28; // rdi
  char v29; // dl
  signed __int32 v30; // eax
  char v32; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v34; // dl
  signed __int32 M_weak_count; // eax
  char v36; // dl
  __int64 v37; // rax
  const char *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  char v41; // dl
  unsigned __int64 v42; // rdi
  char v43; // dl
  signed __int32 v44; // eax
  unsigned __int64 v45; // rdi
  char v46; // dl
  struct _Unwind_Exception *v47; // rbx
  std::string::pointer M_p; // rdi
  const char *v49; // [rsp-8h] [rbp-F8h]
  std::string *s; // [rsp+18h] [rbp-D8h]
  common::midb::RedisConnPtr conn_ptra; // [rsp+28h] [rbp-C8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v54; // [rsp+38h] [rbp-B8h]
  std::string v55; // [rsp+40h] [rbp-B0h] BYREF
  std::string v56; // [rsp+60h] [rbp-90h] BYREF
  char v57[112]; // [rsp+80h] [rbp-70h] BYREF

  conn_ptra._M_ptr = conn_ptr._M_ptr;
  M_pi = conn_ptr._M_refcount._M_pi;
  v7 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_0(64LL);
    if ( v10 )
      v7 = v10;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 16 14 reply_ptr:1883";
  *(_QWORD *)(v7 + 16) = common::midb::RedisMgr::cmdHSetnx;
  v8 = v7 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202178560;
  v55._M_dataplus._M_p = v55._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v55, &byte_1A0CF744[-4], byte_1A0CF744, (std::forward_iterator_tag)&v55);
  p_is_init = (const char *)M_pi;
  common::tools::StringUtils::trim(&v56, (const std::string *)M_pi, &v55, 1);
  s = (std::string *)v56._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v56._M_dataplus._M_p != &v56._anon_0 )
    operator delete(v56._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v55._M_dataplus._M_p != &v55._anon_0 )
    operator delete(v55._M_dataplus._M_p);
  if ( !s )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdHSetnx",
      1879);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v56, "key is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v56);
    v17 = -1;
    goto LABEL_54;
  }
  if ( *(_BYTE *)(((field + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(field + 8);
    goto LABEL_24;
  }
  p_is_init = *(const char **)(field + 8);
  if ( *(_BYTE *)((field >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(field);
    goto LABEL_25;
  }
  v11 = *(std::string::pointer *)field;
  if ( *(_BYTE *)((key >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(key);
    goto LABEL_26;
  }
  v12 = *(std::string::pointer *)key;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(M_pi);
    goto LABEL_27;
  }
  vptr__Sp_counted_base = (std::string::pointer)M_pi->_vptr__Sp_counted_base;
  if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    M_ptr = (volatile signed __int32 *)conn_ptra._M_ptr;
    __asan_report_load8(conn_ptra._M_ptr);
    goto LABEL_28;
  }
  conn_ptra._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)conn_ptra._M_ptr->_vptr_RedisConnBase;
  M_ptr = (volatile signed __int32 *)&conn_ptra._M_ptr->last_use_time;
  if ( *(_BYTE *)(((unsigned __int64)&conn_ptra._M_ptr->last_use_time >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_load8(M_ptr);
LABEL_29:
    v15 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(M_ptr, p_is_init);
    goto LABEL_30;
  }
  v15 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&conn_ptra._M_ptr->last_use_time;
  v54 = v15;
  if ( !v15 )
  {
LABEL_21:
    v49 = p_is_init;
    p_is_init = (const char *)&this->is_init_;
    common::midb::RedisMgr::command(
      (common::midb::RedisMgr *const)(v7 + 32),
      (common::midb::RedisConnPtr)__PAIR128__(
                                    (common::midb::RedisConnPtr *)&conn_ptra._M_refcount,
                                    (unsigned __int64)this),
      "HSETNX %s %s %b",
      vptr__Sp_counted_base,
      v12,
      v11,
      v49);
    goto LABEL_34;
  }
  M_ptr = &v15->_M_use_count;
  if ( &_pthread_key_create )
  {
    v16 = *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)M_ptr & 7) + 3) < v16 || !v16 )
    {
      _InterlockedAdd(M_ptr, 1u);
      goto LABEL_21;
    }
    goto LABEL_29;
  }
LABEL_30:
  v18 = *(_BYTE *)(((unsigned __int64)&v15->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v15 + 8) & 7) + 3) < v18 || !v18 )
  {
    ++v15->_M_use_count;
    goto LABEL_21;
  }
  __asan_report_load4(&v15->_M_use_count);
LABEL_34:
  v19 = (__int64)v54;
  v20 = v54;
  if ( !v54 )
    goto LABEL_40;
  p_M_use_count = &v54->_M_use_count;
  if ( &_pthread_key_create )
  {
    v22 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v22 || !v22 )
    {
      M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
      goto LABEL_39;
    }
    v19 = __asan_report_store4(p_M_use_count, p_is_init);
  }
  v32 = *(_BYTE *)(((unsigned __int64)(v19 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v19 + 8) & 7) + 3) >= v32 && v32 )
  {
    __asan_report_load4(v19 + 8);
    goto LABEL_62;
  }
  M_use_count = v20->_M_use_count;
  v20->_M_use_count = M_use_count - 1;
LABEL_39:
  if ( M_use_count != 1 )
    goto LABEL_40;
LABEL_62:
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)v20;
    __asan_report_load8(v20);
    goto LABEL_73;
  }
  p_M_weak_count = (volatile signed __int32 *)(v20->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_74;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v20->_vptr__Sp_counted_base + 2))(v20);
  p_M_weak_count = &v20->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_75;
  v34 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v34 || !v34 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_68;
  }
LABEL_74:
  __asan_report_store4(p_M_weak_count, p_is_init);
LABEL_75:
  v36 = *(_BYTE *)(((unsigned __int64)&v20->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v20 + 12) & 7) + 3) >= v36 && v36 )
  {
    __asan_report_load4(&v20->_M_weak_count);
LABEL_79:
    v24 = (unsigned __int64)v20;
    __asan_report_load8(v20);
    goto LABEL_80;
  }
  M_weak_count = v20->_M_weak_count;
  v20->_M_weak_count = M_weak_count - 1;
LABEL_68:
  if ( M_weak_count != 1 )
    goto LABEL_40;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    goto LABEL_79;
  v24 = (unsigned __int64)(v20->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
  {
LABEL_80:
    __asan_report_load8(v24);
    goto LABEL_81;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v20->_vptr__Sp_counted_base + 3))(v20);
LABEL_40:
  v24 = *(_QWORD *)(v7 + 32);
  if ( v24 )
  {
    v25 = *(_BYTE *)((v24 >> 3) + 0x7FFF8000);
    if ( !v25 || v25 > 3 )
    {
      if ( *(_DWORD *)v24 != 6 )
      {
        if ( *(_DWORD *)v24 == 3 )
        {
          if ( *(_BYTE *)(((v24 + 8) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v24 + 8);
          }
          else if ( *(_QWORD *)(v24 + 8) == 1LL )
          {
            v17 = 0;
            goto LABEL_48;
          }
          p_is_init = (const char *)&common::milog::MiLogDefault::default_log_obj_;
          common::milog::MiLogStream::MiLogStream(
            (common::milog::MiLogStream *const)&v56,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "src/redis_mgr.cpp",
            "cmdHSetnx",
            1903);
          v40 = *(_QWORD *)(v7 + 32);
          if ( *(_BYTE *)(((unsigned __int64)(v40 + 32) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v40 + 32);
          }
          else if ( !*(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
          {
            p_is_init = "HSETNX [%s] duplicated, %s";
            common::milog::MiLogStream::operator()(
              (common::milog::MiLogStream *const)&v56,
              "HSETNX [%s] duplicated, %s",
              (const char *)M_pi->_vptr__Sp_counted_base,
              *(const char **)(v40 + 32));
LABEL_99:
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v56);
            v17 = -2;
            goto LABEL_48;
          }
          __asan_report_load8(M_pi);
          goto LABEL_99;
        }
        p_is_init = (const char *)&common::milog::MiLogDefault::default_log_obj_;
        common::milog::MiLogStream::MiLogStream(
          (common::milog::MiLogStream *const)&v56,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_mgr.cpp",
          "cmdHSetnx",
          1897);
        v39 = *(_QWORD *)(v7 + 32);
        if ( *(_BYTE *)(((unsigned __int64)(v39 + 32) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v39 + 32);
        }
        else
        {
          v38 = *(const char **)(v39 + 32);
          if ( !*(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
            goto LABEL_84;
        }
        goto LABEL_86;
      }
LABEL_82:
      p_is_init = (const char *)&common::milog::MiLogDefault::default_log_obj_;
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&v56,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_mgr.cpp",
        "cmdHSetnx",
        1891);
      v37 = *(_QWORD *)(v7 + 32);
      if ( *(_BYTE *)(((unsigned __int64)(v37 + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v37 + 32);
      }
      else
      {
        v38 = *(const char **)(v37 + 32);
        if ( !*(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
        {
LABEL_84:
          p_is_init = "HSETNX [%s] failed, %s";
          common::milog::MiLogStream::operator()(
            (common::milog::MiLogStream *const)&v56,
            "HSETNX [%s] failed, %s",
            (const char *)M_pi->_vptr__Sp_counted_base,
            v38);
LABEL_87:
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v56);
          v17 = -1;
          goto LABEL_48;
        }
      }
LABEL_86:
      __asan_report_load8(M_pi);
      goto LABEL_87;
    }
LABEL_81:
    __asan_report_load4(v24);
    goto LABEL_82;
  }
  v17 = -1;
LABEL_48:
  v26 = *(_QWORD *)(v7 + 40);
  v27 = v26;
  if ( !v26 )
    goto LABEL_54;
  v28 = (volatile signed __int32 *)(v26 + 8);
  if ( &_pthread_key_create )
  {
    v29 = *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v28 & 7) + 3) < v29 || !v29 )
    {
      v30 = _InterlockedExchangeAdd(v28, 0xFFFFFFFF);
      goto LABEL_53;
    }
    v26 = __asan_report_store4(v28, p_is_init);
  }
  v41 = *(_BYTE *)(((unsigned __int64)(v26 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v26 + 8) & 7) + 3) >= v41 && v41 )
  {
    __asan_report_load4(v26 + 8);
    goto LABEL_106;
  }
  v30 = *(_DWORD *)(v27 + 8);
  *(_DWORD *)(v27 + 8) = v30 - 1;
LABEL_53:
  if ( v30 != 1 )
    goto LABEL_54;
LABEL_106:
  if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
  {
    v42 = v27;
    __asan_report_load8(v27);
    goto LABEL_117;
  }
  v42 = *(_QWORD *)v27 + 16LL;
  if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
  {
LABEL_117:
    __asan_report_load8(v42);
    goto LABEL_118;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v27 + 16LL))(v27);
  v42 = v27 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_119;
  v43 = *(_BYTE *)((v42 >> 3) + 0x7FFF8000);
  if ( (char)((v42 & 7) + 3) < v43 || !v43 )
  {
    v44 = _InterlockedExchangeAdd((volatile signed __int32 *)v42, 0xFFFFFFFF);
    goto LABEL_112;
  }
LABEL_118:
  __asan_report_store4(v42, p_is_init);
LABEL_119:
  v46 = *(_BYTE *)(((v27 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v27 + 12) & 7) + 3) >= v46 && v46 )
  {
    __asan_report_load4(v27 + 12);
LABEL_123:
    v45 = v27;
    __asan_report_load8(v27);
LABEL_124:
    v47 = (struct _Unwind_Exception *)__asan_report_load8(v45);
    M_p = v55._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v55._M_dataplus._M_p != &v55._anon_0 )
      operator delete(v55._M_dataplus._M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v47);
  }
  v44 = *(_DWORD *)(v27 + 12);
  *(_DWORD *)(v27 + 12) = v44 - 1;
LABEL_112:
  if ( v44 != 1 )
    goto LABEL_54;
  if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
    goto LABEL_123;
  v45 = *(_QWORD *)v27 + 24LL;
  if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
    goto LABEL_124;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v27 + 24LL))(v27);
LABEL_54:
  if ( v57 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v17;
};

// Line 1911: range 000000000CAA3A18-000000000CAA3C0B
int32_t __fastcall common::midb::RedisMgr::cmdHScan(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        uint32_t cursor,
        uint32_t scan_count,
        std::map<std::string,std::string> *key_value_map,
        uint32_t *next_cursor)
{
  uint32_t v9; // r14d
  int32_t v10; // r14d
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v13; // dl
  signed __int32 M_use_count; // eax
  char v16; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v18; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v20; // rdi
  char v21; // dl
  struct _Unwind_Exception *v22; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v23; // rdi
  uint32_t *v24; // [rsp-8h] [rbp-58h]
  common::midb::RedisConnPtr conn_ptr; // [rsp+10h] [rbp-40h] BYREF

  v9 = (unsigned int)key_value_map;
  common::midb::RedisMgr::grabConn(this, index);
  v10 = common::midb::RedisMgr::cmdHScan(
          this,
          (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &conn_ptr),
          (const std::string *)cursor,
          scan_count,
          v9,
          (std::map<std::string,std::string> *)next_cursor,
          v24);
  M_pi = conn_ptr._M_refcount._M_pi;
  if ( conn_ptr._M_refcount._M_pi )
  {
    p_M_use_count = &conn_ptr._M_refcount._M_pi->_M_use_count;
    if ( &_pthread_key_create )
    {
      v13 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v13 || !v13 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &conn_ptr);
    }
    v16 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v16 && v16 )
    {
      __asan_report_load4(&M_pi->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = M_pi->_M_use_count;
    M_pi->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v10;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)M_pi;
      __asan_report_load8(M_pi);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 2))(M_pi);
        p_M_weak_count = &M_pi->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v18 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v18 || !v18 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &conn_ptr);
LABEL_26:
        v21 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v21 && v21 )
        {
          __asan_report_load4(&M_pi->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = M_pi->_M_weak_count;
        M_pi->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v10;
        if ( !*(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
        {
          v20 = (unsigned __int64)(M_pi->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base
             + 3))(M_pi);
            return v10;
          }
LABEL_31:
          v22 = (struct _Unwind_Exception *)__asan_report_load8(v20);
          v23 = conn_ptr._M_refcount._M_pi;
          if ( conn_ptr._M_refcount._M_pi )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(conn_ptr._M_refcount._M_pi);
          __asan_handle_no_return(v23);
          _Unwind_Resume(v22);
        }
LABEL_30:
        v20 = (unsigned __int64)M_pi;
        __asan_report_load8(M_pi);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v10;
};

// Line 1916: range 000000000CA9CAC8-000000000CA9F72D
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::midb::RedisMgr::cmdHScan(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        const std::string *key,
        uint32_t cursor,
        std::map<std::string,std::string> *scan_count,
        std::map<std::string,std::string> *key_value_map)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  std::string::size_type M_string_length; // r15
  const char *vptr__Sp_counted_base; // r8
  unsigned __int64 v11; // rsi
  __int64 *v12; // rsi
  volatile signed __int32 *p_M_use_count; // rdi
  __int64 v14; // rsi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v15; // rax
  char v16; // dl
  unsigned int v17; // r15d
  volatile signed __int32 *v18; // rsi
  char v19; // cl
  unsigned __int64 v20; // rdi
  char v21; // al
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  char v25; // dl
  __int64 *v26; // rdx
  unsigned __int64 v27; // rdi
  char v28; // dl
  __int64 v29; // rax
  const char *v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  const char *v34; // rsi
  __int64 v35; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v36; // rdi
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // r12
  __int64 v42; // rax
  std::_Rb_tree_node<std::pair<const std::string,std::string > > *M_parent; // rsi
  _QWORD *p_M_parent; // rdi
  std::_Rb_tree_header *v45; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::iterator v46; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::iterator v47; // r9
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::iterator v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  const char *v57; // rsi
  std::map<std::string,std::string> *key_value_mapa; // [rsp+0h] [rbp-100h]
  std::tuple<> *scan_countb; // [rsp+8h] [rbp-F8h]
  unsigned int cursora; // [rsp+10h] [rbp-F0h]
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr cursorb; // [rsp+10h] [rbp-F0h]
  std::_Rb_tree_node_base *thisb; // [rsp+18h] [rbp-E8h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *idx; // [rsp+28h] [rbp-D8h]
  std::tuple<> v66; // [rsp+37h] [rbp-C9h] BYREF
  std::tuple<std::string&&> v67; // [rsp+38h] [rbp-C8h] BYREF
  __int64 conn_ptra; // [rsp+40h] [rbp-C0h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v69; // [rsp+48h] [rbp-B8h]
  std::string s; // [rsp+50h] [rbp-B0h] BYREF
  std::string str; // [rsp+70h] [rbp-90h] BYREF
  char v72[112]; // [rsp+90h] [rbp-70h] BYREF

  idx = conn_ptr._M_refcount._M_pi;
  cursora = (unsigned int)key;
  key_value_mapa = scan_count;
  v6 = (unsigned __int64)v72;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v6 = v8;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 14 reply_ptr:1923";
  *(_QWORD *)(v6 + 16) = common::midb::RedisMgr::cmdHScan;
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  s._M_dataplus._M_p = s._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&s, &byte_1A0CF744[-4], byte_1A0CF744, (std::forward_iterator_tag)key);
  common::tools::StringUtils::trim(&str, (const std::string *)idx, &s, 1);
  M_string_length = str._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)str._M_dataplus._M_p != &str._anon_0 )
    operator delete(str._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s._M_dataplus._M_p != &s._anon_0 )
    operator delete(s._M_dataplus._M_p);
  if ( !M_string_length )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&str,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdHScan",
      1919);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&str, "key is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&str);
    v17 = -1;
    goto LABEL_71;
  }
  if ( *(_BYTE *)(((unsigned __int64)idx >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(idx);
    goto LABEL_21;
  }
  vptr__Sp_counted_base = (const char *)idx->_vptr__Sp_counted_base;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    p_M_use_count = v18;
    __asan_report_load8(v18);
    goto LABEL_22;
  }
  conn_ptra = *v12;
  p_M_use_count = (volatile signed __int32 *)(v12 + 1);
  if ( *(_BYTE *)(((unsigned __int64)(v12 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(p_M_use_count);
LABEL_23:
    v15 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count, idx);
    goto LABEL_24;
  }
  v15 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v14 + 8);
  v69 = v15;
  if ( !v15 )
  {
LABEL_18:
    common::midb::RedisMgr::command(
      (common::midb::RedisMgr *const)(v6 + 32),
      (common::midb::RedisConnPtr)__PAIR128__(&conn_ptra, (unsigned __int64)this),
      "HSCAN %s %d COUNT %d",
      vptr__Sp_counted_base,
      cursora,
      cursor);
    goto LABEL_28;
  }
  p_M_use_count = &v15->_M_use_count;
  if ( &_pthread_key_create )
  {
    v16 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v16 || !v16 )
    {
      _InterlockedAdd(p_M_use_count, 1u);
      goto LABEL_18;
    }
    goto LABEL_23;
  }
LABEL_24:
  v19 = *(_BYTE *)(((unsigned __int64)&v15->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v15 + 8) & 7) + 3) < v19 || !v19 )
  {
    ++v15->_M_use_count;
    goto LABEL_18;
  }
  __asan_report_load4(&v15->_M_use_count);
LABEL_28:
  if ( v69 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v69);
  v20 = *(_QWORD *)(v6 + 32);
  if ( v20 )
  {
    v21 = *(_BYTE *)((v20 >> 3) + 0x7FFF8000);
    if ( v21 && v21 <= 3 )
    {
      __asan_report_load4(v20);
    }
    else if ( *(_DWORD *)v20 != 6 )
    {
      if ( *(_BYTE *)(((v20 + 48) >> 3) + 0x7FFF8000) )
      {
        v22 = __asan_report_load8(v20 + 48);
      }
      else
      {
        if ( *(_QWORD *)(v20 + 48) != 2LL )
          goto LABEL_45;
        v22 = v20 + 56;
        if ( !*(_BYTE *)(((v20 + 56) >> 3) + 0x7FFF8000) )
        {
          v23 = *(_QWORD *)(v20 + 56);
          if ( !*(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
          {
            v24 = *(_QWORD *)v23;
            v25 = *(_BYTE *)((*(_QWORD *)v23 >> 3) + 0x7FFF8000LL);
            if ( !v25 || v25 > 3 )
            {
              if ( *(_DWORD *)v24 == 1 )
              {
                v26 = (__int64 *)(v23 + 8);
                if ( !*(_BYTE *)(((v23 + 8) >> 3) + 0x7FFF8000) )
                {
                  v27 = *(_QWORD *)(v23 + 8);
                  v28 = *(_BYTE *)((v27 >> 3) + 0x7FFF8000);
                  if ( !v28 || v28 > 3 )
                  {
                    if ( *(_DWORD *)v27 != 2 )
                      goto LABEL_45;
LABEL_58:
                    v31 = v24 + 24;
                    if ( *(_BYTE *)(((unsigned __int64)(v24 + 24) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load8(v31);
                    }
                    else
                    {
                      v32 = *(_QWORD *)(v24 + 24);
                      v31 = v24 + 32;
                      v33 = (unsigned __int64)(v24 + 32) >> 3;
                      if ( !*(_BYTE *)(v33 + 0x7FFF8000) )
                      {
                        v34 = *(const char **)(v24 + 32);
                        str._M_dataplus._M_p = str._anon_0._M_local_buf;
                        std::string::_M_construct<char const*>(&str, v34, &v34[v32], (std::forward_iterator_tag)v33);
                        common::tools::StringUtils::strToNum<unsigned int>(&str, (unsigned int *)key_value_map, 1);
                        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)str._M_dataplus._M_p != &str._anon_0 )
                          operator delete(str._M_dataplus._M_p);
                        v38 = *(_QWORD *)(v6 + 32);
                        v39 = v38 + 56;
                        if ( *(_BYTE *)(((unsigned __int64)(v38 + 56) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_load8(v39);
                        }
                        else
                        {
                          v40 = *(_QWORD *)(v38 + 56);
                          v39 = v40 + 8;
                          if ( !*(_BYTE *)(((unsigned __int64)(v40 + 8) >> 3) + 0x7FFF8000) )
                          {
                            v41 = *(_QWORD *)(v40 + 8);
                            v39 = v41 + 48;
                            if ( !*(_BYTE *)(((unsigned __int64)(v41 + 48) >> 3) + 0x7FFF8000) )
                            {
                              if ( (*(_BYTE *)(v41 + 48) & 1) == 0 )
                              {
                                common::milog::MiLogStream::MiLogStream(
                                  (common::milog::MiLogStream *const)&str,
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  1u,
                                  "src/redis_mgr.cpp",
                                  "cmdHScan",
                                  1951);
                                M_parent = (std::_Rb_tree_node<std::pair<const std::string,std::string > > *)"element_reply->elements = ";
                                common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                                  *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&str._anon_0._M_allocated_capacity
                                  + 1),
                                  "element_reply->elements = ");
                                p_M_parent = (_QWORD *)(v41 + 48);
                                if ( *(_BYTE *)(((unsigned __int64)(v41 + 48) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_load8(p_M_parent);
                                }
                                else
                                {
                                  M_parent = *(std::_Rb_tree_node<std::pair<const std::string,std::string > > **)(v41 + 48);
                                  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                                    *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&str._anon_0._M_allocated_capacity
                                    + 1),
                                    (unsigned __int64)M_parent);
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&str);
                                  p_M_parent = &key_value_mapa->_M_t._M_impl._M_header._M_parent;
                                  if ( !*(_BYTE *)(((unsigned __int64)&key_value_mapa->_M_t._M_impl._M_header._M_parent >> 3)
                                                 + 0x7FFF8000) )
                                  {
                                    M_string_length = (std::string::size_type)key_value_mapa;
                                    M_parent = (std::_Rb_tree_node<std::pair<const std::string,std::string > > *)key_value_mapa->_M_t._M_impl._M_header._M_parent;
                                    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                                      &key_value_mapa->_M_t,
                                      M_parent);
                                    p_M_parent = &key_value_mapa->_M_t._M_impl._M_header._M_parent;
                                    if ( !*(_BYTE *)(((unsigned __int64)&key_value_mapa->_M_t._M_impl._M_header._M_parent >> 3)
                                                   + 0x7FFF8000) )
                                    {
                                      M_parent = (std::_Rb_tree_node<std::pair<const std::string,std::string > > *)key_value_mapa;
                                      key_value_mapa->_M_t._M_impl._M_header._M_parent = 0LL;
                                      v45 = &key_value_mapa->_M_t._M_impl.std::_Rb_tree_header;
                                      p_M_parent = &key_value_mapa->_M_t._M_impl._M_header._M_left;
                                      if ( !*(_BYTE *)(((unsigned __int64)&key_value_mapa->_M_t._M_impl._M_header._M_left >> 3)
                                                     + 0x7FFF8000) )
                                      {
                                        M_parent = (std::_Rb_tree_node<std::pair<const std::string,std::string > > *)key_value_mapa;
                                        key_value_mapa->_M_t._M_impl._M_header._M_left = &v45->_M_header;
                                        p_M_parent = &key_value_mapa->_M_t._M_impl._M_header._M_right;
                                        if ( !*(_BYTE *)(((unsigned __int64)&key_value_mapa->_M_t._M_impl._M_header._M_right >> 3)
                                                       + 0x7FFF8000) )
                                        {
                                          M_parent = (std::_Rb_tree_node<std::pair<const std::string,std::string > > *)key_value_mapa;
                                          key_value_mapa->_M_t._M_impl._M_header._M_right = &v45->_M_header;
                                          p_M_parent = &key_value_mapa->_M_t._M_impl._M_node_count;
                                          if ( !*(_BYTE *)(((unsigned __int64)&key_value_mapa->_M_t._M_impl._M_node_count >> 3)
                                                         + 0x7FFF8000) )
                                          {
                                            key_value_mapa->_M_t._M_impl._M_node_count = 0LL;
                                            for ( LODWORD(idx) = 0; ; LODWORD(idx) = (_DWORD)idx + 2 )
                                            {
                                              p_M_parent = (_QWORD *)(v41 + 48);
                                              if ( *(_BYTE *)(((unsigned __int64)(v41 + 48) >> 3) + 0x7FFF8000) )
                                                break;
                                              if ( (unsigned __int64)(unsigned int)idx >= *(_QWORD *)(v41 + 48) )
                                              {
                                                v17 = 0;
                                                goto LABEL_69;
                                              }
                                              p_M_parent = (_QWORD *)(v41 + 56);
                                              if ( *(_BYTE *)(((unsigned __int64)(v41 + 56) >> 3) + 0x7FFF8000) )
                                                goto LABEL_103;
                                              v51 = *(_QWORD *)(v41 + 56);
                                              v52 = v51 + 8LL * (unsigned int)idx;
                                              p_M_parent = (_QWORD *)v52;
                                              if ( *(_BYTE *)((v52 >> 3) + 0x7FFF8000) )
                                                goto LABEL_104;
                                              v53 = *(_QWORD *)v52;
                                              v54 = v51 + 8LL * (unsigned int)((_DWORD)idx + 1);
                                              p_M_parent = (_QWORD *)v54;
                                              if ( *(_BYTE *)((v54 >> 3) + 0x7FFF8000) )
                                                goto LABEL_105;
                                              M_string_length = *(_QWORD *)v54;
                                              if ( !v53 )
                                                continue;
                                              p_M_parent = (_QWORD *)(v53 + 24);
                                              if ( *(_BYTE *)(((unsigned __int64)(v53 + 24) >> 3) + 0x7FFF8000) )
                                                goto LABEL_106;
                                              v55 = *(_QWORD *)(v53 + 24);
                                              if ( !v55 )
                                                continue;
                                              p_M_parent = (_QWORD *)(v53 + 32);
                                              v56 = (unsigned __int64)(v53 + 32) >> 3;
                                              if ( *(_BYTE *)(v56 + 0x7FFF8000) )
                                                goto LABEL_107;
                                              v57 = *(const char **)(v53 + 32);
                                              if ( !v57 || !M_string_length )
                                                continue;
                                              p_M_parent = (_QWORD *)(M_string_length + 24);
                                              if ( *(_BYTE *)(((M_string_length + 24) >> 3) + 0x7FFF8000) )
                                                goto LABEL_108;
                                              if ( !*(_QWORD *)(M_string_length + 24) )
                                                continue;
                                              p_M_parent = (_QWORD *)(M_string_length + 32);
                                              if ( *(_BYTE *)(((M_string_length + 32) >> 3) + 0x7FFF8000) )
                                                goto LABEL_109;
                                              if ( !*(_QWORD *)(M_string_length + 32) )
                                                continue;
                                              str._M_dataplus._M_p = str._anon_0._M_local_buf;
                                              std::string::_M_construct<char const*>(
                                                &str,
                                                v57,
                                                &v57[v55],
                                                (std::forward_iterator_tag)v56);
LABEL_110:
                                              thisb = &key_value_mapa->_M_t._M_impl._M_header;
                                              if ( *(_BYTE *)(((unsigned __int64)&key_value_mapa->_M_t._M_impl._M_header._M_parent >> 3)
                                                            + 0x7FFF8000) )
                                              {
                                                v48._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr)__asan_report_load8(&key_value_mapa->_M_t._M_impl._M_header._M_parent);
                                                goto LABEL_115;
                                              }
                                              v46._M_node = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_lower_bound(
                                                              &key_value_mapa->_M_t,
                                                              (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::_Link_type)key_value_mapa->_M_t._M_impl._M_header._M_parent,
                                                              thisb,
                                                              &str)._M_node;
                                              cursorb = v46._M_node;
                                              scan_countb = (std::tuple<> *)v46._M_node;
                                              if ( thisb == v46._M_node
                                                || (int)std::string::compare(&str, &v46._M_node[1]) < 0 )
                                              {
                                                v67._M_head_impl = &str;
                                                v48._M_node = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string&&>,std::tuple<>>(
                                                                &key_value_mapa->_M_t,
                                                                (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::const_iterator)scan_countb,
                                                                &std::piecewise_construct,
                                                                &v67,
                                                                &v66,
                                                                (const std::piecewise_construct_t *)v47._M_node,
                                                                (std::tuple<std::string&&> *)key_value_mapa,
                                                                scan_countb)._M_node;
LABEL_115:
                                                cursorb = v48._M_node;
                                              }
                                              if ( *(_BYTE *)(((M_string_length + 24) >> 3) + 0x7FFF8000) )
                                              {
                                                v49 = __asan_report_load8(M_string_length + 24);
LABEL_121:
                                                v50 = __asan_report_load8(v49);
                                                goto LABEL_122;
                                              }
                                              v49 = M_string_length + 32;
                                              if ( *(_BYTE *)(((M_string_length + 32) >> 3) + 0x7FFF8000) )
                                                goto LABEL_121;
                                              v50 = (__int64)&cursorb[2]._M_parent;
                                              if ( !*(_BYTE *)(((unsigned __int64)&cursorb[2]._M_parent >> 3)
                                                             + 0x7FFF8000) )
                                              {
                                                std::string::_M_replace(
                                                  &cursorb[2],
                                                  0LL,
                                                  cursorb[2]._M_parent,
                                                  *(_QWORD *)(M_string_length + 32),
                                                  *(_QWORD *)(M_string_length + 24));
                                                goto LABEL_123;
                                              }
LABEL_122:
                                              __asan_report_load8(v50);
LABEL_123:
                                              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)str._M_dataplus._M_p != &str._anon_0 )
                                                operator delete(str._M_dataplus._M_p);
                                            }
LABEL_102:
                                            __asan_report_load8(p_M_parent);
LABEL_103:
                                            __asan_report_load8(p_M_parent);
LABEL_104:
                                            __asan_report_load8(p_M_parent);
LABEL_105:
                                            __asan_report_load8(p_M_parent);
LABEL_106:
                                            __asan_report_load8(p_M_parent);
LABEL_107:
                                            __asan_report_load8(p_M_parent);
LABEL_108:
                                            __asan_report_load8(p_M_parent);
LABEL_109:
                                            __asan_report_load8(p_M_parent);
                                            goto LABEL_110;
                                          }
LABEL_101:
                                          __asan_report_store8(p_M_parent, M_parent);
                                          goto LABEL_102;
                                        }
LABEL_100:
                                        __asan_report_store8(p_M_parent, M_parent);
                                        goto LABEL_101;
                                      }
LABEL_99:
                                      __asan_report_store8(p_M_parent, M_parent);
                                      goto LABEL_100;
                                    }
LABEL_98:
                                    __asan_report_store8(p_M_parent, M_parent);
                                    goto LABEL_99;
                                  }
                                }
                                __asan_report_load8(p_M_parent);
                                goto LABEL_98;
                              }
LABEL_84:
                              common::milog::MiLogStream::MiLogStream(
                                (common::milog::MiLogStream *const)&str,
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "src/redis_mgr.cpp",
                                "cmdHScan",
                                1947);
                              v42 = *(_QWORD *)(v6 + 32);
                              if ( *(_BYTE *)(((unsigned __int64)(v42 + 32) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_load8(v42 + 32);
                                goto LABEL_67;
                              }
                              v30 = *(const char **)(v42 + 32);
                              if ( !*(_BYTE *)(((unsigned __int64)idx >> 3) + 0x7FFF8000) )
                                goto LABEL_86;
                              goto LABEL_67;
                            }
LABEL_83:
                            __asan_report_load8(v39);
                            goto LABEL_84;
                          }
                        }
                        __asan_report_load8(v39);
                        goto LABEL_83;
                      }
                    }
                    __asan_report_load8(v31);
LABEL_63:
                    v35 = *(_QWORD *)(v6 + 32);
                    if ( *(_BYTE *)(((unsigned __int64)(v35 + 32) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load8(v35 + 32);
                    }
                    else
                    {
                      v30 = *(const char **)(v35 + 32);
                      if ( !*(_BYTE *)(((unsigned __int64)idx >> 3) + 0x7FFF8000) )
                        goto LABEL_86;
                    }
                    goto LABEL_67;
                  }
LABEL_57:
                  v24 = __asan_report_load4(v27);
                  goto LABEL_58;
                }
LABEL_56:
                v27 = (unsigned __int64)v26;
                __asan_report_load8(v26);
                goto LABEL_57;
              }
LABEL_45:
              common::milog::MiLogStream::MiLogStream(
                (common::milog::MiLogStream *const)&str,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "src/redis_mgr.cpp",
                "cmdHScan",
                1938);
              goto LABEL_63;
            }
LABEL_55:
            __asan_report_load4(v24);
            goto LABEL_56;
          }
LABEL_54:
          v24 = __asan_report_load8(v23);
          goto LABEL_55;
        }
      }
      v23 = v22;
      __asan_report_load8(v22);
      goto LABEL_54;
    }
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&str,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdHScan",
      1930);
    v29 = *(_QWORD *)(v6 + 32);
    if ( *(_BYTE *)(((unsigned __int64)(v29 + 32) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v29 + 32);
      goto LABEL_67;
    }
    v30 = *(const char **)(v29 + 32);
    if ( !*(_BYTE *)(((unsigned __int64)idx >> 3) + 0x7FFF8000) )
    {
LABEL_86:
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&str,
        "HSCAN [%s] failed, %s",
        (const char *)idx->_vptr__Sp_counted_base,
        v30);
      goto LABEL_68;
    }
LABEL_67:
    __asan_report_load8(idx);
LABEL_68:
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&str);
    v17 = -1;
    goto LABEL_69;
  }
  v17 = -1;
LABEL_69:
  v36 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 40);
  if ( v36 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v36);
LABEL_71:
  if ( v72 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v17;
};

// Line 1975: range 000000000CAA4AD8-000000000CAA4CA6
int32_t __fastcall common::midb::RedisMgr::cmdHDel(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        const std::set<std::string> *field_set)
{
  const std::set<std::string> *v6; // r8
  int32_t v7; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v8; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v10; // dl
  signed __int32 M_use_count; // eax
  char v13; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v15; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v17; // rdi
  char v18; // dl
  struct _Unwind_Exception *v19; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v7 = common::midb::RedisMgr::cmdHDel(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v21),
         (const std::string *)field_set,
         v6);
  v8 = v22;
  if ( v22 )
  {
    p_M_use_count = &v22->_M_use_count;
    if ( &_pthread_key_create )
    {
      v10 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v10 || !v10 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v21);
    }
    v13 = *(_BYTE *)(((unsigned __int64)&v8->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v8 + 8) & 7) + 3) >= v13 && v13 )
    {
      __asan_report_load4(&v8->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v8->_M_use_count;
    v8->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v7;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v8;
      __asan_report_load8(v8);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v8->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 2))(v8);
        p_M_weak_count = &v8->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v15 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v15 || !v15 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v21);
LABEL_26:
        v18 = *(_BYTE *)(((unsigned __int64)&v8->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v8 + 12) & 7) + 3) >= v18 && v18 )
        {
          __asan_report_load4(&v8->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v8->_M_weak_count;
        v8->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v7;
        if ( !*(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          v17 = (unsigned __int64)(v8->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v8->_vptr__Sp_counted_base + 3))(v8);
            return v7;
          }
LABEL_31:
          v19 = (struct _Unwind_Exception *)__asan_report_load8(v17);
          v20 = v22;
          if ( v22 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v22);
          __asan_handle_no_return(v20);
          _Unwind_Resume(v19);
        }
LABEL_30:
        v17 = (unsigned __int64)v8;
        __asan_report_load8(v8);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v7;
};

// Line 1980: range 000000000CA98B06-000000000CA99328
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::midb::RedisMgr::cmdHDel(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        const std::string *key,
        const std::set<std::string> *field_set)
{
  const std::string *v4; // r15
  unsigned __int64 v5; // rax
  char *v6; // r12
  __int64 v7; // rax
  unsigned int v8; // ebx
  std::string::size_type M_string_length; // rbx
  char *v10; // rdi
  std::string::size_type v11; // rax
  __int64 v12; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  signed __int64 v16; // r14
  void *v17; // rsp
  unsigned __int64 v18; // r13
  void *v19; // rsp
  const char *vptr_RedisConnBase; // rsi
  std::forward_iterator_tag v21; // cl
  unsigned __int64 p_M_string_length; // rdi
  const std::string *v23; // rdi
  const std::string *i; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdx
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdi
  char v33; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v34; // rdi
  char *v35; // rdi
  volatile signed __int32 *p_last_use_time; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v37; // rax
  std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  unsigned __int64 v39; // rdx
  const char *v40; // rax
  char v41; // cl
  __int64 v42; // rsi
  __int64 v43; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v44; // [rsp+8h] [rbp-128h]
  unsigned __int64 v45; // [rsp+10h] [rbp-120h]
  uint32_t argv_num; // [rsp+1Ch] [rbp-114h] BYREF
  common::midb::RedisMgr *thisa; // [rsp+20h] [rbp-110h]
  char *v48; // [rsp+28h] [rbp-108h]
  __int64 v49; // [rsp+30h] [rbp-100h]
  char *v50; // [rsp+38h] [rbp-F8h]
  const std::string *keya; // [rsp+40h] [rbp-F0h]
  common::midb::RedisConnPtr conn_ptra; // [rsp+48h] [rbp-E8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v53; // [rsp+58h] [rbp-D8h]
  std::string v54; // [rsp+60h] [rbp-D0h] BYREF
  char v55[128]; // [rsp+80h] [rbp-B0h] BYREF
  char v56[48]; // [rsp+100h] [rbp-30h] BYREF

  thisa = this;
  conn_ptra._M_ptr = conn_ptr._M_ptr;
  keya = (const std::string *)conn_ptr._M_refcount._M_pi;
  v4 = key;
  v50 = v55;
  v48 = v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v50 = (char *)v7;
  }
  v5 = (unsigned __int64)v50;
  v6 = v50 + 128;
  *(_QWORD *)v50 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 16 14 reply_ptr:2020 64 32 8 cmd:2004";
  *(_QWORD *)(v5 + 16) = common::midb::RedisMgr::cmdHDel;
  v5 >>= 3;
  v49 = v5;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -219021312;
  *(_DWORD *)(v5 + 2147450892) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(conn_ptra._M_ptr);
    goto LABEL_8;
  }
  if ( !conn_ptra._M_ptr->_vptr_RedisConnBase )
  {
LABEL_8:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v54,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdHDel",
      1983);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&v54._anon_0._M_allocated_capacity + 1),
      "[REDIS]conn nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v54);
    v8 = -1;
    goto LABEL_17;
  }
  *((_QWORD *)v6 - 8) = v6 - 48;
  std::string::_M_construct<char const*>(
    (std::string *const)v6 - 2,
    &byte_1A0CF744[-4],
    byte_1A0CF744,
    (std::forward_iterator_tag)key);
  common::tools::StringUtils::trim(&v54, keya, (const std::string *)v6 - 2, 1);
  M_string_length = v54._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v54._M_dataplus._M_p != &v54._anon_0 )
    operator delete(v54._M_dataplus._M_p);
  v10 = (char *)*((_QWORD *)v6 - 8);
  if ( v10 != v6 - 48 )
    operator delete(v10);
  if ( !M_string_length )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v54,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdHDel",
      1989);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v54, "key is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v54);
    v8 = -1;
    goto LABEL_17;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v4[1]._M_string_length >> 3) + 0x7FFF8000) )
  {
    LODWORD(v11) = __asan_report_load8(&v4[1]._M_string_length);
  }
  else
  {
    v11 = v4[1]._M_string_length;
    if ( !v11 )
    {
      v8 = 0;
      goto LABEL_17;
    }
  }
  argv_num = v11 + 2;
  v14 = 8LL * (unsigned int)(v11 + 2);
  v15 = 32LL - ((8 * ((_BYTE)v11 + 2)) & 0x1F);
  v16 = (v14 + v15 + 103) & 0xFFFFFFFFFFFFFFF0LL;
  v17 = alloca(v14 + v15 + 88);
  v45 = ((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL;
  v18 = (((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 32;
  __asan_alloca_poison(v18, v14);
  v19 = alloca(v16);
  v44 = ((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL;
  __asan_alloca_poison(v18, v14);
  *((_QWORD *)v6 - 8) = v6 - 48;
  vptr_RedisConnBase = &byte_1A0D1524[-4];
  std::string::_M_construct<char const*>((std::string *const)v6 - 2, &byte_1A0D1524[-4], byte_1A0D1524, v21);
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8((((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 32, vptr_RedisConnBase);
    goto LABEL_31;
  }
  vptr_RedisConnBase = (const char *)v45;
  *(_QWORD *)(v45 + 32) = *((_QWORD *)v6 - 8);
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_store8((((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 32, vptr_RedisConnBase);
    goto LABEL_32;
  }
  vptr_RedisConnBase = (const char *)v44;
  *(_QWORD *)(v44 + 32) = *((_QWORD *)v6 - 7);
  if ( *(_BYTE *)(((unsigned __int64)keya >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    p_M_string_length = (unsigned __int64)keya;
    __asan_report_load8(keya);
    goto LABEL_33;
  }
  p_M_string_length = (((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 40;
  if ( *(_BYTE *)((p_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_store8(p_M_string_length, vptr_RedisConnBase);
    goto LABEL_34;
  }
  *(_QWORD *)((((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 0x28) = keya->_M_dataplus._M_p;
  p_M_string_length = (unsigned __int64)&keya->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&keya->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8(p_M_string_length);
    goto LABEL_35;
  }
  p_M_string_length = (((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 40;
  if ( *(_BYTE *)((p_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_store8(p_M_string_length, vptr_RedisConnBase);
    goto LABEL_36;
  }
  *(_QWORD *)((((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 0x28) = keya->_M_string_length;
  p_M_string_length = (unsigned __int64)(&v4->_anon_0._M_allocated_capacity + 1);
  if ( *(_BYTE *)(((unsigned __int64)(&v4->_anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    v25 = __asan_report_load8(p_M_string_length);
    goto LABEL_37;
  }
  v23 = (const std::string *)*(&v4->_anon_0._M_allocated_capacity + 1);
  v4 = (const std::string *)((char *)v4 + 8);
  LODWORD(v14) = 2;
  for ( i = v23; ; i = (const std::string *)std::_Rb_tree_increment((const std::_Rb_tree_node_base *)v28) )
  {
    v28 = (__int64)i;
    if ( i == v4 )
      break;
    v25 = (unsigned __int64)&i[1];
    if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
    {
LABEL_37:
      v26 = __asan_report_load8(v25);
LABEL_38:
      v27 = __asan_report_store8(v26, vptr_RedisConnBase);
LABEL_39:
      v28 = v27;
      __asan_report_load8(v27);
      goto LABEL_40;
    }
    v26 = v18 + 8LL * (unsigned int)v14;
    if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
      goto LABEL_38;
    *(_QWORD *)((((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 0x20 + 8LL * (unsigned int)v14) = *(_QWORD *)(v28 + 32);
    v27 = v28 + 40;
    if ( *(_BYTE *)(((unsigned __int64)(v28 + 40) >> 3) + 0x7FFF8000) )
      goto LABEL_39;
    v29 = *(_QWORD *)(v28 + 40);
    if ( *(_BYTE *)(((v18 + 8LL * (unsigned int)v14) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8(v18 + 8LL * (unsigned int)v14, vptr_RedisConnBase);
      break;
    }
LABEL_40:
    *(_QWORD *)((((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 0x20 + 8LL * (unsigned int)v14) = v29;
    LODWORD(v14) = v14 + 1;
  }
  if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(conn_ptra._M_ptr);
    goto LABEL_52;
  }
  vptr_RedisConnBase = (const char *)conn_ptra._M_ptr->_vptr_RedisConnBase;
  if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr->_vptr_RedisConnBase >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    v30 = (unsigned __int64)vptr_RedisConnBase;
    __asan_report_load8(vptr_RedisConnBase);
    goto LABEL_53;
  }
  v30 = *(_QWORD *)vptr_RedisConnBase + 48LL;
  if ( !*(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(char *, const char *, _QWORD, unsigned __int64, unsigned __int64))(*(_QWORD *)vptr_RedisConnBase
                                                                                             + 48LL))(
      v6 - 96,
      vptr_RedisConnBase,
      argv_num,
      (((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 32,
      (((unsigned __int64)&argv_num + 3) & 0xFFFFFFFFFFFFFFE0LL) + 32);
    goto LABEL_54;
  }
LABEL_53:
  __asan_report_load8(v30);
LABEL_54:
  v32 = *((_QWORD *)v6 - 12);
  if ( v32 )
  {
    v33 = *(_BYTE *)((v32 >> 3) + 0x7FFF8000);
    if ( v33 && v33 <= 3 )
    {
      __asan_report_load4(v32);
    }
    else if ( *(_DWORD *)v32 != 6 )
    {
      goto LABEL_58;
    }
  }
  if ( !v32 )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v54,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdHDel",
      2027);
    if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr >> 3) + 0x7FFF8000) )
    {
      M_ptr = conn_ptra._M_ptr;
      __asan_report_load8(conn_ptra._M_ptr);
    }
    else
    {
      M_ptr = (std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2>::element_type *)conn_ptra._M_ptr->_vptr_RedisConnBase;
      if ( !*(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr->_vptr_RedisConnBase >> 3) + 0x7FFF8000) )
      {
        v39 = (unsigned __int64)(M_ptr->_vptr_RedisConnBase + 15);
        if ( !*(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
        {
          v40 = (const char *)(*((__int64 (**)(void))M_ptr->_vptr_RedisConnBase + 15))();
LABEL_80:
          vptr_RedisConnBase = "error:%s";
          common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v54, "error:%s", v40);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v54);
          goto LABEL_65;
        }
LABEL_79:
        v40 = (const char *)__asan_report_load8(v39);
        goto LABEL_80;
      }
    }
    __asan_report_load8(M_ptr);
    goto LABEL_79;
  }
LABEL_65:
  if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr >> 3) + 0x7FFF8000) )
  {
    p_last_use_time = (volatile signed __int32 *)conn_ptra._M_ptr;
    __asan_report_load8(conn_ptra._M_ptr);
    goto LABEL_82;
  }
  vptr_RedisConnBase = (const char *)conn_ptra._M_ptr;
  conn_ptra._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)conn_ptra._M_ptr->_vptr_RedisConnBase;
  p_last_use_time = (volatile signed __int32 *)&conn_ptra._M_ptr->last_use_time;
  if ( *(_BYTE *)(((unsigned __int64)&conn_ptra._M_ptr->last_use_time >> 3) + 0x7FFF8000) )
  {
LABEL_82:
    __asan_report_load8(p_last_use_time);
    goto LABEL_83;
  }
  v37 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&conn_ptra._M_ptr->last_use_time;
  v53 = v37;
  if ( !v37 )
    goto LABEL_72;
  p_last_use_time = &v37->_M_use_count;
  if ( &_pthread_key_create )
  {
    v31 = *(unsigned __int8 *)(((unsigned __int64)p_last_use_time >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_last_use_time & 7) + 3) < (char)v31 || !(_BYTE)v31 )
    {
      _InterlockedAdd(p_last_use_time, 1u);
      goto LABEL_72;
    }
LABEL_83:
    v37 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_last_use_time, vptr_RedisConnBase);
  }
  v41 = *(_BYTE *)(((unsigned __int64)&v37->_M_use_count >> 3) + 0x7FFF8000);
  v31 = (((_BYTE)v37 + 8) & 7u) + 3;
  if ( (char)((((_BYTE)v37 + 8) & 7) + 3) >= v41 && v41 )
  {
    __asan_report_load4(&v37->_M_use_count);
  }
  else
  {
    ++v37->_M_use_count;
LABEL_72:
    common::midb::RedisMgr::markConnToDestory(
      thisa,
      (common::midb::RedisConnPtr)__PAIR128__(v31, (common::midb::RedisConnPtr *)&conn_ptra._M_refcount));
  }
  if ( v53 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v53);
LABEL_58:
  v34 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v6 - 11);
  if ( v34 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v34);
  v35 = (char *)*((_QWORD *)v6 - 8);
  if ( v35 != v6 - 48 )
    operator delete(v35);
  v8 = 0;
LABEL_17:
  if ( v48 == v50 )
  {
    v12 = v49;
    *(_QWORD *)(v49 + 2147450880) = 0LL;
    *(_DWORD *)(v12 + 2147450892) = 0;
  }
  else
  {
    *(_QWORD *)v50 = 1172321806LL;
    v42 = v49;
    *(_QWORD *)(v49 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(v42 + 2147450888) = 0xF5F5F5F5F5F5F5F5LL;
  }
  __asan_allocas_unpoison(&v43, v56);
  return v8;
};

// Line 2037: range 000000000CAA3C10-000000000CAA3DE8
int32_t __fastcall common::midb::RedisMgr::cmdRPush(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        const std::string *value,
        uint32_t *count)
{
  uint32_t *v8; // r9
  int32_t v9; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v12; // dl
  signed __int32 M_use_count; // eax
  char v15; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v17; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v19; // rdi
  char v20; // dl
  struct _Unwind_Exception *v21; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // rdi
  __int64 v23; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v9 = common::midb::RedisMgr::cmdRPush(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v23),
         value,
         (const std::string *)count,
         v8);
  v10 = v24;
  if ( v24 )
  {
    p_M_use_count = &v24->_M_use_count;
    if ( &_pthread_key_create )
    {
      v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v23);
    }
    v15 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v15 && v15 )
    {
      __asan_report_load4(&v10->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v10->_M_use_count;
    v10->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v9;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v10;
      __asan_report_load8(v10);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v10->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 2))(v10);
        p_M_weak_count = &v10->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v17 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v17 || !v17 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v23);
LABEL_26:
        v20 = *(_BYTE *)(((unsigned __int64)&v10->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v10 + 12) & 7) + 3) >= v20 && v20 )
        {
          __asan_report_load4(&v10->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v10->_M_weak_count;
        v10->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v9;
        if ( !*(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          v19 = (unsigned __int64)(v10->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 3))(v10);
            return v9;
          }
LABEL_31:
          v21 = (struct _Unwind_Exception *)__asan_report_load8(v19);
          v22 = v24;
          if ( v24 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v24);
          __asan_handle_no_return(v22);
          _Unwind_Resume(v21);
        }
LABEL_30:
        v19 = (unsigned __int64)v10;
        __asan_report_load8(v10);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v9;
};

// Line 2042: range 000000000CA88CE4-000000000CA8BE52
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::midb::RedisMgr::cmdRPush(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        unsigned __int64 key,
        unsigned __int64 value,
        uint32_t *count)
{
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r13
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2>::element_type *v9; // rsi
  __int64 v10; // rax
  std::string::size_type v11; // rcx
  std::string::pointer v12; // r9
  std::string::pointer vptr__Sp_counted_base; // r8
  volatile signed __int32 *M_ptr; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v15; // rax
  char v16; // dl
  common::milog::MiLog *v17; // rsi
  unsigned int v18; // r12d
  __int64 v19; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // r12
  _Atomic_word *p_M_use_count; // rdi
  char v22; // dl
  signed __int32 M_use_count; // eax
  unsigned __int64 v24; // rdi
  char v25; // al
  char v26; // dl
  __int64 v27; // rax
  unsigned __int64 v28; // r14
  volatile signed __int32 *v29; // rdi
  char v30; // dl
  signed __int32 v31; // eax
  char v33; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v35; // dl
  signed __int32 M_weak_count; // eax
  char v37; // dl
  __int64 v38; // rax
  char v39; // dl
  unsigned __int64 v40; // rdi
  char v41; // dl
  signed __int32 v42; // eax
  unsigned __int64 v43; // rdi
  char v44; // dl
  struct _Unwind_Exception *v45; // rbx
  std::string::pointer M_p; // rdi
  std::string *s; // [rsp+18h] [rbp-D8h]
  common::midb::RedisConnPtr conn_ptra; // [rsp+28h] [rbp-C8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v51; // [rsp+38h] [rbp-B8h]
  std::string v52; // [rsp+40h] [rbp-B0h] BYREF
  std::string v53; // [rsp+60h] [rbp-90h] BYREF
  char v54[112]; // [rsp+80h] [rbp-70h] BYREF

  conn_ptra._M_ptr = conn_ptr._M_ptr;
  M_pi = conn_ptr._M_refcount._M_pi;
  v7 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_0(64LL);
    if ( v10 )
      v7 = v10;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 16 14 reply_ptr:2049";
  *(_QWORD *)(v7 + 16) = common::midb::RedisMgr::cmdRPush;
  v8 = v7 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202178560;
  v52._M_dataplus._M_p = v52._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v52, &byte_1A0CF744[-4], byte_1A0CF744, (std::forward_iterator_tag)&v52);
  v9 = (std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2>::element_type *)M_pi;
  common::tools::StringUtils::trim(&v53, (const std::string *)M_pi, &v52, 1);
  s = (std::string *)v53._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v53._M_dataplus._M_p != &v53._anon_0 )
    operator delete(v53._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v52._M_dataplus._M_p != &v52._anon_0 )
    operator delete(v52._M_dataplus._M_p);
  if ( !s )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v53,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdRPush",
      2045);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v53, "key is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v53);
    v18 = -1;
    goto LABEL_52;
  }
  if ( *(_BYTE *)(((key + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(key + 8);
    goto LABEL_23;
  }
  v11 = *(_QWORD *)(key + 8);
  if ( *(_BYTE *)((key >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(key);
    goto LABEL_24;
  }
  v12 = *(std::string::pointer *)key;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(M_pi);
    goto LABEL_25;
  }
  vptr__Sp_counted_base = (std::string::pointer)M_pi->_vptr__Sp_counted_base;
  if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    M_ptr = (volatile signed __int32 *)conn_ptra._M_ptr;
    __asan_report_load8(conn_ptra._M_ptr);
    goto LABEL_26;
  }
  v9 = conn_ptra._M_ptr;
  conn_ptra._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)conn_ptra._M_ptr->_vptr_RedisConnBase;
  M_ptr = (volatile signed __int32 *)&conn_ptra._M_ptr->last_use_time;
  if ( *(_BYTE *)(((unsigned __int64)&conn_ptra._M_ptr->last_use_time >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(M_ptr);
LABEL_27:
    v15 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(M_ptr, v9);
    goto LABEL_28;
  }
  v15 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&conn_ptra._M_ptr->last_use_time;
  v51 = v15;
  if ( !v15 )
  {
LABEL_20:
    v17 = (common::milog::MiLog *)this;
    common::midb::RedisMgr::command(
      (common::midb::RedisMgr *const)(v7 + 32),
      (common::midb::RedisConnPtr)__PAIR128__(
                                    (common::midb::RedisConnPtr *)&conn_ptra._M_refcount,
                                    (unsigned __int64)this),
      "RPUSH %s %b",
      vptr__Sp_counted_base,
      v12,
      v11);
    goto LABEL_32;
  }
  M_ptr = &v15->_M_use_count;
  if ( &_pthread_key_create )
  {
    v16 = *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)M_ptr & 7) + 3) < v16 || !v16 )
    {
      _InterlockedAdd(M_ptr, 1u);
      goto LABEL_20;
    }
    goto LABEL_27;
  }
LABEL_28:
  v17 = (common::milog::MiLog *)*(unsigned __int8 *)(((unsigned __int64)&v15->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v15 + 8) & 7) + 3) < (char)v17 || !(_BYTE)v17 )
  {
    ++v15->_M_use_count;
    goto LABEL_20;
  }
  __asan_report_load4(&v15->_M_use_count);
LABEL_32:
  v19 = (__int64)v51;
  v20 = v51;
  if ( !v51 )
    goto LABEL_38;
  p_M_use_count = &v51->_M_use_count;
  if ( &_pthread_key_create )
  {
    v22 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v22 || !v22 )
    {
      M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
      goto LABEL_37;
    }
    v19 = __asan_report_store4(p_M_use_count, v17);
  }
  v33 = *(_BYTE *)(((unsigned __int64)(v19 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v19 + 8) & 7) + 3) >= v33 && v33 )
  {
    __asan_report_load4(v19 + 8);
    goto LABEL_60;
  }
  M_use_count = v20->_M_use_count;
  v20->_M_use_count = M_use_count - 1;
LABEL_37:
  if ( M_use_count != 1 )
    goto LABEL_38;
LABEL_60:
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)v20;
    __asan_report_load8(v20);
    goto LABEL_71;
  }
  p_M_weak_count = (volatile signed __int32 *)(v20->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_72;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v20->_vptr__Sp_counted_base + 2))(v20);
  p_M_weak_count = &v20->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_73;
  v35 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v35 || !v35 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_66;
  }
LABEL_72:
  __asan_report_store4(p_M_weak_count, v17);
LABEL_73:
  v37 = *(_BYTE *)(((unsigned __int64)&v20->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v20 + 12) & 7) + 3) >= v37 && v37 )
  {
    __asan_report_load4(&v20->_M_weak_count);
LABEL_77:
    v24 = (unsigned __int64)v20;
    __asan_report_load8(v20);
    goto LABEL_78;
  }
  M_weak_count = v20->_M_weak_count;
  v20->_M_weak_count = M_weak_count - 1;
LABEL_66:
  if ( M_weak_count != 1 )
    goto LABEL_38;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    goto LABEL_77;
  v24 = (unsigned __int64)(v20->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_load8(v24);
    goto LABEL_79;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v20->_vptr__Sp_counted_base + 3))(v20);
LABEL_38:
  v24 = *(_QWORD *)(v7 + 32);
  if ( v24 )
  {
    v25 = *(_BYTE *)((v24 >> 3) + 0x7FFF8000);
    if ( !v25 || v25 > 3 )
    {
      if ( *(_DWORD *)v24 != 6 )
      {
        if ( *(_BYTE *)(((v24 + 8) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v24 + 8);
        }
        else
        {
          v17 = (common::milog::MiLog *)value;
          v26 = *(_BYTE *)((value >> 3) + 0x7FFF8000);
          if ( (char)((value & 7) + 3) < v26 || !v26 )
          {
            *(_DWORD *)value = *(_QWORD *)(v24 + 8);
            v18 = 0;
            goto LABEL_46;
          }
        }
        __asan_report_store4(v17, v17);
        goto LABEL_88;
      }
LABEL_80:
      v17 = &common::milog::MiLogDefault::default_log_obj_;
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&v53,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_mgr.cpp",
        "cmdRPush",
        2057);
      v38 = *(_QWORD *)(v7 + 32);
      if ( *(_BYTE *)(((unsigned __int64)(v38 + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v38 + 32);
      }
      else if ( !*(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
      {
        v17 = (common::milog::MiLog *)"[REDIS][NETWORK]RPUSH [%s] faild, %s";
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)&v53,
          "[REDIS][NETWORK]RPUSH [%s] faild, %s",
          (const char *)M_pi->_vptr__Sp_counted_base,
          *(const char **)(v38 + 32));
LABEL_85:
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v53);
        v18 = -1;
        goto LABEL_46;
      }
      __asan_report_load8(M_pi);
      goto LABEL_85;
    }
LABEL_79:
    __asan_report_load4(v24);
    goto LABEL_80;
  }
LABEL_88:
  v18 = -1;
LABEL_46:
  v27 = *(_QWORD *)(v7 + 40);
  v28 = v27;
  if ( !v27 )
    goto LABEL_52;
  v29 = (volatile signed __int32 *)(v27 + 8);
  if ( &_pthread_key_create )
  {
    v30 = *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v29 & 7) + 3) < v30 || !v30 )
    {
      v31 = _InterlockedExchangeAdd(v29, 0xFFFFFFFF);
      goto LABEL_51;
    }
    v27 = __asan_report_store4(v29, v17);
  }
  v39 = *(_BYTE *)(((unsigned __int64)(v27 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v27 + 8) & 7) + 3) >= v39 && v39 )
  {
    __asan_report_load4(v27 + 8);
    goto LABEL_94;
  }
  v31 = *(_DWORD *)(v28 + 8);
  *(_DWORD *)(v28 + 8) = v31 - 1;
LABEL_51:
  if ( v31 != 1 )
    goto LABEL_52;
LABEL_94:
  if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
  {
    v40 = v28;
    __asan_report_load8(v28);
    goto LABEL_105;
  }
  v40 = *(_QWORD *)v28 + 16LL;
  if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
  {
LABEL_105:
    __asan_report_load8(v40);
    goto LABEL_106;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v28 + 16LL))(v28);
  v40 = v28 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_107;
  v41 = *(_BYTE *)((v40 >> 3) + 0x7FFF8000);
  if ( (char)((v40 & 7) + 3) < v41 || !v41 )
  {
    v42 = _InterlockedExchangeAdd((volatile signed __int32 *)v40, 0xFFFFFFFF);
    goto LABEL_100;
  }
LABEL_106:
  __asan_report_store4(v40, v17);
LABEL_107:
  v44 = *(_BYTE *)(((v28 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v28 + 12) & 7) + 3) >= v44 && v44 )
  {
    __asan_report_load4(v28 + 12);
LABEL_111:
    v43 = v28;
    __asan_report_load8(v28);
LABEL_112:
    v45 = (struct _Unwind_Exception *)__asan_report_load8(v43);
    M_p = v52._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v52._M_dataplus._M_p != &v52._anon_0 )
      operator delete(v52._M_dataplus._M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v45);
  }
  v42 = *(_DWORD *)(v28 + 12);
  *(_DWORD *)(v28 + 12) = v42 - 1;
LABEL_100:
  if ( v42 != 1 )
    goto LABEL_52;
  if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
    goto LABEL_111;
  v43 = *(_QWORD *)v28 + 24LL;
  if ( *(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
    goto LABEL_112;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v28 + 24LL))(v28);
LABEL_52:
  if ( v54 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v18;
};

// Line 2068: range 000000000CAA3DEE-000000000CAA3FD0
int32_t __fastcall common::midb::RedisMgr::cmdLRange(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        int32_t from_index,
        int32_t to_index,
        std::vector<std::string> *data_vec)
{
  int32_t v9; // r14d
  int32_t v10; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v11; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v13; // dl
  signed __int32 M_use_count; // eax
  char v16; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v18; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v20; // rdi
  char v21; // dl
  struct _Unwind_Exception *v22; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v23; // rdi
  std::vector<std::string> *v24; // [rsp+0h] [rbp-48h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v25; // [rsp+8h] [rbp-40h]

  v9 = (int)data_vec;
  common::midb::RedisMgr::grabConn(this, index);
  v10 = common::midb::RedisMgr::cmdLRange(
          this,
          (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v24),
          (const std::string *)(unsigned int)from_index,
          to_index,
          v9,
          v24);
  v11 = v25;
  if ( v25 )
  {
    p_M_use_count = &v25->_M_use_count;
    if ( &_pthread_key_create )
    {
      v13 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v13 || !v13 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v24);
    }
    v16 = *(_BYTE *)(((unsigned __int64)&v11->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v11 + 8) & 7) + 3) >= v16 && v16 )
    {
      __asan_report_load4(&v11->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v11->_M_use_count;
    v11->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v10;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v11;
      __asan_report_load8(v11);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v11->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v11->_vptr__Sp_counted_base + 2))(v11);
        p_M_weak_count = &v11->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v18 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v18 || !v18 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v24);
LABEL_26:
        v21 = *(_BYTE *)(((unsigned __int64)&v11->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v11 + 12) & 7) + 3) >= v21 && v21 )
        {
          __asan_report_load4(&v11->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v11->_M_weak_count;
        v11->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v10;
        if ( !*(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          v20 = (unsigned __int64)(v11->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v11->_vptr__Sp_counted_base + 3))(v11);
            return v10;
          }
LABEL_31:
          v22 = (struct _Unwind_Exception *)__asan_report_load8(v20);
          v23 = v25;
          if ( v25 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v25);
          __asan_handle_no_return(v23);
          _Unwind_Resume(v22);
        }
LABEL_30:
        v20 = (unsigned __int64)v11;
        __asan_report_load8(v11);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v10;
};

// Line 2119: range 000000000CAA3FD6-000000000CAA41AE
int32_t __fastcall common::midb::RedisMgr::cmdLTrim(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        int32_t from_index,
        int32_t to_index)
{
  int32_t v8; // r9d
  int32_t v9; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v12; // dl
  signed __int32 M_use_count; // eax
  char v15; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v17; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v19; // rdi
  char v20; // dl
  struct _Unwind_Exception *v21; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // rdi
  __int64 v23; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // [rsp+8h] [rbp-30h]

  common::midb::RedisMgr::grabConn(this, index);
  v9 = common::midb::RedisMgr::cmdLTrim(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v23),
         (const std::string *)(unsigned int)from_index,
         to_index,
         v8);
  v10 = v24;
  if ( v24 )
  {
    p_M_use_count = &v24->_M_use_count;
    if ( &_pthread_key_create )
    {
      v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v23);
    }
    v15 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v15 && v15 )
    {
      __asan_report_load4(&v10->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v10->_M_use_count;
    v10->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v9;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v10;
      __asan_report_load8(v10);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v10->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 2))(v10);
        p_M_weak_count = &v10->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v17 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v17 || !v17 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v23);
LABEL_26:
        v20 = *(_BYTE *)(((unsigned __int64)&v10->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v10 + 12) & 7) + 3) >= v20 && v20 )
        {
          __asan_report_load4(&v10->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v10->_M_weak_count;
        v10->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v9;
        if ( !*(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          v19 = (unsigned __int64)(v10->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 3))(v10);
            return v9;
          }
LABEL_31:
          v21 = (struct _Unwind_Exception *)__asan_report_load8(v19);
          v22 = v24;
          if ( v24 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v24);
          __asan_handle_no_return(v22);
          _Unwind_Resume(v21);
        }
LABEL_30:
        v19 = (unsigned __int64)v10;
        __asan_report_load8(v10);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v9;
};

// Line 2124: range 000000000CA8BE58-000000000CA8CB84
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::midb::RedisMgr::cmdLTrim(
        common::midb::RedisMgr *const this,
        common::midb::RedisConnPtr conn_ptr,
        const std::string *key,
        unsigned int from_index,
        int32_t to_index)
{
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r12
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  std::string::size_type M_string_length; // r15
  common::midb::RedisMgr *v10; // rsi
  const char *vptr__Sp_counted_base; // r8
  volatile signed __int32 *M_ptr; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v13; // rax
  char v14; // dl
  unsigned int v15; // r12d
  char v16; // cl
  __int64 v17; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v18; // r15
  _Atomic_word *p_M_use_count; // rdi
  char v20; // dl
  signed __int32 M_use_count; // eax
  unsigned __int64 v22; // rdi
  char v23; // al
  __int64 v24; // rax
  unsigned __int64 v25; // r15
  volatile signed __int32 *v26; // rdi
  char v27; // dl
  signed __int32 v28; // eax
  char v30; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v32; // dl
  signed __int32 M_weak_count; // eax
  char v34; // dl
  __int64 v35; // rax
  char v36; // dl
  unsigned __int64 v37; // rdi
  char v38; // dl
  signed __int32 v39; // eax
  unsigned __int64 v40; // rdi
  char v41; // dl
  struct _Unwind_Exception *v42; // rbx
  std::string::pointer M_p; // rdi
  unsigned int from_indexa; // [rsp+14h] [rbp-CCh]
  common::midb::RedisConnPtr conn_ptra; // [rsp+18h] [rbp-C8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v48; // [rsp+28h] [rbp-B8h]
  std::string s; // [rsp+30h] [rbp-B0h] BYREF
  std::string v50; // [rsp+50h] [rbp-90h] BYREF
  char v51[112]; // [rsp+70h] [rbp-70h] BYREF

  conn_ptra._M_ptr = conn_ptr._M_ptr;
  M_pi = conn_ptr._M_refcount._M_pi;
  from_indexa = (unsigned int)key;
  v6 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v6 = v8;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 14 reply_ptr:2137";
  *(_QWORD *)(v6 + 16) = common::midb::RedisMgr::cmdLTrim;
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  s._M_dataplus._M_p = s._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&s, &byte_1A0CF744[-4], byte_1A0CF744, (std::forward_iterator_tag)key);
  common::tools::StringUtils::trim(&v50, (const std::string *)M_pi, &s, 1);
  M_string_length = v50._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v50._M_dataplus._M_p != &v50._anon_0 )
    operator delete(v50._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s._M_dataplus._M_p != &s._anon_0 )
    operator delete(s._M_dataplus._M_p);
  if ( !M_string_length )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v50,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdLTrim",
      2127);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v50, "key is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v50);
    v15 = -1;
    goto LABEL_47;
  }
  v10 = (common::midb::RedisMgr *)from_index;
  if ( (int)from_indexa > (int)from_index )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v50,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdLTrim",
      2133);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&v50,
      "from_index[%d] larger than to_index[%d]",
      from_indexa,
      from_index);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v50);
    v15 = -1;
    goto LABEL_47;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(M_pi);
    goto LABEL_23;
  }
  vptr__Sp_counted_base = (const char *)M_pi->_vptr__Sp_counted_base;
  if ( *(_BYTE *)(((unsigned __int64)conn_ptra._M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    M_ptr = (volatile signed __int32 *)conn_ptra._M_ptr;
    __asan_report_load8(conn_ptra._M_ptr);
    goto LABEL_24;
  }
  conn_ptra._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)conn_ptra._M_ptr->_vptr_RedisConnBase;
  M_ptr = (volatile signed __int32 *)&conn_ptra._M_ptr->last_use_time;
  if ( *(_BYTE *)(((unsigned __int64)&conn_ptra._M_ptr->last_use_time >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(M_ptr);
LABEL_25:
    v13 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(M_ptr, from_index);
    goto LABEL_26;
  }
  v13 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&conn_ptra._M_ptr->last_use_time;
  v48 = v13;
  if ( !v13 )
  {
LABEL_19:
    v10 = this;
    common::midb::RedisMgr::command(
      (common::midb::RedisMgr *const)(v6 + 32),
      (common::midb::RedisConnPtr)__PAIR128__(
                                    (common::midb::RedisConnPtr *)&conn_ptra._M_refcount,
                                    (unsigned __int64)this),
      "LTRIM %s %d %d",
      vptr__Sp_counted_base,
      from_indexa,
      from_index);
    goto LABEL_30;
  }
  M_ptr = &v13->_M_use_count;
  if ( &_pthread_key_create )
  {
    v14 = *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)M_ptr & 7) + 3) < v14 || !v14 )
    {
      _InterlockedAdd(M_ptr, 1u);
      goto LABEL_19;
    }
    goto LABEL_25;
  }
LABEL_26:
  v16 = *(_BYTE *)(((unsigned __int64)&v13->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v13 + 8) & 7) + 3) < v16 || !v16 )
  {
    ++v13->_M_use_count;
    goto LABEL_19;
  }
  __asan_report_load4(&v13->_M_use_count);
LABEL_30:
  v17 = (__int64)v48;
  v18 = v48;
  if ( !v48 )
    goto LABEL_36;
  p_M_use_count = &v48->_M_use_count;
  if ( &_pthread_key_create )
  {
    v20 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v20 || !v20 )
    {
      M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
      goto LABEL_35;
    }
    v17 = __asan_report_store4(p_M_use_count, v10);
  }
  v30 = *(_BYTE *)(((unsigned __int64)(v17 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v17 + 8) & 7) + 3) >= v30 && v30 )
  {
    __asan_report_load4(v17 + 8);
    goto LABEL_55;
  }
  M_use_count = v18->_M_use_count;
  v18->_M_use_count = M_use_count - 1;
LABEL_35:
  if ( M_use_count != 1 )
    goto LABEL_36;
LABEL_55:
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)v18;
    __asan_report_load8(v18);
    goto LABEL_66;
  }
  p_M_weak_count = (volatile signed __int32 *)(v18->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_67;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v18->_vptr__Sp_counted_base + 2))(v18);
  p_M_weak_count = &v18->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_68;
  v32 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v32 || !v32 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_61;
  }
LABEL_67:
  __asan_report_store4(p_M_weak_count, v10);
LABEL_68:
  v34 = *(_BYTE *)(((unsigned __int64)&v18->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v18 + 12) & 7) + 3) >= v34 && v34 )
  {
    __asan_report_load4(&v18->_M_weak_count);
LABEL_72:
    v22 = (unsigned __int64)v18;
    __asan_report_load8(v18);
    goto LABEL_73;
  }
  M_weak_count = v18->_M_weak_count;
  v18->_M_weak_count = M_weak_count - 1;
LABEL_61:
  if ( M_weak_count != 1 )
    goto LABEL_36;
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
    goto LABEL_72;
  v22 = (unsigned __int64)(v18->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    __asan_report_load8(v22);
    goto LABEL_74;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v18->_vptr__Sp_counted_base + 3))(v18);
LABEL_36:
  v22 = *(_QWORD *)(v6 + 32);
  if ( v22 )
  {
    v23 = *(_BYTE *)((v22 >> 3) + 0x7FFF8000);
    if ( !v23 || v23 > 3 )
    {
      if ( *(_DWORD *)v22 != 6 )
      {
        v15 = 0;
        goto LABEL_41;
      }
LABEL_75:
      v10 = (common::midb::RedisMgr *)&common::milog::MiLogDefault::default_log_obj_;
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_mgr.cpp",
        "cmdLTrim",
        2145);
      v35 = *(_QWORD *)(v6 + 32);
      if ( *(_BYTE *)(((unsigned __int64)(v35 + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v35 + 32);
      }
      else if ( !*(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
      {
        v10 = (common::midb::RedisMgr *)"LTRIM [%s: %d->%d] faild, %s";
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)&v50,
          "LTRIM [%s: %d->%d] faild, %s",
          (const char *)M_pi->_vptr__Sp_counted_base,
          from_indexa,
          from_index,
          *(const char **)(v35 + 32));
LABEL_80:
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v50);
        v15 = -1;
        goto LABEL_41;
      }
      __asan_report_load8(M_pi);
      goto LABEL_80;
    }
LABEL_74:
    __asan_report_load4(v22);
    goto LABEL_75;
  }
  v15 = -1;
LABEL_41:
  v24 = *(_QWORD *)(v6 + 40);
  v25 = v24;
  if ( !v24 )
    goto LABEL_47;
  v26 = (volatile signed __int32 *)(v24 + 8);
  if ( &_pthread_key_create )
  {
    v27 = *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v26 & 7) + 3) < v27 || !v27 )
    {
      v28 = _InterlockedExchangeAdd(v26, 0xFFFFFFFF);
      goto LABEL_46;
    }
    v24 = __asan_report_store4(v26, v10);
  }
  v36 = *(_BYTE *)(((unsigned __int64)(v24 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v24 + 8) & 7) + 3) >= v36 && v36 )
  {
    __asan_report_load4(v24 + 8);
    goto LABEL_87;
  }
  v28 = *(_DWORD *)(v25 + 8);
  *(_DWORD *)(v25 + 8) = v28 - 1;
LABEL_46:
  if ( v28 != 1 )
    goto LABEL_47;
LABEL_87:
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
  {
    v37 = v25;
    __asan_report_load8(v25);
    goto LABEL_98;
  }
  v37 = *(_QWORD *)v25 + 16LL;
  if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    __asan_report_load8(v37);
    goto LABEL_99;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v25 + 16LL))(v25);
  v37 = v25 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_100;
  v38 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
  if ( (char)((v37 & 7) + 3) < v38 || !v38 )
  {
    v39 = _InterlockedExchangeAdd((volatile signed __int32 *)v37, 0xFFFFFFFF);
    goto LABEL_93;
  }
LABEL_99:
  __asan_report_store4(v37, v10);
LABEL_100:
  v41 = *(_BYTE *)(((v25 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v25 + 12) & 7) + 3) >= v41 && v41 )
  {
    __asan_report_load4(v25 + 12);
LABEL_104:
    v40 = v25;
    __asan_report_load8(v25);
LABEL_105:
    v42 = (struct _Unwind_Exception *)__asan_report_load8(v40);
    M_p = s._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s._M_dataplus._M_p != &s._anon_0 )
      operator delete(s._M_dataplus._M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v42);
  }
  v39 = *(_DWORD *)(v25 + 12);
  *(_DWORD *)(v25 + 12) = v39 - 1;
LABEL_93:
  if ( v39 != 1 )
    goto LABEL_47;
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
    goto LABEL_104;
  v40 = *(_QWORD *)v25 + 24LL;
  if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
    goto LABEL_105;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v25 + 24LL))(v25);
LABEL_47:
  if ( v51 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v15;
};

// Line 2153: range 000000000CAA41B4-000000000CAA438C
int32_t __fastcall common::midb::RedisMgr::cmdLSetBatch(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        int32_t from_index,
        std::vector<std::string> *data_vec)
{
  int32_t v7; // r13d
  std::vector<std::string> *v8; // r9
  int32_t v9; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v12; // dl
  signed __int32 M_use_count; // eax
  char v15; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v17; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v19; // rdi
  char v20; // dl
  struct _Unwind_Exception *v21; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // rdi
  __int64 v23; // [rsp+0h] [rbp-38h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // [rsp+8h] [rbp-30h]

  v7 = (int)data_vec;
  common::midb::RedisMgr::grabConn(this, index);
  v9 = common::midb::RedisMgr::cmdLSetBatch(
         this,
         (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &v23),
         (const std::string *)(unsigned int)from_index,
         v7,
         v8);
  v10 = v24;
  if ( v24 )
  {
    p_M_use_count = &v24->_M_use_count;
    if ( &_pthread_key_create )
    {
      v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
      {
        M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(p_M_use_count, &v23);
    }
    v15 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v15 && v15 )
    {
      __asan_report_load4(&v10->_M_use_count);
      goto LABEL_13;
    }
    M_use_count = v10->_M_use_count;
    v10->_M_use_count = M_use_count - 1;
LABEL_6:
    if ( M_use_count != 1 )
      return v9;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v10;
      __asan_report_load8(v10);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v10->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 2))(v10);
        p_M_weak_count = &v10->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_26;
        v17 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v17 || !v17 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_19;
        }
LABEL_25:
        __asan_report_store4(p_M_weak_count, &v23);
LABEL_26:
        v20 = *(_BYTE *)(((unsigned __int64)&v10->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v10 + 12) & 7) + 3) >= v20 && v20 )
        {
          __asan_report_load4(&v10->_M_weak_count);
          goto LABEL_30;
        }
        M_weak_count = v10->_M_weak_count;
        v10->_M_weak_count = M_weak_count - 1;
LABEL_19:
        if ( M_weak_count != 1 )
          return v9;
        if ( !*(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          v19 = (unsigned __int64)(v10->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v10->_vptr__Sp_counted_base + 3))(v10);
            return v9;
          }
LABEL_31:
          v21 = (struct _Unwind_Exception *)__asan_report_load8(v19);
          v22 = v24;
          if ( v24 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v24);
          __asan_handle_no_return(v22);
          _Unwind_Resume(v21);
        }
LABEL_30:
        v19 = (unsigned __int64)v10;
        __asan_report_load8(v10);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_25;
  }
  return v9;
};

// Line 2190: range 000000000CAA630C-000000000CAA639C
int32_t __fastcall common::midb::RedisMgr::cmdGetWithTran(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        std::string *value,
        common::midb::GetAndSetTranPtr *tran_ptr)
{
  int32_t result; // eax
  common::milog::MiLogStream v8[2]; // [rsp+0h] [rbp-48h] BYREF

  if ( common::midb::RedisMgr::initTran(this, index, key, tran_ptr) )
  {
    common::milog::MiLogStream::MiLogStream(
      v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdGetWithTran",
      2193);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v8[0].ostr_, "initTran failed");
    common::milog::MiLogStream::~MiLogStream(v8);
    return -1;
  }
  else
  {
    result = common::midb::RedisMgr::cmdGet(this, index, key, value);
    if ( result )
      return -1;
  }
  return result;
};

// Line 2208: range 000000000CAA784E-000000000CAA7C72
// local variable allocation has failed, the output may be wrong!
int32_t __fastcall common::midb::RedisMgr::cmdMgetWithTran(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        std::map<std::string,std::string> *key_value_map,
        common::midb::GetAndSetTranPtr *tran_ptr)
{
  std::_Rb_tree_node_base *v4; // rbp
  std::_Rb_tree_header *v5; // r12
  unsigned __int64 v6; // r14
  _DWORD *v7; // r15
  std::string *p_M_left; // rdi
  std::_Rb_tree_node_base::_Base_ptr M_left; // rax
  __int64 v10; // rax
  int32_t v11; // r12d
  const std::string *v12; // rdx
  __int64 p_M_parent; // rax
  unsigned __int64 v14; // rcx
  int32_t v15; // eax
  common::milog::MilogStringStream *ostr; // rbp
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  size_t v19; // rbx
  void **v20; // rbp
  void **v21; // rbx
  void *v22; // rdi
  void *v23; // rdi
  uint32_t indexa; // [rsp+1Ch] [rbp-CCh]
  common::milog::MiLogStream v29; // [rsp+30h] [rbp-B8h] BYREF
  char v30[152]; // [rsp+50h] [rbp-98h] BYREF

  indexa = index;
  v6 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_1(96LL);
    if ( v10 )
      v6 = v10;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 24 9 keys:2216";
  *(_QWORD *)(v6 + 16) = common::midb::RedisMgr::cmdMgetWithTran;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&key_value_map->_M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&key_value_map->_M_t._M_impl._M_node_count);
    goto LABEL_9;
  }
  if ( !key_value_map->_M_t._M_impl._M_node_count )
  {
LABEL_9:
    common::milog::MiLogStream::MiLogStream(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdMgetWithTran",
      2212);
    common::milog::MiLogStream::operator()(&v29, "map is empty");
    common::milog::MiLogStream::~MiLogStream(&v29);
    v11 = -1;
    goto LABEL_44;
  }
  *(_QWORD *)(v6 + 32) = 0LL;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_QWORD *)(v6 + 48) = 0LL;
  p_M_left = (std::string *)&key_value_map->_M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&key_value_map->_M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_left);
    goto LABEL_11;
  }
  *(_QWORD *)&index = key_value_map;
  M_left = key_value_map->_M_t._M_impl._M_header._M_left;
  v5 = &key_value_map->_M_t._M_impl.std::_Rb_tree_header;
  while ( 1 )
  {
    v4 = M_left;
    if ( M_left == (std::_Rb_tree_node_base::_Base_ptr)v5 )
      break;
    v12 = (const std::string *)&M_left[1];
    p_M_left = *(std::string **)(v6 + 40);
    if ( p_M_left != *(std::string **)(v6 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)p_M_left >> 3) + 0x7FFF8000) )
      {
LABEL_11:
        __asan_report_store8(p_M_left, *(_QWORD *)&index);
      }
      else
      {
        p_M_left->_M_dataplus._M_p = p_M_left->_anon_0._M_local_buf;
        if ( !*(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)&index = v12->_M_dataplus._M_p;
          p_M_parent = (__int64)&M_left[1]._M_parent;
          v14 = (unsigned __int64)&v12->_M_string_length >> 3;
          if ( !*(_BYTE *)(v14 + 0x7FFF8000) )
          {
            std::string::_M_construct<char *>(
              p_M_left,
              *(char **)&index,
              (char *)(v12->_M_string_length + *(_QWORD *)&index),
              (std::forward_iterator_tag)v14);
            goto LABEL_14;
          }
LABEL_13:
          __asan_report_load8(p_M_parent);
LABEL_14:
          *(_QWORD *)(v6 + 40) += 32LL;
          goto LABEL_15;
        }
      }
      p_M_parent = __asan_report_load8(v12);
      goto LABEL_13;
    }
    *(_QWORD *)&index = *(_QWORD *)(v6 + 40);
    std::vector<std::string>::_M_realloc_insert<std::string const&>(
      (std::vector<std::string> *const)(v6 + 32),
      *(std::vector<std::string>::iterator *)&index,
      v12,
      (const std::string *)tran_ptr);
LABEL_15:
    M_left = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(v4);
  }
  if ( common::midb::RedisMgr::initTran(this, indexa, (const std::vector<std::string> *)(v6 + 32), tran_ptr) )
  {
    common::milog::MiLogStream::MiLogStream(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdMgetWithTran",
      2224);
    ostr = v29.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v29.ostr_ >> 3) + 0x7FFF8000) )
    {
      p_cur = v29.ostr_;
      __asan_report_load8(v29.ostr_);
    }
    else
    {
      p_cur = (common::milog::MilogStringStream *)&v29.ostr_->buffer_.cur_;
      if ( !*(_BYTE *)(((unsigned __int64)&v29.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      {
        cur = v29.ostr_->buffer_.cur_;
        v19 = (size_t)&v29.ostr_->buffer_.data_[-(int)cur + 0x4000];
        if ( v19 > 0xE )
          v19 = 15LL;
        memcpy(cur, "initTran failed", v19);
        ostr->buffer_.cur_ += v19;
        common::milog::MiLogStream::~MiLogStream(&v29);
        v11 = -1;
        goto LABEL_34;
      }
    }
    v15 = __asan_report_load8(p_cur);
    goto LABEL_32;
  }
  v15 = common::midb::RedisMgr::cmdMget(this, indexa, key_value_map);
LABEL_32:
  v11 = v15;
  if ( v15 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdMgetWithTran",
      2231);
    common::milog::MiLogStream::operator()(&v29, "mget failed");
    common::milog::MiLogStream::~MiLogStream(&v29);
    v11 = -1;
  }
LABEL_34:
  v20 = *(void ***)(v6 + 40);
  v21 = *(void ***)(v6 + 32);
  while ( 2 )
  {
    if ( v20 != v21 )
    {
      v22 = v21;
      if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v21);
      }
      else
      {
        v22 = *v21;
        if ( *v21 == v21 + 2 )
          goto LABEL_37;
      }
      operator delete(v22);
LABEL_37:
      v21 += 4;
      continue;
    }
    break;
  }
  v23 = *(void **)(v6 + 32);
  if ( v23 )
    operator delete(v23);
LABEL_44:
  if ( v30 == (char *)v6 )
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
  return v11;
};

// Line 2238: range 000000000CAA76AE-000000000CAA7849
int32_t __fastcall common::midb::RedisMgr::cmdMgetWithTran(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::vector<std::string> *key_vec,
        std::vector<std::string> *value_vec,
        common::midb::GetAndSetTranPtr *tran_ptr)
{
  const std::vector<std::string> *v5; // rbx
  int32_t result; // eax
  common::milog::MiLogStream v8[2]; // [rsp+0h] [rbp-48h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&key_vec->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&key_vec->_M_impl._M_finish);
    goto LABEL_8;
  }
  v5 = key_vec;
  if ( *(_BYTE *)(((unsigned __int64)key_vec >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_load8(v5);
    goto LABEL_9;
  }
  if ( key_vec->_M_impl._M_finish == key_vec->_M_impl._M_start )
  {
LABEL_9:
    common::milog::MiLogStream::MiLogStream(
      v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdMgetWithTran",
      2242);
    common::milog::MiLogStream::operator()(v8, "key_vec is empty");
    common::milog::MiLogStream::~MiLogStream(v8);
    return -1;
  }
  if ( common::midb::RedisMgr::initTran(this, index, key_vec, tran_ptr) )
  {
    common::milog::MiLogStream::MiLogStream(
      v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdMgetWithTran",
      2248);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v8[0].ostr_, "initTran failed");
    common::milog::MiLogStream::~MiLogStream(v8);
    return -1;
  }
  else
  {
    result = common::midb::RedisMgr::cmdMget(this, index, v5, value_vec);
    if ( result )
    {
      common::milog::MiLogStream::MiLogStream(
        v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_mgr.cpp",
        "cmdMgetWithTran",
        2255);
      common::milog::MiLogStream::operator()(v8, "mget failed");
      common::milog::MiLogStream::~MiLogStream(v8);
      return -1;
    }
  }
  return result;
};

// Line 2312: range 000000000CA9A996-000000000CA9B7D2
int32_t __fastcall common::midb::RedisMgr::cmdSetexWithTran(
        common::midb::RedisMgr *const this,
        const common::midb::GetAndSetTranPtr *tran_ptr,
        const std::map<std::string,std::string> *key_value_map,
        std::map<std::string,unsigned int> *ttl_map)
{
  std::_Rb_tree_node_base::_Base_ptr v4; // r15
  common::midb::RedisMgr *p_conn_ptr; // rsi
  std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  __int64 p_M_refcount; // rax
  __int64 M_pi; // rax
  unsigned __int64 v12; // rdi
  char v13; // dl
  __int64 v14; // rax
  int32_t v15; // ebp
  char v16; // cl
  std::_Rb_tree_header *v17; // r12
  volatile signed __int32 *v18; // rdi
  char v19; // dl
  signed __int32 M_parent; // eax
  unsigned __int64 p_M_left; // rdi
  char v22; // al
  std::_Rb_tree_node_base::_Base_ptr M_left; // rax
  char v24; // dl
  volatile signed __int32 *v25; // rdi
  char v26; // dl
  signed __int32 M_parent_high; // eax
  char v28; // dl
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr M_node; // rax
  const std::map<std::string,std::string> *v30; // rdx
  const std::piecewise_construct_t *v31; // r9
  const std::map<std::string,std::string> *v32; // rcx
  int v33; // eax
  std::tuple<const std::string&> *v34; // rdi
  char v35; // cl
  const std::string *M_head_impl_low; // r8
  std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type *v37; // rax
  __int64 v38; // rax
  volatile signed __int32 *v39; // rdx
  char v40; // cl
  char v41; // cl
  unsigned __int64 v42; // rbx
  volatile signed __int32 *v43; // rax
  char v44; // cl
  signed __int32 v45; // eax
  const std::map<std::string,std::string> *v46; // rdi
  size_t v47; // rcx
  __int64 v48; // r12
  char v49; // dl
  unsigned __int64 v50; // rdi
  volatile signed __int32 *v51; // rax
  char v52; // cl
  signed __int32 v53; // eax
  unsigned __int64 v54; // rdi
  char v55; // dl
  __int64 *v56; // rdi
  __int64 v57; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v58; // rax
  unsigned __int64 p_M_use_count; // rdi
  char v60; // dl
  __int64 v61; // rcx
  char v62; // cl
  std::size_t v63; // rdx
  std::size_t v64; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v65; // rdi
  unsigned __int64 p_is_need_unwatch; // rdi
  __int64 v67; // rdx
  char v68; // al
  __int64 v69; // rax
  unsigned __int64 v70; // rbx
  volatile signed __int32 *v71; // rdi
  char v72; // dl
  signed __int32 v73; // eax
  char v75; // dl
  unsigned __int64 v76; // rdi
  char v77; // dl
  signed __int32 v78; // eax
  unsigned __int64 v79; // rdi
  char v80; // dl
  struct _Unwind_Exception *v81; // rbx
  std::tuple<const std::string&> *__args_1; // [rsp+0h] [rbp-158h]
  std::tuple<> *__args_2; // [rsp+8h] [rbp-150h]
  std::tuple_element<1,const std::pair<const std::string,std::string > >::type *value; // [rsp+10h] [rbp-148h]
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::const_iterator __pos; // [rsp+18h] [rbp-140h]
  std::_Rb_tree_header *v87; // [rsp+28h] [rbp-130h]
  unsigned __int64 p_M_node_count; // [rsp+38h] [rbp-120h]
  _DWORD *v89; // [rsp+48h] [rbp-110h]
  std::tuple<> v90; // [rsp+5Fh] [rbp-F9h] BYREF
  __int64 v91; // [rsp+60h] [rbp-F8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v92; // [rsp+68h] [rbp-F0h]
  common::midb::RedisMgr conn_ptr; // [rsp+70h] [rbp-E8h] BYREF

  p_M_node_count = (unsigned __int64)&conn_ptr.pool_ptr_map_._M_t._M_impl._M_node_count;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v14 = __asan_stack_malloc_1(128LL);
    if ( v14 )
      p_M_node_count = v14;
  }
  *(_QWORD *)p_M_node_count = 1102416563LL;
  *(_QWORD *)(p_M_node_count + 8) = "3 32 8 6 __size 64 8 7 __osize 96 16 14 reply_ptr:2334";
  p_conn_ptr = (common::midb::RedisMgr *)common::midb::RedisMgr::cmdSetexWithTran;
  *(_QWORD *)(p_M_node_count + 16) = common::midb::RedisMgr::cmdSetexWithTran;
  v89 = (_DWORD *)(p_M_node_count >> 3);
  v89[536862720] = -235802127;
  v89[536862721] = -218959360;
  v89[536862722] = -218959360;
  v89[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)tran_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(tran_ptr);
    goto LABEL_19;
  }
  M_ptr = tran_ptr->_M_ptr;
  if ( !tran_ptr->_M_ptr )
  {
LABEL_19:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSetexWithTran",
      2316);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      "tran_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    v15 = -1;
    goto LABEL_189;
  }
  if ( *(char *)(((unsigned __int64)&M_ptr->is_need_unwatch_ >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(&M_ptr->is_need_unwatch_, common::midb::RedisMgr::cmdSetexWithTran, &M_ptr->is_need_unwatch_);
    goto LABEL_21;
  }
  if ( !M_ptr->is_need_unwatch_ )
  {
LABEL_21:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSetexWithTran",
      2323);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      "tran is end, can not re set on one transaction");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    v15 = -1;
    goto LABEL_189;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(M_ptr);
    goto LABEL_23;
  }
  if ( !M_ptr->conn_ptr_._M_ptr )
  {
LABEL_23:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSetexWithTran",
      2329);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<16384> > *const)conn_ptr.pool_ptr_map_._M_t._M_impl._M_header._M_right,
      "conn in tran is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    v15 = -1;
    goto LABEL_189;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
    p_M_refcount = __asan_report_load8(M_ptr);
    goto LABEL_25;
  }
  *(_QWORD *)&conn_ptr.is_init_ = M_ptr->conn_ptr_._M_ptr;
  p_M_refcount = (__int64)&M_ptr->conn_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&M_ptr->conn_ptr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    v12 = p_M_refcount;
    __asan_report_load8(p_M_refcount);
LABEL_26:
    M_pi = __asan_report_store4(v12, common::midb::RedisMgr::cmdSetexWithTran);
    goto LABEL_27;
  }
  M_pi = (__int64)M_ptr->conn_ptr_._M_refcount._M_pi;
  *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 = M_pi;
  if ( !M_pi )
  {
LABEL_15:
    p_conn_ptr = this;
    common::midb::RedisMgr::cmdBeginTrans(
      (common::midb::RedisMgr *const)(p_M_node_count + 96),
      (common::midb::RedisConnPtr)__PAIR128__(&conn_ptr, (unsigned __int64)this));
    goto LABEL_31;
  }
  v12 = M_pi + 8;
  if ( &_pthread_key_create )
  {
    v13 = *(_BYTE *)((v12 >> 3) + 0x7FFF8000);
    if ( (char)((v12 & 7) + 3) < v13 || !v13 )
    {
      _InterlockedAdd((volatile signed __int32 *)v12, 1u);
      goto LABEL_15;
    }
    goto LABEL_26;
  }
LABEL_27:
  v16 = *(_BYTE *)(((unsigned __int64)(M_pi + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((M_pi + 8) & 7) + 3) < v16 || !v16 )
  {
    ++*(_DWORD *)(M_pi + 8);
    goto LABEL_15;
  }
  __asan_report_load4(M_pi + 8);
LABEL_31:
  v17 = *(std::_Rb_tree_header **)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0;
  if ( !*(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 )
    goto LABEL_37;
  v18 = (volatile signed __int32 *)(*(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 + 8LL);
  if ( &_pthread_key_create )
  {
    v19 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v18 & 7) + 3) < v19 || !v19 )
    {
      M_parent = _InterlockedExchangeAdd(v18, 0xFFFFFFFF);
      goto LABEL_36;
    }
    __asan_report_store4(v18, p_conn_ptr);
  }
  v24 = *(_BYTE *)(((unsigned __int64)&v17->_M_header._M_parent >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v17 + 8) & 7) + 3) >= v24 && v24 )
  {
    __asan_report_load4(&v17->_M_header._M_parent);
    goto LABEL_48;
  }
  M_parent = (signed __int32)v17->_M_header._M_parent;
  LODWORD(v17->_M_header._M_parent) = M_parent - 1;
LABEL_36:
  if ( M_parent != 1 )
    goto LABEL_37;
LABEL_48:
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    v25 = (volatile signed __int32 *)v17;
    __asan_report_load8(v17);
    goto LABEL_59;
  }
  v25 = (volatile signed __int32 *)(*(_QWORD *)&v17->_M_header._M_color + 16LL);
  if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_load8(v25);
    goto LABEL_60;
  }
  (*(void (__fastcall **)(std::_Rb_tree_header *))(*(_QWORD *)&v17->_M_header._M_color + 16LL))(v17);
  v25 = (volatile signed __int32 *)&v17->_M_header._M_parent + 1;
  if ( !&_pthread_key_create )
    goto LABEL_61;
  v26 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v25 & 7) + 3) < v26 || !v26 )
  {
    M_parent_high = _InterlockedExchangeAdd(v25, 0xFFFFFFFF);
    goto LABEL_54;
  }
LABEL_60:
  __asan_report_store4(v25, p_conn_ptr);
LABEL_61:
  v28 = *(_BYTE *)((((unsigned __int64)&v17->_M_header._M_parent + 4) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v17 + 12) & 7) + 3) >= v28 && v28 )
  {
    __asan_report_load4((char *)&v17->_M_header._M_parent + 4);
LABEL_65:
    p_M_left = (unsigned __int64)v17;
    __asan_report_load8(v17);
    goto LABEL_66;
  }
  M_parent_high = HIDWORD(v17->_M_header._M_parent);
  HIDWORD(v17->_M_header._M_parent) = M_parent_high - 1;
LABEL_54:
  if ( M_parent_high != 1 )
    goto LABEL_37;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    goto LABEL_65;
  p_M_left = *(_QWORD *)&v17->_M_header._M_color + 24LL;
  if ( *(_BYTE *)((p_M_left >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_load8(p_M_left);
LABEL_67:
    __asan_report_load4(p_M_left);
    goto LABEL_68;
  }
  (*(void (__fastcall **)(std::_Rb_tree_header *))(*(_QWORD *)&v17->_M_header._M_color + 24LL))(v17);
LABEL_37:
  p_M_left = *(_QWORD *)(p_M_node_count + 96);
  if ( !p_M_left )
  {
    v15 = -1;
    goto LABEL_183;
  }
  v22 = *(_BYTE *)((p_M_left >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
    goto LABEL_67;
  if ( *(_DWORD *)p_M_left == 6 )
  {
    v15 = -1;
    goto LABEL_183;
  }
  p_M_left = (unsigned __int64)&key_value_map->_M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&key_value_map->_M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_load8(p_M_left);
    goto LABEL_69;
  }
  M_left = key_value_map->_M_t._M_impl._M_header._M_left;
  v87 = &key_value_map->_M_t._M_impl.std::_Rb_tree_header;
  while ( 1 )
  {
    __args_2 = (std::tuple<> *)M_left;
    if ( M_left == (std::_Rb_tree_node_base::_Base_ptr)v87 )
      break;
    key_value_map = (const std::map<std::string,std::string> *)&M_left[1];
    value = (std::tuple_element<1,const std::pair<const std::string,std::string > >::type *)&M_left[2];
    v17 = &ttl_map->_M_t._M_impl.std::_Rb_tree_header;
    p_M_left = (unsigned __int64)&ttl_map->_M_t._M_impl._M_header._M_parent;
    if ( *(_BYTE *)(((unsigned __int64)&ttl_map->_M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
    {
LABEL_69:
      __asan_report_load8(p_M_left);
LABEL_70:
      __asan_report_load8(p_M_left);
LABEL_71:
      M_node = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)__asan_report_load8(p_M_left);
LABEL_72:
      v32 = (const std::map<std::string,std::string> *)(p_M_node_count + 64);
      goto LABEL_112;
    }
    M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_lower_bound(
               &ttl_map->_M_t,
               (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type)ttl_map->_M_t._M_impl._M_header._M_parent,
               &ttl_map->_M_t._M_impl._M_header,
               (const std::string *)key_value_map)._M_node;
    __args_1 = (std::tuple<const std::string&> *)M_node;
    __pos._M_node = M_node;
    if ( v17 == (std::_Rb_tree_header *)M_node )
      goto LABEL_121;
    v30 = (const std::map<std::string,std::string> *)&M_node[1];
    p_M_left = (unsigned __int64)&key_value_map->_M_t._M_impl.std::_Rb_tree_header;
    if ( *(_BYTE *)(((unsigned __int64)&key_value_map->_M_t._M_impl.std::_Rb_tree_header >> 3) + 0x7FFF8000) )
      goto LABEL_70;
    v17 = *(std::_Rb_tree_header **)&key_value_map->_M_t._M_impl._M_header._M_color;
    *(_QWORD *)(p_M_node_count + 32) = v17;
    p_M_left = (unsigned __int64)&M_node[1]._M_parent;
    if ( *(_BYTE *)(((unsigned __int64)&M_node[1]._M_parent >> 3) + 0x7FFF8000) )
      goto LABEL_71;
    v4 = M_node[1]._M_parent;
    *(_QWORD *)(p_M_node_count + 64) = v4;
    if ( v17 > (std::_Rb_tree_header *)v4 )
      goto LABEL_72;
    v32 = (const std::map<std::string,std::string> *)(p_M_node_count + 32);
LABEL_112:
    v46 = v32;
    p_conn_ptr = (common::midb::RedisMgr *)((unsigned __int64)v32 >> 3);
    if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v32);
LABEL_74:
      __asan_report_load8(v46);
LABEL_75:
      __asan_report_load8(v46);
LABEL_76:
      v33 = 0x7FFFFFFF;
      goto LABEL_120;
    }
    v47 = *(_QWORD *)v32->_M_t._M_impl.gap0;
    v46 = v30;
    if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
      goto LABEL_74;
    p_conn_ptr = *(common::midb::RedisMgr **)&M_node[1]._M_color;
    v46 = key_value_map;
    if ( *(_BYTE *)(((unsigned __int64)key_value_map >> 3) + 0x7FFF8000) )
      goto LABEL_75;
    if ( !v47 || (v33 = memcmp(*(const void **)key_value_map->_M_t._M_impl.gap0, p_conn_ptr, v47)) == 0 )
    {
      v48 = (char *)v17 - (char *)v4;
      if ( v48 > 0x7FFFFFFF )
        goto LABEL_76;
      if ( v48 < (__int64)0xFFFFFFFF80000000LL )
        v33 = 0x80000000;
      else
        v33 = v48;
    }
LABEL_120:
    if ( v33 < 0 )
    {
LABEL_121:
      *(_QWORD *)(p_M_node_count + 64) = key_value_map;
      p_conn_ptr = (common::midb::RedisMgr *)__pos._M_node;
      __args_1 = (std::tuple<const std::string&> *)std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string const&>,std::tuple<>>(
                                                     &ttl_map->_M_t,
                                                     __pos,
                                                     &std::piecewise_construct,
                                                     (std::tuple<const std::string&> *)(p_M_node_count + 64),
                                                     &v90,
                                                     v31,
                                                     __args_1,
                                                     __args_2)._M_node;
    }
    v34 = __args_1 + 8;
    v35 = *(_BYTE *)(((unsigned __int64)&__args_1[8] >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)__args_1 + 64) & 7) + 3) >= v35 && v35 )
    {
      __asan_report_load4(v34);
LABEL_90:
      __asan_report_load8(v34);
LABEL_91:
      __asan_report_load8(v34);
LABEL_92:
      __asan_report_load8(v34);
LABEL_93:
      v38 = __asan_report_store4(v34, p_conn_ptr);
      goto LABEL_94;
    }
    M_head_impl_low = (const std::string *)LODWORD(__args_1[8]._M_head_impl);
    v34 = (std::tuple<const std::string&> *)tran_ptr;
    if ( *(_BYTE *)(((unsigned __int64)tran_ptr >> 3) + 0x7FFF8000) )
      goto LABEL_90;
    v37 = tran_ptr->_M_ptr;
    v34 = (std::tuple<const std::string&> *)tran_ptr->_M_ptr;
    if ( *(_BYTE *)(((unsigned __int64)tran_ptr->_M_ptr >> 3) + 0x7FFF8000) )
      goto LABEL_91;
    *(_QWORD *)&conn_ptr.is_init_ = v37->conn_ptr_._M_ptr;
    v34 = (std::tuple<const std::string&> *)&v37->conn_ptr_._M_refcount;
    if ( *(_BYTE *)(((unsigned __int64)&v37->conn_ptr_._M_refcount >> 3) + 0x7FFF8000) )
      goto LABEL_92;
    v38 = (__int64)v37->conn_ptr_._M_refcount._M_pi;
    *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 = v38;
    if ( !v38 )
      goto LABEL_88;
    v39 = (volatile signed __int32 *)(v38 + 8);
    if ( &_pthread_key_create )
    {
      v34 = (std::tuple<const std::string&> *)(v38 + 8);
      v40 = *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v39 & 7) + 3) < v40 || !v40 )
      {
        _InterlockedAdd(v39, 1u);
LABEL_88:
        p_conn_ptr = &conn_ptr;
        common::midb::RedisMgr::cmdSetex(
          this,
          (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key_value_map, &conn_ptr),
          value,
          M_head_impl_low,
          (int32_t)v31);
        goto LABEL_98;
      }
      goto LABEL_93;
    }
LABEL_94:
    v41 = *(_BYTE *)(((unsigned __int64)(v38 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v38 + 8) & 7) + 3) < v41 || !v41 )
    {
      ++*(_DWORD *)(v38 + 8);
      goto LABEL_88;
    }
    __asan_report_load4(v38 + 8);
LABEL_98:
    v42 = *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0;
    if ( !*(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 )
      goto LABEL_104;
    v43 = (volatile signed __int32 *)(*(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 + 8LL);
    if ( &_pthread_key_create )
    {
      v44 = *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v43 & 7) + 3) < v44 || !v44 )
      {
        v45 = _InterlockedExchangeAdd(v43, 0xFFFFFFFF);
        goto LABEL_103;
      }
      __asan_report_store4(*(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 + 8LL, p_conn_ptr);
    }
    v49 = *(_BYTE *)(((v42 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v42 + 8) & 7) + 3) >= v49 && v49 )
    {
      __asan_report_load4(v42 + 8);
      goto LABEL_127;
    }
    v45 = *(_DWORD *)(v42 + 8);
    *(_DWORD *)(v42 + 8) = v45 - 1;
LABEL_103:
    if ( v45 != 1 )
      goto LABEL_104;
LABEL_127:
    v50 = v42;
    if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v42);
LABEL_138:
      __asan_report_load8(v50);
LABEL_139:
      __asan_report_store4(v50, p_conn_ptr);
LABEL_140:
      v54 = v42 + 12;
      v55 = *(_BYTE *)(((v42 + 12) >> 3) + 0x7FFF8000);
      if ( (char)(((v42 + 12) & 7) + 3) >= v55 && v55 )
      {
        __asan_report_load4(v54);
LABEL_144:
        __asan_report_load8(v54);
LABEL_145:
        __asan_report_load8(v54);
        break;
      }
      v53 = *(_DWORD *)(v42 + 12);
      *(_DWORD *)(v42 + 12) = v53 - 1;
      goto LABEL_133;
    }
    v50 = *(_QWORD *)v42 + 16LL;
    if ( *(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
      goto LABEL_138;
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v42 + 16LL))(v42);
    v51 = (volatile signed __int32 *)(v42 + 12);
    if ( !&_pthread_key_create )
      goto LABEL_140;
    v50 = v42 + 12;
    v52 = *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v51 & 7) + 3) >= v52 && v52 )
      goto LABEL_139;
    v53 = _InterlockedExchangeAdd(v51, 0xFFFFFFFF);
LABEL_133:
    if ( v53 == 1 )
    {
      v54 = v42;
      if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
        goto LABEL_144;
      v54 = *(_QWORD *)v42 + 24LL;
      if ( *(_BYTE *)((v54 >> 3) + 0x7FFF8000) )
        goto LABEL_145;
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v42 + 24LL))(v42);
    }
LABEL_104:
    M_left = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment((const std::_Rb_tree_node_base *)__args_2);
  }
  if ( *(_BYTE *)(((unsigned __int64)tran_ptr >> 3) + 0x7FFF8000) )
  {
    v56 = (__int64 *)tran_ptr;
    __asan_report_load8(tran_ptr);
    goto LABEL_156;
  }
  v56 = (__int64 *)tran_ptr->_M_ptr;
  if ( *(_BYTE *)(((unsigned __int64)tran_ptr->_M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_156:
    v57 = __asan_report_load8(v56);
    goto LABEL_157;
  }
  v91 = *v56;
  v57 = (__int64)(v56 + 1);
  if ( *(_BYTE *)(((unsigned __int64)(v56 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_157:
    p_M_use_count = v57;
    __asan_report_load8(v57);
    goto LABEL_158;
  }
  v58 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v56[1];
  v92 = v58;
  if ( !v58 )
    goto LABEL_154;
  p_M_use_count = (unsigned __int64)&v58->_M_use_count;
  if ( &_pthread_key_create )
  {
    v60 = *(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((p_M_use_count & 7) + 3) < v60 || !v60 )
    {
      _InterlockedAdd((volatile signed __int32 *)p_M_use_count, 1u);
      goto LABEL_154;
    }
LABEL_158:
    v58 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count, p_conn_ptr);
  }
  v62 = *(_BYTE *)(((unsigned __int64)&v58->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v58 + 8) & 7) + 3) >= v62 && v62 )
  {
    __asan_report_load4(&v58->_M_use_count);
  }
  else
  {
    ++v58->_M_use_count;
LABEL_154:
    p_conn_ptr = this;
    common::midb::RedisMgr::cmdExecTrans(
      &conn_ptr,
      (common::midb::RedisConnPtr)__PAIR128__(&v91, (unsigned __int64)this));
  }
  v63 = *(_QWORD *)&conn_ptr.is_init_;
  v64 = *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0;
  *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 = 0LL;
  *(_QWORD *)&conn_ptr.is_init_ = 0LL;
  *(_QWORD *)(p_M_node_count + 96) = v63;
  v65 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_M_node_count + 104);
  *(_QWORD *)(p_M_node_count + 104) = v64;
  if ( v65 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v65);
  if ( *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(*(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *const *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0);
  if ( v92 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v92);
  if ( *(_BYTE *)(((unsigned __int64)tran_ptr >> 3) + 0x7FFF8000) )
  {
    p_is_need_unwatch = (unsigned __int64)tran_ptr;
    __asan_report_load8(tran_ptr);
    goto LABEL_179;
  }
  p_is_need_unwatch = (unsigned __int64)&tran_ptr->_M_ptr->is_need_unwatch_;
  v67 = *(unsigned __int8 *)((p_is_need_unwatch >> 3) + 0x7FFF8000);
  if ( (v67 & 0x80u) != 0LL )
  {
LABEL_179:
    __asan_report_store1(p_is_need_unwatch, p_conn_ptr, v67, v61);
LABEL_180:
    v69 = __asan_report_load4(p_is_need_unwatch);
LABEL_181:
    __asan_report_load8(v69);
    goto LABEL_182;
  }
  tran_ptr->_M_ptr->is_need_unwatch_ = 0;
  p_is_need_unwatch = *(_QWORD *)(p_M_node_count + 96);
  if ( !p_is_need_unwatch )
    goto LABEL_182;
  v68 = *(_BYTE *)((p_is_need_unwatch >> 3) + 0x7FFF8000);
  if ( v68 && v68 <= 3 )
    goto LABEL_180;
  if ( *(_DWORD *)p_is_need_unwatch != 2 )
    goto LABEL_182;
  v69 = p_is_need_unwatch + 48;
  if ( *(_BYTE *)(((p_is_need_unwatch + 48) >> 3) + 0x7FFF8000) )
    goto LABEL_181;
  if ( *(_QWORD *)(p_is_need_unwatch + 48) )
  {
    v15 = 0;
    goto LABEL_183;
  }
LABEL_182:
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/redis_mgr.cpp",
    "cmdSetexWithTran",
    2353);
  p_conn_ptr = (common::midb::RedisMgr *)"do EXEC failed";
  common::milog::MiLogStream::operator()(
    (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
    "do EXEC failed");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
  v15 = -1;
LABEL_183:
  v70 = *(_QWORD *)(p_M_node_count + 104);
  if ( !v70 )
    goto LABEL_189;
  v71 = (volatile signed __int32 *)(v70 + 8);
  if ( &_pthread_key_create )
  {
    v72 = *(_BYTE *)(((unsigned __int64)v71 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v71 & 7) + 3) < v72 || !v72 )
    {
      v73 = _InterlockedExchangeAdd(v71, 0xFFFFFFFF);
      goto LABEL_188;
    }
    __asan_report_store4(v71, p_conn_ptr);
  }
  v75 = *(_BYTE *)(((v70 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v70 + 8) & 7) + 3) >= v75 && v75 )
  {
    __asan_report_load4(v70 + 8);
    goto LABEL_199;
  }
  v73 = *(_DWORD *)(v70 + 8);
  *(_DWORD *)(v70 + 8) = v73 - 1;
LABEL_188:
  if ( v73 == 1 )
  {
LABEL_199:
    if ( *(_BYTE *)((v70 >> 3) + 0x7FFF8000) )
    {
      v76 = v70;
      __asan_report_load8(v70);
    }
    else
    {
      v76 = *(_QWORD *)v70 + 16LL;
      if ( !*(_BYTE *)((v76 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v70 + 16LL))(v70);
        v76 = v70 + 12;
        if ( !&_pthread_key_create )
          goto LABEL_212;
        v77 = *(_BYTE *)((v76 >> 3) + 0x7FFF8000);
        if ( (char)((v76 & 7) + 3) < v77 || !v77 )
        {
          v78 = _InterlockedExchangeAdd((volatile signed __int32 *)v76, 0xFFFFFFFF);
          goto LABEL_205;
        }
LABEL_211:
        __asan_report_store4(v76, p_conn_ptr);
LABEL_212:
        v80 = *(_BYTE *)(((v70 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v70 + 12) & 7) + 3) >= v80 && v80 )
        {
          __asan_report_load4(v70 + 12);
          goto LABEL_216;
        }
        v78 = *(_DWORD *)(v70 + 12);
        *(_DWORD *)(v70 + 12) = v78 - 1;
LABEL_205:
        if ( v78 != 1 )
          goto LABEL_189;
        if ( !*(_BYTE *)((v70 >> 3) + 0x7FFF8000) )
        {
          v79 = *(_QWORD *)v70 + 24LL;
          if ( !*(_BYTE *)((v79 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v70 + 24LL))(v70);
            goto LABEL_189;
          }
LABEL_217:
          v81 = (struct _Unwind_Exception *)__asan_report_load8(v79);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
          __asan_handle_no_return(&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
          _Unwind_Resume(v81);
        }
LABEL_216:
        v79 = v70;
        __asan_report_load8(v70);
        goto LABEL_217;
      }
    }
    __asan_report_load8(v76);
    goto LABEL_211;
  }
LABEL_189:
  if ( &conn_ptr.pool_ptr_map_._M_t._M_impl._M_node_count == (std::size_t *)p_M_node_count )
  {
    *(_QWORD *)((p_M_node_count >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_node_count >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_node_count = 1172321806LL;
    *(_QWORD *)((p_M_node_count >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_node_count >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v15;
};

// Line 2361: range 000000000CA9B7D8-000000000CA9CAC2
int32_t __fastcall common::midb::RedisMgr::cmdSetexWithTranUsingPipeline(
        common::midb::RedisMgr *const this,
        const common::midb::GetAndSetTranPtr *tran_ptr,
        const std::map<std::string,std::string> *key_value_map,
        std::map<std::string,unsigned int> *ttl_map,
        const std::set<std::string> *persist_set)
{
  size_t v5; // rbx
  std::_Rb_tree_node_base::_Base_ptr v6; // r12
  signed __int64 ostr; // r14
  unsigned __int64 v8; // r15
  unsigned __int64 M_color; // rsi
  _DWORD *v10; // r13
  std::_Rb_tree_node_base::_Base_ptr **v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  char v15; // dl
  __int64 v16; // rax
  int32_t v17; // ebx
  char v18; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v19; // rdi
  unsigned __int64 v20; // rdi
  char v21; // al
  std::_Rb_tree_node_base::_Base_ptr *p_M_left; // rdi
  std::_Rb_tree_node_base::_Base_ptr M_left; // rax
  unsigned __int64 v24; // rdx
  __int64 p_M_parent; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // eax
  std::tuple<> *v29; // rdi
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // rdi
  char v34; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v35; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v36; // rdi
  common::milog::MilogStringStream *p_cur; // rdi
  size_t v39; // rax
  const void *v40; // rsi
  char *cur; // rdi
  char *v42; // rdi
  std::_Rb_tree_node_base::_Base_ptr **v43; // rax
  unsigned __int64 v44; // rdi
  unsigned __int64 *v45; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v46; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v47; // r9
  unsigned __int64 v48; // rdx
  size_t *v49; // rcx
  size_t *v50; // rdi
  size_t v51; // rcx
  int v52; // eax
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr v53; // rdi
  char v54; // cl
  int v55; // eax
  unsigned __int64 v56; // rdx
  char *v57; // rdi
  char *v58; // rdi
  char *v59; // rdi
  size_t v60; // r14
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v61; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v62; // r9
  unsigned __int64 v63; // rdx
  size_t *v64; // rcx
  size_t *v65; // rdi
  size_t v66; // rcx
  int v67; // eax
  std::_Rb_tree_node_base *v68; // rax
  char v69; // cl
  unsigned __int64 p_M_node_count; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v71; // rdi
  common::midb::RedisMgr **v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v76; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v77; // rdi
  unsigned __int64 v78; // rdi
  __int64 v79; // rdx
  char v80; // al
  __int64 v81; // rax
  std::tuple<const std::string&> *v82; // [rsp+0h] [rbp-198h]
  unsigned __int64 tran_ptra; // [rsp+8h] [rbp-190h]
  unsigned __int64 v85; // [rsp+20h] [rbp-178h]
  std::_Rb_tree_header *v89; // [rsp+48h] [rbp-150h]
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr M_node; // [rsp+50h] [rbp-148h]
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr v91; // [rsp+58h] [rbp-140h]
  __int64 v92; // [rsp+60h] [rbp-138h]
  std::_Rb_tree_node_base::_Base_ptr M_parent; // [rsp+68h] [rbp-130h]
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr __pos; // [rsp+70h] [rbp-128h]
  std::_Rb_tree_node_base::_Base_ptr v95; // [rsp+78h] [rbp-120h]
  std::tuple<> v96; // [rsp+8Fh] [rbp-109h] BYREF
  std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2> conn_ptr; // [rsp+90h] [rbp-108h] BYREF
  common::milog::MiLogStream v98; // [rsp+A0h] [rbp-F8h] BYREF
  char v99[216]; // [rsp+C0h] [rbp-D8h] BYREF

  tran_ptra = (unsigned __int64)tran_ptr;
  v85 = (unsigned __int64)v99;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v16 = __asan_stack_malloc_2(160LL);
    if ( v16 )
      v85 = v16;
  }
  *(_QWORD *)v85 = 1102416563LL;
  *(_QWORD *)(v85 + 8) = "4 32 8 6 __size 64 8 7 __osize 96 16 14 reply_ptr:2383 128 16 14 reply_ptr:2416";
  M_color = (unsigned __int64)common::midb::RedisMgr::cmdSetexWithTranUsingPipeline;
  *(_QWORD *)(v85 + 16) = common::midb::RedisMgr::cmdSetexWithTranUsingPipeline;
  v10 = (_DWORD *)(v85 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -218959360;
  v10[536862722] = -218959360;
  v10[536862723] = -219021312;
  v10[536862724] = -202178560;
  if ( *(_BYTE *)((tran_ptra >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(tran_ptra);
    goto LABEL_19;
  }
  v11 = *(std::_Rb_tree_node_base::_Base_ptr ***)tran_ptra;
  if ( !*(_QWORD *)tran_ptra )
  {
LABEL_19:
    common::milog::MiLogStream::MiLogStream(
      &v98,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSetexWithTranUsingPipeline",
      2365);
    common::milog::MiLogStream::operator()(&v98, "tran_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v98);
    v17 = -1;
    goto LABEL_72;
  }
  if ( *(char *)(((unsigned __int64)(v11 + 2) >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(v11 + 2, common::midb::RedisMgr::cmdSetexWithTranUsingPipeline, v11 + 2);
    goto LABEL_21;
  }
  if ( !*((_BYTE *)v11 + 16) )
  {
LABEL_21:
    common::milog::MiLogStream::MiLogStream(
      &v98,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSetexWithTranUsingPipeline",
      2372);
    common::milog::MiLogStream::operator()(&v98, "tran is end, can not re set on one transaction");
    common::milog::MiLogStream::~MiLogStream(&v98);
    v17 = -1;
    goto LABEL_72;
  }
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v11);
    goto LABEL_23;
  }
  if ( !*v11 )
  {
LABEL_23:
    common::milog::MiLogStream::MiLogStream(
      &v98,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSetexWithTranUsingPipeline",
      2378);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v98.ostr_, "conn in tran is null");
    common::milog::MiLogStream::~MiLogStream(&v98);
    v17 = -1;
    goto LABEL_72;
  }
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    v12 = __asan_report_load8(v11);
    goto LABEL_25;
  }
  *(_QWORD *)(v85 + 128) = *v11;
  v12 = (__int64)(v11 + 1);
  if ( *(_BYTE *)(((unsigned __int64)(v11 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    v14 = v12;
    __asan_report_load8(v12);
LABEL_26:
    v13 = __asan_report_store4(v14, common::midb::RedisMgr::cmdSetexWithTranUsingPipeline);
    goto LABEL_27;
  }
  v13 = (__int64)v11[1];
  *(_QWORD *)(v85 + 136) = v13;
  if ( !v13 )
    goto LABEL_15;
  v14 = v13 + 8;
  if ( &_pthread_key_create )
  {
    v15 = *(_BYTE *)((v14 >> 3) + 0x7FFF8000);
    if ( (char)((v14 & 7) + 3) < v15 || !v15 )
    {
      _InterlockedAdd((volatile signed __int32 *)v14, 1u);
      goto LABEL_15;
    }
    goto LABEL_26;
  }
LABEL_27:
  v18 = *(_BYTE *)(((unsigned __int64)(v13 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v13 + 8) & 7) + 3) >= v18 && v18 )
  {
    __asan_report_load4(v13 + 8);
    goto LABEL_31;
  }
  ++*(_DWORD *)(v13 + 8);
LABEL_15:
  M_color = (unsigned __int64)this;
  common::midb::RedisMgr::cmdBeginTrans(
    (common::midb::RedisMgr *const)(v85 + 96),
    (common::midb::RedisConnPtr)__PAIR128__(v85 + 128, (unsigned __int64)this));
LABEL_31:
  v19 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v85 + 136);
  if ( v19 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v19);
  v20 = *(_QWORD *)(v85 + 96);
  if ( !v20 )
  {
    v17 = -1;
    goto LABEL_70;
  }
  v21 = *(_BYTE *)((v20 >> 3) + 0x7FFF8000);
  if ( v21 && v21 <= 3 )
  {
    __asan_report_load4(v20);
  }
  else
  {
    if ( *(_DWORD *)v20 == 6 )
    {
      v17 = -1;
      goto LABEL_70;
    }
    common::tools::TimeUtils::getNow();
  }
  p_M_left = &key_value_map->_M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&key_value_map->_M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_left);
    goto LABEL_42;
  }
  M_left = key_value_map->_M_t._M_impl._M_header._M_left;
  LODWORD(v5) = (_DWORD)key_value_map + 8;
  v89 = &key_value_map->_M_t._M_impl.std::_Rb_tree_header;
  while ( 1 )
  {
    v6 = M_left;
    if ( v89 == (std::_Rb_tree_header *)M_left )
      goto LABEL_198;
    v5 = (size_t)&M_left[1];
    if ( common::tools::MiscUtils::isContains<std::set<std::string> const,std::string>(
           persist_set,
           (const std::string *)&M_left[1]) )
    {
      p_M_left = (std::_Rb_tree_node_base::_Base_ptr *)tran_ptra;
      if ( *(_BYTE *)((tran_ptra >> 3) + 0x7FFF8000) )
      {
LABEL_42:
        __asan_report_load8(p_M_left);
      }
      else
      {
        v43 = *(std::_Rb_tree_node_base::_Base_ptr ***)tran_ptra;
        p_M_left = *(std::_Rb_tree_node_base::_Base_ptr **)tran_ptra;
        if ( !*(_BYTE *)((*(_QWORD *)tran_ptra >> 3) + 0x7FFF8000LL) )
        {
          p_M_left = *v43;
          if ( !*(_BYTE *)(((unsigned __int64)*v43 >> 3) + 0x7FFF8000) )
          {
            v24 = (unsigned __int64)&(*p_M_left)[2];
            if ( !*(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
            {
              p_M_parent = (__int64)&v6[2]._M_parent;
              if ( !*(_BYTE *)(((unsigned __int64)&v6[2]._M_parent >> 3) + 0x7FFF8000) )
              {
                v26 = (__int64)&v6[2];
                if ( !*(_BYTE *)(((unsigned __int64)&v6[2] >> 3) + 0x7FFF8000) )
                {
                  v27 = (__int64)&v6[1];
                  if ( !*(_BYTE *)(((unsigned __int64)&v6[1] >> 3) + 0x7FFF8000) )
                  {
                    v28 = (*(__int64 (**)(std::_Rb_tree_node_base::_Base_ptr *, const char *, ...))&(*p_M_left)[2]._M_color)(
                            p_M_left,
                            "SET %s %b",
                            *(_QWORD *)&v6[1]._M_color,
                            *(_QWORD *)&v6[2]._M_color,
                            v6[2]._M_parent);
LABEL_49:
                    if ( v28 )
                    {
                      common::milog::MiLogStream::MiLogStream(
                        &v98,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "src/redis_mgr.cpp",
                        "cmdSetexWithTranUsingPipeline",
                        2397);
                      common::milog::MiLogStream::operator()(&v98, "redisAppendCommand failed");
                      common::milog::MiLogStream::~MiLogStream(&v98);
                      if ( *(_BYTE *)((tran_ptra >> 3) + 0x7FFF8000) )
                      {
                        v29 = (std::tuple<> *)tran_ptra;
                        __asan_report_load8(tran_ptra);
                      }
                      else
                      {
                        v29 = *(std::tuple<> **)tran_ptra;
                        if ( !*(_BYTE *)((*(_QWORD *)tran_ptra >> 3) + 0x7FFF8000LL) )
                        {
                          *(_QWORD *)(v85 + 128) = *(_QWORD *)v29->gap0;
                          v30 = (__int64)v29[8].gap0;
                          v31 = (unsigned __int64)&v29[8] >> 3;
                          if ( !*(_BYTE *)(v31 + 0x7FFF8000) )
                          {
                            v32 = *(_QWORD *)v29[8].gap0;
                            *(_QWORD *)(v85 + 136) = v32;
                            if ( !v32 )
                              goto LABEL_58;
                            v33 = v32 + 8;
                            if ( !&_pthread_key_create )
                            {
LABEL_63:
                              v34 = *(_BYTE *)(((unsigned __int64)(v32 + 8) >> 3) + 0x7FFF8000);
                              v31 = (((_BYTE)v32 + 8) & 7u) + 3;
                              if ( (char)(((v32 + 8) & 7) + 3) >= v34 && v34 )
                              {
                                __asan_report_load4(v32 + 8);
LABEL_67:
                                v35 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v85 + 136);
                                if ( !v35 )
                                  goto LABEL_69;
                                goto LABEL_68;
                              }
                              ++*(_DWORD *)(v32 + 8);
LABEL_58:
                              common::midb::RedisMgr::markConnToDestory(
                                this,
                                (common::midb::RedisConnPtr)__PAIR128__(v31, v85 + 128));
                              goto LABEL_67;
                            }
                            v31 = *(unsigned __int8 *)((v33 >> 3) + 0x7FFF8000);
                            if ( (char)((v33 & 7) + 3) < (char)v31 || !(_BYTE)v31 )
                            {
                              _InterlockedAdd((volatile signed __int32 *)v33, 1u);
                              goto LABEL_58;
                            }
LABEL_62:
                            v32 = __asan_report_store4(v33, "redisAppendCommand failed");
                            goto LABEL_63;
                          }
LABEL_61:
                          v33 = v30;
                          __asan_report_load8(v30);
                          goto LABEL_62;
                        }
                      }
                      v30 = __asan_report_load8(v29);
                      goto LABEL_61;
                    }
                    common::milog::MiLogStream::MiLogStream(
                      &v98,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "src/redis_mgr.cpp",
                      "cmdSetexWithTranUsingPipeline",
                      2401);
                    ostr = (signed __int64)v98.ostr_;
                    p_cur = (common::milog::MilogStringStream *)(v5 + 8);
                    if ( *(_BYTE *)(((v5 + 8) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load8(p_cur);
                    }
                    else
                    {
                      v39 = *(_QWORD *)(v5 + 8);
                      p_cur = (common::milog::MilogStringStream *)v5;
                      if ( !*(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
                      {
                        v40 = *(const void **)v5;
                        p_cur = v98.ostr_;
                        if ( !*(_BYTE *)(((unsigned __int64)v98.ostr_ >> 3) + 0x7FFF8000) )
                        {
                          v5 = (size_t)(v98.ostr_->buffer_.data_ + 0x4000);
                          p_cur = (common::milog::MilogStringStream *)&v98.ostr_->buffer_.cur_;
                          if ( !*(_BYTE *)(((unsigned __int64)&v98.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                          {
                            cur = v98.ostr_->buffer_.cur_;
                            v5 = (int)v5 - (int)cur;
                            if ( v39 <= v5 )
                              v5 = v39;
                            memcpy(cur, v40, v5);
                            *(_QWORD *)(ostr + 8) += v5;
                            ostr = (signed __int64)v98.ostr_;
                            p_cur = v98.ostr_;
                            if ( !*(_BYTE *)(((unsigned __int64)v98.ostr_ >> 3) + 0x7FFF8000) )
                            {
                              v5 = (size_t)(v98.ostr_->buffer_.data_ + 0x4000);
                              p_cur = (common::milog::MilogStringStream *)&v98.ostr_->buffer_.cur_;
                              if ( !*(_BYTE *)(((unsigned __int64)&v98.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                              {
                                v42 = v98.ostr_->buffer_.cur_;
                                v5 = (int)v5 - (int)v42;
                                if ( v5 > 0x11 )
                                  v5 = 18LL;
                                M_color = (unsigned __int64)" set never expire.";
                                memcpy(v42, " set never expire.", v5);
                                *(_QWORD *)(ostr + 8) += v5;
                                common::milog::MiLogStream::~MiLogStream(&v98);
                                goto LABEL_86;
                              }
                              goto LABEL_102;
                            }
LABEL_101:
                            __asan_report_load8(p_cur);
LABEL_102:
                            __asan_report_load8(p_cur);
                            goto LABEL_103;
                          }
LABEL_100:
                          __asan_report_load8(p_cur);
                          goto LABEL_101;
                        }
LABEL_99:
                        __asan_report_load8(p_cur);
                        goto LABEL_100;
                      }
                    }
                    __asan_report_load8(p_cur);
                    goto LABEL_99;
                  }
LABEL_48:
                  v28 = __asan_report_load8(v27);
                  goto LABEL_49;
                }
LABEL_47:
                v27 = __asan_report_load8(v26);
                goto LABEL_48;
              }
LABEL_46:
              v26 = __asan_report_load8(p_M_parent);
              goto LABEL_47;
            }
LABEL_45:
            p_M_parent = __asan_report_load8(v24);
            goto LABEL_46;
          }
LABEL_44:
          __asan_report_load8(p_M_left);
          goto LABEL_45;
        }
      }
      __asan_report_load8(p_M_left);
      goto LABEL_44;
    }
LABEL_103:
    v44 = tran_ptra;
    if ( *(_BYTE *)((tran_ptra >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(tran_ptra);
LABEL_126:
      __asan_report_load8(v44);
LABEL_127:
      __asan_report_load8(v44);
LABEL_128:
      __asan_report_load8(v44);
LABEL_129:
      __asan_report_load8(v44);
LABEL_130:
      __asan_report_load8(v44);
LABEL_131:
      __asan_report_load8(v44);
LABEL_132:
      __asan_report_load8(v44);
LABEL_133:
      v46._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)__asan_report_load8(v44);
      goto LABEL_134;
    }
    v45 = *(unsigned __int64 **)tran_ptra;
    v44 = *(_QWORD *)tran_ptra;
    if ( *(_BYTE *)((*(_QWORD *)tran_ptra >> 3) + 0x7FFF8000LL) )
      goto LABEL_126;
    v8 = *v45;
    v44 = *v45;
    if ( *(_BYTE *)((*v45 >> 3) + 0x7FFF8000) )
      goto LABEL_127;
    v44 = *(_QWORD *)v8 + 64LL;
    if ( *(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
      goto LABEL_128;
    v91 = *(std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr *)(*(_QWORD *)v8 + 64LL);
    v44 = (unsigned __int64)&v6[2]._M_parent;
    if ( *(_BYTE *)(((unsigned __int64)&v6[2]._M_parent >> 3) + 0x7FFF8000) )
      goto LABEL_129;
    M_parent = v6[2]._M_parent;
    v44 = (unsigned __int64)&v6[2];
    if ( *(_BYTE *)(((unsigned __int64)&v6[2] >> 3) + 0x7FFF8000) )
      goto LABEL_130;
    v92 = *(_QWORD *)&v6[2]._M_color;
    ostr = (signed __int64)&ttl_map->_M_t._M_impl.std::_Rb_tree_header;
    v44 = (unsigned __int64)&ttl_map->_M_t._M_impl._M_header._M_parent;
    if ( *(_BYTE *)(((unsigned __int64)&ttl_map->_M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
      goto LABEL_131;
    v46._M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_lower_bound(
                    &ttl_map->_M_t,
                    (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type)ttl_map->_M_t._M_impl._M_header._M_parent,
                    &ttl_map->_M_t._M_impl._M_header,
                    (const std::string *)v5)._M_node;
    M_node = v46._M_node;
    __pos = v46._M_node;
    if ( (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)ostr == v46._M_node )
      goto LABEL_124;
    v48 = (unsigned __int64)&v46._M_node[1];
    v44 = v5 + 8;
    if ( *(_BYTE *)(((v5 + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_132;
    ostr = *(_QWORD *)(v5 + 8);
    *(_QWORD *)(v85 + 32) = ostr;
    v44 = (unsigned __int64)&v46._M_node[1]._M_parent;
    if ( *(_BYTE *)(((unsigned __int64)&v46._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
      goto LABEL_133;
    v95 = v46._M_node[1]._M_parent;
    *(_QWORD *)(v85 + 64) = v95;
    if ( ostr <= (unsigned __int64)v95 )
    {
      v49 = (size_t *)(v85 + 32);
      goto LABEL_115;
    }
LABEL_134:
    v49 = (size_t *)(v85 + 64);
LABEL_115:
    v50 = v49;
    if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v49);
LABEL_136:
      __asan_report_load8(v50);
LABEL_137:
      __asan_report_load8(v50);
LABEL_138:
      v52 = 0x7FFFFFFF;
      goto LABEL_123;
    }
    v51 = *v49;
    v50 = (size_t *)v48;
    if ( *(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
      goto LABEL_136;
    v50 = (size_t *)v5;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      goto LABEL_137;
    if ( !v51 || (v52 = memcmp(*(const void **)v5, *(const void **)&v46._M_node[1]._M_color, v51)) == 0 )
    {
      ostr -= (__int64)v95;
      if ( ostr > 0x7FFFFFFF )
        goto LABEL_138;
      if ( ostr < (__int64)0xFFFFFFFF80000000LL )
        v52 = 0x80000000;
      else
        v52 = ostr;
    }
LABEL_123:
    if ( v52 < 0 )
    {
LABEL_124:
      *(_QWORD *)(v85 + 64) = v5;
      M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string const&>,std::tuple<>>(
                 &ttl_map->_M_t,
                 (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::const_iterator)__pos,
                 &std::piecewise_construct,
                 (std::tuple<const std::string&> *)(v85 + 64),
                 &v96,
                 (const std::piecewise_construct_t *)v47._M_node,
                 v82,
                 (std::tuple<> *)tran_ptra)._M_node;
    }
    v53 = M_node + 2;
    v54 = *(_BYTE *)(((unsigned __int64)&M_node[2] >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)M_node + 64) & 7) + 3) >= v54 && v54 )
    {
      __asan_report_load4(v53);
    }
    else
    {
      v53 = v6 + 1;
      if ( !*(_BYTE *)(((unsigned __int64)&v6[1] >> 3) + 0x7FFF8000) )
      {
        v55 = ((__int64 (*)(unsigned __int64, const char *, ...))v91)(
                v8,
                "SETEX %s %d %b",
                *(_QWORD *)&v6[1]._M_color,
                (unsigned int)M_node[2]._M_color,
                v92,
                M_parent);
        goto LABEL_146;
      }
    }
    v55 = __asan_report_load8(v53);
LABEL_146:
    if ( v55 )
      break;
    common::milog::MiLogStream::MiLogStream(
      &v98,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/redis_mgr.cpp",
      "cmdSetexWithTranUsingPipeline",
      2410);
    v8 = (unsigned __int64)v98.ostr_;
    v57 = (char *)(v5 + 8);
    if ( *(_BYTE *)(((v5 + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v57);
LABEL_180:
      __asan_report_load8(v57);
LABEL_181:
      __asan_report_load8(v57);
LABEL_182:
      __asan_report_load8(v57);
LABEL_183:
      __asan_report_load8(v57);
LABEL_184:
      __asan_report_load8(v57);
LABEL_185:
      __asan_report_load8(v57);
      goto LABEL_186;
    }
    v57 = (char *)v5;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      goto LABEL_180;
    v57 = (char *)v98.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v98.ostr_ >> 3) + 0x7FFF8000) )
      goto LABEL_181;
    ostr = (signed __int64)(v98.ostr_->buffer_.data_ + 0x4000);
    v57 = (char *)&v98.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v98.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_182;
    v58 = v98.ostr_->buffer_.cur_;
    ostr = (int)ostr - (int)v58;
    if ( *(_QWORD *)(v5 + 8) <= (unsigned __int64)ostr )
      ostr = *(_QWORD *)(v5 + 8);
    memcpy(v58, *(const void **)v5, ostr);
    *(_QWORD *)(v8 + 8) += ostr;
    v8 = (unsigned __int64)v98.ostr_;
    v57 = (char *)v98.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v98.ostr_ >> 3) + 0x7FFF8000) )
      goto LABEL_183;
    ostr = (signed __int64)(v98.ostr_->buffer_.data_ + 0x4000);
    v57 = (char *)&v98.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v98.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_184;
    v59 = v98.ostr_->buffer_.cur_;
    v60 = (int)ostr - (int)v59;
    if ( v60 > 5 )
      v60 = 6LL;
    memcpy(v59, " ttl: ", v60);
    *(_QWORD *)(v8 + 8) += v60;
    ostr = (signed __int64)&ttl_map->_M_t._M_impl.std::_Rb_tree_header;
    v57 = (char *)&ttl_map->_M_t._M_impl._M_header._M_parent;
    if ( *(_BYTE *)(((unsigned __int64)&ttl_map->_M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
      goto LABEL_185;
    v61._M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_lower_bound(
                    &ttl_map->_M_t,
                    (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type)ttl_map->_M_t._M_impl._M_header._M_parent,
                    &ttl_map->_M_t._M_impl._M_header,
                    (const std::string *)v5)._M_node;
    M_node = v61._M_node;
    v91 = v61._M_node;
    if ( (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)ostr != v61._M_node )
    {
      v63 = (unsigned __int64)&v61._M_node[1];
      v57 = (char *)(v5 + 8);
      if ( !*(_BYTE *)(((v5 + 8) >> 3) + 0x7FFF8000) )
      {
        ostr = *(_QWORD *)(v5 + 8);
        *(_QWORD *)(v85 + 32) = ostr;
        v57 = (char *)&v61._M_node[1]._M_parent;
        if ( !*(_BYTE *)(((unsigned __int64)&v61._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
        {
          v8 = (unsigned __int64)v61._M_node[1]._M_parent;
          *(_QWORD *)(v85 + 64) = v8;
          if ( ostr <= v8 )
          {
            v64 = (size_t *)(v85 + 32);
            goto LABEL_169;
          }
LABEL_188:
          v64 = (size_t *)(v85 + 64);
LABEL_169:
          v65 = v64;
          M_color = (unsigned __int64)v64 >> 3;
          if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v64);
          }
          else
          {
            v66 = *v64;
            v65 = (size_t *)v63;
            if ( !*(_BYTE *)((v63 >> 3) + 0x7FFF8000) )
            {
              M_color = *(_QWORD *)&v61._M_node[1]._M_color;
              v65 = (size_t *)v5;
              if ( !*(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
              {
                if ( v66 )
                {
                  v67 = memcmp(*(const void **)v5, (const void *)M_color, v66);
                  if ( v67 )
                  {
LABEL_177:
                    if ( v67 >= 0 )
                      goto LABEL_194;
                    goto LABEL_178;
                  }
                }
                ostr -= v8;
                if ( ostr <= 0x7FFFFFFF )
                {
                  if ( ostr < (__int64)0xFFFFFFFF80000000LL )
                    v67 = 0x80000000;
                  else
                    v67 = ostr;
                  goto LABEL_177;
                }
LABEL_192:
                v67 = 0x7FFFFFFF;
                goto LABEL_177;
              }
LABEL_191:
              __asan_report_load8(v65);
              goto LABEL_192;
            }
          }
          __asan_report_load8(v65);
          goto LABEL_191;
        }
LABEL_187:
        v61._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)__asan_report_load8(v57);
        goto LABEL_188;
      }
LABEL_186:
      __asan_report_load8(v57);
      goto LABEL_187;
    }
LABEL_178:
    *(_QWORD *)(v85 + 64) = v5;
    M_color = (unsigned __int64)v91;
    M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string const&>,std::tuple<>>(
               &ttl_map->_M_t,
               (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::const_iterator)v91,
               &std::piecewise_construct,
               (std::tuple<const std::string&> *)(v85 + 64),
               &v96,
               (const std::piecewise_construct_t *)v62._M_node,
               v82,
               (std::tuple<> *)tran_ptra)._M_node;
LABEL_194:
    v68 = M_node + 2;
    v69 = *(_BYTE *)(((unsigned __int64)&M_node[2] >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)M_node + 64) & 7) + 3) >= v69 && v69 )
    {
      __asan_report_load4(v68);
LABEL_198:
      p_M_node_count = (unsigned __int64)&key_value_map->_M_t._M_impl._M_node_count;
      if ( *(_BYTE *)(((unsigned __int64)&key_value_map->_M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_M_node_count);
        goto LABEL_201;
      }
      LODWORD(v6) = key_value_map->_M_t._M_impl._M_node_count;
      LODWORD(v5) = 0;
      while ( 2 )
      {
        if ( (unsigned int)v5 >= (unsigned int)v6 )
        {
          if ( *(_BYTE *)((tran_ptra >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(tran_ptra);
          }
          else
          {
            std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(
              &conn_ptr,
              *(const std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2> **)tran_ptra);
            M_color = (unsigned __int64)this;
            common::midb::RedisMgr::cmdExecTrans(
              (common::midb::RedisMgr *const)(v85 + 128),
              (common::midb::RedisConnPtr)__PAIR128__(&conn_ptr, (unsigned __int64)this));
          }
          v74 = *(_QWORD *)(v85 + 128);
          v75 = *(_QWORD *)(v85 + 136);
          *(_QWORD *)(v85 + 136) = 0LL;
          *(_QWORD *)(v85 + 128) = 0LL;
          *(_QWORD *)(v85 + 96) = v74;
          v76 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v85 + 104);
          *(_QWORD *)(v85 + 104) = v75;
          if ( v76 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v76);
          v77 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v85 + 136);
          if ( v77 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v77);
          if ( conn_ptr._M_refcount._M_pi )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(conn_ptr._M_refcount._M_pi);
          if ( *(_BYTE *)((tran_ptra >> 3) + 0x7FFF8000) )
          {
            v78 = tran_ptra;
            __asan_report_load8(tran_ptra);
          }
          else
          {
            v78 = *(_QWORD *)tran_ptra + 16LL;
            v79 = *(unsigned __int8 *)((v78 >> 3) + 0x7FFF8000);
            if ( (v79 & 0x80u) == 0LL )
            {
              *(_BYTE *)(*(_QWORD *)tran_ptra + 16LL) = 0;
              v78 = *(_QWORD *)(v85 + 96);
              if ( !v78 )
                goto LABEL_238;
              v80 = *(_BYTE *)((v78 >> 3) + 0x7FFF8000);
              if ( !v80 || v80 > 3 )
              {
                if ( *(_DWORD *)v78 != 2 )
                  goto LABEL_238;
                v81 = v78 + 48;
                if ( !*(_BYTE *)(((v78 + 48) >> 3) + 0x7FFF8000) )
                {
                  if ( *(_QWORD *)(v78 + 48) )
                  {
                    v17 = 0;
                    goto LABEL_70;
                  }
LABEL_238:
                  common::milog::MiLogStream::MiLogStream(
                    &v98,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "src/redis_mgr.cpp",
                    "cmdSetexWithTranUsingPipeline",
                    2431);
                  common::milog::MiLogStream::operator()(&v98, "do EXEC failed");
                  common::milog::MiLogStream::~MiLogStream(&v98);
                  v17 = -1;
                  goto LABEL_70;
                }
LABEL_237:
                __asan_report_load8(v81);
                goto LABEL_238;
              }
LABEL_236:
              v81 = __asan_report_load4(v78);
              goto LABEL_237;
            }
          }
          __asan_report_store1(v78, M_color, v79, v73);
          goto LABEL_236;
        }
        p_M_node_count = tran_ptra;
        if ( *(_BYTE *)((tran_ptra >> 3) + 0x7FFF8000) )
        {
LABEL_201:
          __asan_report_load8(p_M_node_count);
        }
        else
        {
          v72 = *(common::midb::RedisMgr ***)tran_ptra;
          p_M_node_count = *(_QWORD *)tran_ptra;
          if ( !*(_BYTE *)((*(_QWORD *)tran_ptra >> 3) + 0x7FFF8000LL) )
          {
            M_color = (unsigned __int64)*v72;
            p_M_node_count = (unsigned __int64)*v72;
            if ( !*(_BYTE *)(((unsigned __int64)*v72 >> 3) + 0x7FFF8000) )
            {
              p_M_node_count = *(_QWORD *)M_color + 112LL;
              if ( !*(_BYTE *)((p_M_node_count >> 3) + 0x7FFF8000) )
              {
                v8 = v85 + 160;
                (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_color + 112LL))(v85 + 128);
                goto LABEL_205;
              }
LABEL_204:
              __asan_report_load8(p_M_node_count);
LABEL_205:
              if ( !*(_QWORD *)(v8 - 32) )
              {
                common::milog::MiLogStream::MiLogStream(
                  &v98,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "src/redis_mgr.cpp",
                  "cmdSetexWithTranUsingPipeline",
                  2420);
                M_color = (unsigned __int64)"redisGetReply failed";
                common::milog::MiLogStream::operator()(&v98, "redisGetReply failed");
                common::milog::MiLogStream::~MiLogStream(&v98);
              }
              v71 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v85 + 136);
              if ( v71 )
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v71);
              LODWORD(v5) = v5 + 1;
              continue;
            }
LABEL_203:
            __asan_report_load8(p_M_node_count);
            goto LABEL_204;
          }
        }
        break;
      }
      __asan_report_load8(p_M_node_count);
      goto LABEL_203;
    }
    M_color = (unsigned int)v68->_M_color;
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v98.ostr_, M_color);
    common::milog::MiLogStream::~MiLogStream(&v98);
LABEL_86:
    M_left = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(v6);
  }
  common::milog::MiLogStream::MiLogStream(
    &v98,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/redis_mgr.cpp",
    "cmdSetexWithTranUsingPipeline",
    2406);
  common::milog::MiLogStream::operator()(&v98, "redisAppendCommand failed");
  common::milog::MiLogStream::~MiLogStream(&v98);
  if ( *(_BYTE *)((tran_ptra >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(tran_ptra);
  }
  else
  {
    std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(
      (std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2> *const)(v85 + 128),
      *(const std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2> **)tran_ptra);
    common::midb::RedisMgr::markConnToDestory(this, (common::midb::RedisConnPtr)__PAIR128__(v56, v85 + 128));
  }
  v35 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v85 + 136);
  if ( v35 )
LABEL_68:
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v35);
LABEL_69:
  v17 = -1;
LABEL_70:
  v36 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v85 + 104);
  if ( v36 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v36);
LABEL_72:
  if ( v99 == (char *)v85 )
  {
    *(_QWORD *)((v85 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v85 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v85 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v85 = 1172321806LL;
    *(_QWORD *)((v85 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v85 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v85 >> 3) + 0x7FFF8010) = -168430091;
  }
  return v17;
};

// Line 2440: range 000000000CA955B0-000000000CA95FDF
int32_t __fastcall common::midb::RedisMgr::cmdMsetWithTran(
        common::midb::RedisMgr *const this,
        const common::midb::GetAndSetTranPtr *tran_ptr,
        const std::map<std::string,std::string> *key_value_map)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 p_M_node_count; // rbx
  unsigned __int64 v6; // r15
  std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  __int64 p_M_refcount; // rax
  __int64 M_pi; // rax
  unsigned __int64 v10; // rdi
  char v11; // dl
  const std::map<std::string,std::string> *v12; // rcx
  __int64 v13; // rax
  int32_t v14; // r14d
  char v15; // cl
  unsigned __int64 v16; // r14
  volatile signed __int32 *v17; // rdi
  char v18; // dl
  signed __int32 v19; // eax
  unsigned __int64 v20; // rdi
  char v21; // al
  _QWORD *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rdi
  char v26; // dl
  int32_t v27; // eax
  char v28; // dl
  unsigned __int64 v29; // rdi
  char v30; // dl
  signed __int32 v31; // eax
  char v32; // dl
  __int64 *v33; // rdi
  __int64 v34; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v35; // rax
  unsigned __int64 p_M_use_count; // rdi
  char v37; // dl
  __int64 v38; // rcx
  char v39; // cl
  std::size_t v40; // rdx
  std::size_t v41; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v42; // rdi
  unsigned __int64 v43; // rdi
  __int64 v44; // rdx
  char v45; // al
  __int64 v46; // rax
  unsigned __int64 v47; // rbp
  volatile signed __int32 *v48; // rdi
  char v49; // dl
  signed __int32 v50; // eax
  char v52; // dl
  unsigned __int64 v53; // rdi
  char v54; // dl
  signed __int32 v55; // eax
  unsigned __int64 v56; // rdi
  char v57; // dl
  struct _Unwind_Exception *v58; // rbx
  __int64 v60; // [rsp+10h] [rbp-B8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v61; // [rsp+18h] [rbp-B0h]
  common::midb::RedisMgr conn_ptr; // [rsp+20h] [rbp-A8h] BYREF

  v4 = (unsigned __int64)tran_ptr;
  p_M_node_count = (unsigned __int64)&conn_ptr.pool_ptr_map_._M_t._M_impl._M_node_count;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_0(64LL);
    if ( v13 )
      p_M_node_count = v13;
  }
  *(_QWORD *)p_M_node_count = 1102416563LL;
  *(_QWORD *)(p_M_node_count + 8) = "1 32 16 14 reply_ptr:2462";
  *(_QWORD *)(p_M_node_count + 16) = common::midb::RedisMgr::cmdMsetWithTran;
  v6 = p_M_node_count >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)tran_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(tran_ptr);
    goto LABEL_19;
  }
  M_ptr = tran_ptr->_M_ptr;
  if ( !tran_ptr->_M_ptr )
  {
LABEL_19:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdMsetWithTran",
      2444);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      "tran_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    v14 = -1;
    goto LABEL_132;
  }
  if ( *(char *)(((unsigned __int64)&M_ptr->is_need_unwatch_ >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(&M_ptr->is_need_unwatch_, tran_ptr, &M_ptr->is_need_unwatch_);
    goto LABEL_21;
  }
  if ( !M_ptr->is_need_unwatch_ )
  {
LABEL_21:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdMsetWithTran",
      2451);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      "tran is end, can not re set on one transaction");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    v14 = -1;
    goto LABEL_132;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(M_ptr);
    goto LABEL_23;
  }
  if ( !M_ptr->conn_ptr_._M_ptr )
  {
LABEL_23:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdMsetWithTran",
      2457);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<16384> > *const)conn_ptr.pool_ptr_map_._M_t._M_impl._M_header._M_right,
      "conn in tran is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    v14 = -1;
    goto LABEL_132;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
    p_M_refcount = __asan_report_load8(M_ptr);
    goto LABEL_25;
  }
  *(_QWORD *)&conn_ptr.is_init_ = M_ptr->conn_ptr_._M_ptr;
  p_M_refcount = (__int64)&M_ptr->conn_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&M_ptr->conn_ptr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    v10 = p_M_refcount;
    __asan_report_load8(p_M_refcount);
LABEL_26:
    M_pi = __asan_report_store4(v10, tran_ptr);
    goto LABEL_27;
  }
  M_pi = (__int64)M_ptr->conn_ptr_._M_refcount._M_pi;
  *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 = M_pi;
  if ( !M_pi )
  {
LABEL_15:
    tran_ptr = (const common::midb::GetAndSetTranPtr *)this;
    common::midb::RedisMgr::cmdBeginTrans(
      (common::midb::RedisMgr *const)(p_M_node_count + 32),
      (common::midb::RedisConnPtr)__PAIR128__(&conn_ptr, (unsigned __int64)this));
    goto LABEL_31;
  }
  v10 = M_pi + 8;
  if ( &_pthread_key_create )
  {
    v11 = *(_BYTE *)((v10 >> 3) + 0x7FFF8000);
    if ( (char)((v10 & 7) + 3) < v11 || !v11 )
    {
      _InterlockedAdd((volatile signed __int32 *)v10, 1u);
      goto LABEL_15;
    }
    goto LABEL_26;
  }
LABEL_27:
  v15 = *(_BYTE *)(((unsigned __int64)(M_pi + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((M_pi + 8) & 7) + 3) < v15 || !v15 )
  {
    ++*(_DWORD *)(M_pi + 8);
    goto LABEL_15;
  }
  __asan_report_load4(M_pi + 8);
LABEL_31:
  v16 = *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0;
  if ( !*(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 )
    goto LABEL_37;
  v17 = (volatile signed __int32 *)(*(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 + 8LL);
  if ( &_pthread_key_create )
  {
    v18 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v17 & 7) + 3) < v18 || !v18 )
    {
      v19 = _InterlockedExchangeAdd(v17, 0xFFFFFFFF);
      goto LABEL_36;
    }
    __asan_report_store4(v17, tran_ptr);
  }
  v28 = *(_BYTE *)(((v16 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v16 + 8) & 7) + 3) >= v28 && v28 )
  {
    __asan_report_load4(v16 + 8);
    goto LABEL_55;
  }
  v19 = *(_DWORD *)(v16 + 8);
  *(_DWORD *)(v16 + 8) = v19 - 1;
LABEL_36:
  if ( v19 != 1 )
    goto LABEL_37;
LABEL_55:
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
  {
    v29 = v16;
    __asan_report_load8(v16);
    goto LABEL_66;
  }
  v29 = *(_QWORD *)v16 + 16LL;
  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_load8(v29);
    goto LABEL_67;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v16 + 16LL))(v16);
  v29 = v16 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_68;
  v30 = *(_BYTE *)((v29 >> 3) + 0x7FFF8000);
  if ( (char)((v29 & 7) + 3) < v30 || !v30 )
  {
    v31 = _InterlockedExchangeAdd((volatile signed __int32 *)v29, 0xFFFFFFFF);
    goto LABEL_61;
  }
LABEL_67:
  __asan_report_store4(v29, tran_ptr);
LABEL_68:
  v32 = *(_BYTE *)(((v16 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v16 + 12) & 7) + 3) >= v32 && v32 )
  {
    __asan_report_load4(v16 + 12);
LABEL_72:
    v20 = v16;
    __asan_report_load8(v16);
    goto LABEL_73;
  }
  v31 = *(_DWORD *)(v16 + 12);
  *(_DWORD *)(v16 + 12) = v31 - 1;
LABEL_61:
  if ( v31 != 1 )
    goto LABEL_37;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
    goto LABEL_72;
  v20 = *(_QWORD *)v16 + 24LL;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    __asan_report_load8(v20);
    goto LABEL_74;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v16 + 24LL))(v16);
LABEL_37:
  v20 = *(_QWORD *)(p_M_node_count + 32);
  if ( !v20 )
  {
    v14 = -1;
    goto LABEL_126;
  }
  v21 = *(_BYTE *)((v20 >> 3) + 0x7FFF8000);
  if ( v21 && v21 <= 3 )
  {
LABEL_74:
    __asan_report_load4(v20);
    goto LABEL_75;
  }
  if ( *(_DWORD *)v20 != 6 )
  {
    if ( !*(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    {
      v22 = *(_QWORD **)v4;
      if ( !*(_BYTE *)((*(_QWORD *)v4 >> 3) + 0x7FFF8000LL) )
      {
        *(_QWORD *)&conn_ptr.is_init_ = *v22;
        v23 = (__int64)(v22 + 1);
        if ( !*(_BYTE *)(((unsigned __int64)(v22 + 1) >> 3) + 0x7FFF8000) )
        {
          v24 = v22[1];
          *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 = v24;
          if ( !v24 )
            goto LABEL_49;
          v25 = v24 + 8;
          if ( !&_pthread_key_create )
          {
LABEL_79:
            v12 = (const std::map<std::string,std::string> *)*(unsigned __int8 *)(((unsigned __int64)(v24 + 8) >> 3)
                                                                                + 0x7FFF8000);
            if ( (char)(((v24 + 8) & 7) + 3) >= (char)v12 && (_BYTE)v12 )
            {
              v27 = __asan_report_load4(v24 + 8);
LABEL_83:
              v14 = v27;
              if ( *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 )
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(*(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *const *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0);
              if ( v14 )
              {
                v14 = -1;
                goto LABEL_126;
              }
              if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
              {
                v33 = (__int64 *)v4;
                __asan_report_load8(v4);
              }
              else
              {
                v33 = *(__int64 **)v4;
                if ( !*(_BYTE *)((*(_QWORD *)v4 >> 3) + 0x7FFF8000LL) )
                {
                  v60 = *v33;
                  v34 = (__int64)(v33 + 1);
                  if ( !*(_BYTE *)(((unsigned __int64)(v33 + 1) >> 3) + 0x7FFF8000) )
                  {
                    v35 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v33[1];
                    v61 = v35;
                    if ( !v35 )
                      goto LABEL_95;
                    p_M_use_count = (unsigned __int64)&v35->_M_use_count;
                    if ( !&_pthread_key_create )
                    {
LABEL_100:
                      v39 = *(_BYTE *)(((unsigned __int64)&v35->_M_use_count >> 3) + 0x7FFF8000);
                      if ( (char)((((_BYTE)v35 + 8) & 7) + 3) >= v39 && v39 )
                      {
                        __asan_report_load4(&v35->_M_use_count);
LABEL_104:
                        v40 = *(_QWORD *)&conn_ptr.is_init_;
                        v41 = *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0;
                        *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 = 0LL;
                        *(_QWORD *)&conn_ptr.is_init_ = 0LL;
                        *(_QWORD *)(p_M_node_count + 32) = v40;
                        v42 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_M_node_count + 40);
                        *(_QWORD *)(p_M_node_count + 40) = v41;
                        if ( v42 )
                          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v42);
                        if ( *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 )
                          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(*(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *const *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0);
                        if ( v61 )
                          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v61);
                        if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
                        {
                          v43 = v4;
                          __asan_report_load8(v4);
                        }
                        else
                        {
                          v43 = *(_QWORD *)v4 + 16LL;
                          v44 = *(unsigned __int8 *)((v43 >> 3) + 0x7FFF8000);
                          if ( (v44 & 0x80u) == 0LL )
                          {
                            *(_BYTE *)(*(_QWORD *)v4 + 16LL) = 0;
                            v43 = *(_QWORD *)(p_M_node_count + 32);
                            if ( !v43 )
                              goto LABEL_118;
                            v45 = *(_BYTE *)((v43 >> 3) + 0x7FFF8000);
                            if ( !v45 || v45 > 3 )
                            {
                              if ( *(_DWORD *)v43 == 2 )
                              {
                                v46 = v43 + 48;
                                if ( !*(_BYTE *)(((v43 + 48) >> 3) + 0x7FFF8000) )
                                {
                                  if ( *(_QWORD *)(v43 + 48) )
                                    goto LABEL_126;
                                  goto LABEL_118;
                                }
LABEL_122:
                                __asan_report_load8(v46);
                                goto LABEL_123;
                              }
LABEL_118:
                              common::milog::MiLogStream::MiLogStream(
                                (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "src/redis_mgr.cpp",
                                "cmdMsetWithTran",
                                2481);
LABEL_123:
                              tran_ptr = (const common::midb::GetAndSetTranPtr *)"do EXEC failed";
                              common::milog::MiLogStream::operator()(
                                (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
                                "do EXEC failed");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
                              v14 = -1;
                              goto LABEL_126;
                            }
LABEL_121:
                            v46 = __asan_report_load4(v43);
                            goto LABEL_122;
                          }
                        }
                        __asan_report_store1(v43, tran_ptr, v44, v38);
                        goto LABEL_121;
                      }
                      ++v35->_M_use_count;
LABEL_95:
                      tran_ptr = (const common::midb::GetAndSetTranPtr *)this;
                      common::midb::RedisMgr::cmdExecTrans(
                        &conn_ptr,
                        (common::midb::RedisConnPtr)__PAIR128__(&v60, (unsigned __int64)this));
                      goto LABEL_104;
                    }
                    v37 = *(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000);
                    if ( (char)((p_M_use_count & 7) + 3) < v37 || !v37 )
                    {
                      _InterlockedAdd((volatile signed __int32 *)p_M_use_count, 1u);
                      goto LABEL_95;
                    }
LABEL_99:
                    v35 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(
                                                                                 p_M_use_count,
                                                                                 tran_ptr);
                    goto LABEL_100;
                  }
LABEL_98:
                  p_M_use_count = v34;
                  __asan_report_load8(v34);
                  goto LABEL_99;
                }
              }
              v34 = __asan_report_load8(v33);
              goto LABEL_98;
            }
            ++*(_DWORD *)(v24 + 8);
LABEL_49:
            tran_ptr = (const common::midb::GetAndSetTranPtr *)&conn_ptr;
            v27 = common::midb::RedisMgr::cmdMset(
                    this,
                    (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key_value_map, &conn_ptr),
                    v12);
            goto LABEL_83;
          }
          v26 = *(_BYTE *)((v25 >> 3) + 0x7FFF8000);
          if ( (char)((v25 & 7) + 3) < v26 || !v26 )
          {
            _InterlockedAdd((volatile signed __int32 *)v25, 1u);
            goto LABEL_49;
          }
LABEL_78:
          v24 = __asan_report_store4(v25, tran_ptr);
          goto LABEL_79;
        }
LABEL_77:
        v25 = v23;
        __asan_report_load8(v23);
        goto LABEL_78;
      }
LABEL_76:
      v23 = __asan_report_load8(v22);
      goto LABEL_77;
    }
LABEL_75:
    v22 = (_QWORD *)v4;
    __asan_report_load8(v4);
    goto LABEL_76;
  }
  v14 = -1;
LABEL_126:
  v47 = *(_QWORD *)(p_M_node_count + 40);
  if ( !v47 )
    goto LABEL_132;
  v48 = (volatile signed __int32 *)(v47 + 8);
  if ( &_pthread_key_create )
  {
    v49 = *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v48 & 7) + 3) < v49 || !v49 )
    {
      v50 = _InterlockedExchangeAdd(v48, 0xFFFFFFFF);
      goto LABEL_131;
    }
    __asan_report_store4(v48, tran_ptr);
  }
  v52 = *(_BYTE *)(((v47 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v47 + 8) & 7) + 3) >= v52 && v52 )
  {
    __asan_report_load4(v47 + 8);
    goto LABEL_140;
  }
  v50 = *(_DWORD *)(v47 + 8);
  *(_DWORD *)(v47 + 8) = v50 - 1;
LABEL_131:
  if ( v50 != 1 )
    goto LABEL_132;
LABEL_140:
  if ( *(_BYTE *)((v47 >> 3) + 0x7FFF8000) )
  {
    v53 = v47;
    __asan_report_load8(v47);
    goto LABEL_151;
  }
  v53 = *(_QWORD *)v47 + 16LL;
  if ( *(_BYTE *)((v53 >> 3) + 0x7FFF8000) )
  {
LABEL_151:
    __asan_report_load8(v53);
    goto LABEL_152;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v47 + 16LL))(v47);
  v53 = v47 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_153;
  v54 = *(_BYTE *)((v53 >> 3) + 0x7FFF8000);
  if ( (char)((v53 & 7) + 3) < v54 || !v54 )
  {
    v55 = _InterlockedExchangeAdd((volatile signed __int32 *)v53, 0xFFFFFFFF);
    goto LABEL_146;
  }
LABEL_152:
  __asan_report_store4(v53, tran_ptr);
LABEL_153:
  v57 = *(_BYTE *)(((v47 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v47 + 12) & 7) + 3) >= v57 && v57 )
  {
    __asan_report_load4(v47 + 12);
LABEL_157:
    v56 = v47;
    __asan_report_load8(v47);
LABEL_158:
    v58 = (struct _Unwind_Exception *)__asan_report_load8(v56);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    __asan_handle_no_return(&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    _Unwind_Resume(v58);
  }
  v55 = *(_DWORD *)(v47 + 12);
  *(_DWORD *)(v47 + 12) = v55 - 1;
LABEL_146:
  if ( v55 != 1 )
    goto LABEL_132;
  if ( *(_BYTE *)((v47 >> 3) + 0x7FFF8000) )
    goto LABEL_157;
  v56 = *(_QWORD *)v47 + 24LL;
  if ( *(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
    goto LABEL_158;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v47 + 24LL))(v47);
LABEL_132:
  if ( &conn_ptr.pool_ptr_map_._M_t._M_impl._M_node_count == (std::size_t *)p_M_node_count )
  {
    *(_QWORD *)((p_M_node_count >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_node_count = 1172321806LL;
    *(_QWORD *)((p_M_node_count >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v14;
};

// Line 2490: range 000000000CA7FA58-000000000CA80487
int32_t __fastcall common::midb::RedisMgr::cmdDelWithTran(
        common::midb::RedisMgr *const this,
        const common::midb::GetAndSetTranPtr *tran_ptr,
        const std::string *key)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 p_M_node_count; // rbx
  unsigned __int64 v6; // r15
  std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  __int64 p_M_refcount; // rax
  __int64 M_pi; // rax
  unsigned __int64 v10; // rdi
  char v11; // dl
  const std::string *v12; // rcx
  __int64 v13; // rax
  int32_t v14; // r14d
  char v15; // cl
  unsigned __int64 v16; // r14
  volatile signed __int32 *v17; // rdi
  char v18; // dl
  signed __int32 v19; // eax
  unsigned __int64 v20; // rdi
  char v21; // al
  _QWORD *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rdi
  char v26; // dl
  int32_t v27; // eax
  char v28; // dl
  unsigned __int64 v29; // rdi
  char v30; // dl
  signed __int32 v31; // eax
  char v32; // dl
  __int64 *v33; // rdi
  __int64 v34; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v35; // rax
  unsigned __int64 p_M_use_count; // rdi
  char v37; // dl
  __int64 v38; // rcx
  char v39; // cl
  std::size_t v40; // rdx
  std::size_t v41; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v42; // rdi
  unsigned __int64 v43; // rdi
  __int64 v44; // rdx
  char v45; // al
  __int64 v46; // rax
  unsigned __int64 v47; // rbp
  volatile signed __int32 *v48; // rdi
  char v49; // dl
  signed __int32 v50; // eax
  char v52; // dl
  unsigned __int64 v53; // rdi
  char v54; // dl
  signed __int32 v55; // eax
  unsigned __int64 v56; // rdi
  char v57; // dl
  struct _Unwind_Exception *v58; // rbx
  __int64 v60; // [rsp+10h] [rbp-B8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v61; // [rsp+18h] [rbp-B0h]
  common::midb::RedisMgr conn_ptr; // [rsp+20h] [rbp-A8h] BYREF

  v4 = (unsigned __int64)tran_ptr;
  p_M_node_count = (unsigned __int64)&conn_ptr.pool_ptr_map_._M_t._M_impl._M_node_count;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_0(64LL);
    if ( v13 )
      p_M_node_count = v13;
  }
  *(_QWORD *)p_M_node_count = 1102416563LL;
  *(_QWORD *)(p_M_node_count + 8) = "1 32 16 14 reply_ptr:2512";
  *(_QWORD *)(p_M_node_count + 16) = common::midb::RedisMgr::cmdDelWithTran;
  v6 = p_M_node_count >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)tran_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(tran_ptr);
    goto LABEL_19;
  }
  M_ptr = tran_ptr->_M_ptr;
  if ( !tran_ptr->_M_ptr )
  {
LABEL_19:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdDelWithTran",
      2494);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      "tran_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    v14 = -1;
    goto LABEL_132;
  }
  if ( *(char *)(((unsigned __int64)&M_ptr->is_need_unwatch_ >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(&M_ptr->is_need_unwatch_, tran_ptr, &M_ptr->is_need_unwatch_);
    goto LABEL_21;
  }
  if ( !M_ptr->is_need_unwatch_ )
  {
LABEL_21:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdDelWithTran",
      2501);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      "tran is end, can not re set on one transaction");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    v14 = -1;
    goto LABEL_132;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(M_ptr);
    goto LABEL_23;
  }
  if ( !M_ptr->conn_ptr_._M_ptr )
  {
LABEL_23:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdDelWithTran",
      2507);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<16384> > *const)conn_ptr.pool_ptr_map_._M_t._M_impl._M_header._M_right,
      "conn in tran is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    v14 = -1;
    goto LABEL_132;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
    p_M_refcount = __asan_report_load8(M_ptr);
    goto LABEL_25;
  }
  *(_QWORD *)&conn_ptr.is_init_ = M_ptr->conn_ptr_._M_ptr;
  p_M_refcount = (__int64)&M_ptr->conn_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&M_ptr->conn_ptr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    v10 = p_M_refcount;
    __asan_report_load8(p_M_refcount);
LABEL_26:
    M_pi = __asan_report_store4(v10, tran_ptr);
    goto LABEL_27;
  }
  M_pi = (__int64)M_ptr->conn_ptr_._M_refcount._M_pi;
  *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 = M_pi;
  if ( !M_pi )
  {
LABEL_15:
    tran_ptr = (const common::midb::GetAndSetTranPtr *)this;
    common::midb::RedisMgr::cmdBeginTrans(
      (common::midb::RedisMgr *const)(p_M_node_count + 32),
      (common::midb::RedisConnPtr)__PAIR128__(&conn_ptr, (unsigned __int64)this));
    goto LABEL_31;
  }
  v10 = M_pi + 8;
  if ( &_pthread_key_create )
  {
    v11 = *(_BYTE *)((v10 >> 3) + 0x7FFF8000);
    if ( (char)((v10 & 7) + 3) < v11 || !v11 )
    {
      _InterlockedAdd((volatile signed __int32 *)v10, 1u);
      goto LABEL_15;
    }
    goto LABEL_26;
  }
LABEL_27:
  v15 = *(_BYTE *)(((unsigned __int64)(M_pi + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((M_pi + 8) & 7) + 3) < v15 || !v15 )
  {
    ++*(_DWORD *)(M_pi + 8);
    goto LABEL_15;
  }
  __asan_report_load4(M_pi + 8);
LABEL_31:
  v16 = *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0;
  if ( !*(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 )
    goto LABEL_37;
  v17 = (volatile signed __int32 *)(*(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 + 8LL);
  if ( &_pthread_key_create )
  {
    v18 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v17 & 7) + 3) < v18 || !v18 )
    {
      v19 = _InterlockedExchangeAdd(v17, 0xFFFFFFFF);
      goto LABEL_36;
    }
    __asan_report_store4(v17, tran_ptr);
  }
  v28 = *(_BYTE *)(((v16 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v16 + 8) & 7) + 3) >= v28 && v28 )
  {
    __asan_report_load4(v16 + 8);
    goto LABEL_55;
  }
  v19 = *(_DWORD *)(v16 + 8);
  *(_DWORD *)(v16 + 8) = v19 - 1;
LABEL_36:
  if ( v19 != 1 )
    goto LABEL_37;
LABEL_55:
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
  {
    v29 = v16;
    __asan_report_load8(v16);
    goto LABEL_66;
  }
  v29 = *(_QWORD *)v16 + 16LL;
  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_load8(v29);
    goto LABEL_67;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v16 + 16LL))(v16);
  v29 = v16 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_68;
  v30 = *(_BYTE *)((v29 >> 3) + 0x7FFF8000);
  if ( (char)((v29 & 7) + 3) < v30 || !v30 )
  {
    v31 = _InterlockedExchangeAdd((volatile signed __int32 *)v29, 0xFFFFFFFF);
    goto LABEL_61;
  }
LABEL_67:
  __asan_report_store4(v29, tran_ptr);
LABEL_68:
  v32 = *(_BYTE *)(((v16 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v16 + 12) & 7) + 3) >= v32 && v32 )
  {
    __asan_report_load4(v16 + 12);
LABEL_72:
    v20 = v16;
    __asan_report_load8(v16);
    goto LABEL_73;
  }
  v31 = *(_DWORD *)(v16 + 12);
  *(_DWORD *)(v16 + 12) = v31 - 1;
LABEL_61:
  if ( v31 != 1 )
    goto LABEL_37;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
    goto LABEL_72;
  v20 = *(_QWORD *)v16 + 24LL;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    __asan_report_load8(v20);
    goto LABEL_74;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v16 + 24LL))(v16);
LABEL_37:
  v20 = *(_QWORD *)(p_M_node_count + 32);
  if ( !v20 )
  {
    v14 = -1;
    goto LABEL_126;
  }
  v21 = *(_BYTE *)((v20 >> 3) + 0x7FFF8000);
  if ( v21 && v21 <= 3 )
  {
LABEL_74:
    __asan_report_load4(v20);
    goto LABEL_75;
  }
  if ( *(_DWORD *)v20 != 6 )
  {
    if ( !*(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    {
      v22 = *(_QWORD **)v4;
      if ( !*(_BYTE *)((*(_QWORD *)v4 >> 3) + 0x7FFF8000LL) )
      {
        *(_QWORD *)&conn_ptr.is_init_ = *v22;
        v23 = (__int64)(v22 + 1);
        if ( !*(_BYTE *)(((unsigned __int64)(v22 + 1) >> 3) + 0x7FFF8000) )
        {
          v24 = v22[1];
          *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 = v24;
          if ( !v24 )
            goto LABEL_49;
          v25 = v24 + 8;
          if ( !&_pthread_key_create )
          {
LABEL_79:
            v12 = (const std::string *)*(unsigned __int8 *)(((unsigned __int64)(v24 + 8) >> 3) + 0x7FFF8000);
            if ( (char)(((v24 + 8) & 7) + 3) >= (char)v12 && (_BYTE)v12 )
            {
              v27 = __asan_report_load4(v24 + 8);
LABEL_83:
              v14 = v27;
              if ( *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 )
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(*(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *const *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0);
              if ( v14 )
              {
                v14 = -1;
                goto LABEL_126;
              }
              if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
              {
                v33 = (__int64 *)v4;
                __asan_report_load8(v4);
              }
              else
              {
                v33 = *(__int64 **)v4;
                if ( !*(_BYTE *)((*(_QWORD *)v4 >> 3) + 0x7FFF8000LL) )
                {
                  v60 = *v33;
                  v34 = (__int64)(v33 + 1);
                  if ( !*(_BYTE *)(((unsigned __int64)(v33 + 1) >> 3) + 0x7FFF8000) )
                  {
                    v35 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v33[1];
                    v61 = v35;
                    if ( !v35 )
                      goto LABEL_95;
                    p_M_use_count = (unsigned __int64)&v35->_M_use_count;
                    if ( !&_pthread_key_create )
                    {
LABEL_100:
                      v39 = *(_BYTE *)(((unsigned __int64)&v35->_M_use_count >> 3) + 0x7FFF8000);
                      if ( (char)((((_BYTE)v35 + 8) & 7) + 3) >= v39 && v39 )
                      {
                        __asan_report_load4(&v35->_M_use_count);
LABEL_104:
                        v40 = *(_QWORD *)&conn_ptr.is_init_;
                        v41 = *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0;
                        *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 = 0LL;
                        *(_QWORD *)&conn_ptr.is_init_ = 0LL;
                        *(_QWORD *)(p_M_node_count + 32) = v40;
                        v42 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_M_node_count + 40);
                        *(_QWORD *)(p_M_node_count + 40) = v41;
                        if ( v42 )
                          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v42);
                        if ( *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 )
                          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(*(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *const *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0);
                        if ( v61 )
                          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v61);
                        if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
                        {
                          v43 = v4;
                          __asan_report_load8(v4);
                        }
                        else
                        {
                          v43 = *(_QWORD *)v4 + 16LL;
                          v44 = *(unsigned __int8 *)((v43 >> 3) + 0x7FFF8000);
                          if ( (v44 & 0x80u) == 0LL )
                          {
                            *(_BYTE *)(*(_QWORD *)v4 + 16LL) = 0;
                            v43 = *(_QWORD *)(p_M_node_count + 32);
                            if ( !v43 )
                              goto LABEL_118;
                            v45 = *(_BYTE *)((v43 >> 3) + 0x7FFF8000);
                            if ( !v45 || v45 > 3 )
                            {
                              if ( *(_DWORD *)v43 == 2 )
                              {
                                v46 = v43 + 48;
                                if ( !*(_BYTE *)(((v43 + 48) >> 3) + 0x7FFF8000) )
                                {
                                  if ( *(_QWORD *)(v43 + 48) )
                                    goto LABEL_126;
                                  goto LABEL_118;
                                }
LABEL_122:
                                __asan_report_load8(v46);
                                goto LABEL_123;
                              }
LABEL_118:
                              common::milog::MiLogStream::MiLogStream(
                                (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "src/redis_mgr.cpp",
                                "cmdDelWithTran",
                                2531);
LABEL_123:
                              tran_ptr = (const common::midb::GetAndSetTranPtr *)"do EXEC failed";
                              common::milog::MiLogStream::operator()(
                                (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
                                "do EXEC failed");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
                              v14 = -1;
                              goto LABEL_126;
                            }
LABEL_121:
                            v46 = __asan_report_load4(v43);
                            goto LABEL_122;
                          }
                        }
                        __asan_report_store1(v43, tran_ptr, v44, v38);
                        goto LABEL_121;
                      }
                      ++v35->_M_use_count;
LABEL_95:
                      tran_ptr = (const common::midb::GetAndSetTranPtr *)this;
                      common::midb::RedisMgr::cmdExecTrans(
                        &conn_ptr,
                        (common::midb::RedisConnPtr)__PAIR128__(&v60, (unsigned __int64)this));
                      goto LABEL_104;
                    }
                    v37 = *(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000);
                    if ( (char)((p_M_use_count & 7) + 3) < v37 || !v37 )
                    {
                      _InterlockedAdd((volatile signed __int32 *)p_M_use_count, 1u);
                      goto LABEL_95;
                    }
LABEL_99:
                    v35 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(
                                                                                 p_M_use_count,
                                                                                 tran_ptr);
                    goto LABEL_100;
                  }
LABEL_98:
                  p_M_use_count = v34;
                  __asan_report_load8(v34);
                  goto LABEL_99;
                }
              }
              v34 = __asan_report_load8(v33);
              goto LABEL_98;
            }
            ++*(_DWORD *)(v24 + 8);
LABEL_49:
            tran_ptr = (const common::midb::GetAndSetTranPtr *)&conn_ptr;
            v27 = common::midb::RedisMgr::cmdDel(
                    this,
                    (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &conn_ptr),
                    v12);
            goto LABEL_83;
          }
          v26 = *(_BYTE *)((v25 >> 3) + 0x7FFF8000);
          if ( (char)((v25 & 7) + 3) < v26 || !v26 )
          {
            _InterlockedAdd((volatile signed __int32 *)v25, 1u);
            goto LABEL_49;
          }
LABEL_78:
          v24 = __asan_report_store4(v25, tran_ptr);
          goto LABEL_79;
        }
LABEL_77:
        v25 = v23;
        __asan_report_load8(v23);
        goto LABEL_78;
      }
LABEL_76:
      v23 = __asan_report_load8(v22);
      goto LABEL_77;
    }
LABEL_75:
    v22 = (_QWORD *)v4;
    __asan_report_load8(v4);
    goto LABEL_76;
  }
  v14 = -1;
LABEL_126:
  v47 = *(_QWORD *)(p_M_node_count + 40);
  if ( !v47 )
    goto LABEL_132;
  v48 = (volatile signed __int32 *)(v47 + 8);
  if ( &_pthread_key_create )
  {
    v49 = *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v48 & 7) + 3) < v49 || !v49 )
    {
      v50 = _InterlockedExchangeAdd(v48, 0xFFFFFFFF);
      goto LABEL_131;
    }
    __asan_report_store4(v48, tran_ptr);
  }
  v52 = *(_BYTE *)(((v47 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v47 + 8) & 7) + 3) >= v52 && v52 )
  {
    __asan_report_load4(v47 + 8);
    goto LABEL_140;
  }
  v50 = *(_DWORD *)(v47 + 8);
  *(_DWORD *)(v47 + 8) = v50 - 1;
LABEL_131:
  if ( v50 != 1 )
    goto LABEL_132;
LABEL_140:
  if ( *(_BYTE *)((v47 >> 3) + 0x7FFF8000) )
  {
    v53 = v47;
    __asan_report_load8(v47);
    goto LABEL_151;
  }
  v53 = *(_QWORD *)v47 + 16LL;
  if ( *(_BYTE *)((v53 >> 3) + 0x7FFF8000) )
  {
LABEL_151:
    __asan_report_load8(v53);
    goto LABEL_152;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v47 + 16LL))(v47);
  v53 = v47 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_153;
  v54 = *(_BYTE *)((v53 >> 3) + 0x7FFF8000);
  if ( (char)((v53 & 7) + 3) < v54 || !v54 )
  {
    v55 = _InterlockedExchangeAdd((volatile signed __int32 *)v53, 0xFFFFFFFF);
    goto LABEL_146;
  }
LABEL_152:
  __asan_report_store4(v53, tran_ptr);
LABEL_153:
  v57 = *(_BYTE *)(((v47 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v47 + 12) & 7) + 3) >= v57 && v57 )
  {
    __asan_report_load4(v47 + 12);
LABEL_157:
    v56 = v47;
    __asan_report_load8(v47);
LABEL_158:
    v58 = (struct _Unwind_Exception *)__asan_report_load8(v56);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    __asan_handle_no_return(&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    _Unwind_Resume(v58);
  }
  v55 = *(_DWORD *)(v47 + 12);
  *(_DWORD *)(v47 + 12) = v55 - 1;
LABEL_146:
  if ( v55 != 1 )
    goto LABEL_132;
  if ( *(_BYTE *)((v47 >> 3) + 0x7FFF8000) )
    goto LABEL_157;
  v56 = *(_QWORD *)v47 + 24LL;
  if ( *(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
    goto LABEL_158;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v47 + 24LL))(v47);
LABEL_132:
  if ( &conn_ptr.pool_ptr_map_._M_t._M_impl._M_node_count == (std::size_t *)p_M_node_count )
  {
    *(_QWORD *)((p_M_node_count >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_node_count = 1172321806LL;
    *(_QWORD *)((p_M_node_count >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v14;
};

// Line 2538: range 000000000CA99E30-000000000CA9A990
int32_t __fastcall common::midb::RedisMgr::cmdDelWithTran(
        common::midb::RedisMgr *const this,
        const common::midb::GetAndSetTranPtr *tran_ptr,
        const std::set<std::string> *key_set)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v5; // rbx
  _DWORD *v6; // r12
  std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  __int64 p_M_refcount; // rax
  __int64 M_pi; // rax
  unsigned __int64 v10; // rdi
  char v11; // dl
  __int64 v12; // rax
  int32_t v13; // r14d
  char v14; // cl
  std::size_t M_node_count; // r15
  std::size_t v16; // rdi
  char v17; // dl
  signed __int32 v18; // eax
  unsigned __int64 p_M_parent; // rdi
  char v20; // al
  std::_Rb_tree_node<std::string > *v21; // rax
  char v22; // dl
  std::size_t v23; // rdi
  char v24; // dl
  signed __int32 v25; // eax
  char v26; // dl
  std::_Rb_tree_node<std::string > *i; // rdx
  std::_Rb_tree_node<std::string > *j; // rdx
  std::_Rb_tree_node<std::string > *v29; // rcx
  std::size_t *p_M_right; // rdi
  std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rdi
  char v35; // dl
  int32_t v36; // eax
  char v37; // cl
  std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rdi
  char v42; // dl
  __int64 v43; // rcx
  char v44; // cl
  std::_Rb_tree_node_base::_Base_ptr M_right; // rdx
  std::size_t v46; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v47; // rdi
  unsigned __int64 v48; // rdi
  __int64 v49; // rdx
  char v50; // al
  __int64 v51; // rax
  unsigned __int64 v52; // rbp
  volatile signed __int32 *v53; // rdi
  char v54; // dl
  signed __int32 v55; // eax
  char v57; // dl
  unsigned __int64 v58; // rdi
  char v59; // dl
  signed __int32 v60; // eax
  unsigned __int64 v61; // rdi
  char v62; // dl
  struct _Unwind_Exception *v63; // rbx
  std::set<std::string> conn_ptr; // [rsp+0h] [rbp-118h] BYREF
  common::milog::MiLogStream v65; // [rsp+30h] [rbp-E8h] BYREF
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::_Link_type __x[6]; // [rsp+50h] [rbp-C8h] BYREF
  char v67[152]; // [rsp+80h] [rbp-98h] BYREF

  *(_QWORD *)conn_ptr._M_t._M_impl.gap0 = this;
  v3 = (unsigned __int64)tran_ptr;
  v5 = (unsigned __int64)v67;
  *(_QWORD *)&conn_ptr._M_t._M_impl._M_header._M_color = v67;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_1(96LL);
    if ( v12 )
      v5 = v12;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 8 4 __an 64 16 14 reply_ptr:2560";
  *(_QWORD *)(v5 + 16) = common::midb::RedisMgr::cmdDelWithTran;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)tran_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(tran_ptr);
    goto LABEL_19;
  }
  M_ptr = tran_ptr->_M_ptr;
  if ( !tran_ptr->_M_ptr )
  {
LABEL_19:
    common::milog::MiLogStream::MiLogStream(
      &v65,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdDelWithTran",
      2542);
    common::milog::MiLogStream::operator()(&v65, "tran_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v65);
    v13 = -1;
    goto LABEL_149;
  }
  if ( *(char *)(((unsigned __int64)&M_ptr->is_need_unwatch_ >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(&M_ptr->is_need_unwatch_, tran_ptr, &M_ptr->is_need_unwatch_);
    goto LABEL_21;
  }
  if ( !M_ptr->is_need_unwatch_ )
  {
LABEL_21:
    common::milog::MiLogStream::MiLogStream(
      &v65,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdDelWithTran",
      2549);
    common::milog::MiLogStream::operator()(&v65, "tran is end, can not re set on one transaction");
    common::milog::MiLogStream::~MiLogStream(&v65);
    v13 = -1;
    goto LABEL_149;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(M_ptr);
    goto LABEL_23;
  }
  if ( !M_ptr->conn_ptr_._M_ptr )
  {
LABEL_23:
    common::milog::MiLogStream::MiLogStream(
      &v65,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdDelWithTran",
      2555);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v65.ostr_, "conn in tran is null");
    common::milog::MiLogStream::~MiLogStream(&v65);
    v13 = -1;
    goto LABEL_149;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
    p_M_refcount = __asan_report_load8(M_ptr);
    goto LABEL_25;
  }
  conn_ptr._M_t._M_impl._M_header._M_right = (std::_Rb_tree_node_base::_Base_ptr)M_ptr->conn_ptr_._M_ptr;
  p_M_refcount = (__int64)&M_ptr->conn_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&M_ptr->conn_ptr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    v10 = p_M_refcount;
    __asan_report_load8(p_M_refcount);
LABEL_26:
    M_pi = __asan_report_store4(v10, tran_ptr);
    goto LABEL_27;
  }
  M_pi = (__int64)M_ptr->conn_ptr_._M_refcount._M_pi;
  conn_ptr._M_t._M_impl._M_node_count = M_pi;
  if ( !M_pi )
  {
LABEL_15:
    tran_ptr = *(const common::midb::GetAndSetTranPtr **)conn_ptr._M_t._M_impl.gap0;
    common::midb::RedisMgr::cmdBeginTrans(
      (common::midb::RedisMgr *const)(v5 + 64),
      (common::midb::RedisConnPtr)__PAIR128__(
                                    (std::set<std::string> *)&conn_ptr._M_t._M_impl._M_header._M_right,
                                    *(unsigned __int64 *)conn_ptr._M_t._M_impl.gap0));
    goto LABEL_31;
  }
  v10 = M_pi + 8;
  if ( &_pthread_key_create )
  {
    v11 = *(_BYTE *)((v10 >> 3) + 0x7FFF8000);
    if ( (char)((v10 & 7) + 3) < v11 || !v11 )
    {
      _InterlockedAdd((volatile signed __int32 *)v10, 1u);
      goto LABEL_15;
    }
    goto LABEL_26;
  }
LABEL_27:
  v14 = *(_BYTE *)(((unsigned __int64)(M_pi + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((M_pi + 8) & 7) + 3) < v14 || !v14 )
  {
    ++*(_DWORD *)(M_pi + 8);
    goto LABEL_15;
  }
  __asan_report_load4(M_pi + 8);
LABEL_31:
  M_node_count = conn_ptr._M_t._M_impl._M_node_count;
  if ( !conn_ptr._M_t._M_impl._M_node_count )
    goto LABEL_37;
  v16 = conn_ptr._M_t._M_impl._M_node_count + 8;
  if ( &_pthread_key_create )
  {
    v17 = *(_BYTE *)((v16 >> 3) + 0x7FFF8000);
    if ( (char)((v16 & 7) + 3) < v17 || !v17 )
    {
      v18 = _InterlockedExchangeAdd((volatile signed __int32 *)v16, 0xFFFFFFFF);
      goto LABEL_36;
    }
    __asan_report_store4(v16, tran_ptr);
  }
  v22 = *(_BYTE *)(((M_node_count + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((M_node_count + 8) & 7) + 3) >= v22 && v22 )
  {
    __asan_report_load4(M_node_count + 8);
    goto LABEL_49;
  }
  v18 = *(_DWORD *)(M_node_count + 8);
  *(_DWORD *)(M_node_count + 8) = v18 - 1;
LABEL_36:
  if ( v18 != 1 )
    goto LABEL_37;
LABEL_49:
  if ( *(_BYTE *)((M_node_count >> 3) + 0x7FFF8000) )
  {
    v23 = M_node_count;
    __asan_report_load8(M_node_count);
    goto LABEL_60;
  }
  v23 = *(_QWORD *)M_node_count + 16LL;
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_load8(v23);
    goto LABEL_61;
  }
  (*(void (__fastcall **)(std::size_t))(*(_QWORD *)M_node_count + 16LL))(M_node_count);
  v23 = M_node_count + 12;
  if ( !&_pthread_key_create )
    goto LABEL_62;
  v24 = *(_BYTE *)((v23 >> 3) + 0x7FFF8000);
  if ( (char)((v23 & 7) + 3) < v24 || !v24 )
  {
    v25 = _InterlockedExchangeAdd((volatile signed __int32 *)v23, 0xFFFFFFFF);
    goto LABEL_55;
  }
LABEL_61:
  __asan_report_store4(v23, tran_ptr);
LABEL_62:
  v26 = *(_BYTE *)(((M_node_count + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((M_node_count + 12) & 7) + 3) >= v26 && v26 )
  {
    __asan_report_load4(M_node_count + 12);
LABEL_66:
    p_M_parent = M_node_count;
    __asan_report_load8(M_node_count);
    goto LABEL_67;
  }
  v25 = *(_DWORD *)(M_node_count + 12);
  *(_DWORD *)(M_node_count + 12) = v25 - 1;
LABEL_55:
  if ( v25 != 1 )
    goto LABEL_37;
  if ( *(_BYTE *)((M_node_count >> 3) + 0x7FFF8000) )
    goto LABEL_66;
  p_M_parent = *(_QWORD *)M_node_count + 24LL;
  if ( *(_BYTE *)((p_M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_load8(p_M_parent);
    goto LABEL_68;
  }
  (*(void (__fastcall **)(std::size_t))(*(_QWORD *)M_node_count + 24LL))(M_node_count);
LABEL_37:
  p_M_parent = *(_QWORD *)(v5 + 64);
  if ( !p_M_parent )
  {
    v13 = -1;
    goto LABEL_143;
  }
  v20 = *(_BYTE *)((p_M_parent >> 3) + 0x7FFF8000);
  if ( v20 && v20 <= 3 )
  {
LABEL_68:
    __asan_report_load4(p_M_parent);
    goto LABEL_69;
  }
  if ( *(_DWORD *)p_M_parent != 6 )
  {
    LODWORD(__x[1]) = 0;
    __x[2] = 0LL;
    __x[3] = (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::_Link_type)&__x[1];
    __x[4] = (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::_Link_type)&__x[1];
    __x[5] = 0LL;
    p_M_parent = (unsigned __int64)&key_set->_M_t._M_impl._M_header._M_parent;
    if ( !*(_BYTE *)(((unsigned __int64)&key_set->_M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
    {
      if ( !key_set->_M_t._M_impl._M_header._M_parent )
      {
LABEL_81:
        if ( !*(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        {
          v31 = *(std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type **)v3;
          if ( !*(_BYTE *)((*(_QWORD *)v3 >> 3) + 0x7FFF8000LL) )
          {
            conn_ptr._M_t._M_impl._M_header._M_right = (std::_Rb_tree_node_base::_Base_ptr)v31->conn_ptr_._M_ptr;
            v32 = (__int64)&v31->conn_ptr_._M_refcount;
            if ( !*(_BYTE *)(((unsigned __int64)&v31->conn_ptr_._M_refcount >> 3) + 0x7FFF8000) )
            {
              v33 = (__int64)v31->conn_ptr_._M_refcount._M_pi;
              conn_ptr._M_t._M_impl._M_node_count = v33;
              if ( !v33 )
                goto LABEL_89;
              v34 = v33 + 8;
              if ( !&_pthread_key_create )
              {
LABEL_96:
                v37 = *(_BYTE *)(((unsigned __int64)(v33 + 8) >> 3) + 0x7FFF8000);
                if ( (char)(((v33 + 8) & 7) + 3) >= v37 && v37 )
                {
                  v36 = __asan_report_load4(v33 + 8);
LABEL_100:
                  v13 = v36;
                  if ( conn_ptr._M_t._M_impl._M_node_count )
                    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release((std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *const)conn_ptr._M_t._M_impl._M_node_count);
                  tran_ptr = (const common::midb::GetAndSetTranPtr *)__x[2];
                  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
                    (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > > *const)__x,
                    __x[2]);
                  if ( v13 )
                  {
                    v13 = -1;
                    goto LABEL_143;
                  }
                  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                  {
                    v38 = (std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type *)v3;
                    __asan_report_load8(v3);
                  }
                  else
                  {
                    v38 = *(std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type **)v3;
                    if ( !*(_BYTE *)((*(_QWORD *)v3 >> 3) + 0x7FFF8000LL) )
                    {
                      conn_ptr._M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)v38->conn_ptr_._M_ptr;
                      v39 = (__int64)&v38->conn_ptr_._M_refcount;
                      if ( !*(_BYTE *)(((unsigned __int64)&v38->conn_ptr_._M_refcount >> 3) + 0x7FFF8000) )
                      {
                        v40 = (__int64)v38->conn_ptr_._M_refcount._M_pi;
                        conn_ptr._M_t._M_impl._M_header._M_left = (std::_Rb_tree_node_base::_Base_ptr)v40;
                        if ( !v40 )
                          goto LABEL_112;
                        v41 = v40 + 8;
                        if ( !&_pthread_key_create )
                        {
LABEL_117:
                          v44 = *(_BYTE *)(((unsigned __int64)(v40 + 8) >> 3) + 0x7FFF8000);
                          if ( (char)(((v40 + 8) & 7) + 3) >= v44 && v44 )
                          {
                            __asan_report_load4(v40 + 8);
LABEL_121:
                            M_right = conn_ptr._M_t._M_impl._M_header._M_right;
                            v46 = conn_ptr._M_t._M_impl._M_node_count;
                            conn_ptr._M_t._M_impl._M_node_count = 0LL;
                            conn_ptr._M_t._M_impl._M_header._M_right = 0LL;
                            *(_QWORD *)(v5 + 64) = M_right;
                            v47 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v5 + 72);
                            *(_QWORD *)(v5 + 72) = v46;
                            if ( v47 )
                              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v47);
                            if ( conn_ptr._M_t._M_impl._M_node_count )
                              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release((std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *const)conn_ptr._M_t._M_impl._M_node_count);
                            if ( conn_ptr._M_t._M_impl._M_header._M_left )
                              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release((std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *const)conn_ptr._M_t._M_impl._M_header._M_left);
                            if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                            {
                              v48 = v3;
                              __asan_report_load8(v3);
                            }
                            else
                            {
                              v48 = *(_QWORD *)v3 + 16LL;
                              v49 = *(unsigned __int8 *)((v48 >> 3) + 0x7FFF8000);
                              if ( (v49 & 0x80u) == 0LL )
                              {
                                *(_BYTE *)(*(_QWORD *)v3 + 16LL) = 0;
                                v48 = *(_QWORD *)(v5 + 64);
                                if ( !v48 )
                                  goto LABEL_135;
                                v50 = *(_BYTE *)((v48 >> 3) + 0x7FFF8000);
                                if ( !v50 || v50 > 3 )
                                {
                                  if ( *(_DWORD *)v48 == 2 )
                                  {
                                    v51 = v48 + 48;
                                    if ( !*(_BYTE *)(((v48 + 48) >> 3) + 0x7FFF8000) )
                                    {
                                      if ( *(_QWORD *)(v48 + 48) )
                                        goto LABEL_143;
                                      goto LABEL_135;
                                    }
LABEL_139:
                                    __asan_report_load8(v51);
                                    goto LABEL_140;
                                  }
LABEL_135:
                                  common::milog::MiLogStream::MiLogStream(
                                    &v65,
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    3u,
                                    "src/redis_mgr.cpp",
                                    "cmdDelWithTran",
                                    2579);
LABEL_140:
                                  tran_ptr = (const common::midb::GetAndSetTranPtr *)"do EXEC failed";
                                  common::milog::MiLogStream::operator()(&v65, "do EXEC failed");
                                  common::milog::MiLogStream::~MiLogStream(&v65);
                                  v13 = -1;
                                  goto LABEL_143;
                                }
LABEL_138:
                                v51 = __asan_report_load4(v48);
                                goto LABEL_139;
                              }
                            }
                            __asan_report_store1(v48, tran_ptr, v49, v43);
                            goto LABEL_138;
                          }
                          ++*(_DWORD *)(v40 + 8);
LABEL_112:
                          tran_ptr = *(const common::midb::GetAndSetTranPtr **)conn_ptr._M_t._M_impl.gap0;
                          common::midb::RedisMgr::cmdExecTrans(
                            (common::midb::RedisMgr *const)&conn_ptr._M_t._M_impl._M_header._M_right,
                            (common::midb::RedisConnPtr)__PAIR128__(
                                                          (std::set<std::string> *)&conn_ptr._M_t._M_impl._M_header._M_parent,
                                                          *(unsigned __int64 *)conn_ptr._M_t._M_impl.gap0));
                          goto LABEL_121;
                        }
                        v42 = *(_BYTE *)((v41 >> 3) + 0x7FFF8000);
                        if ( (char)((v41 & 7) + 3) < v42 || !v42 )
                        {
                          _InterlockedAdd((volatile signed __int32 *)v41, 1u);
                          goto LABEL_112;
                        }
LABEL_116:
                        v40 = __asan_report_store4(v41, tran_ptr);
                        goto LABEL_117;
                      }
LABEL_115:
                      v41 = v39;
                      __asan_report_load8(v39);
                      goto LABEL_116;
                    }
                  }
                  v39 = __asan_report_load8(v38);
                  goto LABEL_115;
                }
                ++*(_DWORD *)(v33 + 8);
LABEL_89:
                v36 = common::midb::RedisMgr::cmdDel(
                        *(common::midb::RedisMgr *const *)conn_ptr._M_t._M_impl.gap0,
                        (common::midb::RedisConnPtr)__PAIR128__(
                                                      __x,
                                                      (std::set<std::string> *)&conn_ptr._M_t._M_impl._M_header._M_right),
                        conn_ptr);
                goto LABEL_100;
              }
              v35 = *(_BYTE *)((v34 >> 3) + 0x7FFF8000);
              if ( (char)((v34 & 7) + 3) < v35 || !v35 )
              {
                _InterlockedAdd((volatile signed __int32 *)v34, 1u);
                goto LABEL_89;
              }
LABEL_95:
              v33 = __asan_report_store4(v34, tran_ptr);
              goto LABEL_96;
            }
LABEL_94:
            v34 = v32;
            __asan_report_load8(v32);
            goto LABEL_95;
          }
LABEL_93:
          v32 = __asan_report_load8(v31);
          goto LABEL_94;
        }
LABEL_92:
        v31 = (std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type *)v3;
        __asan_report_load8(v3);
        goto LABEL_93;
      }
      *(_QWORD *)(v5 + 32) = __x;
      tran_ptr = (const common::midb::GetAndSetTranPtr *)key_set->_M_t._M_impl._M_header._M_parent;
      v21 = std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_copy<std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_Alloc_node>(
              (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > > *const)__x,
              (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::_Const_Link_type)tran_ptr,
              (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::_Base_ptr)&__x[1],
              (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::_Alloc_node *)(v5 + 32));
LABEL_70:
      for ( i = v21; ; i = (std::_Rb_tree_node<std::string > *)i->_M_left )
      {
        if ( *(_BYTE *)(((unsigned __int64)&i->_M_left >> 3) + 0x7FFF8000) )
        {
          v21 = (std::_Rb_tree_node<std::string > *)__asan_report_load8(&i->_M_left);
          goto LABEL_76;
        }
        if ( !i->_M_left )
          break;
      }
      __x[3] = i;
      for ( j = v21; ; j = v29 )
      {
        p_M_right = (std::size_t *)&j->_M_right;
        if ( *(_BYTE *)(((unsigned __int64)&j->_M_right >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_M_right);
          goto LABEL_91;
        }
        v29 = (std::_Rb_tree_node<std::string > *)j->_M_right;
        if ( !v29 )
          break;
LABEL_76:
        ;
      }
      __x[4] = j;
      p_M_right = &key_set->_M_t._M_impl._M_node_count;
      if ( !*(_BYTE *)(((unsigned __int64)&key_set->_M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
      {
        __x[5] = (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::_Link_type)key_set->_M_t._M_impl._M_node_count;
        __x[2] = v21;
        goto LABEL_81;
      }
LABEL_91:
      __asan_report_load8(p_M_right);
      goto LABEL_92;
    }
LABEL_69:
    v21 = (std::_Rb_tree_node<std::string > *)__asan_report_load8(p_M_parent);
    goto LABEL_70;
  }
  v13 = -1;
LABEL_143:
  v52 = *(_QWORD *)(v5 + 72);
  if ( !v52 )
    goto LABEL_149;
  v53 = (volatile signed __int32 *)(v52 + 8);
  if ( &_pthread_key_create )
  {
    v54 = *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v53 & 7) + 3) < v54 || !v54 )
    {
      v55 = _InterlockedExchangeAdd(v53, 0xFFFFFFFF);
      goto LABEL_148;
    }
    __asan_report_store4(v53, tran_ptr);
  }
  v57 = *(_BYTE *)(((v52 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v52 + 8) & 7) + 3) >= v57 && v57 )
  {
    __asan_report_load4(v52 + 8);
    goto LABEL_157;
  }
  v55 = *(_DWORD *)(v52 + 8);
  *(_DWORD *)(v52 + 8) = v55 - 1;
LABEL_148:
  if ( v55 != 1 )
    goto LABEL_149;
LABEL_157:
  if ( *(_BYTE *)((v52 >> 3) + 0x7FFF8000) )
  {
    v58 = v52;
    __asan_report_load8(v52);
    goto LABEL_168;
  }
  v58 = *(_QWORD *)v52 + 16LL;
  if ( *(_BYTE *)((v58 >> 3) + 0x7FFF8000) )
  {
LABEL_168:
    __asan_report_load8(v58);
    goto LABEL_169;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v52 + 16LL))(v52);
  v58 = v52 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_170;
  v59 = *(_BYTE *)((v58 >> 3) + 0x7FFF8000);
  if ( (char)((v58 & 7) + 3) < v59 || !v59 )
  {
    v60 = _InterlockedExchangeAdd((volatile signed __int32 *)v58, 0xFFFFFFFF);
    goto LABEL_163;
  }
LABEL_169:
  __asan_report_store4(v58, tran_ptr);
LABEL_170:
  v62 = *(_BYTE *)(((v52 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v52 + 12) & 7) + 3) >= v62 && v62 )
  {
    __asan_report_load4(v52 + 12);
LABEL_174:
    v61 = v52;
    __asan_report_load8(v52);
LABEL_175:
    v63 = (struct _Unwind_Exception *)__asan_report_load8(v61);
    common::milog::MiLogStream::~MiLogStream(&v65);
    __asan_handle_no_return(&v65);
    _Unwind_Resume(v63);
  }
  v60 = *(_DWORD *)(v52 + 12);
  *(_DWORD *)(v52 + 12) = v60 - 1;
LABEL_163:
  if ( v60 != 1 )
    goto LABEL_149;
  if ( *(_BYTE *)((v52 >> 3) + 0x7FFF8000) )
    goto LABEL_174;
  v61 = *(_QWORD *)v52 + 24LL;
  if ( *(_BYTE *)((v61 >> 3) + 0x7FFF8000) )
    goto LABEL_175;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v52 + 24LL))(v52);
LABEL_149:
  if ( *(_QWORD *)&conn_ptr._M_t._M_impl._M_header._M_color == v5 )
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
  return v13;
};

// Line 2586: range 000000000CAA668C-000000000CAA671C
int32_t __fastcall common::midb::RedisMgr::cmdSmemberWithTran(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        std::set<std::string> *value_set,
        common::midb::GetAndSetTranPtr *tran_ptr)
{
  int32_t result; // eax
  common::milog::MiLogStream v8[2]; // [rsp+0h] [rbp-48h] BYREF

  if ( common::midb::RedisMgr::initTran(this, index, key, tran_ptr) )
  {
    common::milog::MiLogStream::MiLogStream(
      v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSmemberWithTran",
      2590);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v8[0].ostr_, "initTran failed");
    common::milog::MiLogStream::~MiLogStream(v8);
    return -1;
  }
  else
  {
    result = common::midb::RedisMgr::cmdSMembers(this, index, key, value_set);
    if ( result )
      return -1;
  }
  return result;
};

// Line 2604: range 000000000CAA643A-000000000CAA64CA
int32_t __fastcall common::midb::RedisMgr::cmdSCardWithTran(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        uint32_t *count,
        common::midb::GetAndSetTranPtr *tran_ptr)
{
  int32_t result; // eax
  common::milog::MiLogStream v8[2]; // [rsp+0h] [rbp-48h] BYREF

  if ( common::midb::RedisMgr::initTran(this, index, key, tran_ptr) )
  {
    common::milog::MiLogStream::MiLogStream(
      v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSCardWithTran",
      2608);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v8[0].ostr_, "initTran failed");
    common::milog::MiLogStream::~MiLogStream(v8);
    return -1;
  }
  else
  {
    result = common::midb::RedisMgr::cmdSCard(this, index, key, count);
    if ( result )
      return -1;
  }
  return result;
};

// Line 2671: range 000000000CA853F0-000000000CA85F69
int32_t __fastcall common::midb::RedisMgr::cmdSAddWithTran(
        common::midb::RedisMgr *const this,
        const common::midb::GetAndSetTranPtr *tran_ptr,
        const std::string *key,
        const std::string *value,
        bool *is_repeated)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 p_M_node_count; // rbx
  unsigned __int64 v8; // r15
  std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  __int64 p_M_refcount; // rax
  __int64 M_pi; // rax
  unsigned __int64 v12; // rdi
  char v13; // dl
  const std::string *v14; // r8
  __int64 v15; // rax
  int32_t v16; // r14d
  char v17; // cl
  unsigned __int64 v18; // r14
  volatile signed __int32 *v19; // rdi
  char v20; // dl
  signed __int32 v21; // eax
  unsigned __int64 v22; // rdi
  char v23; // al
  _QWORD *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  char v28; // dl
  int32_t v29; // eax
  char v30; // dl
  unsigned __int64 v31; // rdi
  char v32; // dl
  signed __int32 v33; // eax
  char v34; // dl
  char v35; // cl
  __int64 *v36; // rdi
  __int64 v37; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v38; // rax
  unsigned __int64 p_M_use_count; // rdi
  char v40; // dl
  __int64 v41; // rcx
  char v42; // cl
  std::size_t v43; // rdx
  std::size_t v44; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v45; // rdi
  unsigned __int64 v46; // rdi
  __int64 v47; // rdx
  char v48; // al
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int64 v51; // rdi
  char v52; // al
  unsigned __int64 v53; // rdx
  char v54; // al
  __int64 v55; // rcx
  unsigned __int64 v56; // rbp
  volatile signed __int32 *v57; // rdi
  char v58; // dl
  signed __int32 v59; // eax
  char v61; // dl
  unsigned __int64 v62; // rdi
  char v63; // dl
  signed __int32 v64; // eax
  unsigned __int64 v65; // rdi
  char v66; // dl
  struct _Unwind_Exception *v67; // rbx
  __int64 v71; // [rsp+20h] [rbp-B8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v72; // [rsp+28h] [rbp-B0h]
  common::midb::RedisMgr conn_ptr; // [rsp+30h] [rbp-A8h] BYREF

  v6 = (unsigned __int64)tran_ptr;
  p_M_node_count = (unsigned __int64)&conn_ptr.pool_ptr_map_._M_t._M_impl._M_node_count;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      p_M_node_count = v15;
  }
  *(_QWORD *)p_M_node_count = 1102416563LL;
  *(_QWORD *)(p_M_node_count + 8) = "1 32 16 14 reply_ptr:2693";
  *(_QWORD *)(p_M_node_count + 16) = common::midb::RedisMgr::cmdSAddWithTran;
  v8 = p_M_node_count >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)tran_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(tran_ptr);
    goto LABEL_19;
  }
  M_ptr = tran_ptr->_M_ptr;
  if ( !tran_ptr->_M_ptr )
  {
LABEL_19:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSAddWithTran",
      2675);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      "tran_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    v16 = -1;
    goto LABEL_146;
  }
  if ( *(char *)(((unsigned __int64)&M_ptr->is_need_unwatch_ >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(&M_ptr->is_need_unwatch_, tran_ptr, &M_ptr->is_need_unwatch_);
    goto LABEL_21;
  }
  if ( !M_ptr->is_need_unwatch_ )
  {
LABEL_21:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSAddWithTran",
      2682);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      "tran is end, can not re set on one transaction");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    v16 = -1;
    goto LABEL_146;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(M_ptr);
    goto LABEL_23;
  }
  if ( !M_ptr->conn_ptr_._M_ptr )
  {
LABEL_23:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSAddWithTran",
      2688);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<16384> > *const)conn_ptr.pool_ptr_map_._M_t._M_impl._M_header._M_right,
      "conn in tran is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    v16 = -1;
    goto LABEL_146;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
    p_M_refcount = __asan_report_load8(M_ptr);
    goto LABEL_25;
  }
  *(_QWORD *)&conn_ptr.is_init_ = M_ptr->conn_ptr_._M_ptr;
  p_M_refcount = (__int64)&M_ptr->conn_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&M_ptr->conn_ptr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    v12 = p_M_refcount;
    __asan_report_load8(p_M_refcount);
LABEL_26:
    M_pi = __asan_report_store4(v12, tran_ptr);
    goto LABEL_27;
  }
  M_pi = (__int64)M_ptr->conn_ptr_._M_refcount._M_pi;
  *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 = M_pi;
  if ( !M_pi )
  {
LABEL_15:
    tran_ptr = (const common::midb::GetAndSetTranPtr *)this;
    common::midb::RedisMgr::cmdBeginTrans(
      (common::midb::RedisMgr *const)(p_M_node_count + 32),
      (common::midb::RedisConnPtr)__PAIR128__(&conn_ptr, (unsigned __int64)this));
    goto LABEL_31;
  }
  v12 = M_pi + 8;
  if ( &_pthread_key_create )
  {
    v13 = *(_BYTE *)((v12 >> 3) + 0x7FFF8000);
    if ( (char)((v12 & 7) + 3) < v13 || !v13 )
    {
      _InterlockedAdd((volatile signed __int32 *)v12, 1u);
      goto LABEL_15;
    }
    goto LABEL_26;
  }
LABEL_27:
  v17 = *(_BYTE *)(((unsigned __int64)(M_pi + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((M_pi + 8) & 7) + 3) < v17 || !v17 )
  {
    ++*(_DWORD *)(M_pi + 8);
    goto LABEL_15;
  }
  __asan_report_load4(M_pi + 8);
LABEL_31:
  v18 = *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0;
  if ( !*(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 )
    goto LABEL_37;
  v19 = (volatile signed __int32 *)(*(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 + 8LL);
  if ( &_pthread_key_create )
  {
    v20 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v19 & 7) + 3) < v20 || !v20 )
    {
      v21 = _InterlockedExchangeAdd(v19, 0xFFFFFFFF);
      goto LABEL_36;
    }
    __asan_report_store4(v19, tran_ptr);
  }
  v30 = *(_BYTE *)(((v18 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v18 + 8) & 7) + 3) >= v30 && v30 )
  {
    __asan_report_load4(v18 + 8);
    goto LABEL_55;
  }
  v21 = *(_DWORD *)(v18 + 8);
  *(_DWORD *)(v18 + 8) = v21 - 1;
LABEL_36:
  if ( v21 != 1 )
    goto LABEL_37;
LABEL_55:
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
  {
    v31 = v18;
    __asan_report_load8(v18);
    goto LABEL_66;
  }
  v31 = *(_QWORD *)v18 + 16LL;
  if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_load8(v31);
    goto LABEL_67;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v18 + 16LL))(v18);
  v31 = v18 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_68;
  v32 = *(_BYTE *)((v31 >> 3) + 0x7FFF8000);
  if ( (char)((v31 & 7) + 3) < v32 || !v32 )
  {
    v33 = _InterlockedExchangeAdd((volatile signed __int32 *)v31, 0xFFFFFFFF);
    goto LABEL_61;
  }
LABEL_67:
  __asan_report_store4(v31, tran_ptr);
LABEL_68:
  v34 = *(_BYTE *)(((v18 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v18 + 12) & 7) + 3) >= v34 && v34 )
  {
    __asan_report_load4(v18 + 12);
LABEL_72:
    v22 = v18;
    __asan_report_load8(v18);
    goto LABEL_73;
  }
  v33 = *(_DWORD *)(v18 + 12);
  *(_DWORD *)(v18 + 12) = v33 - 1;
LABEL_61:
  if ( v33 != 1 )
    goto LABEL_37;
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
    goto LABEL_72;
  v22 = *(_QWORD *)v18 + 24LL;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    __asan_report_load8(v22);
LABEL_74:
    __asan_report_load4(v22);
    goto LABEL_75;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v18 + 24LL))(v18);
LABEL_37:
  v22 = *(_QWORD *)(p_M_node_count + 32);
  if ( !v22 )
  {
LABEL_138:
    v16 = -1;
    goto LABEL_140;
  }
  v23 = *(_BYTE *)((v22 >> 3) + 0x7FFF8000);
  if ( v23 && v23 <= 3 )
    goto LABEL_74;
  if ( *(_DWORD *)v22 != 6 )
  {
    if ( !*(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    {
      v24 = *(_QWORD **)v6;
      if ( !*(_BYTE *)((*(_QWORD *)v6 >> 3) + 0x7FFF8000LL) )
      {
        *(_QWORD *)&conn_ptr.is_init_ = *v24;
        v25 = (__int64)(v24 + 1);
        if ( !*(_BYTE *)(((unsigned __int64)(v24 + 1) >> 3) + 0x7FFF8000) )
        {
          v26 = v24[1];
          *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 = v26;
          if ( !v26 )
            goto LABEL_49;
          v27 = v26 + 8;
          if ( !&_pthread_key_create )
          {
LABEL_79:
            v35 = *(_BYTE *)(((unsigned __int64)(v26 + 8) >> 3) + 0x7FFF8000);
            if ( (char)(((v26 + 8) & 7) + 3) >= v35 && v35 )
            {
              v29 = __asan_report_load4(v26 + 8);
LABEL_83:
              v16 = v29;
              if ( *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 )
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(*(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *const *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0);
              if ( v16 )
              {
                v16 = -1;
                goto LABEL_140;
              }
              if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
              {
                v36 = (__int64 *)v6;
                __asan_report_load8(v6);
              }
              else
              {
                v36 = *(__int64 **)v6;
                if ( !*(_BYTE *)((*(_QWORD *)v6 >> 3) + 0x7FFF8000LL) )
                {
                  v71 = *v36;
                  v37 = (__int64)(v36 + 1);
                  if ( !*(_BYTE *)(((unsigned __int64)(v36 + 1) >> 3) + 0x7FFF8000) )
                  {
                    v38 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v36[1];
                    v72 = v38;
                    if ( !v38 )
                      goto LABEL_95;
                    p_M_use_count = (unsigned __int64)&v38->_M_use_count;
                    if ( !&_pthread_key_create )
                    {
LABEL_100:
                      v42 = *(_BYTE *)(((unsigned __int64)&v38->_M_use_count >> 3) + 0x7FFF8000);
                      if ( (char)((((_BYTE)v38 + 8) & 7) + 3) >= v42 && v42 )
                      {
                        __asan_report_load4(&v38->_M_use_count);
LABEL_104:
                        v43 = *(_QWORD *)&conn_ptr.is_init_;
                        v44 = *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0;
                        *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 = 0LL;
                        *(_QWORD *)&conn_ptr.is_init_ = 0LL;
                        *(_QWORD *)(p_M_node_count + 32) = v43;
                        v45 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_M_node_count + 40);
                        *(_QWORD *)(p_M_node_count + 40) = v44;
                        if ( v45 )
                          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v45);
                        if ( *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 )
                          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(*(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *const *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0);
                        if ( v72 )
                          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v72);
                        if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
                        {
                          v46 = v6;
                          __asan_report_load8(v6);
                        }
                        else
                        {
                          v46 = *(_QWORD *)v6 + 16LL;
                          v47 = *(unsigned __int8 *)((v46 >> 3) + 0x7FFF8000);
                          if ( (v47 & 0x80u) == 0LL )
                          {
                            *(_BYTE *)(*(_QWORD *)v6 + 16LL) = 0;
                            v46 = *(_QWORD *)(p_M_node_count + 32);
                            if ( !v46 )
                              goto LABEL_134;
                            v48 = *(_BYTE *)((v46 >> 3) + 0x7FFF8000);
                            if ( !v48 || v48 > 3 )
                            {
                              if ( *(_DWORD *)v46 != 2 )
                                goto LABEL_134;
                              v49 = v46 + 48;
                              if ( !*(_BYTE *)(((v46 + 48) >> 3) + 0x7FFF8000) )
                              {
                                if ( *(_QWORD *)(v46 + 48) )
                                {
                                  v50 = v46 + 56;
                                  if ( !*(_BYTE *)(((v46 + 56) >> 3) + 0x7FFF8000) )
                                  {
                                    v51 = *(_QWORD *)(v46 + 56);
                                    if ( !*(_BYTE *)((v51 >> 3) + 0x7FFF8000) )
                                    {
                                      v51 = *(_QWORD *)v51;
                                      v52 = *(_BYTE *)((v51 >> 3) + 0x7FFF8000);
                                      if ( !v52 || v52 > 3 )
                                      {
                                        if ( *(_DWORD *)v51 != 3 )
                                        {
                                          common::milog::MiLogStream::MiLogStream(
                                            (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            3u,
                                            "src/redis_mgr.cpp",
                                            "cmdSAddWithTran",
                                            2718);
                                          tran_ptr = (const common::midb::GetAndSetTranPtr *)"do EXEC failed";
                                          common::milog::MiLogStream::operator()(
                                            (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
                                            "do EXEC failed");
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
                                          v16 = -1;
                                          goto LABEL_140;
                                        }
                                        v53 = (v51 + 8) >> 3;
                                        if ( *(_BYTE *)(v53 + 0x7FFF8000) )
                                        {
                                          __asan_report_load8(v51 + 8);
                                        }
                                        else
                                        {
                                          LOBYTE(v53) = *(_QWORD *)(v51 + 8) == 0LL;
                                          v54 = *(_BYTE *)(((unsigned __int64)is_repeated >> 3) + 0x7FFF8000);
                                          v55 = (unsigned __int8)is_repeated & 7;
                                          if ( v54 > ((unsigned __int8)is_repeated & 7) || !v54 )
                                          {
                                            *is_repeated = v53;
                                            goto LABEL_140;
                                          }
                                        }
                                        __asan_report_store1(is_repeated, tran_ptr, v53, v55);
                                        goto LABEL_138;
                                      }
                                      goto LABEL_133;
                                    }
LABEL_132:
                                    __asan_report_load8(v51);
LABEL_133:
                                    __asan_report_load4(v51);
                                    goto LABEL_134;
                                  }
LABEL_131:
                                  v51 = v50;
                                  __asan_report_load8(v50);
                                  goto LABEL_132;
                                }
LABEL_134:
                                common::milog::MiLogStream::MiLogStream(
                                  (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  3u,
                                  "src/redis_mgr.cpp",
                                  "cmdSAddWithTran",
                                  2712);
                                tran_ptr = (const common::midb::GetAndSetTranPtr *)"do EXEC failed";
                                common::milog::MiLogStream::operator()(
                                  (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
                                  "do EXEC failed");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
                                v16 = -1;
                                goto LABEL_140;
                              }
LABEL_130:
                              v50 = __asan_report_load8(v49);
                              goto LABEL_131;
                            }
LABEL_129:
                            v49 = __asan_report_load4(v46);
                            goto LABEL_130;
                          }
                        }
                        __asan_report_store1(v46, tran_ptr, v47, v41);
                        goto LABEL_129;
                      }
                      ++v38->_M_use_count;
LABEL_95:
                      tran_ptr = (const common::midb::GetAndSetTranPtr *)this;
                      common::midb::RedisMgr::cmdExecTrans(
                        &conn_ptr,
                        (common::midb::RedisConnPtr)__PAIR128__(&v71, (unsigned __int64)this));
                      goto LABEL_104;
                    }
                    v40 = *(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000);
                    if ( (char)((p_M_use_count & 7) + 3) < v40 || !v40 )
                    {
                      _InterlockedAdd((volatile signed __int32 *)p_M_use_count, 1u);
                      goto LABEL_95;
                    }
LABEL_99:
                    v38 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(
                                                                                 p_M_use_count,
                                                                                 tran_ptr);
                    goto LABEL_100;
                  }
LABEL_98:
                  p_M_use_count = v37;
                  __asan_report_load8(v37);
                  goto LABEL_99;
                }
              }
              v37 = __asan_report_load8(v36);
              goto LABEL_98;
            }
            ++*(_DWORD *)(v26 + 8);
LABEL_49:
            tran_ptr = (const common::midb::GetAndSetTranPtr *)&conn_ptr;
            v29 = common::midb::RedisMgr::cmdSAdd(
                    this,
                    (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &conn_ptr),
                    (unsigned __int64)value,
                    v14);
            goto LABEL_83;
          }
          v28 = *(_BYTE *)((v27 >> 3) + 0x7FFF8000);
          if ( (char)((v27 & 7) + 3) < v28 || !v28 )
          {
            _InterlockedAdd((volatile signed __int32 *)v27, 1u);
            goto LABEL_49;
          }
LABEL_78:
          v26 = __asan_report_store4(v27, tran_ptr);
          goto LABEL_79;
        }
LABEL_77:
        v27 = v25;
        __asan_report_load8(v25);
        goto LABEL_78;
      }
LABEL_76:
      v25 = __asan_report_load8(v24);
      goto LABEL_77;
    }
LABEL_75:
    v24 = (_QWORD *)v6;
    __asan_report_load8(v6);
    goto LABEL_76;
  }
  v16 = -1;
LABEL_140:
  v56 = *(_QWORD *)(p_M_node_count + 40);
  if ( !v56 )
    goto LABEL_146;
  v57 = (volatile signed __int32 *)(v56 + 8);
  if ( &_pthread_key_create )
  {
    v58 = *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v57 & 7) + 3) < v58 || !v58 )
    {
      v59 = _InterlockedExchangeAdd(v57, 0xFFFFFFFF);
      goto LABEL_145;
    }
    __asan_report_store4(v57, tran_ptr);
  }
  v61 = *(_BYTE *)(((v56 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v56 + 8) & 7) + 3) >= v61 && v61 )
  {
    __asan_report_load4(v56 + 8);
    goto LABEL_154;
  }
  v59 = *(_DWORD *)(v56 + 8);
  *(_DWORD *)(v56 + 8) = v59 - 1;
LABEL_145:
  if ( v59 != 1 )
    goto LABEL_146;
LABEL_154:
  if ( *(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
  {
    v62 = v56;
    __asan_report_load8(v56);
    goto LABEL_165;
  }
  v62 = *(_QWORD *)v56 + 16LL;
  if ( *(_BYTE *)((v62 >> 3) + 0x7FFF8000) )
  {
LABEL_165:
    __asan_report_load8(v62);
    goto LABEL_166;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v56 + 16LL))(v56);
  v62 = v56 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_167;
  v63 = *(_BYTE *)((v62 >> 3) + 0x7FFF8000);
  if ( (char)((v62 & 7) + 3) < v63 || !v63 )
  {
    v64 = _InterlockedExchangeAdd((volatile signed __int32 *)v62, 0xFFFFFFFF);
    goto LABEL_160;
  }
LABEL_166:
  __asan_report_store4(v62, tran_ptr);
LABEL_167:
  v66 = *(_BYTE *)(((v56 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v56 + 12) & 7) + 3) >= v66 && v66 )
  {
    __asan_report_load4(v56 + 12);
LABEL_171:
    v65 = v56;
    __asan_report_load8(v56);
LABEL_172:
    v67 = (struct _Unwind_Exception *)__asan_report_load8(v65);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    __asan_handle_no_return(&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    _Unwind_Resume(v67);
  }
  v64 = *(_DWORD *)(v56 + 12);
  *(_DWORD *)(v56 + 12) = v64 - 1;
LABEL_160:
  if ( v64 != 1 )
    goto LABEL_146;
  if ( *(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
    goto LABEL_171;
  v65 = *(_QWORD *)v56 + 24LL;
  if ( *(_BYTE *)((v65 >> 3) + 0x7FFF8000) )
    goto LABEL_172;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v56 + 24LL))(v56);
LABEL_146:
  if ( &conn_ptr.pool_ptr_map_._M_t._M_impl._M_node_count == (std::size_t *)p_M_node_count )
  {
    *(_QWORD *)((p_M_node_count >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_node_count = 1172321806LL;
    *(_QWORD *)((p_M_node_count >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v16;
};

// Line 2727: range 000000000CA980C6-000000000CA98B01
int32_t __fastcall common::midb::RedisMgr::cmdSAddWithTran(
        common::midb::RedisMgr *const this,
        const common::midb::GetAndSetTranPtr *tran_ptr,
        const std::string *key,
        std::set<std::string> *value_set)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 p_M_node_count; // rbx
  unsigned __int64 v7; // r15
  std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  __int64 p_M_refcount; // rax
  __int64 M_pi; // rax
  unsigned __int64 v11; // rdi
  char v12; // dl
  std::set<std::string> *v13; // r8
  __int64 v14; // rax
  int32_t v15; // r14d
  char v16; // cl
  unsigned __int64 v17; // r14
  volatile signed __int32 *v18; // rdi
  char v19; // dl
  signed __int32 v20; // eax
  unsigned __int64 v21; // rdi
  char v22; // al
  _QWORD *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rdi
  char v27; // dl
  int32_t v28; // eax
  char v29; // dl
  unsigned __int64 v30; // rdi
  char v31; // dl
  signed __int32 v32; // eax
  char v33; // dl
  char v34; // cl
  __int64 *v35; // rdi
  __int64 v36; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v37; // rax
  unsigned __int64 p_M_use_count; // rdi
  char v39; // dl
  __int64 v40; // rcx
  char v41; // cl
  std::size_t v42; // rdx
  std::size_t v43; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v44; // rdi
  unsigned __int64 v45; // rdi
  __int64 v46; // rdx
  char v47; // al
  __int64 v48; // rax
  unsigned __int64 v49; // rbp
  volatile signed __int32 *v50; // rdi
  char v51; // dl
  signed __int32 v52; // eax
  char v54; // dl
  unsigned __int64 v55; // rdi
  char v56; // dl
  signed __int32 v57; // eax
  unsigned __int64 v58; // rdi
  char v59; // dl
  struct _Unwind_Exception *v60; // rbx
  __int64 v63; // [rsp+20h] [rbp-B8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v64; // [rsp+28h] [rbp-B0h]
  common::midb::RedisMgr conn_ptr; // [rsp+30h] [rbp-A8h] BYREF

  v5 = (unsigned __int64)tran_ptr;
  p_M_node_count = (unsigned __int64)&conn_ptr.pool_ptr_map_._M_t._M_impl._M_node_count;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v14 = __asan_stack_malloc_0(64LL);
    if ( v14 )
      p_M_node_count = v14;
  }
  *(_QWORD *)p_M_node_count = 1102416563LL;
  *(_QWORD *)(p_M_node_count + 8) = "1 32 16 14 reply_ptr:2749";
  *(_QWORD *)(p_M_node_count + 16) = common::midb::RedisMgr::cmdSAddWithTran;
  v7 = p_M_node_count >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)tran_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(tran_ptr);
    goto LABEL_19;
  }
  M_ptr = tran_ptr->_M_ptr;
  if ( !tran_ptr->_M_ptr )
  {
LABEL_19:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSAddWithTran",
      2731);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      "tran_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    v15 = -1;
    goto LABEL_132;
  }
  if ( *(char *)(((unsigned __int64)&M_ptr->is_need_unwatch_ >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(&M_ptr->is_need_unwatch_, tran_ptr, &M_ptr->is_need_unwatch_);
    goto LABEL_21;
  }
  if ( !M_ptr->is_need_unwatch_ )
  {
LABEL_21:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSAddWithTran",
      2738);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      "tran is end, can not re set on one transaction");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    v15 = -1;
    goto LABEL_132;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(M_ptr);
    goto LABEL_23;
  }
  if ( !M_ptr->conn_ptr_._M_ptr )
  {
LABEL_23:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSAddWithTran",
      2744);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<16384> > *const)conn_ptr.pool_ptr_map_._M_t._M_impl._M_header._M_right,
      "conn in tran is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    v15 = -1;
    goto LABEL_132;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
    p_M_refcount = __asan_report_load8(M_ptr);
    goto LABEL_25;
  }
  *(_QWORD *)&conn_ptr.is_init_ = M_ptr->conn_ptr_._M_ptr;
  p_M_refcount = (__int64)&M_ptr->conn_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&M_ptr->conn_ptr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    v11 = p_M_refcount;
    __asan_report_load8(p_M_refcount);
LABEL_26:
    M_pi = __asan_report_store4(v11, tran_ptr);
    goto LABEL_27;
  }
  M_pi = (__int64)M_ptr->conn_ptr_._M_refcount._M_pi;
  *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 = M_pi;
  if ( !M_pi )
  {
LABEL_15:
    tran_ptr = (const common::midb::GetAndSetTranPtr *)this;
    common::midb::RedisMgr::cmdBeginTrans(
      (common::midb::RedisMgr *const)(p_M_node_count + 32),
      (common::midb::RedisConnPtr)__PAIR128__(&conn_ptr, (unsigned __int64)this));
    goto LABEL_31;
  }
  v11 = M_pi + 8;
  if ( &_pthread_key_create )
  {
    v12 = *(_BYTE *)((v11 >> 3) + 0x7FFF8000);
    if ( (char)((v11 & 7) + 3) < v12 || !v12 )
    {
      _InterlockedAdd((volatile signed __int32 *)v11, 1u);
      goto LABEL_15;
    }
    goto LABEL_26;
  }
LABEL_27:
  v16 = *(_BYTE *)(((unsigned __int64)(M_pi + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((M_pi + 8) & 7) + 3) < v16 || !v16 )
  {
    ++*(_DWORD *)(M_pi + 8);
    goto LABEL_15;
  }
  __asan_report_load4(M_pi + 8);
LABEL_31:
  v17 = *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0;
  if ( !*(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 )
    goto LABEL_37;
  v18 = (volatile signed __int32 *)(*(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 + 8LL);
  if ( &_pthread_key_create )
  {
    v19 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v18 & 7) + 3) < v19 || !v19 )
    {
      v20 = _InterlockedExchangeAdd(v18, 0xFFFFFFFF);
      goto LABEL_36;
    }
    __asan_report_store4(v18, tran_ptr);
  }
  v29 = *(_BYTE *)(((v17 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v17 + 8) & 7) + 3) >= v29 && v29 )
  {
    __asan_report_load4(v17 + 8);
    goto LABEL_55;
  }
  v20 = *(_DWORD *)(v17 + 8);
  *(_DWORD *)(v17 + 8) = v20 - 1;
LABEL_36:
  if ( v20 != 1 )
    goto LABEL_37;
LABEL_55:
  if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
  {
    v30 = v17;
    __asan_report_load8(v17);
    goto LABEL_66;
  }
  v30 = *(_QWORD *)v17 + 16LL;
  if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_load8(v30);
    goto LABEL_67;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v17 + 16LL))(v17);
  v30 = v17 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_68;
  v31 = *(_BYTE *)((v30 >> 3) + 0x7FFF8000);
  if ( (char)((v30 & 7) + 3) < v31 || !v31 )
  {
    v32 = _InterlockedExchangeAdd((volatile signed __int32 *)v30, 0xFFFFFFFF);
    goto LABEL_61;
  }
LABEL_67:
  __asan_report_store4(v30, tran_ptr);
LABEL_68:
  v33 = *(_BYTE *)(((v17 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v17 + 12) & 7) + 3) >= v33 && v33 )
  {
    __asan_report_load4(v17 + 12);
LABEL_72:
    v21 = v17;
    __asan_report_load8(v17);
    goto LABEL_73;
  }
  v32 = *(_DWORD *)(v17 + 12);
  *(_DWORD *)(v17 + 12) = v32 - 1;
LABEL_61:
  if ( v32 != 1 )
    goto LABEL_37;
  if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
    goto LABEL_72;
  v21 = *(_QWORD *)v17 + 24LL;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    __asan_report_load8(v21);
    goto LABEL_74;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v17 + 24LL))(v17);
LABEL_37:
  v21 = *(_QWORD *)(p_M_node_count + 32);
  if ( !v21 )
  {
    v15 = -1;
    goto LABEL_126;
  }
  v22 = *(_BYTE *)((v21 >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
  {
LABEL_74:
    __asan_report_load4(v21);
    goto LABEL_75;
  }
  if ( *(_DWORD *)v21 != 6 )
  {
    if ( !*(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    {
      v23 = *(_QWORD **)v5;
      if ( !*(_BYTE *)((*(_QWORD *)v5 >> 3) + 0x7FFF8000LL) )
      {
        *(_QWORD *)&conn_ptr.is_init_ = *v23;
        v24 = (__int64)(v23 + 1);
        if ( !*(_BYTE *)(((unsigned __int64)(v23 + 1) >> 3) + 0x7FFF8000) )
        {
          v25 = v23[1];
          *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 = v25;
          if ( !v25 )
            goto LABEL_49;
          v26 = v25 + 8;
          if ( !&_pthread_key_create )
          {
LABEL_79:
            v34 = *(_BYTE *)(((unsigned __int64)(v25 + 8) >> 3) + 0x7FFF8000);
            if ( (char)(((v25 + 8) & 7) + 3) >= v34 && v34 )
            {
              v28 = __asan_report_load4(v25 + 8);
LABEL_83:
              v15 = v28;
              if ( *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 )
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(*(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *const *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0);
              if ( v15 )
              {
                v15 = -1;
                goto LABEL_126;
              }
              if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
              {
                v35 = (__int64 *)v5;
                __asan_report_load8(v5);
              }
              else
              {
                v35 = *(__int64 **)v5;
                if ( !*(_BYTE *)((*(_QWORD *)v5 >> 3) + 0x7FFF8000LL) )
                {
                  v63 = *v35;
                  v36 = (__int64)(v35 + 1);
                  if ( !*(_BYTE *)(((unsigned __int64)(v35 + 1) >> 3) + 0x7FFF8000) )
                  {
                    v37 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v35[1];
                    v64 = v37;
                    if ( !v37 )
                      goto LABEL_95;
                    p_M_use_count = (unsigned __int64)&v37->_M_use_count;
                    if ( !&_pthread_key_create )
                    {
LABEL_100:
                      v41 = *(_BYTE *)(((unsigned __int64)&v37->_M_use_count >> 3) + 0x7FFF8000);
                      if ( (char)((((_BYTE)v37 + 8) & 7) + 3) >= v41 && v41 )
                      {
                        __asan_report_load4(&v37->_M_use_count);
LABEL_104:
                        v42 = *(_QWORD *)&conn_ptr.is_init_;
                        v43 = *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0;
                        *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 = 0LL;
                        *(_QWORD *)&conn_ptr.is_init_ = 0LL;
                        *(_QWORD *)(p_M_node_count + 32) = v42;
                        v44 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_M_node_count + 40);
                        *(_QWORD *)(p_M_node_count + 40) = v43;
                        if ( v44 )
                          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v44);
                        if ( *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 )
                          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(*(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *const *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0);
                        if ( v64 )
                          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v64);
                        if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
                        {
                          v45 = v5;
                          __asan_report_load8(v5);
                        }
                        else
                        {
                          v45 = *(_QWORD *)v5 + 16LL;
                          v46 = *(unsigned __int8 *)((v45 >> 3) + 0x7FFF8000);
                          if ( (v46 & 0x80u) == 0LL )
                          {
                            *(_BYTE *)(*(_QWORD *)v5 + 16LL) = 0;
                            v45 = *(_QWORD *)(p_M_node_count + 32);
                            if ( !v45 )
                              goto LABEL_118;
                            v47 = *(_BYTE *)((v45 >> 3) + 0x7FFF8000);
                            if ( !v47 || v47 > 3 )
                            {
                              if ( *(_DWORD *)v45 == 2 )
                              {
                                v48 = v45 + 48;
                                if ( !*(_BYTE *)(((v45 + 48) >> 3) + 0x7FFF8000) )
                                {
                                  if ( *(_QWORD *)(v45 + 48) )
                                    goto LABEL_126;
                                  goto LABEL_118;
                                }
LABEL_122:
                                __asan_report_load8(v48);
                                goto LABEL_123;
                              }
LABEL_118:
                              common::milog::MiLogStream::MiLogStream(
                                (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "src/redis_mgr.cpp",
                                "cmdSAddWithTran",
                                2768);
LABEL_123:
                              tran_ptr = (const common::midb::GetAndSetTranPtr *)"do EXEC failed";
                              common::milog::MiLogStream::operator()(
                                (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
                                "do EXEC failed");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
                              v15 = -1;
                              goto LABEL_126;
                            }
LABEL_121:
                            v48 = __asan_report_load4(v45);
                            goto LABEL_122;
                          }
                        }
                        __asan_report_store1(v45, tran_ptr, v46, v40);
                        goto LABEL_121;
                      }
                      ++v37->_M_use_count;
LABEL_95:
                      tran_ptr = (const common::midb::GetAndSetTranPtr *)this;
                      common::midb::RedisMgr::cmdExecTrans(
                        &conn_ptr,
                        (common::midb::RedisConnPtr)__PAIR128__(&v63, (unsigned __int64)this));
                      goto LABEL_104;
                    }
                    v39 = *(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000);
                    if ( (char)((p_M_use_count & 7) + 3) < v39 || !v39 )
                    {
                      _InterlockedAdd((volatile signed __int32 *)p_M_use_count, 1u);
                      goto LABEL_95;
                    }
LABEL_99:
                    v37 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(
                                                                                 p_M_use_count,
                                                                                 tran_ptr);
                    goto LABEL_100;
                  }
LABEL_98:
                  p_M_use_count = v36;
                  __asan_report_load8(v36);
                  goto LABEL_99;
                }
              }
              v36 = __asan_report_load8(v35);
              goto LABEL_98;
            }
            ++*(_DWORD *)(v25 + 8);
LABEL_49:
            tran_ptr = (const common::midb::GetAndSetTranPtr *)&conn_ptr;
            v28 = common::midb::RedisMgr::cmdSAdd(
                    this,
                    (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &conn_ptr),
                    (const std::string *)value_set,
                    v13);
            goto LABEL_83;
          }
          v27 = *(_BYTE *)((v26 >> 3) + 0x7FFF8000);
          if ( (char)((v26 & 7) + 3) < v27 || !v27 )
          {
            _InterlockedAdd((volatile signed __int32 *)v26, 1u);
            goto LABEL_49;
          }
LABEL_78:
          v25 = __asan_report_store4(v26, tran_ptr);
          goto LABEL_79;
        }
LABEL_77:
        v26 = v24;
        __asan_report_load8(v24);
        goto LABEL_78;
      }
LABEL_76:
      v24 = __asan_report_load8(v23);
      goto LABEL_77;
    }
LABEL_75:
    v23 = (_QWORD *)v5;
    __asan_report_load8(v5);
    goto LABEL_76;
  }
  v15 = -1;
LABEL_126:
  v49 = *(_QWORD *)(p_M_node_count + 40);
  if ( !v49 )
    goto LABEL_132;
  v50 = (volatile signed __int32 *)(v49 + 8);
  if ( &_pthread_key_create )
  {
    v51 = *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v50 & 7) + 3) < v51 || !v51 )
    {
      v52 = _InterlockedExchangeAdd(v50, 0xFFFFFFFF);
      goto LABEL_131;
    }
    __asan_report_store4(v50, tran_ptr);
  }
  v54 = *(_BYTE *)(((v49 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v49 + 8) & 7) + 3) >= v54 && v54 )
  {
    __asan_report_load4(v49 + 8);
    goto LABEL_140;
  }
  v52 = *(_DWORD *)(v49 + 8);
  *(_DWORD *)(v49 + 8) = v52 - 1;
LABEL_131:
  if ( v52 != 1 )
    goto LABEL_132;
LABEL_140:
  if ( *(_BYTE *)((v49 >> 3) + 0x7FFF8000) )
  {
    v55 = v49;
    __asan_report_load8(v49);
    goto LABEL_151;
  }
  v55 = *(_QWORD *)v49 + 16LL;
  if ( *(_BYTE *)((v55 >> 3) + 0x7FFF8000) )
  {
LABEL_151:
    __asan_report_load8(v55);
    goto LABEL_152;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v49 + 16LL))(v49);
  v55 = v49 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_153;
  v56 = *(_BYTE *)((v55 >> 3) + 0x7FFF8000);
  if ( (char)((v55 & 7) + 3) < v56 || !v56 )
  {
    v57 = _InterlockedExchangeAdd((volatile signed __int32 *)v55, 0xFFFFFFFF);
    goto LABEL_146;
  }
LABEL_152:
  __asan_report_store4(v55, tran_ptr);
LABEL_153:
  v59 = *(_BYTE *)(((v49 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v49 + 12) & 7) + 3) >= v59 && v59 )
  {
    __asan_report_load4(v49 + 12);
LABEL_157:
    v58 = v49;
    __asan_report_load8(v49);
LABEL_158:
    v60 = (struct _Unwind_Exception *)__asan_report_load8(v58);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    __asan_handle_no_return(&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    _Unwind_Resume(v60);
  }
  v57 = *(_DWORD *)(v49 + 12);
  *(_DWORD *)(v49 + 12) = v57 - 1;
LABEL_146:
  if ( v57 != 1 )
    goto LABEL_132;
  if ( *(_BYTE *)((v49 >> 3) + 0x7FFF8000) )
    goto LABEL_157;
  v58 = *(_QWORD *)v49 + 24LL;
  if ( *(_BYTE *)((v58 >> 3) + 0x7FFF8000) )
    goto LABEL_158;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v49 + 24LL))(v49);
LABEL_132:
  if ( &conn_ptr.pool_ptr_map_._M_t._M_impl._M_node_count == (std::size_t *)p_M_node_count )
  {
    *(_QWORD *)((p_M_node_count >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_node_count = 1172321806LL;
    *(_QWORD *)((p_M_node_count >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v15;
};

// Line 2825: range 000000000CA966D2-000000000CA9710D
int32_t __fastcall common::midb::RedisMgr::cmdSRemWithTran(
        common::midb::RedisMgr *const this,
        const common::midb::GetAndSetTranPtr *tran_ptr,
        const std::string *key,
        std::set<std::string> *value_set)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 p_M_node_count; // rbx
  unsigned __int64 v7; // r15
  std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  __int64 p_M_refcount; // rax
  __int64 M_pi; // rax
  unsigned __int64 v11; // rdi
  char v12; // dl
  std::set<std::string> *v13; // r8
  __int64 v14; // rax
  int32_t v15; // r14d
  char v16; // cl
  unsigned __int64 v17; // r14
  volatile signed __int32 *v18; // rdi
  char v19; // dl
  signed __int32 v20; // eax
  unsigned __int64 v21; // rdi
  char v22; // al
  _QWORD *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rdi
  char v27; // dl
  int32_t v28; // eax
  char v29; // dl
  unsigned __int64 v30; // rdi
  char v31; // dl
  signed __int32 v32; // eax
  char v33; // dl
  char v34; // cl
  __int64 *v35; // rdi
  __int64 v36; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v37; // rax
  unsigned __int64 p_M_use_count; // rdi
  char v39; // dl
  __int64 v40; // rcx
  char v41; // cl
  std::size_t v42; // rdx
  std::size_t v43; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v44; // rdi
  unsigned __int64 v45; // rdi
  __int64 v46; // rdx
  char v47; // al
  __int64 v48; // rax
  unsigned __int64 v49; // rbp
  volatile signed __int32 *v50; // rdi
  char v51; // dl
  signed __int32 v52; // eax
  char v54; // dl
  unsigned __int64 v55; // rdi
  char v56; // dl
  signed __int32 v57; // eax
  unsigned __int64 v58; // rdi
  char v59; // dl
  struct _Unwind_Exception *v60; // rbx
  __int64 v63; // [rsp+20h] [rbp-B8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v64; // [rsp+28h] [rbp-B0h]
  common::midb::RedisMgr conn_ptr; // [rsp+30h] [rbp-A8h] BYREF

  v5 = (unsigned __int64)tran_ptr;
  p_M_node_count = (unsigned __int64)&conn_ptr.pool_ptr_map_._M_t._M_impl._M_node_count;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v14 = __asan_stack_malloc_0(64LL);
    if ( v14 )
      p_M_node_count = v14;
  }
  *(_QWORD *)p_M_node_count = 1102416563LL;
  *(_QWORD *)(p_M_node_count + 8) = "1 32 16 14 reply_ptr:2847";
  *(_QWORD *)(p_M_node_count + 16) = common::midb::RedisMgr::cmdSRemWithTran;
  v7 = p_M_node_count >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)tran_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(tran_ptr);
    goto LABEL_19;
  }
  M_ptr = tran_ptr->_M_ptr;
  if ( !tran_ptr->_M_ptr )
  {
LABEL_19:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSRemWithTran",
      2829);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      "tran_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    v15 = -1;
    goto LABEL_132;
  }
  if ( *(char *)(((unsigned __int64)&M_ptr->is_need_unwatch_ >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(&M_ptr->is_need_unwatch_, tran_ptr, &M_ptr->is_need_unwatch_);
    goto LABEL_21;
  }
  if ( !M_ptr->is_need_unwatch_ )
  {
LABEL_21:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSRemWithTran",
      2836);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      "tran is end, can not re set on one transaction");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    v15 = -1;
    goto LABEL_132;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(M_ptr);
    goto LABEL_23;
  }
  if ( !M_ptr->conn_ptr_._M_ptr )
  {
LABEL_23:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSRemWithTran",
      2842);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<16384> > *const)conn_ptr.pool_ptr_map_._M_t._M_impl._M_header._M_right,
      "conn in tran is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    v15 = -1;
    goto LABEL_132;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
    p_M_refcount = __asan_report_load8(M_ptr);
    goto LABEL_25;
  }
  *(_QWORD *)&conn_ptr.is_init_ = M_ptr->conn_ptr_._M_ptr;
  p_M_refcount = (__int64)&M_ptr->conn_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&M_ptr->conn_ptr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    v11 = p_M_refcount;
    __asan_report_load8(p_M_refcount);
LABEL_26:
    M_pi = __asan_report_store4(v11, tran_ptr);
    goto LABEL_27;
  }
  M_pi = (__int64)M_ptr->conn_ptr_._M_refcount._M_pi;
  *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 = M_pi;
  if ( !M_pi )
  {
LABEL_15:
    tran_ptr = (const common::midb::GetAndSetTranPtr *)this;
    common::midb::RedisMgr::cmdBeginTrans(
      (common::midb::RedisMgr *const)(p_M_node_count + 32),
      (common::midb::RedisConnPtr)__PAIR128__(&conn_ptr, (unsigned __int64)this));
    goto LABEL_31;
  }
  v11 = M_pi + 8;
  if ( &_pthread_key_create )
  {
    v12 = *(_BYTE *)((v11 >> 3) + 0x7FFF8000);
    if ( (char)((v11 & 7) + 3) < v12 || !v12 )
    {
      _InterlockedAdd((volatile signed __int32 *)v11, 1u);
      goto LABEL_15;
    }
    goto LABEL_26;
  }
LABEL_27:
  v16 = *(_BYTE *)(((unsigned __int64)(M_pi + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((M_pi + 8) & 7) + 3) < v16 || !v16 )
  {
    ++*(_DWORD *)(M_pi + 8);
    goto LABEL_15;
  }
  __asan_report_load4(M_pi + 8);
LABEL_31:
  v17 = *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0;
  if ( !*(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 )
    goto LABEL_37;
  v18 = (volatile signed __int32 *)(*(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 + 8LL);
  if ( &_pthread_key_create )
  {
    v19 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v18 & 7) + 3) < v19 || !v19 )
    {
      v20 = _InterlockedExchangeAdd(v18, 0xFFFFFFFF);
      goto LABEL_36;
    }
    __asan_report_store4(v18, tran_ptr);
  }
  v29 = *(_BYTE *)(((v17 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v17 + 8) & 7) + 3) >= v29 && v29 )
  {
    __asan_report_load4(v17 + 8);
    goto LABEL_55;
  }
  v20 = *(_DWORD *)(v17 + 8);
  *(_DWORD *)(v17 + 8) = v20 - 1;
LABEL_36:
  if ( v20 != 1 )
    goto LABEL_37;
LABEL_55:
  if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
  {
    v30 = v17;
    __asan_report_load8(v17);
    goto LABEL_66;
  }
  v30 = *(_QWORD *)v17 + 16LL;
  if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_load8(v30);
    goto LABEL_67;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v17 + 16LL))(v17);
  v30 = v17 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_68;
  v31 = *(_BYTE *)((v30 >> 3) + 0x7FFF8000);
  if ( (char)((v30 & 7) + 3) < v31 || !v31 )
  {
    v32 = _InterlockedExchangeAdd((volatile signed __int32 *)v30, 0xFFFFFFFF);
    goto LABEL_61;
  }
LABEL_67:
  __asan_report_store4(v30, tran_ptr);
LABEL_68:
  v33 = *(_BYTE *)(((v17 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v17 + 12) & 7) + 3) >= v33 && v33 )
  {
    __asan_report_load4(v17 + 12);
LABEL_72:
    v21 = v17;
    __asan_report_load8(v17);
    goto LABEL_73;
  }
  v32 = *(_DWORD *)(v17 + 12);
  *(_DWORD *)(v17 + 12) = v32 - 1;
LABEL_61:
  if ( v32 != 1 )
    goto LABEL_37;
  if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
    goto LABEL_72;
  v21 = *(_QWORD *)v17 + 24LL;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    __asan_report_load8(v21);
    goto LABEL_74;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v17 + 24LL))(v17);
LABEL_37:
  v21 = *(_QWORD *)(p_M_node_count + 32);
  if ( !v21 )
  {
    v15 = -1;
    goto LABEL_126;
  }
  v22 = *(_BYTE *)((v21 >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
  {
LABEL_74:
    __asan_report_load4(v21);
    goto LABEL_75;
  }
  if ( *(_DWORD *)v21 != 6 )
  {
    if ( !*(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    {
      v23 = *(_QWORD **)v5;
      if ( !*(_BYTE *)((*(_QWORD *)v5 >> 3) + 0x7FFF8000LL) )
      {
        *(_QWORD *)&conn_ptr.is_init_ = *v23;
        v24 = (__int64)(v23 + 1);
        if ( !*(_BYTE *)(((unsigned __int64)(v23 + 1) >> 3) + 0x7FFF8000) )
        {
          v25 = v23[1];
          *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 = v25;
          if ( !v25 )
            goto LABEL_49;
          v26 = v25 + 8;
          if ( !&_pthread_key_create )
          {
LABEL_79:
            v34 = *(_BYTE *)(((unsigned __int64)(v25 + 8) >> 3) + 0x7FFF8000);
            if ( (char)(((v25 + 8) & 7) + 3) >= v34 && v34 )
            {
              v28 = __asan_report_load4(v25 + 8);
LABEL_83:
              v15 = v28;
              if ( *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 )
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(*(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *const *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0);
              if ( v15 )
              {
                v15 = -1;
                goto LABEL_126;
              }
              if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
              {
                v35 = (__int64 *)v5;
                __asan_report_load8(v5);
              }
              else
              {
                v35 = *(__int64 **)v5;
                if ( !*(_BYTE *)((*(_QWORD *)v5 >> 3) + 0x7FFF8000LL) )
                {
                  v63 = *v35;
                  v36 = (__int64)(v35 + 1);
                  if ( !*(_BYTE *)(((unsigned __int64)(v35 + 1) >> 3) + 0x7FFF8000) )
                  {
                    v37 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v35[1];
                    v64 = v37;
                    if ( !v37 )
                      goto LABEL_95;
                    p_M_use_count = (unsigned __int64)&v37->_M_use_count;
                    if ( !&_pthread_key_create )
                    {
LABEL_100:
                      v41 = *(_BYTE *)(((unsigned __int64)&v37->_M_use_count >> 3) + 0x7FFF8000);
                      if ( (char)((((_BYTE)v37 + 8) & 7) + 3) >= v41 && v41 )
                      {
                        __asan_report_load4(&v37->_M_use_count);
LABEL_104:
                        v42 = *(_QWORD *)&conn_ptr.is_init_;
                        v43 = *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0;
                        *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 = 0LL;
                        *(_QWORD *)&conn_ptr.is_init_ = 0LL;
                        *(_QWORD *)(p_M_node_count + 32) = v42;
                        v44 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_M_node_count + 40);
                        *(_QWORD *)(p_M_node_count + 40) = v43;
                        if ( v44 )
                          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v44);
                        if ( *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 )
                          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(*(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *const *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0);
                        if ( v64 )
                          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v64);
                        if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
                        {
                          v45 = v5;
                          __asan_report_load8(v5);
                        }
                        else
                        {
                          v45 = *(_QWORD *)v5 + 16LL;
                          v46 = *(unsigned __int8 *)((v45 >> 3) + 0x7FFF8000);
                          if ( (v46 & 0x80u) == 0LL )
                          {
                            *(_BYTE *)(*(_QWORD *)v5 + 16LL) = 0;
                            v45 = *(_QWORD *)(p_M_node_count + 32);
                            if ( !v45 )
                              goto LABEL_118;
                            v47 = *(_BYTE *)((v45 >> 3) + 0x7FFF8000);
                            if ( !v47 || v47 > 3 )
                            {
                              if ( *(_DWORD *)v45 == 2 )
                              {
                                v48 = v45 + 48;
                                if ( !*(_BYTE *)(((v45 + 48) >> 3) + 0x7FFF8000) )
                                {
                                  if ( *(_QWORD *)(v45 + 48) )
                                    goto LABEL_126;
                                  goto LABEL_118;
                                }
LABEL_122:
                                __asan_report_load8(v48);
                                goto LABEL_123;
                              }
LABEL_118:
                              common::milog::MiLogStream::MiLogStream(
                                (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "src/redis_mgr.cpp",
                                "cmdSRemWithTran",
                                2866);
LABEL_123:
                              tran_ptr = (const common::midb::GetAndSetTranPtr *)"do EXEC failed";
                              common::milog::MiLogStream::operator()(
                                (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
                                "do EXEC failed");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
                              v15 = -1;
                              goto LABEL_126;
                            }
LABEL_121:
                            v48 = __asan_report_load4(v45);
                            goto LABEL_122;
                          }
                        }
                        __asan_report_store1(v45, tran_ptr, v46, v40);
                        goto LABEL_121;
                      }
                      ++v37->_M_use_count;
LABEL_95:
                      tran_ptr = (const common::midb::GetAndSetTranPtr *)this;
                      common::midb::RedisMgr::cmdExecTrans(
                        &conn_ptr,
                        (common::midb::RedisConnPtr)__PAIR128__(&v63, (unsigned __int64)this));
                      goto LABEL_104;
                    }
                    v39 = *(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000);
                    if ( (char)((p_M_use_count & 7) + 3) < v39 || !v39 )
                    {
                      _InterlockedAdd((volatile signed __int32 *)p_M_use_count, 1u);
                      goto LABEL_95;
                    }
LABEL_99:
                    v37 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(
                                                                                 p_M_use_count,
                                                                                 tran_ptr);
                    goto LABEL_100;
                  }
LABEL_98:
                  p_M_use_count = v36;
                  __asan_report_load8(v36);
                  goto LABEL_99;
                }
              }
              v36 = __asan_report_load8(v35);
              goto LABEL_98;
            }
            ++*(_DWORD *)(v25 + 8);
LABEL_49:
            tran_ptr = (const common::midb::GetAndSetTranPtr *)&conn_ptr;
            v28 = common::midb::RedisMgr::cmdSRem(
                    this,
                    (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &conn_ptr),
                    (const std::string *)value_set,
                    v13);
            goto LABEL_83;
          }
          v27 = *(_BYTE *)((v26 >> 3) + 0x7FFF8000);
          if ( (char)((v26 & 7) + 3) < v27 || !v27 )
          {
            _InterlockedAdd((volatile signed __int32 *)v26, 1u);
            goto LABEL_49;
          }
LABEL_78:
          v25 = __asan_report_store4(v26, tran_ptr);
          goto LABEL_79;
        }
LABEL_77:
        v26 = v24;
        __asan_report_load8(v24);
        goto LABEL_78;
      }
LABEL_76:
      v24 = __asan_report_load8(v23);
      goto LABEL_77;
    }
LABEL_75:
    v23 = (_QWORD *)v5;
    __asan_report_load8(v5);
    goto LABEL_76;
  }
  v15 = -1;
LABEL_126:
  v49 = *(_QWORD *)(p_M_node_count + 40);
  if ( !v49 )
    goto LABEL_132;
  v50 = (volatile signed __int32 *)(v49 + 8);
  if ( &_pthread_key_create )
  {
    v51 = *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v50 & 7) + 3) < v51 || !v51 )
    {
      v52 = _InterlockedExchangeAdd(v50, 0xFFFFFFFF);
      goto LABEL_131;
    }
    __asan_report_store4(v50, tran_ptr);
  }
  v54 = *(_BYTE *)(((v49 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v49 + 8) & 7) + 3) >= v54 && v54 )
  {
    __asan_report_load4(v49 + 8);
    goto LABEL_140;
  }
  v52 = *(_DWORD *)(v49 + 8);
  *(_DWORD *)(v49 + 8) = v52 - 1;
LABEL_131:
  if ( v52 != 1 )
    goto LABEL_132;
LABEL_140:
  if ( *(_BYTE *)((v49 >> 3) + 0x7FFF8000) )
  {
    v55 = v49;
    __asan_report_load8(v49);
    goto LABEL_151;
  }
  v55 = *(_QWORD *)v49 + 16LL;
  if ( *(_BYTE *)((v55 >> 3) + 0x7FFF8000) )
  {
LABEL_151:
    __asan_report_load8(v55);
    goto LABEL_152;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v49 + 16LL))(v49);
  v55 = v49 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_153;
  v56 = *(_BYTE *)((v55 >> 3) + 0x7FFF8000);
  if ( (char)((v55 & 7) + 3) < v56 || !v56 )
  {
    v57 = _InterlockedExchangeAdd((volatile signed __int32 *)v55, 0xFFFFFFFF);
    goto LABEL_146;
  }
LABEL_152:
  __asan_report_store4(v55, tran_ptr);
LABEL_153:
  v59 = *(_BYTE *)(((v49 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v49 + 12) & 7) + 3) >= v59 && v59 )
  {
    __asan_report_load4(v49 + 12);
LABEL_157:
    v58 = v49;
    __asan_report_load8(v49);
LABEL_158:
    v60 = (struct _Unwind_Exception *)__asan_report_load8(v58);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    __asan_handle_no_return(&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    _Unwind_Resume(v60);
  }
  v57 = *(_DWORD *)(v49 + 12);
  *(_DWORD *)(v49 + 12) = v57 - 1;
LABEL_146:
  if ( v57 != 1 )
    goto LABEL_132;
  if ( *(_BYTE *)((v49 >> 3) + 0x7FFF8000) )
    goto LABEL_157;
  v58 = *(_QWORD *)v49 + 24LL;
  if ( *(_BYTE *)((v58 >> 3) + 0x7FFF8000) )
    goto LABEL_158;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v49 + 24LL))(v49);
LABEL_132:
  if ( &conn_ptr.pool_ptr_map_._M_t._M_impl._M_node_count == (std::size_t *)p_M_node_count )
  {
    *(_QWORD *)((p_M_node_count >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_node_count = 1172321806LL;
    *(_QWORD *)((p_M_node_count >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v15;
};

// Line 2874: range 000000000CAA64CC-000000000CAA6566
int32_t __fastcall common::midb::RedisMgr::cmdSIsMemberWithTran(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        const std::string *member,
        bool *is_member,
        common::midb::GetAndSetTranPtr *tran_ptr)
{
  int32_t result; // eax
  common::milog::MiLogStream v10[2]; // [rsp+0h] [rbp-48h] BYREF

  if ( common::midb::RedisMgr::initTran(this, index, key, tran_ptr) )
  {
    common::milog::MiLogStream::MiLogStream(
      v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdSIsMemberWithTran",
      2877);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v10[0].ostr_, "initTran failed");
    common::milog::MiLogStream::~MiLogStream(v10);
    return -1;
  }
  else
  {
    result = common::midb::RedisMgr::cmdSIsMember(this, index, key, member, is_member);
    if ( result )
      return -1;
  }
  return result;
};

// Line 2890: range 000000000CAA6568-000000000CAA65F8
int32_t __fastcall common::midb::RedisMgr::cmdZRevRangeByScoreWithTran(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        std::vector<std::string> *value_vec,
        common::midb::GetAndSetTranPtr *tran_ptr)
{
  int32_t result; // eax
  common::milog::MiLogStream v8[2]; // [rsp+0h] [rbp-48h] BYREF

  if ( common::midb::RedisMgr::initTran(this, index, key, tran_ptr) )
  {
    common::milog::MiLogStream::MiLogStream(
      v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdZRevRangeByScoreWithTran",
      2893);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v8[0].ostr_, "initTran failed");
    common::milog::MiLogStream::~MiLogStream(v8);
    return -1;
  }
  else
  {
    result = common::midb::RedisMgr::cmdZRevRangeByScore(this, index, key, value_vec);
    if ( result )
      return -1;
  }
  return result;
};

// Line 2906: range 000000000CAA65FA-000000000CAA668A
int32_t __fastcall common::midb::RedisMgr::cmdZCardWithTran(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        uint32_t *count,
        common::midb::GetAndSetTranPtr *tran_ptr)
{
  int32_t result; // eax
  common::milog::MiLogStream v8[2]; // [rsp+0h] [rbp-48h] BYREF

  if ( common::midb::RedisMgr::initTran(this, index, key, tran_ptr) )
  {
    common::milog::MiLogStream::MiLogStream(
      v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdZCardWithTran",
      2909);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v8[0].ostr_, "initTran failed");
    common::milog::MiLogStream::~MiLogStream(v8);
    return -1;
  }
  else
  {
    result = common::midb::RedisMgr::cmdZCard(this, index, key, count);
    if ( result )
      return -1;
  }
  return result;
};

// Line 2922: range 000000000CAA639E-000000000CAA6438
int32_t __fastcall common::midb::RedisMgr::cmdZScoreWithTran(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        const std::string *member,
        std::string *score,
        common::midb::GetAndSetTranPtr *tran_ptr)
{
  int32_t result; // eax
  common::milog::MiLogStream v10[2]; // [rsp+0h] [rbp-48h] BYREF

  if ( common::midb::RedisMgr::initTran(this, index, key, tran_ptr) )
  {
    common::milog::MiLogStream::MiLogStream(
      v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdZScoreWithTran",
      2925);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v10[0].ostr_, "initTran failed");
    common::milog::MiLogStream::~MiLogStream(v10);
    return -1;
  }
  else
  {
    result = common::midb::RedisMgr::cmdZSCore(this, index, key, member, score);
    if ( result )
      return -1;
  }
  return result;
};

// Line 2986: range 000000000CA8815A-000000000CA88CDF
int32_t __fastcall common::midb::RedisMgr::cmdZAddnxWithTran(
        common::midb::RedisMgr *const this,
        const common::midb::GetAndSetTranPtr *tran_ptr,
        const std::string *key,
        const std::string *member,
        int64_t score,
        bool *is_repeated)
{
  unsigned __int64 v7; // rbp
  unsigned __int64 p_M_node_count; // rbx
  unsigned __int64 v9; // r15
  std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  __int64 p_M_refcount; // rax
  __int64 M_pi; // rax
  unsigned __int64 v13; // rdi
  char v14; // dl
  int64_t v15; // r9
  __int64 v16; // rax
  int32_t v17; // r14d
  char v18; // cl
  unsigned __int64 v19; // r14
  volatile signed __int32 *v20; // rdi
  char v21; // dl
  signed __int32 v22; // eax
  unsigned __int64 v23; // rdi
  char v24; // al
  _QWORD *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rdi
  char v29; // dl
  int32_t v30; // eax
  char v31; // dl
  unsigned __int64 v32; // rdi
  char v33; // dl
  signed __int32 v34; // eax
  char v35; // dl
  char v36; // cl
  __int64 *v37; // rdi
  __int64 v38; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v39; // rax
  unsigned __int64 p_M_use_count; // rdi
  char v41; // dl
  __int64 v42; // rcx
  char v43; // cl
  std::size_t v44; // rdx
  std::size_t v45; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v46; // rdi
  unsigned __int64 v47; // rdi
  __int64 v48; // rdx
  char v49; // al
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int64 v52; // rdi
  char v53; // al
  unsigned __int64 v54; // rdx
  char v55; // al
  __int64 v56; // rcx
  unsigned __int64 v57; // rbp
  volatile signed __int32 *v58; // rdi
  char v59; // dl
  signed __int32 v60; // eax
  char v62; // dl
  unsigned __int64 v63; // rdi
  char v64; // dl
  signed __int32 v65; // eax
  unsigned __int64 v66; // rdi
  char v67; // dl
  struct _Unwind_Exception *v68; // rbx
  __int64 v73; // [rsp+30h] [rbp-B8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v74; // [rsp+38h] [rbp-B0h]
  common::midb::RedisMgr conn_ptr; // [rsp+40h] [rbp-A8h] BYREF

  v7 = (unsigned __int64)tran_ptr;
  p_M_node_count = (unsigned __int64)&conn_ptr.pool_ptr_map_._M_t._M_impl._M_node_count;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v16 = __asan_stack_malloc_0(64LL);
    if ( v16 )
      p_M_node_count = v16;
  }
  *(_QWORD *)p_M_node_count = 1102416563LL;
  *(_QWORD *)(p_M_node_count + 8) = "1 32 16 14 reply_ptr:3008";
  *(_QWORD *)(p_M_node_count + 16) = common::midb::RedisMgr::cmdZAddnxWithTran;
  v9 = p_M_node_count >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)tran_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(tran_ptr);
    goto LABEL_19;
  }
  M_ptr = tran_ptr->_M_ptr;
  if ( !tran_ptr->_M_ptr )
  {
LABEL_19:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdZAddnxWithTran",
      2990);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      "tran_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    v17 = -1;
    goto LABEL_146;
  }
  if ( *(char *)(((unsigned __int64)&M_ptr->is_need_unwatch_ >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(&M_ptr->is_need_unwatch_, tran_ptr, &M_ptr->is_need_unwatch_);
    goto LABEL_21;
  }
  if ( !M_ptr->is_need_unwatch_ )
  {
LABEL_21:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdZAddnxWithTran",
      2997);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      "tran is end, can not re set on one transaction");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    v17 = -1;
    goto LABEL_146;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(M_ptr);
    goto LABEL_23;
  }
  if ( !M_ptr->conn_ptr_._M_ptr )
  {
LABEL_23:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "cmdZAddnxWithTran",
      3003);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<16384> > *const)conn_ptr.pool_ptr_map_._M_t._M_impl._M_header._M_right,
      "conn in tran is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    v17 = -1;
    goto LABEL_146;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
    p_M_refcount = __asan_report_load8(M_ptr);
    goto LABEL_25;
  }
  *(_QWORD *)&conn_ptr.is_init_ = M_ptr->conn_ptr_._M_ptr;
  p_M_refcount = (__int64)&M_ptr->conn_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&M_ptr->conn_ptr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    v13 = p_M_refcount;
    __asan_report_load8(p_M_refcount);
LABEL_26:
    M_pi = __asan_report_store4(v13, tran_ptr);
    goto LABEL_27;
  }
  M_pi = (__int64)M_ptr->conn_ptr_._M_refcount._M_pi;
  *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 = M_pi;
  if ( !M_pi )
  {
LABEL_15:
    tran_ptr = (const common::midb::GetAndSetTranPtr *)this;
    common::midb::RedisMgr::cmdBeginTrans(
      (common::midb::RedisMgr *const)(p_M_node_count + 32),
      (common::midb::RedisConnPtr)__PAIR128__(&conn_ptr, (unsigned __int64)this));
    goto LABEL_31;
  }
  v13 = M_pi + 8;
  if ( &_pthread_key_create )
  {
    v14 = *(_BYTE *)((v13 >> 3) + 0x7FFF8000);
    if ( (char)((v13 & 7) + 3) < v14 || !v14 )
    {
      _InterlockedAdd((volatile signed __int32 *)v13, 1u);
      goto LABEL_15;
    }
    goto LABEL_26;
  }
LABEL_27:
  v18 = *(_BYTE *)(((unsigned __int64)(M_pi + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((M_pi + 8) & 7) + 3) < v18 || !v18 )
  {
    ++*(_DWORD *)(M_pi + 8);
    goto LABEL_15;
  }
  __asan_report_load4(M_pi + 8);
LABEL_31:
  v19 = *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0;
  if ( !*(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 )
    goto LABEL_37;
  v20 = (volatile signed __int32 *)(*(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 + 8LL);
  if ( &_pthread_key_create )
  {
    v21 = *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v20 & 7) + 3) < v21 || !v21 )
    {
      v22 = _InterlockedExchangeAdd(v20, 0xFFFFFFFF);
      goto LABEL_36;
    }
    __asan_report_store4(v20, tran_ptr);
  }
  v31 = *(_BYTE *)(((v19 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v19 + 8) & 7) + 3) >= v31 && v31 )
  {
    __asan_report_load4(v19 + 8);
    goto LABEL_55;
  }
  v22 = *(_DWORD *)(v19 + 8);
  *(_DWORD *)(v19 + 8) = v22 - 1;
LABEL_36:
  if ( v22 != 1 )
    goto LABEL_37;
LABEL_55:
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
  {
    v32 = v19;
    __asan_report_load8(v19);
    goto LABEL_66;
  }
  v32 = *(_QWORD *)v19 + 16LL;
  if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_load8(v32);
    goto LABEL_67;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v19 + 16LL))(v19);
  v32 = v19 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_68;
  v33 = *(_BYTE *)((v32 >> 3) + 0x7FFF8000);
  if ( (char)((v32 & 7) + 3) < v33 || !v33 )
  {
    v34 = _InterlockedExchangeAdd((volatile signed __int32 *)v32, 0xFFFFFFFF);
    goto LABEL_61;
  }
LABEL_67:
  __asan_report_store4(v32, tran_ptr);
LABEL_68:
  v35 = *(_BYTE *)(((v19 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v19 + 12) & 7) + 3) >= v35 && v35 )
  {
    __asan_report_load4(v19 + 12);
LABEL_72:
    v23 = v19;
    __asan_report_load8(v19);
    goto LABEL_73;
  }
  v34 = *(_DWORD *)(v19 + 12);
  *(_DWORD *)(v19 + 12) = v34 - 1;
LABEL_61:
  if ( v34 != 1 )
    goto LABEL_37;
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
    goto LABEL_72;
  v23 = *(_QWORD *)v19 + 24LL;
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    __asan_report_load8(v23);
LABEL_74:
    __asan_report_load4(v23);
    goto LABEL_75;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v19 + 24LL))(v19);
LABEL_37:
  v23 = *(_QWORD *)(p_M_node_count + 32);
  if ( !v23 )
  {
LABEL_138:
    v17 = -1;
    goto LABEL_140;
  }
  v24 = *(_BYTE *)((v23 >> 3) + 0x7FFF8000);
  if ( v24 && v24 <= 3 )
    goto LABEL_74;
  if ( *(_DWORD *)v23 != 6 )
  {
    if ( !*(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    {
      v25 = *(_QWORD **)v7;
      if ( !*(_BYTE *)((*(_QWORD *)v7 >> 3) + 0x7FFF8000LL) )
      {
        *(_QWORD *)&conn_ptr.is_init_ = *v25;
        v26 = (__int64)(v25 + 1);
        if ( !*(_BYTE *)(((unsigned __int64)(v25 + 1) >> 3) + 0x7FFF8000) )
        {
          v27 = v25[1];
          *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 = v27;
          if ( !v27 )
            goto LABEL_49;
          v28 = v27 + 8;
          if ( !&_pthread_key_create )
          {
LABEL_79:
            v36 = *(_BYTE *)(((unsigned __int64)(v27 + 8) >> 3) + 0x7FFF8000);
            if ( (char)(((v27 + 8) & 7) + 3) >= v36 && v36 )
            {
              v30 = __asan_report_load4(v27 + 8);
LABEL_83:
              v17 = v30;
              if ( *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 )
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(*(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *const *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0);
              if ( v17 )
              {
                v17 = -1;
                goto LABEL_140;
              }
              if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
              {
                v37 = (__int64 *)v7;
                __asan_report_load8(v7);
              }
              else
              {
                v37 = *(__int64 **)v7;
                if ( !*(_BYTE *)((*(_QWORD *)v7 >> 3) + 0x7FFF8000LL) )
                {
                  v73 = *v37;
                  v38 = (__int64)(v37 + 1);
                  if ( !*(_BYTE *)(((unsigned __int64)(v37 + 1) >> 3) + 0x7FFF8000) )
                  {
                    v39 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v37[1];
                    v74 = v39;
                    if ( !v39 )
                      goto LABEL_95;
                    p_M_use_count = (unsigned __int64)&v39->_M_use_count;
                    if ( !&_pthread_key_create )
                    {
LABEL_100:
                      v43 = *(_BYTE *)(((unsigned __int64)&v39->_M_use_count >> 3) + 0x7FFF8000);
                      if ( (char)((((_BYTE)v39 + 8) & 7) + 3) >= v43 && v43 )
                      {
                        __asan_report_load4(&v39->_M_use_count);
LABEL_104:
                        v44 = *(_QWORD *)&conn_ptr.is_init_;
                        v45 = *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0;
                        *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 = 0LL;
                        *(_QWORD *)&conn_ptr.is_init_ = 0LL;
                        *(_QWORD *)(p_M_node_count + 32) = v44;
                        v46 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_M_node_count + 40);
                        *(_QWORD *)(p_M_node_count + 40) = v45;
                        if ( v46 )
                          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v46);
                        if ( *(_QWORD *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0 )
                          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(*(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *const *)conn_ptr.pool_ptr_map_._M_t._M_impl.gap0);
                        if ( v74 )
                          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v74);
                        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
                        {
                          v47 = v7;
                          __asan_report_load8(v7);
                        }
                        else
                        {
                          v47 = *(_QWORD *)v7 + 16LL;
                          v48 = *(unsigned __int8 *)((v47 >> 3) + 0x7FFF8000);
                          if ( (v48 & 0x80u) == 0LL )
                          {
                            *(_BYTE *)(*(_QWORD *)v7 + 16LL) = 0;
                            v47 = *(_QWORD *)(p_M_node_count + 32);
                            if ( !v47 )
                              goto LABEL_134;
                            v49 = *(_BYTE *)((v47 >> 3) + 0x7FFF8000);
                            if ( !v49 || v49 > 3 )
                            {
                              if ( *(_DWORD *)v47 != 2 )
                                goto LABEL_134;
                              v50 = v47 + 48;
                              if ( !*(_BYTE *)(((v47 + 48) >> 3) + 0x7FFF8000) )
                              {
                                if ( *(_QWORD *)(v47 + 48) )
                                {
                                  v51 = v47 + 56;
                                  if ( !*(_BYTE *)(((v47 + 56) >> 3) + 0x7FFF8000) )
                                  {
                                    v52 = *(_QWORD *)(v47 + 56);
                                    if ( !*(_BYTE *)((v52 >> 3) + 0x7FFF8000) )
                                    {
                                      v52 = *(_QWORD *)v52;
                                      v53 = *(_BYTE *)((v52 >> 3) + 0x7FFF8000);
                                      if ( !v53 || v53 > 3 )
                                      {
                                        if ( *(_DWORD *)v52 != 3 )
                                        {
                                          common::milog::MiLogStream::MiLogStream(
                                            (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            3u,
                                            "src/redis_mgr.cpp",
                                            "cmdZAddnxWithTran",
                                            3033);
                                          tran_ptr = (const common::midb::GetAndSetTranPtr *)"do EXEC failed";
                                          common::milog::MiLogStream::operator()(
                                            (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
                                            "do EXEC failed");
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
                                          v17 = -1;
                                          goto LABEL_140;
                                        }
                                        v54 = (v52 + 8) >> 3;
                                        if ( *(_BYTE *)(v54 + 0x7FFF8000) )
                                        {
                                          __asan_report_load8(v52 + 8);
                                        }
                                        else
                                        {
                                          LOBYTE(v54) = *(_QWORD *)(v52 + 8) == 0LL;
                                          v55 = *(_BYTE *)(((unsigned __int64)is_repeated >> 3) + 0x7FFF8000);
                                          v56 = (unsigned __int8)is_repeated & 7;
                                          if ( v55 > ((unsigned __int8)is_repeated & 7) || !v55 )
                                          {
                                            *is_repeated = v54;
                                            goto LABEL_140;
                                          }
                                        }
                                        __asan_report_store1(is_repeated, tran_ptr, v54, v56);
                                        goto LABEL_138;
                                      }
                                      goto LABEL_133;
                                    }
LABEL_132:
                                    __asan_report_load8(v52);
LABEL_133:
                                    __asan_report_load4(v52);
                                    goto LABEL_134;
                                  }
LABEL_131:
                                  v52 = v51;
                                  __asan_report_load8(v51);
                                  goto LABEL_132;
                                }
LABEL_134:
                                common::milog::MiLogStream::MiLogStream(
                                  (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  3u,
                                  "src/redis_mgr.cpp",
                                  "cmdZAddnxWithTran",
                                  3027);
                                tran_ptr = (const common::midb::GetAndSetTranPtr *)"do EXEC failed";
                                common::milog::MiLogStream::operator()(
                                  (common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header,
                                  "do EXEC failed");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
                                v17 = -1;
                                goto LABEL_140;
                              }
LABEL_130:
                              v51 = __asan_report_load8(v50);
                              goto LABEL_131;
                            }
LABEL_129:
                            v50 = __asan_report_load4(v47);
                            goto LABEL_130;
                          }
                        }
                        __asan_report_store1(v47, tran_ptr, v48, v42);
                        goto LABEL_129;
                      }
                      ++v39->_M_use_count;
LABEL_95:
                      tran_ptr = (const common::midb::GetAndSetTranPtr *)this;
                      common::midb::RedisMgr::cmdExecTrans(
                        &conn_ptr,
                        (common::midb::RedisConnPtr)__PAIR128__(&v73, (unsigned __int64)this));
                      goto LABEL_104;
                    }
                    v41 = *(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000);
                    if ( (char)((p_M_use_count & 7) + 3) < v41 || !v41 )
                    {
                      _InterlockedAdd((volatile signed __int32 *)p_M_use_count, 1u);
                      goto LABEL_95;
                    }
LABEL_99:
                    v39 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(
                                                                                 p_M_use_count,
                                                                                 tran_ptr);
                    goto LABEL_100;
                  }
LABEL_98:
                  p_M_use_count = v38;
                  __asan_report_load8(v38);
                  goto LABEL_99;
                }
              }
              v38 = __asan_report_load8(v37);
              goto LABEL_98;
            }
            ++*(_DWORD *)(v27 + 8);
LABEL_49:
            tran_ptr = (const common::midb::GetAndSetTranPtr *)&conn_ptr;
            v30 = common::midb::RedisMgr::cmdZAddnx(
                    this,
                    (common::midb::RedisConnPtr)__PAIR128__((unsigned __int64)key, &conn_ptr),
                    member,
                    (const std::string *)score,
                    v15);
            goto LABEL_83;
          }
          v29 = *(_BYTE *)((v28 >> 3) + 0x7FFF8000);
          if ( (char)((v28 & 7) + 3) < v29 || !v29 )
          {
            _InterlockedAdd((volatile signed __int32 *)v28, 1u);
            goto LABEL_49;
          }
LABEL_78:
          v27 = __asan_report_store4(v28, tran_ptr);
          goto LABEL_79;
        }
LABEL_77:
        v28 = v26;
        __asan_report_load8(v26);
        goto LABEL_78;
      }
LABEL_76:
      v26 = __asan_report_load8(v25);
      goto LABEL_77;
    }
LABEL_75:
    v25 = (_QWORD *)v7;
    __asan_report_load8(v7);
    goto LABEL_76;
  }
  v17 = -1;
LABEL_140:
  v57 = *(_QWORD *)(p_M_node_count + 40);
  if ( !v57 )
    goto LABEL_146;
  v58 = (volatile signed __int32 *)(v57 + 8);
  if ( &_pthread_key_create )
  {
    v59 = *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v58 & 7) + 3) < v59 || !v59 )
    {
      v60 = _InterlockedExchangeAdd(v58, 0xFFFFFFFF);
      goto LABEL_145;
    }
    __asan_report_store4(v58, tran_ptr);
  }
  v62 = *(_BYTE *)(((v57 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v57 + 8) & 7) + 3) >= v62 && v62 )
  {
    __asan_report_load4(v57 + 8);
    goto LABEL_154;
  }
  v60 = *(_DWORD *)(v57 + 8);
  *(_DWORD *)(v57 + 8) = v60 - 1;
LABEL_145:
  if ( v60 != 1 )
    goto LABEL_146;
LABEL_154:
  if ( *(_BYTE *)((v57 >> 3) + 0x7FFF8000) )
  {
    v63 = v57;
    __asan_report_load8(v57);
    goto LABEL_165;
  }
  v63 = *(_QWORD *)v57 + 16LL;
  if ( *(_BYTE *)((v63 >> 3) + 0x7FFF8000) )
  {
LABEL_165:
    __asan_report_load8(v63);
    goto LABEL_166;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v57 + 16LL))(v57);
  v63 = v57 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_167;
  v64 = *(_BYTE *)((v63 >> 3) + 0x7FFF8000);
  if ( (char)((v63 & 7) + 3) < v64 || !v64 )
  {
    v65 = _InterlockedExchangeAdd((volatile signed __int32 *)v63, 0xFFFFFFFF);
    goto LABEL_160;
  }
LABEL_166:
  __asan_report_store4(v63, tran_ptr);
LABEL_167:
  v67 = *(_BYTE *)(((v57 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v57 + 12) & 7) + 3) >= v67 && v67 )
  {
    __asan_report_load4(v57 + 12);
LABEL_171:
    v66 = v57;
    __asan_report_load8(v57);
LABEL_172:
    v68 = (struct _Unwind_Exception *)__asan_report_load8(v66);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    __asan_handle_no_return(&conn_ptr.pool_ptr_map_._M_t._M_impl.std::_Rb_tree_header);
    _Unwind_Resume(v68);
  }
  v65 = *(_DWORD *)(v57 + 12);
  *(_DWORD *)(v57 + 12) = v65 - 1;
LABEL_160:
  if ( v65 != 1 )
    goto LABEL_146;
  if ( *(_BYTE *)((v57 >> 3) + 0x7FFF8000) )
    goto LABEL_171;
  v66 = *(_QWORD *)v57 + 24LL;
  if ( *(_BYTE *)((v66 >> 3) + 0x7FFF8000) )
    goto LABEL_172;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v57 + 24LL))(v57);
LABEL_146:
  if ( &conn_ptr.pool_ptr_map_._M_t._M_impl._M_node_count == (std::size_t *)p_M_node_count )
  {
    *(_QWORD *)((p_M_node_count >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_node_count = 1172321806LL;
    *(_QWORD *)((p_M_node_count >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v17;
};

// Line 3092: range 000000000CA7DFE0-000000000CA7E4B6
int32_t __fastcall common::midb::RedisMgr::freeGetAndSetTran(
        common::midb::RedisMgr *const this,
        common::midb::GetAndSetTran *tran_ptr)
{
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  common::midb::RedisMgr *p_M_use_count; // rdx
  char v6; // cl
  common::midb::RedisMgr *v7; // rsi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v9; // rbp
  volatile signed __int32 *v10; // rdi
  char v11; // dl
  signed __int32 M_use_count; // eax
  _Atomic_word *v13; // rdi
  char v14; // dl
  signed __int32 v15; // eax
  char v16; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v18; // dl
  signed __int32 M_weak_count; // eax
  char v20; // dl
  char v21; // dl
  volatile signed __int32 *v22; // rdi
  char v23; // dl
  signed __int32 v24; // eax
  unsigned __int64 v25; // rdi
  char v26; // dl
  struct _Unwind_Exception *v27; // rbx
  std::__shared_ptr<common::midb::RedisConnBase,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // [rsp+0h] [rbp-58h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v29; // [rsp+8h] [rbp-50h]
  char v30; // [rsp+10h] [rbp-48h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v31; // [rsp+18h] [rbp-40h]
  common::milog::MiLogStream v32; // [rsp+20h] [rbp-38h] BYREF

  if ( !tran_ptr )
  {
    common::milog::MiLogStream::MiLogStream(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "freeGetAndSetTran",
      3095);
    common::milog::MiLogStream::operator()(&v32, "ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v32);
    return -1;
  }
  if ( *(char *)(((unsigned __int64)&tran_ptr->is_need_unwatch_ >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(&tran_ptr->is_need_unwatch_, tran_ptr, &tran_ptr->is_need_unwatch_);
LABEL_14:
    p_M_refcount = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)__asan_report_load8(tran_ptr);
    goto LABEL_15;
  }
  if ( !tran_ptr->is_need_unwatch_ )
    goto LABEL_33;
  if ( *(_BYTE *)(((unsigned __int64)tran_ptr >> 3) + 0x7FFF8000) )
    goto LABEL_14;
  M_ptr = tran_ptr->conn_ptr_._M_ptr;
  p_M_refcount = &tran_ptr->conn_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&tran_ptr->conn_ptr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8(p_M_refcount);
LABEL_16:
    this = p_M_use_count;
    M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count, tran_ptr);
    goto LABEL_17;
  }
  M_pi = tran_ptr->conn_ptr_._M_refcount._M_pi;
  v29 = M_pi;
  if ( !M_pi )
  {
LABEL_11:
    v7 = this;
    common::midb::RedisMgr::cmdUnwatch(
      (common::midb::RedisMgr *const)&v30,
      (common::midb::RedisConnPtr)__PAIR128__(&M_ptr, (unsigned __int64)this));
    goto LABEL_21;
  }
  p_M_use_count = (common::midb::RedisMgr *)&M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v6 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v6 || !v6 )
    {
      _InterlockedAdd((volatile signed __int32 *)&p_M_use_count->is_init_, 1u);
      goto LABEL_11;
    }
    goto LABEL_16;
  }
LABEL_17:
  v7 = (common::midb::RedisMgr *)*(unsigned __int8 *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) < (char)v7 || !(_BYTE)v7 )
  {
    ++M_pi->_M_use_count;
    goto LABEL_11;
  }
  __asan_report_load4(&M_pi->_M_use_count);
LABEL_21:
  v9 = v31;
  if ( !v31 )
    goto LABEL_27;
  v10 = &v31->_M_use_count;
  if ( &_pthread_key_create )
  {
    v11 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v10 & 7) + 3) < v11 || !v11 )
    {
      M_use_count = _InterlockedExchangeAdd(v10, 0xFFFFFFFF);
      goto LABEL_26;
    }
    __asan_report_store4(v10, v7);
  }
  v16 = *(_BYTE *)(((unsigned __int64)&v9->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v9 + 8) & 7) + 3) >= v16 && v16 )
  {
    __asan_report_load4(&v9->_M_use_count);
    goto LABEL_39;
  }
  M_use_count = v9->_M_use_count;
  v9->_M_use_count = M_use_count - 1;
LABEL_26:
  if ( M_use_count != 1 )
    goto LABEL_27;
LABEL_39:
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)v9;
    __asan_report_load8(v9);
    goto LABEL_50;
  }
  p_M_weak_count = (volatile signed __int32 *)(v9->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_51;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v9->_vptr__Sp_counted_base + 2))(v9);
  p_M_weak_count = &v9->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_52;
  v18 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v18 || !v18 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_45;
  }
LABEL_51:
  __asan_report_store4(p_M_weak_count, v7);
LABEL_52:
  v20 = *(_BYTE *)(((unsigned __int64)&v9->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v9 + 12) & 7) + 3) >= v20 && v20 )
  {
    __asan_report_load4(&v9->_M_weak_count);
LABEL_56:
    v13 = (_Atomic_word *)v9;
    __asan_report_load8(v9);
    goto LABEL_57;
  }
  M_weak_count = v9->_M_weak_count;
  v9->_M_weak_count = M_weak_count - 1;
LABEL_45:
  if ( M_weak_count != 1 )
    goto LABEL_27;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    goto LABEL_56;
  v13 = (_Atomic_word *)(v9->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_load8(v13);
    goto LABEL_58;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v9->_vptr__Sp_counted_base + 3))(v9);
LABEL_27:
  v9 = v29;
  if ( v29 )
  {
    v13 = &v29->_M_use_count;
    if ( !&_pthread_key_create )
      goto LABEL_59;
    v14 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v13 & 7) + 3) < v14 || !v14 )
    {
      v15 = _InterlockedExchangeAdd(v13, 0xFFFFFFFF);
      goto LABEL_32;
    }
LABEL_58:
    __asan_report_store4(v13, v7);
LABEL_59:
    v21 = *(_BYTE *)(((unsigned __int64)&v9->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v9 + 8) & 7) + 3) >= v21 && v21 )
    {
      __asan_report_load4(&v9->_M_use_count);
      goto LABEL_63;
    }
    v15 = v9->_M_use_count;
    v9->_M_use_count = v15 - 1;
LABEL_32:
    if ( v15 != 1 )
      goto LABEL_33;
LABEL_63:
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      v22 = (volatile signed __int32 *)v9;
      __asan_report_load8(v9);
    }
    else
    {
      v22 = (volatile signed __int32 *)(v9->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v9->_vptr__Sp_counted_base + 2))(v9);
        v22 = &v9->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_76;
        v23 = *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v22 & 7) + 3) < v23 || !v23 )
        {
          v24 = _InterlockedExchangeAdd(v22, 0xFFFFFFFF);
          goto LABEL_69;
        }
LABEL_75:
        __asan_report_store4(v22, v7);
LABEL_76:
        v26 = *(_BYTE *)(((unsigned __int64)&v9->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v9 + 12) & 7) + 3) >= v26 && v26 )
        {
          __asan_report_load4(&v9->_M_weak_count);
          goto LABEL_80;
        }
        v24 = v9->_M_weak_count;
        v9->_M_weak_count = v24 - 1;
LABEL_69:
        if ( v24 != 1 )
          goto LABEL_33;
        if ( !*(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          v25 = (unsigned __int64)(v9->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v9->_vptr__Sp_counted_base + 3))(v9);
            goto LABEL_33;
          }
LABEL_81:
          v27 = (struct _Unwind_Exception *)__asan_report_load8(v25);
          common::milog::MiLogStream::~MiLogStream(&v32);
          __asan_handle_no_return(&v32);
          _Unwind_Resume(v27);
        }
LABEL_80:
        v25 = (unsigned __int64)v9;
        __asan_report_load8(v9);
        goto LABEL_81;
      }
    }
    __asan_report_load8(v22);
    goto LABEL_75;
  }
LABEL_33:
  common::midb::GetAndSetTran::~GetAndSetTran(tran_ptr);
  operator delete(tran_ptr, 0x18uLL);
  return 0;
};

// Line 3112: range 000000000CAA55F0-000000000CAA6306
int32_t __fastcall common::midb::RedisMgr::initTran(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::string *key,
        common::midb::GetAndSetTranPtr *tran_ptr)
{
  unsigned __int64 v6; // r14
  _DWORD *v7; // r15
  __int64 v8; // rax
  std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type *M_string_length; // r12
  common::midb::RedisMgr *v10; // rsi
  __int64 v11; // rax
  common::milog::MilogStringStream *ostr; // rdi
  char v13; // dl
  common::midb::GetAndSetTran *v14; // rax
  unsigned __int64 v15; // rdx
  int32_t v16; // ebp
  char *cur; // rdi
  size_t v18; // rbp
  char v19; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v21; // rdi
  char *p_is_init; // rsi
  char v23; // al
  __m128i *p_M_weak_count; // rdx
  char v25; // cl
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 p_M_use_count; // rax
  void *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  unsigned __int64 v31; // rdi
  void *p_M_string_length; // rdi
  void *v33; // rax
  unsigned __int64 v34; // rdi
  void (__fastcall *v35)(unsigned __int64, std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type *, __int64); // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // rax
  std::string *v38; // rbp
  char *v39; // rcx
  unsigned __int64 v40; // rdi
  std::string *v41; // r12
  std::string *v42; // rdi
  __int64 v43; // rcx
  std::_Vector_base<std::string>::pointer M_finish; // r12
  std::_Vector_base<std::string>::pointer i; // rbp
  std::string::pointer M_p; // rdi
  std::string *v47; // rbp
  unsigned __int64 p_is_need_unwatch; // rdi
  __int64 v49; // rdx
  char v50; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v51; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v52; // rdi
  __int64 v54; // r12
  std::string::size_type v55; // rdi
  void *v56; // rdi
  size_t v57; // rbp
  unsigned __int64 v58; // rdx
  const char *v59; // rax
  __int64 v60; // r12
  std::string::size_type v61; // rdi
  void *v62; // rdi
  size_t v63; // rbp
  __int64 v64; // rax
  struct _Unwind_Exception *v65; // rbx
  std::string::pointer v66; // rdi
  common::midb::RedisMgr *thisb; // [rsp+8h] [rbp-210h]
  std::string *v70; // [rsp+20h] [rbp-1F8h]
  void (__fastcall *v71)(unsigned __int64, common::midb::RedisMgr *, std::vector<std::string> *); // [rsp+28h] [rbp-1F0h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v72; // [rsp+38h] [rbp-1E0h]
  __m128i v73; // [rsp+80h] [rbp-198h] BYREF
  common::midb::RedisMgr *v74; // [rsp+90h] [rbp-188h]
  int32_t (__fastcall *v75)(common::midb::RedisMgr *const, common::midb::GetAndSetTran *); // [rsp+A0h] [rbp-178h]
  __int64 v76; // [rsp+A8h] [rbp-170h]
  __m128i v77[2]; // [rsp+C0h] [rbp-158h] BYREF
  std::vector<std::string> v78; // [rsp+E0h] [rbp-138h] BYREF
  common::milog::MiLogStream v79; // [rsp+100h] [rbp-118h] BYREF
  std::string s; // [rsp+120h] [rbp-F8h] BYREF
  std::string v81; // [rsp+140h] [rbp-D8h] BYREF
  char v82[184]; // [rsp+160h] [rbp-B8h] BYREF

  v6 = (unsigned __int64)v82;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(128LL);
    if ( v8 )
      v6 = v8;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 48 1 4 __a2 64 16 13 conn_ptr:3121 96 16 7 __guard";
  *(_QWORD *)(v6 + 16) = common::midb::RedisMgr::initTran;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -219021312;
  v7[536862723] = -202178560;
  s._M_dataplus._M_p = s._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&s, &byte_1A0CF744[-4], byte_1A0CF744, (std::forward_iterator_tag)tran_ptr);
  common::tools::StringUtils::trim(&v81, key, &s, 1);
  M_string_length = (std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type *)v81._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v81._M_dataplus._M_p != &v81._anon_0 )
    operator delete(v81._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s._M_dataplus._M_p != &s._anon_0 )
    operator delete(s._M_dataplus._M_p);
  if ( !M_string_length )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v81,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "initTran",
      3116);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v81, "key is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v81);
    v16 = -1;
    goto LABEL_113;
  }
  v10 = this;
  common::midb::RedisMgr::grabConn(this, index);
  if ( *(_QWORD *)(v6 + 64) )
  {
    *(_QWORD *)(v6 + 96) = *(_QWORD *)(v6 + 64);
    v11 = *(_QWORD *)(v6 + 72);
    *(_QWORD *)(v6 + 104) = v11;
    if ( !v11 )
      goto LABEL_16;
    ostr = (common::milog::MilogStringStream *)(v11 + 8);
    if ( !&_pthread_key_create )
      goto LABEL_27;
    v13 = *(_BYTE *)(((unsigned __int64)ostr >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)ostr & 7) + 3) < v13 || !v13 )
    {
      _InterlockedAdd((volatile signed __int32 *)ostr, 1u);
      goto LABEL_16;
    }
  }
  else
  {
    v10 = (common::midb::RedisMgr *)&common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      &v79,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "initTran",
      3124);
    M_string_length = (std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type *)v79.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v79.ostr_ >> 3) + 0x7FFF8000) )
    {
      ostr = v79.ostr_;
      __asan_report_load8(v79.ostr_);
    }
    else
    {
      key = (const std::string *)(v79.ostr_->buffer_.data_ + 0x4000);
      ostr = (common::milog::MilogStringStream *)&v79.ostr_->buffer_.cur_;
      if ( !*(_BYTE *)(((unsigned __int64)&v79.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      {
        cur = v79.ostr_->buffer_.cur_;
        v18 = (int)key - (int)cur;
        if ( v18 > 0xF )
          v18 = 16LL;
        memcpy(cur, "grab conn failed", v18);
        M_string_length->conn_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((char *)M_string_length->conn_ptr_._M_refcount._M_pi + v18);
        common::milog::MiLogStream::~MiLogStream(&v79);
        v16 = -1;
        goto LABEL_111;
      }
    }
    __asan_report_load8(ostr);
  }
  v11 = __asan_report_store4(ostr, v10);
LABEL_27:
  v19 = *(_BYTE *)(((unsigned __int64)(v11 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v11 + 8) & 7) + 3) >= v19 && v19 )
  {
    __asan_report_load4(v11 + 8);
    goto LABEL_31;
  }
  ++*(_DWORD *)(v11 + 8);
LABEL_16:
  v14 = (common::midb::GetAndSetTran *)operator new(0x18uLL, &std::nothrow);
  M_string_length = v14;
  if ( v14 )
    common::midb::GetAndSetTran::GetAndSetTran(v14, (common::midb::RedisConnPtr)__PAIR128__(v15, v6 + 96));
LABEL_31:
  v20 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 104);
  if ( v20 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
  if ( !M_string_length )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&s,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "initTran",
      3133);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&s._anon_0._M_allocated_capacity + 1),
      "new tran failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&s);
    v16 = -1;
    goto LABEL_111;
  }
  v75 = common::midb::RedisMgr::freeGetAndSetTran;
  v76 = 0LL;
  v73.m128i_i64[0] = (__int64)common::midb::RedisMgr::freeGetAndSetTran;
  v73.m128i_i64[1] = 0LL;
  v74 = this;
  std::__allocate_guarded<std::allocator<std::_Sp_counted_deleter<common::midb::GetAndSetTran *,std::_Bind<int (common::midb::RedisMgr::*)(common::midb::GetAndSetTran *) ()(common::midb::RedisMgr*,std::_Placeholder<1>)>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_deleter<common::midb::GetAndSetTran*,std::_Bind<int (common::midb::RedisMgr::*(common::midb::RedisMgr*,std::_Placeholder<1>))(common::midb::GetAndSetTran*)>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> > *)(v6 + 48));
  v21 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 104);
  *(__m128i *)&v78._M_impl._M_start = _mm_load_si128(&v73);
  p_is_init = (char *)&v74->is_init_;
  v23 = *(_BYTE *)(((unsigned __int64)&v21->_M_use_count >> 3) + 0x7FFF8000);
  if ( v23 && v23 <= 3 )
  {
    __asan_report_store4(&v21->_M_use_count, v74);
LABEL_54:
    v21 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)p_M_weak_count;
    __asan_report_store4(p_M_weak_count, p_is_init);
    goto LABEL_55;
  }
  v21->_M_use_count = 1;
  p_M_weak_count = (__m128i *)&v21->_M_weak_count;
  v25 = *(_BYTE *)(((unsigned __int64)&v21->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v21 + 12) & 7) + 3) >= v25 && v25 )
    goto LABEL_54;
  v21->_M_weak_count = 1;
  if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    v26 = __asan_report_store8(v21, p_is_init);
    goto LABEL_56;
  }
  v21->_vptr__Sp_counted_base = (int (**)(...))(&`vtable for'std::_Sp_counted_deleter<common::midb::GetAndSetTran *,std::_Bind<int (common::midb::RedisMgr::*)(common::midb::GetAndSetTran *) ()(common::midb::RedisMgr*,std::_Placeholder<1>)>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                                              + 2);
  v77[0] = _mm_load_si128((const __m128i *)&v78);
  v26 = (__int64)&v21[1];
  if ( *(_WORD *)(((unsigned __int64)&v21[1] >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    v27 = __asan_report_store16(v26);
    goto LABEL_57;
  }
  v21[1] = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>)_mm_load_si128(v77);
  v27 = (__int64)&v21[2];
  if ( *(_BYTE *)(((unsigned __int64)&v21[2] >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    p_M_use_count = __asan_report_store8(v27, p_is_init);
    goto LABEL_58;
  }
  v21[2]._vptr__Sp_counted_base = (int (**)(...))p_is_init;
  p_M_use_count = (__int64)&v21[2]._M_use_count;
  if ( *(_BYTE *)(((unsigned __int64)&v21[2]._M_use_count >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_store8(p_M_use_count, p_is_init);
    goto LABEL_59;
  }
  *(_QWORD *)&v21[2]._M_use_count = M_string_length;
  v72 = v21;
  if ( *(_BYTE *)(((unsigned __int64)tran_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    p_M_refcount = tran_ptr;
    __asan_report_store8(tran_ptr, p_is_init);
LABEL_60:
    v33 = (void *)__asan_report_load8(p_M_refcount);
    __cxa_begin_catch(v33);
    v34 = (unsigned __int64)v74 + v73.m128i_i64[1];
    v35 = (void (__fastcall *)(unsigned __int64, std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type *, __int64))v73.m128i_i64[0];
    v36 = v73.m128i_i64[0];
    if ( (v73.m128i_i8[0] & 1) != 0 )
    {
      if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v34);
      v37 = v36 + *(_QWORD *)v34 - 1;
      v36 = v37 >> 3;
      if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
      {
        v34 = v37;
        v37 = __asan_report_load8(v37);
      }
      v35 = *(void (__fastcall **)(unsigned __int64, std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type *, __int64))v37;
    }
    v35(v34, M_string_length, v36);
    __asan_handle_no_return(v34);
    __cxa_rethrow();
  }
  tran_ptr->_M_ptr = M_string_length;
  p_M_refcount = &tran_ptr->_M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&tran_ptr->_M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_60;
  M_pi = tran_ptr->_M_refcount._M_pi;
  tran_ptr->_M_refcount._M_pi = v72;
  if ( M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(M_pi);
  thisb = *(common::midb::RedisMgr **)(v6 + 64);
  if ( *(_BYTE *)(((unsigned __int64)thisb >> 3) + 0x7FFF8000) )
  {
    v31 = *(_QWORD *)(v6 + 64);
    __asan_report_load8(thisb);
    goto LABEL_68;
  }
  v31 = *(_QWORD *)&thisb->is_init_ + 72LL;
  if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_load8(v31);
    goto LABEL_69;
  }
  v71 = *(void (__fastcall **)(unsigned __int64, common::midb::RedisMgr *, std::vector<std::string> *))(*(_QWORD *)&thisb->is_init_ + 72LL);
  v81._M_dataplus._M_p = v81._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    p_M_string_length = (void *)key;
    __asan_report_load8(key);
    goto LABEL_70;
  }
  p_is_init = key->_M_dataplus._M_p;
  p_M_string_length = &key->_M_string_length;
  if ( !*(_BYTE *)(((unsigned __int64)&key->_M_string_length >> 3) + 0x7FFF8000) )
  {
    std::string::_M_construct<char *>(
      &v81,
      p_is_init,
      &p_is_init[key->_M_string_length],
      (std::forward_iterator_tag)v25);
    goto LABEL_71;
  }
LABEL_70:
  __asan_report_load8(p_M_string_length);
LABEL_71:
  memset(&v78, 0, sizeof(v78));
  v38 = &v81;
  v39 = v82;
  v40 = (v82 - (char *)&v81) >> 5;
  if ( v40 > 0x3FFFFFFFFFFFFFFLL )
  {
    __asan_handle_no_return(v40);
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  }
  if ( v40 )
    v70 = (std::string *)operator new(32 * v40);
  else
    v70 = 0LL;
  v78._M_impl._M_start = v70;
  v78._M_impl._M_end_of_storage = (std::string *)((char *)v70 + v82 - (char *)&v81);
  v41 = v70;
  while ( v82 != (char *)v38 )
  {
    v42 = v41;
    if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8(v41, p_is_init);
LABEL_78:
      __asan_report_load8(v42);
LABEL_79:
      __asan_report_load8(v42);
      goto LABEL_80;
    }
    v41->_M_dataplus._M_p = v41->_anon_0._M_local_buf;
    v42 = v38;
    if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
      goto LABEL_78;
    p_is_init = v38->_M_dataplus._M_p;
    v42 = (std::string *)&v38->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&v38->_M_string_length >> 3) + 0x7FFF8000) )
      goto LABEL_79;
    std::string::_M_construct<char *>(v41, p_is_init, &p_is_init[v38->_M_string_length], (std::forward_iterator_tag)v39);
LABEL_80:
    ++v38;
    ++v41;
  }
  v78._M_impl._M_finish = v41;
  v71(v6 + 96, thisb, &v78);
  M_finish = v78._M_impl._M_finish;
  for ( i = v78._M_impl._M_start; M_finish != i; ++i )
  {
    M_p = (std::string::pointer)i;
    if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(i);
LABEL_88:
      operator delete(M_p);
      continue;
    }
    M_p = i->_M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)i->_M_dataplus._M_p != &i->_anon_0 )
      goto LABEL_88;
  }
  if ( v78._M_impl._M_start )
    operator delete(v78._M_impl._M_start);
  v47 = (std::string *)v82;
  while ( v47 != &v81 )
  {
    if ( *(_BYTE *)(((unsigned __int64)--v47 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v47);
      break;
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v47->_M_dataplus._M_p != &v47->_anon_0 )
      operator delete(v47->_M_dataplus._M_p);
  }
  if ( *(_BYTE *)(((unsigned __int64)tran_ptr >> 3) + 0x7FFF8000) )
  {
    p_is_need_unwatch = (unsigned __int64)tran_ptr;
    __asan_report_load8(tran_ptr);
    goto LABEL_117;
  }
  p_is_need_unwatch = (unsigned __int64)&tran_ptr->_M_ptr->is_need_unwatch_;
  v49 = *(unsigned __int8 *)((p_is_need_unwatch >> 3) + 0x7FFF8000);
  if ( (v49 & 0x80u) != 0LL )
  {
LABEL_117:
    __asan_report_store1(p_is_need_unwatch, thisb, v49, v43);
LABEL_118:
    __asan_report_load4(p_is_need_unwatch);
LABEL_119:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v81,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "initTran",
      3145);
    v54 = *(&v81._anon_0._M_allocated_capacity + 1);
    if ( *(_BYTE *)((*(&v81._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
    {
      v55 = *(&v81._anon_0._M_allocated_capacity + 1);
      __asan_report_load8(*(&v81._anon_0._M_allocated_capacity + 1));
    }
    else
    {
      v55 = *(&v81._anon_0._M_allocated_capacity + 1) + 8;
      if ( !*(_BYTE *)(((*(&v81._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
      {
        v56 = *(void **)(*(&v81._anon_0._M_allocated_capacity + 1) + 8);
        v57 = **((_DWORD **)&v81._anon_0._M_allocated_capacity + 1) + 0x4000 - (int)v56;
        if ( v57 > 0xA )
          v57 = 11LL;
        memcpy(v56, "conn error:", v57);
        *(_QWORD *)(v54 + 8) += v57;
        v55 = *(_QWORD *)(v6 + 64);
        if ( !*(_BYTE *)((v55 >> 3) + 0x7FFF8000) )
        {
          v58 = *(_QWORD *)v55 + 120LL;
          if ( !*(_BYTE *)((v58 >> 3) + 0x7FFF8000) )
          {
            v59 = (const char *)(*(__int64 (**)(void))(*(_QWORD *)v55 + 120LL))();
            goto LABEL_130;
          }
LABEL_129:
          v59 = (const char *)__asan_report_load8(v58);
LABEL_130:
          common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
            *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&v81._anon_0._M_allocated_capacity
            + 1),
            v59);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v81);
          if ( !*(_QWORD *)(v6 + 96) )
          {
LABEL_137:
            v16 = -1;
            goto LABEL_109;
          }
          common::milog::MiLogStream::MiLogStream(
            (common::milog::MiLogStream *const)&v81,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/redis_mgr.cpp",
            "initTran",
            3148);
          v60 = *(&v81._anon_0._M_allocated_capacity + 1);
          if ( *(_BYTE *)((*(&v81._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
          {
            v61 = *(&v81._anon_0._M_allocated_capacity + 1);
            __asan_report_load8(*(&v81._anon_0._M_allocated_capacity + 1));
          }
          else
          {
            v61 = *(&v81._anon_0._M_allocated_capacity + 1) + 8;
            if ( !*(_BYTE *)(((*(&v81._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
            {
              v62 = *(void **)(*(&v81._anon_0._M_allocated_capacity + 1) + 8);
              v63 = **((_DWORD **)&v81._anon_0._M_allocated_capacity + 1) + 0x4000 - (int)v62;
              if ( v63 > 9 )
                v63 = 10LL;
              memcpy(v62, "reply msg:", v63);
              *(_QWORD *)(v60 + 8) += v63;
              v64 = *(_QWORD *)(v6 + 96);
              v61 = v64 + 32;
              if ( !*(_BYTE *)(((unsigned __int64)(v64 + 32) >> 3) + 0x7FFF8000) )
              {
                common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                  *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&v81._anon_0._M_allocated_capacity
                  + 1),
                  *(const char **)(v64 + 32));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v81);
                goto LABEL_137;
              }
LABEL_140:
              v65 = (struct _Unwind_Exception *)__asan_report_load8(v61);
              v66 = s._M_dataplus._M_p;
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s._M_dataplus._M_p != &s._anon_0 )
                operator delete(s._M_dataplus._M_p);
              __asan_handle_no_return(v66);
              _Unwind_Resume(v65);
            }
          }
          __asan_report_load8(v61);
          goto LABEL_140;
        }
LABEL_128:
        __asan_report_load8(v55);
        goto LABEL_129;
      }
    }
    __asan_report_load8(v55);
    goto LABEL_128;
  }
  tran_ptr->_M_ptr->is_need_unwatch_ = 1;
  p_is_need_unwatch = *(_QWORD *)(v6 + 96);
  if ( !p_is_need_unwatch )
    goto LABEL_119;
  v50 = *(_BYTE *)((p_is_need_unwatch >> 3) + 0x7FFF8000);
  if ( v50 && v50 <= 3 )
    goto LABEL_118;
  if ( *(_DWORD *)p_is_need_unwatch == 6 )
    goto LABEL_119;
  v16 = 0;
LABEL_109:
  v51 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 104);
  if ( v51 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v51);
LABEL_111:
  v52 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 72);
  if ( v52 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v52);
LABEL_113:
  if ( v82 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v16;
};

// Line 3156: range 000000000CAA671E-000000000CAA76A8
int32_t __fastcall common::midb::RedisMgr::initTran(
        common::midb::RedisMgr *const this,
        const uint32_t index,
        const std::vector<std::string> *key_vec,
        common::midb::GetAndSetTranPtr *tran_ptr)
{
  std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type *v4; // r13
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbx
  _DWORD *v8; // r14
  common::midb::RedisMgr *v10; // rsi
  __int64 v11; // rax
  volatile signed __int32 *v12; // rdi
  char v13; // dl
  common::midb::GetAndSetTran *v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  common::midb::RedisMgr *v17; // rsi
  char v18; // cl
  unsigned __int64 v19; // r15
  volatile signed __int32 *v20; // rdi
  char v21; // dl
  signed __int32 v22; // eax
  char v23; // dl
  unsigned __int64 v24; // rdi
  char v25; // dl
  signed __int32 v26; // eax
  unsigned __int64 v27; // rdi
  char v28; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v29; // rdi
  char v30; // al
  __m128i *p_M_weak_count; // rdx
  char v32; // cl
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 p_M_use_count; // rax
  void *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r13
  volatile signed __int32 *v38; // rdi
  char v39; // dl
  signed __int32 M_use_count; // eax
  unsigned __int64 v41; // rdi
  __int64 v42; // rcx
  void *v43; // rax
  unsigned __int64 v44; // rdi
  void (__fastcall *v45)(unsigned __int64, std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type *, __int64); // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v48; // rdi
  char v49; // dl
  volatile signed __int32 *v50; // rdi
  char v51; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v53; // rdi
  char v54; // dl
  unsigned __int64 p_is_need_unwatch; // rdi
  __int64 v56; // rdx
  char v57; // al
  common::milog::MilogStringStream *v58; // r13
  common::milog::MilogStringStream *v59; // rdi
  char v60; // dl
  signed __int32 v61; // eax
  volatile signed __int32 *v62; // rdi
  char v63; // dl
  signed __int32 v64; // eax
  unsigned __int64 ostr; // r13
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  char **v69; // rdi
  char *v70; // rdi
  const std::vector<std::string> *M_start; // rax
  const std::vector<std::string> *p_M_finish; // rdi
  common::milog::MilogStringStream *v73; // r15
  void *v74; // rdi
  char *v75; // rdi
  char *v76; // rdi
  char v77; // dl
  volatile signed __int32 *v78; // rdi
  char v79; // dl
  signed __int32 cur_high; // eax
  char v81; // dl
  char v82; // dl
  unsigned __int64 v83; // rdi
  char v84; // dl
  signed __int32 v85; // eax
  unsigned __int64 v86; // rdi
  char v87; // dl
  struct _Unwind_Exception *v88; // rbp
  common::midb::RedisMgr *thisa; // [rsp+8h] [rbp-1C0h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v91; // [rsp+28h] [rbp-1A0h]
  __m128i v92; // [rsp+70h] [rbp-158h] BYREF
  common::midb::RedisMgr *v93; // [rsp+80h] [rbp-148h]
  int32_t (__fastcall *v94)(common::midb::RedisMgr *const, common::midb::GetAndSetTran *); // [rsp+90h] [rbp-138h]
  __int64 v95; // [rsp+98h] [rbp-130h]
  __m128i v96[2]; // [rsp+B0h] [rbp-118h] BYREF
  __m128i v97[2]; // [rsp+D0h] [rbp-F8h] BYREF
  common::milog::MiLogStream v98; // [rsp+F0h] [rbp-D8h] BYREF
  char v99[184]; // [rsp+110h] [rbp-B8h] BYREF

  thisa = this;
  v4 = (std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type *)index;
  v6 = (unsigned __int64)v99;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v16 = __asan_stack_malloc_1(128LL);
    if ( v16 )
      v6 = v16;
  }
  v7 = v6 + 128;
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 48 1 4 __a2 64 16 13 conn_ptr:3158 96 16 7 __guard";
  *(_QWORD *)(v6 + 16) = common::midb::RedisMgr::initTran;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -219021312;
  v8[536862723] = -202178560;
  v10 = this;
  common::midb::RedisMgr::grabConn(this, index);
  if ( !*(_QWORD *)(v6 + 64) )
  {
    common::milog::MiLogStream::MiLogStream(
      &v98,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "initTran",
      3161);
    v17 = (common::midb::RedisMgr *)"grab conn failed";
    common::milog::MiLogStream::operator()(&v98, "grab conn failed");
    common::milog::MiLogStream::~MiLogStream(&v98);
    LODWORD(tran_ptr) = -1;
    goto LABEL_126;
  }
  *(_QWORD *)(v6 + 96) = *(_QWORD *)(v6 + 64);
  v11 = *(_QWORD *)(v6 + 72);
  *(_QWORD *)(v6 + 104) = v11;
  if ( !v11 )
    goto LABEL_8;
  v12 = (volatile signed __int32 *)(v11 + 8);
  if ( &_pthread_key_create )
  {
    v13 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v12 & 7) + 3) < v13 || !v13 )
    {
      _InterlockedAdd(v12, 1u);
      goto LABEL_8;
    }
    v11 = __asan_report_store4(v12, thisa);
  }
  v18 = *(_BYTE *)(((unsigned __int64)(v11 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v11 + 8) & 7) + 3) >= v18 && v18 )
  {
    __asan_report_load4(v11 + 8);
    goto LABEL_18;
  }
  ++*(_DWORD *)(v11 + 8);
LABEL_8:
  v10 = (common::midb::RedisMgr *)&std::nothrow;
  v14 = (common::midb::GetAndSetTran *)operator new(0x18uLL, &std::nothrow);
  v4 = v14;
  if ( v14 )
  {
    v10 = (common::midb::RedisMgr *)(v6 + 96);
    common::midb::GetAndSetTran::GetAndSetTran(v14, (common::midb::RedisConnPtr)__PAIR128__(v15, v6 + 96));
  }
LABEL_18:
  v19 = *(_QWORD *)(v6 + 104);
  if ( !v19 )
    goto LABEL_24;
  v20 = (volatile signed __int32 *)(v19 + 8);
  if ( &_pthread_key_create )
  {
    v21 = *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v20 & 7) + 3) < v21 || !v21 )
    {
      v22 = _InterlockedExchangeAdd(v20, 0xFFFFFFFF);
      goto LABEL_23;
    }
    __asan_report_store4(v20, v10);
  }
  v23 = *(_BYTE *)(((v19 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v19 + 8) & 7) + 3) >= v23 && v23 )
  {
    __asan_report_load4(v19 + 8);
    goto LABEL_31;
  }
  v22 = *(_DWORD *)(v19 + 8);
  *(_DWORD *)(v19 + 8) = v22 - 1;
LABEL_23:
  if ( v22 != 1 )
    goto LABEL_24;
LABEL_31:
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
  {
    v24 = v19;
    __asan_report_load8(v19);
    goto LABEL_42;
  }
  v24 = *(_QWORD *)v19 + 16LL;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_load8(v24);
    goto LABEL_43;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v19 + 16LL))(v19);
  v24 = v19 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_44;
  v25 = *(_BYTE *)((v24 >> 3) + 0x7FFF8000);
  if ( (char)((v24 & 7) + 3) < v25 || !v25 )
  {
    v26 = _InterlockedExchangeAdd((volatile signed __int32 *)v24, 0xFFFFFFFF);
    goto LABEL_37;
  }
LABEL_43:
  __asan_report_store4(v24, v10);
LABEL_44:
  v28 = *(_BYTE *)(((v19 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v19 + 12) & 7) + 3) >= v28 && v28 )
  {
    __asan_report_load4(v19 + 12);
LABEL_48:
    v27 = v19;
    __asan_report_load8(v19);
    goto LABEL_49;
  }
  v26 = *(_DWORD *)(v19 + 12);
  *(_DWORD *)(v19 + 12) = v26 - 1;
LABEL_37:
  if ( v26 != 1 )
    goto LABEL_24;
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
    goto LABEL_48;
  v27 = *(_QWORD *)v19 + 24LL;
  if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_load8(v27);
    goto LABEL_50;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v19 + 24LL))(v19);
LABEL_24:
  if ( !v4 )
  {
LABEL_50:
    common::milog::MiLogStream::MiLogStream(
      &v98,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_mgr.cpp",
      "initTran",
      3169);
    v17 = (common::midb::RedisMgr *)"new tran failed";
    common::milog::MiLogStream::operator()(&v98, "new tran failed");
    common::milog::MiLogStream::~MiLogStream(&v98);
    LODWORD(tran_ptr) = -1;
    goto LABEL_126;
  }
  v94 = common::midb::RedisMgr::freeGetAndSetTran;
  v95 = 0LL;
  v92.m128i_i64[0] = (__int64)common::midb::RedisMgr::freeGetAndSetTran;
  v92.m128i_i64[1] = 0LL;
  v93 = thisa;
  std::__allocate_guarded<std::allocator<std::_Sp_counted_deleter<common::midb::GetAndSetTran *,std::_Bind<int (common::midb::RedisMgr::*)(common::midb::GetAndSetTran *) ()(common::midb::RedisMgr*,std::_Placeholder<1>)>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_deleter<common::midb::GetAndSetTran*,std::_Bind<int (common::midb::RedisMgr::*(common::midb::RedisMgr*,std::_Placeholder<1>))(common::midb::GetAndSetTran*)>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> > *)(v6 + 48));
  v29 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 104);
  v97[0] = _mm_load_si128(&v92);
  v17 = v93;
  v30 = *(_BYTE *)(((unsigned __int64)&v29->_M_use_count >> 3) + 0x7FFF8000);
  if ( v30 && v30 <= 3 )
  {
    __asan_report_store4(&v29->_M_use_count, v93);
LABEL_71:
    v29 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)p_M_weak_count;
    __asan_report_store4(p_M_weak_count, v17);
    goto LABEL_72;
  }
  v29->_M_use_count = 1;
  p_M_weak_count = (__m128i *)&v29->_M_weak_count;
  v32 = *(_BYTE *)(((unsigned __int64)&v29->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v29 + 12) & 7) + 3) >= v32 && v32 )
    goto LABEL_71;
  v29->_M_weak_count = 1;
  if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
  {
LABEL_72:
    v33 = __asan_report_store8(v29, v17);
    goto LABEL_73;
  }
  v29->_vptr__Sp_counted_base = (int (**)(...))(&`vtable for'std::_Sp_counted_deleter<common::midb::GetAndSetTran *,std::_Bind<int (common::midb::RedisMgr::*)(common::midb::GetAndSetTran *) ()(common::midb::RedisMgr*,std::_Placeholder<1>)>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                                              + 2);
  v96[0] = _mm_load_si128(v97);
  v33 = (__int64)&v29[1];
  if ( *(_WORD *)(((unsigned __int64)&v29[1] >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    v34 = __asan_report_store16(v33);
    goto LABEL_74;
  }
  v29[1] = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>)_mm_load_si128(v96);
  v34 = (__int64)&v29[2];
  if ( *(_BYTE *)(((unsigned __int64)&v29[2] >> 3) + 0x7FFF8000) )
  {
LABEL_74:
    p_M_use_count = __asan_report_store8(v34, v17);
    goto LABEL_75;
  }
  v29[2]._vptr__Sp_counted_base = (int (**)(...))v17;
  p_M_use_count = (__int64)&v29[2]._M_use_count;
  if ( *(_BYTE *)(((unsigned __int64)&v29[2]._M_use_count >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_store8(p_M_use_count, v17);
    goto LABEL_76;
  }
  *(_QWORD *)&v29[2]._M_use_count = v4;
  v91 = v29;
  if ( *(_BYTE *)(((unsigned __int64)tran_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_76:
    p_M_refcount = tran_ptr;
    __asan_report_store8(tran_ptr, v17);
LABEL_77:
    v43 = (void *)__asan_report_load8(p_M_refcount);
    __cxa_begin_catch(v43);
    v44 = (unsigned __int64)v93 + v92.m128i_i64[1];
    v45 = (void (__fastcall *)(unsigned __int64, std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type *, __int64))v92.m128i_i64[0];
    v46 = v92.m128i_i64[0];
    if ( (v92.m128i_i8[0] & 1) != 0 )
    {
      if ( *(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v44);
      v47 = v46 + *(_QWORD *)v44 - 1;
      v46 = v47 >> 3;
      if ( *(_BYTE *)((v47 >> 3) + 0x7FFF8000) )
      {
        v44 = v47;
        v47 = __asan_report_load8(v47);
      }
      v45 = *(void (__fastcall **)(unsigned __int64, std::__shared_ptr<common::midb::GetAndSetTran,(__gnu_cxx::_Lock_policy)2>::element_type *, __int64))v47;
    }
    v45(v44, v4, v46);
    __asan_handle_no_return(v44);
    __cxa_rethrow();
  }
  tran_ptr->_M_ptr = v4;
  p_M_refcount = &tran_ptr->_M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&tran_ptr->_M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_77;
  M_pi = tran_ptr->_M_refcount._M_pi;
  tran_ptr->_M_refcount._M_pi = v91;
  if ( !M_pi )
    goto LABEL_67;
  v38 = &M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v39 = *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v38 & 7) + 3) < v39 || !v39 )
    {
      M_use_count = _InterlockedExchangeAdd(v38, 0xFFFFFFFF);
      goto LABEL_66;
    }
    __asan_report_store4(v38, v17);
  }
  v49 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v49 && v49 )
  {
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_92;
  }
  M_use_count = M_pi->_M_use_count;
  M_pi->_M_use_count = M_use_count - 1;
LABEL_66:
  if ( M_use_count != 1 )
    goto LABEL_67;
LABEL_92:
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    v50 = (volatile signed __int32 *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_103;
  }
  v50 = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) )
  {
LABEL_103:
    __asan_report_load8(v50);
    goto LABEL_104;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 2))(M_pi);
  v50 = &M_pi->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_105;
  v51 = *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v50 & 7) + 3) < v51 || !v51 )
  {
    M_weak_count = _InterlockedExchangeAdd(v50, 0xFFFFFFFF);
    goto LABEL_98;
  }
LABEL_104:
  __asan_report_store4(v50, v17);
LABEL_105:
  v54 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v54 && v54 )
  {
    __asan_report_load4(&M_pi->_M_weak_count);
LABEL_109:
    v53 = (unsigned __int64)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_110;
  }
  M_weak_count = M_pi->_M_weak_count;
  M_pi->_M_weak_count = M_weak_count - 1;
LABEL_98:
  if ( M_weak_count != 1 )
    goto LABEL_67;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
    goto LABEL_109;
  v53 = (unsigned __int64)(M_pi->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v53 >> 3) + 0x7FFF8000) )
  {
LABEL_110:
    __asan_report_load8(v53);
    goto LABEL_111;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 3))(M_pi);
LABEL_67:
  v17 = *(common::midb::RedisMgr **)(v6 + 64);
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
LABEL_111:
    v41 = (unsigned __int64)v17;
    __asan_report_load8(v17);
    goto LABEL_112;
  }
  v41 = *(_QWORD *)&v17->is_init_ + 72LL;
  if ( !*(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(unsigned __int64, common::midb::RedisMgr *, const std::vector<std::string> *))(*(_QWORD *)&v17->is_init_ + 72LL))(
      v6 + 96,
      v17,
      key_vec);
    goto LABEL_113;
  }
LABEL_112:
  __asan_report_load8(v41);
LABEL_113:
  if ( *(_BYTE *)(((unsigned __int64)tran_ptr >> 3) + 0x7FFF8000) )
  {
    p_is_need_unwatch = (unsigned __int64)tran_ptr;
    __asan_report_load8(tran_ptr);
    goto LABEL_136;
  }
  p_is_need_unwatch = (unsigned __int64)&tran_ptr->_M_ptr->is_need_unwatch_;
  v56 = *(unsigned __int8 *)((p_is_need_unwatch >> 3) + 0x7FFF8000);
  if ( (v56 & 0x80u) != 0LL )
  {
LABEL_136:
    __asan_report_store1(p_is_need_unwatch, v17, v56, v42);
LABEL_137:
    __asan_report_load4(p_is_need_unwatch);
    goto LABEL_138;
  }
  tran_ptr->_M_ptr->is_need_unwatch_ = 1;
  p_is_need_unwatch = *(_QWORD *)(v6 + 96);
  if ( !p_is_need_unwatch )
    goto LABEL_138;
  v57 = *(_BYTE *)((p_is_need_unwatch >> 3) + 0x7FFF8000);
  if ( v57 && v57 <= 3 )
    goto LABEL_137;
  if ( *(_DWORD *)p_is_need_unwatch != 6 )
  {
    LODWORD(tran_ptr) = 0;
    goto LABEL_120;
  }
LABEL_138:
  v17 = (common::midb::RedisMgr *)&common::milog::MiLogDefault::default_log_obj_;
  common::milog::MiLogStream::MiLogStream(
    &v98,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/redis_mgr.cpp",
    "initTran",
    3181);
  ostr = (unsigned __int64)v98.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v98.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_cur = v98.ostr_;
    __asan_report_load8(v98.ostr_);
    goto LABEL_148;
  }
  tran_ptr = (common::midb::GetAndSetTranPtr *)(v98.ostr_->buffer_.data_ + 0x4000);
  p_cur = (common::milog::MilogStringStream *)&v98.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v98.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_148:
    __asan_report_load8(p_cur);
LABEL_149:
    v69 = (char **)ostr;
    __asan_report_load8(ostr);
    goto LABEL_150;
  }
  cur = v98.ostr_->buffer_.cur_;
  tran_ptr = (common::midb::GetAndSetTranPtr *)((int)tran_ptr - (int)cur);
  if ( (unsigned __int64)tran_ptr > 0xC )
    tran_ptr = (common::midb::GetAndSetTranPtr *)13;
  v17 = (common::midb::RedisMgr *)"watch failed:";
  memcpy(cur, "watch failed:", (size_t)tran_ptr);
  *(_QWORD *)(ostr + 8) += tran_ptr;
  ostr = (unsigned __int64)v98.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v98.ostr_ >> 3) + 0x7FFF8000) )
    goto LABEL_149;
  tran_ptr = (common::midb::GetAndSetTranPtr *)(v98.ostr_->buffer_.data_ + 0x4000);
  v69 = &v98.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v98.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_150:
    __asan_report_load8(v69);
    goto LABEL_151;
  }
  v70 = v98.ostr_->buffer_.cur_;
  tran_ptr = (common::midb::GetAndSetTranPtr *)((_DWORD)tran_ptr - (_DWORD)v70 != 0LL);
  v17 = (common::midb::RedisMgr *)"{";
  memcpy(v70, "{", (size_t)tran_ptr);
  *(_QWORD *)(ostr + 8) += tran_ptr;
  if ( *(_BYTE *)(((unsigned __int64)key_vec >> 3) + 0x7FFF8000) )
  {
LABEL_151:
    p_M_finish = key_vec;
    __asan_report_load8(key_vec);
    goto LABEL_152;
  }
  M_start = (const std::vector<std::string> *)key_vec->_M_impl._M_start;
  p_M_finish = (const std::vector<std::string> *)&key_vec->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&key_vec->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_152:
    __asan_report_load8(p_M_finish);
    goto LABEL_153;
  }
  key_vec = (const std::vector<std::string> *)key_vec->_M_impl._M_finish;
  LOBYTE(thisa) = 1;
  while ( 1 )
  {
    ostr = (unsigned __int64)M_start;
    if ( key_vec == M_start )
      break;
    if ( (_BYTE)thisa )
    {
      LOBYTE(thisa) = 0;
    }
    else
    {
LABEL_153:
      v73 = v98.ostr_;
      v74 = v98.ostr_;
      if ( *(_BYTE *)(((unsigned __int64)v98.ostr_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v98.ostr_);
LABEL_157:
        __asan_report_load8(v74);
LABEL_158:
        __asan_report_load8(v74);
LABEL_159:
        __asan_report_load8(v74);
LABEL_160:
        __asan_report_load8(v74);
LABEL_161:
        __asan_report_load8(v74);
        goto LABEL_162;
      }
      tran_ptr = (common::midb::GetAndSetTranPtr *)(v98.ostr_->buffer_.data_ + 0x4000);
      v74 = &v98.ostr_->buffer_.cur_;
      if ( *(_BYTE *)(((unsigned __int64)&v98.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
        goto LABEL_157;
      v75 = v98.ostr_->buffer_.cur_;
      tran_ptr = (common::midb::GetAndSetTranPtr *)((_DWORD)tran_ptr - (_DWORD)v75 != 0LL);
      v17 = (common::midb::RedisMgr *)",";
      memcpy(v75, ",", (size_t)tran_ptr);
      v73->buffer_.cur_ += (unsigned __int64)tran_ptr;
    }
    v73 = v98.ostr_;
    v74 = (void *)(ostr + 8);
    if ( *(_BYTE *)(((ostr + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_158;
    v74 = (void *)ostr;
    if ( *(_BYTE *)((ostr >> 3) + 0x7FFF8000) )
      goto LABEL_159;
    v17 = *(common::midb::RedisMgr **)ostr;
    v74 = v98.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v98.ostr_ >> 3) + 0x7FFF8000) )
      goto LABEL_160;
    tran_ptr = (common::midb::GetAndSetTranPtr *)(v98.ostr_->buffer_.data_ + 0x4000);
    v74 = &v98.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v98.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_161;
    v74 = v98.ostr_->buffer_.cur_;
    tran_ptr = (common::midb::GetAndSetTranPtr *)((int)tran_ptr - (int)v74);
    if ( *(_QWORD *)(ostr + 8) <= (unsigned __int64)tran_ptr )
      tran_ptr = *(common::midb::GetAndSetTranPtr **)(ostr + 8);
LABEL_162:
    memcpy(v74, v17, (size_t)tran_ptr);
    v73->buffer_.cur_ += (unsigned __int64)tran_ptr;
    M_start = (const std::vector<std::string> *)(ostr + 32);
  }
  v58 = v98.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v98.ostr_ >> 3) + 0x7FFF8000) )
  {
    v59 = v98.ostr_;
    __asan_report_load8(v98.ostr_);
    goto LABEL_176;
  }
  tran_ptr = (common::midb::GetAndSetTranPtr *)(v98.ostr_->buffer_.data_ + 0x4000);
  v59 = (common::milog::MilogStringStream *)&v98.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v98.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_176:
    __asan_report_load8(v59);
    goto LABEL_177;
  }
  v76 = v98.ostr_->buffer_.cur_;
  tran_ptr = (common::midb::GetAndSetTranPtr *)((_DWORD)tran_ptr - (_DWORD)v76 != 0LL);
  v17 = (common::midb::RedisMgr *)"}";
  memcpy(v76, "}", (size_t)tran_ptr);
  v58->buffer_.cur_ += (unsigned __int64)tran_ptr;
  common::milog::MiLogStream::~MiLogStream(&v98);
  LODWORD(tran_ptr) = -1;
LABEL_120:
  v58 = *(common::milog::MilogStringStream **)(v6 + 104);
  if ( !v58 )
    goto LABEL_126;
  v59 = (common::milog::MilogStringStream *)&v58->buffer_.cur_;
  if ( &_pthread_key_create )
  {
    v60 = *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v59 & 7) + 3) < v60 || !v60 )
    {
      v61 = _InterlockedExchangeAdd((volatile signed __int32 *)v59, 0xFFFFFFFF);
      goto LABEL_125;
    }
LABEL_177:
    __asan_report_store4(v59, v17);
  }
  v77 = *(_BYTE *)(((unsigned __int64)&v58->buffer_.cur_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v58 + 8) & 7) + 3) >= v77 && v77 )
  {
    __asan_report_load4(&v58->buffer_.cur_);
    goto LABEL_182;
  }
  v61 = (signed __int32)v58->buffer_.cur_;
  LODWORD(v58->buffer_.cur_) = v61 - 1;
LABEL_125:
  if ( v61 == 1 )
  {
LABEL_182:
    if ( *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) )
    {
      v78 = (volatile signed __int32 *)v58;
      __asan_report_load8(v58);
    }
    else
    {
      v78 = (volatile signed __int32 *)(v58->buffer_.data_ + 16);
      if ( !*(_BYTE *)(((unsigned __int64)v78 >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(common::milog::MilogStringStream *))v58->buffer_.data_ + 2))(v58);
        v78 = (volatile signed __int32 *)&v58->buffer_.cur_ + 1;
        if ( !&_pthread_key_create )
          goto LABEL_195;
        v79 = *(_BYTE *)(((unsigned __int64)v78 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v78 & 7) + 3) < v79 || !v79 )
        {
          cur_high = _InterlockedExchangeAdd(v78, 0xFFFFFFFF);
          goto LABEL_188;
        }
LABEL_194:
        __asan_report_store4(v78, v17);
LABEL_195:
        v81 = *(_BYTE *)((((unsigned __int64)&v58->buffer_.cur_ + 4) >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v58 + 12) & 7) + 3) >= v81 && v81 )
        {
          __asan_report_load4((char *)&v58->buffer_.cur_ + 4);
          goto LABEL_199;
        }
        cur_high = HIDWORD(v58->buffer_.cur_);
        HIDWORD(v58->buffer_.cur_) = cur_high - 1;
LABEL_188:
        if ( cur_high != 1 )
          goto LABEL_126;
        if ( !*(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) )
        {
          v62 = (volatile signed __int32 *)(v58->buffer_.data_ + 24);
          if ( !*(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(common::milog::MilogStringStream *))v58->buffer_.data_ + 3))(v58);
            goto LABEL_126;
          }
          goto LABEL_200;
        }
LABEL_199:
        v62 = (volatile signed __int32 *)v58;
        __asan_report_load8(v58);
LABEL_200:
        __asan_report_load8(v62);
        goto LABEL_201;
      }
    }
    __asan_report_load8(v78);
    goto LABEL_194;
  }
LABEL_126:
  v7 = *(_QWORD *)(v6 + 72);
  if ( !v7 )
    goto LABEL_132;
  v62 = (volatile signed __int32 *)(v7 + 8);
  if ( &_pthread_key_create )
  {
    v63 = *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v62 & 7) + 3) < v63 || !v63 )
    {
      v64 = _InterlockedExchangeAdd(v62, 0xFFFFFFFF);
      goto LABEL_131;
    }
LABEL_201:
    __asan_report_store4(v62, v17);
  }
  v82 = *(_BYTE *)(((v7 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v7 + 8) & 7) + 3) >= v82 && v82 )
  {
    __asan_report_load4(v7 + 8);
    goto LABEL_206;
  }
  v64 = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(v7 + 8) = v64 - 1;
LABEL_131:
  if ( v64 == 1 )
  {
LABEL_206:
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    {
      v83 = v7;
      __asan_report_load8(v7);
    }
    else
    {
      v83 = *(_QWORD *)v7 + 16LL;
      if ( !*(_BYTE *)((v83 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 16LL))(v7);
        v83 = v7 + 12;
        if ( !&_pthread_key_create )
          goto LABEL_219;
        v84 = *(_BYTE *)((v83 >> 3) + 0x7FFF8000);
        if ( (char)((v83 & 7) + 3) < v84 || !v84 )
        {
          v85 = _InterlockedExchangeAdd((volatile signed __int32 *)v83, 0xFFFFFFFF);
          goto LABEL_212;
        }
LABEL_218:
        __asan_report_store4(v83, v17);
LABEL_219:
        v87 = *(_BYTE *)(((v7 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v7 + 12) & 7) + 3) >= v87 && v87 )
        {
          __asan_report_load4(v7 + 12);
          goto LABEL_223;
        }
        v85 = *(_DWORD *)(v7 + 12);
        *(_DWORD *)(v7 + 12) = v85 - 1;
LABEL_212:
        if ( v85 != 1 )
          goto LABEL_132;
        if ( !*(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        {
          v86 = *(_QWORD *)v7 + 24LL;
          if ( !*(_BYTE *)((v86 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 24LL))(v7);
            goto LABEL_132;
          }
LABEL_224:
          v88 = (struct _Unwind_Exception *)__asan_report_load8(v86);
          common::milog::MiLogStream::~MiLogStream(&v98);
          v48 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v7 - 56);
          if ( v48 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v48);
          __asan_handle_no_return(v48);
          _Unwind_Resume(v88);
        }
LABEL_223:
        v86 = v7;
        __asan_report_load8(v7);
        goto LABEL_224;
      }
    }
    __asan_report_load8(v83);
    goto LABEL_218;
  }
LABEL_132:
  if ( v99 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return (int)tran_ptr;
};

// Line 3187: range 000000000CAA9D89-000000000CAA9DA0
void __cdecl GLOBAL__sub_I_redis_mgr_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};
