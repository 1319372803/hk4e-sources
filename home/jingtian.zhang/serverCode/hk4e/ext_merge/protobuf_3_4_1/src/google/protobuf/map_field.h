// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/map_field.h

// Line 70: range 000000000C72AC18-000000000C72AC23
void __fastcall __noreturn google::protobuf::internal::DynamicMapField::DynamicMapField()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::Mutex *v1; // r13

  google::protobuf::internal::Mutex::~Mutex(v1);
  _Unwind_Resume(v0);
};

// Line 362: range 000000000C8AB540-000000000C8AB581
void __fastcall google::protobuf::MapKey::~MapKey(google::protobuf::MapKey *const this)
{
  void **int64_value; // rbp

  if ( this->type_ == 9 )
  {
    int64_value = (void **)this->val_.int64_value_;
    if ( this->val_.int64_value_ )
    {
      if ( *int64_value != int64_value + 2 )
        operator delete(*int64_value);
      operator delete(int64_value, 0x20uLL);
    }
  }
};

// Line 368: range 000000000C8D5C40-000000000C8D5CCC
google::protobuf::FieldDescriptor::CppType __fastcall google::protobuf::MapKey::type(
        const google::protobuf::MapKey *const this)
{
  google::protobuf::FieldDescriptor::CppType result; // eax
  google::protobuf::internal::LogMessage_0 *v2; // rax
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogFinisher v5; // [rsp+1h] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v6; // [rsp+2h] [rbp-58h] BYREF

  result = this->type_;
  if ( !result )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v6, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 369);
    v2 = google::protobuf::internal::LogMessage::operator<<(&v6, "Protocol Buffer map usage error:\n");
    v3 = google::protobuf::internal::LogMessage::operator<<(v2, "MapKey::type MapKey is not initialized. ");
    v4 = google::protobuf::internal::LogMessage::operator<<(v3, "Call set methods to initialize MapKey.");
    google::protobuf::internal::LogFinisher::operator=(&v5, v4);
    google::protobuf::internal::LogMessage::~LogMessage(&v6);
    return this->type_;
  }
  return result;
};

// Line 369: range 000000000C72B032-000000000C72B04C
void __fastcall __noreturn google::protobuf::internal::DynamicMapField::InsertOrLookupMapValue(
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
        google::protobuf::MapKey a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        google::protobuf::internal::LogMessage_0 a21)
{
  struct _Unwind_Exception *v21; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a21);
  google::protobuf::MapKey::~MapKey(&a14);
  _Unwind_Resume(v21);
};

// Line 369: range 000000000C72ACA8-000000000C72ACC2
void __fastcall __noreturn google::protobuf::internal::DynamicMapField::SyncRepeatedFieldWithMapNoLock(
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
        google::protobuf::internal::LogMessage_0 a14,
        __int64 a15,
        google::protobuf::internal::LogMessage_0 a16)
{
  struct _Unwind_Exception *v16; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a16);
  google::protobuf::internal::LogMessage::~LogMessage(&a14);
  _Unwind_Resume(v16);
};

// Line 402: range 000000000C8D5CE0-000000000C8D5DC6
google::protobuf::int64 __fastcall google::protobuf::MapKey::GetInt64Value(const google::protobuf::MapKey *const this)
{
  google::protobuf::internal::LogMessage_0 *v2; // rax
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // rbp
  google::protobuf::FieldDescriptor::CppType v9; // eax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogFinisher v11; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v12; // [rsp+10h] [rbp-58h] BYREF

  if ( google::protobuf::MapKey::type(this) != CPPTYPE_INT64_0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v12, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 403);
    v2 = google::protobuf::internal::LogMessage::operator<<(&v12, "Protocol Buffer map usage error:\n");
    v3 = google::protobuf::internal::LogMessage::operator<<(v2, "MapKey::GetInt64Value");
    v4 = google::protobuf::internal::LogMessage::operator<<(v3, " type does not match\n");
    v5 = google::protobuf::internal::LogMessage::operator<<(v4, "  Expected : ");
    v6 = google::protobuf::internal::LogMessage::operator<<(v5, google::protobuf::FieldDescriptor::kCppTypeToName[2]);
    v7 = google::protobuf::internal::LogMessage::operator<<(v6, "\n");
    v8 = google::protobuf::internal::LogMessage::operator<<(v7, "  Actual   : ");
    v9 = google::protobuf::MapKey::type(this);
    v10 = google::protobuf::internal::LogMessage::operator<<(v8, google::protobuf::FieldDescriptor::kCppTypeToName[v9]);
    google::protobuf::internal::LogFinisher::operator=(&v11, v10);
    google::protobuf::internal::LogMessage::~LogMessage(&v12);
  }
  return this->val_.int64_value_;
};

// Line 407: range 000000000C8D5DD0-000000000C8D5EB6
google::protobuf::uint64 __fastcall google::protobuf::MapKey::GetUInt64Value(
        const google::protobuf::MapKey *const this)
{
  google::protobuf::internal::LogMessage_0 *v2; // rax
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // rbp
  google::protobuf::FieldDescriptor::CppType v9; // eax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogFinisher v11; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v12; // [rsp+10h] [rbp-58h] BYREF

  if ( google::protobuf::MapKey::type(this) != CPPTYPE_UINT64_0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v12, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 408);
    v2 = google::protobuf::internal::LogMessage::operator<<(&v12, "Protocol Buffer map usage error:\n");
    v3 = google::protobuf::internal::LogMessage::operator<<(v2, "MapKey::GetUInt64Value");
    v4 = google::protobuf::internal::LogMessage::operator<<(v3, " type does not match\n");
    v5 = google::protobuf::internal::LogMessage::operator<<(v4, "  Expected : ");
    v6 = google::protobuf::internal::LogMessage::operator<<(v5, google::protobuf::FieldDescriptor::kCppTypeToName[4]);
    v7 = google::protobuf::internal::LogMessage::operator<<(v6, "\n");
    v8 = google::protobuf::internal::LogMessage::operator<<(v7, "  Actual   : ");
    v9 = google::protobuf::MapKey::type(this);
    v10 = google::protobuf::internal::LogMessage::operator<<(v8, google::protobuf::FieldDescriptor::kCppTypeToName[v9]);
    google::protobuf::internal::LogFinisher::operator=(&v11, v10);
    google::protobuf::internal::LogMessage::~LogMessage(&v12);
  }
  return this->val_.int64_value_;
};

// Line 412: range 000000000C8D5EC0-000000000C8D5FA5
google::protobuf::int32 __fastcall google::protobuf::MapKey::GetInt32Value(const google::protobuf::MapKey *const this)
{
  google::protobuf::internal::LogMessage_0 *v2; // rax
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // rbp
  google::protobuf::FieldDescriptor::CppType v9; // eax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogFinisher v11; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v12; // [rsp+10h] [rbp-58h] BYREF

  if ( google::protobuf::MapKey::type(this) != CPPTYPE_INT32_0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v12, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 413);
    v2 = google::protobuf::internal::LogMessage::operator<<(&v12, "Protocol Buffer map usage error:\n");
    v3 = google::protobuf::internal::LogMessage::operator<<(v2, "MapKey::GetInt32Value");
    v4 = google::protobuf::internal::LogMessage::operator<<(v3, " type does not match\n");
    v5 = google::protobuf::internal::LogMessage::operator<<(v4, "  Expected : ");
    v6 = google::protobuf::internal::LogMessage::operator<<(v5, google::protobuf::FieldDescriptor::kCppTypeToName[1]);
    v7 = google::protobuf::internal::LogMessage::operator<<(v6, "\n");
    v8 = google::protobuf::internal::LogMessage::operator<<(v7, "  Actual   : ");
    v9 = google::protobuf::MapKey::type(this);
    v10 = google::protobuf::internal::LogMessage::operator<<(v8, google::protobuf::FieldDescriptor::kCppTypeToName[v9]);
    google::protobuf::internal::LogFinisher::operator=(&v11, v10);
    google::protobuf::internal::LogMessage::~LogMessage(&v12);
  }
  return this->val_.int32_value_;
};

// Line 417: range 000000000C8D5FB0-000000000C8D6095
google::protobuf::uint32 __fastcall google::protobuf::MapKey::GetUInt32Value(
        const google::protobuf::MapKey *const this)
{
  google::protobuf::internal::LogMessage_0 *v2; // rax
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // rbp
  google::protobuf::FieldDescriptor::CppType v9; // eax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogFinisher v11; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v12; // [rsp+10h] [rbp-58h] BYREF

  if ( google::protobuf::MapKey::type(this) != CPPTYPE_UINT32_0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v12, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 418);
    v2 = google::protobuf::internal::LogMessage::operator<<(&v12, "Protocol Buffer map usage error:\n");
    v3 = google::protobuf::internal::LogMessage::operator<<(v2, "MapKey::GetUInt32Value");
    v4 = google::protobuf::internal::LogMessage::operator<<(v3, " type does not match\n");
    v5 = google::protobuf::internal::LogMessage::operator<<(v4, "  Expected : ");
    v6 = google::protobuf::internal::LogMessage::operator<<(v5, google::protobuf::FieldDescriptor::kCppTypeToName[3]);
    v7 = google::protobuf::internal::LogMessage::operator<<(v6, "\n");
    v8 = google::protobuf::internal::LogMessage::operator<<(v7, "  Actual   : ");
    v9 = google::protobuf::MapKey::type(this);
    v10 = google::protobuf::internal::LogMessage::operator<<(v8, google::protobuf::FieldDescriptor::kCppTypeToName[v9]);
    google::protobuf::internal::LogFinisher::operator=(&v11, v10);
    google::protobuf::internal::LogMessage::~LogMessage(&v12);
  }
  return this->val_.int32_value_;
};

// Line 422: range 000000000C8D60A0-000000000C8D6186
bool __fastcall google::protobuf::MapKey::GetBoolValue(const google::protobuf::MapKey *const this)
{
  google::protobuf::internal::LogMessage_0 *v2; // rax
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // rbp
  google::protobuf::FieldDescriptor::CppType v9; // eax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogFinisher v11; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v12; // [rsp+10h] [rbp-58h] BYREF

  if ( google::protobuf::MapKey::type(this) != CPPTYPE_BOOL_0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v12, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 423);
    v2 = google::protobuf::internal::LogMessage::operator<<(&v12, "Protocol Buffer map usage error:\n");
    v3 = google::protobuf::internal::LogMessage::operator<<(v2, "MapKey::GetBoolValue");
    v4 = google::protobuf::internal::LogMessage::operator<<(v3, " type does not match\n");
    v5 = google::protobuf::internal::LogMessage::operator<<(v4, "  Expected : ");
    v6 = google::protobuf::internal::LogMessage::operator<<(v5, google::protobuf::FieldDescriptor::kCppTypeToName[7]);
    v7 = google::protobuf::internal::LogMessage::operator<<(v6, "\n");
    v8 = google::protobuf::internal::LogMessage::operator<<(v7, "  Actual   : ");
    v9 = google::protobuf::MapKey::type(this);
    v10 = google::protobuf::internal::LogMessage::operator<<(v8, google::protobuf::FieldDescriptor::kCppTypeToName[v9]);
    google::protobuf::internal::LogFinisher::operator=(&v11, v10);
    google::protobuf::internal::LogMessage::~LogMessage(&v12);
  }
  return this->val_.bool_value_;
};

// Line 427: range 000000000C8D6190-000000000C8D6276
const std::string *__fastcall google::protobuf::MapKey::GetStringValue[abi:cxx11](
        const google::protobuf::MapKey *const this)
{
  google::protobuf::internal::LogMessage_0 *v2; // rax
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // rbp
  google::protobuf::FieldDescriptor::CppType v9; // eax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogFinisher v11; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v12; // [rsp+10h] [rbp-58h] BYREF

  if ( google::protobuf::MapKey::type(this) != CPPTYPE_STRING_0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v12, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 428);
    v2 = google::protobuf::internal::LogMessage::operator<<(&v12, "Protocol Buffer map usage error:\n");
    v3 = google::protobuf::internal::LogMessage::operator<<(v2, "MapKey::GetStringValue");
    v4 = google::protobuf::internal::LogMessage::operator<<(v3, " type does not match\n");
    v5 = google::protobuf::internal::LogMessage::operator<<(v4, "  Expected : ");
    v6 = google::protobuf::internal::LogMessage::operator<<(v5, google::protobuf::FieldDescriptor::kCppTypeToName[9]);
    v7 = google::protobuf::internal::LogMessage::operator<<(v6, "\n");
    v8 = google::protobuf::internal::LogMessage::operator<<(v7, "  Actual   : ");
    v9 = google::protobuf::MapKey::type(this);
    v10 = google::protobuf::internal::LogMessage::operator<<(v8, google::protobuf::FieldDescriptor::kCppTypeToName[v9]);
    google::protobuf::internal::LogFinisher::operator=(&v11, v10);
    google::protobuf::internal::LogMessage::~LogMessage(&v12);
  }
  return (const std::string *)this->val_.int64_value_;
};

// Line 491: range 000000000C8D6280-000000000C8D63FD
void __fastcall google::protobuf::MapKey::CopyFrom(
        google::protobuf::MapKey *const this,
        const google::protobuf::MapKey *other)
{
  int v2; // ebx
  int type; // eax
  int v4; // r12d
  google::protobuf::internal::LogMessage_0 *v5; // rax
  void **int64_value; // r14
  google::protobuf::MapKey::KeyValue v7; // rax
  google::protobuf::internal::LogFinisher v8; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v9; // [rsp+10h] [rbp-68h] BYREF

  v2 = google::protobuf::MapKey::type(other);
  type = this->type_;
  v4 = v2;
  if ( type == v2 )
    goto LABEL_4;
  if ( type != 9 || (int64_value = (void **)this->val_.int64_value_) == 0LL )
  {
    this->type_ = v2;
    if ( v2 != 9 )
      goto LABEL_4;
    goto LABEL_12;
  }
  if ( *int64_value != int64_value + 2 )
    operator delete(*int64_value);
  operator delete(int64_value, 0x20uLL);
  this->type_ = v2;
  if ( v2 == 9 )
  {
LABEL_12:
    v7.int64_value_ = operator new(0x20uLL);
    v4 = this->type_;
    *(_QWORD *)(v7.int64_value_ + 8) = 0LL;
    v7.string_value_->_M_dataplus._M_p = (std::string::pointer)(v7.int64_value_ + 16);
    *(_BYTE *)(v7.int64_value_ + 16) = 0;
    this->val_ = v7;
  }
LABEL_4:
  switch ( v4 )
  {
    case 1:
    case 3:
      this->val_.int32_value_ = other->val_.int32_value_;
      break;
    case 2:
    case 4:
      this->val_.int64_value_ = other->val_.int64_value_;
      break;
    case 5:
    case 6:
    case 8:
    case 10:
      google::protobuf::internal::LogMessage::LogMessage(&v9, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 498);
      v5 = google::protobuf::internal::LogMessage::operator<<(&v9, "Unsupported");
      google::protobuf::internal::LogFinisher::operator=(&v8, v5);
      google::protobuf::internal::LogMessage::~LogMessage(&v9);
      break;
    case 7:
      this->val_.bool_value_ = other->val_.bool_value_;
      break;
    case 9:
      ((void (__fastcall *)(_QWORD, _QWORD))std::string::_M_assign)(
        (google::protobuf::MapKey::KeyValue)this->val_.int64_value_,
        (google::protobuf::MapKey::KeyValue)other->val_.int64_value_);
      break;
    default:
      return;
  }
};

// Line 498: range 000000000C72ABD0-000000000C72ABDB
void __fastcall __noreturn google::protobuf::internal::DynamicMapField::SetMapIteratorValue()
{
  google::protobuf::internal::LogMessage_0 *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  google::protobuf::internal::LogMessage::~LogMessage(v0);
  _Unwind_Resume(v1);
};

// Line 498: range 000000000C72B100-000000000C72B11A
void __fastcall __noreturn google::protobuf::internal::DynamicMapField::SyncMapWithRepeatedFieldNoLock(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        google::protobuf::MapKey *a7,
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
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        google::protobuf::internal::LogMessage_0 a26)
{
  struct _Unwind_Exception *v26; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a26);
  google::protobuf::MapKey::~MapKey(a7);
  _Unwind_Resume(v26);
};

// Line 604: range 000000000C8D6770-000000000C8D68BF
google::protobuf::int64 __fastcall google::protobuf::MapValueRef::GetInt64Value(
        const google::protobuf::MapValueRef *const this)
{
  int type; // eax
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // r12
  google::protobuf::FieldDescriptor::CppType v12; // eax
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogFinisher v14; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v15; // [rsp+10h] [rbp-58h] BYREF

  type = this->type_;
  if ( type && this->data_ )
  {
    if ( type == 2 )
      return *(_QWORD *)this->data_;
  }
  else
  {
    google::protobuf::internal::LogMessage::LogMessage(&v15, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 680);
    v3 = google::protobuf::internal::LogMessage::operator<<(&v15, "Protocol Buffer map usage error:\n");
    v4 = google::protobuf::internal::LogMessage::operator<<(v3, "MapValueRef::type MapValueRef is not initialized.");
    google::protobuf::internal::LogFinisher::operator=(&v14, v4);
    google::protobuf::internal::LogMessage::~LogMessage(&v15);
    if ( this->type_ == 2 )
      return *(_QWORD *)this->data_;
  }
  google::protobuf::internal::LogMessage::LogMessage(&v15, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 605);
  v5 = google::protobuf::internal::LogMessage::operator<<(&v15, "Protocol Buffer map usage error:\n");
  v6 = google::protobuf::internal::LogMessage::operator<<(v5, "MapValueRef::GetInt64Value");
  v7 = google::protobuf::internal::LogMessage::operator<<(v6, " type does not match\n");
  v8 = google::protobuf::internal::LogMessage::operator<<(v7, "  Expected : ");
  v9 = google::protobuf::internal::LogMessage::operator<<(v8, google::protobuf::FieldDescriptor::kCppTypeToName[2]);
  v10 = google::protobuf::internal::LogMessage::operator<<(v9, "\n");
  v11 = google::protobuf::internal::LogMessage::operator<<(v10, "  Actual   : ");
  v12 = google::protobuf::MapValueRef::type(this);
  v13 = google::protobuf::internal::LogMessage::operator<<(v11, google::protobuf::FieldDescriptor::kCppTypeToName[v12]);
  google::protobuf::internal::LogFinisher::operator=(&v14, v13);
  google::protobuf::internal::LogMessage::~LogMessage(&v15);
  return *(_QWORD *)this->data_;
};

// Line 609: range 000000000C8D6590-000000000C8D6679
google::protobuf::uint64 __fastcall google::protobuf::MapValueRef::GetUInt64Value(
        const google::protobuf::MapValueRef *const this)
{
  google::protobuf::internal::LogMessage_0 *v2; // rax
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // rbp
  google::protobuf::FieldDescriptor::CppType v9; // eax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogFinisher v11; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v12; // [rsp+10h] [rbp-58h] BYREF

  if ( google::protobuf::MapValueRef::type(this) != CPPTYPE_UINT64_0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v12, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 610);
    v2 = google::protobuf::internal::LogMessage::operator<<(&v12, "Protocol Buffer map usage error:\n");
    v3 = google::protobuf::internal::LogMessage::operator<<(v2, "MapValueRef::GetUInt64Value");
    v4 = google::protobuf::internal::LogMessage::operator<<(v3, " type does not match\n");
    v5 = google::protobuf::internal::LogMessage::operator<<(v4, "  Expected : ");
    v6 = google::protobuf::internal::LogMessage::operator<<(v5, google::protobuf::FieldDescriptor::kCppTypeToName[4]);
    v7 = google::protobuf::internal::LogMessage::operator<<(v6, "\n");
    v8 = google::protobuf::internal::LogMessage::operator<<(v7, "  Actual   : ");
    v9 = google::protobuf::MapValueRef::type(this);
    v10 = google::protobuf::internal::LogMessage::operator<<(v8, google::protobuf::FieldDescriptor::kCppTypeToName[v9]);
    google::protobuf::internal::LogFinisher::operator=(&v11, v10);
    google::protobuf::internal::LogMessage::~LogMessage(&v12);
  }
  return *(_QWORD *)this->data_;
};

// Line 614: range 000000000C8D6680-000000000C8D6768
google::protobuf::int32 __fastcall google::protobuf::MapValueRef::GetInt32Value(
        const google::protobuf::MapValueRef *const this)
{
  google::protobuf::internal::LogMessage_0 *v2; // rax
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // rbp
  google::protobuf::FieldDescriptor::CppType v9; // eax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogFinisher v11; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v12; // [rsp+10h] [rbp-58h] BYREF

  if ( google::protobuf::MapValueRef::type(this) != CPPTYPE_INT32_0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v12, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 615);
    v2 = google::protobuf::internal::LogMessage::operator<<(&v12, "Protocol Buffer map usage error:\n");
    v3 = google::protobuf::internal::LogMessage::operator<<(v2, "MapValueRef::GetInt32Value");
    v4 = google::protobuf::internal::LogMessage::operator<<(v3, " type does not match\n");
    v5 = google::protobuf::internal::LogMessage::operator<<(v4, "  Expected : ");
    v6 = google::protobuf::internal::LogMessage::operator<<(v5, google::protobuf::FieldDescriptor::kCppTypeToName[1]);
    v7 = google::protobuf::internal::LogMessage::operator<<(v6, "\n");
    v8 = google::protobuf::internal::LogMessage::operator<<(v7, "  Actual   : ");
    v9 = google::protobuf::MapValueRef::type(this);
    v10 = google::protobuf::internal::LogMessage::operator<<(v8, google::protobuf::FieldDescriptor::kCppTypeToName[v9]);
    google::protobuf::internal::LogFinisher::operator=(&v11, v10);
    google::protobuf::internal::LogMessage::~LogMessage(&v12);
  }
  return *(_DWORD *)this->data_;
};

// Line 619: range 000000000C8D64A0-000000000C8D6588
google::protobuf::uint32 __fastcall google::protobuf::MapValueRef::GetUInt32Value(
        const google::protobuf::MapValueRef *const this)
{
  google::protobuf::internal::LogMessage_0 *v2; // rax
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // rbp
  google::protobuf::FieldDescriptor::CppType v9; // eax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogFinisher v11; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v12; // [rsp+10h] [rbp-58h] BYREF

  if ( google::protobuf::MapValueRef::type(this) != CPPTYPE_UINT32_0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v12, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 620);
    v2 = google::protobuf::internal::LogMessage::operator<<(&v12, "Protocol Buffer map usage error:\n");
    v3 = google::protobuf::internal::LogMessage::operator<<(v2, "MapValueRef::GetUInt32Value");
    v4 = google::protobuf::internal::LogMessage::operator<<(v3, " type does not match\n");
    v5 = google::protobuf::internal::LogMessage::operator<<(v4, "  Expected : ");
    v6 = google::protobuf::internal::LogMessage::operator<<(v5, google::protobuf::FieldDescriptor::kCppTypeToName[3]);
    v7 = google::protobuf::internal::LogMessage::operator<<(v6, "\n");
    v8 = google::protobuf::internal::LogMessage::operator<<(v7, "  Actual   : ");
    v9 = google::protobuf::MapValueRef::type(this);
    v10 = google::protobuf::internal::LogMessage::operator<<(v8, google::protobuf::FieldDescriptor::kCppTypeToName[v9]);
    google::protobuf::internal::LogFinisher::operator=(&v11, v10);
    google::protobuf::internal::LogMessage::~LogMessage(&v12);
  }
  return *(_DWORD *)this->data_;
};

// Line 629: range 000000000C8D6A30-000000000C8D6B7E
int __fastcall google::protobuf::MapValueRef::GetEnumValue(const google::protobuf::MapValueRef *const this)
{
  int type; // eax
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // r12
  google::protobuf::FieldDescriptor::CppType v12; // eax
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogFinisher v14; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v15; // [rsp+10h] [rbp-58h] BYREF

  type = this->type_;
  if ( type && this->data_ )
  {
    if ( type == 8 )
      return *(_DWORD *)this->data_;
  }
  else
  {
    google::protobuf::internal::LogMessage::LogMessage(&v15, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 680);
    v3 = google::protobuf::internal::LogMessage::operator<<(&v15, "Protocol Buffer map usage error:\n");
    v4 = google::protobuf::internal::LogMessage::operator<<(v3, "MapValueRef::type MapValueRef is not initialized.");
    google::protobuf::internal::LogFinisher::operator=(&v14, v4);
    google::protobuf::internal::LogMessage::~LogMessage(&v15);
    if ( this->type_ == 8 )
      return *(_DWORD *)this->data_;
  }
  google::protobuf::internal::LogMessage::LogMessage(&v15, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 630);
  v5 = google::protobuf::internal::LogMessage::operator<<(&v15, "Protocol Buffer map usage error:\n");
  v6 = google::protobuf::internal::LogMessage::operator<<(v5, aMapvalueref);
  v7 = google::protobuf::internal::LogMessage::operator<<(v6, " type does not match\n");
  v8 = google::protobuf::internal::LogMessage::operator<<(v7, "  Expected : ");
  v9 = google::protobuf::internal::LogMessage::operator<<(v8, google::protobuf::FieldDescriptor::kCppTypeToName[8]);
  v10 = google::protobuf::internal::LogMessage::operator<<(v9, "\n");
  v11 = google::protobuf::internal::LogMessage::operator<<(v10, "  Actual   : ");
  v12 = google::protobuf::MapValueRef::type(this);
  v13 = google::protobuf::internal::LogMessage::operator<<(v11, google::protobuf::FieldDescriptor::kCppTypeToName[v12]);
  google::protobuf::internal::LogFinisher::operator=(&v14, v13);
  google::protobuf::internal::LogMessage::~LogMessage(&v15);
  return *(_DWORD *)this->data_;
};

// Line 634: range 000000000C8D68D0-000000000C8D6A1C
const std::string *__fastcall google::protobuf::MapValueRef::GetStringValue[abi:cxx11](
        const google::protobuf::MapValueRef *const this)
{
  int type; // eax
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // r12
  google::protobuf::FieldDescriptor::CppType v12; // eax
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogFinisher v14; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v15; // [rsp+10h] [rbp-58h] BYREF

  type = this->type_;
  if ( type && this->data_ )
  {
    if ( type == 9 )
      return (const std::string *)this->data_;
  }
  else
  {
    google::protobuf::internal::LogMessage::LogMessage(&v15, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 680);
    v3 = google::protobuf::internal::LogMessage::operator<<(&v15, "Protocol Buffer map usage error:\n");
    v4 = google::protobuf::internal::LogMessage::operator<<(v3, "MapValueRef::type MapValueRef is not initialized.");
    google::protobuf::internal::LogFinisher::operator=(&v14, v4);
    google::protobuf::internal::LogMessage::~LogMessage(&v15);
    if ( this->type_ == 9 )
      return (const std::string *)this->data_;
  }
  google::protobuf::internal::LogMessage::LogMessage(&v15, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 635);
  v5 = google::protobuf::internal::LogMessage::operator<<(&v15, "Protocol Buffer map usage error:\n");
  v6 = google::protobuf::internal::LogMessage::operator<<(v5, "MapValueRef::GetStringValue");
  v7 = google::protobuf::internal::LogMessage::operator<<(v6, " type does not match\n");
  v8 = google::protobuf::internal::LogMessage::operator<<(v7, "  Expected : ");
  v9 = google::protobuf::internal::LogMessage::operator<<(v8, google::protobuf::FieldDescriptor::kCppTypeToName[9]);
  v10 = google::protobuf::internal::LogMessage::operator<<(v9, "\n");
  v11 = google::protobuf::internal::LogMessage::operator<<(v10, "  Actual   : ");
  v12 = google::protobuf::MapValueRef::type(this);
  v13 = google::protobuf::internal::LogMessage::operator<<(v11, google::protobuf::FieldDescriptor::kCppTypeToName[v12]);
  google::protobuf::internal::LogFinisher::operator=(&v14, v13);
  google::protobuf::internal::LogMessage::~LogMessage(&v15);
  return (const std::string *)this->data_;
};

// Line 640: range 000000000C72C0D8-000000000C72C0E3
void __fastcall __noreturn google::protobuf::internal::SerializeMapEntry()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::LogMessage_0 *v1; // r14

  google::protobuf::internal::LogMessage::~LogMessage(v1);
  _Unwind_Resume(v0);
};

// Line 650: range 000000000C8D6B90-000000000C8D6CDC
const google::protobuf::Message *__fastcall google::protobuf::MapValueRef::GetMessageValue(
        const google::protobuf::MapValueRef *const this)
{
  int type; // eax
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // r12
  google::protobuf::FieldDescriptor::CppType v12; // eax
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogFinisher v14; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v15; // [rsp+10h] [rbp-58h] BYREF

  type = this->type_;
  if ( type && this->data_ )
  {
    if ( type == 10 )
      return (const google::protobuf::Message *)this->data_;
  }
  else
  {
    google::protobuf::internal::LogMessage::LogMessage(&v15, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 680);
    v3 = google::protobuf::internal::LogMessage::operator<<(&v15, "Protocol Buffer map usage error:\n");
    v4 = google::protobuf::internal::LogMessage::operator<<(v3, "MapValueRef::type MapValueRef is not initialized.");
    google::protobuf::internal::LogFinisher::operator=(&v14, v4);
    google::protobuf::internal::LogMessage::~LogMessage(&v15);
    if ( this->type_ == 10 )
      return (const google::protobuf::Message *)this->data_;
  }
  google::protobuf::internal::LogMessage::LogMessage(&v15, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 651);
  v5 = google::protobuf::internal::LogMessage::operator<<(&v15, "Protocol Buffer map usage error:\n");
  v6 = google::protobuf::internal::LogMessage::operator<<(v5, "MapValueRef::GetMessageValue");
  v7 = google::protobuf::internal::LogMessage::operator<<(v6, " type does not match\n");
  v8 = google::protobuf::internal::LogMessage::operator<<(v7, "  Expected : ");
  v9 = google::protobuf::internal::LogMessage::operator<<(v8, google::protobuf::FieldDescriptor::kCppTypeToName[10]);
  v10 = google::protobuf::internal::LogMessage::operator<<(v9, "\n");
  v11 = google::protobuf::internal::LogMessage::operator<<(v10, "  Actual   : ");
  v12 = google::protobuf::MapValueRef::type(this);
  v13 = google::protobuf::internal::LogMessage::operator<<(v11, google::protobuf::FieldDescriptor::kCppTypeToName[v12]);
  google::protobuf::internal::LogFinisher::operator=(&v14, v13);
  google::protobuf::internal::LogMessage::~LogMessage(&v15);
  return (const google::protobuf::Message *)this->data_;
};

// Line 678: range 000000000C8D6410-000000000C8D6496
google::protobuf::FieldDescriptor::CppType __fastcall google::protobuf::MapValueRef::type(
        const google::protobuf::MapValueRef *const this)
{
  google::protobuf::FieldDescriptor::CppType result; // eax
  google::protobuf::internal::LogMessage_0 *v2; // rax
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogFinisher v4; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v5; // [rsp+10h] [rbp-58h] BYREF

  result = this->type_;
  if ( !result || !this->data_ )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v5, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 680);
    v2 = google::protobuf::internal::LogMessage::operator<<(&v5, "Protocol Buffer map usage error:\n");
    v3 = google::protobuf::internal::LogMessage::operator<<(v2, "MapValueRef::type MapValueRef is not initialized.");
    google::protobuf::internal::LogFinisher::operator=(&v4, v3);
    google::protobuf::internal::LogMessage::~LogMessage(&v5);
    return this->type_;
  }
  return result;
};

// Line 726: range 000000000C8D78C0-000000000C8D7AB0
void __fastcall google::protobuf::MapIterator::MapIterator(
        google::protobuf::MapIterator *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  int (**vptr_MessageLite)(...); // rax
  const google::protobuf::Message::Reflection *(__fastcall *v6)(const google::protobuf::Message *const); // rdx
  __int64 v7; // rdx
  __int64 v8; // rdi
  google::protobuf::internal::MapFieldBase *(__fastcall *v9)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *); // rcx
  google::protobuf::internal::MapFieldBase *v10; // rax
  const google::protobuf::Descriptor *v11; // r13
  std::forward_iterator_tag v12; // cl
  google::protobuf::FieldDescriptor *FieldByName; // rax
  int v14; // eax
  int type; // edx
  int v16; // r13d
  const google::protobuf::Descriptor *v17; // rbp
  std::forward_iterator_tag v18; // cl
  google::protobuf::FieldDescriptor *v19; // rax
  int v20; // eax
  std::string *M_p; // rdi
  void **p_M_p; // r14
  google::protobuf::MapKey::KeyValue v23; // rax
  std::string v24[2]; // [rsp+0h] [rbp-48h] BYREF

  vptr_MessageLite = message->_vptr_MessageLite;
  this->value_.data_ = 0LL;
  this->key_.type_ = 0;
  v6 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))vptr_MessageLite[23];
  this->value_.type_ = 0;
  if ( v6 == google::protobuf::Message::GetReflection )
  {
    vptr_MessageLite[24](message);
    v8 = v7;
  }
  else
  {
    v8 = (__int64)v6(message);
  }
  v9 = *(google::protobuf::internal::MapFieldBase *(__fastcall **)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v8 + 728LL);
  v10 = 0LL;
  if ( v9 != google::protobuf::Reflection::MapData )
    v10 = v9((const google::protobuf::Reflection *const)v8, message, field);
  this->map_ = v10;
  v11 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)field);
  v24[0]._M_dataplus._M_p = v24[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v24, off_1A19A99E, &off_1A19A99E[3], v12);
  FieldByName = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByName(v11, v24);
  v14 = google::protobuf::FieldDescriptor::type(FieldByName);
  type = this->key_.type_;
  v16 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v14];
  if ( type != v16 )
  {
    if ( type != 9 || (p_M_p = (void **)&this->key_.val_.string_value_->_M_dataplus._M_p) == 0LL )
    {
      this->key_.type_ = v16;
      if ( v16 != 9 )
        goto LABEL_8;
      goto LABEL_17;
    }
    if ( *p_M_p != p_M_p + 2 )
      operator delete(*p_M_p);
    operator delete(p_M_p, 0x20uLL);
    this->key_.type_ = v16;
    if ( v16 == 9 )
    {
LABEL_17:
      v23.int64_value_ = operator new(0x20uLL);
      *(_QWORD *)(v23.int64_value_ + 8) = 0LL;
      v23.string_value_->_M_dataplus._M_p = (std::string::pointer)(v23.int64_value_ + 16);
      *(_BYTE *)(v23.int64_value_ + 16) = 0;
      this->key_.val_ = v23;
    }
  }
LABEL_8:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v24[0]._M_dataplus._M_p != &v24[0]._anon_0 )
    operator delete(v24[0]._M_dataplus._M_p);
  v17 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)field);
  v24[0]._M_dataplus._M_p = v24[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v24, "value", "", v18);
  v19 = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByName(v17, v24);
  v20 = google::protobuf::FieldDescriptor::type(v19);
  M_p = (std::string *)v24[0]._M_dataplus._M_p;
  this->value_.type_ = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v20];
  if ( M_p != (std::string *)&v24[0]._anon_0 )
    operator delete(M_p);
  (*((void (__fastcall **)(google::protobuf::internal::MapFieldBase *, google::protobuf::MapIterator *const))this->map_->_vptr_MapFieldBase
   + 12))(
    this->map_,
    this);
};

// Line 738: range 000000000C8AB590-000000000C8AB5A6
void __fastcall google::protobuf::MapIterator::~MapIterator(google::protobuf::MapIterator *const this)
{
  (*((void (__fastcall **)(google::protobuf::internal::MapFieldBase *, google::protobuf::MapIterator *const))this->map_->_vptr_MapFieldBase
   + 13))(
    this->map_,
    this);
  google::protobuf::MapKey::~MapKey(&this->key_);
};
