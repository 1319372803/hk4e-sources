// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/io/strtod.cc

// Line 65: range 000000000C72C2B9-000000000C72C2C4
void __fastcall __noreturn google::protobuf::io::NoLocaleStrtod()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::LogMessage_0 *v1; // r13

  google::protobuf::internal::LogMessage::~LogMessage(v1);
  _Unwind_Resume(v0);
};

// Line 78: range 000000000C8DB830-000000000C8DBB26
double __fastcall google::protobuf::io::NoLocaleStrtod(google::protobuf::io *this, char *a2, char **a3)
{
  double result; // xmm0_8
  char *v4; // r12
  int v5; // r15d
  size_t v6; // rax
  const char *v7; // r12
  size_t v8; // rdx
  __int64 v9; // r12
  signed __int64 v10; // r12
  int v11; // eax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  google::protobuf::internal::LogFinisher v15; // [rsp+17h] [rbp-91h] BYREF
  char *endptr; // [rsp+18h] [rbp-90h] BYREF
  char s[8]; // [rsp+20h] [rbp-88h] BYREF
  google::protobuf::internal::LogMessage_0 nptr[2]; // [rsp+30h] [rbp-78h] BYREF

  result = strtod((const char *)this, &endptr);
  v4 = endptr;
  if ( a2 )
    *(_QWORD *)a2 = endptr;
  if ( *v4 == 46 )
  {
    v5 = sprintf(s, "%.1f", 1.5);
    if ( s[0] == 49 )
    {
      if ( s[v5 - 1] == 53 )
        goto LABEL_7;
    }
    else
    {
      google::protobuf::internal::LogMessage::LogMessage(nptr, LOGLEVEL_FATAL_0, "google/protobuf/io/strtod.cc", 63);
      v14 = google::protobuf::internal::LogMessage::operator<<(nptr, "CHECK failed: (temp[0]) == ('1'): ");
      google::protobuf::internal::LogFinisher::operator=(&v15, v14);
      google::protobuf::internal::LogMessage::~LogMessage(nptr);
      if ( s[v5 - 1] == 53 )
      {
LABEL_7:
        if ( v5 <= 6 )
        {
LABEL_8:
          LOBYTE(nptr[0].line_) = 0;
          *(_QWORD *)&nptr[0].level_ = &nptr[0].line_;
          nptr[0].filename_ = 0LL;
          v6 = strlen((const char *)this);
          std::string::reserve(nptr, v5 + v6 - 3);
          std::string::_M_replace(nptr, nptr[0].filename_, 0LL, (const char *)this, v4 - (char *)this);
          if ( v5 - 2 > 0x3FFFFFFFFFFFFFFFLL - (unsigned __int64)nptr[0].filename_ )
            std::__throw_length_error("basic_string::append");
          std::string::_M_append(nptr, &s[1]);
          v7 = v4 + 1;
          v8 = strlen(v7);
          if ( v8 > 0x3FFFFFFFFFFFFFFFLL - (unsigned __int64)nptr[0].filename_ )
            std::__throw_length_error("basic_string::append");
          std::string::_M_append(nptr, v7);
          v9 = *(_QWORD *)&nptr[0].level_;
          result = strtod(*(const char **)&nptr[0].level_, (char **)s);
          v10 = *(_QWORD *)s - v9;
          if ( v10 > endptr - (char *)this && a2 )
          {
            v11 = strlen((const char *)this);
            *(_QWORD *)a2 = (char *)this + v10 - (LODWORD(nptr[0].filename_) - v11);
          }
          if ( *(google::protobuf::internal::LogMessage_0 **)&nptr[0].level_ != (google::protobuf::internal::LogMessage_0 *)&nptr[0].line_ )
            operator delete(*(void **)&nptr[0].level_);
          return result;
        }
LABEL_16:
        google::protobuf::internal::LogMessage::LogMessage(nptr, LOGLEVEL_FATAL_0, "google/protobuf/io/strtod.cc", 65);
        v13 = google::protobuf::internal::LogMessage::operator<<(nptr, "CHECK failed: (size) <= (6): ");
        google::protobuf::internal::LogFinisher::operator=(&v15, v13);
        google::protobuf::internal::LogMessage::~LogMessage(nptr);
        goto LABEL_8;
      }
    }
    google::protobuf::internal::LogMessage::LogMessage(nptr, LOGLEVEL_FATAL_0, "google/protobuf/io/strtod.cc", 64);
    v12 = google::protobuf::internal::LogMessage::operator<<(nptr, "CHECK failed: (temp[size-1]) == ('5'): ");
    google::protobuf::internal::LogFinisher::operator=(&v15, v12);
    google::protobuf::internal::LogMessage::~LogMessage(nptr);
    if ( v5 <= 6 )
      goto LABEL_8;
    goto LABEL_16;
  }
  return result;
};

// Line 114: range 000000000C8DBB30-000000000C8DBB6B
float __fastcall google::protobuf::io::SafeDoubleToFloat(double a1, double value)
{
  int v2; // xmm1_4

  v2 = 2139095040;
  if ( a1 > 3.402823466385289e38 )
    return *(float *)&v2;
  v2 = -8388608;
  if ( a1 < -3.402823466385289e38 )
    return *(float *)&v2;
  return a1;
};

// Line 125: range 000000000C746B80-000000000C746BA1
void __cdecl GLOBAL__sub_I__ZN6google8protobuf2io14NoLocaleStrtodEPKcPPc()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
