// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/milog/src/milog_file.cpp

// Line 33: range 000000000C9A5590-000000000C9A59E5
void __fastcall common::milog::MiLogFile::MiLogFile(common::milog::MiLogFile *const this)
{
  struct tm *v1; // rsi
  common::milog::MiLogFile *v2; // rbx
  _DWORD *v3; // r12
  __int64 v4; // rdx
  char v5; // al
  char v6; // dl
  char v7; // al
  char v8; // al
  std::_Rb_tree_header *v9; // rax
  __int64 v10; // rax
  void *p_write_buf; // rdi
  char v12; // al
  __int64 v13; // rdx
  char v14; // dl
  std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int> > *p_M_t; // rax
  std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int> > *v16; // rdi
  struct _Unwind_Exception vars0; // [rsp+0h] [rbp+0h] BYREF
  time_t anonymous0; // [rsp+20h] [rbp+20h] BYREF
  struct tm anonymous1; // [rsp+40h] [rbp+40h] BYREF

  v2 = this;
  if ( _asan_option_detect_stack_use_after_return )
    __asan_stack_malloc_2(160LL);
  vars0.exception_class = 1102416563LL;
  vars0.exception_cleanup = (_Unwind_Exception_Cleanup_Fn)"2 32 8 13 time_stamp:39 64 56 9 tm_obj:40";
  vars0.private_1 = (_Unwind_Word)common::milog::MiLogFile::MiLogFile;
  v3 = (_DWORD *)((unsigned __int64)&vars0 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  v4 = *(unsigned __int8 *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)this & 7) + 3) >= (char)v4 && (_BYTE)v4 )
  {
    __asan_report_store4(this, v1);
    goto LABEL_22;
  }
  this->file_fd_._M_i = 1;
  this = (common::milog::MiLogFile *const)((char *)this + 808);
  if ( *(char *)(((unsigned __int64)&v2->is_file_path_null >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_22:
    __asan_report_store1(this, v1, v4);
LABEL_23:
    __asan_report_store4(this, v1);
LABEL_24:
    __asan_report_store2(this);
LABEL_25:
    __asan_report_store4(this, v1);
LABEL_26:
    __asan_report_store4(this, v1);
    goto LABEL_27;
  }
  v2->is_file_path_null = 0;
  this = (common::milog::MiLogFile *const)&v2->last_cut_time_;
  v5 = *(_BYTE *)(((unsigned __int64)&v2->last_cut_time_ >> 3) + 0x7FFF8000);
  if ( v5 && v5 <= 3 )
    goto LABEL_23;
  v2->last_cut_time_ = 0;
  this = (common::milog::MiLogFile *const)&v2->log_cut_time_;
  v6 = *(_BYTE *)(((unsigned __int64)&v2->log_cut_time_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v2 + 52) & 7) + 1) >= v6 && v6 )
    goto LABEL_24;
  v2->log_cut_time_ = 0;
  this = (common::milog::MiLogFile *const)&v2->log_keep_time_;
  v7 = *(_BYTE *)(((unsigned __int64)&v2->log_keep_time_ >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
    goto LABEL_25;
  v2->log_keep_time_ = 0;
  this = (common::milog::MiLogFile *const)&v2->log_level_set_._M_t._M_impl.std::_Rb_tree_header;
  v8 = *(_BYTE *)(((unsigned __int64)&v2->log_level_set_._M_t._M_impl.std::_Rb_tree_header >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
    goto LABEL_26;
  v2->log_level_set_._M_t._M_impl._M_header._M_color = _S_red;
  this = (common::milog::MiLogFile *const)&v2->log_level_set_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&v2->log_level_set_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_store8(this, v1);
    goto LABEL_28;
  }
  v2->log_level_set_._M_t._M_impl._M_header._M_parent = 0LL;
  v9 = &v2->log_level_set_._M_t._M_impl.std::_Rb_tree_header;
  this = (common::milog::MiLogFile *const)&v2->log_level_set_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&v2->log_level_set_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_store8(this, v1);
    goto LABEL_29;
  }
  v2->log_level_set_._M_t._M_impl._M_header._M_left = &v9->_M_header;
  this = (common::milog::MiLogFile *const)&v2->log_level_set_._M_t._M_impl._M_header._M_right;
  if ( *(_BYTE *)(((unsigned __int64)&v2->log_level_set_._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_store8(this, v1);
    goto LABEL_30;
  }
  v2->log_level_set_._M_t._M_impl._M_header._M_right = &v9->_M_header;
  this = (common::milog::MiLogFile *const)&v2->log_level_set_._M_t._M_impl._M_node_count;
  if ( *(_BYTE *)(((unsigned __int64)&v2->log_level_set_._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_store8(this, v1);
    goto LABEL_31;
  }
  v2->log_level_set_._M_t._M_impl._M_node_count = 0LL;
  this = (common::milog::MiLogFile *const)&v2->write_buf_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->write_buf_ >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_store8(this, v1);
    goto LABEL_32;
  }
  v2->write_buf_.data_ = 0LL;
  this = (common::milog::MiLogFile *const)&v2->write_buf_.cur_;
  if ( !*(_BYTE *)(((unsigned __int64)&v2->write_buf_.cur_ >> 3) + 0x7FFF8000) )
  {
    v2->write_buf_.cur_ = 0LL;
    v10 = operator new[](0x200000uLL);
    goto LABEL_33;
  }
LABEL_32:
  v10 = __asan_report_store8(this, v1);
LABEL_33:
  p_write_buf = &v2->write_buf_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->write_buf_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_write_buf, v1);
    goto LABEL_41;
  }
  v2->write_buf_.data_ = (char *)v10;
  p_write_buf = &v2->write_buf_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->write_buf_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_store8(p_write_buf, v1);
LABEL_42:
    __asan_report_store1(p_write_buf, v1, v13);
    goto LABEL_43;
  }
  v2->write_buf_.cur_ = (char *)v10;
  p_write_buf = v2->file_path_;
  v12 = *(_BYTE *)(((unsigned __int64)v2->file_path_ >> 3) + 0x7FFF8000);
  v13 = ((_BYTE)v2 + 4) & 7;
  if ( v12 <= (char)v13 && v12 )
    goto LABEL_42;
  v2->file_path_[0] = 0;
  __fxstat(1, 1, &v2->fd_stat_);
  anonymous0 = 0LL;
  v1 = &anonymous1;
  localtime_r(&anonymous0, &anonymous1);
  p_write_buf = &v2->tm_gmt_off_;
  v14 = *(_BYTE *)(((unsigned __int64)&v2->tm_gmt_off_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v2 + 44) & 7) + 3) >= v14 && v14 )
  {
LABEL_43:
    __asan_report_store4(p_write_buf, v1);
    p_M_t = &v2->log_level_set_._M_t;
    if ( *(_BYTE *)(((unsigned __int64)&v2->log_level_set_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
      p_M_t = (std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int> > *)__asan_report_load8(&v2->log_level_set_._M_t._M_impl._M_header._M_parent);
    v16 = p_M_t;
    std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int>>::_M_erase(
      p_M_t,
      (std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int> >::_Link_type)v2->log_level_set_._M_t._M_impl._M_header._M_parent);
    __asan_handle_no_return(v16);
    _Unwind_Resume(&vars0);
  }
  v2->tm_gmt_off_ = anonymous1.tm_gmtoff;
  pthread_mutex_init(&v2->log_file_lock_, 0LL);
  *(_QWORD *)(((unsigned __int64)&vars0 >> 3) + 0x7FFF8000) = 0LL;
  *(_QWORD *)(((unsigned __int64)&vars0 >> 3) + 0x7FFF800C) = 0LL;
};

// Line 47: range 000000000C9A68C4-000000000C9A7B14
void __fastcall common::milog::MiLogFile::~MiLogFile(common::milog::MiLogFile *const this)
{
  void *p_write_buf; // rdi
  char *data; // rdi

  common::milog::MiLogFile::fini(this, 0);
  p_write_buf = &this->write_buf_;
  if ( *(_BYTE *)(((unsigned __int64)&this->write_buf_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_write_buf);
    goto LABEL_7;
  }
  data = this->write_buf_.data_;
  if ( data )
    operator delete[](data);
  p_write_buf = &this->log_level_set_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&this->log_level_set_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_load8(p_write_buf);
    JUMPOUT(0xC9A6933LL);
  }
  std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int>>::_M_erase(
    &this->log_level_set_._M_t,
    (std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int> >::_Link_type)this->log_level_set_._M_t._M_impl._M_header._M_parent);
};

// Line 85: range 000000000C9A59EA-000000000C9A5DCC
int __fastcall common::milog::MiLogFile::innerOpenLogFile(
        common::milog::MiLogFile *const this,
        const char *new_file_path,
        bool need_lock)
{
  unsigned __int64 v4; // r13
  _DWORD *v5; // r12
  const char *v6; // rdx
  std::forward_iterator_tag v7; // cl
  __int64 v8; // rax
  char *v9; // rdi
  char v11; // dl
  char v12; // dl
  bool v13; // [rsp+Ch] [rbp-1ACh]
  int v14; // [rsp+Ch] [rbp-1ACh]
  int new_file_fd; // [rsp+18h] [rbp-1A0h]
  std::string path; // [rsp+20h] [rbp-198h] BYREF
  char v17[376]; // [rsp+40h] [rbp-178h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_3(320LL);
    if ( v8 )
      v4 = v8;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 32 11 dir_path:93 112 144 15 new_fd_stat:101";
  *(_QWORD *)(v4 + 16) = common::milog::MiLogFile::innerOpenLogFile;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862728] = -202116109;
  v5[536862729] = -202116109;
  if ( !new_file_path )
  {
    v14 = -1;
    goto LABEL_17;
  }
  if ( strlen(new_file_path) > 0x1FF )
  {
    v14 = -1;
    goto LABEL_17;
  }
  if ( need_lock )
    pthread_mutex_lock(&this->log_file_lock_);
  *(_QWORD *)(v4 + 48) = v4 + 64;
  *(_QWORD *)(v4 + 56) = 0LL;
  *(_BYTE *)(v4 + 64) = 0;
  path._M_dataplus._M_p = path._anon_0._M_local_buf;
  v6 = &new_file_path[strlen(new_file_path)];
  std::string::_M_construct<char const*>(&path, new_file_path, v6, v7);
  if ( common::tools::FileUtils::getParentDirectory(&path, (std::string *)(v4 + 48)) )
    v13 = 0;
  else
    v13 = common::tools::FileUtils::createDirectory((const std::string *)(v4 + 48)) != 0;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
    operator delete(path._M_dataplus._M_p);
  if ( v13 )
  {
    v14 = -1;
    goto LABEL_15;
  }
  new_file_fd = open(new_file_path, 1089, 436LL);
  if ( new_file_fd < 0 || (v14 = __fxstat(1, new_file_fd, (struct stat *)(v4 + 112))) != 0 )
  {
    if ( new_file_fd <= 0 )
      goto LABEL_23;
  }
  else
  {
    v11 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)this & 7) + 3) < v11 || !v11 )
    {
      if ( this->file_fd_._M_i != 1 )
        close(this->file_fd_._M_i);
      this->file_fd_._M_i = new_file_fd;
      _mm_mfence();
      __fxstat(1, this->file_fd_._M_i, &this->fd_stat_);
      if ( strcmp(this->file_path_, new_file_path) )
        strcpy(this->file_path_, new_file_path);
      if ( need_lock )
        pthread_mutex_unlock(&this->log_file_lock_);
      goto LABEL_15;
    }
    __asan_report_load4(this);
  }
  v12 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)this & 7) + 3) >= v12 && v12 )
  {
    __asan_report_load4(this);
    goto LABEL_35;
  }
  close(this->file_fd_._M_i);
LABEL_23:
  if ( need_lock )
LABEL_35:
    pthread_mutex_unlock(&this->log_file_lock_);
  v14 = -1;
LABEL_15:
  v9 = *(char **)(v4 + 48);
  if ( v9 != (char *)(v4 + 64) )
    operator delete(v9);
LABEL_17:
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v14;
};

// Line 129: range 000000000C9A5DD2-000000000C9A614E
int __fastcall common::milog::MiLogFile::openLogFile(
        common::milog::MiLogFile *const this,
        const char *new_file_path,
        uint16_t log_cut_time,
        uint32_t log_keep_time)
{
  unsigned __int64 v6; // r12
  _DWORD *v7; // rbx
  __int64 v8; // rdx
  void *p_log_cut_time; // rdi
  char v10; // dl
  char v11; // al
  uint32_t v12; // edx
  uint32_t v13; // eax
  __int64 v15; // rax
  int *v16; // r13
  char v17; // dl
  char *v18; // r8
  char v19; // dl
  int v20; // [rsp+8h] [rbp-300h]
  char v22[760]; // [rsp+10h] [rbp-2F8h] BYREF

  v6 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_4(704LL);
    if ( v15 )
      v6 = v15;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 48 513 17 cut_file_path:154";
  *(_QWORD *)(v6 + 16) = common::milog::MiLogFile::openLogFile;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862737] = -218038272;
  v7[536862738] = -202116109;
  v7[536862739] = -202116109;
  v7[536862740] = -202116109;
  v7[536862741] = -202116109;
  v20 = strcmp(new_file_path, "null");
  if ( v20 )
  {
    p_log_cut_time = &this->log_cut_time_;
    v10 = *(_BYTE *)(((unsigned __int64)&this->log_cut_time_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 52) & 7) + 1) < v10 || !v10 )
    {
      this->log_cut_time_ = log_cut_time;
      p_log_cut_time = &this->log_keep_time_;
      v11 = *(_BYTE *)(((unsigned __int64)&this->log_keep_time_ >> 3) + 0x7FFF8000);
      if ( !v11 || v11 > 3 )
      {
        this->log_keep_time_ = log_keep_time;
        if ( log_cut_time )
        {
          v12 = log_keep_time % log_cut_time;
          if ( v12 )
            this->log_keep_time_ = log_keep_time - v12 + log_cut_time;
        }
        snprintf(this->file_path_, 0x201uLL, "%s", new_file_path);
        v13 = time(0LL);
        if ( common::milog::MiLogFile::getCutFilePath(this, (char *)(v6 + 48), 513, v13) )
          goto LABEL_11;
LABEL_22:
        if ( rename((const char *)(v6 + 48), new_file_path) >= 0 )
        {
LABEL_11:
          v20 = common::milog::MiLogFile::innerOpenLogFile(this, new_file_path, 1);
          goto LABEL_12;
        }
        v16 = __errno_location();
        v17 = *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v16 & 7) + 3) >= v17 && v17 )
        {
          __asan_report_load4(v16);
        }
        else
        {
          v18 = strerror(*v16);
          v19 = *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v16 & 7) + 3) < v19 || !v19 )
          {
            printf(
              "openLogFile rename failed, cut_file_path:%s new_file_path:%s errno:%d %s\n",
              (const char *)(v6 + 48),
              new_file_path,
              (unsigned int)*v16,
              v18);
            if ( !*(_BYTE *)(((unsigned __int64)&stdout >> 3) + 0x7FFF8000) )
            {
              fflush(stdout);
              goto LABEL_11;
            }
LABEL_31:
            __asan_report_load8(&stdout);
            goto LABEL_32;
          }
        }
        __asan_report_load4(v16);
        goto LABEL_31;
      }
LABEL_21:
      __asan_report_store4(p_log_cut_time, "null");
      goto LABEL_22;
    }
LABEL_20:
    __asan_report_store2(p_log_cut_time);
    goto LABEL_21;
  }
  p_log_cut_time = &this->is_file_path_null;
  if ( *(char *)(((unsigned __int64)&this->is_file_path_null >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store1(p_log_cut_time, "null", v8);
    goto LABEL_20;
  }
  this->is_file_path_null = 1;
  strcpy(this->file_path_, new_file_path);
LABEL_12:
  if ( v22 != (char *)v6 )
  {
LABEL_32:
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    return v20;
  }
  *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  *(_QWORD *)((v6 >> 3) + 0x7FFF8044) = 0LL;
  *(_QWORD *)((v6 >> 3) + 0x7FFF804C) = 0LL;
  *(_DWORD *)((v6 >> 3) + 0x7FFF8054) = 0;
  return v20;
};

// Line 170: range 000000000C9A62E4-000000000C9A68BF
// local variable allocation has failed, the output may be wrong!
int __fastcall common::milog::MiLogFile::writeLog(
        common::milog::MiLogFile *const this,
        const char *buf,
        int32_t buf_len)
{
  const char *v4; // r12
  bool *p_is_file_path_null; // rdi
  char v8; // dl
  common::milog::MiLogFile::WriteBuffer *p_write_buf; // rdi
  char *cur; // rdx
  size_t v11; // rdx
  common::milog::MiLogFile::WriteBuffer *p_cur; // rdi
  char *v13; // rdi
  size_t v14; // rbp

  v4 = buf;
  p_is_file_path_null = &this->is_file_path_null;
  if ( *(char *)(((unsigned __int64)p_is_file_path_null >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(p_is_file_path_null, buf, *(_QWORD *)&buf_len);
  }
  else if ( this->is_file_path_null )
  {
    return 0;
  }
  v8 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)this & 7) + 3) >= v8 && v8 )
  {
    __asan_report_load4(this);
    return common::milog::MiLogFile::writeLogImt(this, buf, buf_len);
  }
  if ( this->file_fd_._M_i == 1 )
    return common::milog::MiLogFile::writeLogImt(this, buf, buf_len);
  p_write_buf = &this->write_buf_;
  if ( *(_BYTE *)(((unsigned __int64)&this->write_buf_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_write_buf);
    goto LABEL_19;
  }
  buf = this->write_buf_.data_;
  p_write_buf = (common::milog::MiLogFile::WriteBuffer *)&this->write_buf_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&this->write_buf_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8(p_write_buf);
    goto LABEL_20;
  }
  cur = this->write_buf_.cur_;
  if ( buf_len <= (int)buf + 0x200000 - (int)cur )
    goto LABEL_11;
LABEL_20:
  common::milog::MiLogFile::writeLogImt(this, buf, (_DWORD)cur - (_DWORD)buf);
  p_cur = &this->write_buf_;
  if ( *(_BYTE *)(((unsigned __int64)&this->write_buf_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_cur);
    goto LABEL_24;
  }
  p_cur = (common::milog::MiLogFile::WriteBuffer *)&this->write_buf_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&this->write_buf_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8(p_cur, buf);
    goto LABEL_25;
  }
  this->write_buf_.cur_ = this->write_buf_.data_;
LABEL_11:
  v11 = buf_len;
  p_cur = &this->write_buf_;
  if ( *(_BYTE *)(((unsigned __int64)&this->write_buf_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(p_cur);
    goto LABEL_26;
  }
  p_cur = (common::milog::MiLogFile::WriteBuffer *)&this->write_buf_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&this->write_buf_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(p_cur);
    JUMPOUT(0xC9A64A3LL);
  }
  v13 = this->write_buf_.cur_;
  v14 = LODWORD(this->write_buf_.data_) + 0x200000 - (int)v13;
  if ( v11 <= v14 )
    v14 = v11;
  memcpy(v13, v4, v14);
  this->write_buf_.cur_ += v14;
  return 0;
};

// Line 193: range 000000000C9A6154-000000000C9A62DF
int __fastcall common::milog::MiLogFile::writeLogImt(
        common::milog::MiLogFile *const this,
        const char *log,
        int log_len)
{
  pthread_mutex_t *p_log_file_lock; // r14
  char v7; // dl
  char v8; // dl
  char *file_path; // rsi
  __ino_t *p_st_ino; // rdi
  char v12; // dl

  if ( log_len <= 0 || log == 0LL )
    return -1;
  v7 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)this & 7) + 3) >= v7 && v7 )
  {
    __asan_report_load4(this);
LABEL_10:
    file_path = this->file_path_;
    if ( __xstat(1, this->file_path_, &this->path_stat_) )
      goto LABEL_14;
    p_st_ino = &this->path_stat_.st_ino;
    if ( *(_BYTE *)(((unsigned __int64)&this->path_stat_.st_ino >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_st_ino);
    }
    else
    {
      p_st_ino = &this->fd_stat_.st_ino;
      if ( !*(_BYTE *)(((unsigned __int64)&this->fd_stat_.st_ino >> 3) + 0x7FFF8000) )
      {
        if ( this->path_stat_.st_ino == this->fd_stat_.st_ino )
          goto LABEL_5;
LABEL_14:
        p_log_file_lock = &this->log_file_lock_;
        pthread_mutex_lock(&this->log_file_lock_);
        file_path = this->file_path_;
        if ( !common::milog::MiLogFile::innerOpenLogFile(this, this->file_path_, 0) )
        {
LABEL_15:
          pthread_mutex_unlock(p_log_file_lock);
          goto LABEL_5;
        }
LABEL_18:
        v12 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)this & 7) + 3) >= v12 && v12 )
        {
          __asan_report_store4(this, file_path);
LABEL_22:
          __asan_report_load4(this);
          return -1;
        }
        this->file_fd_._M_i = 1;
        _mm_mfence();
        __fxstat(1, this->file_fd_._M_i, &this->fd_stat_);
        goto LABEL_15;
      }
    }
    __asan_report_load8(p_st_ino);
    goto LABEL_18;
  }
  if ( this->file_fd_._M_i != 1 )
    goto LABEL_10;
LABEL_5:
  v8 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)this & 7) + 3) >= v8 && v8 )
    goto LABEL_22;
  if ( log_len == (unsigned int)write(this->file_fd_._M_i, log, log_len) )
    return 0;
  else
    return -1;
};

// Line 402: range 000000000C9A5378-000000000C9A558D
int __fastcall common::milog::MiLogFile::getCutFilePath(
        common::milog::MiLogFile *const this,
        char *cut_file_path,
        int buf_len,
        uint32_t cur_timestamp)
{
  unsigned __int64 v6; // r12
  _DWORD *v7; // r13
  void *p_log_cut_time; // rdi
  char v9; // dl
  uint16_t log_cut_time; // cx
  char v11; // dl
  int result; // eax
  __int64 v13; // rax
  char v15[216]; // [rsp+10h] [rbp-D8h] BYREF

  v6 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_2(160LL);
    if ( v13 )
      v6 = v13;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 17 cut_timestamp:412 64 56 10 cut_tm:415";
  *(_QWORD *)(v6 + 16) = common::milog::MiLogFile::getCutFilePath;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862723] = -218103808;
  v7[536862724] = -202116109;
  if ( !cut_file_path )
    goto LABEL_15;
  p_log_cut_time = &this->log_cut_time_;
  v9 = *(_BYTE *)(((unsigned __int64)&this->log_cut_time_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 52) & 7) + 1) >= v9 && v9 )
  {
    __asan_report_load2(p_log_cut_time);
LABEL_14:
    __asan_report_load4(p_log_cut_time);
LABEL_15:
    result = -1;
    goto LABEL_9;
  }
  log_cut_time = this->log_cut_time_;
  if ( log_cut_time )
  {
    p_log_cut_time = &this->tm_gmt_off_;
    v11 = *(_BYTE *)(((unsigned __int64)&this->tm_gmt_off_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 44) & 7) + 3) < v11 || !v11 )
    {
      *(_QWORD *)(v6 + 32) = cur_timestamp
                           - (this->tm_gmt_off_ + cur_timestamp) % 0x15180 % (60 * (unsigned int)log_cut_time);
      localtime_r((const time_t *)(v6 + 32), (struct tm *)(v6 + 64));
      snprintf(
        cut_file_path,
        buf_len,
        "%s.%04d%02d%02d.%02d%02d",
        this->file_path_,
        (unsigned int)(*(_DWORD *)(v6 + 84) + 1900),
        (unsigned int)(*(_DWORD *)(v6 + 80) + 1),
        *(unsigned int *)(v6 + 76),
        *(unsigned int *)(v6 + 72),
        *(unsigned int *)(v6 + 68));
      result = 0;
      goto LABEL_9;
    }
    goto LABEL_14;
  }
  result = -1;
LABEL_9:
  if ( v15 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 421: range 000000000C9A7B19-000000000C9A7B30
void __cdecl GLOBAL__sub_I_milog_file_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};
