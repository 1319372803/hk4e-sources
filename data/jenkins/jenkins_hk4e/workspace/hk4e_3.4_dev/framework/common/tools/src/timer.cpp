// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/src/timer.cpp

// Line 30: range 0000000019B59860-0000000019B5AAA6
void __fastcall common::tools::TimerProxy::onTimeOut(common::tools::TimerProxy *const this, uint64_t now_ms)
{
  uint64_t v3; // r14
  unsigned __int64 v4; // r12
  std::_Function_base::_Manager_type *p_M_manager; // rdi
  __int64 v6; // rax
  int v7; // eax
  void *p_max_time_cost; // rdi
  char v9; // dl
  char v10; // cl
  char v11; // al
  const common::milog::LogLevelInfo *LogLevelInfo; // rax
  char v13; // dl
  uint64_t *p_level; // rdi
  char v15; // al
  std::forward_iterator_tag v16; // cl
  std::string::size_type *p_M_string_length; // rax
  std::string *v18; // rdi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  char v22; // dl
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  char v26; // dl
  __int64 v27; // r8
  std::string::size_type M_string_length; // rdx
  unsigned __int64 v29; // rax
  void *v30; // rcx
  unsigned __int64 v31; // rsi
  std::string::size_type M_allocated_capacity; // rsi
  unsigned __int64 v33; // rax
  std::string::size_type v34; // rdx
  __m128i *v35; // rdx
  int32_t *p_sum_time_cost; // rdi
  char v37; // dl
  char v38; // dl
  uint32_t *p_call_count; // rcx
  char v40; // dl
  uint64_t *p_max_time_stamp_ms; // rax
  uint32_t *p_scene_id; // rcx
  char v43; // al
  uint32_t *p_uid; // rcx
  char v45; // r11
  std::forward_iterator_tag v46; // cl
  void *p_last_log_time_ms; // rdi
  char v48; // al
  char v49; // dl
  void *v50; // rdi
  char v51; // dl
  char v52; // al
  char v53; // al
  char *v54; // rdi
  __int64 v55; // r13
  std::string::size_type v56; // rdi
  void *v57; // rdi
  size_t v58; // rbx
  struct _Unwind_Exception *v59; // rbx
  std::string *cost_us; // [rsp+0h] [rbp-2A0h]
  _DWORD *v61; // [rsp+8h] [rbp-298h]
  std::string v62; // [rsp+10h] [rbp-290h] BYREF
  void *v63; // [rsp+30h] [rbp-270h] BYREF
  __int64 v64; // [rsp+38h] [rbp-268h]
  __m128i v65; // [rsp+40h] [rbp-260h] BYREF
  void *v66; // [rsp+50h] [rbp-250h] BYREF
  __int64 v67; // [rsp+58h] [rbp-248h]
  __m128i v68; // [rsp+60h] [rbp-240h] BYREF
  std::string title; // [rsp+70h] [rbp-230h] BYREF
  char v70[528]; // [rsp+90h] [rbp-210h] BYREF

  v3 = now_ms;
  v4 = (unsigned __int64)v70;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(480LL);
    if ( v6 )
      v4 = v6;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 16 8 timer:33 80 32 11 cmd_name:52 144 257 9 holder:35";
  *(_QWORD *)(v4 + 16) = common::tools::TimerProxy::onTimeOut;
  v61 = (_DWORD *)(v4 >> 3);
  v61[536862720] = -235802127;
  v61[536862721] = 61937;
  v61[536862722] = 62194;
  v61[536862723] = -219021312;
  v61[536862724] = 62194;
  v61[536862732] = -218038272;
  v61[536862733] = -202116109;
  v61[536862734] = -202116109;
  p_M_manager = &this->timeout_callback_._M_manager;
  if ( *(_BYTE *)(((unsigned __int64)&this->timeout_callback_._M_manager >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_manager);
  }
  else
  {
    if ( !this->timeout_callback_._M_manager )
      goto LABEL_156;
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v4 + 48));
    common::milog::MilogContextHolder::MilogContextHolder(
      (common::milog::MilogContextHolder *const)(v4 + 144),
      &this->hold_str);
  }
  std::function<void ()(unsigned long)>::operator()(&this->timeout_callback_, now_ms);
  common::milog::MilogContextHolder::~MilogContextHolder((common::milog::MilogContextHolder *const)(v4 + 144));
  v7 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v4 + 48));
  p_max_time_cost = &this->max_time_cost_;
  v9 = *(_BYTE *)(((unsigned __int64)&this->max_time_cost_ >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
  {
    __asan_report_load4(p_max_time_cost);
    goto LABEL_19;
  }
  if ( this->max_time_cost_ < v7 )
  {
    this->max_time_cost_ = v7;
    p_max_time_cost = &this->max_time_stamp_ms_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->max_time_stamp_ms_ >> 3) + 0x7FFF8000) )
    {
      this->max_time_stamp_ms_ = now_ms;
      goto LABEL_13;
    }
LABEL_19:
    __asan_report_store8(p_max_time_cost);
LABEL_20:
    __asan_report_load4(p_max_time_cost);
LABEL_21:
    __asan_report_load4(p_max_time_cost);
    goto LABEL_22;
  }
LABEL_13:
  p_max_time_cost = &this->sum_time_cost_;
  v10 = *(_BYTE *)(((unsigned __int64)&this->sum_time_cost_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 68) & 7) + 3) >= v10 && v10 )
    goto LABEL_20;
  this->sum_time_cost_ += v7;
  p_max_time_cost = &this->call_count_;
  v11 = *(_BYTE *)(((unsigned __int64)&this->call_count_ >> 3) + 0x7FFF8000);
  if ( v11 && v11 <= 3 )
    goto LABEL_21;
  ++this->call_count_;
  LogLevelInfo = common::milog::MiLog::getLogLevelInfo(&common::milog::MiLogDefault::default_log_obj_, 0xBu);
LABEL_22:
  v13 = *(_BYTE *)(((unsigned __int64)LogLevelInfo >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
  {
    p_level = (uint64_t *)&LogLevelInfo->level;
    __asan_report_load4(LogLevelInfo);
LABEL_31:
    __asan_report_load8(p_level);
    goto LABEL_32;
  }
  if ( LogLevelInfo->level != 11 )
  {
LABEL_27:
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v4 + 48));
    goto LABEL_28;
  }
  p_level = &this->last_log_time_ms_;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_log_time_ms_ >> 3) + 0x7FFF8000) )
    goto LABEL_31;
  if ( this->last_log_time_ms_ + 5000 >= now_ms )
    goto LABEL_27;
LABEL_32:
  v15 = *(_BYTE *)(((unsigned __int64)&this->line_ >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    __asan_report_load4(&this->line_);
  else
    __gnu_cxx::__to_xstring<std::string,char>(
      &title,
      (int (*)(char *, std::size_t, const char *, ___va_list_tag *))&vsnprintf,
      0x10uLL,
      "%d",
      (unsigned int)this->line_);
  cost_us = &this->func_;
  v62._M_dataplus._M_p = v62._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)&this->file_ >> 3) + 0x7FFF8000) )
  {
    p_M_string_length = (std::string::size_type *)__asan_report_load8(&this->file_);
  }
  else
  {
    p_M_string_length = &this->file_._M_string_length;
    if ( !*(_BYTE *)(((unsigned __int64)&this->file_._M_string_length >> 3) + 0x7FFF8000) )
    {
      v18 = &v62;
      std::string::_M_construct<char *>(
        &v62,
        this->file_._M_dataplus._M_p,
        &this->file_._M_dataplus._M_p[this->file_._M_string_length],
        v16);
      goto LABEL_41;
    }
  }
  v18 = (std::string *)p_M_string_length;
  __asan_report_load8(p_M_string_length);
LABEL_41:
  if ( v62._M_string_length == 0x3FFFFFFFFFFFFFFFLL )
  {
    __asan_handle_no_return(v18);
    std::__throw_length_error("basic_string::append");
  }
  std::string::_M_append(&v62, ":", 1LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->func_._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->func_._M_string_length);
  }
  else if ( !*(_BYTE *)(((unsigned __int64)cost_us >> 3) + 0x7FFF8000) )
  {
    v19 = std::string::_M_append(&v62, this->func_._M_dataplus._M_p, this->func_._M_string_length);
    goto LABEL_49;
  }
  v19 = __asan_report_load8(cost_us);
LABEL_49:
  v63 = &v65;
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
  {
    v19 = __asan_report_load8(v19);
  }
  else
  {
    v20 = v19 + 16;
    if ( *(_QWORD *)v19 != v19 + 16 )
    {
      v63 = *(void **)v19;
      v21 = v19 + 16;
      if ( !*(_BYTE *)(((v19 + 16) >> 3) + 0x7FFF8000) )
      {
        v65.m128i_i64[0] = *(_QWORD *)(v19 + 16);
        goto LABEL_53;
      }
LABEL_63:
      __asan_report_load8(v21);
      goto LABEL_64;
    }
  }
  v21 = v20;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v20 >> 3) + 0x7FFF8000) <= (unsigned __int8)(v20 & 7)
    || *(_BYTE *)(((v19 + 31) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v19 + 31) >> 3) + 0x7FFF8000) <= (unsigned __int8)((v19 + 31) & 7) )
  {
    __asan_report_load_n(v20, 16LL);
    goto LABEL_63;
  }
  v65 = _mm_loadu_si128((const __m128i *)(v19 + 16));
LABEL_53:
  v21 = v19 + 8;
  if ( *(_BYTE *)(((v19 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_64:
    __asan_report_load8(v21);
LABEL_65:
    __asan_report_store1(v21);
LABEL_66:
    __asan_handle_no_return(v21);
    std::__throw_length_error("basic_string::append");
  }
  v64 = *(_QWORD *)(v19 + 8);
  *(_QWORD *)v19 = v20;
  *(_QWORD *)(v19 + 8) = 0LL;
  v21 = v19 + 16;
  v22 = *(_BYTE *)(((v19 + 16) >> 3) + 0x7FFF8000);
  if ( v22 <= (char)((v19 + 16) & 7) && v22 )
    goto LABEL_65;
  *(_BYTE *)(v19 + 16) = 0;
  if ( v64 == 0x3FFFFFFFFFFFFFFFLL )
    goto LABEL_66;
  v23 = std::string::_M_append(&v63, ":", 1LL);
  v66 = &v68;
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
    v23 = __asan_report_load8(v23);
  }
  else
  {
    v24 = v23 + 16;
    if ( *(_QWORD *)v23 != v23 + 16 )
    {
      v66 = *(void **)v23;
      v25 = v23 + 16;
      if ( !*(_BYTE *)(((v23 + 16) >> 3) + 0x7FFF8000) )
      {
        v68.m128i_i64[0] = *(_QWORD *)(v23 + 16);
        goto LABEL_71;
      }
LABEL_86:
      __asan_report_load8(v25);
      goto LABEL_87;
    }
  }
  v25 = v24;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v24 >> 3) + 0x7FFF8000) <= (unsigned __int8)(v24 & 7)
    || *(_BYTE *)(((v23 + 31) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v23 + 31) >> 3) + 0x7FFF8000) <= (unsigned __int8)((v23 + 31) & 7) )
  {
    __asan_report_load_n(v24, 16LL);
    goto LABEL_86;
  }
  v68 = _mm_loadu_si128((const __m128i *)(v23 + 16));
LABEL_71:
  v25 = v23 + 8;
  if ( *(_BYTE *)(((v23 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_87:
    __asan_report_load8(v25);
LABEL_88:
    v29 = __asan_report_store1(v25);
    goto LABEL_89;
  }
  v67 = *(_QWORD *)(v23 + 8);
  *(_QWORD *)v23 = v24;
  *(_QWORD *)(v23 + 8) = 0LL;
  v25 = v23 + 16;
  v26 = *(_BYTE *)(((v23 + 16) >> 3) + 0x7FFF8000);
  if ( v26 <= (char)((v23 + 16) & 7) && v26 )
    goto LABEL_88;
  *(_BYTE *)(v23 + 16) = 0;
  v27 = v67;
  M_string_length = title._M_string_length;
  v29 = v67 + title._M_string_length;
  v30 = v66;
  if ( v66 == &v68 )
  {
LABEL_89:
    v31 = 15LL;
    goto LABEL_76;
  }
  v31 = v68.m128i_i64[0];
LABEL_76:
  if ( v29 > v31
    && ((std::string::$CFBEC286C7F52157F7E59FC354047095 *)title._M_dataplus._M_p == &title._anon_0
      ? (M_allocated_capacity = 15LL)
      : (M_allocated_capacity = title._anon_0._M_allocated_capacity),
        v29 <= M_allocated_capacity) )
  {
    v34 = title._M_string_length;
    if ( title._M_string_length )
      v34 = 0LL;
    v33 = std::string::_M_replace(&title, 0LL, v34, v30, v27);
  }
  else
  {
    v33 = std::string::_M_append(&v66, title._M_dataplus._M_p, M_string_length);
  }
  *(_QWORD *)(v4 + 80) = v4 + 96;
  if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
  {
    v33 = __asan_report_load8(v33);
  }
  else
  {
    v35 = (__m128i *)(v33 + 16);
    if ( *(_QWORD *)v33 != v33 + 16 )
    {
      *(_QWORD *)(v4 + 80) = *(_QWORD *)v33;
      p_sum_time_cost = (int32_t *)(v33 + 16);
      if ( !*(_BYTE *)(((v33 + 16) >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)(v4 + 96) = *(_QWORD *)(v33 + 16);
        goto LABEL_98;
      }
LABEL_124:
      __asan_report_load8(p_sum_time_cost);
      goto LABEL_125;
    }
  }
  p_sum_time_cost = (int32_t *)v35;
  if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) <= ((unsigned __int8)v35 & 7)
    || *(_BYTE *)(((v33 + 31) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v33 + 31) >> 3) + 0x7FFF8000) <= (unsigned __int8)((v33 + 31) & 7) )
  {
    __asan_report_load_n(v35, 16LL);
    goto LABEL_124;
  }
  *(__m128i *)(v4 + 96) = _mm_loadu_si128((const __m128i *)(v33 + 16));
LABEL_98:
  p_sum_time_cost = (int32_t *)(v33 + 8);
  if ( *(_BYTE *)(((v33 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_125:
    __asan_report_load8(p_sum_time_cost);
LABEL_126:
    __asan_report_store1(p_sum_time_cost);
LABEL_127:
    __asan_report_load4(p_sum_time_cost);
LABEL_128:
    __asan_report_load4(p_call_count);
    goto LABEL_129;
  }
  *(_QWORD *)(v4 + 88) = *(_QWORD *)(v33 + 8);
  *(_QWORD *)v33 = v35;
  *(_QWORD *)(v33 + 8) = 0LL;
  p_sum_time_cost = (int32_t *)(v33 + 16);
  v37 = *(_BYTE *)(((v33 + 16) >> 3) + 0x7FFF8000);
  if ( v37 <= (char)((v33 + 16) & 7) && v37 )
    goto LABEL_126;
  *(_BYTE *)(v33 + 16) = 0;
  if ( v66 != &v68 )
    operator delete(v66);
  if ( v63 != &v65 )
    operator delete(v63);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v62._M_dataplus._M_p != &v62._anon_0 )
    operator delete(v62._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)title._M_dataplus._M_p != &title._anon_0 )
    operator delete(title._M_dataplus._M_p);
  p_sum_time_cost = &this->sum_time_cost_;
  v38 = *(_BYTE *)(((unsigned __int64)&this->sum_time_cost_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 68) & 7) + 3) >= v38 && v38 )
    goto LABEL_127;
  p_call_count = &this->call_count_;
  v40 = *(_BYTE *)(((unsigned __int64)&this->call_count_ >> 3) + 0x7FFF8000);
  if ( v40 && v40 <= 3 )
    goto LABEL_128;
  p_max_time_stamp_ms = &this->max_time_stamp_ms_;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_time_stamp_ms_ >> 3) + 0x7FFF8000) )
  {
LABEL_129:
    __asan_report_load8(p_max_time_stamp_ms);
LABEL_130:
    __asan_report_load4(p_scene_id);
    goto LABEL_131;
  }
  p_scene_id = &this->scene_id_;
  v43 = *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000);
  if ( v43 && v43 <= 3 )
    goto LABEL_130;
  p_uid = &this->uid_;
  v45 = *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 60) & 7) + 3) < v45 || !v45 )
  {
    common::milog::MiLog::writeLog(
      &common::milog::MiLogDefault::default_log_obj_,
      0xBu,
      "|timer|%u|%u|%s|%lu.%lu|RET_SUCC|%d|%d",
      this->uid_,
      this->scene_id_,
      *(const char **)(v4 + 80),
      this->max_time_stamp_ms_ / 0x3E8,
      this->max_time_stamp_ms_ % 0x3E8,
      this->sum_time_cost_ / this->call_count_,
      (unsigned int)this->sum_time_cost_);
    goto LABEL_132;
  }
LABEL_131:
  __asan_report_load4(p_uid);
LABEL_132:
  p_last_log_time_ms = &this->last_log_time_ms_;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_log_time_ms_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_last_log_time_ms);
LABEL_139:
    __asan_report_load4(p_last_log_time_ms);
    goto LABEL_140;
  }
  this->last_log_time_ms_ = v3;
  p_last_log_time_ms = &this->call_count_;
  v48 = *(_BYTE *)(((unsigned __int64)&this->call_count_ >> 3) + 0x7FFF8000);
  if ( v48 && v48 <= 3 )
    goto LABEL_139;
  LODWORD(v3) = this->call_count_;
  p_last_log_time_ms = &this->sum_time_cost_;
  v49 = *(_BYTE *)(((unsigned __int64)&this->sum_time_cost_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 68) & 7) + 3) < v49 || !v49 )
  {
    LODWORD(cost_us) = this->sum_time_cost_;
    title._M_dataplus._M_p = title._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&title, &byte_1B5CE4A5[-5], byte_1B5CE4A5, v46);
    goto LABEL_141;
  }
LABEL_140:
  __asan_report_load4(p_last_log_time_ms);
LABEL_141:
  CmdReport::addCmdRecord(0, &title, (const std::string *)(v4 + 80), (uint32_t)cost_us, v3);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)title._M_dataplus._M_p != &title._anon_0 )
    operator delete(title._M_dataplus._M_p);
  v50 = &this->sum_time_cost_;
  v51 = *(_BYTE *)(((unsigned __int64)&this->sum_time_cost_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 68) & 7) + 3) >= v51 && v51 )
  {
    __asan_report_store4(v50);
LABEL_153:
    __asan_report_store4(v50);
    goto LABEL_154;
  }
  this->sum_time_cost_ = 0;
  v50 = &this->call_count_;
  v52 = *(_BYTE *)(((unsigned __int64)&this->call_count_ >> 3) + 0x7FFF8000);
  if ( v52 && v52 <= 3 )
    goto LABEL_153;
  this->call_count_ = 0;
  v50 = &this->max_time_cost_;
  v53 = *(_BYTE *)(((unsigned __int64)&this->max_time_cost_ >> 3) + 0x7FFF8000);
  if ( !v53 || v53 > 3 )
  {
    this->max_time_cost_ = 0;
    v50 = &this->max_time_stamp_ms_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->max_time_stamp_ms_ >> 3) + 0x7FFF8000) )
    {
      this->max_time_stamp_ms_ = 0LL;
      v54 = *(char **)(v4 + 80);
      if ( v54 != (char *)(v4 + 96) )
        operator delete(v54);
      goto LABEL_27;
    }
    goto LABEL_155;
  }
LABEL_154:
  __asan_report_store4(v50);
LABEL_155:
  __asan_report_store8(v50);
LABEL_156:
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)&title,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/timer.cpp",
    "onTimeOut",
    68);
  v55 = *(&title._anon_0._M_allocated_capacity + 1);
  if ( *(_BYTE *)((*(&title._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
  {
    v56 = *(&title._anon_0._M_allocated_capacity + 1);
    __asan_report_load8(*(&title._anon_0._M_allocated_capacity + 1));
LABEL_162:
    v59 = (struct _Unwind_Exception *)__asan_report_load8(v56);
    common::milog::MilogContextHolder::~MilogContextHolder((common::milog::MilogContextHolder *const)(v55 - 336));
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v55 - 432));
    __asan_handle_no_return(v55 - 432);
    _Unwind_Resume(v59);
  }
  v56 = *(&title._anon_0._M_allocated_capacity + 1) + 8;
  if ( *(_BYTE *)(((*(&title._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
    goto LABEL_162;
  v57 = *(void **)(*(&title._anon_0._M_allocated_capacity + 1) + 8);
  v58 = **((_DWORD **)&title._anon_0._M_allocated_capacity + 1) + 0x4000 - (int)v57;
  if ( v58 > 0x1A )
    v58 = 27LL;
  memcpy(v57, "timeout_callback is nullptr", v58);
  *(_QWORD *)(v55 + 8) += v58;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&title);
LABEL_28:
  if ( v70 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = -168430091;
  }
};

// Line 86: range 0000000019B59156-0000000019B59278
void __fastcall common::tools::TimerMgr::Wheel::~Wheel(common::tools::TimerMgr::Wheel *const this)
{
  common::tools::DoubleLink *i; // rbx
  unsigned __int64 p_tlist; // rdi
  common::tools::DoubleLink *tlist; // rax
  common::tools::DoubleLink *v5; // rdi

  p_tlist = (unsigned __int64)&this->tlist;
  if ( *(_BYTE *)((p_tlist >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_tlist);
    goto LABEL_6;
  }
  tlist = this->tlist;
  if ( !tlist )
    return;
  p_tlist = (unsigned __int64)&tlist[-1].mutex_._M_mutex.__data.__list.__next;
  if ( *(_BYTE *)(((unsigned __int64)&tlist[-1].mutex_._M_mutex.__data.__list.__next >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    __asan_report_load8(p_tlist);
    goto LABEL_7;
  }
  for ( i = &tlist[(__int64)tlist[-1].mutex_._M_mutex.__data.__list.__next]; ; common::tools::DoubleLink::~DoubleLink(i) )
  {
    p_tlist = (unsigned __int64)&this->tlist;
    if ( *(_BYTE *)(((unsigned __int64)&this->tlist >> 3) + 0x7FFF8000) )
    {
LABEL_7:
      __asan_report_load8(p_tlist);
      goto LABEL_8;
    }
    v5 = this->tlist;
    if ( v5 == i )
      break;
LABEL_8:
    --i;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v5[-1].mutex_._M_mutex.__data.__list.__next >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&v5[-1].mutex_._M_mutex.__align + 4);
    common::tools::TimerMgr::checkThread((common::tools::TimerMgr *const)(&v5[-1].mutex_._M_mutex.__align + 4));
  }
  else
  {
    operator delete[](
      &v5[-1].mutex_._M_mutex.__align + 4,
      112 * (__int64)v5[-1].mutex_._M_mutex.__data.__list.__next + 8);
  }
};

// Line 91: range 0000000019B5CC8E-0000000019B5D0E5
