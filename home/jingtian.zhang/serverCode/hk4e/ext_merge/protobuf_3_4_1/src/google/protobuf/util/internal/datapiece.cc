// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/util/internal/datapiece.cc

// Line 62: range 000000000C971170-000000000C9712EC
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<unsigned int,double>(
        google::protobuf::util::Status *this,
        __int64 a2,
        __int64 a3,
        std::forward_iterator_tag a4,
        double a5)
{
  double v5; // xmm2_8
  google::protobuf::StringPiece v7; // rdx
  google::protobuf::StringPiece v8; // rdx
  std::string v9; // [rsp+0h] [rbp-98h] BYREF
  google::protobuf::util::Status other; // [rsp+20h] [rbp-78h] BYREF
  google::protobuf::util::Status v11; // [rsp+50h] [rbp-48h] BYREF

  if ( (double)(int)a2 != a5 )
    goto LABEL_7;
  LOBYTE(a3) = 0;
  if ( a5 == 0.0 )
  {
    v5 = a5;
  }
  else
  {
    v5 = 1.0;
    if ( a5 <= 0.0 )
      v5 = -1.0;
  }
  if ( (double)((_DWORD)a2 != 0) == v5 )
  {
    google::protobuf::util::Status::Status(this);
    google::protobuf::util::Status::operator=(this, &google::protobuf::util::Status::OK);
    this[1].error_code_ = a2;
    return this;
  }
  else
  {
LABEL_7:
    google::protobuf::util::converter::DoubleAsString[abi:cxx11](&v9, a5, a2, a3, a4);
    v7.ptr_ = v9._M_dataplus._M_p;
    v7.length_ = v9._M_string_length;
    google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v7);
    google::protobuf::util::Status::Status(this);
    if ( other.error_code_ )
    {
      google::protobuf::util::Status::operator=(this, &other);
    }
    else
    {
      v8.ptr_ = "Status::OK is not a valid argument.";
      v8.length_ = 35LL;
      google::protobuf::util::Status::Status(&v11, INTERNAL, v8);
      google::protobuf::util::Status::operator=(this, &v11);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11.error_message_._M_dataplus._M_p != &v11.error_message_._anon_0 )
        operator delete(v11.error_message_._M_dataplus._M_p);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v9._M_dataplus._M_p != &v9._anon_0 )
      operator delete(v9._M_dataplus._M_p);
    return this;
  }
};

// Line 62: range 000000000C970FF0-000000000C97116B
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<unsigned int,float>(
        google::protobuf::util::Status *this,
        google::protobuf::util::error::Code a2,
        float a3)
{
  float v3; // xmm2_4
  google::protobuf::StringPiece v5; // rdx
  google::protobuf::StringPiece v6; // rdx
  std::string v7; // [rsp+0h] [rbp-98h] BYREF
  google::protobuf::util::Status other; // [rsp+20h] [rbp-78h] BYREF
  google::protobuf::util::Status v9; // [rsp+50h] [rbp-48h] BYREF

  if ( (float)a2 != a3 )
    goto LABEL_7;
  if ( a3 == 0.0 )
  {
    v3 = a3;
  }
  else
  {
    v3 = 1.0;
    if ( a3 <= 0.0 )
      v3 = -1.0;
  }
  if ( (float)(a2 != OK) == v3 )
  {
    google::protobuf::util::Status::Status(this);
    google::protobuf::util::Status::operator=(this, &google::protobuf::util::Status::OK);
    this[1].error_code_ = a2;
    return this;
  }
  else
  {
LABEL_7:
    google::protobuf::util::converter::FloatAsString[abi:cxx11](&v7);
    v5.ptr_ = v7._M_dataplus._M_p;
    v5.length_ = v7._M_string_length;
    google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v5);
    google::protobuf::util::Status::Status(this);
    if ( other.error_code_ )
    {
      google::protobuf::util::Status::operator=(this, &other);
    }
    else
    {
      v6.ptr_ = "Status::OK is not a valid argument.";
      v6.length_ = 35LL;
      google::protobuf::util::Status::Status(&v9, INTERNAL, v6);
      google::protobuf::util::Status::operator=(this, &v9);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v9.error_message_._M_dataplus._M_p != &v9.error_message_._anon_0 )
        operator delete(v9.error_message_._M_dataplus._M_p);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v7._M_dataplus._M_p != &v7._anon_0 )
      operator delete(v7._M_dataplus._M_p);
    return this;
  }
};

// Line 62: range 000000000C9714B0-000000000C971654
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<unsigned long,double>(
        google::protobuf::util::Status *this,
        __int64 a2,
        __int64 a3,
        std::forward_iterator_tag a4,
        double a5)
{
  double v5; // xmm1_8
  double v6; // xmm2_8
  google::protobuf::StringPiece v8; // rdx
  google::protobuf::StringPiece v9; // rdx
  std::string v10; // [rsp+0h] [rbp-98h] BYREF
  google::protobuf::util::Status other; // [rsp+20h] [rbp-78h] BYREF
  google::protobuf::util::Status v12; // [rsp+50h] [rbp-48h] BYREF

  if ( a2 < 0 )
  {
    a3 = a2 & 1;
    v5 = (double)(int)(a3 | ((unsigned __int64)a2 >> 1)) + (double)(int)(a3 | ((unsigned __int64)a2 >> 1));
  }
  else
  {
    v5 = (double)(int)a2;
  }
  if ( v5 != a5 )
    goto LABEL_9;
  LOBYTE(a3) = 0;
  if ( a5 == 0.0 )
  {
    v6 = a5;
  }
  else
  {
    v6 = 1.0;
    if ( a5 <= 0.0 )
      v6 = -1.0;
  }
  if ( (double)(a2 != 0) == v6 )
  {
    google::protobuf::util::Status::Status(this);
    google::protobuf::util::Status::operator=(this, &google::protobuf::util::Status::OK);
    *(_QWORD *)&this[1].error_code_ = a2;
    return this;
  }
  else
  {
LABEL_9:
    google::protobuf::util::converter::DoubleAsString[abi:cxx11](&v10, a5, a2, a3, a4);
    v8.ptr_ = v10._M_dataplus._M_p;
    v8.length_ = v10._M_string_length;
    google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v8);
    google::protobuf::util::Status::Status(this);
    if ( other.error_code_ )
    {
      google::protobuf::util::Status::operator=(this, &other);
    }
    else
    {
      v9.ptr_ = "Status::OK is not a valid argument.";
      v9.length_ = 35LL;
      google::protobuf::util::Status::Status(&v12, INTERNAL, v9);
      google::protobuf::util::Status::operator=(this, &v12);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v12.error_message_._M_dataplus._M_p != &v12.error_message_._anon_0 )
        operator delete(v12.error_message_._M_dataplus._M_p);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v10._M_dataplus._M_p != &v10._anon_0 )
      operator delete(v10._M_dataplus._M_p);
    return this;
  }
};

// Line 62: range 000000000C971300-000000000C9714A4
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<unsigned long,float>(
        google::protobuf::util::Status *this,
        __int64 a2,
        float a3)
{
  float v3; // xmm1_4
  float v4; // xmm2_4
  google::protobuf::StringPiece v6; // rdx
  google::protobuf::StringPiece v7; // rdx
  std::string v8; // [rsp+0h] [rbp-98h] BYREF
  google::protobuf::util::Status other; // [rsp+20h] [rbp-78h] BYREF
  google::protobuf::util::Status v10; // [rsp+50h] [rbp-48h] BYREF

  if ( a2 < 0 )
    v3 = (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1))
       + (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1));
  else
    v3 = (float)(int)a2;
  if ( v3 != a3 )
    goto LABEL_9;
  if ( a3 == 0.0 )
  {
    v4 = a3;
  }
  else
  {
    v4 = 1.0;
    if ( a3 <= 0.0 )
      v4 = -1.0;
  }
  if ( (float)(a2 != 0) == v4 )
  {
    google::protobuf::util::Status::Status(this);
    google::protobuf::util::Status::operator=(this, &google::protobuf::util::Status::OK);
    *(_QWORD *)&this[1].error_code_ = a2;
    return this;
  }
  else
  {
LABEL_9:
    google::protobuf::util::converter::FloatAsString[abi:cxx11](&v8);
    v6.ptr_ = v8._M_dataplus._M_p;
    v6.length_ = v8._M_string_length;
    google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v6);
    google::protobuf::util::Status::Status(this);
    if ( other.error_code_ )
    {
      google::protobuf::util::Status::operator=(this, &other);
    }
    else
    {
      v7.ptr_ = "Status::OK is not a valid argument.";
      v7.length_ = 35LL;
      google::protobuf::util::Status::Status(&v10, INTERNAL, v7);
      google::protobuf::util::Status::operator=(this, &v10);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v10.error_message_._M_dataplus._M_p != &v10.error_message_._anon_0 )
        operator delete(v10.error_message_._M_dataplus._M_p);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v8._M_dataplus._M_p != &v8._anon_0 )
      operator delete(v8._M_dataplus._M_p);
    return this;
  }
};

// Line 63: range 000000000C9719A0-000000000C971B38
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<int,double>(
        google::protobuf::util::Status *this,
        __int64 a2,
        __int64 a3,
        std::forward_iterator_tag a4,
        double a5)
{
  double v5; // xmm2_8
  double v6; // xmm1_8
  google::protobuf::StringPiece v8; // rdx
  google::protobuf::StringPiece v9; // rdx
  std::string v10; // [rsp+0h] [rbp-98h] BYREF
  google::protobuf::util::Status other; // [rsp+20h] [rbp-78h] BYREF
  google::protobuf::util::Status v12; // [rsp+50h] [rbp-48h] BYREF

  if ( (double)(int)a2 != a5 )
    goto LABEL_10;
  LOBYTE(a3) = 0;
  if ( a5 == 0.0 )
  {
    v5 = a5;
    v6 = 0.0;
    if ( !(_DWORD)a2 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1.0;
    if ( a5 <= 0.0 )
      v5 = -1.0;
    if ( !(_DWORD)a2 )
      goto LABEL_10;
  }
  v6 = 1.0;
  if ( (int)a2 <= 0 )
    v6 = -1.0;
LABEL_8:
  if ( v5 == v6 )
  {
    google::protobuf::util::Status::Status(this);
    google::protobuf::util::Status::operator=(this, &google::protobuf::util::Status::OK);
    this[1].error_code_ = a2;
    return this;
  }
LABEL_10:
  google::protobuf::util::converter::DoubleAsString[abi:cxx11](&v10, a5, a2, a3, a4);
  v8.ptr_ = v10._M_dataplus._M_p;
  v8.length_ = v10._M_string_length;
  google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v8);
  google::protobuf::util::Status::Status(this);
  if ( other.error_code_ )
  {
    google::protobuf::util::Status::operator=(this, &other);
  }
  else
  {
    v9.ptr_ = "Status::OK is not a valid argument.";
    v9.length_ = 35LL;
    google::protobuf::util::Status::Status(&v12, INTERNAL, v9);
    google::protobuf::util::Status::operator=(this, &v12);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v12.error_message_._M_dataplus._M_p != &v12.error_message_._anon_0 )
      operator delete(v12.error_message_._M_dataplus._M_p);
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
    operator delete(other.error_message_._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v10._M_dataplus._M_p != &v10._anon_0 )
    operator delete(v10._M_dataplus._M_p);
  return this;
};

// Line 63: range 000000000C971B40-000000000C971CC7
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<int,float>(
        google::protobuf::util::Status *this,
        google::protobuf::util::error::Code a2,
        float a3)
{
  float v3; // xmm2_4
  float v4; // xmm1_4
  google::protobuf::StringPiece v6; // rdx
  google::protobuf::StringPiece v7; // rdx
  std::string v8; // [rsp+0h] [rbp-98h] BYREF
  google::protobuf::util::Status other; // [rsp+20h] [rbp-78h] BYREF
  google::protobuf::util::Status v10; // [rsp+50h] [rbp-48h] BYREF

  if ( (float)a2 != a3 )
    goto LABEL_10;
  if ( a3 == 0.0 )
  {
    v3 = a3;
    v4 = 0.0;
    if ( a2 == OK )
      goto LABEL_8;
  }
  else
  {
    v3 = 1.0;
    if ( a3 <= 0.0 )
      v3 = -1.0;
    if ( a2 == OK )
      goto LABEL_10;
  }
  v4 = 1.0;
  if ( a2 <= OK )
    v4 = -1.0;
LABEL_8:
  if ( v3 == v4 )
  {
    google::protobuf::util::Status::Status(this);
    google::protobuf::util::Status::operator=(this, &google::protobuf::util::Status::OK);
    this[1].error_code_ = a2;
    return this;
  }
LABEL_10:
  google::protobuf::util::converter::FloatAsString[abi:cxx11](&v8);
  v6.ptr_ = v8._M_dataplus._M_p;
  v6.length_ = v8._M_string_length;
  google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v6);
  google::protobuf::util::Status::Status(this);
  if ( other.error_code_ )
  {
    google::protobuf::util::Status::operator=(this, &other);
  }
  else
  {
    v7.ptr_ = "Status::OK is not a valid argument.";
    v7.length_ = 35LL;
    google::protobuf::util::Status::Status(&v10, INTERNAL, v7);
    google::protobuf::util::Status::operator=(this, &v10);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v10.error_message_._M_dataplus._M_p != &v10.error_message_._anon_0 )
      operator delete(v10.error_message_._M_dataplus._M_p);
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
    operator delete(other.error_message_._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v8._M_dataplus._M_p != &v8._anon_0 )
    operator delete(v8._M_dataplus._M_p);
  return this;
};

// Line 63: range 000000000C971660-000000000C9717F9
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<long,double>(
        google::protobuf::util::Status *this,
        __int64 a2,
        __int64 a3,
        std::forward_iterator_tag a4,
        double a5)
{
  double v5; // xmm2_8
  double v6; // xmm1_8
  google::protobuf::StringPiece v8; // rdx
  google::protobuf::StringPiece v9; // rdx
  std::string v10; // [rsp+0h] [rbp-98h] BYREF
  google::protobuf::util::Status other; // [rsp+20h] [rbp-78h] BYREF
  google::protobuf::util::Status v12; // [rsp+50h] [rbp-48h] BYREF

  if ( (double)(int)a2 != a5 )
    goto LABEL_10;
  LOBYTE(a3) = 0;
  if ( a5 == 0.0 )
  {
    v5 = a5;
    v6 = 0.0;
    if ( !a2 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1.0;
    if ( a5 <= 0.0 )
      v5 = -1.0;
    if ( !a2 )
      goto LABEL_10;
  }
  v6 = 1.0;
  if ( a2 <= 0 )
    v6 = -1.0;
LABEL_8:
  if ( v5 == v6 )
  {
    google::protobuf::util::Status::Status(this);
    google::protobuf::util::Status::operator=(this, &google::protobuf::util::Status::OK);
    *(_QWORD *)&this[1].error_code_ = a2;
    return this;
  }
LABEL_10:
  google::protobuf::util::converter::DoubleAsString[abi:cxx11](&v10, a5, a2, a3, a4);
  v8.ptr_ = v10._M_dataplus._M_p;
  v8.length_ = v10._M_string_length;
  google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v8);
  google::protobuf::util::Status::Status(this);
  if ( other.error_code_ )
  {
    google::protobuf::util::Status::operator=(this, &other);
  }
  else
  {
    v9.ptr_ = "Status::OK is not a valid argument.";
    v9.length_ = 35LL;
    google::protobuf::util::Status::Status(&v12, INTERNAL, v9);
    google::protobuf::util::Status::operator=(this, &v12);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v12.error_message_._M_dataplus._M_p != &v12.error_message_._anon_0 )
      operator delete(v12.error_message_._M_dataplus._M_p);
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
    operator delete(other.error_message_._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v10._M_dataplus._M_p != &v10._anon_0 )
    operator delete(v10._M_dataplus._M_p);
  return this;
};

// Line 63: range 000000000C971800-000000000C971998
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<long,float>(
        google::protobuf::util::Status *this,
        __int64 a2,
        float a3)
{
  float v3; // xmm2_4
  float v4; // xmm1_4
  google::protobuf::StringPiece v6; // rdx
  google::protobuf::StringPiece v7; // rdx
  std::string v8; // [rsp+0h] [rbp-98h] BYREF
  google::protobuf::util::Status other; // [rsp+20h] [rbp-78h] BYREF
  google::protobuf::util::Status v10; // [rsp+50h] [rbp-48h] BYREF

  if ( (float)(int)a2 != a3 )
    goto LABEL_10;
  if ( a3 == 0.0 )
  {
    v3 = a3;
    v4 = 0.0;
    if ( !a2 )
      goto LABEL_8;
  }
  else
  {
    v3 = 1.0;
    if ( a3 <= 0.0 )
      v3 = -1.0;
    if ( !a2 )
      goto LABEL_10;
  }
  v4 = 1.0;
  if ( a2 <= 0 )
    v4 = -1.0;
LABEL_8:
  if ( v3 == v4 )
  {
    google::protobuf::util::Status::Status(this);
    google::protobuf::util::Status::operator=(this, &google::protobuf::util::Status::OK);
    *(_QWORD *)&this[1].error_code_ = a2;
    return this;
  }
LABEL_10:
  google::protobuf::util::converter::FloatAsString[abi:cxx11](&v8);
  v6.ptr_ = v8._M_dataplus._M_p;
  v6.length_ = v8._M_string_length;
  google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v6);
  google::protobuf::util::Status::Status(this);
  if ( other.error_code_ )
  {
    google::protobuf::util::Status::operator=(this, &other);
  }
  else
  {
    v7.ptr_ = "Status::OK is not a valid argument.";
    v7.length_ = 35LL;
    google::protobuf::util::Status::Status(&v10, INTERNAL, v7);
    google::protobuf::util::Status::operator=(this, &v10);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v10.error_message_._M_dataplus._M_p != &v10.error_message_._anon_0 )
      operator delete(v10.error_message_._M_dataplus._M_p);
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
    operator delete(other.error_message_._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v8._M_dataplus._M_p != &v8._anon_0 )
    operator delete(v8._M_dataplus._M_p);
  return this;
};

// Line 120: range 000000000C972130-000000000C972193
google::protobuf::util::StatusOr<int> *__fastcall google::protobuf::util::converter::DataPiece::ToInt32(
        google::protobuf::util::StatusOr<int> *retstr,
        const google::protobuf::util::converter::DataPiece *const this)
{
  __int64 v2; // rdx
  std::forward_iterator_tag v3; // cl
  google::protobuf::util::converter::DataPiece::Type type; // eax

  type = this->type_;
  if ( type == TYPE_STRING_2 )
  {
    google::protobuf::util::converter::DataPiece::StringToNumber<int>(retstr, this, google::protobuf::safe_strto32);
    return retstr;
  }
  else if ( type == TYPE_DOUBLE_1 )
  {
    google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<int,double>(
      &retstr->status_,
      (unsigned int)(int)this->_anon_0.double_,
      v2,
      v3,
      this->_anon_0.double_);
    return retstr;
  }
  else
  {
    if ( type == TYPE_FLOAT_2 )
      google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<int,float>(
        &retstr->status_,
        (google::protobuf::util::error::Code)this->_anon_0.float_,
        this->_anon_0.float_);
    else
      google::protobuf::util::converter::DataPiece::GenericConvert<int>(retstr, this);
    return retstr;
  }
};

// Line 132: range 000000000C9721A0-000000000C972204
google::protobuf::util::StatusOr<unsigned int> *__fastcall google::protobuf::util::converter::DataPiece::ToUint32(
        google::protobuf::util::StatusOr<unsigned int> *retstr,
        const google::protobuf::util::converter::DataPiece *const this)
{
  __int64 v2; // rdx
  std::forward_iterator_tag v3; // cl
  google::protobuf::util::converter::DataPiece::Type type; // eax

  type = this->type_;
  if ( type == TYPE_STRING_2 )
  {
    google::protobuf::util::converter::DataPiece::StringToNumber<unsigned int>(
      retstr,
      this,
      google::protobuf::safe_strtou32);
    return retstr;
  }
  else if ( type == TYPE_DOUBLE_1 )
  {
    google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<unsigned int,double>(
      &retstr->status_,
      (unsigned int)(int)this->_anon_0.double_,
      v2,
      v3,
      this->_anon_0.double_);
    return retstr;
  }
  else
  {
    if ( type == TYPE_FLOAT_2 )
      google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<unsigned int,float>(
        &retstr->status_,
        (google::protobuf::util::error::Code)this->_anon_0.float_,
        this->_anon_0.float_);
    else
      google::protobuf::util::converter::DataPiece::GenericConvert<unsigned int>(retstr, this);
    return retstr;
  }
};

// Line 144: range 000000000C972210-000000000C972274
google::protobuf::util::StatusOr<long int> *__fastcall google::protobuf::util::converter::DataPiece::ToInt64(
        google::protobuf::util::StatusOr<long int> *retstr,
        const google::protobuf::util::converter::DataPiece *const this)
{
  __int64 v2; // rdx
  std::forward_iterator_tag v3; // cl
  google::protobuf::util::converter::DataPiece::Type type; // eax

  type = this->type_;
  if ( type == TYPE_STRING_2 )
  {
    google::protobuf::util::converter::DataPiece::StringToNumber<long>(retstr, this, google::protobuf::safe_strto64);
    return retstr;
  }
  else if ( type == TYPE_DOUBLE_1 )
  {
    google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<long,double>(
      &retstr->status_,
      (unsigned int)(int)this->_anon_0.double_,
      v2,
      v3,
      this->_anon_0.double_);
    return retstr;
  }
  else
  {
    if ( type == TYPE_FLOAT_2 )
      google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<long,float>(
        &retstr->status_,
        (unsigned int)(int)this->_anon_0.float_,
        this->_anon_0.float_);
    else
      google::protobuf::util::converter::DataPiece::GenericConvert<long>(retstr, this);
    return retstr;
  }
};

// Line 156: range 000000000C972280-000000000C972342
google::protobuf::util::StatusOr<long unsigned int> *__fastcall google::protobuf::util::converter::DataPiece::ToUint64(
        google::protobuf::util::StatusOr<long unsigned int> *retstr,
        const google::protobuf::util::converter::DataPiece *const this)
{
  __int64 v2; // rdx
  std::forward_iterator_tag v3; // cl
  google::protobuf::util::converter::DataPiece::Type type; // eax
  float v6; // xmm1_4
  __int64 v7; // rsi
  double v8; // xmm0_8
  __int64 v9; // rsi

  type = this->type_;
  switch ( type )
  {
    case TYPE_STRING_2:
      google::protobuf::util::converter::DataPiece::StringToNumber<unsigned long>(
        retstr,
        this,
        google::protobuf::safe_strtou64);
      return retstr;
    case TYPE_DOUBLE_1:
      v8 = this->_anon_0.double_;
      if ( v8 >= 9.223372036854776e18 )
        v9 = (unsigned int)(int)(v8 - 9.223372036854776e18) ^ 0x8000000000000000LL;
      else
        v9 = (unsigned int)(int)v8;
      google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<unsigned long,double>(
        &retstr->status_,
        v9,
        v2,
        v3,
        v8);
      return retstr;
    case TYPE_FLOAT_2:
      v6 = this->_anon_0.float_;
      if ( v6 >= 9.223372e18 )
        v7 = (unsigned int)(int)(float)(v6 - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v7 = (unsigned int)(int)v6;
      google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<unsigned long,float>(
        &retstr->status_,
        v7,
        v6);
      return retstr;
    default:
      google::protobuf::util::converter::DataPiece::GenericConvert<unsigned long>(retstr, this);
      return retstr;
  }
};

// Line 168: range 000000000C972350-000000000C9726E0
google::protobuf::util::converter::DataPiece *__fastcall google::protobuf::util::converter::DataPiece::ToDouble(
        google::protobuf::util::converter::DataPiece *this,
        __int64 a2)
{
  int v2; // eax
  google::protobuf::util::converter::DataPiece *result; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  const char *v6; // rdx
  size_t v7; // rax
  google::protobuf::StringPiece v8; // rdx
  double v9; // [rsp+8h] [rbp-160h]
  google::protobuf::StringPiece v10; // [rsp+10h] [rbp-158h] BYREF
  char v11; // [rsp+20h] [rbp-148h] BYREF
  google::protobuf::util::Status v12; // [rsp+30h] [rbp-138h] BYREF
  google::protobuf::util::Status other; // [rsp+60h] [rbp-108h] BYREF
  google::protobuf::util::StatusOr<double> v14; // [rsp+90h] [rbp-D8h] BYREF
  google::protobuf::strings::AlphaNum v15; // [rsp+C0h] [rbp-A8h] BYREF
  google::protobuf::strings::AlphaNum v16; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v17[9]; // [rsp+120h] [rbp-48h] BYREF

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 == 6 )
  {
    v9 = *(float *)(a2 + 16);
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
    google::protobuf::util::Status::operator=(
      (google::protobuf::util::Status *const)this,
      &google::protobuf::util::Status::OK);
    result = this;
    *(double *)&this[1]._vptr_DataPiece = v9;
  }
  else
  {
    if ( v2 != 9 )
    {
      google::protobuf::util::converter::DataPiece::GenericConvert<double>(
        (google::protobuf::util::StatusOr<double> *)this,
        (const google::protobuf::util::converter::DataPiece *const)a2);
      return this;
    }
    v4 = *(_QWORD *)(a2 + 24);
    v5 = *(_QWORD *)(a2 + 16);
    if ( v4 != 8 )
    {
      if ( v4 == 9 )
      {
        if ( (const char *)v5 == "-Infinity" || *(_QWORD *)v5 == 0x74696E69666E492DLL && *(_BYTE *)(v5 + 8) == 121 )
        {
          google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
          google::protobuf::util::Status::operator=(
            (google::protobuf::util::Status *const)this,
            &google::protobuf::util::Status::OK);
          this[1]._vptr_DataPiece = (int (**)(...))0xFFF0000000000000LL;
          return this;
        }
      }
      else if ( v4 == 3 && ((const char *)v5 == "NaN" || *(_WORD *)v5 == 24910 && *(_BYTE *)(v5 + 2) == 78) )
      {
        google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
        google::protobuf::util::Status::operator=(
          (google::protobuf::util::Status *const)this,
          &google::protobuf::util::Status::OK);
        this[1]._vptr_DataPiece = (int (**)(...))0x7FF8000000000000LL;
        return this;
      }
LABEL_9:
      google::protobuf::util::converter::DataPiece::StringToNumber<double>(
        &v14,
        (const google::protobuf::util::converter::DataPiece *const)a2,
        google::protobuf::safe_strtod);
      if ( v14.status_.error_code_ || fabs(v14.value_) <= 1.797693134862316e308 )
      {
        google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this, &v14.status_);
        this[1]._vptr_DataPiece = *(int (***)(...))&v14.value_;
      }
      else
      {
        v6 = *(const char **)(a2 + 16);
        v7 = *(_QWORD *)(a2 + 24);
        v17[0] = 437730954LL;
        v16.piece_data_ = v6;
        v17[1] = 1LL;
        v16.piece_size_ = v7;
        v15.piece_data_ = "\". Value: \"" + 10;
        v15.piece_size_ = 1LL;
        google::protobuf::StrCat[abi:cxx11]((__int64)&v10, &v15, &v16, (__int64)v17);
        google::protobuf::util::Status::Status(&v12, INVALID_ARGUMENT, v10);
        google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
        if ( v12.error_code_ )
        {
          google::protobuf::util::Status::operator=((google::protobuf::util::Status *const)this, &v12);
        }
        else
        {
          v8.ptr_ = "Status::OK is not a valid argument.";
          v8.length_ = 35LL;
          google::protobuf::util::Status::Status(&other, INTERNAL, v8);
          google::protobuf::util::Status::operator=((google::protobuf::util::Status *const)this, &other);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
            operator delete(other.error_message_._M_dataplus._M_p);
        }
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v12.error_message_._M_dataplus._M_p != &v12.error_message_._anon_0 )
          operator delete(v12.error_message_._M_dataplus._M_p);
        if ( v10.ptr_ != &v11 )
          operator delete((void *)v10.ptr_);
      }
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v14.status_.error_message_._M_dataplus._M_p != &v14.status_.error_message_._anon_0 )
        operator delete(v14.status_.error_message_._M_dataplus._M_p);
      return this;
    }
    if ( (const char *)v5 != "Infinity" && *(_QWORD *)v5 != 0x7974696E69666E49LL )
      goto LABEL_9;
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
    google::protobuf::util::Status::operator=(
      (google::protobuf::util::Status *const)this,
      &google::protobuf::util::Status::OK);
    this[1]._vptr_DataPiece = (int (**)(...))0x7FF0000000000000LL;
    return this;
  }
  return result;
};

// Line 188: range 000000000C9726F0-000000000C972A22
google::protobuf::util::converter::DataPiece *__fastcall google::protobuf::util::converter::DataPiece::ToFloat(
        google::protobuf::util::converter::DataPiece *this,
        __int64 a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  int v4; // eax
  __int64 v6; // rax
  __int64 v7; // rdx
  double v8; // xmm0_8
  float v9; // xmm2_4
  google::protobuf::StringPiece v10; // rdx
  float v11; // xmm3_4
  google::protobuf::StringPiece v12[2]; // [rsp+10h] [rbp-98h] BYREF
  google::protobuf::util::Status other; // [rsp+30h] [rbp-78h] BYREF
  google::protobuf::util::Status v14; // [rsp+60h] [rbp-48h] BYREF

  v4 = *(_DWORD *)(a2 + 8);
  if ( v4 == 5 )
  {
    v8 = *(double *)(a2 + 16);
    if ( fabs(v8) > 1.797693134862316e308 )
    {
      v9 = v8;
      google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
      google::protobuf::util::Status::operator=(
        (google::protobuf::util::Status *const)this,
        &google::protobuf::util::Status::OK);
      *(float *)&this[1]._vptr_DataPiece = v9;
    }
    else if ( v8 <= 3.402823466385289e38 && v8 >= -3.402823466385289e38 )
    {
      v11 = v8;
      google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
      google::protobuf::util::Status::operator=(
        (google::protobuf::util::Status *const)this,
        &google::protobuf::util::Status::OK);
      *(float *)&this[1]._vptr_DataPiece = v11;
    }
    else
    {
      google::protobuf::util::converter::DoubleAsString[abi:cxx11]((std::string *)v12, v8, a2, a3, a4);
      google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v12[0]);
      google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
      if ( other.error_code_ )
      {
        google::protobuf::util::Status::operator=((google::protobuf::util::Status *const)this, &other);
      }
      else
      {
        v10.ptr_ = "Status::OK is not a valid argument.";
        v10.length_ = 35LL;
        google::protobuf::util::Status::Status(&v14, INTERNAL, v10);
        google::protobuf::util::Status::operator=((google::protobuf::util::Status *const)this, &v14);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v14.error_message_._M_dataplus._M_p != &v14.error_message_._anon_0 )
          operator delete(v14.error_message_._M_dataplus._M_p);
      }
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
        operator delete(other.error_message_._M_dataplus._M_p);
      if ( (google::protobuf::StringPiece *)v12[0].ptr_ != &v12[1] )
        operator delete((void *)v12[0].ptr_);
    }
    return this;
  }
  if ( v4 != 9 )
  {
    google::protobuf::util::converter::DataPiece::GenericConvert<float>(
      (google::protobuf::util::StatusOr<float> *)this,
      (const google::protobuf::util::converter::DataPiece *const)a2);
    return this;
  }
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(_QWORD *)(a2 + 16);
  if ( v6 != 8 )
  {
    if ( v6 == 9 )
    {
      if ( (const char *)v7 == "-Infinity" || *(_QWORD *)v7 == 0x74696E69666E492DLL && *(_BYTE *)(v7 + 8) == 121 )
      {
        google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
        google::protobuf::util::Status::operator=(
          (google::protobuf::util::Status *const)this,
          &google::protobuf::util::Status::OK);
        LODWORD(this[1]._vptr_DataPiece) = -8388608;
        return this;
      }
    }
    else if ( v6 == 3 && ((const char *)v7 == "NaN" || *(_WORD *)v7 == 24910 && *(_BYTE *)(v7 + 2) == 78) )
    {
      google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
      google::protobuf::util::Status::operator=(
        (google::protobuf::util::Status *const)this,
        &google::protobuf::util::Status::OK);
      LODWORD(this[1]._vptr_DataPiece) = 2143289344;
      return this;
    }
    goto LABEL_9;
  }
  if ( (const char *)v7 != "Infinity" && *(_QWORD *)v7 != 0x7974696E69666E49LL )
  {
LABEL_9:
    google::protobuf::util::converter::DataPiece::StringToNumber<float>(
      (google::protobuf::util::StatusOr<float> *)this,
      (const google::protobuf::util::converter::DataPiece *const)a2,
      google::protobuf::util::converter::SafeStrToFloat);
    return this;
  }
  google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
  google::protobuf::util::Status::operator=(
    (google::protobuf::util::Status *const)this,
    &google::protobuf::util::Status::OK);
  LODWORD(this[1]._vptr_DataPiece) = 2139095040;
  return this;
};

// Line 203: range 000000000C972A30-000000000C972B86
google::protobuf::util::converter::DataPiece *__fastcall google::protobuf::util::converter::DataPiece::ToBool(
        google::protobuf::util::converter::DataPiece *this,
        __int64 a2)
{
  int v2; // eax
  google::protobuf::StringPiece v3; // rdx
  google::protobuf::StringPiece v5; // rdx
  std::string v6; // [rsp+0h] [rbp-98h] BYREF
  google::protobuf::util::Status other; // [rsp+20h] [rbp-78h] BYREF
  google::protobuf::util::Status v8; // [rsp+50h] [rbp-48h] BYREF

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 == 7 )
  {
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
    google::protobuf::util::Status::operator=(
      (google::protobuf::util::Status *const)this,
      &google::protobuf::util::Status::OK);
    LOBYTE(this[1]._vptr_DataPiece) = *(_BYTE *)(a2 + 16);
    return this;
  }
  if ( v2 != 9 )
  {
    google::protobuf::util::converter::DataPiece::ValueAsStringOrDefault[abi:cxx11](&v6);
    v3.ptr_ = v6._M_dataplus._M_p;
    v3.length_ = v6._M_string_length;
    google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v3);
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
    if ( other.error_code_ )
    {
      google::protobuf::util::Status::operator=((google::protobuf::util::Status *const)this, &other);
    }
    else
    {
      v5.ptr_ = "Status::OK is not a valid argument.";
      v5.length_ = 35LL;
      google::protobuf::util::Status::Status(&v8, INTERNAL, v5);
      google::protobuf::util::Status::operator=((google::protobuf::util::Status *const)this, &v8);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v8.error_message_._M_dataplus._M_p != &v8.error_message_._anon_0 )
        operator delete(v8.error_message_._M_dataplus._M_p);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6._M_dataplus._M_p != &v6._anon_0 )
    {
      operator delete(v6._M_dataplus._M_p);
      return this;
    }
    return this;
  }
  google::protobuf::util::converter::DataPiece::StringToNumber<bool>(
    (google::protobuf::util::StatusOr<bool> *)this,
    (const google::protobuf::util::converter::DataPiece *const)a2,
    (bool (*)(google::protobuf::StringPiece, bool *))google::protobuf::safe_strtob);
  return this;
};

// Line 215: range 000000000C972B90-000000000C972DCE
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::DataPiece::ToString[abi:cxx11](
        google::protobuf::util::Status *this,
        __int64 a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  int v5; // eax
  google::protobuf::StringPiece v6; // rdx
  google::protobuf::util::error::Code error_code; // eax
  google::protobuf::StringPiece v8; // rdx
  const char *v9; // r8
  __int64 v10; // rdx
  std::string::pointer M_p; // rdi
  google::protobuf::stringpiece_ssize_type v13; // r8
  google::protobuf::StringPiece v14; // rdi
  std::string v15; // [rsp+0h] [rbp-A8h] BYREF
  google::protobuf::util::Status v16; // [rsp+20h] [rbp-88h] BYREF
  google::protobuf::util::Status other; // [rsp+50h] [rbp-58h] BYREF

  v5 = *(_DWORD *)(a2 + 8);
  if ( v5 == 9 )
  {
    v9 = *(const char **)(a2 + 16);
    v10 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)&other.error_code_ = &other.error_message_._M_string_length;
    std::string::_M_construct<char const*>((std::string *const)&other, v9, &v9[v10], a4);
    google::protobuf::util::Status::Status(this);
    LOBYTE(this[1].error_message_._M_string_length) = 0;
    *(_QWORD *)&this[1].error_code_ = (char *)this + 56;
    this[1].error_message_._M_dataplus._M_p = 0LL;
    google::protobuf::util::Status::operator=(this, &google::protobuf::util::Status::OK);
    std::string::_M_assign(&this[1], &other);
    goto LABEL_7;
  }
  if ( v5 == 10 )
  {
    v13 = *(_QWORD *)(a2 + 24);
    v14.ptr_ = *(const char **)(a2 + 16);
    *(_QWORD *)&other.error_code_ = &other.error_message_._M_string_length;
    v14.length_ = v13;
    LOBYTE(other.error_message_._M_string_length) = 0;
    other.error_message_._M_dataplus._M_p = 0LL;
    google::protobuf::Base64Escape(v14, (std::string *)&other);
    google::protobuf::util::Status::Status(this);
    LOBYTE(this[1].error_message_._M_string_length) = 0;
    *(_QWORD *)&this[1].error_code_ = (char *)this + 56;
    this[1].error_message_._M_dataplus._M_p = 0LL;
    google::protobuf::util::Status::operator=(this, &google::protobuf::util::Status::OK);
    std::string::_M_assign(&this[1], &other);
LABEL_7:
    M_p = *(std::string::pointer *)&other.error_code_;
    if ( *(google::protobuf::util::Status **)&other.error_code_ == (google::protobuf::util::Status *)&other.error_message_._M_string_length )
      return this;
LABEL_8:
    operator delete(M_p);
    return this;
  }
  google::protobuf::util::converter::DataPiece::ValueAsStringOrDefault[abi:cxx11](&v15);
  v6.ptr_ = v15._M_dataplus._M_p;
  v6.length_ = v15._M_string_length;
  google::protobuf::util::Status::Status(&v16, INVALID_ARGUMENT, v6);
  google::protobuf::util::Status::Status(this);
  error_code = v16.error_code_;
  this[1].error_message_._M_dataplus._M_p = 0LL;
  *(_QWORD *)&this[1].error_code_ = (char *)this + 56;
  LOBYTE(this[1].error_message_._M_string_length) = 0;
  if ( error_code )
  {
    google::protobuf::util::Status::operator=(this, &v16);
  }
  else
  {
    v8.ptr_ = "Status::OK is not a valid argument.";
    v8.length_ = 35LL;
    google::protobuf::util::Status::Status(&other, INTERNAL, v8);
    google::protobuf::util::Status::operator=(this, &other);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v16.error_message_._M_dataplus._M_p != &v16.error_message_._anon_0 )
    operator delete(v16.error_message_._M_dataplus._M_p);
  M_p = v15._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15._M_dataplus._M_p != &v15._anon_0 )
    goto LABEL_8;
  return this;
};

// Line 230: range 000000000C971ED0-000000000C972127
std::string *__fastcall google::protobuf::util::converter::DataPiece::ValueAsStringOrDefault[abi:cxx11](
        std::string *this,
        __int64 a2,
        const char *a3,
        __int64 a4)
{
  const char *v6; // rbp
  size_t v7; // rax
  std::forward_iterator_tag v8; // cl
  const char *v9; // r8
  __int64 v10; // rdx
  google::protobuf::stringpiece_ssize_type v11; // r8
  google::protobuf::StringPiece v12; // rdi
  std::string v13; // [rsp+0h] [rbp-C8h] BYREF
  google::protobuf::strings::AlphaNum v14; // [rsp+20h] [rbp-A8h] BYREF
  google::protobuf::strings::AlphaNum v15; // [rsp+50h] [rbp-78h] BYREF
  __int64 v16; // [rsp+80h] [rbp-48h] BYREF
  __int64 v17; // [rsp+88h] [rbp-40h]

  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 1:
      google::protobuf::SimpleItoa[abi:cxx11](this, *(_DWORD *)(a2 + 16));
      break;
    case 2:
      google::protobuf::SimpleItoa[abi:cxx11](this, *(_QWORD *)(a2 + 16));
      break;
    case 3:
      google::protobuf::SimpleItoa[abi:cxx11](this, *(_DWORD *)(a2 + 16));
      break;
    case 4:
      google::protobuf::SimpleItoa[abi:cxx11](this, *(_QWORD *)(a2 + 16));
      break;
    case 5:
      google::protobuf::util::converter::DoubleAsString[abi:cxx11](
        this,
        *(double *)(a2 + 16),
        a2,
        (__int64)a3,
        (std::forward_iterator_tag)a4);
      break;
    case 6:
      google::protobuf::util::converter::FloatAsString[abi:cxx11](this);
      break;
    case 7:
      v6 = "true";
      if ( !*(_BYTE *)(a2 + 16) )
        v6 = "false";
      this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
      v7 = strlen(v6);
      std::string::_M_construct<char const*>(this, v6, &v6[v7], v8);
      break;
    case 9:
      v9 = *(const char **)(a2 + 16);
      v10 = *(_QWORD *)(a2 + 24);
      v16 = 437730954LL;
      v13._M_dataplus._M_p = v13._anon_0._M_local_buf;
      v17 = 1LL;
      std::string::_M_construct<char const*>(&v13, v9, &v9[v10], (std::forward_iterator_tag)a4);
      v14.piece_data_ = "\". Value: \"" + 10;
      v15.piece_data_ = v13._M_dataplus._M_p;
      v14.piece_size_ = 1LL;
      v15.piece_size_ = v13._M_string_length;
      google::protobuf::StrCat[abi:cxx11]((__int64)this, &v14, &v15, (__int64)&v16);
      goto LABEL_14;
    case 0xA:
      v11 = *(_QWORD *)(a2 + 24);
      v12.ptr_ = *(const char **)(a2 + 16);
      v13._M_dataplus._M_p = v13._anon_0._M_local_buf;
      v12.length_ = v11;
      v13._anon_0._M_local_buf[0] = 0;
      v13._M_string_length = 0LL;
      google::protobuf::WebSafeBase64Escape(v12, &v13);
      v14.piece_data_ = "\". Value: \"" + 10;
      v15.piece_data_ = v13._M_dataplus._M_p;
      v16 = 437730954LL;
      v17 = 1LL;
      v15.piece_size_ = v13._M_string_length;
      v14.piece_size_ = 1LL;
      google::protobuf::StrCat[abi:cxx11]((__int64)this, &v14, &v15, (__int64)&v16);
LABEL_14:
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v13._M_dataplus._M_p != &v13._anon_0 )
        operator delete(v13._M_dataplus._M_p);
      break;
    case 0xB:
      this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
      std::string::_M_construct<char const*>(this, "null", "", (std::forward_iterator_tag)a4);
      break;
    default:
      this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
      if ( a3 )
      {
        std::string::_M_construct<char const*>(this, a3, &a3[a4], (std::forward_iterator_tag)a4);
      }
      else
      {
        this->_M_string_length = 0LL;
        this->_anon_0._M_local_buf[0] = 0;
      }
      break;
  }
  return this;
};

// Line 260: range 000000000C972DE0-000000000C97313B
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::DataPiece::ToBytes[abi:cxx11](
        google::protobuf::util::Status *this,
        __int64 a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  int v6; // eax
  google::protobuf::StringPiece v7; // rdx
  google::protobuf::util::error::Code v8; // eax
  std::string::pointer M_p; // rdi
  google::protobuf::StringPiece v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rsi
  google::protobuf::StringPiece v14; // rdx
  google::protobuf::util::error::Code error_code; // edx
  google::protobuf::StringPiece v16; // rdx
  const char *v17; // rsi
  __int64 v18; // rdx
  __int64 v19[2]; // [rsp+0h] [rbp-C8h] BYREF
  char v20[16]; // [rsp+10h] [rbp-B8h] BYREF
  std::string v21; // [rsp+20h] [rbp-A8h] BYREF
  google::protobuf::util::Status other; // [rsp+40h] [rbp-88h] BYREF
  google::protobuf::util::Status v23; // [rsp+70h] [rbp-58h] BYREF

  v6 = *(_DWORD *)(a2 + 8);
  if ( v6 == 10 )
  {
    v17 = *(const char **)(a2 + 16);
    v18 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)&v23.error_code_ = &v23.error_message_._M_string_length;
    std::string::_M_construct<char const*>((std::string *const)&v23, v17, &v17[v18], a4);
    google::protobuf::util::Status::Status(this);
    LOBYTE(this[1].error_message_._M_string_length) = 0;
    *(_QWORD *)&this[1].error_code_ = (char *)this + 56;
    this[1].error_message_._M_dataplus._M_p = 0LL;
    google::protobuf::util::Status::operator=(this, &google::protobuf::util::Status::OK);
    std::string::_M_assign(&this[1], &v23);
    M_p = *(std::string::pointer *)&v23.error_code_;
    if ( *(google::protobuf::util::Status **)&v23.error_code_ == (google::protobuf::util::Status *)&v23.error_message_._M_string_length )
      return this;
    goto LABEL_8;
  }
  if ( v6 == 9 )
  {
    v12 = *(_QWORD *)(a2 + 24);
    v13 = *(_QWORD *)(a2 + 16);
    v19[0] = (__int64)v20;
    v19[1] = 0LL;
    v20[0] = 0;
    if ( (unsigned __int8)google::protobuf::util::converter::DataPiece::DecodeBase64(a2, v13, v12, v19) )
    {
      google::protobuf::util::Status::Status(this);
      LOBYTE(this[1].error_message_._M_string_length) = 0;
      *(_QWORD *)&this[1].error_code_ = (char *)this + 56;
      this[1].error_message_._M_dataplus._M_p = 0LL;
      google::protobuf::util::Status::operator=(this, &google::protobuf::util::Status::OK);
      std::string::_M_assign(&this[1], v19);
    }
    else
    {
      google::protobuf::util::converter::DataPiece::ValueAsStringOrDefault[abi:cxx11](
        &v21,
        a2,
        "Invalid data in input.",
        22LL);
      v14.ptr_ = v21._M_dataplus._M_p;
      v14.length_ = v21._M_string_length;
      google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v14);
      google::protobuf::util::Status::Status(this);
      error_code = other.error_code_;
      this[1].error_message_._M_dataplus._M_p = 0LL;
      *(_QWORD *)&this[1].error_code_ = (char *)this + 56;
      LOBYTE(this[1].error_message_._M_string_length) = 0;
      if ( error_code )
      {
        google::protobuf::util::Status::operator=(this, &other);
      }
      else
      {
        v16.ptr_ = "Status::OK is not a valid argument.";
        v16.length_ = 35LL;
        google::protobuf::util::Status::Status(&v23, INTERNAL, v16);
        google::protobuf::util::Status::operator=(this, &v23);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v23.error_message_._M_dataplus._M_p != &v23.error_message_._anon_0 )
          operator delete(v23.error_message_._M_dataplus._M_p);
      }
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
        operator delete(other.error_message_._M_dataplus._M_p);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v21._M_dataplus._M_p != &v21._anon_0 )
        operator delete(v21._M_dataplus._M_p);
    }
    M_p = (std::string::pointer)v19[0];
    if ( (char *)v19[0] != v20 )
      goto LABEL_8;
  }
  else
  {
    google::protobuf::util::converter::DataPiece::ValueAsStringOrDefault[abi:cxx11](
      &v21,
      a2,
      "Wrong type. Only String or Bytes can be converted to Bytes.",
      59LL);
    v7.ptr_ = v21._M_dataplus._M_p;
    v7.length_ = v21._M_string_length;
    google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v7);
    google::protobuf::util::Status::Status(this);
    v8 = other.error_code_;
    this[1].error_message_._M_dataplus._M_p = 0LL;
    *(_QWORD *)&this[1].error_code_ = (char *)this + 56;
    LOBYTE(this[1].error_message_._M_string_length) = 0;
    if ( v8 )
    {
      google::protobuf::util::Status::operator=(this, &other);
    }
    else
    {
      v11.ptr_ = "Status::OK is not a valid argument.";
      v11.length_ = 35LL;
      google::protobuf::util::Status::Status(&v23, INTERNAL, v11);
      google::protobuf::util::Status::operator=(this, &v23);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v23.error_message_._M_dataplus._M_p != &v23.error_message_._anon_0 )
        operator delete(v23.error_message_._M_dataplus._M_p);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    M_p = v21._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v21._M_dataplus._M_p != &v21._anon_0 )
LABEL_8:
      operator delete(M_p);
  }
  return this;
};

// Line 275: range 000000000C973140-000000000C97348B
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::DataPiece *__fastcall google::protobuf::util::converter::DataPiece::ToEnum(
        google::protobuf::util::converter::DataPiece *this,
        const google::protobuf::util::converter::DataPiece *a2,
        google::protobuf::Enum *a3,
        std::forward_iterator_tag a4)
{
  google::protobuf::util::converter::DataPiece::Type type; // eax
  google::protobuf::Arena *i64; // rsi
  const char *v11; // rdx
  const google::protobuf::EnumValue *EnumValueByNameOrNull; // rax
  google::protobuf::int32 number; // ebx
  std::string::pointer v14; // rdi
  std::string::pointer M_p; // r8
  unsigned __int64 v16; // rsi
  char *v17; // rdx
  char v18; // al
  const google::protobuf::EnumValue *EnumValueByNameWithoutUnderscoreOrNull; // rax
  __int64 v20; // rcx OVERLAPPED
  google::protobuf::int32 v21; // ebx
  google::protobuf::util::StatusOr<int> *v22; // rdi
  google::protobuf::StringPiece v23; // rdx
  google::protobuf::StringPiece v24; // rdx
  std::string::pointer v25; // rdx
  std::string v26; // [rsp+0h] [rbp-A8h] BYREF
  google::protobuf::util::Status enum_name; // [rsp+20h] [rbp-88h] BYREF
  google::protobuf::util::StatusOr<int> v28; // [rsp+50h] [rbp-58h] BYREF

  type = a2->type_;
  if ( type != TYPE_NULL )
  {
    if ( type != TYPE_STRING_2 )
    {
      google::protobuf::util::converter::DataPiece::ToInt32((google::protobuf::util::StatusOr<int> *)this, a2);
      return this;
    }
    i64 = (google::protobuf::Arena *)a2->_anon_0.i64_;
    v11 = (char *)i64 + a2->_anon_0.str_.size_;
    *(_QWORD *)&enum_name.error_code_ = &enum_name.error_message_._M_string_length;
    std::string::_M_construct<char const*>((std::string *const)&enum_name, (const char *)i64, v11, a4);
    EnumValueByNameOrNull = google::protobuf::util::converter::FindEnumValueByNameOrNull(
                              a3,
                              *(google::protobuf::StringPiece *)&enum_name.error_code_);
    if ( EnumValueByNameOrNull )
    {
      number = EnumValueByNameOrNull->number_;
      google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
      google::protobuf::util::Status::operator=(
        (google::protobuf::util::Status *const)this,
        &google::protobuf::util::Status::OK);
      LODWORD(this[1]._vptr_DataPiece) = number;
    }
    else
    {
      google::protobuf::util::converter::DataPiece::ToInt32(&v28, a2);
      if ( v28.status_.error_code_
        || (EnumValueByNameWithoutUnderscoreOrNull = google::protobuf::util::converter::FindEnumValueByNumberOrNull(
                                                       a3,
                                                       v28.value_)) == 0LL )
      {
        M_p = enum_name.error_message_._M_dataplus._M_p;
        v16 = *(_QWORD *)&enum_name.error_code_;
        if ( enum_name.error_message_._M_dataplus._M_p )
        {
          v17 = *(char **)&enum_name.error_code_;
          do
          {
            v18 = *v17;
            if ( *v17 == 45 )
            {
              v18 = 95;
            }
            else if ( (unsigned __int8)(v18 - 97) < 0x1Au )
            {
              v18 -= 32;
            }
            *v17 = v18;
            v16 = *(_QWORD *)&enum_name.error_code_;
            ++v17;
            M_p = enum_name.error_message_._M_dataplus._M_p;
          }
          while ( v17 != &enum_name.error_message_._M_dataplus._M_p[*(_QWORD *)&enum_name.error_code_] );
        }
        EnumValueByNameWithoutUnderscoreOrNull = google::protobuf::util::converter::FindEnumValueByNameOrNull(
                                                   a3,
                                                   (google::protobuf::StringPiece)__PAIR128__(
                                                                                    (unsigned __int64)M_p,
                                                                                    v16));
        if ( !EnumValueByNameWithoutUnderscoreOrNull )
        {
          if ( !a4.gap0[0]
            || (v25 = enum_name.error_message_._M_dataplus._M_p,
                (EnumValueByNameWithoutUnderscoreOrNull = (const google::protobuf::EnumValue *)google::protobuf::util::converter::FindEnumValueByNameWithoutUnderscoreOrNull(
                                                                                                 (google::protobuf::util::converter *)a3,
                                                                                                 *(const google::protobuf::Enum **)&enum_name.error_code_,
                                                                                                 *(google::protobuf::StringPiece *)(&v20 - 1))) == 0LL) )
          {
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v28.status_.error_message_._M_dataplus._M_p != &v28.status_.error_message_._anon_0 )
              operator delete(v28.status_.error_message_._M_dataplus._M_p);
            if ( *(google::protobuf::util::Status **)&enum_name.error_code_ != (google::protobuf::util::Status *)&enum_name.error_message_._M_string_length )
              operator delete(*(void **)&enum_name.error_code_);
            google::protobuf::util::converter::DataPiece::ValueAsStringOrDefault[abi:cxx11](
              &v26,
              (__int64)a2,
              "Cannot find enum with given value.",
              34LL);
            v23.ptr_ = v26._M_dataplus._M_p;
            v23.length_ = v26._M_string_length;
            google::protobuf::util::Status::Status(&enum_name, INVALID_ARGUMENT, v23);
            google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
            if ( enum_name.error_code_ )
            {
              google::protobuf::util::Status::operator=((google::protobuf::util::Status *const)this, &enum_name);
            }
            else
            {
              v24.ptr_ = "Status::OK is not a valid argument.";
              v24.length_ = 35LL;
              google::protobuf::util::Status::Status(&v28.status_, INTERNAL, v24);
              google::protobuf::util::Status::operator=((google::protobuf::util::Status *const)this, &v28.status_);
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v28.status_.error_message_._M_dataplus._M_p != &v28.status_.error_message_._anon_0 )
                operator delete(v28.status_.error_message_._M_dataplus._M_p);
            }
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)enum_name.error_message_._M_dataplus._M_p != &enum_name.error_message_._anon_0 )
              operator delete(enum_name.error_message_._M_dataplus._M_p);
            v14 = v26._M_dataplus._M_p;
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v26._M_dataplus._M_p == &v26._anon_0 )
              return this;
LABEL_8:
            operator delete(v14);
            return this;
          }
        }
      }
      v21 = EnumValueByNameWithoutUnderscoreOrNull->number_;
      google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
      google::protobuf::util::Status::operator=(
        (google::protobuf::util::Status *const)this,
        &google::protobuf::util::Status::OK);
      v22 = (google::protobuf::util::StatusOr<int> *)v28.status_.error_message_._M_dataplus._M_p;
      LODWORD(this[1]._vptr_DataPiece) = v21;
      if ( v22 != (google::protobuf::util::StatusOr<int> *)&v28.status_.error_message_._anon_0 )
        operator delete(v22);
    }
    v14 = *(std::string::pointer *)&enum_name.error_code_;
    if ( *(google::protobuf::util::Status **)&enum_name.error_code_ == (google::protobuf::util::Status *)&enum_name.error_message_._M_string_length )
      return this;
    goto LABEL_8;
  }
  google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
  google::protobuf::util::Status::operator=(
    (google::protobuf::util::Status *const)this,
    &google::protobuf::util::Status::OK);
  LODWORD(this[1]._vptr_DataPiece) = 0;
  return this;
};

// Line 318: range 000000000C976300-000000000C97695C
google::protobuf::util::StatusOr<double> *__fastcall google::protobuf::util::converter::DataPiece::GenericConvert<double>(
        google::protobuf::util::StatusOr<double> *retstr,
        const google::protobuf::util::converter::DataPiece *const this)
{
  float v2; // xmm0_4
  double v3; // xmm2_8
  double v4; // xmm3_8
  __int64 i64; // rsi
  double v7; // xmm1_8
  double v8; // xmm2_8
  google::protobuf::StringPiece v9; // rdx
  google::protobuf::int32 v10; // ebp
  unsigned __int64 u64; // rsi
  double v12; // xmm2_8
  double i32; // [rsp+8h] [rbp-A0h]
  double v14; // [rsp+8h] [rbp-A0h]
  google::protobuf::StringPiece v15[2]; // [rsp+10h] [rbp-98h] BYREF
  google::protobuf::util::Status v16; // [rsp+30h] [rbp-78h] BYREF
  google::protobuf::util::Status other; // [rsp+60h] [rbp-48h] BYREF

  switch ( this->type_ )
  {
    case TYPE_INT32_1:
      i32 = (double)this->_anon_0.i32_;
      google::protobuf::util::Status::Status(&retstr->status_);
      google::protobuf::util::Status::operator=(&retstr->status_, &google::protobuf::util::Status::OK);
      goto LABEL_12;
    case TYPE_INT64_1:
      i64 = this->_anon_0.i64_;
      v14 = (double)(int)i64;
      v7 = 0.0;
      if ( i64 )
      {
        v7 = 1.0;
        if ( i64 <= 0 )
          v7 = -1.0;
      }
      if ( v14 == 0.0 )
      {
        v8 = (double)(int)i64;
      }
      else
      {
        v8 = 1.0;
        if ( v14 <= 0.0 )
          v8 = -1.0;
      }
      if ( v8 == v7 )
        goto LABEL_48;
      google::protobuf::SimpleItoa[abi:cxx11]((std::string *)v15, i64);
      google::protobuf::util::Status::Status(&v16, INVALID_ARGUMENT, v15[0]);
      google::protobuf::util::Status::Status(&retstr->status_);
      if ( v16.error_code_ == OK )
        goto LABEL_22;
      goto LABEL_41;
    case TYPE_UINT32_1:
      v10 = this->_anon_0.i32_;
      google::protobuf::util::Status::Status(&retstr->status_);
      google::protobuf::util::Status::operator=(&retstr->status_, &google::protobuf::util::Status::OK);
      retstr->value_ = (double)v10;
      return retstr;
    case TYPE_UINT64_1:
      u64 = this->_anon_0.u64_;
      if ( (u64 & 0x8000000000000000LL) != 0LL )
        v14 = (double)(int)(u64 & 1 | (u64 >> 1)) + (double)(int)(u64 & 1 | (u64 >> 1));
      else
        v14 = (double)(int)u64;
      if ( v14 == 0.0 )
      {
        v12 = v14;
      }
      else
      {
        v12 = 1.0;
        if ( v14 <= 0.0 )
          v12 = -1.0;
      }
      if ( (double)(u64 != 0) == v12 )
      {
LABEL_48:
        google::protobuf::util::Status::Status(&retstr->status_);
        google::protobuf::util::Status::operator=(&retstr->status_, &google::protobuf::util::Status::OK);
        retstr->value_ = v14;
        return retstr;
      }
      google::protobuf::SimpleItoa[abi:cxx11]((std::string *)v15, u64);
      google::protobuf::util::Status::Status(&v16, INVALID_ARGUMENT, v15[0]);
      google::protobuf::util::Status::Status(&retstr->status_);
      if ( v16.error_code_ )
        goto LABEL_41;
      goto LABEL_22;
    case TYPE_DOUBLE_1:
      i32 = this->_anon_0.double_;
      google::protobuf::util::Status::Status(&retstr->status_);
      google::protobuf::util::Status::operator=(&retstr->status_, &google::protobuf::util::Status::OK);
LABEL_12:
      retstr->value_ = i32;
      return retstr;
    case TYPE_FLOAT_2:
      v2 = this->_anon_0.float_;
      if ( v2 == 0.0 )
      {
        v3 = v2;
      }
      else
      {
        v3 = 1.0;
        if ( v2 <= 0.0 )
          v3 = -1.0;
      }
      if ( v2 == 0.0 )
      {
        v4 = v2;
      }
      else
      {
        v4 = 1.0;
        if ( v2 <= 0.0 )
          v4 = -1.0;
      }
      if ( v4 == v3 )
      {
        google::protobuf::util::Status::Status(&retstr->status_);
        google::protobuf::util::Status::operator=(&retstr->status_, &google::protobuf::util::Status::OK);
        retstr->value_ = v2;
        return retstr;
      }
      google::protobuf::util::converter::FloatAsString[abi:cxx11]((std::string *)v15);
      google::protobuf::util::Status::Status(&v16, INVALID_ARGUMENT, v15[0]);
      google::protobuf::util::Status::Status(&retstr->status_);
      if ( v16.error_code_ )
      {
LABEL_41:
        google::protobuf::util::Status::operator=(&retstr->status_, &v16);
      }
      else
      {
LABEL_22:
        v9.ptr_ = "Status::OK is not a valid argument.";
        v9.length_ = 35LL;
        google::protobuf::util::Status::Status(&other, INTERNAL, v9);
        google::protobuf::util::Status::operator=(&retstr->status_, &other);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
          operator delete(other.error_message_._M_dataplus._M_p);
      }
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v16.error_message_._M_dataplus._M_p != &v16.error_message_._anon_0 )
        operator delete(v16.error_message_._M_dataplus._M_p);
      if ( (google::protobuf::StringPiece *)v15[0].ptr_ == &v15[1] )
        return retstr;
      operator delete((void *)v15[0].ptr_);
      return retstr;
    default:
      google::protobuf::util::converter::DataPiece::ValueAsStringOrDefault[abi:cxx11](
        (std::string *)v15,
        (__int64)this,
        "Wrong type. Bool, Enum, String and Cord not supported in GenericConvert.",
        72LL);
      google::protobuf::util::Status::Status(&v16, INVALID_ARGUMENT, v15[0]);
      google::protobuf::util::Status::Status(&retstr->status_);
      if ( v16.error_code_ )
        goto LABEL_41;
      goto LABEL_22;
  }
};

// Line 318: range 000000000C976970-000000000C9771F6
google::protobuf::util::StatusOr<float> *__fastcall google::protobuf::util::converter::DataPiece::GenericConvert<float>(
        google::protobuf::util::StatusOr<float> *retstr,
        const google::protobuf::util::converter::DataPiece *const this)
{
  __int64 v2; // rdx
  bool v3; // cl
  int i32; // esi
  float v6; // xmm0_4
  float v7; // xmm2_4
  google::protobuf::StringPiece v8; // rdx
  __int64 i64; // rsi
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm5_4
  unsigned int u32; // esi
  float v14; // xmm2_4
  unsigned __int64 u64; // rsi
  float v16; // xmm2_4
  double v17; // xmm0_8
  float v18; // xmm6_4
  double v19; // xmm2_8
  double v20; // xmm4_8
  float v21; // [rsp+Ch] [rbp-9Ch]
  float v22; // [rsp+Ch] [rbp-9Ch]
  google::protobuf::StringPiece v23[2]; // [rsp+10h] [rbp-98h] BYREF
  google::protobuf::util::Status v24; // [rsp+30h] [rbp-78h] BYREF
  google::protobuf::util::Status other; // [rsp+60h] [rbp-48h] BYREF

  switch ( this->type_ )
  {
    case TYPE_INT32_1:
      i32 = this->_anon_0.i32_;
      v22 = (float)i32;
      if ( i32 )
      {
        v6 = 1.0;
        if ( i32 <= 0 )
          v6 = -1.0;
      }
      else
      {
        v6 = 0.0;
      }
      if ( v22 == 0.0 )
      {
        v7 = (float)i32;
      }
      else
      {
        v7 = 1.0;
        if ( v22 <= 0.0 )
          v7 = -1.0;
      }
      if ( v7 == v6 )
        goto LABEL_69;
      google::protobuf::SimpleItoa[abi:cxx11]((std::string *)v23, i32);
      google::protobuf::util::Status::Status(&v24, INVALID_ARGUMENT, v23[0]);
      google::protobuf::util::Status::Status(&retstr->status_);
      if ( v24.error_code_ )
        goto LABEL_57;
      goto LABEL_13;
    case TYPE_INT64_1:
      i64 = this->_anon_0.i64_;
      v22 = (float)(int)i64;
      v10 = 0.0;
      if ( i64 )
      {
        v10 = 1.0;
        if ( i64 <= 0 )
          v10 = -1.0;
      }
      if ( v22 == 0.0 )
      {
        v11 = (float)(int)i64;
      }
      else
      {
        v11 = 1.0;
        if ( v22 <= 0.0 )
          v11 = -1.0;
      }
      if ( v11 == v10 )
        goto LABEL_69;
      google::protobuf::SimpleItoa[abi:cxx11]((std::string *)v23, i64);
      google::protobuf::util::Status::Status(&v24, INVALID_ARGUMENT, v23[0]);
      google::protobuf::util::Status::Status(&retstr->status_);
      if ( v24.error_code_ == OK )
        goto LABEL_13;
      goto LABEL_57;
    case TYPE_UINT32_1:
      v12 = (float)this->_anon_0.i32_;
      u32 = this->_anon_0.u32_;
      v21 = v12;
      if ( v12 == 0.0 )
      {
        v14 = v12;
      }
      else
      {
        v14 = 1.0;
        if ( v12 <= 0.0 )
          v14 = -1.0;
      }
      if ( (float)(u32 != 0) == v14 )
        goto LABEL_71;
      google::protobuf::SimpleItoa[abi:cxx11]((std::string *)v23, u32);
      google::protobuf::util::Status::Status(&v24, INVALID_ARGUMENT, v23[0]);
      google::protobuf::util::Status::Status(&retstr->status_);
      if ( v24.error_code_ == OK )
        goto LABEL_13;
      goto LABEL_57;
    case TYPE_UINT64_1:
      u64 = this->_anon_0.u64_;
      if ( (u64 & 0x8000000000000000LL) != 0LL )
        v22 = (float)(int)(u64 & 1 | (u64 >> 1)) + (float)(int)(u64 & 1 | (u64 >> 1));
      else
        v22 = (float)(int)u64;
      if ( v22 == 0.0 )
      {
        v16 = v22;
      }
      else
      {
        v16 = 1.0;
        if ( v22 <= 0.0 )
          v16 = -1.0;
      }
      if ( (float)(u64 != 0) == v16 )
      {
LABEL_69:
        google::protobuf::util::Status::Status(&retstr->status_);
        google::protobuf::util::Status::operator=(&retstr->status_, &google::protobuf::util::Status::OK);
        retstr->value_ = v22;
        return retstr;
      }
      google::protobuf::SimpleItoa[abi:cxx11]((std::string *)v23, u64);
      google::protobuf::util::Status::Status(&v24, INVALID_ARGUMENT, v23[0]);
      google::protobuf::util::Status::Status(&retstr->status_);
      if ( v24.error_code_ )
        goto LABEL_57;
      goto LABEL_13;
    case TYPE_DOUBLE_1:
      v17 = this->_anon_0.double_;
      v18 = v17;
      v19 = v18;
      v21 = v18;
      if ( v17 != v18 )
        goto LABEL_52;
      this = 0LL;
      v3 = v18 == 0.0;
      LOBYTE(v2) = 1;
      if ( v17 != 0.0 )
        v2 = 0LL;
      if ( (_BYTE)v2 )
      {
        v20 = v17;
        if ( v18 == 0.0 )
          goto LABEL_71;
        goto LABEL_49;
      }
      v20 = 1.0;
      if ( v17 <= 0.0 )
        v20 = -1.0;
      if ( v18 != 0.0 )
      {
LABEL_49:
        v19 = 1.0;
        if ( v18 <= 0.0 )
          v19 = -1.0;
      }
      if ( v20 == v19 )
      {
LABEL_71:
        google::protobuf::util::Status::Status(&retstr->status_);
        google::protobuf::util::Status::operator=(&retstr->status_, &google::protobuf::util::Status::OK);
LABEL_3:
        retstr->value_ = v21;
        return retstr;
      }
LABEL_52:
      google::protobuf::util::converter::DoubleAsString[abi:cxx11](
        (std::string *)v23,
        v17,
        (__int64)this,
        v2,
        (std::forward_iterator_tag)v3);
      google::protobuf::util::Status::Status(&v24, INVALID_ARGUMENT, v23[0]);
      google::protobuf::util::Status::Status(&retstr->status_);
      if ( v24.error_code_ )
      {
LABEL_57:
        google::protobuf::util::Status::operator=(&retstr->status_, &v24);
      }
      else
      {
LABEL_13:
        v8.ptr_ = "Status::OK is not a valid argument.";
        v8.length_ = 35LL;
        google::protobuf::util::Status::Status(&other, INTERNAL, v8);
        google::protobuf::util::Status::operator=(&retstr->status_, &other);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
          operator delete(other.error_message_._M_dataplus._M_p);
      }
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v24.error_message_._M_dataplus._M_p != &v24.error_message_._anon_0 )
        operator delete(v24.error_message_._M_dataplus._M_p);
      if ( (google::protobuf::StringPiece *)v23[0].ptr_ == &v23[1] )
        return retstr;
      operator delete((void *)v23[0].ptr_);
      return retstr;
    case TYPE_FLOAT_2:
      v21 = this->_anon_0.float_;
      google::protobuf::util::Status::Status(&retstr->status_);
      google::protobuf::util::Status::operator=(&retstr->status_, &google::protobuf::util::Status::OK);
      goto LABEL_3;
    default:
      google::protobuf::util::converter::DataPiece::ValueAsStringOrDefault[abi:cxx11](
        (std::string *)v23,
        (__int64)this,
        "Wrong type. Bool, Enum, String and Cord not supported in GenericConvert.",
        72LL);
      google::protobuf::util::Status::Status(&v24, INVALID_ARGUMENT, v23[0]);
      google::protobuf::util::Status::Status(&retstr->status_);
      if ( v24.error_code_ )
        goto LABEL_57;
      goto LABEL_13;
  }
};

// Line 318: range 000000000C975350-000000000C975782
google::protobuf::util::StatusOr<int> *__fastcall google::protobuf::util::converter::DataPiece::GenericConvert<int>(
        google::protobuf::util::StatusOr<int> *retstr,
        const google::protobuf::util::converter::DataPiece *const this)
{
  __int64 v2; // rdx
  std::forward_iterator_tag v3; // cl
  google::protobuf::int64 i64; // rbp
  google::protobuf::StringPiece v6; // rdx
  google::protobuf::StringPiece v7; // rdx
  google::protobuf::StringPiece v8; // rdx
  google::protobuf::StringPiece v9; // rdx
  google::protobuf::StringPiece v10; // rdx
  std::string v11; // [rsp+0h] [rbp-98h] BYREF
  google::protobuf::util::Status v12; // [rsp+20h] [rbp-78h] BYREF
  google::protobuf::util::Status other; // [rsp+50h] [rbp-48h] BYREF

  switch ( this->type_ )
  {
    case TYPE_INT32_1:
      LODWORD(i64) = this->_anon_0.i32_;
      google::protobuf::util::Status::Status(&retstr->status_);
      google::protobuf::util::Status::operator=(&retstr->status_, &google::protobuf::util::Status::OK);
      goto LABEL_5;
    case TYPE_INT64_1:
      i64 = this->_anon_0.i64_;
      if ( i64 == (int)i64 && (!i64 || (_DWORD)i64 && 2LL * ((int)i64 > 0) - 1 == 2LL * (i64 > 0) - 1) )
        goto LABEL_10;
      google::protobuf::SimpleItoa[abi:cxx11](&v11, this->_anon_0.i64_);
      v9.ptr_ = v11._M_dataplus._M_p;
      v9.length_ = v11._M_string_length;
      google::protobuf::util::Status::Status(&v12, INVALID_ARGUMENT, v9);
      google::protobuf::util::Status::Status(&retstr->status_);
      if ( v12.error_code_ == OK )
        goto LABEL_13;
      goto LABEL_29;
    case TYPE_UINT32_1:
      LODWORD(i64) = this->_anon_0.i32_;
      if ( (int)i64 >= 0 )
        goto LABEL_10;
      google::protobuf::SimpleItoa[abi:cxx11](&v11, i64);
      v6.ptr_ = v11._M_dataplus._M_p;
      v6.length_ = v11._M_string_length;
      google::protobuf::util::Status::Status(&v12, INVALID_ARGUMENT, v6);
      google::protobuf::util::Status::Status(&retstr->status_);
      if ( v12.error_code_ == OK )
        goto LABEL_13;
      goto LABEL_29;
    case TYPE_UINT64_1:
      i64 = this->_anon_0.i64_;
      if ( i64 != (int)i64 || i64 && (int)i64 <= 0 )
      {
        google::protobuf::SimpleItoa[abi:cxx11](&v11, this->_anon_0.u64_);
        v10.ptr_ = v11._M_dataplus._M_p;
        v10.length_ = v11._M_string_length;
        google::protobuf::util::Status::Status(&v12, INVALID_ARGUMENT, v10);
        google::protobuf::util::Status::Status(&retstr->status_);
        if ( v12.error_code_ )
        {
LABEL_29:
          google::protobuf::util::Status::operator=(&retstr->status_, &v12);
        }
        else
        {
LABEL_13:
          v7.ptr_ = "Status::OK is not a valid argument.";
          v7.length_ = 35LL;
          google::protobuf::util::Status::Status(&other, INTERNAL, v7);
          google::protobuf::util::Status::operator=(&retstr->status_, &other);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
            operator delete(other.error_message_._M_dataplus._M_p);
        }
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v12.error_message_._M_dataplus._M_p != &v12.error_message_._anon_0 )
          operator delete(v12.error_message_._M_dataplus._M_p);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11._M_dataplus._M_p == &v11._anon_0 )
        {
          return retstr;
        }
        else
        {
          operator delete(v11._M_dataplus._M_p);
          return retstr;
        }
      }
      else
      {
LABEL_10:
        google::protobuf::util::Status::Status(&retstr->status_);
        google::protobuf::util::Status::operator=(&retstr->status_, &google::protobuf::util::Status::OK);
LABEL_5:
        retstr->value_ = i64;
        return retstr;
      }
    case TYPE_DOUBLE_1:
      google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<int,double>(
        &retstr->status_,
        (unsigned int)(int)this->_anon_0.double_,
        v2,
        v3,
        this->_anon_0.double_);
      return retstr;
    case TYPE_FLOAT_2:
      google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<int,float>(
        &retstr->status_,
        (google::protobuf::util::error::Code)this->_anon_0.float_,
        this->_anon_0.float_);
      return retstr;
    default:
      google::protobuf::util::converter::DataPiece::ValueAsStringOrDefault[abi:cxx11](
        &v11,
        (__int64)this,
        "Wrong type. Bool, Enum, String and Cord not supported in GenericConvert.",
        72LL);
      v8.ptr_ = v11._M_dataplus._M_p;
      v8.length_ = v11._M_string_length;
      google::protobuf::util::Status::Status(&v12, INVALID_ARGUMENT, v8);
      google::protobuf::util::Status::Status(&retstr->status_);
      if ( v12.error_code_ == OK )
        goto LABEL_13;
      goto LABEL_29;
  }
};

// Line 318: range 000000000C975B90-000000000C975F13
google::protobuf::util::StatusOr<long int> *__fastcall google::protobuf::util::converter::DataPiece::GenericConvert<long>(
        google::protobuf::util::StatusOr<long int> *retstr,
        const google::protobuf::util::converter::DataPiece *const this)
{
  __int64 v2; // rdx
  std::forward_iterator_tag v3; // cl
  __int64 i32; // rbp
  unsigned int u32; // ebp
  google::protobuf::StringPiece v7; // rdx
  google::protobuf::StringPiece v8; // rdx
  google::protobuf::StringPiece v9; // rdx
  std::string v10; // [rsp+0h] [rbp-98h] BYREF
  google::protobuf::util::Status v11; // [rsp+20h] [rbp-78h] BYREF
  google::protobuf::util::Status other; // [rsp+50h] [rbp-48h] BYREF

  switch ( this->type_ )
  {
    case TYPE_INT32_1:
      i32 = this->_anon_0.i32_;
      goto LABEL_20;
    case TYPE_INT64_1:
      i32 = this->_anon_0.i64_;
      google::protobuf::util::Status::Status(&retstr->status_);
      google::protobuf::util::Status::operator=(&retstr->status_, &google::protobuf::util::Status::OK);
      goto LABEL_6;
    case TYPE_UINT32_1:
      u32 = this->_anon_0.u32_;
      google::protobuf::util::Status::Status(&retstr->status_);
      google::protobuf::util::Status::operator=(&retstr->status_, &google::protobuf::util::Status::OK);
      retstr->value_ = u32;
      return retstr;
    case TYPE_UINT64_1:
      i32 = this->_anon_0.i64_;
      if ( i32 >= 0 )
      {
LABEL_20:
        google::protobuf::util::Status::Status(&retstr->status_);
        google::protobuf::util::Status::operator=(&retstr->status_, &google::protobuf::util::Status::OK);
LABEL_6:
        retstr->value_ = i32;
        return retstr;
      }
      else
      {
        google::protobuf::SimpleItoa[abi:cxx11](&v10, this->_anon_0.u64_);
        v7.ptr_ = v10._M_dataplus._M_p;
        v7.length_ = v10._M_string_length;
        google::protobuf::util::Status::Status(&v11, INVALID_ARGUMENT, v7);
        google::protobuf::util::Status::Status(&retstr->status_);
        if ( v11.error_code_ )
        {
LABEL_21:
          google::protobuf::util::Status::operator=(&retstr->status_, &v11);
        }
        else
        {
LABEL_10:
          v8.ptr_ = "Status::OK is not a valid argument.";
          v8.length_ = 35LL;
          google::protobuf::util::Status::Status(&other, INTERNAL, v8);
          google::protobuf::util::Status::operator=(&retstr->status_, &other);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
            operator delete(other.error_message_._M_dataplus._M_p);
        }
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11.error_message_._M_dataplus._M_p != &v11.error_message_._anon_0 )
          operator delete(v11.error_message_._M_dataplus._M_p);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v10._M_dataplus._M_p == &v10._anon_0 )
        {
          return retstr;
        }
        else
        {
          operator delete(v10._M_dataplus._M_p);
          return retstr;
        }
      }
    case TYPE_DOUBLE_1:
      google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<long,double>(
        &retstr->status_,
        (unsigned int)(int)this->_anon_0.double_,
        v2,
        v3,
        this->_anon_0.double_);
      return retstr;
    case TYPE_FLOAT_2:
      google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<long,float>(
        &retstr->status_,
        (unsigned int)(int)this->_anon_0.float_,
        this->_anon_0.float_);
      return retstr;
    default:
      google::protobuf::util::converter::DataPiece::ValueAsStringOrDefault[abi:cxx11](
        &v10,
        (__int64)this,
        "Wrong type. Bool, Enum, String and Cord not supported in GenericConvert.",
        72LL);
      v9.ptr_ = v10._M_dataplus._M_p;
      v9.length_ = v10._M_string_length;
      google::protobuf::util::Status::Status(&v11, INVALID_ARGUMENT, v9);
      google::protobuf::util::Status::Status(&retstr->status_);
      if ( v11.error_code_ )
        goto LABEL_21;
      goto LABEL_10;
  }
};

// Line 318: range 000000000C975F20-000000000C9762EC
google::protobuf::util::StatusOr<long unsigned int> *__fastcall google::protobuf::util::converter::DataPiece::GenericConvert<unsigned long>(
        google::protobuf::util::StatusOr<long unsigned int> *retstr,
        const google::protobuf::util::converter::DataPiece *const this)
{
  __int64 v2; // rdx
  std::forward_iterator_tag v3; // cl
  float v4; // xmm1_4
  __int64 v5; // rsi
  __int64 i32; // rbp
  unsigned int u32; // ebp
  double v9; // xmm1_8
  __int64 v10; // rsi
  google::protobuf::StringPiece v11; // rdx
  google::protobuf::StringPiece v12; // rdx
  google::protobuf::StringPiece v13; // rdx
  google::protobuf::StringPiece v14; // rdx
  std::string v15; // [rsp+0h] [rbp-98h] BYREF
  google::protobuf::util::Status v16; // [rsp+20h] [rbp-78h] BYREF
  google::protobuf::util::Status other; // [rsp+50h] [rbp-48h] BYREF

  switch ( this->type_ )
  {
    case TYPE_INT32_1:
      i32 = this->_anon_0.i32_;
      if ( (int)i32 >= 0 )
        goto LABEL_7;
      google::protobuf::SimpleItoa[abi:cxx11](&v15, i32);
      v11.ptr_ = v15._M_dataplus._M_p;
      v11.length_ = v15._M_string_length;
      google::protobuf::util::Status::Status(&v16, INVALID_ARGUMENT, v11);
      google::protobuf::util::Status::Status(&retstr->status_);
      if ( v16.error_code_ )
        goto LABEL_29;
      goto LABEL_17;
    case TYPE_INT64_1:
      i32 = this->_anon_0.i64_;
      if ( i32 < 0 )
      {
        google::protobuf::SimpleItoa[abi:cxx11](&v15, this->_anon_0.i64_);
        v13.ptr_ = v15._M_dataplus._M_p;
        v13.length_ = v15._M_string_length;
        google::protobuf::util::Status::Status(&v16, INVALID_ARGUMENT, v13);
        google::protobuf::util::Status::Status(&retstr->status_);
        if ( v16.error_code_ )
        {
LABEL_29:
          google::protobuf::util::Status::operator=(&retstr->status_, &v16);
        }
        else
        {
LABEL_17:
          v12.ptr_ = "Status::OK is not a valid argument.";
          v12.length_ = 35LL;
          google::protobuf::util::Status::Status(&other, INTERNAL, v12);
          google::protobuf::util::Status::operator=(&retstr->status_, &other);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
            operator delete(other.error_message_._M_dataplus._M_p);
        }
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v16.error_message_._M_dataplus._M_p != &v16.error_message_._anon_0 )
          operator delete(v16.error_message_._M_dataplus._M_p);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15._M_dataplus._M_p == &v15._anon_0 )
        {
          return retstr;
        }
        else
        {
          operator delete(v15._M_dataplus._M_p);
          return retstr;
        }
      }
      else
      {
LABEL_7:
        google::protobuf::util::Status::Status(&retstr->status_);
        google::protobuf::util::Status::operator=(&retstr->status_, &google::protobuf::util::Status::OK);
LABEL_11:
        retstr->value_ = i32;
        return retstr;
      }
    case TYPE_UINT32_1:
      u32 = this->_anon_0.u32_;
      google::protobuf::util::Status::Status(&retstr->status_);
      google::protobuf::util::Status::operator=(&retstr->status_, &google::protobuf::util::Status::OK);
      retstr->value_ = u32;
      return retstr;
    case TYPE_UINT64_1:
      i32 = this->_anon_0.i64_;
      google::protobuf::util::Status::Status(&retstr->status_);
      google::protobuf::util::Status::operator=(&retstr->status_, &google::protobuf::util::Status::OK);
      goto LABEL_11;
    case TYPE_DOUBLE_1:
      v9 = this->_anon_0.double_;
      if ( v9 >= 9.223372036854776e18 )
        v10 = (unsigned int)(int)(v9 - 9.223372036854776e18) ^ 0x8000000000000000LL;
      else
        v10 = (unsigned int)(int)v9;
      google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<unsigned long,double>(
        &retstr->status_,
        v10,
        v2,
        v3,
        v9);
      return retstr;
    case TYPE_FLOAT_2:
      v4 = this->_anon_0.float_;
      if ( v4 >= 9.223372e18 )
        v5 = (unsigned int)(int)(float)(v4 - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v5 = (unsigned int)(int)v4;
      google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<unsigned long,float>(
        &retstr->status_,
        v5,
        v4);
      return retstr;
    default:
      google::protobuf::util::converter::DataPiece::ValueAsStringOrDefault[abi:cxx11](
        &v15,
        (__int64)this,
        "Wrong type. Bool, Enum, String and Cord not supported in GenericConvert.",
        72LL);
      v14.ptr_ = v15._M_dataplus._M_p;
      v14.length_ = v15._M_string_length;
      google::protobuf::util::Status::Status(&v16, INVALID_ARGUMENT, v14);
      google::protobuf::util::Status::Status(&retstr->status_);
      if ( v16.error_code_ == OK )
        goto LABEL_17;
      goto LABEL_29;
  }
};

// Line 318: range 000000000C975790-000000000C975B8A
google::protobuf::util::StatusOr<unsigned int> *__fastcall google::protobuf::util::converter::DataPiece::GenericConvert<unsigned int>(
        google::protobuf::util::StatusOr<unsigned int> *retstr,
        const google::protobuf::util::converter::DataPiece *const this)
{
  __int64 v2; // rdx
  std::forward_iterator_tag v3; // cl
  google::protobuf::int64 i64; // rbp
  google::protobuf::StringPiece v6; // rdx
  google::protobuf::StringPiece v7; // rdx
  google::protobuf::StringPiece v8; // rdx
  google::protobuf::StringPiece v9; // rdx
  google::protobuf::StringPiece v10; // rdx
  std::string v11; // [rsp+0h] [rbp-98h] BYREF
  google::protobuf::util::Status v12; // [rsp+20h] [rbp-78h] BYREF
  google::protobuf::util::Status other; // [rsp+50h] [rbp-48h] BYREF

  switch ( this->type_ )
  {
    case TYPE_INT32_1:
      LODWORD(i64) = this->_anon_0.i32_;
      if ( (int)i64 >= 0 )
        goto LABEL_7;
      google::protobuf::SimpleItoa[abi:cxx11](&v11, i64);
      v6.ptr_ = v11._M_dataplus._M_p;
      v6.length_ = v11._M_string_length;
      google::protobuf::util::Status::Status(&v12, INVALID_ARGUMENT, v6);
      google::protobuf::util::Status::Status(&retstr->status_);
      if ( v12.error_code_ )
        goto LABEL_25;
      goto LABEL_14;
    case TYPE_INT64_1:
      i64 = this->_anon_0.i64_;
      if ( i64 == (unsigned int)i64 )
        goto LABEL_7;
      google::protobuf::SimpleItoa[abi:cxx11](&v11, this->_anon_0.i64_);
      v9.ptr_ = v11._M_dataplus._M_p;
      v9.length_ = v11._M_string_length;
      google::protobuf::util::Status::Status(&v12, INVALID_ARGUMENT, v9);
      google::protobuf::util::Status::Status(&retstr->status_);
      if ( v12.error_code_ == OK )
        goto LABEL_14;
      goto LABEL_25;
    case TYPE_UINT32_1:
      LODWORD(i64) = this->_anon_0.i32_;
      google::protobuf::util::Status::Status(&retstr->status_);
      google::protobuf::util::Status::operator=(&retstr->status_, &google::protobuf::util::Status::OK);
      goto LABEL_8;
    case TYPE_UINT64_1:
      i64 = this->_anon_0.i64_;
      if ( i64 == (unsigned int)i64 )
      {
LABEL_7:
        google::protobuf::util::Status::Status(&retstr->status_);
        google::protobuf::util::Status::operator=(&retstr->status_, &google::protobuf::util::Status::OK);
LABEL_8:
        retstr->value_ = i64;
        return retstr;
      }
      else
      {
        google::protobuf::SimpleItoa[abi:cxx11](&v11, this->_anon_0.u64_);
        v10.ptr_ = v11._M_dataplus._M_p;
        v10.length_ = v11._M_string_length;
        google::protobuf::util::Status::Status(&v12, INVALID_ARGUMENT, v10);
        google::protobuf::util::Status::Status(&retstr->status_);
        if ( v12.error_code_ )
        {
LABEL_25:
          google::protobuf::util::Status::operator=(&retstr->status_, &v12);
        }
        else
        {
LABEL_14:
          v7.ptr_ = "Status::OK is not a valid argument.";
          v7.length_ = 35LL;
          google::protobuf::util::Status::Status(&other, INTERNAL, v7);
          google::protobuf::util::Status::operator=(&retstr->status_, &other);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
            operator delete(other.error_message_._M_dataplus._M_p);
        }
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v12.error_message_._M_dataplus._M_p != &v12.error_message_._anon_0 )
          operator delete(v12.error_message_._M_dataplus._M_p);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11._M_dataplus._M_p == &v11._anon_0 )
        {
          return retstr;
        }
        else
        {
          operator delete(v11._M_dataplus._M_p);
          return retstr;
        }
      }
    case TYPE_DOUBLE_1:
      google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<unsigned int,double>(
        &retstr->status_,
        (unsigned int)(int)this->_anon_0.double_,
        v2,
        v3,
        this->_anon_0.double_);
      return retstr;
    case TYPE_FLOAT_2:
      google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<unsigned int,float>(
        &retstr->status_,
        (google::protobuf::util::error::Code)this->_anon_0.float_,
        this->_anon_0.float_);
      return retstr;
    default:
      google::protobuf::util::converter::DataPiece::ValueAsStringOrDefault[abi:cxx11](
        &v11,
        (__int64)this,
        "Wrong type. Bool, Enum, String and Cord not supported in GenericConvert.",
        72LL);
      v8.ptr_ = v11._M_dataplus._M_p;
      v8.length_ = v11._M_string_length;
      google::protobuf::util::Status::Status(&v12, INVALID_ARGUMENT, v8);
      google::protobuf::util::Status::Status(&retstr->status_);
      if ( v12.error_code_ == OK )
        goto LABEL_14;
      goto LABEL_25;
  }
};

// Line 340: range 000000000C974F50-000000000C97533E
google::protobuf::util::StatusOr<bool> *__fastcall google::protobuf::util::converter::DataPiece::StringToNumber<bool>(
        google::protobuf::util::StatusOr<bool> *retstr,
        const google::protobuf::util::converter::DataPiece *const this,
        bool (*func)(google::protobuf::StringPiece, bool *))
{
  google::protobuf::util::converter::DataPiece::$C91FAD1342DD9CB46407BD94F8849E5A anon_0; // rdi
  std::forward_iterator_tag v6; // cl
  const char *data; // rsi
  google::protobuf::stringpiece_ssize_type size; // rdx
  void *ptr; // rdi
  google::protobuf::StringPiece v11; // rdx
  google::protobuf::StringPiece v12; // rdx
  bool result; // [rsp+Fh] [rbp-159h] BYREF
  std::string v14; // [rsp+10h] [rbp-158h] BYREF
  google::protobuf::StringPiece v15; // [rsp+30h] [rbp-138h] BYREF
  char v16[16]; // [rsp+40h] [rbp-128h] BYREF
  google::protobuf::util::Status other; // [rsp+50h] [rbp-118h] BYREF
  google::protobuf::util::Status v18; // [rsp+80h] [rbp-E8h] BYREF
  google::protobuf::strings::AlphaNum v19; // [rsp+B0h] [rbp-B8h] BYREF
  google::protobuf::strings::AlphaNum v20; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v21; // [rsp+110h] [rbp-58h] BYREF
  __int64 v22; // [rsp+118h] [rbp-50h]

  anon_0 = this->_anon_0;
  if ( anon_0.str_.size_ > 0 && (*(_BYTE *)anon_0.i64_ == 32 || *(_BYTE *)(anon_0.i64_ + anon_0.str_.size_ - 1) == 32) )
  {
    v20.piece_data_ = this->_anon_0.str_.data_;
    v20.piece_size_ = anon_0.str_.size_;
    v21 = 437730954LL;
    v22 = 1LL;
    v19.piece_data_ = "\". Value: \"" + 10;
    v19.piece_size_ = 1LL;
    google::protobuf::StrCat[abi:cxx11]((__int64)&v15, &v19, &v20, (__int64)&v21);
    google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v15);
    google::protobuf::util::Status::Status(&retstr->status_);
    if ( other.error_code_ )
    {
      google::protobuf::util::Status::operator=(&retstr->status_, &other);
    }
    else
    {
      v11.ptr_ = "Status::OK is not a valid argument.";
      v11.length_ = 35LL;
      google::protobuf::util::Status::Status(&v18, INTERNAL, v11);
      google::protobuf::util::Status::operator=(&retstr->status_, &v18);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18.error_message_._M_dataplus._M_p != &v18.error_message_._anon_0 )
        operator delete(v18.error_message_._M_dataplus._M_p);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    ptr = (void *)v15.ptr_;
    if ( v15.ptr_ != v16 )
LABEL_12:
      operator delete(ptr);
  }
  else
  {
    if ( ((unsigned __int8 (__fastcall *)(google::protobuf::int64, google::protobuf::stringpiece_ssize_type, bool *))func)(
           anon_0.i64_,
           anon_0.str_.size_,
           &result) )
    {
      google::protobuf::util::Status::Status(&retstr->status_);
      google::protobuf::util::Status::operator=(&retstr->status_, &google::protobuf::util::Status::OK);
      retstr->value_ = result;
      return retstr;
    }
    data = this->_anon_0.str_.data_;
    size = this->_anon_0.str_.size_;
    v21 = 437730954LL;
    v14._M_dataplus._M_p = v14._anon_0._M_local_buf;
    v22 = 1LL;
    std::string::_M_construct<char const*>(&v14, data, &data[size], v6);
    v19.piece_data_ = "\". Value: \"" + 10;
    v20.piece_data_ = v14._M_dataplus._M_p;
    v19.piece_size_ = 1LL;
    v20.piece_size_ = v14._M_string_length;
    google::protobuf::StrCat[abi:cxx11]((__int64)&v15, &v19, &v20, (__int64)&v21);
    google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v15);
    google::protobuf::util::Status::Status(&retstr->status_);
    if ( other.error_code_ )
    {
      google::protobuf::util::Status::operator=(&retstr->status_, &other);
    }
    else
    {
      v12.ptr_ = "Status::OK is not a valid argument.";
      v12.length_ = 35LL;
      google::protobuf::util::Status::Status(&v18, INTERNAL, v12);
      google::protobuf::util::Status::operator=(&retstr->status_, &v18);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18.error_message_._M_dataplus._M_p != &v18.error_message_._anon_0 )
        operator delete(v18.error_message_._M_dataplus._M_p);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    if ( v15.ptr_ != v16 )
      operator delete((void *)v15.ptr_);
    ptr = v14._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v14._M_dataplus._M_p != &v14._anon_0 )
      goto LABEL_12;
  }
  return retstr;
};

// Line 340: range 000000000C974750-000000000C974B3E
google::protobuf::util::StatusOr<double> *__fastcall google::protobuf::util::converter::DataPiece::StringToNumber<double>(
        google::protobuf::util::StatusOr<double> *retstr,
        const google::protobuf::util::converter::DataPiece *const this,
        bool (*func)(google::protobuf::StringPiece, double *))
{
  google::protobuf::util::converter::DataPiece::$C91FAD1342DD9CB46407BD94F8849E5A anon_0; // rdi
  std::forward_iterator_tag v6; // cl
  const char *data; // rsi
  google::protobuf::stringpiece_ssize_type size; // rdx
  void *ptr; // rdi
  google::protobuf::StringPiece v11; // rdx
  google::protobuf::StringPiece v12; // rdx
  double result; // [rsp+8h] [rbp-160h] BYREF
  std::string v14; // [rsp+10h] [rbp-158h] BYREF
  google::protobuf::StringPiece v15; // [rsp+30h] [rbp-138h] BYREF
  char v16[16]; // [rsp+40h] [rbp-128h] BYREF
  google::protobuf::util::Status other; // [rsp+50h] [rbp-118h] BYREF
  google::protobuf::util::Status v18; // [rsp+80h] [rbp-E8h] BYREF
  google::protobuf::strings::AlphaNum v19; // [rsp+B0h] [rbp-B8h] BYREF
  google::protobuf::strings::AlphaNum v20; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v21; // [rsp+110h] [rbp-58h] BYREF
  __int64 v22; // [rsp+118h] [rbp-50h]

  anon_0 = this->_anon_0;
  if ( anon_0.str_.size_ > 0 && (*(_BYTE *)anon_0.i64_ == 32 || *(_BYTE *)(anon_0.i64_ + anon_0.str_.size_ - 1) == 32) )
  {
    v20.piece_data_ = this->_anon_0.str_.data_;
    v20.piece_size_ = anon_0.str_.size_;
    v21 = 437730954LL;
    v22 = 1LL;
    v19.piece_data_ = "\". Value: \"" + 10;
    v19.piece_size_ = 1LL;
    google::protobuf::StrCat[abi:cxx11]((__int64)&v15, &v19, &v20, (__int64)&v21);
    google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v15);
    google::protobuf::util::Status::Status(&retstr->status_);
    if ( other.error_code_ )
    {
      google::protobuf::util::Status::operator=(&retstr->status_, &other);
    }
    else
    {
      v11.ptr_ = "Status::OK is not a valid argument.";
      v11.length_ = 35LL;
      google::protobuf::util::Status::Status(&v18, INTERNAL, v11);
      google::protobuf::util::Status::operator=(&retstr->status_, &v18);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18.error_message_._M_dataplus._M_p != &v18.error_message_._anon_0 )
        operator delete(v18.error_message_._M_dataplus._M_p);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    ptr = (void *)v15.ptr_;
    if ( v15.ptr_ != v16 )
LABEL_12:
      operator delete(ptr);
  }
  else
  {
    if ( ((unsigned __int8 (__fastcall *)(google::protobuf::int64, google::protobuf::stringpiece_ssize_type, double *))func)(
           anon_0.i64_,
           anon_0.str_.size_,
           &result) )
    {
      google::protobuf::util::Status::Status(&retstr->status_);
      google::protobuf::util::Status::operator=(&retstr->status_, &google::protobuf::util::Status::OK);
      retstr->value_ = result;
      return retstr;
    }
    data = this->_anon_0.str_.data_;
    size = this->_anon_0.str_.size_;
    v21 = 437730954LL;
    v14._M_dataplus._M_p = v14._anon_0._M_local_buf;
    v22 = 1LL;
    std::string::_M_construct<char const*>(&v14, data, &data[size], v6);
    v19.piece_data_ = "\". Value: \"" + 10;
    v20.piece_data_ = v14._M_dataplus._M_p;
    v19.piece_size_ = 1LL;
    v20.piece_size_ = v14._M_string_length;
    google::protobuf::StrCat[abi:cxx11]((__int64)&v15, &v19, &v20, (__int64)&v21);
    google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v15);
    google::protobuf::util::Status::Status(&retstr->status_);
    if ( other.error_code_ )
    {
      google::protobuf::util::Status::operator=(&retstr->status_, &other);
    }
    else
    {
      v12.ptr_ = "Status::OK is not a valid argument.";
      v12.length_ = 35LL;
      google::protobuf::util::Status::Status(&v18, INTERNAL, v12);
      google::protobuf::util::Status::operator=(&retstr->status_, &v18);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18.error_message_._M_dataplus._M_p != &v18.error_message_._anon_0 )
        operator delete(v18.error_message_._M_dataplus._M_p);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    if ( v15.ptr_ != v16 )
      operator delete((void *)v15.ptr_);
    ptr = v14._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v14._M_dataplus._M_p != &v14._anon_0 )
      goto LABEL_12;
  }
  return retstr;
};

// Line 340: range 000000000C974B50-000000000C974F3E
google::protobuf::util::StatusOr<float> *__fastcall google::protobuf::util::converter::DataPiece::StringToNumber<float>(
        google::protobuf::util::StatusOr<float> *retstr,
        const google::protobuf::util::converter::DataPiece *const this,
        bool (*func)(google::protobuf::StringPiece, float *))
{
  google::protobuf::util::converter::DataPiece::$C91FAD1342DD9CB46407BD94F8849E5A anon_0; // rdi
  std::forward_iterator_tag v6; // cl
  const char *data; // rsi
  google::protobuf::stringpiece_ssize_type size; // rdx
  void *ptr; // rdi
  google::protobuf::StringPiece v11; // rdx
  google::protobuf::StringPiece v12; // rdx
  float result; // [rsp+Ch] [rbp-15Ch] BYREF
  std::string v14; // [rsp+10h] [rbp-158h] BYREF
  google::protobuf::StringPiece v15; // [rsp+30h] [rbp-138h] BYREF
  char v16[16]; // [rsp+40h] [rbp-128h] BYREF
  google::protobuf::util::Status other; // [rsp+50h] [rbp-118h] BYREF
  google::protobuf::util::Status v18; // [rsp+80h] [rbp-E8h] BYREF
  google::protobuf::strings::AlphaNum v19; // [rsp+B0h] [rbp-B8h] BYREF
  google::protobuf::strings::AlphaNum v20; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v21; // [rsp+110h] [rbp-58h] BYREF
  __int64 v22; // [rsp+118h] [rbp-50h]

  anon_0 = this->_anon_0;
  if ( anon_0.str_.size_ > 0 && (*(_BYTE *)anon_0.i64_ == 32 || *(_BYTE *)(anon_0.i64_ + anon_0.str_.size_ - 1) == 32) )
  {
    v20.piece_data_ = this->_anon_0.str_.data_;
    v20.piece_size_ = anon_0.str_.size_;
    v21 = 437730954LL;
    v22 = 1LL;
    v19.piece_data_ = "\". Value: \"" + 10;
    v19.piece_size_ = 1LL;
    google::protobuf::StrCat[abi:cxx11]((__int64)&v15, &v19, &v20, (__int64)&v21);
    google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v15);
    google::protobuf::util::Status::Status(&retstr->status_);
    if ( other.error_code_ )
    {
      google::protobuf::util::Status::operator=(&retstr->status_, &other);
    }
    else
    {
      v11.ptr_ = "Status::OK is not a valid argument.";
      v11.length_ = 35LL;
      google::protobuf::util::Status::Status(&v18, INTERNAL, v11);
      google::protobuf::util::Status::operator=(&retstr->status_, &v18);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18.error_message_._M_dataplus._M_p != &v18.error_message_._anon_0 )
        operator delete(v18.error_message_._M_dataplus._M_p);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    ptr = (void *)v15.ptr_;
    if ( v15.ptr_ != v16 )
LABEL_12:
      operator delete(ptr);
  }
  else
  {
    if ( ((unsigned __int8 (__fastcall *)(google::protobuf::int64, google::protobuf::stringpiece_ssize_type, float *))func)(
           anon_0.i64_,
           anon_0.str_.size_,
           &result) )
    {
      google::protobuf::util::Status::Status(&retstr->status_);
      google::protobuf::util::Status::operator=(&retstr->status_, &google::protobuf::util::Status::OK);
      retstr->value_ = result;
      return retstr;
    }
    data = this->_anon_0.str_.data_;
    size = this->_anon_0.str_.size_;
    v21 = 437730954LL;
    v14._M_dataplus._M_p = v14._anon_0._M_local_buf;
    v22 = 1LL;
    std::string::_M_construct<char const*>(&v14, data, &data[size], v6);
    v19.piece_data_ = "\". Value: \"" + 10;
    v20.piece_data_ = v14._M_dataplus._M_p;
    v19.piece_size_ = 1LL;
    v20.piece_size_ = v14._M_string_length;
    google::protobuf::StrCat[abi:cxx11]((__int64)&v15, &v19, &v20, (__int64)&v21);
    google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v15);
    google::protobuf::util::Status::Status(&retstr->status_);
    if ( other.error_code_ )
    {
      google::protobuf::util::Status::operator=(&retstr->status_, &other);
    }
    else
    {
      v12.ptr_ = "Status::OK is not a valid argument.";
      v12.length_ = 35LL;
      google::protobuf::util::Status::Status(&v18, INTERNAL, v12);
      google::protobuf::util::Status::operator=(&retstr->status_, &v18);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18.error_message_._M_dataplus._M_p != &v18.error_message_._anon_0 )
        operator delete(v18.error_message_._M_dataplus._M_p);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    if ( v15.ptr_ != v16 )
      operator delete((void *)v15.ptr_);
    ptr = v14._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v14._M_dataplus._M_p != &v14._anon_0 )
      goto LABEL_12;
  }
  return retstr;
};

// Line 340: range 000000000C973750-000000000C973B3E
google::protobuf::util::StatusOr<int> *__fastcall google::protobuf::util::converter::DataPiece::StringToNumber<int>(
        google::protobuf::util::StatusOr<int> *retstr,
        const google::protobuf::util::converter::DataPiece *const this,
        bool (*func)(google::protobuf::StringPiece, int *))
{
  google::protobuf::util::converter::DataPiece::$C91FAD1342DD9CB46407BD94F8849E5A anon_0; // rdi
  std::forward_iterator_tag v6; // cl
  const char *data; // rsi
  google::protobuf::stringpiece_ssize_type size; // rdx
  void *ptr; // rdi
  google::protobuf::StringPiece v11; // rdx
  google::protobuf::StringPiece v12; // rdx
  int result; // [rsp+Ch] [rbp-15Ch] BYREF
  std::string v14; // [rsp+10h] [rbp-158h] BYREF
  google::protobuf::StringPiece v15; // [rsp+30h] [rbp-138h] BYREF
  char v16[16]; // [rsp+40h] [rbp-128h] BYREF
  google::protobuf::util::Status other; // [rsp+50h] [rbp-118h] BYREF
  google::protobuf::util::Status v18; // [rsp+80h] [rbp-E8h] BYREF
  google::protobuf::strings::AlphaNum v19; // [rsp+B0h] [rbp-B8h] BYREF
  google::protobuf::strings::AlphaNum v20; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v21; // [rsp+110h] [rbp-58h] BYREF
  __int64 v22; // [rsp+118h] [rbp-50h]

  anon_0 = this->_anon_0;
  if ( anon_0.str_.size_ > 0 && (*(_BYTE *)anon_0.i64_ == 32 || *(_BYTE *)(anon_0.i64_ + anon_0.str_.size_ - 1) == 32) )
  {
    v20.piece_data_ = this->_anon_0.str_.data_;
    v20.piece_size_ = anon_0.str_.size_;
    v21 = 437730954LL;
    v22 = 1LL;
    v19.piece_data_ = "\". Value: \"" + 10;
    v19.piece_size_ = 1LL;
    google::protobuf::StrCat[abi:cxx11]((__int64)&v15, &v19, &v20, (__int64)&v21);
    google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v15);
    google::protobuf::util::Status::Status(&retstr->status_);
    if ( other.error_code_ )
    {
      google::protobuf::util::Status::operator=(&retstr->status_, &other);
    }
    else
    {
      v11.ptr_ = "Status::OK is not a valid argument.";
      v11.length_ = 35LL;
      google::protobuf::util::Status::Status(&v18, INTERNAL, v11);
      google::protobuf::util::Status::operator=(&retstr->status_, &v18);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18.error_message_._M_dataplus._M_p != &v18.error_message_._anon_0 )
        operator delete(v18.error_message_._M_dataplus._M_p);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    ptr = (void *)v15.ptr_;
    if ( v15.ptr_ != v16 )
LABEL_12:
      operator delete(ptr);
  }
  else
  {
    if ( ((unsigned __int8 (__fastcall *)(google::protobuf::int64, google::protobuf::stringpiece_ssize_type, int *))func)(
           anon_0.i64_,
           anon_0.str_.size_,
           &result) )
    {
      google::protobuf::util::Status::Status(&retstr->status_);
      google::protobuf::util::Status::operator=(&retstr->status_, &google::protobuf::util::Status::OK);
      retstr->value_ = result;
      return retstr;
    }
    data = this->_anon_0.str_.data_;
    size = this->_anon_0.str_.size_;
    v21 = 437730954LL;
    v14._M_dataplus._M_p = v14._anon_0._M_local_buf;
    v22 = 1LL;
    std::string::_M_construct<char const*>(&v14, data, &data[size], v6);
    v19.piece_data_ = "\". Value: \"" + 10;
    v20.piece_data_ = v14._M_dataplus._M_p;
    v19.piece_size_ = 1LL;
    v20.piece_size_ = v14._M_string_length;
    google::protobuf::StrCat[abi:cxx11]((__int64)&v15, &v19, &v20, (__int64)&v21);
    google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v15);
    google::protobuf::util::Status::Status(&retstr->status_);
    if ( other.error_code_ )
    {
      google::protobuf::util::Status::operator=(&retstr->status_, &other);
    }
    else
    {
      v12.ptr_ = "Status::OK is not a valid argument.";
      v12.length_ = 35LL;
      google::protobuf::util::Status::Status(&v18, INTERNAL, v12);
      google::protobuf::util::Status::operator=(&retstr->status_, &v18);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18.error_message_._M_dataplus._M_p != &v18.error_message_._anon_0 )
        operator delete(v18.error_message_._M_dataplus._M_p);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    if ( v15.ptr_ != v16 )
      operator delete((void *)v15.ptr_);
    ptr = v14._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v14._M_dataplus._M_p != &v14._anon_0 )
      goto LABEL_12;
  }
  return retstr;
};

// Line 340: range 000000000C973F50-000000000C97433E
google::protobuf::util::StatusOr<long int> *__fastcall google::protobuf::util::converter::DataPiece::StringToNumber<long>(
        google::protobuf::util::StatusOr<long int> *retstr,
        const google::protobuf::util::converter::DataPiece *const this,
        bool (*func)(google::protobuf::StringPiece, __int64 *))
{
  google::protobuf::util::converter::DataPiece::$C91FAD1342DD9CB46407BD94F8849E5A anon_0; // rdi
  std::forward_iterator_tag v6; // cl
  const char *data; // rsi
  google::protobuf::stringpiece_ssize_type size; // rdx
  void *ptr; // rdi
  google::protobuf::StringPiece v11; // rdx
  google::protobuf::StringPiece v12; // rdx
  __int64 result; // [rsp+8h] [rbp-160h] BYREF
  std::string v14; // [rsp+10h] [rbp-158h] BYREF
  google::protobuf::StringPiece v15; // [rsp+30h] [rbp-138h] BYREF
  char v16[16]; // [rsp+40h] [rbp-128h] BYREF
  google::protobuf::util::Status other; // [rsp+50h] [rbp-118h] BYREF
  google::protobuf::util::Status v18; // [rsp+80h] [rbp-E8h] BYREF
  google::protobuf::strings::AlphaNum v19; // [rsp+B0h] [rbp-B8h] BYREF
  google::protobuf::strings::AlphaNum v20; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v21; // [rsp+110h] [rbp-58h] BYREF
  __int64 v22; // [rsp+118h] [rbp-50h]

  anon_0 = this->_anon_0;
  if ( anon_0.str_.size_ > 0 && (*(_BYTE *)anon_0.i64_ == 32 || *(_BYTE *)(anon_0.i64_ + anon_0.str_.size_ - 1) == 32) )
  {
    v20.piece_data_ = this->_anon_0.str_.data_;
    v20.piece_size_ = anon_0.str_.size_;
    v21 = 437730954LL;
    v22 = 1LL;
    v19.piece_data_ = "\". Value: \"" + 10;
    v19.piece_size_ = 1LL;
    google::protobuf::StrCat[abi:cxx11]((__int64)&v15, &v19, &v20, (__int64)&v21);
    google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v15);
    google::protobuf::util::Status::Status(&retstr->status_);
    if ( other.error_code_ )
    {
      google::protobuf::util::Status::operator=(&retstr->status_, &other);
    }
    else
    {
      v11.ptr_ = "Status::OK is not a valid argument.";
      v11.length_ = 35LL;
      google::protobuf::util::Status::Status(&v18, INTERNAL, v11);
      google::protobuf::util::Status::operator=(&retstr->status_, &v18);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18.error_message_._M_dataplus._M_p != &v18.error_message_._anon_0 )
        operator delete(v18.error_message_._M_dataplus._M_p);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    ptr = (void *)v15.ptr_;
    if ( v15.ptr_ != v16 )
LABEL_12:
      operator delete(ptr);
  }
  else
  {
    if ( ((unsigned __int8 (__fastcall *)(google::protobuf::int64, google::protobuf::stringpiece_ssize_type, __int64 *))func)(
           anon_0.i64_,
           anon_0.str_.size_,
           &result) )
    {
      google::protobuf::util::Status::Status(&retstr->status_);
      google::protobuf::util::Status::operator=(&retstr->status_, &google::protobuf::util::Status::OK);
      retstr->value_ = result;
      return retstr;
    }
    data = this->_anon_0.str_.data_;
    size = this->_anon_0.str_.size_;
    v21 = 437730954LL;
    v14._M_dataplus._M_p = v14._anon_0._M_local_buf;
    v22 = 1LL;
    std::string::_M_construct<char const*>(&v14, data, &data[size], v6);
    v19.piece_data_ = "\". Value: \"" + 10;
    v20.piece_data_ = v14._M_dataplus._M_p;
    v19.piece_size_ = 1LL;
    v20.piece_size_ = v14._M_string_length;
    google::protobuf::StrCat[abi:cxx11]((__int64)&v15, &v19, &v20, (__int64)&v21);
    google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v15);
    google::protobuf::util::Status::Status(&retstr->status_);
    if ( other.error_code_ )
    {
      google::protobuf::util::Status::operator=(&retstr->status_, &other);
    }
    else
    {
      v12.ptr_ = "Status::OK is not a valid argument.";
      v12.length_ = 35LL;
      google::protobuf::util::Status::Status(&v18, INTERNAL, v12);
      google::protobuf::util::Status::operator=(&retstr->status_, &v18);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18.error_message_._M_dataplus._M_p != &v18.error_message_._anon_0 )
        operator delete(v18.error_message_._M_dataplus._M_p);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    if ( v15.ptr_ != v16 )
      operator delete((void *)v15.ptr_);
    ptr = v14._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v14._M_dataplus._M_p != &v14._anon_0 )
      goto LABEL_12;
  }
  return retstr;
};

// Line 340: range 000000000C974350-000000000C97473E
google::protobuf::util::StatusOr<long unsigned int> *__fastcall google::protobuf::util::converter::DataPiece::StringToNumber<unsigned long>(
        google::protobuf::util::StatusOr<long unsigned int> *retstr,
        const google::protobuf::util::converter::DataPiece *const this,
        bool (*func)(google::protobuf::StringPiece, unsigned __int64 *))
{
  google::protobuf::util::converter::DataPiece::$C91FAD1342DD9CB46407BD94F8849E5A anon_0; // rdi
  std::forward_iterator_tag v6; // cl
  const char *data; // rsi
  google::protobuf::stringpiece_ssize_type size; // rdx
  void *ptr; // rdi
  google::protobuf::StringPiece v11; // rdx
  google::protobuf::StringPiece v12; // rdx
  unsigned __int64 result; // [rsp+8h] [rbp-160h] BYREF
  std::string v14; // [rsp+10h] [rbp-158h] BYREF
  google::protobuf::StringPiece v15; // [rsp+30h] [rbp-138h] BYREF
  char v16[16]; // [rsp+40h] [rbp-128h] BYREF
  google::protobuf::util::Status other; // [rsp+50h] [rbp-118h] BYREF
  google::protobuf::util::Status v18; // [rsp+80h] [rbp-E8h] BYREF
  google::protobuf::strings::AlphaNum v19; // [rsp+B0h] [rbp-B8h] BYREF
  google::protobuf::strings::AlphaNum v20; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v21; // [rsp+110h] [rbp-58h] BYREF
  __int64 v22; // [rsp+118h] [rbp-50h]

  anon_0 = this->_anon_0;
  if ( anon_0.str_.size_ > 0 && (*(_BYTE *)anon_0.i64_ == 32 || *(_BYTE *)(anon_0.i64_ + anon_0.str_.size_ - 1) == 32) )
  {
    v20.piece_data_ = this->_anon_0.str_.data_;
    v20.piece_size_ = anon_0.str_.size_;
    v21 = 437730954LL;
    v22 = 1LL;
    v19.piece_data_ = "\". Value: \"" + 10;
    v19.piece_size_ = 1LL;
    google::protobuf::StrCat[abi:cxx11]((__int64)&v15, &v19, &v20, (__int64)&v21);
    google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v15);
    google::protobuf::util::Status::Status(&retstr->status_);
    if ( other.error_code_ )
    {
      google::protobuf::util::Status::operator=(&retstr->status_, &other);
    }
    else
    {
      v11.ptr_ = "Status::OK is not a valid argument.";
      v11.length_ = 35LL;
      google::protobuf::util::Status::Status(&v18, INTERNAL, v11);
      google::protobuf::util::Status::operator=(&retstr->status_, &v18);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18.error_message_._M_dataplus._M_p != &v18.error_message_._anon_0 )
        operator delete(v18.error_message_._M_dataplus._M_p);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    ptr = (void *)v15.ptr_;
    if ( v15.ptr_ != v16 )
LABEL_12:
      operator delete(ptr);
  }
  else
  {
    if ( ((unsigned __int8 (__fastcall *)(google::protobuf::int64, google::protobuf::stringpiece_ssize_type, unsigned __int64 *))func)(
           anon_0.i64_,
           anon_0.str_.size_,
           &result) )
    {
      google::protobuf::util::Status::Status(&retstr->status_);
      google::protobuf::util::Status::operator=(&retstr->status_, &google::protobuf::util::Status::OK);
      retstr->value_ = result;
      return retstr;
    }
    data = this->_anon_0.str_.data_;
    size = this->_anon_0.str_.size_;
    v21 = 437730954LL;
    v14._M_dataplus._M_p = v14._anon_0._M_local_buf;
    v22 = 1LL;
    std::string::_M_construct<char const*>(&v14, data, &data[size], v6);
    v19.piece_data_ = "\". Value: \"" + 10;
    v20.piece_data_ = v14._M_dataplus._M_p;
    v19.piece_size_ = 1LL;
    v20.piece_size_ = v14._M_string_length;
    google::protobuf::StrCat[abi:cxx11]((__int64)&v15, &v19, &v20, (__int64)&v21);
    google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v15);
    google::protobuf::util::Status::Status(&retstr->status_);
    if ( other.error_code_ )
    {
      google::protobuf::util::Status::operator=(&retstr->status_, &other);
    }
    else
    {
      v12.ptr_ = "Status::OK is not a valid argument.";
      v12.length_ = 35LL;
      google::protobuf::util::Status::Status(&v18, INTERNAL, v12);
      google::protobuf::util::Status::operator=(&retstr->status_, &v18);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18.error_message_._M_dataplus._M_p != &v18.error_message_._anon_0 )
        operator delete(v18.error_message_._M_dataplus._M_p);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    if ( v15.ptr_ != v16 )
      operator delete((void *)v15.ptr_);
    ptr = v14._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v14._M_dataplus._M_p != &v14._anon_0 )
      goto LABEL_12;
  }
  return retstr;
};

// Line 340: range 000000000C973B50-000000000C973F3E
google::protobuf::util::StatusOr<unsigned int> *__fastcall google::protobuf::util::converter::DataPiece::StringToNumber<unsigned int>(
        google::protobuf::util::StatusOr<unsigned int> *retstr,
        const google::protobuf::util::converter::DataPiece *const this,
        bool (*func)(google::protobuf::StringPiece, unsigned int *))
{
  google::protobuf::util::converter::DataPiece::$C91FAD1342DD9CB46407BD94F8849E5A anon_0; // rdi
  std::forward_iterator_tag v6; // cl
  const char *data; // rsi
  google::protobuf::stringpiece_ssize_type size; // rdx
  void *ptr; // rdi
  google::protobuf::StringPiece v11; // rdx
  google::protobuf::StringPiece v12; // rdx
  unsigned int result; // [rsp+Ch] [rbp-15Ch] BYREF
  std::string v14; // [rsp+10h] [rbp-158h] BYREF
  google::protobuf::StringPiece v15; // [rsp+30h] [rbp-138h] BYREF
  char v16[16]; // [rsp+40h] [rbp-128h] BYREF
  google::protobuf::util::Status other; // [rsp+50h] [rbp-118h] BYREF
  google::protobuf::util::Status v18; // [rsp+80h] [rbp-E8h] BYREF
  google::protobuf::strings::AlphaNum v19; // [rsp+B0h] [rbp-B8h] BYREF
  google::protobuf::strings::AlphaNum v20; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v21; // [rsp+110h] [rbp-58h] BYREF
  __int64 v22; // [rsp+118h] [rbp-50h]

  anon_0 = this->_anon_0;
  if ( anon_0.str_.size_ > 0 && (*(_BYTE *)anon_0.i64_ == 32 || *(_BYTE *)(anon_0.i64_ + anon_0.str_.size_ - 1) == 32) )
  {
    v20.piece_data_ = this->_anon_0.str_.data_;
    v20.piece_size_ = anon_0.str_.size_;
    v21 = 437730954LL;
    v22 = 1LL;
    v19.piece_data_ = "\". Value: \"" + 10;
    v19.piece_size_ = 1LL;
    google::protobuf::StrCat[abi:cxx11]((__int64)&v15, &v19, &v20, (__int64)&v21);
    google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v15);
    google::protobuf::util::Status::Status(&retstr->status_);
    if ( other.error_code_ )
    {
      google::protobuf::util::Status::operator=(&retstr->status_, &other);
    }
    else
    {
      v11.ptr_ = "Status::OK is not a valid argument.";
      v11.length_ = 35LL;
      google::protobuf::util::Status::Status(&v18, INTERNAL, v11);
      google::protobuf::util::Status::operator=(&retstr->status_, &v18);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18.error_message_._M_dataplus._M_p != &v18.error_message_._anon_0 )
        operator delete(v18.error_message_._M_dataplus._M_p);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    ptr = (void *)v15.ptr_;
    if ( v15.ptr_ != v16 )
LABEL_12:
      operator delete(ptr);
  }
  else
  {
    if ( ((unsigned __int8 (__fastcall *)(google::protobuf::int64, google::protobuf::stringpiece_ssize_type, unsigned int *))func)(
           anon_0.i64_,
           anon_0.str_.size_,
           &result) )
    {
      google::protobuf::util::Status::Status(&retstr->status_);
      google::protobuf::util::Status::operator=(&retstr->status_, &google::protobuf::util::Status::OK);
      retstr->value_ = result;
      return retstr;
    }
    data = this->_anon_0.str_.data_;
    size = this->_anon_0.str_.size_;
    v21 = 437730954LL;
    v14._M_dataplus._M_p = v14._anon_0._M_local_buf;
    v22 = 1LL;
    std::string::_M_construct<char const*>(&v14, data, &data[size], v6);
    v19.piece_data_ = "\". Value: \"" + 10;
    v20.piece_data_ = v14._M_dataplus._M_p;
    v19.piece_size_ = 1LL;
    v20.piece_size_ = v14._M_string_length;
    google::protobuf::StrCat[abi:cxx11]((__int64)&v15, &v19, &v20, (__int64)&v21);
    google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v15);
    google::protobuf::util::Status::Status(&retstr->status_);
    if ( other.error_code_ )
    {
      google::protobuf::util::Status::operator=(&retstr->status_, &other);
    }
    else
    {
      v12.ptr_ = "Status::OK is not a valid argument.";
      v12.length_ = 35LL;
      google::protobuf::util::Status::Status(&v18, INTERNAL, v12);
      google::protobuf::util::Status::operator=(&retstr->status_, &v18);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18.error_message_._M_dataplus._M_p != &v18.error_message_._anon_0 )
        operator delete(v18.error_message_._M_dataplus._M_p);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    if ( v15.ptr_ != v16 )
      operator delete((void *)v15.ptr_);
    ptr = v14._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v14._M_dataplus._M_p != &v14._anon_0 )
      goto LABEL_12;
  }
  return retstr;
};

// Line 349: range 000000000C971CD0-000000000C971E9D
bool __fastcall google::protobuf::util::converter::DataPiece::DecodeBase64(
        __int64 a1,
        const char *a2,
        google::protobuf::stringpiece_ssize_type a3,
        __int64 a4)
{
  google::protobuf::StringPiece v5; // rdi
  bool result; // al
  google::protobuf::StringPiece v8; // rdi
  google::protobuf::stringpiece_ssize_type length; // rdx
  google::protobuf::StringPiece v10; // rax
  char *ptr; // rsi
  std::string *M_p; // r12
  int v13; // esi
  const unsigned __int8 *v14; // rdi
  bool v15; // [rsp+Fh] [rbp-59h]
  google::protobuf::StringPiece src; // [rsp+10h] [rbp-58h] BYREF
  google::protobuf::StringPiece si128; // [rsp+20h] [rbp-48h] BYREF
  std::string dest; // [rsp+30h] [rbp-38h] BYREF

  v5.ptr_ = a2;
  v5.length_ = a3;
  src.length_ = a3;
  src.ptr_ = v5.ptr_;
  if ( google::protobuf::WebSafeBase64Unescape(v5, (std::string *)a4) )
  {
    if ( !*(_BYTE *)(a1 + 32) )
      return 1;
    v8 = *(google::protobuf::StringPiece *)a4;
    dest._M_dataplus._M_p = dest._anon_0._M_local_buf;
    dest._M_string_length = 0LL;
    dest._anon_0._M_local_buf[0] = 0;
    google::protobuf::WebSafeBase64Escape(v8, &dest);
    length = src.length_;
    si128 = (google::protobuf::StringPiece)_mm_load_si128((const __m128i *)&src);
    if ( src.length_ > 0 && src.ptr_[src.length_ - 1] == 61 )
      length = google::protobuf::StringPiece::find_last_not_of(&src, 61, google::protobuf::StringPiece::npos) + 1;
  }
  else
  {
    result = google::protobuf::Base64Unescape(src, (std::string *)a4);
    if ( !result )
      return result;
    if ( !*(_BYTE *)(a1 + 32) )
      return 1;
    v13 = *(_DWORD *)(a4 + 8);
    v14 = *(const unsigned __int8 **)a4;
    dest._M_dataplus._M_p = dest._anon_0._M_local_buf;
    dest._M_string_length = 0LL;
    dest._anon_0._M_local_buf[0] = 0;
    google::protobuf::Base64Escape(v14, v13, &dest, 0);
    length = src.length_;
    si128 = (google::protobuf::StringPiece)_mm_load_si128((const __m128i *)&src);
    if ( src.length_ > 0 && src.ptr_[src.length_ - 1] == 61 )
      length = google::protobuf::StringPiece::find_last_not_of(&src, 61, google::protobuf::StringPiece::npos) + 1;
  }
  v10 = google::protobuf::StringPiece::substr(&si128, 0LL, length);
  ptr = (char *)v10.ptr_;
  M_p = (std::string *)dest._M_dataplus._M_p;
  result = 0;
  if ( dest._M_string_length == v10.length_ )
  {
    result = dest._M_dataplus._M_p == ptr || (signed __int64)dest._M_string_length <= 0;
    if ( !result )
      result = memcmp(dest._M_dataplus._M_p, ptr, dest._M_string_length) == 0;
  }
  if ( M_p != (std::string *)&dest._anon_0 )
  {
    v15 = result;
    operator delete(M_p);
    return v15;
  }
  return result;
};

// Line 383: range 000000000C971EB0-000000000C971ECE
void __fastcall google::protobuf::util::converter::DataPiece::InternalCopy(
        google::protobuf::util::converter::DataPiece *const this,
        const google::protobuf::util::converter::DataPiece *other)
{
  google::protobuf::util::converter::DataPiece::Type type; // eax
  bool use_strict_base64_decoding; // dl

  type = other->type_;
  use_strict_base64_decoding = other->use_strict_base64_decoding_;
  this->type_ = type;
  this->use_strict_base64_decoding_ = use_strict_base64_decoding;
  if ( (unsigned int)(type - 1) <= 0xA )
    this->_anon_0 = (google::protobuf::util::converter::DataPiece::$C91FAD1342DD9CB46407BD94F8849E5A)_mm_loadu_si128((const __m128i *)&other->_anon_0);
};

// Line 406: range 000000000C747420-000000000C747441
void __cdecl GLOBAL__sub_I__ZNK6google8protobuf4util9converter9DataPiece7ToInt32Ev()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
