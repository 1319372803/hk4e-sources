// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/protobuf_3_4_1/include/google/protobuf/stubs/callback.h

// Line 72: range 00000000165A7936-00000000165A7977
void __cdecl google::protobuf::Closure::Closure(google::protobuf::Closure *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'google::protobuf::Closure + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_Closure = v1;
};

// Line 123: range 00000000165A7978-00000000165A7A3D
void __cdecl google::protobuf::internal::FunctionClosure0::FunctionClosure0(
        google::protobuf::internal::FunctionClosure0 *const this,
        google::protobuf::internal::FunctionClosure0::FunctionType function,
        bool self_deleting)
{
  int (**v3)(...); // rdx

  google::protobuf::Closure::Closure(this);
  v3 = (int (**)(...))(&`vtable for'google::protobuf::internal::FunctionClosure0 + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_Closure = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->function_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->function_ = function;
  if ( *(char *)(((unsigned __int64)&this->self_deleting_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->self_deleting_);
  this->self_deleting_ = self_deleting;
};
