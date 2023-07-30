// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/midb/redis/src/redis_conn.cpp

// Line 34: range 000000000CAB530A-000000000CAB6D39
int32_t __fastcall common::midb::RedisConn::init(
        common::midb::RedisConn *const this,
        const std::string *host_str,
        uint32_t port,
        uint32_t timeout,
        const std::string *pwd_str,
        uint32_t db_idx,
        uint32_t connect_timeout)
{
  unsigned __int64 v8; // r14
  unsigned __int64 v10; // rbp
  char *errstr; // r13
  unsigned __int64 v12; // r15
  const char *M_p; // rdi
  redisContext_0 *v14; // rdi
  redisContext_0 **p_redis_context_ptr; // rax
  int *p_err; // rdx
  char v17; // al
  void *p_M_string_length; // rdi
  common::midb::RedisConn *v19; // rdi
  const char *v20; // rsi
  const std::string *v21; // rdi
  char v22; // al
  volatile signed __int32 *v23; // rdi
  char v24; // dl
  signed __int32 M_string_length; // eax
  unsigned __int64 v26; // rdi
  common::midb::RedisConn *v27; // rdi
  common::midb::RedisConn *tv_usec_low; // rsi
  const std::string *v29; // rdi
  char v30; // al
  volatile signed __int32 *p_last_use_time; // rdi
  char v32; // dl
  uint32_t last_use_time; // eax
  __int64 v35; // rax
  common::milog::MilogStringStream *v36; // rdi
  char *v37; // rdi
  size_t v38; // rbx
  void *v39; // rdi
  char *v40; // rdi
  size_t v41; // r12
  const std::string *v42; // rdi
  char *v43; // rdi
  size_t v44; // rbx
  common::milog::MilogStringStream *v45; // rdi
  char *v46; // rdi
  char **v47; // rdi
  char *v48; // rdi
  char **v49; // rdi
  char *v50; // rdi
  void *v51; // rdi
  char *v52; // rdi
  size_t v53; // rax
  void *v54; // rdi
  void *v55; // rdi
  size_t v56; // rbx
  void *v57; // rdi
  size_t v58; // rbx
  size_t v59; // rbx
  common::milog::MilogStringStream *v60; // rdi
  char *v61; // rdi
  size_t v62; // rdx
  const void *v63; // rsi
  char **v64; // rdi
  char *v65; // rdi
  size_t v66; // r14
  char **v67; // rdi
  char *v68; // rdi
  int v69; // eax
  unsigned __int64 v70; // rdi
  char *v71; // rdi
  size_t v72; // rbx
  std::string::size_type v73; // rdx
  std::string::pointer v74; // rsi
  char **v75; // rdi
  char *v76; // rdi
  size_t v77; // r12
  char *v78; // rdi
  size_t v79; // rbx
  common::milog::MilogStringStream *v80; // rdi
  char *v81; // rdi
  size_t v82; // rdx
  void *v83; // rdi
  char *v84; // rdi
  size_t v85; // r14
  char **v86; // rdi
  char *v87; // rdi
  int v88; // eax
  unsigned __int64 v89; // rdi
  char *v90; // rdi
  size_t v91; // rbx
  std::string::size_type v92; // rdx
  void *v93; // rdi
  char *v94; // rdi
  size_t v95; // r12
  char *v96; // rdi
  size_t v97; // rbx
  volatile signed __int32 *v98; // rdi
  char v99; // dl
  uint32_t v100; // eax
  char v101; // dl
  std::string *v102; // rdi
  char v103; // dl
  signed __int32 M_string_length_high; // eax
  char v105; // dl
  char v106; // dl
  volatile signed __int32 *v107; // rdi
  char v108; // dl
  uint32_t v109; // eax
  char v110; // dl
  common::milog::MilogStringStream *v111; // rdi
  char *v112; // rdi
  size_t v113; // rbx
  common::milog::MilogStringStream *v114; // rdi
  char *v115; // rdi
  size_t v116; // rbx
  void *v117; // rdi
  char *v118; // rdi
  size_t v119; // r12
  const std::string *v120; // rdi
  char *v121; // rdi
  const std::string *v122; // rdi
  char *v123; // rdi
  char *v124; // rdi
  size_t v125; // rbx
  common::milog::MilogStringStream *ostr; // rdi
  char *cur; // rdi
  size_t v128; // rbx
  void *p_cur; // rdi
  char *v130; // rdi
  size_t v131; // r12
  const std::string *v132; // rdi
  char *v133; // rdi
  const std::string *v134; // rdi
  char *v135; // rdi
  char *v136; // rdi
  size_t v137; // rbx
  char v138; // dl
  volatile signed __int32 *p_expire_time; // rdi
  char v140; // dl
  uint32_t expire_time; // eax
  common::midb::RedisConn *v142; // rdi
  char v143; // dl
  struct _Unwind_Exception *v144; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v145; // rdi
  timeval v146; // [rsp+0h] [rbp-D8h]
  common::milog::MiLogStream v149; // [rsp+20h] [rbp-B8h] BYREF
  common::milog::MiLogStream v150; // [rsp+40h] [rbp-98h] BYREF
  char v151[120]; // [rsp+60h] [rbp-78h] BYREF

  v8 = (unsigned __int64)host_str;
  LODWORD(v146.tv_usec) = db_idx;
  v10 = (unsigned __int64)v151;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v35 = __asan_stack_malloc_0(64LL);
    if ( v35 )
      v10 = v35;
  }
  errstr = (char *)(v10 + 64);
  *(_QWORD *)v10 = 1102416563LL;
  *(_QWORD *)(v10 + 8) = "1 32 16 12 reply_ptr:80";
  *(_QWORD *)(v10 + 16) = common::midb::RedisConn::init;
  v12 = v10 >> 3;
  *(_DWORD *)(v12 + 2147450880) = -235802127;
  *(_DWORD *)(v12 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)host_str >> 3) + 0x7FFF8000) )
  {
    p_redis_context_ptr = (redisContext_0 **)__asan_report_load8(host_str);
    goto LABEL_43;
  }
  M_p = host_str->_M_dataplus._M_p;
  host_str = (const std::string *)port;
  v14 = redisConnectWithTimeout(M_p, port, v146);
  p_redis_context_ptr = &this->redis_context_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->redis_context_ptr_ >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_store8(p_redis_context_ptr, host_str);
    goto LABEL_44;
  }
  this->redis_context_ptr_ = v14;
  if ( v14 )
  {
    p_err = &v14->err;
    v17 = *(_BYTE *)(((unsigned __int64)&v14->err >> 3) + 0x7FFF8000);
    if ( !v17 || v17 > 3 )
    {
      if ( !v14->err )
      {
        redisEnableKeepAlive(v14);
        p_M_string_length = &pwd_str->_M_string_length;
        if ( !*(_BYTE *)(((unsigned __int64)&pwd_str->_M_string_length >> 3) + 0x7FFF8000) )
        {
          if ( !pwd_str->_M_string_length )
            goto LABEL_23;
          if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          {
            v19 = (common::midb::RedisConn *)(this->_vptr_RedisConnBase + 5);
            if ( !*(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
            {
              if ( !*(_BYTE *)(((unsigned __int64)pwd_str >> 3) + 0x7FFF8000) )
              {
                v20 = (const char *)this;
                (*((void (**)(unsigned __int64, common::midb::RedisConn *const, const char *, ...))this->_vptr_RedisConnBase
                 + 5))(
                  v10 + 32,
                  this,
                  "auth %s",
                  pwd_str->_M_dataplus._M_p);
                v21 = *(const std::string **)(v10 + 32);
                if ( v21 )
                {
                  v22 = *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000);
                  if ( !v22 || v22 > 3 )
                  {
                    if ( LODWORD(v21->_M_dataplus._M_p) != 6 )
                    {
                      pwd_str = *(const std::string **)(v10 + 40);
                      if ( !pwd_str )
                        goto LABEL_23;
                      v23 = (volatile signed __int32 *)&pwd_str->_M_string_length;
                      if ( !&_pthread_key_create )
                        goto LABEL_215;
                      v24 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
                      if ( (char)(((unsigned __int8)v23 & 7) + 3) < v24 || !v24 )
                      {
                        M_string_length = _InterlockedExchangeAdd(v23, 0xFFFFFFFF);
                        goto LABEL_22;
                      }
LABEL_214:
                      __asan_report_store4(v23, v20);
LABEL_215:
                      v101 = *(_BYTE *)(((unsigned __int64)&pwd_str->_M_string_length >> 3) + 0x7FFF8000);
                      if ( (char)((((_BYTE)pwd_str + 8) & 7) + 3) >= v101 && v101 )
                      {
                        __asan_report_load4(&pwd_str->_M_string_length);
                        goto LABEL_219;
                      }
                      M_string_length = pwd_str->_M_string_length;
                      LODWORD(pwd_str->_M_string_length) = M_string_length - 1;
LABEL_22:
                      if ( M_string_length != 1 )
                        goto LABEL_23;
LABEL_219:
                      if ( *(_BYTE *)(((unsigned __int64)pwd_str >> 3) + 0x7FFF8000) )
                      {
                        v102 = (std::string *)pwd_str;
                        __asan_report_load8(pwd_str);
                      }
                      else
                      {
                        v102 = (std::string *)(pwd_str->_M_dataplus._M_p + 16);
                        if ( !*(_BYTE *)(((unsigned __int64)v102 >> 3) + 0x7FFF8000) )
                        {
                          (*((void (__fastcall **)(const std::string *))pwd_str->_M_dataplus._M_p + 2))(pwd_str);
                          v102 = (std::string *)((char *)&pwd_str->_M_string_length + 4);
                          if ( !&_pthread_key_create )
                            goto LABEL_232;
                          v103 = *(_BYTE *)(((unsigned __int64)v102 >> 3) + 0x7FFF8000);
                          if ( (char)(((unsigned __int8)v102 & 7) + 3) < v103 || !v103 )
                          {
                            M_string_length_high = _InterlockedExchangeAdd((volatile signed __int32 *)v102, 0xFFFFFFFF);
                            goto LABEL_225;
                          }
LABEL_231:
                          __asan_report_store4(v102, v20);
LABEL_232:
                          v105 = *(_BYTE *)((((unsigned __int64)&pwd_str->_M_string_length + 4) >> 3) + 0x7FFF8000);
                          if ( (char)((((_BYTE)pwd_str + 12) & 7) + 3) >= v105 && v105 )
                          {
                            __asan_report_load4((char *)&pwd_str->_M_string_length + 4);
                            goto LABEL_236;
                          }
                          M_string_length_high = HIDWORD(pwd_str->_M_string_length);
                          HIDWORD(pwd_str->_M_string_length) = M_string_length_high - 1;
LABEL_225:
                          if ( M_string_length_high != 1 )
                            goto LABEL_23;
                          if ( !*(_BYTE *)(((unsigned __int64)pwd_str >> 3) + 0x7FFF8000) )
                          {
                            v98 = (volatile signed __int32 *)(pwd_str->_M_dataplus._M_p + 24);
                            if ( !*(_BYTE *)(((unsigned __int64)v98 >> 3) + 0x7FFF8000) )
                            {
                              (*((void (__fastcall **)(const std::string *))pwd_str->_M_dataplus._M_p + 3))(pwd_str);
LABEL_23:
                              v26 = (unsigned __int64)&this->redis_context_ptr_;
                              if ( !*(_BYTE *)(((unsigned __int64)&this->redis_context_ptr_ >> 3) + 0x7FFF8000) )
                              {
                                LODWORD(pwd_str) = redisSetTimeout(this->redis_context_ptr_, (const timeval)timeout);
                                if ( !(_DWORD)pwd_str )
                                {
                                  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                                  {
                                    v27 = (common::midb::RedisConn *)(this->_vptr_RedisConnBase + 5);
                                    if ( !*(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
                                    {
                                      tv_usec_low = this;
                                      (*((void (**)(_QWORD *, common::midb::RedisConn *const, const char *, ...))this->_vptr_RedisConnBase
                                       + 5))(
                                        (_QWORD *)errstr - 4,
                                        this,
                                        "select %u",
                                        LODWORD(v146.tv_usec));
                                      v29 = (const std::string *)*((_QWORD *)errstr - 4);
                                      if ( v29 )
                                      {
                                        v30 = *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000);
                                        if ( !v30 || v30 > 3 )
                                        {
                                          if ( LODWORD(v29->_M_dataplus._M_p) != 6 )
                                          {
LABEL_31:
                                            this = (common::midb::RedisConn *const)*((_QWORD *)errstr - 3);
                                            if ( !this )
                                              goto LABEL_37;
                                            p_last_use_time = (volatile signed __int32 *)&this->last_use_time;
                                            if ( !&_pthread_key_create )
                                              goto LABEL_340;
                                            v32 = *(_BYTE *)(((unsigned __int64)p_last_use_time >> 3) + 0x7FFF8000);
                                            if ( (char)(((unsigned __int8)p_last_use_time & 7) + 3) < v32 || !v32 )
                                            {
                                              last_use_time = _InterlockedExchangeAdd(p_last_use_time, 0xFFFFFFFF);
                                              goto LABEL_36;
                                            }
LABEL_339:
                                            __asan_report_store4(p_last_use_time, tv_usec_low);
LABEL_340:
                                            v138 = *(_BYTE *)(((unsigned __int64)&this->last_use_time >> 3) + 0x7FFF8000);
                                            if ( (char)((((_BYTE)this + 8) & 7) + 3) >= v138 && v138 )
                                            {
                                              __asan_report_load4(&this->last_use_time);
                                              goto LABEL_344;
                                            }
                                            last_use_time = this->last_use_time;
                                            this->last_use_time = last_use_time - 1;
LABEL_36:
                                            if ( last_use_time != 1 )
                                              goto LABEL_37;
LABEL_344:
                                            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                                            {
                                              p_expire_time = (volatile signed __int32 *)this;
                                              __asan_report_load8(this);
                                            }
                                            else
                                            {
                                              p_expire_time = (volatile signed __int32 *)(this->_vptr_RedisConnBase + 2);
                                              if ( !*(_BYTE *)(((unsigned __int64)p_expire_time >> 3) + 0x7FFF8000) )
                                              {
                                                (*((void (__fastcall **)(common::midb::RedisConn *const))this->_vptr_RedisConnBase
                                                 + 2))(this);
                                                p_expire_time = (volatile signed __int32 *)&this->expire_time;
                                                if ( !&_pthread_key_create )
                                                  goto LABEL_357;
                                                v140 = *(_BYTE *)(((unsigned __int64)p_expire_time >> 3) + 0x7FFF8000);
                                                if ( (char)(((unsigned __int8)p_expire_time & 7) + 3) < v140 || !v140 )
                                                {
                                                  expire_time = _InterlockedExchangeAdd(p_expire_time, 0xFFFFFFFF);
                                                  goto LABEL_350;
                                                }
LABEL_356:
                                                __asan_report_store4(p_expire_time, tv_usec_low);
LABEL_357:
                                                v143 = *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3)
                                                                + 0x7FFF8000);
                                                if ( (char)((((_BYTE)this + 12) & 7) + 3) >= v143 && v143 )
                                                {
                                                  __asan_report_load4(&this->expire_time);
                                                  goto LABEL_361;
                                                }
                                                expire_time = this->expire_time;
                                                this->expire_time = expire_time - 1;
LABEL_350:
                                                if ( expire_time != 1 )
                                                  goto LABEL_37;
                                                if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                                                {
                                                  v142 = (common::midb::RedisConn *)(this->_vptr_RedisConnBase + 3);
                                                  if ( !*(_BYTE *)(((unsigned __int64)v142 >> 3) + 0x7FFF8000) )
                                                  {
                                                    (*((void (__fastcall **)(common::midb::RedisConn *const))this->_vptr_RedisConnBase
                                                     + 3))(this);
                                                    goto LABEL_37;
                                                  }
LABEL_362:
                                                  v144 = (struct _Unwind_Exception *)__asan_report_load8(v142);
                                                  v145 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)errstr - 3);
                                                  if ( v145 )
                                                    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v145);
                                                  __asan_handle_no_return(v145);
                                                  _Unwind_Resume(v144);
                                                }
LABEL_361:
                                                v142 = this;
                                                __asan_report_load8(this);
                                                goto LABEL_362;
                                              }
                                            }
                                            __asan_report_load8(p_expire_time);
                                            goto LABEL_356;
                                          }
LABEL_306:
                                          tv_usec_low = (common::midb::RedisConn *)&common::milog::MiLogDefault::default_log_obj_;
                                          common::milog::MiLogStream::MiLogStream(
                                            &v150,
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            4u,
                                            "src/redis_conn.cpp",
                                            "init",
                                            88);
                                          pwd_str = (const std::string *)v150.ostr_;
                                          if ( *(_BYTE *)(((unsigned __int64)v150.ostr_ >> 3) + 0x7FFF8000) )
                                          {
                                            ostr = v150.ostr_;
                                            __asan_report_load8(v150.ostr_);
                                          }
                                          else
                                          {
                                            this = (common::midb::RedisConn *const)(v150.ostr_->buffer_.data_ + 0x4000);
                                            ostr = (common::milog::MilogStringStream *)&v150.ostr_->buffer_.cur_;
                                            if ( !*(_BYTE *)(((unsigned __int64)&v150.ostr_->buffer_.cur_ >> 3)
                                                           + 0x7FFF8000) )
                                            {
                                              cur = v150.ostr_->buffer_.cur_;
                                              v128 = (int)this - (int)cur;
                                              if ( v128 > 0xE )
                                                v128 = 15LL;
                                              tv_usec_low = (common::midb::RedisConn *)"[REDIS] select ";
                                              memcpy(cur, "[REDIS] select ", v128);
                                              pwd_str->_M_string_length += v128;
                                              this = (common::midb::RedisConn *const)v150.ostr_;
                                              ostr = (common::milog::MilogStringStream *)(v8 + 8);
                                              if ( !*(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
                                              {
                                                if ( !*(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
                                                {
                                                  tv_usec_low = *(common::midb::RedisConn **)v8;
                                                  if ( !*(_BYTE *)(((unsigned __int64)v150.ostr_ >> 3) + 0x7FFF8000) )
                                                  {
                                                    pwd_str = (const std::string *)(v150.ostr_->buffer_.data_ + 0x4000);
                                                    p_cur = &v150.ostr_->buffer_.cur_;
                                                    if ( !*(_BYTE *)(((unsigned __int64)&v150.ostr_->buffer_.cur_ >> 3)
                                                                   + 0x7FFF8000) )
                                                    {
                                                      v130 = v150.ostr_->buffer_.cur_;
                                                      v131 = (int)pwd_str - (int)v130;
                                                      if ( *(_QWORD *)(v8 + 8) <= v131 )
                                                        v131 = *(_QWORD *)(v8 + 8);
                                                      memcpy(v130, tv_usec_low, v131);
                                                      *(_QWORD *)&this->last_use_time += v131;
                                                      pwd_str = (const std::string *)v150.ostr_;
                                                      if ( !*(_BYTE *)(((unsigned __int64)v150.ostr_ >> 3) + 0x7FFF8000) )
                                                      {
                                                        this = (common::midb::RedisConn *const)(v150.ostr_->buffer_.data_
                                                                                              + 0x4000);
                                                        v132 = (const std::string *)&v150.ostr_->buffer_.cur_;
                                                        if ( !*(_BYTE *)(((unsigned __int64)&v150.ostr_->buffer_.cur_ >> 3)
                                                                       + 0x7FFF8000) )
                                                        {
                                                          v133 = v150.ostr_->buffer_.cur_;
                                                          this = (common::midb::RedisConn *const)((_DWORD)this
                                                                                                - (_DWORD)v133 != 0LL);
                                                          memcpy(v133, ":", (size_t)this);
                                                          pwd_str->_M_string_length += (std::string::size_type)this;
                                                          tv_usec_low = (common::midb::RedisConn *)port;
                                                          common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                                                            v150.ostr_,
                                                            port);
                                                          pwd_str = (const std::string *)v150.ostr_;
                                                          if ( !*(_BYTE *)(((unsigned __int64)v150.ostr_ >> 3)
                                                                         + 0x7FFF8000) )
                                                          {
                                                            this = (common::midb::RedisConn *const)(v150.ostr_->buffer_.data_
                                                                                                  + 0x4000);
                                                            v134 = (const std::string *)&v150.ostr_->buffer_.cur_;
                                                            if ( !*(_BYTE *)(((unsigned __int64)&v150.ostr_->buffer_.cur_ >> 3)
                                                                           + 0x7FFF8000) )
                                                            {
                                                              v135 = v150.ostr_->buffer_.cur_;
                                                              this = (common::midb::RedisConn *const)((int)this - (int)v135);
                                                              if ( (unsigned __int64)this > 3 )
                                                                this = (common::midb::RedisConn *const)4;
                                                              memcpy(v135, " db=", (size_t)this);
                                                              pwd_str->_M_string_length += (std::string::size_type)this;
                                                              tv_usec_low = (common::midb::RedisConn *)LODWORD(v146.tv_usec);
                                                              common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                                                                v150.ostr_,
                                                                v146.tv_usec);
                                                              pwd_str = (const std::string *)v150.ostr_;
                                                              if ( !*(_BYTE *)(((unsigned __int64)v150.ostr_ >> 3)
                                                                             + 0x7FFF8000) )
                                                              {
                                                                this = (common::midb::RedisConn *const)(v150.ostr_->buffer_.data_ + 0x4000);
                                                                p_last_use_time = (volatile signed __int32 *)&v150.ostr_->buffer_.cur_;
                                                                if ( !*(_BYTE *)(((unsigned __int64)&v150.ostr_->buffer_.cur_ >> 3)
                                                                               + 0x7FFF8000) )
                                                                {
                                                                  v136 = v150.ostr_->buffer_.cur_;
                                                                  v137 = (int)this - (int)v136;
                                                                  if ( v137 > 7 )
                                                                    v137 = 8LL;
                                                                  tv_usec_low = (common::midb::RedisConn *)" failed.";
                                                                  memcpy(v136, " failed.", v137);
                                                                  pwd_str->_M_string_length += v137;
                                                                  common::milog::MiLogStream::~MiLogStream(&v150);
                                                                  LODWORD(pwd_str) = -1;
                                                                  goto LABEL_31;
                                                                }
LABEL_338:
                                                                __asan_report_load8(p_last_use_time);
                                                                goto LABEL_339;
                                                              }
LABEL_337:
                                                              p_last_use_time = (volatile signed __int32 *)pwd_str;
                                                              __asan_report_load8(pwd_str);
                                                              goto LABEL_338;
                                                            }
LABEL_336:
                                                            __asan_report_load8(v134);
                                                            goto LABEL_337;
                                                          }
LABEL_335:
                                                          v134 = pwd_str;
                                                          __asan_report_load8(pwd_str);
                                                          goto LABEL_336;
                                                        }
LABEL_334:
                                                        __asan_report_load8(v132);
                                                        goto LABEL_335;
                                                      }
LABEL_333:
                                                      v132 = pwd_str;
                                                      __asan_report_load8(pwd_str);
                                                      goto LABEL_334;
                                                    }
LABEL_332:
                                                    __asan_report_load8(p_cur);
                                                    goto LABEL_333;
                                                  }
LABEL_331:
                                                  p_cur = this;
                                                  __asan_report_load8(this);
                                                  goto LABEL_332;
                                                }
LABEL_330:
                                                __asan_report_load8(v8);
                                                goto LABEL_331;
                                              }
LABEL_329:
                                              __asan_report_load8(ostr);
                                              goto LABEL_330;
                                            }
                                          }
                                          __asan_report_load8(ostr);
                                          goto LABEL_329;
                                        }
LABEL_305:
                                        __asan_report_load4(v29);
                                        goto LABEL_306;
                                      }
LABEL_272:
                                      common::milog::MiLogStream::MiLogStream(
                                        &v149,
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "src/redis_conn.cpp",
                                        "init",
                                        83);
                                      pwd_str = (const std::string *)v149.ostr_;
                                      if ( *(_BYTE *)(((unsigned __int64)v149.ostr_ >> 3) + 0x7FFF8000) )
                                      {
                                        v114 = v149.ostr_;
                                        __asan_report_load8(v149.ostr_);
                                      }
                                      else
                                      {
                                        this = (common::midb::RedisConn *const)(v149.ostr_->buffer_.data_ + 0x4000);
                                        v114 = (common::milog::MilogStringStream *)&v149.ostr_->buffer_.cur_;
                                        if ( !*(_BYTE *)(((unsigned __int64)&v149.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                                        {
                                          v115 = v149.ostr_->buffer_.cur_;
                                          v116 = (int)this - (int)v115;
                                          if ( v116 > 0xE )
                                            v116 = 15LL;
                                          memcpy(v115, "[REDIS] select ", v116);
                                          pwd_str->_M_string_length += v116;
                                          this = (common::midb::RedisConn *const)v149.ostr_;
                                          v114 = (common::milog::MilogStringStream *)(v8 + 8);
                                          if ( !*(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
                                          {
                                            if ( !*(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
                                            {
                                              if ( !*(_BYTE *)(((unsigned __int64)v149.ostr_ >> 3) + 0x7FFF8000) )
                                              {
                                                pwd_str = (const std::string *)(v149.ostr_->buffer_.data_ + 0x4000);
                                                v117 = &v149.ostr_->buffer_.cur_;
                                                if ( !*(_BYTE *)(((unsigned __int64)&v149.ostr_->buffer_.cur_ >> 3)
                                                               + 0x7FFF8000) )
                                                {
                                                  v118 = v149.ostr_->buffer_.cur_;
                                                  v119 = (int)pwd_str - (int)v118;
                                                  if ( *(_QWORD *)(v8 + 8) <= v119 )
                                                    v119 = *(_QWORD *)(v8 + 8);
                                                  memcpy(v118, *(const void **)v8, v119);
                                                  *(_QWORD *)&this->last_use_time += v119;
                                                  pwd_str = (const std::string *)v149.ostr_;
                                                  if ( !*(_BYTE *)(((unsigned __int64)v149.ostr_ >> 3) + 0x7FFF8000) )
                                                  {
                                                    this = (common::midb::RedisConn *const)(v149.ostr_->buffer_.data_
                                                                                          + 0x4000);
                                                    v120 = (const std::string *)&v149.ostr_->buffer_.cur_;
                                                    if ( !*(_BYTE *)(((unsigned __int64)&v149.ostr_->buffer_.cur_ >> 3)
                                                                   + 0x7FFF8000) )
                                                    {
                                                      v121 = v149.ostr_->buffer_.cur_;
                                                      this = (common::midb::RedisConn *const)((_DWORD)this
                                                                                            - (_DWORD)v121 != 0LL);
                                                      memcpy(v121, ":", (size_t)this);
                                                      pwd_str->_M_string_length += (std::string::size_type)this;
                                                      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                                                        v149.ostr_,
                                                        port);
                                                      pwd_str = (const std::string *)v149.ostr_;
                                                      if ( !*(_BYTE *)(((unsigned __int64)v149.ostr_ >> 3) + 0x7FFF8000) )
                                                      {
                                                        this = (common::midb::RedisConn *const)(v149.ostr_->buffer_.data_
                                                                                              + 0x4000);
                                                        v122 = (const std::string *)&v149.ostr_->buffer_.cur_;
                                                        if ( !*(_BYTE *)(((unsigned __int64)&v149.ostr_->buffer_.cur_ >> 3)
                                                                       + 0x7FFF8000) )
                                                        {
                                                          v123 = v149.ostr_->buffer_.cur_;
                                                          this = (common::midb::RedisConn *const)((int)this - (int)v123);
                                                          if ( (unsigned __int64)this > 3 )
                                                            this = (common::midb::RedisConn *const)4;
                                                          memcpy(v123, " db=", (size_t)this);
                                                          pwd_str->_M_string_length += (std::string::size_type)this;
                                                          common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                                                            v149.ostr_,
                                                            v146.tv_usec);
                                                          pwd_str = (const std::string *)v149.ostr_;
                                                          if ( !*(_BYTE *)(((unsigned __int64)v149.ostr_ >> 3)
                                                                         + 0x7FFF8000) )
                                                          {
                                                            this = (common::midb::RedisConn *const)(v149.ostr_->buffer_.data_
                                                                                                  + 0x4000);
                                                            v29 = (const std::string *)&v149.ostr_->buffer_.cur_;
                                                            if ( !*(_BYTE *)(((unsigned __int64)&v149.ostr_->buffer_.cur_ >> 3)
                                                                           + 0x7FFF8000) )
                                                            {
                                                              v124 = v149.ostr_->buffer_.cur_;
                                                              v125 = (int)this - (int)v124;
                                                              if ( v125 > 7 )
                                                                v125 = 8LL;
                                                              tv_usec_low = (common::midb::RedisConn *)" failed.";
                                                              memcpy(v124, " failed.", v125);
                                                              pwd_str->_M_string_length += v125;
                                                              common::milog::MiLogStream::~MiLogStream(&v149);
                                                              LODWORD(pwd_str) = -1;
                                                              goto LABEL_31;
                                                            }
                                                            goto LABEL_304;
                                                          }
LABEL_303:
                                                          v29 = pwd_str;
                                                          __asan_report_load8(pwd_str);
LABEL_304:
                                                          __asan_report_load8(v29);
                                                          goto LABEL_305;
                                                        }
LABEL_302:
                                                        __asan_report_load8(v122);
                                                        goto LABEL_303;
                                                      }
LABEL_301:
                                                      v122 = pwd_str;
                                                      __asan_report_load8(pwd_str);
                                                      goto LABEL_302;
                                                    }
LABEL_300:
                                                    __asan_report_load8(v120);
                                                    goto LABEL_301;
                                                  }
LABEL_299:
                                                  v120 = pwd_str;
                                                  __asan_report_load8(pwd_str);
                                                  goto LABEL_300;
                                                }
LABEL_298:
                                                __asan_report_load8(v117);
                                                goto LABEL_299;
                                              }
LABEL_297:
                                              v117 = this;
                                              __asan_report_load8(this);
                                              goto LABEL_298;
                                            }
LABEL_296:
                                            __asan_report_load8(v8);
                                            goto LABEL_297;
                                          }
LABEL_295:
                                          __asan_report_load8(v114);
                                          goto LABEL_296;
                                        }
                                      }
                                      __asan_report_load8(v114);
                                      goto LABEL_295;
                                    }
LABEL_271:
                                    __asan_report_load8(v27);
                                    goto LABEL_272;
                                  }
LABEL_270:
                                  v27 = this;
                                  __asan_report_load8(this);
                                  goto LABEL_271;
                                }
LABEL_263:
                                common::milog::MiLogStream::MiLogStream(
                                  &v150,
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "src/redis_conn.cpp",
                                  "init",
                                  75);
                                errstr = (char *)v150.ostr_;
                                if ( *(_BYTE *)(((unsigned __int64)v150.ostr_ >> 3) + 0x7FFF8000) )
                                {
                                  v111 = v150.ostr_;
                                  __asan_report_load8(v150.ostr_);
                                }
                                else
                                {
                                  this = (common::midb::RedisConn *const)(v150.ostr_->buffer_.data_ + 0x4000);
                                  v111 = (common::milog::MilogStringStream *)&v150.ostr_->buffer_.cur_;
                                  if ( !*(_BYTE *)(((unsigned __int64)&v150.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                                  {
                                    v112 = v150.ostr_->buffer_.cur_;
                                    v113 = (int)this - (int)v112;
                                    if ( v113 > 0x25 )
                                      v113 = 38LL;
                                    memcpy(v112, "[REDIS] redisSetTimeout failed, error=", v113);
                                    *((_QWORD *)errstr + 1) += v113;
                                    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                                      v150.ostr_,
                                      (int)pwd_str);
                                    common::milog::MiLogStream::~MiLogStream(&v150);
                                    LODWORD(pwd_str) = -1;
                                    goto LABEL_37;
                                  }
                                }
                                __asan_report_load8(v111);
                                goto LABEL_270;
                              }
LABEL_262:
                              __asan_report_load8(v26);
                              goto LABEL_263;
                            }
                            goto LABEL_237;
                          }
LABEL_236:
                          v98 = (volatile signed __int32 *)pwd_str;
                          __asan_report_load8(pwd_str);
LABEL_237:
                          __asan_report_load8(v98);
                          goto LABEL_238;
                        }
                      }
                      __asan_report_load8(v102);
                      goto LABEL_231;
                    }
LABEL_162:
                    v20 = (const char *)&common::milog::MiLogDefault::default_log_obj_;
                    common::milog::MiLogStream::MiLogStream(
                      &v150,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "src/redis_conn.cpp",
                      "init",
                      64);
                    this = (common::midb::RedisConn *const)v150.ostr_;
                    if ( *(_BYTE *)(((unsigned __int64)v150.ostr_ >> 3) + 0x7FFF8000) )
                    {
                      v80 = v150.ostr_;
                      __asan_report_load8(v150.ostr_);
                    }
                    else
                    {
                      v80 = (common::milog::MilogStringStream *)&v150.ostr_->buffer_.cur_;
                      if ( !*(_BYTE *)(((unsigned __int64)&v150.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                      {
                        v81 = v150.ostr_->buffer_.cur_;
                        v146.tv_usec = (__suseconds_t)&v150.ostr_->buffer_.data_[-(int)v81 + 0x4000];
                        if ( v146.tv_usec > 0xFuLL )
                          v146.tv_usec = 16LL;
                        v20 = "[REDIS] auth on ";
                        memcpy(v81, "[REDIS] auth on ", v146.tv_usec);
                        *(_QWORD *)&this->last_use_time += v146.tv_usec;
                        this = (common::midb::RedisConn *const)v150.ostr_;
                        v80 = (common::milog::MilogStringStream *)(v8 + 8);
                        if ( !*(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
                        {
                          v82 = *(_QWORD *)(v8 + 8);
                          if ( !*(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
                          {
                            v20 = *(const char **)v8;
                            if ( !*(_BYTE *)(((unsigned __int64)v150.ostr_ >> 3) + 0x7FFF8000) )
                            {
                              v83 = &v150.ostr_->buffer_.cur_;
                              if ( !*(_BYTE *)(((unsigned __int64)&v150.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                              {
                                v84 = v150.ostr_->buffer_.cur_;
                                v85 = (size_t)&v150.ostr_->buffer_.data_[-(int)v84 + 0x4000];
                                if ( v82 <= v85 )
                                  v85 = v82;
                                memcpy(v84, v20, v85);
                                *(_QWORD *)&this->last_use_time += v85;
                                v8 = (unsigned __int64)v150.ostr_;
                                if ( !*(_BYTE *)(((unsigned __int64)v150.ostr_ >> 3) + 0x7FFF8000) )
                                {
                                  v86 = &v150.ostr_->buffer_.cur_;
                                  if ( !*(_BYTE *)(((unsigned __int64)&v150.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                                  {
                                    v87 = v150.ostr_->buffer_.cur_;
                                    v88 = (int)&v150.ostr_->buffer_.data_[-(_DWORD)v87 + 0x4000];
                                    this = (common::midb::RedisConn *const)v88;
                                    if ( v88 )
                                      this = (common::midb::RedisConn *const)1;
                                    memcpy(v87, ":", (size_t)this);
                                    *(_QWORD *)(v8 + 8) += this;
                                    v20 = (const char *)port;
                                    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                                      v150.ostr_,
                                      port);
                                    v8 = (unsigned __int64)v150.ostr_;
                                    if ( !*(_BYTE *)(((unsigned __int64)v150.ostr_ >> 3) + 0x7FFF8000) )
                                    {
                                      v89 = (unsigned __int64)&v150.ostr_->buffer_.cur_;
                                      if ( !*(_BYTE *)(((unsigned __int64)&v150.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                                      {
                                        v90 = v150.ostr_->buffer_.cur_;
                                        v91 = (size_t)&v150.ostr_->buffer_.data_[-(int)v90 + 0x4000];
                                        if ( v91 > 4 )
                                          v91 = 5LL;
                                        v20 = " pwd=";
                                        memcpy(v90, " pwd=", v91);
                                        *(_QWORD *)(v8 + 8) += v91;
                                        this = (common::midb::RedisConn *const)v150.ostr_;
                                        v89 = (unsigned __int64)&pwd_str->_M_string_length;
                                        if ( !*(_BYTE *)(((unsigned __int64)&pwd_str->_M_string_length >> 3) + 0x7FFF8000) )
                                        {
                                          v92 = pwd_str->_M_string_length;
                                          if ( !*(_BYTE *)(((unsigned __int64)pwd_str >> 3) + 0x7FFF8000) )
                                          {
                                            v20 = pwd_str->_M_dataplus._M_p;
                                            if ( !*(_BYTE *)(((unsigned __int64)v150.ostr_ >> 3) + 0x7FFF8000) )
                                            {
                                              v93 = &v150.ostr_->buffer_.cur_;
                                              if ( !*(_BYTE *)(((unsigned __int64)&v150.ostr_->buffer_.cur_ >> 3)
                                                             + 0x7FFF8000) )
                                              {
                                                v94 = v150.ostr_->buffer_.cur_;
                                                v95 = (size_t)&v150.ostr_->buffer_.data_[-(int)v94 + 0x4000];
                                                if ( v92 <= v95 )
                                                  v95 = v92;
                                                memcpy(v94, v20, v95);
                                                *(_QWORD *)&this->last_use_time += v95;
                                                pwd_str = (const std::string *)v150.ostr_;
                                                if ( !*(_BYTE *)(((unsigned __int64)v150.ostr_ >> 3) + 0x7FFF8000) )
                                                {
                                                  v23 = (volatile signed __int32 *)&v150.ostr_->buffer_.cur_;
                                                  if ( !*(_BYTE *)(((unsigned __int64)&v150.ostr_->buffer_.cur_ >> 3)
                                                                 + 0x7FFF8000) )
                                                  {
                                                    v96 = v150.ostr_->buffer_.cur_;
                                                    v97 = (size_t)&v150.ostr_->buffer_.data_[-(int)v96 + 0x4000];
                                                    if ( v97 > 6 )
                                                      v97 = 7LL;
                                                    v20 = " failed";
                                                    memcpy(v96, " failed", v97);
                                                    pwd_str->_M_string_length += v97;
                                                    common::milog::MiLogStream::~MiLogStream(&v150);
LABEL_191:
                                                    this = (common::midb::RedisConn *const)*((_QWORD *)errstr - 3);
                                                    if ( !this )
                                                    {
LABEL_197:
                                                      LODWORD(pwd_str) = -1;
                                                      goto LABEL_37;
                                                    }
                                                    v98 = (volatile signed __int32 *)&this->last_use_time;
                                                    if ( !&_pthread_key_create )
                                                      goto LABEL_239;
                                                    v99 = *(_BYTE *)(((unsigned __int64)v98 >> 3) + 0x7FFF8000);
                                                    if ( (char)(((unsigned __int8)v98 & 7) + 3) < v99 || !v99 )
                                                    {
                                                      v100 = _InterlockedExchangeAdd(v98, 0xFFFFFFFF);
                                                      goto LABEL_196;
                                                    }
LABEL_238:
                                                    __asan_report_store4(v98, v20);
LABEL_239:
                                                    v106 = *(_BYTE *)(((unsigned __int64)&this->last_use_time >> 3)
                                                                    + 0x7FFF8000);
                                                    if ( (char)((((_BYTE)this + 8) & 7) + 3) >= v106 && v106 )
                                                    {
                                                      __asan_report_load4(&this->last_use_time);
                                                      goto LABEL_243;
                                                    }
                                                    v100 = this->last_use_time;
                                                    this->last_use_time = v100 - 1;
LABEL_196:
                                                    if ( v100 != 1 )
                                                      goto LABEL_197;
LABEL_243:
                                                    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                                                    {
                                                      v107 = (volatile signed __int32 *)this;
                                                      __asan_report_load8(this);
                                                    }
                                                    else
                                                    {
                                                      v107 = (volatile signed __int32 *)(this->_vptr_RedisConnBase + 2);
                                                      if ( !*(_BYTE *)(((unsigned __int64)v107 >> 3) + 0x7FFF8000) )
                                                      {
                                                        (*((void (__fastcall **)(common::midb::RedisConn *const))this->_vptr_RedisConnBase
                                                         + 2))(this);
                                                        v107 = (volatile signed __int32 *)&this->expire_time;
                                                        if ( !&_pthread_key_create )
                                                          goto LABEL_256;
                                                        v108 = *(_BYTE *)(((unsigned __int64)v107 >> 3) + 0x7FFF8000);
                                                        if ( (char)(((unsigned __int8)v107 & 7) + 3) < v108 || !v108 )
                                                        {
                                                          v109 = _InterlockedExchangeAdd(v107, 0xFFFFFFFF);
                                                          goto LABEL_249;
                                                        }
LABEL_255:
                                                        __asan_report_store4(v107, v20);
LABEL_256:
                                                        v110 = *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3)
                                                                        + 0x7FFF8000);
                                                        if ( (char)((((_BYTE)this + 12) & 7) + 3) >= v110 && v110 )
                                                        {
                                                          __asan_report_load4(&this->expire_time);
                                                          goto LABEL_260;
                                                        }
                                                        v109 = this->expire_time;
                                                        this->expire_time = v109 - 1;
LABEL_249:
                                                        if ( v109 != 1 )
                                                          goto LABEL_197;
                                                        if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                                                        {
                                                          v26 = (unsigned __int64)(this->_vptr_RedisConnBase + 3);
                                                          if ( !*(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
                                                          {
                                                            (*((void (__fastcall **)(common::midb::RedisConn *const))this->_vptr_RedisConnBase
                                                             + 3))(this);
                                                            goto LABEL_197;
                                                          }
LABEL_261:
                                                          __asan_report_load8(v26);
                                                          goto LABEL_262;
                                                        }
LABEL_260:
                                                        v26 = (unsigned __int64)this;
                                                        __asan_report_load8(this);
                                                        goto LABEL_261;
                                                      }
                                                    }
                                                    __asan_report_load8(v107);
                                                    goto LABEL_255;
                                                  }
LABEL_213:
                                                  __asan_report_load8(v23);
                                                  goto LABEL_214;
                                                }
LABEL_212:
                                                v23 = (volatile signed __int32 *)pwd_str;
                                                __asan_report_load8(pwd_str);
                                                goto LABEL_213;
                                              }
LABEL_211:
                                              __asan_report_load8(v93);
                                              goto LABEL_212;
                                            }
LABEL_210:
                                            v93 = this;
                                            __asan_report_load8(this);
                                            goto LABEL_211;
                                          }
LABEL_209:
                                          __asan_report_load8(pwd_str);
                                          goto LABEL_210;
                                        }
LABEL_208:
                                        __asan_report_load8(v89);
                                        goto LABEL_209;
                                      }
LABEL_207:
                                      __asan_report_load8(v89);
                                      goto LABEL_208;
                                    }
LABEL_206:
                                    v89 = v8;
                                    __asan_report_load8(v8);
                                    goto LABEL_207;
                                  }
LABEL_205:
                                  __asan_report_load8(v86);
                                  goto LABEL_206;
                                }
LABEL_204:
                                v86 = (char **)v8;
                                __asan_report_load8(v8);
                                goto LABEL_205;
                              }
LABEL_203:
                              __asan_report_load8(v83);
                              goto LABEL_204;
                            }
LABEL_202:
                            v83 = this;
                            __asan_report_load8(this);
                            goto LABEL_203;
                          }
LABEL_201:
                          __asan_report_load8(v8);
                          goto LABEL_202;
                        }
LABEL_200:
                        __asan_report_load8(v80);
                        goto LABEL_201;
                      }
                    }
                    __asan_report_load8(v80);
                    goto LABEL_200;
                  }
LABEL_161:
                  __asan_report_load4(v21);
                  goto LABEL_162;
                }
LABEL_116:
                common::milog::MiLogStream::MiLogStream(
                  &v149,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "src/redis_conn.cpp",
                  "init",
                  57);
                v59 = (size_t)v149.ostr_;
                if ( *(_BYTE *)(((unsigned __int64)v149.ostr_ >> 3) + 0x7FFF8000) )
                {
                  v60 = v149.ostr_;
                  __asan_report_load8(v149.ostr_);
                }
                else
                {
                  v60 = (common::milog::MilogStringStream *)&v149.ostr_->buffer_.cur_;
                  if ( !*(_BYTE *)(((unsigned __int64)&v149.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                  {
                    v61 = v149.ostr_->buffer_.cur_;
                    v146.tv_usec = (__suseconds_t)&v149.ostr_->buffer_.data_[-(int)v61 + 0x4000];
                    if ( v146.tv_usec > 0xFuLL )
                      v146.tv_usec = 16LL;
                    memcpy(v61, "[REDIS] auth on ", v146.tv_usec);
                    *(_QWORD *)(v59 + 8) += v146.tv_usec;
                    v59 = (size_t)v149.ostr_;
                    v60 = (common::milog::MilogStringStream *)(v8 + 8);
                    if ( !*(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
                    {
                      v62 = *(_QWORD *)(v8 + 8);
                      if ( !*(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
                      {
                        v63 = *(const void **)v8;
                        if ( !*(_BYTE *)(((unsigned __int64)v149.ostr_ >> 3) + 0x7FFF8000) )
                        {
                          v64 = &v149.ostr_->buffer_.cur_;
                          if ( !*(_BYTE *)(((unsigned __int64)&v149.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                          {
                            v65 = v149.ostr_->buffer_.cur_;
                            v66 = (size_t)&v149.ostr_->buffer_.data_[-(int)v65 + 0x4000];
                            if ( v62 <= v66 )
                              v66 = v62;
                            memcpy(v65, v63, v66);
                            *(_QWORD *)(v59 + 8) += v66;
                            v8 = (unsigned __int64)v149.ostr_;
                            if ( !*(_BYTE *)(((unsigned __int64)v149.ostr_ >> 3) + 0x7FFF8000) )
                            {
                              v67 = &v149.ostr_->buffer_.cur_;
                              if ( !*(_BYTE *)(((unsigned __int64)&v149.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                              {
                                v68 = v149.ostr_->buffer_.cur_;
                                v69 = (int)&v149.ostr_->buffer_.data_[-(_DWORD)v68 + 0x4000];
                                v59 = v69;
                                if ( v69 )
                                  v59 = 1LL;
                                memcpy(v68, ":", v59);
                                *(_QWORD *)(v8 + 8) += v59;
                                common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                                  v149.ostr_,
                                  port);
                                v8 = (unsigned __int64)v149.ostr_;
                                if ( !*(_BYTE *)(((unsigned __int64)v149.ostr_ >> 3) + 0x7FFF8000) )
                                {
                                  v70 = (unsigned __int64)&v149.ostr_->buffer_.cur_;
                                  if ( !*(_BYTE *)(((unsigned __int64)&v149.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                                  {
                                    v71 = v149.ostr_->buffer_.cur_;
                                    v72 = (size_t)&v149.ostr_->buffer_.data_[-(int)v71 + 0x4000];
                                    if ( v72 > 4 )
                                      v72 = 5LL;
                                    memcpy(v71, " pwd=", v72);
                                    *(_QWORD *)(v8 + 8) += v72;
                                    v59 = (size_t)v149.ostr_;
                                    v70 = (unsigned __int64)&pwd_str->_M_string_length;
                                    if ( !*(_BYTE *)(((unsigned __int64)&pwd_str->_M_string_length >> 3) + 0x7FFF8000) )
                                    {
                                      v73 = pwd_str->_M_string_length;
                                      if ( !*(_BYTE *)(((unsigned __int64)pwd_str >> 3) + 0x7FFF8000) )
                                      {
                                        v74 = pwd_str->_M_dataplus._M_p;
                                        if ( !*(_BYTE *)(((unsigned __int64)v149.ostr_ >> 3) + 0x7FFF8000) )
                                        {
                                          v75 = &v149.ostr_->buffer_.cur_;
                                          if ( !*(_BYTE *)(((unsigned __int64)&v149.ostr_->buffer_.cur_ >> 3)
                                                         + 0x7FFF8000) )
                                          {
                                            v76 = v149.ostr_->buffer_.cur_;
                                            v77 = (size_t)&v149.ostr_->buffer_.data_[-(int)v76 + 0x4000];
                                            if ( v73 <= v77 )
                                              v77 = v73;
                                            memcpy(v76, v74, v77);
                                            *(_QWORD *)(v59 + 8) += v77;
                                            pwd_str = (const std::string *)v149.ostr_;
                                            if ( !*(_BYTE *)(((unsigned __int64)v149.ostr_ >> 3) + 0x7FFF8000) )
                                            {
                                              v21 = (const std::string *)&v149.ostr_->buffer_.cur_;
                                              if ( !*(_BYTE *)(((unsigned __int64)&v149.ostr_->buffer_.cur_ >> 3)
                                                             + 0x7FFF8000) )
                                              {
                                                v78 = v149.ostr_->buffer_.cur_;
                                                v79 = (size_t)&v149.ostr_->buffer_.data_[-(int)v78 + 0x4000];
                                                if ( v79 > 6 )
                                                  v79 = 7LL;
                                                v20 = " failed";
                                                memcpy(v78, " failed", v79);
                                                pwd_str->_M_string_length += v79;
                                                common::milog::MiLogStream::~MiLogStream(&v149);
                                                goto LABEL_191;
                                              }
                                              goto LABEL_160;
                                            }
LABEL_159:
                                            v21 = pwd_str;
                                            __asan_report_load8(pwd_str);
LABEL_160:
                                            __asan_report_load8(v21);
                                            goto LABEL_161;
                                          }
LABEL_158:
                                          __asan_report_load8(v75);
                                          goto LABEL_159;
                                        }
LABEL_157:
                                        v75 = (char **)v59;
                                        __asan_report_load8(v59);
                                        goto LABEL_158;
                                      }
LABEL_156:
                                      __asan_report_load8(pwd_str);
                                      goto LABEL_157;
                                    }
LABEL_155:
                                    __asan_report_load8(v70);
                                    goto LABEL_156;
                                  }
LABEL_154:
                                  __asan_report_load8(v70);
                                  goto LABEL_155;
                                }
LABEL_153:
                                v70 = v8;
                                __asan_report_load8(v8);
                                goto LABEL_154;
                              }
LABEL_152:
                              __asan_report_load8(v67);
                              goto LABEL_153;
                            }
LABEL_151:
                            v67 = (char **)v8;
                            __asan_report_load8(v8);
                            goto LABEL_152;
                          }
LABEL_150:
                          __asan_report_load8(v64);
                          goto LABEL_151;
                        }
LABEL_149:
                        v64 = (char **)v59;
                        __asan_report_load8(v59);
                        goto LABEL_150;
                      }
LABEL_148:
                      __asan_report_load8(v8);
                      goto LABEL_149;
                    }
LABEL_147:
                    __asan_report_load8(v60);
                    goto LABEL_148;
                  }
                }
                __asan_report_load8(v60);
                goto LABEL_147;
              }
LABEL_115:
              __asan_report_load8(pwd_str);
              goto LABEL_116;
            }
LABEL_114:
            __asan_report_load8(v19);
            goto LABEL_115;
          }
LABEL_113:
          v19 = this;
          __asan_report_load8(this);
          goto LABEL_114;
        }
LABEL_112:
        __asan_report_load8(p_M_string_length);
        goto LABEL_113;
      }
LABEL_68:
      common::milog::MiLogStream::MiLogStream(
        &v150,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/redis_conn.cpp",
        "init",
        44);
      errstr = (char *)v150.ostr_;
      if ( *(_BYTE *)(((unsigned __int64)v150.ostr_ >> 3) + 0x7FFF8000) )
      {
        v45 = v150.ostr_;
        __asan_report_load8(v150.ostr_);
      }
      else
      {
        pwd_str = (const std::string *)(v150.ostr_->buffer_.data_ + 0x4000);
        v45 = (common::milog::MilogStringStream *)&v150.ostr_->buffer_.cur_;
        if ( !*(_BYTE *)(((unsigned __int64)&v150.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
        {
          v46 = v150.ostr_->buffer_.cur_;
          pwd_str = (const std::string *)((int)pwd_str - (int)v46);
          if ( (unsigned __int64)pwd_str > 0x18 )
            pwd_str = (const std::string *)25;
          memcpy(v46, "[REDIS] redis connect to ", (size_t)pwd_str);
          *((_QWORD *)errstr + 1) += pwd_str;
          errstr = (char *)v150.ostr_;
          v45 = (common::milog::MilogStringStream *)(v8 + 8);
          if ( !*(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
          {
            if ( !*(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            {
              if ( !*(_BYTE *)(((unsigned __int64)v150.ostr_ >> 3) + 0x7FFF8000) )
              {
                pwd_str = (const std::string *)(v150.ostr_->buffer_.data_ + 0x4000);
                v47 = &v150.ostr_->buffer_.cur_;
                if ( !*(_BYTE *)(((unsigned __int64)&v150.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                {
                  v48 = v150.ostr_->buffer_.cur_;
                  pwd_str = (const std::string *)((int)pwd_str - (int)v48);
                  if ( *(_QWORD *)(v8 + 8) <= (unsigned __int64)pwd_str )
                    pwd_str = *(const std::string **)(v8 + 8);
                  memcpy(v48, *(const void **)v8, (size_t)pwd_str);
                  *((_QWORD *)errstr + 1) += pwd_str;
                  errstr = (char *)v150.ostr_;
                  if ( !*(_BYTE *)(((unsigned __int64)v150.ostr_ >> 3) + 0x7FFF8000) )
                  {
                    pwd_str = (const std::string *)(v150.ostr_->buffer_.data_ + 0x4000);
                    v49 = &v150.ostr_->buffer_.cur_;
                    if ( !*(_BYTE *)(((unsigned __int64)&v150.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                    {
                      v50 = v150.ostr_->buffer_.cur_;
                      pwd_str = (const std::string *)((_DWORD)pwd_str - (_DWORD)v50 != 0LL);
                      memcpy(v50, ":", (size_t)pwd_str);
                      *((_QWORD *)errstr + 1) += pwd_str;
                      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v150.ostr_, port);
                      errstr = (char *)v150.ostr_;
                      if ( !*(_BYTE *)(((unsigned __int64)v150.ostr_ >> 3) + 0x7FFF8000) )
                      {
                        pwd_str = (const std::string *)(v150.ostr_->buffer_.data_ + 0x4000);
                        v51 = &v150.ostr_->buffer_.cur_;
                        if ( !*(_BYTE *)(((unsigned __int64)&v150.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                        {
                          v52 = v150.ostr_->buffer_.cur_;
                          pwd_str = (const std::string *)((int)pwd_str - (int)v52);
                          if ( (unsigned __int64)pwd_str > 0xB )
                            pwd_str = (const std::string *)12;
                          memcpy(v52, " meet error:", (size_t)pwd_str);
                          *((_QWORD *)errstr + 1) += pwd_str;
                          v51 = &this->redis_context_ptr_;
                          if ( !*(_BYTE *)(((unsigned __int64)&this->redis_context_ptr_ >> 3) + 0x7FFF8000) )
                          {
                            pwd_str = (const std::string *)v150.ostr_;
                            errstr = this->redis_context_ptr_->errstr;
                            if ( this->redis_context_ptr_ == (redisContext_0 *)-12LL )
                              goto LABEL_105;
                            v53 = strlen(errstr);
                            if ( !*(_BYTE *)(((unsigned __int64)pwd_str >> 3) + 0x7FFF8000) )
                            {
                              this = (common::midb::RedisConn *const)(pwd_str->_M_dataplus._M_p + 0x4000);
                              v54 = &pwd_str->_M_string_length;
                              if ( !*(_BYTE *)(((unsigned __int64)&pwd_str->_M_string_length >> 3) + 0x7FFF8000) )
                              {
                                v55 = (void *)pwd_str->_M_string_length;
                                v56 = (int)this - (int)v55;
                                if ( v53 <= v56 )
                                  v56 = v53;
                                memcpy(v55, errstr, v56);
                                pwd_str->_M_string_length += v56;
LABEL_91:
                                common::milog::MiLogStream::~MiLogStream(&v150);
                                LODWORD(pwd_str) = -1;
                                goto LABEL_37;
                              }
                              goto LABEL_104;
                            }
LABEL_103:
                            v54 = (void *)pwd_str;
                            __asan_report_load8(pwd_str);
LABEL_104:
                            __asan_report_load8(v54);
LABEL_105:
                            if ( *(_BYTE *)(((unsigned __int64)pwd_str >> 3) + 0x7FFF8000) )
                            {
                              p_M_string_length = (void *)pwd_str;
                              __asan_report_load8(pwd_str);
                            }
                            else
                            {
                              this = (common::midb::RedisConn *const)(pwd_str->_M_dataplus._M_p + 0x4000);
                              p_M_string_length = &pwd_str->_M_string_length;
                              if ( !*(_BYTE *)(((unsigned __int64)&pwd_str->_M_string_length >> 3) + 0x7FFF8000) )
                              {
                                v57 = (void *)pwd_str->_M_string_length;
                                v58 = (int)this - (int)v57;
                                if ( v58 > 5 )
                                  v58 = 6LL;
                                memcpy(v57, "(null)", v58);
                                pwd_str->_M_string_length += v58;
                                goto LABEL_91;
                              }
                            }
                            __asan_report_load8(p_M_string_length);
                            goto LABEL_112;
                          }
LABEL_102:
                          __asan_report_load8(v51);
                          goto LABEL_103;
                        }
LABEL_101:
                        __asan_report_load8(v51);
                        goto LABEL_102;
                      }
LABEL_100:
                      v51 = errstr;
                      __asan_report_load8(errstr);
                      goto LABEL_101;
                    }
LABEL_99:
                    __asan_report_load8(v49);
                    goto LABEL_100;
                  }
LABEL_98:
                  v49 = (char **)errstr;
                  __asan_report_load8(errstr);
                  goto LABEL_99;
                }
LABEL_97:
                __asan_report_load8(v47);
                goto LABEL_98;
              }
LABEL_96:
              v47 = (char **)errstr;
              __asan_report_load8(errstr);
              goto LABEL_97;
            }
LABEL_95:
            __asan_report_load8(v8);
            goto LABEL_96;
          }
LABEL_94:
          __asan_report_load8(v45);
          goto LABEL_95;
        }
      }
      __asan_report_load8(v45);
      goto LABEL_94;
    }
LABEL_67:
    __asan_report_load4(p_err);
    goto LABEL_68;
  }
LABEL_44:
  common::milog::MiLogStream::MiLogStream(
    &v150,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/redis_conn.cpp",
    "init",
    39);
  pwd_str = (const std::string *)v150.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v150.ostr_ >> 3) + 0x7FFF8000) )
  {
    v36 = v150.ostr_;
    __asan_report_load8(v150.ostr_);
    goto LABEL_60;
  }
  this = (common::midb::RedisConn *const)(v150.ostr_->buffer_.data_ + 0x4000);
  v36 = (common::milog::MilogStringStream *)&v150.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v150.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_load8(v36);
LABEL_61:
    __asan_report_load8(v36);
    goto LABEL_62;
  }
  v37 = v150.ostr_->buffer_.cur_;
  v38 = (int)this - (int)v37;
  if ( v38 > 0x27 )
    v38 = 40LL;
  memcpy(v37, "[REDIS] redis context init fialed, host:", v38);
  pwd_str->_M_string_length += v38;
  this = (common::midb::RedisConn *const)v150.ostr_;
  v36 = (common::milog::MilogStringStream *)(v8 + 8);
  if ( *(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
    goto LABEL_61;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    __asan_report_load8(v8);
    goto LABEL_63;
  }
  if ( *(_BYTE *)(((unsigned __int64)v150.ostr_ >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    v39 = this;
    __asan_report_load8(this);
    goto LABEL_64;
  }
  pwd_str = (const std::string *)(v150.ostr_->buffer_.data_ + 0x4000);
  v39 = &v150.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v150.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_64:
    __asan_report_load8(v39);
LABEL_65:
    v42 = pwd_str;
    __asan_report_load8(pwd_str);
    goto LABEL_66;
  }
  v40 = v150.ostr_->buffer_.cur_;
  v41 = (int)pwd_str - (int)v40;
  if ( *(_QWORD *)(v8 + 8) <= v41 )
    v41 = *(_QWORD *)(v8 + 8);
  memcpy(v40, *(const void **)v8, v41);
  *(_QWORD *)&this->last_use_time += v41;
  pwd_str = (const std::string *)v150.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v150.ostr_ >> 3) + 0x7FFF8000) )
    goto LABEL_65;
  this = (common::midb::RedisConn *const)(v150.ostr_->buffer_.data_ + 0x4000);
  v42 = (const std::string *)&v150.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v150.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_load8(v42);
    goto LABEL_67;
  }
  v43 = v150.ostr_->buffer_.cur_;
  v44 = (int)this - (int)v43;
  if ( v44 > 5 )
    v44 = 6LL;
  memcpy(v43, " port:", v44);
  pwd_str->_M_string_length += v44;
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v150.ostr_, port);
  common::milog::MiLogStream::~MiLogStream(&v150);
  LODWORD(pwd_str) = -1;
LABEL_37:
  if ( v151 == (char *)v10 )
  {
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v10 = 1172321806LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return (int)pwd_str;
};

// Line 96: range 000000000CAB4FC2-000000000CAB5304
int32_t __fastcall common::midb::RedisConn::onGrab(common::midb::RedisConn *const this)
{
  __int64 v1; // rsi
  common::milog::MilogStringStream *ostr; // r15
  common::midb::RedisConn *v3; // r12
  unsigned __int64 v4; // rbx
  common::milog::MilogStringStream *v5; // r13
  _DWORD *v6; // rbp
  redisContext_0 **p_redis_context_ptr; // rdi
  redisContext_0 *redis_context_ptr; // rax
  common::milog::MilogStringStream *p_fd; // rdi
  char v10; // cl
  int32_t result; // eax
  __int64 v12; // rax
  char *v13; // rdi
  size_t v14; // r12
  redisContext_0 **v15; // rdi
  char **p_cur; // rdi
  char *cur; // rdi
  size_t v18; // r12
  common::milog::MiLogStream v19; // [rsp+0h] [rbp-118h] BYREF
  char v20[248]; // [rsp+20h] [rbp-F8h] BYREF

  v3 = this;
  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_2(192LL);
    if ( v12 )
      v4 = v12;
  }
  v5 = (common::milog::MilogStringStream *)(v4 + 192);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 4 12 info_len:105 48 104 10 t_info:104";
  *(_QWORD *)(v4 + 16) = common::midb::RedisConn::onGrab;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  p_redis_context_ptr = &this->redis_context_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&v3->redis_context_ptr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_redis_context_ptr);
  }
  else
  {
    redis_context_ptr = v3->redis_context_ptr_;
    if ( redis_context_ptr )
    {
      *(_DWORD *)(v4 + 32) = 104;
      p_fd = (common::milog::MilogStringStream *)&redis_context_ptr->fd;
      v10 = *(_BYTE *)(((unsigned __int64)&redis_context_ptr->fd >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)redis_context_ptr - 116) & 7) + 3) < v10 || !v10 )
      {
        v1 = 6LL;
        result = getsockopt(redis_context_ptr->fd, 6, 11, (void *)(v4 + 48), (socklen_t *)(v4 + 32));
        if ( !result && *(_BYTE *)(v4 + 48) == 1 )
          goto LABEL_8;
LABEL_21:
        v15 = &v3->redis_context_ptr_;
        if ( *(_BYTE *)(((unsigned __int64)&v3->redis_context_ptr_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v15);
        }
        else
        {
          redisFree(v3->redis_context_ptr_);
          v15 = &v3->redis_context_ptr_;
          if ( !*(_BYTE *)(((unsigned __int64)&v3->redis_context_ptr_ >> 3) + 0x7FFF8000) )
          {
            v3->redis_context_ptr_ = 0LL;
            common::milog::MiLogStream::MiLogStream(
              &v19,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "src/redis_conn.cpp",
              "onGrab",
              111);
            ostr = v19.ostr_;
            if ( !*(_BYTE *)(((unsigned __int64)v19.ostr_ >> 3) + 0x7FFF8000) )
            {
              p_cur = &v19.ostr_->buffer_.cur_;
              if ( !*(_BYTE *)(((unsigned __int64)&v19.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
              {
                cur = v19.ostr_->buffer_.cur_;
                v18 = (size_t)&v19.ostr_->buffer_.data_[-(int)cur + 0x4000];
                if ( v18 > 0x37 )
                  v18 = 56LL;
                memcpy(cur, "[REDIS][NETWORK][ECS] redis_context_ptr tcp state error:", v18);
                ostr->buffer_.cur_ += v18;
                common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                  v19.ostr_,
                  LOBYTE(v5[-9].buffer_.data_));
                common::milog::MiLogStream::~MiLogStream(&v19);
                result = -1;
                goto LABEL_8;
              }
LABEL_31:
              result = __asan_report_load8(p_cur);
              goto LABEL_32;
            }
LABEL_30:
            p_cur = &ostr->buffer_.data_;
            __asan_report_load8(ostr);
            goto LABEL_31;
          }
        }
        __asan_report_store8(v15, v1);
        goto LABEL_30;
      }
LABEL_20:
      __asan_report_load4(p_fd);
      goto LABEL_21;
    }
  }
  v1 = (__int64)&common::milog::MiLogDefault::default_log_obj_;
  common::milog::MiLogStream::MiLogStream(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/redis_conn.cpp",
    "onGrab",
    99);
  v5 = v19.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v19.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_fd = v19.ostr_;
    __asan_report_load8(v19.ostr_);
    goto LABEL_19;
  }
  v3 = (common::midb::RedisConn *)(v19.ostr_->buffer_.data_ + 0x4000);
  p_fd = (common::milog::MilogStringStream *)&v19.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v19.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8(p_fd);
    goto LABEL_20;
  }
  v13 = v19.ostr_->buffer_.cur_;
  v14 = (int)v3 - (int)v13;
  if ( v14 > 0x2B )
    v14 = 44LL;
  memcpy(v13, "[REDIS] onGrab, redis context ptr is nullptr", v14);
  v5->buffer_.cur_ += v14;
  common::milog::MiLogStream::~MiLogStream(&v19);
  result = -1;
LABEL_8:
  if ( v20 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    return result;
  }
LABEL_32:
  *(_QWORD *)v4 = 1172321806LL;
  *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  return result;
};

// Line 120: range 000000000CAB730E-000000000CAB75D3
redisReply_0 **__fastcall common::midb::RedisConn::command(
        redisReply_0 **a1,
        common::midb::RedisConn *const this,
        common::midb::RedisConn *format,
        __va_list_tag *ap)
{
  redisReply_0 *v5; // r13
  unsigned __int64 v6; // rbp
  _DWORD *v7; // r12
  redisContext_0 *redis_context_ptr; // rdi
  redisReply_0 **v9; // rdi
  __int64 v10; // rax
  redisReply_0 **v11; // rdi
  int (**v12)(...); // rdi
  char v13; // al
  int (**v14)(...); // rdx
  char v15; // cl
  __int64 v16; // rax
  __int64 v17; // rax
  void *v19; // rax
  char v22[152]; // [rsp+10h] [rbp-98h] BYREF

  v5 = (redisReply_0 *)this;
  v6 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_1(96LL);
    if ( v10 )
      v6 = v10;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 4 __a2 64 16 7 __guard";
  *(_QWORD *)(v6 + 16) = common::midb::RedisConn::command;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202178560;
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
      v11 = a1;
      __asan_report_store8(a1, this);
    }
    else
    {
      *a1 = 0LL;
      v11 = a1 + 1;
      if ( !*(_BYTE *)(((unsigned __int64)(a1 + 1) >> 3) + 0x7FFF8000) )
      {
        a1[1] = 0LL;
        goto LABEL_25;
      }
    }
    __asan_report_store8(v11, this);
    goto LABEL_15;
  }
  this = format;
  v5 = (redisReply_0 *)redisvCommand(redis_context_ptr, (const char *)format, ap);
  if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    v9 = a1;
    __asan_report_store8(a1, this);
    goto LABEL_16;
  }
  *a1 = v5;
  v9 = a1 + 1;
  if ( *(_BYTE *)(((unsigned __int64)(a1 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_store8(v9, this);
    goto LABEL_17;
  }
  a1[1] = 0LL;
  this = (common::midb::RedisConn *const)(v6 + 48);
  std::__allocate_guarded<std::allocator<std::_Sp_counted_deleter<redisReply *,void (*)(redisReply *),std::allocator<void>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_deleter<redisReply*,void (*)(redisReply*),std::allocator<void>,(__gnu_cxx::_Lock_policy)2> > *)(v6 + 48));
LABEL_17:
  v12 = *(int (***)(...))(v6 + 72);
  v13 = *(_BYTE *)(((unsigned __int64)(v12 + 1) >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
  {
    __asan_report_store4(v12 + 1, this);
LABEL_29:
    v12 = v14;
    __asan_report_store4(v14, this);
    goto LABEL_30;
  }
  *((_DWORD *)v12 + 2) = 1;
  v14 = (int (**)(...))((char *)v12 + 12);
  v15 = *(_BYTE *)((((unsigned __int64)v12 + 12) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v12 + 12) & 7) + 3) >= v15 && v15 )
    goto LABEL_29;
  *((_DWORD *)v12 + 3) = 1;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    v16 = __asan_report_store8(v12, this);
    goto LABEL_31;
  }
  *v12 = (int (*)(...))(&`vtable for'std::_Sp_counted_deleter<redisReply *,void (*)(redisReply *),std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                      + 2);
  v16 = (__int64)(v12 + 2);
  if ( *(_BYTE *)(((unsigned __int64)(v12 + 2) >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    v17 = __asan_report_store8(v16, this);
LABEL_32:
    v19 = (void *)__asan_report_store8(v17, this);
    __cxa_begin_catch(v19);
    common::midb::RedisConnBase::freeReply(v5);
    __asan_handle_no_return(v5);
    __cxa_rethrow();
  }
  v12[2] = (int (*)(...))common::midb::RedisConnBase::freeReply;
  v17 = (__int64)(v12 + 3);
  if ( *(_BYTE *)(((unsigned __int64)(v12 + 3) >> 3) + 0x7FFF8000) )
    goto LABEL_32;
  v12[3] = (int (*)(...))v5;
  a1[1] = (redisReply_0 *)v12;
LABEL_25:
  if ( v22 == (char *)v6 )
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
  return a1;
};

// Line 130: range 000000000CAB75D8-000000000CAB78B5
redisReply_0 **__fastcall common::midb::RedisConn::command(
        redisReply_0 **a1,
        common::midb::RedisConn *const this,
        unsigned int argc,
        const char **argv,
        const size_t *argvlen)
{
  redisReply_0 *v6; // r13
  unsigned __int64 v7; // rbp
  _DWORD *v8; // r12
  redisContext_0 *redis_context_ptr; // rdi
  redisReply_0 **v10; // rdi
  __int64 v11; // rax
  redisReply_0 **v12; // rdi
  int (**v13)(...); // rdi
  char v14; // al
  int (**v15)(...); // rdx
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
  *(_QWORD *)(v7 + 16) = common::midb::RedisConn::command;
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
  this = (common::midb::RedisConn *const)argc;
  v6 = (redisReply_0 *)redisCommandArgv(redis_context_ptr, argc, argv, argvlen);
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
  this = (common::midb::RedisConn *const)(v7 + 48);
  std::__allocate_guarded<std::allocator<std::_Sp_counted_deleter<redisReply *,void (*)(redisReply *),std::allocator<void>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_deleter<redisReply*,void (*)(redisReply*),std::allocator<void>,(__gnu_cxx::_Lock_policy)2> > *)(v7 + 48));
LABEL_17:
  v13 = *(int (***)(...))(v7 + 72);
  v14 = *(_BYTE *)(((unsigned __int64)(v13 + 1) >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
  {
    __asan_report_store4(v13 + 1, this);
LABEL_29:
    v13 = v15;
    __asan_report_store4(v15, this);
    goto LABEL_30;
  }
  *((_DWORD *)v13 + 2) = 1;
  v15 = (int (**)(...))((char *)v13 + 12);
  v16 = *(_BYTE *)((((unsigned __int64)v13 + 12) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v13 + 12) & 7) + 3) >= v16 && v16 )
    goto LABEL_29;
  *((_DWORD *)v13 + 3) = 1;
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    v17 = __asan_report_store8(v13, this);
    goto LABEL_31;
  }
  *v13 = (int (*)(...))(&`vtable for'std::_Sp_counted_deleter<redisReply *,void (*)(redisReply *),std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                      + 2);
  v17 = (__int64)(v13 + 2);
  if ( *(_BYTE *)(((unsigned __int64)(v13 + 2) >> 3) + 0x7FFF8000) )
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
  v13[2] = (int (*)(...))common::midb::RedisConnBase::freeReply;
  v18 = (__int64)(v13 + 3);
  if ( *(_BYTE *)(((unsigned __int64)(v13 + 3) >> 3) + 0x7FFF8000) )
    goto LABEL_32;
  v13[3] = (int (*)(...))v6;
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

// Line 140: range 000000000CAB4A82-000000000CAB4FBD
unsigned __int64 __fastcall common::midb::RedisConn::cmdWatch(
        unsigned __int64 a1,
        common::midb::RedisConn *const this,
        unsigned __int64 key_vec,
        std::forward_iterator_tag a4)
{
  std::_Vector_base<std::string>::pointer v4; // r15
  unsigned __int64 v6; // r13
  common::milog::MilogStringStream *ostr; // rbp
  std::forward_iterator_tag v8; // cl
  const std::vector<std::string> *v9; // rax
  const std::vector<std::string> *v10; // rdi
  __int64 v11; // rax
  const char *v12; // rsi
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  _QWORD *v15; // rdi
  std::string::size_type M_string_length; // r12
  common::milog::MiLog *log; // rdi
  const char *v18; // rsi
  common::milog::MilogStringStream *v19; // rbp
  common::milog::MilogStringStream *v20; // rdi
  char *v21; // rdi
  size_t v22; // rbx
  char *v23; // rdi
  const std::vector<std::string> *v25; // rdi
  common::midb::RedisConn *v26; // rdi
  struct _Unwind_Exception *v27; // rbx
  char *v28; // rdi
  unsigned __int64 v31; // [rsp+10h] [rbp-E8h]
  std::string v32; // [rsp+20h] [rbp-D8h] BYREF
  common::milog::MiLogStream v33; // [rsp+40h] [rbp-B8h] BYREF
  char v34[152]; // [rsp+60h] [rbp-98h] BYREF

  v6 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(96LL);
    if ( v11 )
      v6 = v11;
  }
  ostr = (common::milog::MilogStringStream *)(v6 + 96);
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 32 13 watch_cmd:147";
  *(_QWORD *)(v6 + 16) = common::midb::RedisConn::cmdWatch;
  v31 = v6 >> 3;
  *(_DWORD *)(v31 + 2147450880) = -235802127;
  *(_DWORD *)(v31 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((key_vec + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(key_vec + 8);
    goto LABEL_11;
  }
  if ( *(_BYTE *)((key_vec >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_load8(key_vec);
LABEL_12:
    v12 = (const char *)&common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/redis_conn.cpp",
      "cmdWatch",
      143);
    ostr = v33.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v33.ostr_ >> 3) + 0x7FFF8000) )
    {
      p_cur = v33.ostr_;
      __asan_report_load8(v33.ostr_);
    }
    else
    {
      key_vec = (unsigned __int64)(v33.ostr_->buffer_.data_ + 0x4000);
      p_cur = (common::milog::MilogStringStream *)&v33.ostr_->buffer_.cur_;
      if ( !*(_BYTE *)(((unsigned __int64)&v33.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      {
        cur = v33.ostr_->buffer_.cur_;
        key_vec = (int)key_vec - (int)cur;
        if ( key_vec > 0x12 )
          key_vec = 19LL;
        v12 = "watch key vec empty";
        memcpy(cur, "watch key vec empty", key_vec);
        ostr->buffer_.cur_ += key_vec;
        common::milog::MiLogStream::~MiLogStream(&v33);
        if ( !*(_BYTE *)((a1 >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)a1 = 0LL;
          v15 = (_QWORD *)(a1 + 8);
          if ( !*(_BYTE *)(((a1 + 8) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(a1 + 8) = 0LL;
            goto LABEL_41;
          }
          goto LABEL_22;
        }
LABEL_21:
        v15 = (_QWORD *)a1;
        __asan_report_store8(a1, v12);
LABEL_22:
        __asan_report_store8(v15, v12);
        goto LABEL_23;
      }
    }
    __asan_report_load8(p_cur);
    goto LABEL_21;
  }
  if ( *(_QWORD *)(key_vec + 8) == *(_QWORD *)key_vec )
    goto LABEL_12;
  *(_QWORD *)(v6 + 32) = v6 + 48;
  std::string::_M_construct<char const*>((std::string *const)(v6 + 32), &byte_1A0D4D25[-5], byte_1A0D4D25, a4);
  if ( *(_BYTE *)((key_vec >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    v10 = (const std::vector<std::string> *)key_vec;
    __asan_report_load8(key_vec);
    goto LABEL_24;
  }
  v9 = *(const std::vector<std::string> **)key_vec;
  v10 = (const std::vector<std::string> *)(key_vec + 8);
  if ( *(_BYTE *)(((key_vec + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(v10);
    goto LABEL_25;
  }
  v4 = *(std::_Vector_base<std::string>::pointer *)(key_vec + 8);
  while ( 1 )
  {
    key_vec = (unsigned __int64)v9;
    if ( v9 == (const std::vector<std::string> *)v4 )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      {
        v26 = this;
        __asan_report_load8(this);
      }
      else
      {
        v26 = (common::midb::RedisConn *)(this->_vptr_RedisConnBase + 5);
        if ( !*(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
        {
          if ( !*(_WORD *)((a1 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(unsigned __int64, common::midb::RedisConn *const, _QWORD))this->_vptr_RedisConnBase
             + 5))(
              a1,
              this,
              *(_QWORD *)(v6 + 32));
            goto LABEL_39;
          }
LABEL_63:
          v27 = (struct _Unwind_Exception *)__asan_report_store16(a1);
          if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v33.log_ != &v33.ostr_ptr_._M_refcount )
            operator delete(v33.log_);
          v28 = *(char **)(v6 + 32);
          if ( v28 != (char *)(v6 + 48) )
            operator delete(v28);
          __asan_handle_no_return(v28);
          _Unwind_Resume(v27);
        }
      }
      __asan_report_load8(v26);
      goto LABEL_63;
    }
    v33.log_ = (common::milog::MiLog *)&v33.ostr_ptr_._M_refcount;
    std::string::_M_construct<char const*>((std::string *const)&v33, &byte_1A0D4D64[-4], byte_1A0D4D64, v8);
LABEL_25:
    common::tools::StringUtils::trim(&v32, (const std::string *)key_vec, (const std::string *)&v33, 1);
    M_string_length = v32._M_string_length;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v32._M_dataplus._M_p != &v32._anon_0 )
      operator delete(v32._M_dataplus._M_p);
    log = v33.log_;
    if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v33.log_ != &v33.ostr_ptr_._M_refcount )
      operator delete(v33.log_);
    if ( !M_string_length )
      break;
    if ( ostr[-4].buffer_.cur_ == (char *)0x3FFFFFFFFFFFFFFFLL )
      goto LABEL_48;
    std::string::_M_append(&ostr[-4], " ");
    v25 = (const std::vector<std::string> *)(key_vec + 8);
    if ( *(_BYTE *)(((key_vec + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v25);
    }
    else
    {
      v25 = (const std::vector<std::string> *)key_vec;
      if ( !*(_BYTE *)((key_vec >> 3) + 0x7FFF8000) )
      {
        std::string::_M_append(&ostr[-4], *(_QWORD *)key_vec);
        goto LABEL_54;
      }
    }
    __asan_report_load8(v25);
LABEL_54:
    v9 = (const std::vector<std::string> *)(key_vec + 32);
  }
  v18 = (const char *)&common::milog::MiLogDefault::default_log_obj_;
  common::milog::MiLogStream::MiLogStream(
    &v33,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/redis_conn.cpp",
    "cmdWatch",
    153);
  v19 = v33.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v33.ostr_ >> 3) + 0x7FFF8000) )
  {
    v20 = v33.ostr_;
    __asan_report_load8(v33.ostr_);
    goto LABEL_45;
  }
  v20 = (common::milog::MilogStringStream *)&v33.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v33.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_load8(v20);
LABEL_46:
    log = (common::milog::MiLog *)a1;
    __asan_report_store8(a1, v18);
    goto LABEL_47;
  }
  v21 = v33.ostr_->buffer_.cur_;
  v22 = (size_t)&v33.ostr_->buffer_.data_[-(int)v21 + 0x4000];
  if ( v22 > 0x1F )
    v22 = 32LL;
  v18 = "find empty key in key_value_map.";
  memcpy(v21, "find empty key in key_value_map.", v22);
  v19->buffer_.cur_ += v22;
  common::milog::MiLogStream::~MiLogStream(&v33);
  if ( *(_BYTE *)((a1 >> 3) + 0x7FFF8000) )
    goto LABEL_46;
  *(_QWORD *)a1 = 0LL;
  log = (common::milog::MiLog *)(a1 + 8);
  if ( *(_BYTE *)(((a1 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_store8(log, v18);
LABEL_48:
    __asan_handle_no_return(log);
    std::__throw_length_error("basic_string::append");
  }
  *(_QWORD *)(a1 + 8) = 0LL;
LABEL_39:
  v23 = *(char **)(v6 + 32);
  if ( v23 != (char *)(v6 + 48) )
    operator delete(v23);
LABEL_41:
  if ( v34 == (char *)v6 )
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

// Line 201: range 000000000CAB6D3E-000000000CAB7309
volatile signed __int32 *__fastcall common::midb::RedisConn::getRedisReply(
        volatile signed __int32 *a1,
        common::midb::RedisConn *const this)
{
  redisReply_0 *v3; // r14
  unsigned __int64 v4; // rbx
  volatile signed __int32 *v5; // r13
  _DWORD *v6; // rbp
  redisContext_0 *redis_context_ptr; // rdi
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
  *(_QWORD *)(v4 + 8) = "4 48 1 4 __a2 64 8 17 raw_reply_ptr:206 96 16 13 reply_ptr:208 128 16 7 __guard";
  *(_QWORD *)(v4 + 16) = common::midb::RedisConn::getRedisReply;
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
      ret = redisGetReply(redis_context_ptr, (void **)(v4 + 64));
      v3 = *(redisReply_0 **)(v4 + 64);
      *(_QWORD *)(v4 + 96) = v3;
      this = (common::midb::RedisConn *const)(v4 + 48);
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
    this = (common::midb::RedisConn *const)&common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/redis_conn.cpp",
      "getRedisReply",
      211);
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
        this = (common::midb::RedisConn *const)ret;
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

// Line 216: range 000000000CAB78BA-000000000CAB78D1
void __cdecl GLOBAL__sub_I_redis_conn_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 216: range 000000000CAB48B0-000000000CAB4A81
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/redis_conn.cpp");
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
          JUMPOUT(0xCAB4943LL);
        }
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                             + 9;
      }
    }
    __asan_after_dynamic_init();
  }
};
