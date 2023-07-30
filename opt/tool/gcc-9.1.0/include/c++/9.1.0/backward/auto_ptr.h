// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/backward/auto_ptr.h

// Line 172: range 000000000C7381CC-000000000C7381ED
void __fastcall __noreturn mysqlpp::UseQueryResult::UseQueryResult()
{
  __int64 v0; // rbp
  void *v1; // r12
  struct _Unwind_Exception *v2; // r13

  operator delete(v1, 0x98uLL);
  mysqlpp::RefCountedPointer<st_mysql_res,mysqlpp::RefCountedPointerDestroyer<st_mysql_res>>::~RefCountedPointer((mysqlpp::RefCountedPointer<st_mysql_res,mysqlpp::RefCountedPointerDestroyer<st_mysql_res> > *const)(v0 + 88));
  mysqlpp::ResultBase::~ResultBase((mysqlpp::ResultBase *const)v0);
  _Unwind_Resume(v2);
};

// Line 229: range 000000001530E840-000000001530E84D
void __fastcall luabind::scope::scope(luabind::scope *const this, std::auto_ptr<luabind::detail::registration> reg)
{
  int (**vptr_registration)(...); // rax

  vptr_registration = reg._M_ptr->_vptr_registration;
  reg._M_ptr->_vptr_registration = 0LL;
  this->m_chain = (luabind::detail::registration *)vptr_registration;
};
