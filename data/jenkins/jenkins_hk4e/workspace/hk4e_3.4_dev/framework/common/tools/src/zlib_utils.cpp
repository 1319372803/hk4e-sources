// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/src/zlib_utils.cpp

// Line 11: range 000000000D3B4104-000000000D3B41FF
std::string *__fastcall common::tools::ZlibUtil::compress(std::string *retstr, const std::string *s, int level)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rbp
  unsigned __int64 v5; // rdi
  __int64 p_M_allocated_capacity; // rax
  char v8; // dl
  __int64 v9; // rax
  struct _Unwind_Exception *v10; // r12
  std::string::pointer M_p; // rdi

  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_9;
  }
  v5 = (unsigned __int64)s;
  p_anon_0 = &retstr->_anon_0;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    p_M_allocated_capacity = __asan_report_store8();
LABEL_10:
    v9 = __asan_report_store1(p_M_allocated_capacity);
    goto LABEL_11;
  }
  retstr->_M_string_length = 0LL;
  p_M_allocated_capacity = (__int64)&retstr->_anon_0._M_allocated_capacity;
  v8 = *(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000);
  s = (const std::string *)(((_BYTE)retstr + 16) & 7);
  if ( v8 <= (char)s && v8 )
    goto LABEL_10;
  retstr->_anon_0._M_local_buf[0] = 0;
  v9 = v5 + 8;
  if ( *(_BYTE *)(((v5 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    v5 = v9;
    __asan_report_load8(v9, s);
LABEL_12:
    v10 = (struct _Unwind_Exception *)__asan_report_load8(v5, s);
    if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
      __asan_report_load8(retstr, s);
    M_p = retstr->_M_dataplus._M_p;
    if ( p_anon_0 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)retstr->_M_dataplus._M_p )
      operator delete(M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v10);
  }
  s = *(const std::string **)(v5 + 8);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    goto LABEL_12;
  common::tools::ZlibUtil::_compress(*(const unsigned __int8 **)v5, (unsigned int)s, retstr, level);
  return retstr;
};

// Line 18: range 000000000D3B45CC-000000000D3B46C0
std::string *__fastcall common::tools::ZlibUtil::uncompress(std::string *retstr, const std::string *s)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rbp
  unsigned __int64 v4; // rdi
  __int64 p_M_allocated_capacity; // rax
  char v6; // dl
  std::string::size_type *p_M_string_length; // rax
  struct _Unwind_Exception *v8; // r12
  std::string::pointer M_p; // rdi

  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_9;
  }
  v4 = (unsigned __int64)s;
  p_anon_0 = &retstr->_anon_0;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    p_M_allocated_capacity = __asan_report_store8();
LABEL_10:
    p_M_string_length = (std::string::size_type *)__asan_report_store1(p_M_allocated_capacity);
    goto LABEL_11;
  }
  retstr->_M_string_length = 0LL;
  p_M_allocated_capacity = (__int64)&retstr->_anon_0._M_allocated_capacity;
  v6 = *(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000);
  if ( v6 <= (((unsigned __int8)retstr + 16) & 7) && v6 )
    goto LABEL_10;
  retstr->_anon_0._M_local_buf[0] = 0;
  p_M_string_length = &s->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&s->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    v4 = (unsigned __int64)p_M_string_length;
    __asan_report_load8(p_M_string_length, s);
LABEL_12:
    v8 = (struct _Unwind_Exception *)__asan_report_load8(v4, s);
    if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
      __asan_report_load8(retstr, s);
    M_p = retstr->_M_dataplus._M_p;
    if ( p_anon_0 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)retstr->_M_dataplus._M_p )
      operator delete(M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v8);
  }
  s = (const std::string *)s->_M_string_length;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    goto LABEL_12;
  common::tools::ZlibUtil::_uncompress(*(const unsigned __int8 **)v4, (unsigned int)s, retstr);
  return retstr;
};

// Line 35: range 000000000D3B4200-000000000D3B42BF
std::string *__fastcall common::tools::ZlibUtil::compressWithPad(std::string *retstr, const std::string *s, int level)
{
  std::forward_iterator_tag v3; // cl
  const std::string *v4; // rbp
  std::string *v5; // rbx
  struct _Unwind_Exception *v7; // rbp
  std::string::pointer M_p; // rdi

  v5 = retstr;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_6;
  }
  v4 = s;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  s = (const std::string *)"ZLIB";
  std::string::_M_construct<char const*>(retstr, "ZLIB", "", v3);
  retstr = (std::string *)&v4->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v4->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    __asan_report_load8(retstr, s);
LABEL_7:
    v7 = (struct _Unwind_Exception *)__asan_report_load8(v4, s);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5, s);
    M_p = v5->_M_dataplus._M_p;
    if ( &v5->_anon_0 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v5->_M_dataplus._M_p )
      operator delete(M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v7);
  }
  s = (const std::string *)v4->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    goto LABEL_7;
  common::tools::ZlibUtil::_compress((const unsigned __int8 *)v4->_M_dataplus._M_p, (unsigned int)s, v5, level);
  return v5;
};

// Line 42: range 000000000D3B46C2-000000000D3B47FA
std::string *__fastcall common::tools::ZlibUtil::uncompressWithPad(std::string *retstr, const std::string *s)
{
  std::string *v2; // rbx
  const std::string *v3; // rbp
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // r12
  char v5; // al
  struct _Unwind_Exception *v6; // rbp
  std::string::pointer M_p; // rdi

  v2 = retstr;
  v3 = s;
  if ( !common::tools::ZlibUtil::isCompressWithPad(s) )
    common::tools::ZlibUtil::throw_exception(-1, "uncompressWithPad", "invalid zlib pad", 0LL, 0);
  p_anon_0 = &retstr->_anon_0;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_11;
  }
  retstr->_M_dataplus._M_p = (std::string::pointer)p_anon_0;
  retstr = (std::string *)((char *)retstr + 8);
  if ( *(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_store8();
LABEL_12:
    __asan_report_store1(retstr);
    goto LABEL_13;
  }
  v2->_M_string_length = 0LL;
  retstr = (std::string *)&v2->_anon_0;
  v5 = *(_BYTE *)(((unsigned __int64)&v2->_anon_0 >> 3) + 0x7FFF8000);
  if ( v5 <= (((unsigned __int8)v2 + 16) & 7) && v5 )
    goto LABEL_12;
  v2->_anon_0._M_local_buf[0] = 0;
  retstr = (std::string *)&s->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&s->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8(retstr, s);
LABEL_14:
    v6 = (struct _Unwind_Exception *)__asan_report_load8(v3, s);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v2, s);
    M_p = v2->_M_dataplus._M_p;
    if ( p_anon_0 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v2->_M_dataplus._M_p )
      operator delete(M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v6);
  }
  s = (const std::string *)(unsigned int)(LODWORD(s->_M_string_length) - 4);
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    goto LABEL_14;
  common::tools::ZlibUtil::_uncompress((const unsigned __int8 *)v3->_M_dataplus._M_p + 4, (unsigned int)s, v2);
  return v2;
};

// Line 56: range 000000000D3B3E14-000000000D3B4102
void __fastcall common::tools::ZlibUtil::_compress(
        const unsigned __int8 *data,
        unsigned int size,
        std::string *result,
        int level)
{
  unsigned __int64 v6; // r15
  _DWORD *v7; // r13
  int v8; // eax
  __int64 v9; // rax
  int v10; // ebp
  std::string::size_type *p_M_string_length; // rdi
  int v12; // eax
  char v14[33272]; // [rsp+20h] [rbp-81F8h] BYREF

  v6 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_10(33216LL);
    if ( v9 )
      v6 = v9;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 112 7 strm:57 192 32768 6 out:68";
  *(_QWORD *)(v6 + 16) = common::tools::ZlibUtil::_compress;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862725] = -218959118;
  v7[536863750] = -202116109;
  v7[536863751] = -202116109;
  v7[536863752] = -202116109;
  v7[536863753] = -202116109;
  v7[536863754] = -202116109;
  v7[536863755] = -202116109;
  v7[536863756] = -202116109;
  v7[536863757] = -202116109;
  *(_QWORD *)(v6 + 112) = 0LL;
  *(_QWORD *)(v6 + 120) = 0LL;
  *(_QWORD *)(v6 + 128) = 0LL;
  v8 = deflateInit_(v6 + 48, (unsigned int)level, "1.2.11", 112LL);
  if ( v8 )
    common::tools::ZlibUtil::throw_exception(v8, "deflateInit", *(const char **)(v6 + 96), data, size);
  *(_DWORD *)(v6 + 56) = size;
  *(_QWORD *)(v6 + 48) = data;
  do
  {
    *(_DWORD *)(v6 + 80) = 0x8000;
    *(_QWORD *)(v6 + 72) = v6 + 192;
    v12 = deflate(v6 + 48, 4LL);
    v10 = v12;
    if ( v12 == -2 )
      common::tools::ZlibUtil::throw_exception(-2, "deflate", *(const char **)(v6 + 96), data, size);
    p_M_string_length = &result->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&result->_M_string_length >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_string_length, 4LL);
LABEL_13:
      __asan_handle_no_return(p_M_string_length);
      std::__throw_length_error("basic_string::append");
    }
    if ( (unsigned int)(0x8000 - *(_DWORD *)(v6 + 80)) > 0x3FFFFFFFFFFFFFFFLL - result->_M_string_length )
      goto LABEL_13;
    std::string::_M_append(result, (const char *)(v6 + 192));
  }
  while ( !*(_DWORD *)(v6 + 80) );
  if ( v10 != 1 )
    common::tools::ZlibUtil::throw_exception(v10, "deflateFinish", *(const char **)(v6 + 96), data, size);
  deflateEnd(v6 + 48);
  if ( v14 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF9018) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF9020) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF9028) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF9030) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    __asan_stack_free_10(v6, 33216LL, v14);
  }
};

// Line 91: range 000000000D3B42C0-000000000D3B45CA
void __fastcall common::tools::ZlibUtil::_uncompress(
        const unsigned __int8 *data,
        unsigned int size,
        std::string *result)
{
  unsigned __int64 v4; // r15
  _DWORD *v5; // r13
  int v6; // eax
  __int64 v7; // rax
  int v8; // ebp
  std::string::size_type *p_M_string_length; // rdi
  int v10; // eax
  char v12[33272]; // [rsp+20h] [rbp-81F8h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_10(33216LL);
    if ( v7 )
      v4 = v7;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 112 7 strm:92 192 32768 7 out:105";
  *(_QWORD *)(v4 + 16) = common::tools::ZlibUtil::_uncompress;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862725] = -218959118;
  v5[536863750] = -202116109;
  v5[536863751] = -202116109;
  v5[536863752] = -202116109;
  v5[536863753] = -202116109;
  v5[536863754] = -202116109;
  v5[536863755] = -202116109;
  v5[536863756] = -202116109;
  v5[536863757] = -202116109;
  *(_QWORD *)(v4 + 112) = 0LL;
  *(_QWORD *)(v4 + 120) = 0LL;
  *(_QWORD *)(v4 + 128) = 0LL;
  *(_DWORD *)(v4 + 56) = 0;
  *(_QWORD *)(v4 + 48) = 0LL;
  v6 = inflateInit_(v4 + 48, "1.2.11", 112LL);
  if ( v6 )
    common::tools::ZlibUtil::throw_exception(v6, "inflateInit", *(const char **)(v4 + 96), data, size);
  *(_DWORD *)(v4 + 56) = size;
  *(_QWORD *)(v4 + 48) = data;
  do
  {
    *(_DWORD *)(v4 + 80) = 0x8000;
    *(_QWORD *)(v4 + 72) = v4 + 192;
    v10 = inflate(v4 + 48, 0LL);
    v8 = v10;
    if ( v10 > -2 )
    {
      if ( v10 == 2 )
LABEL_13:
        common::tools::ZlibUtil::throw_exception(v10, "inflate", *(const char **)(v4 + 96), data, size);
    }
    else if ( v10 >= -4 )
    {
      goto LABEL_13;
    }
    p_M_string_length = &result->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&result->_M_string_length >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_string_length, 0LL);
LABEL_15:
      __asan_handle_no_return(p_M_string_length);
      std::__throw_length_error("basic_string::append");
    }
    if ( (unsigned int)(0x8000 - *(_DWORD *)(v4 + 80)) > 0x3FFFFFFFFFFFFFFFLL - result->_M_string_length )
      goto LABEL_15;
    std::string::_M_append(result, (const char *)(v4 + 192));
  }
  while ( !*(_DWORD *)(v4 + 80) );
  if ( v8 != 1 )
    common::tools::ZlibUtil::throw_exception(v8, "inflateFinish", *(const char **)(v4 + 96), data, size);
  inflateEnd(v4 + 48);
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF9018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF9020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF9028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF9030) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_10(v4, 33216LL, v12);
  }
};

// Line 133: range 000000000D3B31E0-000000000D3B3E11
void __fastcall __noreturn common::tools::ZlibUtil::throw_exception(
        int ret,
        const char *func,
        const char *msg,
        const unsigned __int8 *data,
        unsigned int size)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v8; // r12
  char *v9; // rbp
  char *v10; // rbx
  char *v11; // r12
  const char *v12; // rdx
  std::forward_iterator_tag v13; // cl
  __int64 v14; // rax
  common::milog::MilogStringStream *ostr; // r13
  char *p_cur; // rdi
  char *cur; // rdi
  size_t v18; // r12
  std::forward_iterator_tag v19; // cl
  unsigned int v20; // r14d
  unsigned int v21; // r13d
  common::milog::MiLog *v22; // rsi
  void *v23; // rdi
  size_t v24; // r12
  void *v25; // rdi
  size_t v26; // r12
  void *v27; // rdi
  size_t v28; // r12
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // r12
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rbx
  common::milog::MiLog *v35; // rsi
  std::string::size_type v36; // r12
  std::string::size_type v37; // rdi
  void *v38; // rdi
  size_t v39; // rbx
  std::string::size_type v40; // rdi
  void *v41; // rdi
  size_t v42; // rbx
  std::string::size_type v43; // rdi
  void *v44; // rdi
  size_t v45; // rbx
  char *v46; // rdi
  unsigned __int64 v47; // r12
  unsigned __int64 v48; // rdi
  void *v49; // rdi
  size_t v50; // rbx
  char *v51; // rdi
  __int64 v52; // rsi
  unsigned __int64 v53; // rax
  __m128i *v54; // rdx
  __m128i *v55; // rdi
  char v56; // dl
  char *v57; // rdi
  char *v58; // rdi
  const char *v59; // rdx
  std::forward_iterator_tag v60; // cl
  std::string::size_type M_string_length; // rdx
  __int64 v62; // rsi
  unsigned __int64 v63; // rax
  __m128i *v64; // rdx
  __m128i *v65; // rdi
  char v66; // dl
  char *v67; // rdi
  void *exception; // rdi
  common::milog::MiLogStream v72; // [rsp+20h] [rbp-158h] BYREF
  std::string v73; // [rsp+40h] [rbp-138h] BYREF
  char v74; // [rsp+60h] [rbp-118h] BYREF

  v8 = (unsigned __int64)&v74;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v14 = __asan_stack_malloc_2(224LL);
    if ( v14 )
      v8 = v14;
  }
  v9 = (char *)(v8 + 224);
  v10 = (char *)(v8 + 224);
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "3 32 32 11 hex_str:141 96 32 8 info:164 160 32 8 temp:149";
  *(_QWORD *)(v8 + 16) = common::tools::ZlibUtil::throw_exception;
  v11 = (char *)(v8 >> 3);
  *((_DWORD *)v11 + 536862720) = -235802127;
  *((_DWORD *)v11 + 536862722) = -218959118;
  *((_DWORD *)v11 + 536862724) = -218959118;
  *((_DWORD *)v11 + 536862726) = -202116109;
  if ( size == 0 || data == 0LL )
    goto LABEL_3;
  *((_QWORD *)v9 - 24) = v9 - 176;
  *((_QWORD *)v9 - 23) = 0LL;
  *(v9 - 176) = 0;
  boost::algorithm::hex<unsigned char const*,std::back_insert_iterator<std::string>>(
    data,
    &data[size],
    (std::back_insert_iterator<std::string >)(v9 - 192));
  common::milog::MiLogStream::MiLogStream(
    &v72,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/zlib_utils.cpp",
    "throw_exception",
    144);
  ostr = v72.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v72.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_cur = (char *)v72.ostr_;
    __asan_report_load8(v72.ostr_, &common::milog::MiLogDefault::default_log_obj_);
  }
  else
  {
    v11 = v72.ostr_->buffer_.data_ + 0x4000;
    p_cur = (char *)&v72.ostr_->buffer_.cur_;
    if ( !*(_BYTE *)(((unsigned __int64)&v72.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
    {
      cur = v72.ostr_->buffer_.cur_;
      v18 = (int)v11 - (int)cur;
      if ( v18 > 0xC )
        v18 = 13LL;
      memcpy(cur, "INPUT BEGIN: ", v18);
      ostr->buffer_.cur_ += v18;
      p_cur = (char *)&v72;
      common::milog::MiLogStream::~MiLogStream(&v72);
      v20 = 0;
      v21 = 0;
      while ( 1 )
      {
        v5 = v21;
        v29 = *((_QWORD *)v10 - 23) - v21;
        if ( v29 <= 0xF80 )
          goto LABEL_44;
        v11 = (char *)*((_QWORD *)v10 - 23);
        if ( v21 > (unsigned __int64)v11 )
          goto LABEL_15;
        *((_QWORD *)v10 - 8) = v10 - 48;
        v30 = *((_QWORD *)v10 - 23);
        if ( v21 > v30 )
        {
          __asan_handle_no_return(p_cur);
          std::__throw_out_of_range_fmt(
            "%s: __pos (which is %zu) > this->size() (which is %zu)",
            "basic_string::basic_string",
            v21,
            v30);
        }
        v31 = v30 - v21;
        if ( v31 > 0xF80 )
          v31 = 3968LL;
        std::string::_M_construct<char const*>(
          (std::string *const)v10 - 2,
          (const char *)(v21 + *((_QWORD *)v10 - 24)),
          (const char *)(v21 + *((_QWORD *)v10 - 24) + v31),
          v19);
        v22 = &common::milog::MiLogDefault::default_log_obj_;
        common::milog::MiLogStream::MiLogStream(
          (common::milog::MiLogStream *const)v10 - 4,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/zlib_utils.cpp",
          "throw_exception",
          150);
        v5 = *((_QWORD *)v10 - 13);
        p_cur = (char *)v5;
        if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
          break;
        p_cur = (char *)(v5 + 8);
        if ( *(_BYTE *)(((v5 + 8) >> 3) + 0x7FFF8000) )
          goto LABEL_39;
        v23 = *(void **)(v5 + 8);
        v24 = *(_DWORD *)v5 + 0x4000 - (int)v23;
        if ( v24 > 9 )
          v24 = 10LL;
        memcpy(v23, "INPUT SEQ ", v24);
        *(_QWORD *)(v5 + 8) += v24;
        v22 = (common::milog::MiLog *)v20;
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
          *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)v10 - 13),
          v20);
        v5 = *((_QWORD *)v10 - 13);
        p_cur = (char *)v5;
        if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
          goto LABEL_40;
        p_cur = (char *)(v5 + 8);
        if ( *(_BYTE *)(((v5 + 8) >> 3) + 0x7FFF8000) )
          goto LABEL_41;
        v25 = *(void **)(v5 + 8);
        v26 = *(_DWORD *)v5 + 0x4000 - (int)v25;
        if ( v26 > 1 )
          v26 = 2LL;
        memcpy(v25, " :", v26);
        *(_QWORD *)(v5 + 8) += v26;
        v5 = *((_QWORD *)v10 - 13);
        v22 = (common::milog::MiLog *)*((_QWORD *)v10 - 8);
        p_cur = (char *)v5;
        if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
          goto LABEL_42;
        p_cur = (char *)(v5 + 8);
        if ( *(_BYTE *)(((v5 + 8) >> 3) + 0x7FFF8000) )
          goto LABEL_43;
        v27 = *(void **)(v5 + 8);
        v28 = *(_DWORD *)v5 + 0x4000 - (int)v27;
        if ( *((_QWORD *)v10 - 7) <= v28 )
          v28 = *((_QWORD *)v10 - 7);
        memcpy(v27, v22, v28);
        *(_QWORD *)(v5 + 8) += v28;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)v10 - 4);
        v21 += 3968;
        p_cur = (char *)*((_QWORD *)v10 - 8);
        if ( p_cur != v10 - 48 )
          operator delete(p_cur);
        ++v20;
      }
      __asan_report_load8(v5, &common::milog::MiLogDefault::default_log_obj_);
LABEL_39:
      __asan_report_load8(p_cur, &common::milog::MiLogDefault::default_log_obj_);
LABEL_40:
      __asan_report_load8(p_cur, v22);
LABEL_41:
      __asan_report_load8(p_cur, v22);
LABEL_42:
      __asan_report_load8(p_cur, v22);
LABEL_43:
      v29 = __asan_report_load8(p_cur, v22);
LABEL_44:
      v32 = *((_QWORD *)v9 - 23);
      if ( v5 > v32 )
      {
        __asan_handle_no_return(p_cur);
        std::__throw_out_of_range_fmt(
          "%s: __pos (which is %zu) > this->size() (which is %zu)",
          "basic_string::substr",
          v5,
          v32);
      }
      *((_QWORD *)v9 - 8) = v9 - 48;
      v33 = *((_QWORD *)v9 - 23);
      if ( v5 > v33 )
      {
        __asan_handle_no_return(p_cur);
        std::__throw_out_of_range_fmt(
          "%s: __pos (which is %zu) > this->size() (which is %zu)",
          "basic_string::basic_string",
          v5,
          v33);
      }
      v34 = v33 - v5;
      if ( v29 < v34 )
        v34 = v29;
      std::string::_M_construct<char const*>(
        (std::string *const)v9 - 2,
        (const char *)(v5 + *((_QWORD *)v9 - 24)),
        (const char *)(v5 + *((_QWORD *)v9 - 24) + v34),
        v19);
      v35 = &common::milog::MiLogDefault::default_log_obj_;
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&v73,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "src/zlib_utils.cpp",
        "throw_exception",
        156);
      v36 = *(&v73._anon_0._M_allocated_capacity + 1);
      if ( *(_BYTE *)((*(&v73._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
      {
        v37 = *(&v73._anon_0._M_allocated_capacity + 1);
        __asan_report_load8(*(&v73._anon_0._M_allocated_capacity + 1), &common::milog::MiLogDefault::default_log_obj_);
      }
      else
      {
        v37 = *(&v73._anon_0._M_allocated_capacity + 1) + 8;
        if ( !*(_BYTE *)(((*(&v73._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
        {
          v38 = *(void **)(*(&v73._anon_0._M_allocated_capacity + 1) + 8);
          v39 = **((_DWORD **)&v73._anon_0._M_allocated_capacity + 1) + 0x4000 - (int)v38;
          if ( v39 > 9 )
            v39 = 10LL;
          memcpy(v38, "INPUT SEQ ", v39);
          *(_QWORD *)(v36 + 8) += v39;
          v35 = (common::milog::MiLog *)v20;
          common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
            *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&v73._anon_0._M_allocated_capacity
            + 1),
            v20);
          v36 = *(&v73._anon_0._M_allocated_capacity + 1);
          if ( !*(_BYTE *)((*(&v73._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
          {
            v40 = *(&v73._anon_0._M_allocated_capacity + 1) + 8;
            if ( !*(_BYTE *)(((*(&v73._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
            {
              v41 = *(void **)(*(&v73._anon_0._M_allocated_capacity + 1) + 8);
              v42 = **((_DWORD **)&v73._anon_0._M_allocated_capacity + 1) + 0x4000 - (int)v41;
              if ( v42 > 1 )
                v42 = 2LL;
              memcpy(v41, " :", v42);
              *(_QWORD *)(v36 + 8) += v42;
              v36 = *(&v73._anon_0._M_allocated_capacity + 1);
              v35 = (common::milog::MiLog *)*((_QWORD *)v9 - 8);
              if ( !*(_BYTE *)((*(&v73._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
              {
                v43 = *(&v73._anon_0._M_allocated_capacity + 1) + 8;
                if ( !*(_BYTE *)(((*(&v73._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
                {
                  v44 = *(void **)(*(&v73._anon_0._M_allocated_capacity + 1) + 8);
                  v45 = **((_DWORD **)&v73._anon_0._M_allocated_capacity + 1) + 0x4000 - (int)v44;
                  if ( *((_QWORD *)v9 - 7) <= v45 )
                    v45 = *((_QWORD *)v9 - 7);
                  memcpy(v44, v35, v45);
                  *(_QWORD *)(v36 + 8) += v45;
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v73);
                  v46 = (char *)*((_QWORD *)v9 - 8);
                  if ( v46 != v9 - 48 )
                    operator delete(v46);
                  v35 = &common::milog::MiLogDefault::default_log_obj_;
                  common::milog::MiLogStream::MiLogStream(
                    (common::milog::MiLogStream *const)v9 - 2,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "src/zlib_utils.cpp",
                    "throw_exception",
                    161);
LABEL_72:
                  v47 = *((_QWORD *)v9 - 5);
                  if ( *(_BYTE *)((v47 >> 3) + 0x7FFF8000) )
                  {
                    v48 = *((_QWORD *)v9 - 5);
                    __asan_report_load8(v48, v35);
                  }
                  else
                  {
                    v48 = v47 + 8;
                    if ( !*(_BYTE *)(((v47 + 8) >> 3) + 0x7FFF8000) )
                    {
                      v49 = *(void **)(v47 + 8);
                      v50 = *(_DWORD *)v47 + 0x4000 - (int)v49;
                      if ( v50 > 9 )
                        v50 = 10LL;
                      memcpy(v49, "INPUT END.", v50);
                      *(_QWORD *)(v47 + 8) += v50;
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)v9 - 2);
                      v51 = (char *)*((_QWORD *)v9 - 24);
                      if ( v51 != v9 - 176 )
                        operator delete(v51);
LABEL_3:
                      *((_QWORD *)v9 - 16) = v9 - 112;
                      *((_QWORD *)v9 - 15) = 0LL;
                      *(v9 - 112) = 0;
                      if ( !func )
                        goto LABEL_103;
                      v73._M_dataplus._M_p = v73._anon_0._M_local_buf;
                      v12 = &func[strlen(func)];
LABEL_5:
                      std::string::_M_construct<char const*>(&v73, func, v12, v13);
                      if ( v73._M_string_length == 0x3FFFFFFFFFFFFFFFLL )
                      {
                        __asan_handle_no_return(&v73);
                        std::__throw_length_error("basic_string::append");
                      }
                      v52 = (__int64)" ";
                      v53 = std::string::_M_append(&v73, " ", 1LL);
                      *((_QWORD *)v9 - 8) = v9 - 48;
                      if ( *(_BYTE *)((v53 >> 3) + 0x7FFF8000) )
                      {
                        v53 = __asan_report_load8(v53, " ");
                      }
                      else
                      {
                        v54 = (__m128i *)(v53 + 16);
                        if ( *(_QWORD *)v53 != v53 + 16 )
                        {
                          *((_QWORD *)v9 - 8) = *(_QWORD *)v53;
                          v55 = (__m128i *)(v53 + 16);
                          if ( !*(_BYTE *)(((v53 + 16) >> 3) + 0x7FFF8000) )
                          {
                            *((_QWORD *)v9 - 6) = *(_QWORD *)(v53 + 16);
                            goto LABEL_87;
                          }
                          goto LABEL_96;
                        }
                      }
                      v55 = v54;
                      v52 = *(unsigned __int8 *)(((v53 + 31) >> 3) + 0x7FFF8000);
                      if ( (*(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) == 0
                         || *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) > ((unsigned __int8)v54 & 7))
                        && ((_BYTE)v52 == 0 || (char)v52 > (char)((v53 + 31) & 7)) )
                      {
                        *((__m128i *)v9 - 3) = _mm_loadu_si128((const __m128i *)(v53 + 16));
LABEL_87:
                        v55 = (__m128i *)(v53 + 8);
                        if ( !*(_BYTE *)(((v53 + 8) >> 3) + 0x7FFF8000) )
                        {
                          *((_QWORD *)v9 - 7) = *(_QWORD *)(v53 + 8);
                          *(_QWORD *)v53 = v54;
                          *(_QWORD *)(v53 + 8) = 0LL;
                          v55 = (__m128i *)(v53 + 16);
                          v56 = *(_BYTE *)(((v53 + 16) >> 3) + 0x7FFF8000);
                          if ( v56 > (char)((v53 + 16) & 7) || !v56 )
                          {
                            *(_BYTE *)(v53 + 16) = 0;
                            std::string::_M_append(v9 - 128, *((const char **)v9 - 8), *((_QWORD *)v9 - 7));
LABEL_99:
                            v57 = (char *)*((_QWORD *)v9 - 8);
                            if ( v57 != v9 - 48 )
                              operator delete(v57);
                            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v73._M_dataplus._M_p != &v73._anon_0 )
                              operator delete(v73._M_dataplus._M_p);
LABEL_103:
                            common::tools::StringUtils::numToStr<int>((std::string *)v9 - 2, ret);
                            std::string::_M_append(v9 - 128, *((const char **)v9 - 8), *((_QWORD *)v9 - 7));
                            v58 = (char *)*((_QWORD *)v9 - 8);
                            if ( v58 != v9 - 48 )
                              operator delete(v58);
                            if ( !msg )
                            {
LABEL_128:
                              exception = __cxa_allocate_exception(0x10uLL);
                              std::runtime_error::runtime_error(exception, v9 - 128);
                              __asan_handle_no_return(exception);
                              _cxa_throw(
                                exception,
                                (struct type_info *)&`typeinfo for'std::runtime_error,
                                (void (__fastcall *)(void *))&std::runtime_error::~runtime_error);
                            }
                            v73._M_dataplus._M_p = v73._anon_0._M_local_buf;
                            v59 = &msg[strlen(msg)];
                            std::string::_M_construct<char const*>(&v73, msg, v59, v60);
                            M_string_length = v73._M_string_length;
                            if ( v73._M_string_length )
                              M_string_length = 0LL;
                            v62 = 0LL;
                            v63 = std::string::_M_replace(&v73, 0LL, M_string_length, " ", 1LL);
                            *((_QWORD *)v9 - 8) = v9 - 48;
                            if ( *(_BYTE *)((v63 >> 3) + 0x7FFF8000) )
                            {
                              v63 = __asan_report_load8(v63, 0LL);
                            }
                            else
                            {
                              v64 = (__m128i *)(v63 + 16);
                              if ( *(_QWORD *)v63 != v63 + 16 )
                              {
                                *((_QWORD *)v9 - 8) = *(_QWORD *)v63;
                                v65 = (__m128i *)(v63 + 16);
                                if ( !*(_BYTE *)(((v63 + 16) >> 3) + 0x7FFF8000) )
                                {
                                  *((_QWORD *)v9 - 6) = *(_QWORD *)(v63 + 16);
                                  goto LABEL_112;
                                }
                                goto LABEL_121;
                              }
                            }
                            v65 = v64;
                            v62 = *(unsigned __int8 *)(((v63 + 31) >> 3) + 0x7FFF8000);
                            if ( (*(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) == 0
                               || *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) > ((unsigned __int8)v64 & 7))
                              && ((_BYTE)v62 == 0 || (char)v62 > (char)((v63 + 31) & 7)) )
                            {
                              *((__m128i *)v9 - 3) = _mm_loadu_si128((const __m128i *)(v63 + 16));
LABEL_112:
                              v65 = (__m128i *)(v63 + 8);
                              if ( !*(_BYTE *)(((v63 + 8) >> 3) + 0x7FFF8000) )
                              {
                                *((_QWORD *)v9 - 7) = *(_QWORD *)(v63 + 8);
                                *(_QWORD *)v63 = v64;
                                *(_QWORD *)(v63 + 8) = 0LL;
                                v65 = (__m128i *)(v63 + 16);
                                v66 = *(_BYTE *)(((v63 + 16) >> 3) + 0x7FFF8000);
                                if ( v66 > (char)((v63 + 16) & 7) || !v66 )
                                {
                                  *(_BYTE *)(v63 + 16) = 0;
                                  std::string::_M_append(v9 - 128, *((const char **)v9 - 8), *((_QWORD *)v9 - 7));
LABEL_124:
                                  v67 = (char *)*((_QWORD *)v9 - 8);
                                  if ( v67 != v9 - 48 )
                                    operator delete(v67);
                                  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v73._M_dataplus._M_p != &v73._anon_0 )
                                    operator delete(v73._M_dataplus._M_p);
                                  goto LABEL_128;
                                }
LABEL_123:
                                __asan_report_store1(v65);
                                goto LABEL_124;
                              }
LABEL_122:
                              __asan_report_load8(v65, v62);
                              goto LABEL_123;
                            }
                            v62 = 16LL;
                            __asan_report_load_n(v64, 16LL);
LABEL_121:
                            __asan_report_load8(v65, v62);
                            goto LABEL_122;
                          }
LABEL_98:
                          __asan_report_store1(v55);
                          goto LABEL_99;
                        }
LABEL_97:
                        __asan_report_load8(v55, v52);
                        goto LABEL_98;
                      }
                      v52 = 16LL;
                      __asan_report_load_n(v54, 16LL);
LABEL_96:
                      __asan_report_load8(v55, v52);
                      goto LABEL_97;
                    }
                  }
                  __asan_report_load8(v48, v35);
                  v12 = func - 1;
                  goto LABEL_5;
                }
LABEL_71:
                __asan_report_load8(v43, v35);
                goto LABEL_72;
              }
LABEL_70:
              v43 = v36;
              __asan_report_load8(v36, v35);
              goto LABEL_71;
            }
LABEL_69:
            __asan_report_load8(v40, v35);
            goto LABEL_70;
          }
LABEL_68:
          v40 = v36;
          __asan_report_load8(v36, v35);
          goto LABEL_69;
        }
      }
      __asan_report_load8(v37, &common::milog::MiLogDefault::default_log_obj_);
      goto LABEL_68;
    }
  }
  __asan_report_load8(p_cur, &common::milog::MiLogDefault::default_log_obj_);
LABEL_15:
  __asan_handle_no_return(p_cur);
  std::__throw_out_of_range_fmt(
    "%s: __pos (which is %zu) > this->size() (which is %zu)",
    "basic_string::substr",
    v5,
    (size_t)v11);
};

// Line 176: range 000000000D3B47FB-000000000D3B4812
void __cdecl GLOBAL__sub_I_zlib_utils_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};
