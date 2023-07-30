// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/datetime.h

// Line 225: range 000000000CF9A3E0-000000000CF9A3F5
void __fastcall mysqlpp::Date::~Date(mysqlpp::Date *const this)
{
  ;
};

// Line 225: range 000000000CF9A400-000000000CF9A405
void __fastcall mysqlpp::Date::~Date(mysqlpp::Date *const this)
{
  operator delete(this, 0x10uLL);
};

// Line 268: range 000000000CF9A3C0-000000000CF9A3D0
void __fastcall mysqlpp::DateTime::~DateTime(mysqlpp::DateTime *const this)
{
  ;
};

// Line 347: range 000000000CF9A410-000000000CF9A415
void __fastcall mysqlpp::Time::~Time(mysqlpp::Time *const this)
{
  operator delete(this, 0x10uLL);
};
