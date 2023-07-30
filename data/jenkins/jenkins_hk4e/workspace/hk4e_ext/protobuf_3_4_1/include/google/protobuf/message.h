// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/protobuf_3_4_1/include/google/protobuf/message.h

// Line 188: range 00000000165AB5AE-00000000165AB5FB
void __cdecl google::protobuf::Message::Message(google::protobuf::Message *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::MessageLite::MessageLite(this);
  v1 = (int (**)(...))(&`vtable for'google::protobuf::Message + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
};

// Line 189: range 00000000165AB5FC-00000000165AB649
void __cdecl google::protobuf::Message::~Message(google::protobuf::Message *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'google::protobuf::Message + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::MessageLite::~MessageLite(this);
};

// Line 189: range 00000000165AB64A-00000000165AB674
void __cdecl google::protobuf::Message::~Message(google::protobuf::Message *const this)
{
  google::protobuf::Message::~Message(this);
  operator delete(this, 8uLL);
};
