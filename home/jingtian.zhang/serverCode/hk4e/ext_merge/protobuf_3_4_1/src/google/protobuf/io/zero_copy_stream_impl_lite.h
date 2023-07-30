// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/io/zero_copy_stream_impl_lite.h

// Line 66: range 000000000C8A0590-000000000C8A0595
void __fastcall google::protobuf::io::ArrayInputStream::~ArrayInputStream(
        google::protobuf::io::ArrayInputStream *const this)
{
  operator delete(this, 0x20uLL);
};

// Line 99: range 000000000C8A0570-000000000C8A0580
void __fastcall google::protobuf::io::ArrayOutputStream::~ArrayOutputStream(
        google::protobuf::io::ArrayOutputStream *const this)
{
  ;
};

// Line 99: range 000000000C8A05B0-000000000C8A05B5
void __fastcall google::protobuf::io::ArrayOutputStream::~ArrayOutputStream(
        google::protobuf::io::ArrayOutputStream *const this)
{
  operator delete(this, 0x20uLL);
};

// Line 130: range 000000000C8A0530-000000000C8A0560
void __fastcall google::protobuf::io::StringOutputStream::~StringOutputStream(
        google::protobuf::io::StringOutputStream *const this)
{
  ;
};

// Line 130: range 000000000C8A05A0-000000000C8A05A5
void __fastcall google::protobuf::io::StringOutputStream::~StringOutputStream(
        google::protobuf::io::StringOutputStream *const this)
{
  operator delete(this, 0x10uLL);
};

// Line 162: range 000000000C8A05C0-000000000C8A05E3
void __fastcall google::protobuf::io::LazyStringOutputStream::~LazyStringOutputStream(
        google::protobuf::io::LazyStringOutputStream *const this)
{
  google::protobuf::ResultCallback<std::string*> *ptr; // rdi

  this->_vptr_ZeroCopyOutputStream = (int (**)(...))off_1A16F5B0;
  ptr = this->callback_.ptr_;
  if ( ptr )
    (*((void (__fastcall **)(google::protobuf::ResultCallback<std::string*> *))ptr->_vptr_ResultCallback + 1))(ptr);
  operator delete(this, 0x20uLL);
};
