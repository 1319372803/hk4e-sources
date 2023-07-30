// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/core_class/app_base.cpp

// Line 73: range 0000000014E467CE-0000000014E467E8
void __fastcall AppBase::safeSignalPrintf(const char *str)
{
  size_t v1; // rax

  v1 = strlen(str);
  write(1, str, v1);
};

// Line 81: range 0000000014E467EA-0000000014E46B38
char *__fastcall AppBase::safeSignalItoa(uint32_t val, char *buf, uint32_t len)
{
  char *result; // rax
  unsigned int i; // r8d
  char v5; // si
  unsigned __int64 v6; // rdi
  char v7; // dl
  unsigned int j; // edi
  unsigned __int64 v9; // rcx
  char *v10; // rdx
  char v11; // r9
  char v12; // dl
  char v13; // si

  if ( len <= 0xA || buf == 0LL )
    return 0LL;
  result = buf;
  for ( i = 0; i <= 9; ++i )
  {
    v5 = *(_BYTE *)(((unsigned __int64)&result[i] >> 3) + 0x7FFF8000);
    if ( v5 <= (char)(((_BYTE)result + i) & 7) && v5 )
    {
      result = (char *)__asan_report_store1(&result[i]);
LABEL_9:
      v6 = (unsigned __int64)&result[i + 1];
      v7 = *(_BYTE *)((v6 >> 3) + 0x7FFF8000);
      if ( v7 <= (char)(((_BYTE)result + i + 1) & 7) && v7 )
      {
        __asan_report_store1(v6);
        goto LABEL_14;
      }
      *(_BYTE *)v6 = 0;
      break;
    }
    result[i] = val % 0xA + 48;
    if ( val <= 9 )
      goto LABEL_9;
    val /= 0xAu;
  }
  for ( j = 0; (i + 1) >> 1 > j; ++j )
  {
    v9 = (unsigned __int64)&result[j];
    v12 = *(_BYTE *)((v9 >> 3) + 0x7FFF8000);
    if ( v12 <= (char)(((_BYTE)result + j) & 7) && v12 )
    {
LABEL_14:
      j = v9;
      result = (char *)__asan_report_load1(v9);
    }
    else
    {
      v11 = *(_BYTE *)v9;
      v10 = &result[i - j];
      v13 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
      if ( v13 <= (char)(((_BYTE)result + i - j) & 7) && v13 )
      {
        __asan_report_load1(&result[i - j]);
        return 0LL;
      }
    }
    *(_BYTE *)v9 = *v10;
    *v10 = v11;
  }
  return result;
};

// Line 139: range 0000000014E46B3E-0000000014E46C07
bool __fastcall AppBase::popSignal(int *signal)
{
  char v2; // dl
  struct _Unwind_Exception *v3; // rbx
  common::milog::MiLogStream v4; // [rsp-38h] [rbp-38h] BYREF

  if ( !AppBase::cur_signal )
    return 0;
  common::milog::MiLogStream::MiLogStream(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/core_class/app_base.cpp",
    "popSignal",
    144);
  common::milog::MiLogStream::operator()(&v4, "pop signal=%d", (unsigned int)AppBase::cur_signal);
  common::milog::MiLogStream::~MiLogStream(&v4);
  v2 = *(_BYTE *)(((unsigned __int64)signal >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)signal & 7) + 3) >= v2 )
  {
    if ( v2 )
    {
      v3 = (struct _Unwind_Exception *)__asan_report_store4(signal);
      common::milog::MiLogStream::~MiLogStream(&v4);
      __asan_handle_no_return(&v4);
      _Unwind_Resume(v3);
    }
  }
  *signal = AppBase::cur_signal;
  AppBase::cur_signal = 0;
  return 1;
};

// Line 156: range 0000000014E4A994-0000000014E4CAC9
int32_t __fastcall AppBase::run(AppBase *const this, const AppBaseConfig *config)
{
  unsigned __int64 v4; // r12
  _DWORD *v5; // r13
  __int64 v6; // rax
  unsigned __int64 p_app_name; // r15
  unsigned int v8; // ebp
  unsigned __int64 log; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  char v13; // dl
  unsigned __int64 M_p; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rax
  char *v16; // rax
  void *p_auto_reload_config_interval; // rdi
  char v18; // al
  char v19; // al
  char v20; // al
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdi
  char v22; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  volatile signed __int32 *p_M_use_count; // rdi
  char v25; // dl
  signed __int32 v26; // eax
  unsigned __int64 p_config_mgr_ptr; // rdi
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v28; // rdi
  char v29; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v30; // rax
  volatile signed __int32 *v31; // rdi
  char v32; // dl
  signed __int32 v33; // eax
  unsigned __int64 p_mysql_mgr_ptr; // rdi
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v35; // rdi
  char v36; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v37; // rax
  volatile signed __int32 *v38; // rdi
  char v39; // dl
  signed __int32 v40; // eax
  unsigned __int64 p_redis_mgr_ptr; // rdi
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v42; // rdi
  char v43; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v44; // rax
  volatile signed __int32 *v45; // rdi
  char v46; // dl
  signed __int32 v47; // eax
  unsigned __int64 p_monitor_report_ptr; // rdi
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v49; // rdi
  char v50; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v51; // rax
  volatile signed __int32 *v52; // rdi
  char v53; // dl
  signed __int32 v54; // eax
  unsigned __int64 v55; // rdi
  char v56; // al
  std::forward_iterator_tag v57; // cl
  std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  __int64 v59; // rax
  unsigned __int64 v60; // rdi
  char v61; // al
  char v62; // al
  char v63; // al
  char v64; // dl
  char v65; // dl
  unsigned __int64 v66; // rdi
  char v67; // dl
  signed __int32 v68; // eax
  char v69; // dl
  char v70; // dl
  char v71; // dl
  unsigned __int64 v72; // rdi
  char v73; // dl
  signed __int32 v74; // eax
  char v75; // dl
  char v76; // dl
  char v77; // dl
  unsigned __int64 v78; // rdi
  char v79; // dl
  signed __int32 v80; // eax
  char v81; // dl
  char v82; // dl
  char v83; // dl
  unsigned __int64 v84; // rdi
  char v85; // dl
  signed __int32 v86; // eax
  char v87; // dl
  char v88; // dl
  char v89; // dl
  unsigned __int64 v90; // rdi
  char v91; // dl
  signed __int32 v92; // eax
  char v93; // dl
  __int64 v94; // rdx
  struct _Unwind_Exception *v95; // rbx
  char *v96; // rdi
  char v97; // al
  char v98; // dl
  _Atomic_word *v99; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v100; // rdx
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v101; // rdi
  char v102; // dl
  signed __int32 v103; // eax
  unsigned __int64 v104; // rdi
  char v105; // dl
  signed __int32 v106; // eax
  unsigned __int64 p_argv; // rdi
  char v108; // dl
  int32_t v109; // eax
  unsigned __int64 v110; // rdi
  char v111; // al
  unsigned __int64 v112; // rdx
  char v113; // cl
  unsigned __int64 v114; // r8
  __int64 v115; // rax
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v116; // rax
  char v117; // dl
  unsigned __int64 v118; // rdi
  char v119; // dl
  signed __int32 v120; // eax
  char v121; // dl
  char v122; // dl
  unsigned __int64 v123; // rdi
  char v124; // dl
  signed __int32 v125; // eax
  char v126; // dl
  AppBase *v127; // rdi
  int v128; // eax
  AppBase *v129; // rdi
  int v130; // eax
  AppBase *v131; // rdi
  char v132; // al
  AppBase *v133; // rdi
  AppBase *v134; // rdi
  int v135; // eax
  AppBase *v136; // rdi
  int v137; // eax
  __int64 *v139; // rbx
  __int64 v140; // rax
  const char *v141; // rax
  unsigned __int64 M_allocated_capacity; // [rsp+8h] [rbp-100h]
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v143; // [rsp+20h] [rbp-E8h]
  volatile signed __int32 *v144; // [rsp+28h] [rbp-E0h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v145; // [rsp+28h] [rbp-E0h]
  std::string v146; // [rsp+30h] [rbp-D8h] BYREF
  common::milog::MiLogStream v147; // [rsp+50h] [rbp-B8h] BYREF
  char v148[152]; // [rsp+70h] [rbp-98h] BYREF

  v4 = (unsigned __int64)v148;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v4 = v6;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 4 __a2 64 16 7 __guard";
  *(_QWORD *)(v4 + 16) = AppBase::run;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202178560;
  if ( !AppBaseConfig::isValid(config) )
  {
    common::milog::MiLogStream::MiLogStream(
      &v147,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/app_base.cpp",
      off_1AE3B960,
      164);
    common::milog::MiLogStream::operator()(&v147, "config is invalid, can not run server");
    common::milog::MiLogStream::~MiLogStream(&v147);
    v8 = 1;
    goto LABEL_487;
  }
  p_app_name = (unsigned __int64)&this->app_name_;
  std::string::_M_assign(&this->app_name_, config);
  std::string::_M_assign(&this->built_time_, &config->built_time);
  std::string::_M_assign(&this->game_version_, &config->game_version);
  std::string::_M_assign(&this->code_version_, &config->code_version);
  std::string::_M_assign(&this->rely_version_, &config->rely_version);
  std::string::_M_assign(&this->branch_name_, &config->branch_name);
  std::operator+<char>(&v146, "./conf/", &this->app_name_);
  if ( 0x3FFFFFFFFFFFFFFFLL - v146._M_string_length <= 3 )
  {
    __asan_handle_no_return(&v146);
    std::__throw_length_error("basic_string::append");
  }
  log = (unsigned __int64)".xml";
  v10 = std::string::_M_append(&v146, ".xml", 4LL);
  v147.log_ = (common::milog::MiLog *)&v147.ostr_ptr_._M_refcount;
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
  {
    v10 = __asan_report_load8(v10);
  }
  else
  {
    v11 = v10 + 16;
    if ( *(_QWORD *)v10 != v10 + 16 )
    {
      v147.log_ = *(common::milog::MiLog **)v10;
      v12 = v10 + 16;
      if ( !*(_BYTE *)(((v10 + 16) >> 3) + 0x7FFF8000) )
      {
        v147.ostr_ptr_._M_refcount._M_pi = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v10 + 16);
        goto LABEL_17;
      }
LABEL_138:
      __asan_report_load8(v12);
      goto LABEL_139;
    }
  }
  v12 = v11;
  log = *(unsigned __int8 *)(((v10 + 31) >> 3) + 0x7FFF8000);
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v11 >> 3) + 0x7FFF8000) <= (unsigned __int8)(v11 & 7)
    || (_BYTE)log != 0 && (char)log <= (char)((v10 + 31) & 7) )
  {
    log = 16LL;
    __asan_report_load_n(v11, 16LL);
    goto LABEL_138;
  }
  *(__m128i *)&v147.ostr_ptr_._M_refcount._M_pi = _mm_loadu_si128((const __m128i *)(v10 + 16));
LABEL_17:
  v12 = v10 + 8;
  if ( *(_BYTE *)(((v10 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_139:
    __asan_report_load8(v12);
LABEL_140:
    __asan_report_store1(v12);
    goto LABEL_141;
  }
  v147.ostr_ptr_._M_ptr = *(std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type **)(v10 + 8);
  *(_QWORD *)v10 = v11;
  *(_QWORD *)(v10 + 8) = 0LL;
  v12 = v10 + 16;
  v13 = *(_BYTE *)(((v10 + 16) >> 3) + 0x7FFF8000);
  if ( v13 <= (char)((v10 + 16) & 7) && v13 )
    goto LABEL_140;
  *(_BYTE *)(v10 + 16) = 0;
  p_app_name = (unsigned __int64)&this->server_config_file_;
  if ( *(_BYTE *)(((unsigned __int64)&this->server_config_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_141:
    M_p = p_app_name;
    __asan_report_load8(p_app_name);
LABEL_142:
    if ( !v147.ostr_ptr_._M_ptr )
      goto LABEL_145;
    if ( v147.ostr_ptr_._M_ptr != (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)1 )
    {
      memcpy((void *)M_p, (const void *)log, (size_t)v147.ostr_ptr_._M_ptr);
      goto LABEL_145;
    }
    v62 = *(_BYTE *)((log >> 3) + 0x7FFF8000);
    if ( v62 <= (char)(log & 7) && v62 )
    {
      M_p = log;
      __asan_report_load1(log);
    }
    else
    {
      v63 = *(_BYTE *)((M_p >> 3) + 0x7FFF8000);
      if ( v63 > (char)(M_p & 7) || !v63 )
      {
        *(_BYTE *)M_p = *(_BYTE *)log;
LABEL_145:
        M_ptr = v147.ostr_ptr_._M_ptr;
        v59 = p_app_name + 8;
        if ( !*(_BYTE *)(((p_app_name + 8) >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)(p_app_name + 8) = v147.ostr_ptr_._M_ptr;
          v60 = (unsigned __int64)&this->server_config_file_._M_dataplus._M_p[(unsigned __int64)M_ptr];
          v61 = *(_BYTE *)((v60 >> 3) + 0x7FFF8000);
          if ( v61 > (char)(v60 & 7) || !v61 )
          {
            *(_BYTE *)v60 = 0;
            goto LABEL_29;
          }
          goto LABEL_157;
        }
LABEL_156:
        v60 = v59;
        __asan_report_store8(v59);
LABEL_157:
        p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__asan_report_store1(v60);
LABEL_158:
        __asan_report_load8(p_anon_0);
        goto LABEL_159;
      }
    }
    v59 = __asan_report_store1(M_p);
    goto LABEL_156;
  }
  M_p = (unsigned __int64)this->server_config_file_._M_dataplus._M_p;
  log = (unsigned __int64)v147.log_;
  if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v147.log_ == &v147.ostr_ptr_._M_refcount )
    goto LABEL_142;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_p != &this->server_config_file_._anon_0 )
  {
    p_anon_0 = &this->server_config_file_._anon_0;
    if ( !*(_BYTE *)(((unsigned __int64)&this->server_config_file_._anon_0 >> 3) + 0x7FFF8000) )
    {
      M_allocated_capacity = this->server_config_file_._anon_0._M_allocated_capacity;
      goto LABEL_25;
    }
    goto LABEL_158;
  }
LABEL_159:
  M_p = 0LL;
LABEL_25:
  this->server_config_file_._M_dataplus._M_p = (std::string::pointer)log;
  if ( *(_BYTE *)(((p_app_name + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_app_name + 8);
    goto LABEL_161;
  }
  *(_QWORD *)(p_app_name + 8) = v147.ostr_ptr_._M_ptr;
  v16 = (char *)(p_app_name + 16);
  if ( *(_BYTE *)(((p_app_name + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_161:
    __asan_report_store8(v16);
    goto LABEL_162;
  }
  *(_QWORD *)(p_app_name + 16) = v147.ostr_ptr_._M_refcount._M_pi;
  if ( !M_p )
  {
LABEL_162:
    v147.log_ = (common::milog::MiLog *)&v147.ostr_ptr_._M_refcount;
    goto LABEL_29;
  }
  v147.log_ = (common::milog::MiLog *)M_p;
  v147.ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)M_allocated_capacity;
LABEL_29:
  v147.ostr_ptr_._M_ptr = 0LL;
  p_auto_reload_config_interval = v147.log_;
  v18 = *(_BYTE *)(((unsigned __int64)v147.log_ >> 3) + 0x7FFF8000);
  if ( v18 <= ((__int64)v147.log_ & 7) && v18 )
  {
    __asan_report_store1(v147.log_);
LABEL_164:
    __asan_report_load4(p_auto_reload_config_interval);
LABEL_165:
    __asan_report_store4(p_auto_reload_config_interval);
    goto LABEL_166;
  }
  LOBYTE(v147.log_->max_log_len_._M_i) = 0;
  if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v147.log_ != &v147.ostr_ptr_._M_refcount )
    operator delete(v147.log_);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v146._M_dataplus._M_p != &v146._anon_0 )
    operator delete(v146._M_dataplus._M_p);
  p_auto_reload_config_interval = &config->auto_reload_config_interval;
  v19 = *(_BYTE *)(((unsigned __int64)&config->auto_reload_config_interval >> 3) + 0x7FFF8000);
  if ( v19 && v19 <= 3 )
    goto LABEL_164;
  p_auto_reload_config_interval = &this->auto_reload_config_interval_;
  v20 = *(_BYTE *)(((unsigned __int64)&this->auto_reload_config_interval_ >> 3) + 0x7FFF8000);
  if ( v20 && v20 <= 3 )
    goto LABEL_165;
  this->auto_reload_config_interval_ = config->auto_reload_config_interval;
  p_auto_reload_config_interval = &config->network_mgr_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&config->network_mgr_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_166:
    __asan_report_load8(p_auto_reload_config_interval);
    goto LABEL_167;
  }
  if ( *(_BYTE *)(((unsigned __int64)&ResourceBox::network_mgr_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_167:
    p_M_refcount = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)&ResourceBox::network_mgr_ptr;
    __asan_report_store8(&ResourceBox::network_mgr_ptr);
    goto LABEL_168;
  }
  ResourceBox::network_mgr_ptr._M_ptr = config->network_mgr_ptr._M_ptr;
  p_M_refcount = &config->network_mgr_ptr._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&config->network_mgr_ptr._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_168:
    __asan_report_load8(p_M_refcount);
    goto LABEL_169;
  }
  p_app_name = (unsigned __int64)config->network_mgr_ptr._M_refcount._M_pi;
  p_M_refcount = &ResourceBox::network_mgr_ptr._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&ResourceBox::network_mgr_ptr._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_169:
    __asan_report_load8(p_M_refcount);
    goto LABEL_170;
  }
  if ( (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)p_app_name == ResourceBox::network_mgr_ptr._M_refcount._M_pi )
    goto LABEL_57;
  if ( !p_app_name )
    goto LABEL_49;
  p_M_refcount = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(p_app_name + 8);
  if ( !&_pthread_key_create )
    goto LABEL_171;
  v22 = *(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_refcount & 7) + 3) < v22 || !v22 )
  {
    _InterlockedAdd((volatile signed __int32 *)p_M_refcount, 1u);
    goto LABEL_49;
  }
LABEL_170:
  __asan_report_store4(p_M_refcount);
LABEL_171:
  p_M_use_count = (volatile signed __int32 *)(p_app_name + 8);
  v64 = *(_BYTE *)(((p_app_name + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((p_app_name + 8) & 7) + 3) >= v64 && v64 )
  {
    __asan_report_load4(p_M_use_count);
    goto LABEL_175;
  }
  ++*(_DWORD *)(p_app_name + 8);
LABEL_49:
  M_pi = ResourceBox::network_mgr_ptr._M_refcount._M_pi;
  M_allocated_capacity = (unsigned __int64)M_pi;
  if ( !M_pi )
    goto LABEL_55;
  p_M_use_count = &M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_176;
  v25 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v25 || !v25 )
  {
    v26 = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
    goto LABEL_54;
  }
LABEL_175:
  __asan_report_store4(p_M_use_count);
LABEL_176:
  v65 = *(_BYTE *)(((M_allocated_capacity + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((M_allocated_capacity + 8) & 7) + 3) >= v65 && v65 )
  {
    __asan_report_load4(M_allocated_capacity + 8);
    goto LABEL_180;
  }
  v26 = *(_DWORD *)(M_allocated_capacity + 8);
  *(_DWORD *)(M_allocated_capacity + 8) = v26 - 1;
LABEL_54:
  if ( v26 != 1 )
    goto LABEL_55;
LABEL_180:
  if ( *(_BYTE *)((M_allocated_capacity >> 3) + 0x7FFF8000) )
  {
    v66 = M_allocated_capacity;
    __asan_report_load8(M_allocated_capacity);
    goto LABEL_191;
  }
  v66 = *(_QWORD *)M_allocated_capacity + 16LL;
  if ( *(_BYTE *)((v66 >> 3) + 0x7FFF8000) )
  {
LABEL_191:
    __asan_report_load8(v66);
    goto LABEL_192;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_allocated_capacity + 16LL))(M_allocated_capacity);
  v66 = M_allocated_capacity + 12;
  if ( !&_pthread_key_create )
    goto LABEL_193;
  v67 = *(_BYTE *)((v66 >> 3) + 0x7FFF8000);
  if ( (char)((v66 & 7) + 3) < v67 || !v67 )
  {
    v68 = _InterlockedExchangeAdd((volatile signed __int32 *)v66, 0xFFFFFFFF);
    goto LABEL_186;
  }
LABEL_192:
  __asan_report_store4(v66);
LABEL_193:
  v69 = *(_BYTE *)(((M_allocated_capacity + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((M_allocated_capacity + 12) & 7) + 3) >= v69 && v69 )
  {
    __asan_report_load4(M_allocated_capacity + 12);
LABEL_197:
    p_config_mgr_ptr = M_allocated_capacity;
    __asan_report_load8(M_allocated_capacity);
    goto LABEL_198;
  }
  v68 = *(_DWORD *)(M_allocated_capacity + 12);
  *(_DWORD *)(M_allocated_capacity + 12) = v68 - 1;
LABEL_186:
  if ( v68 != 1 )
    goto LABEL_55;
  if ( *(_BYTE *)((M_allocated_capacity >> 3) + 0x7FFF8000) )
    goto LABEL_197;
  p_config_mgr_ptr = *(_QWORD *)M_allocated_capacity + 24LL;
  if ( *(_BYTE *)((p_config_mgr_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_198:
    __asan_report_load8(p_config_mgr_ptr);
    goto LABEL_199;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_allocated_capacity + 24LL))(M_allocated_capacity);
LABEL_55:
  p_config_mgr_ptr = (unsigned __int64)&ResourceBox::network_mgr_ptr._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&ResourceBox::network_mgr_ptr._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_199:
    __asan_report_store8(p_config_mgr_ptr);
    goto LABEL_200;
  }
  ResourceBox::network_mgr_ptr._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)p_app_name;
LABEL_57:
  p_config_mgr_ptr = (unsigned __int64)&config->config_mgr_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&config->config_mgr_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_200:
    __asan_report_load8(p_config_mgr_ptr);
    goto LABEL_201;
  }
  if ( *(_BYTE *)(((unsigned __int64)&ResourceBox::config_mgr_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_201:
    v28 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)&ResourceBox::config_mgr_ptr;
    __asan_report_store8(&ResourceBox::config_mgr_ptr);
    goto LABEL_202;
  }
  ResourceBox::config_mgr_ptr._M_ptr = config->config_mgr_ptr._M_ptr;
  v28 = &config->config_mgr_ptr._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&config->config_mgr_ptr._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_202:
    __asan_report_load8(v28);
    goto LABEL_203;
  }
  p_app_name = (unsigned __int64)config->config_mgr_ptr._M_refcount._M_pi;
  v28 = &ResourceBox::config_mgr_ptr._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&ResourceBox::config_mgr_ptr._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_203:
    __asan_report_load8(v28);
    goto LABEL_204;
  }
  if ( (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)p_app_name == ResourceBox::config_mgr_ptr._M_refcount._M_pi )
    goto LABEL_75;
  if ( !p_app_name )
    goto LABEL_67;
  v28 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(p_app_name + 8);
  if ( !&_pthread_key_create )
    goto LABEL_205;
  v29 = *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v28 & 7) + 3) < v29 || !v29 )
  {
    _InterlockedAdd((volatile signed __int32 *)v28, 1u);
    goto LABEL_67;
  }
LABEL_204:
  __asan_report_store4(v28);
LABEL_205:
  v31 = (volatile signed __int32 *)(p_app_name + 8);
  v70 = *(_BYTE *)(((p_app_name + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((p_app_name + 8) & 7) + 3) >= v70 && v70 )
  {
    __asan_report_load4(v31);
    goto LABEL_209;
  }
  ++*(_DWORD *)(p_app_name + 8);
LABEL_67:
  v30 = ResourceBox::config_mgr_ptr._M_refcount._M_pi;
  M_allocated_capacity = (unsigned __int64)v30;
  if ( !v30 )
    goto LABEL_73;
  v31 = &v30->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_210;
  v32 = *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v31 & 7) + 3) < v32 || !v32 )
  {
    v33 = _InterlockedExchangeAdd(v31, 0xFFFFFFFF);
    goto LABEL_72;
  }
LABEL_209:
  __asan_report_store4(v31);
LABEL_210:
  v71 = *(_BYTE *)(((M_allocated_capacity + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((M_allocated_capacity + 8) & 7) + 3) >= v71 && v71 )
  {
    __asan_report_load4(M_allocated_capacity + 8);
    goto LABEL_214;
  }
  v33 = *(_DWORD *)(M_allocated_capacity + 8);
  *(_DWORD *)(M_allocated_capacity + 8) = v33 - 1;
LABEL_72:
  if ( v33 != 1 )
    goto LABEL_73;
LABEL_214:
  if ( *(_BYTE *)((M_allocated_capacity >> 3) + 0x7FFF8000) )
  {
    v72 = M_allocated_capacity;
    __asan_report_load8(M_allocated_capacity);
    goto LABEL_225;
  }
  v72 = *(_QWORD *)M_allocated_capacity + 16LL;
  if ( *(_BYTE *)((v72 >> 3) + 0x7FFF8000) )
  {
LABEL_225:
    __asan_report_load8(v72);
    goto LABEL_226;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_allocated_capacity + 16LL))(M_allocated_capacity);
  v72 = M_allocated_capacity + 12;
  if ( !&_pthread_key_create )
    goto LABEL_227;
  v73 = *(_BYTE *)((v72 >> 3) + 0x7FFF8000);
  if ( (char)((v72 & 7) + 3) < v73 || !v73 )
  {
    v74 = _InterlockedExchangeAdd((volatile signed __int32 *)v72, 0xFFFFFFFF);
    goto LABEL_220;
  }
LABEL_226:
  __asan_report_store4(v72);
LABEL_227:
  v75 = *(_BYTE *)(((M_allocated_capacity + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((M_allocated_capacity + 12) & 7) + 3) >= v75 && v75 )
  {
    __asan_report_load4(M_allocated_capacity + 12);
LABEL_231:
    p_mysql_mgr_ptr = M_allocated_capacity;
    __asan_report_load8(M_allocated_capacity);
    goto LABEL_232;
  }
  v74 = *(_DWORD *)(M_allocated_capacity + 12);
  *(_DWORD *)(M_allocated_capacity + 12) = v74 - 1;
LABEL_220:
  if ( v74 != 1 )
    goto LABEL_73;
  if ( *(_BYTE *)((M_allocated_capacity >> 3) + 0x7FFF8000) )
    goto LABEL_231;
  p_mysql_mgr_ptr = *(_QWORD *)M_allocated_capacity + 24LL;
  if ( *(_BYTE *)((p_mysql_mgr_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_232:
    __asan_report_load8(p_mysql_mgr_ptr);
    goto LABEL_233;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_allocated_capacity + 24LL))(M_allocated_capacity);
LABEL_73:
  p_mysql_mgr_ptr = (unsigned __int64)&ResourceBox::config_mgr_ptr._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&ResourceBox::config_mgr_ptr._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_233:
    __asan_report_store8(p_mysql_mgr_ptr);
    goto LABEL_234;
  }
  ResourceBox::config_mgr_ptr._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)p_app_name;
LABEL_75:
  p_mysql_mgr_ptr = (unsigned __int64)&config->mysql_mgr_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&config->mysql_mgr_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_234:
    __asan_report_load8(p_mysql_mgr_ptr);
    goto LABEL_235;
  }
  if ( *(_BYTE *)(((unsigned __int64)&ResourceBox::mysql_mgr_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_235:
    v35 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)&ResourceBox::mysql_mgr_ptr;
    __asan_report_store8(&ResourceBox::mysql_mgr_ptr);
    goto LABEL_236;
  }
  ResourceBox::mysql_mgr_ptr._M_ptr = config->mysql_mgr_ptr._M_ptr;
  v35 = &config->mysql_mgr_ptr._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&config->mysql_mgr_ptr._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_236:
    __asan_report_load8(v35);
    goto LABEL_237;
  }
  p_app_name = (unsigned __int64)config->mysql_mgr_ptr._M_refcount._M_pi;
  v35 = &ResourceBox::mysql_mgr_ptr._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&ResourceBox::mysql_mgr_ptr._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_237:
    __asan_report_load8(v35);
    goto LABEL_238;
  }
  if ( (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)p_app_name == ResourceBox::mysql_mgr_ptr._M_refcount._M_pi )
    goto LABEL_93;
  if ( !p_app_name )
    goto LABEL_85;
  v35 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(p_app_name + 8);
  if ( !&_pthread_key_create )
    goto LABEL_239;
  v36 = *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v35 & 7) + 3) < v36 || !v36 )
  {
    _InterlockedAdd((volatile signed __int32 *)v35, 1u);
    goto LABEL_85;
  }
LABEL_238:
  __asan_report_store4(v35);
LABEL_239:
  v38 = (volatile signed __int32 *)(p_app_name + 8);
  v76 = *(_BYTE *)(((p_app_name + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((p_app_name + 8) & 7) + 3) >= v76 && v76 )
  {
    __asan_report_load4(v38);
    goto LABEL_243;
  }
  ++*(_DWORD *)(p_app_name + 8);
LABEL_85:
  v37 = ResourceBox::mysql_mgr_ptr._M_refcount._M_pi;
  M_allocated_capacity = (unsigned __int64)v37;
  if ( !v37 )
    goto LABEL_91;
  v38 = &v37->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_244;
  v39 = *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v38 & 7) + 3) < v39 || !v39 )
  {
    v40 = _InterlockedExchangeAdd(v38, 0xFFFFFFFF);
    goto LABEL_90;
  }
LABEL_243:
  __asan_report_store4(v38);
LABEL_244:
  v77 = *(_BYTE *)(((M_allocated_capacity + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((M_allocated_capacity + 8) & 7) + 3) >= v77 && v77 )
  {
    __asan_report_load4(M_allocated_capacity + 8);
    goto LABEL_248;
  }
  v40 = *(_DWORD *)(M_allocated_capacity + 8);
  *(_DWORD *)(M_allocated_capacity + 8) = v40 - 1;
LABEL_90:
  if ( v40 != 1 )
    goto LABEL_91;
LABEL_248:
  if ( *(_BYTE *)((M_allocated_capacity >> 3) + 0x7FFF8000) )
  {
    v78 = M_allocated_capacity;
    __asan_report_load8(M_allocated_capacity);
    goto LABEL_259;
  }
  v78 = *(_QWORD *)M_allocated_capacity + 16LL;
  if ( *(_BYTE *)((v78 >> 3) + 0x7FFF8000) )
  {
LABEL_259:
    __asan_report_load8(v78);
    goto LABEL_260;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_allocated_capacity + 16LL))(M_allocated_capacity);
  v78 = M_allocated_capacity + 12;
  if ( !&_pthread_key_create )
    goto LABEL_261;
  v79 = *(_BYTE *)((v78 >> 3) + 0x7FFF8000);
  if ( (char)((v78 & 7) + 3) < v79 || !v79 )
  {
    v80 = _InterlockedExchangeAdd((volatile signed __int32 *)v78, 0xFFFFFFFF);
    goto LABEL_254;
  }
LABEL_260:
  __asan_report_store4(v78);
LABEL_261:
  v81 = *(_BYTE *)(((M_allocated_capacity + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((M_allocated_capacity + 12) & 7) + 3) >= v81 && v81 )
  {
    __asan_report_load4(M_allocated_capacity + 12);
LABEL_265:
    p_redis_mgr_ptr = M_allocated_capacity;
    __asan_report_load8(M_allocated_capacity);
    goto LABEL_266;
  }
  v80 = *(_DWORD *)(M_allocated_capacity + 12);
  *(_DWORD *)(M_allocated_capacity + 12) = v80 - 1;
LABEL_254:
  if ( v80 != 1 )
    goto LABEL_91;
  if ( *(_BYTE *)((M_allocated_capacity >> 3) + 0x7FFF8000) )
    goto LABEL_265;
  p_redis_mgr_ptr = *(_QWORD *)M_allocated_capacity + 24LL;
  if ( *(_BYTE *)((p_redis_mgr_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_266:
    __asan_report_load8(p_redis_mgr_ptr);
    goto LABEL_267;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_allocated_capacity + 24LL))(M_allocated_capacity);
LABEL_91:
  p_redis_mgr_ptr = (unsigned __int64)&ResourceBox::mysql_mgr_ptr._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&ResourceBox::mysql_mgr_ptr._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_267:
    __asan_report_store8(p_redis_mgr_ptr);
    goto LABEL_268;
  }
  ResourceBox::mysql_mgr_ptr._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)p_app_name;
LABEL_93:
  p_redis_mgr_ptr = (unsigned __int64)&config->redis_mgr_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&config->redis_mgr_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_268:
    __asan_report_load8(p_redis_mgr_ptr);
    goto LABEL_269;
  }
  if ( *(_BYTE *)(((unsigned __int64)&ResourceBox::redis_mgr_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_269:
    v42 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)&ResourceBox::redis_mgr_ptr;
    __asan_report_store8(&ResourceBox::redis_mgr_ptr);
    goto LABEL_270;
  }
  ResourceBox::redis_mgr_ptr._M_ptr = config->redis_mgr_ptr._M_ptr;
  v42 = &config->redis_mgr_ptr._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&config->redis_mgr_ptr._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_270:
    __asan_report_load8(v42);
    goto LABEL_271;
  }
  p_app_name = (unsigned __int64)config->redis_mgr_ptr._M_refcount._M_pi;
  v42 = &ResourceBox::redis_mgr_ptr._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&ResourceBox::redis_mgr_ptr._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_271:
    __asan_report_load8(v42);
    goto LABEL_272;
  }
  if ( (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)p_app_name == ResourceBox::redis_mgr_ptr._M_refcount._M_pi )
    goto LABEL_111;
  if ( !p_app_name )
    goto LABEL_103;
  v42 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(p_app_name + 8);
  if ( !&_pthread_key_create )
    goto LABEL_273;
  v43 = *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v42 & 7) + 3) < v43 || !v43 )
  {
    _InterlockedAdd((volatile signed __int32 *)v42, 1u);
    goto LABEL_103;
  }
LABEL_272:
  __asan_report_store4(v42);
LABEL_273:
  v45 = (volatile signed __int32 *)(p_app_name + 8);
  v82 = *(_BYTE *)(((p_app_name + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((p_app_name + 8) & 7) + 3) >= v82 && v82 )
  {
    __asan_report_load4(v45);
    goto LABEL_277;
  }
  ++*(_DWORD *)(p_app_name + 8);
LABEL_103:
  v44 = ResourceBox::redis_mgr_ptr._M_refcount._M_pi;
  M_allocated_capacity = (unsigned __int64)v44;
  if ( !v44 )
    goto LABEL_109;
  v45 = &v44->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_278;
  v46 = *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v45 & 7) + 3) < v46 || !v46 )
  {
    v47 = _InterlockedExchangeAdd(v45, 0xFFFFFFFF);
    goto LABEL_108;
  }
LABEL_277:
  __asan_report_store4(v45);
LABEL_278:
  v83 = *(_BYTE *)(((M_allocated_capacity + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((M_allocated_capacity + 8) & 7) + 3) >= v83 && v83 )
  {
    __asan_report_load4(M_allocated_capacity + 8);
    goto LABEL_282;
  }
  v47 = *(_DWORD *)(M_allocated_capacity + 8);
  *(_DWORD *)(M_allocated_capacity + 8) = v47 - 1;
LABEL_108:
  if ( v47 != 1 )
    goto LABEL_109;
LABEL_282:
  if ( *(_BYTE *)((M_allocated_capacity >> 3) + 0x7FFF8000) )
  {
    v84 = M_allocated_capacity;
    __asan_report_load8(M_allocated_capacity);
    goto LABEL_293;
  }
  v84 = *(_QWORD *)M_allocated_capacity + 16LL;
  if ( *(_BYTE *)((v84 >> 3) + 0x7FFF8000) )
  {
LABEL_293:
    __asan_report_load8(v84);
    goto LABEL_294;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_allocated_capacity + 16LL))(M_allocated_capacity);
  v84 = M_allocated_capacity + 12;
  if ( !&_pthread_key_create )
    goto LABEL_295;
  v85 = *(_BYTE *)((v84 >> 3) + 0x7FFF8000);
  if ( (char)((v84 & 7) + 3) < v85 || !v85 )
  {
    v86 = _InterlockedExchangeAdd((volatile signed __int32 *)v84, 0xFFFFFFFF);
    goto LABEL_288;
  }
LABEL_294:
  __asan_report_store4(v84);
LABEL_295:
  v87 = *(_BYTE *)(((M_allocated_capacity + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((M_allocated_capacity + 12) & 7) + 3) >= v87 && v87 )
  {
    __asan_report_load4(M_allocated_capacity + 12);
LABEL_299:
    p_monitor_report_ptr = M_allocated_capacity;
    __asan_report_load8(M_allocated_capacity);
    goto LABEL_300;
  }
  v86 = *(_DWORD *)(M_allocated_capacity + 12);
  *(_DWORD *)(M_allocated_capacity + 12) = v86 - 1;
LABEL_288:
  if ( v86 != 1 )
    goto LABEL_109;
  if ( *(_BYTE *)((M_allocated_capacity >> 3) + 0x7FFF8000) )
    goto LABEL_299;
  p_monitor_report_ptr = *(_QWORD *)M_allocated_capacity + 24LL;
  if ( *(_BYTE *)((p_monitor_report_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_300:
    __asan_report_load8(p_monitor_report_ptr);
    goto LABEL_301;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_allocated_capacity + 24LL))(M_allocated_capacity);
LABEL_109:
  p_monitor_report_ptr = (unsigned __int64)&ResourceBox::redis_mgr_ptr._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&ResourceBox::redis_mgr_ptr._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_301:
    __asan_report_store8(p_monitor_report_ptr);
    goto LABEL_302;
  }
  ResourceBox::redis_mgr_ptr._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)p_app_name;
LABEL_111:
  p_monitor_report_ptr = (unsigned __int64)&config->monitor_report_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&config->monitor_report_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_302:
    __asan_report_load8(p_monitor_report_ptr);
    goto LABEL_303;
  }
  if ( *(_BYTE *)(((unsigned __int64)&ResourceBox::monitor_report_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_303:
    v49 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)&ResourceBox::monitor_report_ptr;
    __asan_report_store8(&ResourceBox::monitor_report_ptr);
    goto LABEL_304;
  }
  ResourceBox::monitor_report_ptr._M_ptr = config->monitor_report_ptr._M_ptr;
  v49 = &config->monitor_report_ptr._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&config->monitor_report_ptr._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_304:
    __asan_report_load8(v49);
    goto LABEL_305;
  }
  p_app_name = (unsigned __int64)config->monitor_report_ptr._M_refcount._M_pi;
  v49 = &ResourceBox::monitor_report_ptr._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&ResourceBox::monitor_report_ptr._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_305:
    __asan_report_load8(v49);
    goto LABEL_306;
  }
  if ( (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)p_app_name != ResourceBox::monitor_report_ptr._M_refcount._M_pi )
  {
    if ( !p_app_name )
      goto LABEL_121;
    v49 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(p_app_name + 8);
    if ( !&_pthread_key_create )
    {
LABEL_307:
      v52 = (volatile signed __int32 *)(p_app_name + 8);
      v88 = *(_BYTE *)(((p_app_name + 8) >> 3) + 0x7FFF8000);
      if ( (char)(((p_app_name + 8) & 7) + 3) >= v88 && v88 )
      {
        __asan_report_load4(v52);
        goto LABEL_311;
      }
      ++*(_DWORD *)(p_app_name + 8);
LABEL_121:
      v51 = ResourceBox::monitor_report_ptr._M_refcount._M_pi;
      M_allocated_capacity = (unsigned __int64)v51;
      if ( !v51 )
        goto LABEL_127;
      v52 = &v51->_M_use_count;
      if ( !&_pthread_key_create )
        goto LABEL_312;
      v53 = *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v52 & 7) + 3) < v53 || !v53 )
      {
        v54 = _InterlockedExchangeAdd(v52, 0xFFFFFFFF);
        goto LABEL_126;
      }
LABEL_311:
      __asan_report_store4(v52);
LABEL_312:
      v89 = *(_BYTE *)(((M_allocated_capacity + 8) >> 3) + 0x7FFF8000);
      if ( (char)(((M_allocated_capacity + 8) & 7) + 3) >= v89 && v89 )
      {
        __asan_report_load4(M_allocated_capacity + 8);
        goto LABEL_316;
      }
      v54 = *(_DWORD *)(M_allocated_capacity + 8);
      *(_DWORD *)(M_allocated_capacity + 8) = v54 - 1;
LABEL_126:
      if ( v54 != 1 )
        goto LABEL_127;
LABEL_316:
      if ( *(_BYTE *)((M_allocated_capacity >> 3) + 0x7FFF8000) )
      {
        v90 = M_allocated_capacity;
        __asan_report_load8(M_allocated_capacity);
      }
      else
      {
        v90 = *(_QWORD *)M_allocated_capacity + 16LL;
        if ( !*(_BYTE *)((v90 >> 3) + 0x7FFF8000) )
        {
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_allocated_capacity + 16LL))(M_allocated_capacity);
          v90 = M_allocated_capacity + 12;
          if ( !&_pthread_key_create )
            goto LABEL_329;
          v91 = *(_BYTE *)((v90 >> 3) + 0x7FFF8000);
          if ( (char)((v90 & 7) + 3) < v91 || !v91 )
          {
            v92 = _InterlockedExchangeAdd((volatile signed __int32 *)v90, 0xFFFFFFFF);
            goto LABEL_322;
          }
LABEL_328:
          __asan_report_store4(v90);
LABEL_329:
          v93 = *(_BYTE *)(((M_allocated_capacity + 12) >> 3) + 0x7FFF8000);
          if ( (char)(((M_allocated_capacity + 12) & 7) + 3) >= v93 && v93 )
          {
            __asan_report_load4(M_allocated_capacity + 12);
            goto LABEL_333;
          }
          v92 = *(_DWORD *)(M_allocated_capacity + 12);
          *(_DWORD *)(M_allocated_capacity + 12) = v92 - 1;
LABEL_322:
          if ( v92 != 1 )
            goto LABEL_127;
          if ( !*(_BYTE *)((M_allocated_capacity >> 3) + 0x7FFF8000) )
          {
            v55 = *(_QWORD *)M_allocated_capacity + 24LL;
            if ( !*(_BYTE *)((v55 >> 3) + 0x7FFF8000) )
            {
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_allocated_capacity + 24LL))(M_allocated_capacity);
LABEL_127:
              v55 = (unsigned __int64)&ResourceBox::monitor_report_ptr._M_refcount;
              if ( !*(_BYTE *)(((unsigned __int64)&ResourceBox::monitor_report_ptr._M_refcount >> 3) + 0x7FFF8000) )
              {
                ResourceBox::monitor_report_ptr._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)p_app_name;
                goto LABEL_129;
              }
LABEL_335:
              __asan_report_store8(v55);
LABEL_336:
              v95 = (struct _Unwind_Exception *)__asan_report_load1(v55);
              if ( v94 != 1 )
              {
                __asan_handle_no_return(v55);
                _Unwind_Resume(v95);
              }
              v139 = (__int64 *)__cxa_begin_catch(v95);
              MiException::backtrace();
              common::milog::MiLogStream::MiLogStream(
                &v147,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "src/core_class/app_base.cpp",
                off_1AE3B960,
                233);
              if ( *(_BYTE *)(((unsigned __int64)v139 >> 3) + 0x7FFF8000) )
                __asan_report_load8(v139);
              v140 = *v139;
              if ( *(_BYTE *)(((unsigned __int64)(*v139 + 16) >> 3) + 0x7FFF8000) )
                v140 = __asan_report_load8(*v139 + 16);
              v141 = (const char *)(*(__int64 (__fastcall **)(__int64 *))(v140 + 16))(v139);
              common::milog::MiLogStream::operator()(&v147, "%s", v141);
              common::milog::MiLogStream::~MiLogStream(&v147);
              v8 = 1;
              __cxa_end_catch();
              goto LABEL_486;
            }
LABEL_334:
            __asan_report_load8(v55);
            goto LABEL_335;
          }
LABEL_333:
          v55 = M_allocated_capacity;
          __asan_report_load8(M_allocated_capacity);
          goto LABEL_334;
        }
      }
      __asan_report_load8(v90);
      goto LABEL_328;
    }
    v50 = *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v49 & 7) + 3) < v50 || !v50 )
    {
      _InterlockedAdd((volatile signed __int32 *)v49, 1u);
      goto LABEL_121;
    }
LABEL_306:
    __asan_report_store4(v49);
    goto LABEL_307;
  }
LABEL_129:
  v55 = (unsigned __int64)&common::tools::perf::MemoryPerf::is_record;
  v56 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
  if ( v56 <= (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) && v56 )
    goto LABEL_336;
  if ( !common::tools::perf::MemoryPerf::is_record )
  {
LABEL_376:
    std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<TracingMgr,std::allocator<TracingMgr>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_ptr_inplace<TracingMgr,std::allocator<TracingMgr>,(__gnu_cxx::_Lock_policy)2> > *)(v4 + 48));
    v110 = *(_QWORD *)(v4 + 72);
    v111 = *(_BYTE *)(((v110 + 8) >> 3) + 0x7FFF8000);
    if ( v111 && v111 <= 3 )
    {
      __asan_report_store4(v110 + 8);
    }
    else
    {
      *(_DWORD *)(v110 + 8) = 1;
      v112 = v110 + 12;
      v113 = *(_BYTE *)(((v110 + 12) >> 3) + 0x7FFF8000);
      if ( (char)(((v110 + 12) & 7) + 3) < v113 || !v113 )
      {
        *(_DWORD *)(v110 + 12) = 1;
        if ( !*(_BYTE *)((v110 >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)v110 = &`vtable for'std::_Sp_counted_ptr_inplace<TracingMgr,std::allocator<TracingMgr>,(__gnu_cxx::_Lock_policy)2>
                          + 2;
          v114 = v110 + 16;
          if ( (*(_BYTE *)(((v110 + 39) >> 3) + 0x7FFF8000) == 0
             || *(_BYTE *)(((v110 + 39) >> 3) + 0x7FFF8000) > (unsigned __int8)((v110 + 39) & 7))
            && *(char *)(((v110 + 16) >> 3) + 0x7FFF8000) >= 0 )
          {
            *(_QWORD *)(v110 + 16) = 0LL;
            *(_QWORD *)(v110 + 24) = 0LL;
            *(_QWORD *)(v110 + 32) = 0LL;
            v115 = v110 + 24;
            if ( !*(_BYTE *)(((v110 + 24) >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)(v110 + 24) = 0LL;
              v116 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(v110 + 32);
              if ( !*(_BYTE *)(((v110 + 32) >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)(v110 + 32) = 0LL;
                *(_QWORD *)(v4 + 72) = 0LL;
                v145 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v110;
                v143 = (std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *)(v110 + 16);
                goto LABEL_348;
              }
LABEL_391:
              v101 = v116;
              __asan_report_store8(v116);
LABEL_392:
              __asan_report_store_n(v101, 8LL);
LABEL_393:
              __asan_report_load_n(v101, 8LL);
              goto LABEL_394;
            }
LABEL_390:
            __asan_report_store8(v115);
            goto LABEL_391;
          }
LABEL_389:
          v115 = __asan_report_store_n(v114, 24LL);
          goto LABEL_390;
        }
LABEL_388:
        __asan_report_store8(v110);
        goto LABEL_389;
      }
    }
    v110 = v112;
    __asan_report_store4(v112);
    goto LABEL_388;
  }
  std::__allocate_guarded<common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<TracingMgr,common::tools::perf::allocator<TracingMgr,TracingMgr>,(__gnu_cxx::_Lock_policy)2>,TracingMgr>>((common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<TracingMgr,common::tools::perf::allocator<TracingMgr,TracingMgr>,(__gnu_cxx::_Lock_policy)2>,TracingMgr> *)(v4 + 48));
  p_app_name = *(_QWORD *)(v4 + 72);
  v96 = (char *)(p_app_name + 8);
  v97 = *(_BYTE *)(((p_app_name + 8) >> 3) + 0x7FFF8000);
  if ( v97 && v97 <= 3 )
  {
    __asan_report_store4(v96);
LABEL_369:
    __asan_report_store4(v96);
    goto LABEL_370;
  }
  *(_DWORD *)(p_app_name + 8) = 1;
  v96 = (char *)(p_app_name + 12);
  v98 = *(_BYTE *)(((p_app_name + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((p_app_name + 12) & 7) + 3) >= v98 && v98 )
    goto LABEL_369;
  *(_DWORD *)(p_app_name + 12) = 1;
  if ( !*(_BYTE *)((p_app_name >> 3) + 0x7FFF8000) )
  {
    *(_QWORD *)p_app_name = &`vtable for'std::_Sp_counted_ptr_inplace<TracingMgr,common::tools::perf::allocator<TracingMgr,TracingMgr>,(__gnu_cxx::_Lock_policy)2>
                          + 2;
    M_allocated_capacity = p_app_name + 16;
    if ( !common::tools::perf::MemoryPerf::is_record )
      goto LABEL_343;
    goto LABEL_371;
  }
LABEL_370:
  __asan_report_store8(p_app_name);
LABEL_371:
  v147.log_ = (common::milog::MiLog *)&v147.ostr_ptr_._M_refcount;
  std::string::_M_construct<char const*>((std::string *const)&v147, "10TracingMgr", "", v57);
  common::tools::perf::MemoryPerfRecorder::construct(
    &common::tools::perf::MemoryPerf::recorder,
    (const std::string *)&v147,
    0x18uLL);
  if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v147.log_ != &v147.ostr_ptr_._M_refcount )
    operator delete(v147.log_);
LABEL_343:
  if ( *(_BYTE *)(((M_allocated_capacity + 23) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((M_allocated_capacity + 23) >> 3) + 0x7FFF8000) <= (unsigned __int8)((M_allocated_capacity + 23) & 7)
    || *(char *)((M_allocated_capacity >> 3) + 0x7FFF8000) < 0 )
  {
    v99 = (_Atomic_word *)M_allocated_capacity;
    __asan_report_store_n(M_allocated_capacity, 24LL);
    goto LABEL_374;
  }
  *(_QWORD *)(p_app_name + 16) = 0LL;
  *(_QWORD *)(p_app_name + 24) = 0LL;
  *(_QWORD *)(M_allocated_capacity + 16) = 0LL;
  v99 = (_Atomic_word *)(M_allocated_capacity + 8);
  if ( *(_BYTE *)(((M_allocated_capacity + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_374:
    __asan_report_store8(v99);
    goto LABEL_375;
  }
  *(_QWORD *)(M_allocated_capacity + 8) = 0LL;
  v99 = (_Atomic_word *)(M_allocated_capacity + 16);
  if ( *(_BYTE *)(((M_allocated_capacity + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_375:
    __asan_report_store8(v99);
    goto LABEL_376;
  }
  *(_QWORD *)(M_allocated_capacity + 16) = 0LL;
  *(_QWORD *)(v4 + 72) = 0LL;
  v145 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)p_app_name;
  v143 = (std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *)M_allocated_capacity;
LABEL_348:
  v100 = v145;
  v144 = 0LL;
  v101 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)&ResourceBox::tracing_mgr_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&ResourceBox::tracing_mgr_ptr >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&ResourceBox::tracing_mgr_ptr >> 3) + 0x7FFF8000) <= (unsigned __int8)((unsigned __int64)&ResourceBox::tracing_mgr_ptr & 7)
    || *(_BYTE *)((((unsigned __int64)&ResourceBox::tracing_mgr_ptr._M_ptr + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&ResourceBox::tracing_mgr_ptr._M_ptr + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)&ResourceBox::tracing_mgr_ptr._M_ptr + 7) & 7) )
  {
    goto LABEL_392;
  }
  ResourceBox::tracing_mgr_ptr._M_ptr = v143;
  v101 = &ResourceBox::tracing_mgr_ptr._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&ResourceBox::tracing_mgr_ptr._M_refcount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&ResourceBox::tracing_mgr_ptr._M_refcount >> 3) + 0x7FFF8000) <= ((unsigned __int8)&ResourceBox::tracing_mgr_ptr._M_refcount & 7)
    || *(_BYTE *)((((unsigned __int64)&ResourceBox::tracing_mgr_ptr._M_refcount._M_pi + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&ResourceBox::tracing_mgr_ptr._M_refcount._M_pi + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)&ResourceBox::tracing_mgr_ptr._M_refcount._M_pi + 7) & 7) )
  {
    goto LABEL_393;
  }
  p_app_name = (unsigned __int64)ResourceBox::tracing_mgr_ptr._M_refcount._M_pi;
  ResourceBox::tracing_mgr_ptr._M_refcount._M_pi = v100;
  if ( p_app_name )
  {
    v101 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(p_app_name + 8);
    if ( !&_pthread_key_create )
      goto LABEL_395;
    v102 = *(_BYTE *)(((unsigned __int64)v101 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v101 & 7) + 3) < v102 || !v102 )
    {
      v103 = _InterlockedExchangeAdd((volatile signed __int32 *)v101, 0xFFFFFFFF);
      goto LABEL_357;
    }
LABEL_394:
    __asan_report_store4(v101);
LABEL_395:
    v117 = *(_BYTE *)(((p_app_name + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((p_app_name + 8) & 7) + 3) >= v117 && v117 )
    {
      __asan_report_load4(p_app_name + 8);
      goto LABEL_399;
    }
    v103 = *(_DWORD *)(p_app_name + 8);
    *(_DWORD *)(p_app_name + 8) = v103 - 1;
LABEL_357:
    if ( v103 != 1 )
      goto LABEL_358;
LABEL_399:
    if ( *(_BYTE *)((p_app_name >> 3) + 0x7FFF8000) )
    {
      v118 = p_app_name;
      __asan_report_load8(p_app_name);
    }
    else
    {
      v118 = *(_QWORD *)p_app_name + 16LL;
      if ( !*(_BYTE *)((v118 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)p_app_name + 16LL))(p_app_name);
        v118 = p_app_name + 12;
        if ( !&_pthread_key_create )
          goto LABEL_412;
        v119 = *(_BYTE *)((v118 >> 3) + 0x7FFF8000);
        if ( (char)((v118 & 7) + 3) < v119 || !v119 )
        {
          v120 = _InterlockedExchangeAdd((volatile signed __int32 *)v118, 0xFFFFFFFF);
          goto LABEL_405;
        }
LABEL_411:
        __asan_report_store4(v118);
LABEL_412:
        v121 = *(_BYTE *)(((p_app_name + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((p_app_name + 12) & 7) + 3) >= v121 && v121 )
        {
          __asan_report_load4(p_app_name + 12);
          goto LABEL_416;
        }
        v120 = *(_DWORD *)(p_app_name + 12);
        *(_DWORD *)(p_app_name + 12) = v120 - 1;
LABEL_405:
        if ( v120 != 1 )
          goto LABEL_358;
        if ( !*(_BYTE *)((p_app_name >> 3) + 0x7FFF8000) )
        {
          v104 = *(_QWORD *)p_app_name + 24LL;
          if ( !*(_BYTE *)((v104 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)p_app_name + 24LL))(p_app_name);
            goto LABEL_358;
          }
LABEL_417:
          __asan_report_load8(v104);
          goto LABEL_418;
        }
LABEL_416:
        v104 = p_app_name;
        __asan_report_load8(p_app_name);
        goto LABEL_417;
      }
    }
    __asan_report_load8(v118);
    goto LABEL_411;
  }
LABEL_358:
  p_app_name = (unsigned __int64)v144;
  if ( !v144 )
    goto LABEL_364;
  v104 = (unsigned __int64)(v144 + 2);
  if ( !&_pthread_key_create )
    goto LABEL_419;
  v105 = *(_BYTE *)((v104 >> 3) + 0x7FFF8000);
  if ( (char)((v104 & 7) + 3) < v105 || !v105 )
  {
    v106 = _InterlockedExchangeAdd((volatile signed __int32 *)v104, 0xFFFFFFFF);
    goto LABEL_363;
  }
LABEL_418:
  __asan_report_store4(v104);
LABEL_419:
  v122 = *(_BYTE *)(((p_app_name + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((p_app_name + 8) & 7) + 3) >= v122 && v122 )
  {
    __asan_report_load4(p_app_name + 8);
    goto LABEL_423;
  }
  v106 = *(_DWORD *)(p_app_name + 8);
  *(_DWORD *)(p_app_name + 8) = v106 - 1;
LABEL_363:
  if ( v106 != 1 )
    goto LABEL_364;
LABEL_423:
  if ( *(_BYTE *)((p_app_name >> 3) + 0x7FFF8000) )
  {
    v123 = p_app_name;
    __asan_report_load8(p_app_name);
    goto LABEL_434;
  }
  v123 = *(_QWORD *)p_app_name + 16LL;
  if ( *(_BYTE *)((v123 >> 3) + 0x7FFF8000) )
  {
LABEL_434:
    __asan_report_load8(v123);
    goto LABEL_435;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)p_app_name + 16LL))(p_app_name);
  v123 = p_app_name + 12;
  if ( !&_pthread_key_create )
    goto LABEL_436;
  v124 = *(_BYTE *)((v123 >> 3) + 0x7FFF8000);
  if ( (char)((v123 & 7) + 3) < v124 || !v124 )
  {
    v125 = _InterlockedExchangeAdd((volatile signed __int32 *)v123, 0xFFFFFFFF);
    goto LABEL_429;
  }
LABEL_435:
  __asan_report_store4(v123);
LABEL_436:
  v126 = *(_BYTE *)(((p_app_name + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((p_app_name + 12) & 7) + 3) >= v126 && v126 )
  {
    __asan_report_load4(p_app_name + 12);
LABEL_440:
    p_argv = p_app_name;
    __asan_report_load8(p_app_name);
    goto LABEL_441;
  }
  v125 = *(_DWORD *)(p_app_name + 12);
  *(_DWORD *)(p_app_name + 12) = v125 - 1;
LABEL_429:
  if ( v125 != 1 )
    goto LABEL_364;
  if ( *(_BYTE *)((p_app_name >> 3) + 0x7FFF8000) )
    goto LABEL_440;
  p_argv = *(_QWORD *)p_app_name + 24LL;
  if ( *(_BYTE *)((p_argv >> 3) + 0x7FFF8000) )
  {
LABEL_441:
    __asan_report_load8(p_argv);
    goto LABEL_442;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)p_app_name + 24LL))(p_app_name);
LABEL_364:
  *(_BYTE *)(v4 + 48) = 0;
  p_argv = (unsigned __int64)&config->argv;
  if ( *(_BYTE *)(((unsigned __int64)&config->argv >> 3) + 0x7FFF8000) )
  {
LABEL_442:
    __asan_report_load8(p_argv);
LABEL_443:
    __asan_report_load4(p_argv);
    goto LABEL_444;
  }
  p_argv = (unsigned __int64)&config->argc;
  v108 = *(_BYTE *)(((unsigned __int64)&config->argc >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)config - 60) & 7) + 3) >= v108 && v108 )
    goto LABEL_443;
  v109 = AppBase::processOpt(this, config->argc, config->argv, (bool *)(v4 + 48));
LABEL_444:
  v8 = v109;
  if ( v109 || *(_BYTE *)(v4 + 48) )
  {
    common::milog::MiLogStream::MiLogStream(
      &v147,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "src/core_class/app_base.cpp",
      off_1AE3B960,
      191);
    common::milog::MiLogStream::operator()(&v147, "processOpt retcode=%d", v8);
    common::milog::MiLogStream::~MiLogStream(&v147);
    goto LABEL_487;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v127 = this;
    __asan_report_load8(this);
  }
  else
  {
    v127 = (AppBase *)(this->_vptr_AppBase + 4);
    if ( !*(_BYTE *)(((unsigned __int64)v127 >> 3) + 0x7FFF8000) )
    {
      v128 = (*((__int64 (__fastcall **)(AppBase *const))this->_vptr_AppBase + 4))(this);
      goto LABEL_452;
    }
  }
  v128 = __asan_report_load8(v127);
LABEL_452:
  if ( v128 )
    goto LABEL_486;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v129 = this;
    __asan_report_load8(this);
  }
  else
  {
    v129 = (AppBase *)(this->_vptr_AppBase + 6);
    if ( !*(_BYTE *)(((unsigned __int64)v129 >> 3) + 0x7FFF8000) )
    {
      v130 = (*((__int64 (__fastcall **)(AppBase *const))this->_vptr_AppBase + 6))(this);
      goto LABEL_458;
    }
  }
  v130 = __asan_report_load8(v129);
LABEL_458:
  if ( v130 )
    AppBase::notifyToStopServer(this);
  while ( 1 )
  {
    v131 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(this);
    }
    else
    {
      v131 = (AppBase *)(this->_vptr_AppBase + 7);
      if ( !*(_BYTE *)(((unsigned __int64)v131 >> 3) + 0x7FFF8000) )
      {
        v132 = (*((__int64 (__fastcall **)(AppBase *const))this->_vptr_AppBase + 7))(this);
        goto LABEL_465;
      }
    }
    v132 = __asan_report_load8(v131);
LABEL_465:
    if ( !v132 )
      break;
    v133 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(this);
    }
    else
    {
      v133 = (AppBase *)(this->_vptr_AppBase + 8);
      if ( !*(_BYTE *)(((unsigned __int64)v133 >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(AppBase *const))this->_vptr_AppBase + 8))(this);
        goto LABEL_471;
      }
    }
    __asan_report_load8(v133);
LABEL_471:
    sleep(1u);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v134 = this;
    __asan_report_load8(this);
  }
  else
  {
    v134 = (AppBase *)(this->_vptr_AppBase + 9);
    if ( !*(_BYTE *)(((unsigned __int64)v134 >> 3) + 0x7FFF8000) )
    {
      v135 = (*((__int64 (__fastcall **)(AppBase *const))this->_vptr_AppBase + 9))(this);
      goto LABEL_477;
    }
  }
  v135 = __asan_report_load8(v134);
LABEL_477:
  if ( v135 )
    v8 |= 1u;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v136 = this;
    __asan_report_load8(this);
    goto LABEL_483;
  }
  v136 = (AppBase *)(this->_vptr_AppBase + 10);
  if ( *(_BYTE *)(((unsigned __int64)v136 >> 3) + 0x7FFF8000) )
  {
LABEL_483:
    v137 = __asan_report_load8(v136);
    goto LABEL_484;
  }
  v137 = (*((__int64 (__fastcall **)(AppBase *const))this->_vptr_AppBase + 10))(this);
LABEL_484:
  if ( v137 )
    v8 |= 1u;
LABEL_486:
  ServiceBox::destroy();
  ResourceBox::destroy();
LABEL_487:
  if ( v148 == (char *)v4 )
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
  return v8;
};

// Line 247: range 0000000014E46C0C-0000000014E46D60
int32_t __fastcall AppBase::notifyToReloadConfig(AppBase *const this)
{
  char v1; // dl

  v1 = *(_BYTE *)(((unsigned __int64)&this->is_need_reload_config_ >> 3) + 0x7FFF8000);
  if ( v1 <= (((unsigned __int8)this - 55) & 7) && v1 )
  {
    __asan_report_store1(&this->is_need_reload_config_);
    return AppBase::notifyToStopServer((AppBase *const)&this->is_need_reload_config_);
  }
  else
  {
    this->is_need_reload_config_ = 1;
    return 0;
  }
};

// Line 267: range 0000000014E47562-0000000014E47944
std::optional<ServerConfig> *__fastcall AppBase::findServerConfig(
        std::optional<ServerConfig> *retstr,
        AppBase *const this,
        uint32_t host_id)
{
  std::optional<ServerConfig> *v3; // rbx
  unsigned __int64 v5; // r12
  std::mutex *p_anon_0; // r15
  unsigned __int64 v7; // r13
  std::mutex *p_server_config_mutex; // r14
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,ServerConfig>,std::_Select1st<std::pair<unsigned int const,ServerConfig> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ServerConfig> > >::iterator v9; // rax
  std::forward_iterator_tag v10; // cl
  std::_Rb_tree_header *p_M_parent; // rbp
  char v12; // dl
  uint32_t M_parent; // edx
  char v14; // al
  std::_Rb_tree_node_base::_Base_ptr *v15; // rax
  __int64 p_M_left; // rax
  __int64 v17; // rax
  std::string *p_inner_ip; // rdi
  char v19; // al
  char v20; // al
  char v21; // dl
  uint32_t v22; // ecx
  char v23; // dl
  std::_Rb_tree_node_base::_Base_ptr *v24; // rax
  __int64 p_M_right; // rax
  struct _Unwind_Exception *v26; // rbp
  std::mutex *M_p; // rdi
  int v29; // [rsp+Ch] [rbp-7Ch]
  char v30[120]; // [rsp+10h] [rbp-78h] BYREF

  v3 = retstr;
  v5 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_0(64LL);
    if ( v17 )
      v5 = v17;
  }
  p_anon_0 = (std::mutex *)(v5 + 64);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 4 11 host_id:266";
  *(_QWORD *)(v5 + 16) = AppBase::findServerConfig;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116348;
  *(_DWORD *)(v5 + 32) = host_id;
  p_server_config_mutex = &this->server_config_mutex_;
  if ( &_pthread_key_create )
  {
    v29 = pthread_mutex_lock(&this->server_config_mutex_._M_mutex);
    if ( v29 )
    {
      __asan_handle_no_return(&this->server_config_mutex_);
      std::__throw_system_error(v29);
    }
  }
  v9._M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,ServerConfig>,std::_Select1st<std::pair<unsigned int const,ServerConfig>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ServerConfig>>>::find(
                 &this->server_config_map_._M_t,
                 (const unsigned int *)(v5 + 32))._M_node;
  p_M_parent = &this->server_config_map_._M_t._M_impl.std::_Rb_tree_header;
  if ( (std::_Rb_tree_header *)v9._M_node == &this->server_config_map_._M_t._M_impl.std::_Rb_tree_header )
  {
    if ( *(char *)(((unsigned __int64)&retstr->_M_payload._M_engaged >> 3) + 0x7FFF8000) >= 0 )
    {
      retstr->_M_payload._M_engaged = 0;
      goto LABEL_55;
    }
    __asan_report_store1(&retstr->_M_payload._M_engaged);
    goto LABEL_19;
  }
  p_M_parent = (std::_Rb_tree_header *)&v9._M_node[1]._M_parent;
  v12 = *(_BYTE *)(((unsigned __int64)&v9._M_node[1]._M_parent >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
  {
LABEL_19:
    __asan_report_load4(p_M_parent);
LABEL_20:
    __asan_report_store4(retstr);
    goto LABEL_21;
  }
  M_parent = (uint32_t)v9._M_node[1]._M_parent;
  v14 = *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_20;
  retstr->_M_payload._M_payload._M_value.host_id = M_parent;
  retstr = (std::optional<ServerConfig> *)((char *)retstr + 8);
  p_anon_0 = (std::mutex *)&v3->_M_payload._M_payload._M_value.host_name._anon_0;
  if ( *(_BYTE *)(((unsigned __int64)&v3->_M_payload._M_payload._M_value.host_name >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8(retstr);
    goto LABEL_22;
  }
  v3->_M_payload._M_payload._M_value.host_name._M_dataplus._M_p = (std::string::pointer)p_anon_0;
  v15 = &p_M_parent->_M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&p_M_parent->_M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    p_M_left = __asan_report_load8(v15);
    goto LABEL_23;
  }
  p_M_left = (__int64)&p_M_parent->_M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&p_M_parent->_M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(p_M_left);
    goto LABEL_24;
  }
  std::string::_M_construct<char *>(
    (std::string *const)retstr,
    (char *)p_M_parent->_M_header._M_parent,
    (char *)p_M_parent->_M_header._M_left + (unsigned __int64)p_M_parent->_M_header._M_parent,
    v10);
LABEL_24:
  p_inner_ip = (std::string *)&p_M_parent[1];
  v19 = *(_BYTE *)(((unsigned __int64)&p_M_parent[1] >> 3) + 0x7FFF8000);
  if ( v19 && v19 <= 3 )
  {
    __asan_report_load4(p_inner_ip);
LABEL_39:
    __asan_report_store4(p_inner_ip);
LABEL_40:
    __asan_report_load4(p_inner_ip);
LABEL_41:
    __asan_report_store4(p_inner_ip);
    goto LABEL_42;
  }
  p_inner_ip = (std::string *)&v3->_M_payload._M_payload._M_value.inner_ip;
  v20 = *(_BYTE *)(((unsigned __int64)&v3->_M_payload._M_payload._M_value.inner_ip >> 3) + 0x7FFF8000);
  if ( v20 && v20 <= 3 )
    goto LABEL_39;
  v3->_M_payload._M_payload._M_value.inner_ip = p_M_parent[1]._M_header._M_color;
  p_inner_ip = (std::string *)(&p_M_parent[1]._M_header._M_color + 1);
  v21 = *(_BYTE *)(((unsigned __int64)(&p_M_parent[1]._M_header._M_color + 1) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)p_M_parent + 44) & 7) + 3) >= v21 && v21 )
    goto LABEL_40;
  v22 = *((_DWORD *)&p_M_parent[1]._M_header._M_color + 1);
  p_inner_ip = (std::string *)&v3->_M_payload._M_payload._M_value.outer_ip;
  v23 = *(_BYTE *)(((unsigned __int64)&v3->_M_payload._M_payload._M_value.outer_ip >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v3 + 44) & 7) + 3) >= v23 && v23 )
    goto LABEL_41;
  v3->_M_payload._M_payload._M_value.outer_ip = v22;
  p_inner_ip = (std::string *)&p_M_parent[1]._M_header._M_parent;
  if ( *(char *)(((unsigned __int64)&p_M_parent[1]._M_header._M_parent >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_42:
    __asan_report_load1(p_inner_ip);
    goto LABEL_43;
  }
  p_inner_ip = (std::string *)&v3->_M_payload._M_payload._M_value.use_domain_name;
  if ( *(char *)(((unsigned __int64)&v3->_M_payload._M_payload._M_value.use_domain_name >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_43:
    __asan_report_store1(p_inner_ip);
    goto LABEL_44;
  }
  v3->_M_payload._M_payload._M_value.use_domain_name = (bool)p_M_parent[1]._M_header._M_parent;
  p_inner_ip = &v3->_M_payload._M_payload._M_value.domain_name;
  if ( *(_BYTE *)(((unsigned __int64)&v3->_M_payload._M_payload._M_value.domain_name >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_store8(p_inner_ip);
    goto LABEL_45;
  }
  v3->_M_payload._M_payload._M_value.domain_name._M_dataplus._M_p = v3->_M_payload._M_payload._M_value.domain_name._anon_0._M_local_buf;
  v24 = &p_M_parent[1]._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&p_M_parent[1]._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    p_M_right = __asan_report_load8(v24);
    goto LABEL_46;
  }
  p_M_right = (__int64)&p_M_parent[1]._M_header._M_right;
  if ( *(_BYTE *)(((unsigned __int64)&p_M_parent[1]._M_header._M_right >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    v26 = (struct _Unwind_Exception *)__asan_report_load8(p_M_right);
    if ( *(_BYTE *)(((unsigned __int64)&v3->_M_payload._M_payload._M_value.host_name >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v3->_M_payload._M_payload._M_value.host_name);
    M_p = (std::mutex *)v3->_M_payload._M_payload._M_value.host_name._M_dataplus._M_p;
    if ( p_anon_0 != M_p )
      operator delete(M_p);
LABEL_50:
    if ( &_pthread_key_create )
    {
      M_p = &this->server_config_mutex_;
      pthread_mutex_unlock(&p_server_config_mutex->_M_mutex);
    }
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v26);
  }
  std::string::_M_construct<char *>(
    p_inner_ip,
    (char *)p_M_parent[1]._M_header._M_left,
    (char *)p_M_parent[1]._M_header._M_right + (unsigned __int64)p_M_parent[1]._M_header._M_left,
    (std::forward_iterator_tag)v22);
  M_p = (std::mutex *)&v3->_M_payload._M_engaged;
  if ( *(char *)(((unsigned __int64)&v3->_M_payload._M_engaged >> 3) + 0x7FFF8000) < 0 )
  {
    v26 = (struct _Unwind_Exception *)__asan_report_store1(M_p);
    goto LABEL_50;
  }
  v3->_M_payload._M_engaged = 1;
LABEL_55:
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_server_config_mutex->_M_mutex);
  if ( v30 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v3;
};

// Line 289: range 0000000014E46D62-0000000014E46E15
uint32_t __fastcall AppBase::getHostId(AppBase *const this)
{
  char v1; // al

  v1 = *(_BYTE *)(((unsigned __int64)&this->app_id_ >> 3) + 0x7FFF8000);
  if ( v1 && v1 <= 3 )
  {
    __asan_report_load4(&this->app_id_);
    JUMPOUT(0x14E46D95LL);
  }
  return AppBase::getHostId(this, this->app_id_);
};

// Line 310: range 0000000014E47D66-0000000014E48D05
int32_t __fastcall AppBase::processOpt(AppBase *const this, int a2, char **a3, int opt, bool *is_exit)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // r12
  std::string *p_app_name; // rdi
  char v11; // al
  bool *v13; // rdx
  uint32_t AppId; // ebp
  uint32_t *p_app_id; // rdi
  char v16; // al
  char *v17; // rbx
  std::string app_id_str; // [rsp+0h] [rbp-38h] BYREF
  __int64 v19; // [rsp+20h] [rbp-18h]
  __int64 v20; // [rsp+28h] [rbp-10h]
  __int64 v21; // [rsp+30h] [rbp-8h]

  if ( opt == -1 )
    return 0;
  v21 = v7;
  v20 = v6;
  v19 = v5;
  if ( opt == 105 )
  {
LABEL_20:
    if ( *(_BYTE *)(((unsigned __int64)&optarg >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&optarg);
    }
    else
    {
      is_exit = (bool *)optarg;
      app_id_str._M_dataplus._M_p = app_id_str._anon_0._M_local_buf;
      if ( optarg )
      {
        v13 = &is_exit[strlen(optarg)];
        goto LABEL_23;
      }
    }
    v13 = is_exit - 1;
LABEL_23:
    std::string::_M_construct<char const*>(
      &app_id_str,
      (const char *)is_exit,
      (const char *)v13,
      (std::forward_iterator_tag)opt);
    AppId = AppBase::getAppId(this, app_id_str);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)app_id_str._M_dataplus._M_p != &app_id_str._anon_0 )
      operator delete(app_id_str._M_dataplus._M_p);
    if ( AppId )
    {
      p_app_id = &this->app_id_;
      v16 = *(_BYTE *)(((unsigned __int64)&this->app_id_ >> 3) + 0x7FFF8000);
      if ( !v16 || v16 > 3 )
      {
        this->app_id_ = AppId;
        return 0;
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&optarg >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(&optarg);
      }
      else
      {
        v17 = optarg;
        common::tools::TimeUtils::getNowStr[abi:cxx11](&app_id_str);
        printf("%s generate app id failed, opt=%s\n", app_id_str._M_dataplus._M_p, v17);
      }
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)app_id_str._M_dataplus._M_p != &app_id_str._anon_0 )
        operator delete(app_id_str._M_dataplus._M_p);
      p_app_id = (uint32_t *)&stdout;
      if ( !*(_BYTE *)(((unsigned __int64)&stdout >> 3) + 0x7FFF8000) )
      {
        fflush(stdout);
        return -1;
      }
      __asan_report_load8(&stdout);
    }
    __asan_report_store4(p_app_id);
    return 0;
  }
  if ( opt == 118 )
  {
    p_app_name = &this->app_name_;
    if ( *(_BYTE *)(((unsigned __int64)p_app_name >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_app_name);
    }
    else
    {
      printf("%s debug\n", this->app_name_._M_dataplus._M_p);
      p_app_name = &this->game_version_;
      if ( !*(_BYTE *)(((unsigned __int64)&this->game_version_ >> 3) + 0x7FFF8000) )
      {
        printf("  game_version  %s\n", this->game_version_._M_dataplus._M_p);
        p_app_name = &this->code_version_;
        if ( !*(_BYTE *)(((unsigned __int64)&this->code_version_ >> 3) + 0x7FFF8000) )
        {
          printf("  code_version  %s\n", this->code_version_._M_dataplus._M_p);
          p_app_name = &this->rely_version_;
          if ( !*(_BYTE *)(((unsigned __int64)&this->rely_version_ >> 3) + 0x7FFF8000) )
          {
            printf("  rely_version  %s\n", this->rely_version_._M_dataplus._M_p);
            p_app_name = &this->branch_name_;
            if ( !*(_BYTE *)(((unsigned __int64)&this->branch_name_ >> 3) + 0x7FFF8000) )
            {
              printf("  branch_name   %s\n", this->branch_name_._M_dataplus._M_p);
              p_app_name = &this->built_time_;
              if ( !*(_BYTE *)(((unsigned __int64)&this->built_time_ >> 3) + 0x7FFF8000) )
              {
                printf("  built_time    %s\n", this->built_time_._M_dataplus._M_p);
                v11 = *(_BYTE *)(((unsigned __int64)is_exit >> 3) + 0x7FFF8000);
                if ( v11 > ((unsigned __int8)is_exit & 7) || !v11 )
                {
                  *is_exit = 1;
                  return 0;
                }
                goto LABEL_19;
              }
LABEL_18:
              __asan_report_load8(p_app_name);
LABEL_19:
              __asan_report_store1(is_exit);
              goto LABEL_20;
            }
LABEL_17:
            __asan_report_load8(p_app_name);
            goto LABEL_18;
          }
LABEL_16:
          __asan_report_load8(p_app_name);
          goto LABEL_17;
        }
LABEL_15:
        __asan_report_load8(p_app_name);
        goto LABEL_16;
      }
    }
    __asan_report_load8(p_app_name);
    goto LABEL_15;
  }
  return 0;
};

// Line 357: range 0000000014E47298-0000000014E4755D
int32_t __fastcall AppBase::processSignal(AppBase *const this, int signal)
{
  time_t TimeOffset; // rax
  std::forward_iterator_tag v3; // cl
  std::string v5; // [rsp+0h] [rbp-38h] BYREF

  switch ( signal )
  {
    case 1:
      AppBase::notifyToReloadConfig(this);
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&v5,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "src/core_class/app_base.cpp",
        "processSignal",
        383);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&v5,
        "catch sig SIGHUP %d, reload config now",
        (unsigned int)signal);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v5);
      break;
    case 2:
    case 15:
      AppBase::notifyToStopServer(this);
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&v5,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "src/core_class/app_base.cpp",
        "processSignal",
        374);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&v5,
        "catch signal %d, start to stop server",
        (unsigned int)signal);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v5);
      break;
    case 10:
      AppBase::notifyToFreeTcmallocFreeListMemory(this);
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&v5,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "src/core_class/app_base.cpp",
        "processSignal",
        391);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&v5,
        "catch sig SIGUSR1 %d, release tcmalloc freelist memory to os now",
        (unsigned int)signal);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v5);
      break;
    case 14:
      common::tools::TimeUtils::getNowStr[abi:cxx11](&v5);
      printf("cur_time:\t%s\n", v5._M_dataplus._M_p);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v5._M_dataplus._M_p != &v5._anon_0 )
        operator delete(v5._M_dataplus._M_p);
      TimeOffset = common::tools::TimeUtils::getTimeOffset();
      printf("time_offset:\t%ld\n", TimeOffset);
      if ( *(_BYTE *)(((unsigned __int64)&stdout >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(&stdout);
      }
      else
      {
        fflush(stdout);
        v5._M_dataplus._M_p = v5._anon_0._M_local_buf;
        std::string::_M_construct<char const*>(&v5, &byte_1AE3A808[-8], byte_1AE3A808, v3);
        common::tools::perf::MemoryPerf::output(&v5);
      }
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v5._M_dataplus._M_p != &v5._anon_0 )
        operator delete(v5._M_dataplus._M_p);
      break;
    default:
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&v5,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "src/core_class/app_base.cpp",
        "processSignal",
        396);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&v5,
        "skip signal %d",
        (unsigned int)signal);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v5);
      break;
  }
  return 0;
};

// Line 405: range 0000000014E47946-0000000014E47D61
__int64 __fastcall AppBase::getAppId(
        AppBase *const this,
        unsigned __int64 a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  unsigned __int64 v5; // rbp
  char *v6; // rbx
  _DWORD *v7; // r13
  char *v8; // rsi
  unsigned __int64 v9; // rdi
  std::forward_iterator_tag v10; // cl
  __int64 v11; // rax
  int32_t v12; // r12d
  unsigned __int64 v13; // rdi
  char v14; // dl
  unsigned __int64 v15; // rdx
  char v16; // cl
  unsigned __int64 v17; // rdx
  char v18; // cl
  unsigned __int64 v19; // rdx
  char v20; // cl
  unsigned int v21; // r12d
  void *v22; // rdi
  struct _Unwind_Exception *v24; // rax
  struct _Unwind_Exception *v25; // rbp
  void *v26; // rdi
  std::string::pointer M_p; // rdi
  std::string v28; // [rsp+0h] [rbp-E8h] BYREF
  std::string sep; // [rsp+20h] [rbp-C8h] BYREF
  char v30[168]; // [rsp+40h] [rbp-A8h] BYREF

  v5 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(128LL);
    if ( v11 )
      v5 = v11;
  }
  v6 = (char *)(v5 + 128);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 6 app_id 64 24 7 num_vec";
  *(_QWORD *)(v5 + 16) = AppBase::getAppId;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218103808;
  v7[536862723] = -202116109;
  v28._M_dataplus._M_p = v28._anon_0._M_local_buf;
  if ( *(_BYTE *)((a2 >> 3) + 0x7FFF8000) )
  {
    v9 = a2;
    __asan_report_load8(a2);
  }
  else
  {
    v8 = *(char **)a2;
    v9 = a2 + 8;
    if ( !*(_BYTE *)(((a2 + 8) >> 3) + 0x7FFF8000) )
    {
      std::string::_M_construct<char *>(&v28, v8, &v8[*(_QWORD *)(a2 + 8)], a4);
      *(_QWORD *)(v5 + 64) = 0LL;
      *(_QWORD *)(v5 + 72) = 0LL;
      *(_QWORD *)(v5 + 80) = 0LL;
      sep._M_dataplus._M_p = sep._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&sep, &byte_1AE3AA41[-1], byte_1AE3AA41, v10);
      goto LABEL_9;
    }
  }
  __asan_report_load8(v9);
LABEL_9:
  v12 = common::tools::StringUtils::splitToList<unsigned int>(&v28, &sep, (std::vector<unsigned int> *)(v5 + 64), 0);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)sep._M_dataplus._M_p != &sep._anon_0 )
    operator delete(sep._M_dataplus._M_p);
  if ( v12 )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&sep,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "../common/tools/include/app_id_utils.h",
      "getAppId",
      48);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&sep,
      "invalid app_id: %s\n",
      v28._M_dataplus._M_p);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&sep);
    v21 = 0;
  }
  else
  {
    v13 = *(_QWORD *)(v5 + 64);
    if ( *(_QWORD *)(v5 + 72) - v13 == 16 )
    {
      *(_DWORD *)(v5 + 48) = 0;
      v14 = *(_BYTE *)((v13 >> 3) + 0x7FFF8000);
      if ( (char)((v13 & 7) + 3) >= v14 && v14 )
      {
        __asan_report_load4(v13);
      }
      else
      {
        *(_WORD *)(v5 + 48) = *(_WORD *)v13 & 0x3FF | *(_WORD *)(v5 + 48) & 0xFC00;
        v15 = v13 + 4;
        v16 = *(_BYTE *)(((v13 + 4) >> 3) + 0x7FFF8000);
        if ( (char)(((v13 + 4) & 7) + 3) < v16 || !v16 )
        {
          *(_BYTE *)(v5 + 49) = (4 * (*(_BYTE *)(v13 + 4) & 0xF)) | *(_BYTE *)(v5 + 49) & 0xC3;
          v17 = v13 + 8;
          v18 = *(_BYTE *)(((v13 + 8) >> 3) + 0x7FFF8000);
          if ( (char)(((v13 + 8) & 7) + 3) < v18 || !v18 )
          {
            *(_DWORD *)(v5 + 48) = ((*(_DWORD *)(v13 + 8) & 0x3FFF) << 14) | *(_DWORD *)(v5 + 48) & 0xF0003FFF;
            v19 = v13 + 12;
            v20 = *(_BYTE *)(((v13 + 12) >> 3) + 0x7FFF8000);
            if ( (char)(((v13 + 12) & 7) + 3) < v20 || !v20 )
            {
              *(_BYTE *)(v5 + 51) = (16 * *(_BYTE *)(v13 + 12)) | *(_BYTE *)(v5 + 51) & 0xF;
              v21 = *(_DWORD *)(v5 + 48);
              goto LABEL_22;
            }
LABEL_34:
            __asan_report_load4(v19);
            v25 = v24;
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)sep._M_dataplus._M_p != &sep._anon_0 )
              operator delete(sep._M_dataplus._M_p);
            v26 = (void *)*((_QWORD *)v6 - 8);
            if ( v26 )
              operator delete(v26);
            M_p = v28._M_dataplus._M_p;
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v28._M_dataplus._M_p != &v28._anon_0 )
              operator delete(v28._M_dataplus._M_p);
            __asan_handle_no_return(M_p);
            _Unwind_Resume(v25);
          }
LABEL_33:
          __asan_report_load4(v17);
          goto LABEL_34;
        }
      }
      __asan_report_load4(v15);
      goto LABEL_33;
    }
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&sep,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "../common/tools/include/app_id_utils.h",
      "getAppId",
      54);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&sep,
      "invalid app_id: %s\n",
      v28._M_dataplus._M_p);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&sep);
    v21 = 0;
  }
LABEL_22:
  v22 = *(void **)(v5 + 64);
  if ( v22 )
    operator delete(v22);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v28._M_dataplus._M_p != &v28._anon_0 )
    operator delete(v28._M_dataplus._M_p);
  if ( v30 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v21;
};

// Line 437: range 0000000014E4D750-0000000014E4FF05
int32_t __fastcall AppBase::init(AppBase *const this)
{
  AppBase *v1; // r12
  unsigned __int64 v2; // rbx
  char *v3; // r13
  _DWORD *v4; // r14
  std::string *p_server_config_file; // r15
  __int64 v6; // rax
  std::forward_iterator_tag v7; // cl
  std::forward_iterator_tag v8; // cl
  std::forward_iterator_tag v9; // cl
  std::forward_iterator_tag v10; // cl
  std::forward_iterator_tag v11; // cl
  std::forward_iterator_tag v12; // cl
  std::forward_iterator_tag v13; // cl
  std::forward_iterator_tag v14; // cl
  std::forward_iterator_tag v15; // cl
  std::forward_iterator_tag v16; // cl
  std::forward_iterator_tag v17; // cl
  std::forward_iterator_tag v18; // cl
  std::forward_iterator_tag v19; // cl
  std::forward_iterator_tag v20; // cl
  std::forward_iterator_tag v21; // cl
  std::forward_iterator_tag v22; // cl
  std::forward_iterator_tag v23; // cl
  std::forward_iterator_tag v24; // cl
  std::forward_iterator_tag v25; // cl
  std::forward_iterator_tag v26; // cl
  std::forward_iterator_tag v27; // cl
  std::forward_iterator_tag v28; // cl
  std::forward_iterator_tag v29; // cl
  std::forward_iterator_tag v30; // cl
  std::forward_iterator_tag v31; // cl
  std::forward_iterator_tag v32; // cl
  std::forward_iterator_tag v33; // cl
  std::forward_iterator_tag v34; // cl
  std::forward_iterator_tag v35; // cl
  std::forward_iterator_tag v36; // cl
  std::forward_iterator_tag v37; // cl
  std::forward_iterator_tag v38; // cl
  std::forward_iterator_tag v39; // cl
  std::forward_iterator_tag v40; // cl
  std::forward_iterator_tag v41; // cl
  std::forward_iterator_tag v42; // cl
  std::forward_iterator_tag v43; // cl
  std::forward_iterator_tag v44; // cl
  std::forward_iterator_tag v45; // cl
  std::forward_iterator_tag v46; // cl
  std::forward_iterator_tag v47; // cl
  std::forward_iterator_tag v48; // cl
  std::forward_iterator_tag v49; // cl
  std::forward_iterator_tag v50; // cl
  std::forward_iterator_tag v51; // cl
  std::forward_iterator_tag v52; // cl
  std::forward_iterator_tag v53; // cl
  std::forward_iterator_tag v54; // cl
  std::forward_iterator_tag v55; // cl
  std::forward_iterator_tag v56; // cl
  std::forward_iterator_tag v57; // cl
  std::forward_iterator_tag v58; // cl
  std::forward_iterator_tag v59; // cl
  std::forward_iterator_tag v60; // cl
  std::forward_iterator_tag v61; // cl
  std::forward_iterator_tag v62; // cl
  std::forward_iterator_tag v63; // cl
  std::forward_iterator_tag v64; // cl
  std::forward_iterator_tag v65; // cl
  std::forward_iterator_tag v66; // cl
  int v67; // eax
  std::forward_iterator_tag v68; // cl
  unsigned __int64 v69; // rdi
  void *v70; // rdi
  size_t v71; // rax
  size_t v72; // r15
  int32_t v73; // r15d
  char v75; // al
  char v76; // al
  int32_t v77; // eax
  unsigned __int64 v78; // rdi
  int v79; // eax
  uint32_t *p_max_reload_config_random_time; // rdi
  char v81; // dl
  unsigned int v82; // eax
  char v83; // dl
  std::string::pointer v84; // rdi
  void *v85; // rdi
  char *v86; // rax
  std::string::pointer M_p; // rsi
  std::string::size_type v88; // rdi
  void *v89; // rdi
  std::string::pointer v90; // rdi
  void *v91; // rdi
  char v92; // dl
  std::string::pointer p_next_reload_config_random_time; // rdi
  void *v94; // rdi
  char v95; // dl
  struct _Unwind_Exception *v96; // rax
  double v97; // xmm0_8
  __int64 v98; // rdx
  struct _Unwind_Exception *v99; // rbx
  __int64 *v100; // r15
  __int64 v101; // rax
  const char *v102; // rax
  std::string v103; // [rsp-10h] [rbp-120h]
  std::string v104; // [rsp-10h] [rbp-120h]
  std::string v105; // [rsp-10h] [rbp-120h]
  std::string v106; // [rsp-10h] [rbp-120h]
  std::string v107; // [rsp-10h] [rbp-120h]
  std::string v108; // [rsp-10h] [rbp-120h]
  std::string v109; // [rsp-10h] [rbp-120h]
  std::string v110; // [rsp-10h] [rbp-120h]
  std::string v111; // [rsp-10h] [rbp-120h]
  std::string v112; // [rsp-10h] [rbp-120h]
  std::string v113; // [rsp-10h] [rbp-120h]
  std::string v114; // [rsp-10h] [rbp-120h]
  std::string v115; // [rsp-10h] [rbp-120h]
  std::string v116; // [rsp-10h] [rbp-120h]
  std::string v117; // [rsp-10h] [rbp-120h]
  std::string v118; // [rsp-10h] [rbp-120h]
  std::string v119; // [rsp-10h] [rbp-120h]
  std::string v120; // [rsp-10h] [rbp-120h]
  std::string v121; // [rsp-10h] [rbp-120h]
  std::string v122; // [rsp-10h] [rbp-120h]
  size_t n; // [rsp+0h] [rbp-110h]
  size_t v124; // [rsp+8h] [rbp-108h]
  size_t v125; // [rsp+8h] [rbp-108h]
  size_t v126; // [rsp+8h] [rbp-108h]
  std::string v127; // [rsp+10h] [rbp-100h] BYREF
  std::string v128; // [rsp+30h] [rbp-E0h] BYREF
  std::string v129; // [rsp+50h] [rbp-C0h] BYREF
  unsigned __int64 v130; // [rsp+58h] [rbp-B8h]
  std::string child_name; // [rsp+60h] [rbp-B0h] BYREF
  char v132[144]; // [rsp+80h] [rbp-90h] BYREF

  v1 = this;
  v2 = (unsigned __int64)v132;
  v127._M_string_length = (std::string::size_type)v132;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v2 = v6;
  }
  v3 = (char *)(v2 + 96);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 6 pt:439 64 8 10 log_pt:491";
  *(_QWORD *)(v2 + 16) = AppBase::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v127._M_dataplus._M_p = (std::string::pointer)(v2 + 32);
  common::tools::PTree::PTree((common::tools::PTree *const)(v2 + 32));
  p_server_config_file = &this->server_config_file_;
  common::tools::PTree::readXml((common::tools::PTree *const)(v2 + 32), &this->server_config_file_);
  common::tools::TimeUtils::setTimeOffsetFromFile("../time_offset.txt");
  signal(1, AppBase::pushSignal);
  signal(2, AppBase::pushSignal);
  signal(13, AppBase::pushSignal);
  signal(17, AppBase::pushSignal);
  signal(14, AppBase::pushSignal);
  signal(10, AppBase::pushSignal);
  signal(3, AppBase::pushSignal);
  signal(15, AppBase::pushSignal);
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, byte_1AE3B2E0, byte_1AE3B2E0, v7);
  v128._anon_0._M_allocated_capacity = (std::string::size_type)&v129;
  std::string::_M_construct<char const*>((std::string *const)&v128._anon_0, &byte_1AE3BEA7[-7], byte_1AE3BEA7, v8);
  v127._anon_0._M_allocated_capacity = (std::string::size_type)&v128;
  std::string::_M_construct<char const*>((std::string *const)&v127._anon_0, &byte_1AE3BEE3[-3], byte_1AE3BEE3, v9);
  v103._M_dataplus._M_p = 0LL;
  common::milog::MiLog::addLogLevel(
    &common::milog::MiLogDefault::default_log_obj_,
    0xBu,
    v103,
    v127,
    v128,
    (common::milog::LogColor)&v127._anon_0,
    (common::milog::LogFormat)&v128._anon_0);
  if ( (std::string *)v127._anon_0._M_allocated_capacity != &v128 )
    operator delete((void *)v127._anon_0._M_allocated_capacity);
  if ( (std::string *)v128._anon_0._M_allocated_capacity != &v129 )
    operator delete((void *)v128._anon_0._M_allocated_capacity);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, byte_1AE3B2E0, byte_1AE3B2E0, v10);
  v128._anon_0._M_allocated_capacity = (std::string::size_type)&v129;
  std::string::_M_construct<char const*>((std::string *const)&v128._anon_0, &byte_1AE3BF2A[-10], byte_1AE3BF2A, v11);
  v127._anon_0._M_allocated_capacity = (std::string::size_type)&v128;
  std::string::_M_construct<char const*>((std::string *const)&v127._anon_0, &byte_1AE3BF66[-6], byte_1AE3BF66, v12);
  v104._M_dataplus._M_p = (std::string::pointer)1;
  common::milog::MiLog::addLogLevel(
    &common::milog::MiLogDefault::default_log_obj_,
    0xCu,
    v104,
    v127,
    v128,
    (common::milog::LogColor)&v127._anon_0,
    (common::milog::LogFormat)&v128._anon_0);
  if ( (std::string *)v127._anon_0._M_allocated_capacity != &v128 )
    operator delete((void *)v127._anon_0._M_allocated_capacity);
  if ( (std::string *)v128._anon_0._M_allocated_capacity != &v129 )
    operator delete((void *)v128._anon_0._M_allocated_capacity);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, byte_1AE3B2E0, byte_1AE3B2E0, v13);
  v128._anon_0._M_allocated_capacity = (std::string::size_type)&v129;
  std::string::_M_construct<char const*>((std::string *const)&v128._anon_0, byte_1AE3B2E0, byte_1AE3B2E0, v14);
  v127._anon_0._M_allocated_capacity = (std::string::size_type)&v128;
  std::string::_M_construct<char const*>((std::string *const)&v127._anon_0, &byte_1AE3BFA3[-3], byte_1AE3BFA3, v15);
  v105._M_dataplus._M_p = (std::string::pointer)1;
  common::milog::MiLog::addLogLevel(
    &common::milog::MiLogDefault::default_log_obj_,
    0xDu,
    v105,
    v127,
    v128,
    (common::milog::LogColor)&v127._anon_0,
    (common::milog::LogFormat)&v128._anon_0);
  if ( (std::string *)v127._anon_0._M_allocated_capacity != &v128 )
    operator delete((void *)v127._anon_0._M_allocated_capacity);
  if ( (std::string *)v128._anon_0._M_allocated_capacity != &v129 )
    operator delete((void *)v128._anon_0._M_allocated_capacity);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, byte_1AE3B2E0, byte_1AE3B2E0, v16);
  v128._anon_0._M_allocated_capacity = (std::string::size_type)&v129;
  std::string::_M_construct<char const*>((std::string *const)&v128._anon_0, byte_1AE3B2E0, byte_1AE3B2E0, v17);
  v127._anon_0._M_allocated_capacity = (std::string::size_type)&v128;
  std::string::_M_construct<char const*>((std::string *const)&v127._anon_0, &byte_1AE3BFEB[-11], byte_1AE3BFEB, v18);
  v106._M_dataplus._M_p = (std::string::pointer)2;
  common::milog::MiLog::addLogLevel(
    &common::milog::MiLogDefault::default_log_obj_,
    0xEu,
    v106,
    v127,
    v128,
    (common::milog::LogColor)&v127._anon_0,
    (common::milog::LogFormat)&v128._anon_0);
  if ( (std::string *)v127._anon_0._M_allocated_capacity != &v128 )
    operator delete((void *)v127._anon_0._M_allocated_capacity);
  if ( (std::string *)v128._anon_0._M_allocated_capacity != &v129 )
    operator delete((void *)v128._anon_0._M_allocated_capacity);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, byte_1AE3B2E0, byte_1AE3B2E0, v19);
  v128._anon_0._M_allocated_capacity = (std::string::size_type)&v129;
  std::string::_M_construct<char const*>((std::string *const)&v128._anon_0, &byte_1AE3C024[-4], byte_1AE3C024, v20);
  v127._anon_0._M_allocated_capacity = (std::string::size_type)&v128;
  std::string::_M_construct<char const*>((std::string *const)&v127._anon_0, &byte_1AE3C068[-8], byte_1AE3C068, v21);
  v107._M_dataplus._M_p = 0LL;
  common::milog::MiLog::addLogLevel(
    &common::milog::MiLogDefault::default_log_obj_,
    0xFu,
    v107,
    v127,
    v128,
    (common::milog::LogColor)&v127._anon_0,
    (common::milog::LogFormat)&v128._anon_0);
  if ( (std::string *)v127._anon_0._M_allocated_capacity != &v128 )
    operator delete((void *)v127._anon_0._M_allocated_capacity);
  if ( (std::string *)v128._anon_0._M_allocated_capacity != &v129 )
    operator delete((void *)v128._anon_0._M_allocated_capacity);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, byte_1AE3B2E0, byte_1AE3B2E0, v22);
  v128._anon_0._M_allocated_capacity = (std::string::size_type)&v129;
  std::string::_M_construct<char const*>((std::string *const)&v128._anon_0, &byte_1AE3C0A7[-7], byte_1AE3C0A7, v23);
  v127._anon_0._M_allocated_capacity = (std::string::size_type)&v128;
  std::string::_M_construct<char const*>((std::string *const)&v127._anon_0, &byte_1AE3C0EB[-11], byte_1AE3C0EB, v24);
  v108._M_dataplus._M_p = 0LL;
  common::milog::MiLog::addLogLevel(
    &common::milog::MiLogDefault::default_log_obj_,
    0x10u,
    v108,
    v127,
    v128,
    (common::milog::LogColor)&v127._anon_0,
    (common::milog::LogFormat)&v128._anon_0);
  if ( (std::string *)v127._anon_0._M_allocated_capacity != &v128 )
    operator delete((void *)v127._anon_0._M_allocated_capacity);
  if ( (std::string *)v128._anon_0._M_allocated_capacity != &v129 )
    operator delete((void *)v128._anon_0._M_allocated_capacity);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, byte_1AE3B2E0, byte_1AE3B2E0, v25);
  v128._anon_0._M_allocated_capacity = (std::string::size_type)&v129;
  std::string::_M_construct<char const*>((std::string *const)&v128._anon_0, &byte_1AE3C12D[-13], byte_1AE3C12D, v26);
  v127._anon_0._M_allocated_capacity = (std::string::size_type)&v128;
  std::string::_M_construct<char const*>((std::string *const)&v127._anon_0, &byte_1AE3C12D[-13], byte_1AE3C12D, v27);
  v109._M_dataplus._M_p = 0LL;
  common::milog::MiLog::addLogLevel(
    &common::milog::MiLogDefault::default_log_obj_,
    0x1Cu,
    v109,
    v127,
    v128,
    (common::milog::LogColor)&v127._anon_0,
    (common::milog::LogFormat)&v128._anon_0);
  if ( (std::string *)v127._anon_0._M_allocated_capacity != &v128 )
    operator delete((void *)v127._anon_0._M_allocated_capacity);
  if ( (std::string *)v128._anon_0._M_allocated_capacity != &v129 )
    operator delete((void *)v128._anon_0._M_allocated_capacity);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, byte_1AE3B2E0, byte_1AE3B2E0, v28);
  v128._anon_0._M_allocated_capacity = (std::string::size_type)&v129;
  std::string::_M_construct<char const*>((std::string *const)&v128._anon_0, &byte_1AE3C165[-5], byte_1AE3C165, v29);
  v127._anon_0._M_allocated_capacity = (std::string::size_type)&v128;
  std::string::_M_construct<char const*>((std::string *const)&v127._anon_0, &byte_1AE3C1AB[-11], byte_1AE3C1AB, v30);
  v110._M_dataplus._M_p = 0LL;
  common::milog::MiLog::addLogLevel(
    &common::milog::MiLogDefault::default_log_obj_,
    0x11u,
    v110,
    v127,
    v128,
    (common::milog::LogColor)&v127._anon_0,
    (common::milog::LogFormat)&v128._anon_0);
  if ( (std::string *)v127._anon_0._M_allocated_capacity != &v128 )
    operator delete((void *)v127._anon_0._M_allocated_capacity);
  if ( (std::string *)v128._anon_0._M_allocated_capacity != &v129 )
    operator delete((void *)v128._anon_0._M_allocated_capacity);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, byte_1AE3B2E0, byte_1AE3B2E0, v31);
  v128._anon_0._M_allocated_capacity = (std::string::size_type)&v129;
  std::string::_M_construct<char const*>((std::string *const)&v128._anon_0, &byte_1AE3C024[-4], byte_1AE3C024, v32);
  v127._anon_0._M_allocated_capacity = (std::string::size_type)&v128;
  std::string::_M_construct<char const*>((std::string *const)&v127._anon_0, &byte_1AE3C1EA[-10], byte_1AE3C1EA, v33);
  v111._M_dataplus._M_p = 0LL;
  common::milog::MiLog::addLogLevel(
    &common::milog::MiLogDefault::default_log_obj_,
    0x12u,
    v111,
    v127,
    v128,
    (common::milog::LogColor)&v127._anon_0,
    (common::milog::LogFormat)&v128._anon_0);
  if ( (std::string *)v127._anon_0._M_allocated_capacity != &v128 )
    operator delete((void *)v127._anon_0._M_allocated_capacity);
  if ( (std::string *)v128._anon_0._M_allocated_capacity != &v129 )
    operator delete((void *)v128._anon_0._M_allocated_capacity);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, byte_1AE3B2E0, byte_1AE3B2E0, v34);
  v128._anon_0._M_allocated_capacity = (std::string::size_type)&v129;
  std::string::_M_construct<char const*>((std::string *const)&v128._anon_0, &byte_1AE3C0A7[-7], byte_1AE3C0A7, v35);
  v127._anon_0._M_allocated_capacity = (std::string::size_type)&v128;
  std::string::_M_construct<char const*>((std::string *const)&v127._anon_0, &byte_1AE3C22D[-13], byte_1AE3C22D, v36);
  v112._M_dataplus._M_p = 0LL;
  common::milog::MiLog::addLogLevel(
    &common::milog::MiLogDefault::default_log_obj_,
    0x13u,
    v112,
    v127,
    v128,
    (common::milog::LogColor)&v127._anon_0,
    (common::milog::LogFormat)&v128._anon_0);
  if ( (std::string *)v127._anon_0._M_allocated_capacity != &v128 )
    operator delete((void *)v127._anon_0._M_allocated_capacity);
  if ( (std::string *)v128._anon_0._M_allocated_capacity != &v129 )
    operator delete((void *)v128._anon_0._M_allocated_capacity);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, byte_1AE3B2E0, byte_1AE3B2E0, v37);
  v128._anon_0._M_allocated_capacity = (std::string::size_type)&v129;
  std::string::_M_construct<char const*>((std::string *const)&v128._anon_0, &byte_1AE3C264[-4], byte_1AE3C264, v38);
  v127._anon_0._M_allocated_capacity = (std::string::size_type)&v128;
  std::string::_M_construct<char const*>((std::string *const)&v127._anon_0, &byte_1AE3C2AA[-10], byte_1AE3C2AA, v39);
  v113._M_dataplus._M_p = 0LL;
  common::milog::MiLog::addLogLevel(
    &common::milog::MiLogDefault::default_log_obj_,
    0x14u,
    v113,
    v127,
    v128,
    (common::milog::LogColor)&v127._anon_0,
    (common::milog::LogFormat)&v128._anon_0);
  if ( (std::string *)v127._anon_0._M_allocated_capacity != &v128 )
    operator delete((void *)v127._anon_0._M_allocated_capacity);
  if ( (std::string *)v128._anon_0._M_allocated_capacity != &v129 )
    operator delete((void *)v128._anon_0._M_allocated_capacity);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, byte_1AE3B2E0, byte_1AE3B2E0, v40);
  v128._anon_0._M_allocated_capacity = (std::string::size_type)&v129;
  std::string::_M_construct<char const*>((std::string *const)&v128._anon_0, &byte_1AE3C2E4[-4], byte_1AE3C2E4, v41);
  v127._anon_0._M_allocated_capacity = (std::string::size_type)&v128;
  std::string::_M_construct<char const*>((std::string *const)&v127._anon_0, &byte_1AE3C32A[-10], byte_1AE3C32A, v42);
  v114._M_dataplus._M_p = 0LL;
  common::milog::MiLog::addLogLevel(
    &common::milog::MiLogDefault::default_log_obj_,
    0x15u,
    v114,
    v127,
    v128,
    (common::milog::LogColor)&v127._anon_0,
    (common::milog::LogFormat)&v128._anon_0);
  if ( (std::string *)v127._anon_0._M_allocated_capacity != &v128 )
    operator delete((void *)v127._anon_0._M_allocated_capacity);
  if ( (std::string *)v128._anon_0._M_allocated_capacity != &v129 )
    operator delete((void *)v128._anon_0._M_allocated_capacity);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, byte_1AE3B2E0, byte_1AE3B2E0, v43);
  v128._anon_0._M_allocated_capacity = (std::string::size_type)&v129;
  std::string::_M_construct<char const*>((std::string *const)&v128._anon_0, byte_1AE3B2E0, byte_1AE3B2E0, v44);
  v127._anon_0._M_allocated_capacity = (std::string::size_type)&v128;
  std::string::_M_construct<char const*>((std::string *const)&v127._anon_0, &byte_1AE3C369[-9], byte_1AE3C369, v45);
  v115._M_dataplus._M_p = (std::string::pointer)2;
  common::milog::MiLog::addLogLevel(
    &common::milog::MiLogDefault::default_log_obj_,
    0x16u,
    v115,
    v127,
    v128,
    (common::milog::LogColor)&v127._anon_0,
    (common::milog::LogFormat)&v128._anon_0);
  if ( (std::string *)v127._anon_0._M_allocated_capacity != &v128 )
    operator delete((void *)v127._anon_0._M_allocated_capacity);
  if ( (std::string *)v128._anon_0._M_allocated_capacity != &v129 )
    operator delete((void *)v128._anon_0._M_allocated_capacity);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, byte_1AE3B2E0, byte_1AE3B2E0, v46);
  v128._anon_0._M_allocated_capacity = (std::string::size_type)&v129;
  std::string::_M_construct<char const*>((std::string *const)&v128._anon_0, byte_1AE3B2E0, byte_1AE3B2E0, v47);
  v127._anon_0._M_allocated_capacity = (std::string::size_type)&v128;
  std::string::_M_construct<char const*>((std::string *const)&v127._anon_0, &byte_1AE3C3AA[-10], byte_1AE3C3AA, v48);
  v116._M_dataplus._M_p = (std::string::pointer)2;
  common::milog::MiLog::addLogLevel(
    &common::milog::MiLogDefault::default_log_obj_,
    0x17u,
    v116,
    v127,
    v128,
    (common::milog::LogColor)&v127._anon_0,
    (common::milog::LogFormat)&v128._anon_0);
  if ( (std::string *)v127._anon_0._M_allocated_capacity != &v128 )
    operator delete((void *)v127._anon_0._M_allocated_capacity);
  if ( (std::string *)v128._anon_0._M_allocated_capacity != &v129 )
    operator delete((void *)v128._anon_0._M_allocated_capacity);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, byte_1AE3B2E0, byte_1AE3B2E0, v49);
  v128._anon_0._M_allocated_capacity = (std::string::size_type)&v129;
  std::string::_M_construct<char const*>((std::string *const)&v128._anon_0, byte_1AE3B2E0, byte_1AE3B2E0, v50);
  v127._anon_0._M_allocated_capacity = (std::string::size_type)&v128;
  std::string::_M_construct<char const*>((std::string *const)&v127._anon_0, &byte_1AE3C3E8[-8], byte_1AE3C3E8, v51);
  v117._M_dataplus._M_p = (std::string::pointer)1;
  common::milog::MiLog::addLogLevel(
    &common::milog::MiLogDefault::default_log_obj_,
    0x18u,
    v117,
    v127,
    v128,
    (common::milog::LogColor)&v127._anon_0,
    (common::milog::LogFormat)&v128._anon_0);
  if ( (std::string *)v127._anon_0._M_allocated_capacity != &v128 )
    operator delete((void *)v127._anon_0._M_allocated_capacity);
  if ( (std::string *)v128._anon_0._M_allocated_capacity != &v129 )
    operator delete((void *)v128._anon_0._M_allocated_capacity);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, byte_1AE3B2E0, byte_1AE3B2E0, v52);
  v128._anon_0._M_allocated_capacity = (std::string::size_type)&v129;
  std::string::_M_construct<char const*>((std::string *const)&v128._anon_0, &byte_1AE3C424[-4], byte_1AE3C424, v53);
  v127._anon_0._M_allocated_capacity = (std::string::size_type)&v128;
  std::string::_M_construct<char const*>((std::string *const)&v127._anon_0, &byte_1AE3C46A[-10], byte_1AE3C46A, v54);
  v118._M_dataplus._M_p = 0LL;
  common::milog::MiLog::addLogLevel(
    &common::milog::MiLogDefault::default_log_obj_,
    0x19u,
    v118,
    v127,
    v128,
    (common::milog::LogColor)&v127._anon_0,
    (common::milog::LogFormat)&v128._anon_0);
  if ( (std::string *)v127._anon_0._M_allocated_capacity != &v128 )
    operator delete((void *)v127._anon_0._M_allocated_capacity);
  if ( (std::string *)v128._anon_0._M_allocated_capacity != &v129 )
    operator delete((void *)v128._anon_0._M_allocated_capacity);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, byte_1AE3B2E0, byte_1AE3B2E0, v55);
  v128._anon_0._M_allocated_capacity = (std::string::size_type)&v129;
  std::string::_M_construct<char const*>((std::string *const)&v128._anon_0, byte_1AE3B2E0, byte_1AE3B2E0, v56);
  v127._anon_0._M_allocated_capacity = (std::string::size_type)&v128;
  std::string::_M_construct<char const*>((std::string *const)&v127._anon_0, &byte_1AE3C4AA[-10], byte_1AE3C4AA, v57);
  v119._M_dataplus._M_p = (std::string::pointer)2;
  common::milog::MiLog::addLogLevel(
    &common::milog::MiLogDefault::default_log_obj_,
    0x1Au,
    v119,
    v127,
    v128,
    (common::milog::LogColor)&v127._anon_0,
    (common::milog::LogFormat)&v128._anon_0);
  if ( (std::string *)v127._anon_0._M_allocated_capacity != &v128 )
    operator delete((void *)v127._anon_0._M_allocated_capacity);
  if ( (std::string *)v128._anon_0._M_allocated_capacity != &v129 )
    operator delete((void *)v128._anon_0._M_allocated_capacity);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, byte_1AE3B2E0, byte_1AE3B2E0, v58);
  v128._anon_0._M_allocated_capacity = (std::string::size_type)&v129;
  std::string::_M_construct<char const*>((std::string *const)&v128._anon_0, byte_1AE3B2E0, byte_1AE3B2E0, v59);
  v127._anon_0._M_allocated_capacity = (std::string::size_type)&v128;
  std::string::_M_construct<char const*>((std::string *const)&v127._anon_0, &byte_1AE3C4EA[-10], byte_1AE3C4EA, v60);
  v120._M_dataplus._M_p = (std::string::pointer)2;
  common::milog::MiLog::addLogLevel(
    &common::milog::MiLogDefault::default_log_obj_,
    0x1Bu,
    v120,
    v127,
    v128,
    (common::milog::LogColor)&v127._anon_0,
    (common::milog::LogFormat)&v128._anon_0);
  if ( (std::string *)v127._anon_0._M_allocated_capacity != &v128 )
    operator delete((void *)v127._anon_0._M_allocated_capacity);
  if ( (std::string *)v128._anon_0._M_allocated_capacity != &v129 )
    operator delete((void *)v128._anon_0._M_allocated_capacity);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, byte_1AE3B2E0, byte_1AE3B2E0, v61);
  v128._anon_0._M_allocated_capacity = (std::string::size_type)&v129;
  std::string::_M_construct<char const*>((std::string *const)&v128._anon_0, byte_1AE3B2E0, byte_1AE3B2E0, v62);
  v127._anon_0._M_allocated_capacity = (std::string::size_type)&v128;
  std::string::_M_construct<char const*>((std::string *const)&v127._anon_0, &byte_1AE3C52B[-11], byte_1AE3C52B, v63);
  v121._M_dataplus._M_p = (std::string::pointer)2;
  common::milog::MiLog::addLogLevel(
    &common::milog::MiLogDefault::default_log_obj_,
    0x1Du,
    v121,
    v127,
    v128,
    (common::milog::LogColor)&v127._anon_0,
    (common::milog::LogFormat)&v128._anon_0);
  if ( (std::string *)v127._anon_0._M_allocated_capacity != &v128 )
    operator delete((void *)v127._anon_0._M_allocated_capacity);
  if ( (std::string *)v128._anon_0._M_allocated_capacity != &v129 )
    operator delete((void *)v128._anon_0._M_allocated_capacity);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, byte_1AE3B2E0, byte_1AE3B2E0, v64);
  v128._anon_0._M_allocated_capacity = (std::string::size_type)&v129;
  std::string::_M_construct<char const*>((std::string *const)&v128._anon_0, byte_1AE3B2E0, byte_1AE3B2E0, v65);
  v127._anon_0._M_allocated_capacity = (std::string::size_type)&v128;
  std::string::_M_construct<char const*>((std::string *const)&v127._anon_0, &byte_1AE3C568[-8], byte_1AE3C568, v66);
  v122._M_dataplus._M_p = (std::string::pointer)2;
  common::milog::MiLog::addLogLevel(
    &common::milog::MiLogDefault::default_log_obj_,
    0x1Eu,
    v122,
    v127,
    v128,
    (common::milog::LogColor)&v127._anon_0,
    (common::milog::LogFormat)&v128._anon_0);
  if ( (std::string *)v127._anon_0._M_allocated_capacity != &v128 )
    operator delete((void *)v127._anon_0._M_allocated_capacity);
  if ( (std::string *)v128._anon_0._M_allocated_capacity != &v129 )
    operator delete((void *)v128._anon_0._M_allocated_capacity);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
  }
  else
  {
    this = (AppBase *const)(this->_vptr_AppBase + 11);
    if ( !*(_BYTE *)(((unsigned __int64)(v1->_vptr_AppBase + 11) >> 3) + 0x7FFF8000) )
    {
      v67 = (*((__int64 (__fastcall **)(AppBase *, unsigned __int64))v1->_vptr_AppBase + 11))(v1, v2 + 32);
      goto LABEL_130;
    }
  }
  v67 = __asan_report_load8(this);
LABEL_130:
  if ( !v67 )
  {
    child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&child_name, &byte_1AE3C62C[-12], byte_1AE3C62C, v68);
    goto LABEL_139;
  }
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)&v128._anon_0,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/core_class/app_base.cpp",
    "init",
    487);
  v1 = (AppBase *)v130;
  if ( *(_BYTE *)((v130 >> 3) + 0x7FFF8000) )
  {
    v69 = v130;
    __asan_report_load8(v130);
    goto LABEL_138;
  }
  v69 = v130 + 8;
  if ( *(_BYTE *)(((v130 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_138:
    __asan_report_load8(v69);
LABEL_139:
    common::tools::PTree::getChild((const common::tools::PTree *const)(v2 + 32), &child_name);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
      operator delete(child_name._M_dataplus._M_p);
    if ( common::milog::MiLog::init(
           &common::milog::MiLogDefault::default_log_obj_,
           (const common::tools::PTree *)(v2 + 64)) )
    {
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/core_class/app_base.cpp",
        "init",
        494);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&child_name, "log init failed.");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      v73 = 1;
LABEL_143:
      common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 64));
      goto LABEL_144;
    }
    if ( common::milog::MiLog::startThread(&common::milog::MiLogDefault::default_log_obj_) )
    {
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/core_class/app_base.cpp",
        "init",
        499);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&child_name, "start log thread failed.");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      v73 = 1;
      goto LABEL_143;
    }
    v75 = *(_BYTE *)(((unsigned __int64)&v1->app_id_ >> 3) + 0x7FFF8000);
    if ( v75 && v75 <= 3 )
    {
      __asan_report_load4(&v1->app_id_);
    }
    else if ( v1->app_id_ )
    {
      if ( AppBase::initServerConfig(v1, (common::tools::PTree *)(v2 + 32)) )
      {
        common::milog::MiLogStream::MiLogStream(
          (common::milog::MiLogStream *const)&child_name,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/core_class/app_base.cpp",
          "init",
          513);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)&child_name,
          "init ServerConfig failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
        v73 = 1;
        goto LABEL_143;
      }
      if ( AppBase::initAppHostConfig(v1, (common::tools::PTree *)(v2 + 32)) )
      {
        common::milog::MiLogStream::MiLogStream(
          (common::milog::MiLogStream *const)&child_name,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/core_class/app_base.cpp",
          "init",
          520);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)&child_name,
          "init AppHostConfig failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
        v73 = 1;
        goto LABEL_143;
      }
      if ( common::tools::initMiniDump() )
      {
        common::milog::MiLogStream::MiLogStream(
          (common::milog::MiLogStream *const)&child_name,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/core_class/app_base.cpp",
          "init",
          527);
        common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&child_name, "initMiniDump failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
        v73 = 1;
        goto LABEL_143;
      }
      if ( common::tools::HotPatch::installPrePatch(&v1->patch_dir_, &v1->rely_version_) )
      {
        common::milog::MiLogStream::MiLogStream(
          (common::milog::MiLogStream *const)&child_name,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/core_class/app_base.cpp",
          "init",
          534);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)&child_name,
          "checkAndInstallPatch failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
        v73 = 1;
        goto LABEL_143;
      }
      if ( ProtoUtils::init() )
      {
        common::milog::MiLogStream::MiLogStream(
          (common::milog::MiLogStream *const)&child_name,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/core_class/app_base.cpp",
          "init",
          541);
        common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&child_name, "init ProtoUtils failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
        v73 = 1;
        goto LABEL_143;
      }
      v127._M_dataplus._M_p = (std::string::pointer)&v1->app_name_;
      v76 = *(_BYTE *)(((unsigned __int64)&v1->app_id_ >> 3) + 0x7FFF8000);
      if ( v76 && v76 <= 3 )
        __asan_report_load4(&v1->app_id_);
      else
        v77 = ResourceBox::init(p_server_config_file, v1->app_id_, (const std::string *)v127._M_dataplus._M_p);
      if ( v77 )
      {
        common::milog::MiLogStream::MiLogStream(
          (common::milog::MiLogStream *const)&child_name,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/core_class/app_base.cpp",
          "init",
          548);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)&child_name,
          "init resource box failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
        v73 = 1;
        goto LABEL_143;
      }
      if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
      {
        v78 = (unsigned __int64)v1;
        __asan_report_load8(v1);
      }
      else
      {
        v78 = (unsigned __int64)(v1->_vptr_AppBase + 5);
        if ( !*(_BYTE *)((v78 >> 3) + 0x7FFF8000) )
        {
          v79 = (*((__int64 (__fastcall **)(AppBase *, unsigned __int64))v1->_vptr_AppBase + 5))(v1, v2 + 32);
LABEL_176:
          if ( v79 || (v73 = ServiceBox::init((common::tools::PTree *)(v2 + 32))) != 0 )
          {
            common::milog::MiLogStream::MiLogStream(
              (common::milog::MiLogStream *const)&child_name,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "src/core_class/app_base.cpp",
              "init",
              555);
LABEL_186:
            common::milog::MiLogStream::operator()(
              (common::milog::MiLogStream *const)&child_name,
              "init service failed");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
            v73 = 1;
            goto LABEL_143;
          }
          p_max_reload_config_random_time = &v1->max_reload_config_random_time_;
          v81 = *(_BYTE *)(((unsigned __int64)&v1->max_reload_config_random_time_ >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)v1 + 20) & 7) + 3) >= v81 && v81 )
          {
            __asan_report_load4(p_max_reload_config_random_time);
          }
          else
          {
            v82 = common::tools::RandomUtils::rand<unsigned int>(0, v1->max_reload_config_random_time_);
            p_max_reload_config_random_time = &v1->next_reload_config_random_time_;
            v83 = *(_BYTE *)(((unsigned __int64)&v1->next_reload_config_random_time_ >> 3) + 0x7FFF8000);
            if ( !v83 || v83 > 3 )
            {
              v1->next_reload_config_random_time_ = v82;
              common::milog::MiLogStream::MiLogStream(
                (common::milog::MiLogStream *const)&child_name,
                &common::milog::MiLogDefault::default_log_obj_,
                2u,
                "src/core_class/app_base.cpp",
                "init",
                562);
              v124 = *(&child_name._anon_0._M_allocated_capacity + 1);
              if ( *(_BYTE *)((*(&child_name._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
              {
                v84 = (std::string::pointer)*(&child_name._anon_0._M_allocated_capacity + 1);
                __asan_report_load8(*(&child_name._anon_0._M_allocated_capacity + 1));
              }
              else
              {
                v84 = (std::string::pointer)(*(&child_name._anon_0._M_allocated_capacity + 1) + 8);
                if ( !*(_BYTE *)(((*(&child_name._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
                {
                  v85 = *(void **)(*(&child_name._anon_0._M_allocated_capacity + 1) + 8);
                  n = (int)(**((_QWORD **)&child_name._anon_0._M_allocated_capacity + 1) + 0x4000 - (_DWORD)v85);
                  if ( n > 8 )
                    n = 9LL;
                  memcpy(v85, "init app ", n);
                  *(_QWORD *)(v124 + 8) += n;
                  v124 = *(&child_name._anon_0._M_allocated_capacity + 1);
                  v84 = v127._M_dataplus._M_p + 8;
                  if ( !*(_BYTE *)(((unsigned __int64)(v127._M_dataplus._M_p + 8) >> 3) + 0x7FFF8000) )
                  {
                    v86 = (char *)*((_QWORD *)v127._M_dataplus._M_p + 1);
                    if ( !*(_BYTE *)(((unsigned __int64)v127._M_dataplus._M_p >> 3) + 0x7FFF8000) )
                    {
                      M_p = v1->app_name_._M_dataplus._M_p;
                      if ( !*(_BYTE *)((*(&child_name._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
                      {
                        v127._M_dataplus._M_p = (std::string::pointer)**((_QWORD **)&child_name._anon_0._M_allocated_capacity
                                                                       + 1);
                        v88 = *(&child_name._anon_0._M_allocated_capacity + 1) + 8;
                        if ( !*(_BYTE *)(((*(&child_name._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
                        {
                          v89 = *(void **)(*(&child_name._anon_0._M_allocated_capacity + 1) + 8);
                          v127._M_dataplus._M_p = (std::string::pointer)(LODWORD(v127._M_dataplus._M_p)
                                                                       + 0x4000
                                                                       - (int)v89);
                          if ( v86 <= v127._M_dataplus._M_p )
                            v127._M_dataplus._M_p = v86;
                          memcpy(v89, M_p, (size_t)v127._M_dataplus._M_p);
                          *(_QWORD *)(v124 + 8) += v127._M_dataplus._M_p;
                          v127._M_dataplus._M_p = (std::string::pointer)*(&child_name._anon_0._M_allocated_capacity + 1);
                          if ( !*(_BYTE *)((*(&child_name._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
                          {
                            v90 = v127._M_dataplus._M_p + 8;
                            if ( !*(_BYTE *)(((unsigned __int64)(v127._M_dataplus._M_p + 8) >> 3) + 0x7FFF8000) )
                            {
                              v91 = (void *)*((_QWORD *)v127._M_dataplus._M_p + 1);
                              v125 = (int)(*(_QWORD *)v127._M_dataplus._M_p + 0x4000 - (_DWORD)v91);
                              if ( v125 > 0xB )
                                v125 = 12LL;
                              memcpy(v91, " succ, seed:", v125);
                              *((_QWORD *)v127._M_dataplus._M_p + 1) += v125;
                              v90 = (std::string::pointer)&common::tools::RandomUtils::seed_;
                              v92 = *(_BYTE *)(((unsigned __int64)&common::tools::RandomUtils::seed_ >> 3) + 0x7FFF8000);
                              if ( (char)(((unsigned __int8)&common::tools::RandomUtils::seed_ & 7) + 3) < v92 || !v92 )
                              {
                                common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                                  *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&child_name._anon_0._M_allocated_capacity
                                  + 1),
                                  common::tools::RandomUtils::seed_);
                                v127._M_dataplus._M_p = (std::string::pointer)*(&child_name._anon_0._M_allocated_capacity
                                                                              + 1);
                                if ( !*(_BYTE *)((*(&child_name._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
                                {
                                  p_next_reload_config_random_time = v127._M_dataplus._M_p + 8;
                                  if ( !*(_BYTE *)(((unsigned __int64)(v127._M_dataplus._M_p + 8) >> 3) + 0x7FFF8000) )
                                  {
                                    v94 = (void *)*((_QWORD *)v127._M_dataplus._M_p + 1);
                                    v126 = (int)(*(_QWORD *)v127._M_dataplus._M_p + 0x4000 - (_DWORD)v94);
                                    if ( v126 > 0x1A )
                                      v126 = 27LL;
                                    memcpy(v94, " reload config random time:", v126);
                                    *((_QWORD *)v127._M_dataplus._M_p + 1) += v126;
                                    p_next_reload_config_random_time = (std::string::pointer)&v1->next_reload_config_random_time_;
                                    v95 = *(_BYTE *)(((unsigned __int64)&v1->next_reload_config_random_time_ >> 3)
                                                   + 0x7FFF8000);
                                    if ( (char)((((_BYTE)v1 - 24) & 7) + 3) < v95 || !v95 )
                                    {
                                      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                                        *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&child_name._anon_0._M_allocated_capacity
                                        + 1),
                                        v1->next_reload_config_random_time_);
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
                                      goto LABEL_143;
                                    }
                                    goto LABEL_221;
                                  }
LABEL_220:
                                  __asan_report_load8(p_next_reload_config_random_time);
LABEL_221:
                                  v97 = __asan_report_load4(p_next_reload_config_random_time);
                                  if ( v98 != 1 )
                                  {
                                    v99 = v96;
                                    common::tools::PTree::~PTree((common::tools::PTree *const)v3 - 8);
                                    __asan_handle_no_return(v3 - 64);
                                    _Unwind_Resume(v99);
                                  }
                                  v100 = (__int64 *)__cxa_begin_catch(v96);
                                  common::milog::MiLogStream::MiLogStream(
                                    (common::milog::MiLogStream *const)&child_name,
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "src/core_class/app_base.cpp",
                                    "init",
                                    446);
                                  if ( *(_BYTE *)(((unsigned __int64)v100 >> 3) + 0x7FFF8000) )
                                    __asan_report_load8(v100);
                                  v101 = *v100;
                                  if ( *(_BYTE *)(((unsigned __int64)(*v100 + 16) >> 3) + 0x7FFF8000) )
                                    v101 = __asan_report_load8(*v100 + 16);
                                  v102 = (const char *)(*(__int64 (__fastcall **)(__int64 *, double))(v101 + 16))(
                                                         v100,
                                                         v97);
                                  common::milog::MiLogStream::operator()(
                                    (common::milog::MiLogStream *const)&child_name,
                                    "%s",
                                    v102);
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
                                  __cxa_end_catch();
                                  v73 = 1;
                                  goto LABEL_144;
                                }
LABEL_219:
                                p_next_reload_config_random_time = v127._M_dataplus._M_p;
                                __asan_report_load8(v127._M_dataplus._M_p);
                                goto LABEL_220;
                              }
LABEL_218:
                              __asan_report_load4(v90);
                              goto LABEL_219;
                            }
LABEL_217:
                            __asan_report_load8(v90);
                            goto LABEL_218;
                          }
LABEL_216:
                          v90 = v127._M_dataplus._M_p;
                          __asan_report_load8(v127._M_dataplus._M_p);
                          goto LABEL_217;
                        }
LABEL_215:
                        __asan_report_load8(v88);
                        goto LABEL_216;
                      }
LABEL_214:
                      v88 = v124;
                      __asan_report_load8(v124);
                      goto LABEL_215;
                    }
LABEL_213:
                    __asan_report_load8(v127._M_dataplus._M_p);
                    goto LABEL_214;
                  }
LABEL_212:
                  __asan_report_load8(v84);
                  goto LABEL_213;
                }
              }
              __asan_report_load8(v84);
              goto LABEL_212;
            }
          }
          __asan_report_store4(p_max_reload_config_random_time);
          goto LABEL_186;
        }
      }
      v79 = __asan_report_load8(v78);
      goto LABEL_176;
    }
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&child_name,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/app_base.cpp",
      "init",
      506);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&child_name, "app_id is 0");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    v73 = 1;
    goto LABEL_143;
  }
  v70 = *(void **)(v130 + 8);
  v71 = *(_DWORD *)v130 + 0x4000 - (int)v70;
  if ( v71 > 0x16 )
    v71 = 23LL;
  v72 = v71;
  memcpy(v70, "app check config failed", v71);
  *(_QWORD *)&v1->app_id_ += v72;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v128._anon_0);
  v73 = 1;
LABEL_144:
  common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 32));
  if ( v127._M_string_length == v2 )
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
  return v73;
};

// Line 568: range 0000000014E48D0A-0000000014E4A75C
int32_t __fastcall AppBase::initServerConfig(AppBase *const this, common::tools::PTree *pt)
{
  __int64 v2; // r15
  common::milog::MilogStringStream *v3; // rbx
  unsigned __int64 v4; // r13
  std::mutex *p_server_config_mutex; // rdi
  int v6; // r14d
  void *p_M_parent; // rdi
  std::_Rb_tree_header *v8; // rax
  __int64 v9; // rax
  std::list<std::pair<std::string,common::tools::PTree>> *i; // rax
  unsigned __int64 ostr; // r12
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  size_t v14; // rbx
  const void *v15; // rsi
  char **p_data; // rdi
  char *v17; // rdi
  char *v18; // rcx
  char *v19; // r14
  int32_t v20; // ebx
  std::forward_iterator_tag v22; // cl
  std::string::pointer v23; // rdi
  std::string::pointer M_p; // rsi
  char v25; // dl
  std::forward_iterator_tag v26; // cl
  std::string::size_type M_string_length; // rax
  char *v28; // rax
  char v29; // dl
  char v30; // al
  char v31; // al
  std::forward_iterator_tag v32; // cl
  std::forward_iterator_tag v33; // cl
  std::forward_iterator_tag v34; // cl
  std::forward_iterator_tag v35; // cl
  std::forward_iterator_tag v36; // cl
  char *data; // rdi
  std::forward_iterator_tag v38; // cl
  ServerConfig *v39; // r8
  std::string::pointer v40; // rdi
  std::string::pointer v41; // rsi
  char v42; // dl
  unsigned int *v43; // rcx
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,ServerConfig> >,bool> v44; // rax
  std::string::size_type v45; // rax
  char *v46; // rax
  char v47; // dl
  char v48; // al
  char v49; // al
  void *v50; // rdi
  void *v51; // rdi
  void *v52; // rdi
  void *v53; // rdi
  void *v54; // rdi
  char *v55; // rdi
  char *v56; // rdi
  char *v57; // rdi
  char *v58; // rdi
  char *v59; // rdi
  std::size_t *p_M_size; // r14
  std::forward_iterator_tag v61; // cl
  std::forward_iterator_tag v62; // cl
  std::forward_iterator_tag v63; // cl
  bool v64; // bl
  void *v65; // rdi
  size_t M_node; // rbx
  uint32_t InnerIpInt; // eax
  unsigned __int64 v68; // r14
  uint32_t *p_app_id; // rdi
  void *v70; // rdi
  char v71; // dl
  _QWORD *v72; // rdi
  void *v73; // rdi
  _QWORD *v74; // rdi
  void *v75; // rdi
  size_t v76; // rbx
  unsigned int v77; // r14d
  char v78; // al
  size_t v79; // r12
  size_t v80; // rdi
  void *v81; // rdi
  size_t v82; // rdi
  void *v83; // rdi
  char v84; // dl
  size_t v85; // rdi
  void *v86; // rdi
  size_t v87; // rbx
  std::forward_iterator_tag v88; // cl
  unsigned int v89; // eax
  char v90; // dl
  std::forward_iterator_tag v91; // cl
  void *v92; // rdi
  unsigned int v93; // eax
  char v94; // cl
  __int64 v95; // r14
  uint32_t *p_auto_reload_config_interval; // rdi
  void *v97; // rdi
  size_t v98; // rbx
  char v99; // dl
  uint32_t *p_max_reload_config_random_time; // rdi
  void *v101; // rdi
  size_t v102; // rbx
  char v103; // dl
  std::string v104; // [rsp+0h] [rbp-390h]
  std::string v105; // [rsp+0h] [rbp-390h]
  std::string::size_type v106; // [rsp+20h] [rbp-370h]
  std::map<unsigned int,ServerConfig> *p_server_config_map; // [rsp+30h] [rbp-360h]
  std::tuple_element<1,std::pair<std::string,common::tools::PTree> >::type *server_pt; // [rsp+38h] [rbp-358h]
  size_t server_pta; // [rsp+38h] [rbp-358h]
  size_t server_ptb; // [rsp+38h] [rbp-358h]
  std::list<std::pair<std::string,common::tools::PTree>> v112; // [rsp+40h] [rbp-350h] BYREF
  common::milog::MiLogStream v113; // [rsp+60h] [rbp-330h] BYREF
  std::string v114; // [rsp+80h] [rbp-310h] BYREF
  std::string path; // [rsp+A0h] [rbp-2F0h] BYREF
  std::string v116; // [rsp+C0h] [rbp-2D0h] BYREF
  std::string s; // [rsp+E0h] [rbp-2B0h] BYREF
  std::string child_name; // [rsp+100h] [rbp-290h] BYREF
  char v119[624]; // [rsp+120h] [rbp-270h] BYREF

  v104._M_string_length = (std::string::size_type)pt;
  v104._anon_0._M_allocated_capacity = (std::string::size_type)v119;
  v104._M_dataplus._M_p = v119;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_4(576LL);
    if ( v9 )
      v104._anon_0._M_allocated_capacity = v9;
  }
  v2 = v104._anon_0._M_allocated_capacity + 576;
  v3 = (common::milog::MilogStringStream *)(v104._anon_0._M_allocated_capacity + 576);
  *(_QWORD *)v104._anon_0._M_allocated_capacity = 1102416563LL;
  *(_QWORD *)(v104._anon_0._M_allocated_capacity + 8) = "10 48 4 3 num 64 8 8 lock:570 96 8 18 server_list_pt:572 128 16 "
                                                        "16 app_host_opt:603 160 16 25 auto_reload_config_pt:626 192 32 2"
                                                        "3 server_inner_id_str:583 256 32 23 server_outer_id_str:585 320 "
                                                        "32 23 use_domain_name_str:587 384 32 7 val_str 448 88 17 server_config:580";
  *(_QWORD *)(v104._anon_0._M_allocated_capacity + 16) = AppBase::initServerConfig;
  v4 = v104._anon_0._M_allocated_capacity >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -234556943;
  *(_DWORD *)(v4 + 2147450888) = -218959360;
  *(_DWORD *)(v4 + 2147450892) = -218959360;
  *(_DWORD *)(v4 + 2147450896) = -219021312;
  *(_DWORD *)(v4 + 2147450900) = -219021312;
  *(_DWORD *)(v4 + 2147450908) = -218959118;
  *(_DWORD *)(v4 + 2147450916) = -218959118;
  *(_DWORD *)(v4 + 2147450924) = -218959118;
  *(_DWORD *)(v4 + 2147450932) = -218959118;
  *(_DWORD *)(v4 + 2147450944) = -218103808;
  *(_DWORD *)(v4 + 2147450948) = -202116109;
  p_server_config_mutex = &this->server_config_mutex_;
  *(_QWORD *)(v104._anon_0._M_allocated_capacity + 64) = &this->server_config_mutex_;
  if ( &_pthread_key_create )
  {
    v6 = pthread_mutex_lock(&p_server_config_mutex->_M_mutex);
    if ( v6 )
    {
      __asan_handle_no_return(p_server_config_mutex);
      std::__throw_system_error(v6);
    }
  }
  p_server_config_map = &this->server_config_map_;
  p_M_parent = &this->server_config_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&this->server_config_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_parent);
    goto LABEL_14;
  }
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,ServerConfig>,std::_Select1st<std::pair<unsigned int const,ServerConfig>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ServerConfig>>>::_M_erase(
    &p_server_config_map->_M_t,
    (std::_Rb_tree<unsigned int,std::pair<unsigned int const,ServerConfig>,std::_Select1st<std::pair<unsigned int const,ServerConfig> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ServerConfig> > >::_Link_type)this->server_config_map_._M_t._M_impl._M_header._M_parent);
  p_M_parent = &this->server_config_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&this->server_config_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_store8(p_M_parent);
    goto LABEL_15;
  }
  this->server_config_map_._M_t._M_impl._M_header._M_parent = 0LL;
  v8 = &this->server_config_map_._M_t._M_impl.std::_Rb_tree_header;
  p_M_parent = &this->server_config_map_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&this->server_config_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_store8(p_M_parent);
    goto LABEL_16;
  }
  this->server_config_map_._M_t._M_impl._M_header._M_left = &v8->_M_header;
  p_M_parent = &this->server_config_map_._M_t._M_impl._M_header._M_right;
  if ( *(_BYTE *)(((unsigned __int64)&this->server_config_map_._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_store8(p_M_parent);
    goto LABEL_17;
  }
  this->server_config_map_._M_t._M_impl._M_header._M_right = &v8->_M_header;
  p_M_parent = &this->server_config_map_._M_t._M_impl._M_node_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->server_config_map_._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_store8(p_M_parent);
    goto LABEL_18;
  }
  this->server_config_map_._M_t._M_impl._M_node_count = 0LL;
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(
    &child_name,
    &byte_1AE3B0EF[-15],
    byte_1AE3B0EF,
    (std::forward_iterator_tag)this);
LABEL_18:
  common::tools::PTree::getChild(pt, &child_name);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  common::tools::PTree::getAllChild[abi:cxx11](
    &v112,
    (const common::tools::PTree *const)(v104._anon_0._M_allocated_capacity + 96));
  for ( i = (std::list<std::pair<std::string,common::tools::PTree>> *)v112._M_impl._M_node._M_next;
        ;
        i = *(std::list<std::pair<std::string,common::tools::PTree>> **)ostr )
  {
    ostr = (unsigned __int64)i;
    if ( i == &v112 )
      goto LABEL_155;
    p_M_size = &i->_M_impl._M_node._M_size;
    server_pt = (std::tuple_element<1,std::pair<std::string,common::tools::PTree> >::type *)&i[2];
    if ( (unsigned int)std::string::compare(&i->_M_impl._M_node._M_size, "Server") )
    {
      common::milog::MiLogStream::MiLogStream(
        &v113,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/core_class/app_base.cpp",
        "initServerConfig",
        577);
      ostr = (unsigned __int64)v113.ostr_;
      if ( *(_BYTE *)(((unsigned __int64)v113.ostr_ >> 3) + 0x7FFF8000) )
      {
        p_cur = v113.ostr_;
        __asan_report_load8(v113.ostr_);
      }
      else
      {
        server_pt = (std::tuple_element<1,std::pair<std::string,common::tools::PTree> >::type *)v113.ostr_->buffer_.data_;
        v3 = (common::milog::MilogStringStream *)(v113.ostr_->buffer_.data_ + 0x4000);
        p_cur = (common::milog::MilogStringStream *)&v113.ostr_->buffer_.cur_;
        if ( !*(_BYTE *)(((unsigned __int64)&v113.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
        {
          cur = v113.ostr_->buffer_.cur_;
          v14 = (int)v3 - (int)cur;
          if ( v14 > 0xF )
            v14 = 16LL;
          memcpy(cur, "invalid pt name:", v14);
          *(_QWORD *)(ostr + 8) += v14;
          v3 = v113.ostr_;
          p_cur = (common::milog::MilogStringStream *)(p_M_size + 1);
          if ( !*(_BYTE *)(((unsigned __int64)(p_M_size + 1) >> 3) + 0x7FFF8000) )
          {
            if ( !*(_BYTE *)(((unsigned __int64)p_M_size >> 3) + 0x7FFF8000) )
            {
              v15 = (const void *)*p_M_size;
              if ( !*(_BYTE *)(((unsigned __int64)v113.ostr_ >> 3) + 0x7FFF8000) )
              {
                p_data = &v113.ostr_->buffer_.cur_;
                if ( !*(_BYTE *)(((unsigned __int64)&v113.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                {
                  v17 = v113.ostr_->buffer_.cur_;
                  v18 = &v113.ostr_->buffer_.data_[-(int)v17 + 0x4000];
                  if ( p_M_size[1] <= (unsigned __int64)v18 )
                    v18 = (char *)p_M_size[1];
                  v19 = v18;
                  memcpy(v17, v15, (size_t)v18);
                  v3->buffer_.cur_ += (unsigned __int64)v19;
                  common::milog::MiLogStream::~MiLogStream(&v113);
                  goto LABEL_32;
                }
                goto LABEL_43;
              }
LABEL_42:
              p_data = &v3->buffer_.data_;
              __asan_report_load8(v3);
LABEL_43:
              __asan_report_load8(p_data);
              goto LABEL_44;
            }
LABEL_41:
            __asan_report_load8(p_M_size);
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
    LODWORD(v3[-8].buffer_.data_) = 0;
    v3[-8].buffer_.cur_ = (char *)&v3[-7].buffer_.cur_;
    v3[-7].buffer_.data_ = 0LL;
    LOBYTE(v3[-7].buffer_.cur_) = 0;
    LODWORD(v3[-6].buffer_.cur_) = 0;
    HIDWORD(v3[-6].buffer_.cur_) = 0;
    LOBYTE(v3[-5].buffer_.data_) = 0;
    v3[-5].buffer_.cur_ = (char *)&v3[-4].buffer_.cur_;
    v3[-4].buffer_.data_ = 0LL;
    LOBYTE(v3[-4].buffer_.cur_) = 0;
    child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&child_name, &byte_1AE3B1EC[-12], byte_1AE3B1EC, v61);
LABEL_44:
    LODWORD(v3[-8].buffer_.data_) = common::tools::PTree::get<unsigned int>(server_pt, &child_name);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
      operator delete(child_name._M_dataplus._M_p);
    child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&child_name, &byte_1AE3B22E[-14], byte_1AE3B22E, v22);
    common::tools::PTree::get<std::string>(&v114, server_pt, &child_name);
    v23 = v3[-8].buffer_.cur_;
    M_p = v114._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v114._M_dataplus._M_p == &v114._anon_0 )
    {
      if ( v114._M_string_length )
      {
        if ( v114._M_string_length == 1 )
        {
          v30 = *(_BYTE *)(((unsigned __int64)v114._M_dataplus._M_p >> 3) + 0x7FFF8000);
          if ( v30 <= ((__int64)v114._M_dataplus._M_p & 7) && v30 )
          {
            v23 = v114._M_dataplus._M_p;
            __asan_report_load1(v114._M_dataplus._M_p);
          }
          else
          {
            v31 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
            if ( v31 > ((__int64)v3[-8].buffer_.cur_ & 7) || !v31 )
            {
              *v23 = *v114._M_dataplus._M_p;
              goto LABEL_61;
            }
          }
          __asan_report_store1(v23);
LABEL_71:
          __asan_report_store1(v23);
          goto LABEL_72;
        }
        memcpy(v23, v114._M_dataplus._M_p, v114._M_string_length);
      }
LABEL_61:
      M_string_length = v114._M_string_length;
      v3[-7].buffer_.data_ = (char *)v114._M_string_length;
      v28 = &v3[-8].buffer_.cur_[M_string_length];
      v23 = v28;
      v29 = *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000);
      if ( v29 > ((unsigned __int8)v28 & 7) || !v29 )
      {
        *v28 = 0;
        goto LABEL_51;
      }
      goto LABEL_71;
    }
    if ( v23 != (std::string::pointer)&v3[-7].buffer_.cur_ )
    {
      v106 = (std::string::size_type)v3[-7].buffer_.cur_;
      goto LABEL_49;
    }
LABEL_72:
    v23 = 0LL;
LABEL_49:
    v3[-8].buffer_.cur_ = M_p;
    v3[-7].buffer_.data_ = (char *)v114._M_string_length;
    v3[-7].buffer_.cur_ = (char *)v114._anon_0._M_allocated_capacity;
    if ( v23 )
    {
      v114._M_dataplus._M_p = v23;
      v114._anon_0._M_allocated_capacity = v106;
    }
    else
    {
      v114._M_dataplus._M_p = v114._anon_0._M_local_buf;
    }
LABEL_51:
    v114._M_string_length = 0LL;
    v25 = *(_BYTE *)(((unsigned __int64)v114._M_dataplus._M_p >> 3) + 0x7FFF8000);
    v26.gap0[0] = (__int64)v114._M_dataplus._M_p & 7;
    if ( v25 <= ((__int64)v114._M_dataplus._M_p & 7) && v25 )
    {
      __asan_report_store1(v114._M_dataplus._M_p);
    }
    else
    {
      *v114._M_dataplus._M_p = 0;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v114._M_dataplus._M_p != &v114._anon_0 )
        operator delete(v114._M_dataplus._M_p);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
        operator delete(child_name._M_dataplus._M_p);
      child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&child_name, &byte_1AE3B272[-18], byte_1AE3B272, v26);
    }
    common::tools::PTree::get<std::string>((std::string *)&v3[-24], server_pt, &child_name);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
      operator delete(child_name._M_dataplus._M_p);
    LODWORD(v3[-6].buffer_.cur_) = common::tools::NetUtils::inetAton((const std::string *)&v3[-24]);
    child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&child_name, &byte_1AE3B2B2[-18], byte_1AE3B2B2, v32);
    common::tools::PTree::get<std::string>((std::string *)&v3[-20], server_pt, &child_name);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
      operator delete(child_name._M_dataplus._M_p);
    HIDWORD(v3[-6].buffer_.cur_) = common::tools::NetUtils::inetAton((const std::string *)&v3[-20]);
    child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&child_name, byte_1AE3B2E0, byte_1AE3B2E0, v33);
    path._M_dataplus._M_p = path._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&path, &byte_1AE3B339[-25], byte_1AE3B339, v34);
    common::tools::PTree::get<std::string>((std::string *)&v3[-16], server_pt, &path, v104);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
      operator delete(path._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
      operator delete(child_name._M_dataplus._M_p);
    s._M_dataplus._M_p = s._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&s, &byte_1AE3A6C4[-4], byte_1AE3A6C4, v35);
    common::tools::StringUtils::trim(&child_name, (const std::string *)&v3[-16], &s, 1);
    common::tools::StringUtils::toLower((std::string *)&v3[-12], &child_name);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
      operator delete(child_name._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s._M_dataplus._M_p != &s._anon_0 )
      operator delete(s._M_dataplus._M_p);
    if ( !(unsigned int)std::string::compare(&v3[-12], "false") )
    {
      LOBYTE(v3[-5].buffer_.data_) = 0;
    }
    else if ( !(unsigned int)std::string::compare(&v3[-12], "true") )
    {
      LOBYTE(v3[-5].buffer_.data_) = 1;
    }
    else
    {
      LODWORD(v3[-33].buffer_.data_) = 0;
      if ( !common::tools::StringUtils::strToNum<int>((const std::string *)&v3[-16], (int *)&v3[-33], 0) )
        LOBYTE(v3[-5].buffer_.data_) = LODWORD(v3[-33].buffer_.data_) != 0;
    }
    data = v3[-12].buffer_.data_;
    if ( data != (char *)&v3[-11] )
      operator delete(data);
    s._M_dataplus._M_p = s._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&s, byte_1AE3B2E0, byte_1AE3B2E0, v36);
    v116._M_dataplus._M_p = v116._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v116, &byte_1AE3B375[-21], byte_1AE3B375, v38);
    common::tools::PTree::get<std::string>(&child_name, server_pt, &v116, v105);
    v40 = v3[-5].buffer_.cur_;
    v41 = child_name._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p == &child_name._anon_0 )
    {
      if ( child_name._M_string_length )
      {
        if ( child_name._M_string_length == 1 )
        {
          v48 = *(_BYTE *)(((unsigned __int64)child_name._M_dataplus._M_p >> 3) + 0x7FFF8000);
          if ( v48 <= ((__int64)child_name._M_dataplus._M_p & 7) && v48 )
          {
            v40 = child_name._M_dataplus._M_p;
            __asan_report_load1(child_name._M_dataplus._M_p);
          }
          else
          {
            v49 = *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000);
            if ( v49 > ((__int64)v3[-5].buffer_.cur_ & 7) || !v49 )
            {
              *v40 = *child_name._M_dataplus._M_p;
              goto LABEL_113;
            }
          }
          __asan_report_store1(v40);
LABEL_123:
          __asan_report_store1(v40);
          goto LABEL_124;
        }
        memcpy(v40, child_name._M_dataplus._M_p, child_name._M_string_length);
      }
LABEL_113:
      v45 = child_name._M_string_length;
      v3[-4].buffer_.data_ = (char *)child_name._M_string_length;
      v46 = &v3[-5].buffer_.cur_[v45];
      v40 = v46;
      v47 = *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000);
      if ( v47 > ((unsigned __int8)v46 & 7) || !v47 )
      {
        *v46 = 0;
        goto LABEL_101;
      }
      goto LABEL_123;
    }
    if ( v40 != (std::string::pointer)&v3[-4].buffer_.cur_ )
    {
      *(&v104._anon_0._M_allocated_capacity + 1) = (std::string::size_type)v3[-4].buffer_.cur_;
      goto LABEL_99;
    }
LABEL_124:
    v40 = 0LL;
LABEL_99:
    v3[-5].buffer_.cur_ = v41;
    v3[-4].buffer_.data_ = (char *)child_name._M_string_length;
    v3[-4].buffer_.cur_ = (char *)child_name._anon_0._M_allocated_capacity;
    if ( v40 )
    {
      child_name._M_dataplus._M_p = v40;
      child_name._anon_0._M_allocated_capacity = *(&v104._anon_0._M_allocated_capacity + 1);
    }
    else
    {
      child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
    }
LABEL_101:
    child_name._M_string_length = 0LL;
    v42 = *(_BYTE *)(((unsigned __int64)child_name._M_dataplus._M_p >> 3) + 0x7FFF8000);
    v43 = (unsigned int *)((__int64)child_name._M_dataplus._M_p & 7);
    if ( v42 <= (char)v43 && v42 )
    {
      __asan_report_store1(child_name._M_dataplus._M_p);
    }
    else
    {
      *child_name._M_dataplus._M_p = 0;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
        operator delete(child_name._M_dataplus._M_p);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v116._M_dataplus._M_p != &v116._anon_0 )
        operator delete(v116._M_dataplus._M_p);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s._M_dataplus._M_p != &s._anon_0 )
        operator delete(s._M_dataplus._M_p);
      v44 = std::_Rb_tree<unsigned int,std::pair<unsigned int const,ServerConfig>,std::_Select1st<std::pair<unsigned int const,ServerConfig>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ServerConfig>>>::_M_emplace_unique<unsigned int &,ServerConfig&>(
              &p_server_config_map->_M_t,
              (unsigned int *)&v3[-8],
              (ServerConfig *)&v3[-8],
              v43,
              v39);
    }
    if ( !v44.second )
    {
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/core_class/app_base.cpp",
        "initServerConfig",
        592);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&child_name,
        "duplicate server config, id=%u host_name=%s inner_ip=%s outer_ip=%s use_domain_name=%u, domain_name=%s",
        *(unsigned int *)(v2 - 128),
        *(const char **)(v2 - 120),
        *(const char **)(v2 - 384),
        *(const char **)(v2 - 320),
        *(unsigned __int8 *)(v2 - 80),
        *(const char **)(v2 - 72));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      v50 = *(void **)(v2 - 256);
      if ( v50 != (void *)(v2 - 240) )
        operator delete(v50);
      v51 = *(void **)(v2 - 320);
      if ( v51 != (void *)(v2 - 304) )
        operator delete(v51);
      v52 = *(void **)(v2 - 384);
      if ( v52 != (void *)(v2 - 368) )
        operator delete(v52);
      v53 = *(void **)(v2 - 72);
      if ( v53 != (void *)(v2 - 56) )
        operator delete(v53);
      v54 = *(void **)(v2 - 120);
      if ( v54 != (void *)(v2 - 104) )
        operator delete(v54);
LABEL_32:
      std::_List_base<std::pair<std::string,common::tools::PTree>>::_M_clear(&v112);
      v20 = -1;
      goto LABEL_33;
    }
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&child_name,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "src/core_class/app_base.cpp",
      "initServerConfig",
      597);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&child_name,
      "load server config succ, id=%u host_name=%s inner_ip=%s outer_ip=%s use_domain_name=%u, domain_name=%s",
      LODWORD(v3[-8].buffer_.data_),
      v3[-8].buffer_.cur_,
      v3[-24].buffer_.data_,
      v3[-20].buffer_.data_,
      LOBYTE(v3[-5].buffer_.data_),
      v3[-5].buffer_.cur_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    v55 = v3[-16].buffer_.data_;
    if ( v55 != (char *)&v3[-15] )
      operator delete(v55);
    v56 = v3[-20].buffer_.data_;
    if ( v56 != (char *)&v3[-19] )
      operator delete(v56);
    v57 = v3[-24].buffer_.data_;
    if ( v57 != (char *)&v3[-23] )
      operator delete(v57);
    v58 = v3[-5].buffer_.cur_;
    if ( v58 != (char *)&v3[-4].buffer_.cur_ )
      operator delete(v58);
    v59 = v3[-8].buffer_.cur_;
    if ( v59 != (char *)&v3[-7].buffer_.cur_ )
      operator delete(v59);
    if ( *(_BYTE *)((ostr >> 3) + 0x7FFF8000) )
      break;
  }
  __asan_report_load8(ostr);
LABEL_155:
  std::_List_base<std::pair<std::string,common::tools::PTree>>::_M_clear(&v112);
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, &byte_1AE3B4F1[-17], byte_1AE3B4F1, v62);
  common::tools::PTree::getChildOptional((const common::tools::PTree *const)v104._M_string_length, &child_name);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  if ( !*(_BYTE *)(v2 - 440) )
    goto LABEL_161;
  *(_QWORD *)(v2 - 384) = v2 - 368;
  std::string::_M_construct<char const*>((std::string *const)(v2 - 384), &byte_1AE3B538[-24], byte_1AE3B538, v63);
  v64 = common::tools::PTree::get<bool>(
          (const common::tools::PTree *const)(v2 - 448),
          (const std::string *)(v2 - 384),
          0);
  v65 = *(void **)(v2 - 384);
  if ( v65 != (void *)(v2 - 368) )
    operator delete(v65);
  if ( !v64 )
  {
LABEL_161:
    child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&child_name, &byte_1AE3B6F5[-21], byte_1AE3B6F5, v63);
    goto LABEL_214;
  }
  *(_DWORD *)(v2 - 528) = AppBase::getHostId(this);
  M_node = (size_t)std::_Rb_tree<unsigned int,std::pair<unsigned int const,ServerConfig>,std::_Select1st<std::pair<unsigned int const,ServerConfig>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ServerConfig>>>::find(
                     &p_server_config_map->_M_t,
                     (const unsigned int *)(v2 - 528))._M_node;
  if ( (std::_Rb_tree_header *)M_node == &this->server_config_map_._M_t._M_impl.std::_Rb_tree_header )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v2 - 320),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/app_base.cpp",
      "initServerConfig",
      613);
    v68 = *(_QWORD *)(v2 - 296);
    if ( *(_BYTE *)((v68 >> 3) + 0x7FFF8000) )
    {
      p_app_id = *(uint32_t **)(v2 - 296);
      __asan_report_load8(p_app_id);
    }
    else
    {
      p_app_id = (uint32_t *)(v68 + 8);
      if ( !*(_BYTE *)(((v68 + 8) >> 3) + 0x7FFF8000) )
      {
        v70 = *(void **)(v68 + 8);
        M_node = (int)(*(_QWORD *)v68 + 0x4000 - (_DWORD)v70);
        if ( M_node > 7 )
          M_node = 8LL;
        memcpy(v70, "app_id_:", M_node);
        *(_QWORD *)(v68 + 8) += M_node;
        p_app_id = &this->app_id_;
        v71 = *(_BYTE *)(((unsigned __int64)&this->app_id_ >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)this + 8) & 7) + 3) < v71 || !v71 )
        {
          common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
            *(common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)(v2 - 296),
            this->app_id_);
          v68 = *(_QWORD *)(v2 - 296);
          if ( !*(_BYTE *)((v68 >> 3) + 0x7FFF8000) )
          {
            v72 = (_QWORD *)(v68 + 8);
            if ( !*(_BYTE *)(((v68 + 8) >> 3) + 0x7FFF8000) )
            {
              v73 = *(void **)(v68 + 8);
              M_node = (int)(*(_QWORD *)v68 + 0x4000 - (_DWORD)v73);
              if ( M_node > 0x12 )
                M_node = 19LL;
              memcpy(v73, " not found host_id:", M_node);
              *(_QWORD *)(v68 + 8) += M_node;
              common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                *(common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)(v2 - 296),
                *(_DWORD *)(v2 - 528));
              v68 = *(_QWORD *)(v2 - 296);
              if ( !*(_BYTE *)((v68 >> 3) + 0x7FFF8000) )
              {
                v74 = (_QWORD *)(v68 + 8);
                if ( !*(_BYTE *)(((v68 + 8) >> 3) + 0x7FFF8000) )
                {
                  v75 = *(void **)(v68 + 8);
                  v76 = (int)(*(_QWORD *)v68 + 0x4000 - (_DWORD)v75);
                  if ( v76 > 7 )
                    v76 = 8LL;
                  memcpy(v75, " in xml!", v76);
                  *(_QWORD *)(v68 + 8) += v76;
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 - 320));
LABEL_206:
                  v20 = -1;
                  goto LABEL_243;
                }
LABEL_185:
                InnerIpInt = __asan_report_load8(v74);
                goto LABEL_186;
              }
LABEL_184:
              v74 = (_QWORD *)v68;
              __asan_report_load8(v68);
              goto LABEL_185;
            }
LABEL_183:
            __asan_report_load8(v72);
            goto LABEL_184;
          }
LABEL_182:
          v72 = (_QWORD *)v68;
          __asan_report_load8(v68);
          goto LABEL_183;
        }
LABEL_181:
        __asan_report_load4(p_app_id);
        goto LABEL_182;
      }
    }
    __asan_report_load8(p_app_id);
    goto LABEL_181;
  }
  InnerIpInt = common::tools::NetUtils::getInnerIpInt();
LABEL_186:
  v77 = InnerIpInt;
  v78 = *(_BYTE *)(((M_node + 80) >> 3) + 0x7FFF8000);
  if ( v78 && v78 <= 3 )
  {
    __asan_report_load4(M_node + 80);
  }
  else
  {
    if ( *(_DWORD *)(M_node + 80) == v77 )
      goto LABEL_161;
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v2 - 256),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/app_base.cpp",
      "initServerConfig",
      619);
  }
  v79 = *(_QWORD *)(v2 - 232);
  if ( *(_BYTE *)((v79 >> 3) + 0x7FFF8000) )
  {
    v80 = *(_QWORD *)(v2 - 232);
    __asan_report_load8(v80);
    goto LABEL_208;
  }
  v80 = v79 + 8;
  if ( *(_BYTE *)(((v79 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_208:
    __asan_report_load8(v80);
LABEL_209:
    v82 = v79;
    __asan_report_load8(v79);
    goto LABEL_210;
  }
  v81 = *(void **)(v79 + 8);
  server_pta = *(_DWORD *)v79 + 0x4000 - (int)v81;
  if ( server_pta > 7 )
    server_pta = 8LL;
  memcpy(v81, "host_id:", server_pta);
  *(_QWORD *)(v79 + 8) += server_pta;
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
    *(common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)(v2 - 232),
    *(_DWORD *)(v2 - 528));
  v79 = *(_QWORD *)(v2 - 232);
  if ( *(_BYTE *)((v79 >> 3) + 0x7FFF8000) )
    goto LABEL_209;
  v82 = v79 + 8;
  if ( *(_BYTE *)(((v79 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_210:
    __asan_report_load8(v82);
LABEL_211:
    __asan_report_load4(v82);
    goto LABEL_212;
  }
  v83 = *(void **)(v79 + 8);
  server_ptb = *(_DWORD *)v79 + 0x4000 - (int)v83;
  if ( server_ptb > 0xD )
    server_ptb = 14LL;
  memcpy(v83, " xml inner_ip:", server_ptb);
  *(_QWORD *)(v79 + 8) += server_ptb;
  v82 = M_node + 80;
  v84 = *(_BYTE *)(((M_node + 80) >> 3) + 0x7FFF8000);
  if ( (char)(((M_node + 80) & 7) + 3) >= v84 && v84 )
    goto LABEL_211;
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
    *(common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)(v2 - 232),
    *(_DWORD *)(M_node + 80));
  v79 = *(_QWORD *)(v2 - 232);
  if ( *(_BYTE *)((v79 >> 3) + 0x7FFF8000) )
  {
LABEL_212:
    v85 = v79;
    __asan_report_load8(v79);
    goto LABEL_213;
  }
  v85 = v79 + 8;
  if ( !*(_BYTE *)(((v79 + 8) >> 3) + 0x7FFF8000) )
  {
    v86 = *(void **)(v79 + 8);
    v87 = (int)(*(_QWORD *)v79 + 0x4000 - (_DWORD)v86);
    if ( v87 > 0x16 )
      v87 = 23LL;
    memcpy(v86, " but getInnerIp return:", v87);
    *(_QWORD *)(v79 + 8) += v87;
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      *(common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)(v2 - 232),
      v77);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 - 256));
    goto LABEL_206;
  }
LABEL_213:
  __asan_report_load8(v85);
LABEL_214:
  common::tools::PTree::getChildOptional((const common::tools::PTree *const)v104._M_string_length, &child_name);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  if ( *(_BYTE *)(v2 - 408) )
  {
    *(_QWORD *)(v2 - 192) = v2 - 176;
    std::string::_M_construct<char const*>((std::string *const)(v2 - 192), &byte_1AE3B732[-18], byte_1AE3B732, v88);
    v89 = common::tools::PTree::get<unsigned int>(
            (const common::tools::PTree *const)(v2 - 416),
            (const std::string *)(v2 - 192),
            0x12Cu);
    v90 = *(_BYTE *)(((unsigned __int64)&this->auto_reload_config_interval_ >> 3) + 0x7FFF8000);
    if ( v90 && v90 <= 3 )
    {
      __asan_report_store4(&this->auto_reload_config_interval_);
    }
    else
    {
      v91.gap0[0] = (char)this;
      this->auto_reload_config_interval_ = v89;
      v92 = *(void **)(v2 - 192);
      if ( v92 != (void *)(v2 - 176) )
        operator delete(v92);
      s._M_dataplus._M_p = s._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&s, &byte_1AE3B779[-25], byte_1AE3B779, v91);
    }
    v93 = common::tools::PTree::get<unsigned int>((const common::tools::PTree *const)(v2 - 416), &s, 0x12Cu);
    v94 = *(_BYTE *)(((unsigned __int64)&this->max_reload_config_random_time_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 20) & 7) + 3) < v94 || !v94 )
    {
      this->max_reload_config_random_time_ = v93;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s._M_dataplus._M_p != &s._anon_0 )
        operator delete(s._M_dataplus._M_p);
      goto LABEL_227;
    }
    __asan_report_store4(&this->max_reload_config_random_time_);
  }
  else
  {
LABEL_227:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&child_name,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "src/core_class/app_base.cpp",
      "initServerConfig",
      632);
  }
  v95 = *(&child_name._anon_0._M_allocated_capacity + 1);
  if ( *(_BYTE *)((*(&child_name._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
  {
    p_auto_reload_config_interval = (uint32_t *)*(&child_name._anon_0._M_allocated_capacity + 1);
    __asan_report_load8(*(&child_name._anon_0._M_allocated_capacity + 1));
    goto LABEL_246;
  }
  p_auto_reload_config_interval = (uint32_t *)(*(&child_name._anon_0._M_allocated_capacity + 1) + 8);
  if ( *(_BYTE *)(((*(&child_name._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_246:
    __asan_report_load8(p_auto_reload_config_interval);
LABEL_247:
    __asan_report_load4(p_auto_reload_config_interval);
    goto LABEL_248;
  }
  v97 = *(void **)(*(&child_name._anon_0._M_allocated_capacity + 1) + 8);
  v98 = (int)(**((_QWORD **)&child_name._anon_0._M_allocated_capacity + 1) + 0x4000 - (_DWORD)v97);
  if ( v98 > 0x19 )
    v98 = 26LL;
  memcpy(v97, "AutoReloadConfig interval:", v98);
  *(_QWORD *)(v95 + 8) += v98;
  p_auto_reload_config_interval = &this->auto_reload_config_interval_;
  v99 = *(_BYTE *)(((unsigned __int64)&this->auto_reload_config_interval_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 16) & 7) + 3) >= v99 && v99 )
    goto LABEL_247;
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
    *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&child_name._anon_0._M_allocated_capacity
    + 1),
    this->auto_reload_config_interval_);
  v95 = *(&child_name._anon_0._M_allocated_capacity + 1);
  if ( *(_BYTE *)((*(&child_name._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_248:
    p_max_reload_config_random_time = (uint32_t *)v95;
    __asan_report_load8(v95);
    goto LABEL_249;
  }
  p_max_reload_config_random_time = (uint32_t *)(*(&child_name._anon_0._M_allocated_capacity + 1) + 8);
  if ( *(_BYTE *)(((*(&child_name._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_249:
    __asan_report_load8(p_max_reload_config_random_time);
    goto LABEL_250;
  }
  v101 = *(void **)(*(&child_name._anon_0._M_allocated_capacity + 1) + 8);
  v102 = (int)(**((_QWORD **)&child_name._anon_0._M_allocated_capacity + 1) + 0x4000 - (_DWORD)v101);
  if ( v102 > 0x10 )
    v102 = 17LL;
  memcpy(v101, " max_random_time:", v102);
  *(_QWORD *)(v95 + 8) += v102;
  p_max_reload_config_random_time = &this->max_reload_config_random_time_;
  v103 = *(_BYTE *)(((unsigned __int64)&this->max_reload_config_random_time_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 20) & 7) + 3) < v103 || !v103 )
  {
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&child_name._anon_0._M_allocated_capacity
      + 1),
      this->max_reload_config_random_time_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    if ( !*(_BYTE *)(v2 - 408) )
      goto LABEL_242;
    goto LABEL_251;
  }
LABEL_250:
  __asan_report_load4(p_max_reload_config_random_time);
LABEL_251:
  *(_BYTE *)(v2 - 408) = 0;
  common::tools::PTree::~PTree((common::tools::PTree *const)(v2 - 416));
LABEL_242:
  v20 = 0;
LABEL_243:
  if ( *(_BYTE *)(v2 - 440) )
  {
    *(_BYTE *)(v2 - 440) = 0;
    common::tools::PTree::~PTree((common::tools::PTree *const)(v2 - 448));
  }
LABEL_33:
  common::tools::PTree::~PTree((common::tools::PTree *const)(v2 - 480));
  if ( &_pthread_key_create )
    pthread_mutex_unlock(*(pthread_mutex_t **)(v2 - 512));
  if ( v104._M_dataplus._M_p == (std::string::pointer)v104._anon_0._M_allocated_capacity )
  {
    *(_QWORD *)(v4 + 2147450880) = 0LL;
    *(_QWORD *)(v4 + 2147450888) = 0LL;
    *(_QWORD *)(v4 + 2147450896) = 0LL;
    *(_DWORD *)(v4 + 2147450908) = 0;
    *(_DWORD *)(v4 + 2147450916) = 0;
    *(_DWORD *)(v4 + 2147450924) = 0;
    *(_DWORD *)(v4 + 2147450932) = 0;
    *(_QWORD *)(v4 + 2147450944) = 0LL;
  }
  else
  {
    *(_QWORD *)v104._anon_0._M_allocated_capacity = 1172321806LL;
    *(_QWORD *)(v4 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(v4 + 2147450888) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(v4 + 2147450896) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(v4 + 2147450904) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(v4 + 2147450912) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(v4 + 2147450920) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(v4 + 2147450928) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(v4 + 2147450936) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(v4 + 2147450944) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v20;
};

// Line 639: range 0000000014E4CACE-0000000014E4D74B
int32_t __fastcall AppBase::initAppHostConfig(AppBase *const this, common::tools::PTree *pt)
{
  std::_Rb_tree_node_base::_Base_ptr M_parent; // r14
  std::mutex *p_app_host_config_mutex; // rdi
  int v5; // r12d
  void *p_M_parent; // rdi
  std::forward_iterator_tag v7; // cl
  std::_Rb_tree_header *v8; // rax
  __int64 v9; // rax
  std::list<std::pair<std::string,common::tools::PTree>> *M_next; // rbp
  std::size_t *p_M_size; // rdi
  const common::tools::PTree *v12; // rbp
  std::forward_iterator_tag v13; // cl
  std::forward_iterator_tag v14; // cl
  __int64 v15; // rdx
  std::forward_iterator_tag v16; // cl
  uint32_t v17; // esi
  uint32_t HostId; // eax
  bool M_engaged; // r12
  std::list<std::pair<std::string,common::tools::PTree>> *i; // rbp
  char *v21; // rdi
  int32_t v22; // ebx
  std::forward_iterator_tag v24; // cl
  unsigned int v25; // r13d
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v26; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v27; // r9
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rbp
  size_t *v30; // rcx
  size_t *v31; // rdi
  size_t v32; // rcx
  int v33; // eax
  __int64 v34; // rbp
  std::tuple<const std::string&> *v35; // rdi
  char v36; // cl
  char *v37; // rdi
  std::list<std::pair<std::string,common::tools::PTree>> *v38; // r12
  std::size_t *v39; // rdi
  const common::tools::PTree *v40; // rbp
  std::forward_iterator_tag v41; // cl
  unsigned int *v42; // rcx
  AppHostConfig *v43; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,AppHostConfig> >,bool> v44; // rax
  char *v45; // rdi
  std::tuple<const std::string&> *__args_1; // [rsp+0h] [rbp-2C8h]
  std::tuple<> *__pos; // [rsp+8h] [rbp-2C0h]
  std::list<std::pair<std::string,common::tools::PTree>> *v48; // [rsp+18h] [rbp-2B0h]
  unsigned __int64 v49; // [rsp+20h] [rbp-2A8h]
  std::map<unsigned int,AppHostConfig> *p_app_host_map; // [rsp+28h] [rbp-2A0h]
  _DWORD *v51; // [rsp+30h] [rbp-298h]
  std::tuple<> v52; // [rsp+4Fh] [rbp-279h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>> v53; // [rsp+50h] [rbp-278h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>> v54; // [rsp+70h] [rbp-258h] BYREF
  std::string child_name; // [rsp+90h] [rbp-238h] BYREF
  std::optional<ServerConfig> v56; // [rsp+B0h] [rbp-218h] BYREF
  char v57[440]; // [rsp+110h] [rbp-1B8h] BYREF

  v49 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_3(384LL);
    if ( v9 )
      v49 = v9;
  }
  *(_QWORD *)v49 = 1102416563LL;
  *(_QWORD *)(v49 + 8) = "7 32 8 8 lock:641 64 8 15 app_list_pt:643 96 8 6 __size 128 8 7 __osize 160 32 14 app_id_str:65"
                         "2 224 32 13 port_name:673 288 56 19 app_host_config:651";
  *(_QWORD *)(v49 + 16) = AppBase::initAppHostConfig;
  v51 = (_DWORD *)(v49 >> 3);
  v51[536862720] = -235802127;
  v51[536862721] = -218959360;
  v51[536862722] = -218959360;
  v51[536862723] = -218959360;
  v51[536862724] = -218959360;
  v51[536862726] = -218959118;
  v51[536862728] = -218959118;
  v51[536862730] = -218103808;
  v51[536862731] = -202116109;
  p_app_host_config_mutex = &this->app_host_config_mutex_;
  *(_QWORD *)(v49 + 32) = &this->app_host_config_mutex_;
  if ( &_pthread_key_create )
  {
    v5 = pthread_mutex_lock(&p_app_host_config_mutex->_M_mutex);
    if ( v5 )
    {
      __asan_handle_no_return(p_app_host_config_mutex);
      std::__throw_system_error(v5);
    }
  }
  p_app_host_map = &this->app_host_map_;
  p_M_parent = &this->app_host_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&this->app_host_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_parent);
    goto LABEL_14;
  }
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,AppHostConfig>,std::_Select1st<std::pair<unsigned int const,AppHostConfig>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AppHostConfig>>>::_M_erase(
    &p_app_host_map->_M_t,
    (std::_Rb_tree<unsigned int,std::pair<unsigned int const,AppHostConfig>,std::_Select1st<std::pair<unsigned int const,AppHostConfig> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AppHostConfig> > >::_Link_type)this->app_host_map_._M_t._M_impl._M_header._M_parent);
  p_M_parent = &this->app_host_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&this->app_host_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_store8(p_M_parent);
    goto LABEL_15;
  }
  this->app_host_map_._M_t._M_impl._M_header._M_parent = 0LL;
  v8 = &this->app_host_map_._M_t._M_impl.std::_Rb_tree_header;
  p_M_parent = &this->app_host_map_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&this->app_host_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_store8(p_M_parent);
    goto LABEL_16;
  }
  this->app_host_map_._M_t._M_impl._M_header._M_left = &v8->_M_header;
  p_M_parent = &this->app_host_map_._M_t._M_impl._M_header._M_right;
  if ( *(_BYTE *)(((unsigned __int64)&this->app_host_map_._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_store8(p_M_parent);
    goto LABEL_17;
  }
  this->app_host_map_._M_t._M_impl._M_header._M_right = &v8->_M_header;
  p_M_parent = &this->app_host_map_._M_t._M_impl._M_node_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->app_host_map_._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_store8(p_M_parent);
    goto LABEL_18;
  }
  this->app_host_map_._M_t._M_impl._M_node_count = 0LL;
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, &byte_1AE3BB0C[-12], byte_1AE3BB0C, v7);
LABEL_18:
  common::tools::PTree::getChild(pt, &child_name);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  common::tools::PTree::getAllChild[abi:cxx11](&v53, (const common::tools::PTree *const)(v49 + 64));
  M_next = (std::list<std::pair<std::string,common::tools::PTree>> *)v53._M_impl._M_node._M_next;
  while ( 2 )
  {
    v48 = M_next;
    if ( M_next == &v53 )
      goto LABEL_98;
    p_M_size = &M_next->_M_impl._M_node._M_size;
    v12 = (const common::tools::PTree *)&M_next[2];
    if ( (unsigned int)std::string::compare(p_M_size, &off_1AE3BB40) )
    {
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/core_class/app_base.cpp",
        "initAppHostConfig",
        648);
      if ( *(_BYTE *)(((unsigned __int64)&v48->_M_impl._M_node._M_size >> 3) + 0x7FFF8000) )
        __asan_report_load8(&v48->_M_impl._M_node._M_size);
      else
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)&child_name,
          "invalid pt name: %s",
          (const char *)v48->_M_impl._M_node._M_size);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
LABEL_50:
      std::_List_base<std::pair<std::string,common::tools::PTree>>::_M_clear(&v53);
      v22 = -1;
      goto LABEL_51;
    }
    *(_DWORD *)(v49 + 288) = 0;
    *(_DWORD *)(v49 + 292) = 0;
    *(_DWORD *)(v49 + 304) = 0;
    *(_QWORD *)(v49 + 312) = 0LL;
    *(_QWORD *)(v49 + 320) = v49 + 304;
    *(_QWORD *)(v49 + 328) = v49 + 304;
    *(_QWORD *)(v49 + 336) = 0LL;
    child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&child_name, &byte_1AE3BC10[-16], byte_1AE3BC10, v13);
    common::tools::PTree::get<std::string>((std::string *)(v49 + 160), v12, &child_name);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
      operator delete(child_name._M_dataplus._M_p);
    child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &child_name,
      *(char **)(v49 + 160),
      (char *)(*(_QWORD *)(v49 + 168) + *(_QWORD *)(v49 + 160)),
      v14);
    *(_DWORD *)(v49 + 288) = AppBase::getAppId(this, (unsigned __int64)&child_name, v15, v16);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
      operator delete(child_name._M_dataplus._M_p);
    v17 = *(_DWORD *)(v49 + 288);
    if ( !v17 )
    {
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/core_class/app_base.cpp",
        "initAppHostConfig",
        656);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&child_name,
        "invalid app_config app_id is 0");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
LABEL_47:
      v21 = *(char **)(v49 + 160);
      if ( v21 != (char *)(v49 + 176) )
        operator delete(v21);
      std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_erase(
        (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > > *const)(v49 + 296),
        *(std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type *)(v49 + 312));
      goto LABEL_50;
    }
    HostId = AppBase::getHostId(this, v17);
    *(_DWORD *)(v49 + 292) = HostId;
    AppBase::findServerConfig(&v56, this, HostId);
    M_engaged = v56._M_payload._M_engaged;
    if ( v56._M_payload._M_engaged )
    {
      v56._M_payload._M_engaged = 0;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v56._M_payload._M_payload._M_value.domain_name._M_dataplus._M_p != &v56._M_payload._M_payload._M_value.domain_name._anon_0 )
        operator delete(v56._M_payload._M_payload._M_value.domain_name._M_dataplus._M_p);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v56._M_payload._M_payload._M_value.host_name._M_dataplus._M_p != &v56._M_payload._M_payload._M_value.host_name._anon_0 )
        operator delete(v56._M_payload._M_payload._M_value.host_name._M_dataplus._M_p);
    }
    if ( !M_engaged )
    {
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/core_class/app_base.cpp",
        "initAppHostConfig",
        662);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&child_name,
        "findServerConfig failed app_id=%s",
        *(const char **)(v49 + 160));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      goto LABEL_47;
    }
    common::tools::PTree::getAllChild[abi:cxx11](&v54, v12);
    for ( i = (std::list<std::pair<std::string,common::tools::PTree>> *)v54._M_impl._M_node._M_next;
          ;
          i = (std::list<std::pair<std::string,common::tools::PTree>> *)v38->_M_impl._M_node._M_next )
    {
      v38 = i;
      if ( i == &v54 )
        break;
      v39 = &i->_M_impl._M_node._M_size;
      v40 = (const common::tools::PTree *)&i[2];
      if ( (unsigned int)std::string::compare(v39, "Port") )
      {
        common::milog::MiLogStream::MiLogStream(
          (common::milog::MiLogStream *const)&child_name,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/core_class/app_base.cpp",
          "initAppHostConfig",
          669);
        if ( *(_BYTE *)(((unsigned __int64)&v38->_M_impl._M_node._M_size >> 3) + 0x7FFF8000) )
          __asan_report_load8(&v38->_M_impl._M_node._M_size);
        else
          common::milog::MiLogStream::operator()(
            (common::milog::MiLogStream *const)&child_name,
            "invalid pt name: %s",
            (const char *)v38->_M_impl._M_node._M_size);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
        std::_List_base<std::pair<std::string,common::tools::PTree>>::_M_clear(&v54);
        goto LABEL_47;
      }
      child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&child_name, &byte_1AE3BD2E[-14], byte_1AE3BD2E, v41);
      common::tools::PTree::get<std::string>((std::string *)(v49 + 224), v40, &child_name);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
        operator delete(child_name._M_dataplus._M_p);
      child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&child_name, &byte_1AE3BD6E[-14], byte_1AE3BD6E, v24);
      v25 = common::tools::PTree::get<unsigned int>(v40, &child_name);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
        operator delete(child_name._M_dataplus._M_p);
      v26._M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_lower_bound(
                      (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > > *const)(v49 + 296),
                      *(std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type *)(v49 + 312),
                      (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Base_ptr)(v49 + 304),
                      (const std::string *)(v49 + 224))._M_node;
      __args_1 = (std::tuple<const std::string&> *)v26._M_node;
      __pos = (std::tuple<> *)v26._M_node;
      if ( v26._M_node == (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)(v49 + 304) )
      {
LABEL_72:
        *(_QWORD *)(v49 + 128) = v49 + 224;
        __args_1 = (std::tuple<const std::string&> *)std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string const&>,std::tuple<>>(
                                                       (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > > *const)(v49 + 296),
                                                       (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::const_iterator)__pos,
                                                       &std::piecewise_construct,
                                                       (std::tuple<const std::string&> *)(v49 + 128),
                                                       &v52,
                                                       (const std::piecewise_construct_t *)v27._M_node,
                                                       __args_1,
                                                       __pos)._M_node;
        goto LABEL_79;
      }
      v28 = (unsigned __int64)&v26._M_node[1];
      v29 = *(_QWORD *)(v49 + 232);
      *(_QWORD *)(v49 + 96) = v29;
      if ( *(_BYTE *)(((unsigned __int64)&v26._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
      {
        v26._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)__asan_report_load8(&v26._M_node[1]._M_parent);
      }
      else
      {
        M_parent = v26._M_node[1]._M_parent;
        *(_QWORD *)(v49 + 128) = M_parent;
        if ( v29 <= (unsigned __int64)M_parent )
        {
          v30 = (size_t *)(v49 + 96);
          goto LABEL_64;
        }
      }
      v30 = (size_t *)(v49 + 128);
LABEL_64:
      v31 = v30;
      if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v30);
LABEL_76:
        __asan_report_load8(v31);
LABEL_77:
        v33 = 0x7FFFFFFF;
        goto LABEL_71;
      }
      v32 = *v30;
      v31 = (size_t *)v28;
      if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
        goto LABEL_76;
      if ( !v32 || (v33 = memcmp(*(const void **)(v49 + 224), *(const void **)&v26._M_node[1]._M_color, v32)) == 0 )
      {
        v34 = v29 - (_QWORD)M_parent;
        if ( v34 > 0x7FFFFFFF )
          goto LABEL_77;
        if ( v34 < (__int64)0xFFFFFFFF80000000LL )
          v33 = 0x80000000;
        else
          v33 = v34;
      }
LABEL_71:
      if ( v33 < 0 )
        goto LABEL_72;
LABEL_79:
      v35 = __args_1 + 8;
      v36 = *(_BYTE *)(((unsigned __int64)&__args_1[8] >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)__args_1 + 64) & 7) + 3) >= v36 && v36 )
      {
        __asan_report_store4(v35);
LABEL_89:
        __asan_report_load8(v35);
        break;
      }
      LODWORD(__args_1[8]._M_head_impl) = v25;
      v37 = *(char **)(v49 + 224);
      if ( v37 != (char *)(v49 + 240) )
        operator delete(v37);
      v35 = (std::tuple<const std::string&> *)v38;
      if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
        goto LABEL_89;
    }
    std::_List_base<std::pair<std::string,common::tools::PTree>>::_M_clear(&v54);
    v44 = std::_Rb_tree<unsigned int,std::pair<unsigned int const,AppHostConfig>,std::_Select1st<std::pair<unsigned int const,AppHostConfig>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,AppHostConfig>>>::_M_emplace_unique<unsigned int &,AppHostConfig&>(
            &p_app_host_map->_M_t,
            (unsigned int *)(v49 + 288),
            (AppHostConfig *)(v49 + 288),
            v42,
            v43);
    if ( !v44.second )
    {
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/core_class/app_base.cpp",
        "initAppHostConfig",
        680);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&child_name,
        "duplicate app config, id=%s host_id=%u",
        *(const char **)(v49 + 160),
        *(unsigned int *)(v49 + 292));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      goto LABEL_47;
    }
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&child_name,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "src/core_class/app_base.cpp",
      "initAppHostConfig",
      684);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&child_name,
      "load app config succ, id=%s host_id=%u",
      *(const char **)(v49 + 160),
      *(unsigned int *)(v49 + 292));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    v45 = *(char **)(v49 + 160);
    if ( v45 != (char *)(v49 + 176) )
      operator delete(v45);
    std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_erase(
      (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > > *const)(v49 + 296),
      *(std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type *)(v49 + 312));
    if ( !*(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
    {
      M_next = (std::list<std::pair<std::string,common::tools::PTree>> *)v48->_M_impl._M_node._M_next;
      continue;
    }
    break;
  }
  __asan_report_load8(v48);
LABEL_98:
  std::_List_base<std::pair<std::string,common::tools::PTree>>::_M_clear(&v53);
  v22 = 0;
LABEL_51:
  common::tools::PTree::~PTree((common::tools::PTree *const)(v49 + 64));
  if ( &_pthread_key_create )
    pthread_mutex_unlock(*(pthread_mutex_t **)(v49 + 32));
  if ( v57 == (char *)v49 )
  {
    *(_QWORD *)((v49 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v49 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v49 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v49 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v49 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v49 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v49 = 1172321806LL;
    *(_QWORD *)((v49 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v49 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v49 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v49 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v49 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v49 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v22;
};

// Line 734: range 0000000014E51D30-0000000014E531CC
int32_t __fastcall AppBase::rewriteAppHostConfig(AppBase *const this, const Json::Value *json_config);

// Line 803: range 0000000014E4A762-0000000014E4A98F
int32_t __fastcall AppBase::start(AppBase *const this)
{
  int32_t v1; // ebp
  common::milog::MilogStringStream *ostr; // r12
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  size_t v5; // rbx
  __int64 v6; // rax
  char **p_data; // rdi
  char *v8; // rdi
  size_t v9; // rbx
  struct _Unwind_Exception *v11; // rbx
  common::milog::MiLogStream v12; // [rsp+0h] [rbp-38h] BYREF

  if ( ResourceBox::start() )
  {
    common::milog::MiLogStream::MiLogStream(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/app_base.cpp",
      "start",
      807);
    common::milog::MiLogStream::operator()(&v12, "start resource failed");
    common::milog::MiLogStream::~MiLogStream(&v12);
    return -1;
  }
  v1 = ServiceBox::start();
  if ( v1 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/app_base.cpp",
      "start",
      814);
    common::milog::MiLogStream::operator()(&v12, "start service failed");
    common::milog::MiLogStream::~MiLogStream(&v12);
    return -1;
  }
  common::milog::MiLogStream::MiLogStream(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/core_class/app_base.cpp",
    "start",
    818);
  ostr = v12.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v12.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_cur = v12.ostr_;
    __asan_report_load8(v12.ostr_);
    goto LABEL_16;
  }
  p_cur = (common::milog::MilogStringStream *)&v12.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v12.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(p_cur);
LABEL_17:
    p_data = &ostr->buffer_.data_;
    __asan_report_load8(ostr);
LABEL_18:
    v11 = (struct _Unwind_Exception *)__asan_report_load8(p_data);
    common::milog::MiLogStream::~MiLogStream(&v12);
    __asan_handle_no_return(&v12);
    _Unwind_Resume(v11);
  }
  cur = v12.ostr_->buffer_.cur_;
  v5 = (size_t)&v12.ostr_->buffer_.data_[-(int)cur + 0x4000];
  if ( v5 > 0xC )
    v5 = 13LL;
  memcpy(cur, "[THREAD] tid:", v5);
  ostr->buffer_.cur_ += v5;
  v6 = syscall(186LL);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v12.ostr_, v6);
  ostr = v12.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v12.ostr_ >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  p_data = &v12.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v12.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
    goto LABEL_18;
  v8 = v12.ostr_->buffer_.cur_;
  v9 = (size_t)&v12.ostr_->buffer_.data_[-(int)v8 + 0x4000];
  if ( v9 > 0xB )
    v9 = 12LL;
  memcpy(v8, " main thread", v9);
  ostr->buffer_.cur_ += v9;
  common::milog::MiLogStream::~MiLogStream(&v12);
  return v1;
};

// Line 835: range 0000000014E4FF0A-0000000014E51D2B
int32_t __fastcall AppBase::loopFunc(AppBase *const this);

// Line 1133: range 0000000014E46E18-0000000014E46F95
void __fastcall AppBase::outputTcmallocInfo(const char *tag_str)
{
  ;
};

// Line 1139: range 0000000014E46354-0000000014E46364
int32_t __fastcall AppBase::stop(AppBase *const this)
{
  int32_t v1; // ebx

  v1 = ServiceBox::stop();
  return v1 | ResourceBox::stop();
};

// Line 1149: range 0000000014E46366-0000000014E4637D
int32_t __fastcall AppBase::fini(AppBase *const this)
{
  ServiceBox::fini();
  ResourceBox::fini();
  return 0;
};

// Line 1153: range 0000000014E531D1-0000000014E531E8
void __cdecl GLOBAL__sub_I_app_base_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 1153: range 0000000014E4637E-0000000014E467C8
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/core_class/app_base.cpp");
    if ( __priority != 0xFFFF )
    {
LABEL_3:
      __asan_after_dynamic_init();
      return;
    }
    std::ios_base::Init::Init(&std::__ioinit);
    __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
    opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
    opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
    opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
    opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
    opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
    if ( !`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero )
    {
      `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = 1;
      if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) )
      {
        __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
LABEL_11:
        __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
        AppBaseConfig::isValid((const AppBaseConfig *const)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
        return;
      }
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                           + 9;
    }
    if ( `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero )
      goto LABEL_3;
    `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = 1;
    if ( !*(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                   + 0x7FFF8000) )
    {
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits
                                                                          + 9;
      goto LABEL_3;
    }
    goto LABEL_11;
  }
};
