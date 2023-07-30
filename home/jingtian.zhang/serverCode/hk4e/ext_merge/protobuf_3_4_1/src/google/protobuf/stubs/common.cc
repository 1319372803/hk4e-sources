// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/stubs/common.cc

// Line 65: range 000000000C894C70-000000000C89503A
void __fastcall google::protobuf::internal::VerifyVersion(
        google::protobuf::internal *this,
        int a2,
        char *s,
        const char *a4)
{
  size_t v5; // rdx
  size_t v6; // rdx
  std::string v7; // [rsp+0h] [rbp-A8h] BYREF
  std::string v8; // [rsp+20h] [rbp-88h] BYREF
  google::protobuf::internal::LogMessage v9; // [rsp+40h] [rbp-68h] BYREF

  if ( a2 <= 3004000 )
    goto LABEL_2;
  v9.level_ = LOGLEVEL_FATAL;
  v9.filename_ = "google/protobuf/stubs/common.cc";
  v9.line_ = 68;
  v9.message_._M_dataplus._M_p = v9.message_._anon_0._M_local_buf;
  v9.message_._M_string_length = 0LL;
  v9.message_._anon_0._M_local_buf[0] = 0;
  std::string::_M_append(&v9.message_, "This program requires version ", 30LL, a4);
  google::protobuf::internal::VersionString[abi:cxx11](&v7, a2);
  std::string::_M_append(&v9.message_, v7._M_dataplus._M_p, v7._M_string_length);
  if ( 0x3FFFFFFFFFFFFFFFLL - v9.message_._M_string_length <= 0x45 )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(&v9.message_, " of the Protocol Buffer runtime library, but the installed version is ", 70LL);
  google::protobuf::internal::VersionString[abi:cxx11](&v8, 3004000);
  std::string::_M_append(&v9.message_, v8._M_dataplus._M_p, v8._M_string_length);
  if ( 0x3FFFFFFFFFFFFFFFLL - v9.message_._M_string_length <= 0xCC )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(
    &v9.message_,
    ".  Please update your library.  If you compiled the program yourself, make sure that your headers are from the same "
    "version of Protocol Buffers as your link-time library.  (Version verification failed in \"",
    205LL);
  v5 = strlen(s);
  if ( v5 > 0x3FFFFFFFFFFFFFFFLL - v9.message_._M_string_length )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(&v9.message_, s);
  if ( 0x3FFFFFFFFFFFFFFFLL - v9.message_._M_string_length <= 2 )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(&v9.message_, "\".)", 3LL);
  google::protobuf::internal::LogMessage::Finish(&v9);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v8._M_dataplus._M_p != &v8._anon_0 )
    operator delete(v8._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v7._M_dataplus._M_p != &v7._anon_0 )
    operator delete(v7._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v9.message_._M_dataplus._M_p == &v9.message_._anon_0 )
  {
LABEL_2:
    if ( (int)this > 3003999 )
      return;
  }
  else
  {
    operator delete(v9.message_._M_dataplus._M_p);
    if ( (int)this > 3003999 )
      return;
  }
  v9.level_ = LOGLEVEL_FATAL;
  v9.filename_ = "google/protobuf/stubs/common.cc";
  v9.line_ = 79;
  v9.message_._M_dataplus._M_p = v9.message_._anon_0._M_local_buf;
  v9.message_._M_string_length = 0LL;
  v9.message_._anon_0._M_local_buf[0] = 0;
  std::string::_M_append(&v9.message_, "This program was compiled against version ", 42LL, a4);
  google::protobuf::internal::VersionString[abi:cxx11](&v7, (int)this);
  std::string::_M_append(&v9.message_, v7._M_dataplus._M_p, v7._M_string_length);
  if ( 0x3FFFFFFFFFFFFFFFLL - v9.message_._M_string_length <= 0x5C )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(
    &v9.message_,
    " of the Protocol Buffer runtime library, which is not compatible with the installed version (",
    93LL);
  google::protobuf::internal::VersionString[abi:cxx11](&v8, 3004000);
  std::string::_M_append(&v9.message_, v8._M_dataplus._M_p, v8._M_string_length);
  if ( 0x3FFFFFFFFFFFFFFFLL - v9.message_._M_string_length <= 0xDB )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(
    &v9.message_,
    ").  Contact the program author for an update.  If you compiled the program yourself, make sure that your headers are"
    " from the same version of Protocol Buffers as your link-time library.  (Version verification failed in \"",
    220LL);
  v6 = strlen(s);
  if ( v6 > 0x3FFFFFFFFFFFFFFFLL - v9.message_._M_string_length )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(&v9.message_, s);
  if ( 0x3FFFFFFFFFFFFFFFLL - v9.message_._M_string_length <= 2 )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(&v9.message_, "\".)", 3LL);
  google::protobuf::internal::LogMessage::Finish(&v9);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v8._M_dataplus._M_p != &v8._anon_0 )
    operator delete(v8._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v7._M_dataplus._M_p != &v7._anon_0 )
    operator delete(v7._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v9.message_._M_dataplus._M_p != &v9.message_._anon_0 )
    operator delete(v9.message_._M_dataplus._M_p);
};

// Line 91: range 000000000C894BA0-000000000C894C66
std::string *__fastcall google::protobuf::internal::VersionString[abi:cxx11](std::string *retstr, int version)
{
  char *v2; // rdx
  int v3; // ecx
  unsigned int v4; // eax
  bool v5; // zf
  std::forward_iterator_tag v6; // cl
  char buffer[128]; // [rsp+0h] [rbp-88h] BYREF

  snprintf(
    buffer,
    0x80uLL,
    "%d.%d.%d",
    (unsigned int)(version / 1000000),
    (unsigned int)(version / 1000 % 1000),
    (unsigned int)(version % 1000));
  buffer[127] = 0;
  v2 = buffer;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  do
  {
    v3 = *(_DWORD *)v2;
    v2 += 4;
    v4 = ~v3 & (v3 - 16843009) & 0x80808080;
  }
  while ( !v4 );
  v5 = (~v3 & (v3 - 16843009) & 0x8080) == 0;
  if ( (~v3 & (v3 - 16843009) & 0x8080) == 0 )
    LOBYTE(v4) = (~v3 & (v3 - 16843009) & 0x80808080) >> 16;
  v6.gap0[0] = (_BYTE)v2 + 2;
  if ( v5 )
    v2 += 2;
  std::string::_M_construct<char const*>(retstr, buffer, &v2[-__CFADD__((_BYTE)v4, (_BYTE)v4) - 3], v6);
  return retstr;
};

// Line 158: range 000000000C893930-000000000C893970
void __fastcall google::protobuf::internal::DefaultLogHandler(
        google::protobuf::LogLevel_0 level,
        const char *filename,
        int line,
        const std::string *message)
{
  if ( level >= LOGLEVEL_INFO_0 )
  {
    fprintf(
      stderr,
      "[libprotobuf %s %s:%d] %s\n",
      google::protobuf::internal::DefaultLogHandler(google::protobuf::LogLevel,char const*,int,std::string const&)::level_names[level],
      filename,
      (unsigned int)line,
      message->_M_dataplus._M_p);
    fflush(stderr);
  }
};

// Line 174: range 000000000C893900-000000000C893910
void __fastcall google::protobuf::internal::NullLogHandler(
        google::protobuf::LogLevel_0 a1,
        const char *a2,
        int a3,
        const std::string *a4)
{
  ;
};

// Line 182: range 000000000C894210-000000000C89423E
void __cdecl google::protobuf::internal::DeleteLogSilencerCount()
{
  google::protobuf::internal::Mutex *v0; // rbp

  v0 = google::protobuf::internal::log_silencer_count_mutex_;
  if ( google::protobuf::internal::log_silencer_count_mutex_ )
  {
    google::protobuf::internal::Mutex::~Mutex(google::protobuf::internal::log_silencer_count_mutex_);
    operator delete(v0, 8uLL);
  }
  google::protobuf::internal::log_silencer_count_mutex_ = 0LL;
};

// Line 186: range 000000000C894990-000000000C8949C7
__int64 __fastcall google::protobuf::internal::InitLogSilencerCount(google::protobuf::internal *this, void (*a2)(void))
{
  google::protobuf::internal::Mutex *v2; // rbp

  v2 = (google::protobuf::internal::Mutex *)operator new(8uLL);
  google::protobuf::internal::Mutex::Mutex(v2);
  google::protobuf::internal::log_silencer_count_mutex_ = v2;
  return google::protobuf::internal::OnShutdown(
           (google::protobuf::internal *)google::protobuf::internal::DeleteLogSilencerCount,
           a2);
};

// Line 187: range 000000000C72A1FA-000000000C72A20A
void __fastcall __noreturn google::protobuf::internal::InitLogSilencerCount()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 8uLL);
  _Unwind_Resume(v1);
};

// Line 190: range 000000000C8939E0-000000000C893A0B
void __cdecl google::protobuf::internal::InitLogSilencerCountOnce()
{
  google::protobuf::Closure v0[2]; // [rsp+0h] [rbp-28h] BYREF
  char v1; // [rsp+10h] [rbp-18h]

  v0[0]._vptr_Closure = (int (**)(...))off_1A16E058;
  v0[1]._vptr_Closure = (int (**)(...))google::protobuf::internal::InitLogSilencerCount;
  v1 = 0;
  google::protobuf::GoogleOnceInitImpl(&google::protobuf::internal::log_silencer_count_init_, v0);
};

// Line 194: range 000000000C893A30-000000000C893A4A
google::protobuf::internal::LogMessage_0 *__fastcall google::protobuf::internal::LogMessage::operator<<(
        google::protobuf::internal::LogMessage_0 *const this,
        const std::string *value)
{
  std::string::_M_append(&this->message_, value->_M_dataplus._M_p, value->_M_string_length);
  return this;
};

// Line 199: range 000000000C893A50-000000000C893A97
google::protobuf::internal::LogMessage_0 *__fastcall google::protobuf::internal::LogMessage::operator<<(
        google::protobuf::internal::LogMessage_0 *const this,
        const char *value)
{
  if ( strlen(value) > 0x3FFFFFFFFFFFFFFFLL - this->message_._M_string_length )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(&this->message_, value);
  return this;
};

// Line 204: range 000000000C894B20-000000000C894B98
__int64 __fastcall google::protobuf::internal::LogMessage::operator<<(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  const char *v4; // r8
  std::string v6; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(const char **)a2;
  v6._M_dataplus._M_p = v6._anon_0._M_local_buf;
  if ( v4 )
  {
    std::string::_M_construct<char const*>(&v6, v4, &v4[*(_QWORD *)(a2 + 8)], a4);
    std::string::_M_append(a1 + 24, v6._M_dataplus._M_p, v6._M_string_length);
  }
  else
  {
    v6._M_string_length = 0LL;
    v6._anon_0._M_local_buf[0] = 0;
    std::string::_M_append(a1 + 24, v6._anon_0._M_local_buf, 0LL);
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6._M_dataplus._M_p != &v6._anon_0 )
    operator delete(v6._M_dataplus._M_p);
  return a1;
};

// Line 210: range 000000000C893AA0-000000000C893AE4
__int64 __fastcall google::protobuf::internal::LogMessage::operator<<(__int64 a1)
{
  void *v2[2]; // [rsp+0h] [rbp-28h] BYREF
  char v3; // [rsp+10h] [rbp-18h] BYREF

  google::protobuf::util::Status::ToString[abi:cxx11](v2);
  std::string::_M_append(a1 + 24, (const char *)v2[0], v2[1]);
  if ( v2[0] != &v3 )
    operator delete(v2[0]);
  return a1;
};

// Line 215: range 000000000C894650-000000000C8948D5
__int64 __fastcall google::protobuf::internal::LogMessage::operator<<(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  _QWORD *v5; // rdi
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rax
  void *v12; // [rsp+0h] [rbp-1C8h] BYREF
  __int64 v13; // [rsp+8h] [rbp-1C0h]
  int v14[4]; // [rsp+10h] [rbp-1B8h] BYREF
  int v15[2]; // [rsp+20h] [rbp-1A8h] BYREF
  int v16[2]; // [rsp+28h] [rbp-1A0h] BYREF
  int v17[2]; // [rsp+30h] [rbp-198h]
  void *v18; // [rsp+38h] [rbp-190h]
  int v19[2]; // [rsp+40h] [rbp-188h]
  int v20[2]; // [rsp+48h] [rbp-180h]
  int v21[2]; // [rsp+50h] [rbp-178h]
  __int64 v22; // [rsp+58h] [rbp-170h]
  std::locale v23; // [rsp+60h] [rbp-168h] BYREF
  int v24; // [rsp+68h] [rbp-160h]
  void *v25; // [rsp+70h] [rbp-158h] BYREF
  int v26[2]; // [rsp+78h] [rbp-150h]
  int v27[4]; // [rsp+80h] [rbp-148h] BYREF
  int v28[2]; // [rsp+90h] [rbp-138h] BYREF
  std::locale v29; // [rsp+98h] [rbp-130h]
  int v30; // [rsp+A0h] [rbp-128h]
  void *v31; // [rsp+A8h] [rbp-120h]
  int v32; // [rsp+B0h] [rbp-118h]
  char v33; // [rsp+B8h] [rbp-110h]
  int v34; // [rsp+C0h] [rbp-108h]
  __int64 v35; // [rsp+C8h] [rbp-100h]
  __int64 v36; // [rsp+168h] [rbp-60h]
  __int16 v37; // [rsp+170h] [rbp-58h]
  __int64 v38; // [rsp+178h] [rbp-50h]
  __int64 v39; // [rsp+180h] [rbp-48h]
  __int64 v40; // [rsp+188h] [rbp-40h]
  __int64 v41; // [rsp+190h] [rbp-38h]

  std::ios_base::ios_base((std::ios_base *)v28);
  v3 = qword_1FB24EC8;
  v4 = qword_1FB24ED0;
  v37 = 0;
  v5 = (_QWORD *)((char *)v15 + *(_QWORD *)(qword_1FB24EC8 - 24));
  *(_QWORD *)v28 = &unk_1FB251E8;
  v36 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  *(_QWORD *)v15 = qword_1FB24EC8;
  *v5 = qword_1FB24ED0;
  std::ios::init(v5, 0LL);
  *(_QWORD *)v15 = &unk_1FB25170;
  *(_QWORD *)v28 = &unk_1FB25198;
  *(_QWORD *)v16 = &unk_1FB24EF0;
  *(_QWORD *)v17 = 0LL;
  v18 = 0LL;
  *(_QWORD *)v19 = 0LL;
  *(_QWORD *)v20 = 0LL;
  *(_QWORD *)v21 = 0LL;
  v22 = 0LL;
  std::locale::locale(&v23);
  v25 = v27;
  *(_QWORD *)v16 = &unk_1FB24FF0;
  v24 = 16;
  *(_QWORD *)v26 = 0LL;
  LOBYTE(v27[0]) = 0;
  std::ios::init(v28, v16);
  google::protobuf::operator<<(
    (int)v15,
    a2,
    v6,
    v7,
    v8,
    v9,
    (int)v12,
    v13,
    v14[0],
    v14[2],
    v15[0],
    v16[0],
    v17[0],
    v18,
    v19[0],
    v20[0],
    v21[0],
    v22,
    (__int64)v23._M_impl,
    v24,
    (int)v25,
    v26[0],
    v27[0],
    v27[2],
    v28[0],
    v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  LOBYTE(v14[0]) = 0;
  v12 = v14;
  v13 = 0LL;
  if ( *(_QWORD *)v21 )
  {
    if ( *(_QWORD *)v21 > *(_QWORD *)v19 )
      std::string::_M_replace(&v12, 0LL, 0LL, *(const char **)v20, *(_QWORD *)v21 - *(_QWORD *)v20);
    else
      std::string::_M_replace(&v12, 0LL, 0LL, *(const char **)v20, *(_QWORD *)v19 - *(_QWORD *)v20);
  }
  else
  {
    std::string::_M_assign(&v12, &v25);
  }
  std::string::_M_append(a1 + 24, (const char *)v12, v13);
  if ( v12 != v14 )
    operator delete(v12);
  *(_QWORD *)v15 = &unk_1FB25170;
  *(_QWORD *)v28 = &unk_1FB25198;
  *(_QWORD *)v16 = &unk_1FB24FF0;
  if ( v25 != v27 )
    operator delete(v25);
  *(_QWORD *)v16 = &unk_1FB24EF0;
  std::locale::~locale(&v23);
  v10 = *(_QWORD *)(v3 - 24);
  *(_QWORD *)v15 = v3;
  *(_QWORD *)((char *)v15 + v10) = v4;
  *(_QWORD *)v28 = &unk_1FB251E8;
  std::ios_base::~ios_base((std::ios_base *)v28);
  return a1;
};

// Line 239: range 000000000C893AF0-000000000C893B8C
google::protobuf::internal::LogMessage_0 *__fastcall google::protobuf::internal::LogMessage::operator<<(
        google::protobuf::internal::LogMessage_0 *const this,
        char value)
{
  std::string *p_message; // rdi
  char *v4; // rdx
  int v5; // ecx
  unsigned int v6; // eax
  char buffer[128]; // [rsp+0h] [rbp+0h] BYREF

  snprintf(buffer, 0x80uLL, "%c", (unsigned int)value);
  buffer[127] = 0;
  p_message = &this->message_;
  v4 = buffer;
  do
  {
    v5 = *(_DWORD *)v4;
    v4 += 4;
    v6 = ~v5 & (v5 - 16843009) & 0x80808080;
  }
  while ( !v6 );
  if ( (~v5 & (v5 - 16843009) & 0x8080) == 0 )
    v6 >>= 16;
  if ( (~v5 & (v5 - 16843009) & 0x8080) == 0 )
    v4 += 2;
  if ( &v4[-__CFADD__((_BYTE)v6, (_BYTE)v6) - 3] - buffer > 0x3FFFFFFFFFFFFFFFLL - this->message_._M_string_length )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(p_message, buffer);
  return this;
};

// Line 240: range 000000000C893BA0-000000000C893C3A
google::protobuf::internal::LogMessage_0 *__fastcall google::protobuf::internal::LogMessage::operator<<(
        google::protobuf::internal::LogMessage_0 *const this,
        int value)
{
  std::string *p_message; // rdi
  char *v4; // rdx
  int v5; // ecx
  unsigned int v6; // eax
  char buffer[128]; // [rsp+0h] [rbp+0h] BYREF

  snprintf(buffer, 0x80uLL, "%d", (unsigned int)value);
  buffer[127] = 0;
  p_message = &this->message_;
  v4 = buffer;
  do
  {
    v5 = *(_DWORD *)v4;
    v4 += 4;
    v6 = ~v5 & (v5 - 16843009) & 0x80808080;
  }
  while ( !v6 );
  if ( (~v5 & (v5 - 16843009) & 0x8080) == 0 )
    v6 >>= 16;
  if ( (~v5 & (v5 - 16843009) & 0x8080) == 0 )
    v4 += 2;
  if ( &v4[-__CFADD__((_BYTE)v6, (_BYTE)v6) - 3] - buffer > 0x3FFFFFFFFFFFFFFFLL - this->message_._M_string_length )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(p_message, buffer);
  return this;
};

// Line 241: range 000000000C893C40-000000000C893CDA
google::protobuf::internal::LogMessage_0 *__fastcall google::protobuf::internal::LogMessage::operator<<(
        google::protobuf::internal::LogMessage_0 *const this,
        unsigned int value)
{
  std::string *p_message; // rdi
  char *v4; // rdx
  int v5; // ecx
  unsigned int v6; // eax
  char buffer[128]; // [rsp+0h] [rbp+0h] BYREF

  snprintf(buffer, 0x80uLL, "%u", value);
  buffer[127] = 0;
  p_message = &this->message_;
  v4 = buffer;
  do
  {
    v5 = *(_DWORD *)v4;
    v4 += 4;
    v6 = ~v5 & (v5 - 16843009) & 0x80808080;
  }
  while ( !v6 );
  if ( (~v5 & (v5 - 16843009) & 0x8080) == 0 )
    v6 >>= 16;
  if ( (~v5 & (v5 - 16843009) & 0x8080) == 0 )
    v4 += 2;
  if ( &v4[-__CFADD__((_BYTE)v6, (_BYTE)v6) - 3] - buffer > 0x3FFFFFFFFFFFFFFFLL - this->message_._M_string_length )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(p_message, buffer);
  return this;
};

// Line 242: range 000000000C893CE0-000000000C893D7B
google::protobuf::internal::LogMessage_0 *__fastcall google::protobuf::internal::LogMessage::operator<<(
        google::protobuf::internal::LogMessage_0 *const this,
        __int64 value)
{
  std::string *p_message; // rdi
  char *v4; // rdx
  int v5; // ecx
  unsigned int v6; // eax
  char buffer[128]; // [rsp+0h] [rbp+0h] BYREF

  snprintf(buffer, 0x80uLL, off_1A16DBF1, value);
  buffer[127] = 0;
  p_message = &this->message_;
  v4 = buffer;
  do
  {
    v5 = *(_DWORD *)v4;
    v4 += 4;
    v6 = ~v5 & (v5 - 16843009) & 0x80808080;
  }
  while ( !v6 );
  if ( (~v5 & (v5 - 16843009) & 0x8080) == 0 )
    v6 >>= 16;
  if ( (~v5 & (v5 - 16843009) & 0x8080) == 0 )
    v4 += 2;
  if ( &v4[-__CFADD__((_BYTE)v6, (_BYTE)v6) - 3] - buffer > 0x3FFFFFFFFFFFFFFFLL - this->message_._M_string_length )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(p_message, buffer);
  return this;
};

// Line 243: range 000000000C893D80-000000000C893E1B
google::protobuf::internal::LogMessage_0 *__fastcall google::protobuf::internal::LogMessage::operator<<(
        google::protobuf::internal::LogMessage_0 *const this,
        unsigned __int64 value)
{
  std::string *p_message; // rdi
  char *v4; // rdx
  int v5; // ecx
  unsigned int v6; // eax
  char buffer[128]; // [rsp+0h] [rbp+0h] BYREF

  snprintf(buffer, 0x80uLL, "%lu", value);
  buffer[127] = 0;
  p_message = &this->message_;
  v4 = buffer;
  do
  {
    v5 = *(_DWORD *)v4;
    v4 += 4;
    v6 = ~v5 & (v5 - 16843009) & 0x80808080;
  }
  while ( !v6 );
  if ( (~v5 & (v5 - 16843009) & 0x8080) == 0 )
    v6 >>= 16;
  if ( (~v5 & (v5 - 16843009) & 0x8080) == 0 )
    v4 += 2;
  if ( &v4[-__CFADD__((_BYTE)v6, (_BYTE)v6) - 3] - buffer > 0x3FFFFFFFFFFFFFFFLL - this->message_._M_string_length )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(p_message, buffer);
  return this;
};

// Line 244: range 000000000C893E20-000000000C893EBB
google::protobuf::internal::LogMessage_0 *__fastcall google::protobuf::internal::LogMessage::operator<<(
        google::protobuf::internal::LogMessage_0 *const this,
        double a2,
        double value)
{
  std::string *p_message; // rdi
  char *v5; // rdx
  int v6; // ecx
  unsigned int v7; // eax
  char buffer[128]; // [rsp+0h] [rbp+0h] BYREF

  snprintf(buffer, 0x80uLL, "%g", a2);
  buffer[127] = 0;
  p_message = &this->message_;
  v5 = buffer;
  do
  {
    v6 = *(_DWORD *)v5;
    v5 += 4;
    v7 = ~v6 & (v6 - 16843009) & 0x80808080;
  }
  while ( !v7 );
  if ( (~v6 & (v6 - 16843009) & 0x8080) == 0 )
    v7 >>= 16;
  if ( (~v6 & (v6 - 16843009) & 0x8080) == 0 )
    v5 += 2;
  if ( &v5[-__CFADD__((_BYTE)v7, (_BYTE)v7) - 3] - buffer > 0x3FFFFFFFFFFFFFFFLL - this->message_._M_string_length )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(p_message, buffer, a2, value);
  return this;
};

// Line 245: range 000000000C893EC0-000000000C893F5B
google::protobuf::internal::LogMessage_0 *__fastcall google::protobuf::internal::LogMessage::operator<<(
        google::protobuf::internal::LogMessage_0 *const this,
        void *value)
{
  std::string *p_message; // rdi
  char *v4; // rdx
  int v5; // ecx
  unsigned int v6; // eax
  char buffer[128]; // [rsp+0h] [rbp+0h] BYREF

  snprintf(buffer, 0x80uLL, "%p", value);
  buffer[127] = 0;
  p_message = &this->message_;
  v4 = buffer;
  do
  {
    v5 = *(_DWORD *)v4;
    v4 += 4;
    v6 = ~v5 & (v5 - 16843009) & 0x80808080;
  }
  while ( !v6 );
  if ( (~v5 & (v5 - 16843009) & 0x8080) == 0 )
    v6 >>= 16;
  if ( (~v5 & (v5 - 16843009) & 0x8080) == 0 )
    v4 += 2;
  if ( &v4[-__CFADD__((_BYTE)v6, (_BYTE)v6) - 3] - buffer > 0x3FFFFFFFFFFFFFFFLL - this->message_._M_string_length )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(p_message, buffer);
  return this;
};

// Line 246: range 000000000C893F60-000000000C893FFB
google::protobuf::internal::LogMessage_0 *__fastcall google::protobuf::internal::LogMessage::operator<<(
        google::protobuf::internal::LogMessage_0 *const this,
        __int64 value)
{
  std::string *p_message; // rdi
  char *v4; // rdx
  int v5; // ecx
  unsigned int v6; // eax
  char buffer[128]; // [rsp+0h] [rbp+0h] BYREF

  snprintf(buffer, 0x80uLL, "%lld", value);
  buffer[127] = 0;
  p_message = &this->message_;
  v4 = buffer;
  do
  {
    v5 = *(_DWORD *)v4;
    v4 += 4;
    v6 = ~v5 & (v5 - 16843009) & 0x80808080;
  }
  while ( !v6 );
  if ( (~v5 & (v5 - 16843009) & 0x8080) == 0 )
    v6 >>= 16;
  if ( (~v5 & (v5 - 16843009) & 0x8080) == 0 )
    v4 += 2;
  if ( &v4[-__CFADD__((_BYTE)v6, (_BYTE)v6) - 3] - buffer > 0x3FFFFFFFFFFFFFFFLL - this->message_._M_string_length )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(p_message, buffer);
  return this;
};

// Line 247: range 000000000C894000-000000000C89409B
google::protobuf::internal::LogMessage_0 *__fastcall google::protobuf::internal::LogMessage::operator<<(
        google::protobuf::internal::LogMessage_0 *const this,
        unsigned __int64 value)
{
  std::string *p_message; // rdi
  char *v4; // rdx
  int v5; // ecx
  unsigned int v6; // eax
  char buffer[128]; // [rsp+0h] [rbp+0h] BYREF

  snprintf(buffer, 0x80uLL, "%llu", value);
  buffer[127] = 0;
  p_message = &this->message_;
  v4 = buffer;
  do
  {
    v5 = *(_DWORD *)v4;
    v4 += 4;
    v6 = ~v5 & (v5 - 16843009) & 0x80808080;
  }
  while ( !v6 );
  if ( (~v5 & (v5 - 16843009) & 0x8080) == 0 )
    v6 >>= 16;
  if ( (~v5 & (v5 - 16843009) & 0x8080) == 0 )
    v4 += 2;
  if ( &v4[-__CFADD__((_BYTE)v6, (_BYTE)v6) - 3] - buffer > 0x3FFFFFFFFFFFFFFFLL - this->message_._M_string_length )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(p_message, buffer);
  return this;
};

// Line 254: range 000000000C894310-000000000C89438D
void __fastcall google::protobuf::internal::LogMessage::Finish(
        google::protobuf::internal::LogMessage *this,
        const char *filename,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  google::protobuf::LogLevel level; // edi
  google::protobuf::internal::Mutex *v9; // rbp
  int v10; // r12d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d

  level = this->level_;
  if ( level == LOGLEVEL_FATAL )
    goto LABEL_8;
  if ( google::protobuf::internal::log_silencer_count_init_ != 2 )
    google::protobuf::internal::InitLogSilencerCountOnce();
  v9 = google::protobuf::internal::log_silencer_count_mutex_;
  google::protobuf::internal::Mutex::Lock(google::protobuf::internal::log_silencer_count_mutex_);
  v10 = google::protobuf::internal::log_silencer_count_;
  level = (int)v9;
  google::protobuf::internal::Mutex::Unlock(v9);
  if ( v10 <= 0 )
  {
    level = this->level_;
LABEL_8:
    filename = this->filename_;
    google::protobuf::internal::log_handler_(
      (google::protobuf::LogLevel_0)level,
      filename,
      this->line_,
      &this->message_);
  }
  if ( this->level_ == LOGLEVEL_FATAL )
    google::protobuf::internal::LogMessage::Finish(level, (_DWORD)filename, v11, v12, v13, v14, a7);
};

// Line 269: range 000000000C72A072-000000000C72A145
void __fastcall __noreturn google::protobuf::internal::LogMessage::Finish(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rbx
  _DWORD *exception; // rax
  _BYTE *v9; // r13
  size_t v10; // r12
  _DWORD *v11; // rbp
  __int64 v12; // rdx
  void *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx

  exception = __cxa_allocate_exception(0x38uLL);
  v9 = *(_BYTE **)(v7 + 24);
  v10 = *(_QWORD *)(v7 + 32);
  v11 = exception;
  LODWORD(exception) = *(_DWORD *)(v7 + 16);
  v12 = *(_QWORD *)(v7 + 8);
  v13 = v11 + 10;
  *(_QWORD *)v11 = off_1A16E080;
  v11[4] = (_DWORD)exception;
  *((_QWORD *)v11 + 1) = v12;
  *((_QWORD *)v11 + 3) = v11 + 10;
  if ( &v9[v10] )
  {
    if ( !v9 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
  a7 = v10;
  if ( v10 > 0xF )
  {
    v14 = std::string::_M_create(v11 + 6, &a7, 0LL);
    *((_QWORD *)v11 + 3) = v14;
    v13 = (void *)v14;
    *((_QWORD *)v11 + 5) = a7;
LABEL_6:
    memcpy(v13, v9, v10);
    goto LABEL_7;
  }
  if ( v10 == 1 )
  {
    *((_BYTE *)v11 + 40) = *v9;
  }
  else if ( v10 )
  {
    goto LABEL_6;
  }
LABEL_7:
  v15 = a7;
  v16 = *((_QWORD *)v11 + 3);
  *((_QWORD *)v11 + 4) = a7;
  *(_BYTE *)(v16 + v15) = 0;
  _cxa_throw(
    v11,
    (struct type_info *)&`typeinfo for'google::protobuf::FatalException,
    (void (__fastcall *)(void *))google::protobuf::FatalException::~FatalException);
};

// Line 276: range 000000000C894390-000000000C894393
void __fastcall google::protobuf::internal::LogFinisher::operator=(
        google::protobuf::internal::LogFinisher *const this,
        google::protobuf::internal::LogMessage_0 *other)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // [rsp+8h] [rbp+8h]

  google::protobuf::internal::LogMessage::Finish(
    (google::protobuf::internal::LogMessage *)other,
    (const char *)other,
    v2,
    v3,
    v4,
    v5,
    v6);
};

// Line 283: range 000000000C8940E0-000000000C894109
google::protobuf::LogHandler *__fastcall google::protobuf::SetLogHandler(google::protobuf::LogHandler *new_func)
{
  google::protobuf::LogHandler *result; // rax

  result = google::protobuf::internal::log_handler_;
  if ( google::protobuf::internal::log_handler_ == google::protobuf::internal::NullLogHandler )
    result = 0LL;
  if ( !new_func )
    new_func = google::protobuf::internal::NullLogHandler;
  google::protobuf::internal::log_handler_ = new_func;
  return result;
};

// Line 295: range 000000000C894470-000000000C89449D
void __fastcall google::protobuf::LogSilencer::LogSilencer(google::protobuf::LogSilencer *const this)
{
  google::protobuf::internal::Mutex *v1; // rbp

  if ( google::protobuf::internal::log_silencer_count_init_ != 2 )
    google::protobuf::internal::InitLogSilencerCountOnce();
  v1 = google::protobuf::internal::log_silencer_count_mutex_;
  google::protobuf::internal::Mutex::Lock(google::protobuf::internal::log_silencer_count_mutex_);
  ++google::protobuf::internal::log_silencer_count_;
  google::protobuf::internal::Mutex::Unlock(v1);
};

// Line 301: range 000000000C8944B0-000000000C8944DD
void __fastcall google::protobuf::LogSilencer::~LogSilencer(google::protobuf::LogSilencer *const this)
{
  google::protobuf::internal::Mutex *v1; // rbp

  if ( google::protobuf::internal::log_silencer_count_init_ != 2 )
    google::protobuf::internal::InitLogSilencerCountOnce();
  v1 = google::protobuf::internal::log_silencer_count_mutex_;
  google::protobuf::internal::Mutex::Lock(google::protobuf::internal::log_silencer_count_mutex_);
  --google::protobuf::internal::log_silencer_count_;
  google::protobuf::internal::Mutex::Unlock(v1);
};

// Line 310: range 000000000C894110-000000000C894125
void __fastcall google::protobuf::Closure::~Closure(google::protobuf::Closure *const this)
{
  ;
};

// Line 312: range 000000000C893980-000000000C893985
void __fastcall google::protobuf::internal::FunctionClosure0::~FunctionClosure0(
        google::protobuf::internal::FunctionClosure0 *const this)
{
  operator delete(this, 0x18uLL);
};

// Line 314: range 000000000C894130-000000000C894157
void __cdecl google::protobuf::DoNothing()
{
  ;
};

// Line 370: range 000000000C8941E0-000000000C894201
void __fastcall google::protobuf::internal::Mutex::~Mutex(google::protobuf::internal::Mutex *const this)
{
  google::protobuf::internal::Mutex::Internal *mInternal; // rdi

  pthread_mutex_destroy(&this->mInternal->mutex);
  mInternal = this->mInternal;
  if ( mInternal )
    operator delete(mInternal, 0x28uLL);
};

// Line 375: range 000000000C8943A0-000000000C89446B
void __fastcall google::protobuf::internal::Mutex::Lock(google::protobuf::internal::Mutex *this)
{
  int v1; // eax
  int v2; // ebp
  char *v3; // rbp
  size_t v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  google::protobuf::internal::LogMessage v9; // [rsp+0h] [rbp-58h] BYREF

  v1 = pthread_mutex_lock(&this->mInternal->mutex);
  if ( v1 )
  {
    v2 = v1;
    v9.level_ = LOGLEVEL_FATAL;
    v9.filename_ = "google/protobuf/stubs/common.cc";
    v9.line_ = 378;
    v9.message_._M_dataplus._M_p = v9.message_._anon_0._M_local_buf;
    v9.message_._M_string_length = 0LL;
    v9.message_._anon_0._M_local_buf[0] = 0;
    std::string::_M_append(&v9.message_, "pthread_mutex_lock: ", 20LL);
    v3 = strerror(v2);
    v4 = strlen(v3);
    if ( v4 > 0x3FFFFFFFFFFFFFFFLL - v9.message_._M_string_length )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append(&v9.message_, v3);
    google::protobuf::internal::LogMessage::Finish(&v9, v3, v5, v6, v7, v8, *(__int64 *)&v9.level_);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v9.message_._M_dataplus._M_p != &v9.message_._anon_0 )
      operator delete(v9.message_._M_dataplus._M_p);
  }
};

// Line 382: range 000000000C894240-000000000C89430B
void __fastcall google::protobuf::internal::Mutex::Unlock(google::protobuf::internal::Mutex *this)
{
  int v1; // eax
  int v2; // ebp
  char *v3; // rbp
  size_t v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  google::protobuf::internal::LogMessage v9; // [rsp+0h] [rbp-58h] BYREF

  v1 = pthread_mutex_unlock(&this->mInternal->mutex);
  if ( v1 )
  {
    v2 = v1;
    v9.level_ = LOGLEVEL_FATAL;
    v9.filename_ = "google/protobuf/stubs/common.cc";
    v9.line_ = 385;
    v9.message_._M_dataplus._M_p = v9.message_._anon_0._M_local_buf;
    v9.message_._M_string_length = 0LL;
    v9.message_._anon_0._M_local_buf[0] = 0;
    std::string::_M_append(&v9.message_, "pthread_mutex_unlock: ", 22LL);
    v3 = strerror(v2);
    v4 = strlen(v3);
    if ( v4 > 0x3FFFFFFFFFFFFFFFLL - v9.message_._M_string_length )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append(&v9.message_, v3);
    google::protobuf::internal::LogMessage::Finish(&v9, v3, v5, v6, v7, v8, *(__int64 *)&v9.level_);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v9.message_._M_dataplus._M_p != &v9.message_._anon_0 )
      operator delete(v9.message_._M_dataplus._M_p);
  }
};

// Line 392: range 000000000C8944F0-000000000C894504
void __fastcall google::protobuf::internal::Mutex::AssertHeld(google::protobuf::internal::Mutex *const this)
{
  ;
};

// Line 442: range 000000000C894160-000000000C8941D6
void __fastcall google::protobuf::internal::InitShutdownFunctions(google::protobuf::internal *this)
{
  google::protobuf::internal::Mutex *v1; // rax
  google::protobuf::internal::ShutdownData *v2; // rbp

  v1 = (google::protobuf::internal::Mutex *)operator new(0x50uLL);
  v1->mInternal = 0LL;
  v2 = (google::protobuf::internal::ShutdownData *)v1;
  v1[1].mInternal = 0LL;
  v1[2].mInternal = 0LL;
  v1[3].mInternal = 0LL;
  v1[4].mInternal = 0LL;
  v1[5].mInternal = 0LL;
  v1[6].mInternal = 0LL;
  v1[7].mInternal = 0LL;
  v1[8].mInternal = 0LL;
  google::protobuf::internal::Mutex::Mutex(v1 + 9);
  google::protobuf::internal::shutdown_data = v2;
};

// Line 450: range 000000000C8948E0-000000000C894985
void __fastcall google::protobuf::internal::OnShutdown(google::protobuf::internal *this, void (*a2)(void))
{
  google::protobuf::internal::Mutex *p_mutex; // rbp
  void (*const *v3)(void); // rcx
  google::protobuf::internal::ShutdownData *v4; // rdi
  void (**M_finish)(void); // rsi
  void (**v6)(void); // rsi
  void (*v7)(void); // [rsp+8h] [rbp-40h] BYREF
  google::protobuf::Closure closure; // [rsp+10h] [rbp-38h] BYREF
  void (__fastcall *v9)(google::protobuf::internal *); // [rsp+18h] [rbp-30h]
  char v10; // [rsp+20h] [rbp-28h]

  v7 = (void (*)(void))this;
  if ( google::protobuf::internal::shutdown_functions_init != 2 )
  {
    closure._vptr_Closure = (int (**)(...))off_1A16E058;
    v9 = google::protobuf::internal::InitShutdownFunctions;
    v10 = 0;
    google::protobuf::GoogleOnceInitImpl(&google::protobuf::internal::shutdown_functions_init, &closure);
  }
  p_mutex = &google::protobuf::internal::shutdown_data->mutex;
  google::protobuf::internal::Mutex::Lock(&google::protobuf::internal::shutdown_data->mutex);
  v4 = google::protobuf::internal::shutdown_data;
  M_finish = google::protobuf::internal::shutdown_data->functions._M_impl._M_finish;
  if ( M_finish == google::protobuf::internal::shutdown_data->functions._M_impl._M_end_of_storage )
  {
    std::vector<void (*)(void)>::_M_realloc_insert<void (* const&)(void)>(
      &google::protobuf::internal::shutdown_data->functions,
      (std::vector<void (*)()>::iterator)M_finish,
      &v7,
      v3);
    google::protobuf::internal::Mutex::Unlock(p_mutex);
  }
  else
  {
    v6 = M_finish + 1;
    *(v6 - 1) = v7;
    v4->functions._M_impl._M_finish = v6;
    google::protobuf::internal::Mutex::Unlock(p_mutex);
  }
};

// Line 456: range 000000000C8949D0-000000000C894A79
void __fastcall google::protobuf::internal::OnShutdownDestroyString(std::string *a1)
{
  google::protobuf::internal::Mutex *p_mutex; // rbp
  const std::string *const *v2; // rcx
  google::protobuf::internal::ShutdownData *v3; // rdi
  const std::string **M_finish; // rsi
  const std::string **v5; // rsi
  std::string *v6; // [rsp+8h] [rbp-40h] BYREF
  google::protobuf::Closure closure; // [rsp+10h] [rbp-38h] BYREF
  void (__fastcall *v8)(google::protobuf::internal *); // [rsp+18h] [rbp-30h]
  char v9; // [rsp+20h] [rbp-28h]

  v6 = a1;
  if ( google::protobuf::internal::shutdown_functions_init != 2 )
  {
    closure._vptr_Closure = (int (**)(...))off_1A16E058;
    v8 = google::protobuf::internal::InitShutdownFunctions;
    v9 = 0;
    google::protobuf::GoogleOnceInitImpl(&google::protobuf::internal::shutdown_functions_init, &closure);
  }
  p_mutex = &google::protobuf::internal::shutdown_data->mutex;
  google::protobuf::internal::Mutex::Lock(&google::protobuf::internal::shutdown_data->mutex);
  v3 = google::protobuf::internal::shutdown_data;
  M_finish = google::protobuf::internal::shutdown_data->strings._M_impl._M_finish;
  if ( M_finish == google::protobuf::internal::shutdown_data->strings._M_impl._M_end_of_storage )
  {
    std::vector<std::string const*>::_M_realloc_insert<std::string const* const&>(
      &google::protobuf::internal::shutdown_data->strings,
      (std::vector<const std::string*>::iterator)M_finish,
      (const std::string *const *)&v6,
      v2);
    google::protobuf::internal::Mutex::Unlock(p_mutex);
  }
  else
  {
    v5 = M_finish + 1;
    *(v5 - 1) = v6;
    v3->strings._M_impl._M_finish = v5;
    google::protobuf::internal::Mutex::Unlock(p_mutex);
  }
};

// Line 462: range 000000000C894A80-000000000C894B11
void __fastcall google::protobuf::internal::OnShutdownDestroyMessage(int (**this)(...), const void *a2)
{
  google::protobuf::internal::Mutex *p_mutex; // rbp
  const google::protobuf::MessageLite **v4; // rcx
  google::protobuf::internal::ShutdownData *v5; // rdi
  std::_Vector_base<const google::protobuf::MessageLite*>::pointer M_finish; // rsi
  google::protobuf::Closure v7[2]; // [rsp+0h] [rbp-38h] BYREF
  char v8; // [rsp+10h] [rbp-28h]

  if ( google::protobuf::internal::shutdown_functions_init != 2 )
  {
    v7[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v7[1]._vptr_Closure = (int (**)(...))google::protobuf::internal::InitShutdownFunctions;
    v8 = 0;
    google::protobuf::GoogleOnceInitImpl(&google::protobuf::internal::shutdown_functions_init, v7);
  }
  p_mutex = &google::protobuf::internal::shutdown_data->mutex;
  google::protobuf::internal::Mutex::Lock(&google::protobuf::internal::shutdown_data->mutex);
  v5 = google::protobuf::internal::shutdown_data;
  v7[0]._vptr_Closure = this;
  M_finish = google::protobuf::internal::shutdown_data->messages._M_impl._M_finish;
  if ( M_finish == google::protobuf::internal::shutdown_data->messages._M_impl._M_end_of_storage )
  {
    std::vector<google::protobuf::MessageLite const*>::_M_realloc_insert<google::protobuf::MessageLite const*>(
      &google::protobuf::internal::shutdown_data->messages,
      (std::vector<const google::protobuf::MessageLite*>::iterator)M_finish,
      (const google::protobuf::MessageLite **)v7,
      v4);
  }
  else
  {
    *M_finish = (const google::protobuf::MessageLite *)this;
    v5->messages._M_impl._M_finish = M_finish + 1;
  }
  google::protobuf::internal::Mutex::Unlock(p_mutex);
};

// Line 470: range 000000000C894510-000000000C894642
void __cdecl google::protobuf::ShutdownProtobufLibrary()
{
  google::protobuf::internal::ShutdownData *v0; // rbp
  std::_Vector_base<void (*)()>::pointer M_start; // rdx
  unsigned __int64 v2; // rbx
  const std::string **v3; // rdx
  unsigned __int64 v4; // rbx
  void **p_M_p; // rax
  const google::protobuf::MessageLite **v6; // rdx
  unsigned __int64 v7; // rbx
  const google::protobuf::MessageLite *v8; // rdi
  std::_Vector_base<const google::protobuf::MessageLite*>::pointer v9; // rdi
  std::_Vector_base<const std::string*>::pointer v10; // rdi
  google::protobuf::Closure v11[2]; // [rsp+0h] [rbp-38h] BYREF
  char v12; // [rsp+10h] [rbp-28h]

  if ( google::protobuf::internal::shutdown_functions_init != 2 )
  {
    v11[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v11[1]._vptr_Closure = (int (**)(...))google::protobuf::internal::InitShutdownFunctions;
    v12 = 0;
    google::protobuf::GoogleOnceInitImpl(&google::protobuf::internal::shutdown_functions_init, v11);
  }
  v0 = google::protobuf::internal::shutdown_data;
  if ( google::protobuf::internal::shutdown_data )
  {
    M_start = google::protobuf::internal::shutdown_data->functions._M_impl._M_start;
    v2 = 0LL;
    if ( google::protobuf::internal::shutdown_data->functions._M_impl._M_start != google::protobuf::internal::shutdown_data->functions._M_impl._M_finish )
    {
      do
      {
        M_start[v2]();
        M_start = v0->functions._M_impl._M_start;
        ++v2;
      }
      while ( v0->functions._M_impl._M_finish - v0->functions._M_impl._M_start > v2 );
    }
    v3 = v0->strings._M_impl._M_start;
    v4 = 0LL;
    if ( v3 != v0->strings._M_impl._M_finish )
    {
      do
      {
        p_M_p = (void **)&v3[v4]->_M_dataplus._M_p;
        if ( *p_M_p != p_M_p + 2 )
        {
          operator delete(*p_M_p);
          v3 = v0->strings._M_impl._M_start;
        }
        ++v4;
      }
      while ( v0->strings._M_impl._M_finish - v3 > v4 );
    }
    v6 = v0->messages._M_impl._M_start;
    v7 = 0LL;
    if ( v0->messages._M_impl._M_finish != v6 )
    {
      do
      {
        v8 = v6[v7++];
        (*v8->_vptr_MessageLite)(v8);
        v6 = v0->messages._M_impl._M_start;
      }
      while ( v0->messages._M_impl._M_finish - v6 > v7 );
    }
    google::protobuf::internal::Mutex::~Mutex(&v0->mutex);
    v9 = v0->messages._M_impl._M_start;
    if ( v9 )
      operator delete(v9);
    v10 = v0->strings._M_impl._M_start;
    if ( v10 )
      operator delete(v10);
    if ( v0->functions._M_impl._M_start )
      operator delete(v0->functions._M_impl._M_start);
    operator delete(v0, 0x50uLL);
    google::protobuf::internal::shutdown_data = 0LL;
  }
};

// Line 485: range 000000000C8939C0-000000000C8939D2
void __fastcall google::protobuf::FatalException::~FatalException(google::protobuf::FatalException *const this)
{
  google::protobuf::FatalException::~FatalException(this);
  operator delete(this, 0x38uLL);
};

// Line 485: range 000000000C893990-000000000C8939B1
void __fastcall google::protobuf::FatalException::~FatalException(google::protobuf::FatalException *const this)
{
  google::protobuf::FatalException *M_p; // rdi

  *(_QWORD *)this->baseclass_0 = off_1A16E080;
  M_p = (google::protobuf::FatalException *)this->message_._M_dataplus._M_p;
  if ( M_p != (google::protobuf::FatalException *)&this->message_._anon_0 )
    operator delete(M_p);
  std::exception::~exception((std::exception *)this);
};

// Line 488: range 000000000C893920-000000000C893924
const char *__fastcall google::protobuf::FatalException::what(const google::protobuf::FatalException *const this)
{
  return this->message_._M_dataplus._M_p;
};

// Line 493: range 000000000C7467B0-000000000C7467D1
void __cdecl GLOBAL__sub_I__ZN6google8protobuf8internal13VerifyVersionEiiPKc()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
