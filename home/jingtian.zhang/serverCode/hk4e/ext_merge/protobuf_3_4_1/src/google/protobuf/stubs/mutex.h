// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/stubs/mutex.h

// Line 77: range 000000000C731FC4-000000000C731FCF
void __fastcall __noreturn google::protobuf::DynamicMessageFactory::GetPrototype()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::Mutex *v1; // r13

  google::protobuf::internal::Mutex::Unlock(v1);
  _Unwind_Resume(v0);
};

// Line 77: range 000000000C72A1EA-000000000C72A1F5
void __fastcall __noreturn google::protobuf::internal::OnShutdown()
{
  google::protobuf::internal::Mutex *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  google::protobuf::internal::Mutex::Unlock(v0);
  _Unwind_Resume(v1);
};

// Line 77: range 000000000C72A21F-000000000C72A22A
void __fastcall __noreturn google::protobuf::internal::OnShutdownDestroyMessage()
{
  google::protobuf::internal::Mutex *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  google::protobuf::internal::Mutex::Unlock(v0);
  _Unwind_Resume(v1);
};

// Line 77: range 000000000C72A20F-000000000C72A21A
void __fastcall __noreturn google::protobuf::internal::OnShutdownDestroyString()
{
  google::protobuf::internal::Mutex *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  google::protobuf::internal::Mutex::Unlock(v0);
  _Unwind_Resume(v1);
};

// Line 92: range 000000000C7301D4-000000000C7301E4
void __fastcall __noreturn google::protobuf::DescriptorBuilder::FindSymbolNotEnforcingDepsHelper()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::Mutex *v1; // r14

  if ( v1 )
    google::protobuf::internal::Mutex::Unlock(v1);
  _Unwind_Resume(v0);
};

// Line 92: range 000000000C7305FC-000000000C73060C
void __fastcall __noreturn google::protobuf::DescriptorPool::FindExtensionByNumber()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::Mutex *v1; // r14

  if ( v1 )
    google::protobuf::internal::Mutex::Unlock(v1);
  _Unwind_Resume(v0);
};

// Line 92: range 000000000C7300EE-000000000C7300FE
void __fastcall __noreturn google::protobuf::DescriptorPool::FindFileByName()
{
  google::protobuf::internal::Mutex *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  if ( v0 )
    google::protobuf::internal::Mutex::Unlock(v0);
  _Unwind_Resume(v1);
};

// Line 92: range 000000000C7301BE-000000000C7301CE
void __fastcall __noreturn google::protobuf::DescriptorPool::FindFileContainingSymbol()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::Mutex *v1; // r12

  if ( v1 )
    google::protobuf::internal::Mutex::Unlock(v1);
  _Unwind_Resume(v0);
};

// Line 92: range 000000000C72E72E-000000000C72E73E
void __fastcall __noreturn google::protobuf::DescriptorPool::NewPlaceholder()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::Mutex *v1; // r12

  if ( v1 )
    google::protobuf::internal::Mutex::Unlock(v1);
  _Unwind_Resume(v0);
};

// Line 92: range 000000000C72E3D8-000000000C72E3E8
void __fastcall __noreturn google::protobuf::DescriptorPool::NewPlaceholderFile()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::Mutex *v1; // r12

  if ( v1 )
    google::protobuf::internal::Mutex::Unlock(v1);
  _Unwind_Resume(v0);
};

// Line 92: range 000000000C730128-000000000C730138
void __fastcall __noreturn google::protobuf::DescriptorPool::Tables::FindByNameHelper()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::Mutex *v1; // r15

  if ( v1 )
    google::protobuf::internal::Mutex::Unlock(v1);
  _Unwind_Resume(v0);
};
