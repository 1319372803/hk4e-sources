// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/util/internal/datapiece.h

// Line 115: range 000000000C957A50-000000000C957A62
void __fastcall google::protobuf::util::converter::DataPiece::~DataPiece(
        google::protobuf::util::converter::DataPiece *const this)
{
  ;
};

// Line 118: range 000000000C95C9A0-000000000C95CCF0
void __fastcall google::protobuf::util::converter::ObjectWriter::RenderDataPieceTo(
        google::protobuf::util::converter::ObjectWriter *this,
        const google::protobuf::util::converter::DataPiece *a2,
        google::protobuf::StringPiece a3,
        google::protobuf::util::converter::ObjectWriter *a4)
{
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // r13
  const char *ptr; // r12
  google::protobuf::stringpiece_ssize_type length; // rbp
  void (__fastcall *v9)(google::protobuf::stringpiece_ssize_type, const google::protobuf::util::converter::DataPiece *, const char *, _QWORD); // rbx
  void (__fastcall *v10)(google::protobuf::stringpiece_ssize_type, const google::protobuf::util::converter::DataPiece *, const char *, double); // rbx
  void (__fastcall *v11)(google::protobuf::stringpiece_ssize_type, const google::protobuf::util::converter::DataPiece *, const char *, float); // rbx
  void (__fastcall *v12)(google::protobuf::stringpiece_ssize_type, const google::protobuf::util::converter::DataPiece *, const char *, _QWORD); // rbx
  void (__fastcall *v13)(google::protobuf::stringpiece_ssize_type, const google::protobuf::util::converter::DataPiece *, const char *, _QWORD, __int64); // rbx
  google::protobuf::util::StatusOr<int> v14; // [rsp+0h] [rbp-78h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h]
  char v16; // [rsp+38h] [rbp-40h] BYREF
  __int64 v17; // [rsp+58h] [rbp-20h]
  __int64 v18; // [rsp+60h] [rbp-18h]
  __int64 v19; // [rsp+68h] [rbp-10h]

  v19 = v6;
  v18 = v5;
  ptr = a3.ptr_;
  v17 = v4;
  length = a3.length_;
  switch ( *(_DWORD *)&this->use_strict_base64_decoding_ )
  {
    case 1:
      v9 = *(void (__fastcall **)(google::protobuf::stringpiece_ssize_type, const google::protobuf::util::converter::DataPiece *, const char *, _QWORD))(*(_QWORD *)a3.length_ + 56LL);
      google::protobuf::util::converter::DataPiece::ToInt32(
        &v14,
        (const google::protobuf::util::converter::DataPiece *const)this);
      if ( v14.status_.error_code_ )
        google::protobuf::util::internal::StatusOrHelper::Crash(
          (google::protobuf::util::internal::StatusOrHelper *)&v14,
          (const google::protobuf::util::Status *)this);
      goto LABEL_4;
    case 2:
      v10 = *(void (__fastcall **)(google::protobuf::stringpiece_ssize_type, const google::protobuf::util::converter::DataPiece *, const char *, double))(*(_QWORD *)a3.length_ + 72LL);
      google::protobuf::util::converter::DataPiece::ToInt64(
        (google::protobuf::util::StatusOr<long int> *)&v14,
        (const google::protobuf::util::converter::DataPiece *const)this);
      if ( v14.status_.error_code_ )
        google::protobuf::util::internal::StatusOrHelper::Crash(
          (google::protobuf::util::internal::StatusOrHelper *)&v14,
          (const google::protobuf::util::Status *)this);
      goto LABEL_20;
    case 3:
      v9 = *(void (__fastcall **)(google::protobuf::stringpiece_ssize_type, const google::protobuf::util::converter::DataPiece *, const char *, _QWORD))(*(_QWORD *)a3.length_ + 64LL);
      google::protobuf::util::converter::DataPiece::ToUint32(
        (google::protobuf::util::StatusOr<unsigned int> *)&v14,
        (const google::protobuf::util::converter::DataPiece *const)this);
      if ( v14.status_.error_code_ )
        google::protobuf::util::internal::StatusOrHelper::Crash(
          (google::protobuf::util::internal::StatusOrHelper *)&v14,
          (const google::protobuf::util::Status *)this);
LABEL_4:
      v9(length, a2, ptr, (unsigned int)v14.value_);
      goto LABEL_5;
    case 4:
      v10 = *(void (__fastcall **)(google::protobuf::stringpiece_ssize_type, const google::protobuf::util::converter::DataPiece *, const char *, double))(*(_QWORD *)a3.length_ + 80LL);
      google::protobuf::util::converter::DataPiece::ToUint64(
        (google::protobuf::util::StatusOr<long unsigned int> *)&v14,
        (const google::protobuf::util::converter::DataPiece *const)this);
      if ( v14.status_.error_code_ )
        google::protobuf::util::internal::StatusOrHelper::Crash(
          (google::protobuf::util::internal::StatusOrHelper *)&v14,
          (const google::protobuf::util::Status *)this);
      goto LABEL_20;
    case 5:
      v10 = *(void (__fastcall **)(google::protobuf::stringpiece_ssize_type, const google::protobuf::util::converter::DataPiece *, const char *, double))(*(_QWORD *)a3.length_ + 88LL);
      google::protobuf::util::converter::DataPiece::ToDouble(
        (google::protobuf::util::converter::DataPiece *)&v14,
        (__int64)this);
      if ( v14.status_.error_code_ )
        google::protobuf::util::internal::StatusOrHelper::Crash(
          (google::protobuf::util::internal::StatusOrHelper *)&v14,
          (const google::protobuf::util::Status *)this);
LABEL_20:
      v10(length, a2, ptr, *(double *)&v14.value_);
      goto LABEL_5;
    case 6:
      v11 = *(void (__fastcall **)(google::protobuf::stringpiece_ssize_type, const google::protobuf::util::converter::DataPiece *, const char *, float))(*(_QWORD *)a3.length_ + 96LL);
      google::protobuf::util::converter::DataPiece::ToFloat(
        (google::protobuf::util::converter::DataPiece *)&v14,
        (__int64)this,
        (__int64)a3.ptr_,
        (std::forward_iterator_tag)a3.length_);
      if ( v14.status_.error_code_ )
        google::protobuf::util::internal::StatusOrHelper::Crash(
          (google::protobuf::util::internal::StatusOrHelper *)&v14,
          (const google::protobuf::util::Status *)(unsigned int)v14.status_.error_code_);
      v11(length, a2, ptr, *(float *)&v14.value_);
      goto LABEL_5;
    case 7:
      v12 = *(void (__fastcall **)(google::protobuf::stringpiece_ssize_type, const google::protobuf::util::converter::DataPiece *, const char *, _QWORD))(*(_QWORD *)a3.length_ + 48LL);
      google::protobuf::util::converter::DataPiece::ToBool(
        (google::protobuf::util::converter::DataPiece *)&v14,
        (__int64)this);
      if ( v14.status_.error_code_ )
        google::protobuf::util::internal::StatusOrHelper::Crash(
          (google::protobuf::util::internal::StatusOrHelper *)&v14,
          (const google::protobuf::util::Status *)this);
      v12(length, a2, ptr, LOBYTE(v14.value_));
      goto LABEL_5;
    case 9:
      v13 = *(void (__fastcall **)(google::protobuf::stringpiece_ssize_type, const google::protobuf::util::converter::DataPiece *, const char *, _QWORD, __int64))(*(_QWORD *)a3.length_ + 104LL);
      google::protobuf::util::converter::DataPiece::ToString[abi:cxx11](
        &v14.status_,
        (__int64)this,
        (__int64)a3.ptr_,
        (std::forward_iterator_tag)a3.length_);
      if ( v14.status_.error_code_ )
        google::protobuf::util::internal::StatusOrHelper::Crash(
          (google::protobuf::util::internal::StatusOrHelper *)&v14,
          (const google::protobuf::util::Status *)this);
      goto LABEL_29;
    case 0xA:
      v13 = *(void (__fastcall **)(google::protobuf::stringpiece_ssize_type, const google::protobuf::util::converter::DataPiece *, const char *, _QWORD, __int64))(*(_QWORD *)a3.length_ + 112LL);
      google::protobuf::util::converter::DataPiece::ToBytes[abi:cxx11](
        &v14.status_,
        (__int64)this,
        (__int64)a3.ptr_,
        (std::forward_iterator_tag)a3.length_);
      if ( v14.status_.error_code_ )
        google::protobuf::util::internal::StatusOrHelper::Crash(
          (google::protobuf::util::internal::StatusOrHelper *)&v14,
          (const google::protobuf::util::Status *)this);
LABEL_29:
      v13(length, a2, ptr, *(_QWORD *)&v14.value_, v15);
      if ( *(char **)&v14.value_ != &v16 )
        operator delete(*(void **)&v14.value_);
LABEL_5:
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v14.status_.error_message_._M_dataplus._M_p != &v14.status_.error_message_._anon_0 )
        operator delete(v14.status_.error_message_._M_dataplus._M_p);
      break;
    case 0xB:
      (*(void (__fastcall **)(google::protobuf::stringpiece_ssize_type))(*(_QWORD *)a3.length_ + 120LL))(a3.length_);
      break;
    default:
      return;
  }
};

// Line 123: range 000000000C733D42-000000000C733D59
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectWriter::RenderFieldMask(
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
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        google::protobuf::internal::LogMessage_0 a20)
{
  struct _Unwind_Exception *v20; // rbx
  __int64 v21; // r13

  google::protobuf::internal::LogMessage::~LogMessage(&a20);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
  _Unwind_Resume(v20);
};
