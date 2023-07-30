// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/net_tools/src/http_request.cpp

// Line 65: range 000000000C7F89AA-000000000C7F8C3A
void __fastcall common::minet::HttpRequest::addHead(
        common::minet::HttpRequest *const this,
        const std::string *key,
        const std::string *value)
{
  unsigned __int64 v4; // rbx
  _DWORD *v5; // r12
  std::map<std::string,std::string> *p_head_map; // r15
  std::_Rb_tree_header *v7; // rdi
  std::string::size_type p_M_parent; // r14
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::iterator v9; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::iterator v10; // r9
  unsigned __int64 v11; // rcx
  std::string::size_type *p_M_string_length; // rdi
  size_t *v13; // rdi
  size_t v14; // rdx
  int v15; // eax
  __int64 v16; // r14
  __int64 v17; // rax
  std::tuple<const std::string&> *v18; // [rsp+0h] [rbp-D8h]
  std::tuple<> *__args_2; // [rsp+8h] [rbp-D0h]
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr __pos; // [rsp+20h] [rbp-B8h]
  std::_Rb_tree_node_base::_Base_ptr M_parent; // [rsp+28h] [rbp-B0h]
  std::tuple<> v23; // [rsp+3Fh] [rbp-99h] BYREF
  char v24[152]; // [rsp+40h] [rbp-98h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_1(96LL);
    if ( v17 )
      v4 = v17;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 8 6 __size 64 8 7 __osize";
  *(_QWORD *)(v4 + 16) = common::minet::HttpRequest::addHead;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  p_head_map = &this->head_map_;
  v7 = &this->head_map_._M_t._M_impl.std::_Rb_tree_header;
  p_M_parent = (std::string::size_type)&this->head_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)((p_M_parent >> 3) + 0x7FFF8000) )
  {
    p_M_string_length = (std::string::size_type *)p_M_parent;
    __asan_report_load8(p_M_parent);
    goto LABEL_23;
  }
  p_M_parent = (std::string::size_type)v7;
  v9._M_node = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_lower_bound(
                 &p_head_map->_M_t,
                 (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::_Link_type)p_head_map->_M_t._M_impl._M_header._M_parent,
                 &v7->_M_header,
                 key)._M_node;
  __args_2 = (std::tuple<> *)v9._M_node;
  __pos = v9._M_node;
  if ( v7 != (std::_Rb_tree_header *)v9._M_node )
  {
    v11 = (unsigned __int64)&v9._M_node[1];
    p_M_string_length = &key->_M_string_length;
    if ( !*(_BYTE *)(((unsigned __int64)&key->_M_string_length >> 3) + 0x7FFF8000) )
    {
      p_M_parent = key->_M_string_length;
      *(_QWORD *)(v4 + 32) = p_M_parent;
      p_M_string_length = (std::string::size_type *)&v9._M_node[1]._M_parent;
      if ( !*(_BYTE *)(((unsigned __int64)&v9._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
      {
        M_parent = v9._M_node[1]._M_parent;
        *(_QWORD *)(v4 + 64) = M_parent;
        if ( p_M_parent <= (unsigned __int64)M_parent )
        {
          v13 = (size_t *)(v4 + 32);
          goto LABEL_8;
        }
LABEL_25:
        v13 = (size_t *)(v4 + 64);
LABEL_8:
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v13);
        }
        else
        {
          v14 = *v13;
          if ( !*(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          {
            if ( !*(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
            {
              if ( v14 )
              {
                v15 = memcmp(key->_M_dataplus._M_p, *(const void **)&v9._M_node[1]._M_color, v14);
                if ( v15 )
                {
LABEL_16:
                  if ( v15 >= 0 )
                    goto LABEL_18;
                  goto LABEL_17;
                }
              }
              v16 = p_M_parent - (_QWORD)M_parent;
              if ( v16 <= 0x7FFFFFFF )
              {
                if ( v16 < (__int64)0xFFFFFFFF80000000LL )
                  v15 = 0x80000000;
                else
                  v15 = v16;
                goto LABEL_16;
              }
LABEL_29:
              v15 = 0x7FFFFFFF;
              goto LABEL_16;
            }
LABEL_28:
            __asan_report_load8(key);
            goto LABEL_29;
          }
        }
        __asan_report_load8(v11);
        goto LABEL_28;
      }
LABEL_24:
      v9._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr)__asan_report_load8(p_M_string_length);
      goto LABEL_25;
    }
LABEL_23:
    __asan_report_load8(p_M_string_length);
    goto LABEL_24;
  }
LABEL_17:
  *(_QWORD *)(v4 + 64) = key;
  __args_2 = (std::tuple<> *)std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string const&>,std::tuple<>>(
                               &p_head_map->_M_t,
                               (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::const_iterator)__pos,
                               &std::piecewise_construct,
                               (std::tuple<const std::string&> *)(v4 + 64),
                               &v23,
                               (const std::piecewise_construct_t *)v10._M_node,
                               v18,
                               __args_2)._M_node;
LABEL_18:
  std::string::_M_assign(&__args_2[64], value);
  if ( v24 == (char *)v4 )
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
};

// Line 82: range 000000000C7F8C40-000000000C7F8ED9
void __fastcall common::minet::HttpRequest::addPara(
        common::minet::HttpRequest *const this,
        const std::string *key,
        const std::string *value)
{
  unsigned __int64 v4; // rbx
  _DWORD *v5; // r12
  std::map<std::string,std::string> *p_para_map; // r15
  std::_Rb_tree_header *v7; // rdi
  std::string::size_type p_M_parent; // r14
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::iterator v9; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::iterator v10; // r9
  unsigned __int64 v11; // rcx
  std::string::size_type *p_M_string_length; // rdi
  size_t *v13; // rdi
  size_t v14; // rdx
  int v15; // eax
  __int64 v16; // r14
  __int64 v17; // rax
  std::tuple<const std::string&> *v18; // [rsp+0h] [rbp-D8h]
  std::tuple<> *__args_2; // [rsp+8h] [rbp-D0h]
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr __pos; // [rsp+20h] [rbp-B8h]
  std::_Rb_tree_node_base::_Base_ptr M_parent; // [rsp+28h] [rbp-B0h]
  std::tuple<> v23; // [rsp+3Fh] [rbp-99h] BYREF
  char v24[152]; // [rsp+40h] [rbp-98h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_1(96LL);
    if ( v17 )
      v4 = v17;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 8 6 __size 64 8 7 __osize";
  *(_QWORD *)(v4 + 16) = common::minet::HttpRequest::addPara;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  p_para_map = &this->para_map_;
  v7 = &this->para_map_._M_t._M_impl.std::_Rb_tree_header;
  p_M_parent = (std::string::size_type)&this->para_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)((p_M_parent >> 3) + 0x7FFF8000) )
  {
    p_M_string_length = (std::string::size_type *)p_M_parent;
    __asan_report_load8(p_M_parent);
    goto LABEL_23;
  }
  p_M_parent = (std::string::size_type)v7;
  v9._M_node = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_lower_bound(
                 &p_para_map->_M_t,
                 (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::_Link_type)p_para_map->_M_t._M_impl._M_header._M_parent,
                 &v7->_M_header,
                 key)._M_node;
  __args_2 = (std::tuple<> *)v9._M_node;
  __pos = v9._M_node;
  if ( v7 != (std::_Rb_tree_header *)v9._M_node )
  {
    v11 = (unsigned __int64)&v9._M_node[1];
    p_M_string_length = &key->_M_string_length;
    if ( !*(_BYTE *)(((unsigned __int64)&key->_M_string_length >> 3) + 0x7FFF8000) )
    {
      p_M_parent = key->_M_string_length;
      *(_QWORD *)(v4 + 32) = p_M_parent;
      p_M_string_length = (std::string::size_type *)&v9._M_node[1]._M_parent;
      if ( !*(_BYTE *)(((unsigned __int64)&v9._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
      {
        M_parent = v9._M_node[1]._M_parent;
        *(_QWORD *)(v4 + 64) = M_parent;
        if ( p_M_parent <= (unsigned __int64)M_parent )
        {
          v13 = (size_t *)(v4 + 32);
          goto LABEL_8;
        }
LABEL_25:
        v13 = (size_t *)(v4 + 64);
LABEL_8:
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v13);
        }
        else
        {
          v14 = *v13;
          if ( !*(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          {
            if ( !*(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
            {
              if ( v14 )
              {
                v15 = memcmp(key->_M_dataplus._M_p, *(const void **)&v9._M_node[1]._M_color, v14);
                if ( v15 )
                {
LABEL_16:
                  if ( v15 >= 0 )
                    goto LABEL_18;
                  goto LABEL_17;
                }
              }
              v16 = p_M_parent - (_QWORD)M_parent;
              if ( v16 <= 0x7FFFFFFF )
              {
                if ( v16 < (__int64)0xFFFFFFFF80000000LL )
                  v15 = 0x80000000;
                else
                  v15 = v16;
                goto LABEL_16;
              }
LABEL_29:
              v15 = 0x7FFFFFFF;
              goto LABEL_16;
            }
LABEL_28:
            __asan_report_load8(key);
            goto LABEL_29;
          }
        }
        __asan_report_load8(v11);
        goto LABEL_28;
      }
LABEL_24:
      v9._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr)__asan_report_load8(p_M_string_length);
      goto LABEL_25;
    }
LABEL_23:
    __asan_report_load8(p_M_string_length);
    goto LABEL_24;
  }
LABEL_17:
  *(_QWORD *)(v4 + 64) = key;
  __args_2 = (std::tuple<> *)std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string const&>,std::tuple<>>(
                               &p_para_map->_M_t,
                               (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::const_iterator)__pos,
                               &std::piecewise_construct,
                               (std::tuple<const std::string&> *)(v4 + 64),
                               &v23,
                               (const std::piecewise_construct_t *)v10._M_node,
                               v18,
                               __args_2)._M_node;
LABEL_18:
  std::string::_M_assign(&__args_2[64], value);
  if ( v24 == (char *)v4 )
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
};

// Line 100: range 000000000C7F4378-000000000C7F4673
void __fastcall common::minet::HttpRequest::print(common::minet::HttpRequest *const this)
{
  std::_Rb_tree_node_base::_Base_ptr *p_M_right; // rbx
  common::minet::HttpRequest *v2; // r12
  std::string *p_version; // rdi
  std::_Rb_tree_header *i; // rbx
  std::string *p_uri; // rdi
  common::minet::HttpRequest *M_left; // rbx
  std::_Rb_tree_header *v8; // rdi
  common::milog::MiLogStream v9; // [rsp+0h] [rbp-38h] BYREF

  common::milog::MiLogStream::MiLogStream(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/http_request.cpp",
    "print",
    101);
  p_version = &this->version_;
  if ( *(_BYTE *)(((unsigned __int64)p_version >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_version);
    goto LABEL_6;
  }
  p_version = &this->uri_;
  if ( *(_BYTE *)(((unsigned __int64)&this->uri_ >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    __asan_report_load8(p_version);
    goto LABEL_7;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_load8(this);
    goto LABEL_8;
  }
  common::milog::MiLogStream::operator()(
    &v9,
    "method = [%s], uri = [%s], version=[%s]",
    this->method_._M_dataplus._M_p,
    this->uri_._M_dataplus._M_p,
    this->version_._M_dataplus._M_p);
LABEL_8:
  common::milog::MiLogStream::~MiLogStream(&v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->head_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->head_map_._M_t._M_impl._M_header._M_left);
    goto LABEL_11;
  }
  for ( i = (std::_Rb_tree_header *)this->head_map_._M_t._M_impl._M_header._M_left;
        ;
        i = (std::_Rb_tree_header *)std::_Rb_tree_increment((std::_Rb_tree_node_base *)v2) )
  {
    v2 = (common::minet::HttpRequest *)i;
    if ( i == &this->head_map_._M_t._M_impl.std::_Rb_tree_header )
      break;
    common::milog::MiLogStream::MiLogStream(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/http_request.cpp",
      "print",
      104);
    p_M_right = &i[1]._M_header._M_right;
    if ( *(_BYTE *)(((unsigned __int64)p_M_right >> 3) + 0x7FFF8000) )
    {
LABEL_11:
      p_uri = (std::string *)p_M_right;
      __asan_report_load8(p_M_right);
LABEL_12:
      __asan_report_load8(p_uri);
      goto LABEL_13;
    }
    p_uri = &v2->uri_;
    if ( *(_BYTE *)(((unsigned __int64)&v2->uri_ >> 3) + 0x7FFF8000) )
      goto LABEL_12;
    common::milog::MiLogStream::operator()(
      &v9,
      "header key = [%s], value = [%s]",
      v2->uri_._M_dataplus._M_p,
      v2->version_._M_dataplus._M_p);
LABEL_13:
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->para_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->para_map_._M_t._M_impl._M_header._M_left);
    goto LABEL_21;
  }
  M_left = (common::minet::HttpRequest *)this->para_map_._M_t._M_impl._M_header._M_left;
  while ( 2 )
  {
    v2 = M_left;
    if ( M_left != (common::minet::HttpRequest *)&this->para_map_._M_t._M_impl.std::_Rb_tree_header )
    {
      common::milog::MiLogStream::MiLogStream(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "src/http_request.cpp",
        "print",
        108);
      i = (std::_Rb_tree_header *)&M_left->version_;
      if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
      {
LABEL_21:
        v8 = i;
        __asan_report_load8(i);
      }
      else
      {
        v8 = (std::_Rb_tree_header *)&v2->uri_;
        if ( !*(_BYTE *)(((unsigned __int64)&v2->uri_ >> 3) + 0x7FFF8000) )
        {
          common::milog::MiLogStream::operator()(
            &v9,
            "para key = [%s], value = [%s]",
            v2->uri_._M_dataplus._M_p,
            v2->version_._M_dataplus._M_p);
          goto LABEL_23;
        }
      }
      __asan_report_load8(v8);
LABEL_23:
      common::milog::MiLogStream::~MiLogStream(&v9);
      M_left = (common::minet::HttpRequest *)std::_Rb_tree_increment((std::_Rb_tree_node_base *)v2);
      continue;
    }
    break;
  }
  common::milog::MiLogStream::MiLogStream(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/http_request.cpp",
    "print",
    110);
  if ( *(_BYTE *)(((unsigned __int64)&this->post_content_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->post_content_);
  else
    common::milog::MiLogStream::operator()(&v9, "post_content = [%s]", this->post_content_._M_dataplus._M_p);
  common::milog::MiLogStream::~MiLogStream(&v9);
};

// Line 115: range 000000000C7F729A-000000000C7F89A5
// local variable allocation has failed, the output may be wrong!
int __fastcall common::minet::HttpRequest::parseFromStr(
        common::minet::HttpRequest *const this,
        char *data,
        uint32_t len,
        const char *ip_0)
{
  std::map<std::string,std::string> *p_head_map; // r14
  std::string::size_type v8; // r12
  size_t M_node; // rsi
  char v10; // cl
  const char *p_ip; // r13
  size_t v12; // r8
  std::string::size_type *p_M_string_length; // rdi
  std::string::size_type v14; // rax
  char v15; // al
  __int64 v16; // rdx
  char v17; // al
  __int64 v18; // rdx
  const char *v19; // rdx
  std::forward_iterator_tag v20; // cl
  std::string::size_type v21; // rdx
  std::string::pointer v22; // rdi
  void *v23; // rdi
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // rdi
  __int64 v26; // rdx
  std::string::size_type v27; // rax
  __int64 v28; // rsi
  const char *v29; // rsi
  std::string::size_type v30; // rcx
  std::string::size_type v31; // r14
  size_t p_uri; // r14
  size_t v33; // rax
  std::string::size_type *v34; // rdi
  std::string *v35; // rdi
  std::string::pointer v36; // rsi
  std::forward_iterator_tag v37; // cl
  void *v38; // rdi
  std::string::size_type v39; // rax
  unsigned __int64 p_base_uri; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  void *v44; // rdi
  void *v45; // rdi
  std::string::size_type v46; // rax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v47; // rax
  __int64 v48; // rdx
  char v49; // al
  __int64 v50; // rdx
  char v51; // al
  std::string::size_type v52; // rbx
  void *v53; // rdi
  void *v54; // rdi
  int result; // eax
  std::string::size_type v56; // rdi
  std::forward_iterator_tag v57; // cl
  size_t v58; // r14
  size_t v59; // r13
  size_t v60; // r13
  size_t v61; // rax
  std::_Rb_tree_header *v62; // r13
  std::_Rb_tree_node_base::_Base_ptr *p_M_parent; // rdi
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::iterator v64; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::iterator v65; // r9
  unsigned __int64 v66; // rdx
  std::string::size_type v67; // rcx
  std::string::size_type v68; // rdi
  size_t v69; // rcx
  int v70; // eax
  __int64 v71; // r13
  size_t *v72; // r13
  size_t v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rdx
  void *v77; // rdi
  std::string::size_type v78; // rax
  size_t v79; // rax
  __int64 v80; // rdx
  char v81; // al
  __int64 v82; // rdx
  char v83; // al
  unsigned __int64 v84; // rcx
  signed __int64 v85; // rbx
  std::string *p_src; // rbp
  const char *v87; // rbx
  std::forward_iterator_tag v88; // cl
  unsigned __int64 v89; // rsi
  common::minet::HttpRequest *p_post_content; // rbx
  unsigned __int64 M_p; // rdi
  __int64 v92; // rax
  __int64 p_M_allocated_capacity; // rax
  char v94; // al
  __int64 v95; // rdx
  unsigned __int64 v96; // rdi
  __int64 v97; // rax
  __int64 v98; // rax
  void *p_version; // rdi
  char v100; // al
  __int64 v101; // rdx
  std::string::size_type v102; // rdi
  char *v103; // rax
  unsigned __int64 v104; // rdi
  char v105; // al
  unsigned __int64 v106; // rdx
  char v107; // al
  unsigned __int64 v108; // rdx
  __int64 v109; // rdx
  char v110; // al
  std::string::size_type M_string_length; // rdi
  __int64 v112; // rax
  unsigned __int64 v113; // rdi
  char v114; // al
  unsigned __int64 v115; // rdx
  char v116; // al
  unsigned __int64 v117; // rdx
  __int64 v118; // rdx
  char v119; // al
  std::string::size_type *v120; // rdi
  std::string v121; // [rsp+0h] [rbp-1F8h] OVERLAPPED
  _DWORD *v122; // [rsp+20h] [rbp-1D8h]
  char *v123; // [rsp+28h] [rbp-1D0h]
  std::string::size_type v124; // [rsp+30h] [rbp-1C8h]
  size_t pos; // [rsp+38h] [rbp-1C0h]
  std::string::size_type v126; // [rsp+40h] [rbp-1B8h]
  std::string::size_type M_allocated_capacity; // [rsp+48h] [rbp-1B0h]
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::const_iterator __pos; // [rsp+50h] [rbp-1A8h]
  std::_Rb_tree_node_base::_Base_ptr M_parent; // [rsp+58h] [rbp-1A0h]
  std::string::size_type v130; // [rsp+60h] [rbp-198h]
  std::string::size_type v131; // [rsp+68h] [rbp-190h]
  std::tuple<> v132; // [rsp+7Fh] [rbp-179h] BYREF
  std::string src; // [rsp+80h] [rbp-178h] BYREF
  char v134[344]; // [rsp+A0h] [rbp-158h] BYREF

  HIDWORD(v121._M_string_length) = len;
  *(&v121._anon_0._M_allocated_capacity + 1) = (std::string::size_type)v134;
  v123 = v134;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v14 = __asan_stack_malloc_3(288LL);
    if ( v14 )
      *(&v121._anon_0._M_allocated_capacity + 1) = v14;
  }
  v124 = *(&v121._anon_0._M_allocated_capacity + 1) + 288;
  v8 = *(&v121._anon_0._M_allocated_capacity + 1) + 288;
  **((_QWORD **)&v121._anon_0._M_allocated_capacity + 1) = 1102416563LL;
  *(_QWORD *)(*(&v121._anon_0._M_allocated_capacity + 1) + 8) = "5 32 8 6 __size 64 8 7 __osize 96 32 8 line:136 160 32 9"
                                                                " value:147 224 32 12 para_str:160";
  M_node = (size_t)common::minet::HttpRequest::parseFromStr;
  *(_QWORD *)(*(&v121._anon_0._M_allocated_capacity + 1) + 16) = common::minet::HttpRequest::parseFromStr;
  v122 = (_DWORD *)(*(&v121._anon_0._M_allocated_capacity + 1) >> 3);
  v122[536862720] = -235802127;
  v122[536862721] = -218959360;
  v122[536862722] = -218959360;
  v122[536862724] = -218959118;
  v122[536862726] = -218959118;
  v122[536862728] = -202116109;
  common::minet::HttpRequest::clear(this);
  if ( HIDWORD(v121._M_string_length) == 0 || data == 0LL )
  {
    result = -1;
    goto LABEL_290;
  }
  if ( ip_0 )
  {
    p_ip = (const char *)&this->ip_;
    v12 = strlen(ip_0);
    p_M_string_length = &this->ip_._M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&this->ip_._M_string_length >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_string_length);
      goto LABEL_10;
    }
    M_node = 0LL;
    std::string::_M_replace(&this->ip_, 0LL, this->ip_._M_string_length, ip_0, v12);
  }
  ip_0 = data;
  p_ip = data;
  *(_DWORD *)v121._anon_0._M_local_buf = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( &data[HIDWORD(v121._M_string_length)] <= ip_0 )
      {
        if ( (unsigned int)std::string::compare(this, "POST") )
          goto LABEL_215;
        v85 = HIDWORD(v121._M_string_length) - (p_ip - data);
        p_src = &src;
        src._M_dataplus._M_p = src._anon_0._M_local_buf;
        v87 = &p_ip[v85];
        std::string::_M_construct<char const*>(&src, p_ip, v87, (std::forward_iterator_tag)v84);
        common::minet::HttpRequest::parseParaFromStr(this, v121);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
          operator delete(src._M_dataplus._M_p);
        src._M_dataplus._M_p = src._anon_0._M_local_buf;
        v89 = (unsigned __int64)p_ip;
        std::string::_M_construct<char const*>(&src, p_ip, v87, v88);
        p_post_content = (common::minet::HttpRequest *)&this->post_content_;
        if ( *(_BYTE *)(((unsigned __int64)&this->post_content_ >> 3) + 0x7FFF8000) )
        {
          M_p = (unsigned __int64)&this->post_content_;
          __asan_report_load8(&this->post_content_);
        }
        else
        {
          M_p = (unsigned __int64)this->post_content_._M_dataplus._M_p;
          v89 = (unsigned __int64)src._M_dataplus._M_p;
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
          {
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_p == &this->post_content_._anon_0 )
            {
LABEL_252:
              M_p = 0LL;
LABEL_207:
              this->post_content_._M_dataplus._M_p = (std::string::pointer)v89;
              if ( *(_BYTE *)(((unsigned __int64)&this->post_content_._M_string_length >> 3) + 0x7FFF8000) )
              {
                p_M_allocated_capacity = __asan_report_store8(&this->post_content_._M_string_length, v89);
              }
              else
              {
                this->post_content_._M_string_length = src._M_string_length;
                p_M_allocated_capacity = (__int64)&this->post_content_._anon_0._M_allocated_capacity;
                v84 = (unsigned __int64)&this->post_content_._anon_0 >> 3;
                if ( !*(_BYTE *)(v84 + 0x7FFF8000) )
                {
                  this->post_content_._anon_0._M_allocated_capacity = src._anon_0._M_allocated_capacity;
                  if ( M_p )
                  {
                    src._M_dataplus._M_p = (std::string::pointer)M_p;
                    src._anon_0._M_allocated_capacity = v126;
                    goto LABEL_211;
                  }
                  goto LABEL_255;
                }
              }
              __asan_report_store8(p_M_allocated_capacity, v89);
LABEL_255:
              src._M_dataplus._M_p = src._anon_0._M_local_buf;
LABEL_211:
              src._M_string_length = 0LL;
              v94 = *(_BYTE *)(((unsigned __int64)src._M_dataplus._M_p >> 3) + 0x7FFF8000);
              v95 = (__int64)src._M_dataplus._M_p & 7;
              if ( v94 <= (char)v95 && v94 )
              {
                __asan_report_store1(src._M_dataplus._M_p, v89, v95);
                goto LABEL_257;
              }
              *src._M_dataplus._M_p = 0;
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
                operator delete(src._M_dataplus._M_p);
LABEL_215:
              src._M_dataplus._M_p = src._anon_0._M_local_buf;
              std::string::_M_construct<char const*>(
                &src,
                &byte_19E8B96F[-15],
                byte_19E8B96F,
                (std::forward_iterator_tag)v84);
              p_post_content = (common::minet::HttpRequest *)std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::find(
                                                               &this->head_map_._M_t,
                                                               &src)._M_node;
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
                operator delete(src._M_dataplus._M_p);
              if ( p_post_content == (common::minet::HttpRequest *)&this->head_map_._M_t._M_impl.std::_Rb_tree_header )
              {
LABEL_283:
                v120 = &this->method_._M_string_length;
                if ( *(_BYTE *)(((unsigned __int64)&this->method_._M_string_length >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load8(v120);
                }
                else
                {
                  if ( !this->method_._M_string_length )
                  {
                    result = -1;
                    goto LABEL_290;
                  }
                  v120 = &this->uri_._M_string_length;
                  if ( !*(_BYTE *)(((unsigned __int64)&this->uri_._M_string_length >> 3) + 0x7FFF8000) )
                  {
                    if ( !this->uri_._M_string_length )
                    {
                      result = -1;
                      goto LABEL_290;
                    }
                    v120 = &this->version_._M_string_length;
                    if ( !*(_BYTE *)(((unsigned __int64)&this->version_._M_string_length >> 3) + 0x7FFF8000) )
                    {
                      if ( this->version_._M_string_length )
                      {
                        result = 0;
                        goto LABEL_290;
                      }
                      goto LABEL_295;
                    }
LABEL_294:
                    __asan_report_load8(v120);
LABEL_295:
                    result = -1;
                    goto LABEL_290;
                  }
                }
                __asan_report_load8(v120);
                goto LABEL_294;
              }
              p_src = &this->ip_;
              v89 = (unsigned __int64)this;
              common::minet::HttpRequest::extractClientIp(&src, this, &p_post_content->version_);
              if ( !*(_BYTE *)(((unsigned __int64)&this->ip_ >> 3) + 0x7FFF8000) )
              {
                v96 = (unsigned __int64)this->ip_._M_dataplus._M_p;
                v89 = (unsigned __int64)src._M_dataplus._M_p;
                if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
                {
                  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v96 == &this->ip_._anon_0 )
                  {
LABEL_275:
                    v96 = 0LL;
LABEL_223:
                    this->ip_._M_dataplus._M_p = (std::string::pointer)v89;
                    if ( *(_BYTE *)(((unsigned __int64)&p_src->_M_string_length >> 3) + 0x7FFF8000) )
                    {
                      v98 = __asan_report_store8(&p_src->_M_string_length, v89);
                    }
                    else
                    {
                      p_src->_M_string_length = src._M_string_length;
                      v98 = (__int64)&p_src->_anon_0._M_allocated_capacity;
                      if ( !*(_BYTE *)(((unsigned __int64)&p_src->_anon_0 >> 3) + 0x7FFF8000) )
                      {
                        p_src->_anon_0._M_allocated_capacity = src._anon_0._M_allocated_capacity;
                        if ( v96 )
                        {
                          src._M_dataplus._M_p = (std::string::pointer)v96;
                          src._anon_0._M_allocated_capacity = M_allocated_capacity;
LABEL_227:
                          src._M_string_length = 0LL;
                          p_version = src._M_dataplus._M_p;
                          v100 = *(_BYTE *)(((unsigned __int64)src._M_dataplus._M_p >> 3) + 0x7FFF8000);
                          v101 = (__int64)src._M_dataplus._M_p & 7;
                          if ( v100 <= (char)v101 && v100 )
                          {
                            __asan_report_store1(src._M_dataplus._M_p, v89, v101);
                          }
                          else
                          {
                            *src._M_dataplus._M_p = 0;
                            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
                              operator delete(src._M_dataplus._M_p);
                            common::milog::MiLogStream::MiLogStream(
                              (common::milog::MiLogStream *const)&src,
                              &common::milog::MiLogDefault::default_log_obj_,
                              1u,
                              "src/http_request.cpp",
                              "parseFromStr",
                              237);
                            p_version = &p_post_content->version_;
                            if ( !*(_BYTE *)(((unsigned __int64)&p_post_content->version_ >> 3) + 0x7FFF8000) )
                            {
                              p_version = &this->ip_;
                              if ( !*(_BYTE *)(((unsigned __int64)&this->ip_ >> 3) + 0x7FFF8000) )
                              {
                                common::milog::MiLogStream::operator()(
                                  (common::milog::MiLogStream *const)&src,
                                  "extractClientIp %s from X-Forwarded-For %s",
                                  this->ip_._M_dataplus._M_p,
                                  p_post_content->version_._M_dataplus._M_p);
LABEL_282:
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&src);
                                goto LABEL_283;
                              }
LABEL_281:
                              __asan_report_load8(p_version);
                              goto LABEL_282;
                            }
                          }
                          __asan_report_load8(p_version);
                          goto LABEL_281;
                        }
LABEL_278:
                        src._M_dataplus._M_p = src._anon_0._M_local_buf;
                        goto LABEL_227;
                      }
                    }
                    __asan_report_store8(v98, v89);
                    goto LABEL_278;
                  }
                  v97 = (__int64)&this->ip_._anon_0._M_allocated_capacity;
                  if ( !*(_BYTE *)(((unsigned __int64)&this->ip_._anon_0 >> 3) + 0x7FFF8000) )
                  {
                    M_allocated_capacity = this->ip_._anon_0._M_allocated_capacity;
                    goto LABEL_223;
                  }
LABEL_274:
                  __asan_report_load8(v97);
                  goto LABEL_275;
                }
LABEL_258:
                if ( !src._M_string_length )
                  goto LABEL_261;
                if ( src._M_string_length != 1 )
                {
                  memcpy((void *)v96, (const void *)v89, src._M_string_length);
                  goto LABEL_261;
                }
                v116 = *(_BYTE *)((v89 >> 3) + 0x7FFF8000);
                v117 = v89 & 7;
                if ( v116 <= (char)v117 && v116 )
                {
                  v96 = v89;
                  __asan_report_load1(v89, v89, v117);
                }
                else
                {
                  v118 = *(unsigned __int8 *)v89;
                  v119 = *(_BYTE *)((v96 >> 3) + 0x7FFF8000);
                  v89 = v96 & 7;
                  if ( v119 > (char)v89 || !v119 )
                  {
                    *(_BYTE *)v96 = v118;
LABEL_261:
                    M_string_length = src._M_string_length;
                    v112 = (__int64)&p_src->_M_string_length;
                    if ( !*(_BYTE *)(((unsigned __int64)&p_src->_M_string_length >> 3) + 0x7FFF8000) )
                    {
                      p_src->_M_string_length = src._M_string_length;
                      v113 = (unsigned __int64)&this->ip_._M_dataplus._M_p[M_string_length];
                      v114 = *(_BYTE *)((v113 >> 3) + 0x7FFF8000);
                      v115 = v113 & 7;
                      if ( v114 > (char)v115 || !v114 )
                      {
                        *(_BYTE *)v113 = 0;
                        goto LABEL_227;
                      }
                      goto LABEL_273;
                    }
LABEL_272:
                    v113 = v112;
                    __asan_report_store8(v112, v89);
LABEL_273:
                    v97 = __asan_report_store1(v113, v89, v115);
                    goto LABEL_274;
                  }
                }
                v112 = __asan_report_store1(v96, v89, v118);
                goto LABEL_272;
              }
LABEL_257:
              v96 = (unsigned __int64)p_src;
              __asan_report_load8(p_src);
              goto LABEL_258;
            }
            v92 = (__int64)&this->post_content_._anon_0._M_allocated_capacity;
            if ( !*(_BYTE *)(((unsigned __int64)&this->post_content_._anon_0 >> 3) + 0x7FFF8000) )
            {
              v126 = this->post_content_._anon_0._M_allocated_capacity;
              goto LABEL_207;
            }
LABEL_251:
            __asan_report_load8(v92);
            goto LABEL_252;
          }
        }
        if ( src._M_string_length )
        {
          if ( src._M_string_length != 1 )
          {
            memcpy((void *)M_p, (const void *)v89, src._M_string_length);
            goto LABEL_238;
          }
          v107 = *(_BYTE *)((v89 >> 3) + 0x7FFF8000);
          v108 = v89 & 7;
          if ( v107 <= (char)v108 && v107 )
          {
            M_p = v89;
            __asan_report_load1(v89, v89, v108);
          }
          else
          {
            v109 = *(unsigned __int8 *)v89;
            v110 = *(_BYTE *)((M_p >> 3) + 0x7FFF8000);
            v89 = M_p & 7;
            if ( v110 > (char)v89 || !v110 )
            {
              *(_BYTE *)M_p = v109;
              goto LABEL_238;
            }
          }
          v103 = (char *)__asan_report_store1(M_p, v89, v109);
          goto LABEL_249;
        }
LABEL_238:
        v102 = src._M_string_length;
        v103 = (char *)&this->post_content_._M_string_length;
        if ( !*(_BYTE *)(((unsigned __int64)&this->post_content_._M_string_length >> 3) + 0x7FFF8000) )
        {
          this->post_content_._M_string_length = src._M_string_length;
          v104 = (unsigned __int64)&this->post_content_._M_dataplus._M_p[v102];
          v105 = *(_BYTE *)((v104 >> 3) + 0x7FFF8000);
          v106 = v104 & 7;
          if ( v105 > (char)v106 || !v105 )
          {
            *(_BYTE *)v104 = 0;
            goto LABEL_211;
          }
          goto LABEL_250;
        }
LABEL_249:
        v104 = (unsigned __int64)v103;
        __asan_report_store8(v103, v89);
LABEL_250:
        v92 = __asan_report_store1(v104, v89, v106);
        goto LABEL_251;
      }
      v15 = *(_BYTE *)(((unsigned __int64)ip_0 >> 3) + 0x7FFF8000);
      v16 = (unsigned __int8)ip_0 & 7;
      if ( v15 <= (char)v16 && v15 )
      {
        __asan_report_load1(ip_0, M_node, v16);
      }
      else
      {
LABEL_10:
        if ( *ip_0 != 13 )
          goto LABEL_11;
      }
      v17 = *(_BYTE *)(((unsigned __int64)(ip_0 + 1) >> 3) + 0x7FFF8000);
      v18 = ((_BYTE)ip_0 + 1) & 7;
      if ( v17 <= (char)v18 && v17 )
      {
        __asan_report_load1(ip_0 + 1, M_node, v18);
        goto LABEL_25;
      }
      if ( ip_0[1] == 10 )
        break;
LABEL_11:
      ++ip_0;
    }
    p_head_map = (std::map<std::string,std::string> *)(ip_0 - p_ip);
    src._M_dataplus._M_p = src._anon_0._M_local_buf;
    if ( p_ip )
    {
      v19 = &p_ip[strlen(p_ip)];
      goto LABEL_21;
    }
LABEL_25:
    v19 = p_ip - 1;
LABEL_21:
    std::string::_M_construct<char const*>(&src, p_ip, v19, (std::forward_iterator_tag)v10);
    *(_QWORD *)(v8 - 192) = v8 - 176;
    M_node = (size_t)src._M_dataplus._M_p;
    v21 = src._M_string_length;
    if ( (unsigned __int64)p_head_map < src._M_string_length )
      v21 = (std::string::size_type)p_head_map;
    std::string::_M_construct<char const*>(
      (std::string *const)(v8 - 192),
      src._M_dataplus._M_p,
      &src._M_dataplus._M_p[v21],
      v20);
    v22 = src._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
      operator delete(src._M_dataplus._M_p);
    if ( !*(_DWORD *)v121._anon_0._M_local_buf )
    {
      if ( *(_QWORD *)(v8 - 184) == 0x3FFFFFFFFFFFFFFFLL )
      {
        __asan_handle_no_return(v22);
        std::__throw_length_error("basic_string::append");
      }
      M_node = (size_t)" ";
      std::string::_M_append(v8 - 192, " ", 1LL);
      v24 = 0LL;
      p_head_map = 0LL;
      while ( 2 )
      {
        while ( 2 )
        {
          if ( v24 >= *(_QWORD *)(v8 - 184) )
            goto LABEL_198;
          v25 = *(_QWORD *)(v8 - 192) + v24;
          v26 = *(unsigned __int8 *)((v25 >> 3) + 0x7FFF8000);
          v10 = (*(_BYTE *)(v8 - 192) + v24) & 7;
          if ( (char)v26 <= v10 && (_BYTE)v26 )
          {
            __asan_report_load1(v25, M_node, v26);
          }
          else if ( *(_BYTE *)(*(_QWORD *)(v8 - 192) + v24) != 32 )
          {
            ++v24;
            continue;
          }
          break;
        }
        v27 = v24 - (_QWORD)p_head_map;
        v121._anon_0._M_allocated_capacity = *(_QWORD *)(v8 - 184);
        if ( (unsigned __int64)p_head_map > v121._anon_0._M_allocated_capacity )
        {
          __asan_handle_no_return(v25);
          std::__throw_out_of_range_fmt(
            "%s: __pos (which is %zu) > this->size() (which is %zu)",
            "basic_string::substr",
            (size_t)p_head_map,
            v121._anon_0._M_allocated_capacity);
        }
        *(_QWORD *)(v8 - 128) = v8 - 112;
        v28 = *(_QWORD *)(v8 - 192);
        v121._anon_0._M_allocated_capacity = *(_QWORD *)(v8 - 184);
        if ( (unsigned __int64)p_head_map > v121._anon_0._M_allocated_capacity )
        {
          __asan_handle_no_return(v25);
          std::__throw_out_of_range_fmt(
            "%s: __pos (which is %zu) > this->size() (which is %zu)",
            "basic_string::basic_string",
            (size_t)p_head_map,
            v121._anon_0._M_allocated_capacity);
        }
        v29 = &p_head_map->_M_t._M_impl.gap0[v28];
        v30 = v121._anon_0._M_allocated_capacity - (_QWORD)p_head_map;
        v31 = v30;
        if ( v27 < v30 )
          v31 = v27;
        std::string::_M_construct<char const*>(
          (std::string *const)(v8 - 128),
          v29,
          &v29[v31],
          (std::forward_iterator_tag)v30);
        if ( *(_BYTE *)(((unsigned __int64)&this->method_._M_string_length >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(&this->method_._M_string_length);
        }
        else if ( this->method_._M_string_length )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->uri_._M_string_length >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(&this->uri_._M_string_length);
          }
          else if ( this->uri_._M_string_length )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->version_._M_string_length >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(&this->version_._M_string_length);
LABEL_121:
              common::milog::MiLogStream::MiLogStream(
                (common::milog::MiLogStream *const)&src,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "src/http_request.cpp",
                "parseFromStr",
                177);
              v52 = v124;
              common::milog::MiLogStream::operator()(
                (common::milog::MiLogStream *const)&src,
                "read error uri line [%s]",
                *(const char **)(v124 - 192));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&src);
              v53 = *(void **)(v52 - 128);
              if ( v53 != (void *)(v52 - 112) )
                operator delete(v53);
              goto LABEL_123;
            }
            if ( this->version_._M_string_length )
              goto LABEL_121;
            M_node = v8 - 128;
            std::string::_M_assign(&this->version_, v8 - 128);
            goto LABEL_93;
          }
          p_uri = (size_t)&this->uri_;
          std::string::_M_assign(&this->uri_, v8 - 128);
          v33 = std::string::find(&this->uri_, "?", 0LL);
          pos = v33;
          if ( v33 == -1LL )
            goto LABEL_119;
          v121._anon_0._M_allocated_capacity = v33 + 1;
          v34 = &this->uri_._M_string_length;
          if ( *(_BYTE *)(((unsigned __int64)&this->uri_._M_string_length >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v34);
LABEL_66:
            __asan_handle_no_return(v34);
            std::__throw_out_of_range_fmt(
              "%s: __pos (which is %zu) > this->size() (which is %zu)",
              "basic_string::substr",
              v121._anon_0._M_allocated_capacity,
              (size_t)__pos._M_node);
          }
          __pos._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::_Base_ptr)this->uri_._M_string_length;
          if ( v121._anon_0._M_allocated_capacity > (unsigned __int64)__pos._M_node )
            goto LABEL_66;
          *(_QWORD *)(v8 - 64) = v8 - 48;
          v35 = &this->uri_;
          if ( *(_BYTE *)((p_uri >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v35);
LABEL_68:
            __asan_handle_no_return(v35);
            std::__throw_out_of_range_fmt(
              "%s: __pos (which is %zu) > this->size() (which is %zu)",
              "basic_string::basic_string",
              v121._anon_0._M_allocated_capacity,
              (size_t)__pos._M_node);
          }
          v36 = this->uri_._M_dataplus._M_p;
          __pos._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::_Base_ptr)this->uri_._M_string_length;
          if ( v121._anon_0._M_allocated_capacity > (unsigned __int64)__pos._M_node )
            goto LABEL_68;
          std::string::_M_construct<char const*>(
            (std::string *const)(v8 - 64),
            &v36[v121._anon_0._M_allocated_capacity],
            &v36[(unsigned __int64)__pos._M_node],
            (std::forward_iterator_tag)v121._anon_0._M_local_buf[0]);
          src._M_dataplus._M_p = src._anon_0._M_local_buf;
          std::string::_M_construct<char *>(
            &src,
            *(char **)(v8 - 64),
            (char *)(*(_QWORD *)(v8 - 56) + *(_QWORD *)(v8 - 64)),
            v37);
          M_node = (size_t)&src;
          common::minet::HttpRequest::parseParaFromStr(this, v121);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
            operator delete(src._M_dataplus._M_p);
          src._M_dataplus._M_p = src._anon_0._M_local_buf;
          v38 = &this->uri_;
          if ( *(_BYTE *)((p_uri >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v38);
          }
          else
          {
            M_node = (size_t)this->uri_._M_dataplus._M_p;
            v38 = &this->uri_._M_string_length;
            if ( !*(_BYTE *)(((unsigned __int64)&this->uri_._M_string_length >> 3) + 0x7FFF8000) )
            {
              v39 = this->uri_._M_string_length;
              if ( pos < v39 )
                v39 = pos;
              std::string::_M_construct<char const*>(
                &src,
                (const char *)M_node,
                (const char *)(M_node + v39),
                (std::forward_iterator_tag)pos);
LABEL_78:
              p_uri = (size_t)&this->base_uri_;
              p_base_uri = (unsigned __int64)&this->base_uri_;
              if ( *(_BYTE *)(((unsigned __int64)&this->base_uri_ >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(p_base_uri);
              }
              else
              {
                p_base_uri = (unsigned __int64)this->base_uri_._M_dataplus._M_p;
                M_node = (size_t)src._M_dataplus._M_p;
                if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
                {
                  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_base_uri != &this->base_uri_._anon_0 )
                  {
                    v41 = (__int64)&this->base_uri_._anon_0._M_allocated_capacity;
                    if ( !*(_BYTE *)(((unsigned __int64)&this->base_uri_._anon_0 >> 3) + 0x7FFF8000) )
                    {
                      v131 = this->base_uri_._anon_0._M_allocated_capacity;
                      goto LABEL_83;
                    }
LABEL_113:
                    __asan_report_load8(v41);
                  }
                  p_base_uri = 0LL;
LABEL_83:
                  this->base_uri_._M_dataplus._M_p = (std::string::pointer)M_node;
                  if ( *(_BYTE *)(((unsigned __int64)&this->base_uri_._M_string_length >> 3) + 0x7FFF8000) )
                  {
                    v42 = __asan_report_store8(&this->base_uri_._M_string_length, M_node);
                  }
                  else
                  {
                    this->base_uri_._M_string_length = src._M_string_length;
                    v42 = (__int64)&this->base_uri_._anon_0._M_allocated_capacity;
                    if ( !*(_BYTE *)(((unsigned __int64)&this->base_uri_._anon_0 >> 3) + 0x7FFF8000) )
                    {
                      this->base_uri_._anon_0._M_allocated_capacity = src._anon_0._M_allocated_capacity;
                      if ( p_base_uri )
                      {
                        src._M_dataplus._M_p = (std::string::pointer)p_base_uri;
                        src._anon_0._M_allocated_capacity = v131;
LABEL_87:
                        src._M_string_length = 0LL;
                        v43 = *(unsigned __int8 *)(((unsigned __int64)src._M_dataplus._M_p >> 3) + 0x7FFF8000);
                        v10 = (__int64)src._M_dataplus._M_p & 7;
                        if ( (char)v43 > ((__int64)src._M_dataplus._M_p & 7) || !(_BYTE)v43 )
                        {
                          *src._M_dataplus._M_p = 0;
                          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
                            operator delete(src._M_dataplus._M_p);
                          v44 = *(void **)(v8 - 64);
                          if ( v44 != (void *)(v8 - 48) )
                            operator delete(v44);
                          goto LABEL_93;
                        }
                        __asan_report_store1(src._M_dataplus._M_p, M_node, v43);
LABEL_119:
                        M_node = p_uri;
                        std::string::_M_assign(&this->base_uri_, p_uri);
LABEL_93:
                        p_head_map = (std::map<std::string,std::string> *)(v24 + 1);
                        v45 = *(void **)(v8 - 128);
                        if ( v45 != (void *)(v8 - 112) )
                          operator delete(v45);
                        ++v24;
                        continue;
                      }
LABEL_117:
                      src._M_dataplus._M_p = src._anon_0._M_local_buf;
                      goto LABEL_87;
                    }
                  }
                  __asan_report_store8(v42, M_node);
                  goto LABEL_117;
                }
              }
              if ( src._M_string_length )
              {
                if ( src._M_string_length != 1 )
                {
                  memcpy((void *)p_base_uri, (const void *)M_node, src._M_string_length);
                  goto LABEL_100;
                }
                v49 = *(_BYTE *)((M_node >> 3) + 0x7FFF8000);
                if ( v49 <= (char)(M_node & 7) && v49 )
                {
                  p_base_uri = M_node;
                  __asan_report_load1(M_node, M_node, 1LL);
                }
                else
                {
                  v50 = *(unsigned __int8 *)M_node;
                  v51 = *(_BYTE *)((p_base_uri >> 3) + 0x7FFF8000);
                  M_node = p_base_uri & 7;
                  if ( v51 > (char)M_node || !v51 )
                  {
                    *(_BYTE *)p_base_uri = v50;
                    goto LABEL_100;
                  }
                }
                __asan_report_store1(p_base_uri, M_node, v50);
LABEL_111:
                __asan_report_store8(p_base_uri, M_node);
              }
              else
              {
LABEL_100:
                v46 = src._M_string_length;
                p_base_uri = (unsigned __int64)&this->base_uri_._M_string_length;
                if ( *(_BYTE *)(((unsigned __int64)&this->base_uri_._M_string_length >> 3) + 0x7FFF8000) )
                  goto LABEL_111;
                this->base_uri_._M_string_length = src._M_string_length;
                v47 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)&this->base_uri_._M_dataplus._M_p[v46];
                p_base_uri = (unsigned __int64)v47;
                v48 = *(unsigned __int8 *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000);
                if ( (char)v48 > ((unsigned __int8)v47 & 7) || !(_BYTE)v48 )
                {
                  v47->_M_local_buf[0] = 0;
                  goto LABEL_87;
                }
              }
              v41 = __asan_report_store1(p_base_uri, M_node, v48);
              goto LABEL_113;
            }
          }
          __asan_report_load8(v38);
          goto LABEL_78;
        }
        break;
      }
      M_node = v8 - 128;
      std::string::_M_assign(this, v8 - 128);
      goto LABEL_93;
    }
    if ( *(_DWORD *)v121._anon_0._M_local_buf == 1 )
      break;
LABEL_30:
    p_ip = ip_0 + 2;
    v23 = *(void **)(v8 - 192);
    if ( v23 != (void *)(v8 - 176) )
      operator delete(v23);
    ip_0 += 2;
  }
  if ( *(_QWORD *)(v8 - 184) <= 2uLL )
  {
    *(_DWORD *)v121._anon_0._M_local_buf = 2;
    goto LABEL_30;
  }
  v56 = v8 - 192;
  pos = std::string::find(v8 - 192, &unk_19E8B740, 0LL);
  if ( pos == -1LL )
  {
    v56 = v8 - 192;
    pos = std::string::find(v8 - 192, ":", 0LL);
  }
  if ( pos != -1LL )
  {
    v58 = pos + 2;
    v59 = *(_QWORD *)(v8 - 184);
    if ( pos + 2 > v59 )
    {
      __asan_handle_no_return(v56);
      std::__throw_out_of_range_fmt(
        "%s: __pos (which is %zu) > this->size() (which is %zu)",
        "basic_string::substr",
        v58,
        v59);
    }
    src._M_dataplus._M_p = src._anon_0._M_local_buf;
    v60 = *(_QWORD *)(v8 - 184);
    if ( v58 > v60 )
    {
      __asan_handle_no_return(v56);
      std::__throw_out_of_range_fmt(
        "%s: __pos (which is %zu) > this->size() (which is %zu)",
        "basic_string::basic_string",
        v58,
        v60);
    }
    std::string::_M_construct<char const*>(
      &src,
      (const char *)(v58 + *(_QWORD *)(v8 - 192)),
      (const char *)(*(_QWORD *)(v8 - 192) + v60),
      v57);
    p_head_map = &this->head_map_;
    *(_QWORD *)(v8 - 64) = v8 - 48;
    v61 = *(_QWORD *)(v8 - 184);
    if ( pos < v61 )
      v61 = pos;
    std::string::_M_construct<char const*>(
      (std::string *const)(v8 - 64),
      *(const char **)(v8 - 192),
      (const char *)(*(_QWORD *)(v8 - 192) + v61),
      (std::forward_iterator_tag)pos);
    v62 = &this->head_map_._M_t._M_impl.std::_Rb_tree_header;
    p_M_parent = &this->head_map_._M_t._M_impl._M_header._M_parent;
    if ( *(_BYTE *)(((unsigned __int64)&this->head_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_parent);
    }
    else
    {
      v64._M_node = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_lower_bound(
                      &this->head_map_._M_t,
                      (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::_Link_type)this->head_map_._M_t._M_impl._M_header._M_parent,
                      &this->head_map_._M_t._M_impl._M_header,
                      (const std::string *)(v8 - 64))._M_node;
      pos = (size_t)v64._M_node;
      __pos._M_node = v64._M_node;
      if ( v62 == (std::_Rb_tree_header *)v64._M_node )
        goto LABEL_152;
      v66 = (unsigned __int64)&v64._M_node[1];
      v62 = *(std::_Rb_tree_header **)(v8 - 56);
      *(_QWORD *)(v8 - 256) = v62;
      p_M_parent = &v64._M_node[1]._M_parent;
      if ( !*(_BYTE *)(((unsigned __int64)&v64._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
      {
        M_parent = v64._M_node[1]._M_parent;
        *(_QWORD *)(v8 - 224) = M_parent;
        if ( v62 <= (std::_Rb_tree_header *)M_parent )
        {
          v67 = v8 - 256;
          goto LABEL_144;
        }
LABEL_155:
        v67 = v8 - 224;
LABEL_144:
        v68 = v67;
        M_node = v67 >> 3;
        if ( *(_BYTE *)((v67 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v67);
        }
        else
        {
          v69 = *(_QWORD *)v67;
          v68 = v66;
          if ( !*(_BYTE *)((v66 >> 3) + 0x7FFF8000) )
          {
            M_node = *(_QWORD *)&v64._M_node[1]._M_color;
            if ( !v69 || (v70 = memcmp(*(const void **)(v8 - 64), (const void *)M_node, v69)) == 0 )
            {
              v71 = (char *)v62 - (char *)M_parent;
              if ( v71 <= 0x7FFFFFFF )
              {
                if ( v71 < (__int64)0xFFFFFFFF80000000LL )
                  v70 = 0x80000000;
                else
                  v70 = v71;
                goto LABEL_151;
              }
LABEL_158:
              v70 = 0x7FFFFFFF;
            }
LABEL_151:
            if ( v70 < 0 )
            {
LABEL_152:
              *(_QWORD *)(v8 - 224) = v8 - 64;
              M_node = (size_t)__pos._M_node;
              pos = (size_t)std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string&&>,std::tuple<>>(
                              &this->head_map_._M_t,
                              __pos,
                              &std::piecewise_construct,
                              (std::tuple<std::string&&> *)(v8 - 224),
                              &v132,
                              (const std::piecewise_construct_t *)v65._M_node,
                              (std::tuple<std::string&&> *)v121._M_dataplus._M_p,
                              (std::tuple<> *)v121._M_string_length)._M_node;
            }
            v72 = (size_t *)(pos + 64);
            v73 = pos + 64;
            if ( *(_BYTE *)(((pos + 64) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v73);
            }
            else
            {
              v73 = *(_QWORD *)(pos + 64);
              M_node = (size_t)src._M_dataplus._M_p;
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
              {
                if ( v73 != pos + 80 )
                {
                  v74 = pos + 80;
                  if ( !*(_BYTE *)(((pos + 80) >> 3) + 0x7FFF8000) )
                  {
                    v130 = *(_QWORD *)(pos + 80);
                    goto LABEL_165;
                  }
LABEL_192:
                  __asan_report_load8(v74);
                }
                v73 = 0LL;
LABEL_165:
                *v72 = M_node;
                if ( *(_BYTE *)(((unsigned __int64)(v72 + 1) >> 3) + 0x7FFF8000) )
                {
                  v75 = __asan_report_store8(v72 + 1, M_node);
                }
                else
                {
                  v72[1] = src._M_string_length;
                  v75 = (__int64)(v72 + 2);
                  if ( !*(_BYTE *)(((unsigned __int64)(v72 + 2) >> 3) + 0x7FFF8000) )
                  {
                    v72[2] = src._anon_0._M_allocated_capacity;
                    if ( v73 )
                    {
                      src._M_dataplus._M_p = (std::string::pointer)v73;
                      src._anon_0._M_allocated_capacity = v130;
LABEL_169:
                      src._M_string_length = 0LL;
                      v76 = *(unsigned __int8 *)(((unsigned __int64)src._M_dataplus._M_p >> 3) + 0x7FFF8000);
                      v10 = (__int64)src._M_dataplus._M_p & 7;
                      if ( (char)v76 <= ((__int64)src._M_dataplus._M_p & 7) && (_BYTE)v76 )
                      {
                        __asan_report_store1(src._M_dataplus._M_p, M_node, v76);
LABEL_198:
                        *(_DWORD *)v121._anon_0._M_local_buf = 1;
                      }
                      else
                      {
                        *src._M_dataplus._M_p = 0;
                        v77 = *(void **)(v8 - 64);
                        if ( v77 != (void *)(v8 - 48) )
                          operator delete(v77);
                        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
                          operator delete(src._M_dataplus._M_p);
                      }
                      goto LABEL_30;
                    }
LABEL_196:
                    src._M_dataplus._M_p = src._anon_0._M_local_buf;
                    goto LABEL_169;
                  }
                }
                __asan_report_store8(v75, M_node);
                goto LABEL_196;
              }
            }
            if ( src._M_string_length )
            {
              if ( src._M_string_length != 1 )
              {
                memcpy((void *)v73, (const void *)M_node, src._M_string_length);
                goto LABEL_179;
              }
              v81 = *(_BYTE *)((M_node >> 3) + 0x7FFF8000);
              if ( v81 <= (char)(M_node & 7) && v81 )
              {
                v73 = M_node;
                __asan_report_load1(M_node, M_node, 1LL);
              }
              else
              {
                v82 = *(unsigned __int8 *)M_node;
                v83 = *(_BYTE *)((v73 >> 3) + 0x7FFF8000);
                M_node = v73 & 7;
                if ( v83 > (char)M_node || !v83 )
                {
                  *(_BYTE *)v73 = v82;
                  goto LABEL_179;
                }
              }
              __asan_report_store1(v73, M_node, v82);
LABEL_190:
              __asan_report_store8(v73, M_node);
            }
            else
            {
LABEL_179:
              v78 = src._M_string_length;
              v73 = (size_t)(v72 + 1);
              if ( *(_BYTE *)(((unsigned __int64)(v72 + 1) >> 3) + 0x7FFF8000) )
                goto LABEL_190;
              v72[1] = src._M_string_length;
              v79 = *v72 + v78;
              v73 = v79;
              v80 = *(unsigned __int8 *)((v79 >> 3) + 0x7FFF8000);
              if ( (char)v80 > (char)(v79 & 7) || !(_BYTE)v80 )
              {
                *(_BYTE *)v79 = 0;
                goto LABEL_169;
              }
            }
            v74 = __asan_report_store1(v73, M_node, v80);
            goto LABEL_192;
          }
        }
        __asan_report_load8(v68);
        goto LABEL_158;
      }
    }
    v64._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr)__asan_report_load8(p_M_parent);
    goto LABEL_155;
  }
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)&src,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/http_request.cpp",
    "parseFromStr",
    208);
  common::milog::MiLogStream::operator()(
    (common::milog::MiLogStream *const)&src,
    "read error head line [%s]",
    *(const char **)(v124 - 192));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&src);
LABEL_123:
  v54 = *(void **)(v124 - 192);
  if ( v54 != (void *)(v124 - 176) )
    operator delete(v54);
  result = -1;
LABEL_290:
  if ( v123 == *((char **)&v121._anon_0._M_allocated_capacity + 1) )
  {
    *((_QWORD *)v122 + 268431360) = 0LL;
    v122[536862722] = 0;
    v122[536862724] = 0;
    v122[536862726] = 0;
    v122[536862728] = 0;
  }
  else
  {
    **((_QWORD **)&v121._anon_0._M_allocated_capacity + 1) = 1172321806LL;
    *((_QWORD *)v122 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    *((_QWORD *)v122 + 268431361) = 0xF5F5F5F5F5F5F5F5LL;
    *((_QWORD *)v122 + 268431362) = 0xF5F5F5F5F5F5F5F5LL;
    *((_QWORD *)v122 + 268431363) = 0xF5F5F5F5F5F5F5F5LL;
    v122[536862728] = -168430091;
  }
  return result;
};

// Line 261: range 000000000C7F5F44-000000000C7F6A9A
std::string *__fastcall common::minet::HttpRequest::parseToStr[abi:cxx11](
        std::string *retstr,
        common::minet::HttpRequest *const this)
{
  common::minet::HttpRequest *v2; // r14
  std::string *v3; // rbx
  unsigned __int64 v5; // r15
  _DWORD *v6; // r13
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rax
  std::string::size_type *p_M_string_length; // rdi
  void *p_uri; // rdi
  std::string::size_type *v12; // rdi
  std::string::size_type *v13; // rdi
  void *p_version; // rdi
  std::string::size_type *v15; // rdi
  size_t v17; // rax
  std::forward_iterator_tag v18; // cl
  std::_Rb_tree_node<std::pair<const std::string,std::string > > *M_parent; // rsi
  std::forward_iterator_tag v20; // cl
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::iterator v21; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::iterator v22; // r9
  unsigned __int64 v23; // rdi
  std::_Rb_tree_node_base *v24; // rdx
  unsigned __int64 v25; // rdx
  size_t v26; // rdx
  signed __int64 v27; // rax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  __int64 p_M_allocated_capacity; // rax
  __int64 v30; // rax
  void *p_M_left; // rdi
  char v32; // al
  __int64 v33; // rdx
  common::minet::HttpRequest *i; // rax
  std::string::size_type M_string_length; // rdi
  __int64 v36; // rax
  unsigned __int64 v37; // rdi
  char v38; // al
  unsigned __int64 v39; // rdx
  char v40; // al
  __int64 v41; // rdx
  __int64 M_color_low; // rdx
  char v43; // al
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdi
  std::string::size_type *v46; // rdi
  void *v47; // rdi
  std::string::size_type *v48; // rdi
  std::string::size_type *v49; // rdi
  void *p_post_content; // rdi
  char *v52; // rdi
  std::tuple<std::string&&> *v54; // [rsp+0h] [rbp-1C8h]
  std::tuple<> *__args_2; // [rsp+8h] [rbp-1C0h]
  std::string *M_node; // [rsp+18h] [rbp-1B0h]
  std::_Rb_tree_node_base *__y; // [rsp+20h] [rbp-1A8h]
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr __pos; // [rsp+28h] [rbp-1A0h]
  std::_Rb_tree_node_base::_Base_ptr v59; // [rsp+30h] [rbp-198h]
  std::string::size_type M_allocated_capacity; // [rsp+38h] [rbp-190h]
  std::tuple<> v61; // [rsp+4Fh] [rbp-179h] BYREF
  std::string __k; // [rsp+50h] [rbp-178h] BYREF
  std::string v63; // [rsp+70h] [rbp-158h] BYREF
  char v64[312]; // [rsp+90h] [rbp-138h] BYREF

  v3 = retstr;
  v5 = (unsigned __int64)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_2(256LL);
    if ( v9 )
      v5 = v9;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 8 6 __size 64 8 7 __osize 96 32 12 para_str:266 160 64 12 line_buf:263";
  *(_QWORD *)(v5 + 16) = common::minet::HttpRequest::parseToStr[abi:cxx11];
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862724] = -218959118;
  v6[536862727] = -202116109;
  __args_2 = (std::tuple<> *)&retstr->_anon_0;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(retstr, this);
    goto LABEL_10;
  }
  retstr->_M_dataplus._M_p = (std::string::pointer)__args_2;
  retstr = (std::string *)((char *)retstr + 8);
  if ( *(_BYTE *)(((unsigned __int64)&v3->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8(retstr, this);
    goto LABEL_11;
  }
  v3->_M_string_length = 0LL;
  retstr = (std::string *)&v3->_anon_0;
  v7 = *(_BYTE *)(((unsigned __int64)&v3->_anon_0 >> 3) + 0x7FFF8000);
  v8 = ((_BYTE)v3 + 16) & 7;
  if ( v7 > (char)v8 || !v7 )
  {
    v3->_anon_0._M_local_buf[0] = 0;
    common::minet::HttpRequest::parseParaToStr[abi:cxx11]((std::string *)(v5 + 96), this);
    goto LABEL_12;
  }
LABEL_11:
  __asan_report_store1(retstr, this, v8);
LABEL_12:
  if ( *(_BYTE *)(((unsigned __int64)&this->method_._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->method_._M_string_length);
  }
  else if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    std::string::_M_append(v3, this->method_._M_dataplus._M_p, this->method_._M_string_length);
    goto LABEL_17;
  }
  __asan_report_load8(this);
LABEL_17:
  p_M_string_length = &v3->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v3->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_string_length);
LABEL_21:
    __asan_handle_no_return(p_M_string_length);
    std::__throw_length_error("basic_string::append");
  }
  if ( v3->_M_string_length == 0x3FFFFFFFFFFFFFFFLL )
    goto LABEL_21;
  std::string::_M_append(v3, " ", 1LL);
  p_uri = &this->uri_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->uri_._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_uri);
    goto LABEL_26;
  }
  p_uri = &this->uri_;
  if ( *(_BYTE *)(((unsigned __int64)&this->uri_ >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(p_uri);
    goto LABEL_27;
  }
  std::string::_M_append(v3, this->uri_._M_dataplus._M_p, this->uri_._M_string_length);
LABEL_27:
  if ( !(unsigned int)std::string::compare(this, &unk_19E8B3C0) && *(_QWORD *)(v5 + 104) )
  {
    v13 = &v3->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&v3->_M_string_length >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v13);
    }
    else if ( v3->_M_string_length != 0x3FFFFFFFFFFFFFFFLL )
    {
      std::string::_M_append(v3, "?", 1LL);
      std::string::_M_append(v3, *(const char **)(v5 + 96), *(_QWORD *)(v5 + 104));
      goto LABEL_29;
    }
    __asan_handle_no_return(v13);
    std::__throw_length_error("basic_string::append");
  }
LABEL_29:
  v12 = &v3->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v3->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v12);
LABEL_38:
    __asan_handle_no_return(v12);
    std::__throw_length_error("basic_string::append");
  }
  if ( v3->_M_string_length == 0x3FFFFFFFFFFFFFFFLL )
    goto LABEL_38;
  std::string::_M_append(v3, " ", 1LL);
  p_version = &this->version_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->version_._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_version);
  }
  else
  {
    p_version = &this->version_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->version_ >> 3) + 0x7FFF8000) )
    {
      std::string::_M_append(v3, this->version_._M_dataplus._M_p, this->version_._M_string_length);
      goto LABEL_44;
    }
  }
  __asan_report_load8(p_version);
LABEL_44:
  v15 = &v3->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v3->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v15);
LABEL_48:
    __asan_handle_no_return(v15);
    std::__throw_length_error("basic_string::append");
  }
  if ( v3->_M_string_length == 0x3FFFFFFFFFFFFFFFLL || v3->_M_string_length == 4611686018427387902LL )
    goto LABEL_48;
  std::string::_M_append(v3, "\r\n", 2LL);
  if ( (unsigned int)std::string::compare(this, "POST") )
    goto LABEL_91;
  if ( *(_BYTE *)(((unsigned __int64)&this->post_content_._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->post_content_._M_string_length);
    goto LABEL_55;
  }
  if ( !this->post_content_._M_string_length )
  {
LABEL_55:
    snprintf((char *)(v5 + 160), 0x40uLL, off_19E8B6C0, *(_QWORD *)(v5 + 104));
    goto LABEL_53;
  }
  snprintf((char *)(v5 + 160), 0x40uLL, off_19E8B6C0);
LABEL_53:
  M_node = &v63;
  v63._M_dataplus._M_p = v63._anon_0._M_local_buf;
  v17 = strlen((const char *)(v5 + 160));
  std::string::_M_construct<char const*>(&v63, (const char *)(v5 + 160), (const char *)(v5 + 160 + v17), v18);
  __k._M_dataplus._M_p = __k._anon_0._M_local_buf;
  M_parent = (std::_Rb_tree_node<std::pair<const std::string,std::string > > *)&byte_19E8B70E[-14];
  std::string::_M_construct<char const*>(&__k, &byte_19E8B70E[-14], byte_19E8B70E, v20);
  __y = &this->head_map_._M_t._M_impl._M_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->head_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->head_map_._M_t._M_impl._M_header._M_parent);
    goto LABEL_71;
  }
  M_parent = (std::_Rb_tree_node<std::pair<const std::string,std::string > > *)this->head_map_._M_t._M_impl._M_header._M_parent;
  v21._M_node = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_lower_bound(
                  &this->head_map_._M_t,
                  M_parent,
                  __y,
                  &__k)._M_node;
  M_node = (std::string *)v21._M_node;
  __pos = v21._M_node;
  if ( __y != v21._M_node )
  {
    v23 = (unsigned __int64)&v21._M_node[1];
    __y = (std::_Rb_tree_node_base *)__k._M_string_length;
    *(_QWORD *)(v5 + 32) = __k._M_string_length;
    v24 = (std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr)((char *)v21._M_node + 40);
    if ( !*(_BYTE *)(((unsigned __int64)&v21._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
    {
      v59 = v21._M_node[1]._M_parent;
      *(_QWORD *)(v5 + 64) = v59;
      if ( __y <= v59 )
      {
        v25 = v5 + 32;
        goto LABEL_61;
      }
LABEL_72:
      v25 = v5 + 64;
LABEL_61:
      if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
      {
        v23 = v25;
        __asan_report_load8(v25);
      }
      else
      {
        v26 = *(_QWORD *)v25;
        if ( !*(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
        {
          M_parent = *(std::_Rb_tree_node<std::pair<const std::string,std::string > > **)&v21._M_node[1]._M_color;
          if ( v26 )
          {
            LODWORD(v27) = memcmp(__k._M_dataplus._M_p, M_parent, v26);
            if ( (_DWORD)v27 )
              goto LABEL_68;
          }
          v27 = (char *)__y - (char *)v59;
          if ( (char *)__y - (char *)v59 <= 0x7FFFFFFF )
          {
            if ( v27 < (__int64)0xFFFFFFFF80000000LL )
              LODWORD(v27) = 0x80000000;
LABEL_68:
            if ( (int)v27 >= 0 )
              goto LABEL_76;
            goto LABEL_69;
          }
LABEL_75:
          LODWORD(v27) = 0x7FFFFFFF;
          goto LABEL_68;
        }
      }
      __asan_report_load8(v23);
      goto LABEL_75;
    }
LABEL_71:
    v23 = (unsigned __int64)v24;
    v21._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr)__asan_report_load8(v24);
    goto LABEL_72;
  }
LABEL_69:
  *(_QWORD *)(v5 + 64) = &__k;
  M_parent = (std::_Rb_tree_node<std::pair<const std::string,std::string > > *)__pos;
  M_node = (std::string *)std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string&&>,std::tuple<>>(
                            &this->head_map_._M_t,
                            (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::const_iterator)__pos,
                            &std::piecewise_construct,
                            (std::tuple<std::string&&> *)(v5 + 64),
                            &v61,
                            (const std::piecewise_construct_t *)v22._M_node,
                            v54,
                            __args_2)._M_node;
LABEL_76:
  v2 = (common::minet::HttpRequest *)&M_node[2];
  if ( *(_BYTE *)(((unsigned __int64)&M_node[2] >> 3) + 0x7FFF8000) )
  {
    M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)&M_node[2];
    __asan_report_load8(&M_node[2]);
LABEL_94:
    if ( !v63._M_string_length )
      goto LABEL_97;
    if ( v63._M_string_length != 1 )
    {
      memcpy(M_p, M_parent, v63._M_string_length);
      goto LABEL_97;
    }
    v40 = *(_BYTE *)(((unsigned __int64)M_parent >> 3) + 0x7FFF8000);
    v41 = (unsigned __int8)M_parent & 7;
    if ( v40 <= (char)v41 && v40 )
    {
      M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_parent;
      __asan_report_load1(M_parent, M_parent, v41);
    }
    else
    {
      M_color_low = LOBYTE(M_parent->_M_color);
      v43 = *(_BYTE *)(((unsigned __int64)M_p >> 3) + 0x7FFF8000);
      if ( v43 > ((unsigned __int8)M_p & 7) || !v43 )
      {
        M_p->_M_local_buf[0] = M_color_low;
LABEL_97:
        M_string_length = v63._M_string_length;
        v36 = (__int64)&M_node[2]._M_string_length;
        if ( !*(_BYTE *)(((unsigned __int64)&M_node[2]._M_string_length >> 3) + 0x7FFF8000) )
        {
          M_node[2]._M_string_length = v63._M_string_length;
          v37 = (unsigned __int64)&v2->method_._M_dataplus._M_p[M_string_length];
          v38 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
          v39 = v37 & 7;
          if ( v38 > (char)v39 || !v38 )
          {
            *(_BYTE *)v37 = 0;
            goto LABEL_85;
          }
          goto LABEL_109;
        }
LABEL_108:
        v37 = v36;
        __asan_report_store8(v36, M_parent);
LABEL_109:
        p_M_allocated_capacity = __asan_report_store1(v37, M_parent, v39);
LABEL_110:
        __asan_report_load8(p_M_allocated_capacity);
        goto LABEL_111;
      }
    }
    v36 = __asan_report_store1(M_p, M_parent, M_color_low);
    goto LABEL_108;
  }
  M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_node[2]._M_dataplus._M_p;
  M_parent = (std::_Rb_tree_node<std::pair<const std::string,std::string > > *)v63._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v63._M_dataplus._M_p == &v63._anon_0 )
    goto LABEL_94;
  if ( M_p != &M_node[2]._anon_0 )
  {
    p_M_allocated_capacity = (__int64)&M_node[2]._anon_0._M_allocated_capacity;
    if ( !*(_BYTE *)(((unsigned __int64)&M_node[2]._anon_0 >> 3) + 0x7FFF8000) )
    {
      M_allocated_capacity = M_node[2]._anon_0._M_allocated_capacity;
      goto LABEL_81;
    }
    goto LABEL_110;
  }
LABEL_111:
  M_p = 0LL;
LABEL_81:
  v2->method_._M_dataplus._M_p = (std::string::pointer)M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&M_node[2]._M_string_length >> 3) + 0x7FFF8000) )
  {
    v30 = __asan_report_store8(&M_node[2]._M_string_length, M_parent);
  }
  else
  {
    M_node[2]._M_string_length = v63._M_string_length;
    v30 = (__int64)&M_node[2]._anon_0._M_allocated_capacity;
    if ( !*(_BYTE *)(((unsigned __int64)&M_node[2]._anon_0 >> 3) + 0x7FFF8000) )
    {
      M_node[2]._anon_0._M_allocated_capacity = v63._anon_0._M_allocated_capacity;
      if ( M_p )
      {
        v63._M_dataplus._M_p = (std::string::pointer)M_p;
        v63._anon_0._M_allocated_capacity = M_allocated_capacity;
        goto LABEL_85;
      }
      goto LABEL_114;
    }
  }
  __asan_report_store8(v30, M_parent);
LABEL_114:
  v63._M_dataplus._M_p = v63._anon_0._M_local_buf;
LABEL_85:
  v63._M_string_length = 0LL;
  p_M_left = v63._M_dataplus._M_p;
  v32 = *(_BYTE *)(((unsigned __int64)v63._M_dataplus._M_p >> 3) + 0x7FFF8000);
  v33 = (__int64)v63._M_dataplus._M_p & 7;
  if ( v32 <= (char)v33 && v32 )
  {
    __asan_report_store1(v63._M_dataplus._M_p, M_parent, v33);
    goto LABEL_116;
  }
  *v63._M_dataplus._M_p = 0;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__k._M_dataplus._M_p != &__k._anon_0 )
    operator delete(__k._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v63._M_dataplus._M_p != &v63._anon_0 )
    operator delete(v63._M_dataplus._M_p);
LABEL_91:
  p_M_left = &this->head_map_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&this->head_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_116:
    v44 = __asan_report_load8(p_M_left);
    goto LABEL_117;
  }
  for ( i = (common::minet::HttpRequest *)this->head_map_._M_t._M_impl._M_header._M_left;
        ;
        i = (common::minet::HttpRequest *)std::_Rb_tree_increment((std::_Rb_tree_node_base *)v2) )
  {
    v2 = i;
    if ( i == (common::minet::HttpRequest *)&this->head_map_._M_t._M_impl.std::_Rb_tree_header )
      break;
    v44 = (unsigned __int64)&i->uri_._M_string_length;
    if ( *(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
    {
LABEL_117:
      v45 = v44;
      __asan_report_load8(v44);
LABEL_118:
      __asan_report_load8(v45);
      goto LABEL_119;
    }
    v45 = (unsigned __int64)&v2->uri_;
    if ( *(_BYTE *)(((unsigned __int64)&v2->uri_ >> 3) + 0x7FFF8000) )
      goto LABEL_118;
    std::string::_M_append(v3, v2->uri_._M_dataplus._M_p, v2->uri_._M_string_length);
LABEL_119:
    v46 = &v3->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&v3->_M_string_length >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v46);
LABEL_123:
      __asan_handle_no_return(v46);
      std::__throw_length_error("basic_string::append");
    }
    if ( v3->_M_string_length == 0x3FFFFFFFFFFFFFFFLL || v3->_M_string_length == 4611686018427387902LL )
      goto LABEL_123;
    std::string::_M_append(v3, ": ", 2LL);
    v47 = &v2->version_._M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&v2->version_._M_string_length >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v47);
    }
    else
    {
      v47 = &v2->version_;
      if ( !*(_BYTE *)(((unsigned __int64)&v2->version_ >> 3) + 0x7FFF8000) )
      {
        std::string::_M_append(v3, v2->version_._M_dataplus._M_p, v2->version_._M_string_length);
        goto LABEL_129;
      }
    }
    __asan_report_load8(v47);
LABEL_129:
    v48 = &v3->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&v3->_M_string_length >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v48);
LABEL_133:
      __asan_handle_no_return(v48);
      std::__throw_length_error("basic_string::append");
    }
    if ( v3->_M_string_length == 0x3FFFFFFFFFFFFFFFLL || v3->_M_string_length == 4611686018427387902LL )
      goto LABEL_133;
    std::string::_M_append(v3, "\r\n", 2LL);
  }
  v49 = &v3->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v3->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v49);
LABEL_142:
    __asan_handle_no_return(v49);
    std::__throw_length_error("basic_string::append");
  }
  if ( v3->_M_string_length == 0x3FFFFFFFFFFFFFFFLL || v3->_M_string_length == 4611686018427387902LL )
    goto LABEL_142;
  std::string::_M_append(v3, "\r\n", 2LL);
  if ( !(unsigned int)std::string::compare(this, "POST") )
  {
    p_post_content = &this->post_content_._M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&this->post_content_._M_string_length >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_post_content);
      goto LABEL_149;
    }
    if ( this->post_content_._M_string_length )
    {
      p_post_content = &this->post_content_;
      if ( !*(_BYTE *)(((unsigned __int64)&this->post_content_ >> 3) + 0x7FFF8000) )
      {
        std::string::_M_append(v3, this->post_content_._M_dataplus._M_p);
        goto LABEL_151;
      }
LABEL_149:
      __asan_report_load8(p_post_content);
    }
    std::string::_M_append(v3, *(const char **)(v5 + 96), *(_QWORD *)(v5 + 104));
  }
LABEL_151:
  v52 = *(char **)(v5 + 96);
  if ( v52 != (char *)(v5 + 112) )
    operator delete(v52);
  if ( v64 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v3;
};

// Line 329: range 000000000C7F4678-000000000C7F467F
const std::string *__fastcall common::minet::HttpRequest::getBaseUri[abi:cxx11](common::minet::HttpRequest *const this)
{
  return &this->base_uri_;
};

// Line 334: range 000000000C7F4680-000000000C7F4687
const std::string *__fastcall common::minet::HttpRequest::getBaseUri[abi:cxx11](
        const common::minet::HttpRequest *const this)
{
  return &this->base_uri_;
};

// Line 340: range 000000000C7F4688-000000000C7F468F
const std::map<std::string,std::string> *__fastcall common::minet::HttpRequest::getParaMap[abi:cxx11](
        common::minet::HttpRequest *const this)
{
  return &this->para_map_;
};

// Line 344: range 000000000C7F4690-000000000C7F4697
const std::map<std::string,std::string> *__fastcall common::minet::HttpRequest::getParaMap[abi:cxx11](
        const common::minet::HttpRequest *const this)
{
  return &this->para_map_;
};

// Line 367: range 000000000C7F6AA0-000000000C7F7294
__int64 __fastcall common::minet::HttpRequest::parseParaFromStr(
        common::minet::HttpRequest *const this,
        unsigned __int64 a2)
{
  char *v3; // r12
  _DWORD *v4; // r14
  _QWORD *v5; // rdi
  const char *v6; // rsi
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  char v11; // cl
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rdi
  std::string::pointer M_p; // rsi
  __int64 v19; // rdx
  std::forward_iterator_tag v20; // cl
  std::string::size_type M_string_length; // rax
  std::string::size_type v22; // rax
  __int64 v23; // rdx
  char v24; // al
  __int64 v25; // rdx
  __int64 v26; // rdx
  char v27; // al
  unsigned __int64 v28; // rdx
  std::forward_iterator_tag v29; // cl
  std::string::pointer v30; // rdi
  unsigned __int64 v31; // r13
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // r15
  std::_Rb_tree_header *M_parent; // r13
  std::_Rb_tree_node_base::_Base_ptr *p_M_parent; // rdi
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::iterator v36; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::iterator v37; // r9
  unsigned __int64 v38; // rdx
  size_t *v39; // rcx
  size_t *v40; // rdi
  size_t v41; // rcx
  signed __int64 v42; // rax
  char *v43; // rdi
  char *v44; // rdi
  std::string *M_head_impl; // rdi
  std::tuple<const std::string&> *v47; // [rsp+0h] [rbp-1C8h]
  unsigned __int64 v48; // [rsp+8h] [rbp-1C0h]
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr M_node; // [rsp+10h] [rbp-1B8h]
  unsigned __int64 v51; // [rsp+28h] [rbp-1A0h]
  std::string::size_type v52; // [rsp+30h] [rbp-198h]
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr __pos; // [rsp+38h] [rbp-190h]
  std::tuple<> v54; // [rsp+4Fh] [rbp-179h] BYREF
  std::string v55; // [rsp+50h] [rbp-178h] BYREF
  char v56[344]; // [rsp+70h] [rbp-158h] BYREF

  v48 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_3(288LL);
    if ( v9 )
      v48 = v9;
  }
  v47 = (std::tuple<const std::string&> *)(v48 + 288);
  v3 = (char *)(v48 + 288);
  *(_QWORD *)v48 = 1102416563LL;
  *(_QWORD *)(v48 + 8) = "5 32 8 6 __size 64 8 7 __osize 96 32 8 para:370 160 32 7 key:379 224 32 9 value:380";
  *(_QWORD *)(v48 + 16) = common::minet::HttpRequest::parseParaFromStr;
  v4 = (_DWORD *)(v48 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  v5 = (_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(((a2 + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v5);
LABEL_8:
    __asan_handle_no_return(v5);
    std::__throw_length_error("basic_string::append");
  }
  if ( *(_QWORD *)(a2 + 8) == 0x3FFFFFFFFFFFFFFFLL )
    goto LABEL_8;
  std::string::_M_append(a2, "&", 1LL);
  v6 = (const char *)(v48 + 288);
  *(_QWORD *)(v48 + 96) = v48 + 112;
  *(_QWORD *)(v48 + 104) = 0LL;
  *(_BYTE *)(v48 + 112) = 0;
  v7 = 0LL;
  v8 = 0LL;
  while ( 1 )
  {
    v12 = (_QWORD *)(a2 + 8);
    if ( *(_BYTE *)(((a2 + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v12);
LABEL_10:
      v10 = __asan_report_load8(v12);
      goto LABEL_11;
    }
    if ( v7 >= *(_QWORD *)(a2 + 8) )
      break;
    v12 = (_QWORD *)a2;
    if ( *(_BYTE *)((a2 >> 3) + 0x7FFF8000) )
      goto LABEL_10;
    v10 = *(_QWORD *)a2 + v7;
    v12 = (_QWORD *)v10;
    v13 = *(unsigned __int8 *)((v10 >> 3) + 0x7FFF8000);
    v11 = (*(_BYTE *)a2 + v7) & 7;
    if ( (char)v13 <= v11 && (_BYTE)v13 )
    {
      __asan_report_load1(v10, v6, v13);
LABEL_19:
      v14 = *(_QWORD *)(a2 + 8);
      if ( v8 > v14 )
      {
        __asan_handle_no_return(v12);
        std::__throw_out_of_range_fmt(
          "%s: __pos (which is %zu) > this->size() (which is %zu)",
          "basic_string::substr",
          v8,
          v14);
      }
      v55._M_dataplus._M_p = v55._anon_0._M_local_buf;
      v15 = *(_QWORD *)(a2 + 8);
      if ( v8 > v15 )
      {
        __asan_handle_no_return(v12);
        std::__throw_out_of_range_fmt(
          "%s: __pos (which is %zu) > this->size() (which is %zu)",
          "basic_string::basic_string",
          v8,
          v15);
      }
      v16 = v15 - v8;
      if ( v7 - v8 < v16 )
        v16 = v7 - v8;
      std::string::_M_construct<char const*>(
        &v55,
        (const char *)(v8 + *(_QWORD *)a2),
        (const char *)(v8 + *(_QWORD *)a2 + v16),
        (std::forward_iterator_tag)v11);
      v17 = *((_QWORD *)v3 - 24);
      M_p = v55._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v55._M_dataplus._M_p == &v55._anon_0 )
      {
        if ( !v55._M_string_length )
          goto LABEL_40;
        if ( v55._M_string_length != 1 )
        {
          memcpy((void *)v17, v55._M_dataplus._M_p, v55._M_string_length);
          goto LABEL_40;
        }
        v24 = *(_BYTE *)(((unsigned __int64)v55._M_dataplus._M_p >> 3) + 0x7FFF8000);
        v25 = (__int64)v55._M_dataplus._M_p & 7;
        if ( v24 <= (char)v25 && v24 )
        {
          v17 = (unsigned __int64)v55._M_dataplus._M_p;
          __asan_report_load1(v55._M_dataplus._M_p, v55._M_dataplus._M_p, v25);
        }
        else
        {
          v26 = (unsigned __int8)*v55._M_dataplus._M_p;
          v27 = *(_BYTE *)((v17 >> 3) + 0x7FFF8000);
          if ( v27 > (*(v3 - 192) & 7) || !v27 )
          {
            *(_BYTE *)v17 = v26;
LABEL_40:
            M_string_length = v55._M_string_length;
            *((_QWORD *)v3 - 23) = v55._M_string_length;
            v22 = *((_QWORD *)v3 - 24) + M_string_length;
            v17 = v22;
            v23 = *(unsigned __int8 *)((v22 >> 3) + 0x7FFF8000);
            if ( (char)v23 > (char)(v22 & 7) || !(_BYTE)v23 )
            {
              *(_BYTE *)v22 = 0;
              goto LABEL_31;
            }
LABEL_50:
            __asan_report_store1(v17, M_p, v23);
            goto LABEL_51;
          }
        }
        __asan_report_store1(v17, M_p, v26);
        goto LABEL_50;
      }
      if ( (char *)v17 != v3 - 176 )
      {
        v52 = *((_QWORD *)v3 - 22);
        goto LABEL_29;
      }
LABEL_51:
      v17 = 0LL;
LABEL_29:
      *((_QWORD *)v3 - 24) = M_p;
      *((_QWORD *)v3 - 23) = v55._M_string_length;
      *((_QWORD *)v3 - 22) = v55._anon_0._M_allocated_capacity;
      if ( v17 )
      {
        v55._M_dataplus._M_p = (std::string::pointer)v17;
        v55._anon_0._M_allocated_capacity = v52;
      }
      else
      {
        v55._M_dataplus._M_p = v55._anon_0._M_local_buf;
      }
LABEL_31:
      v55._M_string_length = 0LL;
      v19 = *(unsigned __int8 *)(((unsigned __int64)v55._M_dataplus._M_p >> 3) + 0x7FFF8000);
      if ( (char)v19 <= ((__int64)v55._M_dataplus._M_p & 7) && (_BYTE)v19 )
      {
        __asan_report_store1(v55._M_dataplus._M_p, M_p, v19);
LABEL_54:
        v55._M_dataplus._M_p = v55._anon_0._M_local_buf;
        v28 = *((_QWORD *)v3 - 23);
        if ( v16 < v28 )
          v28 = v16;
        std::string::_M_construct<char const*>(
          &v55,
          *((const char **)v3 - 24),
          (const char *)(*((_QWORD *)v3 - 24) + v28),
          v20);
        common::tools::StringUtils::urlDecode((std::string *)v3 - 4, &v55);
        v30 = v55._M_dataplus._M_p;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v55._M_dataplus._M_p != &v55._anon_0 )
          operator delete(v55._M_dataplus._M_p);
        v31 = v16 + 1;
        v32 = *((_QWORD *)v3 - 23);
        if ( v31 > v32 )
        {
          __asan_handle_no_return(v30);
          std::__throw_out_of_range_fmt(
            "%s: __pos (which is %zu) > this->size() (which is %zu)",
            "basic_string::substr",
            v31,
            v32);
        }
        v55._M_dataplus._M_p = v55._anon_0._M_local_buf;
        v33 = *((_QWORD *)v3 - 23);
        if ( v31 > v33 )
        {
          __asan_handle_no_return(v30);
          std::__throw_out_of_range_fmt(
            "%s: __pos (which is %zu) > this->size() (which is %zu)",
            "basic_string::basic_string",
            v31,
            v33);
        }
        std::string::_M_construct<char const*>(
          &v55,
          (const char *)(v31 + *((_QWORD *)v3 - 24)),
          (const char *)(*((_QWORD *)v3 - 24) + v33),
          v29);
        common::tools::StringUtils::urlDecode((std::string *)v3 - 2, &v55);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v55._M_dataplus._M_p != &v55._anon_0 )
          operator delete(v55._M_dataplus._M_p);
        M_parent = &this->para_map_._M_t._M_impl.std::_Rb_tree_header;
        p_M_parent = &this->para_map_._M_t._M_impl._M_header._M_parent;
        if ( *(_BYTE *)(((unsigned __int64)&this->para_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_M_parent);
        }
        else
        {
          v36._M_node = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_lower_bound(
                          &this->para_map_._M_t,
                          (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::_Link_type)this->para_map_._M_t._M_impl._M_header._M_parent,
                          &this->para_map_._M_t._M_impl._M_header,
                          (const std::string *)v3 - 4)._M_node;
          M_node = v36._M_node;
          __pos = v36._M_node;
          if ( M_parent == (std::_Rb_tree_header *)v36._M_node )
            goto LABEL_78;
          v38 = (unsigned __int64)&v36._M_node[1];
          v51 = *((_QWORD *)v3 - 15);
          *((_QWORD *)v3 - 32) = v51;
          p_M_parent = &v36._M_node[1]._M_parent;
          if ( !*(_BYTE *)(((unsigned __int64)&v36._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
          {
            M_parent = (std::_Rb_tree_header *)v36._M_node[1]._M_parent;
            *((_QWORD *)v3 - 28) = M_parent;
            if ( v51 <= (unsigned __int64)M_parent )
            {
              v39 = (size_t *)(v3 - 256);
              goto LABEL_70;
            }
LABEL_81:
            v39 = (size_t *)(v3 - 224);
LABEL_70:
            v40 = v39;
            if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v39);
            }
            else
            {
              v41 = *v39;
              v40 = (size_t *)v38;
              if ( !*(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
              {
                if ( v41 )
                {
                  LODWORD(v42) = memcmp(*((const void **)v3 - 16), *(const void **)&v36._M_node[1]._M_color, v41);
                  if ( (_DWORD)v42 )
                    goto LABEL_77;
                }
                v42 = v51 - (_QWORD)M_parent;
                if ( (__int64)(v51 - (_QWORD)M_parent) <= 0x7FFFFFFF )
                {
                  if ( v42 < (__int64)0xFFFFFFFF80000000LL )
                    LODWORD(v42) = 0x80000000;
LABEL_77:
                  if ( (int)v42 < 0 )
                  {
LABEL_78:
                    *((_QWORD *)v3 - 28) = v3 - 128;
                    M_node = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string const&>,std::tuple<>>(
                               &this->para_map_._M_t,
                               (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::const_iterator)__pos,
                               &std::piecewise_construct,
                               (std::tuple<const std::string&> *)v3 - 28,
                               &v54,
                               (const std::piecewise_construct_t *)v37._M_node,
                               v47,
                               (std::tuple<> *)v48)._M_node;
                  }
                  v6 = v3 - 64;
                  std::string::_M_assign(&M_node[2], v3 - 64);
                  v43 = (char *)*((_QWORD *)v3 - 8);
                  if ( v43 != v3 - 48 )
                    operator delete(v43);
                  v44 = (char *)*((_QWORD *)v3 - 16);
                  if ( v44 != v3 - 112 )
                    operator delete(v44);
                  goto LABEL_36;
                }
LABEL_84:
                LODWORD(v42) = 0x7FFFFFFF;
                goto LABEL_77;
              }
            }
            __asan_report_load8(v40);
            goto LABEL_84;
          }
        }
        v36._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr)__asan_report_load8(p_M_parent);
        goto LABEL_81;
      }
      *v55._M_dataplus._M_p = 0;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v55._M_dataplus._M_p != &v55._anon_0 )
        operator delete(v55._M_dataplus._M_p);
      v6 = "=";
      v16 = std::string::find(v3 - 192, "=", 0LL);
      if ( v16 != -1LL )
        goto LABEL_54;
LABEL_36:
      v8 = ++v7;
    }
    else
    {
LABEL_11:
      if ( *(_BYTE *)v10 == 38 )
        goto LABEL_19;
      ++v7;
    }
  }
  M_head_impl = (std::string *)v47[-24]._M_head_impl;
  if ( M_head_impl != (std::string *)&v47[-22] )
    operator delete(M_head_impl);
  if ( v56 == (char *)v48 )
  {
    *((_QWORD *)v4 + 268431360) = 0LL;
    v4[536862722] = 0;
    v4[536862724] = 0;
    v4[536862726] = 0;
    v4[536862728] = 0;
  }
  else
  {
    *(_QWORD *)v48 = 1172321806LL;
    *((_QWORD *)v4 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    *((_QWORD *)v4 + 268431361) = 0xF5F5F5F5F5F5F5F5LL;
    *((_QWORD *)v4 + 268431362) = 0xF5F5F5F5F5F5F5F5LL;
    *((_QWORD *)v4 + 268431363) = 0xF5F5F5F5F5F5F5F5LL;
    v4[536862728] = -168430091;
  }
  return 0LL;
};

// Line 397: range 000000000C7F4698-000000000C7F48DF
std::string *__fastcall common::minet::HttpRequest::parseParaToStr[abi:cxx11](
        std::string *retstr,
        common::minet::HttpRequest *const this)
{
  std::string *v2; // rbx
  char v3; // al
  __int64 v4; // rdx
  common::minet::HttpRequest *i; // rax
  std::string::size_type *p_M_string_length; // rdi
  common::minet::HttpRequest *v7; // rbp
  std::string v9[2]; // [rsp+0h] [rbp-48h] BYREF

  v2 = retstr;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(retstr, this);
    goto LABEL_8;
  }
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr = (std::string *)((char *)retstr + 8);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_store8(retstr, this);
LABEL_9:
    __asan_report_store1(retstr, this, v4);
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
  retstr = (std::string *)&this->para_map_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&this->para_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
    goto LABEL_10;
  for ( i = (common::minet::HttpRequest *)this->para_map_._M_t._M_impl._M_header._M_left;
        ;
        i = (common::minet::HttpRequest *)std::_Rb_tree_increment((std::_Rb_tree_node_base *)v7) )
  {
    v7 = i;
    if ( i == (common::minet::HttpRequest *)&this->para_map_._M_t._M_impl.std::_Rb_tree_header )
      break;
    retstr = (std::string *)&v2->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
      goto LABEL_11;
    if ( v2->_M_string_length )
    {
      if ( v2->_M_string_length == 0x3FFFFFFFFFFFFFFFLL )
        goto LABEL_12;
      std::string::_M_append(v2, "&", 1LL);
    }
    common::tools::StringUtils::urlEncode(v9, &v7->uri_);
    std::string::_M_append(v2, v9[0]._M_dataplus._M_p, v9[0]._M_string_length);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v9[0]._M_dataplus._M_p != &v9[0]._anon_0 )
      operator delete(v9[0]._M_dataplus._M_p);
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
    common::tools::StringUtils::urlEncode(v9, &v7->version_);
    std::string::_M_append(v2, v9[0]._M_dataplus._M_p, v9[0]._M_string_length);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v9[0]._M_dataplus._M_p != &v9[0]._anon_0 )
      operator delete(v9[0]._M_dataplus._M_p);
  }
  return v2;
};

// Line 413: range 000000000C7F48E0-000000000C7F5F3E
std::string *__fastcall common::minet::HttpRequest::parseParaToStr[abi:cxx11](
        std::string *retstr,
        const common::minet::HttpRequest *const this)
{
  if ( *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7)
    || *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store_n(retstr, 32LL);
    JUMPOUT(0xC7F493DLL);
  }
  common::minet::HttpRequest::parseParaToStr[abi:cxx11](retstr, this);
  return retstr;
};

// Line 416: range 000000000C7F8EDE-000000000C7F8EF5
void __cdecl GLOBAL__sub_I_http_request_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};
