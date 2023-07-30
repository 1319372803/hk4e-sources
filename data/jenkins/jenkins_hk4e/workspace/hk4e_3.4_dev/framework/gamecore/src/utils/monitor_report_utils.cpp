// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/utils/monitor_report_utils.cpp

// Line 19: range 0000000014EAE332-0000000014EAE44A
void __fastcall MonitorReportUtils::ContextHolder::ContextHolder(
        MonitorReportUtils::ContextHolder *const this,
        const std::string *label_key,
        const std::string *label_value)
{
  std::string *p_label_key; // r12
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // r13
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_M_string_length; // rdi
  char v7; // al
  int32_t v8; // eax
  struct _Unwind_Exception *v9; // rbp
  std::string::pointer M_p; // rdi

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store1(this);
    goto LABEL_8;
  }
  this->is_valid_ = 0;
  p_label_key = &this->label_key_;
  p_anon_0 = &this->label_key_._anon_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->label_key_ >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    p_M_string_length = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_label_key;
    __asan_report_store8(p_label_key);
    goto LABEL_9;
  }
  this->label_key_._M_dataplus._M_p = (std::string::pointer)p_anon_0;
  p_M_string_length = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)&this->label_key_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->label_key_._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_store8(p_M_string_length);
    goto LABEL_10;
  }
  this->label_key_._M_string_length = 0LL;
  p_M_string_length = &this->label_key_._anon_0;
  v7 = *(_BYTE *)(((unsigned __int64)&this->label_key_._anon_0 >> 3) + 0x7FFF8000);
  if ( v7 > (((unsigned __int8)this + 24) & 7) || !v7 )
  {
    this->label_key_._anon_0._M_local_buf[0] = 0;
    v8 = MonitorReportUtils::pushContext(label_key, label_value);
    goto LABEL_11;
  }
LABEL_10:
  v8 = __asan_report_store1(p_M_string_length);
LABEL_11:
  if ( !v8 )
  {
    if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    {
      v9 = (struct _Unwind_Exception *)__asan_report_store1(this);
      if ( *(_BYTE *)(((unsigned __int64)&this->label_key_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->label_key_);
      M_p = this->label_key_._M_dataplus._M_p;
      if ( p_anon_0 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_p )
        operator delete(M_p);
      __asan_handle_no_return(M_p);
      _Unwind_Resume(v9);
    }
    this->is_valid_ = 1;
  }
  std::string::_M_assign(p_label_key, label_key);
};

// Line 28: range 0000000014EAE728-0000000014EAE834
void __fastcall MonitorReportUtils::ContextHolder::~ContextHolder(MonitorReportUtils::ContextHolder *const this)
{
  std::string *p_label_key; // rdi
  MonitorReportUtils::ContextHolder *M_p; // rdi

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(this);
  }
  else if ( !this->is_valid_ )
  {
    goto LABEL_3;
  }
  MonitorReportUtils::popContext(&this->label_key_);
LABEL_3:
  p_label_key = &this->label_key_;
  if ( *(_BYTE *)(((unsigned __int64)&this->label_key_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_label_key);
    MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)p_label_key);
  }
  else
  {
    M_p = (MonitorReportUtils::ContextHolder *)this->label_key_._M_dataplus._M_p;
    if ( M_p != (MonitorReportUtils::ContextHolder *)&this->label_key_._anon_0 )
      operator delete(M_p);
  }
};

// Line 40: range 0000000014EAE44C-0000000014EAE48B
void __fastcall MonitorReportUtils::TimeCostGuard::TimeCostGuard(
        MonitorReportUtils::TimeCostGuard *const this,
        const std::string *lable_key,
        const std::string *label_value)
{
  common::tools::TimeUtils::Timer::Timer(&this->timer_);
  MonitorReportUtils::ContextHolder::ContextHolder(&this->holder_, lable_key, label_value);
};

// Line 55: range 0000000014EAD962-0000000014EADE08
int32_t __fastcall MonitorReportUtils::getContextData(std::map<std::string,std::string> *context_label_map)
{
  std::map<std::string,std::string> *v1; // rbx
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // r14
  void *p_cur; // rdi
  std::_Rb_tree_header *v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  common::milog::MilogStringStream *ostr; // rbp
  char *cur; // rdi
  size_t v13; // rbx
  int32_t v14; // ebp
  unsigned __int64 v15; // rbx
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
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v27; // rdi
  common::milog::MiLogStream v28; // [rsp+10h] [rbp-98h] BYREF
  char v29[120]; // [rsp+30h] [rbp-78h] BYREF

  v1 = context_label_map;
  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_0(64LL);
    if ( v10 )
      v2 = v10;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 context_ptr:56";
  *(_QWORD *)(v2 + 16) = MonitorReportUtils::getContextData;
  v3 = v2 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  MonitorReportUtils::getContext();
  if ( !*(_QWORD *)(v2 + 32) )
  {
    common::milog::MiLogStream::MiLogStream(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/monitor_report_utils.cpp",
      "getContextData",
      59);
    ostr = v28.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v28.ostr_ >> 3) + 0x7FFF8000) )
    {
      p_cur = v28.ostr_;
      __asan_report_load8(v28.ostr_);
    }
    else
    {
      p_cur = &v28.ostr_->buffer_.cur_;
      if ( !*(_BYTE *)(((unsigned __int64)&v28.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      {
        cur = v28.ostr_->buffer_.cur_;
        v13 = (size_t)&v28.ostr_->buffer_.data_[-(int)cur + 0x4000];
        if ( v13 > 0x11 )
          v13 = 18LL;
        memcpy(cur, "get context failed", v13);
        ostr->buffer_.cur_ += v13;
        common::milog::MiLogStream::~MiLogStream(&v28);
        v14 = -1;
        goto LABEL_33;
      }
    }
    __asan_report_load8(p_cur);
    goto LABEL_21;
  }
  p_cur = &context_label_map->_M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&v1->_M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(p_cur);
    goto LABEL_22;
  }
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    &v1->_M_t,
    (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::_Link_type)v1->_M_t._M_impl._M_header._M_parent);
  p_cur = &v1->_M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&v1->_M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8(p_cur);
    goto LABEL_23;
  }
  v1->_M_t._M_impl._M_header._M_parent = 0LL;
  v6 = &v1->_M_t._M_impl.std::_Rb_tree_header;
  p_cur = &v1->_M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&v1->_M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_store8(p_cur);
    goto LABEL_24;
  }
  v1->_M_t._M_impl._M_header._M_left = &v6->_M_header;
  p_cur = &v1->_M_t._M_impl._M_header._M_right;
  v7 = (unsigned __int64)&v1->_M_t._M_impl._M_header._M_right >> 3;
  if ( *(_BYTE *)(v7 + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8(p_cur);
    goto LABEL_25;
  }
  v1->_M_t._M_impl._M_header._M_right = &v6->_M_header;
  p_cur = &v1->_M_t._M_impl._M_node_count;
  if ( *(_BYTE *)(((unsigned __int64)&v1->_M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8(p_cur);
    goto LABEL_26;
  }
  v1->_M_t._M_impl._M_node_count = 0LL;
  v8 = *(_QWORD *)(v2 + 32);
  p_cur = (void *)(v8 + 40);
  if ( *(_BYTE *)(((unsigned __int64)(v8 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(p_cur);
    goto LABEL_27;
  }
  if ( !*(_QWORD *)(v8 + 40) )
  {
LABEL_27:
    common::milog::MiLogStream::MiLogStream(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/monitor_report_utils.cpp",
      "getContextData",
      66);
    common::milog::MiLogStream::operator()(&v28, "lable_map_ is empty");
    common::milog::MiLogStream::~MiLogStream(&v28);
    v14 = -1;
    goto LABEL_33;
  }
  if ( *(_BYTE *)(((unsigned __int64)(v8 + 24) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v8 + 24);
    goto LABEL_29;
  }
  v9 = *(_QWORD *)(v8 + 24);
  v8 += 8LL;
  while ( 1 )
  {
    v1 = (std::map<std::string,std::string> *)v9;
    if ( v8 == v9 )
      break;
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_emplace_unique<std::pair<std::string const,std::string>&>(
      &context_label_map->_M_t,
      (std::pair<const std::string,std::string > *)(v9 + 32),
      (std::pair<const std::string,std::string > *)v7);
LABEL_29:
    v9 = std::_Rb_tree_increment((std::_Rb_tree_node_base *)v1);
  }
  v14 = 0;
LABEL_33:
  v15 = *(_QWORD *)(v2 + 40);
  if ( !v15 )
    goto LABEL_39;
  v16 = (volatile signed __int32 *)(v15 + 8);
  if ( &_pthread_key_create )
  {
    v17 = *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v16 & 7) + 3) < v17 || !v17 )
    {
      v18 = _InterlockedExchangeAdd(v16, 0xFFFFFFFF);
      goto LABEL_38;
    }
    __asan_report_store4(v16);
  }
  v20 = *(_BYTE *)(((v15 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v15 + 8) & 7) + 3) >= v20 && v20 )
  {
    __asan_report_load4(v15 + 8);
    goto LABEL_47;
  }
  v18 = *(_DWORD *)(v15 + 8);
  *(_DWORD *)(v15 + 8) = v18 - 1;
LABEL_38:
  if ( v18 != 1 )
    goto LABEL_39;
LABEL_47:
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
  {
    v21 = v15;
    __asan_report_load8(v15);
    goto LABEL_58;
  }
  v21 = *(_QWORD *)v15 + 16LL;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_load8(v21);
    goto LABEL_59;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v15 + 16LL))(v15);
  v21 = v15 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_60;
  v22 = *(_BYTE *)((v21 >> 3) + 0x7FFF8000);
  if ( (char)((v21 & 7) + 3) < v22 || !v22 )
  {
    v23 = _InterlockedExchangeAdd((volatile signed __int32 *)v21, 0xFFFFFFFF);
    goto LABEL_53;
  }
LABEL_59:
  __asan_report_store4(v21);
LABEL_60:
  v25 = *(_BYTE *)(((v15 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v15 + 12) & 7) + 3) >= v25 && v25 )
  {
    __asan_report_load4(v15 + 12);
LABEL_64:
    v24 = v15;
    __asan_report_load8(v15);
LABEL_65:
    v26 = (struct _Unwind_Exception *)__asan_report_load8(v24);
    common::milog::MiLogStream::~MiLogStream(&v28);
    v27 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v2 + 40);
    if ( v27 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v27);
    __asan_handle_no_return(v27);
    _Unwind_Resume(v26);
  }
  v23 = *(_DWORD *)(v15 + 12);
  *(_DWORD *)(v15 + 12) = v23 - 1;
LABEL_53:
  if ( v23 != 1 )
    goto LABEL_39;
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
    goto LABEL_64;
  v24 = *(_QWORD *)v15 + 24LL;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
    goto LABEL_65;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v15 + 24LL))(v15);
LABEL_39:
  if ( v29 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v14;
};

// Line 79: range 0000000014EADE0E-0000000014EAE32D
int32_t __fastcall MonitorReportUtils::pushContext(const std::string *label_key, const std::string *label_value)
{
  unsigned __int64 v4; // rbx
  char *v5; // r14
  unsigned __int64 v6; // r13
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *v7; // rdi
  std::forward_iterator_tag v8; // cl
  common::milog::MilogStringStream *ostr; // r15
  void *p_M_string_length; // rdi
  std::forward_iterator_tag v11; // cl
  __int64 v12; // rax
  void *p_cur; // rdi
  char *cur; // rdi
  size_t v15; // r12
  std::string::size_type M_string_length; // rax
  std::string::pointer v17; // rsi
  const std::string *v18; // rdi
  char *v19; // rdi
  size_t v20; // rbp
  int32_t v21; // r12d
  void *v22; // rdi
  struct _Unwind_Exception *v23; // rbx
  std::string::pointer M_p; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v25; // rdi
  std::pair<std::string,std::string > *v26; // rdx
  unsigned __int64 v27; // rbp
  volatile signed __int32 *v28; // rdi
  char v29; // dl
  signed __int32 v30; // eax
  char v32; // dl
  unsigned __int64 v33; // rdi
  char v34; // dl
  signed __int32 v35; // eax
  unsigned __int64 v36; // rdi
  char v37; // dl
  common::milog::MiLogStream v38; // [rsp+10h] [rbp-D8h] BYREF
  std::pair<std::string,std::string > v39; // [rsp+30h] [rbp-B8h] BYREF
  char v40[120]; // [rsp+70h] [rbp-78h] BYREF

  v4 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_0(64LL);
    if ( v12 )
      v4 = v12;
  }
  v5 = (char *)(v4 + 64);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 14 context_ptr:81";
  *(_QWORD *)(v4 + 16) = MonitorReportUtils::pushContext;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  MonitorReportUtils::getContext();
  v7 = *(std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > **)(v4 + 32);
  if ( !v7 )
  {
    v21 = -1;
    goto LABEL_42;
  }
  if ( &v7->_M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::find(
                                                                      v7,
                                                                      label_key)._M_node )
  {
    ostr = *(common::milog::MilogStringStream **)(v4 + 32);
    v39.first._M_dataplus._M_p = v39.first._anon_0._M_local_buf;
    if ( !*(_BYTE *)(((unsigned __int64)label_key >> 3) + 0x7FFF8000) )
    {
      p_M_string_length = &label_key->_M_string_length;
      if ( !*(_BYTE *)(((unsigned __int64)&label_key->_M_string_length >> 3) + 0x7FFF8000) )
      {
        std::string::_M_construct<char *>(
          &v39.first,
          label_key->_M_dataplus._M_p,
          &label_key->_M_dataplus._M_p[label_key->_M_string_length],
          v8);
        goto LABEL_28;
      }
LABEL_27:
      __asan_report_load8(p_M_string_length);
LABEL_28:
      v39.second._M_dataplus._M_p = v39.second._anon_0._M_local_buf;
      if ( *(_BYTE *)(((unsigned __int64)label_value >> 3) + 0x7FFF8000) )
      {
        v22 = (void *)label_value;
        __asan_report_load8(label_value);
      }
      else
      {
        v22 = &label_value->_M_string_length;
        if ( !*(_BYTE *)(((unsigned __int64)&label_value->_M_string_length >> 3) + 0x7FFF8000) )
        {
          std::string::_M_construct<char *>(
            &v39.second,
            label_value->_M_dataplus._M_p,
            &label_value->_M_dataplus._M_p[label_value->_M_string_length],
            v11);
          std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_emplace_unique<std::pair<std::string,std::string>>(
            (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *const)ostr,
            &v39,
            v26);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v39.second._M_dataplus._M_p != &v39.second._anon_0 )
            operator delete(v39.second._M_dataplus._M_p);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v39.first._M_dataplus._M_p != &v39.first._anon_0 )
            operator delete(v39.first._M_dataplus._M_p);
          v21 = 0;
          goto LABEL_42;
        }
      }
      v23 = (struct _Unwind_Exception *)__asan_report_load8(v22);
      M_p = v39.first._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v39.first._M_dataplus._M_p == &v39.first._anon_0 )
        goto LABEL_34;
      goto LABEL_33;
    }
LABEL_26:
    p_M_string_length = (void *)label_key;
    __asan_report_load8(label_key);
    goto LABEL_27;
  }
  common::milog::MiLogStream::MiLogStream(
    &v38,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/utils/monitor_report_utils.cpp",
    "pushContext",
    89);
  ostr = v38.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v38.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_cur = v38.ostr_;
    __asan_report_load8(v38.ostr_);
    goto LABEL_21;
  }
  label_value = (const std::string *)(v38.ostr_->buffer_.data_ + 0x4000);
  p_cur = &v38.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v38.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(p_cur);
LABEL_22:
    __asan_report_load8(p_cur);
    goto LABEL_23;
  }
  cur = v38.ostr_->buffer_.cur_;
  v15 = (int)label_value - (int)cur;
  if ( v15 > 0x13 )
    v15 = 20LL;
  memcpy(cur, "duplicated lable key", v15);
  ostr->buffer_.cur_ += v15;
  label_value = (const std::string *)v38.ostr_;
  p_cur = &label_key->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&label_key->_M_string_length >> 3) + 0x7FFF8000) )
    goto LABEL_22;
  M_string_length = label_key->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)label_key >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(label_key);
    goto LABEL_24;
  }
  v17 = label_key->_M_dataplus._M_p;
  if ( *(_BYTE *)(((unsigned __int64)v38.ostr_ >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    v18 = label_value;
    __asan_report_load8(label_value);
    goto LABEL_25;
  }
  label_key = (const std::string *)(v38.ostr_->buffer_.data_ + 0x4000);
  v18 = (const std::string *)&v38.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v38.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(v18);
    goto LABEL_26;
  }
  v19 = v38.ostr_->buffer_.cur_;
  v20 = (int)label_key - (int)v19;
  if ( M_string_length <= v20 )
    v20 = M_string_length;
  memcpy(v19, v17, v20);
  label_value->_M_string_length += v20;
  common::milog::MiLogStream::~MiLogStream(&v38);
  v21 = -1;
LABEL_42:
  v27 = *(_QWORD *)(v4 + 40);
  if ( !v27 )
    goto LABEL_48;
  v28 = (volatile signed __int32 *)(v27 + 8);
  if ( &_pthread_key_create )
  {
    v29 = *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v28 & 7) + 3) < v29 || !v29 )
    {
      v30 = _InterlockedExchangeAdd(v28, 0xFFFFFFFF);
      goto LABEL_47;
    }
    __asan_report_store4(v28);
  }
  v32 = *(_BYTE *)(((v27 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v27 + 8) & 7) + 3) >= v32 && v32 )
  {
    __asan_report_load4(v27 + 8);
    goto LABEL_57;
  }
  v30 = *(_DWORD *)(v27 + 8);
  *(_DWORD *)(v27 + 8) = v30 - 1;
LABEL_47:
  if ( v30 != 1 )
    goto LABEL_48;
LABEL_57:
  if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
  {
    v33 = v27;
    __asan_report_load8(v27);
    goto LABEL_68;
  }
  v33 = *(_QWORD *)v27 + 16LL;
  if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_load8(v33);
    goto LABEL_69;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v27 + 16LL))(v27);
  v33 = v27 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_70;
  v34 = *(_BYTE *)((v33 >> 3) + 0x7FFF8000);
  if ( (char)((v33 & 7) + 3) < v34 || !v34 )
  {
    v35 = _InterlockedExchangeAdd((volatile signed __int32 *)v33, 0xFFFFFFFF);
    goto LABEL_63;
  }
LABEL_69:
  __asan_report_store4(v33);
LABEL_70:
  v37 = *(_BYTE *)(((v27 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v27 + 12) & 7) + 3) >= v37 && v37 )
  {
    __asan_report_load4(v27 + 12);
LABEL_74:
    v36 = v27;
    __asan_report_load8(v27);
LABEL_75:
    v23 = (struct _Unwind_Exception *)__asan_report_load8(v36);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v39.second._M_dataplus._M_p != &v39.second._anon_0 )
      operator delete(v39.second._M_dataplus._M_p);
    M_p = v39.first._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v39.first._M_dataplus._M_p == &v39.first._anon_0 )
    {
LABEL_34:
      v25 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v5 - 3);
      if ( v25 )
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v25);
      __asan_handle_no_return(v25);
      _Unwind_Resume(v23);
    }
LABEL_33:
    operator delete(M_p);
    goto LABEL_34;
  }
  v35 = *(_DWORD *)(v27 + 12);
  *(_DWORD *)(v27 + 12) = v35 - 1;
LABEL_63:
  if ( v35 != 1 )
    goto LABEL_48;
  if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
    goto LABEL_74;
  v36 = *(_QWORD *)v27 + 24LL;
  if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
    goto LABEL_75;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v27 + 24LL))(v27);
LABEL_48:
  if ( v40 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v21;
};

// Line 99: range 0000000014EAE48C-0000000014EAE722
int32_t __fastcall MonitorReportUtils::popContext(const std::string *label_key)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r12
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *v4; // rdi
  int32_t v5; // r15d
  unsigned __int64 v6; // rbp
  volatile signed __int32 *v7; // rdi
  char v8; // dl
  signed __int32 v9; // eax
  __int64 v11; // rax
  char v12; // dl
  unsigned __int64 v13; // rdi
  char v14; // dl
  signed __int32 v15; // eax
  unsigned __int64 v16; // rdi
  char v17; // dl
  _BYTE v18[120]; // [rsp+0h] [rbp-78h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_0(64LL);
    if ( v11 )
      v2 = v11;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 context_ptr:100";
  *(_QWORD *)(v2 + 16) = MonitorReportUtils::popContext;
  v3 = v2 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  MonitorReportUtils::getContext();
  v4 = *(std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > **)(v2 + 32);
  if ( v4 )
  {
    if ( &v4->_M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::find(
                                                                        v4,
                                                                        label_key)._M_node )
    {
      v5 = -1;
    }
    else
    {
      std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::erase(
        *(std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *const *)(v2 + 32),
        label_key);
      v5 = 0;
    }
  }
  else
  {
    v5 = -1;
  }
  v6 = *(_QWORD *)(v2 + 40);
  if ( v6 )
  {
    v7 = (volatile signed __int32 *)(v6 + 8);
    if ( &_pthread_key_create )
    {
      v8 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v7 & 7) + 3) < v8 || !v8 )
      {
        v9 = _InterlockedExchangeAdd(v7, 0xFFFFFFFF);
        goto LABEL_10;
      }
      __asan_report_store4(v7);
    }
    v12 = *(_BYTE *)(((v6 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v6 + 8) & 7) + 3) >= v12 && v12 )
    {
      __asan_report_load4(v6 + 8);
      goto LABEL_23;
    }
    v9 = *(_DWORD *)(v6 + 8);
    *(_DWORD *)(v6 + 8) = v9 - 1;
LABEL_10:
    if ( v9 != 1 )
      goto LABEL_11;
LABEL_23:
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    {
      v13 = v6;
      __asan_report_load8(v6);
    }
    else
    {
      v13 = *(_QWORD *)v6 + 16LL;
      if ( !*(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 16LL))(v6);
        v13 = v6 + 12;
        if ( !&_pthread_key_create )
          goto LABEL_36;
        v14 = *(_BYTE *)((v13 >> 3) + 0x7FFF8000);
        if ( (char)((v13 & 7) + 3) < v14 || !v14 )
        {
          v15 = _InterlockedExchangeAdd((volatile signed __int32 *)v13, 0xFFFFFFFF);
          goto LABEL_29;
        }
LABEL_35:
        __asan_report_store4(v13);
LABEL_36:
        v17 = *(_BYTE *)(((v6 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v6 + 12) & 7) + 3) >= v17 && v17 )
        {
          __asan_report_load4(v6 + 12);
          goto LABEL_40;
        }
        v15 = *(_DWORD *)(v6 + 12);
        *(_DWORD *)(v6 + 12) = v15 - 1;
LABEL_29:
        if ( v15 != 1 )
          goto LABEL_11;
        if ( !*(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        {
          v16 = *(_QWORD *)v6 + 24LL;
          if ( !*(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 24LL))(v6);
            goto LABEL_11;
          }
LABEL_41:
          __asan_report_load8(v16);
          goto LABEL_42;
        }
LABEL_40:
        v16 = v6;
        __asan_report_load8(v6);
        goto LABEL_41;
      }
    }
    __asan_report_load8(v13);
    goto LABEL_35;
  }
LABEL_11:
  if ( v18 != (_BYTE *)v2 )
  {
LABEL_42:
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    return v5;
  }
  *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  return v5;
};

// Line 116: range 0000000014EAD5D8-0000000014EAD95C
MonitorReportUtils::ContextPtr __cdecl MonitorReportUtils::getContext()
{
  std::_Rb_tree_header *v0; // rdi
  volatile signed __int32 *v1; // rbp
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r13
  __int64 v5; // rsi
  common::minet::CoroutineContext *v6; // rsi
  MonitorReportUtils::ContextPtr result; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  std::_Rb_tree_header *v10; // rdi
  char v11; // cl
  char v12; // dl
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  char v15; // dl
  struct _Unwind_Exception *v16; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v17; // rdi
  _BYTE v18[104]; // [rsp+0h] [rbp-68h] BYREF

  v1 = (volatile signed __int32 *)v0;
  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v2 = v8;
  }
  v3 = v2 + 64;
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 coro_ptr:117";
  *(_QWORD *)(v2 + 16) = MonitorReportUtils::getContext;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::Coroutine::thisCoro();
  v5 = *(_QWORD *)(v2 + 32);
  if ( v5 )
  {
    v6 = (common::minet::CoroutineContext *)(v5 + 120);
    if ( !*(_WORD *)(((unsigned __int64)v0 >> 3) + 0x7FFF8000) )
    {
      result = common::minet::CoroutineContext::get<std::shared_ptr<MonitorReportUtils::Context>>(v6);
      goto LABEL_15;
    }
    __asan_report_store16(v0);
  }
  _tls_init_4();
  v9 = *(__int64 *)((char *)&MonitorReportUtils::context_ptr_._M_ptr + __readfsqword(0));
  if ( *(_BYTE *)(((unsigned __int64)v0 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_25;
  }
  *(_QWORD *)&v0->_M_header._M_color = v9;
  result._M_ptr = *(std::__shared_ptr<MonitorReportUtils::Context,(__gnu_cxx::_Lock_policy)2>::element_type **)((char *)&MonitorReportUtils::context_ptr_._M_refcount._M_pi + __readfsqword(0));
  v0 = (std::_Rb_tree_header *)((char *)v0 + 8);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((unsigned __int64)(v1 + 2) >> 3);
  if ( LOBYTE(result._M_refcount._M_pi[134215680]._vptr__Sp_counted_base) )
  {
LABEL_25:
    __asan_report_store8();
    goto LABEL_26;
  }
  *((_QWORD *)v1 + 1) = result._M_ptr;
  if ( !result._M_ptr )
    goto LABEL_15;
  v0 = &result._M_ptr->label_map_._M_t._M_impl.std::_Rb_tree_header;
  if ( !&_pthread_key_create )
    goto LABEL_27;
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*(unsigned __int8 *)(((unsigned __int64)v0 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v0 & 7) + 3) < SLOBYTE(result._M_refcount._M_pi) || !LOBYTE(result._M_refcount._M_pi) )
  {
    _InterlockedAdd((volatile signed __int32 *)v0, 1u);
    goto LABEL_15;
  }
LABEL_26:
  result._M_ptr = (std::__shared_ptr<MonitorReportUtils::Context,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(v0);
LABEL_27:
  v10 = &result._M_ptr->label_map_._M_t._M_impl.std::_Rb_tree_header;
  v11 = *(_BYTE *)(((unsigned __int64)&result._M_ptr->label_map_._M_t._M_impl.std::_Rb_tree_header >> 3) + 0x7FFF8000);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(((LOBYTE(result._M_ptr) + 8) & 7u) + 3);
  if ( (char)(((LOBYTE(result._M_ptr) + 8) & 7) + 3) >= v11 && v11 )
  {
    __asan_report_load4(v10);
    goto LABEL_31;
  }
  ++result._M_ptr->label_map_._M_t._M_impl._M_header._M_color;
LABEL_15:
  v3 = *(_QWORD *)(v2 + 40);
  if ( !v3 )
    goto LABEL_21;
  v10 = (std::_Rb_tree_header *)(v3 + 8);
  if ( !&_pthread_key_create )
    goto LABEL_32;
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*(unsigned __int8 *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v10 & 7) + 3) < SLOBYTE(result._M_refcount._M_pi) || !LOBYTE(result._M_refcount._M_pi) )
  {
    LODWORD(result._M_ptr) = _InterlockedExchangeAdd((volatile signed __int32 *)v10, 0xFFFFFFFF);
    goto LABEL_20;
  }
LABEL_31:
  __asan_report_store4(v10);
LABEL_32:
  v12 = *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v3 + 8) & 7) + 3) >= v12 && v12 )
  {
    __asan_report_load4(v3 + 8);
    goto LABEL_36;
  }
  LODWORD(result._M_ptr) = *(_DWORD *)(v3 + 8);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(unsigned int)(LODWORD(result._M_ptr)
                                                                                               - 1);
  *(_DWORD *)(v3 + 8) = result._M_refcount._M_pi;
LABEL_20:
  if ( LODWORD(result._M_ptr) != 1 )
    goto LABEL_21;
LABEL_36:
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
    v13 = v3;
    __asan_report_load8(v3);
    goto LABEL_47;
  }
  v13 = *(_QWORD *)v3 + 16LL;
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_load8(v13);
    goto LABEL_48;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
  v13 = v3 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_49;
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*(unsigned __int8 *)((v13 >> 3) + 0x7FFF8000);
  if ( (char)((v13 & 7) + 3) < SLOBYTE(result._M_refcount._M_pi) || !LOBYTE(result._M_refcount._M_pi) )
  {
    LODWORD(result._M_ptr) = _InterlockedExchangeAdd((volatile signed __int32 *)v13, 0xFFFFFFFF);
    goto LABEL_42;
  }
LABEL_48:
  __asan_report_store4(v13);
LABEL_49:
  v15 = *(_BYTE *)(((v3 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v3 + 12) & 7) + 3) >= v15 && v15 )
  {
    __asan_report_load4(v3 + 12);
LABEL_53:
    v14 = v3;
    __asan_report_load8(v3);
LABEL_54:
    v16 = (struct _Unwind_Exception *)__asan_report_load8(v14);
    v17 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v3 - 24);
    if ( v17 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v17);
    __asan_handle_no_return(v17);
    _Unwind_Resume(v16);
  }
  LODWORD(result._M_ptr) = *(_DWORD *)(v3 + 12);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(unsigned int)(LODWORD(result._M_ptr)
                                                                                               - 1);
  *(_DWORD *)(v3 + 12) = result._M_refcount._M_pi;
LABEL_42:
  if ( LODWORD(result._M_ptr) != 1 )
    goto LABEL_21;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    goto LABEL_53;
  v14 = *(_QWORD *)v3 + 24LL;
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
    goto LABEL_54;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 24LL))(v3);
LABEL_21:
  if ( v18 == (_BYTE *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<MonitorReportUtils::Context,(__gnu_cxx::_Lock_policy)2>::element_type *)v1;
  return result;
};
