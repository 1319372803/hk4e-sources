// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/exception_ptr.h

// Line 105: range 000000000C634850-000000000C6348BD
void __cdecl std::__exception_ptr::exception_ptr::exception_ptr(
        std::__exception_ptr::exception_ptr *const this,
        std::__exception_ptr::exception_ptr *__o)
{
  void *M_exception_object; // rdx

  if ( *(_BYTE *)(((unsigned __int64)__o >> 3) + 0x7FFF8000) )
    __asan_report_load8(__o);
  M_exception_object = __o->_M_exception_object;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_exception_object = M_exception_object;
  __o->_M_exception_object = 0LL;
};

// Line 122: range 000000000C6348BE-000000000C634905
std::__exception_ptr::exception_ptr *__cdecl std::__exception_ptr::exception_ptr::operator=(
        std::__exception_ptr::exception_ptr *const this,
        std::__exception_ptr::exception_ptr *__o)
{
  std::__exception_ptr::exception_ptr v3; // [rsp+18h] [rbp-8h] BYREF

  std::__exception_ptr::exception_ptr::exception_ptr(&v3, __o);
  std::__exception_ptr::exception_ptr::swap(&v3, this);
  std::__exception_ptr::exception_ptr::~exception_ptr(&v3);
  return this;
};

// Line 144: range 000000000C634906-000000000C634941
bool __cdecl std::__exception_ptr::exception_ptr::operator bool(const std::__exception_ptr::exception_ptr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->_M_exception_object != 0LL;
};
