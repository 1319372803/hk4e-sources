// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/src/cmd_monitor_report.cpp

// Line 42: range 000000000CA06124-000000000CA06DA5
void __fastcall CmdReport::output(
        unsigned int interval,
        const std::function<void(const std::string&,const std::string&,unsigned int,unsigned int)> *a2)
{
  int v2; // ebx
  std::string *v3; // r14
  _DWORD *v4; // r15
  std::mutex *p_M_manager; // rdi
  size_t v6; // rbx
  void *p_M_parent; // rdi
  __int64 v8; // rax
  common::milog::MilogStringStream *ostr; // r13
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  char **p_data; // rdi
  char *v13; // rdi
  size_t v14; // rbx
  std::forward_iterator_tag v15; // cl
  std::string::size_type v16; // rdi
  char v17; // dl
  unsigned int data; // esi
  char v19; // dl
  __int64 v20; // rdx
  std::forward_iterator_tag v21; // cl
  std::forward_iterator_tag v22; // cl
  common::milog::MilogStringStream *v23; // r13
  common::milog::MilogStringStream *p_M_string_length; // rdi
  char *v25; // rdi
  common::milog::MilogStringStream *v26; // r13
  std::string::size_type M_string_length; // rax
  std::string::pointer M_p; // rsi
  char *v29; // rdi
  size_t v30; // r14
  void *v31; // rdi
  std::string::size_type v32; // rax
  std::string::pointer v33; // rsi
  void *v34; // rdi
  size_t v35; // r14
  void **v36; // r14
  void **i; // r13
  void **v38; // r14
  void **j; // r13
  void *v40; // rdi
  void *v41; // rdi
  void *v42; // rdi
  char v43; // dl
  char *v44; // [rsp+8h] [rbp-1D0h]
  unsigned __int64 v45; // [rsp+10h] [rbp-1C8h]
  size_t title; // [rsp+18h] [rbp-1C0h]
  unsigned int v49; // [rsp+38h] [rbp-1A0h]
  uint32_t count; // [rsp+3Ch] [rbp-19Ch]
  common::milog::MiLogStream v51; // [rsp+40h] [rbp-198h] BYREF
  common::milog::MiLogStream v52; // [rsp+60h] [rbp-178h] BYREF
  std::string sep; // [rsp+80h] [rbp-158h] BYREF
  char v54[312]; // [rsp+A0h] [rbp-138h] BYREF

  v45 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(256LL);
    if ( v8 )
      v45 = v8;
  }
  *(_QWORD *)v45 = 1102416563LL;
  *(_QWORD *)(v45 + 8) = "3 32 24 12 param_vec:63 96 48 15 tmp_data_map:44 176 48 14 tmp_uid_set:45";
  *(_QWORD *)(v45 + 16) = CmdReport::output;
  v4 = (_DWORD *)(v45 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -219021312;
  v4[536862725] = 62194;
  v4[536862727] = -202116109;
  if ( !CmdReport::is_record || (int)interval <= 0 )
    goto LABEL_129;
  p_M_manager = (std::mutex *)&a2->_M_manager;
  if ( *(_BYTE *)(((unsigned __int64)&a2->_M_manager >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_manager);
    goto LABEL_22;
  }
  if ( !a2->_M_manager )
    goto LABEL_129;
  *(_DWORD *)(v45 + 104) = 0;
  *(_QWORD *)(v45 + 112) = 0LL;
  *(_QWORD *)(v45 + 120) = v45 + 104;
  *(_QWORD *)(v45 + 128) = v45 + 104;
  *(_QWORD *)(v45 + 136) = 0LL;
  *(_DWORD *)(v45 + 184) = 0;
  *(_QWORD *)(v45 + 192) = 0LL;
  *(_QWORD *)(v45 + 200) = v45 + 184;
  *(_QWORD *)(v45 + 208) = v45 + 184;
  *(_QWORD *)(v45 + 216) = 0LL;
  if ( &_pthread_key_create )
  {
    p_M_manager = &CmdReport::mutex_;
    v2 = pthread_mutex_lock(&CmdReport::mutex_._M_mutex);
    if ( v2 )
    {
LABEL_22:
      __asan_handle_no_return(p_M_manager);
      std::__throw_system_error(v2);
    }
  }
  v6 = (size_t)&CmdReport::data_map_[abi:cxx11];
  std::_Rb_tree<std::string,std::pair<std::string const,CmdReportData>,std::_Select1st<std::pair<std::string const,CmdReportData>>,std::less<std::string>,std::allocator<std::pair<std::string const,CmdReportData>>>::swap(
    (std::_Rb_tree<std::string,std::pair<const std::string,CmdReportData>,std::_Select1st<std::pair<const std::string,CmdReportData> >,std::less<std::string >,std::allocator<std::pair<const std::string,CmdReportData> > > *const)(v45 + 96),
    &CmdReport::data_map_[abi:cxx11]._M_t);
  p_M_parent = &CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_parent);
    goto LABEL_24;
  }
  v6 = (size_t)&CmdReport::data_map_[abi:cxx11];
  std::_Rb_tree<std::string,std::pair<std::string const,CmdReportData>,std::_Select1st<std::pair<std::string const,CmdReportData>>,std::less<std::string>,std::allocator<std::pair<std::string const,CmdReportData>>>::_M_erase(
    &CmdReport::data_map_[abi:cxx11]._M_t,
    (std::_Rb_tree<std::string,std::pair<const std::string,CmdReportData>,std::_Select1st<std::pair<const std::string,CmdReportData> >,std::less<std::string >,std::allocator<std::pair<const std::string,CmdReportData> > >::_Link_type)CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header._M_parent);
  p_M_parent = &CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8(p_M_parent);
    goto LABEL_25;
  }
  CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header._M_parent = 0LL;
  p_M_parent = &CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8(p_M_parent);
    goto LABEL_26;
  }
  CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header._M_left = &CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header;
  p_M_parent = &CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header._M_right;
  if ( *(_BYTE *)(((unsigned __int64)&CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_store8(p_M_parent);
    goto LABEL_27;
  }
  CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header._M_right = &CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header;
  p_M_parent = &CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_node_count;
  if ( *(_BYTE *)(((unsigned __int64)&CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_store8(p_M_parent);
    goto LABEL_28;
  }
  CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_node_count = 0LL;
  v6 = (size_t)&CmdReport::uid_set_;
  std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int>>::swap(
    (std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int> > *const)(v45 + 176),
    &CmdReport::uid_set_._M_t);
  p_M_parent = &CmdReport::uid_set_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&CmdReport::uid_set_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_load8(p_M_parent);
    goto LABEL_29;
  }
  v6 = (size_t)&CmdReport::uid_set_;
  std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int>>::_M_erase(
    &CmdReport::uid_set_._M_t,
    (std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int> >::_Link_type)CmdReport::uid_set_._M_t._M_impl._M_header._M_parent);
  p_M_parent = &CmdReport::uid_set_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&CmdReport::uid_set_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_store8(p_M_parent);
    goto LABEL_30;
  }
  CmdReport::uid_set_._M_t._M_impl._M_header._M_parent = 0LL;
  p_M_parent = &CmdReport::uid_set_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&CmdReport::uid_set_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_store8(p_M_parent);
    goto LABEL_31;
  }
  CmdReport::uid_set_._M_t._M_impl._M_header._M_left = &CmdReport::uid_set_._M_t._M_impl._M_header;
  p_M_parent = &CmdReport::uid_set_._M_t._M_impl._M_header._M_right;
  if ( *(_BYTE *)(((unsigned __int64)&CmdReport::uid_set_._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_store8(p_M_parent);
    goto LABEL_32;
  }
  CmdReport::uid_set_._M_t._M_impl._M_header._M_right = &CmdReport::uid_set_._M_t._M_impl._M_header;
  p_M_parent = &CmdReport::uid_set_._M_t._M_impl._M_node_count;
  if ( !*(_BYTE *)(((unsigned __int64)&CmdReport::uid_set_._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
    CmdReport::uid_set_._M_t._M_impl._M_node_count = 0LL;
    common::milog::MiLogStream::MiLogStream(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/cmd_monitor_report.cpp",
      "output",
      52);
    goto LABEL_33;
  }
LABEL_32:
  __asan_report_store8(p_M_parent);
LABEL_33:
  ostr = v51.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v51.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_cur = v51.ostr_;
    __asan_report_load8(v51.ostr_);
    goto LABEL_47;
  }
  v6 = (size_t)(v51.ostr_->buffer_.data_ + 0x4000);
  p_cur = (common::milog::MilogStringStream *)&v51.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v51.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_load8(p_cur);
LABEL_48:
    p_data = &ostr->buffer_.data_;
    __asan_report_load8(ostr);
    goto LABEL_49;
  }
  cur = v51.ostr_->buffer_.cur_;
  v6 = (int)v6 - (int)cur;
  if ( v6 > 0x12 )
    v6 = 19LL;
  memcpy(cur, " tmp_data_map size:", v6);
  ostr->buffer_.cur_ += v6;
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v51.ostr_, *(_QWORD *)(v45 + 136));
  ostr = v51.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v51.ostr_ >> 3) + 0x7FFF8000) )
    goto LABEL_48;
  v6 = (size_t)(v51.ostr_->buffer_.data_ + 0x4000);
  p_data = &v51.ostr_->buffer_.cur_;
  if ( !*(_BYTE *)(((unsigned __int64)&v51.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
    v13 = v51.ostr_->buffer_.cur_;
    v14 = (int)v6 - (int)v13;
    if ( v14 > 0x11 )
      v14 = 18LL;
    memcpy(v13, " tmp_uid_set size:", v14);
    ostr->buffer_.cur_ += v14;
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v51.ostr_, *(_QWORD *)(v45 + 216));
    common::milog::MiLogStream::~MiLogStream(&v51);
    if ( &_pthread_key_create )
      pthread_mutex_unlock(&CmdReport::mutex_._M_mutex);
    v49 = *(_QWORD *)(v45 + 216);
    if ( !v49 )
      v49 = 1;
    v6 = *(_QWORD *)(v45 + 120);
    v44 = (char *)(v45 + 104);
    goto LABEL_123;
  }
LABEL_49:
  __asan_report_load8(p_data);
  while ( 2 )
  {
    __asan_report_load4(p_data);
LABEL_51:
    LODWORD(title) = common::tools::StringUtils::splitToList(v3, &sep, (std::vector<std::string> *)(v45 + 32), 1);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)sep._M_dataplus._M_p != &sep._anon_0 )
      operator delete(sep._M_dataplus._M_p);
    if ( (_DWORD)title )
    {
      common::milog::MiLogStream::MiLogStream(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/cmd_monitor_report.cpp",
        "output",
        66);
      v23 = v52.ostr_;
      p_M_string_length = v52.ostr_;
      if ( *(_BYTE *)(((unsigned __int64)v52.ostr_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v52.ostr_);
      }
      else
      {
        p_M_string_length = (common::milog::MilogStringStream *)&v52.ostr_->buffer_.cur_;
        if ( !*(_BYTE *)(((unsigned __int64)&v52.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
        {
          v25 = v52.ostr_->buffer_.cur_;
          title = (size_t)&v52.ostr_->buffer_.data_[-(int)v25 + 0x4000];
          if ( title > 0x12 )
            title = 19LL;
          memcpy(v25, "splitToList failed:", title);
          v23->buffer_.cur_ += title;
          v26 = v52.ostr_;
          p_M_string_length = (common::milog::MilogStringStream *)&v3->_M_string_length;
          if ( !*(_BYTE *)(((unsigned __int64)&v3->_M_string_length >> 3) + 0x7FFF8000) )
          {
            M_string_length = v3->_M_string_length;
            p_M_string_length = (common::milog::MilogStringStream *)v3;
            if ( !*(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
            {
              M_p = v3->_M_dataplus._M_p;
              p_M_string_length = v52.ostr_;
              if ( !*(_BYTE *)(((unsigned __int64)v52.ostr_ >> 3) + 0x7FFF8000) )
              {
                v3 = (std::string *)(v52.ostr_->buffer_.data_ + 0x4000);
                p_M_string_length = (common::milog::MilogStringStream *)&v52.ostr_->buffer_.cur_;
                if ( !*(_BYTE *)(((unsigned __int64)&v52.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                {
                  v29 = v52.ostr_->buffer_.cur_;
                  v30 = (int)v3 - (int)v29;
                  if ( M_string_length <= v30 )
                    v30 = M_string_length;
                  memcpy(v29, M_p, v30);
                  v26->buffer_.cur_ += v30;
                  common::milog::MiLogStream::~MiLogStream(&v52);
                  goto LABEL_90;
                }
                goto LABEL_78;
              }
LABEL_77:
              __asan_report_load8(p_M_string_length);
LABEL_78:
              __asan_report_load8(p_M_string_length);
LABEL_79:
              common::milog::MiLogStream::MiLogStream(
                (common::milog::MiLogStream *const)&sep,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "src/cmd_monitor_report.cpp",
                "output",
                71);
              ostr = (common::milog::MilogStringStream *)*(&sep._anon_0._M_allocated_capacity + 1);
              v16 = *(&sep._anon_0._M_allocated_capacity + 1);
              if ( *(_BYTE *)((*(&sep._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(*(&sep._anon_0._M_allocated_capacity + 1));
              }
              else
              {
                v16 = *(&sep._anon_0._M_allocated_capacity + 1) + 8;
                if ( !*(_BYTE *)(((*(&sep._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
                {
                  v31 = *(void **)(*(&sep._anon_0._M_allocated_capacity + 1) + 8);
                  title = **((_DWORD **)&sep._anon_0._M_allocated_capacity + 1) + 0x4000 - (int)v31;
                  if ( title > 0x18 )
                    title = 25LL;
                  memcpy(v31, "param_vec size not right:", title);
                  ostr->buffer_.cur_ += title;
                  ostr = (common::milog::MilogStringStream *)*(&sep._anon_0._M_allocated_capacity + 1);
                  v16 = (std::string::size_type)&v3->_M_string_length;
                  if ( !*(_BYTE *)(((unsigned __int64)&v3->_M_string_length >> 3) + 0x7FFF8000) )
                  {
                    v32 = v3->_M_string_length;
                    v16 = (std::string::size_type)v3;
                    if ( !*(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
                    {
                      v33 = v3->_M_dataplus._M_p;
                      v16 = *(&sep._anon_0._M_allocated_capacity + 1);
                      if ( !*(_BYTE *)((*(&sep._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
                      {
                        v3 = (std::string *)(**((_QWORD **)&sep._anon_0._M_allocated_capacity + 1) + 0x4000LL);
                        v16 = *(&sep._anon_0._M_allocated_capacity + 1) + 8;
                        if ( !*(_BYTE *)(((*(&sep._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
                        {
                          v34 = *(void **)(*(&sep._anon_0._M_allocated_capacity + 1) + 8);
                          v35 = (int)v3 - (int)v34;
                          if ( v32 <= v35 )
                            v35 = v32;
                          memcpy(v34, v33, v35);
                          ostr->buffer_.cur_ += v35;
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&sep);
LABEL_90:
                          v36 = *(void ***)(v45 + 40);
                          for ( i = *(void ***)(v45 + 32); ; i += 4 )
                          {
                            if ( v36 == i )
                            {
                              v41 = *(void **)(v45 + 32);
                              if ( v41 )
                                goto LABEL_121;
                              goto LABEL_122;
                            }
                            v42 = i;
                            if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
                              break;
                            v42 = *i;
                            if ( *i != i + 2 )
                              goto LABEL_114;
LABEL_115:
                            ;
                          }
                          __asan_report_load8(i);
LABEL_114:
                          operator delete(v42);
                          goto LABEL_115;
                        }
LABEL_96:
                        __asan_report_load8(v16);
LABEL_97:
                        __asan_report_load4(v16);
LABEL_98:
                        __asan_report_load4(v16);
                        goto LABEL_99;
                      }
LABEL_95:
                      __asan_report_load8(v16);
                      goto LABEL_96;
                    }
LABEL_94:
                    __asan_report_load8(v16);
                    goto LABEL_95;
                  }
LABEL_93:
                  __asan_report_load8(v16);
                  goto LABEL_94;
                }
              }
              __asan_report_load8(v16);
              goto LABEL_93;
            }
LABEL_76:
            __asan_report_load8(p_M_string_length);
            goto LABEL_77;
          }
LABEL_75:
          __asan_report_load8(p_M_string_length);
          goto LABEL_76;
        }
      }
      __asan_report_load8(p_M_string_length);
      goto LABEL_75;
    }
    title = *(_QWORD *)(v45 + 32);
    if ( *(_QWORD *)(v45 + 40) - title != 64 )
      goto LABEL_79;
    v3 = (std::string *)(title + 32);
    v16 = (std::string::size_type)&ostr[4];
    v17 = *(_BYTE *)(((unsigned __int64)&ostr[4] >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)ostr + 64) & 7) + 3) >= v17 && v17 )
      goto LABEL_97;
    data = (unsigned int)ostr[4].buffer_.data_;
    count = 100 * data / interval / v49;
    v16 = (std::string::size_type)&ostr[4].buffer_.data_ + 4;
    v19 = *(_BYTE *)((((unsigned __int64)&ostr[4].buffer_.data_ + 4) >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)ostr + 68) & 7) + 3) >= v19 && v19 )
      goto LABEL_98;
    v20 = HIDWORD(ostr[4].buffer_.data_) % data;
    LODWORD(ostr) = HIDWORD(ostr[4].buffer_.data_) / data;
    if ( 100 * data / interval < v49 )
      goto LABEL_90;
    if ( (unsigned int)std::string::compare(title, "timer", v20) )
      goto LABEL_103;
    sep._M_dataplus._M_p = sep._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&sep, "|", "", v21);
LABEL_99:
    v52.log_ = (common::milog::MiLog *)&v52.ostr_ptr_._M_refcount;
    std::string::_M_construct<char const*>((std::string *const)&v52, &byte_19ECC5A1[-1], byte_19ECC5A1, v22);
    common::tools::StringUtils::replaceAll(v3, (const std::string *)&v52, &sep);
    if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v52.log_ != &v52.ostr_ptr_._M_refcount )
      operator delete(v52.log_);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)sep._M_dataplus._M_p != &sep._anon_0 )
      operator delete(sep._M_dataplus._M_p);
LABEL_103:
    std::function<void ()(std::string const&,std::string const&,unsigned int,unsigned int)>::operator()(
      a2,
      (const std::string *)title,
      v3,
      count,
      (unsigned int)ostr);
    v38 = *(void ***)(v45 + 40);
    for ( j = *(void ***)(v45 + 32); v38 != j; j += 4 )
    {
      v40 = j;
      if ( *(_BYTE *)(((unsigned __int64)j >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(j);
LABEL_105:
        operator delete(v40);
        continue;
      }
      v40 = *j;
      if ( *j != j + 2 )
        goto LABEL_105;
    }
    v41 = *(void **)(v45 + 32);
    if ( v41 )
LABEL_121:
      operator delete(v41);
LABEL_122:
    v6 = std::_Rb_tree_increment((std::_Rb_tree_node_base *)v6);
LABEL_123:
    ostr = (common::milog::MilogStringStream *)v6;
    if ( (char *)v6 != v44 )
    {
      v3 = (std::string *)(v6 + 32);
      p_data = (char **)(v6 + 64);
      v43 = *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000);
      if ( (char)(((v6 + 64) & 7) + 3) >= v43 && v43 )
        continue;
      if ( !*(_DWORD *)(v6 + 64) )
        goto LABEL_122;
      *(_QWORD *)(v45 + 32) = 0LL;
      *(_QWORD *)(v45 + 40) = 0LL;
      *(_QWORD *)(v45 + 48) = 0LL;
      sep._M_dataplus._M_p = sep._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&sep, "|", "", v15);
      goto LABEL_51;
    }
    break;
  }
  std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int>>::_M_erase(
    (std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int> > *const)(v45 + 176),
    *(std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int> >::_Link_type *)(v45 + 192));
  std::_Rb_tree<std::string,std::pair<std::string const,CmdReportData>,std::_Select1st<std::pair<std::string const,CmdReportData>>,std::less<std::string>,std::allocator<std::pair<std::string const,CmdReportData>>>::_M_erase(
    (std::_Rb_tree<std::string,std::pair<const std::string,CmdReportData>,std::_Select1st<std::pair<const std::string,CmdReportData> >,std::less<std::string >,std::allocator<std::pair<const std::string,CmdReportData> > > *const)(v45 + 96),
    *(std::_Rb_tree<std::string,std::pair<const std::string,CmdReportData>,std::_Select1st<std::pair<const std::string,CmdReportData> >,std::less<std::string >,std::allocator<std::pair<const std::string,CmdReportData> > >::_Link_type *)(v45 + 112));
LABEL_129:
  if ( v54 == (char *)v45 )
  {
    *(_QWORD *)((v45 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v45 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v45 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v45 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v45 = 1172321806LL;
    *(_QWORD *)((v45 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v45 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v45 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v45 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 88: range 000000000CA06DAA-000000000CA06DC1
void __cdecl GLOBAL__sub_I_cmd_monitor_report_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 88: range 000000000CA05880-000000000CA0611F
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const std::string *v2; // rsi
  void *p_M_parent; // rdi
  char v4; // al
  char v5; // al
  const std::string *v6; // rdx
  uint32_t v7; // ecx
  uint32_t v8; // r8d

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/cmd_monitor_report.cpp");
    if ( __priority != 0xFFFF )
    {
LABEL_3:
      __asan_after_dynamic_init();
      return;
    }
    std::ios_base::Init::Init(&std::__ioinit);
    v2 = (const std::string *)&std::__ioinit;
    __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
    p_M_parent = &CmdReport::data_map_[abi:cxx11]._M_t._M_impl.std::_Rb_tree_header;
    v4 = *(_BYTE *)(((unsigned __int64)&CmdReport::data_map_[abi:cxx11]._M_t._M_impl.std::_Rb_tree_header >> 3)
                  + 0x7FFF8000);
    if ( v4 && v4 <= 3 )
    {
      __asan_report_store4(p_M_parent);
    }
    else
    {
      CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header._M_color = _S_red;
      p_M_parent = &CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header._M_parent;
      if ( !*(_BYTE *)(((unsigned __int64)&CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header._M_parent >> 3)
                     + 0x7FFF8000) )
      {
        CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header._M_parent = 0LL;
        p_M_parent = &CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header._M_left;
        if ( !*(_BYTE *)(((unsigned __int64)&CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header._M_left >> 3)
                       + 0x7FFF8000) )
        {
          CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header._M_left = &CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header;
          p_M_parent = &CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header._M_right;
          if ( !*(_BYTE *)(((unsigned __int64)&CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header._M_right >> 3)
                         + 0x7FFF8000) )
          {
            CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header._M_right = &CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_header;
            p_M_parent = &CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_node_count;
            if ( !*(_BYTE *)(((unsigned __int64)&CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_node_count >> 3)
                           + 0x7FFF8000) )
            {
              v2 = (const std::string *)&CmdReport::data_map_[abi:cxx11];
              CmdReport::data_map_[abi:cxx11]._M_t._M_impl._M_node_count = 0LL;
              __cxa_atexit(
                (void (__fastcall *)(void *))std::map<std::string,CmdReportData>::~map,
                &CmdReport::data_map_[abi:cxx11],
                &_dso_handle);
              p_M_parent = &CmdReport::uid_set_._M_t._M_impl.std::_Rb_tree_header;
              v5 = *(_BYTE *)(((unsigned __int64)&CmdReport::uid_set_._M_t._M_impl.std::_Rb_tree_header >> 3)
                            + 0x7FFF8000);
              if ( !v5 || v5 > 3 )
              {
                CmdReport::uid_set_._M_t._M_impl._M_header._M_color = _S_red;
                p_M_parent = &CmdReport::uid_set_._M_t._M_impl._M_header._M_parent;
                if ( !*(_BYTE *)(((unsigned __int64)&CmdReport::uid_set_._M_t._M_impl._M_header._M_parent >> 3)
                               + 0x7FFF8000) )
                {
                  CmdReport::uid_set_._M_t._M_impl._M_header._M_parent = 0LL;
                  p_M_parent = &CmdReport::uid_set_._M_t._M_impl._M_header._M_left;
                  if ( !*(_BYTE *)(((unsigned __int64)&CmdReport::uid_set_._M_t._M_impl._M_header._M_left >> 3)
                                 + 0x7FFF8000) )
                  {
                    CmdReport::uid_set_._M_t._M_impl._M_header._M_left = &CmdReport::uid_set_._M_t._M_impl._M_header;
                    p_M_parent = &CmdReport::uid_set_._M_t._M_impl._M_header._M_right;
                    if ( !*(_BYTE *)(((unsigned __int64)&CmdReport::uid_set_._M_t._M_impl._M_header._M_right >> 3)
                                   + 0x7FFF8000) )
                    {
                      CmdReport::uid_set_._M_t._M_impl._M_header._M_right = &CmdReport::uid_set_._M_t._M_impl._M_header;
                      p_M_parent = &CmdReport::uid_set_._M_t._M_impl._M_node_count;
                      if ( !*(_BYTE *)(((unsigned __int64)&CmdReport::uid_set_._M_t._M_impl._M_node_count >> 3)
                                     + 0x7FFF8000) )
                      {
                        v2 = (const std::string *)&CmdReport::uid_set_;
                        CmdReport::uid_set_._M_t._M_impl._M_node_count = 0LL;
                        __cxa_atexit(
                          (void (__fastcall *)(void *))std::set<unsigned int>::~set,
                          &CmdReport::uid_set_,
                          &_dso_handle);
                        if ( `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero )
                          goto LABEL_3;
                        `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = 1;
                        if ( !*(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                                       + 0x7FFF8000) )
                        {
                          common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                                               + 9;
                          goto LABEL_3;
                        }
                        goto LABEL_29;
                      }
LABEL_28:
                      __asan_report_store8(p_M_parent);
LABEL_29:
                      __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
                      CmdReport::addCmdRecord(
                        (uint32_t)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
                        v2,
                        v6,
                        v7,
                        v8);
                      return;
                    }
LABEL_27:
                    __asan_report_store8(p_M_parent);
                    goto LABEL_28;
                  }
LABEL_26:
                  __asan_report_store8(p_M_parent);
                  goto LABEL_27;
                }
LABEL_25:
                __asan_report_store8(p_M_parent);
                goto LABEL_26;
              }
LABEL_24:
              __asan_report_store4(p_M_parent);
              goto LABEL_25;
            }
LABEL_23:
            __asan_report_store8(p_M_parent);
            goto LABEL_24;
          }
LABEL_22:
          __asan_report_store8(p_M_parent);
          goto LABEL_23;
        }
LABEL_21:
        __asan_report_store8(p_M_parent);
        goto LABEL_22;
      }
    }
    __asan_report_store8(p_M_parent);
    goto LABEL_21;
  }
};
