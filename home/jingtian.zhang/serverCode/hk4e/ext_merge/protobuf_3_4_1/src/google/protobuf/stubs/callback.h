// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/stubs/callback.h

// Line 127: range 000000000C895040-000000000C895076
void __fastcall google::protobuf::internal::FunctionClosure0::Run(
        google::protobuf::internal::FunctionClosure0 *const this)
{
  bool self_deleting; // bl

  self_deleting = this->self_deleting_;
  this->function_();
  if ( self_deleting )
    (*((void (__fastcall **)(google::protobuf::internal::FunctionClosure0 *const))this->_vptr_Closure + 1))(this);
};

// Line 168: range 000000000C72F358-000000000C72F3A9
void __fastcall __noreturn google::protobuf::Descriptor::DebugString()
{
  struct _Unwind_Exception *v0; // rbx
  __int64 v1; // rbp
  void *v2; // rdi

  *(_QWORD *)(v1 - 256) = &off_1A17BF90;
  google::protobuf::Closure::~Closure((google::protobuf::Closure *const)(v1 - 256));
  std::_Rb_tree<google::protobuf::Descriptor const*,google::protobuf::Descriptor const*,std::_Identity<google::protobuf::Descriptor const*>,std::less<google::protobuf::Descriptor const*>,std::allocator<google::protobuf::Descriptor const*>>::_M_erase(
    (std::_Rb_tree<const google::protobuf::Descriptor*,const google::protobuf::Descriptor*,std::_Identity<const google::protobuf::Descriptor*>,std::less<const google::protobuf::Descriptor*>,std::allocator<const google::protobuf::Descriptor*> > *const)(v1 - 736),
    *(std::_Rb_tree<const google::protobuf::Descriptor*,const google::protobuf::Descriptor*,std::_Identity<const google::protobuf::Descriptor*>,std::less<const google::protobuf::Descriptor*>,std::allocator<const google::protobuf::Descriptor*> >::_Link_type *)(v1 - 720));
  google::protobuf::`anonymous namespace'::SourceLocationCommentPrinter::~SourceLocationCommentPrinter((google::protobuf::`anonymous namespace'::SourceLocationCommentPrinter *const)(v1 - 208));
  v2 = *(void **)(v1 - 832);
  if ( v2 != (void *)(v1 - 816) )
    operator delete(v2);
  _Unwind_Resume(v0);
};

// Line 168: range 000000000C72FF06-000000000C72FF48
void __fastcall __noreturn google::protobuf::DescriptorBuilder::BuildFileImpl(
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
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        std::_Rb_tree_node<std::string > *__x,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int> > a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        __int64 a34,
        __int64 a35,
        __int64 a36,
        google::protobuf::Closure a37)
{
  struct _Unwind_Exception *v37; // rbx
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > > *retaddr; // [rsp+0h] [rbp+0h]

  a37._vptr_Closure = (int (**)(...))&off_1A17BFB8;
  google::protobuf::Closure::~Closure(&a37);
  std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(
    &a28,
    (std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int> >::_Link_type)a28._M_impl._M_header._M_parent);
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
    retaddr,
    __x);
  _Unwind_Resume(v37);
};

// Line 168: range 000000000C72DA12-000000000C72DA28
void __fastcall __noreturn google::protobuf::DescriptorBuilder::RecordPublicDependencies(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::Closure a8)
{
  struct _Unwind_Exception *v8; // rbp

  a8._vptr_Closure = (int (**)(...))&off_1A17BFB8;
  google::protobuf::Closure::~Closure(&a8);
  _Unwind_Resume(v8);
};

// Line 168: range 000000000C72EAE2-000000000C72EAF8
void __fastcall __noreturn google::protobuf::DescriptorBuilder::ValidateFileOptions(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        google::protobuf::Closure a10)
{
  struct _Unwind_Exception *v10; // rbp

  a10._vptr_Closure = (int (**)(...))&off_1A17BFB8;
  google::protobuf::Closure::~Closure(&a10);
  _Unwind_Resume(v10);
};

// Line 168: range 000000000C72DACC-000000000C72DAE0
void __fastcall __noreturn google::protobuf::DescriptorBuilder::ValidateMapEntry()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::Closure *v1; // r14

  google::protobuf::Closure::~Closure(v1);
  _Unwind_Resume(v0);
};

// Line 168: range 000000000C72E0BC-000000000C72E0CF
void __fastcall __noreturn google::protobuf::FieldDescriptor::CopyTo()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::Closure *v1; // r12
  __int64 (__fastcall **retaddr)(); // [rsp+0h] [rbp+0h]

  retaddr = &off_1A17BF90;
  google::protobuf::Closure::~Closure(v1);
  _Unwind_Resume(v0);
};

// Line 168: range 000000000C72DD6A-000000000C72DD7D
void __fastcall __noreturn google::protobuf::FieldDescriptor::FieldTypeNameDebugString[abi:cxx11]()
{
  google::protobuf::Closure *v0; // rbp
  struct _Unwind_Exception *v1; // r12
  __int64 (__fastcall **retaddr)(); // [rsp+0h] [rbp+0h]

  retaddr = &off_1A17BF90;
  google::protobuf::Closure::~Closure(v0);
  _Unwind_Resume(v1);
};

// Line 168: range 000000000C72D5BA-000000000C72D5CD
void __fastcall __noreturn google::protobuf::FieldDescriptor::default_value_enum()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::Closure retaddr; // [rsp+0h] [rbp+0h] BYREF

  retaddr._vptr_Closure = (int (**)(...))&off_1A17BF90;
  google::protobuf::Closure::~Closure(&retaddr);
  _Unwind_Resume(v0);
};

// Line 168: range 000000000C72D5A2-000000000C72D5B5
void __fastcall __noreturn google::protobuf::FieldDescriptor::enum_type()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::Closure retaddr; // [rsp+0h] [rbp+0h] BYREF

  retaddr._vptr_Closure = (int (**)(...))&off_1A17BF90;
  google::protobuf::Closure::~Closure(&retaddr);
  _Unwind_Resume(v0);
};

// Line 168: range 000000000C72D4F8-000000000C72D50B
void __fastcall __noreturn google::protobuf::FieldDescriptor::is_packed()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::Closure retaddr; // [rsp+0h] [rbp+0h] BYREF

  retaddr._vptr_Closure = (int (**)(...))&off_1A17BF90;
  google::protobuf::Closure::~Closure(&retaddr);
  _Unwind_Resume(v0);
};

// Line 168: range 000000000C72D58A-000000000C72D59D
void __fastcall __noreturn google::protobuf::FieldDescriptor::message_type()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::Closure retaddr; // [rsp+0h] [rbp+0h] BYREF

  retaddr._vptr_Closure = (int (**)(...))&off_1A17BF90;
  google::protobuf::Closure::~Closure(&retaddr);
  _Unwind_Resume(v0);
};

// Line 168: range 000000000C72D5D2-000000000C72D5E5
void __fastcall __noreturn google::protobuf::FieldDescriptor::type()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::Closure retaddr; // [rsp+0h] [rbp+0h] BYREF

  retaddr._vptr_Closure = (int (**)(...))&off_1A17BF90;
  google::protobuf::Closure::~Closure(&retaddr);
  _Unwind_Resume(v0);
};

// Line 168: range 000000000C72E296-000000000C72E2AC
void __fastcall __noreturn google::protobuf::FileDescriptor::CopyTo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::Closure a8)
{
  struct _Unwind_Exception *v8; // rbp

  a8._vptr_Closure = (int (**)(...))&off_1A17BFB8;
  google::protobuf::Closure::~Closure(&a8);
  _Unwind_Resume(v8);
};

// Line 168: range 000000000C72D5EA-000000000C72D5FD
void __fastcall __noreturn google::protobuf::FileDescriptor::dependency()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::Closure retaddr; // [rsp+0h] [rbp+0h] BYREF

  retaddr._vptr_Closure = (int (**)(...))&off_1A17BFB8;
  google::protobuf::Closure::~Closure(&retaddr);
  _Unwind_Resume(v0);
};

// Line 168: range 000000000C72D602-000000000C72D615
void __fastcall __noreturn google::protobuf::MethodDescriptor::input_type()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::Closure retaddr; // [rsp+0h] [rbp+0h] BYREF

  retaddr._vptr_Closure = (int (**)(...))&off_1A17BFE0;
  google::protobuf::Closure::~Closure(&retaddr);
  _Unwind_Resume(v0);
};

// Line 168: range 000000000C72D61A-000000000C72D62D
void __fastcall __noreturn google::protobuf::MethodDescriptor::output_type()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::Closure retaddr; // [rsp+0h] [rbp+0h] BYREF

  retaddr._vptr_Closure = (int (**)(...))&off_1A17BFE0;
  google::protobuf::Closure::~Closure(&retaddr);
  _Unwind_Resume(v0);
};

// Line 168: range 000000000C72D662-000000000C72D675
void __fastcall __noreturn google::protobuf::internal::LazyDescriptor::Once()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::Closure retaddr; // [rsp+0h] [rbp+0h] BYREF

  retaddr._vptr_Closure = (int (**)(...))&off_1A17BFE0;
  google::protobuf::Closure::~Closure(&retaddr);
  _Unwind_Resume(v0);
};

// Line 168: range 000000000C9196E0-000000000C9196E7
void __fastcall google::protobuf::internal::FunctionClosure1<google::protobuf::FieldDescriptor const*>::~FunctionClosure1(
        google::protobuf::internal::FunctionClosure1<const google::protobuf::FieldDescriptor*> *const this)
{
  this->_vptr_Closure = (int (**)(...))&off_1A17BF90;
  google::protobuf::Closure::~Closure(this);
};

// Line 168: range 000000000C9196F0-000000000C919709
void __fastcall google::protobuf::internal::FunctionClosure1<google::protobuf::FieldDescriptor const*>::~FunctionClosure1(
        google::protobuf::internal::FunctionClosure1<const google::protobuf::FieldDescriptor*> *const this)
{
  this->_vptr_Closure = (int (**)(...))&off_1A17BF90;
  google::protobuf::Closure::~Closure(this);
  operator delete(this, 0x20uLL);
};

// Line 168: range 000000000C919710-000000000C919717
void __fastcall google::protobuf::internal::FunctionClosure1<google::protobuf::FileDescriptor const*>::~FunctionClosure1(
        google::protobuf::internal::FunctionClosure1<const google::protobuf::FileDescriptor*> *const this)
{
  this->_vptr_Closure = (int (**)(...))&off_1A17BFB8;
  google::protobuf::Closure::~Closure(this);
};

// Line 168: range 000000000C919720-000000000C919739
void __fastcall google::protobuf::internal::FunctionClosure1<google::protobuf::FileDescriptor const*>::~FunctionClosure1(
        google::protobuf::internal::FunctionClosure1<const google::protobuf::FileDescriptor*> *const this)
{
  this->_vptr_Closure = (int (**)(...))&off_1A17BFB8;
  google::protobuf::Closure::~Closure(this);
  operator delete(this, 0x20uLL);
};

// Line 168: range 000000000C919740-000000000C919747
void __fastcall google::protobuf::internal::FunctionClosure1<google::protobuf::internal::LazyDescriptor *>::~FunctionClosure1(
        google::protobuf::internal::FunctionClosure1<google::protobuf::internal::LazyDescriptor*> *const this)
{
  this->_vptr_Closure = (int (**)(...))&off_1A17BFE0;
  google::protobuf::Closure::~Closure(this);
};

// Line 168: range 000000000C919750-000000000C919769
void __fastcall google::protobuf::internal::FunctionClosure1<google::protobuf::internal::LazyDescriptor *>::~FunctionClosure1(
        google::protobuf::internal::FunctionClosure1<google::protobuf::internal::LazyDescriptor*> *const this)
{
  this->_vptr_Closure = (int (**)(...))&off_1A17BFE0;
  google::protobuf::Closure::~Closure(this);
  operator delete(this, 0x20uLL);
};

// Line 168: range 000000000C9196C0-000000000C9196D9
void __fastcall google::protobuf::internal::FunctionClosure1<std::pair<google::protobuf::FileDescriptorTables const*,google::protobuf::SourceCodeInfo const*> *>::~FunctionClosure1(
        google::protobuf::internal::FunctionClosure1<std::pair<const google::protobuf::FileDescriptorTables*,const google::protobuf::SourceCodeInfo*>*> *const this)
{
  this->_vptr_Closure = (int (**)(...))&off_1A17BF68;
  google::protobuf::Closure::~Closure(this);
  operator delete(this, 0x20uLL);
};

// Line 168: range 000000000C9196B0-000000000C9196B7
void __fastcall google::protobuf::internal::FunctionClosure1<std::pair<google::protobuf::FileDescriptorTables const*,google::protobuf::SourceCodeInfo const*> *>::~FunctionClosure1(
        google::protobuf::internal::FunctionClosure1<std::pair<const google::protobuf::FileDescriptorTables*,const google::protobuf::SourceCodeInfo*>*> *const this)
{
  this->_vptr_Closure = (int (**)(...))&off_1A17BF68;
  google::protobuf::Closure::~Closure(this);
};

// Line 170: range 000000000C9197A0-000000000C919809
void __fastcall google::protobuf::internal::FunctionClosure1<google::protobuf::FieldDescriptor const*>::Run(
        google::protobuf::internal::FunctionClosure1<const google::protobuf::FieldDescriptor*> *const this)
{
  bool self_deleting; // bl
  void (__fastcall *v2)(google::protobuf::internal::FunctionClosure1<const google::protobuf::FieldDescriptor*> *const); // rax

  self_deleting = this->self_deleting_;
  this->function_(this->arg1_);
  if ( self_deleting )
  {
    v2 = (void (__fastcall *)(google::protobuf::internal::FunctionClosure1<const google::protobuf::FieldDescriptor*> *const))*((_QWORD *)this->_vptr_Closure + 1);
    if ( v2 == google::protobuf::internal::FunctionClosure1<google::protobuf::FieldDescriptor const*>::~FunctionClosure1 )
    {
      this->_vptr_Closure = (int (**)(...))&off_1A17BF90;
      google::protobuf::Closure::~Closure(this);
      operator delete(this, 0x20uLL);
    }
    else
    {
      v2(this);
    }
  }
};

// Line 170: range 000000000C9198F0-000000000C919959
void __fastcall google::protobuf::internal::FunctionClosure1<google::protobuf::FileDescriptor const*>::Run(
        google::protobuf::internal::FunctionClosure1<const google::protobuf::FileDescriptor*> *const this)
{
  bool self_deleting; // bl
  void (__fastcall *v2)(google::protobuf::internal::FunctionClosure1<const google::protobuf::FileDescriptor*> *const); // rax

  self_deleting = this->self_deleting_;
  this->function_(this->arg1_);
  if ( self_deleting )
  {
    v2 = (void (__fastcall *)(google::protobuf::internal::FunctionClosure1<const google::protobuf::FileDescriptor*> *const))*((_QWORD *)this->_vptr_Closure + 1);
    if ( v2 == google::protobuf::internal::FunctionClosure1<google::protobuf::FileDescriptor const*>::~FunctionClosure1 )
    {
      this->_vptr_Closure = (int (**)(...))&off_1A17BFB8;
      google::protobuf::Closure::~Closure(this);
      operator delete(this, 0x20uLL);
    }
    else
    {
      v2(this);
    }
  }
};

// Line 170: range 000000000C919880-000000000C9198E9
void __fastcall google::protobuf::internal::FunctionClosure1<google::protobuf::internal::LazyDescriptor *>::Run(
        google::protobuf::internal::FunctionClosure1<google::protobuf::internal::LazyDescriptor*> *const this)
{
  bool self_deleting; // bl
  void (__fastcall *v2)(google::protobuf::internal::FunctionClosure1<google::protobuf::internal::LazyDescriptor*> *const); // rax

  self_deleting = this->self_deleting_;
  this->function_(this->arg1_);
  if ( self_deleting )
  {
    v2 = (void (__fastcall *)(google::protobuf::internal::FunctionClosure1<google::protobuf::internal::LazyDescriptor*> *const))*((_QWORD *)this->_vptr_Closure + 1);
    if ( v2 == google::protobuf::internal::FunctionClosure1<google::protobuf::internal::LazyDescriptor *>::~FunctionClosure1 )
    {
      this->_vptr_Closure = (int (**)(...))&off_1A17BFE0;
      google::protobuf::Closure::~Closure(this);
      operator delete(this, 0x20uLL);
    }
    else
    {
      v2(this);
    }
  }
};

// Line 170: range 000000000C919810-000000000C919879
void __fastcall google::protobuf::internal::FunctionClosure1<std::pair<google::protobuf::FileDescriptorTables const*,google::protobuf::SourceCodeInfo const*> *>::Run(
        google::protobuf::internal::FunctionClosure1<std::pair<const google::protobuf::FileDescriptorTables*,const google::protobuf::SourceCodeInfo*>*> *const this)
{
  bool self_deleting; // bl
  void (__fastcall *v2)(google::protobuf::internal::FunctionClosure1<std::pair<const google::protobuf::FileDescriptorTables*,const google::protobuf::SourceCodeInfo*>*> *const); // rax

  self_deleting = this->self_deleting_;
  this->function_(this->arg1_);
  if ( self_deleting )
  {
    v2 = (void (__fastcall *)(google::protobuf::internal::FunctionClosure1<std::pair<const google::protobuf::FileDescriptorTables*,const google::protobuf::SourceCodeInfo*>*> *const))*((_QWORD *)this->_vptr_Closure + 1);
    if ( v2 == google::protobuf::internal::FunctionClosure1<std::pair<google::protobuf::FileDescriptorTables const*,google::protobuf::SourceCodeInfo const*> *>::~FunctionClosure1 )
    {
      this->_vptr_Closure = (int (**)(...))&off_1A17BF68;
      google::protobuf::Closure::~Closure(this);
      operator delete(this, 0x20uLL);
    }
    else
    {
      v2(this);
    }
  }
};

// Line 328: range 000000000C9671A0-000000000C9671B5
void __fastcall google::protobuf::internal::FunctionResultCallback_1_1<google::protobuf::util::Status,google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::StringPiece>::~FunctionResultCallback_1_1(
        google::protobuf::internal::FunctionResultCallback_1_1<google::protobuf::util::Status,google::protobuf::util::converter::ProtoStreamObjectWriter*,google::protobuf::StringPiece> *const this)
{
  ;
};

// Line 330: range 000000000C9671C0-000000000C96720C
google::protobuf::util::Status *__fastcall google::protobuf::internal::FunctionResultCallback_1_1<google::protobuf::util::Status,google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::StringPiece>::Run(
        google::protobuf::util::Status *retstr,
        google::protobuf::internal::FunctionResultCallback_1_1<google::protobuf::util::Status,google::protobuf::util::converter::ProtoStreamObjectWriter*,google::protobuf::StringPiece> *const this,
        google::protobuf::StringPiece a1)
{
  bool self_deleting; // bl
  void (__fastcall *v4)(google::protobuf::internal::FunctionResultCallback_1_1<google::protobuf::util::Status,google::protobuf::util::converter::ProtoStreamObjectWriter*,google::protobuf::StringPiece> *const); // rax

  self_deleting = this->self_deleting_;
  ((void (__fastcall *)(google::protobuf::util::Status *, google::protobuf::util::converter::ProtoStreamObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type))this->function_)(
    retstr,
    this->p1_,
    a1.ptr_,
    a1.length_);
  if ( !self_deleting )
    return retstr;
  v4 = (void (__fastcall *)(google::protobuf::internal::FunctionResultCallback_1_1<google::protobuf::util::Status,google::protobuf::util::converter::ProtoStreamObjectWriter*,google::protobuf::StringPiece> *const))*((_QWORD *)this->_vptr_ResultCallback1 + 1);
  if ( v4 == google::protobuf::internal::FunctionResultCallback_1_1<google::protobuf::util::Status,google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::StringPiece>::~FunctionResultCallback_1_1 )
  {
    operator delete(this, 0x20uLL);
    return retstr;
  }
  v4(this);
  return retstr;
};
