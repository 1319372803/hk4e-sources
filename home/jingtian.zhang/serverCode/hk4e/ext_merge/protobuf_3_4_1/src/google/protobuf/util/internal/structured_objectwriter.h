// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/util/internal/structured_objectwriter.h

// Line 74: range 000000000C8E0BE0-000000000C8E0C00
void __fastcall google::protobuf::util::converter::StructuredObjectWriter::BaseElement::~BaseElement(
        google::protobuf::util::converter::StructuredObjectWriter::BaseElement *const this)
{
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *ptr; // rdi

  this->_vptr_BaseElement = (int (**)(...))off_1A1763C8;
  ptr = this->parent_.ptr_;
  if ( ptr )
    (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))ptr->_vptr_BaseElement
     + 1))(ptr);
};

// Line 74: range 000000000C8E0C70-000000000C8E0C93
void __fastcall google::protobuf::util::converter::StructuredObjectWriter::BaseElement::~BaseElement(
        google::protobuf::util::converter::StructuredObjectWriter::BaseElement *const this)
{
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *ptr; // rdi

  this->_vptr_BaseElement = (int (**)(...))off_1A1763C8;
  ptr = this->parent_.ptr_;
  if ( ptr )
    (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))ptr->_vptr_BaseElement
     + 1))(ptr);
  operator delete(this, 0x18uLL);
};

// Line 90: range 000000000C8E0C10-000000000C8E0C14
google::protobuf::util::converter::StructuredObjectWriter::BaseElement *__fastcall google::protobuf::util::converter::StructuredObjectWriter::BaseElement::parent(
        const google::protobuf::util::converter::StructuredObjectWriter::BaseElement *const this)
{
  return this->parent_.ptr_;
};
