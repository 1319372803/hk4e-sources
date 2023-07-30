// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/impl/socket_ops.ipp

// Line 78: range 000000000C658525-000000000C6585CD
int __cdecl boost::asio::detail::socket_ops::error_wrapper<int>(int return_value, boost::system::error_code *ec)
{
  const boost::system::error_category *system_category; // rbx
  int *v3; // rax
  int *v4; // rdx
  const boost::system::error_category *cat; // rdx
  boost::system::error_code v7; // [rsp+10h] [rbp-20h] BYREF

  system_category = boost::asio::error::get_system_category();
  v3 = __errno_location();
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v3);
  }
  boost::system::error_code::error_code(&v7, *v4, system_category);
  if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
    __asan_report_store16(ec);
  cat = v7.cat_;
  *(_QWORD *)&ec->val_ = *(_QWORD *)&v7.val_;
  ec->cat_ = cat;
  return return_value;
};

// Line 92: range 000000000C6583B0-000000000C658524
boost::asio::detail::socket_type __cdecl boost::asio::detail::socket_ops::call_accept<unsigned int>(
        unsigned int *a1,
        boost::asio::detail::socket_type s,
        boost::asio::detail::socket_addr_type *addr,
        std::size_t *addrlen)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::size_t v7; // rax
  socklen_t *v8; // rax
  std::size_t v9; // rcx
  boost::asio::detail::socket_type v10; // eax
  int result; // [rsp+2Ch] [rbp-64h]
  char v14[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 14 tmp_addrlen:95";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::socket_ops::call_accept<unsigned int>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  if ( addrlen )
  {
    if ( *(_BYTE *)(((unsigned __int64)addrlen >> 3) + 0x7FFF8000) )
      __asan_report_load8(addrlen);
    v7 = *addrlen;
  }
  else
  {
    LODWORD(v7) = 0;
  }
  *(_DWORD *)(v4 + 32) = v7;
  if ( addrlen )
    v8 = (socklen_t *)(v4 + 32);
  else
    v8 = 0LL;
  result = accept(s, addr, v8);
  if ( addrlen )
  {
    v9 = *(unsigned int *)(v4 + 32);
    if ( *(_BYTE *)(((unsigned __int64)addrlen >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *addrlen = v9;
  }
  v10 = result;
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v10;
};

// Line 122: range 000000000C63C302-000000000C63C34D
void __cdecl boost::asio::detail::socket_ops::clear_last_error()
{
  int *v0; // rax
  _DWORD *v1; // rdx

  v0 = __errno_location();
  v1 = v0;
  if ( *(_BYTE *)(((unsigned __int64)v0 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v0 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v0);
  }
  *v1 = 0;
};

// Line 227: range 000000000C63C49D-000000000C63C63F
bool __cdecl boost::asio::detail::socket_ops::non_blocking_accept(
        boost::asio::detail::socket_type s,
        boost::asio::detail::socket_ops::state_type state,
        boost::asio::detail::socket_addr_type *addr,
        std::size_t *addrlen,
        boost::system::error_code *ec,
        boost::asio::detail::socket_type *new_socket)
{
  boost::asio::detail::socket_type v6; // ecx
  boost::system::error_code v13; // [rsp+30h] [rbp-20h] BYREF
  boost::system::error_code rhs; // [rsp+40h] [rbp-10h] BYREF

  do
  {
    v6 = boost::asio::detail::socket_ops::accept(s, addr, addrlen, ec);
    if ( *(_BYTE *)(((unsigned __int64)new_socket >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)new_socket & 7) + 3) >= *(_BYTE *)(((unsigned __int64)new_socket >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(new_socket);
    }
    *new_socket = v6;
    if ( *new_socket != -1 )
      return 1;
    boost::system::error_code::error_code<boost::asio::error::basic_errors>(&rhs, interrupted_0, 0LL);
  }
  while ( boost::system::operator==(ec, &rhs) );
  boost::system::error_code::error_code<boost::asio::error::basic_errors>(&v13, try_again, 0LL);
  if ( !boost::system::operator==(ec, &v13) )
  {
    boost::system::error_code::error_code<boost::asio::error::basic_errors>(&rhs, try_again, 0LL);
    if ( !boost::system::operator==(ec, &rhs) )
    {
      boost::system::error_code::error_code<boost::asio::error::basic_errors>(&rhs, connection_aborted_0, 0LL);
      if ( boost::system::operator==(ec, &rhs) )
      {
        if ( (state & 4) != 0 )
          return 1;
      }
      else
      {
        if ( boost::system::error_code::value(ec) != 71 )
          return 1;
        if ( (state & 4) != 0 )
          return 1;
      }
    }
  }
  return 0;
};

// Line 271: range 000000000C6585CE-000000000C6585FD
int __cdecl boost::asio::detail::socket_ops::call_bind<unsigned int>(
        unsigned int *a1,
        boost::asio::detail::socket_type s,
        const boost::asio::detail::socket_addr_type *addr,
        std::size_t addrlen)
{
  return bind(s, addr, addrlen);
};

// Line 279: range 000000000C63C640-000000000C63C6EF
int __cdecl boost::asio::detail::socket_ops::bind(
        boost::asio::detail::socket_type s,
        const boost::asio::detail::socket_addr_type *addr,
        std::size_t addrlen,
        boost::system::error_code *ec)
{
  int v5; // edx
  const boost::system::error_category *cat; // rdx
  int result; // [rsp+2Ch] [rbp-14h]
  boost::system::error_code v10; // [rsp+30h] [rbp-10h] BYREF

  if ( s == -1 )
  {
    boost::system::error_code::operator=<boost::asio::error::basic_errors>(ec, bad_descriptor);
    return -1;
  }
  else
  {
    boost::asio::detail::socket_ops::clear_last_error();
    v5 = boost::asio::detail::socket_ops::call_bind<unsigned int>((unsigned int *)8, s, addr, addrlen);
    result = boost::asio::detail::socket_ops::error_wrapper<int>(v5, ec);
    if ( !result )
    {
      boost::system::error_code::error_code(&v10);
      if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
        __asan_report_store16(ec);
      cat = v10.cat_;
      *(_QWORD *)&ec->val_ = *(_QWORD *)&v10.val_;
      ec->cat_ = cat;
    }
    return result;
  }
};

// Line 296: range 000000000C63C6F0-000000000C63CA62
int __cdecl boost::asio::detail::socket_ops::close(
        boost::asio::detail::socket_type s,
        boost::asio::detail::socket_ops::state_type *state,
        bool destruction,
        boost::system::error_code *ec)
{
  boost::system::error_code *v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  int v7; // eax
  int v9; // eax
  const boost::system::error_category *cat; // rdx
  int v11; // eax
  int result; // [rsp+2Ch] [rbp-B4h]
  boost::system::error_code rhs; // [rsp+30h] [rbp-B0h] BYREF
  char v16[160]; // [rsp+40h] [rbp-A0h] BYREF

  v4 = (boost::system::error_code *)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = (boost::system::error_code *)v5;
  }
  *(_QWORD *)&v4->val_ = 1102416563LL;
  v4->cat_ = (const boost::system::error_category *)"3 48 4 7 arg:339 64 8 7 opt:305 96 16 14 ignored_ec:308";
  *(_QWORD *)&v4[1].val_ = boost::asio::detail::socket_ops::close;
  v6 = (_DWORD *)((unsigned __int64)v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -202178560;
  result = 0;
  if ( s != -1 )
  {
    if ( destruction )
    {
      if ( *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)state & 7) >= *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(state);
      }
      if ( (*state & 8) != 0 )
      {
        v4[4].val_ = 0;
        *(_DWORD *)&v4[4].failed_ = 0;
        v4[6].val_ = 0;
        v4[6].failed_ = 0;
        v4[6].cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
        boost::asio::detail::socket_ops::setsockopt(s, state, 1, 13, &v4[4], 8uLL, v4 + 6);
      }
    }
    boost::asio::detail::socket_ops::clear_last_error();
    v7 = close(s);
    result = boost::asio::detail::socket_ops::error_wrapper<int>(v7, ec);
    if ( result )
    {
      boost::system::error_code::error_code<boost::asio::error::basic_errors>(&rhs, try_again, 0LL);
      if ( boost::system::operator==(ec, &rhs)
        || (boost::system::error_code::error_code<boost::asio::error::basic_errors>(v4 + 6, try_again, 0LL),
            boost::system::operator==(ec, v4 + 6)) )
      {
        v4[3].val_ = 0;
        ioctl(s, 0x5421uLL, &v4[3]);
        if ( *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)state & 7) >= *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(state);
        }
        *state &= 0xFCu;
        boost::asio::detail::socket_ops::clear_last_error();
        v9 = close(s);
        result = boost::asio::detail::socket_ops::error_wrapper<int>(v9, ec);
      }
    }
  }
  if ( !result )
  {
    boost::system::error_code::error_code(v4 + 6);
    if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
      __asan_report_store16(ec);
    cat = v4[6].cat_;
    *(_QWORD *)&ec->val_ = *(_QWORD *)&v4[6].val_;
    ec->cat_ = cat;
  }
  v11 = result;
  if ( v16 == (char *)v4 )
  {
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)&v4->val_ = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v11;
};

// Line 405: range 000000000C63CA63-000000000C63CD21
bool __cdecl boost::asio::detail::socket_ops::set_internal_non_blocking(
        boost::asio::detail::socket_type s,
        boost::asio::detail::socket_ops::state_type *state,
        bool value,
        boost::system::error_code *ec)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  bool result; // al
  int v8; // edx
  const boost::system::error_category *cat; // rdx
  boost::system::error_code v12; // [rsp+30h] [rbp-70h] BYREF
  char v13[96]; // [rsp+40h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 7 arg:434";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::socket_ops::set_internal_non_blocking;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  if ( s == -1 )
  {
    boost::system::error_code::operator=<boost::asio::error::basic_errors>(ec, bad_descriptor);
    result = 0;
  }
  else
  {
    if ( value )
      goto LABEL_11;
    if ( *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)state & 7) >= *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(state);
    }
    if ( (*state & 1) != 0 )
    {
      boost::system::error_code::operator=<boost::asio::error::basic_errors>(ec, invalid_argument_0);
      result = 0;
    }
    else
    {
LABEL_11:
      boost::asio::detail::socket_ops::clear_last_error();
      *(_DWORD *)(v4 + 32) = value;
      v8 = ioctl(s, 0x5421uLL, v4 + 32);
      if ( boost::asio::detail::socket_ops::error_wrapper<int>(v8, ec) < 0 )
      {
        result = 0;
      }
      else
      {
        boost::system::error_code::error_code(&v12);
        if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
          __asan_report_store16(ec);
        cat = v12.cat_;
        *(_QWORD *)&ec->val_ = *(_QWORD *)&v12.val_;
        ec->cat_ = cat;
        if ( value )
        {
          if ( *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)state & 7) >= *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(state);
          }
          *state |= 2u;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)state & 7) >= *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(state);
          }
          *state &= ~2u;
        }
        result = 1;
      }
    }
  }
  if ( v13 == (char *)v4 )
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

// Line 606: range 000000000C63C39A-000000000C63C44E
boost::asio::detail::socket_type __cdecl boost::asio::detail::socket_ops::accept(
        boost::asio::detail::socket_type s,
        boost::asio::detail::socket_addr_type *addr,
        std::size_t *addrlen,
        boost::system::error_code *ec)
{
  int v5; // edx
  const boost::system::error_category *cat; // rdx
  int new_s; // [rsp+2Ch] [rbp-14h]
  boost::system::error_code v10; // [rsp+30h] [rbp-10h] BYREF

  if ( s == -1 )
  {
    boost::system::error_code::operator=<boost::asio::error::basic_errors>(ec, bad_descriptor);
    return -1;
  }
  else
  {
    boost::asio::detail::socket_ops::clear_last_error();
    v5 = boost::asio::detail::socket_ops::call_accept<unsigned int>((unsigned int *)8, s, addr, addrlen);
    new_s = boost::asio::detail::socket_ops::error_wrapper<int>(v5, ec);
    if ( new_s == -1 )
    {
      return -1;
    }
    else
    {
      boost::system::error_code::error_code(&v10);
      if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
        __asan_report_store16(ec);
      cat = v10.cat_;
      *(_QWORD *)&ec->val_ = *(_QWORD *)&v10.val_;
      ec->cat_ = cat;
      return new_s;
    }
  }
};

// Line 684: range 000000000C63CD22-000000000C63CDC4
int __cdecl boost::asio::detail::socket_ops::listen(
        boost::asio::detail::socket_type s,
        int backlog,
        boost::system::error_code *ec)
{
  int v4; // edx
  const boost::system::error_category *cat; // rdx
  int result; // [rsp+1Ch] [rbp-14h]
  boost::system::error_code v8; // [rsp+20h] [rbp-10h] BYREF

  if ( s == -1 )
  {
    boost::system::error_code::operator=<boost::asio::error::basic_errors>(ec, bad_descriptor);
    return -1;
  }
  else
  {
    boost::asio::detail::socket_ops::clear_last_error();
    v4 = listen(s, backlog);
    result = boost::asio::detail::socket_ops::error_wrapper<int>(v4, ec);
    if ( !result )
    {
      boost::system::error_code::error_code(&v8);
      if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
        __asan_report_store16(ec);
      cat = v8.cat_;
      *(_QWORD *)&ec->val_ = *(_QWORD *)&v8.val_;
      ec->cat_ = cat;
    }
    return result;
  }
};

// Line 1392: range 000000000C63CE12-000000000C63CE9C
boost::asio::detail::socket_type __cdecl boost::asio::detail::socket_ops::socket(
        int af_0,
        int type,
        int protocol,
        boost::system::error_code *ec)
{
  int v4; // edx
  const boost::system::error_category *cat; // rdx
  boost::asio::detail::socket_type s; // [rsp+2Ch] [rbp-14h]
  boost::system::error_code v10; // [rsp+30h] [rbp-10h] BYREF

  boost::asio::detail::socket_ops::clear_last_error();
  v4 = socket(af_0, type, protocol);
  s = boost::asio::detail::socket_ops::error_wrapper<int>(v4, ec);
  if ( s >= 0 )
  {
    boost::system::error_code::error_code(&v10);
    if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
      __asan_report_store16(ec);
    cat = v10.cat_;
    *(_QWORD *)&ec->val_ = *(_QWORD *)&v10.val_;
    ec->cat_ = cat;
  }
  return s;
};

// Line 1437: range 000000000C6585FE-000000000C658639
int __cdecl boost::asio::detail::socket_ops::call_setsockopt<unsigned int>(
        unsigned int *a1,
        boost::asio::detail::socket_type s,
        int level,
        int optname,
        const void *optval,
        std::size_t optlen)
{
  return setsockopt(s, level, optname, optval, optlen);
};

// Line 1447: range 000000000C63CE9D-000000000C63D122
int __cdecl boost::asio::detail::socket_ops::setsockopt(
        boost::asio::detail::socket_type s,
        boost::asio::detail::socket_ops::state_type *state,
        int level,
        int optname,
        const void *optval,
        std::size_t optlen,
        boost::system::error_code *ec)
{
  const boost::system::error_category *cat; // rdx
  int v9; // eax
  const boost::system::error_category *v10; // rdx
  int result; // [rsp+3Ch] [rbp-14h]
  boost::system::error_code v16; // [rsp+40h] [rbp-10h] BYREF

  if ( s == -1 )
  {
    boost::system::error_code::operator=<boost::asio::error::basic_errors>(ec, bad_descriptor);
    return -1;
  }
  if ( level == -1525678080 && optname == 2 )
    goto LABEL_5;
  if ( level == -1525678080 && optname == 1 )
  {
    if ( optlen != 4 )
    {
LABEL_5:
      boost::system::error_code::operator=<boost::asio::error::basic_errors>(ec, invalid_argument_0);
      return -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)optval >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)optval & 7) + 3) >= *(_BYTE *)(((unsigned __int64)optval >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(optval);
    }
    if ( *(_DWORD *)optval )
    {
      if ( *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)state & 7) >= *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(state);
      }
      *state |= 4u;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)state & 7) >= *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(state);
      }
      *state &= ~4u;
    }
    boost::system::error_code::error_code(&v16);
    if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
      __asan_report_store16(ec);
    cat = v16.cat_;
    *(_QWORD *)&ec->val_ = *(_QWORD *)&v16.val_;
    ec->cat_ = cat;
    return 0;
  }
  else
  {
    if ( level == 1 && optname == 13 )
    {
      if ( *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)state & 7) >= *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(state);
      }
      *state |= 8u;
    }
    boost::asio::detail::socket_ops::clear_last_error();
    v9 = boost::asio::detail::socket_ops::call_setsockopt<unsigned int>(
           (unsigned int *)8,
           s,
           level,
           optname,
           optval,
           optlen);
    result = boost::asio::detail::socket_ops::error_wrapper<int>(v9, ec);
    if ( !result )
    {
      boost::system::error_code::error_code(&v16);
      if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
        __asan_report_store16(ec);
      v10 = v16.cat_;
      *(_QWORD *)&ec->val_ = *(_QWORD *)&v16.val_;
      ec->cat_ = v10;
    }
    return result;
  }
};

// Line 1524: range 000000000C65863A-000000000C658794
int __cdecl boost::asio::detail::socket_ops::call_getsockopt<unsigned int>(
        unsigned int *a1,
        boost::asio::detail::socket_type s,
        int level,
        int optname,
        void *optval,
        std::size_t *optlen)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  std::size_t v9; // rcx
  int v10; // eax
  int result; // [rsp+3Ch] [rbp-64h]
  char v16[96]; // [rsp+40h] [rbp-60h] BYREF

  v6 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 4 15 tmp_optlen:1528";
  *(_QWORD *)(v6 + 16) = boost::asio::detail::socket_ops::call_getsockopt<unsigned int>;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)optlen >> 3) + 0x7FFF8000) )
    __asan_report_load8(optlen);
  *(_DWORD *)(v6 + 32) = *optlen;
  result = getsockopt(s, level, optname, optval, (socklen_t *)(v6 + 32));
  v9 = *(unsigned int *)(v6 + 32);
  if ( *(_BYTE *)(((unsigned __int64)optlen >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *optlen = v9;
  v10 = result;
  if ( v16 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v10;
};

// Line 1536: range 000000000C63D123-000000000C63D395
int __cdecl boost::asio::detail::socket_ops::getsockopt(
        boost::asio::detail::socket_type s,
        boost::asio::detail::socket_ops::state_type state,
        int level,
        int optname,
        void *optval,
        size_t *optlen,
        boost::system::error_code *ec)
{
  int v8; // ecx
  const boost::system::error_category *cat; // rdx
  int v10; // eax
  const boost::system::error_category *v11; // rdx
  int result; // [rsp+2Ch] [rbp-14h]
  boost::system::error_code v17; // [rsp+30h] [rbp-10h] BYREF

  if ( s == -1 )
  {
    boost::system::error_code::operator=<boost::asio::error::basic_errors>(ec, bad_descriptor);
    return -1;
  }
  if ( level == -1525678080 && optname == 2 )
    goto LABEL_5;
  if ( level == -1525678080 && optname == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)optlen >> 3) + 0x7FFF8000) )
      __asan_report_load8(optlen);
    if ( *optlen != 4 )
    {
LABEL_5:
      boost::system::error_code::operator=<boost::asio::error::basic_errors>(ec, invalid_argument_0);
      return -1;
    }
    v8 = ((int)state >> 2) & 1;
    if ( *(_BYTE *)(((unsigned __int64)optval >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)optval & 7) + 3) >= *(_BYTE *)(((unsigned __int64)optval >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(optval);
    }
    *(_DWORD *)optval = v8;
    boost::system::error_code::error_code(&v17);
    if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
      __asan_report_store16(ec);
    cat = v17.cat_;
    *(_QWORD *)&ec->val_ = *(_QWORD *)&v17.val_;
    ec->cat_ = cat;
    return 0;
  }
  else
  {
    boost::asio::detail::socket_ops::clear_last_error();
    v10 = boost::asio::detail::socket_ops::call_getsockopt<unsigned int>(
            (unsigned int *)8,
            s,
            level,
            optname,
            optval,
            optlen);
    result = boost::asio::detail::socket_ops::error_wrapper<int>(v10, ec);
    if ( !result && level == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)optlen >> 3) + 0x7FFF8000) )
        __asan_report_load8(optlen);
      if ( *optlen == 4 && (optname == 7 || optname == 8) )
      {
        if ( *(_BYTE *)(((unsigned __int64)optval >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)optval & 7) + 3) >= *(_BYTE *)(((unsigned __int64)optval >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(optval);
        }
        *(int *)optval /= 2;
      }
    }
    if ( !result )
    {
      boost::system::error_code::error_code(&v17);
      if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
        __asan_report_store16(ec);
      v11 = v17.cat_;
      *(_QWORD *)&ec->val_ = *(_QWORD *)&v17.val_;
      ec->cat_ = v11;
    }
    return result;
  }
};

// Line 2136: range 000000000CE023AA-000000000CE028CA
int __cdecl boost::asio::detail::socket_ops::inet_pton(
        int af_0,
        const char *src,
        void *dest,
        unsigned __int64 *scope_id,
        boost::system::error_code *ec)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  char *v8; // rax
  int v9; // eax
  signed __int64 v10; // rdx
  char v11; // cl
  int v12; // edx
  char v14; // al
  char v15; // al
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  bool is_link_local; // [rsp+32h] [rbp-BEh]
  int result; // [rsp+34h] [rbp-BCh]
  const char *src_ptr; // [rsp+38h] [rbp-B8h]
  const char *if_name; // [rsp+40h] [rbp-B0h]
  char v25[160]; // [rsp+50h] [rbp-A0h] BYREF

  v5 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 64 12 src_buf:2349";
  *(_QWORD *)(v5 + 16) = boost::asio::detail::socket_ops::inet_pton;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450892) = -202116109;
  boost::asio::detail::socket_ops::clear_last_error();
  if ( af_0 == 10 )
    v8 = strchr(src, 37);
  else
    v8 = 0LL;
  if_name = v8;
  src_ptr = src;
  if ( v8 )
  {
    if ( v8 - src > 63 )
    {
      boost::system::error_code::operator=<boost::asio::error::basic_errors>(ec, invalid_argument_0);
      v9 = 0;
      goto LABEL_53;
    }
    memcpy((void *)(v5 + 32), src, v8 - src);
    v10 = if_name - src;
    v11 = *(_BYTE *)(((if_name - src + v5 + 32) >> 3) + 0x7FFF8000);
    if ( v11 != 0 && (char)(((_BYTE)if_name - (_BYTE)src + v5 + 32) & 7) >= v11 )
      __asan_report_store1(if_name - src + v5 + 32);
    *(_BYTE *)(v10 + v5 + 128 - 96) = 0;
    src_ptr = (const char *)(v5 + 32);
  }
  v12 = inet_pton(af_0, src_ptr, dest);
  result = boost::asio::detail::socket_ops::error_wrapper<int>(v12, ec);
  if ( result <= 0 && !boost::system::error_code::operator bool(ec) )
    boost::system::error_code::operator=<boost::asio::error::basic_errors>(ec, invalid_argument_0);
  if ( result > 0 && af_0 == 10 && scope_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)scope_id >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *scope_id = 0LL;
    if ( if_name )
    {
      if ( *(_BYTE *)(((unsigned __int64)dest >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)dest & 7) >= *(_BYTE *)(((unsigned __int64)dest >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(dest);
      }
      if ( *(_BYTE *)dest != 0xFE )
        goto LABEL_32;
      if ( *(_BYTE *)((((unsigned __int64)dest + 1) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)dest + 1) & 7) >= *(_BYTE *)((((unsigned __int64)dest + 1) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1((char *)dest + 1);
      }
      if ( (*((_BYTE *)dest + 1) & 0xC0) == 128 )
        v14 = 1;
      else
LABEL_32:
        v14 = 0;
      is_link_local = v14;
      if ( *(_BYTE *)(((unsigned __int64)dest >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)dest & 7) >= *(_BYTE *)(((unsigned __int64)dest >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(dest);
      }
      if ( *(_BYTE *)dest != 0xFF )
        goto LABEL_40;
      if ( *(_BYTE *)((((unsigned __int64)dest + 1) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)dest + 1) & 7) >= *(_BYTE *)((((unsigned __int64)dest + 1) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1((char *)dest + 1);
      }
      if ( (*((_BYTE *)dest + 1) & 0xF) == 2 )
        v15 = 1;
      else
LABEL_40:
        v15 = 0;
      if ( is_link_local || v15 )
      {
        v16 = if_nametoindex(if_name + 1);
        if ( *(_BYTE *)(((unsigned __int64)scope_id >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *scope_id = v16;
      }
      if ( *(_BYTE *)(((unsigned __int64)scope_id >> 3) + 0x7FFF8000) )
        __asan_report_load8(scope_id);
      if ( !*scope_id )
      {
        v17 = atoi(if_name + 1);
        if ( *(_BYTE *)(((unsigned __int64)scope_id >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *scope_id = v17;
      }
    }
  }
  v9 = result;
LABEL_53:
  if ( v25 == (char *)v5 )
  {
    *(_DWORD *)((v5 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v9;
};

// Line 3276: range 0000000019B7794E-0000000019B77BF3
boost::system::error_code __fastcall boost::asio::detail::socket_ops::translate_addrinfo_error(int error)
{
  boost::ulong_long_type id; // rax
  unsigned __int8 v2; // al
  boost::ulong_long_type v3; // rax
  unsigned __int8 v4; // al
  int *v5; // rax
  char v6; // cl
  boost::beast::detail::stream_base::pending_guard *v7; // rdi
  boost::system::error_code result; // 0:rax.5,8:rdx.8

  switch ( error )
  {
    case -10:
      *(_QWORD *)&result.val_ = 0x10000000CLL;
      result.cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
      return result;
    case -9:
    case -5:
    case -2:
      return boost::asio::error::make_error_code(host_not_found);
    case -8:
      id = boost::asio::error::get_addrinfo_category(void)::instance.id_;
      if ( id == 0x8FAFD21E25C5E09BLL )
        goto LABEL_16;
      if ( id == 0xB2AB117A257EDF0DLL )
      {
        v2 = 1;
      }
      else if ( *(_BYTE *)(((unsigned __int64)(boost::asio::error::get_addrinfo_category(void)::instance._vptr_error_category
                                             + 6) >> 3)
                         + 0x7FFF8000) )
      {
        __asan_report_load8(boost::asio::error::get_addrinfo_category(void)::instance._vptr_error_category + 6);
LABEL_16:
        v2 = 1;
      }
      else
      {
        v2 = (*((__int64 (__fastcall **)(boost::asio::error::detail::addrinfo_category *, __int64))boost::asio::error::get_addrinfo_category(void)::instance._vptr_error_category
              + 6))(
               &boost::asio::error::get_addrinfo_category(void)::instance,
               4294967288LL);
      }
      *(_QWORD *)&result.val_ = ((unsigned __int64)v2 << 32) | 0xFFFFFFF8;
      result.cat_ = &boost::asio::error::get_addrinfo_category(void)::instance;
      break;
    case -7:
      v3 = boost::asio::error::get_addrinfo_category(void)::instance.id_;
      if ( v3 == 0x8FAFD21E25C5E09BLL )
        goto LABEL_24;
      if ( v3 == 0xB2AB117A257EDF0DLL )
      {
        v4 = 1;
      }
      else if ( *(_BYTE *)(((unsigned __int64)(boost::asio::error::get_addrinfo_category(void)::instance._vptr_error_category
                                             + 6) >> 3)
                         + 0x7FFF8000) )
      {
        __asan_report_load8(boost::asio::error::get_addrinfo_category(void)::instance._vptr_error_category + 6);
LABEL_24:
        v4 = 1;
      }
      else
      {
        v4 = (*((__int64 (__fastcall **)(boost::asio::error::detail::addrinfo_category *, __int64))boost::asio::error::get_addrinfo_category(void)::instance._vptr_error_category
              + 6))(
               &boost::asio::error::get_addrinfo_category(void)::instance,
               4294967289LL);
      }
      *(_QWORD *)&result.val_ = ((unsigned __int64)v4 << 32) | 0xFFFFFFF9;
      result.cat_ = &boost::asio::error::get_addrinfo_category(void)::instance;
      break;
    case -6:
      *(_QWORD *)&result.val_ = 0x100000061LL;
      result.cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
      return result;
    case -4:
      return boost::asio::error::make_error_code(no_recovery);
    case -3:
      return boost::asio::error::make_error_code(host_not_found_try_again);
    case -1:
      *(_QWORD *)&result.val_ = 0x100000016LL;
      result.cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
      return result;
    case 0:
      *(_QWORD *)&result.val_ = 0LL;
      result.cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
      return result;
    default:
      v5 = __errno_location();
      v6 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v5 & 7) + 3) >= v6 && v6 )
      {
        v7 = (boost::beast::detail::stream_base::pending_guard *)v5;
        __asan_report_load4(v5);
        boost::beast::detail::stream_base::pending_guard::reset(v7);
      }
      else
      {
        *(_QWORD *)&result.val_ = ((unsigned __int64)(*v5 != 0) << 32) | (unsigned int)*v5;
        result.cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
      }
      return result;
  }
  return result;
};

// Line 3514: range 000000000CE028CB-000000000CE028E1
boost::asio::detail::u_long_type __cdecl boost::asio::detail::socket_ops::network_to_host_long(
        boost::asio::detail::u_long_type value)
{
  return ntohl(value);
};

// Line 3528: range 000000000CE028E2-000000000CE028F8
boost::asio::detail::u_long_type __cdecl boost::asio::detail::socket_ops::host_to_network_long(
        boost::asio::detail::u_long_type value)
{
  return htonl(value);
};

// Line 3555: range 000000000C63D396-000000000C63D3B0
boost::asio::detail::u_short_type __cdecl boost::asio::detail::socket_ops::host_to_network_short(
        boost::asio::detail::u_short_type value)
{
  return htons(value);
};
