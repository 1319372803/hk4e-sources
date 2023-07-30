// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/descriptor.h

// Line 140: range 000000000C919960-000000000C9199D4
void __fastcall google::protobuf::SourceLocation::~SourceLocation(google::protobuf::SourceLocation *const this)
{
  std::_Vector_base<std::string>::pointer M_finish; // r12
  std::_Vector_base<std::string>::pointer M_start; // rbp
  google::protobuf::SourceLocation *M_p; // rdi
  google::protobuf::SourceLocation *v5; // rdi

  M_finish = this->leading_detached_comments._M_impl._M_finish;
  M_start = this->leading_detached_comments._M_impl._M_start;
  if ( M_finish != M_start )
  {
    do
    {
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->_M_dataplus._M_p != &M_start->_anon_0 )
        operator delete(M_start->_M_dataplus._M_p);
      ++M_start;
    }
    while ( M_finish != M_start );
    M_start = this->leading_detached_comments._M_impl._M_start;
  }
  if ( M_start )
    operator delete(M_start);
  M_p = (google::protobuf::SourceLocation *)this->trailing_comments._M_dataplus._M_p;
  if ( M_p != (google::protobuf::SourceLocation *)&this->trailing_comments._anon_0 )
    operator delete(M_p);
  v5 = (google::protobuf::SourceLocation *)this->leading_comments._M_dataplus._M_p;
  if ( v5 != (google::protobuf::SourceLocation *)&this->leading_comments._anon_0 )
    operator delete(v5);
};

// Line 1580: range 000000000C919610-000000000C919623
void __fastcall google::protobuf::DescriptorPool::ErrorCollector::AddWarning(
        google::protobuf::DescriptorPool::ErrorCollector *const this,
        const std::string *a2,
        const std::string *a3,
        const google::protobuf::Message *a4,
        google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation a5,
        const std::string *a6)
{
  ;
};

// Line 1951: range 000000000C8F5A00-000000000C8F5AB2
_BOOL8 __fastcall google::protobuf::FieldDescriptor::is_packed(google::protobuf::FieldDescriptor *this)
{
  _BOOL8 result; // rax
  google::protobuf::GoogleOnceDynamic *type_once; // rdi
  const google::protobuf::FieldOptions *options; // rdx
  google::protobuf::Closure v5[2]; // [rsp+0h] [rbp-38h] BYREF
  char v6; // [rsp+10h] [rbp-28h]
  google::protobuf::FieldDescriptor *v7; // [rsp+18h] [rbp-20h]

  if ( this->label_ != LABEL_REPEATED )
    return 0LL;
  type_once = this->type_once_;
  if ( type_once && type_once->state_ != 2 )
  {
    v5[0]._vptr_Closure = (int (**)(...))&off_1A17BF90;
    v5[1]._vptr_Closure = (int (**)(...))google::protobuf::FieldDescriptor::TypeOnceInit;
    v6 = 0;
    v7 = this;
    google::protobuf::GoogleOnceInitImpl(&type_once->state_, v5);
    v5[0]._vptr_Closure = (int (**)(...))&off_1A17BF90;
    google::protobuf::Closure::~Closure(v5);
  }
  if ( (unsigned int)(this->type_ - 9) <= 3 )
    return 0LL;
  options = this->options_;
  if ( this->file_->syntax_ == SYNTAX_PROTO2 )
  {
    if ( !options )
      return 0LL;
    return options->packed_;
  }
  result = 1LL;
  if ( options && (options->_has_bits_.has_bits_[0] & 2) != 0 )
    return options->packed_;
  return result;
};

// Line 1962: range 000000000C8C1620-000000000C8C1709
void __fastcall std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<google::protobuf::FieldDescriptor const**,std::vector<google::protobuf::FieldDescriptor const*>>,__gnu_cxx::__ops::_Val_comp_iter<google::protobuf::`anonymous namespace'::FieldIndexSorter>>(
        __gnu_cxx::__normal_iterator<const google::protobuf::FieldDescriptor**,std::vector<const google::protobuf::FieldDescriptor*> > __last)
{
  const google::protobuf::FieldDescriptor *v1; // rsi
  bool is_extension; // r9
  signed int v3; // eax
  signed int v4; // edx
  const google::protobuf::FieldDescriptor *v5; // rcx
  const google::protobuf::Descriptor *extension_scope; // rax
  const google::protobuf::Descriptor *v7; // rdx

  v1 = *__last._M_current;
  is_extension = (*__last._M_current)->is_extension_;
  while ( 1 )
  {
    v5 = (const google::protobuf::FieldDescriptor *)*((_QWORD *)__last._M_current - 1);
    if ( !is_extension )
    {
      v3 = 678152731 * (((char *)v1 - (char *)v1->containing_type_->fields_) >> 3);
      goto LABEL_3;
    }
    extension_scope = v1->extension_scope_;
    if ( !extension_scope )
    {
      v3 = 678152731 * (((char *)v1 - (char *)v1->file_->extensions_) >> 3);
LABEL_3:
      if ( !v5->is_extension_ )
        goto LABEL_4;
      goto LABEL_10;
    }
    v3 = 678152731 * (((char *)v1 - (char *)extension_scope->extensions_) >> 3);
    if ( !v5->is_extension_ )
    {
LABEL_4:
      v4 = 678152731 * (((char *)v5 - (char *)v5->containing_type_->fields_) >> 3);
      goto LABEL_5;
    }
LABEL_10:
    v7 = v5->extension_scope_;
    if ( v7 )
      break;
    v4 = 678152731 * (((char *)v5 - (char *)v5->file_->extensions_) >> 3);
LABEL_5:
    if ( v4 <= v3 )
      goto LABEL_12;
LABEL_6:
    *__last._M_current-- = v5;
  }
  if ( (int)(678152731 * (((char *)v5 - (char *)v7->extensions_) >> 3)) > v3 )
    goto LABEL_6;
LABEL_12:
  *__last._M_current = v1;
};

// Line 1979: range 000000000C8AB2B0-000000000C8AB2D0
bool __fastcall google::protobuf::internal::GeneratedMessageReflection::HasOneof(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::OneofDescriptor *oneof_descriptor)
{
  return *(_DWORD *)((char *)&message->_vptr_MessageLite
                   + this->schema_.oneof_case_offset_
                   - 1431655764
                   * (unsigned int)(((char *)oneof_descriptor - (char *)oneof_descriptor->containing_type_->oneof_decls_) >> 4)) != 0;
};

// Line 1979: range 000000000C8A0680-000000000C8A06B2
const google::protobuf::FieldDescriptor *__fastcall google::protobuf::internal::GeneratedMessageReflection::GetOneofFieldDescriptor(
        const google::protobuf::internal::GeneratedMessageReflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::OneofDescriptor *oneof_descriptor)
{
  int v3; // esi

  v3 = *(_DWORD *)((char *)&message->_vptr_MessageLite
                 + this->schema_.oneof_case_offset_
                 - 1431655764
                 * (unsigned int)(((char *)oneof_descriptor - (char *)oneof_descriptor->containing_type_->oneof_decls_) >> 4));
  if ( v3 )
    return google::protobuf::Descriptor::FindFieldByNumber(this->descriptor_, v3);
  else
    return 0LL;
};
