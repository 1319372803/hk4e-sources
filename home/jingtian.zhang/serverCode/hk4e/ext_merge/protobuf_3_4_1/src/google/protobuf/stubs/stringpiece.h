// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/stubs/stringpiece.h

// Line 282: range 000000000C8E2630-000000000C8E2638
void __fastcall google::protobuf::strings::ArrayByteSource::Skip(
        google::protobuf::strings::ArrayByteSource *const this,
        size_t n)
{
  this->input_.ptr_ += n;
  this->input_.length_ -= n;
};
