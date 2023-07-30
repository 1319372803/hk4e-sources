// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/stubs/strutil.h

// Line 72: range 000000000C96F7B0-000000000C96F832
const char *__fastcall google::protobuf::internal::`anonymous namespace'::ParseTimezoneOffset(
        const char *data,
        google::protobuf::int64 *offset)
{
  const char *v2; // rax
  const char *result; // rax
  _QWORD *v4; // r11
  int hour; // [rsp+0h] [rbp-8h] BYREF
  int minute; // [rsp+4h] [rbp-4h] BYREF

  if ( (unsigned __int8)(*data - 48) > 9u )
    return 0LL;
  v2 = google::protobuf::internal::`anonymous namespace'::ParseInt(data, 2, 0, 23, &hour);
  if ( !v2 || *v2 != 58 || (unsigned __int8)(v2[1] - 48) > 9u )
    return 0LL;
  result = google::protobuf::internal::`anonymous namespace'::ParseInt(v2 + 1, 2, 0, 59, &minute);
  if ( result )
    *v4 = 60 * (minute + 60 * hour);
  return result;
};

// Line 401: range 000000000C973490-000000000C973518
bool __fastcall google::protobuf::safe_strto32(google::protobuf::StringPiece str, google::protobuf::int32 *value)
{
  std::forward_iterator_tag v2; // cl
  char v4; // r12
  std::string v6; // [rsp+0h] [rbp-38h] BYREF

  if ( str.ptr_ )
  {
    v6._M_dataplus._M_p = v6._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v6, str.ptr_, &str.ptr_[str.length_], v2);
  }
  else
  {
    v6._anon_0._M_local_buf[0] = 0;
    v6._M_dataplus._M_p = v6._anon_0._M_local_buf;
    v6._M_string_length = 0LL;
  }
  v4 = google::protobuf::safe_strto32((__int64)&v6, value, (__int64)value, v2);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6._M_dataplus._M_p != &v6._anon_0 )
    operator delete(v6._M_dataplus._M_p);
  return v4;
};

// Line 407: range 000000000C973520-000000000C9735A8
bool __fastcall google::protobuf::safe_strtou32(google::protobuf::StringPiece str, google::protobuf::uint32 *value)
{
  std::forward_iterator_tag v2; // cl
  char v4; // r12
  std::string v6; // [rsp+0h] [rbp-38h] BYREF

  if ( str.ptr_ )
  {
    v6._M_dataplus._M_p = v6._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v6, str.ptr_, &str.ptr_[str.length_], v2);
  }
  else
  {
    v6._anon_0._M_local_buf[0] = 0;
    v6._M_dataplus._M_p = v6._anon_0._M_local_buf;
    v6._M_string_length = 0LL;
  }
  v4 = google::protobuf::safe_strtou32((__int64)&v6, value, (__int64)value, v2);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6._M_dataplus._M_p != &v6._anon_0 )
    operator delete(v6._M_dataplus._M_p);
  return v4;
};

// Line 416: range 000000000C9735B0-000000000C973638
bool __fastcall google::protobuf::safe_strto64(google::protobuf::StringPiece str, google::protobuf::int64 *value)
{
  std::forward_iterator_tag v2; // cl
  char v4; // r12
  std::string v6; // [rsp+0h] [rbp-38h] BYREF

  if ( str.ptr_ )
  {
    v6._M_dataplus._M_p = v6._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v6, str.ptr_, &str.ptr_[str.length_], v2);
  }
  else
  {
    v6._anon_0._M_local_buf[0] = 0;
    v6._M_dataplus._M_p = v6._anon_0._M_local_buf;
    v6._M_string_length = 0LL;
  }
  v4 = google::protobuf::safe_strto64((__int64)&v6, value, (__int64)value, v2);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6._M_dataplus._M_p != &v6._anon_0 )
    operator delete(v6._M_dataplus._M_p);
  return v4;
};

// Line 422: range 000000000C973640-000000000C9736C8
bool __fastcall google::protobuf::safe_strtou64(google::protobuf::StringPiece str, google::protobuf::uint64 *value)
{
  std::forward_iterator_tag v2; // cl
  char v4; // r12
  std::string v6; // [rsp+0h] [rbp-38h] BYREF

  if ( str.ptr_ )
  {
    v6._M_dataplus._M_p = v6._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v6, str.ptr_, &str.ptr_[str.length_], v2);
  }
  else
  {
    v6._anon_0._M_local_buf[0] = 0;
    v6._M_dataplus._M_p = v6._anon_0._M_local_buf;
    v6._M_string_length = 0LL;
  }
  v4 = google::protobuf::safe_strtou64((__int64)&v6, value, (__int64)value, v2);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6._M_dataplus._M_p != &v6._anon_0 )
    operator delete(v6._M_dataplus._M_p);
  return v4;
};

// Line 437: range 000000000C9736D0-000000000C973747
bool __fastcall google::protobuf::safe_strtod(google::protobuf::StringPiece str, double *value)
{
  std::forward_iterator_tag v2; // cl
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  bool v5; // r12
  std::string stra; // [rsp+0h] [rbp-38h] BYREF

  stra._M_dataplus._M_p = stra._anon_0._M_local_buf;
  if ( str.ptr_ )
  {
    std::string::_M_construct<char const*>(&stra, str.ptr_, &str.ptr_[str.length_], v2);
    M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)stra._M_dataplus._M_p;
  }
  else
  {
    stra._M_string_length = 0LL;
    M_p = &stra._anon_0;
    stra._anon_0._M_local_buf[0] = 0;
  }
  v5 = google::protobuf::safe_strtod(M_p->_M_local_buf, value);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)stra._M_dataplus._M_p != &stra._anon_0 )
    operator delete(stra._M_dataplus._M_p);
  return v5;
};
