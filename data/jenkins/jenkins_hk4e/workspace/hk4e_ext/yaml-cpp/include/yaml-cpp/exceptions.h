// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/yaml-cpp/include/yaml-cpp/exceptions.h

// Line 155: range 000000001531D394-000000001531D564
void __fastcall YAML::Exception::Exception(
        YAML::Exception *const this,
        const YAML::Mark *mark_,
        const std::string *msg_)
{
  YAML::Exception *v3; // rbx
  std::forward_iterator_tag v5; // cl
  struct _Unwind_Exception *v6; // rax
  struct _Unwind_Exception *v7; // rbx
  std::string::pointer M_p; // rdi
  std::string v9[2]; // [rsp+0h] [rbp-48h] BYREF

  v3 = this;
  YAML::Exception::build_what(v9, mark_, msg_);
  std::runtime_error::runtime_error(this, v9);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v9[0]._M_dataplus._M_p != &v9[0]._anon_0 )
    operator delete(v9[0]._M_dataplus._M_p);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
LABEL_13:
    __asan_report_store_n(this, 12LL);
LABEL_14:
    __asan_report_load_n(mark_, 12LL);
    goto LABEL_15;
  }
  *(_QWORD *)this = &`vtable for'YAML::Exception + 2;
  this = (YAML::Exception *const)((char *)this + 16);
  if ( *(_BYTE *)((((unsigned __int64)v3 + 27) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)v3 + 27) >> 3) + 0x7FFF8000) <= (((unsigned __int8)v3 + 27) & 7)
    || *(char *)((((unsigned __int64)v3 + 16) >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_13;
  }
  v5.gap0[0] = *(_BYTE *)((((unsigned __int64)&mark_->column + 3) >> 3) + 0x7FFF8000);
  if ( *(_BYTE *)(((unsigned __int64)mark_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)mark_ >> 3) + 0x7FFF8000) <= ((unsigned __int8)mark_ & 7)
    || v5.gap0[0] != 0 && v5.gap0[0] <= (((unsigned __int8)mark_ + 11) & 7) )
  {
    goto LABEL_14;
  }
  *(YAML::Mark *)((char *)v3 + 16) = *mark_;
  if ( *(_BYTE *)((((unsigned __int64)v3 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_store8();
    goto LABEL_16;
  }
  *((_QWORD *)v3 + 4) = (char *)v3 + 48;
  if ( *(_BYTE *)(((unsigned __int64)msg_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8();
LABEL_17:
    __asan_report_load8();
    v7 = v6;
    M_p = v9[0]._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v9[0]._M_dataplus._M_p != &v9[0]._anon_0 )
      operator delete(v9[0]._M_dataplus._M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v7);
  }
  if ( *(_BYTE *)(((unsigned __int64)&msg_->_M_string_length >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  std::string::_M_construct<char *>(
    (std::string *const)v3 + 1,
    msg_->_M_dataplus._M_p,
    &msg_->_M_dataplus._M_p[msg_->_M_string_length],
    v5);
};

// Line 165: range 000000001531CFD1-000000001531D392
std::string *__fastcall YAML::Exception::build_what(
        std::string *retstr,
        const YAML::Mark *mark,
        const std::string *msg)
{
  std::forward_iterator_tag v3; // cl
  unsigned __int64 v6; // r12
  _DWORD *v7; // rbp
  char v8; // dl
  __int64 v9; // rax
  int *p_line; // rdi
  char v11; // dl
  char v12; // dl
  char v13; // dl
  __int64 v14; // rax
  char v15; // dl
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v19; // [rsp+8h] [rbp-240h]
  char v20[568]; // [rsp+10h] [rbp-238h] BYREF

  v6 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_3(512LL);
    if ( v9 )
      v6 = v9;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 48 392 10 output:171";
  *(_QWORD *)(v6 + 16) = YAML::Exception::build_what;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862733] = -218103808;
  v7[536862734] = -202116109;
  v7[536862735] = -202116109;
  v8 = *(_BYTE *)(((unsigned __int64)mark >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)mark & 7) + 3) >= v8 && v8 )
  {
    __asan_report_load4(mark);
    goto LABEL_9;
  }
  if ( mark->pos == -1 )
  {
LABEL_9:
    p_line = &mark->line;
    v11 = *(_BYTE *)(((unsigned __int64)&mark->line >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)mark + 4) & 7) + 3) >= v11 && v11 )
    {
      __asan_report_load4(p_line);
    }
    else
    {
      if ( mark->line != -1 )
        goto LABEL_5;
      p_line = &mark->column;
      v12 = *(_BYTE *)(((unsigned __int64)&mark->column >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)mark + 8) & 7) + 3) < v12 || !v12 )
      {
        if ( mark->column != -1 )
          goto LABEL_5;
        if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
        {
          retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
          if ( !*(_BYTE *)(((unsigned __int64)msg >> 3) + 0x7FFF8000) )
          {
            if ( !*(_BYTE *)(((unsigned __int64)&msg->_M_string_length >> 3) + 0x7FFF8000) )
            {
              std::string::_M_construct<char *>(
                retstr,
                msg->_M_dataplus._M_p,
                &msg->_M_dataplus._M_p[msg->_M_string_length],
                v3);
              goto LABEL_42;
            }
            goto LABEL_23;
          }
LABEL_22:
          __asan_report_load8();
LABEL_23:
          __asan_report_load8();
          goto LABEL_24;
        }
LABEL_21:
        __asan_report_store8();
        goto LABEL_22;
      }
    }
    __asan_report_load4(p_line);
    goto LABEL_21;
  }
LABEL_5:
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v6 + 48);
  std::__ostream_insert<char,std::char_traits<char>>(v6 + 64, "yaml-cpp: error at line ", 24LL);
LABEL_24:
  v13 = *(_BYTE *)(((unsigned __int64)&mark->line >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)mark + 4) & 7) + 3) >= v13 && v13 )
    __asan_report_load4(&mark->line);
  else
    v14 = std::ostream::operator<<(v6 + 64, (unsigned int)(mark->line + 1));
  v19 = v14;
  std::__ostream_insert<char,std::char_traits<char>>(v14, ", column ", 9LL);
  v15 = *(_BYTE *)(((unsigned __int64)&mark->column >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)mark + 8) & 7) + 3) >= v15 && v15 )
    __asan_report_load4(&mark->column);
  else
    v16 = std::ostream::operator<<(v19, (unsigned int)(mark->column + 1));
  v17 = v16;
  std::__ostream_insert<char,std::char_traits<char>>(v16, ": ", 2LL);
  if ( *(_BYTE *)(((unsigned __int64)&msg->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)msg >> 3) + 0x7FFF8000) )
  {
    std::__ostream_insert<char,std::char_traits<char>>(v17, msg->_M_dataplus._M_p, msg->_M_string_length);
    goto LABEL_37;
  }
  __asan_report_load8();
LABEL_37:
  if ( *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7)
    || *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  else
  {
    std::stringbuf::str(retstr, v6 + 72);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v6 + 48);
LABEL_42:
  if ( v20 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF803C) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 231: range 000000001531D566-000000001531D857
void __fastcall YAML::InvalidNode::InvalidNode(YAML::InvalidNode *const this, const std::string *key)
{
  unsigned __int64 v2; // rbx
  _DWORD *v3; // rbp
  std::forward_iterator_tag v4; // cl
  __int64 v5; // rax
  __int64 v6; // rax
  struct _Unwind_Exception *v7; // rbx
  std::string::pointer M_p; // rdi
  YAML::Mark mark_; // [rsp+Ch] [rbp-27Ch] BYREF
  __int64 v10; // [rsp+18h] [rbp-270h]
  int v11; // [rsp+20h] [rbp-268h]
  __int64 v12; // [rsp+24h] [rbp-264h]
  int v13; // [rsp+2Ch] [rbp-25Ch]
  std::string msg_; // [rsp+30h] [rbp-258h] BYREF
  char v15[568]; // [rsp+50h] [rbp-238h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(512LL);
    if ( v5 )
      v2 = v5;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 392 10 stream:144";
  *(_QWORD *)(v2 + 16) = YAML::InvalidNode::InvalidNode;
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862733] = -218103808;
  v3[536862734] = -202116109;
  v3[536862735] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 48);
  if ( *(_BYTE *)(((unsigned __int64)&key->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !key->_M_string_length )
  {
    msg_._M_dataplus._M_p = msg_._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&msg_, &byte_1B23BEBD[-93], byte_1B23BEBD, v4);
    goto LABEL_14;
  }
  std::__ostream_insert<char,std::char_traits<char>>(v2 + 64, "invalid node; first invalid key: \"", 34LL);
  if ( *(_BYTE *)(((unsigned __int64)&key->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_12;
  }
  if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_load8();
    goto LABEL_13;
  }
  v6 = std::__ostream_insert<char,std::char_traits<char>>(v2 + 64, key->_M_dataplus._M_p, key->_M_string_length);
LABEL_13:
  std::__ostream_insert<char,std::char_traits<char>>(v6, "\"", 1LL);
  std::stringbuf::str(&msg_, v2 + 72);
LABEL_14:
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 48);
  v10 = -1LL;
  v11 = -1;
  v12 = -1LL;
  v13 = -1;
  *(_QWORD *)&mark_.pos = -1LL;
  mark_.column = -1;
  YAML::Exception::Exception(this, &mark_, &msg_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_21;
  }
  *(_QWORD *)this = &`vtable for'YAML::RepresentationException + 2;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
    operator delete(msg_._M_dataplus._M_p);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    v7 = (struct _Unwind_Exception *)__asan_report_store8();
    M_p = msg_._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
      operator delete(msg_._M_dataplus._M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v7);
  }
  *(_QWORD *)this = &`vtable for'YAML::InvalidNode + 2;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 240: range 000000001531E3D4-000000001531E495
void __fastcall YAML::BadConversion::BadConversion(YAML::BadConversion *const this, const YAML::Mark *mark_)
{
  std::forward_iterator_tag v2; // cl
  struct _Unwind_Exception *v3; // rbx
  std::string::pointer M_p; // rdi
  std::string v5; // [rsp+0h] [rbp-38h] BYREF

  v5._M_dataplus._M_p = v5._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v5, &byte_1B23BFEE[-14], byte_1B23BFEE, v2);
  YAML::Exception::Exception(this, mark_, &v5);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_7;
  }
  *(_QWORD *)this = &`vtable for'YAML::RepresentationException + 2;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v5._M_dataplus._M_p != &v5._anon_0 )
    operator delete(v5._M_dataplus._M_p);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    v3 = (struct _Unwind_Exception *)__asan_report_store8();
    M_p = v5._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v5._M_dataplus._M_p != &v5._anon_0 )
      operator delete(v5._M_dataplus._M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v3);
  }
  *(_QWORD *)this = &`vtable for'YAML::BadConversion + 2;
};

// Line 247: range 000000001531925A-000000001531949B
void __fastcall YAML::TypedBadConversion<std::string>::~TypedBadConversion(
        YAML::TypedBadConversion<std::string > *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    JUMPOUT(0x1531928BLL);
  }
  *(_QWORD *)this->baseclass_0 = &`vtable for'YAML::TypedBadConversion<std::string> + 2;
  YAML::BadConversion::~BadConversion((YAML::BadConversion *)this);
};

// Line 279: range 000000001531E2D6-000000001531E3CE
void __fastcall YAML::BadInsert::BadInsert(YAML::BadInsert *const this)
{
  std::forward_iterator_tag v1; // cl
  struct _Unwind_Exception *v2; // rbx
  std::string::pointer M_p; // rdi
  YAML::Mark mark_; // [rsp+Ch] [rbp-5Ch] BYREF
  __int64 v5; // [rsp+18h] [rbp-50h]
  int v6; // [rsp+20h] [rbp-48h]
  __int64 v7; // [rsp+24h] [rbp-44h]
  int v8; // [rsp+2Ch] [rbp-3Ch]
  std::string msg_; // [rsp+30h] [rbp-38h] BYREF

  msg_._M_dataplus._M_p = msg_._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&msg_, &byte_1B23BFA5[-37], byte_1B23BFA5, v1);
  v5 = -1LL;
  v6 = -1;
  v7 = -1LL;
  v8 = -1;
  *(_QWORD *)&mark_.pos = -1LL;
  mark_.column = -1;
  YAML::Exception::Exception(this, &mark_, &msg_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_7;
  }
  *(_QWORD *)this = &`vtable for'YAML::RepresentationException + 2;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
    operator delete(msg_._M_dataplus._M_p);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    v2 = (struct _Unwind_Exception *)__asan_report_store8();
    M_p = msg_._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
      operator delete(msg_._M_dataplus._M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v2);
  }
  *(_QWORD *)this = &`vtable for'YAML::BadInsert + 2;
};
