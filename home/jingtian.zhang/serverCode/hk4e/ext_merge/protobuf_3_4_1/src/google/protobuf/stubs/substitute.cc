// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/stubs/substitute.cc

// Line 59: range 000000000C946AA0-000000000C946AEF
__int64 __fastcall google::protobuf::strings::Substitute[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  google::protobuf::strings::SubstituteAndAppend(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  return a1;
};

// Line 72: range 000000000C9465D0-000000000C946A96
void __fastcall google::protobuf::strings::SubstituteAndAppend(
        __int64 *a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void *a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // rbx
  char v13; // dl
  int v15; // eax
  int v16; // esi
  __int64 v17; // rcx
  int v18; // r13d
  int v19; // r13d
  int v20; // edx
  __int64 v21; // rbx
  __int64 v22; // rcx
  char v23; // al
  char *v24; // rcx
  int v25; // ebx
  __int64 v26; // rdx
  int v27; // esi
  int v28; // eax
  __int64 v29; // r12
  char *M_p; // rax
  size_t v31; // r14
  const char *v32; // rdx
  google::protobuf::internal::LogMessage_0 *v33; // rax
  google::protobuf::internal::LogMessage_0 *v34; // rax
  google::protobuf::internal::LogMessage_0 *v35; // rdi
  __int64 v36; // rax
  int v37; // esi
  google::protobuf::internal::LogMessage_0 *v38; // rax
  google::protobuf::internal::LogMessage_0 *v39; // rax
  google::protobuf::internal::LogMessage_0 *v40; // rax
  char *ptr; // rdi
  google::protobuf::internal::LogMessage_0 *v42; // [rsp+8h] [rbp-130h]
  google::protobuf::internal::LogFinisher v43; // [rsp+1Fh] [rbp-119h] BYREF
  google::protobuf::StringPiece v44; // [rsp+20h] [rbp-118h] BYREF
  __int64 v45[2]; // [rsp+30h] [rbp-108h] BYREF
  std::string value; // [rsp+40h] [rbp-F8h] BYREF
  google::protobuf::internal::LogMessage_0 v47; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v48[19]; // [rsp+A0h] [rbp-98h]

  v12 = a3;
  v48[0] = a3;
  v13 = *a2;
  v48[1] = a4;
  v48[4] = a7;
  v48[10] = 0LL;
  v48[5] = a8;
  v48[2] = a5;
  v48[6] = a9;
  v48[3] = a6;
  v48[7] = (__int64)a10;
  v48[8] = a11;
  v48[9] = a12;
  if ( !v13 )
    return;
  v15 = 0;
  v16 = 0;
  v17 = 0LL;
  while ( 1 )
  {
    while ( v13 != 36 )
    {
      ++v16;
LABEL_4:
      v17 = ++v15;
      v13 = a2[v15];
      if ( !v13 )
        goto LABEL_9;
    }
    v18 = a2[v17 + 1];
    if ( (unsigned __int8)(a2[v17 + 1] - 48) > 9u )
      break;
    v19 = v18 - 48;
    v20 = *(_DWORD *)(v48[v19] + 8);
    if ( v20 == -1 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        &v47,
        LOGLEVEL_ERROR_0,
        "google/protobuf/stubs/substitute.cc",
        84);
      v33 = google::protobuf::internal::LogMessage::operator<<(
              &v47,
              "strings::Substitute format string invalid: asked for \"$");
      v34 = google::protobuf::internal::LogMessage::operator<<(v33, v19);
      v35 = google::protobuf::internal::LogMessage::operator<<(v34, "\", but only ");
      v36 = 0LL;
      do
      {
        v37 = v36;
        if ( *(_DWORD *)(v12 + 8) == -1 )
          break;
        v37 = ++v36;
        v12 = v48[v36];
      }
      while ( v12 );
      v38 = google::protobuf::internal::LogMessage::operator<<(v35, v37);
      v42 = google::protobuf::internal::LogMessage::operator<<(v38, " args were given.  Full format string was: \"");
      v44.ptr_ = (const char *)v45;
      M_p = (char *)strlen(a2);
      value._M_dataplus._M_p = M_p;
      v31 = (size_t)M_p;
      if ( (unsigned __int64)M_p <= 0xF )
      {
        if ( M_p == (char *)1 )
        {
          LOBYTE(v45[0]) = *a2;
          v32 = (const char *)v45;
          goto LABEL_36;
        }
        if ( !M_p )
        {
          v32 = (const char *)v45;
          goto LABEL_36;
        }
        ptr = (char *)v45;
        goto LABEL_44;
      }
      goto LABEL_43;
    }
    v16 += v20;
    v15 += 2;
    v17 = v15;
    v13 = a2[v15];
    if ( !v13 )
    {
LABEL_9:
      if ( !v16 )
        return;
      v21 = a1[1];
      std::string::resize(a1, (int)v21 + v16, 0LL);
      v22 = 0LL;
      if ( a1[1] )
        v22 = *a1;
      v23 = *a2;
      v24 = (char *)((int)v21 + v22);
      if ( !*a2 )
        return;
      v25 = 0;
      v26 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v27 = v25 + 1;
          if ( v23 == 36 )
            break;
          *v24 = v23;
          ++v25;
          ++v24;
LABEL_15:
          v26 = v25;
          v23 = a2[v25];
          if ( !v23 )
            return;
        }
        v28 = a2[v26 + 1];
        if ( (unsigned __int8)(v28 - 48) <= 9u )
        {
          v25 += 2;
          v29 = v48[v28 - 48];
          v24 = (char *)memcpy(v24, *(const void **)v29, *(int *)(v29 + 8)) + *(int *)(v29 + 8);
          goto LABEL_15;
        }
        if ( (_BYTE)v28 == 36 )
        {
          *v24 = 36;
          v25 += 2;
          ++v24;
          goto LABEL_15;
        }
        ++v25;
        v26 = v27;
        v23 = a2[v27];
        if ( !v23 )
          return;
      }
    }
  }
  if ( (_BYTE)v18 == 36 )
  {
    ++v16;
    ++v15;
    goto LABEL_4;
  }
  google::protobuf::internal::LogMessage::LogMessage(&v47, LOGLEVEL_ERROR_0, "google/protobuf/stubs/substitute.cc", 97);
  v42 = google::protobuf::internal::LogMessage::operator<<(&v47, "Invalid strings::Substitute() format string: \"");
  v44.ptr_ = (const char *)v45;
  M_p = (char *)strlen(a2);
  value._M_dataplus._M_p = M_p;
  v31 = (size_t)M_p;
  if ( (unsigned __int64)M_p > 0xF )
  {
LABEL_43:
    v44.ptr_ = (const char *)std::string::_M_create(&v44, &value, 0LL);
    ptr = (char *)v44.ptr_;
    v45[0] = (__int64)value._M_dataplus._M_p;
    goto LABEL_44;
  }
  if ( M_p == (char *)1 )
  {
    LOBYTE(v45[0]) = *a2;
    v32 = (const char *)v45;
    goto LABEL_36;
  }
  if ( !M_p )
  {
    v32 = (const char *)v45;
    goto LABEL_36;
  }
  ptr = (char *)v45;
LABEL_44:
  memcpy(ptr, a2, v31);
  M_p = value._M_dataplus._M_p;
  v32 = v44.ptr_;
LABEL_36:
  v44.length_ = (google::protobuf::stringpiece_ssize_type)M_p;
  M_p[(_QWORD)v32] = 0;
  google::protobuf::CEscape(&value, &v44);
  v39 = google::protobuf::internal::LogMessage::operator<<(v42, &value);
  v40 = google::protobuf::internal::LogMessage::operator<<(v39, "\".");
  google::protobuf::internal::LogFinisher::operator=(&v43, v40);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
    operator delete(value._M_dataplus._M_p);
  if ( (__int64 *)v44.ptr_ != v45 )
    operator delete((void *)v44.ptr_);
  google::protobuf::internal::LogMessage::~LogMessage(&v47);
};

// Line 136: range 000000000C747030-000000000C747051
void __cdecl GLOBAL__sub_I__ZN6google8protobuf7strings10SubstituteB5cxx11EPKcRKNS1_8internal13SubstituteArgES7_S7_S7_S7_S7_S7_S7_S7_S7_()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
