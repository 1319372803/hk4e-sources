// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/util/internal/protostream_objectwriter.h

// Line 159: range 000000000C967210-000000000C967241
void __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event::~Event(
        google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event *const this)
{
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event *M_p; // rdi
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event *v3; // rdi

  M_p = (google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event *)this->value_storage_._M_dataplus._M_p;
  if ( M_p != (google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event *)&this->value_storage_._anon_0 )
    operator delete(M_p);
  v3 = (google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event *)this->name_._M_dataplus._M_p;
  if ( v3 != (google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event *)&this->name_._anon_0 )
    operator delete(v3);
};

// Line 266: range 000000000C967330-000000000C9673A6
void __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::Item::~Item(
        google::protobuf::util::converter::ProtoStreamObjectWriter::Item *const this)
{
  google::protobuf::hash_set<std::string,google::protobuf::hash<std::string >,std::equal_to<std::string > > *ptr; // rbp
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *v3; // rbp
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *v4; // rdi

  ptr = this->map_keys_.ptr_;
  this->_vptr_BaseElement = (int (**)(...))off_1A185870;
  if ( ptr )
  {
    std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::~_Hashtable(&ptr->_M_h);
    operator delete(ptr, 0x38uLL);
  }
  v3 = this->any_.ptr_;
  if ( v3 )
  {
    google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::~AnyWriter(this->any_.ptr_);
    operator delete(v3, 0x90uLL);
  }
  v4 = this->parent_.ptr_;
  this->_vptr_BaseElement = (int (**)(...))off_1A1763C8;
  if ( v4 )
    (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))v4->_vptr_BaseElement
     + 1))(v4);
};

// Line 266: range 000000000C9673B0-000000000C967423
void __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::Item::~Item(
        google::protobuf::util::converter::ProtoStreamObjectWriter::Item *const this)
{
  google::protobuf::hash_set<std::string,google::protobuf::hash<std::string >,std::equal_to<std::string > > *ptr; // r12
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *v3; // r12
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *v4; // rdi

  ptr = this->map_keys_.ptr_;
  this->_vptr_BaseElement = (int (**)(...))off_1A185870;
  if ( ptr )
  {
    std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::~_Hashtable(&ptr->_M_h);
    operator delete(ptr, 0x38uLL);
  }
  v3 = this->any_.ptr_;
  if ( v3 )
  {
    google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::~AnyWriter(this->any_.ptr_);
    operator delete(v3, 0x90uLL);
  }
  v4 = this->parent_.ptr_;
  this->_vptr_BaseElement = (int (**)(...))off_1A1763C8;
  if ( v4 )
    (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))v4->_vptr_BaseElement
     + 1))(v4);
  operator delete(this, 0x40uLL);
};

// Line 276: range 000000000C967190-000000000C967194
google::protobuf::util::converter::ProtoStreamObjectWriter::Item *__fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::Item::parent(
        const google::protobuf::util::converter::ProtoStreamObjectWriter::Item *const this)
{
  return (google::protobuf::util::converter::ProtoStreamObjectWriter::Item *)this->parent_.ptr_;
};
