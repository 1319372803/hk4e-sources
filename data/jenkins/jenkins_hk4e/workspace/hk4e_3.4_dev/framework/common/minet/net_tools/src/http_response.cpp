// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/net_tools/src/http_response.cpp

// Line 24: range 000000000C7F165E-000000000C7F18AC
void __fastcall common::minet::HttpResponse::HttpResponse(common::minet::HttpResponse *const this)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rbp
  __int64 v2; // rsi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v3; // r12
  common::minet::HttpResponse *v4; // rbx
  char v5; // al
  __int64 v6; // rdx
  char v7; // al
  std::_Rb_tree_header *v8; // rax
  char v9; // al
  __int64 v10; // rdx
  struct _Unwind_Exception *v11; // r13
  std::string::pointer M_p; // rdi
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *p_M_t; // rax
  std::string::pointer v14; // rdi

  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(this, v2);
    goto LABEL_17;
  }
  p_anon_0 = &this->version_._anon_0;
  this->version_._M_dataplus._M_p = this->version_._anon_0._M_local_buf;
  this = (common::minet::HttpResponse *const)((char *)this + 8);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_store8(this, v2);
LABEL_18:
    __asan_report_store1(this, v2, v6);
LABEL_19:
    __asan_report_store4(this, v2);
    goto LABEL_20;
  }
  v4->version_._M_string_length = 0LL;
  this = (common::minet::HttpResponse *const)&v4->version_._anon_0;
  v5 = *(_BYTE *)(((unsigned __int64)&v4->version_._anon_0 >> 3) + 0x7FFF8000);
  v6 = ((_BYTE)v4 + 16) & 7;
  if ( v5 <= (char)v6 && v5 )
    goto LABEL_18;
  v4->version_._anon_0._M_local_buf[0] = 0;
  this = (common::minet::HttpResponse *const)&v4->head_map_._M_t._M_impl.std::_Rb_tree_header;
  v7 = *(_BYTE *)(((unsigned __int64)&v4->head_map_._M_t._M_impl.std::_Rb_tree_header >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
    goto LABEL_19;
  v4->head_map_._M_t._M_impl._M_header._M_color = _S_red;
  this = (common::minet::HttpResponse *const)&v4->head_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&v4->head_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_store8(this, v2);
    goto LABEL_21;
  }
  v4->head_map_._M_t._M_impl._M_header._M_parent = 0LL;
  v8 = &v4->head_map_._M_t._M_impl.std::_Rb_tree_header;
  this = (common::minet::HttpResponse *const)&v4->head_map_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&v4->head_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8(this, v2);
    goto LABEL_22;
  }
  v4->head_map_._M_t._M_impl._M_header._M_left = &v8->_M_header;
  this = (common::minet::HttpResponse *const)&v4->head_map_._M_t._M_impl._M_header._M_right;
  if ( *(_BYTE *)(((unsigned __int64)&v4->head_map_._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8(this, v2);
    goto LABEL_23;
  }
  v4->head_map_._M_t._M_impl._M_header._M_right = &v8->_M_header;
  this = (common::minet::HttpResponse *const)&v4->head_map_._M_t._M_impl._M_node_count;
  if ( *(_BYTE *)(((unsigned __int64)&v4->head_map_._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_store8(this, v2);
    goto LABEL_24;
  }
  v4->head_map_._M_t._M_impl._M_node_count = 0LL;
  this = (common::minet::HttpResponse *const)&v4->body_;
  v3 = &v4->body_._anon_0;
  if ( *(_BYTE *)(((unsigned __int64)&v4->body_ >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8(this, v2);
    goto LABEL_25;
  }
  v4->body_._M_dataplus._M_p = (std::string::pointer)v3;
  this = (common::minet::HttpResponse *const)&v4->body_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v4->body_._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8(this, v2);
    goto LABEL_26;
  }
  v4->body_._M_string_length = 0LL;
  this = (common::minet::HttpResponse *const)&v4->body_._anon_0;
  v9 = *(_BYTE *)(((unsigned __int64)&v4->body_._anon_0 >> 3) + 0x7FFF8000);
  v10 = ((_BYTE)v4 + 112) & 7;
  if ( v9 <= (char)v10 && v9 )
  {
LABEL_26:
    v11 = (struct _Unwind_Exception *)__asan_report_store1(this, v2, v10);
    if ( *(_BYTE *)(((unsigned __int64)&v4->body_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v4->body_);
    M_p = v4->body_._M_dataplus._M_p;
    if ( v3 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_p )
      operator delete(M_p);
    p_M_t = &v4->head_map_._M_t;
    if ( *(_BYTE *)(((unsigned __int64)&v4->head_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
      p_M_t = (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *)__asan_report_load8(&v4->head_map_._M_t._M_impl._M_header._M_parent);
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
      p_M_t,
      (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::_Link_type)v4->head_map_._M_t._M_impl._M_header._M_parent);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v4);
    v14 = v4->version_._M_dataplus._M_p;
    if ( p_anon_0 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v4->version_._M_dataplus._M_p )
      operator delete(v14);
    __asan_handle_no_return(v14);
    _Unwind_Resume(v11);
  }
  v4->body_._anon_0._M_local_buf[0] = 0;
  common::minet::HttpResponse::init(v4, 0xC8u, 0LL);
};

// Line 28: range 000000000C7F18AE-000000000C7F1AF1
// local variable allocation has failed, the output may be wrong!
void __fastcall common::minet::HttpResponse::HttpResponse(
        common::minet::HttpResponse *const this,
        uint16_t status,
        const char *body)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rbp
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v4; // r12
  common::minet::HttpResponse *v5; // rbx
  char v6; // al
  char v7; // al
  std::_Rb_tree_header *v8; // rax
  char v9; // al
  struct _Unwind_Exception *v10; // r13
  std::string::pointer M_p; // rdi
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *p_M_t; // rax
  std::string::pointer v13; // rdi

  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(this, status);
    goto LABEL_17;
  }
  p_anon_0 = &this->version_._anon_0;
  this->version_._M_dataplus._M_p = this->version_._anon_0._M_local_buf;
  this = (common::minet::HttpResponse *const)((char *)this + 8);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_store8(this, status);
LABEL_18:
    __asan_report_store1(this, status, body);
LABEL_19:
    __asan_report_store4(this, status);
    goto LABEL_20;
  }
  v5->version_._M_string_length = 0LL;
  this = (common::minet::HttpResponse *const)&v5->version_._anon_0;
  v6 = *(_BYTE *)(((unsigned __int64)&v5->version_._anon_0 >> 3) + 0x7FFF8000);
  if ( v6 <= (((unsigned __int8)v5 + 16) & 7) && v6 )
    goto LABEL_18;
  v5->version_._anon_0._M_local_buf[0] = 0;
  this = (common::minet::HttpResponse *const)&v5->head_map_._M_t._M_impl.std::_Rb_tree_header;
  v7 = *(_BYTE *)(((unsigned __int64)&v5->head_map_._M_t._M_impl.std::_Rb_tree_header >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
    goto LABEL_19;
  v5->head_map_._M_t._M_impl._M_header._M_color = _S_red;
  this = (common::minet::HttpResponse *const)&v5->head_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&v5->head_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_store8(this, status);
    goto LABEL_21;
  }
  v5->head_map_._M_t._M_impl._M_header._M_parent = 0LL;
  v8 = &v5->head_map_._M_t._M_impl.std::_Rb_tree_header;
  this = (common::minet::HttpResponse *const)&v5->head_map_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&v5->head_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8(this, status);
    goto LABEL_22;
  }
  v5->head_map_._M_t._M_impl._M_header._M_left = &v8->_M_header;
  this = (common::minet::HttpResponse *const)&v5->head_map_._M_t._M_impl._M_header._M_right;
  if ( *(_BYTE *)(((unsigned __int64)&v5->head_map_._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8(this, status);
    goto LABEL_23;
  }
  v5->head_map_._M_t._M_impl._M_header._M_right = &v8->_M_header;
  this = (common::minet::HttpResponse *const)&v5->head_map_._M_t._M_impl._M_node_count;
  if ( *(_BYTE *)(((unsigned __int64)&v5->head_map_._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_store8(this, status);
    goto LABEL_24;
  }
  v5->head_map_._M_t._M_impl._M_node_count = 0LL;
  this = (common::minet::HttpResponse *const)&v5->body_;
  v4 = &v5->body_._anon_0;
  if ( *(_BYTE *)(((unsigned __int64)&v5->body_ >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8(this, status);
    goto LABEL_25;
  }
  v5->body_._M_dataplus._M_p = (std::string::pointer)v4;
  this = (common::minet::HttpResponse *const)&v5->body_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v5->body_._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8(this, status);
    goto LABEL_26;
  }
  v5->body_._M_string_length = 0LL;
  this = (common::minet::HttpResponse *const)&v5->body_._anon_0;
  v9 = *(_BYTE *)(((unsigned __int64)&v5->body_._anon_0 >> 3) + 0x7FFF8000);
  if ( v9 <= (((unsigned __int8)v5 + 112) & 7) && v9 )
  {
LABEL_26:
    v10 = (struct _Unwind_Exception *)__asan_report_store1(this, status, body);
    if ( *(_BYTE *)(((unsigned __int64)&v5->body_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v5->body_);
    M_p = v5->body_._M_dataplus._M_p;
    if ( v4 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_p )
      operator delete(M_p);
    p_M_t = &v5->head_map_._M_t;
    if ( *(_BYTE *)(((unsigned __int64)&v5->head_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
      p_M_t = (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *)__asan_report_load8(&v5->head_map_._M_t._M_impl._M_header._M_parent);
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
      p_M_t,
      (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::_Link_type)v5->head_map_._M_t._M_impl._M_header._M_parent);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5);
    v13 = v5->version_._M_dataplus._M_p;
    if ( p_anon_0 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v5->version_._M_dataplus._M_p )
      operator delete(v13);
    __asan_handle_no_return(v13);
    _Unwind_Resume(v10);
  }
  v5->body_._anon_0._M_local_buf[0] = 0;
  common::minet::HttpResponse::init(v5, status, body);
};

// Line 32: range 000000000C7F1AF2-000000000C7F1D54
// local variable allocation has failed, the output may be wrong!
void __fastcall common::minet::HttpResponse::HttpResponse(
        common::minet::HttpResponse *const this,
        uint16_t status,
        std::string *body)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rbp
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v4; // r12
  common::minet::HttpResponse *v5; // rbx
  char v6; // al
  char v7; // al
  std::_Rb_tree_header *v8; // rax
  char v9; // al
  struct _Unwind_Exception *v10; // r13
  std::string::pointer M_p; // rdi
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *p_M_t; // rax
  std::string::pointer v13; // rdi

  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(this, status);
    goto LABEL_18;
  }
  p_anon_0 = &this->version_._anon_0;
  this->version_._M_dataplus._M_p = this->version_._anon_0._M_local_buf;
  this = (common::minet::HttpResponse *const)((char *)this + 8);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8(this, status);
LABEL_19:
    __asan_report_store1(this, status, body);
LABEL_20:
    __asan_report_store4(this, status);
    goto LABEL_21;
  }
  v5->version_._M_string_length = 0LL;
  this = (common::minet::HttpResponse *const)&v5->version_._anon_0;
  v6 = *(_BYTE *)(((unsigned __int64)&v5->version_._anon_0 >> 3) + 0x7FFF8000);
  if ( v6 <= (((unsigned __int8)v5 + 16) & 7) && v6 )
    goto LABEL_19;
  v5->version_._anon_0._M_local_buf[0] = 0;
  this = (common::minet::HttpResponse *const)&v5->head_map_._M_t._M_impl.std::_Rb_tree_header;
  v7 = *(_BYTE *)(((unsigned __int64)&v5->head_map_._M_t._M_impl.std::_Rb_tree_header >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
    goto LABEL_20;
  v5->head_map_._M_t._M_impl._M_header._M_color = _S_red;
  this = (common::minet::HttpResponse *const)&v5->head_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&v5->head_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8(this, status);
    goto LABEL_22;
  }
  v5->head_map_._M_t._M_impl._M_header._M_parent = 0LL;
  v8 = &v5->head_map_._M_t._M_impl.std::_Rb_tree_header;
  this = (common::minet::HttpResponse *const)&v5->head_map_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&v5->head_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8(this, status);
    goto LABEL_23;
  }
  v5->head_map_._M_t._M_impl._M_header._M_left = &v8->_M_header;
  this = (common::minet::HttpResponse *const)&v5->head_map_._M_t._M_impl._M_header._M_right;
  if ( *(_BYTE *)(((unsigned __int64)&v5->head_map_._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_store8(this, status);
    goto LABEL_24;
  }
  v5->head_map_._M_t._M_impl._M_header._M_right = &v8->_M_header;
  this = (common::minet::HttpResponse *const)&v5->head_map_._M_t._M_impl._M_node_count;
  if ( *(_BYTE *)(((unsigned __int64)&v5->head_map_._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8(this, status);
    goto LABEL_25;
  }
  v5->head_map_._M_t._M_impl._M_node_count = 0LL;
  this = (common::minet::HttpResponse *const)&v5->body_;
  v4 = &v5->body_._anon_0;
  if ( *(_BYTE *)(((unsigned __int64)&v5->body_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8(this, status);
    goto LABEL_26;
  }
  v5->body_._M_dataplus._M_p = (std::string::pointer)v4;
  this = (common::minet::HttpResponse *const)&v5->body_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v5->body_._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_store8(this, status);
LABEL_27:
    __asan_report_store1(this, status, body);
LABEL_28:
    v10 = (struct _Unwind_Exception *)__asan_report_load8(body);
    if ( *(_BYTE *)(((unsigned __int64)&v5->body_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v5->body_);
    M_p = v5->body_._M_dataplus._M_p;
    if ( v4 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_p )
      operator delete(M_p);
    p_M_t = &v5->head_map_._M_t;
    if ( *(_BYTE *)(((unsigned __int64)&v5->head_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
      p_M_t = (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *)__asan_report_load8(&v5->head_map_._M_t._M_impl._M_header._M_parent);
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
      p_M_t,
      (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::_Link_type)v5->head_map_._M_t._M_impl._M_header._M_parent);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5);
    v13 = v5->version_._M_dataplus._M_p;
    if ( p_anon_0 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v5->version_._M_dataplus._M_p )
      operator delete(v13);
    __asan_handle_no_return(v13);
    _Unwind_Resume(v10);
  }
  v5->body_._M_string_length = 0LL;
  this = (common::minet::HttpResponse *const)&v5->body_._anon_0;
  v9 = *(_BYTE *)(((unsigned __int64)&v5->body_._anon_0 >> 3) + 0x7FFF8000);
  if ( v9 <= (((unsigned __int8)v5 + 112) & 7) && v9 )
    goto LABEL_27;
  v5->body_._anon_0._M_local_buf[0] = 0;
  if ( *(_BYTE *)(((unsigned __int64)body >> 3) + 0x7FFF8000) )
    goto LABEL_28;
  common::minet::HttpResponse::init(v5, status, body->_M_dataplus._M_p);
};

// Line 46: range 000000000C7F10C4-000000000C7F1659
int __fastcall common::minet::HttpResponse::init(
        common::minet::HttpResponse *const this,
        uint16_t status,
        const char *body)
{
  std::_Rb_tree_node_base *p_M_header; // r15
  common::minet::HttpResponse *v4; // rbx
  std::map<std::string,std::string> *p_head_map; // r12
  unsigned __int64 v6; // r13
  _DWORD *v7; // r14
  std::string::size_type *p_M_string_length; // rdi
  std::forward_iterator_tag v9; // cl
  char v10; // al
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::iterator v11; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::iterator v12; // r9
  unsigned __int64 v13; // rdi
  std::_Rb_tree_node_base *v14; // rdx
  unsigned __int64 v15; // rdx
  size_t v16; // rdx
  int v17; // eax
  __int64 v18; // r15
  __int64 v19; // rax
  std::forward_iterator_tag v20; // cl
  std::_Rb_tree_node<std::pair<const std::string,std::string > > *v21; // rsi
  std::_Rb_tree_node_base *M_string_length; // r15
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::iterator v23; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::iterator v24; // r9
  unsigned __int64 v25; // rdi
  std::_Rb_tree_node_base *v26; // rdx
  unsigned __int64 v27; // rdx
  size_t v28; // rdx
  int v29; // eax
  __int64 v30; // r15
  char v31; // al
  std::string *p_body; // rbp
  size_t v33; // r8
  struct _Unwind_Exception *v35; // rbx
  std::string::pointer M_p; // rdi
  std::tuple<std::string&&> *v37; // [rsp+0h] [rbp-F8h]
  std::tuple<> *bodya; // [rsp+8h] [rbp-F0h]
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr M_node; // [rsp+10h] [rbp-E8h]
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr __pos; // [rsp+20h] [rbp-D8h]
  std::_Rb_tree_node_base::_Base_ptr M_parent; // [rsp+28h] [rbp-D0h]
  std::tuple<> v42; // [rsp+3Fh] [rbp-B9h] BYREF
  std::string __k; // [rsp+40h] [rbp-B8h] BYREF
  char v44[152]; // [rsp+60h] [rbp-98h] BYREF

  v4 = this;
  p_head_map = (std::map<std::string,std::string> *)status;
  bodya = (std::tuple<> *)body;
  v6 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v19 = __asan_stack_malloc_1(96LL);
    if ( v19 )
      v6 = v19;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 6 __size 64 8 7 __osize";
  *(_QWORD *)(v6 + 16) = common::minet::HttpResponse::init;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -202116352;
  common::minet::HttpResponse::clear(this);
  p_M_string_length = &this->version_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v4->version_._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_string_length);
LABEL_22:
    __asan_report_store2(p_M_string_length);
    goto LABEL_23;
  }
  std::string::_M_replace(v4, 0LL, v4->version_._M_string_length, "HTTP/1.1", 8LL);
  p_M_string_length = (std::string::size_type *)&v4->status_;
  v10 = *(_BYTE *)(((unsigned __int64)&v4->status_ >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 1 )
    goto LABEL_22;
  v4->status_ = status;
  p_head_map = &v4->head_map_;
  __k._M_dataplus._M_p = __k._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&__k, &byte_19E8ACE6[-6], byte_19E8ACE6, v9);
  p_M_header = &v4->head_map_._M_t._M_impl._M_header;
  p_M_string_length = (std::string::size_type *)&v4->head_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&v4->head_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(p_M_string_length);
    goto LABEL_24;
  }
  v11._M_node = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_lower_bound(
                  &v4->head_map_._M_t,
                  (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::_Link_type)v4->head_map_._M_t._M_impl._M_header._M_parent,
                  &v4->head_map_._M_t._M_impl._M_header,
                  &__k)._M_node;
  M_node = v11._M_node;
  __pos = v11._M_node;
  if ( p_M_header != v11._M_node )
  {
    v13 = (unsigned __int64)&v11._M_node[1];
    p_M_header = (std::_Rb_tree_node_base *)__k._M_string_length;
    *(_QWORD *)(v6 + 32) = __k._M_string_length;
    v14 = (std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr)((char *)v11._M_node + 40);
    if ( !*(_BYTE *)(((unsigned __int64)&v11._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
    {
      M_parent = v11._M_node[1]._M_parent;
      *(_QWORD *)(v6 + 64) = M_parent;
      if ( p_M_header <= M_parent )
      {
        v15 = v6 + 32;
        goto LABEL_10;
      }
LABEL_25:
      v15 = v6 + 64;
LABEL_10:
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      {
        v13 = v15;
        __asan_report_load8(v15);
      }
      else
      {
        v16 = *(_QWORD *)v15;
        if ( !*(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        {
          if ( v16 )
          {
            v17 = memcmp(__k._M_dataplus._M_p, *(const void **)&v11._M_node[1]._M_color, v16);
            if ( v17 )
            {
LABEL_17:
              if ( v17 >= 0 )
                goto LABEL_30;
              goto LABEL_18;
            }
          }
          v18 = (char *)p_M_header - (char *)M_parent;
          if ( v18 <= 0x7FFFFFFF )
          {
            if ( v18 < (__int64)0xFFFFFFFF80000000LL )
              v17 = 0x80000000;
            else
              v17 = v18;
            goto LABEL_17;
          }
LABEL_28:
          v17 = 0x7FFFFFFF;
          goto LABEL_17;
        }
      }
      __asan_report_load8(v13);
      goto LABEL_28;
    }
LABEL_24:
    v13 = (unsigned __int64)v14;
    v11._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr)__asan_report_load8(v14);
    goto LABEL_25;
  }
LABEL_18:
  *(_QWORD *)(v6 + 64) = &__k;
  M_node = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string&&>,std::tuple<>>(
             &p_head_map->_M_t,
             (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::const_iterator)__pos,
             &std::piecewise_construct,
             (std::tuple<std::string&&> *)(v6 + 64),
             &v42,
             (const std::piecewise_construct_t *)v12._M_node,
             v37,
             bodya)._M_node;
LABEL_30:
  if ( *(_BYTE *)(((unsigned __int64)&M_node[2]._M_parent >> 3) + 0x7FFF8000) )
    __asan_report_load8(&M_node[2]._M_parent);
  else
    std::string::_M_replace(&M_node[2], 0LL, M_node[2]._M_parent, "(>_<)", 5LL);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__k._M_dataplus._M_p != &__k._anon_0 )
    operator delete(__k._M_dataplus._M_p);
  __k._M_dataplus._M_p = __k._anon_0._M_local_buf;
  v21 = (std::_Rb_tree_node<std::pair<const std::string,std::string > > *)&byte_19E8AD6C[-12];
  std::string::_M_construct<char const*>(&__k, &byte_19E8AD6C[-12], byte_19E8AD6C, v20);
  M_string_length = &p_head_map->_M_t._M_impl._M_header;
  if ( *(_BYTE *)(((unsigned __int64)&p_head_map->_M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&p_head_map->_M_t._M_impl._M_header._M_parent);
    goto LABEL_50;
  }
  v21 = (std::_Rb_tree_node<std::pair<const std::string,std::string > > *)p_head_map->_M_t._M_impl._M_header._M_parent;
  v23._M_node = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_lower_bound(
                  &p_head_map->_M_t,
                  v21,
                  &p_head_map->_M_t._M_impl._M_header,
                  &__k)._M_node;
  M_node = v23._M_node;
  __pos = v23._M_node;
  if ( M_string_length != v23._M_node )
  {
    v25 = (unsigned __int64)&v23._M_node[1];
    M_string_length = (std::_Rb_tree_node_base *)__k._M_string_length;
    *(_QWORD *)(v6 + 32) = __k._M_string_length;
    v26 = (std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr)((char *)v23._M_node + 40);
    if ( !*(_BYTE *)(((unsigned __int64)&v23._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
    {
      M_parent = v23._M_node[1]._M_parent;
      *(_QWORD *)(v6 + 64) = M_parent;
      if ( M_string_length <= M_parent )
      {
        v27 = v6 + 32;
        goto LABEL_40;
      }
LABEL_51:
      v27 = v6 + 64;
LABEL_40:
      if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
      {
        v25 = v27;
        __asan_report_load8(v27);
      }
      else
      {
        v28 = *(_QWORD *)v27;
        if ( !*(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
        {
          v21 = *(std::_Rb_tree_node<std::pair<const std::string,std::string > > **)&v23._M_node[1]._M_color;
          if ( v28 )
          {
            v29 = memcmp(__k._M_dataplus._M_p, v21, v28);
            if ( v29 )
            {
LABEL_47:
              if ( v29 >= 0 )
                goto LABEL_56;
              goto LABEL_48;
            }
          }
          v30 = (char *)M_string_length - (char *)M_parent;
          if ( v30 <= 0x7FFFFFFF )
          {
            if ( v30 < (__int64)0xFFFFFFFF80000000LL )
              v29 = 0x80000000;
            else
              v29 = v30;
            goto LABEL_47;
          }
LABEL_54:
          v29 = 0x7FFFFFFF;
          goto LABEL_47;
        }
      }
      __asan_report_load8(v25);
      goto LABEL_54;
    }
LABEL_50:
    v25 = (unsigned __int64)v26;
    v23._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr)__asan_report_load8(v26);
    goto LABEL_51;
  }
LABEL_48:
  *(_QWORD *)(v6 + 64) = &__k;
  v21 = (std::_Rb_tree_node<std::pair<const std::string,std::string > > *)__pos;
  M_node = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string&&>,std::tuple<>>(
             &p_head_map->_M_t,
             (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::const_iterator)__pos,
             &std::piecewise_construct,
             (std::tuple<std::string&&> *)(v6 + 64),
             &v42,
             (const std::piecewise_construct_t *)v24._M_node,
             v37,
             bodya)._M_node;
LABEL_56:
  if ( *(_BYTE *)(((unsigned __int64)&M_node[2]._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&M_node[2]._M_parent);
  }
  else
  {
    v21 = 0LL;
    std::string::_M_replace(&M_node[2], 0LL, M_node[2]._M_parent, "text/html; charset=UTF-8", 24LL);
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__k._M_dataplus._M_p != &__k._anon_0 )
    operator delete(__k._M_dataplus._M_p);
  v31 = *(_BYTE *)(((unsigned __int64)&v4->head_content_length_ >> 3) + 0x7FFF8000);
  if ( v31 && v31 <= 3 )
  {
    __asan_report_store4(&v4->head_content_length_, v21);
    goto LABEL_70;
  }
  v4->head_content_length_ = 0;
  if ( !bodya )
    goto LABEL_66;
  p_body = &v4->body_;
  v33 = strlen(bodya->gap0);
  v4 = (common::minet::HttpResponse *)((char *)v4 + 104);
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    v35 = (struct _Unwind_Exception *)__asan_report_load8(v4);
    M_p = __k._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__k._M_dataplus._M_p != &__k._anon_0 )
      operator delete(__k._M_dataplus._M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v35);
  }
  std::string::_M_replace(p_body, 0LL, p_body->_M_string_length, bodya->gap0, v33);
LABEL_66:
  if ( v44 == (char *)v6 )
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
  return 0;
};

// Line 78: range 000000000C7F2694-000000000C7F2924
void __fastcall common::minet::HttpResponse::addHead(
        common::minet::HttpResponse *const this,
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
  *(_QWORD *)(v4 + 16) = common::minet::HttpResponse::addHead;
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

// Line 197: range 000000000C7F1D56-000000000C7F2691
std::string *__fastcall common::minet::HttpResponse::parseToStr[abi:cxx11](
        std::string *retstr,
        common::minet::HttpResponse *const this)
{
  std::string *v2; // rbx
  _DWORD *v4; // r13
  char v5; // al
  __int64 v6; // rdx
  char v7; // al
  uint16_t status; // r8
  size_t v9; // rdx
  common::minet::HttpResponse *p_M_string_length; // rdi
  __int64 v11; // rax
  size_t v12; // rax
  std::forward_iterator_tag v13; // cl
  std::forward_iterator_tag v14; // cl
  unsigned __int64 M_parent; // rsi
  std::_Rb_tree_header *v16; // r14
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::iterator v17; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::iterator v18; // r9
  unsigned __int64 v19; // rdi
  std::_Rb_tree_node_base *v20; // rdx
  unsigned __int64 v21; // rdx
  size_t v22; // rdx
  signed __int64 v23; // rax
  common::minet::HttpResponse *v24; // r12
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  void *M_p; // rdi
  char v29; // al
  __int64 v30; // rdx
  common::minet::HttpResponse *i; // rax
  std::string::size_type v32; // rdi
  __int64 v33; // rax
  unsigned __int64 v34; // rdi
  char v35; // al
  unsigned __int64 v36; // rdx
  char v37; // al
  unsigned __int64 v38; // rdx
  __int64 v39; // rdx
  char v40; // al
  unsigned __int64 p_head_map; // rax
  unsigned __int64 p_status; // rdi
  std::string::size_type *v43; // rdi
  std::_Rb_tree_node_base::_Base_ptr *p_M_right; // rdi
  std::string::size_type *v45; // rdi
  std::string::size_type *v46; // rdi
  void *p_body; // rdi
  struct _Unwind_Exception *v48; // rbp
  std::string::pointer v49; // rdi
  std::tuple<std::string&&> *v51; // [rsp+0h] [rbp-188h]
  std::tuple<> *__args_2; // [rsp+8h] [rbp-180h]
  unsigned __int64 v53; // [rsp+10h] [rbp-178h]
  std::string::size_type M_string_length; // [rsp+18h] [rbp-170h]
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // [rsp+20h] [rbp-168h]
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr __pos; // [rsp+30h] [rbp-158h]
  std::string::size_type v57; // [rsp+38h] [rbp-150h]
  std::tuple<> v58; // [rsp+4Fh] [rbp-139h] BYREF
  std::string __k; // [rsp+50h] [rbp-138h] BYREF
  std::string v60; // [rsp+70h] [rbp-118h] BYREF
  char v61[248]; // [rsp+90h] [rbp-F8h] BYREF

  v2 = retstr;
  v53 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_2(192LL);
    if ( v11 )
      v53 = v11;
  }
  *(_QWORD *)v53 = 1102416563LL;
  *(_QWORD *)(v53 + 8) = "3 32 8 6 __size 64 8 7 __osize 96 64 12 line_buf:199";
  *(_QWORD *)(v53 + 16) = common::minet::HttpResponse::parseToStr[abi:cxx11];
  v4 = (_DWORD *)(v53 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862725] = -202116109;
  p_anon_0 = &retstr->_anon_0;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(retstr, this);
    goto LABEL_17;
  }
  retstr->_M_dataplus._M_p = (std::string::pointer)p_anon_0;
  retstr = (std::string *)((char *)retstr + 8);
  if ( *(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_store8(retstr, this);
LABEL_18:
    __asan_report_store1(retstr, this, v6);
LABEL_19:
    __asan_report_load2(retstr);
    goto LABEL_20;
  }
  v2->_M_string_length = 0LL;
  retstr = (std::string *)&v2->_anon_0;
  v5 = *(_BYTE *)(((unsigned __int64)&v2->_anon_0 >> 3) + 0x7FFF8000);
  v6 = ((_BYTE)v2 + 16) & 7;
  if ( v5 <= (char)v6 && v5 )
    goto LABEL_18;
  v2->_anon_0._M_local_buf[0] = 0;
  retstr = (std::string *)&this->status_;
  v7 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 1 )
    goto LABEL_19;
  status = this->status_;
  if ( status != 200 )
  {
    if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      snprintf((char *)(v53 + 96), 0x40uLL, "%s %u ERROR\r\n", this->version_._M_dataplus._M_p, status);
      goto LABEL_11;
    }
LABEL_23:
    p_M_string_length = this;
    __asan_report_load8(this);
    goto LABEL_24;
  }
LABEL_20:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_23;
  }
  snprintf((char *)(v53 + 96), 0x40uLL, "%s %u OK\r\n", this->version_._M_dataplus._M_p, status);
LABEL_11:
  v9 = strlen((const char *)(v53 + 96));
  p_M_string_length = (common::minet::HttpResponse *)&v2->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(p_M_string_length);
LABEL_25:
    __asan_handle_no_return(p_M_string_length);
    std::__throw_length_error("basic_string::append");
  }
  if ( v9 > 0x3FFFFFFFFFFFFFFFLL - v2->_M_string_length )
    goto LABEL_25;
  std::string::_M_append(v2, (const char *)(v53 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&this->body_._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->body_._M_string_length);
  }
  else
  {
    snprintf((char *)(v53 + 96), 0x40uLL, off_19E8AE60, this->body_._M_string_length);
    v60._M_dataplus._M_p = v60._anon_0._M_local_buf;
    v12 = strlen((const char *)(v53 + 96));
    std::string::_M_construct<char const*>(&v60, (const char *)(v53 + 96), (const char *)(v53 + 96 + v12), v13);
  }
  __k._M_dataplus._M_p = __k._anon_0._M_local_buf;
  M_parent = (unsigned __int64)&byte_19E8AEAE[-14];
  std::string::_M_construct<char const*>(&__k, &byte_19E8AEAE[-14], byte_19E8AEAE, v14);
  v16 = &this->head_map_._M_t._M_impl.std::_Rb_tree_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->head_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->head_map_._M_t._M_impl._M_header._M_parent);
    goto LABEL_44;
  }
  M_parent = (unsigned __int64)this->head_map_._M_t._M_impl._M_header._M_parent;
  v17._M_node = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_lower_bound(
                  &this->head_map_._M_t,
                  (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::_Link_type)M_parent,
                  &this->head_map_._M_t._M_impl._M_header,
                  &__k)._M_node;
  __args_2 = (std::tuple<> *)v17._M_node;
  __pos = v17._M_node;
  if ( v16 != (std::_Rb_tree_header *)v17._M_node )
  {
    v19 = (unsigned __int64)&v17._M_node[1];
    M_string_length = __k._M_string_length;
    *(_QWORD *)(v53 + 32) = __k._M_string_length;
    v20 = (std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr)((char *)v17._M_node + 40);
    if ( !*(_BYTE *)(((unsigned __int64)&v17._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
    {
      v16 = (std::_Rb_tree_header *)v17._M_node[1]._M_parent;
      *(_QWORD *)(v53 + 64) = v16;
      if ( M_string_length <= (unsigned __int64)v16 )
      {
        v21 = v53 + 32;
        goto LABEL_34;
      }
LABEL_45:
      v21 = v53 + 64;
LABEL_34:
      if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
      {
        v19 = v21;
        __asan_report_load8(v21);
      }
      else
      {
        v22 = *(_QWORD *)v21;
        if ( !*(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        {
          M_parent = *(_QWORD *)&v17._M_node[1]._M_color;
          if ( v22 )
          {
            LODWORD(v23) = memcmp(__k._M_dataplus._M_p, (const void *)M_parent, v22);
            if ( (_DWORD)v23 )
              goto LABEL_41;
          }
          v23 = M_string_length - (_QWORD)v16;
          if ( (__int64)(M_string_length - (_QWORD)v16) <= 0x7FFFFFFF )
          {
            if ( v23 < (__int64)0xFFFFFFFF80000000LL )
              LODWORD(v23) = 0x80000000;
LABEL_41:
            if ( (int)v23 >= 0 )
              goto LABEL_49;
            goto LABEL_42;
          }
LABEL_48:
          LODWORD(v23) = 0x7FFFFFFF;
          goto LABEL_41;
        }
      }
      __asan_report_load8(v19);
      goto LABEL_48;
    }
LABEL_44:
    v19 = (unsigned __int64)v20;
    v17._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr)__asan_report_load8(v20);
    goto LABEL_45;
  }
LABEL_42:
  *(_QWORD *)(v53 + 64) = &__k;
  M_parent = (unsigned __int64)__pos;
  __args_2 = (std::tuple<> *)std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string&&>,std::tuple<>>(
                               &this->head_map_._M_t,
                               (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::const_iterator)__pos,
                               &std::piecewise_construct,
                               (std::tuple<std::string&&> *)(v53 + 64),
                               &v58,
                               (const std::piecewise_construct_t *)v18._M_node,
                               v51,
                               __args_2)._M_node;
LABEL_49:
  v24 = (common::minet::HttpResponse *)&__args_2[64];
  if ( *(_BYTE *)(((unsigned __int64)&__args_2[64] >> 3) + 0x7FFF8000) )
  {
    v25 = (unsigned __int64)&__args_2[64];
    __asan_report_load8(&__args_2[64]);
LABEL_67:
    if ( !v60._M_string_length )
      goto LABEL_70;
    if ( v60._M_string_length != 1 )
    {
      memcpy((void *)v25, (const void *)M_parent, v60._M_string_length);
      goto LABEL_70;
    }
    v37 = *(_BYTE *)((M_parent >> 3) + 0x7FFF8000);
    v38 = M_parent & 7;
    if ( v37 <= (char)v38 && v37 )
    {
      v25 = M_parent;
      __asan_report_load1(M_parent, M_parent, v38);
    }
    else
    {
      v39 = *(unsigned __int8 *)M_parent;
      v40 = *(_BYTE *)((v25 >> 3) + 0x7FFF8000);
      if ( v40 > (char)(v25 & 7) || !v40 )
      {
        *(_BYTE *)v25 = v39;
LABEL_70:
        v32 = v60._M_string_length;
        v33 = (__int64)__args_2[72].gap0;
        if ( !*(_BYTE *)(((unsigned __int64)&__args_2[72] >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)__args_2[72].gap0 = v60._M_string_length;
          v34 = (unsigned __int64)&v24->version_._M_dataplus._M_p[v32];
          v35 = *(_BYTE *)((v34 >> 3) + 0x7FFF8000);
          v36 = v34 & 7;
          if ( v35 > (char)v36 || !v35 )
          {
            *(_BYTE *)v34 = 0;
            goto LABEL_58;
          }
          goto LABEL_82;
        }
LABEL_81:
        v34 = v33;
        __asan_report_store8(v33, M_parent);
LABEL_82:
        v26 = __asan_report_store1(v34, M_parent, v36);
LABEL_83:
        __asan_report_load8(v26);
        goto LABEL_84;
      }
    }
    v33 = __asan_report_store1(v25, M_parent, v39);
    goto LABEL_81;
  }
  v25 = *(_QWORD *)__args_2[64].gap0;
  M_parent = (unsigned __int64)v60._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v60._M_dataplus._M_p == &v60._anon_0 )
    goto LABEL_67;
  if ( (std::tuple<> *)v25 != &__args_2[80] )
  {
    v26 = (__int64)__args_2[80].gap0;
    if ( !*(_BYTE *)(((unsigned __int64)&__args_2[80] >> 3) + 0x7FFF8000) )
    {
      v57 = *(_QWORD *)__args_2[80].gap0;
      goto LABEL_54;
    }
    goto LABEL_83;
  }
LABEL_84:
  v25 = 0LL;
LABEL_54:
  v24->version_._M_dataplus._M_p = (std::string::pointer)M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&__args_2[72] >> 3) + 0x7FFF8000) )
  {
    v27 = __asan_report_store8(&__args_2[72], M_parent);
    goto LABEL_86;
  }
  *(_QWORD *)__args_2[72].gap0 = v60._M_string_length;
  v27 = (__int64)__args_2[80].gap0;
  if ( *(_BYTE *)(((unsigned __int64)&__args_2[80] >> 3) + 0x7FFF8000) )
  {
LABEL_86:
    __asan_report_store8(v27, M_parent);
    goto LABEL_87;
  }
  *(_QWORD *)__args_2[80].gap0 = v60._anon_0._M_allocated_capacity;
  if ( !v25 )
  {
LABEL_87:
    v60._M_dataplus._M_p = v60._anon_0._M_local_buf;
    goto LABEL_58;
  }
  v60._M_dataplus._M_p = (std::string::pointer)v25;
  v60._anon_0._M_allocated_capacity = v57;
LABEL_58:
  v60._M_string_length = 0LL;
  M_p = v60._M_dataplus._M_p;
  v29 = *(_BYTE *)(((unsigned __int64)v60._M_dataplus._M_p >> 3) + 0x7FFF8000);
  v30 = (__int64)v60._M_dataplus._M_p & 7;
  if ( v29 <= (char)v30 && v29 )
  {
    __asan_report_store1(v60._M_dataplus._M_p, M_parent, v30);
LABEL_89:
    p_head_map = __asan_report_load8(M_p);
    goto LABEL_90;
  }
  *v60._M_dataplus._M_p = 0;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__k._M_dataplus._M_p != &__k._anon_0 )
    operator delete(__k._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v60._M_dataplus._M_p != &v60._anon_0 )
    operator delete(v60._M_dataplus._M_p);
  M_p = &this->head_map_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&this->head_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
    goto LABEL_89;
  for ( i = (common::minet::HttpResponse *)this->head_map_._M_t._M_impl._M_header._M_left;
        ;
        i = (common::minet::HttpResponse *)std::_Rb_tree_increment((std::_Rb_tree_node_base *)v24) )
  {
    v24 = i;
    if ( i == (common::minet::HttpResponse *)&this->head_map_._M_t._M_impl.std::_Rb_tree_header )
      break;
    p_head_map = (unsigned __int64)&i->head_map_;
    if ( *(_BYTE *)((p_head_map >> 3) + 0x7FFF8000) )
    {
LABEL_90:
      p_status = p_head_map;
      __asan_report_load8(p_head_map);
LABEL_91:
      __asan_report_load8(p_status);
      goto LABEL_92;
    }
    p_status = (unsigned __int64)&v24->status_;
    if ( *(_BYTE *)(((unsigned __int64)&v24->status_ >> 3) + 0x7FFF8000) )
      goto LABEL_91;
    std::string::_M_append(v2, *(const char **)&v24->status_, *(_QWORD *)v24->head_map_._M_t._M_impl.gap0);
LABEL_92:
    v43 = &v2->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v43);
LABEL_96:
      __asan_handle_no_return(v43);
      std::__throw_length_error("basic_string::append");
    }
    if ( v2->_M_string_length == 0x3FFFFFFFFFFFFFFFLL || v2->_M_string_length == 4611686018427387902LL )
      goto LABEL_96;
    std::string::_M_append(v2, ": ", 2LL);
    p_M_right = &v24->head_map_._M_t._M_impl._M_header._M_right;
    if ( *(_BYTE *)(((unsigned __int64)&v24->head_map_._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_right);
    }
    else
    {
      p_M_right = &v24->head_map_._M_t._M_impl._M_header._M_left;
      if ( !*(_BYTE *)(((unsigned __int64)&v24->head_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
      {
        std::string::_M_append(
          v2,
          (const char *)v24->head_map_._M_t._M_impl._M_header._M_left,
          v24->head_map_._M_t._M_impl._M_header._M_right);
        goto LABEL_102;
      }
    }
    __asan_report_load8(p_M_right);
LABEL_102:
    v45 = &v2->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v45);
LABEL_106:
      __asan_handle_no_return(v45);
      std::__throw_length_error("basic_string::append");
    }
    if ( v2->_M_string_length == 0x3FFFFFFFFFFFFFFFLL || v2->_M_string_length == 4611686018427387902LL )
      goto LABEL_106;
    std::string::_M_append(v2, "\r\n", 2LL);
  }
  v46 = &v2->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v46);
LABEL_115:
    __asan_handle_no_return(v46);
    std::__throw_length_error("basic_string::append");
  }
  if ( v2->_M_string_length == 0x3FFFFFFFFFFFFFFFLL || v2->_M_string_length == 4611686018427387902LL )
    goto LABEL_115;
  std::string::_M_append(v2, "\r\n", 2LL);
  p_body = &this->body_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->body_._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_body);
LABEL_120:
    v48 = (struct _Unwind_Exception *)__asan_report_load8(p_body);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__k._M_dataplus._M_p != &__k._anon_0 )
      operator delete(__k._M_dataplus._M_p);
    while ( 1 )
    {
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v60._M_dataplus._M_p != &v60._anon_0 )
        operator delete(v60._M_dataplus._M_p);
      if ( !*(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
      {
        v49 = v2->_M_dataplus._M_p;
        if ( p_anon_0 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v2->_M_dataplus._M_p )
          operator delete(v49);
        __asan_handle_no_return(v49);
        _Unwind_Resume(v48);
      }
      v48 = (struct _Unwind_Exception *)__asan_report_load8(v2);
    }
  }
  p_body = &this->body_;
  if ( *(_BYTE *)(((unsigned __int64)&this->body_ >> 3) + 0x7FFF8000) )
    goto LABEL_120;
  std::string::_M_append(v2, this->body_._M_dataplus._M_p, this->body_._M_string_length);
  if ( v61 == (char *)v53 )
  {
    *(_QWORD *)((v53 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v53 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v53 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v53 = 1172321806LL;
    *(_QWORD *)((v53 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v53 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v53 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v2;
};

// Line 244: range 000000000C7EFEBC-000000000C7F10BF
uint16_t __fastcall common::minet::HttpResponse::getStatus(common::minet::HttpResponse *const this)
{
  char v1; // al

  v1 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( v1 && v1 <= 1 )
  {
    __asan_report_load2(&this->status_);
    JUMPOUT(0xC7EFEE7LL);
  }
  return this->status_;
};

// Line 277: range 000000000C7F2929-000000000C7F2940
void __cdecl GLOBAL__sub_I_http_response_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 277: range 000000000C7EFC20-000000000C7EFEB7
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/http_response.cpp");
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
          JUMPOUT(0xC7EFCB3LL);
        }
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                             + 9;
      }
    }
    __asan_after_dynamic_init();
  }
};
