// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/mysql++_3_2_3/include/mysql++/noexceptions.h

// Line 89: range 000000000C61B0C6-000000000C61B10F
void __cdecl mysqlpp::OptionalExceptions::disable_exceptions(const mysqlpp::OptionalExceptions *const this)
{
  __int64 v1; // rsi

  if ( *(char *)(((unsigned __int64)&this->exceptions_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->exceptions_, v1);
  this->exceptions_ = 0;
};

// Line 92: range 000000000C61B110-000000000C61B158
bool __cdecl mysqlpp::OptionalExceptions::throw_exceptions(const mysqlpp::OptionalExceptions *const this)
{
  if ( *(char *)(((unsigned __int64)&this->exceptions_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->exceptions_);
  return this->exceptions_;
};

// Line 99: range 000000000C61B15A-000000000C61B1AB
// local variable allocation has failed, the output may be wrong!
void __cdecl mysqlpp::OptionalExceptions::set_exceptions(const mysqlpp::OptionalExceptions *const this, bool e)
{
  if ( *(char *)(((unsigned __int64)&this->exceptions_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->exceptions_, e);
  this->exceptions_ = e;
};

// Line 127: range 000000000C61B1AC-000000000C61B263
void __cdecl mysqlpp::NoExceptions::NoExceptions(
        mysqlpp::NoExceptions *const this,
        const mysqlpp::OptionalExceptions *a)
{
  bool v2; // dl
  char v3; // al

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->assoc_ = a;
  v2 = mysqlpp::OptionalExceptions::throw_exceptions(a);
  v3 = *(_BYTE *)(((unsigned __int64)&this->exceptions_were_enabled_ >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a) = v3 != 0;
    __asan_report_store1(&this->exceptions_were_enabled_, a);
  }
  this->exceptions_were_enabled_ = v2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  mysqlpp::OptionalExceptions::disable_exceptions(this->assoc_);
};

// Line 137: range 000000000C61B264-000000000C61B2E3
void __cdecl mysqlpp::NoExceptions::~NoExceptions(mysqlpp::NoExceptions *const this)
{
  const mysqlpp::OptionalExceptions *assoc; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  assoc = this->assoc_;
  if ( *(char *)(((unsigned __int64)&this->exceptions_were_enabled_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->exceptions_were_enabled_);
  mysqlpp::OptionalExceptions::set_exceptions(assoc, this->exceptions_were_enabled_);
};
