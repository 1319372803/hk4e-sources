// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/tcp_connection.cpp

// Line 49: range 000000000CF97890-000000000CF97978
__int64 __fastcall mysqlpp::TCPConnection::connect(
        mysqlpp::TCPConnection *this,
        const char *a2,
        const char *a3,
        const char *a4,
        const char *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        void *a10)
{
  mysqlpp::TCPConnection *v12; // rbp
  std::string::pointer M_p; // rax
  size_t v15; // rax
  unsigned int v16; // r12d
  unsigned int v18; // [rsp+1Ch] [rbp-5Ch] BYREF
  char *v19[2]; // [rsp+20h] [rbp-58h] BYREF
  char v20[72]; // [rsp+30h] [rbp-48h] BYREF

  v12 = this;
  M_p = this->error_message_._M_dataplus._M_p;
  this->error_message_._M_string_length = 0LL;
  *M_p = 0;
  v18 = 0;
  v19[0] = v20;
  v19[1] = 0LL;
  v20[0] = 0;
  if ( a2 )
  {
    v15 = strlen(a2);
    std::string::_M_replace(v19, 0LL, 0LL, a2, v15);
    a2 = (const char *)&v18;
    this = (mysqlpp::TCPConnection *)v19;
    if ( !(unsigned __int8)mysqlpp::TCPConnection::parse_address(v19, &v18, &v12->error_message_) )
    {
LABEL_5:
      v16 = 0;
      goto LABEL_6;
    }
  }
  if ( v12->error_message_._M_string_length )
  {
    if ( v12->exceptions_ )
      mysqlpp::TCPConnection::connect((int)this, (int)a2, (int)a3, (int)a4, (int)a5, a6, a7, a8, a9, a10);
    goto LABEL_5;
  }
  v16 = mysqlpp::Connection::connect(v12, a3, v19[0], a4, a5, v18);
LABEL_6:
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  return v16;
};

// Line 66: range 000000000C739908-000000000C7399C1
void __fastcall __noreturn mysqlpp::TCPConnection::connect(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        void *a10)
{
  __int64 v10; // rbp
  char *exception; // rax
  __int64 v12; // rcx
  const char *v13; // rsi
  _DWORD *v14; // r12
  const char *v15; // rdi
  bool v16; // zf
  __int64 v17; // rdx

  exception = (char *)__cxa_allocate_exception(0x30uLL);
  v13 = *(const char **)(v10 + 16);
  v14 = exception;
  *(_QWORD *)exception = &`vtable for'mysqlpp::Exception + 2;
  *((_QWORD *)exception + 1) = exception + 24;
  if ( v13 )
  {
    v12 = -1LL;
    v15 = v13;
    do
    {
      if ( !v12 )
        break;
      v16 = *v15++ == 0;
      --v12;
    }
    while ( !v16 );
    v17 = (__int64)&v13[~v12 - 1];
  }
  else
  {
    v17 = -1LL;
  }
  std::string::_M_construct<char const*>(
    (std::string *const)(exception + 8),
    v13,
    (const char *)v17,
    (std::forward_iterator_tag)v12);
  v14[10] = 0;
  *(_QWORD *)v14 = &`vtable for'mysqlpp::ConnectionFailed + 2;
  _cxa_throw(
    v14,
    (struct type_info *)&`typeinfo for'mysqlpp::ConnectionFailed,
    (void (__fastcall *)(void *))mysqlpp::ConnectionFailed::~ConnectionFailed);
};

// Line 78: range 000000000CF96E90-000000000CF97887
__int64 __fastcall mysqlpp::TCPConnection::parse_address(char **a1, _DWORD *a2, __int64 a3)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v6; // rax
  const char *v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  char *v10; // rbx
  char *v11; // r12
  char v12; // bp
  unsigned int v13; // r12d
  std::forward_iterator_tag v15; // cl
  unsigned __int64 v16; // r8
  const char *v17; // rsi
  std::forward_iterator_tag v18; // cl
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  std::string::size_type M_string_length; // rdx
  std::string::size_type M_allocated_capacity; // rsi
  unsigned __int64 v22; // rdx
  const char *v23; // rsi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdi
  std::string::size_type v25; // rdx
  std::string::size_type v26; // rsi
  std::string::size_type v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rbx
  unsigned __int64 v30; // r15
  char *v31; // rcx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v32; // rdi
  std::string::size_type v33; // rdx
  std::string::size_type v34; // rsi
  char *v35; // rax
  unsigned __int64 v36; // rbx
  char *v37; // rax
  const char *v38; // rcx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v39; // rdi
  std::string::size_type v40; // rdx
  std::string::size_type v41; // rcx
  std::string::size_type v42; // rsi
  struct servent *v43; // rax
  int v44; // eax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v45; // rdi
  std::string::size_type v46; // rdx
  std::string::size_type v47; // rcx
  std::string::size_type v48; // rsi
  std::string::pointer v49; // rdi
  __int64 v50; // rbx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v51; // rax
  unsigned __int64 v52; // r12
  unsigned __int64 v53; // rdx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v54; // rax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v55; // rdi
  std::string::size_type v56; // rdx
  std::string::size_type v57; // rcx
  std::string::size_type v58; // rsi
  __int64 v59; // rax
  const char *v60; // [rsp+8h] [rbp-120h]
  std::string name; // [rsp+10h] [rbp-118h] BYREF
  std::string v62; // [rsp+30h] [rbp-F8h] BYREF
  std::string v63; // [rsp+50h] [rbp-D8h] BYREF
  std::string src; // [rsp+70h] [rbp-B8h] BYREF
  std::string v65; // [rsp+90h] [rbp-98h] BYREF
  std::string v66; // [rsp+B0h] [rbp-78h] BYREF
  std::string v67; // [rsp+D0h] [rbp-58h] BYREF

  v6 = *(std::string::$CFBEC286C7F52157F7E59FC354047095 **)a3;
  *(_QWORD *)(a3 + 8) = 0LL;
  v6->_M_local_buf[0] = 0;
  v7 = *a1;
  name._M_dataplus._M_p = name._anon_0._M_local_buf;
  name._M_string_length = 0LL;
  name._anon_0._M_local_buf[0] = 0;
  if ( *v7 != 91 )
  {
    v8 = std::string::find(a1, 58LL, 0LL);
    v9 = v8;
    if ( v8 == -1 )
      goto LABEL_3;
    v60 = (const char *)(v8 + 1);
    if ( std::string::find(a1, 58LL, v8 + 1) != -1 )
    {
      std::string::_M_replace(a3, 0LL, *(_QWORD *)(a3 + 8), "IPv4 address:service combo can have only one colon", 50LL);
      goto LABEL_54;
    }
    v16 = (unsigned __int64)a1[1];
    if ( (unsigned __int64)v60 > v16 )
      std::__throw_out_of_range_fmt(
        "%s: __pos (which is %zu) > this->size() (which is %zu)",
        "basic_string::substr",
        (size_t)v60,
        (size_t)a1[1]);
    v17 = *a1;
    src._M_dataplus._M_p = src._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&src, &v17[(_QWORD)v60], &v17[v16], v15);
    M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)name._M_dataplus._M_p;
    M_string_length = src._M_string_length;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p == &src._anon_0 )
    {
      if ( src._M_string_length )
      {
        if ( src._M_string_length == 1 )
          *name._M_dataplus._M_p = src._anon_0._M_local_buf[0];
        else
          memcpy(name._M_dataplus._M_p, &src._anon_0, src._M_string_length);
        M_string_length = src._M_string_length;
        M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)name._M_dataplus._M_p;
      }
      name._M_string_length = M_string_length;
      M_p->_M_local_buf[M_string_length] = 0;
      M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p;
    }
    else
    {
      v18.gap0[0] = src._anon_0._M_local_buf[0];
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)name._M_dataplus._M_p == &name._anon_0 )
      {
        name._M_dataplus._M_p = src._M_dataplus._M_p;
        name._M_string_length = src._M_string_length;
        name._anon_0._M_allocated_capacity = src._anon_0._M_allocated_capacity;
      }
      else
      {
        M_allocated_capacity = name._anon_0._M_allocated_capacity;
        name._M_dataplus._M_p = src._M_dataplus._M_p;
        name._M_string_length = src._M_string_length;
        name._anon_0._M_allocated_capacity = src._anon_0._M_allocated_capacity;
        if ( M_p )
        {
          src._M_dataplus._M_p = (std::string::pointer)M_p;
          src._anon_0._M_allocated_capacity = M_allocated_capacity;
          goto LABEL_19;
        }
      }
      src._M_dataplus._M_p = src._anon_0._M_local_buf;
      M_p = &src._anon_0;
    }
LABEL_19:
    src._M_string_length = 0LL;
    M_p->_M_local_buf[0] = 0;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
      operator delete(src._M_dataplus._M_p);
    v22 = (unsigned __int64)a1[1];
    v23 = *a1;
    v65._M_dataplus._M_p = v65._anon_0._M_local_buf;
    if ( v9 <= v22 )
      v22 = v9;
    std::string::_M_construct<char const*>(&v65, v23, &v23[v22], v18);
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)*a1;
    v25 = v65._M_string_length;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v65._M_dataplus._M_p == &v65._anon_0 )
    {
      if ( v65._M_string_length )
      {
        if ( v65._M_string_length == 1 )
          p_anon_0->_M_local_buf[0] = v65._anon_0._M_local_buf[0];
        else
          memcpy(p_anon_0, &v65._anon_0, v65._M_string_length);
        v25 = v65._M_string_length;
        p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)*a1;
      }
      a1[1] = (char *)v25;
      p_anon_0->_M_local_buf[v25] = 0;
      p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v65._M_dataplus._M_p;
      goto LABEL_27;
    }
    v26 = v65._anon_0._M_allocated_capacity;
    if ( p_anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)(a1 + 2) )
    {
      *a1 = v65._M_dataplus._M_p;
      a1[1] = (char *)v25;
      a1[2] = (char *)v26;
    }
    else
    {
      v27 = (std::string::size_type)a1[2];
      *a1 = v65._M_dataplus._M_p;
      a1[1] = (char *)v25;
      a1[2] = (char *)v26;
      if ( p_anon_0 )
      {
        v65._M_dataplus._M_p = (std::string::pointer)p_anon_0;
        v65._anon_0._M_allocated_capacity = v27;
        goto LABEL_27;
      }
    }
    v65._M_dataplus._M_p = v65._anon_0._M_local_buf;
    p_anon_0 = &v65._anon_0;
LABEL_27:
    v65._M_string_length = 0LL;
    p_anon_0->_M_local_buf[0] = 0;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v65._M_dataplus._M_p != &v65._anon_0 )
      operator delete(v65._M_dataplus._M_p);
    goto LABEL_3;
  }
  v28 = std::string::find(a1, 93LL, 0LL);
  v29 = v28;
  if ( v28 == -1
    || v28 + 1 != std::string::find(a1, 58LL, v28 + 1)
    || (v30 = v29 + 2, std::string::find_first_of(a1, "[]", v29 + 2, 2LL) != -1) )
  {
    std::string::_M_replace(a3, 0LL, *(_QWORD *)(a3 + 8), "Malformed IPv6 [address]:service combination", 44LL);
    goto LABEL_54;
  }
  v31 = a1[1];
  if ( v30 > (unsigned __int64)v31 )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::substr",
      v29 + 2,
      (size_t)v31);
  v62._M_dataplus._M_p = v62._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v62, &(*a1)[v30], &v31[(_QWORD)*a1], (std::forward_iterator_tag)v31);
  v32 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)name._M_dataplus._M_p;
  v33 = v62._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v62._M_dataplus._M_p == &v62._anon_0 )
  {
    if ( v62._M_string_length )
    {
      if ( v62._M_string_length == 1 )
        *name._M_dataplus._M_p = v62._anon_0._M_local_buf[0];
      else
        memcpy(name._M_dataplus._M_p, &v62._anon_0, v62._M_string_length);
      v33 = v62._M_string_length;
      v32 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)name._M_dataplus._M_p;
    }
    name._M_string_length = v33;
    v32->_M_local_buf[v33] = 0;
    v32 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v62._M_dataplus._M_p;
  }
  else
  {
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)name._M_dataplus._M_p == &name._anon_0 )
    {
      name._M_dataplus._M_p = v62._M_dataplus._M_p;
      name._M_string_length = v62._M_string_length;
      name._anon_0._M_allocated_capacity = v62._anon_0._M_allocated_capacity;
    }
    else
    {
      v34 = name._anon_0._M_allocated_capacity;
      name._M_dataplus._M_p = v62._M_dataplus._M_p;
      name._M_string_length = v62._M_string_length;
      name._anon_0._M_allocated_capacity = v62._anon_0._M_allocated_capacity;
      if ( v32 )
      {
        v62._M_dataplus._M_p = (std::string::pointer)v32;
        v62._anon_0._M_allocated_capacity = v34;
        goto LABEL_37;
      }
    }
    v62._M_dataplus._M_p = v62._anon_0._M_local_buf;
    v32 = &v62._anon_0;
  }
LABEL_37:
  v62._M_string_length = 0LL;
  v32->_M_local_buf[0] = 0;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v62._M_dataplus._M_p != &v62._anon_0 )
    operator delete(v62._M_dataplus._M_p);
  v35 = a1[1];
  v36 = v29 - 1;
  if ( !v35 )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::substr",
      1uLL,
      0LL);
  v37 = v35 - 1;
  v38 = *a1;
  v63._M_dataplus._M_p = v63._anon_0._M_local_buf;
  if ( (unsigned __int64)v37 <= v36 )
    v36 = (unsigned __int64)v37;
  std::string::_M_construct<char const*>(&v63, v38 + 1, &v38[v36 + 1], (std::forward_iterator_tag)v38);
  v39 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)*a1;
  v40 = v63._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v63._M_dataplus._M_p == &v63._anon_0 )
  {
    if ( v63._M_string_length )
    {
      if ( v63._M_string_length == 1 )
        v39->_M_local_buf[0] = v63._anon_0._M_local_buf[0];
      else
        memcpy(v39, &v63._anon_0, v63._M_string_length);
      v40 = v63._M_string_length;
      v39 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)*a1;
    }
    a1[1] = (char *)v40;
    v39->_M_local_buf[v40] = 0;
    v39 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v63._M_dataplus._M_p;
    goto LABEL_46;
  }
  v41 = v63._anon_0._M_allocated_capacity;
  if ( v39 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)(a1 + 2) )
  {
    *a1 = v63._M_dataplus._M_p;
    a1[1] = (char *)v40;
    a1[2] = (char *)v41;
    goto LABEL_111;
  }
  v42 = (std::string::size_type)a1[2];
  *a1 = v63._M_dataplus._M_p;
  a1[1] = (char *)v40;
  a1[2] = (char *)v41;
  if ( !v39 )
  {
LABEL_111:
    v63._M_dataplus._M_p = v63._anon_0._M_local_buf;
    v39 = &v63._anon_0;
    goto LABEL_46;
  }
  v63._M_dataplus._M_p = (std::string::pointer)v39;
  v63._anon_0._M_allocated_capacity = v42;
LABEL_46:
  v63._M_string_length = 0LL;
  v39->_M_local_buf[0] = 0;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v63._M_dataplus._M_p != &v63._anon_0 )
    operator delete(v63._M_dataplus._M_p);
  if ( !a1[1] )
  {
    if ( !name._M_string_length )
      goto LABEL_9;
    goto LABEL_50;
  }
  v59 = std::string::find(a1, 58LL, 0LL);
  if ( v59 == -1 || std::string::find(a1, 58LL, v59 + 1) == -1 )
  {
    std::string::_M_replace(a3, 0LL, *(_QWORD *)(a3 + 8), "IPv6 literal needs at least two colons", 38LL);
    goto LABEL_54;
  }
LABEL_3:
  if ( !name._M_string_length )
    goto LABEL_4;
LABEL_50:
  if ( (unsigned int)(*name._M_dataplus._M_p - 48) > 9 )
  {
    v43 = getservbyname(name._M_dataplus._M_p, proto);
    if ( v43 )
    {
      *a2 = (unsigned __int16)__ROR2__(v43->s_port, 8);
      goto LABEL_4;
    }
    std::operator+<char>(&v67, "Failed to look up TCP service ", &name);
    v55 = *(std::string::$CFBEC286C7F52157F7E59FC354047095 **)a3;
    v56 = v67._M_string_length;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v67._M_dataplus._M_p == &v67._anon_0 )
    {
      if ( v67._M_string_length )
      {
        if ( v67._M_string_length == 1 )
          v55->_M_local_buf[0] = v67._anon_0._M_local_buf[0];
        else
          memcpy(v55, &v67._anon_0, v67._M_string_length);
        v56 = v67._M_string_length;
        v55 = *(std::string::$CFBEC286C7F52157F7E59FC354047095 **)a3;
      }
      *(_QWORD *)(a3 + 8) = v56;
      v55->_M_local_buf[v56] = 0;
      v55 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v67._M_dataplus._M_p;
    }
    else
    {
      v57 = v67._anon_0._M_allocated_capacity;
      if ( v55 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)(a3 + 16) )
      {
        *(_QWORD *)a3 = v67._M_dataplus._M_p;
        *(_QWORD *)(a3 + 8) = v56;
        *(_QWORD *)(a3 + 16) = v57;
      }
      else
      {
        v58 = *(_QWORD *)(a3 + 16);
        *(_QWORD *)a3 = v67._M_dataplus._M_p;
        *(_QWORD *)(a3 + 8) = v56;
        *(_QWORD *)(a3 + 16) = v57;
        if ( v55 )
        {
          v67._M_dataplus._M_p = (std::string::pointer)v55;
          v67._anon_0._M_allocated_capacity = v58;
          goto LABEL_88;
        }
      }
      v67._M_dataplus._M_p = v67._anon_0._M_local_buf;
      v55 = &v67._anon_0;
    }
LABEL_88:
    v67._M_string_length = 0LL;
    v55->_M_local_buf[0] = 0;
    v49 = v67._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v67._M_dataplus._M_p == &v67._anon_0 )
      goto LABEL_54;
    goto LABEL_62;
  }
  v44 = strtol(name._M_dataplus._M_p, 0LL, 10);
  *a2 = v44;
  if ( (unsigned int)(v44 - 1) <= 0xFFFE )
  {
LABEL_4:
    v10 = *a1;
    v11 = &a1[1][(_QWORD)*a1];
    if ( *a1 != v11 )
    {
      while ( 1 )
      {
        v12 = *v10;
        if ( !isalnum(*v10) && (unsigned __int8)(v12 - 45) > 1u && v12 != 58 )
          break;
        if ( v11 == ++v10 )
          goto LABEL_9;
      }
      std::string::_M_replace(a3, 0LL, *(_QWORD *)(a3 + 8), "Bad character '", 15LL);
      v50 = *(_QWORD *)(a3 + 8);
      v51 = *(std::string::$CFBEC286C7F52157F7E59FC354047095 **)a3;
      v52 = v50 + 1;
      if ( *(_QWORD *)a3 == a3 + 16 )
        v53 = 15LL;
      else
        v53 = *(_QWORD *)(a3 + 16);
      if ( v52 > v53 )
      {
        std::string::_M_mutate(a3, *(_QWORD *)(a3 + 8), 0LL, 0LL, 1LL);
        v51 = *(std::string::$CFBEC286C7F52157F7E59FC354047095 **)a3;
      }
      v51->_M_local_buf[v50] = v12;
      v54 = *(std::string::$CFBEC286C7F52157F7E59FC354047095 **)a3;
      *(_QWORD *)(a3 + 8) = v52;
      v54->_M_local_buf[v50 + 1] = 0;
      if ( (unsigned __int64)(0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)(a3 + 8)) <= 0x12 )
        std::__throw_length_error("basic_string::append");
      std::string::_M_append(a3, "' in TCP/IP address", 19LL);
      goto LABEL_54;
    }
LABEL_9:
    v13 = 1;
    goto LABEL_10;
  }
  std::operator+<char>(&v66, "Invalid TCP port number ", &name);
  v45 = *(std::string::$CFBEC286C7F52157F7E59FC354047095 **)a3;
  v46 = v66._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v66._M_dataplus._M_p == &v66._anon_0 )
  {
    if ( v66._M_string_length )
    {
      if ( v66._M_string_length == 1 )
        v45->_M_local_buf[0] = v66._anon_0._M_local_buf[0];
      else
        memcpy(v45, &v66._anon_0, v66._M_string_length);
      v46 = v66._M_string_length;
      v45 = *(std::string::$CFBEC286C7F52157F7E59FC354047095 **)a3;
    }
    *(_QWORD *)(a3 + 8) = v46;
    v45->_M_local_buf[v46] = 0;
    v45 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v66._M_dataplus._M_p;
  }
  else
  {
    v47 = v66._anon_0._M_allocated_capacity;
    if ( v45 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)(a3 + 16) )
    {
      *(_QWORD *)a3 = v66._M_dataplus._M_p;
      *(_QWORD *)(a3 + 8) = v46;
      *(_QWORD *)(a3 + 16) = v47;
    }
    else
    {
      v48 = *(_QWORD *)(a3 + 16);
      *(_QWORD *)a3 = v66._M_dataplus._M_p;
      *(_QWORD *)(a3 + 8) = v46;
      *(_QWORD *)(a3 + 16) = v47;
      if ( v45 )
      {
        v66._M_dataplus._M_p = (std::string::pointer)v45;
        v66._anon_0._M_allocated_capacity = v48;
        goto LABEL_61;
      }
    }
    v66._M_dataplus._M_p = v66._anon_0._M_local_buf;
    v45 = &v66._anon_0;
  }
LABEL_61:
  v66._M_string_length = 0LL;
  v45->_M_local_buf[0] = 0;
  v49 = v66._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v66._M_dataplus._M_p != &v66._anon_0 )
LABEL_62:
    operator delete(v49);
LABEL_54:
  v13 = 0;
LABEL_10:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)name._M_dataplus._M_p != &name._anon_0 )
    operator delete(name._M_dataplus._M_p);
  return v13;
};
