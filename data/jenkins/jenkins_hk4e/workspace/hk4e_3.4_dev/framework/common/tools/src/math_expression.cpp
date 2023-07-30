// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/src/math_expression.cpp

// Line 55: range 0000000019B508B0-0000000019B50C60
__int64 __fastcall common::tools::MathExpressionNode::initToNum(
        common::tools::MathExpressionNode *const this,
        unsigned __int64 a2)
{
  char v3; // al
  common::tools::MathExpressionNode::Type type; // ebp
  char *v5; // r8
  char v6; // al
  char v7; // al
  unsigned __int64 v9; // rdx
  char *v10; // rax
  char v11; // al
  char v12; // cl
  void *p_str; // rdi
  double v14; // xmm0_8
  char v15; // al
  struct _Unwind_Exception *v16; // rbx
  common::milog::MiLogStream v17; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 && v3 <= 3 )
  {
    __asan_report_load4(this);
    goto LABEL_14;
  }
  type = this->type_;
  if ( this->type_ )
  {
LABEL_14:
    common::milog::MiLogStream::MiLogStream(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/math_expression.cpp",
      "initToNum",
      58);
    common::milog::MiLogStream::operator()(&v17, "can not re init");
    common::milog::MiLogStream::~MiLogStream(&v17);
    return 0xFFFFFFFFLL;
  }
  if ( *(_BYTE *)(((a2 + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(a2 + 8);
    goto LABEL_16;
  }
  if ( !*(_QWORD *)(a2 + 8) )
  {
LABEL_16:
    common::milog::MiLogStream::MiLogStream(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/math_expression.cpp",
      "initToNum",
      64);
    common::milog::MiLogStream::operator()(&v17, "str is empty");
    common::milog::MiLogStream::~MiLogStream(&v17);
    return 0xFFFFFFFFLL;
  }
  this->type_ = NODE_NUM;
  std::string::_M_assign(&this->str_, a2);
  if ( *(_BYTE *)((a2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(a2);
LABEL_18:
    __asan_report_load1(v5);
    goto LABEL_19;
  }
  v5 = *(char **)a2;
  v6 = *(_BYTE *)((*(_QWORD *)a2 >> 3) + 0x7FFF8000LL);
  if ( v6 <= (*(_BYTE *)a2 & 7) && v6 )
    goto LABEL_18;
  v7 = *v5;
  if ( *v5 <= 47 || v7 > 57 )
  {
    if ( v7 != 45 )
      return 0LL;
LABEL_19:
    v9 = 1LL;
    goto LABEL_26;
  }
  v9 = 1LL;
LABEL_26:
  while ( !*(_BYTE *)(((a2 + 8) >> 3) + 0x7FFF8000) )
  {
    if ( v9 >= *(_QWORD *)(a2 + 8) )
    {
      p_str = &this->str_;
      if ( *(_BYTE *)(((unsigned __int64)&this->str_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_str);
      }
      else
      {
        v14 = strtod(this->str_._M_dataplus._M_p, 0LL);
        p_str = &this->num_value_;
        if ( !*(_BYTE *)(((unsigned __int64)&this->num_value_ >> 3) + 0x7FFF8000) )
        {
          this->num_value_ = v14;
          p_str = &this->is_const_num_node_;
          v15 = *(_BYTE *)(((unsigned __int64)&this->is_const_num_node_ >> 3) + 0x7FFF8000);
          if ( v15 > (((unsigned __int8)this + 49) & 7) || !v15 )
          {
            this->is_const_num_node_ = 1;
            return 0LL;
          }
LABEL_46:
          v16 = (struct _Unwind_Exception *)__asan_report_store1(p_str);
          common::milog::MiLogStream::~MiLogStream(&v17);
          __asan_handle_no_return(&v17);
          _Unwind_Resume(v16);
        }
      }
      __asan_report_store8(p_str);
      goto LABEL_46;
    }
    v10 = &v5[v9];
    v12 = *(_BYTE *)(((unsigned __int64)&v5[v9] >> 3) + 0x7FFF8000);
    if ( v12 > (char)(((_BYTE)v5 + v9) & 7) || !v12 )
      goto LABEL_22;
    __asan_report_load1(&v5[v9]);
LABEL_31:
    if ( (unsigned int)++type > NODE_OPERATOR )
    {
      common::milog::MiLogStream::MiLogStream(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/math_expression.cpp",
        "initToNum",
        83);
      if ( !*(_BYTE *)((a2 >> 3) + 0x7FFF8000) )
      {
        common::milog::MiLogStream::operator()(&v17, "find too much '.' in '%s'", *(const char **)a2);
        goto LABEL_35;
      }
      goto LABEL_34;
    }
LABEL_25:
    ++v9;
  }
  v10 = (char *)__asan_report_load8(a2 + 8);
LABEL_22:
  v11 = *v10;
  if ( v11 == 46 )
    goto LABEL_31;
  if ( v11 > 47 && v11 <= 57 )
    goto LABEL_25;
  common::milog::MiLogStream::MiLogStream(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/math_expression.cpp",
    "initToNum",
    90);
  if ( *(_BYTE *)((a2 >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8(a2);
    goto LABEL_35;
  }
  common::milog::MiLogStream::operator()(&v17, "find error const num '%s'", *(const char **)a2);
LABEL_35:
  common::milog::MiLogStream::~MiLogStream(&v17);
  return 0xFFFFFFFFLL;
};

// Line 105: range 0000000019B50C66-0000000019B50E88
__int64 __fastcall common::tools::MathExpressionNode::initToNum(
        common::tools::MathExpressionNode *const this,
        double a2,
        double value)
{
  common::tools::MathExpressionNode *v3; // rbx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r14
  char v6; // al
  double *p_num_value; // rdi
  char v8; // al
  std::string *p_str; // r12
  size_t v10; // r8
  __int64 result; // rax
  __int64 v12; // rax
  struct _Unwind_Exception *v13; // rbx
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-98h] BYREF
  char v15[120]; // [rsp+30h] [rbp-78h] BYREF

  v3 = this;
  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_0(64LL);
    if ( v12 )
      v4 = v12;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 7 buf:116";
  *(_QWORD *)(v4 + 16) = common::tools::MathExpressionNode::initToNum;
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 && v6 <= 3 )
  {
    a2 = __asan_report_load4(this);
  }
  else if ( this->type_ == NODE_EMPTY )
  {
    this->type_ = NODE_NUM;
    p_num_value = &this->num_value_;
    if ( *(_BYTE *)(((unsigned __int64)&v3->num_value_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8(p_num_value);
    }
    else
    {
      v3->num_value_ = a2;
      p_num_value = (double *)&v3->is_const_num_node_;
      v8 = *(_BYTE *)(((unsigned __int64)&v3->is_const_num_node_ >> 3) + 0x7FFF8000);
      if ( v8 > (((unsigned __int8)v3 + 49) & 7) || !v8 )
      {
        v3->is_const_num_node_ = 1;
        snprintf((char *)(v4 + 32), 0x10uLL, "%f", a2);
        p_str = &v3->str_;
        v10 = strlen((const char *)(v4 + 32));
        v3 = (common::tools::MathExpressionNode *)((char *)v3 + 16);
        if ( !*(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
        {
          std::string::_M_replace(p_str, 0LL, p_str->_M_string_length, v4 + 32, v10);
          result = 0LL;
          goto LABEL_10;
        }
LABEL_18:
        v13 = (struct _Unwind_Exception *)__asan_report_load8(v3);
        common::milog::MiLogStream::~MiLogStream(&v14);
        __asan_handle_no_return(&v14);
        _Unwind_Resume(v13);
      }
    }
    __asan_report_store1(p_num_value);
    goto LABEL_18;
  }
  common::milog::MiLogStream::MiLogStream(
    &v14,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/math_expression.cpp",
    "initToNum",
    108);
  common::milog::MiLogStream::operator()(&v14, "can not re init", a2, value);
  common::milog::MiLogStream::~MiLogStream(&v14);
  result = 0xFFFFFFFFLL;
LABEL_10:
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 124: range 0000000019B50E8E-0000000019B50FDA
int __fastcall common::tools::MathExpressionNode::initToBool(common::tools::MathExpressionNode *const this, bool value)
{
  char v2; // al
  std::string *p_str; // rax
  std::string *v5; // rax
  std::string::size_type *p_M_string_length; // rdi
  struct _Unwind_Exception *v7; // rbx
  common::milog::MiLogStream v8; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v2 && v2 <= 3 )
  {
    __asan_report_load4(this);
    goto LABEL_9;
  }
  if ( this->type_ )
  {
LABEL_9:
    common::milog::MiLogStream::MiLogStream(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/math_expression.cpp",
      "initToBool",
      127);
    common::milog::MiLogStream::operator()(&v8, "can not re init");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  this->type_ = NODE_BOOL;
  if ( *(char *)(((unsigned __int64)&this->bool_value_ >> 3) + 0x7FFF8000) < 0 )
  {
    this = (common::tools::MathExpressionNode *const)((char *)this + 48);
    __asan_report_store1(this);
LABEL_11:
    __asan_report_load8(this);
    goto LABEL_12;
  }
  this->bool_value_ = value;
  if ( value )
  {
    p_str = &this->str_;
    this = (common::tools::MathExpressionNode *const)((char *)this + 16);
    if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      std::string::_M_replace(p_str, 0LL, p_str->_M_string_length, "true", 4LL);
      return 0;
    }
    goto LABEL_11;
  }
LABEL_12:
  v5 = &this->str_;
  p_M_string_length = &this->str_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)p_M_string_length >> 3) + 0x7FFF8000) )
  {
    v7 = (struct _Unwind_Exception *)__asan_report_load8(p_M_string_length);
    common::milog::MiLogStream::~MiLogStream(&v8);
    __asan_handle_no_return(&v8);
    _Unwind_Resume(v7);
  }
  std::string::_M_replace(v5, 0LL, v5->_M_string_length, "false", 5LL);
  return 0;
};

// Line 146: range 0000000019B50FE0-0000000019B510B2
int __fastcall common::tools::MathExpressionNode::initToLeftBracket(common::tools::MathExpressionNode *const this)
{
  char v1; // al
  std::string *p_str; // rax
  std::string::size_type *p_M_string_length; // rdi
  struct _Unwind_Exception *v5; // rbx
  common::milog::MiLogStream v6; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 && v1 <= 3 )
  {
    __asan_report_load4(this);
    goto LABEL_7;
  }
  if ( this->type_ )
  {
LABEL_7:
    common::milog::MiLogStream::MiLogStream(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/math_expression.cpp",
      "initToLeftBracket",
      149);
    common::milog::MiLogStream::operator()(&v6, "can not re init");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  this->type_ = NODE_LEFT_BRACKET;
  p_str = &this->str_;
  p_M_string_length = &this->str_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)p_M_string_length >> 3) + 0x7FFF8000) )
  {
    v5 = (struct _Unwind_Exception *)__asan_report_load8(p_M_string_length);
    common::milog::MiLogStream::~MiLogStream(&v6);
    __asan_handle_no_return(&v6);
    _Unwind_Resume(v5);
  }
  std::string::_M_replace(p_str, 0LL, p_str->_M_string_length, "(", 1LL);
  return 0;
};

// Line 160: range 0000000019B510B8-0000000019B5118A
int __fastcall common::tools::MathExpressionNode::initToRightBracket(common::tools::MathExpressionNode *const this)
{
  char v1; // al
  std::string *p_str; // rax
  std::string::size_type *p_M_string_length; // rdi
  struct _Unwind_Exception *v5; // rbx
  common::milog::MiLogStream v6; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 && v1 <= 3 )
  {
    __asan_report_load4(this);
    goto LABEL_7;
  }
  if ( this->type_ )
  {
LABEL_7:
    common::milog::MiLogStream::MiLogStream(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/math_expression.cpp",
      "initToRightBracket",
      163);
    common::milog::MiLogStream::operator()(&v6, "can not re init");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  this->type_ = NODE_RIGHT_BRACKET;
  p_str = &this->str_;
  p_M_string_length = &this->str_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)p_M_string_length >> 3) + 0x7FFF8000) )
  {
    v5 = (struct _Unwind_Exception *)__asan_report_load8(p_M_string_length);
    common::milog::MiLogStream::~MiLogStream(&v6);
    __asan_handle_no_return(&v6);
    _Unwind_Resume(v5);
  }
  std::string::_M_replace(p_str, 0LL, p_str->_M_string_length, ")", 1LL);
  return 0;
};

// Line 180: range 0000000019B53958-0000000019B55279
void __fastcall common::tools::MathExpression::MathExpression(common::tools::MathExpression *const this)
{
  std::forward_iterator_tag v1; // cl
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr M_node; // r12
  std::_Rb_tree_node_base::_Base_ptr M_parent; // r14
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr v4; // r15
  std::tuple<std::string&&> *v6; // rbp
  void *p_M_parent; // rdi
  char v8; // al
  std::_Rb_tree_header *v9; // rax
  char v10; // al
  char v11; // al
  char v12; // al
  std::_Vector_base<common::tools::MathExpressionNode>::pointer *p_M_start; // rdi
  __int64 v14; // rax
  std::_Rb_tree_node_base *p_M_header; // r13
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v16; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v17; // r9
  unsigned __int64 v18; // rdi
  std::_Rb_tree_node_base *v19; // rdx
  unsigned __int64 v20; // rdx
  size_t v21; // rdx
  unsigned __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // r13
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr v25; // r12
  char v26; // dl
  std::_Rb_tree_node_base *M_string_length; // r13
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v28; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v29; // r9
  unsigned __int64 v30; // rdi
  std::_Rb_tree_node_base *v31; // rdx
  unsigned __int64 v32; // rdx
  size_t v33; // rdx
  unsigned __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // r13
  unsigned __int64 logic_operator_priority; // r12
  char v38; // dl
  const uint32_t *p_logic_operator_priority; // rdi
  char v40; // al
  std::_Rb_tree_node_base *v41; // r13
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v42; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v43; // r9
  unsigned __int64 v44; // rdi
  std::_Rb_tree_node_base *v45; // rdx
  unsigned __int64 v46; // rdx
  size_t v47; // rdx
  unsigned __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // r13
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr v51; // r15
  char v52; // dl
  std::_Rb_tree_node_base *v53; // r13
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v54; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v55; // r9
  unsigned __int64 v56; // rdi
  std::_Rb_tree_node_base *v57; // rdx
  unsigned __int64 v58; // rdx
  size_t v59; // rdx
  unsigned __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // r13
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr v63; // r15
  char v64; // dl
  std::_Rb_tree_node_base *v65; // r13
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v66; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v67; // r9
  unsigned __int64 v68; // rdi
  std::_Rb_tree_node_base *v69; // rdx
  unsigned __int64 v70; // rdx
  size_t v71; // rdx
  unsigned __int64 v72; // rcx
  int v73; // eax
  __int64 v74; // r13
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr v75; // r15
  char v76; // dl
  std::_Rb_tree_node_base *v77; // r13
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v78; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v79; // r9
  unsigned __int64 v80; // rdi
  std::_Rb_tree_node_base *v81; // rdx
  unsigned __int64 v82; // rdx
  size_t v83; // rdx
  unsigned __int64 v84; // rcx
  int v85; // eax
  __int64 v86; // r13
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr v87; // r15
  char v88; // dl
  std::_Rb_tree_node_base *v89; // r13
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v90; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v91; // r9
  unsigned __int64 v92; // rdi
  std::_Rb_tree_node_base *v93; // rdx
  unsigned __int64 v94; // rdx
  size_t v95; // rdx
  unsigned __int64 v96; // rcx
  int v97; // eax
  __int64 v98; // r13
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr v99; // r15
  char v100; // dl
  std::_Rb_tree_node_base *v101; // r13
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v102; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v103; // r9
  unsigned __int64 v104; // rdi
  std::_Rb_tree_node_base *v105; // rdx
  unsigned __int64 v106; // rdx
  size_t v107; // rdx
  unsigned __int64 v108; // rcx
  int v109; // eax
  __int64 v110; // r13
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::const_iterator v111; // r15
  char v112; // dl
  std::_Rb_tree_node_base *v113; // r13
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v114; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v115; // r9
  unsigned __int64 v116; // rdi
  std::_Rb_tree_node_base *v117; // rdx
  unsigned __int64 v118; // rdx
  size_t v119; // rdx
  unsigned __int64 v120; // rcx
  int v121; // eax
  __int64 v122; // r13
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr v123; // r12
  char v124; // dl
  std::_Rb_tree_node_base *v125; // r13
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v126; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v127; // r9
  unsigned __int64 v128; // rdi
  std::_Rb_tree_node_base *v129; // rdx
  unsigned __int64 v130; // rdx
  size_t v131; // rdx
  unsigned __int64 v132; // rcx
  int v133; // eax
  __int64 v134; // r13
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr v135; // r12
  char v136; // dl
  std::_Rb_tree_node_base *v137; // r13
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v138; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v139; // r9
  unsigned __int64 v140; // rdi
  std::_Rb_tree_node_base *v141; // rdx
  unsigned __int64 v142; // rdx
  size_t v143; // rdx
  unsigned __int64 v144; // rcx
  int v145; // eax
  __int64 v146; // r13
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr v147; // r12
  char v148; // dl
  std::_Rb_tree_node_base *v149; // r13
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v150; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v151; // r9
  unsigned __int64 v152; // rdi
  std::_Rb_tree_node_base *v153; // rdx
  unsigned __int64 v154; // rdx
  size_t v155; // rdx
  int v156; // eax
  __int64 v157; // r13
  unsigned __int64 v158; // r12
  char v159; // dl
  struct _Unwind_Exception *v160; // rbp
  std::string::pointer M_p; // rdi
  std::string::pointer v162; // rdi
  std::tuple<std::string&&> *__args_1; // [rsp+0h] [rbp-198h]
  std::tuple<> *p_anon_0; // [rsp+8h] [rbp-190h]
  _DWORD *v165; // [rsp+18h] [rbp-180h]
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr __pos; // [rsp+20h] [rbp-178h]
  common::tools::MathExpression::NodeVec *p_suffix_node_vec; // [rsp+28h] [rbp-170h]
  std::tuple<> v168; // [rsp+3Fh] [rbp-159h] BYREF
  std::string v169; // [rsp+40h] [rbp-158h] BYREF
  std::string v170; // [rsp+60h] [rbp-138h] BYREF
  std::string v171; // [rsp+80h] [rbp-118h] BYREF
  std::string v172; // [rsp+A0h] [rbp-F8h] BYREF
  std::string v173; // [rsp+C0h] [rbp-D8h] BYREF
  std::string __k; // [rsp+E0h] [rbp-B8h] BYREF
  std::tuple<std::string&&> v175; // [rsp+100h] [rbp-98h] BYREF

  __args_1 = &v175;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v14 = __asan_stack_malloc_1(96LL);
    if ( v14 )
      __args_1 = (std::tuple<std::string&&> *)v14;
  }
  v6 = __args_1 + 12;
  __args_1->_M_head_impl = (std::string *)1102416563;
  __args_1[1]._M_head_impl = (std::string *)"2 32 8 6 __size 64 8 7 __osize";
  __args_1[2]._M_head_impl = (std::string *)common::tools::MathExpression::MathExpression;
  v165 = (_DWORD *)((unsigned __int64)__args_1 >> 3);
  v165[536862720] = -235802127;
  v165[536862721] = -218959360;
  v165[536862722] = -202116352;
  p_M_parent = &this->operator_map_._M_t._M_impl.std::_Rb_tree_header;
  v8 = *(_BYTE *)(((unsigned __int64)&this->operator_map_._M_t._M_impl.std::_Rb_tree_header >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
  {
    __asan_report_store4(p_M_parent);
    goto LABEL_23;
  }
  this->operator_map_._M_t._M_impl._M_header._M_color = _S_red;
  p_M_parent = &this->operator_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&this->operator_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_store8(p_M_parent);
    goto LABEL_24;
  }
  this->operator_map_._M_t._M_impl._M_header._M_parent = 0LL;
  v9 = &this->operator_map_._M_t._M_impl.std::_Rb_tree_header;
  p_M_parent = &this->operator_map_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&this->operator_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8(p_M_parent);
    goto LABEL_25;
  }
  this->operator_map_._M_t._M_impl._M_header._M_left = &v9->_M_header;
  p_M_parent = &this->operator_map_._M_t._M_impl._M_header._M_right;
  if ( *(_BYTE *)(((unsigned __int64)&this->operator_map_._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8(p_M_parent);
    goto LABEL_26;
  }
  this->operator_map_._M_t._M_impl._M_header._M_right = &v9->_M_header;
  p_M_parent = &this->operator_map_._M_t._M_impl._M_node_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->operator_map_._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_store8(p_M_parent);
LABEL_27:
    __asan_report_store4(p_M_parent);
LABEL_28:
    __asan_report_store1(p_M_parent);
    goto LABEL_29;
  }
  this->operator_map_._M_t._M_impl._M_node_count = 0LL;
  p_M_parent = (void *)&this->logic_operator_priority_;
  v10 = *(_BYTE *)(((unsigned __int64)&this->logic_operator_priority_ >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_27;
  this->logic_operator_priority_ = 3;
  p_M_parent = &this->is_init_;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000);
  if ( v11 <= (((unsigned __int8)this + 52) & 7) && v11 )
    goto LABEL_28;
  this->is_init_ = 0;
  p_M_parent = &this->original_expression_str_;
  p_anon_0 = (std::tuple<> *)&this->original_expression_str_._anon_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->original_expression_str_ >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_store8(p_M_parent);
    goto LABEL_30;
  }
  this->original_expression_str_._M_dataplus._M_p = (std::string::pointer)p_anon_0;
  p_M_parent = &this->original_expression_str_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->original_expression_str_._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_store8(p_M_parent);
LABEL_31:
    __asan_report_store1(p_M_parent);
    goto LABEL_32;
  }
  this->original_expression_str_._M_string_length = 0LL;
  p_M_parent = &this->original_expression_str_._anon_0;
  v12 = *(_BYTE *)(((unsigned __int64)&this->original_expression_str_._anon_0 >> 3) + 0x7FFF8000);
  if ( v12 <= (((unsigned __int8)this + 72) & 7) && v12 )
    goto LABEL_31;
  this->original_expression_str_._anon_0._M_local_buf[0] = 0;
  p_suffix_node_vec = &this->suffix_node_vec_;
  if ( *(_BYTE *)(((unsigned __int64)&this->suffix_node_vec_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    p_M_start = &p_suffix_node_vec->_M_impl._M_start;
    __asan_report_store8(p_suffix_node_vec);
    goto LABEL_33;
  }
  this->suffix_node_vec_._M_impl._M_start = 0LL;
  p_M_start = &this->suffix_node_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->suffix_node_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_store8(p_M_start);
    goto LABEL_34;
  }
  this->suffix_node_vec_._M_impl._M_finish = 0LL;
  p_M_start = &this->suffix_node_vec_._M_impl._M_end_of_storage;
  if ( !*(_BYTE *)(((unsigned __int64)&this->suffix_node_vec_._M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
  {
    this->suffix_node_vec_._M_impl._M_end_of_storage = 0LL;
    __k._M_dataplus._M_p = __k._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&__k, "||", "", v1);
    goto LABEL_35;
  }
LABEL_34:
  __asan_report_store8(p_M_start);
LABEL_35:
  p_M_header = &this->operator_map_._M_t._M_impl._M_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->operator_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->operator_map_._M_t._M_impl._M_header._M_parent);
LABEL_50:
    v18 = (unsigned __int64)v19;
    v16._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)__asan_report_load8(v19);
    goto LABEL_51;
  }
  v16._M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_lower_bound(
                  &this->operator_map_._M_t,
                  (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type)this->operator_map_._M_t._M_impl._M_header._M_parent,
                  &this->operator_map_._M_t._M_impl._M_header,
                  &__k)._M_node;
  M_node = v16._M_node;
  v4 = v16._M_node;
  if ( p_M_header == v16._M_node )
  {
LABEL_48:
    __args_1[8]._M_head_impl = &__k;
    M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string&&>,std::tuple<>>(
               &this->operator_map_._M_t,
               (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::const_iterator)v4,
               &std::piecewise_construct,
               __args_1 + 8,
               &v168,
               (const std::piecewise_construct_t *)v17._M_node,
               __args_1,
               p_anon_0)._M_node;
    goto LABEL_56;
  }
  v18 = (unsigned __int64)&v16._M_node[1];
  p_M_header = (std::_Rb_tree_node_base *)__k._M_string_length;
  __args_1[4]._M_head_impl = (std::string *)__k._M_string_length;
  v19 = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)((char *)v16._M_node + 40);
  if ( *(_BYTE *)(((unsigned __int64)&v16._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
    goto LABEL_50;
  M_parent = v16._M_node[1]._M_parent;
  __args_1[8]._M_head_impl = (std::string *)M_parent;
  if ( p_M_header <= M_parent )
  {
    v20 = (unsigned __int64)&__args_1[4];
    goto LABEL_40;
  }
LABEL_51:
  v20 = (unsigned __int64)&__args_1[8];
LABEL_40:
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
    v18 = v20;
    __asan_report_load8(v20);
    goto LABEL_53;
  }
  v21 = *(_QWORD *)v20;
  v22 = v18 >> 3;
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_load8(v18);
    goto LABEL_54;
  }
  if ( !v21 || (v23 = memcmp(__k._M_dataplus._M_p, *(const void **)&v16._M_node[1]._M_color, v21)) == 0 )
  {
    v24 = (char *)p_M_header - (char *)M_parent;
    if ( v24 <= 0x7FFFFFFF )
    {
      if ( v24 < (__int64)0xFFFFFFFF80000000LL )
        v23 = 0x80000000;
      else
        v23 = v24;
      goto LABEL_47;
    }
LABEL_54:
    v23 = 0x7FFFFFFF;
  }
LABEL_47:
  if ( v23 < 0 )
    goto LABEL_48;
LABEL_56:
  v25 = M_node + 2;
  v26 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v25 & 7) + 3) >= v26 && v26 )
  {
    __asan_report_store4(v25);
  }
  else
  {
    v25->_M_color = _S_black;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__k._M_dataplus._M_p != &__k._anon_0 )
      operator delete(__k._M_dataplus._M_p);
    __k._M_dataplus._M_p = __k._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&__k, "&&", "", (std::forward_iterator_tag)v22);
  }
  M_string_length = &this->operator_map_._M_t._M_impl._M_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->operator_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->operator_map_._M_t._M_impl._M_header._M_parent);
LABEL_77:
    v30 = (unsigned __int64)v31;
    v28._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)__asan_report_load8(v31);
    goto LABEL_78;
  }
  v28._M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_lower_bound(
                  &this->operator_map_._M_t,
                  (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type)this->operator_map_._M_t._M_impl._M_header._M_parent,
                  &this->operator_map_._M_t._M_impl._M_header,
                  &__k)._M_node;
  v25 = v28._M_node;
  v4 = v28._M_node;
  if ( M_string_length == v28._M_node )
  {
LABEL_75:
    v6[-4]._M_head_impl = &__k;
    v25 = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string&&>,std::tuple<>>(
            &this->operator_map_._M_t,
            (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::const_iterator)v4,
            &std::piecewise_construct,
            v6 - 4,
            &v168,
            (const std::piecewise_construct_t *)v29._M_node,
            __args_1,
            p_anon_0)._M_node;
    goto LABEL_83;
  }
  v30 = (unsigned __int64)&v28._M_node[1];
  M_string_length = (std::_Rb_tree_node_base *)__k._M_string_length;
  v6[-8]._M_head_impl = (std::string *)__k._M_string_length;
  v31 = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)((char *)v28._M_node + 40);
  if ( *(_BYTE *)(((unsigned __int64)&v28._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
    goto LABEL_77;
  M_parent = v28._M_node[1]._M_parent;
  v6[-4]._M_head_impl = (std::string *)M_parent;
  if ( M_string_length <= M_parent )
  {
    v32 = (unsigned __int64)&v6[-8];
    goto LABEL_67;
  }
LABEL_78:
  v32 = (unsigned __int64)&v6[-4];
LABEL_67:
  if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
  {
    v30 = v32;
    __asan_report_load8(v32);
    goto LABEL_80;
  }
  v33 = *(_QWORD *)v32;
  v34 = v30 >> 3;
  if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
  {
LABEL_80:
    __asan_report_load8(v30);
    goto LABEL_81;
  }
  if ( !v33 || (v35 = memcmp(__k._M_dataplus._M_p, *(const void **)&v28._M_node[1]._M_color, v33)) == 0 )
  {
    v36 = (char *)M_string_length - (char *)M_parent;
    if ( v36 <= 0x7FFFFFFF )
    {
      if ( v36 < (__int64)0xFFFFFFFF80000000LL )
        v35 = 0x80000000;
      else
        v35 = v36;
      goto LABEL_74;
    }
LABEL_81:
    v35 = 0x7FFFFFFF;
  }
LABEL_74:
  if ( v35 < 0 )
    goto LABEL_75;
LABEL_83:
  logic_operator_priority = (unsigned __int64)&v25[2];
  v38 = *(_BYTE *)((logic_operator_priority >> 3) + 0x7FFF8000);
  if ( (char)((logic_operator_priority & 7) + 3) >= v38 && v38 )
  {
    p_logic_operator_priority = (const uint32_t *)logic_operator_priority;
    __asan_report_store4(logic_operator_priority);
  }
  else
  {
    *(_DWORD *)logic_operator_priority = 2;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__k._M_dataplus._M_p != &__k._anon_0 )
      operator delete(__k._M_dataplus._M_p);
    p_logic_operator_priority = &this->logic_operator_priority_;
    v40 = *(_BYTE *)(((unsigned __int64)&this->logic_operator_priority_ >> 3) + 0x7FFF8000);
    if ( !v40 || v40 > 3 )
    {
      logic_operator_priority = this->logic_operator_priority_;
      __k._M_dataplus._M_p = __k._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&__k, "!=", "", (std::forward_iterator_tag)v34);
      goto LABEL_92;
    }
  }
  __asan_report_load4(p_logic_operator_priority);
LABEL_92:
  v41 = &this->operator_map_._M_t._M_impl._M_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->operator_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->operator_map_._M_t._M_impl._M_header._M_parent);
LABEL_107:
    v44 = (unsigned __int64)v45;
    v42._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)__asan_report_load8(v45);
    goto LABEL_108;
  }
  v42._M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_lower_bound(
                  &this->operator_map_._M_t,
                  (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type)this->operator_map_._M_t._M_impl._M_header._M_parent,
                  &this->operator_map_._M_t._M_impl._M_header,
                  &__k)._M_node;
  v4 = v42._M_node;
  __pos = v42._M_node;
  if ( v41 == v42._M_node )
  {
LABEL_105:
    v6[-4]._M_head_impl = &__k;
    v4 = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string&&>,std::tuple<>>(
           &this->operator_map_._M_t,
           (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::const_iterator)__pos,
           &std::piecewise_construct,
           v6 - 4,
           &v168,
           (const std::piecewise_construct_t *)v43._M_node,
           __args_1,
           p_anon_0)._M_node;
    goto LABEL_113;
  }
  v44 = (unsigned __int64)&v42._M_node[1];
  v41 = (std::_Rb_tree_node_base *)__k._M_string_length;
  v6[-8]._M_head_impl = (std::string *)__k._M_string_length;
  v45 = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)((char *)v42._M_node + 40);
  if ( *(_BYTE *)(((unsigned __int64)&v42._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
    goto LABEL_107;
  M_parent = v42._M_node[1]._M_parent;
  v6[-4]._M_head_impl = (std::string *)M_parent;
  if ( v41 <= M_parent )
  {
    v46 = (unsigned __int64)&v6[-8];
    goto LABEL_97;
  }
LABEL_108:
  v46 = (unsigned __int64)&v6[-4];
LABEL_97:
  if ( *(_BYTE *)((v46 >> 3) + 0x7FFF8000) )
  {
    v44 = v46;
    __asan_report_load8(v46);
    goto LABEL_110;
  }
  v47 = *(_QWORD *)v46;
  v48 = v44 >> 3;
  if ( *(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
  {
LABEL_110:
    __asan_report_load8(v44);
    goto LABEL_111;
  }
  if ( !v47 || (v49 = memcmp(__k._M_dataplus._M_p, *(const void **)&v42._M_node[1]._M_color, v47)) == 0 )
  {
    v50 = (char *)v41 - (char *)M_parent;
    if ( v50 <= 0x7FFFFFFF )
    {
      if ( v50 < (__int64)0xFFFFFFFF80000000LL )
        v49 = 0x80000000;
      else
        v49 = v50;
      goto LABEL_104;
    }
LABEL_111:
    v49 = 0x7FFFFFFF;
  }
LABEL_104:
  if ( v49 < 0 )
    goto LABEL_105;
LABEL_113:
  v51 = v4 + 2;
  v52 = *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v51 & 7) + 3) >= v52 && v52 )
  {
    __asan_report_store4(v51);
  }
  else
  {
    v51->_M_color = logic_operator_priority;
    v173._M_dataplus._M_p = v173._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v173, "==", "", (std::forward_iterator_tag)v48);
  }
  v53 = &this->operator_map_._M_t._M_impl._M_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->operator_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->operator_map_._M_t._M_impl._M_header._M_parent);
LABEL_132:
    v56 = (unsigned __int64)v57;
    v54._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)__asan_report_load8(v57);
    goto LABEL_133;
  }
  v54._M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_lower_bound(
                  &this->operator_map_._M_t,
                  (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type)this->operator_map_._M_t._M_impl._M_header._M_parent,
                  &this->operator_map_._M_t._M_impl._M_header,
                  &v173)._M_node;
  v51 = v54._M_node;
  __pos = v54._M_node;
  if ( v53 == v54._M_node )
  {
LABEL_130:
    v6[-4]._M_head_impl = &v173;
    v51 = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string&&>,std::tuple<>>(
            &this->operator_map_._M_t,
            (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::const_iterator)__pos,
            &std::piecewise_construct,
            v6 - 4,
            &v168,
            (const std::piecewise_construct_t *)v55._M_node,
            __args_1,
            p_anon_0)._M_node;
    goto LABEL_138;
  }
  v56 = (unsigned __int64)&v54._M_node[1];
  v53 = (std::_Rb_tree_node_base *)v173._M_string_length;
  v6[-8]._M_head_impl = (std::string *)v173._M_string_length;
  v57 = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)((char *)v54._M_node + 40);
  if ( *(_BYTE *)(((unsigned __int64)&v54._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
    goto LABEL_132;
  M_parent = v54._M_node[1]._M_parent;
  v6[-4]._M_head_impl = (std::string *)M_parent;
  if ( v53 <= M_parent )
  {
    v58 = (unsigned __int64)&v6[-8];
    goto LABEL_122;
  }
LABEL_133:
  v58 = (unsigned __int64)&v6[-4];
LABEL_122:
  if ( *(_BYTE *)((v58 >> 3) + 0x7FFF8000) )
  {
    v56 = v58;
    __asan_report_load8(v58);
    goto LABEL_135;
  }
  v59 = *(_QWORD *)v58;
  v60 = v56 >> 3;
  if ( *(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
  {
LABEL_135:
    __asan_report_load8(v56);
    goto LABEL_136;
  }
  if ( !v59 || (v61 = memcmp(v173._M_dataplus._M_p, *(const void **)&v54._M_node[1]._M_color, v59)) == 0 )
  {
    v62 = (char *)v53 - (char *)M_parent;
    if ( v62 <= 0x7FFFFFFF )
    {
      if ( v62 < (__int64)0xFFFFFFFF80000000LL )
        v61 = 0x80000000;
      else
        v61 = v62;
      goto LABEL_129;
    }
LABEL_136:
    v61 = 0x7FFFFFFF;
  }
LABEL_129:
  if ( v61 < 0 )
    goto LABEL_130;
LABEL_138:
  v63 = v51 + 2;
  v64 = *(_BYTE *)(((unsigned __int64)v63 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v63 & 7) + 3) >= v64 && v64 )
  {
    __asan_report_store4(v63);
  }
  else
  {
    v63->_M_color = logic_operator_priority;
    v172._M_dataplus._M_p = v172._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v172, "<=", "", (std::forward_iterator_tag)v60);
  }
  v65 = &this->operator_map_._M_t._M_impl._M_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->operator_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->operator_map_._M_t._M_impl._M_header._M_parent);
LABEL_157:
    v68 = (unsigned __int64)v69;
    v66._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)__asan_report_load8(v69);
    goto LABEL_158;
  }
  v66._M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_lower_bound(
                  &this->operator_map_._M_t,
                  (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type)this->operator_map_._M_t._M_impl._M_header._M_parent,
                  &this->operator_map_._M_t._M_impl._M_header,
                  &v172)._M_node;
  v63 = v66._M_node;
  __pos = v66._M_node;
  if ( v65 == v66._M_node )
  {
LABEL_155:
    v6[-4]._M_head_impl = &v172;
    v63 = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string&&>,std::tuple<>>(
            &this->operator_map_._M_t,
            (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::const_iterator)__pos,
            &std::piecewise_construct,
            v6 - 4,
            &v168,
            (const std::piecewise_construct_t *)v67._M_node,
            __args_1,
            p_anon_0)._M_node;
    goto LABEL_163;
  }
  v68 = (unsigned __int64)&v66._M_node[1];
  v65 = (std::_Rb_tree_node_base *)v172._M_string_length;
  v6[-8]._M_head_impl = (std::string *)v172._M_string_length;
  v69 = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)((char *)v66._M_node + 40);
  if ( *(_BYTE *)(((unsigned __int64)&v66._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
    goto LABEL_157;
  M_parent = v66._M_node[1]._M_parent;
  v6[-4]._M_head_impl = (std::string *)M_parent;
  if ( v65 <= M_parent )
  {
    v70 = (unsigned __int64)&v6[-8];
    goto LABEL_147;
  }
LABEL_158:
  v70 = (unsigned __int64)&v6[-4];
LABEL_147:
  if ( *(_BYTE *)((v70 >> 3) + 0x7FFF8000) )
  {
    v68 = v70;
    __asan_report_load8(v70);
    goto LABEL_160;
  }
  v71 = *(_QWORD *)v70;
  v72 = v68 >> 3;
  if ( *(_BYTE *)((v68 >> 3) + 0x7FFF8000) )
  {
LABEL_160:
    __asan_report_load8(v68);
    goto LABEL_161;
  }
  if ( !v71 || (v73 = memcmp(v172._M_dataplus._M_p, *(const void **)&v66._M_node[1]._M_color, v71)) == 0 )
  {
    v74 = (char *)v65 - (char *)M_parent;
    if ( v74 <= 0x7FFFFFFF )
    {
      if ( v74 < (__int64)0xFFFFFFFF80000000LL )
        v73 = 0x80000000;
      else
        v73 = v74;
      goto LABEL_154;
    }
LABEL_161:
    v73 = 0x7FFFFFFF;
  }
LABEL_154:
  if ( v73 < 0 )
    goto LABEL_155;
LABEL_163:
  v75 = v63 + 2;
  v76 = *(_BYTE *)(((unsigned __int64)v75 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v75 & 7) + 3) >= v76 && v76 )
  {
    __asan_report_store4(v75);
  }
  else
  {
    v75->_M_color = logic_operator_priority;
    v171._M_dataplus._M_p = v171._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v171, "<", "", (std::forward_iterator_tag)v72);
  }
  v77 = &this->operator_map_._M_t._M_impl._M_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->operator_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->operator_map_._M_t._M_impl._M_header._M_parent);
LABEL_182:
    v80 = (unsigned __int64)v81;
    v78._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)__asan_report_load8(v81);
    goto LABEL_183;
  }
  v78._M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_lower_bound(
                  &this->operator_map_._M_t,
                  (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type)this->operator_map_._M_t._M_impl._M_header._M_parent,
                  &this->operator_map_._M_t._M_impl._M_header,
                  &v171)._M_node;
  v75 = v78._M_node;
  __pos = v78._M_node;
  if ( v77 == v78._M_node )
  {
LABEL_180:
    v6[-4]._M_head_impl = &v171;
    v75 = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string&&>,std::tuple<>>(
            &this->operator_map_._M_t,
            (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::const_iterator)__pos,
            &std::piecewise_construct,
            v6 - 4,
            &v168,
            (const std::piecewise_construct_t *)v79._M_node,
            __args_1,
            p_anon_0)._M_node;
    goto LABEL_188;
  }
  v80 = (unsigned __int64)&v78._M_node[1];
  v77 = (std::_Rb_tree_node_base *)v171._M_string_length;
  v6[-8]._M_head_impl = (std::string *)v171._M_string_length;
  v81 = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)((char *)v78._M_node + 40);
  if ( *(_BYTE *)(((unsigned __int64)&v78._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
    goto LABEL_182;
  M_parent = v78._M_node[1]._M_parent;
  v6[-4]._M_head_impl = (std::string *)M_parent;
  if ( v77 <= M_parent )
  {
    v82 = (unsigned __int64)&v6[-8];
    goto LABEL_172;
  }
LABEL_183:
  v82 = (unsigned __int64)&v6[-4];
LABEL_172:
  if ( *(_BYTE *)((v82 >> 3) + 0x7FFF8000) )
  {
    v80 = v82;
    __asan_report_load8(v82);
    goto LABEL_185;
  }
  v83 = *(_QWORD *)v82;
  v84 = v80 >> 3;
  if ( *(_BYTE *)((v80 >> 3) + 0x7FFF8000) )
  {
LABEL_185:
    __asan_report_load8(v80);
    goto LABEL_186;
  }
  if ( !v83 || (v85 = memcmp(v171._M_dataplus._M_p, *(const void **)&v78._M_node[1]._M_color, v83)) == 0 )
  {
    v86 = (char *)v77 - (char *)M_parent;
    if ( v86 <= 0x7FFFFFFF )
    {
      if ( v86 < (__int64)0xFFFFFFFF80000000LL )
        v85 = 0x80000000;
      else
        v85 = v86;
      goto LABEL_179;
    }
LABEL_186:
    v85 = 0x7FFFFFFF;
  }
LABEL_179:
  if ( v85 < 0 )
    goto LABEL_180;
LABEL_188:
  v87 = v75 + 2;
  v88 = *(_BYTE *)(((unsigned __int64)v87 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v87 & 7) + 3) >= v88 && v88 )
  {
    __asan_report_store4(v87);
  }
  else
  {
    v87->_M_color = logic_operator_priority;
    v170._M_dataplus._M_p = v170._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v170, ">=", "", (std::forward_iterator_tag)v84);
  }
  v89 = &this->operator_map_._M_t._M_impl._M_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->operator_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->operator_map_._M_t._M_impl._M_header._M_parent);
LABEL_207:
    v92 = (unsigned __int64)v93;
    v90._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)__asan_report_load8(v93);
    goto LABEL_208;
  }
  v90._M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_lower_bound(
                  &this->operator_map_._M_t,
                  (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type)this->operator_map_._M_t._M_impl._M_header._M_parent,
                  &this->operator_map_._M_t._M_impl._M_header,
                  &v170)._M_node;
  v87 = v90._M_node;
  __pos = v90._M_node;
  if ( v89 == v90._M_node )
  {
LABEL_205:
    v6[-4]._M_head_impl = &v170;
    v87 = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string&&>,std::tuple<>>(
            &this->operator_map_._M_t,
            (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::const_iterator)__pos,
            &std::piecewise_construct,
            v6 - 4,
            &v168,
            (const std::piecewise_construct_t *)v91._M_node,
            __args_1,
            p_anon_0)._M_node;
    goto LABEL_213;
  }
  v92 = (unsigned __int64)&v90._M_node[1];
  v89 = (std::_Rb_tree_node_base *)v170._M_string_length;
  v6[-8]._M_head_impl = (std::string *)v170._M_string_length;
  v93 = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)((char *)v90._M_node + 40);
  if ( *(_BYTE *)(((unsigned __int64)&v90._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
    goto LABEL_207;
  M_parent = v90._M_node[1]._M_parent;
  v6[-4]._M_head_impl = (std::string *)M_parent;
  if ( v89 <= M_parent )
  {
    v94 = (unsigned __int64)&v6[-8];
    goto LABEL_197;
  }
LABEL_208:
  v94 = (unsigned __int64)&v6[-4];
LABEL_197:
  if ( *(_BYTE *)((v94 >> 3) + 0x7FFF8000) )
  {
    v92 = v94;
    __asan_report_load8(v94);
    goto LABEL_210;
  }
  v95 = *(_QWORD *)v94;
  v96 = v92 >> 3;
  if ( *(_BYTE *)((v92 >> 3) + 0x7FFF8000) )
  {
LABEL_210:
    __asan_report_load8(v92);
    goto LABEL_211;
  }
  if ( !v95 || (v97 = memcmp(v170._M_dataplus._M_p, *(const void **)&v90._M_node[1]._M_color, v95)) == 0 )
  {
    v98 = (char *)v89 - (char *)M_parent;
    if ( v98 <= 0x7FFFFFFF )
    {
      if ( v98 < (__int64)0xFFFFFFFF80000000LL )
        v97 = 0x80000000;
      else
        v97 = v98;
      goto LABEL_204;
    }
LABEL_211:
    v97 = 0x7FFFFFFF;
  }
LABEL_204:
  if ( v97 < 0 )
    goto LABEL_205;
LABEL_213:
  v99 = v87 + 2;
  v100 = *(_BYTE *)(((unsigned __int64)v99 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v99 & 7) + 3) >= v100 && v100 )
  {
    __asan_report_store4(v99);
  }
  else
  {
    v99->_M_color = logic_operator_priority;
    v169._M_dataplus._M_p = v169._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v169, ">", "", (std::forward_iterator_tag)v96);
  }
  v101 = &this->operator_map_._M_t._M_impl._M_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->operator_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->operator_map_._M_t._M_impl._M_header._M_parent);
LABEL_232:
    v104 = (unsigned __int64)v105;
    v102._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)__asan_report_load8(v105);
    goto LABEL_233;
  }
  v102._M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_lower_bound(
                   &this->operator_map_._M_t,
                   (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type)this->operator_map_._M_t._M_impl._M_header._M_parent,
                   &this->operator_map_._M_t._M_impl._M_header,
                   &v169)._M_node;
  v99 = v102._M_node;
  __pos = v102._M_node;
  if ( v101 == v102._M_node )
  {
LABEL_230:
    v6[-4]._M_head_impl = &v169;
    v99 = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string&&>,std::tuple<>>(
            &this->operator_map_._M_t,
            (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::const_iterator)__pos,
            &std::piecewise_construct,
            v6 - 4,
            &v168,
            (const std::piecewise_construct_t *)v103._M_node,
            __args_1,
            p_anon_0)._M_node;
    goto LABEL_238;
  }
  v104 = (unsigned __int64)&v102._M_node[1];
  v101 = (std::_Rb_tree_node_base *)v169._M_string_length;
  v6[-8]._M_head_impl = (std::string *)v169._M_string_length;
  v105 = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)((char *)v102._M_node + 40);
  if ( *(_BYTE *)(((unsigned __int64)&v102._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
    goto LABEL_232;
  M_parent = v102._M_node[1]._M_parent;
  v6[-4]._M_head_impl = (std::string *)M_parent;
  if ( v101 <= M_parent )
  {
    v106 = (unsigned __int64)&v6[-8];
    goto LABEL_222;
  }
LABEL_233:
  v106 = (unsigned __int64)&v6[-4];
LABEL_222:
  if ( *(_BYTE *)((v106 >> 3) + 0x7FFF8000) )
  {
    v104 = v106;
    __asan_report_load8(v106);
    goto LABEL_235;
  }
  v107 = *(_QWORD *)v106;
  v108 = v104 >> 3;
  if ( *(_BYTE *)((v104 >> 3) + 0x7FFF8000) )
  {
LABEL_235:
    __asan_report_load8(v104);
    goto LABEL_236;
  }
  if ( !v107 || (v109 = memcmp(v169._M_dataplus._M_p, *(const void **)&v102._M_node[1]._M_color, v107)) == 0 )
  {
    v110 = (char *)v101 - (char *)M_parent;
    if ( v110 <= 0x7FFFFFFF )
    {
      if ( v110 < (__int64)0xFFFFFFFF80000000LL )
        v109 = 0x80000000;
      else
        v109 = v110;
      goto LABEL_229;
    }
LABEL_236:
    v109 = 0x7FFFFFFF;
  }
LABEL_229:
  if ( v109 < 0 )
    goto LABEL_230;
LABEL_238:
  v111._M_node = v99 + 2;
  v112 = *(_BYTE *)(((unsigned __int64)v111._M_node >> 3) + 0x7FFF8000);
  if ( (char)(((__int64)v111._M_node & 7) + 3) >= v112 && v112 )
  {
    __asan_report_store4(v111._M_node);
  }
  else
  {
    v111._M_node->_M_color = logic_operator_priority;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v169._M_dataplus._M_p != &v169._anon_0 )
      operator delete(v169._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v170._M_dataplus._M_p != &v170._anon_0 )
      operator delete(v170._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v171._M_dataplus._M_p != &v171._anon_0 )
      operator delete(v171._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v172._M_dataplus._M_p != &v172._anon_0 )
      operator delete(v172._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v173._M_dataplus._M_p != &v173._anon_0 )
      operator delete(v173._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__k._M_dataplus._M_p != &__k._anon_0 )
      operator delete(__k._M_dataplus._M_p);
    __k._M_dataplus._M_p = __k._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&__k, "-", "", (std::forward_iterator_tag)v108);
  }
  v113 = &this->operator_map_._M_t._M_impl._M_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->operator_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->operator_map_._M_t._M_impl._M_header._M_parent);
LABEL_269:
    v116 = (unsigned __int64)v117;
    v114._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)__asan_report_load8(v117);
    goto LABEL_270;
  }
  v114._M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_lower_bound(
                   &this->operator_map_._M_t,
                   (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type)this->operator_map_._M_t._M_impl._M_header._M_parent,
                   &this->operator_map_._M_t._M_impl._M_header,
                   &__k)._M_node;
  logic_operator_priority = (unsigned __int64)v114._M_node;
  v111._M_node = v114._M_node;
  if ( v113 == v114._M_node )
  {
LABEL_267:
    v6[-4]._M_head_impl = &__k;
    logic_operator_priority = (unsigned __int64)std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string&&>,std::tuple<>>(
                                                  &this->operator_map_._M_t,
                                                  v111,
                                                  &std::piecewise_construct,
                                                  v6 - 4,
                                                  &v168,
                                                  (const std::piecewise_construct_t *)v115._M_node,
                                                  __args_1,
                                                  p_anon_0)._M_node;
    goto LABEL_275;
  }
  v116 = (unsigned __int64)&v114._M_node[1];
  v113 = (std::_Rb_tree_node_base *)__k._M_string_length;
  v6[-8]._M_head_impl = (std::string *)__k._M_string_length;
  v117 = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)((char *)v114._M_node + 40);
  if ( *(_BYTE *)(((unsigned __int64)&v114._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
    goto LABEL_269;
  M_parent = v114._M_node[1]._M_parent;
  v6[-4]._M_head_impl = (std::string *)M_parent;
  if ( v113 <= M_parent )
  {
    v118 = (unsigned __int64)&v6[-8];
    goto LABEL_259;
  }
LABEL_270:
  v118 = (unsigned __int64)&v6[-4];
LABEL_259:
  if ( *(_BYTE *)((v118 >> 3) + 0x7FFF8000) )
  {
    v116 = v118;
    __asan_report_load8(v118);
    goto LABEL_272;
  }
  v119 = *(_QWORD *)v118;
  v120 = v116 >> 3;
  if ( *(_BYTE *)((v116 >> 3) + 0x7FFF8000) )
  {
LABEL_272:
    __asan_report_load8(v116);
    goto LABEL_273;
  }
  if ( !v119 || (v121 = memcmp(__k._M_dataplus._M_p, *(const void **)&v114._M_node[1]._M_color, v119)) == 0 )
  {
    v122 = (char *)v113 - (char *)M_parent;
    if ( v122 <= 0x7FFFFFFF )
    {
      if ( v122 < (__int64)0xFFFFFFFF80000000LL )
        v121 = 0x80000000;
      else
        v121 = v122;
      goto LABEL_266;
    }
LABEL_273:
    v121 = 0x7FFFFFFF;
  }
LABEL_266:
  if ( v121 < 0 )
    goto LABEL_267;
LABEL_275:
  v123 = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)(logic_operator_priority + 64);
  v124 = *(_BYTE *)(((unsigned __int64)v123 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v123 & 7) + 3) >= v124 && v124 )
  {
    __asan_report_store4(v123);
  }
  else
  {
    v123->_M_color = 4;
    v173._M_dataplus._M_p = v173._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v173, "+", "", (std::forward_iterator_tag)v120);
  }
  v125 = &this->operator_map_._M_t._M_impl._M_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->operator_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->operator_map_._M_t._M_impl._M_header._M_parent);
LABEL_294:
    v128 = (unsigned __int64)v129;
    v126._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)__asan_report_load8(v129);
    goto LABEL_295;
  }
  v126._M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_lower_bound(
                   &this->operator_map_._M_t,
                   (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type)this->operator_map_._M_t._M_impl._M_header._M_parent,
                   &this->operator_map_._M_t._M_impl._M_header,
                   &v173)._M_node;
  v123 = v126._M_node;
  v111._M_node = v126._M_node;
  if ( v125 == v126._M_node )
  {
LABEL_292:
    v6[-4]._M_head_impl = &v173;
    v123 = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string&&>,std::tuple<>>(
             &this->operator_map_._M_t,
             v111,
             &std::piecewise_construct,
             v6 - 4,
             &v168,
             (const std::piecewise_construct_t *)v127._M_node,
             __args_1,
             p_anon_0)._M_node;
    goto LABEL_300;
  }
  v128 = (unsigned __int64)&v126._M_node[1];
  v125 = (std::_Rb_tree_node_base *)v173._M_string_length;
  v6[-8]._M_head_impl = (std::string *)v173._M_string_length;
  v129 = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)((char *)v126._M_node + 40);
  if ( *(_BYTE *)(((unsigned __int64)&v126._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
    goto LABEL_294;
  M_parent = v126._M_node[1]._M_parent;
  v6[-4]._M_head_impl = (std::string *)M_parent;
  if ( v125 <= M_parent )
  {
    v130 = (unsigned __int64)&v6[-8];
    goto LABEL_284;
  }
LABEL_295:
  v130 = (unsigned __int64)&v6[-4];
LABEL_284:
  if ( *(_BYTE *)((v130 >> 3) + 0x7FFF8000) )
  {
    v128 = v130;
    __asan_report_load8(v130);
    goto LABEL_297;
  }
  v131 = *(_QWORD *)v130;
  v132 = v128 >> 3;
  if ( *(_BYTE *)((v128 >> 3) + 0x7FFF8000) )
  {
LABEL_297:
    __asan_report_load8(v128);
    goto LABEL_298;
  }
  if ( !v131 || (v133 = memcmp(v173._M_dataplus._M_p, *(const void **)&v126._M_node[1]._M_color, v131)) == 0 )
  {
    v134 = (char *)v125 - (char *)M_parent;
    if ( v134 <= 0x7FFFFFFF )
    {
      if ( v134 < (__int64)0xFFFFFFFF80000000LL )
        v133 = 0x80000000;
      else
        v133 = v134;
      goto LABEL_291;
    }
LABEL_298:
    v133 = 0x7FFFFFFF;
  }
LABEL_291:
  if ( v133 < 0 )
    goto LABEL_292;
LABEL_300:
  v135 = v123 + 2;
  v136 = *(_BYTE *)(((unsigned __int64)v135 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v135 & 7) + 3) >= v136 && v136 )
  {
    __asan_report_store4(v135);
  }
  else
  {
    v135->_M_color = 4;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v173._M_dataplus._M_p != &v173._anon_0 )
      operator delete(v173._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__k._M_dataplus._M_p != &__k._anon_0 )
      operator delete(__k._M_dataplus._M_p);
    __k._M_dataplus._M_p = __k._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&__k, "/", "", (std::forward_iterator_tag)v132);
  }
  v137 = &this->operator_map_._M_t._M_impl._M_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->operator_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->operator_map_._M_t._M_impl._M_header._M_parent);
LABEL_323:
    v140 = (unsigned __int64)v141;
    v138._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)__asan_report_load8(v141);
    goto LABEL_324;
  }
  v138._M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_lower_bound(
                   &this->operator_map_._M_t,
                   (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type)this->operator_map_._M_t._M_impl._M_header._M_parent,
                   &this->operator_map_._M_t._M_impl._M_header,
                   &__k)._M_node;
  v135 = v138._M_node;
  v111._M_node = v138._M_node;
  if ( v137 == v138._M_node )
  {
LABEL_321:
    v6[-4]._M_head_impl = &__k;
    v135 = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string&&>,std::tuple<>>(
             &this->operator_map_._M_t,
             v111,
             &std::piecewise_construct,
             v6 - 4,
             &v168,
             (const std::piecewise_construct_t *)v139._M_node,
             __args_1,
             p_anon_0)._M_node;
    goto LABEL_329;
  }
  v140 = (unsigned __int64)&v138._M_node[1];
  v137 = (std::_Rb_tree_node_base *)__k._M_string_length;
  v6[-8]._M_head_impl = (std::string *)__k._M_string_length;
  v141 = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)((char *)v138._M_node + 40);
  if ( *(_BYTE *)(((unsigned __int64)&v138._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
    goto LABEL_323;
  M_parent = v138._M_node[1]._M_parent;
  v6[-4]._M_head_impl = (std::string *)M_parent;
  if ( v137 <= M_parent )
  {
    v142 = (unsigned __int64)&v6[-8];
    goto LABEL_313;
  }
LABEL_324:
  v142 = (unsigned __int64)&v6[-4];
LABEL_313:
  if ( *(_BYTE *)((v142 >> 3) + 0x7FFF8000) )
  {
    v140 = v142;
    __asan_report_load8(v142);
    goto LABEL_326;
  }
  v143 = *(_QWORD *)v142;
  v144 = v140 >> 3;
  if ( *(_BYTE *)((v140 >> 3) + 0x7FFF8000) )
  {
LABEL_326:
    __asan_report_load8(v140);
    goto LABEL_327;
  }
  if ( !v143 || (v145 = memcmp(__k._M_dataplus._M_p, *(const void **)&v138._M_node[1]._M_color, v143)) == 0 )
  {
    v146 = (char *)v137 - (char *)M_parent;
    if ( v146 <= 0x7FFFFFFF )
    {
      if ( v146 < (__int64)0xFFFFFFFF80000000LL )
        v145 = 0x80000000;
      else
        v145 = v146;
      goto LABEL_320;
    }
LABEL_327:
    v145 = 0x7FFFFFFF;
  }
LABEL_320:
  if ( v145 < 0 )
    goto LABEL_321;
LABEL_329:
  v147 = v135 + 2;
  v148 = *(_BYTE *)(((unsigned __int64)v147 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v147 & 7) + 3) >= v148 && v148 )
  {
    __asan_report_store4(v147);
  }
  else
  {
    v147->_M_color = 5;
    v173._M_dataplus._M_p = v173._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v173, "*", "", (std::forward_iterator_tag)v144);
  }
  v149 = &this->operator_map_._M_t._M_impl._M_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->operator_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->operator_map_._M_t._M_impl._M_header._M_parent);
LABEL_348:
    v152 = (unsigned __int64)v153;
    v150._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)__asan_report_load8(v153);
    goto LABEL_349;
  }
  v150._M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_lower_bound(
                   &this->operator_map_._M_t,
                   (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type)this->operator_map_._M_t._M_impl._M_header._M_parent,
                   &this->operator_map_._M_t._M_impl._M_header,
                   &v173)._M_node;
  v147 = v150._M_node;
  v111._M_node = v150._M_node;
  if ( v149 == v150._M_node )
  {
LABEL_346:
    v6[-4]._M_head_impl = &v173;
    v147 = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string&&>,std::tuple<>>(
             &this->operator_map_._M_t,
             v111,
             &std::piecewise_construct,
             v6 - 4,
             &v168,
             (const std::piecewise_construct_t *)v151._M_node,
             __args_1,
             p_anon_0)._M_node;
    goto LABEL_354;
  }
  v152 = (unsigned __int64)&v150._M_node[1];
  v149 = (std::_Rb_tree_node_base *)v173._M_string_length;
  v6[-8]._M_head_impl = (std::string *)v173._M_string_length;
  v153 = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)((char *)v150._M_node + 40);
  if ( *(_BYTE *)(((unsigned __int64)&v150._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
    goto LABEL_348;
  M_parent = v150._M_node[1]._M_parent;
  v6[-4]._M_head_impl = (std::string *)M_parent;
  if ( v149 <= M_parent )
  {
    v154 = (unsigned __int64)&v6[-8];
    goto LABEL_338;
  }
LABEL_349:
  v154 = (unsigned __int64)&v6[-4];
LABEL_338:
  if ( *(_BYTE *)((v154 >> 3) + 0x7FFF8000) )
  {
    v152 = v154;
    __asan_report_load8(v154);
    goto LABEL_351;
  }
  v155 = *(_QWORD *)v154;
  if ( *(_BYTE *)((v152 >> 3) + 0x7FFF8000) )
  {
LABEL_351:
    __asan_report_load8(v152);
    goto LABEL_352;
  }
  if ( !v155 || (v156 = memcmp(v173._M_dataplus._M_p, *(const void **)&v150._M_node[1]._M_color, v155)) == 0 )
  {
    v157 = (char *)v149 - (char *)M_parent;
    if ( v157 <= 0x7FFFFFFF )
    {
      if ( v157 < (__int64)0xFFFFFFFF80000000LL )
        v156 = 0x80000000;
      else
        v156 = v157;
      goto LABEL_345;
    }
LABEL_352:
    v156 = 0x7FFFFFFF;
  }
LABEL_345:
  if ( v156 < 0 )
    goto LABEL_346;
LABEL_354:
  v158 = (unsigned __int64)&v147[2];
  v159 = *(_BYTE *)((v158 >> 3) + 0x7FFF8000);
  if ( (char)((v158 & 7) + 3) >= v159 && v159 )
  {
    v160 = (struct _Unwind_Exception *)__asan_report_store4(v158);
    M_p = __k._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__k._M_dataplus._M_p == &__k._anon_0 )
      goto LABEL_364;
    while ( 1 )
    {
      operator delete(M_p);
      do
      {
LABEL_364:
        std::vector<common::tools::MathExpressionNode>::~vector(p_suffix_node_vec);
        if ( !*(_BYTE *)(((unsigned __int64)&this->original_expression_str_ >> 3) + 0x7FFF8000) )
        {
          v162 = this->original_expression_str_._M_dataplus._M_p;
          if ( p_anon_0 != (std::tuple<> *)v162 )
            operator delete(v162);
          if ( *(_BYTE *)(((unsigned __int64)&this->operator_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->operator_map_._M_t._M_impl._M_header._M_parent);
          std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_erase(
            &this->operator_map_._M_t,
            (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type)this->operator_map_._M_t._M_impl._M_header._M_parent);
          __asan_handle_no_return(this);
          _Unwind_Resume(v160);
        }
        v160 = (struct _Unwind_Exception *)__asan_report_load8(&this->original_expression_str_);
        M_p = __k._M_dataplus._M_p;
      }
      while ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__k._M_dataplus._M_p == &__k._anon_0 );
    }
  }
  *(_DWORD *)v158 = 5;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v173._M_dataplus._M_p != &v173._anon_0 )
    operator delete(v173._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__k._M_dataplus._M_p != &__k._anon_0 )
    operator delete(__k._M_dataplus._M_p);
  if ( &v175 == __args_1 )
  {
    *((_QWORD *)v165 + 268431360) = 0LL;
    v165[536862722] = 0;
  }
  else
  {
    __args_1->_M_head_impl = (std::string *)1172321806;
    *((_QWORD *)v165 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    v165[536862722] = -168430091;
  }
};

// Line 195: range 0000000019B514E0-0000000019B51AFC
void __fastcall common::tools::MathExpression::~MathExpression(common::tools::MathExpression *const this)
{
  common::tools::MathExpression::NodeVec *p_suffix_node_vec; // r12
  std::_Vector_base<common::tools::MathExpressionNode>::pointer *p_M_finish; // rdi
  common::tools::MathExpressionNode *M_finish; // r13
  common::tools::MathExpressionNode *i; // rbp
  std::_Vector_base<common::tools::MathExpressionNode>::pointer M_start; // rdi
  void *p_original_expression_str; // rdi
  common::tools::MathExpression *M_p; // rdi

  p_suffix_node_vec = &this->suffix_node_vec_;
  p_M_finish = &this->suffix_node_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)p_M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_finish);
    goto LABEL_7;
  }
  M_finish = p_suffix_node_vec->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)p_suffix_node_vec >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_load8(p_suffix_node_vec);
    goto LABEL_8;
  }
  for ( i = this->suffix_node_vec_._M_impl._M_start; M_finish != i; ++i )
    common::tools::MathExpressionNode::~MathExpressionNode(i);
LABEL_8:
  if ( *(_BYTE *)(((unsigned __int64)p_suffix_node_vec >> 3) + 0x7FFF8000) )
  {
    p_original_expression_str = p_suffix_node_vec;
    __asan_report_load8(p_suffix_node_vec);
LABEL_17:
    __asan_report_load8(p_original_expression_str);
    goto LABEL_18;
  }
  M_start = this->suffix_node_vec_._M_impl._M_start;
  if ( M_start )
    operator delete(M_start);
  p_original_expression_str = &this->original_expression_str_;
  if ( *(_BYTE *)(((unsigned __int64)&this->original_expression_str_ >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  M_p = (common::tools::MathExpression *)this->original_expression_str_._M_dataplus._M_p;
  if ( M_p != (common::tools::MathExpression *)&this->original_expression_str_._anon_0 )
    operator delete(M_p);
  p_original_expression_str = &this->operator_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&this->operator_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(p_original_expression_str);
    JUMPOUT(0x19B515BFLL);
  }
  std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_erase(
    &this->operator_map_._M_t,
    (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type)this->operator_map_._M_t._M_impl._M_header._M_parent);
};

// Line 201: range 0000000019B56BFC-0000000019B58182
__int64 __fastcall common::tools::MathExpression::init(common::tools::MathExpression *const this, std::string *a2)
{
  common::tools::MathExpression::NodeVec *p_suffix_node_vec; // r12
  bool *p_is_init; // rdi
  char v5; // al
  int v6; // eax
  __int64 v7; // rax
  const common::tools::MathExpressionNode *v8; // rcx
  void *p_is_const_num_node; // rdi
  char v10; // al
  char v11; // dl
  unsigned int v12; // eax
  std::string *p_M_end_of_storage; // rdi
  std::vector<common::tools::MathExpressionNode>::iterator v14; // rbp
  char v15; // al
  void *p_priority; // rdi
  char v17; // al
  char v18; // dl
  std::vector<common::tools::MathExpressionNode>::iterator v19; // rbp
  std::string *v20; // rdi
  char v21; // al
  void *v22; // rdi
  char v23; // al
  char v24; // dl
  __int64 v25; // rdx
  std::forward_iterator_tag v26; // cl
  void *M_current; // rdi
  char v28; // al
  std::_Vector_base<common::tools::MathExpressionNode>::pointer *v29; // rax
  __int64 v30; // rax
  common::tools::MathExpression::NodeVec *v31; // rdi
  char v32; // al
  char v33; // al
  char v34; // dl
  char v35; // dl
  common::tools::MathExpressionNode *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdi
  char v39; // dl
  std::string *M_finish; // rdi
  char v41; // dl
  common::tools::MathExpressionNode::Type v42; // edx
  char v43; // al
  std::string *v44; // rdi
  char v45; // al
  void *v46; // rdi
  char v47; // al
  char v48; // dl
  std::string *v49; // rdi
  char v50; // al
  char v51; // dl
  common::tools::MathExpressionNode *v52; // rdi
  const common::tools::MathExpressionNode *v53; // rcx
  std::vector<common::tools::MathExpressionNode>::iterator v54; // rbp
  char v55; // al
  void *v56; // rdi
  char v57; // al
  char v58; // dl
  __int64 v59; // rax
  void *p_M_string_length; // rdi
  char v61; // dl
  common::tools::MathExpressionNode *v62; // rbp
  common::tools::MathExpressionNode *i; // rbx
  void *p_num_value; // rdi
  char v65; // al
  char v66; // dl
  common::tools::MathExpressionNode *v67; // rdi
  const common::tools::MathExpressionNode *v68; // rcx
  std::string *p_M_finish; // rdi
  std::vector<common::tools::MathExpressionNode>::iterator v70; // rbp
  char v71; // al
  void *p_bool_value; // rdi
  char v73; // al
  char v74; // dl
  __int64 v75; // rax
  void *p_str; // rdi
  char v77; // dl
  char v78; // al
  void *v79; // rdi
  common::tools::MathExpressionNode *v80; // rbp
  common::tools::MathExpressionNode *j; // rbx
  void *v82; // rdi
  size_t idx; // [rsp+8h] [rbp-1E0h]
  unsigned __int64 v85; // [rsp+10h] [rbp-1D8h]
  unsigned int v86; // [rsp+1Ch] [rbp-1CCh]
  _DWORD *v87; // [rsp+20h] [rbp-1C8h]
  common::milog::MiLogStream v88; // [rsp+30h] [rbp-1B8h] BYREF
  char v89[408]; // [rsp+50h] [rbp-198h] BYREF

  v85 = (unsigned __int64)v89;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(352LL);
    if ( v7 )
      v85 = v7;
  }
  *(_QWORD *)v85 = 1102416563LL;
  *(_QWORD *)(v85 + 8) = "4 32 24 18 infix_node_vec:220 96 24 21 operator_node_vec:236 160 56 8 node:240 256 56 12 pop_node:316";
  *(_QWORD *)(v85 + 16) = common::tools::MathExpression::init;
  v87 = (_DWORD *)(v85 >> 3);
  v87[536862720] = -235802127;
  v87[536862721] = -234881024;
  v87[536862722] = -218959118;
  v87[536862723] = -234881024;
  v87[536862724] = -218959118;
  v87[536862726] = -234881024;
  v87[536862727] = -218959118;
  v87[536862729] = -218103808;
  v87[536862730] = -202116109;
  p_is_init = &this->is_init_;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000);
  if ( v5 <= (((unsigned __int8)this + 52) & 7) && v5 )
  {
    __asan_report_load1(p_is_init);
    goto LABEL_10;
  }
  if ( this->is_init_ )
  {
LABEL_10:
    common::milog::MiLogStream::MiLogStream(
      &v88,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/math_expression.cpp",
      "init",
      205);
    common::milog::MiLogStream::operator()(&v88, "can not re init");
    common::milog::MiLogStream::~MiLogStream(&v88);
    v86 = -1;
    goto LABEL_269;
  }
  std::string::_M_assign(&this->original_expression_str_, a2);
  if ( common::tools::MathExpression::expressionRewrite(this, a2) )
  {
    common::milog::MiLogStream::MiLogStream(
      &v88,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/math_expression.cpp",
      "init",
      215);
    common::milog::MiLogStream::operator()(&v88, "rewrite failed");
    common::milog::MiLogStream::~MiLogStream(&v88);
    v86 = -1;
    goto LABEL_269;
  }
  *(_QWORD *)(v85 + 32) = 0LL;
  *(_QWORD *)(v85 + 40) = 0LL;
  *(_QWORD *)(v85 + 48) = 0LL;
  v6 = common::tools::MathExpression::splitExpressionToNodeVec(
         this,
         a2,
         (common::tools::MathExpression::NodeVec *)(v85 + 32));
  v86 = v6;
  if ( v6 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v88,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/math_expression.cpp",
      "init",
      223);
    if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
      __asan_report_load8(a2);
    else
      common::milog::MiLogStream::operator()(&v88, "split expression '%s' failed", a2->_M_dataplus._M_p);
    common::milog::MiLogStream::~MiLogStream(&v88);
    v86 = -1;
    goto LABEL_264;
  }
  *(_QWORD *)(v85 + 96) = 0LL;
  *(_QWORD *)(v85 + 104) = 0LL;
  *(_QWORD *)(v85 + 112) = 0LL;
  idx = 0LL;
LABEL_77:
  v25 = *(_QWORD *)(v85 + 32);
  v26.gap0[0] = idx;
  if ( idx >= 0x6DB6DB6DB6DB6DB7LL * ((*(_QWORD *)(v85 + 40) - v25) >> 3) )
  {
    while ( 1 )
    {
      v75 = *(_QWORD *)(v85 + 104);
      if ( v75 == *(_QWORD *)(v85 + 96) )
      {
        v78 = *(_BYTE *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000);
        if ( v78 > (((unsigned __int8)this + 52) & 7) || !v78 )
        {
          this->is_init_ = 1;
          goto LABEL_207;
        }
        __asan_report_store1(&this->is_init_);
        goto LABEL_262;
      }
      v70._M_current = (common::tools::MathExpressionNode *)(v75 - 56);
      p_str = (void *)(v75 - 56);
      v77 = *(_BYTE *)(((unsigned __int64)(v75 - 56) >> 3) + 0x7FFF8000);
      if ( v77 )
      {
        if ( v77 <= 3 )
          break;
      }
      *(_DWORD *)(v85 + 256) = *(_DWORD *)(v75 - 56);
      *(_QWORD *)(v85 + 264) = v85 + 280;
      p_str = &v70._M_current->str_;
      if ( *(_BYTE *)(((unsigned __int64)&v70._M_current->str_ >> 3) + 0x7FFF8000) )
        goto LABEL_211;
      p_str = &v70._M_current->str_._M_string_length;
      if ( *(_BYTE *)(((unsigned __int64)&v70._M_current->str_._M_string_length >> 3) + 0x7FFF8000) )
        goto LABEL_212;
      std::string::_M_construct<char *>(
        (std::string *const)(v85 + 264),
        v70._M_current->str_._M_dataplus._M_p,
        &v70._M_current->str_._M_dataplus._M_p[v70._M_current->str_._M_string_length],
        v26);
LABEL_213:
      p_num_value = &v70._M_current->num_value_;
      if ( *(_BYTE *)(((unsigned __int64)&v70._M_current->num_value_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_num_value);
LABEL_228:
        __asan_report_load1(p_num_value);
LABEL_229:
        __asan_report_load1(p_num_value);
LABEL_230:
        __asan_report_load4(p_num_value);
LABEL_231:
        common::milog::MiLogStream::MiLogStream(
          &v88,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/math_expression.cpp",
          "init",
          322);
        if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
          __asan_report_load8(a2);
        else
          common::milog::MiLogStream::operator()(&v88, "find too much '(' in '%s'", a2->_M_dataplus._M_p);
        common::milog::MiLogStream::~MiLogStream(&v88);
        common::tools::MathExpressionNode::~MathExpressionNode((common::tools::MathExpressionNode *const)(v85 + 256));
        v86 = -1;
        goto LABEL_207;
      }
      *(double *)(v85 + 296) = v70._M_current->num_value_;
      p_num_value = &v70._M_current->bool_value_;
      if ( *(char *)(((unsigned __int64)&v70._M_current->bool_value_ >> 3) + 0x7FFF8000) < 0 )
        goto LABEL_228;
      *(_BYTE *)(v85 + 304) = v70._M_current->bool_value_;
      p_num_value = &v70._M_current->is_const_num_node_;
      v65 = *(_BYTE *)(((unsigned __int64)&v70._M_current->is_const_num_node_ >> 3) + 0x7FFF8000);
      if ( v65 <= ((LOBYTE(v70._M_current) + 49) & 7) && v65 )
        goto LABEL_229;
      *(_BYTE *)(v85 + 305) = v70._M_current->is_const_num_node_;
      p_num_value = &v70._M_current->priority_;
      v66 = *(_BYTE *)(((unsigned __int64)&v70._M_current->priority_ >> 3) + 0x7FFF8000);
      if ( (char)(((LOBYTE(v70._M_current) + 52) & 7) + 3) >= v66 && v66 )
        goto LABEL_230;
      *(_DWORD *)(v85 + 308) = v70._M_current->priority_;
      v67 = (common::tools::MathExpressionNode *)(*(_QWORD *)(v85 + 104) - 56LL);
      *(_QWORD *)(v85 + 104) = v67;
      common::tools::MathExpressionNode::~MathExpressionNode(v67);
      if ( *(_DWORD *)(v85 + 256) == 4 )
        goto LABEL_231;
      p_M_finish = (std::string *)&this->suffix_node_vec_._M_impl._M_finish;
      if ( *(_BYTE *)(((unsigned __int64)&this->suffix_node_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_M_finish);
LABEL_236:
        __asan_report_load8(p_M_finish);
        goto LABEL_237;
      }
      v70._M_current = this->suffix_node_vec_._M_impl._M_finish;
      p_M_finish = (std::string *)&this->suffix_node_vec_._M_impl._M_end_of_storage;
      if ( *(_BYTE *)(((unsigned __int64)&this->suffix_node_vec_._M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
        goto LABEL_236;
      if ( v70._M_current != this->suffix_node_vec_._M_impl._M_end_of_storage )
      {
        p_M_finish = (std::string *)this->suffix_node_vec_._M_impl._M_finish;
        v71 = *(_BYTE *)(((unsigned __int64)v70._M_current >> 3) + 0x7FFF8000);
        if ( !v71 || v71 > 3 )
        {
          v70._M_current->type_ = *(_DWORD *)(v85 + 256);
          p_M_finish = &v70._M_current->str_;
          if ( !*(_BYTE *)(((unsigned __int64)&v70._M_current->str_ >> 3) + 0x7FFF8000) )
          {
            v70._M_current->str_._M_dataplus._M_p = v70._M_current->str_._anon_0._M_local_buf;
            std::string::_M_construct<char *>(
              p_M_finish,
              *(char **)(v85 + 264),
              (char *)(*(_QWORD *)(v85 + 272) + *(_QWORD *)(v85 + 264)),
              (std::forward_iterator_tag)v68);
            goto LABEL_239;
          }
LABEL_238:
          __asan_report_store8(p_M_finish);
LABEL_239:
          p_bool_value = &v70._M_current->num_value_;
          if ( *(_BYTE *)(((unsigned __int64)&v70._M_current->num_value_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_store8(p_bool_value);
          }
          else
          {
            v70._M_current->num_value_ = *(double *)(v85 + 296);
            p_bool_value = &v70._M_current->bool_value_;
            if ( *(char *)(((unsigned __int64)&v70._M_current->bool_value_ >> 3) + 0x7FFF8000) >= 0 )
            {
              v70._M_current->bool_value_ = *(_BYTE *)(v85 + 304);
              p_bool_value = &v70._M_current->is_const_num_node_;
              v73 = *(_BYTE *)(((unsigned __int64)&v70._M_current->is_const_num_node_ >> 3) + 0x7FFF8000);
              if ( v73 > ((LOBYTE(v70._M_current) + 49) & 7) || !v73 )
              {
                v70._M_current->is_const_num_node_ = *(_BYTE *)(v85 + 305);
                p_bool_value = &v70._M_current->priority_;
                v74 = *(_BYTE *)(((unsigned __int64)&v70._M_current->priority_ >> 3) + 0x7FFF8000);
                if ( (char)(((LOBYTE(v70._M_current) + 52) & 7) + 3) < v74 || !v74 )
                {
                  v70._M_current->priority_ = *(_DWORD *)(v85 + 308);
                  ++this->suffix_node_vec_._M_impl._M_finish;
                  goto LABEL_246;
                }
                goto LABEL_256;
              }
LABEL_255:
              __asan_report_store1(p_bool_value);
LABEL_256:
              __asan_report_store4(p_bool_value);
              goto LABEL_257;
            }
          }
          __asan_report_store1(p_bool_value);
          goto LABEL_255;
        }
LABEL_237:
        __asan_report_store4(p_M_finish);
        goto LABEL_238;
      }
LABEL_257:
      std::vector<common::tools::MathExpressionNode>::_M_realloc_insert<common::tools::MathExpressionNode const&>(
        &this->suffix_node_vec_,
        v70,
        (const common::tools::MathExpressionNode *)(v85 + 256),
        v68);
LABEL_246:
      common::tools::MathExpressionNode::~MathExpressionNode((common::tools::MathExpressionNode *const)(v85 + 256));
    }
    __asan_report_load4(p_str);
LABEL_211:
    __asan_report_load8(p_str);
LABEL_212:
    __asan_report_load8(p_str);
    goto LABEL_213;
  }
  v14._M_current = (common::tools::MathExpressionNode *)(v25 + 56 * idx);
  M_current = v14._M_current;
  v28 = *(_BYTE *)(((unsigned __int64)v14._M_current >> 3) + 0x7FFF8000);
  if ( v28 && v28 <= 3 )
  {
    __asan_report_load4(v14._M_current);
LABEL_19:
    __asan_report_load8(M_current);
LABEL_20:
    __asan_report_load8(M_current);
    goto LABEL_21;
  }
  *(_DWORD *)(v85 + 160) = v14._M_current->type_;
  *(_QWORD *)(v85 + 168) = v85 + 184;
  M_current = &v14._M_current->str_;
  if ( *(_BYTE *)(((unsigned __int64)&v14._M_current->str_ >> 3) + 0x7FFF8000) )
    goto LABEL_19;
  M_current = &v14._M_current->str_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v14._M_current->str_._M_string_length >> 3) + 0x7FFF8000) )
    goto LABEL_20;
  std::string::_M_construct<char *>(
    (std::string *const)(v85 + 168),
    v14._M_current->str_._M_dataplus._M_p,
    &v14._M_current->str_._M_dataplus._M_p[v14._M_current->str_._M_string_length],
    (std::forward_iterator_tag)idx);
LABEL_21:
  p_is_const_num_node = &v14._M_current->num_value_;
  if ( *(_BYTE *)(((unsigned __int64)&v14._M_current->num_value_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_is_const_num_node);
    goto LABEL_39;
  }
  *(double *)(v85 + 200) = v14._M_current->num_value_;
  p_is_const_num_node = &v14._M_current->bool_value_;
  if ( *(char *)(((unsigned __int64)&v14._M_current->bool_value_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_39:
    __asan_report_load1(p_is_const_num_node);
LABEL_40:
    __asan_report_load1(p_is_const_num_node);
    goto LABEL_41;
  }
  *(_BYTE *)(v85 + 208) = v14._M_current->bool_value_;
  p_is_const_num_node = &v14._M_current->is_const_num_node_;
  v10 = *(_BYTE *)(((unsigned __int64)&v14._M_current->is_const_num_node_ >> 3) + 0x7FFF8000);
  if ( v10 <= ((LOBYTE(v14._M_current) + 49) & 7) && v10 )
    goto LABEL_40;
  *(_BYTE *)(v85 + 209) = v14._M_current->is_const_num_node_;
  p_is_const_num_node = &v14._M_current->priority_;
  v11 = *(_BYTE *)(((unsigned __int64)&v14._M_current->priority_ >> 3) + 0x7FFF8000);
  if ( (char)(((LOBYTE(v14._M_current) + 52) & 7) + 3) < v11 || !v11 )
  {
    *(_DWORD *)(v85 + 212) = v14._M_current->priority_;
    v12 = *(_DWORD *)(v85 + 160);
    if ( v12 != 4 )
    {
      if ( v12 <= 4 )
      {
        if ( v12 != 1 )
        {
          if ( v12 == 2 )
          {
            p_suffix_node_vec = &this->suffix_node_vec_;
            p_M_end_of_storage = (std::string *)&this->suffix_node_vec_._M_impl._M_finish;
            if ( *(_BYTE *)(((unsigned __int64)&this->suffix_node_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(p_M_end_of_storage);
            }
            else
            {
              v14._M_current = this->suffix_node_vec_._M_impl._M_finish;
              p_M_end_of_storage = (std::string *)&this->suffix_node_vec_._M_impl._M_end_of_storage;
              if ( !*(_BYTE *)(((unsigned __int64)&this->suffix_node_vec_._M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
              {
                if ( v14._M_current == this->suffix_node_vec_._M_impl._M_end_of_storage )
                {
LABEL_59:
                  std::vector<common::tools::MathExpressionNode>::_M_realloc_insert<common::tools::MathExpressionNode const&>(
                    &this->suffix_node_vec_,
                    v14,
                    (const common::tools::MathExpressionNode *)(v85 + 160),
                    v8);
                  goto LABEL_76;
                }
                p_M_end_of_storage = (std::string *)this->suffix_node_vec_._M_impl._M_finish;
                v15 = *(_BYTE *)(((unsigned __int64)v14._M_current >> 3) + 0x7FFF8000);
                if ( !v15 || v15 > 3 )
                {
                  v14._M_current->type_ = *(_DWORD *)(v85 + 160);
                  p_M_end_of_storage = &v14._M_current->str_;
                  if ( !*(_BYTE *)(((unsigned __int64)&v14._M_current->str_ >> 3) + 0x7FFF8000) )
                  {
                    v14._M_current->str_._M_dataplus._M_p = v14._M_current->str_._anon_0._M_local_buf;
                    std::string::_M_construct<char *>(
                      p_M_end_of_storage,
                      *(char **)(v85 + 168),
                      (char *)(*(_QWORD *)(v85 + 176) + *(_QWORD *)(v85 + 168)),
                      (std::forward_iterator_tag)v8);
                    goto LABEL_48;
                  }
LABEL_47:
                  __asan_report_store8(p_M_end_of_storage);
LABEL_48:
                  p_priority = &v14._M_current->num_value_;
                  if ( *(_BYTE *)(((unsigned __int64)&v14._M_current->num_value_ >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store8(p_priority);
                  }
                  else
                  {
                    v14._M_current->num_value_ = *(double *)(v85 + 200);
                    p_priority = &v14._M_current->bool_value_;
                    if ( *(char *)(((unsigned __int64)&v14._M_current->bool_value_ >> 3) + 0x7FFF8000) >= 0 )
                    {
                      v14._M_current->bool_value_ = *(_BYTE *)(v85 + 208);
                      p_priority = &v14._M_current->is_const_num_node_;
                      v17 = *(_BYTE *)(((unsigned __int64)&v14._M_current->is_const_num_node_ >> 3) + 0x7FFF8000);
                      if ( v17 > ((LOBYTE(v14._M_current) + 49) & 7) || !v17 )
                      {
                        v14._M_current->is_const_num_node_ = *(_BYTE *)(v85 + 209);
                        p_priority = &v14._M_current->priority_;
                        v18 = *(_BYTE *)(((unsigned __int64)&v14._M_current->priority_ >> 3) + 0x7FFF8000);
                        if ( (char)(((LOBYTE(v14._M_current) + 52) & 7) + 3) < v18 || !v18 )
                        {
                          v14._M_current->priority_ = *(_DWORD *)(v85 + 212);
                          ++this->suffix_node_vec_._M_impl._M_finish;
                          goto LABEL_76;
                        }
                        goto LABEL_58;
                      }
LABEL_57:
                      __asan_report_store1(p_priority);
LABEL_58:
                      __asan_report_store4(p_priority);
                      goto LABEL_59;
                    }
                  }
                  __asan_report_store1(p_priority);
                  goto LABEL_57;
                }
LABEL_46:
                __asan_report_store4(p_M_end_of_storage);
                goto LABEL_47;
              }
            }
            __asan_report_load8(p_M_end_of_storage);
            goto LABEL_46;
          }
LABEL_43:
          common::milog::MiLogStream::MiLogStream(
            &v88,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/math_expression.cpp",
            "init",
            307);
          if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
            goto LABEL_205;
          common::milog::MiLogStream::operator()(
            &v88,
            "find error node_type=%u in '%s'",
            *(unsigned int *)(v85 + 160),
            a2->_M_dataplus._M_p);
          goto LABEL_206;
        }
        while ( 1 )
        {
          v37 = *(_QWORD *)(v85 + 104);
          if ( *(_QWORD *)(v85 + 96) == v37 )
          {
LABEL_62:
            v19._M_current = *(common::tools::MathExpressionNode **)(v85 + 104);
            if ( v19._M_current == *(common::tools::MathExpressionNode **)(v85 + 112) )
              goto LABEL_87;
            v20 = *(std::string **)(v85 + 104);
            v21 = *(_BYTE *)(((unsigned __int64)v19._M_current >> 3) + 0x7FFF8000);
            if ( v21 && v21 <= 3 )
            {
              __asan_report_store4(v20);
            }
            else
            {
              v19._M_current->type_ = *(_DWORD *)(v85 + 160);
              v20 = &v19._M_current->str_;
              if ( !*(_BYTE *)(((unsigned __int64)&v19._M_current->str_ >> 3) + 0x7FFF8000) )
              {
                v19._M_current->str_._M_dataplus._M_p = v19._M_current->str_._anon_0._M_local_buf;
                std::string::_M_construct<char *>(
                  v20,
                  *(char **)(v85 + 168),
                  (char *)(*(_QWORD *)(v85 + 176) + *(_QWORD *)(v85 + 168)),
                  (std::forward_iterator_tag)v8);
                goto LABEL_69;
              }
            }
            __asan_report_store8(v20);
LABEL_69:
            v22 = &v19._M_current->num_value_;
            if ( *(_BYTE *)(((unsigned __int64)&v19._M_current->num_value_ >> 3) + 0x7FFF8000) )
            {
              __asan_report_store8(v22);
            }
            else
            {
              v19._M_current->num_value_ = *(double *)(v85 + 200);
              v22 = &v19._M_current->bool_value_;
              if ( *(char *)(((unsigned __int64)&v19._M_current->bool_value_ >> 3) + 0x7FFF8000) >= 0 )
              {
                v19._M_current->bool_value_ = *(_BYTE *)(v85 + 208);
                v22 = &v19._M_current->is_const_num_node_;
                v23 = *(_BYTE *)(((unsigned __int64)&v19._M_current->is_const_num_node_ >> 3) + 0x7FFF8000);
                if ( v23 > ((LOBYTE(v19._M_current) + 49) & 7) || !v23 )
                {
                  v19._M_current->is_const_num_node_ = *(_BYTE *)(v85 + 209);
                  v22 = &v19._M_current->priority_;
                  v24 = *(_BYTE *)(((unsigned __int64)&v19._M_current->priority_ >> 3) + 0x7FFF8000);
                  if ( (char)(((LOBYTE(v19._M_current) + 52) & 7) + 3) < v24 || !v24 )
                  {
                    v19._M_current->priority_ = *(_DWORD *)(v85 + 212);
                    *(_QWORD *)(v85 + 104) += 56LL;
                    goto LABEL_76;
                  }
LABEL_86:
                  __asan_report_store4(v22);
LABEL_87:
                  std::vector<common::tools::MathExpressionNode>::_M_realloc_insert<common::tools::MathExpressionNode const&>(
                    (std::vector<common::tools::MathExpressionNode> *const)(v85 + 96),
                    v19,
                    (const common::tools::MathExpressionNode *)(v85 + 160),
                    v8);
LABEL_76:
                  common::tools::MathExpressionNode::~MathExpressionNode((common::tools::MathExpressionNode *const)(v85 + 160));
                  ++idx;
                  goto LABEL_77;
                }
LABEL_85:
                __asan_report_store1(v22);
                goto LABEL_86;
              }
            }
            __asan_report_store1(v22);
            goto LABEL_85;
          }
          v38 = v37 - 56;
          v39 = *(_BYTE *)(((unsigned __int64)(v37 - 56) >> 3) + 0x7FFF8000);
          if ( v39 && v39 <= 3 )
          {
            __asan_report_load4(v38);
LABEL_61:
            __asan_report_load4(v38);
            goto LABEL_62;
          }
          if ( *(_DWORD *)(v37 - 56) == 4 )
            goto LABEL_62;
          v38 = v37 - 4;
          v8 = (const common::tools::MathExpressionNode *)*(unsigned __int8 *)(((unsigned __int64)(v37 - 4) >> 3)
                                                                             + 0x7FFF8000);
          if ( (char)(((v37 - 4) & 7) + 3) >= (char)v8 && (_BYTE)v8 )
            goto LABEL_61;
          if ( *(_DWORD *)(v37 - 4) < *(_DWORD *)(v85 + 212) )
            goto LABEL_62;
          p_suffix_node_vec = (common::tools::MathExpression::NodeVec *)(v37 - 56);
          M_finish = (std::string *)&this->suffix_node_vec_._M_impl._M_finish;
          if ( *(_BYTE *)(((unsigned __int64)&this->suffix_node_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
            break;
          v14._M_current = this->suffix_node_vec_._M_impl._M_finish;
          M_finish = (std::string *)&this->suffix_node_vec_._M_impl._M_end_of_storage;
          if ( *(_BYTE *)(((unsigned __int64)&this->suffix_node_vec_._M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
            goto LABEL_89;
          if ( v14._M_current != this->suffix_node_vec_._M_impl._M_end_of_storage )
          {
            M_finish = (std::string *)(v37 - 56);
            v41 = *(_BYTE *)(((unsigned __int64)p_suffix_node_vec >> 3) + 0x7FFF8000);
            if ( !v41 || v41 > 3 )
            {
              v42 = *(_DWORD *)(v37 - 56);
              M_finish = (std::string *)this->suffix_node_vec_._M_impl._M_finish;
              v43 = *(_BYTE *)(((unsigned __int64)v14._M_current >> 3) + 0x7FFF8000);
              if ( !v43 || v43 > 3 )
              {
                v14._M_current->type_ = v42;
                M_finish = &v14._M_current->str_;
                if ( !*(_BYTE *)(((unsigned __int64)&v14._M_current->str_ >> 3) + 0x7FFF8000) )
                {
                  v14._M_current->str_._M_dataplus._M_p = v14._M_current->str_._anon_0._M_local_buf;
                  v29 = &p_suffix_node_vec->_M_impl._M_finish;
                  if ( !*(_BYTE *)(((unsigned __int64)&p_suffix_node_vec->_M_impl._M_finish >> 3) + 0x7FFF8000) )
                  {
                    v30 = (__int64)&p_suffix_node_vec->_M_impl._M_end_of_storage;
                    if ( !*(_BYTE *)(((unsigned __int64)&p_suffix_node_vec->_M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
                    {
                      std::string::_M_construct<char *>(
                        M_finish,
                        (char *)p_suffix_node_vec->_M_impl._M_finish,
                        (char *)p_suffix_node_vec->_M_impl._M_end_of_storage
                      + (unsigned __int64)p_suffix_node_vec->_M_impl._M_finish,
                        (std::forward_iterator_tag)v8);
LABEL_95:
                      v31 = (common::tools::MathExpression::NodeVec *)((char *)p_suffix_node_vec + 40);
                      if ( *(_BYTE *)(((unsigned __int64)&p_suffix_node_vec[1]._M_impl._M_end_of_storage >> 3)
                                    + 0x7FFF8000) )
                      {
                        __asan_report_load8(v31);
                      }
                      else
                      {
                        v31 = (common::tools::MathExpression::NodeVec *)&v14._M_current->num_value_;
                        if ( !*(_BYTE *)(((unsigned __int64)&v14._M_current->num_value_ >> 3) + 0x7FFF8000) )
                        {
                          *(_QWORD *)&v14._M_current->num_value_ = p_suffix_node_vec[1]._M_impl._M_end_of_storage;
                          v31 = p_suffix_node_vec + 2;
                          if ( *(char *)(((unsigned __int64)&p_suffix_node_vec[2] >> 3) + 0x7FFF8000) >= 0 )
                          {
                            v31 = (common::tools::MathExpression::NodeVec *)&v14._M_current->bool_value_;
                            if ( *(char *)(((unsigned __int64)&v14._M_current->bool_value_ >> 3) + 0x7FFF8000) >= 0 )
                            {
                              v14._M_current->bool_value_ = (bool)p_suffix_node_vec[2]._M_impl._M_start;
                              v31 = (common::tools::MathExpression::NodeVec *)((char *)p_suffix_node_vec + 49);
                              v32 = *(_BYTE *)((((unsigned __int64)&p_suffix_node_vec[2]._M_impl._M_start + 1) >> 3)
                                             + 0x7FFF8000);
                              if ( v32 > (((unsigned __int8)p_suffix_node_vec + 49) & 7) || !v32 )
                              {
                                v31 = (common::tools::MathExpression::NodeVec *)&v14._M_current->is_const_num_node_;
                                v33 = *(_BYTE *)(((unsigned __int64)&v14._M_current->is_const_num_node_ >> 3)
                                               + 0x7FFF8000);
                                if ( v33 > ((LOBYTE(v14._M_current) + 49) & 7) || !v33 )
                                {
                                  v14._M_current->is_const_num_node_ = BYTE1(p_suffix_node_vec[2]._M_impl._M_start);
                                  v31 = (common::tools::MathExpression::NodeVec *)((char *)p_suffix_node_vec + 52);
                                  v34 = *(_BYTE *)((((unsigned __int64)&p_suffix_node_vec[2]._M_impl._M_start + 4) >> 3)
                                                 + 0x7FFF8000);
                                  if ( (char)((((_BYTE)p_suffix_node_vec + 52) & 7) + 3) < v34 || !v34 )
                                  {
                                    v31 = (common::tools::MathExpression::NodeVec *)&v14._M_current->priority_;
                                    v35 = *(_BYTE *)(((unsigned __int64)&v14._M_current->priority_ >> 3) + 0x7FFF8000);
                                    if ( (char)(((LOBYTE(v14._M_current) + 52) & 7) + 3) < v35 || !v35 )
                                    {
                                      v14._M_current->priority_ = HIDWORD(p_suffix_node_vec[2]._M_impl._M_start);
                                      ++this->suffix_node_vec_._M_impl._M_finish;
                                      goto LABEL_108;
                                    }
                                    goto LABEL_134;
                                  }
LABEL_133:
                                  __asan_report_load4(v31);
LABEL_134:
                                  __asan_report_store4(v31);
                                  goto LABEL_135;
                                }
LABEL_132:
                                __asan_report_store1(v31);
                                goto LABEL_133;
                              }
LABEL_131:
                              __asan_report_load1(v31);
                              goto LABEL_132;
                            }
LABEL_130:
                            __asan_report_store1(v31);
                            goto LABEL_131;
                          }
LABEL_129:
                          __asan_report_load1(v31);
                          goto LABEL_130;
                        }
                      }
                      __asan_report_store8(v31);
                      goto LABEL_129;
                    }
LABEL_94:
                    __asan_report_load8(v30);
                    goto LABEL_95;
                  }
LABEL_93:
                  v30 = __asan_report_load8(v29);
                  goto LABEL_94;
                }
LABEL_92:
                __asan_report_store8(M_finish);
                goto LABEL_93;
              }
LABEL_91:
              __asan_report_store4(M_finish);
              goto LABEL_92;
            }
LABEL_90:
            __asan_report_load4(M_finish);
            goto LABEL_91;
          }
LABEL_135:
          std::vector<common::tools::MathExpressionNode>::_M_realloc_insert<common::tools::MathExpressionNode const&>(
            &this->suffix_node_vec_,
            v14,
            (const common::tools::MathExpressionNode *)p_suffix_node_vec,
            v8);
LABEL_108:
          v36 = (common::tools::MathExpressionNode *)(*(_QWORD *)(v85 + 104) - 56LL);
          *(_QWORD *)(v85 + 104) = v36;
          common::tools::MathExpressionNode::~MathExpressionNode(v36);
        }
        __asan_report_load8(M_finish);
LABEL_89:
        __asan_report_load8(M_finish);
        goto LABEL_90;
      }
      goto LABEL_42;
    }
    v19._M_current = *(common::tools::MathExpressionNode **)(v85 + 104);
    if ( v19._M_current == *(common::tools::MathExpressionNode **)(v85 + 112) )
      goto LABEL_87;
    v44 = *(std::string **)(v85 + 104);
    v45 = *(_BYTE *)(((unsigned __int64)v19._M_current >> 3) + 0x7FFF8000);
    if ( v45 && v45 <= 3 )
    {
      __asan_report_store4(v44);
    }
    else
    {
      v19._M_current->type_ = *(_DWORD *)(v85 + 160);
      v44 = &v19._M_current->str_;
      if ( !*(_BYTE *)(((unsigned __int64)&v19._M_current->str_ >> 3) + 0x7FFF8000) )
      {
        v19._M_current->str_._M_dataplus._M_p = v19._M_current->str_._anon_0._M_local_buf;
        std::string::_M_construct<char *>(
          v44,
          *(char **)(v85 + 168),
          (char *)(*(_QWORD *)(v85 + 176) + *(_QWORD *)(v85 + 168)),
          (std::forward_iterator_tag)v8);
        goto LABEL_143;
      }
    }
    __asan_report_store8(v44);
LABEL_143:
    v46 = &v19._M_current->num_value_;
    if ( *(_BYTE *)(((unsigned __int64)&v19._M_current->num_value_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8(v46);
    }
    else
    {
      v19._M_current->num_value_ = *(double *)(v85 + 200);
      v46 = &v19._M_current->bool_value_;
      if ( *(char *)(((unsigned __int64)&v19._M_current->bool_value_ >> 3) + 0x7FFF8000) >= 0 )
      {
        v19._M_current->bool_value_ = *(_BYTE *)(v85 + 208);
        v46 = &v19._M_current->is_const_num_node_;
        v47 = *(_BYTE *)(((unsigned __int64)&v19._M_current->is_const_num_node_ >> 3) + 0x7FFF8000);
        if ( v47 > ((LOBYTE(v19._M_current) + 49) & 7) || !v47 )
        {
          v19._M_current->is_const_num_node_ = *(_BYTE *)(v85 + 209);
          v46 = &v19._M_current->priority_;
          v48 = *(_BYTE *)(((unsigned __int64)&v19._M_current->priority_ >> 3) + 0x7FFF8000);
          if ( (char)(((LOBYTE(v19._M_current) + 52) & 7) + 3) < v48 || !v48 )
          {
            v19._M_current->priority_ = *(_DWORD *)(v85 + 212);
            *(_QWORD *)(v85 + 104) += 56LL;
            goto LABEL_76;
          }
LABEL_153:
          __asan_report_store4(v46);
          goto LABEL_87;
        }
LABEL_152:
        __asan_report_store1(v46);
        goto LABEL_153;
      }
    }
    __asan_report_store1(v46);
    goto LABEL_152;
  }
LABEL_41:
  __asan_report_load4(p_is_const_num_node);
LABEL_42:
  if ( v12 != 5 )
    goto LABEL_43;
  while ( 1 )
  {
    v59 = *(_QWORD *)(v85 + 104);
    if ( v59 == *(_QWORD *)(v85 + 96) )
      break;
    v54._M_current = (common::tools::MathExpressionNode *)(v59 - 56);
    p_M_string_length = (void *)(v59 - 56);
    v61 = *(_BYTE *)(((unsigned __int64)(v59 - 56) >> 3) + 0x7FFF8000);
    if ( v61 && v61 <= 3 )
    {
      __asan_report_load4(p_M_string_length);
LABEL_159:
      __asan_report_load8(p_M_string_length);
LABEL_160:
      __asan_report_load8(p_M_string_length);
      goto LABEL_161;
    }
    *(_DWORD *)(v85 + 256) = *(_DWORD *)(v59 - 56);
    *(_QWORD *)(v85 + 264) = v85 + 280;
    p_M_string_length = &v54._M_current->str_;
    if ( *(_BYTE *)(((unsigned __int64)&v54._M_current->str_ >> 3) + 0x7FFF8000) )
      goto LABEL_159;
    p_M_string_length = &v54._M_current->str_._M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&v54._M_current->str_._M_string_length >> 3) + 0x7FFF8000) )
      goto LABEL_160;
    std::string::_M_construct<char *>(
      (std::string *const)(v85 + 264),
      v54._M_current->str_._M_dataplus._M_p,
      &v54._M_current->str_._M_dataplus._M_p[v54._M_current->str_._M_string_length],
      (std::forward_iterator_tag)v8);
LABEL_161:
    v49 = (std::string *)&v54._M_current->num_value_;
    if ( *(_BYTE *)(((unsigned __int64)&v54._M_current->num_value_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v49);
LABEL_176:
      __asan_report_load1(v49);
LABEL_177:
      __asan_report_load1(v49);
LABEL_178:
      __asan_report_load4(v49);
LABEL_179:
      __asan_report_load8(v49);
LABEL_180:
      __asan_report_load8(v49);
      goto LABEL_181;
    }
    *(double *)(v85 + 296) = v54._M_current->num_value_;
    v49 = (std::string *)&v54._M_current->bool_value_;
    if ( *(char *)(((unsigned __int64)&v54._M_current->bool_value_ >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_176;
    *(_BYTE *)(v85 + 304) = v54._M_current->bool_value_;
    v49 = (std::string *)&v54._M_current->is_const_num_node_;
    v50 = *(_BYTE *)(((unsigned __int64)&v54._M_current->is_const_num_node_ >> 3) + 0x7FFF8000);
    if ( v50 <= ((LOBYTE(v54._M_current) + 49) & 7) && v50 )
      goto LABEL_177;
    *(_BYTE *)(v85 + 305) = v54._M_current->is_const_num_node_;
    v49 = (std::string *)&v54._M_current->priority_;
    v51 = *(_BYTE *)(((unsigned __int64)&v54._M_current->priority_ >> 3) + 0x7FFF8000);
    if ( (char)(((LOBYTE(v54._M_current) + 52) & 7) + 3) >= v51 && v51 )
      goto LABEL_178;
    *(_DWORD *)(v85 + 308) = v54._M_current->priority_;
    v52 = (common::tools::MathExpressionNode *)(*(_QWORD *)(v85 + 104) - 56LL);
    *(_QWORD *)(v85 + 104) = v52;
    common::tools::MathExpressionNode::~MathExpressionNode(v52);
    if ( *(_DWORD *)(v85 + 256) == 4 )
    {
      common::tools::MathExpressionNode::~MathExpressionNode((common::tools::MathExpressionNode *const)(v85 + 256));
      goto LABEL_76;
    }
    p_suffix_node_vec = &this->suffix_node_vec_;
    v49 = (std::string *)&this->suffix_node_vec_._M_impl._M_finish;
    if ( *(_BYTE *)(((unsigned __int64)&this->suffix_node_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
      goto LABEL_179;
    v54._M_current = this->suffix_node_vec_._M_impl._M_finish;
    v49 = (std::string *)&this->suffix_node_vec_._M_impl._M_end_of_storage;
    if ( *(_BYTE *)(((unsigned __int64)&this->suffix_node_vec_._M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
      goto LABEL_180;
    if ( v54._M_current != this->suffix_node_vec_._M_impl._M_end_of_storage )
    {
      v49 = (std::string *)this->suffix_node_vec_._M_impl._M_finish;
      v55 = *(_BYTE *)(((unsigned __int64)v54._M_current >> 3) + 0x7FFF8000);
      if ( !v55 || v55 > 3 )
      {
        v54._M_current->type_ = *(_DWORD *)(v85 + 256);
        v49 = &v54._M_current->str_;
        if ( !*(_BYTE *)(((unsigned __int64)&v54._M_current->str_ >> 3) + 0x7FFF8000) )
        {
          v54._M_current->str_._M_dataplus._M_p = v54._M_current->str_._anon_0._M_local_buf;
          std::string::_M_construct<char *>(
            v49,
            *(char **)(v85 + 264),
            (char *)(*(_QWORD *)(v85 + 272) + *(_QWORD *)(v85 + 264)),
            (std::forward_iterator_tag)v53);
          goto LABEL_183;
        }
LABEL_182:
        __asan_report_store8(v49);
LABEL_183:
        v56 = &v54._M_current->num_value_;
        if ( *(_BYTE *)(((unsigned __int64)&v54._M_current->num_value_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store8(v56);
        }
        else
        {
          v54._M_current->num_value_ = *(double *)(v85 + 296);
          v56 = &v54._M_current->bool_value_;
          if ( *(char *)(((unsigned __int64)&v54._M_current->bool_value_ >> 3) + 0x7FFF8000) >= 0 )
          {
            v54._M_current->bool_value_ = *(_BYTE *)(v85 + 304);
            v56 = &v54._M_current->is_const_num_node_;
            v57 = *(_BYTE *)(((unsigned __int64)&v54._M_current->is_const_num_node_ >> 3) + 0x7FFF8000);
            if ( v57 > ((LOBYTE(v54._M_current) + 49) & 7) || !v57 )
            {
              v54._M_current->is_const_num_node_ = *(_BYTE *)(v85 + 305);
              v56 = &v54._M_current->priority_;
              v58 = *(_BYTE *)(((unsigned __int64)&v54._M_current->priority_ >> 3) + 0x7FFF8000);
              if ( (char)(((LOBYTE(v54._M_current) + 52) & 7) + 3) < v58 || !v58 )
              {
                v54._M_current->priority_ = *(_DWORD *)(v85 + 308);
                ++p_suffix_node_vec->_M_impl._M_finish;
                goto LABEL_190;
              }
              goto LABEL_200;
            }
LABEL_199:
            __asan_report_store1(v56);
LABEL_200:
            __asan_report_store4(v56);
            goto LABEL_201;
          }
        }
        __asan_report_store1(v56);
        goto LABEL_199;
      }
LABEL_181:
      __asan_report_store4(v49);
      goto LABEL_182;
    }
LABEL_201:
    std::vector<common::tools::MathExpressionNode>::_M_realloc_insert<common::tools::MathExpressionNode const&>(
      p_suffix_node_vec,
      v54,
      (const common::tools::MathExpressionNode *)(v85 + 256),
      v53);
LABEL_190:
    common::tools::MathExpressionNode::~MathExpressionNode((common::tools::MathExpressionNode *const)(v85 + 256));
  }
  common::milog::MiLogStream::MiLogStream(
    &v88,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/math_expression.cpp",
    "init",
    285);
  if ( !*(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
  {
    common::milog::MiLogStream::operator()(&v88, "can not find enough '(' in '%s'", a2->_M_dataplus._M_p);
    goto LABEL_206;
  }
LABEL_205:
  __asan_report_load8(a2);
LABEL_206:
  common::milog::MiLogStream::~MiLogStream(&v88);
  common::tools::MathExpressionNode::~MathExpressionNode((common::tools::MathExpressionNode *const)(v85 + 160));
  v86 = -1;
LABEL_207:
  v62 = *(common::tools::MathExpressionNode **)(v85 + 104);
  for ( i = *(common::tools::MathExpressionNode **)(v85 + 96); v62 != i; ++i )
    common::tools::MathExpressionNode::~MathExpressionNode(i);
LABEL_262:
  v79 = *(void **)(v85 + 96);
  if ( v79 )
    operator delete(v79);
LABEL_264:
  v80 = *(common::tools::MathExpressionNode **)(v85 + 40);
  for ( j = *(common::tools::MathExpressionNode **)(v85 + 32); v80 != j; ++j )
    common::tools::MathExpressionNode::~MathExpressionNode(j);
  v82 = *(void **)(v85 + 32);
  if ( v82 )
    operator delete(v82);
LABEL_269:
  if ( v89 == (char *)v85 )
  {
    *(_QWORD *)((v85 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v85 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v85 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v85 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v85 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v85 = 1172321806LL;
    *(_QWORD *)((v85 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v85 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v85 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v85 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v85 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v85 >> 3) + 0x7FFF8028) = -168430091;
  }
  return v86;
};

// Line 354: range 0000000019B526E0-0000000019B53952
common::tools::MathExpressionNode *__fastcall common::tools::MathExpression::compute(
        common::tools::MathExpressionNode *retstr,
        const common::tools::MathExpression *const this,
        bool is_use_default_value,
        float para_default_value,
        std::map<std::string,float> *para_map_ptr)
{
  std::vector<common::tools::MathExpressionNode>::iterator v5; // r13
  const common::tools::MathExpression *v6; // r15
  _DWORD *v7; // r14
  char v8; // al
  unsigned __int64 i; // r12
  __int64 v10; // rax
  const common::tools::MathExpressionNode *v11; // rcx
  void *p_num_value; // rdi
  char v13; // al
  char v14; // dl
  common::tools::MathExpressionNode::Type v15; // eax
  std::string::size_type v16; // rdx
  std::string::size_type v17; // r13
  std::string::size_type v18; // rdi
  char v19; // al
  common::tools::MathExpressionNode::Type v20; // edx
  std::string *p_str; // rdi
  char v22; // al
  void *p_bool_value; // rdi
  char v24; // al
  char v25; // dl
  std::forward_iterator_tag v26; // cl
  std::string::size_type v27; // rdi
  char v28; // al
  char v29; // dl
  common::tools::MathExpressionNode *v30; // rdi
  std::forward_iterator_tag v31; // cl
  std::string::size_type v32; // rax
  char v33; // dl
  std::string::size_type v34; // rdi
  char v35; // al
  char v36; // dl
  common::tools::MathExpressionNode *v37; // rdi
  std::forward_iterator_tag v38; // cl
  std::forward_iterator_tag v39; // cl
  __int64 v40; // rdx
  const common::tools::MathExpressionNode *v41; // rcx
  int v42; // eax
  std::string *v43; // rdi
  char v44; // al
  void *p_is_const_num_node; // rdi
  char v46; // al
  char v47; // dl
  common::tools::MathExpression::NodeVec *p_M_finish; // rdi
  std::_Vector_base<common::tools::MathExpressionNode>::pointer M_start; // rdx
  char v50; // al
  std::forward_iterator_tag v51; // cl
  std::forward_iterator_tag v52; // cl
  std::string::size_type v53; // r12
  common::tools::MathExpressionNode *v54; // rdi
  char v55; // al
  char v56; // al
  common::tools::MathExpressionNode *v57; // rbx
  common::tools::MathExpressionNode *v58; // r15
  void *p_priority; // rdi
  char v60; // al
  char v61; // al
  char v62; // dl
  char v63; // dl
  common::tools::MathExpressionNode *v64; // r12
  void *v65; // rdi
  void *v66; // rdi
  std::string v68; // [rsp-10h] [rbp-2A0h]
  unsigned __int64 v69; // [rsp+10h] [rbp-280h]
  bool is_meet_error; // [rsp+1Bh] [rbp-275h]
  int num; // [rsp+1Ch] [rbp-274h]
  common::milog::MiLogStream v77; // [rsp+40h] [rbp-250h] BYREF
  common::tools::MathExpressionNode v78[10]; // [rsp+60h] [rbp-230h] BYREF

  v69 = (unsigned __int64)(&v78[0].str_._anon_0._M_allocated_capacity + 1);
  *(&v68._anon_0._M_allocated_capacity + 1) = (std::string::size_type)(&v78[0].str_._anon_0._M_allocated_capacity + 1);
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_3(480LL);
    if ( v10 )
      v69 = v10;
  }
  v68._anon_0._M_allocated_capacity = v69 + 480;
  *(_QWORD *)v69 = 1102416563LL;
  *(_QWORD *)(v69 + 8) = "5 32 24 12 node_vec:367 96 56 8 node:371 192 56 17 target_node_2:387 288 56 17 target_node_1:38"
                         "9 384 56 12 tmp_node:393";
  *(_QWORD *)(v69 + 16) = common::tools::MathExpression::compute;
  v7 = (_DWORD *)(v69 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234881024;
  v7[536862722] = -218959118;
  v7[536862724] = -234881024;
  v7[536862725] = -218959118;
  v7[536862727] = -234881024;
  v7[536862728] = -218959118;
  v7[536862730] = -234881024;
  v7[536862731] = -218959118;
  v7[536862733] = -218103808;
  v7[536862734] = -202116109;
  common::tools::MathExpressionNode::MathExpressionNode(retstr);
  for ( num = 0; num <= 0; ++num )
  {
    v8 = *(_BYTE *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000);
    if ( v8 <= (((unsigned __int8)this + 52) & 7) && v8 )
    {
      __asan_report_load1(&this->is_init_);
LABEL_11:
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)v78,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/math_expression.cpp",
        "compute",
        362);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)v78, "can not compute before init");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)v78);
      break;
    }
    is_meet_error = this->is_init_;
    if ( !is_meet_error )
      goto LABEL_11;
    *(_QWORD *)(v69 + 32) = 0LL;
    *(_QWORD *)(v69 + 40) = 0LL;
    *(_QWORD *)(v69 + 48) = 0LL;
    for ( i = 0LL; ; ++i )
    {
      p_M_finish = (common::tools::MathExpression::NodeVec *)&this->suffix_node_vec_._M_impl._M_finish;
      if ( *(_BYTE *)(((unsigned __int64)&this->suffix_node_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_M_finish);
LABEL_13:
        __asan_report_load8(p_M_finish);
LABEL_14:
        __asan_report_load4(p_M_finish);
LABEL_15:
        __asan_report_load8(p_M_finish);
LABEL_16:
        __asan_report_load8(p_M_finish);
        goto LABEL_17;
      }
      p_M_finish = &this->suffix_node_vec_;
      if ( *(_BYTE *)(((unsigned __int64)&this->suffix_node_vec_ >> 3) + 0x7FFF8000) )
        goto LABEL_13;
      M_start = this->suffix_node_vec_._M_impl._M_start;
      if ( i >= 0x6DB6DB6DB6DB6DB7LL * (((char *)this->suffix_node_vec_._M_impl._M_finish - (char *)M_start) >> 3) )
        break;
      v5._M_current = &M_start[i];
      p_M_finish = (common::tools::MathExpression::NodeVec *)v5._M_current;
      v50 = *(_BYTE *)(((unsigned __int64)v5._M_current >> 3) + 0x7FFF8000);
      if ( v50 && v50 <= 3 )
        goto LABEL_14;
      *(_DWORD *)(v69 + 96) = v5._M_current->type_;
      *(_QWORD *)(v69 + 104) = v69 + 120;
      p_M_finish = (common::tools::MathExpression::NodeVec *)&v5._M_current->str_;
      if ( *(_BYTE *)(((unsigned __int64)&v5._M_current->str_ >> 3) + 0x7FFF8000) )
        goto LABEL_15;
      p_M_finish = (common::tools::MathExpression::NodeVec *)&v5._M_current->str_._M_string_length;
      if ( *(_BYTE *)(((unsigned __int64)&v5._M_current->str_._M_string_length >> 3) + 0x7FFF8000) )
        goto LABEL_16;
      std::string::_M_construct<char *>(
        (std::string *const)(v69 + 104),
        v5._M_current->str_._M_dataplus._M_p,
        &v5._M_current->str_._M_dataplus._M_p[v5._M_current->str_._M_string_length],
        (std::forward_iterator_tag)-73);
LABEL_17:
      p_num_value = &v5._M_current->num_value_;
      if ( *(_BYTE *)(((unsigned __int64)&v5._M_current->num_value_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_num_value);
LABEL_32:
        __asan_report_load1(p_num_value);
LABEL_33:
        __asan_report_load1(p_num_value);
LABEL_34:
        __asan_report_load4(p_num_value);
LABEL_35:
        v5._M_current = *(common::tools::MathExpressionNode **)(v69 + 40);
        if ( v5._M_current == *(common::tools::MathExpressionNode **)(v69 + 48) )
          goto LABEL_53;
        v20 = v15;
        p_str = *(std::string **)(v69 + 40);
        v22 = *(_BYTE *)(((unsigned __int64)v5._M_current >> 3) + 0x7FFF8000);
        if ( v22 && v22 <= 3 )
        {
          __asan_report_store4(p_str);
        }
        else
        {
          v5._M_current->type_ = v20;
          p_str = &v5._M_current->str_;
          if ( !*(_BYTE *)(((unsigned __int64)&v5._M_current->str_ >> 3) + 0x7FFF8000) )
          {
            v5._M_current->str_._M_dataplus._M_p = v5._M_current->str_._anon_0._M_local_buf;
            std::string::_M_construct<char *>(
              p_str,
              *(char **)(v69 + 104),
              (char *)(*(_QWORD *)(v69 + 112) + *(_QWORD *)(v69 + 104)),
              (std::forward_iterator_tag)v11);
            goto LABEL_42;
          }
        }
        __asan_report_store8(p_str);
LABEL_42:
        p_bool_value = &v5._M_current->num_value_;
        if ( *(_BYTE *)(((unsigned __int64)&v5._M_current->num_value_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store8(p_bool_value);
        }
        else
        {
          v5._M_current->num_value_ = *(double *)(v69 + 136);
          p_bool_value = &v5._M_current->bool_value_;
          if ( *(char *)(((unsigned __int64)&v5._M_current->bool_value_ >> 3) + 0x7FFF8000) >= 0 )
          {
            v5._M_current->bool_value_ = *(_BYTE *)(v69 + 144);
            p_bool_value = &v5._M_current->is_const_num_node_;
            v24 = *(_BYTE *)(((unsigned __int64)&v5._M_current->is_const_num_node_ >> 3) + 0x7FFF8000);
            if ( v24 > ((LOBYTE(v5._M_current) + 49) & 7) || !v24 )
            {
              v5._M_current->is_const_num_node_ = *(_BYTE *)(v69 + 145);
              p_bool_value = &v5._M_current->priority_;
              v25 = *(_BYTE *)(((unsigned __int64)&v5._M_current->priority_ >> 3) + 0x7FFF8000);
              if ( (char)(((LOBYTE(v5._M_current) + 52) & 7) + 3) < v25 || !v25 )
              {
                v5._M_current->priority_ = *(_DWORD *)(v69 + 148);
                *(_QWORD *)(v69 + 40) += 56LL;
                goto LABEL_115;
              }
LABEL_52:
              __asan_report_store4(p_bool_value);
LABEL_53:
              std::vector<common::tools::MathExpressionNode>::_M_realloc_insert<common::tools::MathExpressionNode const&>(
                (std::vector<common::tools::MathExpressionNode> *const)(v69 + 32),
                v5,
                (const common::tools::MathExpressionNode *)(v69 + 96),
                v11);
              goto LABEL_115;
            }
LABEL_51:
            __asan_report_store1(p_bool_value);
            goto LABEL_52;
          }
        }
        __asan_report_store1(p_bool_value);
        goto LABEL_51;
      }
      *(double *)(v69 + 136) = v5._M_current->num_value_;
      p_num_value = &v5._M_current->bool_value_;
      if ( *(char *)(((unsigned __int64)&v5._M_current->bool_value_ >> 3) + 0x7FFF8000) < 0 )
        goto LABEL_32;
      *(_BYTE *)(v69 + 144) = v5._M_current->bool_value_;
      p_num_value = &v5._M_current->is_const_num_node_;
      v13 = *(_BYTE *)(((unsigned __int64)&v5._M_current->is_const_num_node_ >> 3) + 0x7FFF8000);
      if ( v13 <= ((LOBYTE(v5._M_current) + 49) & 7) && v13 )
        goto LABEL_33;
      *(_BYTE *)(v69 + 145) = v5._M_current->is_const_num_node_;
      p_num_value = &v5._M_current->priority_;
      v14 = *(_BYTE *)(((unsigned __int64)&v5._M_current->priority_ >> 3) + 0x7FFF8000);
      if ( (char)(((LOBYTE(v5._M_current) + 52) & 7) + 3) >= v14 && v14 )
        goto LABEL_34;
      *(_DWORD *)(v69 + 148) = v5._M_current->priority_;
      v15 = *(_DWORD *)(v69 + 96);
      if ( v15 == NODE_NUM )
        goto LABEL_35;
      if ( v15 != NODE_OPERATOR )
      {
        common::milog::MiLogStream::MiLogStream(
          &v77,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/math_expression.cpp",
          "compute",
          410);
        *(_QWORD *)&v78[0].type_ = &v78[0].str_._M_string_length;
        std::string::_M_construct<char *>(
          (std::string *const)v78,
          *(char **)(v69 + 104),
          (char *)(*(_QWORD *)(v69 + 112) + *(_QWORD *)(v69 + 104)),
          v52);
        common::milog::MiLogStream::operator()(&v77, "find error node '%s'", *(const char **)&v78[0].type_);
        if ( *(common::tools::MathExpressionNode **)&v78[0].type_ != (common::tools::MathExpressionNode *)&v78[0].str_._M_string_length )
          operator delete(*(void **)&v78[0].type_);
        common::milog::MiLogStream::~MiLogStream(&v77);
        goto LABEL_135;
      }
      v16 = *(_QWORD *)(v69 + 40);
      if ( (unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * ((__int64)(v16 - *(_QWORD *)(v69 + 32)) >> 3)) <= 1 )
      {
        common::milog::MiLogStream::MiLogStream(
          &v77,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/math_expression.cpp",
          "compute",
          384);
        *(_QWORD *)&v78[0].type_ = &v78[0].str_._M_string_length;
        std::string::_M_construct<char *>(
          (std::string *const)v78,
          *(char **)(v69 + 104),
          (char *)(*(_QWORD *)(v69 + 112) + *(_QWORD *)(v69 + 104)),
          v26);
        common::milog::MiLogStream::operator()(
          &v77,
          "can not find enough target node for operator '%s'",
          *(const char **)&v78[0].type_);
        if ( *(common::tools::MathExpressionNode **)&v78[0].type_ != (common::tools::MathExpressionNode *)&v78[0].str_._M_string_length )
          operator delete(*(void **)&v78[0].type_);
        common::milog::MiLogStream::~MiLogStream(&v77);
        is_meet_error = 0;
        goto LABEL_135;
      }
      v17 = v16 - 56;
      v18 = v16 - 56;
      v19 = *(_BYTE *)(((v16 - 56) >> 3) + 0x7FFF8000);
      if ( v19 && v19 <= 3 )
      {
        __asan_report_load4(v18);
LABEL_58:
        __asan_report_load8(v18);
        goto LABEL_59;
      }
      *(_DWORD *)(v69 + 192) = *(_DWORD *)(v16 - 56);
      *(_QWORD *)(v69 + 200) = v69 + 216;
      v18 = v17 + 8;
      if ( *(_BYTE *)(((v17 + 8) >> 3) + 0x7FFF8000) )
        goto LABEL_58;
      v18 = v17 + 16;
      if ( !*(_BYTE *)(((v17 + 16) >> 3) + 0x7FFF8000) )
      {
        std::string::_M_construct<char *>(
          (std::string *const)(v69 + 200),
          *(char **)(v17 + 8),
          (char *)(*(_QWORD *)(v17 + 16) + *(_QWORD *)(v17 + 8)),
          (std::forward_iterator_tag)-73);
        goto LABEL_60;
      }
LABEL_59:
      __asan_report_load8(v18);
LABEL_60:
      v27 = v17 + 40;
      if ( *(_BYTE *)(((v17 + 40) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v27);
LABEL_72:
        __asan_report_load1(v27);
LABEL_73:
        __asan_report_load1(v27);
LABEL_74:
        __asan_report_load4(v27);
LABEL_75:
        __asan_report_load4(v27);
LABEL_76:
        __asan_report_load8(v27);
        goto LABEL_77;
      }
      *(_QWORD *)(v69 + 232) = *(_QWORD *)(v17 + 40);
      v27 = v17 + 48;
      if ( *(char *)(((v17 + 48) >> 3) + 0x7FFF8000) < 0 )
        goto LABEL_72;
      *(_BYTE *)(v69 + 240) = *(_BYTE *)(v17 + 48);
      v27 = v17 + 49;
      v28 = *(_BYTE *)(((v17 + 49) >> 3) + 0x7FFF8000);
      if ( v28 <= (char)((v17 + 49) & 7) && v28 )
        goto LABEL_73;
      *(_BYTE *)(v69 + 241) = *(_BYTE *)(v17 + 49);
      v27 = v17 + 52;
      v29 = *(_BYTE *)(((v17 + 52) >> 3) + 0x7FFF8000);
      if ( (char)(((v17 + 52) & 7) + 3) >= v29 && v29 )
        goto LABEL_74;
      *(_DWORD *)(v69 + 244) = *(_DWORD *)(v17 + 52);
      v30 = (common::tools::MathExpressionNode *)(*(_QWORD *)(v69 + 40) - 56LL);
      *(_QWORD *)(v69 + 40) = v30;
      common::tools::MathExpressionNode::~MathExpressionNode(v30);
      v32 = *(_QWORD *)(v69 + 40);
      v17 = v32 - 56;
      v27 = v32 - 56;
      v33 = *(_BYTE *)(((v32 - 56) >> 3) + 0x7FFF8000);
      if ( v33 && v33 <= 3 )
        goto LABEL_75;
      *(_DWORD *)(v69 + 288) = *(_DWORD *)(v32 - 56);
      *(_QWORD *)(v69 + 296) = v69 + 312;
      v27 = v17 + 8;
      if ( *(_BYTE *)(((v17 + 8) >> 3) + 0x7FFF8000) )
        goto LABEL_76;
      v27 = v17 + 16;
      if ( !*(_BYTE *)(((v17 + 16) >> 3) + 0x7FFF8000) )
      {
        std::string::_M_construct<char *>(
          (std::string *const)(v69 + 296),
          *(char **)(v17 + 8),
          (char *)(*(_QWORD *)(v17 + 16) + *(_QWORD *)(v17 + 8)),
          v31);
        goto LABEL_78;
      }
LABEL_77:
      __asan_report_load8(v27);
LABEL_78:
      v34 = v17 + 40;
      if ( *(_BYTE *)(((v17 + 40) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v34);
LABEL_86:
        __asan_report_load1(v34);
LABEL_87:
        __asan_report_load1(v34);
        goto LABEL_88;
      }
      *(_QWORD *)(v69 + 328) = *(_QWORD *)(v17 + 40);
      v34 = v17 + 48;
      if ( *(char *)(((v17 + 48) >> 3) + 0x7FFF8000) < 0 )
        goto LABEL_86;
      *(_BYTE *)(v69 + 336) = *(_BYTE *)(v17 + 48);
      v34 = v17 + 49;
      v35 = *(_BYTE *)(((v17 + 49) >> 3) + 0x7FFF8000);
      if ( v35 <= (char)((v17 + 49) & 7) && v35 )
        goto LABEL_87;
      *(_BYTE *)(v69 + 337) = *(_BYTE *)(v17 + 49);
      v34 = v17 + 52;
      v36 = *(_BYTE *)(((v17 + 52) >> 3) + 0x7FFF8000);
      if ( (char)(((v17 + 52) & 7) + 3) < v36 || !v36 )
      {
        *(_DWORD *)(v69 + 340) = *(_DWORD *)(v17 + 52);
        v37 = (common::tools::MathExpressionNode *)(*(_QWORD *)(v69 + 40) - 56LL);
        *(_QWORD *)(v69 + 40) = v37;
        common::tools::MathExpressionNode::~MathExpressionNode(v37);
        v6 = (const common::tools::MathExpression *)is_use_default_value;
        v77.log_ = (common::milog::MiLog *)&v77.ostr_ptr_._M_refcount;
        std::string::_M_construct<char *>(
          (std::string *const)&v77,
          *(char **)(v69 + 104),
          (char *)(*(_QWORD *)(v69 + 112) + *(_QWORD *)(v69 + 104)),
          v38);
        goto LABEL_89;
      }
LABEL_88:
      __asan_report_load4(v34);
LABEL_89:
      v5._M_current = (common::tools::MathExpressionNode *)v77.log_;
      *(_QWORD *)&v78[0].type_ = &v78[0].str_._M_string_length;
      if ( v77.log_ )
        v40 = (__int64)v5._M_current + strlen((const char *)v77.log_);
      else
        v40 = -1LL;
      std::string::_M_construct<char const*>(
        (std::string *const)v78,
        (const char *)v5._M_current,
        (const char *)v40,
        v39);
      v68._M_dataplus._M_p = (std::string::pointer)para_map_ptr;
      common::tools::MathExpression::execOperator(
        (common::tools::MathExpressionNode *)(v69 + 384),
        this,
        v68,
        v78,
        (common::tools::MathExpressionNode *)(v69 + 288),
        v69 - 64,
        para_default_value,
        (std::map<std::string,float> *)(unsigned int)v6);
      if ( *(common::tools::MathExpressionNode **)&v78[0].type_ != (common::tools::MathExpressionNode *)&v78[0].str_._M_string_length )
        operator delete(*(void **)&v78[0].type_);
      if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v77.log_ != &v77.ostr_ptr_._M_refcount )
        operator delete(v77.log_);
      v42 = *(_DWORD *)(v69 + 384);
      if ( v42 != 2 && v42 != 3 )
      {
        common::milog::MiLogStream::MiLogStream(
          &v77,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/math_expression.cpp",
          "compute",
          398);
        *(_QWORD *)&v78[0].type_ = &v78[0].str_._M_string_length;
        std::string::_M_construct<char *>(
          (std::string *const)v78,
          *(char **)(v69 + 104),
          (char *)(*(_QWORD *)(v69 + 112) + *(_QWORD *)(v69 + 104)),
          v51);
        common::milog::MiLogStream::operator()(&v77, "exec '%s' failed", *(const char **)&v78[0].type_);
        if ( *(common::tools::MathExpressionNode **)&v78[0].type_ != (common::tools::MathExpressionNode *)&v78[0].str_._M_string_length )
          operator delete(*(void **)&v78[0].type_);
        common::milog::MiLogStream::~MiLogStream(&v77);
        common::tools::MathExpressionNode::~MathExpressionNode((common::tools::MathExpressionNode *const)(v69 + 384));
        common::tools::MathExpressionNode::~MathExpressionNode((common::tools::MathExpressionNode *const)(v69 + 288));
        common::tools::MathExpressionNode::~MathExpressionNode((common::tools::MathExpressionNode *const)(v69 + 192));
LABEL_135:
        common::tools::MathExpressionNode::~MathExpressionNode((common::tools::MathExpressionNode *const)(v69 + 96));
        goto LABEL_136;
      }
      v5._M_current = *(common::tools::MathExpressionNode **)(v69 + 40);
      if ( v5._M_current == *(common::tools::MathExpressionNode **)(v69 + 48) )
        goto LABEL_128;
      v43 = *(std::string **)(v69 + 40);
      v44 = *(_BYTE *)(((unsigned __int64)v5._M_current >> 3) + 0x7FFF8000);
      if ( v44 && v44 <= 3 )
      {
        __asan_report_store4(v43);
      }
      else
      {
        v5._M_current->type_ = *(_DWORD *)(v69 + 384);
        v43 = &v5._M_current->str_;
        if ( !*(_BYTE *)(((unsigned __int64)&v5._M_current->str_ >> 3) + 0x7FFF8000) )
        {
          v5._M_current->str_._M_dataplus._M_p = v5._M_current->str_._anon_0._M_local_buf;
          std::string::_M_construct<char *>(
            v43,
            *(char **)(v69 + 392),
            (char *)(*(_QWORD *)(v69 + 400) + *(_QWORD *)(v69 + 392)),
            (std::forward_iterator_tag)v41);
          goto LABEL_107;
        }
      }
      __asan_report_store8(v43);
LABEL_107:
      p_is_const_num_node = &v5._M_current->num_value_;
      if ( *(_BYTE *)(((unsigned __int64)&v5._M_current->num_value_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_store8(p_is_const_num_node);
LABEL_125:
        __asan_report_store1(p_is_const_num_node);
LABEL_126:
        __asan_report_store1(p_is_const_num_node);
LABEL_127:
        __asan_report_store4(p_is_const_num_node);
LABEL_128:
        std::vector<common::tools::MathExpressionNode>::_M_realloc_insert<common::tools::MathExpressionNode const&>(
          (std::vector<common::tools::MathExpressionNode> *const)(v69 + 32),
          v5,
          (const common::tools::MathExpressionNode *)(v69 + 384),
          v41);
        goto LABEL_114;
      }
      v5._M_current->num_value_ = *(double *)(v69 + 424);
      p_is_const_num_node = &v5._M_current->bool_value_;
      if ( *(char *)(((unsigned __int64)&v5._M_current->bool_value_ >> 3) + 0x7FFF8000) < 0 )
        goto LABEL_125;
      v5._M_current->bool_value_ = *(_BYTE *)(v69 + 432);
      p_is_const_num_node = &v5._M_current->is_const_num_node_;
      v46 = *(_BYTE *)(((unsigned __int64)&v5._M_current->is_const_num_node_ >> 3) + 0x7FFF8000);
      if ( v46 <= ((LOBYTE(v5._M_current) + 49) & 7) && v46 )
        goto LABEL_126;
      v5._M_current->is_const_num_node_ = *(_BYTE *)(v69 + 433);
      p_is_const_num_node = &v5._M_current->priority_;
      v47 = *(_BYTE *)(((unsigned __int64)&v5._M_current->priority_ >> 3) + 0x7FFF8000);
      if ( (char)(((LOBYTE(v5._M_current) + 52) & 7) + 3) >= v47 && v47 )
        goto LABEL_127;
      v5._M_current->priority_ = *(_DWORD *)(v69 + 436);
      *(_QWORD *)(v69 + 40) += 56LL;
LABEL_114:
      common::tools::MathExpressionNode::~MathExpressionNode((common::tools::MathExpressionNode *const)(v69 + 384));
      common::tools::MathExpressionNode::~MathExpressionNode((common::tools::MathExpressionNode *const)(v69 + 288));
      common::tools::MathExpressionNode::~MathExpressionNode((common::tools::MathExpressionNode *const)(v69 + 192));
LABEL_115:
      common::tools::MathExpressionNode::~MathExpressionNode((common::tools::MathExpressionNode *const)(v69 + 96));
    }
    is_meet_error = 0;
LABEL_136:
    if ( is_meet_error )
      goto LABEL_148;
    v53 = *(_QWORD *)(v69 + 40);
    if ( v53 - *(_QWORD *)(v69 + 32) != 56 )
    {
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)v78,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/math_expression.cpp",
        "compute",
        424);
      if ( *(_BYTE *)(((unsigned __int64)&this->original_expression_str_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->original_expression_str_);
      else
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)v78,
          "get %lu result node from '%s'",
          0x6DB6DB6DB6DB6DB7LL
        * ((__int64)(*(_QWORD *)(v68._anon_0._M_allocated_capacity - 440)
                   - *(_QWORD *)(v68._anon_0._M_allocated_capacity - 448)) >> 3),
          this->original_expression_str_._M_dataplus._M_p);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)v78);
LABEL_148:
      v57 = *(common::tools::MathExpressionNode **)(v68._anon_0._M_allocated_capacity - 448);
      v58 = *(common::tools::MathExpressionNode **)(v68._anon_0._M_allocated_capacity - 440);
      while ( v58 != v57 )
        common::tools::MathExpressionNode::~MathExpressionNode(v57++);
      v66 = *(void **)(v68._anon_0._M_allocated_capacity - 448);
      if ( v66 )
        operator delete(v66);
      break;
    }
    v54 = (common::tools::MathExpressionNode *)(v53 - 56);
    v55 = *(_BYTE *)(((v53 - 56) >> 3) + 0x7FFF8000);
    if ( v55 && v55 <= 3 )
    {
      __asan_report_load4(v54);
    }
    else
    {
      v54 = retstr;
      v56 = *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000);
      if ( !v56 || v56 > 3 )
      {
        retstr->type_ = *(_DWORD *)(v53 - 56);
        std::string::_M_assign(&retstr->str_, v53 - 48);
        goto LABEL_153;
      }
    }
    __asan_report_store4(v54);
LABEL_153:
    p_priority = (void *)(v53 - 16);
    if ( *(_BYTE *)(((v53 - 16) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_priority);
LABEL_169:
      __asan_report_store8(p_priority);
LABEL_170:
      __asan_report_load1(p_priority);
LABEL_171:
      __asan_report_store1(p_priority);
LABEL_172:
      __asan_report_load1(p_priority);
LABEL_173:
      __asan_report_store1(p_priority);
LABEL_174:
      __asan_report_load4(p_priority);
LABEL_175:
      __asan_report_store4(p_priority);
      goto LABEL_176;
    }
    p_priority = &retstr->num_value_;
    if ( *(_BYTE *)(((unsigned __int64)&retstr->num_value_ >> 3) + 0x7FFF8000) )
      goto LABEL_169;
    retstr->num_value_ = *(double *)(v53 - 16);
    p_priority = (void *)(v53 - 8);
    if ( *(char *)(((v53 - 8) >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_170;
    p_priority = &retstr->bool_value_;
    if ( *(char *)(((unsigned __int64)&retstr->bool_value_ >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_171;
    retstr->bool_value_ = *(_BYTE *)(v53 - 8);
    p_priority = (void *)(v53 - 7);
    v60 = *(_BYTE *)(((v53 - 7) >> 3) + 0x7FFF8000);
    if ( v60 <= (char)((v53 - 7) & 7) && v60 )
      goto LABEL_172;
    p_priority = &retstr->is_const_num_node_;
    v61 = *(_BYTE *)(((unsigned __int64)&retstr->is_const_num_node_ >> 3) + 0x7FFF8000);
    if ( v61 <= (((unsigned __int8)retstr + 49) & 7) && v61 )
      goto LABEL_173;
    retstr->is_const_num_node_ = *(_BYTE *)(v53 - 7);
    p_priority = (void *)(v53 - 4);
    v62 = *(_BYTE *)(((v53 - 4) >> 3) + 0x7FFF8000);
    if ( (char)(((v53 - 4) & 7) + 3) >= v62 && v62 )
      goto LABEL_174;
    p_priority = &retstr->priority_;
    v63 = *(_BYTE *)(((unsigned __int64)&retstr->priority_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)retstr + 52) & 7) + 3) >= v63 && v63 )
      goto LABEL_175;
    retstr->priority_ = *(_DWORD *)(v53 - 4);
    v5._M_current = *(common::tools::MathExpressionNode **)(v69 + 40);
    v64 = *(common::tools::MathExpressionNode **)(v69 + 32);
    v6 = this;
    while ( v5._M_current != v64 )
      common::tools::MathExpressionNode::~MathExpressionNode(v64++);
LABEL_176:
    this = v6;
    v65 = *(void **)(v69 + 32);
    if ( v65 )
      operator delete(v65);
  }
  if ( *(&v68._anon_0._M_allocated_capacity + 1) == v69 )
  {
    *(_QWORD *)((v69 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v69 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v69 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v69 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v69 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v69 >> 3) + 0x7FFF8034) = 0LL;
  }
  else
  {
    *(_QWORD *)v69 = 1172321806LL;
    *(_QWORD *)((v69 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v69 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v69 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v69 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v69 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v69 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v69 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v69 >> 3) + 0x7FFF8038) = -168430091;
  }
  return retstr;
};

// Line 458: range 0000000019B51190-0000000019B514DD
int __fastcall common::tools::MathExpression::expressionRewrite(
        common::tools::MathExpression *const this,
        std::string *expression_str)
{
  char v2; // r14
  std::string::size_type i; // r15
  __int64 v4; // rax
  __int64 v5; // r12
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  char *v8; // r12
  char *v9; // rdi
  char v10; // al
  char v11; // al
  unsigned __int64 v12; // rax
  unsigned __int64 p_M_string_length; // rdi
  char v14; // dl
  char *v15; // r12
  char v16; // al
  char v17; // al
  char *v18; // rdi
  unsigned __int64 v20; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v21; // [rsp+18h] [rbp-A0h]
  char v22[152]; // [rsp+20h] [rbp-98h] BYREF

  v20 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v20 = v4;
  }
  *(_QWORD *)v20 = 1102416563LL;
  *(_QWORD *)(v20 + 8) = "1 32 32 7 str:459";
  *(_QWORD *)(v20 + 16) = common::tools::MathExpression::expressionRewrite;
  v21 = v20 >> 3;
  *(_DWORD *)(v21 + 2147450880) = -235802127;
  *(_DWORD *)(v21 + 2147450888) = -202116109;
  *(_QWORD *)(v20 + 32) = v20 + 48;
  *(_QWORD *)(v20 + 40) = 0LL;
  *(_BYTE *)(v20 + 48) = 0;
  for ( i = 0LL; ; ++i )
  {
    p_M_string_length = (unsigned __int64)&expression_str->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&expression_str->_M_string_length >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_string_length);
LABEL_6:
      __asan_report_load8(p_M_string_length);
LABEL_7:
      __asan_report_load1(p_M_string_length);
      goto LABEL_8;
    }
    if ( i >= expression_str->_M_string_length )
      goto LABEL_41;
    p_M_string_length = (unsigned __int64)expression_str;
    if ( *(_BYTE *)(((unsigned __int64)expression_str >> 3) + 0x7FFF8000) )
      goto LABEL_6;
    p_M_string_length = (unsigned __int64)&expression_str->_M_dataplus._M_p[i];
    v14 = *(_BYTE *)((p_M_string_length >> 3) + 0x7FFF8000);
    if ( v14 <= (char)((LOBYTE(expression_str->_M_dataplus._M_p) + i) & 7) && v14 )
      goto LABEL_7;
    v2 = expression_str->_M_dataplus._M_p[i];
    if ( v2 != 32 )
      break;
LABEL_23:
    ;
  }
  if ( v2 > 96 && v2 <= 122 )
  {
LABEL_8:
    v2 -= 32;
    v5 = *(_QWORD *)(v20 + 40);
    v6 = v5 + 1;
    if ( *(_QWORD *)(v20 + 32) == v20 + 48 )
      v7 = 15LL;
    else
      v7 = *(_QWORD *)(v20 + 48);
    if ( v6 > v7 )
      std::string::_M_mutate(v20 + 32, *(_QWORD *)(v20 + 40), 0LL, 0LL, 1LL);
    v8 = (char *)(*(_QWORD *)(v20 + 32) + v5);
    v9 = v8;
    v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
    if ( v10 <= ((unsigned __int8)v8 & 7) && v10 )
    {
      __asan_report_store1(v8);
    }
    else
    {
      *v8 = v2;
      *(_QWORD *)(v20 + 40) = v6;
      v6 += *(_QWORD *)(v20 + 32);
      v9 = (char *)v6;
      v11 = *(_BYTE *)((v6 >> 3) + 0x7FFF8000);
      if ( v11 > (char)(v6 & 7) || !v11 )
      {
        *(_BYTE *)v6 = 0;
        goto LABEL_23;
      }
    }
    __asan_report_store1(v9);
    goto LABEL_20;
  }
  v8 = *(char **)(v20 + 40);
  v6 = (unsigned __int64)(v8 + 1);
  if ( *(_QWORD *)(v20 + 32) == v20 + 48 )
  {
LABEL_20:
    v12 = 15LL;
    goto LABEL_34;
  }
  v12 = *(_QWORD *)(v20 + 48);
LABEL_34:
  if ( v6 > v12 )
    std::string::_M_mutate(v20 + 32, v8, 0LL, 0LL, 1LL);
  v15 = &v8[*(_QWORD *)(v20 + 32)];
  v16 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
  if ( v16 <= ((unsigned __int8)v15 & 7) && v16 )
  {
    __asan_report_store1(v15);
LABEL_22:
    *(_BYTE *)v6 = 0;
    goto LABEL_23;
  }
  *v15 = v2;
  *(_QWORD *)(v20 + 40) = v6;
  v6 += *(_QWORD *)(v20 + 32);
  v17 = *(_BYTE *)((v6 >> 3) + 0x7FFF8000);
  if ( v17 > (char)(v6 & 7) || !v17 )
    goto LABEL_22;
  __asan_report_store1(v6);
LABEL_41:
  std::string::_M_assign(expression_str, v20 + 32);
  v18 = *(char **)(v20 + 32);
  if ( v18 != (char *)(v20 + 48) )
    operator delete(v18);
  if ( v22 == (char *)v20 )
  {
    *(_DWORD *)((v20 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v20 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v20 = 1172321806LL;
    *(_QWORD *)((v20 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v20 >> 3) + 0x7FFF8008) = -168430091;
  }
  return 0;
};

// Line 481: range 0000000019B5527E-0000000019B56BF6
int __fastcall common::tools::MathExpression::splitExpressionToNodeVec(
        common::tools::MathExpression *const this,
        std::string *expression_str,
        common::tools::MathExpression::NodeVec *node_vec)
{
  std::string::size_type j; // rbp
  std::string::size_type v4; // r12
  std::string::size_type M_parent; // r13
  unsigned __int64 v6; // r14
  double v7; // xmm0_8
  std::string *v8; // r15
  std::string::size_type v9; // rbx
  std::_Rb_tree_node_base::_Base_ptr *p_M_left; // rdi
  common::tools::MathExpression *i; // rax
  __int64 v12; // rax
  unsigned __int64 p_M_node_count; // rax
  std::_Rb_tree_node_base::_Base_ptr *p_M_parent; // rdi
  char v15; // al
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v16; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v17; // r9
  unsigned __int64 v18; // rdx
  size_t *v19; // rcx
  size_t *v20; // rdi
  size_t v21; // rcx
  int v22; // eax
  __int64 v23; // rdi
  char v24; // cl
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr M_node; // rax
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr v26; // rdx
  const std::piecewise_construct_t *v27; // r9
  size_t *v28; // rcx
  int v29; // eax
  char v30; // cl
  __int64 v31; // rax
  char v32; // al
  size_t *v33; // rdi
  size_t v34; // rcx
  int v35; // ebx
  __int64 M_string_length; // rdi
  std::_Rb_tree_node_base *v38; // r12
  std::string::size_type *p_M_string_length; // rdi
  const common::tools::MathExpressionNode *v40; // rcx
  std::string::size_type v41; // r12
  std::string::size_type *v42; // rdi
  std::string *v43; // rdi
  char v44; // dl
  char v45; // al
  std::forward_iterator_tag v46; // cl
  std::string::size_type v47; // r14
  unsigned __int64 v48; // r14
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v49; // rax
  unsigned __int64 v50; // rdi
  char v51; // al
  std::string::size_type *v52; // rdi
  __int64 v53; // r14
  bool v54; // cf
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v55; // rax
  unsigned __int64 v56; // rdi
  char v57; // dl
  __int64 v58; // rax
  char v59; // dl
  __int64 v60; // rdi
  char v61; // al
  char v62; // dl
  int v63; // eax
  unsigned __int64 v64; // rdi
  char v65; // al
  std::string::size_type *v66; // rdi
  unsigned int v67; // eax
  const common::tools::MathExpressionNode *v68; // rcx
  std::string *v69; // rdi
  char v70; // al
  char *v71; // rdi
  char v72; // al
  char v73; // dl
  std::string *v74; // rdi
  char v75; // al
  char *v76; // rdi
  char v77; // al
  char v78; // dl
  std::forward_iterator_tag v79; // cl
  std::vector<common::tools::MathExpressionNode>::iterator v80; // rbp
  void *v81; // rdi
  common::tools::MathExpressionNode *M_current; // rbx
  int v83; // eax
  const common::tools::MathExpressionNode *v84; // rcx
  __int64 v85; // rdi
  char v86; // al
  std::string *p_str; // rdi
  void *p_num_value; // rdi
  char v89; // al
  char v90; // dl
  std::string v91; // [rsp+0h] [rbp-298h]
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr __pos; // [rsp+28h] [rbp-270h]
  unsigned __int64 v94; // [rsp+30h] [rbp-268h]
  _DWORD *v95; // [rsp+40h] [rbp-258h]
  std::tuple<> v96; // [rsp+5Fh] [rbp-239h] BYREF
  std::string __k; // [rsp+60h] [rbp-238h] BYREF
  common::milog::MiLogStream v98; // [rsp+80h] [rbp-218h] BYREF
  char v99[504]; // [rsp+A0h] [rbp-1F8h] BYREF

  v8 = expression_str;
  v91._M_string_length = (std::string::size_type)node_vec;
  v94 = (unsigned __int64)v99;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_3(448LL);
    if ( v12 )
      v94 = v12;
  }
  v9 = v94 + 448;
  *(_QWORD *)v94 = 1102416563LL;
  *(_QWORD *)(v94 + 8) = "6 32 8 6 __size 64 8 7 __osize 96 48 18 operator_map_1:483 176 48 18 operator_map_2:484 256 56 "
                         "13 next_node:510 352 56 12 num_node:619";
  *(_QWORD *)(v94 + 16) = common::tools::MathExpression::splitExpressionToNodeVec;
  v95 = (_DWORD *)(v94 >> 3);
  v95[536862720] = -235802127;
  v95[536862721] = -218959360;
  v95[536862722] = -218959360;
  v95[536862724] = -219021312;
  v95[536862725] = 62194;
  v95[536862727] = -218959118;
  v95[536862729] = -234881024;
  v95[536862730] = -218959118;
  v95[536862732] = -218103808;
  v95[536862733] = -202116109;
  *(_DWORD *)(v94 + 104) = 0;
  *(_QWORD *)(v94 + 112) = 0LL;
  *(_QWORD *)(v94 + 120) = v94 + 104;
  *(_QWORD *)(v94 + 128) = v94 + 104;
  *(_QWORD *)(v94 + 136) = 0LL;
  *(_DWORD *)(v94 + 184) = 0;
  *(_QWORD *)(v94 + 192) = 0LL;
  *(_QWORD *)(v94 + 200) = v94 + 184;
  *(_QWORD *)(v94 + 208) = v94 + 184;
  *(_QWORD *)(v94 + 216) = 0LL;
  p_M_left = &this->operator_map_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&this->operator_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
    p_M_node_count = __asan_report_load8(p_M_left);
    goto LABEL_7;
  }
  for ( i = (common::tools::MathExpression *)this->operator_map_._M_t._M_impl._M_header._M_left;
        ;
        i = (common::tools::MathExpression *)std::_Rb_tree_increment((std::_Rb_tree_node_base *)j) )
  {
    j = (std::string::size_type)i;
    if ( &this->operator_map_._M_t._M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)i )
      break;
    p_M_node_count = (unsigned __int64)&i->operator_map_._M_t._M_impl._M_node_count;
    if ( *(_BYTE *)((p_M_node_count >> 3) + 0x7FFF8000) )
    {
LABEL_7:
      __asan_report_load8(p_M_node_count);
LABEL_8:
      p_M_parent = (std::_Rb_tree_node_base::_Base_ptr *)(j + 64);
      v15 = *(_BYTE *)(((j + 64) >> 3) + 0x7FFF8000);
      if ( v15 && v15 <= 3 )
      {
        v7 = __asan_report_load4(p_M_parent);
      }
      else
      {
        *((_DWORD *)&v91._anon_0._M_allocated_capacity + 3) = *(_DWORD *)(j + 64);
        v4 = j + 32;
        M_parent = v94 + 104;
        v16._M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_lower_bound(
                        (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > > *const)(v94 + 96),
                        *(std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type *)(v94 + 112),
                        (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Base_ptr)(v94 + 104),
                        (const std::string *)(j + 32))._M_node;
        *(std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator *)v91._anon_0._M_local_buf = v16;
        __pos = v16._M_node;
        if ( v16._M_node == (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)(v94 + 104) )
          goto LABEL_24;
        v18 = (unsigned __int64)&v16._M_node[1];
        p_M_parent = (std::_Rb_tree_node_base::_Base_ptr *)(j + 40);
        if ( !*(_BYTE *)(((j + 40) >> 3) + 0x7FFF8000) )
        {
          v6 = *(_QWORD *)(j + 40);
          *(_QWORD *)(v94 + 32) = v6;
          p_M_parent = &v16._M_node[1]._M_parent;
          if ( !*(_BYTE *)(((unsigned __int64)&v16._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
          {
            M_parent = (std::string::size_type)v16._M_node[1]._M_parent;
            *(_QWORD *)(v94 + 64) = M_parent;
            if ( v6 <= M_parent )
            {
              v19 = (size_t *)(v94 + 32);
              goto LABEL_15;
            }
LABEL_28:
            v19 = (size_t *)(v94 + 64);
LABEL_15:
            v20 = v19;
            if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v19);
            }
            else
            {
              v21 = *v19;
              v20 = (size_t *)v18;
              if ( !*(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
              {
                v20 = (size_t *)v4;
                if ( !*(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
                {
                  if ( !v21
                    || (v22 = memcmp(*(const void **)(j + 32), *(const void **)&v16._M_node[1]._M_color, v21)) == 0 )
                  {
                    v6 -= M_parent;
                    if ( (__int64)v6 <= 0x7FFFFFFF )
                    {
                      if ( (__int64)v6 < (__int64)0xFFFFFFFF80000000LL )
                        v22 = 0x80000000;
                      else
                        v22 = v6;
                      goto LABEL_23;
                    }
LABEL_32:
                    v22 = 0x7FFFFFFF;
                  }
LABEL_23:
                  if ( v22 < 0 )
                  {
LABEL_24:
                    *(_QWORD *)(v94 + 64) = v4;
                    *(std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator *)v91._anon_0._M_local_buf = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string const&>,std::tuple<>>((std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > > *const)(v94 + 96), (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::const_iterator)__pos, &std::piecewise_construct, (std::tuple<const std::string&> *)(v94 + 64), &v96, (const std::piecewise_construct_t *)v17._M_node, (std::tuple<const std::string&> *)v91._M_dataplus._M_p, (std::tuple<> *)v91._M_string_length);
                  }
                  v23 = v91._anon_0._M_allocated_capacity + 64;
                  v24 = *(_BYTE *)(((v91._anon_0._M_allocated_capacity + 64) >> 3) + 0x7FFF8000);
                  if ( (char)(((v91._anon_0._M_local_buf[0] + 64) & 7) + 3) < v24 || !v24 )
                  {
                    *(_DWORD *)(v91._anon_0._M_allocated_capacity + 64) = *((_DWORD *)&v91._anon_0._M_allocated_capacity
                                                                          + 3);
                    continue;
                  }
                  __asan_report_store4(v23);
LABEL_38:
                  v7 = __asan_report_load4(v23);
                  goto LABEL_39;
                }
LABEL_31:
                __asan_report_load8(v20);
                goto LABEL_32;
              }
            }
            __asan_report_load8(v20);
            goto LABEL_31;
          }
LABEL_27:
          v16._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)__asan_report_load8(p_M_parent);
          goto LABEL_28;
        }
      }
      __asan_report_load8(p_M_parent);
      goto LABEL_27;
    }
    v31 = *(_QWORD *)(j + 40);
    if ( v31 == 1 )
      goto LABEL_8;
    if ( v31 != 2 )
      goto LABEL_73;
    v23 = j + 64;
    v32 = *(_BYTE *)(((j + 64) >> 3) + 0x7FFF8000);
    if ( v32 && v32 <= 3 )
      goto LABEL_38;
    *((_DWORD *)&v91._anon_0._M_allocated_capacity + 3) = *(_DWORD *)(j + 64);
    v4 = j + 32;
    M_parent = v94 + 184;
    M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_lower_bound(
               (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > > *const)(v94 + 176),
               *(std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type *)(v94 + 192),
               (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Base_ptr)(v94 + 184),
               (const std::string *)(j + 32))._M_node;
    v91._anon_0._M_allocated_capacity = (std::string::size_type)M_node;
    __pos = M_node;
    if ( M_node != (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)(v94 + 184) )
    {
      v26 = M_node + 1;
      v23 = j + 40;
      if ( !*(_BYTE *)(((j + 40) >> 3) + 0x7FFF8000) )
      {
        v6 = *(_QWORD *)(j + 40);
        *(_QWORD *)(v94 + 32) = v6;
        v23 = (__int64)&M_node[1]._M_parent;
        if ( !*(_BYTE *)(((unsigned __int64)&M_node[1]._M_parent >> 3) + 0x7FFF8000) )
        {
          M_parent = (std::string::size_type)M_node[1]._M_parent;
          *(_QWORD *)(v94 + 64) = M_parent;
          if ( v6 <= M_parent )
          {
            v28 = (size_t *)(v94 + 32);
LABEL_62:
            v33 = v28;
            if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v28);
            }
            else
            {
              v34 = *v28;
              v33 = (size_t *)v26;
              if ( !*(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
              {
                v33 = (size_t *)v4;
                if ( !*(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
                {
                  if ( v34 )
                  {
                    v29 = memcmp(*(const void **)(j + 32), *(const void **)&M_node[1]._M_color, v34);
                    if ( v29 )
                    {
LABEL_70:
                      if ( v29 >= 0 )
                        goto LABEL_47;
                      goto LABEL_71;
                    }
                  }
                  v6 -= M_parent;
                  if ( (__int64)v6 <= 0x7FFFFFFF )
                  {
                    if ( (__int64)v6 < (__int64)0xFFFFFFFF80000000LL )
                      v29 = 0x80000000;
                    else
                      v29 = v6;
                    goto LABEL_70;
                  }
LABEL_45:
                  v29 = 0x7FFFFFFF;
                  goto LABEL_70;
                }
LABEL_44:
                __asan_report_load8(v33);
                goto LABEL_45;
              }
            }
            __asan_report_load8(v33);
            goto LABEL_44;
          }
LABEL_41:
          v28 = (size_t *)(v94 + 64);
          goto LABEL_62;
        }
LABEL_40:
        M_node = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)__asan_report_load8(v23);
        goto LABEL_41;
      }
LABEL_39:
      __asan_report_load8(v23);
      goto LABEL_40;
    }
LABEL_71:
    *(_QWORD *)(v94 + 64) = v4;
    *(std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator *)v91._anon_0._M_local_buf = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string const&>,std::tuple<>>((std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > > *const)(v94 + 176), (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::const_iterator)__pos, &std::piecewise_construct, (std::tuple<const std::string&> *)(v94 + 64), &v96, v27, (std::tuple<const std::string&> *)v91._M_dataplus._M_p, (std::tuple<> *)v91._M_string_length);
LABEL_47:
    v30 = *(_BYTE *)(((v91._anon_0._M_allocated_capacity + 64) >> 3) + 0x7FFF8000);
    if ( (char)(((v91._anon_0._M_local_buf[0] + 64) & 7) + 3) >= v30 && v30 )
    {
      __asan_report_store4(v91._anon_0._M_allocated_capacity + 64);
LABEL_73:
      common::milog::MiLogStream::MiLogStream(
        &v98,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/math_expression.cpp",
        "splitExpressionToNodeVec",
        497);
      if ( *(_BYTE *)(((j + 32) >> 3) + 0x7FFF8000) )
        __asan_report_load8(j + 32);
      else
        common::milog::MiLogStream::operator()(&v98, "find error operator '%s'", *(const char **)(j + 32));
      common::milog::MiLogStream::~MiLogStream(&v98);
      v35 = -1;
      goto LABEL_77;
    }
    *(_DWORD *)(v91._anon_0._M_allocated_capacity + 64) = *((_DWORD *)&v91._anon_0._M_allocated_capacity + 3);
  }
  if ( *(_BYTE *)((v91._M_string_length >> 3) + 0x7FFF8000) )
  {
    M_string_length = v91._M_string_length;
    __asan_report_load8(v91._M_string_length);
    goto LABEL_87;
  }
  M_parent = *(_QWORD *)v91._M_string_length;
  M_string_length = v91._M_string_length + 8;
  if ( *(_BYTE *)(((v91._M_string_length + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_87:
    __asan_report_load8(M_string_length);
    goto LABEL_88;
  }
  v38 = *(std::_Rb_tree_node_base **)(v91._M_string_length + 8);
  if ( (std::_Rb_tree_node_base *)M_parent != v38 )
  {
    for ( j = *(_QWORD *)v91._M_string_length; (std::_Rb_tree_node_base *)j != v38; j += 56LL )
      common::tools::MathExpressionNode::~MathExpressionNode((common::tools::MathExpressionNode *const)j);
LABEL_88:
    p_M_string_length = (std::string::size_type *)(v91._M_string_length + 8);
    if ( *(_BYTE *)(((v91._M_string_length + 8) >> 3) + 0x7FFF8000) )
    {
      v7 = __asan_report_store8(p_M_string_length);
      goto LABEL_92;
    }
    *(_QWORD *)(v91._M_string_length + 8) = M_parent;
  }
  M_parent = 0LL;
  j = 0LL;
  while ( 2 )
  {
    p_M_string_length = &expression_str->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&expression_str->_M_string_length >> 3) + 0x7FFF8000) )
    {
LABEL_92:
      __asan_report_load8(p_M_string_length);
      goto LABEL_93;
    }
    if ( j >= expression_str->_M_string_length )
    {
      if ( j <= M_parent )
      {
        v35 = 0;
        goto LABEL_77;
      }
      common::tools::MathExpressionNode::MathExpressionNode((common::tools::MathExpressionNode *const)(v94 + 352));
      v80._M_current = (common::tools::MathExpressionNode *)(j - M_parent);
      v81 = &expression_str->_M_string_length;
      if ( *(_BYTE *)(((unsigned __int64)&expression_str->_M_string_length >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v81);
      }
      else
      {
        v9 = expression_str->_M_string_length;
        if ( M_parent <= v9 )
        {
          v98.log_ = (common::milog::MiLog *)&v98.ostr_ptr_._M_refcount;
          if ( *(_BYTE *)(((unsigned __int64)expression_str >> 3) + 0x7FFF8000) )
          {
            v81 = expression_str;
            __asan_report_load8(expression_str);
          }
          else
          {
            v9 = expression_str->_M_string_length;
            if ( M_parent <= v9 )
            {
              M_current = (common::tools::MathExpressionNode *)(v9 - M_parent);
              if ( v80._M_current < M_current )
                M_current = v80._M_current;
              std::string::_M_construct<char const*>(
                (std::string *const)&v98,
                &expression_str->_M_dataplus._M_p[M_parent],
                &expression_str->_M_dataplus._M_p[M_parent + (unsigned __int64)M_current],
                v79);
              v83 = common::tools::MathExpressionNode::initToNum(
                      (common::tools::MathExpressionNode *const)(v94 + 352),
                      (unsigned __int64)&v98);
              v35 = v83;
              if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v98.log_ != &v98.ostr_ptr_._M_refcount )
                operator delete(v98.log_);
              if ( v35 )
              {
                common::milog::MiLogStream::MiLogStream(
                  &v98,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "src/math_expression.cpp",
                  "splitExpressionToNodeVec",
                  622);
                common::milog::MiLogStream::operator()(&v98, "init num node failed");
                common::milog::MiLogStream::~MiLogStream(&v98);
                common::tools::MathExpressionNode::~MathExpressionNode((common::tools::MathExpressionNode *const)(v94 + 352));
                v35 = -1;
                goto LABEL_77;
              }
              v85 = v91._M_string_length + 8;
              if ( *(_BYTE *)(((v91._M_string_length + 8) >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(v85);
              }
              else
              {
                v80._M_current = *(common::tools::MathExpressionNode **)(v91._M_string_length + 8);
                v85 = v91._M_string_length + 16;
                if ( !*(_BYTE *)(((v91._M_string_length + 16) >> 3) + 0x7FFF8000) )
                {
                  if ( v80._M_current == *(common::tools::MathExpressionNode **)(v91._M_string_length + 16) )
                  {
LABEL_306:
                    std::vector<common::tools::MathExpressionNode>::_M_realloc_insert<common::tools::MathExpressionNode const&>(
                      (std::vector<common::tools::MathExpressionNode> *const)v91._M_string_length,
                      v80,
                      (const common::tools::MathExpressionNode *)(v94 + 352),
                      v84);
                    goto LABEL_301;
                  }
                  v86 = *(_BYTE *)(((unsigned __int64)v80._M_current >> 3) + 0x7FFF8000);
                  if ( !v86 || v86 > 3 )
                  {
                    v80._M_current->type_ = *(_DWORD *)(v94 + 352);
                    p_str = &v80._M_current->str_;
                    if ( !*(_BYTE *)(((unsigned __int64)&v80._M_current->str_ >> 3) + 0x7FFF8000) )
                    {
                      v80._M_current->str_._M_dataplus._M_p = v80._M_current->str_._anon_0._M_local_buf;
                      v8 = (std::string *)(v94 + 448);
                      std::string::_M_construct<char *>(
                        p_str,
                        *(char **)(v94 + 360),
                        (char *)(*(_QWORD *)(v94 + 368) + *(_QWORD *)(v94 + 360)),
                        (std::forward_iterator_tag)v84);
                      goto LABEL_294;
                    }
LABEL_293:
                    __asan_report_store8(p_str);
LABEL_294:
                    p_num_value = &v80._M_current->num_value_;
                    if ( *(_BYTE *)(((unsigned __int64)&v80._M_current->num_value_ >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store8(p_num_value);
                    }
                    else
                    {
                      *(_QWORD *)&v80._M_current->num_value_ = v8[-2]._M_string_length;
                      p_num_value = &v80._M_current->bool_value_;
                      if ( *(char *)(((unsigned __int64)&v80._M_current->bool_value_ >> 3) + 0x7FFF8000) >= 0 )
                      {
                        v80._M_current->bool_value_ = *(_BYTE *)(v94 + 400);
                        p_num_value = &v80._M_current->is_const_num_node_;
                        v89 = *(_BYTE *)(((unsigned __int64)&v80._M_current->is_const_num_node_ >> 3) + 0x7FFF8000);
                        if ( v89 > ((LOBYTE(v80._M_current) + 49) & 7) || !v89 )
                        {
                          v80._M_current->is_const_num_node_ = *(_BYTE *)(v94 + 401);
                          p_num_value = &v80._M_current->priority_;
                          v90 = *(_BYTE *)(((unsigned __int64)&v80._M_current->priority_ >> 3) + 0x7FFF8000);
                          if ( (char)(((LOBYTE(v80._M_current) + 52) & 7) + 3) < v90 || !v90 )
                          {
                            v80._M_current->priority_ = *(_DWORD *)(v94 + 404);
                            *(_QWORD *)(v91._M_string_length + 8) += 56LL;
LABEL_301:
                            common::tools::MathExpressionNode::~MathExpressionNode((common::tools::MathExpressionNode *const)(v94 + 352));
                            goto LABEL_77;
                          }
                          goto LABEL_305;
                        }
LABEL_304:
                        __asan_report_store1(p_num_value);
LABEL_305:
                        __asan_report_store4(p_num_value);
                        goto LABEL_306;
                      }
                    }
                    __asan_report_store1(p_num_value);
                    goto LABEL_304;
                  }
LABEL_292:
                  p_str = (std::string *)v80._M_current;
                  __asan_report_store4(v80._M_current);
                  goto LABEL_293;
                }
              }
              __asan_report_load8(v85);
              goto LABEL_292;
            }
          }
          __asan_handle_no_return(v81);
          std::__throw_out_of_range_fmt(
            "%s: __pos (which is %zu) > this->size() (which is %zu)",
            "basic_string::basic_string",
            M_parent,
            v9);
        }
      }
      __asan_handle_no_return(v81);
      std::__throw_out_of_range_fmt(
        "%s: __pos (which is %zu) > this->size() (which is %zu)",
        "basic_string::substr",
        M_parent,
        v9);
    }
    common::tools::MathExpressionNode::MathExpressionNode((common::tools::MathExpressionNode *const)(v94 + 256));
LABEL_93:
    v41 = j + 1;
    v42 = &expression_str->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&expression_str->_M_string_length >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v42);
    }
    else if ( v41 >= expression_str->_M_string_length )
    {
      goto LABEL_95;
    }
    v47 = expression_str->_M_string_length;
    if ( j > v47 )
    {
      __asan_handle_no_return(v42);
      std::__throw_out_of_range_fmt(
        "%s: __pos (which is %zu) > this->size() (which is %zu)",
        "basic_string::substr",
        j,
        v47);
    }
    __k._M_dataplus._M_p = __k._anon_0._M_local_buf;
    if ( *(_BYTE *)(((unsigned __int64)expression_str >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(expression_str);
LABEL_114:
      __asan_handle_no_return(expression_str);
      std::__throw_out_of_range_fmt(
        "%s: __pos (which is %zu) > this->size() (which is %zu)",
        "basic_string::basic_string",
        j,
        v47);
    }
    v47 = expression_str->_M_string_length;
    if ( j > v47 )
      goto LABEL_114;
    v48 = v47 - j;
    if ( v48 > 2 )
      v48 = 2LL;
    std::string::_M_construct<char const*>(
      &__k,
      &expression_str->_M_dataplus._M_p[j],
      &expression_str->_M_dataplus._M_p[j + v48],
      (std::forward_iterator_tag)v40);
    v49._M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::find(
                    (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > > *const)(v94 + 176),
                    &__k)._M_node;
    v6 = (unsigned __int64)v49._M_node;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__k._M_dataplus._M_p != &__k._anon_0 )
      operator delete(__k._M_dataplus._M_p);
    if ( v6 == v94 + 184 )
      goto LABEL_95;
    v50 = v6 + 64;
    v51 = *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000);
    if ( v51 && v51 <= 3 )
    {
      v7 = __asan_report_load4(v50);
      goto LABEL_124;
    }
    *(_DWORD *)v91._anon_0._M_local_buf = *(_DWORD *)(v6 + 64);
    v98.log_ = (common::milog::MiLog *)&v98.ostr_ptr_._M_refcount;
    v50 = v6 + 32;
    if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) )
    {
LABEL_124:
      __asan_report_load8(v50);
      goto LABEL_125;
    }
    v50 = v6 + 40;
    if ( !*(_BYTE *)(((v6 + 40) >> 3) + 0x7FFF8000) )
    {
      std::string::_M_construct<char *>(
        (std::string *const)&v98,
        *(char **)(v6 + 32),
        (char *)(*(_QWORD *)(v6 + 40) + *(_QWORD *)(v6 + 32)),
        (std::forward_iterator_tag)v40);
      goto LABEL_126;
    }
LABEL_125:
    __asan_report_load8(v50);
LABEL_126:
    v6 = (unsigned int)common::tools::MathExpressionNode::initToOperator(
                         (common::tools::MathExpressionNode *const)(v94 + 256),
                         v91,
                         (uint32_t)&v98);
    if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v98.log_ != &v98.ostr_ptr_._M_refcount )
      operator delete(v98.log_);
    if ( (_DWORD)v6 )
    {
      common::milog::MiLogStream::MiLogStream(
        &v98,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/math_expression.cpp",
        "splitExpressionToNodeVec",
        520);
      common::milog::MiLogStream::operator()(&v98, "init operator node failed", v7);
      common::milog::MiLogStream::~MiLogStream(&v98);
      goto LABEL_218;
    }
LABEL_95:
    if ( *(_DWORD *)(v94 + 256) )
      goto LABEL_96;
    v52 = &expression_str->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&expression_str->_M_string_length >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v52);
LABEL_138:
      __asan_handle_no_return(v52);
      std::__throw_out_of_range_fmt(
        "%s: __pos (which is %zu) > this->size() (which is %zu)",
        "basic_string::substr",
        j,
        v6);
    }
    v6 = expression_str->_M_string_length;
    if ( j > v6 )
      goto LABEL_138;
    v98.log_ = (common::milog::MiLog *)&v98.ostr_ptr_._M_refcount;
    if ( *(_BYTE *)(((unsigned __int64)expression_str >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(expression_str);
LABEL_140:
      __asan_handle_no_return(expression_str);
      std::__throw_out_of_range_fmt(
        "%s: __pos (which is %zu) > this->size() (which is %zu)",
        "basic_string::basic_string",
        j,
        v6);
    }
    v6 = expression_str->_M_string_length;
    if ( j > v6 )
      goto LABEL_140;
    v54 = v6 == j;
    v53 = v6 - j;
    if ( !v54 && v53 != 1 )
      v53 = 1LL;
    std::string::_M_construct<char const*>(
      (std::string *const)&v98,
      &expression_str->_M_dataplus._M_p[j],
      &expression_str->_M_dataplus._M_p[j + v53],
      (std::forward_iterator_tag)v40);
    v55._M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::find(
                    (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > > *const)(v94 + 96),
                    (const std::string *)&v98)._M_node;
    v6 = (unsigned __int64)v55._M_node;
    if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v98.log_ != &v98.ostr_ptr_._M_refcount )
      operator delete(v98.log_);
    if ( v6 == v94 + 104 )
      goto LABEL_96;
    v56 = (unsigned __int64)expression_str;
    if ( *(_BYTE *)(((unsigned __int64)expression_str >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(expression_str);
LABEL_158:
      __asan_report_load1(v56);
LABEL_159:
      __asan_report_load8(v56);
      goto LABEL_160;
    }
    v56 = (unsigned __int64)&expression_str->_M_dataplus._M_p[j];
    v57 = *(_BYTE *)((v56 >> 3) + 0x7FFF8000);
    v40 = (const common::tools::MathExpressionNode *)((LOBYTE(expression_str->_M_dataplus._M_p) + (_BYTE)j) & 7);
    if ( v57 <= (char)v40 && v57 )
      goto LABEL_158;
    if ( expression_str->_M_dataplus._M_p[j] != 45 )
      goto LABEL_173;
    if ( !j )
      goto LABEL_96;
    v56 = v91._M_string_length + 8;
    if ( *(_BYTE *)(((v91._M_string_length + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_159;
    LOBYTE(v40) = v91._M_string_length;
    v58 = *(_QWORD *)(v91._M_string_length + 8);
    v56 = v91._M_string_length;
    if ( *(_BYTE *)((v91._M_string_length >> 3) + 0x7FFF8000) )
    {
LABEL_160:
      __asan_report_load8(v56);
LABEL_161:
      __asan_report_load4(v56);
      goto LABEL_162;
    }
    if ( v58 == *(_QWORD *)v91._M_string_length )
      goto LABEL_173;
    v91._anon_0._M_allocated_capacity = v58 - 56;
    v56 = v58 - 56;
    v59 = *(_BYTE *)(((unsigned __int64)(v58 - 56) >> 3) + 0x7FFF8000);
    if ( v59 && v59 <= 3 )
      goto LABEL_161;
    *(_DWORD *)(v94 + 352) = *(_DWORD *)(v58 - 56);
    *(_QWORD *)(v94 + 360) = v94 + 376;
    v56 = v91._anon_0._M_allocated_capacity + 8;
    if ( *(_BYTE *)(((v91._anon_0._M_allocated_capacity + 8) >> 3) + 0x7FFF8000) )
    {
LABEL_162:
      __asan_report_load8(v56);
      goto LABEL_163;
    }
    v56 = v91._anon_0._M_allocated_capacity + 16;
    if ( !*(_BYTE *)(((v91._anon_0._M_allocated_capacity + 16) >> 3) + 0x7FFF8000) )
    {
      std::string::_M_construct<char *>(
        (std::string *const)(v94 + 360),
        *(char **)(v91._anon_0._M_allocated_capacity + 8),
        (char *)(*(_QWORD *)(v91._anon_0._M_allocated_capacity + 16) + *(_QWORD *)(v91._anon_0._M_allocated_capacity + 8)),
        (std::forward_iterator_tag)(v58 - 56));
      goto LABEL_164;
    }
LABEL_163:
    __asan_report_load8(v56);
LABEL_164:
    v60 = v91._anon_0._M_allocated_capacity + 40;
    if ( *(_BYTE *)(((v91._anon_0._M_allocated_capacity + 40) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v60);
      goto LABEL_179;
    }
    v7 = *(double *)(v91._anon_0._M_allocated_capacity + 40);
    *(double *)(v94 + 392) = v7;
    v60 = v91._anon_0._M_allocated_capacity + 48;
    if ( *(char *)(((v91._anon_0._M_allocated_capacity + 48) >> 3) + 0x7FFF8000) < 0 )
    {
LABEL_179:
      __asan_report_load1(v60);
LABEL_180:
      __asan_report_load1(v60);
LABEL_181:
      v7 = __asan_report_load4(v60);
      goto LABEL_182;
    }
    *(_BYTE *)(v94 + 400) = *(_BYTE *)(v91._anon_0._M_allocated_capacity + 48);
    v60 = v91._anon_0._M_allocated_capacity + 49;
    v61 = *(_BYTE *)(((v91._anon_0._M_allocated_capacity + 49) >> 3) + 0x7FFF8000);
    if ( v61 <= ((v91._anon_0._M_local_buf[0] + 49) & 7) && v61 )
      goto LABEL_180;
    *(_BYTE *)(v94 + 401) = *(_BYTE *)(v91._anon_0._M_allocated_capacity + 49);
    v60 = v91._anon_0._M_allocated_capacity + 52;
    v62 = *(_BYTE *)(((v91._anon_0._M_allocated_capacity + 52) >> 3) + 0x7FFF8000);
    if ( (char)(((v91._anon_0._M_local_buf[0] + 52) & 7) + 3) >= v62 && v62 )
      goto LABEL_181;
    *(_DWORD *)(v94 + 404) = *(_DWORD *)(v91._anon_0._M_allocated_capacity + 52);
    v63 = *(_DWORD *)(v94 + 352);
    if ( v63 != 1 )
    {
      v91._anon_0._M_local_buf[0] = v63 == 4;
      goto LABEL_172;
    }
LABEL_182:
    v91._anon_0._M_local_buf[0] = 1;
LABEL_172:
    common::tools::MathExpressionNode::~MathExpressionNode((common::tools::MathExpressionNode *const)(v94 + 352));
    if ( v91._anon_0._M_local_buf[0] )
      goto LABEL_96;
LABEL_173:
    v64 = v6 + 64;
    v65 = *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000);
    if ( v65 && v65 <= 3 )
    {
      v7 = __asan_report_load4(v64);
      goto LABEL_184;
    }
    *(_DWORD *)v91._anon_0._M_local_buf = *(_DWORD *)(v6 + 64);
    v98.log_ = (common::milog::MiLog *)&v98.ostr_ptr_._M_refcount;
    v64 = v6 + 32;
    if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) )
    {
LABEL_184:
      __asan_report_load8(v64);
      goto LABEL_185;
    }
    v64 = v6 + 40;
    if ( *(_BYTE *)(((v6 + 40) >> 3) + 0x7FFF8000) )
    {
LABEL_185:
      __asan_report_load8(v64);
      goto LABEL_186;
    }
    std::string::_M_construct<char *>(
      (std::string *const)&v98,
      *(char **)(v6 + 32),
      (char *)(*(_QWORD *)(v6 + 40) + *(_QWORD *)(v6 + 32)),
      (std::forward_iterator_tag)v40);
LABEL_186:
    v6 = (unsigned int)common::tools::MathExpressionNode::initToOperator(
                         (common::tools::MathExpressionNode *const)(v94 + 256),
                         v91,
                         (uint32_t)&v98);
    if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v98.log_ != &v98.ostr_ptr_._M_refcount )
      operator delete(v98.log_);
    if ( (_DWORD)v6 )
    {
      common::milog::MiLogStream::MiLogStream(
        &v98,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/math_expression.cpp",
        "splitExpressionToNodeVec",
        557);
      common::milog::MiLogStream::operator()(&v98, "init operator node failed", v7);
      common::milog::MiLogStream::~MiLogStream(&v98);
      goto LABEL_218;
    }
LABEL_96:
    if ( !*(_DWORD *)(v94 + 256) )
    {
      v43 = expression_str;
      if ( *(_BYTE *)(((unsigned __int64)expression_str >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(expression_str);
      }
      else
      {
        v43 = (std::string *)&expression_str->_M_dataplus._M_p[j];
        v44 = *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000);
        v40 = (const common::tools::MathExpressionNode *)((LOBYTE(expression_str->_M_dataplus._M_p) + (_BYTE)j) & 7);
        if ( v44 > (char)v40 || !v44 )
        {
          v45 = expression_str->_M_dataplus._M_p[j];
          if ( v45 != 40 )
          {
            if ( v45 == 41
              && common::tools::MathExpressionNode::initToRightBracket((common::tools::MathExpressionNode *const)(v94 + 256)) )
            {
              common::milog::MiLogStream::MiLogStream(
                &v98,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "src/math_expression.cpp",
                "splitExpressionToNodeVec",
                579);
              common::milog::MiLogStream::operator()(&v98, "init left bracket node failed", v7);
              common::milog::MiLogStream::~MiLogStream(&v98);
              goto LABEL_218;
            }
            goto LABEL_102;
          }
LABEL_192:
          if ( common::tools::MathExpressionNode::initToLeftBracket((common::tools::MathExpressionNode *const)(v94 + 256)) )
          {
            common::milog::MiLogStream::MiLogStream(
              &v98,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "src/math_expression.cpp",
              "splitExpressionToNodeVec",
              571);
            common::milog::MiLogStream::operator()(&v98, "init left bracket node failed", v7);
            common::milog::MiLogStream::~MiLogStream(&v98);
            goto LABEL_218;
          }
          goto LABEL_102;
        }
      }
      __asan_report_load1(v43);
      goto LABEL_192;
    }
LABEL_102:
    if ( !*(_DWORD *)(v94 + 256) )
      goto LABEL_255;
    if ( j <= M_parent )
      goto LABEL_231;
    common::tools::MathExpressionNode::MathExpressionNode((common::tools::MathExpressionNode *const)(v94 + 352));
    v66 = &expression_str->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&expression_str->_M_string_length >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v66);
LABEL_204:
      __asan_handle_no_return(v66);
      std::__throw_out_of_range_fmt(
        "%s: __pos (which is %zu) > this->size() (which is %zu)",
        "basic_string::substr",
        M_parent,
        v6);
    }
    v6 = expression_str->_M_string_length;
    if ( M_parent > v6 )
      goto LABEL_204;
    v98.log_ = (common::milog::MiLog *)&v98.ostr_ptr_._M_refcount;
    if ( *(_BYTE *)(((unsigned __int64)expression_str >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(expression_str);
LABEL_206:
      __asan_handle_no_return(expression_str);
      std::__throw_out_of_range_fmt(
        "%s: __pos (which is %zu) > this->size() (which is %zu)",
        "basic_string::basic_string",
        M_parent,
        v6);
    }
    v6 = expression_str->_M_string_length;
    if ( M_parent > v6 )
      goto LABEL_206;
    v6 -= M_parent;
    if ( j - M_parent < v6 )
      v6 = j - M_parent;
    std::string::_M_construct<char const*>(
      (std::string *const)&v98,
      &expression_str->_M_dataplus._M_p[M_parent],
      &expression_str->_M_dataplus._M_p[M_parent + v6],
      v46);
    v67 = common::tools::MathExpressionNode::initToNum(
            (common::tools::MathExpressionNode *const)(v94 + 352),
            (unsigned __int64)&v98);
    M_parent = v67;
    if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v98.log_ != &v98.ostr_ptr_._M_refcount )
      operator delete(v98.log_);
    if ( !(_DWORD)M_parent )
    {
      v69 = (std::string *)(v91._M_string_length + 8);
      if ( *(_BYTE *)(((v91._M_string_length + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v69);
      }
      else
      {
        M_parent = *(_QWORD *)(v91._M_string_length + 8);
        v69 = (std::string *)(v91._M_string_length + 16);
        if ( !*(_BYTE *)(((v91._M_string_length + 16) >> 3) + 0x7FFF8000) )
        {
          if ( M_parent == *(_QWORD *)(v91._M_string_length + 16) )
            goto LABEL_242;
          v69 = *(std::string **)(v91._M_string_length + 8);
          v70 = *(_BYTE *)((M_parent >> 3) + 0x7FFF8000);
          if ( !v70 || v70 > 3 )
          {
            *(_DWORD *)M_parent = *(_DWORD *)(v94 + 352);
            v69 = (std::string *)(M_parent + 8);
            if ( !*(_BYTE *)(((M_parent + 8) >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)(M_parent + 8) = M_parent + 24;
              std::string::_M_construct<char *>(
                v69,
                *(char **)(v94 + 360),
                (char *)(*(_QWORD *)(v94 + 368) + *(_QWORD *)(v94 + 360)),
                (std::forward_iterator_tag)v68);
              goto LABEL_223;
            }
LABEL_222:
            __asan_report_store8(v69);
LABEL_223:
            v7 = *(double *)(v94 + 392);
            v71 = (char *)(M_parent + 40);
            if ( *(_BYTE *)(((M_parent + 40) >> 3) + 0x7FFF8000) )
            {
              v7 = __asan_report_store8(v71);
            }
            else
            {
              *(double *)(M_parent + 40) = v7;
              v71 = (char *)(M_parent + 48);
              if ( *(char *)(((M_parent + 48) >> 3) + 0x7FFF8000) >= 0 )
              {
                *(_BYTE *)(M_parent + 48) = *(_BYTE *)(v94 + 400);
                v71 = (char *)(M_parent + 49);
                v72 = *(_BYTE *)(((M_parent + 49) >> 3) + 0x7FFF8000);
                if ( v72 > (char)((M_parent + 49) & 7) || !v72 )
                {
                  *(_BYTE *)(M_parent + 49) = *(_BYTE *)(v94 + 401);
                  v71 = (char *)(M_parent + 52);
                  v73 = *(_BYTE *)(((M_parent + 52) >> 3) + 0x7FFF8000);
                  if ( (char)(((M_parent + 52) & 7) + 3) < v73 || !v73 )
                  {
                    *(_DWORD *)(M_parent + 52) = *(_DWORD *)(v94 + 404);
                    v91._anon_0._M_allocated_capacity = *(_QWORD *)(v91._M_string_length + 8);
                    *(_QWORD *)(v91._M_string_length + 8) = v91._anon_0._M_allocated_capacity + 56;
                    goto LABEL_230;
                  }
LABEL_241:
                  __asan_report_store4(v71);
LABEL_242:
                  std::vector<common::tools::MathExpressionNode>::_M_realloc_insert<common::tools::MathExpressionNode const&>(
                    (std::vector<common::tools::MathExpressionNode> *const)v91._M_string_length,
                    (std::vector<common::tools::MathExpressionNode>::iterator)M_parent,
                    (const common::tools::MathExpressionNode *)(v94 + 352),
                    v68);
LABEL_230:
                  common::tools::MathExpressionNode::~MathExpressionNode((common::tools::MathExpressionNode *const)(v94 + 352));
LABEL_231:
                  v74 = (std::string *)(v91._M_string_length + 8);
                  if ( *(_BYTE *)(((v91._M_string_length + 8) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load8(v74);
                  }
                  else
                  {
                    M_parent = *(_QWORD *)(v91._M_string_length + 8);
                    v74 = (std::string *)(v91._M_string_length + 16);
                    if ( !*(_BYTE *)(((v91._M_string_length + 16) >> 3) + 0x7FFF8000) )
                    {
                      if ( M_parent == *(_QWORD *)(v91._M_string_length + 16) )
                        goto LABEL_265;
                      v74 = *(std::string **)(v91._M_string_length + 8);
                      v75 = *(_BYTE *)((M_parent >> 3) + 0x7FFF8000);
                      if ( !v75 || v75 > 3 )
                      {
                        *(_DWORD *)M_parent = *(_DWORD *)(v94 + 256);
                        v74 = (std::string *)(M_parent + 8);
                        if ( !*(_BYTE *)(((M_parent + 8) >> 3) + 0x7FFF8000) )
                        {
                          *(_QWORD *)(M_parent + 8) = M_parent + 24;
                          std::string::_M_construct<char *>(
                            v74,
                            *(char **)(v94 + 264),
                            (char *)(*(_QWORD *)(v94 + 272) + *(_QWORD *)(v94 + 264)),
                            (std::forward_iterator_tag)v40);
                          goto LABEL_247;
                        }
LABEL_246:
                        __asan_report_store8(v74);
LABEL_247:
                        v7 = *(double *)(v94 + 296);
                        v76 = (char *)(M_parent + 40);
                        if ( *(_BYTE *)(((M_parent + 40) >> 3) + 0x7FFF8000) )
                        {
                          v7 = __asan_report_store8(v76);
                        }
                        else
                        {
                          *(double *)(M_parent + 40) = v7;
                          v76 = (char *)(M_parent + 48);
                          if ( *(char *)(((M_parent + 48) >> 3) + 0x7FFF8000) >= 0 )
                          {
                            *(_BYTE *)(M_parent + 48) = *(_BYTE *)(v94 + 304);
                            v76 = (char *)(M_parent + 49);
                            v77 = *(_BYTE *)(((M_parent + 49) >> 3) + 0x7FFF8000);
                            if ( v77 > (char)((M_parent + 49) & 7) || !v77 )
                            {
                              *(_BYTE *)(M_parent + 49) = *(_BYTE *)(v94 + 305);
                              v76 = (char *)(M_parent + 52);
                              v78 = *(_BYTE *)(((M_parent + 52) >> 3) + 0x7FFF8000);
                              if ( (char)(((M_parent + 52) & 7) + 3) < v78 || !v78 )
                              {
                                *(_DWORD *)(M_parent + 52) = *(_DWORD *)(v94 + 308);
                                v91._anon_0._M_allocated_capacity = *(_QWORD *)(v91._M_string_length + 8);
                                *(_QWORD *)(v91._M_string_length + 8) = v91._anon_0._M_allocated_capacity + 56;
                                goto LABEL_254;
                              }
LABEL_264:
                              __asan_report_store4(v76);
LABEL_265:
                              std::vector<common::tools::MathExpressionNode>::_M_realloc_insert<common::tools::MathExpressionNode const&>(
                                (std::vector<common::tools::MathExpressionNode> *const)v91._M_string_length,
                                (std::vector<common::tools::MathExpressionNode>::iterator)M_parent,
                                (const common::tools::MathExpressionNode *)(v94 + 256),
                                v40);
LABEL_254:
                              M_parent = j + *(unsigned int *)(v94 + 272);
LABEL_255:
                              if ( *(_DWORD *)(v94 + 256) )
                                v41 = j + *(unsigned int *)(v94 + 272);
                              common::tools::MathExpressionNode::~MathExpressionNode((common::tools::MathExpressionNode *const)(v94 + 256));
                              j = v41;
                              continue;
                            }
LABEL_263:
                            __asan_report_store1(v76);
                            goto LABEL_264;
                          }
                        }
                        __asan_report_store1(v76);
                        goto LABEL_263;
                      }
LABEL_245:
                      __asan_report_store4(v74);
                      goto LABEL_246;
                    }
                  }
                  __asan_report_load8(v74);
                  goto LABEL_245;
                }
LABEL_240:
                __asan_report_store1(v71);
                goto LABEL_241;
              }
            }
            __asan_report_store1(v71);
            goto LABEL_240;
          }
LABEL_221:
          __asan_report_store4(v69);
          goto LABEL_222;
        }
      }
      __asan_report_load8(v69);
      goto LABEL_221;
    }
    break;
  }
  common::milog::MiLogStream::MiLogStream(
    &v98,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/math_expression.cpp",
    "splitExpressionToNodeVec",
    594);
  common::milog::MiLogStream::operator()(&v98, "init num node failed", v7);
  common::milog::MiLogStream::~MiLogStream(&v98);
  common::tools::MathExpressionNode::~MathExpressionNode((common::tools::MathExpressionNode *const)(v94 + 352));
LABEL_218:
  common::tools::MathExpressionNode::~MathExpressionNode((common::tools::MathExpressionNode *const)(v94 + 256));
  v35 = -1;
LABEL_77:
  std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_erase(
    (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > > *const)(v94 + 176),
    *(std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type *)(v94 + 192));
  std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_erase(
    (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > > *const)(v94 + 96),
    *(std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type *)(v94 + 112));
  if ( v99 == (char *)v94 )
  {
    *(_QWORD *)((v94 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v94 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v94 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v94 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v94 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v94 >> 3) + 0x7FFF8030) = 0LL;
  }
  else
  {
    *(_QWORD *)v94 = 1172321806LL;
    *(_QWORD *)((v94 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v94 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v94 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v94 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v94 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v94 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v94 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v35;
};

// Line 634: range 0000000019B51AFE-0000000019B526DA
common::tools::MathExpressionNode *__fastcall common::tools::MathExpression::execOperator(
        common::tools::MathExpressionNode *retstr,
        const common::tools::MathExpression *const this,
        const std::string *node_1,
        unsigned __int64 node_2,
        unsigned __int64 is_use_default_value,
        float para_default_value,
        std::map<std::string,float> *para_map_ptr,
        double a8,
        std::string operator_str)
{
  int i; // r15d
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::const_iterator v15; // rax
  std::forward_iterator_tag v16; // cl
  const uint32_t *p_logic_operator_priority; // rdi
  char v18; // dl
  std::_Rb_tree_color M_color; // edx
  char v20; // al
  char v21; // al
  char v22; // al
  bool *v23; // rdi
  bool *v25; // rdi
  char v26; // al
  char v27; // al
  char v28; // al
  void *v29; // rdi
  unsigned __int64 v30; // rdi
  char v31; // al
  char v32; // al
  std::forward_iterator_tag v33; // cl
  void *v34; // rdi
  unsigned __int64 v35; // rdi
  char v36; // al
  std::forward_iterator_tag v37; // cl
  unsigned __int64 v38; // rdi
  bool v39; // si
  char is_para_find; // [rsp+8h] [rbp-90h]
  bool is_para_finda; // [rsp+8h] [rbp-90h]
  double is_para_findb; // [rsp+8h] [rbp-90h]
  std::_Rb_tree_iterator<std::pair<const std::string,float> >::_Base_ptr is_para_findc; // [rsp+8h] [rbp-90h]
  bool num_1; // [rsp+10h] [rbp-88h]
  double num_1a; // [rsp+10h] [rbp-88h]
  std::_Rb_tree_iterator<std::pair<const std::string,float> >::_Base_ptr num_1b; // [rsp+10h] [rbp-88h]
  char is_use_default_valuea; // [rsp+1Eh] [rbp-7Ah]
  char is_para_find_0; // [rsp+1Fh] [rbp-79h]
  std::string __k; // [rsp+20h] [rbp-78h] BYREF
  common::milog::MiLogStream v51; // [rsp+40h] [rbp-58h] BYREF

  is_use_default_valuea = (char)para_map_ptr;
  common::tools::MathExpressionNode::MathExpressionNode(retstr);
  for ( i = 0; ; ++i )
  {
    if ( i > 0 )
      return retstr;
    v15._M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::find(
                    &this->operator_map_._M_t,
                    node_1)._M_node;
    if ( &this->operator_map_._M_t._M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)v15._M_node )
    {
      common::milog::MiLogStream::MiLogStream(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/math_expression.cpp",
        "execOperator",
        643);
      if ( *(_BYTE *)(((unsigned __int64)node_1 >> 3) + 0x7FFF8000) )
        goto LABEL_22;
      common::milog::MiLogStream::operator()(&v51, "fail to find priority for '%s'", node_1->_M_dataplus._M_p);
      goto LABEL_23;
    }
    p_logic_operator_priority = (const uint32_t *)&v15._M_node[2];
    v18 = *(_BYTE *)(((unsigned __int64)&v15._M_node[2] >> 3) + 0x7FFF8000);
    if ( v18 && v18 <= 3 )
    {
      __asan_report_load4(p_logic_operator_priority);
LABEL_26:
      __asan_report_load4(p_logic_operator_priority);
LABEL_27:
      __asan_report_load4(p_logic_operator_priority);
LABEL_28:
      __asan_report_load4(p_logic_operator_priority);
LABEL_29:
      common::milog::MiLogStream::MiLogStream(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/math_expression.cpp",
        "execOperator",
        655);
LABEL_32:
      if ( !*(_BYTE *)(((unsigned __int64)node_1 >> 3) + 0x7FFF8000) )
      {
        common::milog::MiLogStream::operator()(&v51, "find no bool node for operator '%s'", node_1->_M_dataplus._M_p);
        goto LABEL_23;
      }
LABEL_22:
      __asan_report_load8(node_1);
LABEL_23:
      common::milog::MiLogStream::~MiLogStream(&v51);
      return retstr;
    }
    M_color = v15._M_node[2]._M_color;
    p_logic_operator_priority = &this->logic_operator_priority_;
    v20 = *(_BYTE *)(((unsigned __int64)&this->logic_operator_priority_ >> 3) + 0x7FFF8000);
    if ( v20 && v20 <= 3 )
      goto LABEL_26;
    if ( M_color < this->logic_operator_priority_ )
    {
      p_logic_operator_priority = (const uint32_t *)node_2;
      v21 = *(_BYTE *)((node_2 >> 3) + 0x7FFF8000);
      if ( v21 && v21 <= 3 )
        goto LABEL_27;
      if ( *(_DWORD *)node_2 != 3 )
        goto LABEL_29;
      p_logic_operator_priority = (const uint32_t *)is_use_default_value;
      v22 = *(_BYTE *)((is_use_default_value >> 3) + 0x7FFF8000);
      if ( v22 && v22 <= 3 )
        goto LABEL_28;
      if ( *(_DWORD *)is_use_default_value != 3 )
        goto LABEL_29;
      v23 = (bool *)(node_2 + 48);
      if ( *(char *)(((node_2 + 48) >> 3) + 0x7FFF8000) < 0 )
      {
        __asan_report_load1(v23);
LABEL_31:
        __asan_report_load1(v23);
        goto LABEL_32;
      }
      num_1 = *(_BYTE *)(node_2 + 48);
      v23 = (bool *)(is_use_default_value + 48);
      if ( *(char *)(((is_use_default_value + 48) >> 3) + 0x7FFF8000) < 0 )
        goto LABEL_31;
      is_para_find = *(_BYTE *)(is_use_default_value + 48);
      if ( !(unsigned int)std::string::compare(node_1, "&&") )
      {
        common::tools::MathExpressionNode::initToBool(retstr, num_1 & is_para_find);
      }
      else
      {
        if ( (unsigned int)std::string::compare(node_1, "||") )
        {
          common::milog::MiLogStream::MiLogStream(
            &v51,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/math_expression.cpp",
            "execOperator",
            672);
          if ( *(_BYTE *)(((unsigned __int64)node_1 >> 3) + 0x7FFF8000) )
            goto LABEL_22;
          goto LABEL_37;
        }
        common::tools::MathExpressionNode::initToBool(retstr, num_1 | is_para_find);
      }
      continue;
    }
    v25 = (bool *)node_2;
    v26 = *(_BYTE *)((node_2 >> 3) + 0x7FFF8000);
    if ( v26 && v26 <= 3 )
    {
      __asan_report_load4(node_2);
LABEL_53:
      __asan_report_load4(v25);
LABEL_54:
      __asan_report_load1(v25);
LABEL_55:
      common::milog::MiLogStream::MiLogStream(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/math_expression.cpp",
        "execOperator",
        684);
      if ( !*(_BYTE *)(((unsigned __int64)node_1 >> 3) + 0x7FFF8000) )
      {
        common::milog::MiLogStream::operator()(&v51, "find no num node for operator '%s'", node_1->_M_dataplus._M_p);
        goto LABEL_23;
      }
      goto LABEL_22;
    }
    if ( *(_DWORD *)node_2 != 2 )
      goto LABEL_55;
    v25 = (bool *)is_use_default_value;
    v27 = *(_BYTE *)((is_use_default_value >> 3) + 0x7FFF8000);
    if ( v27 && v27 <= 3 )
      goto LABEL_53;
    if ( *(_DWORD *)is_use_default_value != 2 )
      goto LABEL_55;
    v25 = (bool *)(node_2 + 49);
    v28 = *(_BYTE *)(((node_2 + 49) >> 3) + 0x7FFF8000);
    if ( v28 <= (char)((node_2 + 49) & 7) && v28 )
      goto LABEL_54;
    is_para_finda = *(_BYTE *)(node_2 + 49);
    if ( is_para_finda )
    {
      v29 = (void *)(node_2 + 40);
      if ( !*(_BYTE *)(((node_2 + 40) >> 3) + 0x7FFF8000) )
      {
        a8 = *(double *)(node_2 + 40);
        num_1a = a8;
        goto LABEL_60;
      }
      __asan_report_load8(v29);
LABEL_68:
      __asan_report_load8(v29);
      goto LABEL_69;
    }
    if ( !operator_str._M_dataplus._M_p )
      goto LABEL_77;
    __k._M_dataplus._M_p = __k._anon_0._M_local_buf;
    v29 = (void *)(node_2 + 8);
    if ( *(_BYTE *)(((node_2 + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_68;
    v29 = (void *)(node_2 + 16);
    if ( !*(_BYTE *)(((node_2 + 16) >> 3) + 0x7FFF8000) )
    {
      std::string::_M_construct<char *>(
        &__k,
        *(char **)(node_2 + 8),
        (char *)(*(_QWORD *)(node_2 + 16) + *(_QWORD *)(node_2 + 8)),
        v16);
      goto LABEL_70;
    }
LABEL_69:
    __asan_report_load8(v29);
LABEL_70:
    num_1b = std::_Rb_tree<std::string,std::pair<std::string const,float>,std::_Select1st<std::pair<std::string const,float>>,std::less<std::string>,std::allocator<std::pair<std::string const,float>>>::find(
               (std::_Rb_tree<std::string,std::pair<const std::string,float>,std::_Select1st<std::pair<const std::string,float> >,std::less<std::string >,std::allocator<std::pair<const std::string,float> > > *const)operator_str._M_dataplus._M_p,
               &__k)._M_node;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__k._M_dataplus._M_p != &__k._anon_0 )
      operator delete(__k._M_dataplus._M_p);
    v16.gap0[0] = (char)num_1b;
    if ( num_1b != (std::_Rb_tree_iterator<std::pair<const std::string,float> >::_Base_ptr)(operator_str._M_dataplus._M_p
                                                                                          + 8) )
    {
      v32 = *(_BYTE *)(((unsigned __int64)&num_1b[2] >> 3) + 0x7FFF8000);
      if ( !v32 || v32 > 3 )
      {
        num_1a = *(float *)&num_1b[2]._M_color;
        is_para_finda = 1;
        goto LABEL_78;
      }
      __asan_report_load4(&num_1b[2]);
LABEL_77:
      num_1a = 0.0;
      goto LABEL_78;
    }
    num_1a = 0.0;
LABEL_78:
    if ( !is_para_finda )
    {
      if ( is_use_default_valuea )
      {
        num_1a = para_default_value;
        goto LABEL_60;
      }
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&__k,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/math_expression.cpp",
        "execOperator",
        717);
      v51.log_ = (common::milog::MiLog *)&v51.ostr_ptr_._M_refcount;
      v34 = (void *)(node_2 + 8);
      if ( *(_BYTE *)(((node_2 + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v34);
      }
      else
      {
        v34 = (void *)(node_2 + 16);
        if ( !*(_BYTE *)(((node_2 + 16) >> 3) + 0x7FFF8000) )
        {
          std::string::_M_construct<char *>(
            (std::string *const)&v51,
            *(char **)(node_2 + 8),
            (char *)(*(_QWORD *)(node_2 + 16) + *(_QWORD *)(node_2 + 8)),
            v33);
          goto LABEL_87;
        }
      }
      __asan_report_load8(v34);
LABEL_87:
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&__k,
        "can not find '%s' in para_map",
        (const char *)v51.log_);
      if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v51.log_ != &v51.ostr_ptr_._M_refcount )
        operator delete(v51.log_);
      goto LABEL_89;
    }
LABEL_60:
    v30 = is_use_default_value + 49;
    v31 = *(_BYTE *)(((is_use_default_value + 49) >> 3) + 0x7FFF8000);
    if ( v31 <= (char)((is_use_default_value + 49) & 7) && v31 )
    {
      __asan_report_load1(v30);
    }
    else
    {
      is_para_find_0 = *(_BYTE *)(is_use_default_value + 49);
      if ( !is_para_find_0 )
        goto LABEL_92;
      v30 = is_use_default_value + 40;
      if ( !*(_BYTE *)(((is_use_default_value + 40) >> 3) + 0x7FFF8000) )
      {
        is_para_findb = *(double *)(is_use_default_value + 40);
        goto LABEL_65;
      }
    }
    __asan_report_load8(v30);
LABEL_92:
    if ( !operator_str._M_dataplus._M_p )
      goto LABEL_105;
    v51.log_ = (common::milog::MiLog *)&v51.ostr_ptr_._M_refcount;
    v35 = is_use_default_value + 8;
    if ( *(_BYTE *)(((is_use_default_value + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v35);
    }
    else
    {
      v35 = is_use_default_value + 16;
      if ( !*(_BYTE *)(((is_use_default_value + 16) >> 3) + 0x7FFF8000) )
      {
        std::string::_M_construct<char *>(
          (std::string *const)&v51,
          *(char **)(is_use_default_value + 8),
          (char *)(*(_QWORD *)(is_use_default_value + 16) + *(_QWORD *)(is_use_default_value + 8)),
          v16);
        goto LABEL_98;
      }
    }
    __asan_report_load8(v35);
LABEL_98:
    is_para_findc = std::_Rb_tree<std::string,std::pair<std::string const,float>,std::_Select1st<std::pair<std::string const,float>>,std::less<std::string>,std::allocator<std::pair<std::string const,float>>>::find(
                      (std::_Rb_tree<std::string,std::pair<const std::string,float>,std::_Select1st<std::pair<const std::string,float> >,std::less<std::string >,std::allocator<std::pair<const std::string,float> > > *const)operator_str._M_dataplus._M_p,
                      (const std::string *)&v51)._M_node;
    if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v51.log_ != &v51.ostr_ptr_._M_refcount )
      operator delete(v51.log_);
    if ( is_para_findc != (std::_Rb_tree_iterator<std::pair<const std::string,float> >::_Base_ptr)(operator_str._M_dataplus._M_p
                                                                                                 + 8) )
    {
      v36 = *(_BYTE *)(((unsigned __int64)&is_para_findc[2] >> 3) + 0x7FFF8000);
      if ( !v36 || v36 > 3 )
      {
        is_para_findb = *(float *)&is_para_findc[2]._M_color;
        is_para_find_0 = 1;
        goto LABEL_106;
      }
      __asan_report_load4(&is_para_findc[2]);
LABEL_105:
      is_para_findb = 0.0;
      goto LABEL_106;
    }
    is_para_findb = 0.0;
LABEL_106:
    if ( is_para_find_0 )
      goto LABEL_65;
    if ( !is_use_default_valuea )
    {
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&__k,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/math_expression.cpp",
        "execOperator",
        752);
      v51.log_ = (common::milog::MiLog *)&v51.ostr_ptr_._M_refcount;
      v38 = is_use_default_value + 8;
      if ( *(_BYTE *)(((is_use_default_value + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v38);
      }
      else
      {
        v38 = is_use_default_value + 16;
        if ( !*(_BYTE *)(((is_use_default_value + 16) >> 3) + 0x7FFF8000) )
        {
          std::string::_M_construct<char *>(
            (std::string *const)&v51,
            *(char **)(is_use_default_value + 8),
            (char *)(*(_QWORD *)(is_use_default_value + 16) + *(_QWORD *)(is_use_default_value + 8)),
            v37);
LABEL_115:
          common::milog::MiLogStream::operator()(
            (common::milog::MiLogStream *const)&__k,
            "can not find '%s' in para_map",
            (const char *)v51.log_);
          if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v51.log_ != &v51.ostr_ptr_._M_refcount )
            operator delete(v51.log_);
LABEL_89:
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__k);
          return retstr;
        }
      }
      __asan_report_load8(v38);
      goto LABEL_115;
    }
    is_para_findb = para_default_value;
LABEL_65:
    if ( !(unsigned int)std::string::compare(node_1, "+") )
    {
      common::tools::MathExpressionNode::initToNum(retstr, num_1a + is_para_findb, a8);
      continue;
    }
    if ( !(unsigned int)std::string::compare(node_1, "-") )
    {
      common::tools::MathExpressionNode::initToNum(retstr, num_1a - is_para_findb, a8);
      continue;
    }
    if ( !(unsigned int)std::string::compare(node_1, "*") )
    {
      common::tools::MathExpressionNode::initToNum(retstr, num_1a * is_para_findb, a8);
      continue;
    }
    if ( !(unsigned int)std::string::compare(node_1, "/") )
      break;
    if ( !(unsigned int)std::string::compare(node_1, ">") )
    {
      common::tools::MathExpressionNode::initToBool(retstr, num_1a > is_para_findb);
    }
    else if ( !(unsigned int)std::string::compare(node_1, ">=") )
    {
      common::tools::MathExpressionNode::initToBool(retstr, num_1a >= is_para_findb);
    }
    else if ( !(unsigned int)std::string::compare(node_1, "<") )
    {
      common::tools::MathExpressionNode::initToBool(retstr, is_para_findb > num_1a);
    }
    else if ( !(unsigned int)std::string::compare(node_1, "<=") )
    {
      common::tools::MathExpressionNode::initToBool(retstr, is_para_findb >= num_1a);
    }
    else
    {
      if ( !(unsigned int)std::string::compare(node_1, "==") )
      {
        v39 = num_1a == is_para_findb;
      }
      else
      {
        if ( (unsigned int)std::string::compare(node_1, "!=") )
        {
          common::milog::MiLogStream::MiLogStream(
            &v51,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/math_expression.cpp",
            "execOperator",
            807);
          if ( *(_BYTE *)(((unsigned __int64)node_1 >> 3) + 0x7FFF8000) )
            goto LABEL_22;
LABEL_37:
          common::milog::MiLogStream::operator()(&v51, "meet error operator '%s'", node_1->_M_dataplus._M_p);
          goto LABEL_23;
        }
        a8 = is_para_findb;
        v39 = num_1a != is_para_findb;
      }
      common::tools::MathExpressionNode::initToBool(retstr, v39);
    }
LABEL_142:
    ;
  }
  if ( is_para_findb != 0.0 )
  {
    common::tools::MathExpressionNode::initToNum(retstr, num_1a / is_para_findb, a8);
    goto LABEL_142;
  }
  common::milog::MiLogStream::MiLogStream(
    &v51,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/math_expression.cpp",
    "execOperator",
    776);
  common::milog::MiLogStream::operator()(&v51, "meet 0 for '/'");
  common::milog::MiLogStream::~MiLogStream(&v51);
  return retstr;
};

// Line 816: range 0000000019B58187-0000000019B5819E
void __cdecl GLOBAL__sub_I_math_expression_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};
