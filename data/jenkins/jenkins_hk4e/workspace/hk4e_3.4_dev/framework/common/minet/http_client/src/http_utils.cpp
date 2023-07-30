// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/http_client/src/http_utils.cpp

// Line 22: range 0000000019D0191C-0000000019D01B6B
std::string *__fastcall common::minet::http_client::HttpUtils::parseParamToStr[abi:cxx11](
        std::string *retstr,
        const common::minet::http_client::HttpRequest *req)
{
  std::string *v2; // rbx
  char v3; // al
  __int64 v4; // rdx
  const common::minet::http_client::HttpRequest *i; // rax
  std::string::size_type *p_M_string_length; // rdi
  const std::_Rb_tree_node_base *v7; // rbp
  const std::string *p_port; // r12
  const std::string *p_uri; // r15
  std::string v11[2]; // [rsp+0h] [rbp-58h] BYREF

  v2 = retstr;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(retstr, req);
    goto LABEL_8;
  }
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr = (std::string *)((char *)retstr + 8);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_store8(retstr, req);
LABEL_9:
    __asan_report_store1(retstr, req, v4);
LABEL_10:
    __asan_report_load8(retstr);
LABEL_11:
    __asan_report_load8(retstr);
LABEL_12:
    __asan_handle_no_return(retstr);
    std::__throw_length_error("basic_string::append");
  }
  v2->_M_string_length = 0LL;
  retstr = (std::string *)&v2->_anon_0;
  v3 = *(_BYTE *)(((unsigned __int64)&v2->_anon_0 >> 3) + 0x7FFF8000);
  v4 = ((_BYTE)v2 + 16) & 7;
  if ( v3 <= (char)v4 && v3 )
    goto LABEL_9;
  v2->_anon_0._M_local_buf[0] = 0;
  retstr = (std::string *)&req->param_map._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&req->param_map._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
    goto LABEL_10;
  for ( i = (const common::minet::http_client::HttpRequest *)req->param_map._M_t._M_impl._M_header._M_left;
        ;
        i = (const common::minet::http_client::HttpRequest *)std::_Rb_tree_increment(v7) )
  {
    v7 = (const std::_Rb_tree_node_base *)i;
    if ( i == (const common::minet::http_client::HttpRequest *)&req->param_map._M_t._M_impl.std::_Rb_tree_header )
      break;
    p_port = &i->port;
    p_uri = &i->uri;
    retstr = (std::string *)&v2->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
      goto LABEL_11;
    if ( v2->_M_string_length )
    {
      if ( v2->_M_string_length == 0x3FFFFFFFFFFFFFFFLL )
        goto LABEL_12;
      std::string::_M_append(v2, "&", 1LL);
    }
    common::tools::StringUtils::urlEncode(v11, p_port);
    std::string::_M_append(v2, v11[0]._M_dataplus._M_p, v11[0]._M_string_length);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11[0]._M_dataplus._M_p != &v11[0]._anon_0 )
      operator delete(v11[0]._M_dataplus._M_p);
    p_M_string_length = &v2->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_string_length);
LABEL_19:
      __asan_handle_no_return(p_M_string_length);
      std::__throw_length_error("basic_string::append");
    }
    if ( v2->_M_string_length == 0x3FFFFFFFFFFFFFFFLL )
      goto LABEL_19;
    std::string::_M_append(v2, "=", 1LL);
    common::tools::StringUtils::urlEncode(v11, p_uri);
    std::string::_M_append(v2, v11[0]._M_dataplus._M_p, v11[0]._M_string_length);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11[0]._M_dataplus._M_p != &v11[0]._anon_0 )
      operator delete(v11[0]._M_dataplus._M_p);
  }
  return v2;
};

// Line 38: range 0000000019D01C94-0000000019D024CF
void __fastcall common::minet::http_client::HttpUtils::parseParamStr(
        const std::string *para_str,
        std::map<std::string,std::string> *param_map)
{
  char *v2; // r15
  common::milog::MilogStringStream *ostr; // rbx
  _DWORD *v4; // r14
  __int64 v5; // rax
  int32_t v6; // ebp
  const std::string *v7; // rax
  const std::string *v8; // rcx
  int32_t v9; // ebp
  const std::string *data; // rsi
  common::milog::MilogStringStream *v11; // rbx
  char **p_data; // rdi
  char *v13; // rdi
  size_t v14; // rbp
  void **v15; // rbp
  void **i; // rbx
  char **p_cur; // rdi
  char *cur; // rdi
  size_t M_string_length; // rbp
  std::string *v20; // rcx
  std::string *v21; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<const std::string,std::string > >,bool> v22; // rax
  char *v23; // rdi
  char *v24; // rdi
  unsigned __int64 v25; // rbp
  std::string::size_type *p_M_string_length; // rdi
  void *v27; // rdi
  size_t v28; // rbx
  void *v29; // rdi
  void *v30; // rdi
  size_t v31; // rbp
  char *v32; // rdi
  char *v33; // rdi
  char *v34; // rdi
  const std::string *v35; // r12
  void *v36; // rdi
  void **v37; // rbp
  void **v38; // rbx
  void *v39; // rdi
  void *v40; // rdi
  const std::string *v41; // [rsp+8h] [rbp-1F0h]
  unsigned __int64 v43; // [rsp+18h] [rbp-1E0h]
  std::allocator<char> __a; // [rsp+3Fh] [rbp-1B9h] BYREF
  common::milog::MiLogStream v46; // [rsp+40h] [rbp-1B8h] BYREF
  common::milog::MiLogStream v47; // [rsp+60h] [rbp-198h] BYREF
  std::string sep; // [rsp+80h] [rbp-178h] BYREF
  char v49[344]; // [rsp+A0h] [rbp-158h] BYREF

  v43 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v43 = v5;
  }
  ostr = (common::milog::MilogStringStream *)(v43 + 288);
  *(_QWORD *)v43 = 1102416563LL;
  *(_QWORD *)(v43 + 8) = "4 32 24 12 param_vec:39 96 24 16 key_value_vec:46 160 32 6 key:57 224 32 6 val:58";
  *(_QWORD *)(v43 + 16) = common::minet::http_client::HttpUtils::parseParamStr;
  v4 = (_DWORD *)(v43 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  *(_QWORD *)(v43 + 32) = 0LL;
  *(_QWORD *)(v43 + 40) = 0LL;
  *(_QWORD *)(v43 + 48) = 0LL;
  std::string::basic_string<std::allocator<char>>(&sep, "&", &__a);
  v6 = common::tools::StringUtils::splitToList(para_str, &sep, (std::vector<std::string> *)(v43 + 32), 1);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)sep._M_dataplus._M_p != &sep._anon_0 )
    operator delete(sep._M_dataplus._M_p);
  if ( v6 )
    goto LABEL_83;
  v7 = *(const std::string **)(v43 + 32);
  v8 = *(const std::string **)(v43 + 40);
  v41 = v8;
  while ( 1 )
  {
    v35 = v7;
    if ( v7 == v41 )
    {
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v43 + 32));
      goto LABEL_94;
    }
    ostr[-12].buffer_.data_ = 0LL;
    ostr[-12].buffer_.cur_ = 0LL;
    ostr[-11].buffer_.data_ = 0LL;
    sep._M_dataplus._M_p = sep._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&sep, "=", "", (std::forward_iterator_tag)v8);
    v9 = common::tools::StringUtils::splitToList(v35, &sep, (std::vector<std::string> *)&ostr[-12], 1);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)sep._M_dataplus._M_p != &sep._anon_0 )
      operator delete(sep._M_dataplus._M_p);
    if ( v9 )
      break;
    data = (const std::string *)ostr[-12].buffer_.data_;
    if ( (char *)(ostr[-12].buffer_.cur_ - (char *)data) == (char *)64 )
    {
      common::tools::StringUtils::urlDecode((std::string *)&ostr[-8], data);
      goto LABEL_37;
    }
LABEL_26:
    common::milog::MiLogStream::MiLogStream(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/http_utils.cpp",
      "parseParamStr",
      54);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      v47.ostr_,
      "key_value_vec size != 2. param_str:");
    ostr = v47.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)&v35->_M_string_length >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&v35->_M_string_length);
LABEL_34:
      __asan_report_load8(v35);
      goto LABEL_35;
    }
    if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
      goto LABEL_34;
    if ( !*(_BYTE *)(((unsigned __int64)v47.ostr_ >> 3) + 0x7FFF8000) )
    {
      p_cur = &v47.ostr_->buffer_.cur_;
      if ( !*(_BYTE *)(((unsigned __int64)&v47.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      {
        cur = v47.ostr_->buffer_.cur_;
        M_string_length = (size_t)&v47.ostr_->buffer_.data_[-(int)cur + 0x4000];
        if ( v35->_M_string_length <= M_string_length )
          M_string_length = v35->_M_string_length;
        memcpy(cur, v35->_M_dataplus._M_p, M_string_length);
        ostr->buffer_.cur_ += M_string_length;
        common::milog::MiLogStream::~MiLogStream(&v47);
        goto LABEL_21;
      }
      goto LABEL_36;
    }
LABEL_35:
    p_cur = &ostr->buffer_.data_;
    __asan_report_load8(ostr);
LABEL_36:
    __asan_report_load8(p_cur);
LABEL_37:
    common::tools::StringUtils::urlDecode((std::string *)&ostr[-4], (const std::string *)ostr[-12].buffer_.data_ + 1);
    v22 = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_emplace_unique<std::string&,std::string&>(
            &param_map->_M_t,
            (std::string *)&ostr[-8],
            (std::string *)&ostr[-4],
            v20,
            v21);
    if ( v22.second )
    {
      v23 = ostr[-4].buffer_.data_;
      if ( v23 != (char *)&ostr[-3] )
        operator delete(v23);
      v24 = ostr[-8].buffer_.data_;
      if ( v24 != (char *)&ostr[-7] )
        operator delete(v24);
      v2 = ostr[-12].buffer_.cur_;
      v25 = (unsigned __int64)ostr[-12].buffer_.data_;
      goto LABEL_66;
    }
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&sep,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/http_utils.cpp",
      "parseParamStr",
      61);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&sep._anon_0._M_allocated_capacity + 1),
      "duplicate key:");
    v25 = *(&sep._anon_0._M_allocated_capacity + 1);
    if ( *(_BYTE *)((*(&sep._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
    {
      p_M_string_length = (std::string::size_type *)*(&sep._anon_0._M_allocated_capacity + 1);
      __asan_report_load8(*(&sep._anon_0._M_allocated_capacity + 1));
LABEL_58:
      __asan_report_load8(p_M_string_length);
LABEL_59:
      __asan_report_load8(p_M_string_length);
LABEL_60:
      __asan_report_load8(para_str);
LABEL_61:
      v29 = ostr;
      __asan_report_load8(ostr);
      goto LABEL_62;
    }
    ostr = (common::milog::MilogStringStream *)(**((_QWORD **)&sep._anon_0._M_allocated_capacity + 1) + 0x4000LL);
    p_M_string_length = (std::string::size_type *)(*(&sep._anon_0._M_allocated_capacity + 1) + 8);
    if ( *(_BYTE *)(((*(&sep._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_58;
    v27 = *(void **)(*(&sep._anon_0._M_allocated_capacity + 1) + 8);
    v28 = (int)ostr - (int)v27;
    if ( *(_QWORD *)(v43 + 168) <= v28 )
      v28 = *(_QWORD *)(v43 + 168);
    memcpy(v27, *(const void **)(v43 + 160), v28);
    *(_QWORD *)(v25 + 8) += v28;
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&sep._anon_0._M_allocated_capacity + 1),
      " para_str:");
    ostr = (common::milog::MilogStringStream *)*(&sep._anon_0._M_allocated_capacity + 1);
    p_M_string_length = &para_str->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&para_str->_M_string_length >> 3) + 0x7FFF8000) )
      goto LABEL_59;
    if ( *(_BYTE *)(((unsigned __int64)para_str >> 3) + 0x7FFF8000) )
      goto LABEL_60;
    if ( *(_BYTE *)((*(&sep._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
      goto LABEL_61;
    v25 = **((_QWORD **)&sep._anon_0._M_allocated_capacity + 1) + 0x4000LL;
    v29 = (void *)(*(&sep._anon_0._M_allocated_capacity + 1) + 8);
    if ( !*(_BYTE *)(((*(&sep._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
    {
      v30 = *(void **)(*(&sep._anon_0._M_allocated_capacity + 1) + 8);
      v31 = (int)v25 - (int)v30;
      if ( para_str->_M_string_length <= v31 )
        v31 = para_str->_M_string_length;
      memcpy(v30, para_str->_M_dataplus._M_p, v31);
      ostr->buffer_.cur_ += v31;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&sep);
      v32 = *(char **)(v43 + 224);
      if ( v32 != (char *)(v43 + 240) )
        operator delete(v32);
      v33 = *(char **)(v43 + 160);
      if ( v33 != (char *)(v43 + 176) )
        operator delete(v33);
      goto LABEL_21;
    }
LABEL_62:
    __asan_report_load8(v29);
LABEL_63:
    __asan_report_load8(v29);
LABEL_64:
    operator delete(v29);
    while ( 1 )
    {
      v25 += 32LL;
LABEL_66:
      if ( v2 == (char *)v25 )
        break;
      v29 = (void *)v25;
      if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
        goto LABEL_63;
      v29 = *(void **)v25;
      if ( *(_QWORD *)v25 != v25 + 16 )
        goto LABEL_64;
    }
    v34 = ostr[-12].buffer_.data_;
    if ( v34 )
      operator delete(v34);
    v7 = v35 + 1;
  }
  common::milog::MiLogStream::MiLogStream(
    &v46,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/http_utils.cpp",
    "parseParamStr",
    49);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v46.ostr_, "splitToList fail. param_str:");
  v11 = v46.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)&v35->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&v35->_M_string_length);
    goto LABEL_23;
  }
  if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(v35);
    goto LABEL_24;
  }
  if ( *(_BYTE *)(((unsigned __int64)v46.ostr_ >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    p_data = &v11->buffer_.data_;
    __asan_report_load8(v11);
    goto LABEL_25;
  }
  p_data = &v46.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v46.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(p_data);
    goto LABEL_26;
  }
  v13 = v46.ostr_->buffer_.cur_;
  v14 = (size_t)&v46.ostr_->buffer_.data_[-(int)v13 + 0x4000];
  if ( v35->_M_string_length <= v14 )
    v14 = v35->_M_string_length;
  memcpy(v13, v35->_M_dataplus._M_p, v14);
  v11->buffer_.cur_ += v14;
  common::milog::MiLogStream::~MiLogStream(&v46);
LABEL_21:
  v15 = *(void ***)(v43 + 104);
  for ( i = *(void ***)(v43 + 96); v15 != i; i += 4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(i);
    }
    else if ( *i != i + 2 )
    {
      operator delete(*i);
    }
  }
  v36 = *(void **)(v43 + 96);
  if ( v36 )
    operator delete(v36);
LABEL_83:
  v37 = *(void ***)(v43 + 40);
  v38 = *(void ***)(v43 + 32);
  while ( 2 )
  {
    if ( v37 != v38 )
    {
      v39 = v38;
      if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v38);
      }
      else
      {
        v39 = *v38;
        if ( *v38 == v38 + 2 )
          goto LABEL_87;
      }
      operator delete(v39);
LABEL_87:
      v38 += 4;
      continue;
    }
    break;
  }
  v40 = *(void **)(v43 + 32);
  if ( v40 )
    operator delete(v40);
LABEL_94:
  if ( v49 == (char *)v43 )
  {
    *(_QWORD *)((v43 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v43 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v43 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v43 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v43 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v43 = 1172321806LL;
    *(_QWORD *)((v43 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v43 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v43 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v43 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v43 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 69: range 0000000019D024D4-0000000019D02A4F
int32_t __fastcall common::minet::http_client::HttpUtils::initHttpRequest(
        const common::minet::http_client::BeastHttpRequest *beast_req,
        common::minet::http_client::HttpRequest *req,
        bool init_head)
{
  unsigned __int64 v4; // rbp
  _DWORD *v5; // r12
  boost::beast::http::verb v6; // eax
  boost::beast::string_view v7; // rax
  char *v8; // rdi
  std::forward_iterator_tag v9; // cl
  std::forward_iterator_tag v10; // cl
  std::string::size_type v11; // r15
  __int64 v12; // rax
  boost::beast::string_view v14; // rax
  std::forward_iterator_tag v15; // cl
  __int64 v16; // rax
  __int64 v17; // r13
  char *v18; // rdi
  char *v19; // rdi
  __int64 v20; // rax
  std::forward_iterator_tag v21; // cl
  __int64 v22; // r15
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r13
  std::string::size_type v25; // rcx
  unsigned __int64 v26; // rdx
  std::forward_iterator_tag v27; // cl
  char *v28; // rdi
  unsigned __int64 v29; // r15
  std::string::size_type v30; // r13
  std::string::size_type v31; // r13
  std::string::pointer M_p; // rdi
  std::string::size_type v33; // r15
  std::string::size_type v34; // rax
  unsigned __int64 v35; // r13
  std::string::size_type v36; // r15
  std::string::size_type v37; // r15
  std::string::size_type v38; // [rsp+8h] [rbp-100h]
  std::string::size_type v39; // [rsp+8h] [rbp-100h]
  std::string para_str; // [rsp+10h] [rbp-F8h] BYREF
  char v41[216]; // [rsp+30h] [rbp-D8h] BYREF

  v4 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_2(160LL);
    if ( v12 )
      v4 = v12;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 32 9 target:75 96 32 9 target:95";
  *(_QWORD *)(v4 + 16) = common::minet::http_client::HttpUtils::initHttpRequest;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  v6 = boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::method(beast_req);
  if ( v6 <= head )
  {
    if ( v6 < get )
      goto LABEL_10;
    v14 = boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::target(beast_req);
    *(_QWORD *)(v4 + 32) = v4 + 48;
    std::string::_M_construct<char const*>((std::string *const)(v4 + 32), v14.ptr_, &v14.ptr_[v14.len_], v15);
    v16 = std::string::find(v4 + 32, 47LL, 0LL);
    v17 = v16;
    if ( v16 == -1 )
    {
LABEL_15:
      v18 = *(char **)(v4 + 32);
      if ( v18 == (char *)(v4 + 48) )
        goto LABEL_11;
      goto LABEL_16;
    }
    v19 = (char *)(v4 + 32);
    v20 = std::string::find(v4 + 32, 63LL, v16);
    v22 = v20;
    if ( v20 == -1 )
    {
      v33 = *(_QWORD *)(v4 + 40);
      v34 = v33 - v17;
      v35 = v17 + 1;
      if ( v35 > v33 )
      {
        __asan_handle_no_return(v19);
        std::__throw_out_of_range_fmt(
          "%s: __pos (which is %zu) > this->size() (which is %zu)",
          "basic_string::substr",
          v35,
          v33);
      }
      para_str._M_dataplus._M_p = para_str._anon_0._M_local_buf;
      v36 = *(_QWORD *)(v4 + 40);
      if ( v35 > v36 )
      {
        __asan_handle_no_return(v19);
        std::__throw_out_of_range_fmt(
          "%s: __pos (which is %zu) > this->size() (which is %zu)",
          "basic_string::basic_string",
          v35,
          v36);
      }
      v37 = v36 - v35;
      if ( v34 < v37 )
        v37 = v34;
      std::string::_M_construct<char const*>(
        &para_str,
        (const char *)(v35 + *(_QWORD *)(v4 + 32)),
        (const char *)(v35 + *(_QWORD *)(v4 + 32) + v37),
        v21);
      std::string::operator=(&req->uri, &para_str);
      M_p = para_str._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)para_str._M_dataplus._M_p == &para_str._anon_0 )
        goto LABEL_15;
    }
    else
    {
      v23 = v20 - v17 - 1;
      v24 = v17 + 1;
      v38 = *(_QWORD *)(v4 + 40);
      if ( v24 > v38 )
      {
        __asan_handle_no_return(v19);
        std::__throw_out_of_range_fmt(
          "%s: __pos (which is %zu) > this->size() (which is %zu)",
          "basic_string::substr",
          v24,
          v38);
      }
      *(_QWORD *)(v4 + 96) = v4 + 112;
      v25 = *(_QWORD *)(v4 + 40);
      v39 = v25;
      if ( v24 > v25 )
      {
        __asan_handle_no_return(v19);
        std::__throw_out_of_range_fmt(
          "%s: __pos (which is %zu) > this->size() (which is %zu)",
          "basic_string::basic_string",
          v24,
          v39);
      }
      v26 = v25 - v24;
      if ( v23 < v25 - v24 )
        v26 = v23;
      std::string::_M_construct<char const*>(
        (std::string *const)(v4 + 96),
        (const char *)(v24 + *(_QWORD *)(v4 + 32)),
        (const char *)(v24 + *(_QWORD *)(v4 + 32) + v26),
        (std::forward_iterator_tag)v25);
      std::string::operator=(&req->uri, v4 + 96);
      v28 = *(char **)(v4 + 96);
      if ( v28 != (char *)(v4 + 112) )
        operator delete(v28);
      v29 = v22 + 1;
      v30 = *(_QWORD *)(v4 + 40);
      if ( v29 > v30 )
      {
        __asan_handle_no_return(v28);
        std::__throw_out_of_range_fmt(
          "%s: __pos (which is %zu) > this->size() (which is %zu)",
          "basic_string::substr",
          v29,
          v30);
      }
      para_str._M_dataplus._M_p = para_str._anon_0._M_local_buf;
      v31 = *(_QWORD *)(v4 + 40);
      if ( v29 > v31 )
      {
        __asan_handle_no_return(v28);
        std::__throw_out_of_range_fmt(
          "%s: __pos (which is %zu) > this->size() (which is %zu)",
          "basic_string::basic_string",
          v29,
          v31);
      }
      std::string::_M_construct<char const*>(
        &para_str,
        (const char *)(v29 + *(_QWORD *)(v4 + 32)),
        (const char *)(*(_QWORD *)(v4 + 32) + v31),
        v27);
      common::minet::http_client::HttpUtils::parseParamStr(&para_str, &req->param_map);
      M_p = para_str._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)para_str._M_dataplus._M_p == &para_str._anon_0 )
        goto LABEL_15;
    }
    operator delete(M_p);
    goto LABEL_15;
  }
  if ( v6 != post )
  {
LABEL_10:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&para_str,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/http_utils.cpp",
      "initHttpRequest",
      104);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&para_str._anon_0._M_allocated_capacity
      + 1),
      "Not support such method!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&para_str);
    goto LABEL_11;
  }
  v7 = boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::target(beast_req);
  v8 = (char *)(v4 + 96);
  *(_QWORD *)(v4 + 96) = v4 + 112;
  std::string::_M_construct<char const*>((std::string *const)(v4 + 96), v7.ptr_, &v7.ptr_[v7.len_], v9);
  if ( !*(_QWORD *)(v4 + 104) )
  {
    __asan_handle_no_return(v8);
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::substr",
      1uLL,
      0LL);
  }
  para_str._M_dataplus._M_p = para_str._anon_0._M_local_buf;
  v11 = *(_QWORD *)(v4 + 104);
  if ( !v11 )
  {
    __asan_handle_no_return(v8);
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::basic_string",
      1uLL,
      0LL);
  }
  std::string::_M_construct<char const*>(
    &para_str,
    (const char *)(*(_QWORD *)(v4 + 96) + 1LL),
    (const char *)(*(_QWORD *)(v4 + 96) + v11),
    v10);
  std::string::operator=(&req->uri, &para_str);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)para_str._M_dataplus._M_p != &para_str._anon_0 )
    operator delete(para_str._M_dataplus._M_p);
  std::string::_M_assign(&req->body, &beast_req->boost::empty_::empty_value<std::string,0,false>);
  common::minet::http_client::HttpUtils::parseParamStr(&req->body, &req->param_map);
  v18 = *(char **)(v4 + 96);
  if ( v18 != (char *)(v4 + 112) )
LABEL_16:
    operator delete(v18);
LABEL_11:
  if ( v41 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return 0;
};

// Line 119: range 0000000019D02A54-0000000019D0344D
int32_t __fastcall common::minet::http_client::HttpUtils::initBeastRequest(
        const common::minet::http_client::HttpRequest *req,
        common::minet::http_client::BeastHttpRequest *beast_req)
{
  common::minet::http_client::BeastHttpRequest *v2; // r14
  const common::minet::http_client::HttpRequest *v3; // rbx
  common::minet::http_client::BeastHttpRequest *v4; // r12
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r13
  char v7; // dl
  common::minet::http_client::HttpVersion version; // eax
  void *p_version; // rdi
  char v10; // dl
  int32_t result; // eax
  __int64 v12; // rax
  char v13; // al
  char v14; // al
  common::minet::http_client::HttpMethod method; // eax
  char v16; // dl
  char v17; // al
  char v18; // al
  const std::string *v19; // rdx
  const std::string *v20; // rdx
  char v21; // al
  common::minet::http_client::HttpMethod v22; // eax
  unsigned __int64 p_M_left; // rdi
  const std::string *M_left; // rax
  std::forward_iterator_tag v25; // cl
  void *p_uri; // rdi
  __int64 p_M_string_length; // rax
  std::string::size_type v28; // rax
  std::string::size_type M_allocated_capacity; // rsi
  unsigned __int64 v30; // rsi
  __int64 v31; // rsi
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdi
  __int64 v35; // rdx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v36; // rdi
  std::string::size_type *p_M_node_count; // rdi
  void *v38; // rdi
  unsigned __int64 v39; // r15
  std::true_type *v40; // [rsp+0h] [rbp-308h]
  std::string v41; // [rsp+10h] [rbp-2F8h] BYREF
  std::string s; // [rsp+30h] [rbp-2D8h] BYREF
  boost::beast::string_param v43; // [rsp+50h] [rbp-2B8h] BYREF
  std::true_type v44; // [rsp+270h] [rbp-98h] BYREF

  v3 = req;
  v4 = beast_req;
  v5 = (unsigned __int64)&v44;
  v40 = &v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_1(96LL);
    if ( v12 )
      v5 = v12;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 32 13 param_str:153";
  *(_QWORD *)(v5 + 16) = common::minet::http_client::HttpUtils::initBeastRequest;
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450888) = -202116109;
  v7 = *(_BYTE *)(((unsigned __int64)&req->version >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)req - 28) & 7) + 3) >= v7 && v7 )
  {
    __asan_report_load4(&req->version);
LABEL_13:
    v13 = *(_BYTE *)(((unsigned __int64)&beast_req->version_ >> 3) + 0x7FFF8000);
    if ( !v13 || v13 > 3 )
    {
      beast_req->version_ = 10;
      goto LABEL_16;
    }
    __asan_report_store4(&beast_req->version_, beast_req);
    goto LABEL_24;
  }
  version = req->version;
  if ( version == HTTP_VER_1_1 )
  {
LABEL_24:
    v17 = *(_BYTE *)(((unsigned __int64)&beast_req->version_ >> 3) + 0x7FFF8000);
    if ( !v17 || v17 > 3 )
    {
      beast_req->version_ = 11;
      goto LABEL_16;
    }
    __asan_report_store4(&beast_req->version_, beast_req);
    goto LABEL_28;
  }
  if ( version != HTTP_VER_2_0 )
  {
    if ( version )
    {
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&s,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/http_utils.cpp",
        "initBeastRequest",
        132);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
        *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&s._anon_0._M_allocated_capacity + 1),
        "unsupported version:");
      p_version = &req->version;
      v10 = *(_BYTE *)(((unsigned __int64)&v3->version >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v3 - 28) & 7) + 3) < v10 || !v10 )
      {
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
          *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&s._anon_0._M_allocated_capacity
          + 1),
          v3->version);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&s);
        result = -1;
        goto LABEL_121;
      }
      goto LABEL_32;
    }
    goto LABEL_13;
  }
LABEL_28:
  p_version = &beast_req->version_;
  v18 = *(_BYTE *)(((unsigned __int64)&beast_req->version_ >> 3) + 0x7FFF8000);
  if ( v18 && v18 <= 3 )
  {
    __asan_report_store4(p_version, beast_req);
LABEL_32:
    __asan_report_load4(p_version);
LABEL_33:
    __asan_report_load4(p_version);
    goto LABEL_34;
  }
  beast_req->version_ = 20;
LABEL_16:
  p_version = &v3->method;
  v14 = *(_BYTE *)(((unsigned __int64)&v3->method >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_33;
  method = v3->method;
  if ( method == HTTP_GET )
  {
LABEL_34:
    boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::method(beast_req, get);
LABEL_35:
    v2 = beast_req;
    boost::beast::string_param::string_param<std::string>(&v43, &v3->host, v19);
    boost::beast::http::basic_fields<std::allocator<char>>::set(beast_req, host, &v43);
    goto LABEL_38;
  }
  if ( method == HTTP_POST )
  {
    boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::method(beast_req, post);
    goto LABEL_35;
  }
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)&s,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/http_utils.cpp",
    "initBeastRequest",
    145);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
    *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&s._anon_0._M_allocated_capacity + 1),
    "unsupported method:");
  v16 = *(_BYTE *)(((unsigned __int64)&v3->method >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v3 - 32) & 7) + 3) < v16 || !v16 )
  {
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&s._anon_0._M_allocated_capacity + 1),
      v3->method);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&s);
    result = -1;
    goto LABEL_121;
  }
  __asan_report_load4(&v3->method);
LABEL_38:
  if ( v43.os_.m_initialized )
    boost::optional_detail::optional_base<boost::beast::detail::static_ostream>::destroy_impl(&v43.os_);
  v21 = *(_BYTE *)(((unsigned __int64)&v3->method >> 3) + 0x7FFF8000);
  if ( v21 && v21 <= 3 )
  {
    __asan_report_load4(&v3->method);
LABEL_47:
    common::minet::http_client::HttpUtils::parseParamToStr[abi:cxx11]((std::string *)(v5 + 32), v3);
    if ( !*(_QWORD *)(v5 + 40) )
    {
      p_uri = &v3->uri;
      if ( *(_BYTE *)(((unsigned __int64)&v3->uri >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_uri);
      }
      else
      {
        p_uri = &v3->uri._M_string_length;
        if ( !*(_BYTE *)(((unsigned __int64)&v3->uri._M_string_length >> 3) + 0x7FFF8000) )
        {
          boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::target(
            beast_req,
            *(boost::beast::string_view *)&v3->uri._M_dataplus._M_p);
LABEL_88:
          v36 = *(std::string::$CFBEC286C7F52157F7E59FC354047095 **)(v5 + 32);
          if ( v36 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)(v5 + 48) )
            operator delete(v36);
          goto LABEL_44;
        }
      }
      __asan_report_load8(p_uri);
    }
    v41._M_dataplus._M_p = v41._anon_0._M_local_buf;
    if ( *(_BYTE *)(((unsigned __int64)&v3->uri >> 3) + 0x7FFF8000) )
    {
      p_M_string_length = __asan_report_load8(&v3->uri);
    }
    else
    {
      p_M_string_length = (__int64)&v3->uri._M_string_length;
      if ( !*(_BYTE *)(((unsigned __int64)&v3->uri._M_string_length >> 3) + 0x7FFF8000) )
      {
        std::string::_M_construct<char *>(
          &v41,
          v3->uri._M_dataplus._M_p,
          &v3->uri._M_dataplus._M_p[v3->uri._M_string_length],
          v25);
        goto LABEL_58;
      }
    }
    __asan_report_load8(p_M_string_length);
LABEL_58:
    std::string::append(&v41, "?");
    v28 = v41._M_string_length + *(_QWORD *)(v5 + 40);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v41._M_dataplus._M_p == &v41._anon_0 )
      M_allocated_capacity = 15LL;
    else
      M_allocated_capacity = v41._anon_0._M_allocated_capacity;
    if ( v28 > M_allocated_capacity
      && (*(_QWORD *)(v5 + 32) == v5 + 48 ? (v30 = 15LL) : (v30 = *(_QWORD *)(v5 + 48)), v28 <= v30) )
    {
      v31 = 0LL;
      v32 = std::string::replace(v5 + 32, 0LL, 0LL);
    }
    else
    {
      v31 = *(_QWORD *)(v5 + 32);
      v32 = std::string::_M_append(&v41, (const char *)v31);
    }
    s._M_dataplus._M_p = s._anon_0._M_local_buf;
    if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
    {
      v32 = __asan_report_load8(v32);
    }
    else
    {
      v33 = v32 + 16;
      if ( *(_QWORD *)v32 != v32 + 16 )
      {
        s._M_dataplus._M_p = *(std::string::pointer *)v32;
        v34 = v32 + 16;
        if ( !*(_BYTE *)(((v32 + 16) >> 3) + 0x7FFF8000) )
        {
          s._anon_0._M_allocated_capacity = *(_QWORD *)(v32 + 16);
          goto LABEL_72;
        }
        goto LABEL_81;
      }
    }
    v34 = v33;
    v31 = *(unsigned __int8 *)(((v32 + 31) >> 3) + 0x7FFF8000);
    if ( (*(_BYTE *)((v33 >> 3) + 0x7FFF8000) == 0 || *(_BYTE *)((v33 >> 3) + 0x7FFF8000) > (unsigned __int8)(v33 & 7))
      && ((_BYTE)v31 == 0 || (char)v31 > (char)((v32 + 31) & 7)) )
    {
      s._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(v32 + 16));
LABEL_72:
      v34 = v32 + 8;
      if ( !*(_BYTE *)(((v32 + 8) >> 3) + 0x7FFF8000) )
      {
        s._M_string_length = *(_QWORD *)(v32 + 8);
        *(_QWORD *)v32 = v33;
        *(_QWORD *)(v32 + 8) = 0LL;
        v34 = v32 + 16;
        v35 = *(unsigned __int8 *)(((v32 + 16) >> 3) + 0x7FFF8000);
        if ( (char)v35 > (char)((v32 + 16) & 7) || !(_BYTE)v35 )
        {
          *(_BYTE *)(v32 + 16) = 0;
          boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::target(
            v4,
            *(boost::beast::string_view *)&s._M_dataplus._M_p);
LABEL_84:
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s._M_dataplus._M_p != &s._anon_0 )
            operator delete(s._M_dataplus._M_p);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v41._M_dataplus._M_p != &v41._anon_0 )
            operator delete(v41._M_dataplus._M_p);
          goto LABEL_88;
        }
LABEL_83:
        __asan_report_store1(v34, v31, v35);
        goto LABEL_84;
      }
LABEL_82:
      __asan_report_load8(v34);
      goto LABEL_83;
    }
    v31 = 16LL;
    __asan_report_load_n(v33, 16LL);
LABEL_81:
    __asan_report_load8(v34);
    goto LABEL_82;
  }
  v22 = v3->method;
  if ( v22 == HTTP_GET )
    goto LABEL_47;
  if ( v22 == HTTP_POST )
  {
    p_M_node_count = &v3->body._M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&v3->body._M_string_length >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_node_count);
    }
    else
    {
      if ( !v3->body._M_string_length )
        goto LABEL_94;
      p_M_node_count = &v3->param_map._M_t._M_impl._M_node_count;
      if ( !*(_BYTE *)(((unsigned __int64)&v3->param_map._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
      {
        if ( !v3->param_map._M_t._M_impl._M_node_count )
        {
LABEL_94:
          v38 = &v3->uri;
          if ( *(_BYTE *)(((unsigned __int64)&v3->uri >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v38);
          }
          else
          {
            v38 = &v3->uri._M_string_length;
            if ( !*(_BYTE *)(((unsigned __int64)&v3->uri._M_string_length >> 3) + 0x7FFF8000) )
            {
              boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::target(
                beast_req,
                *(boost::beast::string_view *)&v3->uri._M_dataplus._M_p);
              v38 = &v3->body._M_string_length;
              if ( !*(_BYTE *)(((unsigned __int64)&v3->body._M_string_length >> 3) + 0x7FFF8000) )
              {
                if ( v3->body._M_string_length )
                {
                  std::string::_M_assign(&beast_req->boost::empty_::empty_value<std::string,0,false>, &v3->body);
LABEL_99:
                  boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::prepare_payload(
                    beast_req,
                    (std::true_type)&v44);
                  goto LABEL_44;
                }
LABEL_106:
                common::minet::http_client::HttpUtils::parseParamToStr[abi:cxx11](&s, v3);
                std::string::operator=(&beast_req->boost::empty_::empty_value<std::string,0,false>, &s);
                if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s._M_dataplus._M_p != &s._anon_0 )
                  operator delete(s._M_dataplus._M_p);
                goto LABEL_99;
              }
LABEL_105:
              __asan_report_load8(v38);
              goto LABEL_106;
            }
          }
          __asan_report_load8(v38);
          goto LABEL_105;
        }
LABEL_102:
        common::milog::MiLogStream::MiLogStream(
          (common::milog::MiLogStream *const)&s,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/http_utils.cpp",
          "initBeastRequest",
          167);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
          *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&s._anon_0._M_allocated_capacity
          + 1),
          "Not Support json body and param_map");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&s);
        result = -1;
        goto LABEL_121;
      }
    }
    __asan_report_load8(p_M_node_count);
    goto LABEL_102;
  }
LABEL_44:
  p_M_left = (unsigned __int64)&v3->head_map._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&v3->head_map._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_left);
    goto LABEL_109;
  }
  M_left = (const std::string *)v3->head_map._M_t._M_impl._M_header._M_left;
  v3 = (const common::minet::http_client::HttpRequest *)((char *)v3 + 104);
  while ( 1 )
  {
    v4 = (common::minet::http_client::BeastHttpRequest *)M_left;
    if ( v3 == (const common::minet::http_client::HttpRequest *)M_left )
      break;
    v39 = (unsigned __int64)&M_left[1];
    boost::beast::string_param::string_param<std::string>(&v43, M_left + 2, v20);
    p_M_left = v39;
    if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
    {
LABEL_109:
      __asan_report_load8(p_M_left);
LABEL_110:
      __asan_report_load8(p_M_left);
      goto LABEL_111;
    }
    p_M_left = (unsigned __int64)&v4->list_;
    if ( *(_BYTE *)(((unsigned __int64)&v4->list_ >> 3) + 0x7FFF8000) )
      goto LABEL_110;
    boost::beast::http::basic_fields<std::allocator<char>>::set(
      v2,
      *(boost::beast::string_view *)&v4->set_.holder.root.color_,
      &v43);
LABEL_111:
    if ( v43.os_.m_initialized )
    {
      *(_QWORD *)v43.os_.m_storage.dummy_.data = (char *)&`vtable for'boost::beast::detail::static_ostream + 24;
      *((_QWORD *)&v43.os_.m_storage.dummy_.aligner_ + 16) = (char *)&`vtable for'boost::beast::detail::static_ostream
                                                           + 64;
      *((_QWORD *)&v43.os_.m_storage.dummy_.aligner_ + 1) = &`vtable for'boost::beast::detail::static_ostream_buffer + 2;
      if ( *((boost::beast::string_param **)&v43.os_.m_storage.dummy_.aligner_ + 12) != (boost::beast::string_param *)(&v43.os_.m_storage.dummy_.aligner_ + 14) )
        operator delete(*((void **)&v43.os_.m_storage.dummy_.aligner_ + 12));
      *((_QWORD *)&v43.os_.m_storage.dummy_.aligner_ + 1) = (char *)&`vtable for'std::streambuf + 16;
      std::locale::~locale((std::locale *)&v43.os_.m_storage.dummy_.aligner_ + 8);
      *(_QWORD *)v43.os_.m_storage.dummy_.data = &unk_1E968FD0;
      *((_QWORD *)&v43.os_.m_storage.dummy_.aligner_ + 16) = (char *)&`vtable for'std::ios + 16;
      std::ios_base::~ios_base((std::ios_base *)(&v43.os_.m_storage.dummy_.aligner_ + 16));
      v43.os_.m_initialized = 0;
    }
    M_left = (const std::string *)std::_Rb_tree_increment((const std::_Rb_tree_node_base *)v4);
  }
  result = 0;
LABEL_121:
  if ( v40 == (std::true_type *)v5 )
  {
    *(_DWORD *)((v5 >> 3) + 0x7FFF8000) = 0;
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

// Line 192: range 0000000019D01B6C-0000000019D01C92
int32_t __fastcall common::minet::http_client::HttpUtils::initHttpResponse(
        const common::minet::http_client::BeastHttpResponse *beast_res,
        common::minet::http_client::HttpResponse *res,
        bool init_head)
{
  uint32_t v5; // eax
  char v6; // dl
  void *p_list; // rdi
  boost::intrusive::detail::uncast_types<const boost::intrusive::list_node<void*>*>::non_const_pointer v8; // r13
  const boost::basic_string_view<char,std::char_traits<char> > *v9; // rcx
  const boost::basic_string_view<char,std::char_traits<char> > *v10; // r8
  boost::beast::http::basic_fields<std::allocator<char> >::const_iterator __for_begin; // [rsp+0h] [rbp-58h]
  boost::intrusive::list_node<void*> *ptr; // [rsp+8h] [rbp-50h] BYREF
  boost::basic_string_view<char,std::char_traits<char> > v14; // [rsp+10h] [rbp-48h] BYREF
  boost::basic_string_view<char,std::char_traits<char> > v15; // [rsp+20h] [rbp-38h] BYREF

  v5 = boost::beast::http::header<false,boost::beast::http::basic_fields<std::allocator<char>>>::result(beast_res);
  v6 = *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000);
  if ( v6 && v6 <= 3 )
  {
    p_list = res;
    __asan_report_store4(res, res);
    goto LABEL_7;
  }
  res->status = v5;
  std::string::_M_assign(&res->body, &beast_res->boost::empty_::empty_value<std::string,0,false>);
  if ( !init_head )
    return 0;
  p_list = &beast_res->list_;
  if ( *(_BYTE *)(((unsigned __int64)&beast_res->list_ >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_load8(p_list);
LABEL_8:
    __asan_handle_no_return(p_list);
    __assert_fail(
      off_1B6344E0,
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
      0x3Eu,
      "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, NodePtr,"
      " Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<char> >::elem"
      "ent; NodePtr = boost::intrusive::list_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned int Type = 1; boost:"
      ":intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fields<std::allocator<char> "
      ">::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intrusive::list_node<void*>*]");
  }
  __for_begin.members_.nodeptr_ = beast_res->list_.data_.root_plus_size_.m_header.next_;
  ptr = &beast_res->list_.data_.root_plus_size_.m_header;
  p_list = &ptr;
  v8 = boost::intrusive::detail::uncast<boost::intrusive::list_node<void *> const*>((const boost::intrusive::list_node<void*> *const *)&ptr);
  while ( __for_begin.members_.nodeptr_ != v8 )
  {
    if ( !__for_begin.members_.nodeptr_ )
      goto LABEL_8;
    v15 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::value((const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)&__for_begin.members_.nodeptr_[3]);
    v14 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string((const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)&__for_begin.members_.nodeptr_[3]);
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_emplace_unique<boost::basic_string_view<char,std::char_traits<char>> const,boost::basic_string_view<char,std::char_traits<char>> const>(
      &res->head_map._M_t,
      &v14,
      &v15,
      v9,
      v10);
    p_list = __for_begin.members_.nodeptr_;
    if ( *(_BYTE *)(((unsigned __int64)__for_begin.members_.nodeptr_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(__for_begin.members_.nodeptr_);
      return 0;
    }
    __for_begin.members_.nodeptr_ = __for_begin.members_.nodeptr_->next_;
  }
  return 0;
};

// Line 207: range 0000000019D03452-0000000019D0361B
int32_t __fastcall common::minet::http_client::HttpUtils::initBeastResponse(
        const common::minet::http_client::HttpResponse *res,
        common::minet::http_client::BeastHttpResponse *beast_res)
{
  const std::string *v2; // rbx
  std::_Rb_tree_header *v3; // r14
  const common::minet::http_client::HttpResponse *v4; // r13
  char v5; // al
  const std::string *v6; // rdx
  const std::string *M_left; // rax
  const common::minet::http_client::HttpResponse *v8; // rbp
  boost::beast::string_param v10; // [rsp+0h] [rbp-248h] BYREF

  v4 = res;
  v5 = *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000);
  if ( v5 && v5 <= 3 )
  {
    __asan_report_load4(res);
    goto LABEL_6;
  }
  boost::beast::http::header<false,boost::beast::http::basic_fields<std::allocator<char>>>::result(
    beast_res,
    res->status);
  res = (const common::minet::http_client::HttpResponse *)((char *)res + 32);
  if ( *(_BYTE *)(((unsigned __int64)&v4->head_map._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    __asan_report_load8(res);
    goto LABEL_7;
  }
  M_left = (const std::string *)v4->head_map._M_t._M_impl._M_header._M_left;
  v3 = &v4->head_map._M_t._M_impl.std::_Rb_tree_header;
  while ( 1 )
  {
    v2 = M_left;
    if ( v3 == (std::_Rb_tree_header *)M_left )
      break;
    v8 = (const common::minet::http_client::HttpResponse *)&M_left[1];
    boost::beast::string_param::string_param<std::string>(&v10, M_left + 2, v6);
    res = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
LABEL_7:
      __asan_report_load8(res);
LABEL_8:
      __asan_report_load8(res);
      goto LABEL_9;
    }
    res = (const common::minet::http_client::HttpResponse *)&v2[1]._M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&v2[1]._M_string_length >> 3) + 0x7FFF8000) )
      goto LABEL_8;
    boost::beast::http::basic_fields<std::allocator<char>>::set(
      beast_res,
      *(boost::beast::string_view *)&v2[1]._M_dataplus._M_p,
      &v10);
LABEL_9:
    if ( v10.os_.m_initialized )
    {
      *(_QWORD *)v10.os_.m_storage.dummy_.data = (char *)&`vtable for'boost::beast::detail::static_ostream + 24;
      *((_QWORD *)&v10.os_.m_storage.dummy_.aligner_ + 16) = (char *)&`vtable for'boost::beast::detail::static_ostream
                                                           + 64;
      *((_QWORD *)&v10.os_.m_storage.dummy_.aligner_ + 1) = &`vtable for'boost::beast::detail::static_ostream_buffer + 2;
      if ( *((boost::beast::string_param **)&v10.os_.m_storage.dummy_.aligner_ + 12) != (boost::beast::string_param *)(&v10.os_.m_storage.dummy_.aligner_ + 14) )
        operator delete(*((void **)&v10.os_.m_storage.dummy_.aligner_ + 12));
      *((_QWORD *)&v10.os_.m_storage.dummy_.aligner_ + 1) = (char *)&`vtable for'std::streambuf + 16;
      std::locale::~locale((std::locale *)&v10.os_.m_storage.dummy_.aligner_ + 8);
      *(_QWORD *)v10.os_.m_storage.dummy_.data = &unk_1E968FD0;
      *((_QWORD *)&v10.os_.m_storage.dummy_.aligner_ + 16) = (char *)&`vtable for'std::ios + 16;
      std::ios_base::~ios_base((std::ios_base *)(&v10.os_.m_storage.dummy_.aligner_ + 16));
      v10.os_.m_initialized = 0;
    }
    M_left = (const std::string *)std::_Rb_tree_increment((const std::_Rb_tree_node_base *)v2);
  }
  std::string::_M_assign(&beast_res->boost::empty_::empty_value<std::string,0,false>, &v4->body);
  boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::prepare_payload(
    beast_res,
    (std::false_type)v10.sv_.ptr_);
  return 0;
};

// Line 220: range 0000000019D0361C-0000000019D0384B
int32_t __fastcall common::minet::http_client::HttpUtils::serializeHttpRequest(
        const common::minet::http_client::HttpRequest *req,
        std::string *msg_str)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  int32_t v5; // r13d
  char *v6; // rdi
  common::milog::MiLogStream v8; // [rsp+0h] [rbp-118h] BYREF
  char v9[248]; // [rsp+20h] [rbp-F8h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v2 = v4;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 128 13 beast_req:221";
  *(_QWORD *)(v2 + 16) = common::minet::http_client::HttpUtils::serializeHttpRequest;
  v3 = v2 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450900) = -202116109;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_DWORD *)(v2 + 64) = 0;
  *(_QWORD *)(v2 + 48) = v2 + 40;
  *(_QWORD *)(v2 + 56) = v2 + 40;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(v2 + 72) = v2 + 72;
  *(_QWORD *)(v2 + 80) = v2 + 72;
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)(v2 + 112) = 0LL;
  *(_DWORD *)(v2 + 120) = 11;
  *(_DWORD *)(v2 + 124) = 0;
  *(_QWORD *)(v2 + 128) = v2 + 144;
  *(_QWORD *)(v2 + 136) = 0LL;
  *(_BYTE *)(v2 + 144) = 0;
  if ( common::minet::http_client::HttpUtils::initBeastRequest(
         req,
         (common::minet::http_client::BeastHttpRequest *)(v2 + 32)) )
  {
    common::milog::MiLogStream::MiLogStream(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/http_utils.cpp",
      "serializeHttpRequest",
      224);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v8.ostr_, "initBeastRequest fails");
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = -1;
  }
  else
  {
    v5 = common::minet::http_client::HttpUtils::serializeMessage<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>(
           (const boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *)(v2 + 32),
           msg_str);
  }
  v6 = *(char **)(v2 + 128);
  if ( v6 != (char *)(v2 + 144) )
    operator delete(v6);
  boost::beast::http::basic_fields<std::allocator<char>>::~basic_fields((boost::beast::http::basic_fields<std::allocator<char> > *const)(v2 + 32));
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v5;
};

// Line 231: range 0000000019D0384E-0000000019D03A7D
int32_t __fastcall common::minet::http_client::HttpUtils::serializeHttpResponse(
        const common::minet::http_client::HttpResponse *res,
        std::string *msg_str)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  int32_t v5; // r13d
  char *v6; // rdi
  common::milog::MiLogStream v8; // [rsp+0h] [rbp-118h] BYREF
  char v9[248]; // [rsp+20h] [rbp-F8h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v2 = v4;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 128 13 beast_res:232";
  *(_QWORD *)(v2 + 16) = common::minet::http_client::HttpUtils::serializeHttpResponse;
  v3 = v2 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450900) = -202116109;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_DWORD *)(v2 + 64) = 0;
  *(_QWORD *)(v2 + 48) = v2 + 40;
  *(_QWORD *)(v2 + 56) = v2 + 40;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(v2 + 72) = v2 + 72;
  *(_QWORD *)(v2 + 80) = v2 + 72;
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)(v2 + 112) = 0LL;
  *(_DWORD *)(v2 + 120) = 11;
  *(_DWORD *)(v2 + 124) = 200;
  *(_QWORD *)(v2 + 128) = v2 + 144;
  *(_QWORD *)(v2 + 136) = 0LL;
  *(_BYTE *)(v2 + 144) = 0;
  if ( common::minet::http_client::HttpUtils::initBeastResponse(
         res,
         (common::minet::http_client::BeastHttpResponse *)(v2 + 32)) )
  {
    common::milog::MiLogStream::MiLogStream(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/http_utils.cpp",
      "serializeHttpResponse",
      235);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v8.ostr_, "initBeastResponse fails");
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = -1;
  }
  else
  {
    v5 = common::minet::http_client::HttpUtils::serializeMessage<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>(
           (const boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *)(v2 + 32),
           msg_str);
  }
  v6 = *(char **)(v2 + 128);
  if ( v6 != (char *)(v2 + 144) )
    operator delete(v6);
  boost::beast::http::basic_fields<std::allocator<char>>::~basic_fields((boost::beast::http::basic_fields<std::allocator<char> > *const)(v2 + 32));
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v5;
};

// Line 240: range 0000000019D03A7F-0000000019D03A96
void __cdecl GLOBAL__sub_I_http_utils_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};
