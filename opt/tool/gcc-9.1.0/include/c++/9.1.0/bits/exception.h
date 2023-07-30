// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/exception.h

// Line 63: range 000000000C6345BE-000000000C6345FF
void __cdecl std::exception::exception(std::exception *const this)
{
  char *v1; // rdx

  v1 = (char *)&`vtable for'std::exception + 16;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this = v1;
};

// Line 66: range 000000000C636FF4-000000000C637039
void __cdecl std::exception::exception(std::exception *const this, const std::exception *a2)
{
  char *v2; // rdx

  v2 = (char *)&`vtable for'std::exception + 16;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this = v2;
};
