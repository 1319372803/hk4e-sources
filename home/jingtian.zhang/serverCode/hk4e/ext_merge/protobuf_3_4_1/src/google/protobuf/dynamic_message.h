// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/dynamic_message.h

// Line 189: range 000000000C8C7640-000000000C8C7941
bool __fastcall google::protobuf::DynamicMapSorter::MapEntryMessageComparator::operator()(
        google::protobuf::DynamicMapSorter::MapEntryMessageComparator *const this,
        const google::protobuf::Message *a,
        const google::protobuf::Message *b)
{
  const google::protobuf::Message::Reflection *(__fastcall *v4)(const google::protobuf::Message *const); // rdx
  __int64 v5; // rdx
  __int64 v6; // rbp
  google::protobuf::internal::LogMessage_0 *v7; // rax
  _BOOL4 v8; // eax
  int v9; // r12d
  __int64 v10; // r12
  unsigned int v11; // r12d
  unsigned __int64 v12; // r12
  unsigned __int8 v13; // r12
  size_t v14; // rbx
  const char *filename; // r12
  google::protobuf::internal::LogMessage_0 *v16; // r13
  char *v17; // rbp
  size_t v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rbx
  bool v22; // [rsp+Fh] [rbp-89h]
  bool v23; // [rsp+Fh] [rbp-89h]
  google::protobuf::internal::LogFinisher v24[8]; // [rsp+10h] [rbp-88h] BYREF
  size_t n; // [rsp+18h] [rbp-80h]
  char v26; // [rsp+20h] [rbp-78h] BYREF
  google::protobuf::internal::LogMessage_0 v27; // [rsp+30h] [rbp-68h] BYREF

  v4 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*((_QWORD *)a->_vptr_MessageLite + 23);
  if ( v4 == google::protobuf::Message::GetReflection )
  {
    (*((void (__fastcall **)(const google::protobuf::Message *))a->_vptr_MessageLite + 24))(a);
    v6 = v5;
  }
  else
  {
    v6 = (__int64)v4(a);
  }
  switch ( (unsigned int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)this->field_) )
  {
    case 3u:
      v10 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 144LL))(
              v6,
              a,
              this->field_);
      LOBYTE(v8) = v10 < (*(__int64 (__fastcall **)(__int64, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 144LL))(
                           v6,
                           b,
                           this->field_);
      break;
    case 4u:
    case 6u:
      v12 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 160LL))(
              v6,
              a,
              this->field_);
      LOBYTE(v8) = v12 < (*(__int64 (__fastcall **)(__int64, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 160LL))(
                           v6,
                           b,
                           this->field_);
      break;
    case 5u:
      v9 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 136LL))(
             v6,
             a,
             this->field_);
      LOBYTE(v8) = v9 < (*(int (__fastcall **)(__int64, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 136LL))(
                          v6,
                          b,
                          this->field_);
      break;
    case 7u:
      v11 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 152LL))(
              v6,
              a,
              this->field_);
      LOBYTE(v8) = v11 < (*(unsigned int (__fastcall **)(__int64, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 152LL))(
                           v6,
                           b,
                           this->field_);
      break;
    case 8u:
      v13 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 184LL))(
              v6,
              a,
              this->field_);
      LOBYTE(v8) = v13 < (*(unsigned __int8 (__fastcall **)(__int64, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 184LL))(
                           v6,
                           b,
                           this->field_);
      break;
    case 9u:
      (*(void (__fastcall **)(google::protobuf::internal::LogFinisher *, __int64, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 192LL))(
        v24,
        v6,
        a,
        this->field_);
      (*(void (__fastcall **)(google::protobuf::internal::LogMessage_0 *, __int64, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 192LL))(
        &v27,
        v6,
        b,
        this->field_);
      v14 = n;
      filename = v27.filename_;
      v16 = *(google::protobuf::internal::LogMessage_0 **)&v27.level_;
      v17 = *(char **)v24[0].gap0;
      v18 = (size_t)v27.filename_;
      if ( (const char *)n <= v27.filename_ )
        v18 = n;
      if ( v18 && (v19 = memcmp(*(const void **)v24[0].gap0, *(const void **)&v27.level_, v18)) != 0 )
      {
        v8 = v19 >> 31;
      }
      else
      {
        v20 = v14 - (_QWORD)filename;
        LOBYTE(v8) = 0;
        if ( v20 <= 0x7FFFFFFF )
          LOBYTE(v8) = v20 < (__int64)0xFFFFFFFF80000000LL || (int)v20 < 0;
      }
      if ( v16 != (google::protobuf::internal::LogMessage_0 *)&v27.line_ )
      {
        v22 = v8;
        operator delete(v16);
        v17 = *(char **)v24[0].gap0;
        LOBYTE(v8) = v22;
      }
      if ( v17 != &v26 )
      {
        v23 = v8;
        operator delete(v17);
        LOBYTE(v8) = v23;
      }
      break;
    default:
      google::protobuf::internal::LogMessage::LogMessage(
        &v27,
        LOGLEVEL_ERROR_0,
        "./google/protobuf/dynamic_message.h",
        223);
      v7 = google::protobuf::internal::LogMessage::operator<<(&v27, "Invalid key for map field.");
      google::protobuf::internal::LogFinisher::operator=(v24, v7);
      google::protobuf::internal::LogMessage::~LogMessage(&v27);
      LOBYTE(v8) = 1;
      break;
  }
  return v8;
};
