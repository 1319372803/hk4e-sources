// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/extension_set.h

// Line 134: range 000000000C731FE6-000000000C731FFA
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::ParseField()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::ExtensionFinder *v1; // r13

  google::protobuf::internal::ExtensionFinder::~ExtensionFinder(v1);
  _Unwind_Resume(v0);
};

// Line 134: range 000000000C73207A-000000000C73208E
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::ParseMessageSet()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::ExtensionFinder *v1; // r13

  google::protobuf::internal::ExtensionFinder::~ExtensionFinder(v1);
  _Unwind_Resume(v0);
};

// Line 134: range 000000000C7320AC-000000000C7320C2
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::ParseMessageSet(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::ExtensionFinder a8)
{
  struct _Unwind_Exception *v8; // r12

  a8._vptr_ExtensionFinder = (int (**)(...))off_1A1788D0;
  google::protobuf::internal::ExtensionFinder::~ExtensionFinder(&a8);
  _Unwind_Resume(v8);
};

// Line 134: range 000000000C8EEE20-000000000C8EEE35
void __fastcall google::protobuf::internal::GeneratedExtensionFinder::~GeneratedExtensionFinder(
        google::protobuf::internal::GeneratedExtensionFinder *const this)
{
  ;
};

// Line 482: range 000000000C946570-000000000C946576
google::protobuf::uint8 *__fastcall google::protobuf::internal::ExtensionSet::LazyMessageExtension::InternalWriteMessageToArray(
        const google::protobuf::internal::ExtensionSet::LazyMessageExtension *const this,
        int number,
        bool a3,
        google::protobuf::uint8 *target)
{
  return (google::protobuf::uint8 *)(*((__int64 (__fastcall **)(const google::protobuf::internal::ExtensionSet::LazyMessageExtension *const, int, google::protobuf::uint8 *))this->_vptr_LazyMessageExtension
                                     + 16))(
                                      this,
                                      number,
                                      target);
};
