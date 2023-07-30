// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/io/zero_copy_stream_impl.h

// Line 63: range 000000000C72B522-000000000C72B541
void __fastcall __noreturn google::protobuf::Message::ParseFromFileDescriptor(
        google::protobuf::io::FileInputStream::CopyingFileInputStream a1,
        google::protobuf::io::CopyingInputStreamAdaptor a2)
{
  struct _Unwind_Exception *v2; // r12
  void (__fastcall **retaddr)(google::protobuf::io::FileInputStream *__hidden); // [rsp+0h] [rbp+0h]

  retaddr = off_1A175E78;
  google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor(&a2);
  google::protobuf::io::FileInputStream::CopyingFileInputStream::~CopyingFileInputStream(&a1);
  _Unwind_Resume(v2);
};

// Line 63: range 000000000C72B546-000000000C72B565
void __fastcall __noreturn google::protobuf::Message::ParsePartialFromFileDescriptor(
        google::protobuf::io::FileInputStream::CopyingFileInputStream a1,
        google::protobuf::io::CopyingInputStreamAdaptor a2)
{
  struct _Unwind_Exception *v2; // r12
  void (__fastcall **retaddr)(google::protobuf::io::FileInputStream *__hidden); // [rsp+0h] [rbp+0h]

  retaddr = off_1A175E78;
  google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor(&a2);
  google::protobuf::io::FileInputStream::CopyingFileInputStream::~CopyingFileInputStream(&a1);
  _Unwind_Resume(v2);
};

// Line 63: range 000000000C8DF480-000000000C8DF49A
void __fastcall google::protobuf::io::FileInputStream::~FileInputStream(
        google::protobuf::io::FileInputStream *const this)
{
  google::protobuf::io::CopyingInputStreamAdaptor *p_impl; // rdi

  p_impl = &this->impl_;
  p_impl[-1].position_ = (google::protobuf::int64)off_1A175E78;
  google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor(p_impl);
  google::protobuf::io::FileInputStream::CopyingFileInputStream::~CopyingFileInputStream(&this->copying_input_);
};

// Line 63: range 000000000C8DF4A0-000000000C8DF4C7
void __fastcall google::protobuf::io::FileInputStream::~FileInputStream(
        google::protobuf::io::FileInputStream *const this)
{
  google::protobuf::io::CopyingInputStreamAdaptor *p_impl; // rdi

  p_impl = &this->impl_;
  p_impl[-1].position_ = (google::protobuf::int64)off_1A175E78;
  google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor(p_impl);
  google::protobuf::io::FileInputStream::CopyingFileInputStream::~CopyingFileInputStream(&this->copying_input_);
  operator delete(this, 0x58uLL);
};

// Line 214: range 000000000C72B56A-000000000C72B589
void __fastcall __noreturn google::protobuf::Message::ParseFromIstream(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        google::protobuf::io::IstreamInputStream::CopyingIstreamInputStream a7,
        google::protobuf::io::CopyingInputStreamAdaptor a8)
{
  struct _Unwind_Exception *v8; // r12
  void (__fastcall **retaddr)(google::protobuf::io::IstreamInputStream *__hidden); // [rsp+0h] [rbp+0h]

  retaddr = off_1A175F58;
  google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor(&a8);
  google::protobuf::io::IstreamInputStream::CopyingIstreamInputStream::~CopyingIstreamInputStream(&a7);
  _Unwind_Resume(v8);
};

// Line 214: range 000000000C72B58E-000000000C72B5AD
void __fastcall __noreturn google::protobuf::Message::ParsePartialFromIstream(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        google::protobuf::io::IstreamInputStream::CopyingIstreamInputStream a7,
        google::protobuf::io::CopyingInputStreamAdaptor a8)
{
  struct _Unwind_Exception *v8; // r12
  void (__fastcall **retaddr)(google::protobuf::io::IstreamInputStream *__hidden); // [rsp+0h] [rbp+0h]

  retaddr = off_1A175F58;
  google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor(&a8);
  google::protobuf::io::IstreamInputStream::CopyingIstreamInputStream::~CopyingIstreamInputStream(&a7);
  _Unwind_Resume(v8);
};

// Line 214: range 000000000C8DF440-000000000C8DF44B
void __fastcall google::protobuf::io::IstreamInputStream::~IstreamInputStream(
        google::protobuf::io::IstreamInputStream *const this)
{
  this->_vptr_ZeroCopyInputStream = (int (**)(...))off_1A175F58;
  google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor(&this->impl_);
};

// Line 214: range 000000000C8DF450-000000000C8DF46E
void __fastcall google::protobuf::io::IstreamInputStream::~IstreamInputStream(
        google::protobuf::io::IstreamInputStream *const this)
{
  google::protobuf::io::CopyingInputStreamAdaptor *p_impl; // rdi

  p_impl = &this->impl_;
  p_impl[-1].buffer_.array_ = (unsigned __int8 *)off_1A175F58;
  google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor(p_impl);
  operator delete(this, 0x50uLL);
};

// Line 302: range 000000000C8DF420-000000000C8DF435
void __fastcall google::protobuf::io::ConcatenatingInputStream::~ConcatenatingInputStream(
        google::protobuf::io::ConcatenatingInputStream *const this)
{
  ;
};
