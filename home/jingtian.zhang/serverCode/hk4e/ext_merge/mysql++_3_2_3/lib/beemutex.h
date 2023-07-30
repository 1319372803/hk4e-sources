// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/beemutex.h

// Line 106: range 000000000C73763A-000000000C737645
void __fastcall __noreturn mysqlpp::ConnectionPool::clear()
{
  struct _Unwind_Exception *v0; // rbp
  mysqlpp::BeecryptMutex *v1; // r15

  mysqlpp::BeecryptMutex::unlock(v1);
  _Unwind_Resume(v0);
};

// Line 106: range 000000000C73765A-000000000C737665
void __fastcall __noreturn mysqlpp::ConnectionPool::grab()
{
  mysqlpp::BeecryptMutex *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  mysqlpp::BeecryptMutex::unlock(v0);
  _Unwind_Resume(v1);
};

// Line 106: range 000000000C73764A-000000000C737655
void __fastcall __noreturn mysqlpp::ConnectionPool::remove()
{
  struct _Unwind_Exception *v0; // rbp
  mysqlpp::BeecryptMutex *v1; // r12

  mysqlpp::BeecryptMutex::unlock(v1);
  _Unwind_Resume(v0);
};
