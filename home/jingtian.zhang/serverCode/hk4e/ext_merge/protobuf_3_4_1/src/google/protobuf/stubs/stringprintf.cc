// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/stubs/stringprintf.cc

// Line 55: range 000000000C8E2B10-000000000C8E2C19
void __fastcall google::protobuf::StringAppendV(std::string *dst, const char *format, ___va_list_tag *ap)
{
  int v4; // eax
  int v5; // ebx
  char *v6; // r14
  void *reg_save_area; // rax
  int v8; // eax
  va_list backup_ap; // [rsp+8h] [rbp-450h] BYREF
  char space[1024]; // [rsp+20h] [rbp-438h] BYREF

  *(__m128i *)&backup_ap[0].gp_offset = _mm_loadu_si128((const __m128i *)ap);
  backup_ap[0].reg_save_area = ap->reg_save_area;
  v4 = vsnprintf(space, 0x400uLL, format, backup_ap);
  if ( v4 <= 1023 )
  {
    if ( v4 < 0 )
      return;
    if ( v4 <= 0x3FFFFFFFFFFFFFFFLL - dst->_M_string_length )
    {
      std::string::_M_append(dst, space);
      return;
    }
LABEL_9:
    std::__throw_length_error("basic_string::append");
  }
  v5 = v4 + 1;
  v6 = (char *)operator new[](v4 + 1);
  reg_save_area = ap->reg_save_area;
  *(__m128i *)&backup_ap[0].gp_offset = _mm_loadu_si128((const __m128i *)ap);
  backup_ap[0].reg_save_area = reg_save_area;
  v8 = vsnprintf(v6, v5, format, backup_ap);
  if ( v5 > (unsigned int)v8 )
  {
    if ( v8 > 0x3FFFFFFFFFFFFFFFLL - dst->_M_string_length )
      goto LABEL_9;
    std::string::_M_append(dst, v6);
  }
  operator delete[](v6);
};

// Line 107: range 000000000C8E2C20-000000000C8E2CDB
std::string *google::protobuf::StringPrintf[abi:cxx11](std::string *dst, const char *a2, ...)
{
  va_list ap; // [rsp+8h] [rbp-E0h] BYREF

  va_start(ap, a2);
  dst->_M_string_length = 0LL;
  dst->_M_dataplus._M_p = dst->_anon_0._M_local_buf;
  dst->_anon_0._M_local_buf[0] = 0;
  google::protobuf::StringAppendV(dst, a2, ap);
  return dst;
};

// Line 116: range 000000000C8E2CE0-000000000C8E2D8B
const std::string *google::protobuf::SStringPrintf(std::string *dst, const char *format, ...)
{
  std::string::pointer M_p; // rax
  va_list ap; // [rsp+8h] [rbp-D0h] BYREF

  va_start(ap, format);
  M_p = dst->_M_dataplus._M_p;
  dst->_M_string_length = 0LL;
  *M_p = 0;
  google::protobuf::StringAppendV(dst, format, ap);
  return dst;
};

// Line 125: range 000000000C8E2D90-000000000C8E2E1E
void google::protobuf::StringAppendF(std::string *dst, const char *format, ...)
{
  va_list ap; // [rsp+8h] [rbp-D0h] BYREF

  va_start(ap, format);
  google::protobuf::StringAppendV(dst, format, ap);
};

// Line 140: range 000000000C8E2E20-000000000C8E3071
std::string *__fastcall google::protobuf::StringPrintfVector(std::string *dst, const char *a2, __int64 a3)
{
  std::string::size_type *v5; // rax
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  google::protobuf::internal::LogMessage_0 *v8; // rdx
  std::string::size_type *v9; // rsi
  std::string::size_type v10; // rcx
  unsigned __int64 i; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  google::protobuf::internal::LogMessage_0 *v15; // rax
  google::protobuf::internal::LogMessage_0 *v16; // rax
  google::protobuf::internal::LogMessage_0 *v17; // rax
  google::protobuf::internal::LogMessage_0 *v18; // rax
  google::protobuf::internal::LogFinisher v19; // [rsp+Fh] [rbp-129h] BYREF
  google::protobuf::internal::LogMessage_0 v20; // [rsp+10h] [rbp-128h] BYREF
  __int64 v21; // [rsp+48h] [rbp-F0h]
  __int64 v22; // [rsp+50h] [rbp-E8h]
  __int64 v23; // [rsp+58h] [rbp-E0h]
  __int64 v24; // [rsp+60h] [rbp-D8h]
  __int64 v25; // [rsp+68h] [rbp-D0h]
  __int64 v26; // [rsp+70h] [rbp-C8h]
  __int64 v27; // [rsp+78h] [rbp-C0h]
  __int64 v28; // [rsp+80h] [rbp-B8h]
  __int64 v29; // [rsp+88h] [rbp-B0h]
  __int64 v30; // [rsp+90h] [rbp-A8h]
  __int64 v31; // [rsp+98h] [rbp-A0h]
  __int64 v32; // [rsp+A0h] [rbp-98h]
  __int64 v33; // [rsp+A8h] [rbp-90h]
  __int64 v34; // [rsp+B0h] [rbp-88h]
  __int64 v35; // [rsp+B8h] [rbp-80h]
  __int64 v36; // [rsp+C0h] [rbp-78h]
  __int64 v37; // [rsp+C8h] [rbp-70h]
  __int64 v38; // [rsp+D0h] [rbp-68h]
  __int64 v39; // [rsp+D8h] [rbp-60h]
  __int64 v40; // [rsp+E0h] [rbp-58h]
  __int64 v41; // [rsp+E8h] [rbp-50h]
  __int64 v42; // [rsp+F0h] [rbp-48h]
  __int64 v43; // [rsp+F8h] [rbp-40h]
  __int64 v44; // [rsp+100h] [rbp-38h]
  __int64 v45; // [rsp+108h] [rbp-30h]

  v5 = *(std::string::size_type **)a3;
  v6 = (__int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) >> 5;
  if ( v6 > 0x20 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v20,
      LOGLEVEL_FATAL_0,
      "google/protobuf/stubs/stringprintf.cc",
      141);
    v14 = google::protobuf::internal::LogMessage::operator<<(
            &v20,
            "CHECK failed: (v.size()) <= (kStringPrintfVectorMaxArgs): ");
    v15 = google::protobuf::internal::LogMessage::operator<<(v14, "StringPrintfVector currently only supports up to ");
    v16 = google::protobuf::internal::LogMessage::operator<<(v15, 32);
    v17 = google::protobuf::internal::LogMessage::operator<<(v16, " arguments. ");
    v18 = google::protobuf::internal::LogMessage::operator<<(v17, "Feel free to add support for more if you need it.");
    google::protobuf::internal::LogFinisher::operator=(&v19, v18);
    google::protobuf::internal::LogMessage::~LogMessage(&v20);
    v5 = *(std::string::size_type **)a3;
    v6 = (__int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) >> 5;
    v7 = v6;
    if ( v6 )
      goto LABEL_3;
LABEL_9:
    for ( i = 0LL; i <= 0x1F; ++i )
LABEL_6:
      *((_QWORD *)&v20.level_ + i) = &google::protobuf::string_printf_empty_block;
    goto LABEL_7;
  }
  v7 = (__int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) >> 5;
  if ( !v6 )
    goto LABEL_9;
LABEL_3:
  v8 = &v20;
  v9 = &v5[4 * v7];
  do
  {
    v10 = *v5;
    v5 += 4;
    v8 = (google::protobuf::internal::LogMessage_0 *)((char *)v8 + 8);
    *(&v8[-1].message_._anon_0._M_allocated_capacity + 1) = v10;
  }
  while ( v5 != v9 );
  i = (int)v6;
  if ( (unsigned __int64)(int)v6 <= 0x1F )
    goto LABEL_6;
LABEL_7:
  google::protobuf::StringPrintf[abi:cxx11](
    dst,
    a2,
    *(_QWORD *)&v20.level_,
    v20.filename_,
    *(_QWORD *)&v20.line_,
    v20.message_._M_dataplus._M_p,
    v20.message_._M_string_length,
    *(_OWORD *)&v20.message_._anon_0,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  return dst;
};

// Line 141: range 000000000C72CAFA-000000000C72CB05
void __fastcall __noreturn google::protobuf::StringPrintfVector()
{
  google::protobuf::internal::LogMessage_0 *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  google::protobuf::internal::LogMessage::~LogMessage(v0);
  _Unwind_Resume(v1);
};

// Line 174: range 000000000C746D60-000000000C746D81
void __cdecl GLOBAL__sub_I__ZN6google8protobuf13StringAppendVEPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPKcP13__va_list_tag()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
