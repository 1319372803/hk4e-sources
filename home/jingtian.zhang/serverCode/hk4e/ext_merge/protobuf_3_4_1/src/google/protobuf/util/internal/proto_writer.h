// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/util/internal/proto_writer.h

// Line 91: range 000000000C966F90-000000000C966FBD
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::ProtoWriter *__fastcall google::protobuf::util::converter::ProtoWriter::RenderInt32(
        google::protobuf::util::converter::ProtoWriter *const this,
        google::protobuf::StringPiece name,
        google::protobuf::int32 value)
{
  int (**vptr_ObjectWriter)(...); // rax
  void (__fastcall **v5)(google::protobuf::util::converter::DataPiece *__hidden); // [rsp+0h] [rbp-38h] BYREF
  int v6; // [rsp+8h] [rbp-30h]
  google::protobuf::int32 valuea; // [rsp+10h] [rbp-28h]
  char v8; // [rsp+20h] [rbp-18h]

  vptr_ObjectWriter = this->_vptr_ObjectWriter;
  valuea = value;
  v5 = off_1A183D08;
  v6 = 1;
  v8 = 0;
  return (google::protobuf::util::converter::ProtoWriter *)((__int64 (__fastcall *)(google::protobuf::util::converter::ProtoWriter *const, const char *, google::protobuf::stringpiece_ssize_type, void (__fastcall ***)(google::protobuf::util::converter::DataPiece *__hidden)))vptr_ObjectWriter[19])(
                                                             this,
                                                             name.ptr_,
                                                             name.length_,
                                                             &v5);
};

// Line 94: range 000000000C966FC0-000000000C966FED
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::ProtoWriter *__fastcall google::protobuf::util::converter::ProtoWriter::RenderUint32(
        google::protobuf::util::converter::ProtoWriter *const this,
        google::protobuf::StringPiece name,
        google::protobuf::uint32 value)
{
  int (**vptr_ObjectWriter)(...); // rax
  void (__fastcall **v5)(google::protobuf::util::converter::DataPiece *__hidden); // [rsp+0h] [rbp-38h] BYREF
  int v6; // [rsp+8h] [rbp-30h]
  google::protobuf::uint32 valuea; // [rsp+10h] [rbp-28h]
  char v8; // [rsp+20h] [rbp-18h]

  vptr_ObjectWriter = this->_vptr_ObjectWriter;
  valuea = value;
  v5 = off_1A183D08;
  v6 = 3;
  v8 = 0;
  return (google::protobuf::util::converter::ProtoWriter *)((__int64 (__fastcall *)(google::protobuf::util::converter::ProtoWriter *const, const char *, google::protobuf::stringpiece_ssize_type, void (__fastcall ***)(google::protobuf::util::converter::DataPiece *__hidden)))vptr_ObjectWriter[19])(
                                                             this,
                                                             name.ptr_,
                                                             name.length_,
                                                             &v5);
};

// Line 97: range 000000000C966FF0-000000000C96701E
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::ProtoWriter *__fastcall google::protobuf::util::converter::ProtoWriter::RenderInt64(
        google::protobuf::util::converter::ProtoWriter *const this,
        google::protobuf::StringPiece name,
        google::protobuf::int64 value)
{
  int (**vptr_ObjectWriter)(...); // rax
  void (__fastcall **v5)(google::protobuf::util::converter::DataPiece *__hidden); // [rsp+0h] [rbp-38h] BYREF
  int v6; // [rsp+8h] [rbp-30h]
  google::protobuf::int64 valuea; // [rsp+10h] [rbp-28h]
  char v8; // [rsp+20h] [rbp-18h]

  vptr_ObjectWriter = this->_vptr_ObjectWriter;
  valuea = value;
  v5 = off_1A183D08;
  v6 = 2;
  v8 = 0;
  return (google::protobuf::util::converter::ProtoWriter *)((__int64 (__fastcall *)(google::protobuf::util::converter::ProtoWriter *const, const char *, google::protobuf::stringpiece_ssize_type, void (__fastcall ***)(google::protobuf::util::converter::DataPiece *__hidden)))vptr_ObjectWriter[19])(
                                                             this,
                                                             name.ptr_,
                                                             name.length_,
                                                             &v5);
};

// Line 100: range 000000000C967020-000000000C96704E
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::ProtoWriter *__fastcall google::protobuf::util::converter::ProtoWriter::RenderUint64(
        google::protobuf::util::converter::ProtoWriter *const this,
        google::protobuf::StringPiece name,
        google::protobuf::uint64 value)
{
  int (**vptr_ObjectWriter)(...); // rax
  void (__fastcall **v5)(google::protobuf::util::converter::DataPiece *__hidden); // [rsp+0h] [rbp-38h] BYREF
  int v6; // [rsp+8h] [rbp-30h]
  google::protobuf::uint64 valuea; // [rsp+10h] [rbp-28h]
  char v8; // [rsp+20h] [rbp-18h]

  vptr_ObjectWriter = this->_vptr_ObjectWriter;
  valuea = value;
  v5 = off_1A183D08;
  v6 = 4;
  v8 = 0;
  return (google::protobuf::util::converter::ProtoWriter *)((__int64 (__fastcall *)(google::protobuf::util::converter::ProtoWriter *const, const char *, google::protobuf::stringpiece_ssize_type, void (__fastcall ***)(google::protobuf::util::converter::DataPiece *__hidden)))vptr_ObjectWriter[19])(
                                                             this,
                                                             name.ptr_,
                                                             name.length_,
                                                             &v5);
};

// Line 103: range 000000000C967050-000000000C96707F
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::ProtoWriter *__fastcall google::protobuf::util::converter::ProtoWriter::RenderDouble(
        google::protobuf::util::converter::ProtoWriter *const this,
        google::protobuf::StringPiece name,
        double a3,
        double value)
{
  int (**vptr_ObjectWriter)(...); // rax
  void (__fastcall **v6)(google::protobuf::util::converter::DataPiece *__hidden); // [rsp+0h] [rbp-38h] BYREF
  int v7; // [rsp+8h] [rbp-30h]
  double v8; // [rsp+10h] [rbp-28h]
  char v9; // [rsp+20h] [rbp-18h]

  vptr_ObjectWriter = this->_vptr_ObjectWriter;
  v6 = off_1A183D08;
  v7 = 5;
  v9 = 0;
  v8 = a3;
  return (google::protobuf::util::converter::ProtoWriter *)((__int64 (__fastcall *)(google::protobuf::util::converter::ProtoWriter *const, const char *, google::protobuf::stringpiece_ssize_type, void (__fastcall ***)(google::protobuf::util::converter::DataPiece *__hidden), double, double))vptr_ObjectWriter[19])(
                                                             this,
                                                             name.ptr_,
                                                             name.length_,
                                                             &v6,
                                                             a3,
                                                             value);
};

// Line 106: range 000000000C967080-000000000C9670AF
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::ProtoWriter *__fastcall google::protobuf::util::converter::ProtoWriter::RenderFloat(
        google::protobuf::util::converter::ProtoWriter *const this,
        google::protobuf::StringPiece name,
        double a3,
        double value)
{
  int (**vptr_ObjectWriter)(...); // rax
  void (__fastcall **v6)(google::protobuf::util::converter::DataPiece *__hidden); // [rsp+0h] [rbp-38h] BYREF
  int v7; // [rsp+8h] [rbp-30h]
  int v8; // [rsp+10h] [rbp-28h]
  char v9; // [rsp+20h] [rbp-18h]

  vptr_ObjectWriter = this->_vptr_ObjectWriter;
  v6 = off_1A183D08;
  v7 = 6;
  v9 = 0;
  v8 = LODWORD(a3);
  return (google::protobuf::util::converter::ProtoWriter *)((__int64 (__fastcall *)(google::protobuf::util::converter::ProtoWriter *const, const char *, google::protobuf::stringpiece_ssize_type, void (__fastcall ***)(google::protobuf::util::converter::DataPiece *__hidden), double, double))vptr_ObjectWriter[19])(
                                                             this,
                                                             name.ptr_,
                                                             name.length_,
                                                             &v6,
                                                             a3,
                                                             value);
};

// Line 109: range 000000000C9670B0-000000000C9670E8
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::ProtoWriter *__fastcall google::protobuf::util::converter::ProtoWriter::RenderString(
        google::protobuf::util::converter::ProtoWriter *const this,
        google::protobuf::StringPiece name,
        google::protobuf::StringPiece value)
{
  bool use_strict_base64_decoding; // r9
  int (**vptr_ObjectWriter)(...); // rax
  void (__fastcall **v6)(google::protobuf::util::converter::DataPiece *__hidden); // [rsp+0h] [rbp-38h] BYREF
  int v7; // [rsp+8h] [rbp-30h]
  const char *ptr; // [rsp+10h] [rbp-28h]
  google::protobuf::stringpiece_ssize_type length; // [rsp+18h] [rbp-20h]
  bool v10; // [rsp+20h] [rbp-18h]

  use_strict_base64_decoding = this->use_strict_base64_decoding_;
  vptr_ObjectWriter = this->_vptr_ObjectWriter;
  ptr = value.ptr_;
  v6 = off_1A183D08;
  v7 = 9;
  length = value.length_;
  v10 = use_strict_base64_decoding;
  return (google::protobuf::util::converter::ProtoWriter *)((__int64 (__fastcall *)(google::protobuf::util::converter::ProtoWriter *const, const char *, google::protobuf::stringpiece_ssize_type, void (__fastcall ***)(google::protobuf::util::converter::DataPiece *__hidden)))vptr_ObjectWriter[19])(
                                                             this,
                                                             name.ptr_,
                                                             name.length_,
                                                             &v6);
};

// Line 113: range 000000000C9670F0-000000000C967128
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::ProtoWriter *__fastcall google::protobuf::util::converter::ProtoWriter::RenderBytes(
        google::protobuf::util::converter::ProtoWriter *const this,
        google::protobuf::StringPiece name,
        google::protobuf::StringPiece value)
{
  bool use_strict_base64_decoding; // r9
  int (**vptr_ObjectWriter)(...); // rax
  void (__fastcall **v6)(google::protobuf::util::converter::DataPiece *__hidden); // [rsp+0h] [rbp-38h] BYREF
  int v7; // [rsp+8h] [rbp-30h]
  const char *ptr; // [rsp+10h] [rbp-28h]
  google::protobuf::stringpiece_ssize_type length; // [rsp+18h] [rbp-20h]
  bool v10; // [rsp+20h] [rbp-18h]

  use_strict_base64_decoding = this->use_strict_base64_decoding_;
  vptr_ObjectWriter = this->_vptr_ObjectWriter;
  ptr = value.ptr_;
  v6 = off_1A183D08;
  v7 = 10;
  length = value.length_;
  v10 = use_strict_base64_decoding;
  return (google::protobuf::util::converter::ProtoWriter *)((__int64 (__fastcall *)(google::protobuf::util::converter::ProtoWriter *const, const char *, google::protobuf::stringpiece_ssize_type, void (__fastcall ***)(google::protobuf::util::converter::DataPiece *__hidden)))vptr_ObjectWriter[19])(
                                                             this,
                                                             name.ptr_,
                                                             name.length_,
                                                             &v6);
};

// Line 117: range 000000000C967130-000000000C967161
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::ProtoWriter *__fastcall google::protobuf::util::converter::ProtoWriter::RenderNull(
        google::protobuf::util::converter::ProtoWriter *const this,
        google::protobuf::StringPiece name)
{
  int (**vptr_ObjectWriter)(...); // rax
  void (__fastcall **v4)(google::protobuf::util::converter::DataPiece *__hidden); // [rsp+0h] [rbp-38h] BYREF
  int v5; // [rsp+8h] [rbp-30h]
  int v6; // [rsp+10h] [rbp-28h]
  char v7; // [rsp+20h] [rbp-18h]

  vptr_ObjectWriter = this->_vptr_ObjectWriter;
  v4 = off_1A183D08;
  v5 = 11;
  v6 = 0;
  v7 = 0;
  return (google::protobuf::util::converter::ProtoWriter *)((__int64 (__fastcall *)(google::protobuf::util::converter::ProtoWriter *const, const char *, google::protobuf::stringpiece_ssize_type, void (__fastcall ***)(google::protobuf::util::converter::DataPiece *__hidden)))vptr_ObjectWriter[19])(
                                                             this,
                                                             name.ptr_,
                                                             name.length_,
                                                             &v4);
};

// Line 133: range 000000000C967170-000000000C967174
bool __fastcall google::protobuf::util::converter::ProtoWriter::done(
        google::protobuf::util::converter::ProtoWriter *const this)
{
  return this->done_;
};

// Line 166: range 000000000C96AE00-000000000C96AE51
void __fastcall google::protobuf::util::converter::ProtoWriter::ProtoElement::~ProtoElement(
        google::protobuf::util::converter::ProtoWriter::ProtoElement *const this)
{
  std::_Bit_type *M_p; // rdi
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *ptr; // rdi

  this->_vptr_BaseElement = (int (**)(...))off_1A185D20;
  this->_vptr_LocationTrackerInterface = (int (**)(...))off_1A185D50;
  M_p = this->oneof_indices_._M_impl._M_start._M_p;
  if ( M_p )
    operator delete(M_p);
  std::_Rb_tree<google::protobuf::Field const*,google::protobuf::Field const*,std::_Identity<google::protobuf::Field const*>,std::less<google::protobuf::Field const*>,std::allocator<google::protobuf::Field const*>>::_M_erase(
    &this->required_fields_._M_t,
    (std::_Rb_tree<const google::protobuf::Field*,const google::protobuf::Field*,std::_Identity<const google::protobuf::Field*>,std::less<const google::protobuf::Field*>,std::allocator<const google::protobuf::Field*> >::_Link_type)this->required_fields_._M_t._M_impl._M_header._M_parent);
  ptr = this->parent_.ptr_;
  this->_vptr_BaseElement = (int (**)(...))off_1A1763C8;
  if ( ptr )
    (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))ptr->_vptr_BaseElement
     + 1))(ptr);
};

// Line 166: range 000000000C96AF30-000000000C96AF81
void __fastcall google::protobuf::util::converter::ProtoWriter::ProtoElement::~ProtoElement(
        google::protobuf::util::converter::ProtoWriter::ProtoElement *const this)
{
  std::_Bit_type *M_p; // rdi
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *ptr; // rdi

  this->_vptr_BaseElement = (int (**)(...))off_1A185D20;
  this->_vptr_LocationTrackerInterface = (int (**)(...))off_1A185D50;
  M_p = this->oneof_indices_._M_impl._M_start._M_p;
  if ( M_p )
    operator delete(M_p);
  std::_Rb_tree<google::protobuf::Field const*,google::protobuf::Field const*,std::_Identity<google::protobuf::Field const*>,std::less<google::protobuf::Field const*>,std::allocator<google::protobuf::Field const*>>::_M_erase(
    &this->required_fields_._M_t,
    (std::_Rb_tree<const google::protobuf::Field*,const google::protobuf::Field*,std::_Identity<const google::protobuf::Field*>,std::less<const google::protobuf::Field*>,std::allocator<const google::protobuf::Field*> >::_Link_type)this->required_fields_._M_t._M_impl._M_header._M_parent);
  ptr = this->parent_.ptr_;
  this->_vptr_BaseElement = (int (**)(...))off_1A1763C8;
  if ( ptr )
    (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))ptr->_vptr_BaseElement
     + 1))(ptr);
  operator delete(this, 0xA8uLL);
};

// Line 186: range 000000000C96AD00-000000000C96AD04
std::string *__fastcall `non-virtual thunk to'google::protobuf::util::converter::ProtoWriter::ProtoElement::ToString[abi:cxx11](
        std::string *a1,
        __int64 a2)
{
  return google::protobuf::util::converter::ProtoWriter::ProtoElement::ToString[abi:cxx11](
           a1,
           (const google::protobuf::util::converter::ProtoWriter::ProtoElement *)(a2 - 24));
};

// Line 245: range 000000000C967180-000000000C967184
google::protobuf::util::converter::ProtoWriter::ProtoElement *__fastcall google::protobuf::util::converter::ProtoWriter::element(
        google::protobuf::util::converter::ProtoWriter *const this)
{
  return this->element_.ptr_;
};
