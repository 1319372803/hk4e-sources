// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/thread/exceptions.hpp

// Line 50: range 000000000BEFCBA6-000000000BEFCC2B
// local variable allocation has failed, the output may be wrong!
void __cdecl boost::thread_exception::thread_exception(
        boost::thread_exception *const this,
        int ev,
        const char *what_arg)
{
  const boost::system::error_category *v3; // rax
  __int64 v4; // rsi OVERLAPPED
  const boost::system::error_category *cat; // rdx
  __int64 *v6; // rdx
  boost::system::error_code ec; // [rsp+20h] [rbp-20h] BYREF

  v3 = boost::system::generic_category();
  boost::system::error_code::error_code(&ec, ev, v3);
  v4 = *(_QWORD *)&ec.val_;
  cat = ec.cat_;
  boost::system::system_error::system_error(this, *(boost::system::error_code *)&v4, what_arg);
  v6 = &`vtable for'boost::thread_exception + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v6;
};

// Line 59: range 000000000BEFCC2C-000000000BEFCC79
void __cdecl boost::thread_exception::~thread_exception(boost::thread_exception *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'boost::thread_exception + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  boost::system::system_error::~system_error(this);
};

// Line 59: range 000000000BEFCC7A-000000000BEFCCA4
void __cdecl boost::thread_exception::~thread_exception(boost::thread_exception *const this)
{
  boost::thread_exception::~thread_exception(this);
  operator delete(this, 0x40uLL);
};

// Line 70: range 000000000BF2E4D2-000000000BF2E52A
void __cdecl boost::condition_error::condition_error(
        boost::condition_error *const this,
        const boost::condition_error *a2)
{
  __int64 *v2; // rdx

  boost::system::system_error::system_error(this, a2);
  v2 = &`vtable for'boost::condition_error + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
};

// Line 70: range 000000000BF255D0-000000000BF2561D
void __cdecl boost::condition_error::~condition_error(boost::condition_error *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'boost::condition_error + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  boost::system::system_error::~system_error(this);
};

// Line 70: range 000000000BF2561E-000000000BF25648
void __cdecl boost::condition_error::~condition_error(boost::condition_error *const this)
{
  boost::condition_error::~condition_error(this);
  operator delete(this, 0x40uLL);
};

// Line 83: range 000000000BEFCCA6-000000000BEFCD2B
// local variable allocation has failed, the output may be wrong!
void __cdecl boost::condition_error::condition_error(boost::condition_error *const this, int ev, const char *what_arg)
{
  const boost::system::error_category *v3; // rax
  __int64 v4; // rsi OVERLAPPED
  const boost::system::error_category *cat; // rdx
  __int64 *v6; // rdx
  boost::system::error_code ec; // [rsp+20h] [rbp-20h] BYREF

  v3 = boost::system::generic_category();
  boost::system::error_code::error_code(&ec, ev, v3);
  v4 = *(_QWORD *)&ec.val_;
  cat = ec.cat_;
  boost::system::system_error::system_error(this, *(boost::system::error_code *)&v4, what_arg);
  v6 = &`vtable for'boost::condition_error + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v6;
};

// Line 94: range 000000000BF2DCDE-000000000BF2DD36
void __cdecl boost::lock_error::lock_error(boost::lock_error *const this, const boost::lock_error *a2)
{
  __int64 *v2; // rdx

  boost::thread_exception::thread_exception(this, a2);
  v2 = &`vtable for'boost::lock_error + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
};

// Line 107: range 000000000BEFCD2C-000000000BEFCD89
void __cdecl boost::lock_error::lock_error(boost::lock_error *const this, int ev, const char *what_arg)
{
  __int64 *v3; // rdx

  boost::thread_exception::thread_exception(this, ev, what_arg);
  v3 = &`vtable for'boost::lock_error + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
};

// Line 116: range 000000000BEFCDD8-000000000BEFCE02
void __cdecl boost::lock_error::~lock_error(boost::lock_error *const this)
{
  boost::lock_error::~lock_error(this);
  operator delete(this, 0x40uLL);
};

// Line 116: range 000000000BEFCD8A-000000000BEFCDD7
void __cdecl boost::lock_error::~lock_error(boost::lock_error *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'boost::lock_error + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  boost::thread_exception::~thread_exception(this);
};

// Line 121: range 000000000BF2D998-000000000BF2D9F0
void __cdecl boost::thread_resource_error::thread_resource_error(
        boost::thread_resource_error *const this,
        const boost::thread_resource_error *a2)
{
  __int64 *v2; // rdx

  boost::thread_exception::thread_exception(this, a2);
  v2 = &`vtable for'boost::thread_resource_error + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
};

// Line 126: range 000000000BEFCE04-000000000BEFCE5D
void __cdecl boost::thread_resource_error::thread_resource_error(boost::thread_resource_error *const this)
{
  __int64 *v1; // rdx

  boost::thread_exception::thread_exception(this, 11, "boost::thread_resource_error");
  v1 = &`vtable for'boost::thread_resource_error + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
};

// Line 134: range 000000000BEFCE5E-000000000BEFCEBB
void __cdecl boost::thread_resource_error::thread_resource_error(
        boost::thread_resource_error *const this,
        int ev,
        const char *what_arg)
{
  __int64 *v3; // rdx

  boost::thread_exception::thread_exception(this, ev, what_arg);
  v3 = &`vtable for'boost::thread_resource_error + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
};

// Line 144: range 000000000BEFCEBC-000000000BEFCF09
void __cdecl boost::thread_resource_error::~thread_resource_error(boost::thread_resource_error *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'boost::thread_resource_error + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  boost::thread_exception::~thread_exception(this);
};

// Line 144: range 000000000BEFCF0A-000000000BEFCF34
void __cdecl boost::thread_resource_error::~thread_resource_error(boost::thread_resource_error *const this)
{
  boost::thread_resource_error::~thread_resource_error(this);
  operator delete(this, 0x40uLL);
};

// Line 208: range 000000000BF2D93E-000000000BF2D996
void __cdecl boost::thread_exception::thread_exception(
        boost::thread_exception *const this,
        const boost::thread_exception *a2)
{
  __int64 *v2; // rdx

  boost::system::system_error::system_error(this, a2);
  v2 = &`vtable for'boost::thread_exception + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
};
