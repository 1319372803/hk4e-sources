// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/util/internal/json_objectwriter.h

// Line 125: range 000000000C959AE0-000000000C959AE4
void __fastcall google::protobuf::util::converter::JsonObjectWriter::empty_name_ok_for_next_key(
        google::protobuf::util::converter::JsonObjectWriter *const this)
{
  this->empty_name_ok_for_next_key_ = 1;
};

// Line 129: range 000000000C8E0CA0-000000000C8E0CC3
void __fastcall google::protobuf::util::converter::JsonObjectWriter::Element::~Element(
        google::protobuf::util::converter::JsonObjectWriter::Element *const this)
{
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *ptr; // rdi

  this->_vptr_BaseElement = (int (**)(...))off_1A1763C8;
  ptr = this->parent_.ptr_;
  if ( ptr )
    (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))ptr->_vptr_BaseElement
     + 1))(ptr);
  operator delete(this, 0x18uLL);
};

// Line 149: range 000000000C959AF0-000000000C959AF4
google::protobuf::util::converter::JsonObjectWriter::Element *__fastcall google::protobuf::util::converter::JsonObjectWriter::element(
        google::protobuf::util::converter::JsonObjectWriter *const this)
{
  return this->element_.ptr_;
};

// Line 156: range 000000000C8E0C20-000000000C8E0C50
void __fastcall google::protobuf::util::converter::JsonObjectWriter::ByteSinkWrapper::~ByteSinkWrapper(
        google::protobuf::util::converter::JsonObjectWriter::ByteSinkWrapper *const this)
{
  ;
};

// Line 156: range 000000000C8E0C60-000000000C8E0C65
void __fastcall google::protobuf::util::converter::JsonObjectWriter::ByteSinkWrapper::~ByteSinkWrapper(
        google::protobuf::util::converter::JsonObjectWriter::ByteSinkWrapper *const this)
{
  operator delete(this, 0x10uLL);
};

// Line 160: range 000000000C8E0CD0-000000000C8E0CD4
void __fastcall google::protobuf::util::converter::JsonObjectWriter::ByteSinkWrapper::Append(
        google::protobuf::util::converter::JsonObjectWriter::ByteSinkWrapper *const this,
        const char *bytes,
        size_t n)
{
  google::protobuf::io::CodedOutputStream::WriteRaw(this->stream_, bytes, n);
};
