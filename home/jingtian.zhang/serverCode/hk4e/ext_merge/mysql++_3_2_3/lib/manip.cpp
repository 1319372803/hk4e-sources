// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/manip.cpp

// Line 39: range 000000000CF9B3F0-000000000CF9B57F
std::vector<mysqlpp::SQLTypeAdapter> *__fastcall mysqlpp::operator<<(
        std::vector<mysqlpp::SQLTypeAdapter> *this,
        mysqlpp::SQLTypeAdapter *a2)
{
  const mysqlpp::SQLTypeAdapter *v3; // rcx
  mysqlpp::SQLTypeAdapter *v4; // rdi
  size_t v6; // r14
  const char *v7; // rax
  const mysqlpp::SQLTypeAdapter *v8; // rcx
  mysqlpp::SQLTypeAdapter *M_finish; // rdi
  mysqlpp::SQLTypeAdapter v10; // [rsp+0h] [rbp-98h] BYREF
  std::string v11; // [rsp+20h] [rbp-78h] BYREF
  std::string ps; // [rsp+40h] [rbp-58h] BYREF

  if ( mysqlpp::SQLTypeAdapter::quote_q(a2) )
  {
    v11._M_dataplus._M_p = v11._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v11, "'", "", (std::forward_iterator_tag)v3);
    ps._M_dataplus._M_p = ps._anon_0._M_local_buf;
    ps._M_string_length = 0LL;
    ps._anon_0._M_local_buf[0] = 0;
    v6 = mysqlpp::SQLTypeAdapter::length(a2);
    v7 = mysqlpp::SQLTypeAdapter::data(a2);
    mysqlpp::SQLQueryParms::escape_string((const mysqlpp::SQLQueryParms *const)this, &ps, v7, v6);
    std::string::_M_append(&v11, ps._M_dataplus._M_p, ps._M_string_length);
    if ( v11._M_string_length == 0x3FFFFFFFFFFFFFFFLL )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append(&v11, "'", 1LL);
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(&v10, &v11, 1LL);
    M_finish = this->_M_impl._M_finish;
    if ( M_finish == this->_M_impl._M_end_of_storage )
    {
      std::vector<mysqlpp::SQLTypeAdapter>::_M_realloc_insert<mysqlpp::SQLTypeAdapter const&>(
        this,
        (std::vector<mysqlpp::SQLTypeAdapter>::iterator)this->_M_impl._M_finish,
        &v10,
        v8);
    }
    else
    {
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(M_finish, &v10);
      ++this->_M_impl._M_finish;
    }
    mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&v10.buffer_);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)ps._M_dataplus._M_p != &ps._anon_0 )
      operator delete(ps._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11._M_dataplus._M_p != &v11._anon_0 )
      operator delete(v11._M_dataplus._M_p);
  }
  else
  {
    a2->is_processed_ = 1;
    v4 = this->_M_impl._M_finish;
    if ( v4 == this->_M_impl._M_end_of_storage )
    {
      std::vector<mysqlpp::SQLTypeAdapter>::_M_realloc_insert<mysqlpp::SQLTypeAdapter const&>(
        this,
        (std::vector<mysqlpp::SQLTypeAdapter>::iterator)this->_M_impl._M_finish,
        a2,
        v3);
    }
    else
    {
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v4, a2);
      ++this->_M_impl._M_finish;
    }
  }
  return this;
};

// Line 57: range 000000000CF9AC60-000000000CF9AE61
std::ostream *__fastcall mysqlpp::operator<<(std::ostream *this, mysqlpp::SQLTypeAdapter *a2)
{
  const mysqlpp::SQLStream *v2; // r14
  const mysqlpp::Query *v3; // r13
  size_t v4; // r14
  const char *v5; // rax
  mysqlpp::SQLTypeAdapter::size_type v7; // r13
  const char *v8; // rax
  std::forward_iterator_tag v9; // cl
  __int64 v10; // r13
  const char *v11; // rax
  size_t v12; // r13
  const char *v13; // rax
  std::string v14[2]; // [rsp+0h] [rbp-58h] BYREF

  if ( !this
    || (v2 = 0LL,
        (v3 = (const mysqlpp::Query *)__dynamic_cast(
                                        this,
                                        (const struct __class_type_info *)&`typeinfo for'std::ostream,
                                        (const struct __class_type_info *)&`typeinfo for'mysqlpp::Query,
                                        0LL)) == 0LL)
    && (v2 = (const mysqlpp::SQLStream *)__dynamic_cast(
                                           this,
                                           (const struct __class_type_info *)&`typeinfo for'std::ostream,
                                           (const struct __class_type_info *)&`typeinfo for'mysqlpp::SQLStream,
                                           0LL)) == 0LL )
  {
    v7 = mysqlpp::SQLTypeAdapter::length(a2);
    v8 = mysqlpp::SQLTypeAdapter::data(a2);
    v14[0]._M_dataplus._M_p = v14[0]._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(v14, v8, &v8[v7], v9);
    std::__ostream_insert<char,std::char_traits<char>>(this, v14[0]._M_dataplus._M_p, v14[0]._M_string_length);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v14[0]._M_dataplus._M_p != &v14[0]._anon_0 )
      operator delete(v14[0]._M_dataplus._M_p);
    return this;
  }
  if ( !mysqlpp::SQLTypeAdapter::quote_q(a2) )
  {
    if ( mysqlpp::SQLTypeAdapter::escape_q(a2) )
      goto LABEL_5;
LABEL_15:
    v10 = mysqlpp::SQLTypeAdapter::length(a2);
    v11 = mysqlpp::SQLTypeAdapter::data(a2);
    std::ostream::write(this, v11, v10);
    if ( !mysqlpp::SQLTypeAdapter::quote_q(a2) )
      return this;
    goto LABEL_14;
  }
  std::ostream::put(this, 39);
  if ( !mysqlpp::SQLTypeAdapter::escape_q(a2) )
    goto LABEL_15;
LABEL_5:
  v14[0]._anon_0._M_local_buf[0] = 0;
  v14[0]._M_dataplus._M_p = v14[0]._anon_0._M_local_buf;
  v14[0]._M_string_length = 0LL;
  if ( v3 )
  {
    v4 = mysqlpp::SQLTypeAdapter::length(a2);
    v5 = mysqlpp::SQLTypeAdapter::data(a2);
    mysqlpp::Query::escape_string(v3, v14, v5, v4);
  }
  else
  {
    v12 = mysqlpp::SQLTypeAdapter::length(a2);
    v13 = mysqlpp::SQLTypeAdapter::data(a2);
    mysqlpp::SQLStream::escape_string(v2, v14, v13, v12);
  }
  std::ostream::write(this, v14[0]._M_dataplus._M_p, v14[0]._M_string_length);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v14[0]._M_dataplus._M_p != &v14[0]._anon_0 )
    operator delete(v14[0]._M_dataplus._M_p);
  if ( mysqlpp::SQLTypeAdapter::quote_q(a2) )
LABEL_14:
    std::ostream::put(this, 39);
  return this;
};

// Line 100: range 000000000CF9AF50-000000000CF9B05D
std::ostream *__fastcall mysqlpp::operator<<(mysqlpp::quote_only_type1 o, const mysqlpp::SQLTypeAdapter *in)
{
  __int64 v2; // r13
  const char *v3; // rax
  std::ostream *v5; // rax
  __int64 v6; // rax
  char v7[25]; // [rsp+Fh] [rbp-19h] BYREF

  if ( o.ostr
    && (__dynamic_cast(
          o.ostr,
          (const struct __class_type_info *)&`typeinfo for'std::ostream,
          (const struct __class_type_info *)&`typeinfo for'mysqlpp::Query,
          0LL)
     || __dynamic_cast(
          o.ostr,
          (const struct __class_type_info *)&`typeinfo for'std::ostream,
          (const struct __class_type_info *)&`typeinfo for'mysqlpp::SQLStream,
          0LL)) )
  {
    if ( mysqlpp::SQLTypeAdapter::quote_q(in) )
      std::ostream::put(o.ostr, 39);
    v2 = mysqlpp::SQLTypeAdapter::length(in);
    v3 = mysqlpp::SQLTypeAdapter::data(in);
    std::ostream::write(o.ostr, v3, v2);
    if ( mysqlpp::SQLTypeAdapter::quote_q(in) )
      std::ostream::put(o.ostr, 39);
    return o.ostr;
  }
  else
  {
    v7[0] = 39;
    v5 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>(o.ostr, v7, 1LL);
    v6 = mysqlpp::operator<<(v5, (mysqlpp::SQLTypeAdapter *)in);
    v7[0] = 39;
    std::__ostream_insert<char,std::char_traits<char>>(v6, v7, 1LL);
    return o.ostr;
  }
};

// Line 127: range 000000000CF9AE70-000000000CF9AF4A
__int64 __fastcall mysqlpp::operator<<(std::ostream *this, mysqlpp::SQLTypeAdapter *a2)
{
  __int64 v2; // r12
  const char *v3; // rax
  __int64 result; // rax
  mysqlpp::SQLTypeAdapter::size_type v5; // r12
  const char *v6; // rax
  std::forward_iterator_tag v7; // cl
  __int64 v8; // [rsp+8h] [rbp-40h]
  std::string v9; // [rsp+10h] [rbp-38h] BYREF

  if ( __dynamic_cast(
         this,
         (const struct __class_type_info *)&`typeinfo for'std::ostream,
         (const struct __class_type_info *)&`typeinfo for'mysqlpp::Query,
         0LL)
    || __dynamic_cast(
         this,
         (const struct __class_type_info *)&`typeinfo for'std::ostream,
         (const struct __class_type_info *)&`typeinfo for'mysqlpp::SQLStream,
         0LL) )
  {
    v2 = mysqlpp::SQLTypeAdapter::length(a2);
    v3 = mysqlpp::SQLTypeAdapter::data(a2);
    return std::ostream::write(this, v3, v2);
  }
  else
  {
    v5 = mysqlpp::SQLTypeAdapter::length(a2);
    v6 = mysqlpp::SQLTypeAdapter::data(a2);
    v9._M_dataplus._M_p = v9._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v9, v6, &v6[v5], v7);
    result = std::__ostream_insert<char,std::char_traits<char>>(this, v9._M_dataplus._M_p, v9._M_string_length);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v9._M_dataplus._M_p != &v9._anon_0 )
    {
      v8 = result;
      operator delete(v9._M_dataplus._M_p);
      return v8;
    }
  }
  return result;
};

// Line 142: range 000000000CF9B590-000000000CF9B716
std::vector<mysqlpp::SQLTypeAdapter> *__fastcall mysqlpp::operator<<(
        std::vector<mysqlpp::SQLTypeAdapter> *this,
        mysqlpp::SQLTypeAdapter *a2)
{
  const mysqlpp::SQLTypeAdapter *v3; // rcx
  mysqlpp::SQLTypeAdapter::size_type v4; // r13
  const char *v5; // rsi
  const mysqlpp::SQLTypeAdapter *v6; // rcx
  mysqlpp::SQLTypeAdapter *M_finish; // rdi
  mysqlpp::SQLTypeAdapter *v9; // rdi
  mysqlpp::SQLTypeAdapter v10; // [rsp+0h] [rbp-68h] BYREF
  std::string v11; // [rsp+20h] [rbp-48h] BYREF

  if ( mysqlpp::SQLTypeAdapter::quote_q(a2) )
  {
    v11._M_dataplus._M_p = v11._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v11, "'", "", (std::forward_iterator_tag)v3);
    v4 = mysqlpp::SQLTypeAdapter::length(a2);
    v5 = mysqlpp::SQLTypeAdapter::data(a2);
    if ( v4 > 0x3FFFFFFFFFFFFFFFLL - v11._M_string_length )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append(&v11, v5, v4);
    if ( v11._M_string_length == 0x3FFFFFFFFFFFFFFFLL )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append(&v11, "'", 1LL);
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(&v10, &v11, 1LL);
    M_finish = this->_M_impl._M_finish;
    if ( M_finish == this->_M_impl._M_end_of_storage )
    {
      std::vector<mysqlpp::SQLTypeAdapter>::_M_realloc_insert<mysqlpp::SQLTypeAdapter const&>(
        this,
        (std::vector<mysqlpp::SQLTypeAdapter>::iterator)this->_M_impl._M_finish,
        &v10,
        v6);
    }
    else
    {
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(M_finish, &v10);
      ++this->_M_impl._M_finish;
    }
    mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&v10.buffer_);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11._M_dataplus._M_p != &v11._anon_0 )
      operator delete(v11._M_dataplus._M_p);
    return this;
  }
  else
  {
    a2->is_processed_ = 1;
    v9 = this->_M_impl._M_finish;
    if ( v9 == this->_M_impl._M_end_of_storage )
    {
      std::vector<mysqlpp::SQLTypeAdapter>::_M_realloc_insert<mysqlpp::SQLTypeAdapter const&>(
        this,
        (std::vector<mysqlpp::SQLTypeAdapter>::iterator)this->_M_impl._M_finish,
        a2,
        v3);
    }
    else
    {
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v9, a2);
      ++this->_M_impl._M_finish;
    }
    return this;
  }
};

// Line 158: range 000000000CF9B720-000000000CF9B8A6
std::vector<mysqlpp::SQLTypeAdapter> *__fastcall mysqlpp::operator<<(
        std::vector<mysqlpp::SQLTypeAdapter> *this,
        mysqlpp::SQLTypeAdapter *a2)
{
  const mysqlpp::SQLTypeAdapter *v3; // rcx
  mysqlpp::SQLTypeAdapter::size_type v4; // r13
  const char *v5; // rsi
  const mysqlpp::SQLTypeAdapter *v6; // rcx
  mysqlpp::SQLTypeAdapter *M_finish; // rdi
  mysqlpp::SQLTypeAdapter *v9; // rdi
  mysqlpp::SQLTypeAdapter v10; // [rsp+0h] [rbp-68h] BYREF
  std::string v11; // [rsp+20h] [rbp-48h] BYREF

  if ( mysqlpp::SQLTypeAdapter::quote_q(a2) )
  {
    v11._M_dataplus._M_p = v11._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v11, "\"", "", (std::forward_iterator_tag)v3);
    v4 = mysqlpp::SQLTypeAdapter::length(a2);
    v5 = mysqlpp::SQLTypeAdapter::data(a2);
    if ( v4 > 0x3FFFFFFFFFFFFFFFLL - v11._M_string_length )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append(&v11, v5, v4);
    if ( v11._M_string_length == 0x3FFFFFFFFFFFFFFFLL )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append(&v11, "\"", 1LL);
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(&v10, &v11, 1LL);
    M_finish = this->_M_impl._M_finish;
    if ( M_finish == this->_M_impl._M_end_of_storage )
    {
      std::vector<mysqlpp::SQLTypeAdapter>::_M_realloc_insert<mysqlpp::SQLTypeAdapter const&>(
        this,
        (std::vector<mysqlpp::SQLTypeAdapter>::iterator)this->_M_impl._M_finish,
        &v10,
        v6);
    }
    else
    {
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(M_finish, &v10);
      ++this->_M_impl._M_finish;
    }
    mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&v10.buffer_);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11._M_dataplus._M_p != &v11._anon_0 )
      operator delete(v11._M_dataplus._M_p);
    return this;
  }
  else
  {
    a2->is_processed_ = 1;
    v9 = this->_M_impl._M_finish;
    if ( v9 == this->_M_impl._M_end_of_storage )
    {
      std::vector<mysqlpp::SQLTypeAdapter>::_M_realloc_insert<mysqlpp::SQLTypeAdapter const&>(
        this,
        (std::vector<mysqlpp::SQLTypeAdapter>::iterator)this->_M_impl._M_finish,
        a2,
        v3);
    }
    else
    {
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v9, a2);
      ++this->_M_impl._M_finish;
    }
    return this;
  }
};

// Line 174: range 000000000CF9B070-000000000CF9B17D
std::ostream *__fastcall mysqlpp::operator<<(mysqlpp::quote_double_only_type1 o, const mysqlpp::SQLTypeAdapter *in)
{
  __int64 v2; // r13
  const char *v3; // rax
  std::ostream *v5; // rax
  __int64 v6; // rax
  char v7[25]; // [rsp+Fh] [rbp-19h] BYREF

  if ( o.ostr
    && (__dynamic_cast(
          o.ostr,
          (const struct __class_type_info *)&`typeinfo for'std::ostream,
          (const struct __class_type_info *)&`typeinfo for'mysqlpp::Query,
          0LL)
     || __dynamic_cast(
          o.ostr,
          (const struct __class_type_info *)&`typeinfo for'std::ostream,
          (const struct __class_type_info *)&`typeinfo for'mysqlpp::SQLStream,
          0LL)) )
  {
    if ( mysqlpp::SQLTypeAdapter::quote_q(in) )
      std::ostream::put(o.ostr, 34);
    v2 = mysqlpp::SQLTypeAdapter::length(in);
    v3 = mysqlpp::SQLTypeAdapter::data(in);
    std::ostream::write(o.ostr, v3, v2);
    if ( mysqlpp::SQLTypeAdapter::quote_q(in) )
      std::ostream::put(o.ostr, 34);
    return o.ostr;
  }
  else
  {
    v7[0] = 34;
    v5 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>(o.ostr, v7, 1LL);
    v6 = mysqlpp::operator<<(v5, (mysqlpp::SQLTypeAdapter *)in);
    v7[0] = 34;
    std::__ostream_insert<char,std::char_traits<char>>(v6, v7, 1LL);
    return o.ostr;
  }
};

// Line 201: range 000000000CF9AB30-000000000CF9AC5B
std::vector<mysqlpp::SQLTypeAdapter> *__fastcall mysqlpp::operator<<(
        std::vector<mysqlpp::SQLTypeAdapter> *this,
        mysqlpp::SQLTypeAdapter *a2)
{
  const mysqlpp::SQLTypeAdapter *v3; // rcx
  mysqlpp::SQLTypeAdapter *v4; // rdi
  size_t v6; // r13
  const char *v7; // rax
  const mysqlpp::SQLTypeAdapter *v8; // rcx
  mysqlpp::SQLTypeAdapter *M_finish; // rdi
  mysqlpp::SQLTypeAdapter v10; // [rsp+0h] [rbp-68h] BYREF
  std::string ps; // [rsp+20h] [rbp-48h] BYREF

  if ( mysqlpp::SQLTypeAdapter::escape_q(a2) )
  {
    ps._anon_0._M_local_buf[0] = 0;
    ps._M_dataplus._M_p = ps._anon_0._M_local_buf;
    ps._M_string_length = 0LL;
    v6 = mysqlpp::SQLTypeAdapter::length(a2);
    v7 = mysqlpp::SQLTypeAdapter::data(a2);
    mysqlpp::SQLQueryParms::escape_string((const mysqlpp::SQLQueryParms *const)this, &ps, v7, v6);
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(&v10, &ps, 1LL);
    M_finish = this->_M_impl._M_finish;
    if ( M_finish == this->_M_impl._M_end_of_storage )
    {
      std::vector<mysqlpp::SQLTypeAdapter>::_M_realloc_insert<mysqlpp::SQLTypeAdapter const&>(
        this,
        (std::vector<mysqlpp::SQLTypeAdapter>::iterator)this->_M_impl._M_finish,
        &v10,
        v8);
    }
    else
    {
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(M_finish, &v10);
      ++this->_M_impl._M_finish;
    }
    mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&v10.buffer_);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)ps._M_dataplus._M_p == &ps._anon_0 )
      return this;
    operator delete(ps._M_dataplus._M_p);
    return this;
  }
  else
  {
    a2->is_processed_ = 1;
    v4 = this->_M_impl._M_finish;
    if ( v4 != this->_M_impl._M_end_of_storage )
    {
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v4, a2);
      ++this->_M_impl._M_finish;
      return this;
    }
    std::vector<mysqlpp::SQLTypeAdapter>::_M_realloc_insert<mysqlpp::SQLTypeAdapter const&>(
      this,
      (std::vector<mysqlpp::SQLTypeAdapter>::iterator)this->_M_impl._M_finish,
      a2,
      v3);
    return this;
  }
};

// Line 217: range 000000000CF9B220-000000000CF9B3E3
__int64 __fastcall mysqlpp::operator<<(std::ostream *this, mysqlpp::SQLTypeAdapter *a2)
{
  const mysqlpp::Query *v2; // r13
  size_t v3; // r14
  const char *v4; // rax
  __int64 v5; // rax
  std::string::pointer M_p; // rdi
  __int64 v7; // r12
  const mysqlpp::SQLStream *v9; // r13
  mysqlpp::SQLTypeAdapter::size_type v10; // r13
  const char *v11; // rax
  std::forward_iterator_tag v12; // cl
  __int64 v13; // rax
  __int64 v14; // r13
  const char *v15; // rax
  size_t v16; // r14
  const char *v17; // rax
  std::string v18[2]; // [rsp+0h] [rbp-48h] BYREF

  if ( !this )
    goto LABEL_9;
  v2 = (const mysqlpp::Query *)__dynamic_cast(
                                 this,
                                 (const struct __class_type_info *)&`typeinfo for'std::ostream,
                                 (const struct __class_type_info *)&`typeinfo for'mysqlpp::Query,
                                 0LL);
  if ( v2 )
  {
    if ( mysqlpp::SQLTypeAdapter::escape_q(a2) )
    {
      v18[0]._anon_0._M_local_buf[0] = 0;
      v18[0]._M_dataplus._M_p = v18[0]._anon_0._M_local_buf;
      v18[0]._M_string_length = 0LL;
      v3 = mysqlpp::SQLTypeAdapter::length(a2);
      v4 = mysqlpp::SQLTypeAdapter::data(a2);
      mysqlpp::Query::escape_string(v2, v18, v4, v3);
      goto LABEL_5;
    }
    goto LABEL_11;
  }
  v9 = (const mysqlpp::SQLStream *)__dynamic_cast(
                                     this,
                                     (const struct __class_type_info *)&`typeinfo for'std::ostream,
                                     (const struct __class_type_info *)&`typeinfo for'mysqlpp::SQLStream,
                                     0LL);
  if ( !v9 )
  {
LABEL_9:
    v10 = mysqlpp::SQLTypeAdapter::length(a2);
    v11 = mysqlpp::SQLTypeAdapter::data(a2);
    v18[0]._M_dataplus._M_p = v18[0]._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(v18, v11, &v11[v10], v12);
    v13 = std::__ostream_insert<char,std::char_traits<char>>(this, v18[0]._M_dataplus._M_p, v18[0]._M_string_length);
    M_p = v18[0]._M_dataplus._M_p;
    v7 = v13;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18[0]._M_dataplus._M_p == &v18[0]._anon_0 )
      return v7;
    goto LABEL_6;
  }
  if ( mysqlpp::SQLTypeAdapter::escape_q(a2) )
  {
    v18[0]._anon_0._M_local_buf[0] = 0;
    v18[0]._M_dataplus._M_p = v18[0]._anon_0._M_local_buf;
    v18[0]._M_string_length = 0LL;
    v16 = mysqlpp::SQLTypeAdapter::length(a2);
    v17 = mysqlpp::SQLTypeAdapter::data(a2);
    mysqlpp::SQLStream::escape_string(v9, v18, v17, v16);
LABEL_5:
    v5 = std::ostream::write(this, v18[0]._M_dataplus._M_p, v18[0]._M_string_length);
    M_p = v18[0]._M_dataplus._M_p;
    v7 = v5;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18[0]._M_dataplus._M_p == &v18[0]._anon_0 )
      return v7;
LABEL_6:
    operator delete(M_p);
    return v7;
  }
LABEL_11:
  v14 = mysqlpp::SQLTypeAdapter::length(a2);
  v15 = mysqlpp::SQLTypeAdapter::data(a2);
  return std::ostream::write(this, v15, v14);
};

// Line 255: range 000000000CF9AAF0-000000000CF9AB2B
mysqlpp::SQLQueryParms *__fastcall mysqlpp::operator<<(mysqlpp::do_nothing_type2 p, mysqlpp::SQLTypeAdapter *in)
{
  const mysqlpp::SQLTypeAdapter *v2; // rcx
  mysqlpp::SQLTypeAdapter *M_finish; // rdi
  mysqlpp::SQLQueryParms *result; // rax

  M_finish = p.qparms->_M_impl._M_finish;
  in->is_processed_ = 1;
  if ( M_finish == p.qparms->_M_impl._M_end_of_storage )
  {
    std::vector<mysqlpp::SQLTypeAdapter>::_M_realloc_insert<mysqlpp::SQLTypeAdapter const&>(
      p.qparms,
      (std::vector<mysqlpp::SQLTypeAdapter>::iterator)M_finish,
      in,
      v2);
    return p.qparms;
  }
  else
  {
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(M_finish, in);
    result = p.qparms;
    ++p.qparms->_M_impl._M_finish;
  }
  return result;
};

// Line 263: range 000000000CF9B190-000000000CF9B20C
std::ostream *__fastcall mysqlpp::operator<<(mysqlpp::do_nothing_type1 o, const mysqlpp::SQLTypeAdapter *in)
{
  __int64 v2; // r13
  const char *v3; // rax

  if ( !o.ostr
    || !__dynamic_cast(
          o.ostr,
          (const struct __class_type_info *)&`typeinfo for'std::ostream,
          (const struct __class_type_info *)&`typeinfo for'mysqlpp::Query,
          0LL)
    && !__dynamic_cast(
          o.ostr,
          (const struct __class_type_info *)&`typeinfo for'std::ostream,
          (const struct __class_type_info *)&`typeinfo for'mysqlpp::SQLStream,
          0LL) )
  {
    return (std::ostream *)mysqlpp::operator<<(o.ostr, (mysqlpp::SQLTypeAdapter *)in);
  }
  v2 = mysqlpp::SQLTypeAdapter::length(in);
  v3 = mysqlpp::SQLTypeAdapter::data(in);
  return (std::ostream *)std::ostream::write(o.ostr, v3, v2);
};

// Line 279: range 000000000CF9AAB0-000000000CF9AAEB
mysqlpp::SQLQueryParms *__fastcall mysqlpp::operator<<(mysqlpp::ignore_type2 p, mysqlpp::SQLTypeAdapter *in)
{
  const mysqlpp::SQLTypeAdapter *v2; // rcx
  mysqlpp::SQLTypeAdapter *M_finish; // rdi
  mysqlpp::SQLQueryParms *result; // rax

  M_finish = p.qparms->_M_impl._M_finish;
  if ( M_finish == p.qparms->_M_impl._M_end_of_storage )
  {
    std::vector<mysqlpp::SQLTypeAdapter>::_M_realloc_insert<mysqlpp::SQLTypeAdapter const&>(
      p.qparms,
      (std::vector<mysqlpp::SQLTypeAdapter>::iterator)M_finish,
      in,
      v2);
    return p.qparms;
  }
  else
  {
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(M_finish, in);
    result = p.qparms;
    ++p.qparms->_M_impl._M_finish;
  }
  return result;
};

// Line 283: range 000000000C748290-000000000C7482B9
void __cdecl GLOBAL__sub_I_manip_cpp()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
