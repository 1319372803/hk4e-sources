// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/midb/redis/src/redis_cluster_conn.cpp

// Line 37: range 000000000CAAFBD6-000000000CAB0B3A
int32_t __fastcall common::midb::RedisClusterConn::init(
        common::midb::RedisClusterConn *const this,
        const std::string *host_str,
        uint32_t port,
        uint32_t timeout,
        const std::string *pwd_str,
        uint32_t db_idx,
        uint32_t connect_timeout)
{
  size_t v8; // rbx
  unsigned __int64 v10; // r13
  char *v11; // rbp
  unsigned __int64 v12; // r15
  std::forward_iterator_tag v13; // cl
  char *M_p; // rsi
  std::string *v15; // rdi
  __int64 v16; // rax
  std::string::size_type v17; // rdi
  void *v18; // rdi
  size_t v19; // rbx
  int32_t v20; // r14d
  std::string::pointer v21; // rdi
  std::string::size_type v22; // rax
  std::string::size_type M_allocated_capacity; // rsi
  std::string::size_type v24; // rsi
  __int64 v25; // rsi
  unsigned __int64 v26; // rax
  std::string::size_type M_string_length; // rdx
  __m128i *v28; // rdx
  __m128i *v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  redisClusterContext_0 *v32; // rax
  int v33; // eax
  common::milog::MilogStringStream *ostr; // r14
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  size_t v37; // r12
  size_t v38; // rax
  const char *v39; // rsi
  void *v40; // rdi
  char *v41; // rdi
  void *v42; // rdi
  char *v43; // rdi
  size_t v44; // rbx
  int v45; // eax
  int v46; // r14d
  int v47; // eax
  common::milog::MilogStringStream *v48; // r14
  redisClusterContext_0 *p_redis_context_ptr; // rdi
  char v50; // al
  common::milog::MilogStringStream *v51; // rdi
  char *v52; // rdi
  size_t v53; // r12
  size_t v54; // rax
  const char *v55; // rsi
  void *v56; // rdi
  char *v57; // rdi
  char *v58; // rdi
  size_t v59; // rbx
  char *v60; // rdi
  unsigned __int64 redis_context_ptr; // rdi
  char v63; // al
  std::string::size_type v64; // r14
  std::string::size_type v65; // rdi
  void *v66; // rdi
  size_t v67; // rax
  const char *v68; // rsi
  std::string::size_type v69; // rdi
  void *v70; // rdi
  std::string::size_type v71; // rdi
  void *v72; // rdi
  std::string::size_type v73; // rdi
  void *v74; // rdi
  void *v75; // rdi
  char v76; // dl
  const char *v77; // rsi
  uint32_t v78; // eax
  void *p_last_manual_update_route_time; // rdi
  char v80; // dl
  __int64 v81; // r14
  std::string::size_type v82; // rdi
  void *v83; // rdi
  size_t v84; // r12
  size_t v85; // rax
  common::midb::RedisClusterConn *v86; // rdi
  void *v87; // rdi
  size_t v88; // rbx
  void *v89; // rdi
  size_t v90; // rbx
  struct _Unwind_Exception *v91; // rbx
  timeval v92; // [rsp+0h] [rbp-138h]
  unsigned int porta; // [rsp+4h] [rbp-134h]
  int32_t ret; // [rsp+18h] [rbp-120h]
  int reta; // [rsp+18h] [rbp-120h]
  common::milog::MiLogStream v97; // [rsp+20h] [rbp-118h] BYREF
  common::milog::MiLogStream v98; // [rsp+40h] [rbp-F8h] BYREF
  std::string v99; // [rsp+60h] [rbp-D8h] BYREF
  std::string v100; // [rsp+80h] [rbp-B8h] BYREF
  char v101[152]; // [rsp+A0h] [rbp-98h] BYREF

  v8 = (size_t)host_str;
  HIDWORD(v92.tv_sec) = port;
  v92.tv_usec = (__suseconds_t)pwd_str;
  v10 = (unsigned __int64)v101;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v16 = __asan_stack_malloc_1(96LL);
    if ( v16 )
      v10 = v16;
  }
  v11 = (char *)(v10 + 96);
  *(_QWORD *)v10 = 1102416563LL;
  *(_QWORD *)(v10 + 8) = "1 32 32 10 ip_port:44";
  *(_QWORD *)(v10 + 16) = common::midb::RedisClusterConn::init;
  v12 = v10 >> 3;
  *(_DWORD *)(v12 + 2147450880) = -235802127;
  *(_DWORD *)(v12 + 2147450888) = -202116109;
  if ( !db_idx )
  {
    __gnu_cxx::__to_xstring<std::string,char>(
      &v100,
      (int (*)(char *, std::size_t, const char *, ___va_list_tag *))&vsnprintf,
      0x10uLL,
      "%u",
      HIDWORD(v92.tv_sec));
    v99._M_dataplus._M_p = v99._anon_0._M_local_buf;
    if ( !*(_BYTE *)(((unsigned __int64)host_str >> 3) + 0x7FFF8000) )
    {
      M_p = host_str->_M_dataplus._M_p;
      v15 = (std::string *)(v8 + 8);
      if ( !*(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
      {
        v15 = &v99;
        std::string::_M_construct<char *>(&v99, M_p, &M_p[*(_QWORD *)(v8 + 8)], v13);
        goto LABEL_17;
      }
LABEL_16:
      __asan_report_load8(v15);
LABEL_17:
      if ( v99._M_string_length == 0x3FFFFFFFFFFFFFFFLL )
      {
        __asan_handle_no_return(v15);
        std::__throw_length_error("basic_string::append");
      }
      std::string::_M_append(&v99, ":");
      v22 = v99._M_string_length + v100._M_string_length;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v99._M_dataplus._M_p == &v99._anon_0 )
        M_allocated_capacity = 15LL;
      else
        M_allocated_capacity = v99._anon_0._M_allocated_capacity;
      if ( v22 > M_allocated_capacity
        && ((std::string::$CFBEC286C7F52157F7E59FC354047095 *)v100._M_dataplus._M_p == &v100._anon_0
          ? (v24 = 15LL)
          : (v24 = v100._anon_0._M_allocated_capacity),
            v22 <= v24) )
      {
        M_string_length = v100._M_string_length;
        if ( v100._M_string_length )
          M_string_length = 0LL;
        v25 = 0LL;
        v26 = std::string::_M_replace(&v100, 0LL, M_string_length, v99._M_dataplus._M_p, v99._M_string_length);
      }
      else
      {
        v25 = (__int64)v100._M_dataplus._M_p;
        v26 = std::string::_M_append(&v99, v100._M_dataplus._M_p);
      }
      *((_QWORD *)v11 - 8) = v11 - 48;
      if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
      {
        v26 = __asan_report_load8(v26);
      }
      else
      {
        v28 = (__m128i *)(v26 + 16);
        if ( *(_QWORD *)v26 != v26 + 16 )
        {
          *((_QWORD *)v11 - 8) = *(_QWORD *)v26;
          v29 = (__m128i *)(v26 + 16);
          if ( !*(_BYTE *)(((v26 + 16) >> 3) + 0x7FFF8000) )
          {
            *((_QWORD *)v11 - 6) = *(_QWORD *)(v26 + 16);
            goto LABEL_39;
          }
          goto LABEL_52;
        }
      }
      v29 = v28;
      v25 = *(unsigned __int8 *)(((v26 + 31) >> 3) + 0x7FFF8000);
      if ( (*(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) == 0
         || *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) > ((unsigned __int8)v28 & 7))
        && ((_BYTE)v25 == 0 || (char)v25 > (char)((v26 + 31) & 7)) )
      {
        *((__m128i *)v11 - 3) = _mm_loadu_si128((const __m128i *)(v26 + 16));
LABEL_39:
        v29 = (__m128i *)(v26 + 8);
        if ( !*(_BYTE *)(((v26 + 8) >> 3) + 0x7FFF8000) )
        {
          *((_QWORD *)v11 - 7) = *(_QWORD *)(v26 + 8);
          *(_QWORD *)v26 = v28;
          *(_QWORD *)(v26 + 8) = 0LL;
          v29 = (__m128i *)(v26 + 16);
          v30 = *(unsigned __int8 *)(((v26 + 16) >> 3) + 0x7FFF8000);
          v31 = ((_BYTE)v26 + 16) & 7;
          if ( (char)v30 > (char)v31 || !(_BYTE)v30 )
          {
            *(_BYTE *)(v26 + 16) = 0;
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v99._M_dataplus._M_p != &v99._anon_0 )
              operator delete(v99._M_dataplus._M_p);
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v100._M_dataplus._M_p != &v100._anon_0 )
              operator delete(v100._M_dataplus._M_p);
            v32 = redisClusterContextInit();
LABEL_55:
            if ( *(_BYTE *)(((unsigned __int64)&this->redis_context_ptr_ >> 3) + 0x7FFF8000) )
            {
              __asan_report_store8(&this->redis_context_ptr_, v25);
            }
            else
            {
              this->redis_context_ptr_ = v32;
              if ( v32 )
              {
                v33 = redisClusterSetOptionAddNodes(v32, *((const char **)v11 - 8));
                goto LABEL_82;
              }
            }
            common::milog::MiLogStream::MiLogStream(
              &v97,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "src/redis_cluster_conn.cpp",
              "init",
              48);
            ostr = v97.ostr_;
            if ( *(_BYTE *)(((unsigned __int64)v97.ostr_ >> 3) + 0x7FFF8000) )
            {
              p_cur = v97.ostr_;
              __asan_report_load8(v97.ostr_);
            }
            else
            {
              this = (common::midb::RedisClusterConn *const)(v97.ostr_->buffer_.data_ + 0x4000);
              p_cur = (common::milog::MilogStringStream *)&v97.ostr_->buffer_.cur_;
              if ( !*(_BYTE *)(((unsigned __int64)&v97.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
              {
                cur = v97.ostr_->buffer_.cur_;
                v37 = (int)this - (int)cur;
                if ( v37 > 0x2F )
                  v37 = 48LL;
                memcpy(cur, "[REDIS] redis cluster context init fialed, host:", v37);
                ostr->buffer_.cur_ += v37;
                this = (common::midb::RedisClusterConn *const)v97.ostr_;
                p_cur = (common::milog::MilogStringStream *)(v8 + 8);
                if ( !*(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
                {
                  v38 = *(_QWORD *)(v8 + 8);
                  if ( !*(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
                  {
                    v39 = *(const char **)v8;
                    if ( !*(_BYTE *)(((unsigned __int64)v97.ostr_ >> 3) + 0x7FFF8000) )
                    {
                      v8 = (size_t)(v97.ostr_->buffer_.data_ + 0x4000);
                      v40 = &v97.ostr_->buffer_.cur_;
                      if ( !*(_BYTE *)(((unsigned __int64)&v97.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                      {
                        v41 = v97.ostr_->buffer_.cur_;
                        v8 = (int)v8 - (int)v41;
                        if ( v38 <= v8 )
                          v8 = v38;
                        memcpy(v41, v39, v8);
                        *(_QWORD *)&this->last_use_time += v8;
                        this = (common::midb::RedisClusterConn *const)v97.ostr_;
                        if ( !*(_BYTE *)(((unsigned __int64)v97.ostr_ >> 3) + 0x7FFF8000) )
                        {
                          v8 = (size_t)(v97.ostr_->buffer_.data_ + 0x4000);
                          v42 = &v97.ostr_->buffer_.cur_;
                          if ( !*(_BYTE *)(((unsigned __int64)&v97.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                          {
                            v43 = v97.ostr_->buffer_.cur_;
                            v44 = (int)v8 - (int)v43;
                            if ( v44 > 5 )
                              v44 = 6LL;
                            memcpy(v43, " port:", v44);
                            *(_QWORD *)&this->last_use_time += v44;
                            common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                              v97.ostr_,
                              HIDWORD(v92.tv_sec));
                            common::milog::MiLogStream::~MiLogStream(&v97);
                            v20 = -1;
                            goto LABEL_111;
                          }
                          goto LABEL_81;
                        }
LABEL_80:
                        v42 = this;
                        __asan_report_load8(this);
LABEL_81:
                        v33 = __asan_report_load8(v42);
LABEL_82:
                        ret = v33;
                        if ( *(_BYTE *)(((unsigned __int64)&this->redis_context_ptr_ >> 3) + 0x7FFF8000) )
                          v45 = __asan_report_load8(&this->redis_context_ptr_);
                        else
                          v45 = redisClusterSetOptionConnectTimeout(this->redis_context_ptr_, v92);
                        v46 = v45 | ret;
                        if ( *(_BYTE *)(((unsigned __int64)v92.tv_usec >> 3) + 0x7FFF8000) )
                          v47 = __asan_report_load8(v92.tv_usec);
                        else
                          v47 = redisClusterSetOptionPassword(this->redis_context_ptr_, *(const char **)v92.tv_usec);
                        LODWORD(v48) = v47 | v46;
                        if ( !(_DWORD)v48 )
                        {
                          p_redis_context_ptr = (redisClusterContext_0 *)&this->redis_context_ptr_;
                          if ( *(_BYTE *)(((unsigned __int64)&this->redis_context_ptr_ >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_load8(p_redis_context_ptr);
                          }
                          else
                          {
                            p_redis_context_ptr = this->redis_context_ptr_;
                            v50 = *(_BYTE *)(((unsigned __int64)p_redis_context_ptr >> 3) + 0x7FFF8000);
                            if ( !v50 || v50 > 3 )
                            {
                              if ( !p_redis_context_ptr->err )
                                goto LABEL_124;
                              goto LABEL_93;
                            }
                          }
                          __asan_report_load4(p_redis_context_ptr);
LABEL_96:
                          v48 = v98.ostr_;
                          if ( *(_BYTE *)(((unsigned __int64)v98.ostr_ >> 3) + 0x7FFF8000) )
                          {
                            v51 = v98.ostr_;
                            __asan_report_load8(v98.ostr_);
                          }
                          else
                          {
                            this = (common::midb::RedisClusterConn *const)(v98.ostr_->buffer_.data_ + 0x4000);
                            v51 = (common::milog::MilogStringStream *)&v98.ostr_->buffer_.cur_;
                            if ( !*(_BYTE *)(((unsigned __int64)&v98.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                            {
                              v52 = v98.ostr_->buffer_.cur_;
                              v53 = (int)this - (int)v52;
                              if ( v53 > 0x35 )
                                v53 = 54LL;
                              memcpy(v52, "[REDIS] redis cluster context set option fialed, host:", v53);
                              v48->buffer_.cur_ += v53;
                              this = (common::midb::RedisClusterConn *const)v98.ostr_;
                              v51 = (common::milog::MilogStringStream *)(v8 + 8);
                              if ( !*(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
                              {
                                v54 = *(_QWORD *)(v8 + 8);
                                if ( !*(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
                                {
                                  v55 = *(const char **)v8;
                                  if ( !*(_BYTE *)(((unsigned __int64)v98.ostr_ >> 3) + 0x7FFF8000) )
                                  {
                                    v8 = (size_t)(v98.ostr_->buffer_.data_ + 0x4000);
                                    v56 = &v98.ostr_->buffer_.cur_;
                                    if ( !*(_BYTE *)(((unsigned __int64)&v98.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                                    {
                                      v57 = v98.ostr_->buffer_.cur_;
                                      v8 = (int)v8 - (int)v57;
                                      if ( v54 <= v8 )
                                        v8 = v54;
                                      memcpy(v57, v55, v8);
                                      *(_QWORD *)&this->last_use_time += v8;
                                      this = (common::midb::RedisClusterConn *const)v98.ostr_;
                                      if ( !*(_BYTE *)(((unsigned __int64)v98.ostr_ >> 3) + 0x7FFF8000) )
                                      {
                                        v8 = (size_t)(v98.ostr_->buffer_.data_ + 0x4000);
                                        p_redis_context_ptr = (redisClusterContext_0 *)&v98.ostr_->buffer_.cur_;
                                        if ( !*(_BYTE *)(((unsigned __int64)&v98.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                                        {
                                          v58 = v98.ostr_->buffer_.cur_;
                                          v59 = (int)v8 - (int)v58;
                                          if ( v59 > 5 )
                                            v59 = 6LL;
                                          memcpy(v58, " port:", v59);
                                          *(_QWORD *)&this->last_use_time += v59;
                                          common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                                            v98.ostr_,
                                            HIDWORD(v92.tv_sec));
                                          common::milog::MiLogStream::~MiLogStream(&v98);
                                          v20 = -1;
                                          goto LABEL_111;
                                        }
                                        goto LABEL_123;
                                      }
LABEL_122:
                                      p_redis_context_ptr = (redisClusterContext_0 *)this;
                                      __asan_report_load8(this);
LABEL_123:
                                      __asan_report_load8(p_redis_context_ptr);
LABEL_124:
                                      reta = redisClusterConnect2(p_redis_context_ptr) | (unsigned int)v48;
                                      if ( !reta )
                                      {
                                        redis_context_ptr = (unsigned __int64)&this->redis_context_ptr_;
                                        if ( *(_BYTE *)(((unsigned __int64)&this->redis_context_ptr_ >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_load8(redis_context_ptr);
                                        }
                                        else
                                        {
                                          redis_context_ptr = (unsigned __int64)this->redis_context_ptr_;
                                          v63 = *(_BYTE *)((redis_context_ptr >> 3) + 0x7FFF8000);
                                          if ( !v63 || v63 > 3 )
                                          {
                                            if ( !*(_DWORD *)redis_context_ptr )
                                              goto LABEL_172;
                                            goto LABEL_129;
                                          }
                                        }
                                        __asan_report_load4(redis_context_ptr);
LABEL_132:
                                        v64 = *(&v99._anon_0._M_allocated_capacity + 1);
                                        if ( *(_BYTE *)((*(&v99._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
                                        {
                                          v65 = *(&v99._anon_0._M_allocated_capacity + 1);
                                          __asan_report_load8(*(&v99._anon_0._M_allocated_capacity + 1));
                                        }
                                        else
                                        {
                                          v65 = *(&v99._anon_0._M_allocated_capacity + 1) + 8;
                                          if ( !*(_BYTE *)(((*(&v99._anon_0._M_allocated_capacity + 1) + 8) >> 3)
                                                         + 0x7FFF8000) )
                                          {
                                            v66 = *(void **)(*(&v99._anon_0._M_allocated_capacity + 1) + 8);
                                            v92.tv_usec = **((_DWORD **)&v99._anon_0._M_allocated_capacity + 1)
                                                        + 0x4000
                                                        - (int)v66;
                                            if ( v92.tv_usec > 0x32uLL )
                                              v92.tv_usec = 51LL;
                                            memcpy(
                                              v66,
                                              "[REDIS] redis cluster context connect fialed, host:",
                                              v92.tv_usec);
                                            *(_QWORD *)(v64 + 8) += v92.tv_usec;
                                            v64 = *(&v99._anon_0._M_allocated_capacity + 1);
                                            v65 = v8 + 8;
                                            if ( !*(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
                                            {
                                              v67 = *(_QWORD *)(v8 + 8);
                                              if ( !*(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
                                              {
                                                v68 = *(const char **)v8;
                                                if ( !*(_BYTE *)((*(&v99._anon_0._M_allocated_capacity + 1) >> 3)
                                                               + 0x7FFF8000) )
                                                {
                                                  v8 = **((_QWORD **)&v99._anon_0._M_allocated_capacity + 1) + 0x4000LL;
                                                  v69 = *(&v99._anon_0._M_allocated_capacity + 1) + 8;
                                                  if ( !*(_BYTE *)(((*(&v99._anon_0._M_allocated_capacity + 1) + 8) >> 3)
                                                                 + 0x7FFF8000) )
                                                  {
                                                    v70 = *(void **)(*(&v99._anon_0._M_allocated_capacity + 1) + 8);
                                                    v8 = (int)v8 - (int)v70;
                                                    if ( v67 <= v8 )
                                                      v8 = v67;
                                                    memcpy(v70, v68, v8);
                                                    *(_QWORD *)(v64 + 8) += v8;
                                                    v64 = *(&v99._anon_0._M_allocated_capacity + 1);
                                                    if ( !*(_BYTE *)((*(&v99._anon_0._M_allocated_capacity + 1) >> 3)
                                                                   + 0x7FFF8000) )
                                                    {
                                                      v8 = **((_QWORD **)&v99._anon_0._M_allocated_capacity + 1)
                                                         + 0x4000LL;
                                                      v71 = *(&v99._anon_0._M_allocated_capacity + 1) + 8;
                                                      if ( !*(_BYTE *)(((*(&v99._anon_0._M_allocated_capacity + 1) + 8) >> 3)
                                                                     + 0x7FFF8000) )
                                                      {
                                                        v72 = *(void **)(*(&v99._anon_0._M_allocated_capacity + 1) + 8);
                                                        v8 = (int)v8 - (int)v72;
                                                        if ( v8 > 5 )
                                                          v8 = 6LL;
                                                        memcpy(v72, " port:", v8);
                                                        *(_QWORD *)(v64 + 8) += v8;
                                                        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                                                          *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&v99._anon_0._M_allocated_capacity
                                                          + 1),
                                                          HIDWORD(v92.tv_sec));
                                                        v64 = *(&v99._anon_0._M_allocated_capacity + 1);
                                                        if ( !*(_BYTE *)((*(&v99._anon_0._M_allocated_capacity + 1) >> 3)
                                                                       + 0x7FFF8000) )
                                                        {
                                                          v8 = **((_QWORD **)&v99._anon_0._M_allocated_capacity + 1)
                                                             + 0x4000LL;
                                                          v73 = *(&v99._anon_0._M_allocated_capacity + 1) + 8;
                                                          if ( !*(_BYTE *)(((*(&v99._anon_0._M_allocated_capacity + 1)
                                                                           + 8) >> 3)
                                                                         + 0x7FFF8000) )
                                                          {
                                                            v74 = *(void **)(*(&v99._anon_0._M_allocated_capacity + 1)
                                                                           + 8);
                                                            v8 = (int)v8 - (int)v74;
                                                            if ( v8 > 4 )
                                                              v8 = 5LL;
                                                            memcpy(v74, " ret:", v8);
                                                            *(_QWORD *)(v64 + 8) += v8;
                                                            common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                                                              *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&v99._anon_0._M_allocated_capacity
                                                              + 1),
                                                              reta);
                                                            v64 = *(&v99._anon_0._M_allocated_capacity + 1);
                                                            if ( !*(_BYTE *)((*(&v99._anon_0._M_allocated_capacity + 1) >> 3)
                                                                           + 0x7FFF8000) )
                                                            {
                                                              v8 = **((_QWORD **)&v99._anon_0._M_allocated_capacity + 1)
                                                                 + 0x4000LL;
                                                              redis_context_ptr = *(&v99._anon_0._M_allocated_capacity
                                                                                  + 1)
                                                                                + 8;
                                                              if ( !*(_BYTE *)(((*(&v99._anon_0._M_allocated_capacity + 1)
                                                                               + 8) >> 3)
                                                                             + 0x7FFF8000) )
                                                              {
                                                                v75 = *(void **)(*(&v99._anon_0._M_allocated_capacity + 1)
                                                                               + 8);
                                                                v8 = (int)v8 - (int)v75;
                                                                if ( v8 > 4 )
                                                                  v8 = 5LL;
                                                                memcpy(v75, " err:", v8);
                                                                *(_QWORD *)(v64 + 8) += v8;
                                                                redis_context_ptr = (unsigned __int64)&this->redis_context_ptr_;
                                                                if ( !*(_BYTE *)(((unsigned __int64)&this->redis_context_ptr_ >> 3)
                                                                               + 0x7FFF8000) )
                                                                {
                                                                  redis_context_ptr = (unsigned __int64)this->redis_context_ptr_;
                                                                  v76 = *(_BYTE *)((redis_context_ptr >> 3) + 0x7FFF8000);
                                                                  if ( (char)((redis_context_ptr & 7) + 3) < v76 || !v76 )
                                                                  {
                                                                    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                                                                      *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&v99._anon_0._M_allocated_capacity
                                                                      + 1),
                                                                      *(_DWORD *)redis_context_ptr);
                                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v99);
                                                                    v20 = -1;
                                                                    goto LABEL_111;
                                                                  }
                                                                  goto LABEL_171;
                                                                }
LABEL_170:
                                                                __asan_report_load8(redis_context_ptr);
LABEL_171:
                                                                __asan_report_load4(redis_context_ptr);
LABEL_172:
                                                                v77 = (const char *)timeout;
                                                                v20 = redisClusterSetOptionTimeout(
                                                                        (redisClusterContext_0 *)redis_context_ptr,
                                                                        v92);
                                                                if ( !v20 )
                                                                {
                                                                  v78 = time(0LL);
                                                                  p_last_manual_update_route_time = &this->last_manual_update_route_time_;
                                                                  v80 = *(_BYTE *)(((unsigned __int64)&this->last_manual_update_route_time_ >> 3)
                                                                                 + 0x7FFF8000);
                                                                  if ( !v80 || v80 > 3 )
                                                                  {
                                                                    this->last_manual_update_route_time_ = v78;
LABEL_111:
                                                                    v60 = (char *)*((_QWORD *)v11 - 8);
                                                                    if ( v60 != v11 - 48 )
                                                                      operator delete(v60);
                                                                    goto LABEL_113;
                                                                  }
LABEL_199:
                                                                  v91 = (struct _Unwind_Exception *)__asan_report_store4(p_last_manual_update_route_time, v77);
                                                                  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v99._M_dataplus._M_p != &v99._anon_0 )
                                                                    operator delete(v99._M_dataplus._M_p);
                                                                  v21 = v100._M_dataplus._M_p;
                                                                  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v100._M_dataplus._M_p != &v100._anon_0 )
                                                                    operator delete(v100._M_dataplus._M_p);
                                                                  __asan_handle_no_return(v21);
                                                                  _Unwind_Resume(v91);
                                                                }
                                                                v77 = (const char *)&common::milog::MiLogDefault::default_log_obj_;
                                                                common::milog::MiLogStream::MiLogStream(
                                                                  (common::milog::MiLogStream *const)&v100,
                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                  4u,
                                                                  "src/redis_cluster_conn.cpp",
                                                                  "init",
                                                                  74);
                                                                v81 = *(&v100._anon_0._M_allocated_capacity + 1);
                                                                if ( *(_BYTE *)((*(&v100._anon_0._M_allocated_capacity
                                                                                 + 1) >> 3)
                                                                              + 0x7FFF8000) )
                                                                {
                                                                  v82 = *(&v100._anon_0._M_allocated_capacity + 1);
                                                                  __asan_report_load8(*(&v100._anon_0._M_allocated_capacity
                                                                                      + 1));
                                                                }
                                                                else
                                                                {
                                                                  this = (common::midb::RedisClusterConn *const)(**((_QWORD **)&v100._anon_0._M_allocated_capacity + 1) + 0x4000LL);
                                                                  v82 = *(&v100._anon_0._M_allocated_capacity + 1) + 8;
                                                                  if ( !*(_BYTE *)(((*(&v100._anon_0._M_allocated_capacity
                                                                                     + 1)
                                                                                   + 8) >> 3)
                                                                                 + 0x7FFF8000) )
                                                                  {
                                                                    v83 = *(void **)(*(&v100._anon_0._M_allocated_capacity
                                                                                     + 1)
                                                                                   + 8);
                                                                    v84 = (int)this - (int)v83;
                                                                    if ( v84 > 0x36 )
                                                                      v84 = 55LL;
                                                                    v77 = "[REDIS] redis cluster context set timeout fialed, host:";
                                                                    memcpy(
                                                                      v83,
                                                                      "[REDIS] redis cluster context set timeout fialed, host:",
                                                                      v84);
                                                                    *(_QWORD *)(v81 + 8) += v84;
                                                                    this = (common::midb::RedisClusterConn *const)*(&v100._anon_0._M_allocated_capacity + 1);
                                                                    v82 = v8 + 8;
                                                                    if ( !*(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
                                                                    {
                                                                      v85 = *(_QWORD *)(v8 + 8);
                                                                      if ( !*(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
                                                                      {
                                                                        v77 = *(const char **)v8;
                                                                        if ( !*(_BYTE *)((*(&v100._anon_0._M_allocated_capacity
                                                                                          + 1) >> 3)
                                                                                       + 0x7FFF8000) )
                                                                        {
                                                                          v86 = (common::midb::RedisClusterConn *)(*(&v100._anon_0._M_allocated_capacity + 1) + 8);
                                                                          if ( !*(_BYTE *)(((*(&v100._anon_0._M_allocated_capacity
                                                                                             + 1)
                                                                                           + 8) >> 3)
                                                                                         + 0x7FFF8000) )
                                                                          {
                                                                            v87 = *(void **)(*(&v100._anon_0._M_allocated_capacity
                                                                                             + 1)
                                                                                           + 8);
                                                                            v88 = **((_DWORD **)&v100._anon_0._M_allocated_capacity
                                                                                   + 1)
                                                                                + 0x4000
                                                                                - (int)v87;
                                                                            if ( v85 <= v88 )
                                                                              v88 = v85;
                                                                            memcpy(v87, v77, v88);
                                                                            *(_QWORD *)&this->last_use_time += v88;
                                                                            this = (common::midb::RedisClusterConn *const)*(&v100._anon_0._M_allocated_capacity + 1);
                                                                            if ( !*(_BYTE *)((*(&v100._anon_0._M_allocated_capacity
                                                                                              + 1) >> 3)
                                                                                           + 0x7FFF8000) )
                                                                            {
                                                                              p_last_manual_update_route_time = (void *)(*(&v100._anon_0._M_allocated_capacity + 1) + 8);
                                                                              if ( !*(_BYTE *)(((*(&v100._anon_0._M_allocated_capacity
                                                                                                 + 1)
                                                                                               + 8) >> 3)
                                                                                             + 0x7FFF8000) )
                                                                              {
                                                                                v89 = *(void **)(*(&v100._anon_0._M_allocated_capacity
                                                                                                 + 1)
                                                                                               + 8);
                                                                                v90 = **((_DWORD **)&v100._anon_0._M_allocated_capacity
                                                                                       + 1)
                                                                                    + 0x4000
                                                                                    - (int)v89;
                                                                                if ( v90 > 5 )
                                                                                  v90 = 6LL;
                                                                                memcpy(v89, " port:", v90);
                                                                                *(_QWORD *)&this->last_use_time += v90;
                                                                                common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                                                                                  *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&v100._anon_0._M_allocated_capacity
                                                                                  + 1),
                                                                                  porta);
                                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v100);
                                                                                v20 = -1;
                                                                                goto LABEL_111;
                                                                              }
                                                                              goto LABEL_198;
                                                                            }
LABEL_197:
                                                                            p_last_manual_update_route_time = this;
                                                                            __asan_report_load8(this);
LABEL_198:
                                                                            __asan_report_load8(p_last_manual_update_route_time);
                                                                            goto LABEL_199;
                                                                          }
LABEL_196:
                                                                          __asan_report_load8(v86);
                                                                          goto LABEL_197;
                                                                        }
LABEL_195:
                                                                        v86 = this;
                                                                        __asan_report_load8(this);
                                                                        goto LABEL_196;
                                                                      }
LABEL_194:
                                                                      __asan_report_load8(v8);
                                                                      goto LABEL_195;
                                                                    }
LABEL_193:
                                                                    __asan_report_load8(v82);
                                                                    goto LABEL_194;
                                                                  }
                                                                }
                                                                __asan_report_load8(v82);
                                                                goto LABEL_193;
                                                              }
LABEL_169:
                                                              __asan_report_load8(redis_context_ptr);
                                                              goto LABEL_170;
                                                            }
LABEL_168:
                                                            redis_context_ptr = v64;
                                                            __asan_report_load8(v64);
                                                            goto LABEL_169;
                                                          }
LABEL_167:
                                                          __asan_report_load8(v73);
                                                          goto LABEL_168;
                                                        }
LABEL_166:
                                                        v73 = v64;
                                                        __asan_report_load8(v64);
                                                        goto LABEL_167;
                                                      }
LABEL_165:
                                                      __asan_report_load8(v71);
                                                      goto LABEL_166;
                                                    }
LABEL_164:
                                                    v71 = v64;
                                                    __asan_report_load8(v64);
                                                    goto LABEL_165;
                                                  }
LABEL_163:
                                                  __asan_report_load8(v69);
                                                  goto LABEL_164;
                                                }
LABEL_162:
                                                v69 = v64;
                                                __asan_report_load8(v64);
                                                goto LABEL_163;
                                              }
LABEL_161:
                                              __asan_report_load8(v8);
                                              goto LABEL_162;
                                            }
LABEL_160:
                                            __asan_report_load8(v65);
                                            goto LABEL_161;
                                          }
                                        }
                                        __asan_report_load8(v65);
                                        goto LABEL_160;
                                      }
LABEL_129:
                                      common::milog::MiLogStream::MiLogStream(
                                        (common::milog::MiLogStream *const)&v99,
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "src/redis_cluster_conn.cpp",
                                        "init",
                                        65);
                                      goto LABEL_132;
                                    }
LABEL_121:
                                    __asan_report_load8(v56);
                                    goto LABEL_122;
                                  }
LABEL_120:
                                  v56 = this;
                                  __asan_report_load8(this);
                                  goto LABEL_121;
                                }
LABEL_119:
                                __asan_report_load8(v8);
                                goto LABEL_120;
                              }
LABEL_118:
                              __asan_report_load8(v51);
                              goto LABEL_119;
                            }
                          }
                          __asan_report_load8(v51);
                          goto LABEL_118;
                        }
LABEL_93:
                        common::milog::MiLogStream::MiLogStream(
                          &v98,
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "src/redis_cluster_conn.cpp",
                          "init",
                          58);
                        goto LABEL_96;
                      }
LABEL_79:
                      __asan_report_load8(v40);
                      goto LABEL_80;
                    }
LABEL_78:
                    v40 = this;
                    __asan_report_load8(this);
                    goto LABEL_79;
                  }
LABEL_77:
                  __asan_report_load8(v8);
                  goto LABEL_78;
                }
LABEL_76:
                __asan_report_load8(p_cur);
                goto LABEL_77;
              }
            }
            __asan_report_load8(p_cur);
            goto LABEL_76;
          }
LABEL_54:
          v32 = (redisClusterContext_0 *)__asan_report_store1(v29, v25, v30, v31);
          goto LABEL_55;
        }
LABEL_53:
        __asan_report_load8(v29);
        goto LABEL_54;
      }
      v25 = 16LL;
      __asan_report_load_n(v28, 16LL);
LABEL_52:
      __asan_report_load8(v29);
      goto LABEL_53;
    }
LABEL_15:
    v15 = (std::string *)v8;
    __asan_report_load8(v8);
    goto LABEL_16;
  }
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)&v100,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/redis_cluster_conn.cpp",
    "init",
    40);
  v11 = (char *)*(&v100._anon_0._M_allocated_capacity + 1);
  if ( *(_BYTE *)((*(&v100._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
  {
    v17 = *(&v100._anon_0._M_allocated_capacity + 1);
    __asan_report_load8(*(&v100._anon_0._M_allocated_capacity + 1));
    goto LABEL_14;
  }
  v8 = **((_QWORD **)&v100._anon_0._M_allocated_capacity + 1) + 0x4000LL;
  v17 = *(&v100._anon_0._M_allocated_capacity + 1) + 8;
  if ( *(_BYTE *)(((*(&v100._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_load8(v17);
    goto LABEL_15;
  }
  v18 = *(void **)(*(&v100._anon_0._M_allocated_capacity + 1) + 8);
  v19 = (int)v8 - (int)v18;
  if ( v19 > 0x2B )
    v19 = 44LL;
  memcpy(v18, "[REDIS] redis cluaster not support db_index=", v19);
  *((_QWORD *)v11 + 1) += v19;
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
    *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&v100._anon_0._M_allocated_capacity + 1),
    db_idx);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v100);
  v20 = -1;
LABEL_113:
  if ( v101 == (char *)v10 )
  {
    *(_DWORD *)((v10 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v10 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v10 = 1172321806LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v10 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v20;
};

// Line 86: range 000000000CAB0B40-000000000CAB125B
int32_t __fastcall common::midb::RedisClusterConn::onGrab(common::midb::RedisClusterConn *const this)
{
  unsigned int v1; // ebx
  unsigned __int64 v3; // r14
  common::milog::MilogStringStream *ostr; // rbp
  _DWORD *v5; // r12
  cluster_node_0 **p_specific_node_ptr; // rdi
  void *p_redis_context_ptr; // rdi
  redisClusterContext_0 *redis_context_ptr; // rsi
  __int64 v9; // rax
  common::milog::MilogStringStream *v10; // rbp
  char *v11; // rdi
  size_t v12; // rbx
  int32_t result; // eax
  common::milog::MilogStringStream *p_con; // rdi
  char *v15; // rdi
  size_t v16; // rbx
  __int64 con; // rax
  cluster_node_0 *v18; // rax
  char v19; // dl
  char v20; // cl
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  size_t v23; // rbx
  uint32_t v24; // ebx
  char v25; // al
  void *v26; // rdi
  char *v27; // rdi
  size_t v28; // rbx
  char **p_data; // rdi
  char *v30; // rdi
  size_t v31; // rbx
  common::milog::MilogStringStream *v32; // r13
  common::milog::MilogStringStream *v33; // rdi
  char *v34; // rdi
  size_t v35; // rbp
  bool has_connected_node; // [rsp+7h] [rbp-181h]
  common::milog::MiLogStream v37; // [rsp+10h] [rbp-178h] BYREF
  char v38[344]; // [rsp+30h] [rbp-158h] BYREF

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_3(288LL);
    if ( v9 )
      v3 = v9;
  }
  ostr = (common::milog::MilogStringStream *)(v3 + 288);
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 12 info_len:122 48 56 8 iter:100 144 104 10 t_info:121";
  *(_QWORD *)(v3 + 16) = common::midb::RedisClusterConn::onGrab;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862723] = -218959360;
  v5[536862724] = 62194;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  p_specific_node_ptr = &this->specific_node_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->specific_node_ptr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_specific_node_ptr);
  }
  else if ( !this->specific_node_ptr_ )
  {
    p_redis_context_ptr = &this->redis_context_ptr_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->redis_context_ptr_ >> 3) + 0x7FFF8000) )
    {
      redis_context_ptr = this->redis_context_ptr_;
      if ( redis_context_ptr )
      {
        initNodeIterator((nodeIterator_0 *)(v3 + 48), redis_context_ptr);
        v1 = 0;
        has_connected_node = 0;
        while ( 1 )
        {
          if ( v1 > 0x270F )
            goto LABEL_50;
          v18 = nodeNext((nodeIterator_0 *)&ostr[-15]);
          if ( !v18 )
            goto LABEL_50;
          p_con = (common::milog::MilogStringStream *)&v18->con;
          if ( *(_BYTE *)(((unsigned __int64)&v18->con >> 3) + 0x7FFF8000) )
            break;
          con = (__int64)v18->con;
          if ( !con )
            goto LABEL_30;
          p_con = (common::milog::MilogStringStream *)(con + 8);
          v19 = *(_BYTE *)(((unsigned __int64)(con + 8) >> 3) + 0x7FFF8000);
          if ( v19 && v19 <= 3 )
            goto LABEL_26;
          if ( *(_DWORD *)(con + 8) )
            goto LABEL_30;
          LODWORD(ostr[-16].buffer_.data_) = 104;
          v20 = *(_BYTE *)(((unsigned __int64)(con + 140) >> 3) + 0x7FFF8000);
          if ( (char)(((con - 116) & 7) + 3) >= v20 && v20 )
          {
            __asan_report_load4(con + 140);
LABEL_41:
            common::milog::MiLogStream::MiLogStream(
              &v37,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "src/redis_cluster_conn.cpp",
              "onGrab",
              126);
            ostr = v37.ostr_;
            if ( *(_BYTE *)(((unsigned __int64)v37.ostr_ >> 3) + 0x7FFF8000) )
            {
              p_cur = v37.ostr_;
              __asan_report_load8(v37.ostr_);
            }
            else
            {
              p_cur = (common::milog::MilogStringStream *)&v37.ostr_->buffer_.cur_;
              if ( !*(_BYTE *)(((unsigned __int64)&v37.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
              {
                cur = v37.ostr_->buffer_.cur_;
                v23 = (size_t)&v37.ostr_->buffer_.data_[-(int)cur + 0x4000];
                if ( v23 > 0x29 )
                  v23 = 42LL;
                memcpy(cur, "[REDIS] redis_context_ptr tcp state error:", v23);
                ostr->buffer_.cur_ += v23;
                common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                  v37.ostr_,
                  *(unsigned __int8 *)(v3 + 144));
                common::milog::MiLogStream::~MiLogStream(&v37);
                result = -1;
                goto LABEL_46;
              }
            }
            __asan_report_load8(p_cur);
LABEL_50:
            if ( has_connected_node )
            {
              result = 0;
              goto LABEL_46;
            }
            v24 = time(0LL);
            v25 = *(_BYTE *)(((unsigned __int64)&this->last_manual_update_route_time_ >> 3) + 0x7FFF8000);
            if ( v25 && v25 <= 3 )
            {
              __asan_report_load4(&this->last_manual_update_route_time_);
            }
            else if ( v24 > this->last_manual_update_route_time_ + 300 )
            {
              this->last_manual_update_route_time_ = v24;
              common::milog::MiLogStream::MiLogStream(
                &v37,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "src/redis_cluster_conn.cpp",
                "onGrab",
                145);
              ostr = v37.ostr_;
              if ( !*(_BYTE *)(((unsigned __int64)v37.ostr_ >> 3) + 0x7FFF8000) )
              {
                v26 = &v37.ostr_->buffer_.cur_;
                if ( !*(_BYTE *)(((unsigned __int64)&v37.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                {
                  v27 = v37.ostr_->buffer_.cur_;
                  v28 = (size_t)&v37.ostr_->buffer_.data_[-(int)v27 + 0x4000];
                  if ( v28 > 0x32 )
                    v28 = 51LL;
                  memcpy(v27, "[REDIS] has no connected node, should refresh nodes", v28);
                  ostr->buffer_.cur_ += v28;
                  common::milog::MiLogStream::~MiLogStream(&v37);
                  v26 = &this->redis_context_ptr_;
                  if ( !*(_BYTE *)(((unsigned __int64)&this->redis_context_ptr_ >> 3) + 0x7FFF8000) )
                  {
                    result = cluster_update_route(this->redis_context_ptr_);
                    if ( !result )
                      goto LABEL_46;
                    common::milog::MiLogStream::MiLogStream(
                      &v37,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "src/redis_cluster_conn.cpp",
                      "onGrab",
                      150);
                    ostr = v37.ostr_;
                    if ( !*(_BYTE *)(((unsigned __int64)v37.ostr_ >> 3) + 0x7FFF8000) )
                    {
                      p_data = &v37.ostr_->buffer_.cur_;
                      if ( !*(_BYTE *)(((unsigned __int64)&v37.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                      {
                        v30 = v37.ostr_->buffer_.cur_;
                        v31 = (size_t)&v37.ostr_->buffer_.data_[-(int)v30 + 0x4000];
                        if ( v31 > 0x1A )
                          v31 = 27LL;
                        memcpy(v30, "[REDIS] update route failed", v31);
                        ostr->buffer_.cur_ += v31;
                        common::milog::MiLogStream::~MiLogStream(&v37);
                        result = -1;
                        goto LABEL_46;
                      }
LABEL_78:
                      result = __asan_report_load8(p_data);
                      goto LABEL_79;
                    }
LABEL_77:
                    p_data = &ostr->buffer_.data_;
                    __asan_report_load8(ostr);
                    goto LABEL_78;
                  }
LABEL_76:
                  __asan_report_load8(v26);
                  goto LABEL_77;
                }
LABEL_75:
                __asan_report_load8(v26);
                goto LABEL_76;
              }
LABEL_74:
              v26 = ostr;
              __asan_report_load8(ostr);
              goto LABEL_75;
            }
            common::milog::MiLogStream::MiLogStream(
              &v37,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "src/redis_cluster_conn.cpp",
              "onGrab",
              141);
            v32 = v37.ostr_;
            if ( *(_BYTE *)(((unsigned __int64)v37.ostr_ >> 3) + 0x7FFF8000) )
            {
              v33 = v37.ostr_;
              __asan_report_load8(v37.ostr_);
            }
            else
            {
              ostr = (common::milog::MilogStringStream *)(v37.ostr_->buffer_.data_ + 0x4000);
              v33 = (common::milog::MilogStringStream *)&v37.ostr_->buffer_.cur_;
              if ( !*(_BYTE *)(((unsigned __int64)&v37.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
              {
                v34 = v37.ostr_->buffer_.cur_;
                v35 = (int)ostr - (int)v34;
                if ( v35 > 0x1E )
                  v35 = 31LL;
                memcpy(v34, "[REDIS] last update route time:", v35);
                v32->buffer_.cur_ += v35;
                common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v37.ostr_, v24);
                common::milog::MiLogStream::~MiLogStream(&v37);
                result = 0;
                goto LABEL_46;
              }
            }
            __asan_report_load8(v33);
            goto LABEL_74;
          }
LABEL_27:
          if ( getsockopt(*(_DWORD *)(con + 140), 6, 11, &ostr[-9], (socklen_t *)&ostr[-16])
            || LOBYTE(ostr[-9].buffer_.data_) != 1 )
          {
            goto LABEL_41;
          }
          has_connected_node = 1;
LABEL_30:
          ++v1;
        }
LABEL_25:
        __asan_report_load8(p_con);
LABEL_26:
        con = __asan_report_load4(p_con);
        goto LABEL_27;
      }
LABEL_18:
      common::milog::MiLogStream::MiLogStream(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_cluster_conn.cpp",
        "onGrab",
        95);
      ostr = v37.ostr_;
      if ( *(_BYTE *)(((unsigned __int64)v37.ostr_ >> 3) + 0x7FFF8000) )
      {
        p_con = v37.ostr_;
        __asan_report_load8(v37.ostr_);
      }
      else
      {
        p_con = (common::milog::MilogStringStream *)&v37.ostr_->buffer_.cur_;
        if ( !*(_BYTE *)(((unsigned __int64)&v37.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
        {
          v15 = v37.ostr_->buffer_.cur_;
          v16 = (size_t)&v37.ostr_->buffer_.data_[-(int)v15 + 0x4000];
          if ( v16 > 0x1C )
            v16 = 29LL;
          memcpy(v15, "[REDIS] redis context is null", v16);
          ostr->buffer_.cur_ += v16;
          common::milog::MiLogStream::~MiLogStream(&v37);
          result = -1;
          goto LABEL_46;
        }
      }
      __asan_report_load8(p_con);
      goto LABEL_25;
    }
LABEL_17:
    __asan_report_load8(p_redis_context_ptr);
    goto LABEL_18;
  }
  common::milog::MiLogStream::MiLogStream(
    &v37,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/redis_cluster_conn.cpp",
    "onGrab",
    89);
  v10 = v37.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v37.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_redis_context_ptr = v37.ostr_;
    __asan_report_load8(v37.ostr_);
    goto LABEL_16;
  }
  p_redis_context_ptr = &v37.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v37.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(p_redis_context_ptr);
    goto LABEL_17;
  }
  v11 = v37.ostr_->buffer_.cur_;
  v12 = (size_t)&v37.ostr_->buffer_.data_[-(int)v11 + 0x4000];
  if ( v12 > 0x16 )
    v12 = 23LL;
  memcpy(v11, "[REDIS] may be in watch", v12);
  v10->buffer_.cur_ += v12;
  common::milog::MiLogStream::~MiLogStream(&v37);
  result = -1;
LABEL_46:
  if ( v38 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF800C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
LABEL_79:
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 158: range 000000000CAB1260-000000000CAB16B0
redisReply_0 **__fastcall common::midb::RedisClusterConn::command(
        redisReply_0 **a1,
        common::midb::RedisClusterConn *const this,
        char *format,
        __va_list_tag *ap)
{
  unsigned __int64 v5; // rbp
  common::milog::MilogStringStream *ostr; // r15
  _DWORD *v7; // r13
  redisClusterContext_0 *redis_context_ptr; // rdi
  __int64 p_specific_node_ptr; // rax
  uint32_t *p_last_manual_update_route_time; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // dl
  char **p_cur; // rdi
  char *cur; // rdi
  size_t v16; // r12
  __int64 v18; // rax
  redisReply_0 **v19; // rdi
  redisReply_0 *v20; // r12
  redisReply_0 **v21; // rdi
  redisReply_0 *v22; // rdi
  char v23; // al
  char *v24; // rdx
  char v25; // cl
  __int64 p_dval; // rax
  __int64 p_len; // rax
  void *v28; // rax
  common::milog::MiLogStream v31; // [rsp+10h] [rbp-B8h] BYREF
  char v32[152]; // [rsp+30h] [rbp-98h] BYREF

  v5 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v18 = __asan_stack_malloc_1(96LL);
    if ( v18 )
      v5 = v18;
  }
  ostr = (common::milog::MilogStringStream *)(v5 + 96);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 4 __a2 64 16 7 __guard";
  *(_QWORD *)(v5 + 16) = common::midb::RedisClusterConn::command;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->redis_context_ptr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->redis_context_ptr_);
    goto LABEL_24;
  }
  redis_context_ptr = this->redis_context_ptr_;
  if ( !redis_context_ptr )
  {
LABEL_24:
    if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
    {
      v19 = a1;
      __asan_report_store8(a1, this);
    }
    else
    {
      *a1 = 0LL;
      v19 = a1 + 1;
      if ( !*(_BYTE *)(((unsigned __int64)(a1 + 1) >> 3) + 0x7FFF8000) )
      {
        a1[1] = 0LL;
        goto LABEL_18;
      }
    }
    p_specific_node_ptr = __asan_report_store8(v19, this);
    goto LABEL_29;
  }
  p_specific_node_ptr = (__int64)&this->specific_node_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->specific_node_ptr_ >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    p_last_manual_update_route_time = (uint32_t *)__asan_report_load8(p_specific_node_ptr);
    goto LABEL_30;
  }
  this = (common::midb::RedisClusterConn *const)this->specific_node_ptr_;
  if ( this )
  {
    p_last_manual_update_route_time = &this->last_manual_update_route_time_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->last_manual_update_route_time_ >> 3) + 0x7FFF8000) )
    {
      v11 = *(_QWORD *)&this->last_manual_update_route_time_;
      if ( !v11 )
        goto LABEL_11;
      v12 = v11 + 8;
      v13 = *(_BYTE *)(((unsigned __int64)(v11 + 8) >> 3) + 0x7FFF8000);
      if ( !v13 || v13 > 3 )
      {
        if ( !*(_DWORD *)(v11 + 8) )
        {
LABEL_36:
          v20 = (redisReply_0 *)redisClustervCommandToNode(redis_context_ptr, (cluster_node_0 *)this, format, ap);
          goto LABEL_37;
        }
LABEL_11:
        this = (common::midb::RedisClusterConn *const)&common::milog::MiLogDefault::default_log_obj_;
        common::milog::MiLogStream::MiLogStream(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/redis_cluster_conn.cpp",
          "command",
          168);
        ostr = v31.ostr_;
        if ( !*(_BYTE *)(((unsigned __int64)v31.ostr_ >> 3) + 0x7FFF8000) )
        {
          p_cur = &v31.ostr_->buffer_.cur_;
          if ( !*(_BYTE *)(((unsigned __int64)&v31.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
          {
            cur = v31.ostr_->buffer_.cur_;
            v16 = (size_t)&v31.ostr_->buffer_.data_[-(int)cur + 0x4000];
            if ( v16 > 0x15 )
              v16 = 22LL;
            this = (common::midb::RedisClusterConn *const)&node;
            memcpy(cur, &node, v16);
            ostr->buffer_.cur_ += v16;
            common::milog::MiLogStream::~MiLogStream(&v31);
            if ( !*(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
            {
              *a1 = 0LL;
              redis_context_ptr = (redisClusterContext_0 *)(a1 + 1);
              if ( !*(_BYTE *)(((unsigned __int64)(a1 + 1) >> 3) + 0x7FFF8000) )
              {
                a1[1] = 0LL;
                goto LABEL_18;
              }
              goto LABEL_35;
            }
LABEL_34:
            redis_context_ptr = (redisClusterContext_0 *)a1;
            __asan_report_store8(a1, this);
LABEL_35:
            __asan_report_store8(redis_context_ptr, this);
            goto LABEL_36;
          }
LABEL_33:
          __asan_report_load8(p_cur);
          goto LABEL_34;
        }
LABEL_32:
        p_cur = &ostr->buffer_.data_;
        __asan_report_load8(ostr);
        goto LABEL_33;
      }
LABEL_31:
      __asan_report_load4(v12);
      goto LABEL_32;
    }
LABEL_30:
    __asan_report_load8(p_last_manual_update_route_time);
    goto LABEL_31;
  }
  this = (common::midb::RedisClusterConn *const)format;
  v20 = (redisReply_0 *)redisClustervCommand(redis_context_ptr, format, ap);
LABEL_37:
  if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
  {
    v21 = a1;
    __asan_report_store8(a1, this);
    goto LABEL_42;
  }
  *a1 = v20;
  v21 = a1 + 1;
  if ( *(_BYTE *)(((unsigned __int64)(a1 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_store8(v21, this);
    goto LABEL_43;
  }
  a1[1] = 0LL;
  this = (common::midb::RedisClusterConn *const)&ostr[-3];
  std::__allocate_guarded<std::allocator<std::_Sp_counted_deleter<redisReply *,void (*)(redisReply *),std::allocator<void>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_deleter<redisReply*,void (*)(redisReply*),std::allocator<void>,(__gnu_cxx::_Lock_policy)2> > *)&ostr[-3]);
LABEL_43:
  v22 = (redisReply_0 *)ostr[-2].buffer_.cur_;
  v23 = *(_BYTE *)(((unsigned __int64)&v22->integer >> 3) + 0x7FFF8000);
  if ( v23 && v23 <= 3 )
  {
    __asan_report_store4(&v22->integer, this);
LABEL_52:
    v22 = (redisReply_0 *)v24;
    __asan_report_store4(v24, this);
    goto LABEL_53;
  }
  LODWORD(v22->integer) = 1;
  v24 = (char *)&v22->integer + 4;
  v25 = *(_BYTE *)((((unsigned __int64)&v22->integer + 4) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v22 + 12) & 7) + 3) >= v25 && v25 )
    goto LABEL_52;
  HIDWORD(v22->integer) = 1;
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    p_dval = __asan_report_store8(v22, this);
    goto LABEL_54;
  }
  *(_QWORD *)&v22->type = &`vtable for'std::_Sp_counted_deleter<redisReply *,void (*)(redisReply *),std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                        + 2;
  p_dval = (__int64)&v22->dval;
  if ( *(_BYTE *)(((unsigned __int64)&v22->dval >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    p_len = __asan_report_store8(p_dval, this);
LABEL_55:
    v28 = (void *)__asan_report_store8(p_len, this);
    __cxa_begin_catch(v28);
    common::midb::RedisConnBase::freeReply(v20);
    __asan_handle_no_return(v20);
    __cxa_rethrow();
  }
  *(_QWORD *)&v22->dval = common::midb::RedisConnBase::freeReply;
  p_len = (__int64)&v22->len;
  if ( *(_BYTE *)(((unsigned __int64)&v22->len >> 3) + 0x7FFF8000) )
    goto LABEL_55;
  v22->len = (size_t)v20;
  a1[1] = v22;
LABEL_18:
  if ( v32 == (char *)v5 )
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
  return a1;
};

// Line 163: range 000000000CAAF2A2-000000000CAAF4A9
const char *__fastcall common::midb::RedisClusterConn::errStr(common::midb::RedisClusterConn *const this)
{
  redisClusterContext_0 *redis_context_ptr; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->redis_context_ptr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->redis_context_ptr_);
  }
  else
  {
    redis_context_ptr = this->redis_context_ptr_;
    if ( redis_context_ptr )
      return redis_context_ptr->errstr;
  }
  return "context is null";
};

// Line 181: range 000000000CAB34C4-000000000CAB37A1
redisReply_0 **__fastcall common::midb::RedisClusterConn::command(
        redisReply_0 **a1,
        common::midb::RedisClusterConn *const this,
        unsigned int argc,
        const char **argv,
        const size_t *argvlen)
{
  redisReply_0 *v6; // r13
  unsigned __int64 v7; // rbp
  _DWORD *v8; // r12
  redisClusterContext_0 *redis_context_ptr; // rdi
  redisReply_0 **v10; // rdi
  __int64 v11; // rax
  redisReply_0 **v12; // rdi
  unsigned __int64 v13; // rdi
  char v14; // al
  unsigned __int64 v15; // rdx
  char v16; // cl
  __int64 v17; // rax
  __int64 v18; // rax
  void *v20; // rax
  char v24[152]; // [rsp+20h] [rbp-98h] BYREF

  v6 = (redisReply_0 *)this;
  v7 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(96LL);
    if ( v11 )
      v7 = v11;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 48 1 4 __a2 64 16 7 __guard";
  *(_QWORD *)(v7 + 16) = common::midb::RedisClusterConn::command;
  v8 = (_DWORD *)(v7 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->redis_context_ptr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->redis_context_ptr_);
    goto LABEL_10;
  }
  redis_context_ptr = this->redis_context_ptr_;
  if ( !redis_context_ptr )
  {
LABEL_10:
    if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
    {
      v12 = a1;
      __asan_report_store8(a1, this);
    }
    else
    {
      *a1 = 0LL;
      v12 = a1 + 1;
      if ( !*(_BYTE *)(((unsigned __int64)(a1 + 1) >> 3) + 0x7FFF8000) )
      {
        a1[1] = 0LL;
        goto LABEL_25;
      }
    }
    __asan_report_store8(v12, this);
    goto LABEL_15;
  }
  this = (common::midb::RedisClusterConn *const)argc;
  v6 = (redisReply_0 *)redisClusterCommandArgv(redis_context_ptr, argc, argv, argvlen);
  if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    v10 = a1;
    __asan_report_store8(a1, this);
    goto LABEL_16;
  }
  *a1 = v6;
  v10 = a1 + 1;
  if ( *(_BYTE *)(((unsigned __int64)(a1 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_store8(v10, this);
    goto LABEL_17;
  }
  a1[1] = 0LL;
  this = (common::midb::RedisClusterConn *const)(v7 + 48);
  std::__allocate_guarded<std::allocator<std::_Sp_counted_deleter<redisReply *,void (*)(redisReply *),std::allocator<void>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_deleter<redisReply*,void (*)(redisReply*),std::allocator<void>,(__gnu_cxx::_Lock_policy)2> > *)(v7 + 48));
LABEL_17:
  v13 = *(_QWORD *)(v7 + 72);
  v14 = *(_BYTE *)(((v13 + 8) >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
  {
    __asan_report_store4(v13 + 8, this);
LABEL_29:
    v13 = v15;
    __asan_report_store4(v15, this);
    goto LABEL_30;
  }
  *(_DWORD *)(v13 + 8) = 1;
  v15 = v13 + 12;
  v16 = *(_BYTE *)(((v13 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v13 + 12) & 7) + 3) >= v16 && v16 )
    goto LABEL_29;
  *(_DWORD *)(v13 + 12) = 1;
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    v17 = __asan_report_store8(v13, this);
    goto LABEL_31;
  }
  *(_QWORD *)v13 = &`vtable for'std::_Sp_counted_deleter<redisReply *,void (*)(redisReply *),std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                 + 2;
  v17 = v13 + 16;
  if ( *(_BYTE *)(((v13 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    v18 = __asan_report_store8(v17, this);
LABEL_32:
    v20 = (void *)__asan_report_store8(v18, this);
    __cxa_begin_catch(v20);
    common::midb::RedisConnBase::freeReply(v6);
    __asan_handle_no_return(v6);
    __cxa_rethrow();
  }
  *(_QWORD *)(v13 + 16) = common::midb::RedisConnBase::freeReply;
  v18 = v13 + 24;
  if ( *(_BYTE *)(((v13 + 24) >> 3) + 0x7FFF8000) )
    goto LABEL_32;
  *(_QWORD *)(v13 + 24) = v6;
  a1[1] = (redisReply_0 *)v13;
LABEL_25:
  if ( v24 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
  }
  return a1;
};

// Line 191: range 000000000CAB2C26-000000000CAB3312
cluster_node_0 **__fastcall common::midb::RedisClusterConn::cmdWatch(
        cluster_node_0 **a1,
        common::midb::RedisClusterConn *const this,
        common::milog::MilogStringStream *key_vec,
        std::forward_iterator_tag a4)
{
  size_t v4; // rbx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r14
  cluster_node_0 **p_specific_node_ptr; // rdi
  char **p_data; // rdi
  char *v10; // rdi
  cluster_node_0 **v11; // rdi
  __int64 v13; // rax
  common::milog::MilogStringStream *ostr; // rdi
  char *cur; // rdi
  std::forward_iterator_tag v16; // cl
  std::_Vector_base<std::string>::pointer data; // rax
  const std::vector<std::string> *p_cur; // rdi
  const char *v19; // rsi
  std::string::size_type M_string_length; // r15
  char *v21; // rdi
  uint16_t SlotByKey; // ax
  common::milog::MilogStringStream *v23; // rdi
  char *v24; // rdi
  char *v25; // rdi
  size_t v26; // rdi
  struct _Unwind_Exception *v27; // rbx
  char *v28; // rdi
  uint16_t slot; // [rsp+Eh] [rbp-FAh]
  std::_Vector_base<std::string>::pointer v31; // [rsp+10h] [rbp-F8h]
  common::midb::RedisClusterConn *thisa; // [rsp+18h] [rbp-F0h]
  std::string v33; // [rsp+30h] [rbp-D8h] BYREF
  common::milog::MiLogStream v34; // [rsp+50h] [rbp-B8h] BYREF
  char v35[152]; // [rsp+70h] [rbp-98h] BYREF

  thisa = this;
  v6 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_1(96LL);
    if ( v13 )
      v6 = v13;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 32 13 watch_cmd:205";
  *(_QWORD *)(v6 + 16) = common::midb::RedisClusterConn::cmdWatch;
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&key_vec->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&key_vec->buffer_.cur_);
    goto LABEL_20;
  }
  if ( *(_BYTE *)(((unsigned __int64)key_vec >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8(key_vec);
LABEL_21:
    this = (common::midb::RedisClusterConn *const)&common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/redis_cluster_conn.cpp",
      "cmdWatch",
      194);
    key_vec = v34.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v34.ostr_ >> 3) + 0x7FFF8000) )
    {
      ostr = v34.ostr_;
      __asan_report_load8(v34.ostr_);
    }
    else
    {
      v4 = (size_t)(v34.ostr_->buffer_.data_ + 0x4000);
      ostr = (common::milog::MilogStringStream *)&v34.ostr_->buffer_.cur_;
      if ( !*(_BYTE *)(((unsigned __int64)&v34.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      {
        cur = v34.ostr_->buffer_.cur_;
        v4 = (int)v4 - (int)cur;
        if ( v4 > 0x12 )
          v4 = 19LL;
        this = (common::midb::RedisClusterConn *const)"watch key vec empty";
        memcpy(cur, "watch key vec empty", v4);
        key_vec->buffer_.cur_ += v4;
        common::milog::MiLogStream::~MiLogStream(&v34);
        if ( !*(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
        {
          *a1 = 0LL;
          p_specific_node_ptr = a1 + 1;
          if ( !*(_BYTE *)(((unsigned __int64)(a1 + 1) >> 3) + 0x7FFF8000) )
          {
            a1[1] = 0LL;
            goto LABEL_14;
          }
          goto LABEL_31;
        }
LABEL_30:
        p_specific_node_ptr = a1;
        __asan_report_store8(a1, this);
LABEL_31:
        __asan_report_store8(p_specific_node_ptr, this);
        goto LABEL_32;
      }
    }
    __asan_report_load8(ostr);
    goto LABEL_30;
  }
  if ( key_vec->buffer_.cur_ == key_vec->buffer_.data_ )
    goto LABEL_21;
  p_specific_node_ptr = &this->specific_node_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->specific_node_ptr_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8(p_specific_node_ptr);
LABEL_33:
    p_data = &key_vec->buffer_.data_;
    __asan_report_load8(key_vec);
    goto LABEL_34;
  }
  if ( !this->specific_node_ptr_ )
    goto LABEL_37;
  this = (common::midb::RedisClusterConn *const)&common::milog::MiLogDefault::default_log_obj_;
  common::milog::MiLogStream::MiLogStream(
    &v34,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/redis_cluster_conn.cpp",
    "cmdWatch",
    200);
  key_vec = v34.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v34.ostr_ >> 3) + 0x7FFF8000) )
    goto LABEL_33;
  v4 = (size_t)(v34.ostr_->buffer_.data_ + 0x4000);
  p_data = &v34.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v34.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8(p_data);
    goto LABEL_35;
  }
  v10 = v34.ostr_->buffer_.cur_;
  v4 = (int)v4 - (int)v10;
  if ( v4 > 0x16 )
    v4 = 23LL;
  this = (common::midb::RedisClusterConn *const)"[REDIS] is in watch now";
  memcpy(v10, "[REDIS] is in watch now", v4);
  key_vec->buffer_.cur_ += v4;
  common::milog::MiLogStream::~MiLogStream(&v34);
  if ( !*(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
  {
    *a1 = 0LL;
    v11 = a1 + 1;
    if ( !*(_BYTE *)(((unsigned __int64)(a1 + 1) >> 3) + 0x7FFF8000) )
    {
      a1[1] = 0LL;
      goto LABEL_14;
    }
    goto LABEL_36;
  }
LABEL_35:
  v11 = a1;
  __asan_report_store8(a1, this);
LABEL_36:
  __asan_report_store8(v11, this);
LABEL_37:
  *(_QWORD *)(v6 + 32) = v6 + 48;
  std::string::_M_construct<char const*>((std::string *const)(v6 + 32), &byte_1A0D45E5[-5], byte_1A0D45E5, a4);
  if ( *(_BYTE *)(((unsigned __int64)key_vec >> 3) + 0x7FFF8000) )
  {
    p_cur = (const std::vector<std::string> *)key_vec;
    __asan_report_load8(key_vec);
    goto LABEL_41;
  }
  data = (std::_Vector_base<std::string>::pointer)key_vec->buffer_.data_;
  p_cur = (const std::vector<std::string> *)&key_vec->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&key_vec->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_load8(p_cur);
    goto LABEL_42;
  }
  v31 = (std::_Vector_base<std::string>::pointer)key_vec->buffer_.cur_;
  slot = -1;
  while ( 1 )
  {
    v4 = (size_t)data;
    if ( data == v31 )
    {
      if ( *(_BYTE *)(((unsigned __int64)key_vec >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(key_vec);
      }
      else if ( !*(_WORD *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
      {
        common::midb::RedisClusterConn::attachToSpecificNode(
          thisa,
          (const std::string *)key_vec->buffer_.data_,
          (const std::string *)(v6 + 32));
        goto LABEL_56;
      }
      v27 = (struct _Unwind_Exception *)__asan_report_store16(a1);
      if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v34.log_ != &v34.ostr_ptr_._M_refcount )
        operator delete(v34.log_);
      v28 = *(char **)(v6 + 32);
      if ( v28 != (char *)(v6 + 48) )
        operator delete(v28);
      __asan_handle_no_return(v28);
      _Unwind_Resume(v27);
    }
    v34.log_ = (common::milog::MiLog *)&v34.ostr_ptr_._M_refcount;
    std::string::_M_construct<char const*>((std::string *const)&v34, &byte_1A0D4624[-4], byte_1A0D4624, v16);
LABEL_42:
    v19 = (const char *)v4;
    common::tools::StringUtils::trim(&v33, (const std::string *)v4, (const std::string *)&v34, 1);
    M_string_length = v33._M_string_length;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v33._M_dataplus._M_p != &v33._anon_0 )
      operator delete(v33._M_dataplus._M_p);
    if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v34.log_ != &v34.ostr_ptr_._M_refcount )
      operator delete(v34.log_);
    if ( !M_string_length )
    {
      v19 = (const char *)&common::milog::MiLogDefault::default_log_obj_;
      common::milog::MiLogStream::MiLogStream(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/redis_cluster_conn.cpp",
        "cmdWatch",
        211);
      key_vec = v34.ostr_;
      if ( *(_BYTE *)(((unsigned __int64)v34.ostr_ >> 3) + 0x7FFF8000) )
      {
        v23 = v34.ostr_;
        __asan_report_load8(v34.ostr_);
      }
      else
      {
        v4 = (size_t)(v34.ostr_->buffer_.data_ + 0x4000);
        v23 = (common::milog::MilogStringStream *)&v34.ostr_->buffer_.cur_;
        if ( !*(_BYTE *)(((unsigned __int64)&v34.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
        {
          v24 = v34.ostr_->buffer_.cur_;
          v4 = (int)v4 - (int)v24;
          if ( v4 > 0x1F )
            v4 = 32LL;
          v19 = "find empty key in key_value_map.";
          memcpy(v24, "find empty key in key_value_map.", v4);
          key_vec->buffer_.cur_ += v4;
          common::milog::MiLogStream::~MiLogStream(&v34);
          if ( !*(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
          {
            *a1 = 0LL;
            v21 = (char *)(a1 + 1);
            if ( !*(_BYTE *)(((unsigned __int64)(a1 + 1) >> 3) + 0x7FFF8000) )
            {
              a1[1] = 0LL;
              goto LABEL_56;
            }
            goto LABEL_61;
          }
LABEL_60:
          v21 = (char *)a1;
          __asan_report_store8(a1, v19);
LABEL_61:
          __asan_report_store8(v21, v19);
          goto LABEL_62;
        }
      }
      __asan_report_load8(v23);
      goto LABEL_60;
    }
    v21 = (char *)v4;
    if ( !*(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    {
      v21 = *(char **)v4;
      SlotByKey = redisClusterGetSlotByKey(*(char **)v4);
      goto LABEL_63;
    }
LABEL_62:
    SlotByKey = __asan_report_load8(v21);
LABEL_63:
    if ( slot != 0xFFFF )
      break;
LABEL_72:
    slot = SlotByKey;
LABEL_65:
    if ( *(_QWORD *)(v6 + 40) == 0x3FFFFFFFFFFFFFFFLL )
    {
      __asan_handle_no_return(v21);
      std::__throw_length_error("basic_string::append");
    }
    std::string::_M_append(v6 + 32, " ");
    v26 = v4 + 8;
    if ( *(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v26);
    }
    else
    {
      v26 = v4;
      if ( !*(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      {
        std::string::_M_append(v6 + 32, *(_QWORD *)v4);
        goto LABEL_79;
      }
    }
    __asan_report_load8(v26);
LABEL_79:
    data = (std::_Vector_base<std::string>::pointer)(v4 + 32);
  }
  if ( slot == SlotByKey )
    goto LABEL_65;
  if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
  {
    v21 = (char *)a1;
    __asan_report_store8(a1, v19);
    goto LABEL_71;
  }
  *a1 = 0LL;
  v21 = (char *)(a1 + 1);
  if ( *(_BYTE *)(((unsigned __int64)(a1 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    SlotByKey = __asan_report_store8(v21, v19);
    goto LABEL_72;
  }
  a1[1] = 0LL;
LABEL_56:
  v25 = *(char **)(v6 + 32);
  if ( v25 != (char *)(v6 + 48) )
    operator delete(v25);
LABEL_14:
  if ( v35 == (char *)v6 )
  {
    *(_DWORD *)((v6 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
  return a1;
};

// Line 232: range 000000000CAB16B6-000000000CAB2C20
redisClusterContext_0 **__fastcall common::midb::RedisClusterConn::attachToSpecificNode(
        redisClusterContext_0 **a1,
        common::midb::RedisClusterConn *const this,
        unsigned __int64 key,
        unsigned __int64 cmd_str)
{
  size_t NodeByKey; // rbx
  redisReply_0 *v5; // r15
  __int64 v9; // rax
  const char *v10; // rsi
  common::milog::MilogStringStream *ostr; // rdi
  char *cur; // rdi
  redisClusterContext_0 **p_redis_context_ptr; // rdi
  std::string::pointer v14; // rsi
  common::milog::MilogStringStream *p_cur; // rdi
  char *v16; // rdi
  size_t v17; // rbx
  std::string::size_type v18; // rax
  char **v19; // rdi
  char *v20; // rdi
  size_t v21; // rbp
  const std::string *v22; // rdi
  char *v23; // rdi
  redisClusterContext_0 **v24; // rdi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdi
  char v27; // dl
  char v28; // cl
  unsigned __int64 v29; // rax
  redisClusterContext_0 **v30; // rdi
  char v31; // dl
  redisClusterContext_0 **v32; // rdi
  void *v33; // rax
  common::milog::MilogStringStream *v34; // rdi
  char *v35; // rdi
  size_t v36; // rdi
  char v37; // dl
  signed __int32 v38; // eax
  redisClusterContext_0 *v40; // rax
  common::milog::MilogStringStream *v41; // rdi
  char *v42; // rdi
  size_t v43; // rbx
  common::milog::MilogStringStream *v44; // rax
  size_t v45; // rax
  std::string::size_type *v46; // rdi
  void *v47; // rdi
  size_t v48; // rbx
  const std::string *v49; // rdi
  char *v50; // rdi
  size_t v51; // rbx
  size_t v52; // rax
  std::string::size_type *v53; // rdi
  void *v54; // rdi
  size_t v55; // rbx
  redisClusterContext_0 **v56; // rdi
  redisClusterContext_0 *v57; // rax
  std::string::size_type *v58; // rdi
  void *v59; // rdi
  size_t v60; // rbx
  std::string::size_type *v61; // rdi
  void *v62; // rdi
  size_t v63; // rbx
  const std::string *v64; // rdi
  char *v65; // rdi
  size_t v66; // rbx
  char *v67; // rdi
  size_t v68; // rbx
  char *v69; // rdi
  size_t v70; // rbx
  char *v71; // rdi
  size_t v72; // rbx
  char *v73; // rdi
  size_t v74; // rbx
  unsigned int updated; // eax
  volatile signed __int32 *v76; // rax
  redisClusterContext_0 **v77; // rdi
  char v78; // cl
  signed __int32 v79; // eax
  common::milog::MilogStringStream *v80; // rdi
  char *v81; // rdi
  char v82; // dl
  unsigned __int64 v83; // rdi
  volatile signed __int32 *v84; // rax
  char v85; // cl
  signed __int32 v86; // eax
  char v87; // dl
  char v88; // dl
  size_t v89; // rdi
  char v90; // dl
  signed __int32 v91; // eax
  unsigned __int64 v92; // rdi
  char v93; // dl
  std::string::pointer v94; // rsi
  common::milog::MilogStringStream *v95; // r12
  common::milog::MilogStringStream *v96; // rdi
  char *v97; // rdi
  common::milog::MilogStringStream *v98; // rdi
  char *v99; // rdi
  size_t v100; // rbx
  std::string::size_type v101; // rax
  char **v102; // rdi
  char *v103; // rdi
  size_t v104; // rbp
  redisClusterContext_0 **v105; // rdi
  struct _Unwind_Exception *v106; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v107; // rdi
  unsigned int moved_times; // [rsp+4h] [rbp-164h]
  unsigned __int64 v110; // [rsp+10h] [rbp-158h]
  _DWORD *v111; // [rsp+20h] [rbp-148h]
  common::milog::MiLogStream v112; // [rsp+30h] [rbp-138h] BYREF
  common::milog::MiLogStream v113; // [rsp+50h] [rbp-118h] BYREF
  common::milog::MiLogStream v114; // [rsp+70h] [rbp-F8h] BYREF
  common::milog::MiLogStream v115; // [rsp+90h] [rbp-D8h] BYREF
  char v116[184]; // [rsp+B0h] [rbp-B8h] BYREF

  v110 = (unsigned __int64)v116;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v110 = v9;
  }
  *(_QWORD *)v110 = 1102416563LL;
  *(_QWORD *)(v110 + 8) = "3 48 1 4 __a2 64 16 13 reply_ptr:248 96 16 7 __guard";
  *(_QWORD *)(v110 + 16) = common::midb::RedisClusterConn::attachToSpecificNode;
  v111 = (_DWORD *)(v110 >> 3);
  v111[536862720] = -235802127;
  v111[536862721] = -234753551;
  v111[536862722] = -219021312;
  v111[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->redis_context_ptr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->redis_context_ptr_);
LABEL_8:
    v10 = (const char *)&common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      &v115,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/redis_cluster_conn.cpp",
      "attachToSpecificNode",
      235);
    key = (unsigned __int64)v115.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v115.ostr_ >> 3) + 0x7FFF8000) )
    {
      ostr = v115.ostr_;
      __asan_report_load8(v115.ostr_);
    }
    else
    {
      NodeByKey = (size_t)(v115.ostr_->buffer_.data_ + 0x4000);
      ostr = (common::milog::MilogStringStream *)&v115.ostr_->buffer_.cur_;
      if ( !*(_BYTE *)(((unsigned __int64)&v115.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      {
        cur = v115.ostr_->buffer_.cur_;
        NodeByKey = (int)NodeByKey - (int)cur;
        if ( NodeByKey > 0x20 )
          NodeByKey = 33LL;
        v10 = "[REDIS] redis context ptr is null";
        memcpy(cur, "[REDIS] redis context ptr is null", NodeByKey);
        *(_QWORD *)(key + 8) += NodeByKey;
        common::milog::MiLogStream::~MiLogStream(&v115);
        if ( !*(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
        {
          *a1 = 0LL;
          p_redis_context_ptr = a1 + 1;
          if ( !*(_BYTE *)(((unsigned __int64)(a1 + 1) >> 3) + 0x7FFF8000) )
          {
            a1[1] = 0LL;
            goto LABEL_82;
          }
LABEL_18:
          __asan_report_store8(p_redis_context_ptr, v10);
          goto LABEL_19;
        }
LABEL_17:
        p_redis_context_ptr = a1;
        __asan_report_store8(a1, v10);
        goto LABEL_18;
      }
    }
    __asan_report_load8(ostr);
    goto LABEL_17;
  }
  if ( !this->redis_context_ptr_ )
    goto LABEL_8;
  for ( moved_times = 0; ; ++moved_times )
  {
    if ( moved_times > 0x63 )
      goto LABEL_264;
    p_redis_context_ptr = (redisClusterContext_0 **)key;
    if ( *(_BYTE *)((key >> 3) + 0x7FFF8000) )
    {
LABEL_19:
      __asan_report_load8(p_redis_context_ptr);
LABEL_20:
      __asan_report_load8(p_redis_context_ptr);
LABEL_21:
      v14 = (std::string::pointer)&common::milog::MiLogDefault::default_log_obj_;
      common::milog::MiLogStream::MiLogStream(
        &v115,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/redis_cluster_conn.cpp",
        "attachToSpecificNode",
        244);
      cmd_str = (unsigned __int64)v115.ostr_;
      if ( *(_BYTE *)(((unsigned __int64)v115.ostr_ >> 3) + 0x7FFF8000) )
      {
        p_cur = v115.ostr_;
        __asan_report_load8(v115.ostr_);
      }
      else
      {
        NodeByKey = (size_t)(v115.ostr_->buffer_.data_ + 0x4000);
        p_cur = (common::milog::MilogStringStream *)&v115.ostr_->buffer_.cur_;
        if ( !*(_BYTE *)(((unsigned __int64)&v115.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
        {
          v16 = v115.ostr_->buffer_.cur_;
          v17 = (int)NodeByKey - (int)v16;
          if ( v17 > 0x18 )
            v17 = 25LL;
          v14 = "[REDIS] get node for key:";
          memcpy(v16, "[REDIS] get node for key:", v17);
          *(_QWORD *)(cmd_str + 8) += v17;
          NodeByKey = (size_t)v115.ostr_;
          p_cur = (common::milog::MilogStringStream *)(key + 8);
          if ( !*(_BYTE *)(((key + 8) >> 3) + 0x7FFF8000) )
          {
            v18 = *(_QWORD *)(key + 8);
            if ( !*(_BYTE *)((key >> 3) + 0x7FFF8000) )
            {
              v14 = *(std::string::pointer *)key;
              if ( !*(_BYTE *)(((unsigned __int64)v115.ostr_ >> 3) + 0x7FFF8000) )
              {
                key = (unsigned __int64)(v115.ostr_->buffer_.data_ + 0x4000);
                v19 = &v115.ostr_->buffer_.cur_;
                if ( !*(_BYTE *)(((unsigned __int64)&v115.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                {
                  v20 = v115.ostr_->buffer_.cur_;
                  v21 = (int)key - (int)v20;
                  if ( v18 <= v21 )
                    v21 = v18;
                  memcpy(v20, v14, v21);
                  *(_QWORD *)(NodeByKey + 8) += v21;
                  key = (unsigned __int64)v115.ostr_;
                  if ( !*(_BYTE *)(((unsigned __int64)v115.ostr_ >> 3) + 0x7FFF8000) )
                  {
                    NodeByKey = (size_t)(v115.ostr_->buffer_.data_ + 0x4000);
                    v22 = (const std::string *)&v115.ostr_->buffer_.cur_;
                    if ( !*(_BYTE *)(((unsigned __int64)&v115.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                    {
                      v23 = v115.ostr_->buffer_.cur_;
                      NodeByKey = (int)NodeByKey - (int)v23;
                      if ( NodeByKey > 6 )
                        NodeByKey = 7LL;
                      v14 = " failed";
                      memcpy(v23, " failed", NodeByKey);
                      *(_QWORD *)(key + 8) += NodeByKey;
                      common::milog::MiLogStream::~MiLogStream(&v115);
                      if ( !*(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
                      {
                        *a1 = 0LL;
                        v24 = a1 + 1;
                        if ( !*(_BYTE *)(((unsigned __int64)(a1 + 1) >> 3) + 0x7FFF8000) )
                        {
                          a1[1] = 0LL;
                          goto LABEL_82;
                        }
                        goto LABEL_47;
                      }
LABEL_46:
                      v24 = a1;
                      __asan_report_store8(a1, v14);
LABEL_47:
                      __asan_report_store8(v24, v14);
LABEL_48:
                      __asan_report_load8(v24);
                      goto LABEL_49;
                    }
LABEL_45:
                    __asan_report_load8(v22);
                    goto LABEL_46;
                  }
LABEL_44:
                  v22 = (const std::string *)key;
                  __asan_report_load8(key);
                  goto LABEL_45;
                }
LABEL_43:
                __asan_report_load8(v19);
                goto LABEL_44;
              }
LABEL_42:
              v19 = (char **)NodeByKey;
              __asan_report_load8(NodeByKey);
              goto LABEL_43;
            }
LABEL_41:
            __asan_report_load8(key);
            goto LABEL_42;
          }
LABEL_40:
          __asan_report_load8(p_cur);
          goto LABEL_41;
        }
      }
      __asan_report_load8(p_cur);
      goto LABEL_40;
    }
    v14 = *(std::string::pointer *)key;
    p_redis_context_ptr = &this->redis_context_ptr_;
    if ( *(_BYTE *)(((unsigned __int64)&this->redis_context_ptr_ >> 3) + 0x7FFF8000) )
      goto LABEL_20;
    NodeByKey = (size_t)redisClusterGetNodeByKey(this->redis_context_ptr_, v14);
    if ( !NodeByKey )
      goto LABEL_21;
    v24 = (redisClusterContext_0 **)cmd_str;
    if ( *(_BYTE *)((cmd_str >> 3) + 0x7FFF8000) )
      goto LABEL_48;
    v24 = &this->redis_context_ptr_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->redis_context_ptr_ >> 3) + 0x7FFF8000) )
    {
      v5 = (redisReply_0 *)redisClusterCommandToNode(
                             this->redis_context_ptr_,
                             (cluster_node_0 *)NodeByKey,
                             *(const char **)cmd_str);
      *(_QWORD *)(v110 + 64) = v5;
      v14 = (std::string::pointer)(v110 + 48);
      std::__allocate_guarded<std::allocator<std::_Sp_counted_deleter<redisReply *,void (*)(redisReply *),std::allocator<void>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_deleter<redisReply*,void (*)(redisReply*),std::allocator<void>,(__gnu_cxx::_Lock_policy)2> > *)(v110 + 48));
      goto LABEL_50;
    }
LABEL_49:
    __asan_report_load8(v24);
LABEL_50:
    v25 = *(_QWORD *)(v110 + 104);
    v26 = v25 + 8;
    v27 = *(_BYTE *)(((v25 + 8) >> 3) + 0x7FFF8000);
    if ( v27 && v27 <= 3 )
    {
      __asan_report_store4(v26, v14);
LABEL_65:
      __asan_report_store4(v26, v14);
LABEL_66:
      __asan_report_store8(v26, v14);
LABEL_67:
      __asan_report_store8(v26, v14);
LABEL_68:
      v33 = (void *)__asan_report_store8(v26, v14);
      __cxa_begin_catch(v33);
      common::midb::RedisConnBase::freeReply(v5);
      __asan_handle_no_return(v5);
      __cxa_rethrow();
    }
    *(_DWORD *)(v25 + 8) = 1;
    v26 = v25 + 12;
    v28 = *(_BYTE *)(((v25 + 12) >> 3) + 0x7FFF8000);
    if ( (char)(((v25 + 12) & 7) + 3) >= v28 && v28 )
      goto LABEL_65;
    *(_DWORD *)(v25 + 12) = 1;
    v26 = v25;
    if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
      goto LABEL_66;
    *(_QWORD *)v25 = &`vtable for'std::_Sp_counted_deleter<redisReply *,void (*)(redisReply *),std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                   + 2;
    v26 = v25 + 16;
    if ( *(_BYTE *)(((v25 + 16) >> 3) + 0x7FFF8000) )
      goto LABEL_67;
    *(_QWORD *)(v25 + 16) = common::midb::RedisConnBase::freeReply;
    v26 = v25 + 24;
    if ( *(_BYTE *)(((v25 + 24) >> 3) + 0x7FFF8000) )
      goto LABEL_68;
    *(_QWORD *)(v25 + 24) = v5;
    *(_QWORD *)(v110 + 72) = v25;
    v29 = *(_QWORD *)(v110 + 64);
    if ( !v29 )
    {
      v14 = (std::string::pointer)&common::milog::MiLogDefault::default_log_obj_;
      common::milog::MiLogStream::MiLogStream(
        &v112,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/redis_cluster_conn.cpp",
        "attachToSpecificNode",
        251);
      key = (unsigned __int64)v112.ostr_;
      if ( *(_BYTE *)(((unsigned __int64)v112.ostr_ >> 3) + 0x7FFF8000) )
      {
        v34 = v112.ostr_;
        __asan_report_load8(v112.ostr_);
      }
      else
      {
        NodeByKey = (size_t)(v112.ostr_->buffer_.data_ + 0x4000);
        v34 = (common::milog::MilogStringStream *)&v112.ostr_->buffer_.cur_;
        if ( !*(_BYTE *)(((unsigned __int64)&v112.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
        {
          v35 = v112.ostr_->buffer_.cur_;
          NodeByKey = (int)NodeByKey - (int)v35;
          if ( NodeByKey > 0x2F )
            NodeByKey = 48LL;
          v14 = "[REDIS] command to specific node failed, nullptr";
          memcpy(v35, "[REDIS] command to specific node failed, nullptr", NodeByKey);
          *(_QWORD *)(key + 8) += NodeByKey;
          common::milog::MiLogStream::~MiLogStream(&v112);
          if ( !*(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
          {
            *a1 = 0LL;
            v30 = a1 + 1;
            if ( !*(_BYTE *)(((unsigned __int64)(a1 + 1) >> 3) + 0x7FFF8000) )
            {
              a1[1] = 0LL;
LABEL_76:
              NodeByKey = *(_QWORD *)(v110 + 72);
              if ( NodeByKey )
              {
                v36 = NodeByKey + 8;
                if ( !&_pthread_key_create )
                  goto LABEL_241;
                v37 = *(_BYTE *)((v36 >> 3) + 0x7FFF8000);
                if ( (char)((v36 & 7) + 3) >= v37 && v37 )
                  goto LABEL_240;
                v38 = _InterlockedExchangeAdd((volatile signed __int32 *)v36, 0xFFFFFFFF);
LABEL_81:
                if ( v38 == 1 )
                  goto LABEL_245;
              }
              goto LABEL_82;
            }
LABEL_88:
            __asan_report_store8(v30, v14);
LABEL_89:
            v29 = __asan_report_load4(v30);
LABEL_90:
            if ( *(_BYTE *)(((unsigned __int64)&this->specific_node_ptr_ >> 3) + 0x7FFF8000) )
            {
              __asan_report_store8(&this->specific_node_ptr_, v14);
            }
            else
            {
              this->specific_node_ptr_ = (cluster_node_0 *)NodeByKey;
              if ( !*(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
              {
                *a1 = (redisClusterContext_0 *)v29;
                v32 = a1 + 1;
                if ( !*(_BYTE *)(((unsigned __int64)(a1 + 1) >> 3) + 0x7FFF8000) )
                {
                  v40 = *(redisClusterContext_0 **)(v110 + 72);
                  *(_QWORD *)(v110 + 72) = 0LL;
                  a1[1] = v40;
                  goto LABEL_76;
                }
LABEL_96:
                __asan_report_store8(v32, v14);
LABEL_97:
                __asan_report_load8(v32);
                goto LABEL_98;
              }
            }
            v32 = a1;
            __asan_report_store8(a1, v14);
            goto LABEL_96;
          }
LABEL_87:
          v30 = a1;
          __asan_report_store8(a1, v14);
          goto LABEL_88;
        }
      }
      __asan_report_load8(v34);
      goto LABEL_87;
    }
    v30 = *(redisClusterContext_0 ***)(v110 + 64);
    v31 = *(_BYTE *)((v29 >> 3) + 0x7FFF8000);
    if ( v31 && v31 <= 3 )
      goto LABEL_89;
    if ( *(_DWORD *)v29 != 6 )
      goto LABEL_90;
    v32 = (redisClusterContext_0 **)(v29 + 32);
    if ( *(_BYTE *)(((v29 + 32) >> 3) + 0x7FFF8000) )
      goto LABEL_97;
    if ( !strncmp(*(const char **)(v29 + 32), "MOVED", 5uLL) )
    {
      v14 = (std::string::pointer)&common::milog::MiLogDefault::default_log_obj_;
      common::milog::MiLogStream::MiLogStream(
        &v114,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/redis_cluster_conn.cpp",
        "attachToSpecificNode",
        270);
      goto LABEL_149;
    }
LABEL_98:
    v14 = (std::string::pointer)&common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      &v113,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_cluster_conn.cpp",
      "attachToSpecificNode",
      265);
    key = (unsigned __int64)v113.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v113.ostr_ >> 3) + 0x7FFF8000) )
    {
      v41 = v113.ostr_;
      __asan_report_load8(v113.ostr_);
LABEL_124:
      __asan_report_load8(v41);
LABEL_125:
      __asan_report_load8(v41);
      goto LABEL_126;
    }
    v41 = (common::milog::MilogStringStream *)&v113.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v113.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_124;
    v42 = v113.ostr_->buffer_.cur_;
    v43 = (size_t)&v113.ostr_->buffer_.data_[-(int)v42 + 0x4000];
    if ( v43 > 9 )
      v43 = 10LL;
    v14 = "reply str:";
    memcpy(v42, "reply str:", v43);
    *(_QWORD *)(key + 8) += v43;
    v44 = *(common::milog::MilogStringStream **)(v110 + 64);
    key = (unsigned __int64)v113.ostr_;
    v41 = v44 + 2;
    if ( *(_BYTE *)(((unsigned __int64)&v44[2] >> 3) + 0x7FFF8000) )
      goto LABEL_125;
    cmd_str = (unsigned __int64)v44[2].buffer_.data_;
    if ( cmd_str )
    {
      v45 = strlen(v44[2].buffer_.data_);
      if ( !*(_BYTE *)((key >> 3) + 0x7FFF8000) )
      {
        v46 = (std::string::size_type *)(key + 8);
        if ( !*(_BYTE *)(((key + 8) >> 3) + 0x7FFF8000) )
        {
          v47 = *(void **)(key + 8);
          v48 = *(_DWORD *)key + 0x4000 - (int)v47;
          if ( v45 <= v48 )
            v48 = v45;
          v14 = (std::string::pointer)cmd_str;
          memcpy(v47, (const void *)cmd_str, v48);
          *(_QWORD *)(key + 8) += v48;
          goto LABEL_109;
        }
        goto LABEL_127;
      }
LABEL_126:
      v46 = (std::string::size_type *)key;
      __asan_report_load8(key);
LABEL_127:
      __asan_report_load8(v46);
    }
    if ( *(_BYTE *)((key >> 3) + 0x7FFF8000) )
    {
      v58 = (std::string::size_type *)key;
      __asan_report_load8(key);
LABEL_134:
      __asan_report_load8(v58);
LABEL_135:
      v49 = (const std::string *)key;
      __asan_report_load8(key);
LABEL_136:
      __asan_report_load8(v49);
LABEL_137:
      __asan_report_load8(v49);
      goto LABEL_138;
    }
    v58 = (std::string::size_type *)(key + 8);
    if ( *(_BYTE *)(((key + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_134;
    v59 = *(void **)(key + 8);
    v60 = *(_DWORD *)key + 0x4000 - (int)v59;
    if ( v60 > 5 )
      v60 = 6LL;
    v14 = "(null)";
    memcpy(v59, "(null)", v60);
    *(_QWORD *)(key + 8) += v60;
LABEL_109:
    key = (unsigned __int64)v113.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v113.ostr_ >> 3) + 0x7FFF8000) )
      goto LABEL_135;
    v49 = (const std::string *)&v113.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v113.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_136;
    v50 = v113.ostr_->buffer_.cur_;
    v51 = (size_t)&v113.ostr_->buffer_.data_[-(int)v50 + 0x4000];
    if ( v51 > 0xE )
      v51 = 15LL;
    v14 = " context error:";
    memcpy(v50, " context error:", v51);
    *(_QWORD *)(key + 8) += v51;
    v49 = (const std::string *)&this->redis_context_ptr_;
    if ( *(_BYTE *)(((unsigned __int64)&this->redis_context_ptr_ >> 3) + 0x7FFF8000) )
      goto LABEL_137;
    key = (unsigned __int64)v113.ostr_;
    cmd_str = (unsigned __int64)this->redis_context_ptr_->errstr;
    if ( this->redis_context_ptr_ != (redisClusterContext_0 *)-4LL )
    {
      v52 = strlen((const char *)cmd_str);
      if ( !*(_BYTE *)((key >> 3) + 0x7FFF8000) )
      {
        v53 = (std::string::size_type *)(key + 8);
        if ( !*(_BYTE *)(((key + 8) >> 3) + 0x7FFF8000) )
        {
          v54 = *(void **)(key + 8);
          v55 = *(_DWORD *)key + 0x4000 - (int)v54;
          if ( v52 <= v55 )
            v55 = v52;
          v14 = (std::string::pointer)cmd_str;
          memcpy(v54, (const void *)cmd_str, v55);
          *(_QWORD *)(key + 8) += v55;
          goto LABEL_120;
        }
        goto LABEL_139;
      }
LABEL_138:
      v53 = (std::string::size_type *)key;
      __asan_report_load8(key);
LABEL_139:
      __asan_report_load8(v53);
    }
    if ( *(_BYTE *)((key >> 3) + 0x7FFF8000) )
    {
      v61 = (std::string::size_type *)key;
      __asan_report_load8(key);
LABEL_146:
      __asan_report_load8(v61);
LABEL_147:
      v56 = a1;
      __asan_report_store8(a1, v14);
      goto LABEL_148;
    }
    v61 = (std::string::size_type *)(key + 8);
    if ( *(_BYTE *)(((key + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_146;
    v62 = *(void **)(key + 8);
    v63 = *(_DWORD *)key + 0x4000 - (int)v62;
    if ( v63 > 5 )
      v63 = 6LL;
    v14 = "(null)";
    memcpy(v62, "(null)", v63);
    *(_QWORD *)(key + 8) += v63;
LABEL_120:
    common::milog::MiLogStream::~MiLogStream(&v113);
    if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
      goto LABEL_147;
    *a1 = *(redisClusterContext_0 **)(v110 + 64);
    v56 = a1 + 1;
    if ( !*(_BYTE *)(((unsigned __int64)(a1 + 1) >> 3) + 0x7FFF8000) )
    {
      v57 = *(redisClusterContext_0 **)(v110 + 72);
      *(_QWORD *)(v110 + 72) = 0LL;
      a1[1] = v57;
      goto LABEL_76;
    }
LABEL_148:
    __asan_report_store8(v56, v14);
LABEL_149:
    v5 = (redisReply_0 *)v114.ostr_;
    v64 = (const std::string *)v114.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v114.ostr_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v114.ostr_);
LABEL_176:
      __asan_report_load8(v64);
LABEL_177:
      __asan_report_load8(v64);
LABEL_178:
      __asan_report_load8(v64);
LABEL_179:
      __asan_report_load8(v64);
LABEL_180:
      __asan_report_load8(v64);
LABEL_181:
      __asan_report_load8(v64);
LABEL_182:
      __asan_report_load8(v64);
LABEL_183:
      __asan_report_load8(v64);
LABEL_184:
      __asan_report_load8(v64);
LABEL_185:
      __asan_report_load8(v64);
LABEL_186:
      __asan_report_load8(v64);
LABEL_187:
      __asan_report_load8(v64);
LABEL_188:
      __asan_report_load8(v64);
      goto LABEL_189;
    }
    v64 = (const std::string *)&v114.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v114.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_176;
    v65 = v114.ostr_->buffer_.cur_;
    v66 = (size_t)&v114.ostr_->buffer_.data_[-(int)v65 + 0x4000];
    if ( v66 > 0xB )
      v66 = 12LL;
    v14 = "[REDIS] key:";
    memcpy(v65, "[REDIS] key:", v66);
    v5->integer += v66;
    v5 = (redisReply_0 *)v114.ostr_;
    v64 = (const std::string *)(key + 8);
    if ( *(_BYTE *)(((key + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_177;
    v64 = (const std::string *)key;
    if ( *(_BYTE *)((key >> 3) + 0x7FFF8000) )
      goto LABEL_178;
    v14 = *(std::string::pointer *)key;
    v64 = (const std::string *)v114.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v114.ostr_ >> 3) + 0x7FFF8000) )
      goto LABEL_179;
    v64 = (const std::string *)&v114.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v114.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_180;
    v67 = v114.ostr_->buffer_.cur_;
    v68 = (size_t)&v114.ostr_->buffer_.data_[-(int)v67 + 0x4000];
    if ( *(_QWORD *)(key + 8) <= v68 )
      v68 = *(_QWORD *)(key + 8);
    memcpy(v67, v14, v68);
    v5->integer += v68;
    v5 = (redisReply_0 *)v114.ostr_;
    v64 = (const std::string *)v114.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v114.ostr_ >> 3) + 0x7FFF8000) )
      goto LABEL_181;
    v64 = (const std::string *)&v114.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v114.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_182;
    v69 = v114.ostr_->buffer_.cur_;
    v70 = (size_t)&v114.ostr_->buffer_.data_[-(int)v69 + 0x4000];
    if ( v70 > 8 )
      v70 = 9LL;
    v14 = " command:";
    memcpy(v69, " command:", v70);
    v5->integer += v70;
    v5 = (redisReply_0 *)v114.ostr_;
    v64 = (const std::string *)(cmd_str + 8);
    if ( *(_BYTE *)(((cmd_str + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_183;
    v64 = (const std::string *)cmd_str;
    if ( *(_BYTE *)((cmd_str >> 3) + 0x7FFF8000) )
      goto LABEL_184;
    v14 = *(std::string::pointer *)cmd_str;
    v64 = (const std::string *)v114.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v114.ostr_ >> 3) + 0x7FFF8000) )
      goto LABEL_185;
    v64 = (const std::string *)&v114.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v114.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_186;
    v71 = v114.ostr_->buffer_.cur_;
    v72 = (size_t)&v114.ostr_->buffer_.data_[-(int)v71 + 0x4000];
    if ( *(_QWORD *)(cmd_str + 8) <= v72 )
      v72 = *(_QWORD *)(cmd_str + 8);
    memcpy(v71, v14, v72);
    v5->integer += v72;
    v5 = (redisReply_0 *)v114.ostr_;
    v64 = (const std::string *)v114.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v114.ostr_ >> 3) + 0x7FFF8000) )
      goto LABEL_187;
    v64 = (const std::string *)&v114.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v114.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_188;
    v73 = v114.ostr_->buffer_.cur_;
    v74 = (size_t)&v114.ostr_->buffer_.data_[-(int)v73 + 0x4000];
    if ( v74 > 6 )
      v74 = 7LL;
    memcpy(v73, " moved ", v74);
    v5->integer += v74;
    v14 = (std::string::pointer)moved_times;
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v114.ostr_, moved_times);
    common::milog::MiLogStream::~MiLogStream(&v114);
    v64 = (const std::string *)&this->redis_context_ptr_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->redis_context_ptr_ >> 3) + 0x7FFF8000) )
    {
      updated = cluster_update_route(this->redis_context_ptr_);
      goto LABEL_190;
    }
LABEL_189:
    updated = __asan_report_load8(v64);
LABEL_190:
    NodeByKey = updated;
    if ( updated )
    {
      v14 = (std::string::pointer)&common::milog::MiLogDefault::default_log_obj_;
      common::milog::MiLogStream::MiLogStream(
        &v115,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/redis_cluster_conn.cpp",
        "attachToSpecificNode",
        275);
      cmd_str = (unsigned __int64)v115.ostr_;
      if ( *(_BYTE *)(((unsigned __int64)v115.ostr_ >> 3) + 0x7FFF8000) )
      {
        v80 = v115.ostr_;
        __asan_report_load8(v115.ostr_);
      }
      else
      {
        key = (unsigned __int64)(v115.ostr_->buffer_.data_ + 0x4000);
        v80 = (common::milog::MilogStringStream *)&v115.ostr_->buffer_.cur_;
        if ( !*(_BYTE *)(((unsigned __int64)&v115.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
        {
          v81 = v115.ostr_->buffer_.cur_;
          key = (int)key - (int)v81;
          if ( key > 0x28 )
            key = 41LL;
          memcpy(v81, "[REDIS] cluster update route failed, ret:", key);
          *(_QWORD *)(cmd_str + 8) += key;
          v14 = (std::string::pointer)(unsigned int)NodeByKey;
          common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v115.ostr_, NodeByKey);
          common::milog::MiLogStream::~MiLogStream(&v115);
          if ( !*(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
          {
            *a1 = 0LL;
            v77 = a1 + 1;
            if ( !*(_BYTE *)(((unsigned __int64)(a1 + 1) >> 3) + 0x7FFF8000) )
            {
              a1[1] = 0LL;
              goto LABEL_76;
            }
LABEL_215:
            __asan_report_store8(v77, v14);
            goto LABEL_216;
          }
LABEL_214:
          v77 = a1;
          __asan_report_store8(a1, v14);
          goto LABEL_215;
        }
      }
      __asan_report_load8(v80);
      goto LABEL_214;
    }
    NodeByKey = *(_QWORD *)(v110 + 72);
    if ( !NodeByKey )
      continue;
    v76 = (volatile signed __int32 *)(NodeByKey + 8);
    if ( !&_pthread_key_create )
      goto LABEL_217;
    v77 = (redisClusterContext_0 **)(NodeByKey + 8);
    v78 = *(_BYTE *)(((unsigned __int64)v76 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v76 & 7) + 3) < v78 || !v78 )
    {
      v79 = _InterlockedExchangeAdd(v76, 0xFFFFFFFF);
      goto LABEL_196;
    }
LABEL_216:
    __asan_report_store4(v77, v14);
LABEL_217:
    v82 = *(_BYTE *)(((NodeByKey + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((NodeByKey + 8) & 7) + 3) >= v82 && v82 )
    {
      __asan_report_load4(NodeByKey + 8);
      goto LABEL_221;
    }
    v79 = *(_DWORD *)(NodeByKey + 8);
    *(_DWORD *)(NodeByKey + 8) = v79 - 1;
LABEL_196:
    if ( v79 != 1 )
      continue;
LABEL_221:
    v83 = NodeByKey;
    if ( *(_BYTE *)((NodeByKey >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(NodeByKey);
LABEL_232:
      __asan_report_load8(v83);
LABEL_233:
      __asan_report_store4(v83, v14);
      goto LABEL_234;
    }
    v83 = *(_QWORD *)NodeByKey + 16LL;
    if ( *(_BYTE *)((v83 >> 3) + 0x7FFF8000) )
      goto LABEL_232;
    (*(void (__fastcall **)(size_t))(*(_QWORD *)NodeByKey + 16LL))(NodeByKey);
    v84 = (volatile signed __int32 *)(NodeByKey + 12);
    if ( &_pthread_key_create )
    {
      v83 = NodeByKey + 12;
      v85 = *(_BYTE *)(((unsigned __int64)v84 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v84 & 7) + 3) < v85 || !v85 )
      {
        v86 = _InterlockedExchangeAdd(v84, 0xFFFFFFFF);
        goto LABEL_227;
      }
      goto LABEL_233;
    }
LABEL_234:
    v36 = NodeByKey + 12;
    v87 = *(_BYTE *)(((NodeByKey + 12) >> 3) + 0x7FFF8000);
    if ( (char)(((NodeByKey + 12) & 7) + 3) >= v87 )
    {
      if ( v87 )
        break;
    }
    v86 = *(_DWORD *)(NodeByKey + 12);
    *(_DWORD *)(NodeByKey + 12) = v86 - 1;
LABEL_227:
    if ( v86 == 1 )
    {
      v36 = NodeByKey;
      if ( *(_BYTE *)((NodeByKey >> 3) + 0x7FFF8000) )
        goto LABEL_238;
      v36 = *(_QWORD *)NodeByKey + 24LL;
      if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
        goto LABEL_239;
      (*(void (__fastcall **)(size_t))(*(_QWORD *)NodeByKey + 24LL))(NodeByKey);
    }
  }
  __asan_report_load4(v36);
LABEL_238:
  __asan_report_load8(v36);
LABEL_239:
  __asan_report_load8(v36);
LABEL_240:
  __asan_report_store4(v36, v14);
LABEL_241:
  v88 = *(_BYTE *)(((NodeByKey + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((NodeByKey + 8) & 7) + 3) < v88 || !v88 )
  {
    v38 = *(_DWORD *)(NodeByKey + 8);
    *(_DWORD *)(NodeByKey + 8) = v38 - 1;
    goto LABEL_81;
  }
  __asan_report_load4(NodeByKey + 8);
LABEL_245:
  if ( *(_BYTE *)((NodeByKey >> 3) + 0x7FFF8000) )
  {
    v89 = NodeByKey;
    __asan_report_load8(NodeByKey);
    goto LABEL_256;
  }
  v89 = *(_QWORD *)NodeByKey + 16LL;
  if ( *(_BYTE *)((v89 >> 3) + 0x7FFF8000) )
  {
LABEL_256:
    __asan_report_load8(v89);
    goto LABEL_257;
  }
  (*(void (__fastcall **)(size_t))(*(_QWORD *)NodeByKey + 16LL))(NodeByKey);
  v89 = NodeByKey + 12;
  if ( &_pthread_key_create )
  {
    v90 = *(_BYTE *)((v89 >> 3) + 0x7FFF8000);
    if ( (char)((v89 & 7) + 3) < v90 || !v90 )
    {
      v91 = _InterlockedExchangeAdd((volatile signed __int32 *)v89, 0xFFFFFFFF);
      goto LABEL_251;
    }
LABEL_257:
    __asan_report_store4(v89, v14);
  }
  v93 = *(_BYTE *)(((NodeByKey + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((NodeByKey + 12) & 7) + 3) >= v93 && v93 )
  {
    __asan_report_load4(NodeByKey + 12);
    goto LABEL_262;
  }
  v91 = *(_DWORD *)(NodeByKey + 12);
  *(_DWORD *)(NodeByKey + 12) = v91 - 1;
LABEL_251:
  if ( v91 == 1 )
  {
    if ( !*(_BYTE *)((NodeByKey >> 3) + 0x7FFF8000) )
    {
      v92 = *(_QWORD *)NodeByKey + 24LL;
      if ( !*(_BYTE *)((v92 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(size_t))(*(_QWORD *)NodeByKey + 24LL))(NodeByKey);
        goto LABEL_82;
      }
LABEL_263:
      __asan_report_load8(v92);
LABEL_264:
      v94 = (std::string::pointer)&common::milog::MiLogDefault::default_log_obj_;
      common::milog::MiLogStream::MiLogStream(
        &v115,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/redis_cluster_conn.cpp",
        "attachToSpecificNode",
        280);
      v95 = v115.ostr_;
      if ( *(_BYTE *)(((unsigned __int64)v115.ostr_ >> 3) + 0x7FFF8000) )
      {
        v96 = v115.ostr_;
        __asan_report_load8(v115.ostr_);
      }
      else
      {
        NodeByKey = (size_t)(v115.ostr_->buffer_.data_ + 0x4000);
        v96 = (common::milog::MilogStringStream *)&v115.ostr_->buffer_.cur_;
        if ( !*(_BYTE *)(((unsigned __int64)&v115.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
        {
          v97 = v115.ostr_->buffer_.cur_;
          NodeByKey = (int)NodeByKey - (int)v97;
          if ( NodeByKey > 0x1C )
            NodeByKey = 29LL;
          memcpy(v97, "[REDIS] moved too many times:", NodeByKey);
          v95->buffer_.cur_ += NodeByKey;
          v94 = (std::string::pointer)100;
          common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v115.ostr_, 100);
          v95 = v115.ostr_;
          if ( !*(_BYTE *)(((unsigned __int64)v115.ostr_ >> 3) + 0x7FFF8000) )
          {
            NodeByKey = (size_t)(v115.ostr_->buffer_.data_ + 0x4000);
            v98 = (common::milog::MilogStringStream *)&v115.ostr_->buffer_.cur_;
            if ( !*(_BYTE *)(((unsigned __int64)&v115.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
            {
              v99 = v115.ostr_->buffer_.cur_;
              v100 = (int)NodeByKey - (int)v99;
              if ( v100 > 4 )
                v100 = 5LL;
              v94 = " key:";
              memcpy(v99, " key:", v100);
              v95->buffer_.cur_ += v100;
              NodeByKey = (size_t)v115.ostr_;
              v98 = (common::milog::MilogStringStream *)(key + 8);
              if ( !*(_BYTE *)(((key + 8) >> 3) + 0x7FFF8000) )
              {
                v101 = *(_QWORD *)(key + 8);
                if ( !*(_BYTE *)((key >> 3) + 0x7FFF8000) )
                {
                  v94 = *(std::string::pointer *)key;
                  if ( !*(_BYTE *)(((unsigned __int64)v115.ostr_ >> 3) + 0x7FFF8000) )
                  {
                    v102 = &v115.ostr_->buffer_.cur_;
                    if ( !*(_BYTE *)(((unsigned __int64)&v115.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                    {
                      v103 = v115.ostr_->buffer_.cur_;
                      v104 = (size_t)&v115.ostr_->buffer_.data_[-(int)v103 + 0x4000];
                      if ( v101 <= v104 )
                        v104 = v101;
                      memcpy(v103, v94, v104);
                      *(_QWORD *)(NodeByKey + 8) += v104;
                      common::milog::MiLogStream::~MiLogStream(&v115);
                      if ( !*(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
                      {
                        *a1 = 0LL;
                        v105 = a1 + 1;
                        if ( !*(_BYTE *)(((unsigned __int64)(a1 + 1) >> 3) + 0x7FFF8000) )
                        {
                          a1[1] = 0LL;
                          goto LABEL_82;
                        }
LABEL_290:
                        v106 = (struct _Unwind_Exception *)__asan_report_store8(v105, v94);
                        v107 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v110 + 72);
                        if ( v107 )
                          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v107);
                        __asan_handle_no_return(v107);
                        _Unwind_Resume(v106);
                      }
LABEL_289:
                      v105 = a1;
                      __asan_report_store8(a1, v94);
                      goto LABEL_290;
                    }
LABEL_288:
                    __asan_report_load8(v102);
                    goto LABEL_289;
                  }
LABEL_287:
                  v102 = (char **)NodeByKey;
                  __asan_report_load8(NodeByKey);
                  goto LABEL_288;
                }
LABEL_286:
                __asan_report_load8(key);
                goto LABEL_287;
              }
LABEL_285:
              __asan_report_load8(v98);
              goto LABEL_286;
            }
LABEL_284:
            __asan_report_load8(v98);
            goto LABEL_285;
          }
LABEL_283:
          v98 = v95;
          __asan_report_load8(v95);
          goto LABEL_284;
        }
      }
      __asan_report_load8(v96);
      goto LABEL_283;
    }
LABEL_262:
    v92 = NodeByKey;
    __asan_report_load8(NodeByKey);
    goto LABEL_263;
  }
LABEL_82:
  if ( v116 == (char *)v110 )
  {
    *(_QWORD *)((v110 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v110 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v110 = 1172321806LL;
    *(_QWORD *)((v110 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v110 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return a1;
};

// Line 285: range 000000000CAB37A6-000000000CAB3B60
redisReply_0 **__fastcall common::midb::RedisClusterConn::cmdUnwatch(
        redisReply_0 **a1,
        common::midb::RedisClusterConn *const this)
{
  redisReply_0 *ostr; // r14
  unsigned __int64 v5; // rbp
  _DWORD *v6; // r13
  cluster_node_0 *specific_node_ptr; // rsi
  void *p_redis_context_ptr; // rdi
  redisReply_0 **v9; // rdi
  __int64 v10; // rax
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  size_t v13; // r12
  unsigned __int64 v14; // rdi
  char v15; // al
  unsigned __int64 v16; // rdx
  char v17; // cl
  __int64 v18; // rax
  __int64 v19; // rax
  void *v21; // rax
  common::milog::MiLogStream v22; // [rsp+10h] [rbp-B8h] BYREF
  char v23[152]; // [rsp+30h] [rbp-98h] BYREF

  v5 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_1(96LL);
    if ( v10 )
      v5 = v10;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 4 __a2 64 16 7 __guard";
  *(_QWORD *)(v5 + 16) = common::midb::RedisClusterConn::cmdUnwatch;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->specific_node_ptr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->specific_node_ptr_);
LABEL_12:
    specific_node_ptr = (cluster_node_0 *)&common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_cluster_conn.cpp",
      "cmdUnwatch",
      288);
    ostr = (redisReply_0 *)v22.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v22.ostr_ >> 3) + 0x7FFF8000) )
    {
      p_cur = v22.ostr_;
      __asan_report_load8(v22.ostr_);
    }
    else
    {
      p_cur = (common::milog::MilogStringStream *)&v22.ostr_->buffer_.cur_;
      if ( !*(_BYTE *)(((unsigned __int64)&v22.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      {
        cur = v22.ostr_->buffer_.cur_;
        v13 = (size_t)&v22.ostr_->buffer_.data_[-(int)cur + 0x4000];
        if ( v13 > 0x13 )
          v13 = 20LL;
        specific_node_ptr = (cluster_node_0 *)"[REDIS] not in watch";
        memcpy(cur, "[REDIS] not in watch", v13);
        ostr->integer += v13;
        common::milog::MiLogStream::~MiLogStream(&v22);
        if ( !*(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
        {
          *a1 = 0LL;
          p_redis_context_ptr = a1 + 1;
          if ( !*(_BYTE *)(((unsigned __int64)(a1 + 1) >> 3) + 0x7FFF8000) )
          {
            a1[1] = 0LL;
            goto LABEL_35;
          }
          goto LABEL_22;
        }
LABEL_21:
        p_redis_context_ptr = a1;
        __asan_report_store8(a1, specific_node_ptr);
LABEL_22:
        __asan_report_store8(p_redis_context_ptr, specific_node_ptr);
        goto LABEL_23;
      }
    }
    __asan_report_load8(p_cur);
    goto LABEL_21;
  }
  specific_node_ptr = this->specific_node_ptr_;
  if ( !specific_node_ptr )
    goto LABEL_12;
  p_redis_context_ptr = &this->redis_context_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->redis_context_ptr_ >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(p_redis_context_ptr);
    goto LABEL_24;
  }
  ostr = (redisReply_0 *)redisClusterCommandToNode(this->redis_context_ptr_, specific_node_ptr, "UNWATCH");
  p_redis_context_ptr = &this->specific_node_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->specific_node_ptr_ >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8(p_redis_context_ptr, specific_node_ptr);
    goto LABEL_25;
  }
  this->specific_node_ptr_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    v9 = a1;
    __asan_report_store8(a1, specific_node_ptr);
    goto LABEL_26;
  }
  *a1 = ostr;
  v9 = a1 + 1;
  if ( *(_BYTE *)(((unsigned __int64)(a1 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_store8(v9, specific_node_ptr);
    goto LABEL_27;
  }
  a1[1] = 0LL;
  specific_node_ptr = (cluster_node_0 *)(v5 + 48);
  std::__allocate_guarded<std::allocator<std::_Sp_counted_deleter<redisReply *,void (*)(redisReply *),std::allocator<void>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_deleter<redisReply*,void (*)(redisReply*),std::allocator<void>,(__gnu_cxx::_Lock_policy)2> > *)(v5 + 48));
LABEL_27:
  v14 = *(_QWORD *)(v5 + 72);
  v15 = *(_BYTE *)(((v14 + 8) >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
  {
    __asan_report_store4(v14 + 8, specific_node_ptr);
LABEL_39:
    v14 = v16;
    __asan_report_store4(v16, specific_node_ptr);
    goto LABEL_40;
  }
  *(_DWORD *)(v14 + 8) = 1;
  v16 = v14 + 12;
  v17 = *(_BYTE *)(((v14 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v14 + 12) & 7) + 3) >= v17 && v17 )
    goto LABEL_39;
  *(_DWORD *)(v14 + 12) = 1;
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    v18 = __asan_report_store8(v14, specific_node_ptr);
    goto LABEL_41;
  }
  *(_QWORD *)v14 = &`vtable for'std::_Sp_counted_deleter<redisReply *,void (*)(redisReply *),std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                 + 2;
  v18 = v14 + 16;
  if ( *(_BYTE *)(((v14 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    v19 = __asan_report_store8(v18, specific_node_ptr);
LABEL_42:
    v21 = (void *)__asan_report_store8(v19, specific_node_ptr);
    __cxa_begin_catch(v21);
    common::midb::RedisConnBase::freeReply(ostr);
    __asan_handle_no_return(ostr);
    __cxa_rethrow();
  }
  *(_QWORD *)(v14 + 16) = common::midb::RedisConnBase::freeReply;
  v19 = v14 + 24;
  if ( *(_BYTE *)(((v14 + 24) >> 3) + 0x7FFF8000) )
    goto LABEL_42;
  *(_QWORD *)(v14 + 24) = ostr;
  a1[1] = (redisReply_0 *)v14;
LABEL_35:
  if ( v23 == (char *)v5 )
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
  return a1;
};

// Line 297: range 000000000CAB3318-000000000CAB34BF
unsigned __int64 __fastcall common::midb::RedisClusterConn::cmdBeginTrans(
        unsigned __int64 a1,
        common::midb::RedisClusterConn *const this,
        const std::string *key,
        std::forward_iterator_tag a4)
{
  size_t v4; // rbp
  const std::string *v5; // r12
  std::string::size_type v7; // rdi
  void *v8; // rdi
  unsigned __int64 v9; // rdi
  std::string v11; // [rsp+0h] [rbp-38h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->specific_node_ptr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->specific_node_ptr_);
    goto LABEL_12;
  }
  v4 = (size_t)this;
  v5 = key;
  if ( this->specific_node_ptr_ )
  {
    this = (common::midb::RedisClusterConn *const)&common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/redis_cluster_conn.cpp",
      "cmdBeginTrans",
      300);
    v5 = (const std::string *)*(&v11._anon_0._M_allocated_capacity + 1);
    if ( !*(_BYTE *)((*(&v11._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
    {
      v4 = **((_QWORD **)&v11._anon_0._M_allocated_capacity + 1) + 0x4000LL;
      v7 = *(&v11._anon_0._M_allocated_capacity + 1) + 8;
      if ( !*(_BYTE *)(((*(&v11._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
      {
        v8 = *(void **)(*(&v11._anon_0._M_allocated_capacity + 1) + 8);
        v4 = (int)v4 - (int)v8;
        if ( v4 > 0x16 )
          v4 = 23LL;
        this = (common::midb::RedisClusterConn *const)"[REDIS] is in watch now";
        memcpy(v8, "[REDIS] is in watch now", v4);
        v5->_M_string_length += v4;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v11);
        if ( !*(_BYTE *)((a1 >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)a1 = 0LL;
          v9 = a1 + 8;
          if ( !*(_BYTE *)(((a1 + 8) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(a1 + 8) = 0LL;
            return a1;
          }
          goto LABEL_15;
        }
LABEL_14:
        v9 = a1;
        __asan_report_store8(a1, this);
LABEL_15:
        __asan_report_store8(v9, this);
        goto LABEL_16;
      }
LABEL_13:
      __asan_report_load8(v7);
      goto LABEL_14;
    }
LABEL_12:
    v7 = (std::string::size_type)v5;
    __asan_report_load8(v5);
    goto LABEL_13;
  }
LABEL_16:
  v11._M_dataplus._M_p = v11._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v11, "MULTI", "", a4);
  if ( *(_WORD *)((a1 >> 3) + 0x7FFF8000) )
    __asan_report_store16(a1);
  else
    common::midb::RedisClusterConn::attachToSpecificNode(
      (redisClusterContext_0 **)a1,
      (common::midb::RedisClusterConn *const)v4,
      (unsigned __int64)v5,
      (unsigned __int64)&v11);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11._M_dataplus._M_p != &v11._anon_0 )
    operator delete(v11._M_dataplus._M_p);
  return a1;
};

// Line 308: range 000000000CAAF4AA-000000000CAAFA5E
std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type *__fastcall common::midb::RedisClusterConn::cmdBeginTrans(
        unsigned __int64 a1,
        common::midb::RedisClusterConn *const this)
{
  common::midb::RedisClusterConn *v3; // rdi
  common::milog::MilogStringStream *ostr; // r12
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  size_t v8; // rbp
  _QWORD *v9; // rdi
  common::milog::MiLogStream v10; // [rsp+0h] [rbp-38h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->specific_node_ptr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->specific_node_ptr_);
LABEL_9:
    this = (common::midb::RedisClusterConn *const)&common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/redis_cluster_conn.cpp",
      "cmdBeginTrans",
      311);
    ostr = v10.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v10.ostr_ >> 3) + 0x7FFF8000) )
    {
      p_cur = v10.ostr_;
      __asan_report_load8(v10.ostr_);
    }
    else
    {
      p_cur = (common::milog::MilogStringStream *)&v10.ostr_->buffer_.cur_;
      if ( !*(_BYTE *)(((unsigned __int64)&v10.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      {
        cur = v10.ostr_->buffer_.cur_;
        v8 = (size_t)&v10.ostr_->buffer_.data_[-(int)cur + 0x4000];
        if ( v8 > 0x2A )
          v8 = 43LL;
        this = (common::midb::RedisClusterConn *const)"[REDIS] is not in watch or not specific key";
        memcpy(cur, "[REDIS] is not in watch or not specific key", v8);
        ostr->buffer_.cur_ += v8;
        common::milog::MiLogStream::~MiLogStream(&v10);
        if ( !*(_BYTE *)((a1 >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)a1 = 0LL;
          v9 = (_QWORD *)(a1 + 8);
          if ( !*(_BYTE *)(((a1 + 8) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(a1 + 8) = 0LL;
            return (std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type *)a1;
          }
          goto LABEL_19;
        }
LABEL_18:
        v9 = (_QWORD *)a1;
        __asan_report_store8(a1, this);
LABEL_19:
        __asan_report_store8(v9, this);
        goto LABEL_20;
      }
    }
    __asan_report_load8(p_cur);
    goto LABEL_18;
  }
  if ( !this->specific_node_ptr_ )
    goto LABEL_9;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    v3 = this;
    __asan_report_load8(this);
    goto LABEL_21;
  }
  v3 = (common::midb::RedisClusterConn *)(this->_vptr_RedisConnBase + 5);
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(v3);
    goto LABEL_22;
  }
  if ( !*(_WORD *)((a1 >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(unsigned __int64, common::midb::RedisClusterConn *const, const char *))this->_vptr_RedisConnBase
     + 5))(
      a1,
      this,
      "MULTI");
    return (std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type *)a1;
  }
LABEL_22:
  __asan_report_store16(a1);
  return common::midb::RedisClusterConn::cmdExecTrans(this)._M_ptr;
};

// Line 330: range 000000000CAAFA64-000000000CAAFBD1
int32_t __fastcall common::midb::RedisClusterConn::appendCommand(
        common::midb::RedisClusterConn *const this,
        const char *format,
        ___va_list_tag *ap)
{
  const char *v3; // r9
  redisClusterContext_0 *redis_context_ptr; // r8
  cluster_node_0 **p_specific_node_ptr; // rax
  cluster_node_0 *specific_node_ptr; // rsi
  redisContext_0 **p_con; // rdi
  redisContext_0 *con; // rax
  char v9; // cl
  common::milog::MilogStringStream *ostr; // rbp
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  size_t v14; // rbx
  common::milog::MiLogStream v15; // [rsp+0h] [rbp-38h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->redis_context_ptr_ >> 3) + 0x7FFF8000) )
  {
    p_specific_node_ptr = (cluster_node_0 **)__asan_report_load8(&this->redis_context_ptr_);
LABEL_12:
    __asan_report_load8(p_specific_node_ptr);
    return redisClustervAppendCommand(redis_context_ptr, v3, (__va_list_tag *)ap);
  }
  v3 = format;
  redis_context_ptr = this->redis_context_ptr_;
  if ( !redis_context_ptr )
    return -1;
  p_specific_node_ptr = &this->specific_node_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->specific_node_ptr_ >> 3) + 0x7FFF8000) )
    goto LABEL_12;
  specific_node_ptr = this->specific_node_ptr_;
  if ( !specific_node_ptr )
    return redisClustervAppendCommand(redis_context_ptr, v3, (__va_list_tag *)ap);
  p_con = &specific_node_ptr->con;
  if ( *(_BYTE *)(((unsigned __int64)&specific_node_ptr->con >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_con);
LABEL_15:
    __asan_report_load4(p_con);
    goto LABEL_16;
  }
  con = specific_node_ptr->con;
  if ( !con )
    goto LABEL_16;
  p_con = (redisContext_0 **)&con->err;
  v9 = *(_BYTE *)(((unsigned __int64)&con->err >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
    goto LABEL_15;
  if ( !con->err )
    return redisClustervAppendCommandToNode(redis_context_ptr, specific_node_ptr, v3, (__va_list_tag *)ap);
LABEL_16:
  common::milog::MiLogStream::MiLogStream(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/redis_cluster_conn.cpp",
    "appendCommand",
    341);
  ostr = v15.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v15.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_cur = v15.ostr_;
    __asan_report_load8(v15.ostr_);
    goto LABEL_22;
  }
  p_cur = (common::milog::MilogStringStream *)&v15.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v15.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(p_cur);
    return -1;
  }
  cur = v15.ostr_->buffer_.cur_;
  v14 = (size_t)&v15.ostr_->buffer_.data_[-(int)cur + 0x4000];
  if ( v14 > 0x15 )
    v14 = 22LL;
  memcpy(cur, &node, v14);
  ostr->buffer_.cur_ += v14;
  common::milog::MiLogStream::~MiLogStream(&v15);
  return -1;
};

// Line 357: range 000000000CAB3B66-000000000CAB4131
volatile signed __int32 *__fastcall common::midb::RedisClusterConn::getRedisReply(
        volatile signed __int32 *a1,
        common::midb::RedisClusterConn *const this)
{
  redisReply_0 *v3; // r14
  unsigned __int64 v4; // rbx
  volatile signed __int32 *v5; // r13
  _DWORD *v6; // rbp
  redisClusterContext_0 *redis_context_ptr; // rdi
  __int64 v8; // rax
  volatile signed __int32 *v9; // rdi
  unsigned __int64 v11; // rdi
  char v12; // al
  unsigned __int64 v13; // rdx
  char v14; // cl
  __int64 v15; // rax
  __int64 v16; // rax
  volatile signed __int32 *v17; // rdi
  __int64 v18; // rax
  char v19; // dl
  signed __int32 v20; // eax
  volatile signed __int32 *v21; // rdi
  char v22; // dl
  signed __int32 v23; // eax
  unsigned __int64 v24; // rdi
  void *v25; // rax
  common::milog::MilogStringStream *ostr; // r15
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  size_t v29; // r14
  volatile signed __int32 *v30; // rdi
  char v31; // dl
  char v32; // dl
  struct _Unwind_Exception *v33; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v34; // rdi
  unsigned int ret; // [rsp+Ch] [rbp-FCh]
  common::milog::MiLogStream v36; // [rsp+10h] [rbp-F8h] BYREF
  char v37[216]; // [rsp+30h] [rbp-D8h] BYREF

  v3 = (redisReply_0 *)this;
  v4 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(160LL);
    if ( v8 )
      v4 = v8;
  }
  v5 = (volatile signed __int32 *)(v4 + 160);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 1 4 __a2 64 8 17 raw_reply_ptr:362 96 16 13 reply_ptr:364 128 16 7 __guard";
  *(_QWORD *)(v4 + 16) = common::midb::RedisClusterConn::getRedisReply;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862723] = -219021312;
  v6[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->redis_context_ptr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->redis_context_ptr_);
  }
  else
  {
    redis_context_ptr = this->redis_context_ptr_;
    if ( redis_context_ptr )
    {
      *(_QWORD *)(v4 + 64) = 0LL;
      ret = redisClusterGetReply(redis_context_ptr, (void **)(v4 + 64));
      v3 = *(redisReply_0 **)(v4 + 64);
      *(_QWORD *)(v4 + 96) = v3;
      this = (common::midb::RedisClusterConn *const)(v4 + 48);
      std::__allocate_guarded<std::allocator<std::_Sp_counted_deleter<redisReply *,void (*)(redisReply *),std::allocator<void>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_deleter<redisReply*,void (*)(redisReply*),std::allocator<void>,(__gnu_cxx::_Lock_policy)2> > *)(v4 + 48));
      goto LABEL_16;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
  {
    v9 = a1;
    __asan_report_store8(a1, this);
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    v9 = a1 + 2;
    if ( !*(_BYTE *)(((unsigned __int64)(a1 + 2) >> 3) + 0x7FFF8000) )
    {
      *((_QWORD *)a1 + 1) = 0LL;
      goto LABEL_11;
    }
  }
  __asan_report_store8(v9, this);
LABEL_16:
  v11 = *(_QWORD *)(v4 + 136);
  v12 = *(_BYTE *)(((v11 + 8) >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
  {
    __asan_report_store4(v11 + 8, this);
LABEL_44:
    v11 = v13;
    __asan_report_store4(v13, this);
    goto LABEL_45;
  }
  *(_DWORD *)(v11 + 8) = 1;
  v13 = v11 + 12;
  v14 = *(_BYTE *)(((v11 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v11 + 12) & 7) + 3) >= v14 && v14 )
    goto LABEL_44;
  *(_DWORD *)(v11 + 12) = 1;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    v15 = __asan_report_store8(v11, this);
    goto LABEL_46;
  }
  *(_QWORD *)v11 = &`vtable for'std::_Sp_counted_deleter<redisReply *,void (*)(redisReply *),std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                 + 2;
  v15 = v11 + 16;
  if ( *(_BYTE *)(((v11 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    v16 = __asan_report_store8(v15, this);
LABEL_47:
    v25 = (void *)__asan_report_store8(v16, this);
    __cxa_begin_catch(v25);
    common::midb::RedisConnBase::freeReply(v3);
    __asan_handle_no_return(v3);
    __cxa_rethrow();
  }
  *(_QWORD *)(v11 + 16) = common::midb::RedisConnBase::freeReply;
  v16 = v11 + 24;
  if ( *(_BYTE *)(((v11 + 24) >> 3) + 0x7FFF8000) )
    goto LABEL_47;
  *(_QWORD *)(v11 + 24) = v3;
  *(_QWORD *)(v4 + 104) = v11;
  if ( ret )
  {
    this = (common::midb::RedisClusterConn *const)&common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_cluster_conn.cpp",
      "getRedisReply",
      367);
    ostr = v36.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v36.ostr_ >> 3) + 0x7FFF8000) )
    {
      p_cur = v36.ostr_;
      __asan_report_load8(v36.ostr_);
    }
    else
    {
      p_cur = (common::milog::MilogStringStream *)&v36.ostr_->buffer_.cur_;
      if ( !*(_BYTE *)(((unsigned __int64)&v36.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      {
        cur = v36.ostr_->buffer_.cur_;
        v29 = (size_t)&v36.ostr_->buffer_.data_[-(int)cur + 0x4000];
        if ( v29 > 0x15 )
          v29 = 22LL;
        memcpy(cur, "get reply failed, ret=", v29);
        ostr->buffer_.cur_ += v29;
        this = (common::midb::RedisClusterConn *const)ret;
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v36.ostr_, ret);
        common::milog::MiLogStream::~MiLogStream(&v36);
        if ( !*(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)a1 = 0LL;
          v30 = a1 + 2;
          if ( !*(_BYTE *)(((unsigned __int64)(a1 + 2) >> 3) + 0x7FFF8000) )
          {
            *((_QWORD *)a1 + 1) = 0LL;
            goto LABEL_27;
          }
          goto LABEL_58;
        }
LABEL_57:
        v30 = a1;
        __asan_report_store8(a1, this);
LABEL_58:
        __asan_report_store8(v30, this);
        goto LABEL_59;
      }
    }
    __asan_report_load8(p_cur);
    goto LABEL_57;
  }
  if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    v17 = a1;
    __asan_report_store8(a1, this);
    goto LABEL_60;
  }
  *(_QWORD *)a1 = *(_QWORD *)(v4 + 96);
  v17 = a1 + 2;
  if ( *(_BYTE *)(((unsigned __int64)(a1 + 2) >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_store8(v17, this);
    goto LABEL_61;
  }
  v18 = *(_QWORD *)(v4 + 104);
  *(_QWORD *)(v4 + 104) = 0LL;
  *((_QWORD *)a1 + 1) = v18;
LABEL_27:
  v5 = *(volatile signed __int32 **)(v4 + 104);
  if ( !v5 )
    goto LABEL_11;
  v17 = v5 + 2;
  if ( !&_pthread_key_create )
    goto LABEL_62;
  v19 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v17 & 7) + 3) < v19 || !v19 )
  {
    v20 = _InterlockedExchangeAdd(v17, 0xFFFFFFFF);
    goto LABEL_32;
  }
LABEL_61:
  __asan_report_store4(v17, this);
LABEL_62:
  v31 = *(_BYTE *)(((unsigned __int64)(v5 + 2) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v5 + 8) & 7) + 3) >= v31 && v31 )
  {
    __asan_report_load4(v5 + 2);
LABEL_66:
    v21 = v5;
    __asan_report_load8(v5);
    goto LABEL_67;
  }
  v20 = *((_DWORD *)v5 + 2);
  *((_DWORD *)v5 + 2) = v20 - 1;
LABEL_32:
  if ( v20 != 1 )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    goto LABEL_66;
  v21 = (volatile signed __int32 *)(*(_QWORD *)v5 + 16LL);
  if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_load8(v21);
    goto LABEL_68;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
  v21 = v5 + 3;
  if ( !&_pthread_key_create )
    goto LABEL_69;
  v22 = *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v21 & 7) + 3) < v22 || !v22 )
  {
    v23 = _InterlockedExchangeAdd(v21, 0xFFFFFFFF);
    goto LABEL_39;
  }
LABEL_68:
  __asan_report_store4(v21, this);
LABEL_69:
  v32 = *(_BYTE *)(((unsigned __int64)(v5 + 3) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v5 + 12) & 7) + 3) >= v32 && v32 )
  {
    __asan_report_load4(v5 + 3);
LABEL_73:
    v24 = (unsigned __int64)v5;
    __asan_report_load8(v5);
LABEL_74:
    v33 = (struct _Unwind_Exception *)__asan_report_load8(v24);
    v34 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v5 - 7);
    if ( v34 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v34);
    __asan_handle_no_return(v34);
    _Unwind_Resume(v33);
  }
  v23 = *((_DWORD *)v5 + 3);
  *((_DWORD *)v5 + 3) = v23 - 1;
LABEL_39:
  if ( v23 != 1 )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    goto LABEL_73;
  v24 = *(_QWORD *)v5 + 24LL;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
    goto LABEL_74;
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 24LL))(v5);
LABEL_11:
  if ( v37 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return a1;
};

// Line 372: range 000000000CAB4136-000000000CAB414D
void __cdecl GLOBAL__sub_I_redis_cluster_conn_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};
