// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/sqlstream.h

// Line 45: range 000000000CF9CB70-000000000CF9CBFA
void __fastcall mysqlpp::SQLStream::~SQLStream(mysqlpp::SQLStream *const this)
{
  std::ios_base *v1; // r12
  mysqlpp::SQLStream *v3; // rdi

  v1 = (std::ios_base *)this->gap78;
  *(_QWORD *)this->baseclass_0 = &unk_1EB1BEE0;
  *(_QWORD *)this->gap78 = (char *)&unk_1EB1BEE0 + 40;
  *(_QWORD *)&this->baseclass_0[8] = (char *)&`vtable for'std::stringbuf + 16;
  v3 = *(mysqlpp::SQLStream **)&this->baseclass_0[80];
  if ( v3 != (mysqlpp::SQLStream *)&this->baseclass_0[96] )
    operator delete(v3);
  *(_QWORD *)&this->baseclass_0[8] = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)&this->baseclass_0[64]);
  *(_QWORD *)this->baseclass_0 = &unk_1EB1BE90;
  *(_QWORD *)this->gap78 = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v1);
  operator delete(this, 0x180uLL);
};

// Line 45: range 000000000CF9CC90-000000000CF9CD0A
void __fastcall mysqlpp::SQLStream::~SQLStream(mysqlpp::SQLStream *const this)
{
  std::ios_base *v1; // rbp
  mysqlpp::SQLStream *v3; // rdi

  v1 = (std::ios_base *)this->gap78;
  *(_QWORD *)this->baseclass_0 = &unk_1EB1BEE0;
  *(_QWORD *)this->gap78 = (char *)&unk_1EB1BEE0 + 40;
  *(_QWORD *)&this->baseclass_0[8] = (char *)&`vtable for'std::stringbuf + 16;
  v3 = *(mysqlpp::SQLStream **)&this->baseclass_0[80];
  if ( v3 != (mysqlpp::SQLStream *)&this->baseclass_0[96] )
    operator delete(v3);
  *(_QWORD *)&this->baseclass_0[8] = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)&this->baseclass_0[64]);
  *(_QWORD *)this->baseclass_0 = &unk_1EB1BE90;
  *(_QWORD *)this->gap78 = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v1);
};
