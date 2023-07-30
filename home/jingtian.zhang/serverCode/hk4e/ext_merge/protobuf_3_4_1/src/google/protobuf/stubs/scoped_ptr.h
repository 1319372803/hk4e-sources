// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/stubs/scoped_ptr.h

// Line 72: range 000000000C9436D0-000000000C9436F1
void __fastcall google::protobuf::internal::scoped_ptr<google::protobuf::DynamicMessageFactory::PrototypeMap>::~scoped_ptr(
        google::protobuf::internal::scoped_ptr<google::protobuf::DynamicMessageFactory::PrototypeMap> *const this)
{
  google::protobuf::DynamicMessageFactory::PrototypeMap *ptr; // rbp

  ptr = this->ptr_;
  if ( this->ptr_ )
  {
    std::_Hashtable<google::protobuf::Descriptor const*,std::pair<google::protobuf::Descriptor const* const,google::protobuf::DynamicMessage::TypeInfo const*>,std::allocator<std::pair<google::protobuf::Descriptor const* const,google::protobuf::DynamicMessage::TypeInfo const*>>,std::__detail::_Select1st,std::equal_to<google::protobuf::Descriptor const*>,google::protobuf::hash<google::protobuf::Descriptor const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::~_Hashtable(&this->ptr_->map_._M_h);
    operator delete(ptr, 0x38uLL);
  }
};

// Line 72: range 000000000C919C80-000000000C919CB1
void __fastcall google::protobuf::internal::scoped_ptr<google::protobuf::UnknownFieldSet>::~scoped_ptr(
        google::protobuf::internal::scoped_ptr<google::protobuf::UnknownFieldSet> *const this)
{
  google::protobuf::UnknownFieldSet *ptr; // rbp

  ptr = this->ptr_;
  if ( this->ptr_ )
  {
    if ( ptr->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(this->ptr_);
    operator delete(ptr, 8uLL);
  }
};

// Line 72: range 000000000C967300-000000000C967321
void __fastcall google::protobuf::internal::scoped_ptr<google::protobuf::hash_set<std::string,google::protobuf::hash<std::string>,std::equal_to<std::string>>>::~scoped_ptr(
        google::protobuf::internal::scoped_ptr<google::protobuf::hash_set<std::string,google::protobuf::hash<std::string >,std::equal_to<std::string > > > *const this)
{
  google::protobuf::hash_set<std::string,google::protobuf::hash<std::string >,std::equal_to<std::string > > *ptr; // rbp

  ptr = this->ptr_;
  if ( this->ptr_ )
  {
    std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::~_Hashtable(&this->ptr_->_M_h);
    operator delete(ptr, 0x38uLL);
  }
};

// Line 72: range 000000000C96AD90-000000000C96ADB1
void __fastcall google::protobuf::internal::scoped_ptr<google::protobuf::io::CodedOutputStream>::~scoped_ptr(
        google::protobuf::internal::scoped_ptr<google::protobuf::io::CodedOutputStream> *const this)
{
  google::protobuf::io::CodedOutputStream *ptr; // rbp

  ptr = this->ptr_;
  if ( this->ptr_ )
  {
    google::protobuf::io::CodedOutputStream::~CodedOutputStream(this->ptr_);
    operator delete(ptr, 0x20uLL);
  }
};

// Line 72: range 000000000C967250-000000000C967271
void __fastcall google::protobuf::internal::scoped_ptr<google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter>::~scoped_ptr(
        google::protobuf::internal::scoped_ptr<google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter> *const this)
{
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *ptr; // rbp

  ptr = this->ptr_;
  if ( this->ptr_ )
  {
    google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::~AnyWriter(this->ptr_);
    operator delete(ptr, 0x90uLL);
  }
};

// Line 161: range 000000000C72CC7E-000000000C72CC89
void __fastcall __noreturn google::protobuf::UnescapeCEscapeString()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete[](v0);
  _Unwind_Resume(v1);
};

// Line 161: range 000000000C72CC9E-000000000C72CCA9
void __fastcall __noreturn google::protobuf::strings::CHexEscape()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete[](v0);
  _Unwind_Resume(v1);
};

// Line 161: range 000000000C72CC8E-000000000C72CC99
void __fastcall __noreturn google::protobuf::strings::Utf8SafeCEscape()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete[](v0);
  _Unwind_Resume(v1);
};
