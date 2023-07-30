// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/jsoncpp_1_9_3/include/json/writer.h

// Line 172: range 000000000BF4DAD4-000000000BF4DB31
void __cdecl Json::FastWriter::~FastWriter(Json::FastWriter *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'Json::FastWriter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_Writer = v1;
  std::string::~string(&this->document_);
  Json::Writer::~Writer(this);
};

// Line 172: range 000000000BF4DB32-000000000BF4DB5C
void __cdecl Json::FastWriter::~FastWriter(Json::FastWriter *const this)
{
  Json::FastWriter::~FastWriter(this);
  operator delete(this, 0x30uLL);
};
