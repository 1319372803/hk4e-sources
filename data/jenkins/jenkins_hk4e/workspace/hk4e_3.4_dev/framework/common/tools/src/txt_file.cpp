// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/src/txt_file.cpp

// Line 44: range 0000000019B4CE9E-0000000019B4D262
const std::string *__fastcall common::tools::TxtFile::Row::at(
        const common::tools::TxtFile::Row *const this,
        const std::string *key)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r13
  std::map<std::string,short unsigned int> *col_name_map_ptr; // r14
  std::_Rb_tree<std::string,std::pair<const std::string,short unsigned int>,std::_Select1st<std::pair<const std::string,short unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short unsigned int> > >::iterator v5; // rax
  char v6; // dl
  const std::string *v7; // rax
  __int64 v8; // rax
  std::forward_iterator_tag v9; // cl
  const std::string *v10; // rbp
  common::milog::MilogStringStream *ostr; // r14
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  size_t v14; // rbp
  char **p_data; // rdi
  char *v16; // rdi
  size_t v17; // rbp
  char *v18; // rdi
  common::milog::MiLogStream v20; // [rsp+0h] [rbp-B8h] BYREF
  char v21[152]; // [rsp+20h] [rbp-98h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v2 = v8;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 10 tmp_key:52";
  *(_QWORD *)(v2 + 16) = common::tools::TxtFile::Row::at;
  v3 = v2 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  if ( !(_BYTE)`guard variable for'common::tools::TxtFile::Row::at(std::string const&)::empty_str
    && __cxa_guard_acquire(&`guard variable for'common::tools::TxtFile::Row::at(std::string const&)::empty_str) )
  {
    common::tools::TxtFile::Row::at(std::string const&)const::empty_str._M_dataplus._M_p = common::tools::TxtFile::Row::at(std::string const&)const::empty_str._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(
      &common::tools::TxtFile::Row::at(std::string const&)const::empty_str,
      byte_1B5CCA60,
      byte_1B5CCA60,
      v9);
    __cxa_guard_release(&`guard variable for'common::tools::TxtFile::Row::at(std::string const&)::empty_str);
    __cxa_atexit(
      (void (__fastcall *)(void *))&std::string::~string,
      &common::tools::TxtFile::Row::at(std::string const&)const::empty_str,
      &_dso_handle);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->col_name_map_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->col_name_map_ptr);
    goto LABEL_15;
  }
  if ( !this->col_name_map_ptr )
  {
LABEL_15:
    common::milog::MiLogStream::MiLogStream(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/txt_file.cpp",
      "at",
      48);
    common::milog::MiLogStream::operator()(&v20, "col_name_map is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v10 = &common::tools::TxtFile::Row::at(std::string const&)const::empty_str;
    goto LABEL_34;
  }
  common::tools::StringUtils::toLower((std::string *)(v2 + 32), key);
  if ( *(_BYTE *)(((unsigned __int64)&this->col_name_map_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->col_name_map_ptr);
LABEL_17:
    common::milog::MiLogStream::MiLogStream(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/txt_file.cpp",
      "at",
      56);
    ostr = v20.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v20.ostr_ >> 3) + 0x7FFF8000) )
    {
      p_cur = v20.ostr_;
      __asan_report_load8(v20.ostr_);
    }
    else
    {
      p_cur = (common::milog::MilogStringStream *)&v20.ostr_->buffer_.cur_;
      if ( !*(_BYTE *)(((unsigned __int64)&v20.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      {
        cur = v20.ostr_->buffer_.cur_;
        v14 = (size_t)&v20.ostr_->buffer_.data_[-(int)cur + 0x4000];
        if ( v14 > 0x10 )
          v14 = 17LL;
        memcpy(cur, "can not find key:", v14);
        ostr->buffer_.cur_ += v14;
        ostr = v20.ostr_;
        if ( !*(_BYTE *)(((unsigned __int64)v20.ostr_ >> 3) + 0x7FFF8000) )
        {
          p_data = &v20.ostr_->buffer_.cur_;
          if ( !*(_BYTE *)(((unsigned __int64)&v20.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
          {
            v16 = v20.ostr_->buffer_.cur_;
            v17 = (size_t)&v20.ostr_->buffer_.data_[-(int)v16 + 0x4000];
            if ( *(_QWORD *)(v2 + 40) <= v17 )
              v17 = *(_QWORD *)(v2 + 40);
            memcpy(v16, *(const void **)(v2 + 32), v17);
            ostr->buffer_.cur_ += v17;
            common::milog::MiLogStream::~MiLogStream(&v20);
            v10 = &common::tools::TxtFile::Row::at(std::string const&)const::empty_str;
            goto LABEL_32;
          }
          goto LABEL_29;
        }
LABEL_28:
        p_data = &ostr->buffer_.data_;
        __asan_report_load8(ostr);
LABEL_29:
        __asan_report_load8(p_data);
LABEL_30:
        v7 = (const std::string *)__asan_report_load2();
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_cur);
    goto LABEL_28;
  }
  col_name_map_ptr = this->col_name_map_ptr;
  v5._M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned short>,std::_Select1st<std::pair<std::string const,unsigned short>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned short>>>::find(
                 &col_name_map_ptr->_M_t,
                 (const std::string *)(v2 + 32))._M_node;
  if ( &col_name_map_ptr->_M_t._M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)v5._M_node )
    goto LABEL_17;
  v6 = *(_BYTE *)(((unsigned __int64)&v5._M_node[2] >> 3) + 0x7FFF8000);
  if ( v6 && v6 <= 1 )
    goto LABEL_30;
  v7 = common::tools::TxtFile::Row::at[abi:cxx11](this, v5._M_node[2]._M_color);
LABEL_31:
  v10 = v7;
LABEL_32:
  v18 = *(char **)(v2 + 32);
  if ( v18 != (char *)(v2 + 48) )
    operator delete(v18);
LABEL_34:
  if ( v21 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v10;
};

// Line 88: range 0000000019B4CD4A-0000000019B4CE9C
bool __fastcall common::tools::TxtFile::Row::hasKey(
        const common::tools::TxtFile::Row *const this,
        const std::string *key)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r12
  std::map<std::string,short unsigned int> *col_name_map_ptr; // rbp
  bool v5; // bp
  char *v6; // rdi
  __int64 v8; // rax
  char v9[152]; // [rsp+10h] [rbp-98h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v2 = v8;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 10 tmp_key:94";
  *(_QWORD *)(v2 + 16) = common::tools::TxtFile::Row::hasKey;
  v3 = v2 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->col_name_map_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->col_name_map_ptr);
  }
  else
  {
    if ( !this->col_name_map_ptr )
    {
      v5 = 0;
      goto LABEL_8;
    }
    common::tools::StringUtils::toLower((std::string *)(v2 + 32), key);
    col_name_map_ptr = this->col_name_map_ptr;
    if ( &col_name_map_ptr->_M_t._M_impl.std::_Rb_tree_header != (std::_Rb_tree_header *)std::_Rb_tree<std::string,std::pair<std::string const,unsigned short>,std::_Select1st<std::pair<std::string const,unsigned short>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned short>>>::find(
                                                                                           &col_name_map_ptr->_M_t,
                                                                                           (const std::string *)(v2 + 32))._M_node )
    {
      v5 = 1;
      goto LABEL_6;
    }
  }
  v5 = 0;
LABEL_6:
  v6 = *(char **)(v2 + 32);
  if ( v6 != (char *)(v2 + 48) )
    operator delete(v6);
LABEL_8:
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v5;
};

// Line 104: range 0000000019B4D268-0000000019B4D6B2
int __fastcall common::tools::TxtFile::Row::assignToStr(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        std::string *val)
{
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_allocated_capacity; // r13
  void *v4; // rbp
  std::forward_iterator_tag v6; // cl
  const std::string *v7; // rax
  common::milog::MilogStringStream *ostr; // r12
  void *p_cur; // rdi
  char *cur; // rdi
  std::string::size_type M_string_length; // rax
  std::string::pointer M_p; // rsi
  char **p_data; // rdi
  char *v14; // rdi
  char **v15; // rdi
  char *v16; // rdi
  size_t v17; // rbx
  common::milog::MiLog *log; // rsi
  common::milog::MiLog *v20; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v22; // rax
  char v23; // al
  std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  std::string::size_type *p_M_string_length; // rax
  std::string::size_type *v26; // rdi
  char v27; // al
  char v28; // al
  char v29; // al
  struct _Unwind_Exception *v30; // rbx
  std::string::pointer v31; // rdi
  std::string v32; // [rsp+0h] [rbp-68h] BYREF
  common::milog::MiLogStream v33; // [rsp+20h] [rbp-48h] BYREF

  v4 = (void *)key;
  if ( common::tools::TxtFile::Row::isKeyValid(this, key) )
  {
    v32._M_dataplus._M_p = v32._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v32, &byte_1B5CCBA4[-4], byte_1B5CCBA4, v6);
    v7 = common::tools::TxtFile::Row::at(this, key);
    goto LABEL_24;
  }
  common::milog::MiLogStream::MiLogStream(
    &v33,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/txt_file.cpp",
    "assignToStr",
    107);
  ostr = v33.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v33.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_cur = v33.ostr_;
    __asan_report_load8(v33.ostr_);
    goto LABEL_17;
  }
  val = (std::string *)(v33.ostr_->buffer_.data_ + 0x4000);
  p_cur = &v33.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v33.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8(p_cur);
LABEL_18:
    __asan_report_load8(p_cur);
    goto LABEL_19;
  }
  cur = v33.ostr_->buffer_.cur_;
  val = (std::string *)((int)val - (int)cur);
  if ( (unsigned __int64)val > 0x1E )
    val = (std::string *)31;
  memcpy(cur, &unk_1B5CCB20, (size_t)val);
  ostr->buffer_.cur_ += (unsigned __int64)val;
  ostr = v33.ostr_;
  p_cur = &key->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&key->_M_string_length >> 3) + 0x7FFF8000) )
    goto LABEL_18;
  M_string_length = key->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8(key);
    goto LABEL_20;
  }
  M_p = key->_M_dataplus._M_p;
  if ( *(_BYTE *)(((unsigned __int64)v33.ostr_ >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    p_data = &ostr->buffer_.data_;
    __asan_report_load8(ostr);
    goto LABEL_21;
  }
  val = (std::string *)(v33.ostr_->buffer_.data_ + 0x4000);
  p_data = &v33.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v33.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(p_data);
    goto LABEL_22;
  }
  v14 = v33.ostr_->buffer_.cur_;
  val = (std::string *)((int)val - (int)v14);
  if ( M_string_length <= (unsigned __int64)val )
    val = (std::string *)*((_QWORD *)v4 + 1);
  memcpy(v14, M_p, (size_t)val);
  ostr->buffer_.cur_ += (unsigned __int64)val;
  v4 = v33.ostr_;
  if ( !*(_BYTE *)(((unsigned __int64)v33.ostr_ >> 3) + 0x7FFF8000) )
  {
    val = (std::string *)(v33.ostr_->buffer_.data_ + 0x4000);
    v15 = &v33.ostr_->buffer_.cur_;
    if ( !*(_BYTE *)(((unsigned __int64)&v33.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
    {
      v16 = v33.ostr_->buffer_.cur_;
      v17 = (_DWORD)val - (_DWORD)v16 != 0LL;
      memcpy(v16, &unk_1B5CCB60, v17);
      *((_QWORD *)v4 + 1) += v17;
      common::milog::MiLogStream::~MiLogStream(&v33);
      return -1;
    }
    goto LABEL_23;
  }
LABEL_22:
  v15 = (char **)v4;
  __asan_report_load8(v4);
LABEL_23:
  v7 = (const std::string *)__asan_report_load8(v15);
LABEL_24:
  log = (common::milog::MiLog *)v7;
  common::tools::StringUtils::trim((std::string *)&v33, v7, &v32, 1);
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    v20 = (common::milog::MiLog *)val;
    __asan_report_load8(val);
LABEL_41:
    if ( !v33.ostr_ptr_._M_ptr )
      goto LABEL_44;
    if ( v33.ostr_ptr_._M_ptr != (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)1 )
    {
      memcpy(v20, log, (size_t)v33.ostr_ptr_._M_ptr);
      goto LABEL_44;
    }
    v28 = *(_BYTE *)(((unsigned __int64)log >> 3) + 0x7FFF8000);
    if ( v28 <= ((unsigned __int8)log & 7) && v28 )
    {
      v20 = log;
      __asan_report_load1(log);
    }
    else
    {
      v29 = *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000);
      if ( v29 > ((unsigned __int8)v20 & 7) || !v29 )
      {
        LOBYTE(v20->max_log_len_._M_i) = log->max_log_len_._M_i;
LABEL_44:
        M_ptr = v33.ostr_ptr_._M_ptr;
        p_M_string_length = &val->_M_string_length;
        if ( !*(_BYTE *)(((unsigned __int64)&val->_M_string_length >> 3) + 0x7FFF8000) )
        {
          val->_M_string_length = (std::string::size_type)v33.ostr_ptr_._M_ptr;
          v26 = (std::string::size_type *)&val->_M_dataplus._M_p[(unsigned __int64)M_ptr];
          v27 = *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000);
          if ( v27 > ((unsigned __int8)v26 & 7) || !v27 )
          {
            *(_BYTE *)v26 = 0;
            goto LABEL_33;
          }
          goto LABEL_56;
        }
LABEL_55:
        v26 = p_M_string_length;
        __asan_report_store8(p_M_string_length);
LABEL_56:
        p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__asan_report_store1(v26);
LABEL_57:
        __asan_report_load8(p_anon_0);
        goto LABEL_58;
      }
    }
    p_M_string_length = (std::string::size_type *)__asan_report_store1(v20);
    goto LABEL_55;
  }
  v20 = (common::milog::MiLog *)val->_M_dataplus._M_p;
  log = v33.log_;
  if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v33.log_ == &v33.ostr_ptr_._M_refcount )
    goto LABEL_41;
  if ( v20 != (common::milog::MiLog *)&val->_anon_0 )
  {
    p_anon_0 = &val->_anon_0;
    if ( !*(_BYTE *)(((unsigned __int64)&val->_anon_0 >> 3) + 0x7FFF8000) )
    {
      M_allocated_capacity = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)val->_anon_0._M_allocated_capacity;
      goto LABEL_29;
    }
    goto LABEL_57;
  }
LABEL_58:
  v20 = 0LL;
LABEL_29:
  val->_M_dataplus._M_p = (std::string::pointer)log;
  if ( *(_BYTE *)(((unsigned __int64)&val->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(&val->_M_string_length);
  }
  else
  {
    val->_M_string_length = (std::string::size_type)v33.ostr_ptr_._M_ptr;
    v22 = &val->_anon_0;
    if ( !*(_BYTE *)(((unsigned __int64)&val->_anon_0 >> 3) + 0x7FFF8000) )
    {
      val->_anon_0._M_allocated_capacity = (std::string::size_type)v33.ostr_ptr_._M_refcount._M_pi;
      if ( v20 )
      {
        v33.log_ = v20;
        v33.ostr_ptr_._M_refcount._M_pi = M_allocated_capacity;
        goto LABEL_33;
      }
      goto LABEL_61;
    }
  }
  __asan_report_store8(v22);
LABEL_61:
  v33.log_ = (common::milog::MiLog *)&v33.ostr_ptr_._M_refcount;
LABEL_33:
  v33.ostr_ptr_._M_ptr = 0LL;
  v23 = *(_BYTE *)(((unsigned __int64)v33.log_ >> 3) + 0x7FFF8000);
  if ( v23 <= ((__int64)v33.log_ & 7) && v23 )
  {
    v30 = (struct _Unwind_Exception *)__asan_report_store1(v33.log_);
    v31 = v32._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v32._M_dataplus._M_p != &v32._anon_0 )
      operator delete(v32._M_dataplus._M_p);
    __asan_handle_no_return(v31);
    _Unwind_Resume(v30);
  }
  LOBYTE(v33.log_->max_log_len_._M_i) = 0;
  if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v33.log_ != &v33.ostr_ptr_._M_refcount )
    operator delete(v33.log_);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v32._M_dataplus._M_p != &v32._anon_0 )
    operator delete(v32._M_dataplus._M_p);
  return 0;
};

// Line 126: range 0000000019B4C5B4-0000000019B4CD44
int __fastcall common::tools::TxtFile::clear(common::tools::TxtFile *const this)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // r13
  std::vector<common::tools::TxtFile::Row> **v4; // r14
  std::_Vector_base<common::tools::TxtFile::Row>::pointer M_finish; // r15
  unsigned __int64 p_data; // rdi
  unsigned __int64 p_M_finish; // rdi
  std::_Rb_tree_header *v9; // rax
  char v10; // al
  FILE *file; // rdi
  common::tools::TxtFile::Row *M_start; // [rsp+8h] [rbp-40h]

  p_data = (unsigned __int64)&this->data_;
  if ( *(_BYTE *)((p_data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_data);
  }
  else
  {
    M_start = this->data_._M_impl._M_start;
    p_data = (unsigned __int64)&this->data_._M_impl._M_finish;
    if ( !*(_BYTE *)(((unsigned __int64)&this->data_._M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
      M_finish = this->data_._M_impl._M_finish;
      if ( M_start != M_finish )
      {
        v2 = (unsigned __int64)this->data_._M_impl._M_start;
        goto LABEL_20;
      }
      goto LABEL_27;
    }
  }
  __asan_report_load8(p_data);
LABEL_7:
  __asan_report_load8(p_data);
LABEL_8:
  __asan_report_load8(p_data);
LABEL_9:
  __asan_report_load8(p_data);
LABEL_10:
  operator delete((void *)p_data);
LABEL_11:
  for ( v1 += 32LL; ; v1 = *(_QWORD *)v2 )
  {
    if ( v4 != (std::vector<common::tools::TxtFile::Row> **)v1 )
    {
      p_data = v1;
      if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
        goto LABEL_9;
      p_data = *(_QWORD *)v1;
      if ( *(_QWORD *)v1 != v1 + 16 )
        goto LABEL_10;
      goto LABEL_11;
    }
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      break;
    if ( *(_QWORD *)v3 )
      operator delete(*(void **)v3);
    v2 += 32LL;
LABEL_20:
    if ( M_finish == (std::_Vector_base<common::tools::TxtFile::Row>::pointer)v2 )
      goto LABEL_25;
    v3 = v2;
    p_data = v2 + 8;
    if ( *(_BYTE *)(((v2 + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_7;
    v4 = *(std::vector<common::tools::TxtFile::Row> ***)(v2 + 8);
    p_data = v2;
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      goto LABEL_8;
  }
  __asan_report_load8(v3);
LABEL_25:
  p_M_finish = (unsigned __int64)&this->data_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->data_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_M_finish);
    goto LABEL_42;
  }
  this->data_._M_impl._M_finish = M_start;
LABEL_27:
  p_M_finish = (unsigned __int64)&this->col_name_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&this->col_name_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_load8(p_M_finish);
    goto LABEL_43;
  }
  std::_Rb_tree<std::string,std::pair<std::string const,unsigned short>,std::_Select1st<std::pair<std::string const,unsigned short>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned short>>>::_M_erase(
    &this->col_name_map_._M_t,
    (std::_Rb_tree<std::string,std::pair<const std::string,short unsigned int>,std::_Select1st<std::pair<const std::string,short unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short unsigned int> > >::_Link_type)this->col_name_map_._M_t._M_impl._M_header._M_parent);
  p_M_finish = (unsigned __int64)&this->col_name_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&this->col_name_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_store8(p_M_finish);
    goto LABEL_44;
  }
  this->col_name_map_._M_t._M_impl._M_header._M_parent = 0LL;
  v9 = &this->col_name_map_._M_t._M_impl.std::_Rb_tree_header;
  p_M_finish = (unsigned __int64)&this->col_name_map_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&this->col_name_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_store8(p_M_finish);
    goto LABEL_45;
  }
  this->col_name_map_._M_t._M_impl._M_header._M_left = &v9->_M_header;
  p_M_finish = (unsigned __int64)&this->col_name_map_._M_t._M_impl._M_header._M_right;
  if ( *(_BYTE *)(((unsigned __int64)&this->col_name_map_._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_store8(p_M_finish);
    goto LABEL_46;
  }
  this->col_name_map_._M_t._M_impl._M_header._M_right = &v9->_M_header;
  p_M_finish = (unsigned __int64)&this->col_name_map_._M_t._M_impl._M_node_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->col_name_map_._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    __asan_report_store8(p_M_finish);
    goto LABEL_47;
  }
  this->col_name_map_._M_t._M_impl._M_node_count = 0LL;
  bzero(this->line_buf_, 0x8000uLL);
  p_M_finish = (unsigned __int64)&this->file_path_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->file_path_._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_store8(p_M_finish);
    goto LABEL_48;
  }
  this->file_path_._M_string_length = 0LL;
  p_M_finish = (unsigned __int64)&this->file_path_;
  if ( *(_BYTE *)(((unsigned __int64)&this->file_path_ >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    __asan_report_load8(p_M_finish);
LABEL_49:
    __asan_report_store1(p_M_finish);
    goto LABEL_50;
  }
  p_M_finish = (unsigned __int64)this->file_path_._M_dataplus._M_p;
  v10 = *(_BYTE *)((p_M_finish >> 3) + 0x7FFF8000);
  if ( v10 <= ((__int64)this->file_path_._M_dataplus._M_p & 7) && v10 )
    goto LABEL_49;
  *(_BYTE *)p_M_finish = 0;
  p_M_finish = (unsigned __int64)&this->file_;
  if ( *(_BYTE *)(((unsigned __int64)&this->file_ >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    __asan_report_load8(p_M_finish);
    goto LABEL_51;
  }
  file = this->file_;
  if ( file )
  {
    fclose(file);
    p_M_finish = (unsigned __int64)&this->file_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->file_ >> 3) + 0x7FFF8000) )
    {
      this->file_ = 0LL;
      return 0;
    }
LABEL_51:
    __asan_report_store8(p_M_finish);
    JUMPOUT(0x19B4C8A7LL);
  }
  return 0;
};

// Line 147: range 0000000019B4D8E6-0000000019B4E5F5
int __fastcall common::tools::TxtFile::load(common::tools::TxtFile *const this, const char *file_path)
{
  unsigned __int64 line_buf; // rbp
  size_t v4; // r8
  void *p_M_string_length; // rdi
  FILE *v6; // rax
  __int64 v7; // rax
  int v8; // r12d
  char *v9; // rax
  size_t v10; // rax
  size_t v11; // rdx
  unsigned __int64 v12; // rdi
  char v13; // al
  std::_Rb_tree_node_base::_Base_ptr M_parent; // r15
  std::_Vector_base<common::tools::TxtFile::Row>::pointer M_finish; // r14
  unsigned __int64 i; // rbx
  unsigned __int64 j; // rbx
  bool v18; // cl
  const char *v19; // rdx
  char v20; // al
  int v21; // edx
  char v22; // al
  std::string *v23; // rdx
  size_t v24; // rax
  const common::tools::TxtFile::Row *v25; // rcx
  const std::string *v26; // rax
  std::string *v27; // rbx
  std::_Rb_tree_node_base *p_M_header; // r14
  std::_Rb_tree_node_base::_Base_ptr *p_M_parent; // rdi
  std::_Rb_tree<std::string,std::pair<const std::string,short unsigned int>,std::_Select1st<std::pair<const std::string,short unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short unsigned int> > >::iterator v30; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,short unsigned int>,std::_Select1st<std::pair<const std::string,short unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short unsigned int> > >::iterator v31; // r9
  unsigned __int64 v32; // rdx
  size_t *v33; // rcx
  size_t *v34; // rdi
  size_t v35; // rcx
  int v36; // eax
  __int64 v37; // r14
  char v38; // cl
  const std::string *v39; // rax
  std::_Vector_base<common::tools::TxtFile::Row>::pointer *p_M_finish; // rdi
  __int64 M_node; // rbx
  unsigned __int64 v42; // rdi
  std::_Vector_base<std::string>::pointer *v43; // rax
  std::_Vector_base<std::string>::pointer *p_M_end_of_storage; // rax
  size_t v45; // rax
  std::_Vector_base<common::tools::TxtFile::Row>::pointer v46; // rdi
  std::tuple<const std::string&> *v47; // rax
  std::tuple<const std::string&> *v48; // rcx
  void *p_col_name_map_ptr; // rdi
  char *v50; // rax
  std::string::pointer v51; // rdi
  std::_Rb_tree_const_iterator<std::pair<const std::string,short unsigned int> >::_Base_ptr k; // rbp
  void **v53; // rbp
  void **m; // rbx
  void *v55; // rdi
  std::tuple<const std::string&> *__args_1; // [rsp+0h] [rbp-158h]
  common::tools::TxtFile *v58; // [rsp+8h] [rbp-150h]
  uint32_t row_id; // [rsp+10h] [rbp-148h]
  uint16_t title_col_num; // [rsp+16h] [rbp-142h]
  std::_Rb_tree<std::string,std::pair<const std::string,short unsigned int>,std::_Select1st<std::pair<const std::string,short unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short unsigned int> > >::const_iterator __pos; // [rsp+18h] [rbp-140h]
  unsigned __int64 v62; // [rsp+30h] [rbp-128h]
  unsigned __int16 title_col_num_0; // [rsp+38h] [rbp-120h]
  _DWORD *v64; // [rsp+40h] [rbp-118h]
  std::tuple<> v65; // [rsp+5Fh] [rbp-F9h] BYREF
  common::milog::MiLogStream v66; // [rsp+60h] [rbp-F8h] BYREF
  char v67[216]; // [rsp+80h] [rbp-D8h] BYREF

  v62 = (unsigned __int64)v67;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v62 = v7;
  }
  *(_QWORD *)v62 = 1102416563LL;
  *(_QWORD *)(v62 + 8) = "3 32 8 6 __size 64 8 7 __osize 96 32 7 row:173";
  *(_QWORD *)(v62 + 16) = common::tools::TxtFile::load;
  v64 = (_DWORD *)(v62 >> 3);
  v64[536862720] = -235802127;
  v64[536862721] = -218959360;
  v64[536862722] = -218959360;
  v64[536862724] = -202116109;
  common::tools::TxtFile::clear(this);
  if ( !file_path )
  {
    common::milog::MiLogStream::MiLogStream(
      &v66,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/txt_file.cpp",
      "load",
      154);
    common::milog::MiLogStream::operator()(&v66, "file_path is nullptr or col_size=0.");
    common::milog::MiLogStream::~MiLogStream(&v66);
    v8 = 1;
    goto LABEL_159;
  }
  v4 = strlen(file_path);
  p_M_string_length = &this->file_path_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->file_path_._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_string_length);
    goto LABEL_11;
  }
  std::string::_M_replace(&this->file_path_, 0LL, this->file_path_._M_string_length, file_path, v4);
  v6 = fopen(file_path, "r");
  p_M_string_length = &this->file_;
  if ( *(_BYTE *)(((unsigned __int64)&this->file_ >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_store8(p_M_string_length);
    goto LABEL_12;
  }
  this->file_ = v6;
  if ( !v6 )
  {
LABEL_12:
    common::milog::MiLogStream::MiLogStream(
      &v66,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/txt_file.cpp",
      "load",
      164);
    common::milog::MiLogStream::operator()(&v66, &byte_1B5CCD40, file_path);
    common::milog::MiLogStream::~MiLogStream(&v66);
    common::tools::TxtFile::clear(this);
    v8 = -1;
    goto LABEL_159;
  }
  v58 = this;
  *(_QWORD *)(v62 + 96) = 0LL;
  *(_QWORD *)(v62 + 104) = 0LL;
  *(_QWORD *)(v62 + 112) = 0LL;
  *(_QWORD *)(v62 + 120) = this;
  row_id = 0;
  title_col_num = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->file_ >> 3) + 0x7FFF8000) )
        {
          v9 = (char *)__asan_report_load8(&this->file_);
        }
        else
        {
          line_buf = (unsigned __int64)this->line_buf_;
          v9 = fgets(this->line_buf_, 0x8000, this->file_);
        }
        if ( !v9 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->file_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->file_);
          else
            fclose(this->file_);
          if ( !*(_BYTE *)(((unsigned __int64)&this->file_ >> 3) + 0x7FFF8000) )
          {
            this->file_ = 0LL;
            v8 = 0;
            goto LABEL_150;
          }
          __asan_report_store8(&this->file_);
          goto LABEL_149;
        }
        ++row_id;
        if ( *(char *)((line_buf >> 3) + 0x7FFF8000) < 0 )
          break;
        if ( this->line_buf_[0] != 10 && this->line_buf_[0] != 0 )
          goto LABEL_20;
      }
      __asan_report_load1(line_buf);
LABEL_20:
      v10 = strlen((const char *)line_buf);
      if ( v10 > 0x7FFE )
      {
        common::milog::MiLogStream::MiLogStream(
          &v66,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/txt_file.cpp",
          "load",
          187);
        common::milog::MiLogStream::operator()(&v66, "%s:%u line is too long.", file_path, row_id);
        common::milog::MiLogStream::~MiLogStream(&v66);
        common::tools::TxtFile::clear(this);
LABEL_149:
        v8 = -1;
        goto LABEL_150;
      }
      if ( v10 > 1 )
      {
        v11 = v10 - 2;
        v12 = (unsigned __int64)&this->data_._M_impl._M_end_of_storage + v10 + 6;
        v13 = *(_BYTE *)((v12 >> 3) + 0x7FFF8000);
        if ( v13 <= (char)(v12 & 7) && v13 )
        {
          __asan_report_load1(v12);
LABEL_29:
          this->line_buf_[v11] = 10;
          goto LABEL_25;
        }
        if ( this->line_buf_[v11] == 13 )
          goto LABEL_29;
      }
LABEL_25:
      M_parent = *(std::_Rb_tree_node_base::_Base_ptr *)(v62 + 96);
      M_finish = *(std::_Vector_base<common::tools::TxtFile::Row>::pointer *)(v62 + 104);
      if ( M_parent != (std::_Rb_tree_node_base::_Base_ptr)M_finish )
      {
        for ( i = *(_QWORD *)(v62 + 96); M_finish != (std::_Vector_base<common::tools::TxtFile::Row>::pointer)i; i += 32LL )
        {
          if ( *(_BYTE *)((i >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(i);
          }
          else if ( *(_QWORD *)i != i + 16 )
          {
            operator delete(*(void **)i);
          }
        }
        *(_QWORD *)(v62 + 104) = M_parent;
      }
      for ( j = line_buf; ; ++j )
      {
        v20 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
        v21 = j & 7;
        if ( v20 <= (char)v21 && v20 )
        {
          __asan_report_load1(j);
LABEL_39:
          v19 = (const char *)(line_buf - 1);
          goto LABEL_51;
        }
        v22 = *(_BYTE *)j;
        LOBYTE(v21) = *(_BYTE *)j == 0;
        LOBYTE(M_finish) = *(_BYTE *)j == 10;
        M_finish = (std::_Vector_base<common::tools::TxtFile::Row>::pointer)(v21 | (unsigned int)M_finish);
        v18 = v22 == 0 || v22 == 9;
        if ( !v18 && v22 != 10 )
          goto LABEL_43;
        *(_BYTE *)j = 0;
        v66.log_ = (common::milog::MiLog *)&v66.ostr_ptr_._M_refcount;
        if ( !line_buf )
          goto LABEL_39;
        v19 = (const char *)(line_buf + strlen((const char *)line_buf));
LABEL_51:
        std::string::_M_construct<char const*>(
          (std::string *const)&v66,
          (const char *)line_buf,
          v19,
          (std::forward_iterator_tag)v18);
        std::vector<std::string>::emplace_back<std::string>(
          (std::vector<std::string> *const)(v62 + 96),
          (std::string *)&v66,
          v23);
        if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v66.log_ != &v66.ostr_ptr_._M_refcount )
          operator delete(v66.log_);
        line_buf = j + 1;
LABEL_43:
        if ( (_BYTE)M_finish )
          break;
      }
      if ( row_id == 1 )
        break;
      v24 = common::tools::TxtFile::Row::size((const common::tools::TxtFile::Row *const)(v62 + 96));
      if ( title_col_num != v24 )
      {
        common::milog::MiLogStream::MiLogStream(
          &v66,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/txt_file.cpp",
          "load",
          287);
        v45 = common::tools::TxtFile::Row::size((const common::tools::TxtFile::Row *const)(v62 + 96));
        common::milog::MiLogStream::operator()(
          &v66,
          "%s:%u col_num=%lu, the title col_num is %u",
          file_path,
          row_id,
          v45,
          title_col_num);
        common::milog::MiLogStream::~MiLogStream(&v66);
        common::tools::TxtFile::clear(this);
        v8 = -1;
        goto LABEL_150;
      }
      p_M_finish = &this->data_._M_impl._M_finish;
      if ( *(_BYTE *)(((unsigned __int64)&this->data_._M_impl._M_finish >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_M_finish);
LABEL_108:
        __asan_report_load8(p_M_finish);
LABEL_109:
        __asan_report_store8(M_finish);
LABEL_110:
        __asan_report_store8(v43);
LABEL_111:
        v42 = (unsigned __int64)p_M_end_of_storage;
        __asan_report_store8(p_M_end_of_storage);
        goto LABEL_112;
      }
      M_finish = this->data_._M_impl._M_finish;
      p_M_finish = &this->data_._M_impl._M_end_of_storage;
      if ( *(_BYTE *)(((unsigned __int64)&this->data_._M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
        goto LABEL_108;
      if ( M_finish == this->data_._M_impl._M_end_of_storage )
      {
        std::vector<common::tools::TxtFile::Row>::_M_realloc_insert<common::tools::TxtFile::Row const&>(
          &this->data_,
          (std::vector<common::tools::TxtFile::Row>::iterator)this->data_._M_impl._M_finish,
          (const common::tools::TxtFile::Row *)(v62 + 96),
          v25);
      }
      else
      {
        M_node = *(_QWORD *)(v62 + 104) - *(_QWORD *)(v62 + 96);
        v42 = M_node >> 5;
        if ( *(_BYTE *)(((unsigned __int64)M_finish >> 3) + 0x7FFF8000) )
          goto LABEL_109;
        M_finish->data_vec._M_impl._M_start = 0LL;
        v43 = &M_finish->data_vec._M_impl._M_finish;
        if ( *(_BYTE *)(((unsigned __int64)&M_finish->data_vec._M_impl._M_finish >> 3) + 0x7FFF8000) )
          goto LABEL_110;
        M_finish->data_vec._M_impl._M_finish = 0LL;
        p_M_end_of_storage = &M_finish->data_vec._M_impl._M_end_of_storage;
        if ( *(_BYTE *)(((unsigned __int64)&M_finish->data_vec._M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
          goto LABEL_111;
        M_finish->data_vec._M_impl._M_end_of_storage = 0LL;
        if ( v42 )
        {
          if ( v42 <= 0x3FFFFFFFFFFFFFFLL )
          {
            __pos._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,short unsigned int> >::_Base_ptr)operator new(32 * v42);
            goto LABEL_113;
          }
LABEL_112:
          __asan_handle_no_return(v42);
          std::__throw_bad_alloc();
        }
        __pos._M_node = 0LL;
LABEL_113:
        v46 = M_finish;
        if ( *(_BYTE *)(((unsigned __int64)M_finish >> 3) + 0x7FFF8000) )
        {
          __asan_report_store8(M_finish);
LABEL_119:
          __asan_report_store8(v46);
          goto LABEL_120;
        }
        M_finish->data_vec._M_impl._M_start = (std::_Vector_base<std::string>::pointer)__pos._M_node;
        v46 = (std::_Vector_base<common::tools::TxtFile::Row>::pointer)&M_finish->data_vec._M_impl._M_finish;
        if ( *(_BYTE *)(((unsigned __int64)&M_finish->data_vec._M_impl._M_finish >> 3) + 0x7FFF8000) )
          goto LABEL_119;
        M_finish->data_vec._M_impl._M_finish = (std::_Vector_base<std::string>::pointer)__pos._M_node;
        M_node += (__int64)__pos._M_node;
        v46 = (std::_Vector_base<common::tools::TxtFile::Row>::pointer)&M_finish->data_vec._M_impl._M_end_of_storage;
        if ( !*(_BYTE *)(((unsigned __int64)&M_finish->data_vec._M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
        {
          M_finish->data_vec._M_impl._M_end_of_storage = (std::_Vector_base<std::string>::pointer)M_node;
          v47 = *(std::tuple<const std::string&> **)(v62 + 96);
          v48 = *(std::tuple<const std::string&> **)(v62 + 104);
          __args_1 = v48;
          M_node = (__int64)__pos._M_node;
          goto LABEL_125;
        }
LABEL_120:
        __asan_report_store8(v46);
LABEL_121:
        __asan_report_store8(v46);
LABEL_122:
        __asan_report_load8(v46);
LABEL_123:
        __asan_report_load8(v46);
        while ( 1 )
        {
          v47 = (std::tuple<const std::string&> *)(line_buf + 32);
          M_node += 32LL;
LABEL_125:
          line_buf = (unsigned __int64)v47;
          if ( v47 == __args_1 )
            break;
          v46 = (std::_Vector_base<common::tools::TxtFile::Row>::pointer)M_node;
          if ( *(_BYTE *)(((unsigned __int64)M_node >> 3) + 0x7FFF8000) )
            goto LABEL_121;
          *(_QWORD *)M_node = M_node + 16;
          v46 = (std::_Vector_base<common::tools::TxtFile::Row>::pointer)v47;
          if ( *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) )
            goto LABEL_122;
          v46 = (std::_Vector_base<common::tools::TxtFile::Row>::pointer)&v47[1];
          if ( *(_BYTE *)(((unsigned __int64)&v47[1] >> 3) + 0x7FFF8000) )
            goto LABEL_123;
          std::string::_M_construct<char *>(
            (std::string *const)M_node,
            (char *)v47->_M_head_impl,
            (char *)v47[1]._M_head_impl + (unsigned __int64)v47->_M_head_impl,
            (std::forward_iterator_tag)v48);
        }
        p_col_name_map_ptr = &M_finish->data_vec._M_impl._M_finish;
        if ( *(_BYTE *)(((unsigned __int64)&M_finish->data_vec._M_impl._M_finish >> 3) + 0x7FFF8000) )
        {
          __asan_report_store8(p_col_name_map_ptr);
LABEL_134:
          __asan_report_store8(p_col_name_map_ptr);
          v51 = v50;
          __cxa_begin_catch(v50);
          for ( k = __pos._M_node;
                (std::_Rb_tree_const_iterator<std::pair<const std::string,short unsigned int> >::_Base_ptr)M_node != k;
                ++k )
          {
            if ( *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) )
              __asan_report_load8(k);
            v51 = *(std::string::pointer *)&k->_M_color;
            if ( *(std::_Rb_tree_const_iterator<std::pair<const std::string,short unsigned int> >::_Base_ptr *)&k->_M_color != (std::_Rb_tree_const_iterator<std::pair<const std::string,short unsigned int> >::_Base_ptr)&k->_M_left )
              operator delete(v51);
          }
          __asan_handle_no_return(v51);
          __cxa_rethrow();
        }
        M_finish->data_vec._M_impl._M_finish = (std::_Vector_base<std::string>::pointer)M_node;
        p_col_name_map_ptr = &M_finish->col_name_map_ptr;
        if ( *(_BYTE *)(((unsigned __int64)&M_finish->col_name_map_ptr >> 3) + 0x7FFF8000) )
          goto LABEL_134;
        M_finish->col_name_map_ptr = *(std::map<std::string,short unsigned int> **)(v62 + 120);
        ++this->data_._M_impl._M_finish;
      }
    }
    title_col_num_0 = common::tools::TxtFile::Row::size((const common::tools::TxtFile::Row *const)(v62 + 96));
    title_col_num = title_col_num_0;
    for ( line_buf = 0LL; ; line_buf = (unsigned int)(line_buf + 1) )
    {
      if ( (unsigned __int16)line_buf >= title_col_num_0 )
        goto LABEL_91;
      v39 = common::tools::TxtFile::Row::at[abi:cxx11]((const common::tools::TxtFile::Row *const)(v62 + 96), line_buf);
      if ( *(_BYTE *)(((unsigned __int64)&v39->_M_string_length >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(&v39->_M_string_length);
LABEL_59:
        common::milog::MiLogStream::MiLogStream(
          &v66,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/txt_file.cpp",
          "load",
          262);
        common::milog::MiLogStream::operator()(
          &v66,
          "%s title line col_id=%u is empty.",
          file_path,
          (unsigned __int16)line_buf);
        common::milog::MiLogStream::~MiLogStream(&v66);
        common::tools::TxtFile::clear(this);
        v8 = -1;
        goto LABEL_150;
      }
      if ( !v39->_M_string_length )
        goto LABEL_59;
      common::tools::StringUtils::lower((std::string *)(*(_QWORD *)(v62 + 96) + 32LL * (unsigned __int16)line_buf));
      v26 = common::tools::TxtFile::Row::at[abi:cxx11]((const common::tools::TxtFile::Row *const)(v62 + 96), line_buf);
      v27 = (std::string *)v26;
      p_M_header = &v58->col_name_map_._M_t._M_impl._M_header;
      p_M_parent = &v58->col_name_map_._M_t._M_impl._M_header._M_parent;
      if ( *(_BYTE *)(((unsigned __int64)&v58->col_name_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_M_parent);
LABEL_77:
        __asan_report_load8(p_M_parent);
LABEL_78:
        v30._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> >::_Base_ptr)__asan_report_load8(p_M_parent);
        goto LABEL_79;
      }
      v30._M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned short>,std::_Select1st<std::pair<std::string const,unsigned short>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned short>>>::_M_lower_bound(
                      &v58->col_name_map_._M_t,
                      (std::_Rb_tree<std::string,std::pair<const std::string,short unsigned int>,std::_Select1st<std::pair<const std::string,short unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short unsigned int> > >::_Link_type)v58->col_name_map_._M_t._M_impl._M_header._M_parent,
                      &v58->col_name_map_._M_t._M_impl._M_header,
                      v26)._M_node;
      __args_1 = (std::tuple<const std::string&> *)v30._M_node;
      __pos._M_node = v30._M_node;
      if ( p_M_header == v30._M_node )
        goto LABEL_75;
      v32 = (unsigned __int64)&v30._M_node[1];
      p_M_parent = (std::_Rb_tree_node_base::_Base_ptr *)&v27->_M_string_length;
      if ( *(_BYTE *)(((unsigned __int64)&v27->_M_string_length >> 3) + 0x7FFF8000) )
        goto LABEL_77;
      p_M_header = (std::_Rb_tree_node_base *)v27->_M_string_length;
      *(_QWORD *)(v62 + 32) = p_M_header;
      p_M_parent = &v30._M_node[1]._M_parent;
      if ( *(_BYTE *)(((unsigned __int64)&v30._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
        goto LABEL_78;
      M_parent = v30._M_node[1]._M_parent;
      *(_QWORD *)(v62 + 64) = M_parent;
      if ( p_M_header <= M_parent )
      {
        v33 = (size_t *)(v62 + 32);
        goto LABEL_66;
      }
LABEL_79:
      v33 = (size_t *)(v62 + 64);
LABEL_66:
      v34 = v33;
      if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v33);
LABEL_81:
        __asan_report_load8(v34);
LABEL_82:
        __asan_report_load8(v34);
LABEL_83:
        v36 = 0x7FFFFFFF;
        goto LABEL_74;
      }
      v35 = *v33;
      v34 = (size_t *)v32;
      if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
        goto LABEL_81;
      v34 = (size_t *)v27;
      if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
        goto LABEL_82;
      if ( !v35 || (v36 = memcmp(v27->_M_dataplus._M_p, *(const void **)&v30._M_node[1]._M_color, v35)) == 0 )
      {
        v37 = (char *)p_M_header - (char *)M_parent;
        if ( v37 > 0x7FFFFFFF )
          goto LABEL_83;
        if ( v37 < (__int64)0xFFFFFFFF80000000LL )
          v36 = 0x80000000;
        else
          v36 = v37;
      }
LABEL_74:
      if ( v36 < 0 )
      {
LABEL_75:
        *(_QWORD *)(v62 + 64) = v27;
        __args_1 = (std::tuple<const std::string&> *)std::_Rb_tree<std::string,std::pair<std::string const,unsigned short>,std::_Select1st<std::pair<std::string const,unsigned short>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned short>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string const&>,std::tuple<>>(
                                                       &v58->col_name_map_._M_t,
                                                       __pos,
                                                       &std::piecewise_construct,
                                                       (std::tuple<const std::string&> *)(v62 + 64),
                                                       &v65,
                                                       (const std::piecewise_construct_t *)v31._M_node,
                                                       __args_1,
                                                       (std::tuple<> *)v58)._M_node;
      }
      v38 = *(_BYTE *)(((unsigned __int64)&__args_1[8] >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)__args_1 + 64) & 7) + 1) >= v38 )
      {
        if ( v38 )
          break;
      }
      LOWORD(__args_1[8]._M_head_impl) = line_buf;
    }
    __asan_report_store2(&__args_1[8]);
LABEL_91:
    if ( *(_BYTE *)(((unsigned __int64)&this->col_name_map_._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
      break;
    if ( title_col_num_0 != this->col_name_map_._M_t._M_impl._M_node_count )
    {
      common::milog::MiLogStream::MiLogStream(
        &v66,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/txt_file.cpp",
        "load",
        273);
      goto LABEL_95;
    }
  }
  __asan_report_load8(&this->col_name_map_._M_t._M_impl._M_node_count);
LABEL_95:
  common::milog::MiLogStream::operator()(&v66, "%s title line has repeat title name.", file_path);
  common::milog::MiLogStream::~MiLogStream(&v66);
  common::tools::TxtFile::clear(this);
  v8 = -1;
LABEL_150:
  v53 = *(void ***)(v62 + 104);
  for ( m = *(void ***)(v62 + 96); v53 != m; m += 4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)m >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(m);
    }
    else if ( *m != m + 2 )
    {
      operator delete(*m);
    }
  }
  v55 = *(void **)(v62 + 96);
  if ( v55 )
    operator delete(v55);
LABEL_159:
  if ( v67 == (char *)v62 )
  {
    *(_QWORD *)((v62 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v62 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v62 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v62 = 1172321806LL;
    *(_QWORD *)((v62 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v62 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v62 >> 3) + 0x7FFF8010) = -168430091;
  }
  return v8;
};

// Line 338: range 0000000019B4D6B8-0000000019B4D8E3
const char *__fastcall common::tools::TxtFile::cell(
        common::tools::TxtFile *const this,
        uint32_t row_id,
        const char *col_name)
{
  std::string *v5; // rbp
  unsigned __int64 v6; // r14
  const char *v7; // rdx
  std::forward_iterator_tag v8; // cl
  __int64 v9; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,short unsigned int>,std::_Select1st<std::pair<const std::string,short unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short unsigned int> > >::iterator v10; // rax
  char v11; // dl
  const char *v12; // rax
  std::string *p_file_path; // rdi
  char *M_p; // rdi
  common::milog::MiLogStream v16; // [rsp+10h] [rbp-B8h] BYREF
  char v17[152]; // [rsp+30h] [rbp-98h] BYREF

  v5 = (std::string *)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(96LL);
    if ( v9 )
      v5 = (std::string *)v9;
  }
  v5->_M_dataplus._M_p = (std::string::pointer)1102416563;
  v5->_M_string_length = (std::string::size_type)"1 32 32 18 col_name_lower:344";
  v5->_anon_0._M_allocated_capacity = (std::string::size_type)common::tools::TxtFile::cell;
  v6 = (unsigned __int64)v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450888) = -202116109;
  if ( col_name )
  {
    v5[1]._M_dataplus._M_p = v5[1]._anon_0._M_local_buf;
    v7 = &col_name[strlen(col_name)];
    std::string::_M_construct<char const*>(v5 + 1, col_name, v7, v8);
    common::tools::StringUtils::lower(v5 + 1);
    v10._M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned short>,std::_Select1st<std::pair<std::string const,unsigned short>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned short>>>::find(
                    &this->col_name_map_._M_t,
                    v5 + 1)._M_node;
    if ( &this->col_name_map_._M_t._M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)v10._M_node )
    {
      common::milog::MiLogStream::MiLogStream(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/txt_file.cpp",
        "cell",
        349);
      p_file_path = &this->file_path_;
      if ( *(_BYTE *)(((unsigned __int64)&this->file_path_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(p_file_path);
      else
        common::milog::MiLogStream::operator()(
          &v16,
          "fail to find col %s in file %s.",
          col_name,
          this->file_path_._M_dataplus._M_p);
      common::milog::MiLogStream::~MiLogStream(&v16);
      col_name = 0LL;
    }
    else
    {
      v11 = *(_BYTE *)(((unsigned __int64)&v10._M_node[2] >> 3) + 0x7FFF8000);
      if ( v11 && v11 <= 1 )
        v12 = (const char *)__asan_report_load2();
      else
        v12 = common::tools::TxtFile::cell(this, row_id, v10._M_node[2]._M_color);
      col_name = v12;
    }
    M_p = v5[1]._M_dataplus._M_p;
    if ( M_p != (char *)&v5[1]._anon_0 )
      operator delete(M_p);
  }
  if ( v17 == (char *)v5 )
  {
    *(_DWORD *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v5->_M_dataplus._M_p = (std::string::pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return col_name;
};

// Line 360: range 0000000019B4C54E-0000000019B4C5B1
const common::tools::TxtFile::Row *__fastcall common::tools::TxtFile::row(
        common::tools::TxtFile *const this,
        uint32_t row_id)
{
  unsigned __int64 v2; // rax
  std::vector<common::tools::TxtFile::Row> *p_data; // rcx
  std::_Vector_base<common::tools::TxtFile::Row>::pointer M_start; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->data_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->data_._M_impl._M_finish);
    goto LABEL_6;
  }
  v2 = row_id;
  p_data = &this->data_;
  if ( *(_BYTE *)(((unsigned __int64)&this->data_ >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    __asan_report_load8(p_data);
    return 0LL;
  }
  M_start = this->data_._M_impl._M_start;
  if ( v2 < this->data_._M_impl._M_finish - M_start )
    return &M_start[v2];
  return 0LL;
};

// Line 367: range 0000000019B4E5FA-0000000019B4E611
void __cdecl GLOBAL__sub_I_txt_file_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 367: range 0000000019B4C0DC-0000000019B4C54B
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/txt_file.cpp");
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
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
          JUMPOUT(0x19B4C16FLL);
        }
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                             + 9;
      }
    }
    __asan_after_dynamic_init();
  }
};
