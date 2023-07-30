// File: /home/jin.luo/ext/jsoncpp_1_9_3/include/json/writer.h

// Line 41: range 00000000152E81C0-00000000152E81E2
void __fastcall Json::StreamWriter::~StreamWriter(Json::StreamWriter *const this)
{
  ;
};

// Line 58: range 00000000152E81F0-00000000152E8220
void __fastcall Json::StreamWriter::Factory::~Factory(Json::StreamWriter::Factory *const this)
{
  ;
};

// Line 58: range 00000000152E8250-00000000152E8262
void __fastcall Json::StreamWriter::Factory::~Factory(Json::StreamWriter::Factory *const this)
{
  Json::StreamWriter::Factory::~Factory(this);
  operator delete(this, 8uLL);
};

// Line 89: range 00000000152E8230-00000000152E8242
void __fastcall Json::StreamWriterBuilder::~StreamWriterBuilder(Json::StreamWriterBuilder *const this)
{
  Json::StreamWriterBuilder::~StreamWriterBuilder(this);
  operator delete(this, 0x30uLL);
};

// Line 148: range 00000000152E6940-00000000152E6962
void __fastcall Json::Writer::~Writer(Json::Writer *const this)
{
  ;
};

// Line 168: range 00000000152E6970-00000000152E699C
void __fastcall Json::FastWriter::FastWriter(Json::FastWriter *const this)
{
  this->document_._M_string_length = 0LL;
  this->document_._anon_0._M_local_buf[0] = 0;
  this->omitEndingLineFeed_ = 0;
  this->_vptr_Writer = (int (**)(...))(&`vtable for'Json::FastWriter + 2);
  this->document_._M_dataplus._M_p = this->document_._anon_0._M_local_buf;
  *(_WORD *)&this->yamlCompatibilityEnabled_ = 0;
};

// Line 229: range 00000000152E69D0-00000000152E6A30
void __fastcall Json::StyledWriter::StyledWriter(Json::StyledWriter *const this)
{
  this->childValues_._M_impl._M_start = 0LL;
  this->childValues_._M_impl._M_finish = 0LL;
  this->childValues_._M_impl._M_end_of_storage = 0LL;
  this->_vptr_Writer = (int (**)(...))(&`vtable for'Json::StyledWriter + 2);
  this->document_._M_dataplus._M_p = this->document_._anon_0._M_local_buf;
  this->indentString_._M_dataplus._M_p = this->indentString_._anon_0._M_local_buf;
  this->document_._M_string_length = 0LL;
  this->document_._anon_0._M_local_buf[0] = 0;
  this->indentString_._M_string_length = 0LL;
  this->indentString_._anon_0._M_local_buf[0] = 0;
  *(_QWORD *)&this->rightMargin_ = 0x30000004ALL;
  this->addChildValues_ = 0;
};

// Line 232: range 00000000152EBE30-00000000152EBEC9
void __fastcall Json::StyledWriter::~StyledWriter(Json::StyledWriter *const this)
{
  Json::StyledWriter *M_p; // rdi
  Json::StyledWriter *v3; // rdi
  std::_Vector_base<std::string>::pointer M_finish; // rbx
  std::_Vector_base<std::string>::pointer M_start; // rbp

  this->_vptr_Writer = (int (**)(...))(&`vtable for'Json::StyledWriter + 2);
  M_p = (Json::StyledWriter *)this->indentString_._M_dataplus._M_p;
  if ( M_p != (Json::StyledWriter *)&this->indentString_._anon_0 )
    operator delete(M_p);
  v3 = (Json::StyledWriter *)this->document_._M_dataplus._M_p;
  if ( v3 != (Json::StyledWriter *)&this->document_._anon_0 )
    operator delete(v3);
  M_finish = this->childValues_._M_impl._M_finish;
  M_start = this->childValues_._M_impl._M_start;
  if ( M_finish != M_start )
  {
    do
    {
      while ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->_M_dataplus._M_p != &M_start->_anon_0 )
      {
        operator delete(M_start->_M_dataplus._M_p);
        if ( M_finish == ++M_start )
          goto LABEL_8;
      }
      ++M_start;
    }
    while ( M_finish != M_start );
LABEL_8:
    M_start = this->childValues_._M_impl._M_start;
  }
  if ( M_start )
    operator delete(M_start);
  Json::Writer::~Writer(this);
};

// Line 232: range 00000000152EBED0-00000000152EBF79
void __fastcall Json::StyledWriter::~StyledWriter(Json::StyledWriter *const this)
{
  Json::StyledWriter *M_p; // rdi
  Json::StyledWriter *v3; // rdi
  std::_Vector_base<std::string>::pointer M_finish; // rbx
  std::_Vector_base<std::string>::pointer M_start; // r12

  this->_vptr_Writer = (int (**)(...))(&`vtable for'Json::StyledWriter + 2);
  M_p = (Json::StyledWriter *)this->indentString_._M_dataplus._M_p;
  if ( M_p != (Json::StyledWriter *)&this->indentString_._anon_0 )
    operator delete(M_p);
  v3 = (Json::StyledWriter *)this->document_._M_dataplus._M_p;
  if ( v3 != (Json::StyledWriter *)&this->document_._anon_0 )
    operator delete(v3);
  M_finish = this->childValues_._M_impl._M_finish;
  M_start = this->childValues_._M_impl._M_start;
  if ( M_finish != M_start )
  {
    do
    {
      while ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->_M_dataplus._M_p != &M_start->_anon_0 )
      {
        operator delete(M_start->_M_dataplus._M_p);
        if ( M_finish == ++M_start )
          goto LABEL_8;
      }
      ++M_start;
    }
    while ( M_finish != M_start );
LABEL_8:
    M_start = this->childValues_._M_impl._M_start;
  }
  if ( M_start )
    operator delete(M_start);
  Json::Writer::~Writer(this);
  operator delete(this, 0x70uLL);
};
