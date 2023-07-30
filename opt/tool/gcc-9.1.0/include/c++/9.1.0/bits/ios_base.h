// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/ios_base.h

// Line 84: range 000000000CDF9C68-000000000CDF9C79
std::_Ios_Fmtflags __cdecl std::operator&(std::_Ios_Fmtflags __a, std::_Ios_Fmtflags __b)
{
  return __b & __a;
};

// Line 88: range 000000000CDF9C7A-000000000CDF9C8B
std::_Ios_Fmtflags __cdecl std::operator|(std::_Ios_Fmtflags __a, std::_Ios_Fmtflags __b)
{
  return __b | __a;
};

// Line 96: range 000000000CDF9C8C-000000000CDF9C99
std::_Ios_Fmtflags __cdecl std::operator~(std::_Ios_Fmtflags __a)
{
  return ~__a;
};

// Line 100: range 000000000CDF9C9A-000000000CDF9D37
const std::_Ios_Fmtflags *__cdecl std::operator|=(std::_Ios_Fmtflags *__a, std::_Ios_Fmtflags __b)
{
  std::_Ios_Fmtflags v2; // ecx

  if ( *(_BYTE *)(((unsigned __int64)__a >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__a & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__a >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__a);
  }
  v2 = std::operator|(*__a, __b);
  if ( *(_BYTE *)(((unsigned __int64)__a >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__a & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__a >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(__a);
  }
  *__a = v2;
  return __a;
};

// Line 104: range 000000000CDF9D38-000000000CDF9DD5
const std::_Ios_Fmtflags *__cdecl std::operator&=(std::_Ios_Fmtflags *__a, std::_Ios_Fmtflags __b)
{
  std::_Ios_Fmtflags v2; // ecx

  if ( *(_BYTE *)(((unsigned __int64)__a >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__a & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__a >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__a);
  }
  v2 = std::operator&(*__a, __b);
  if ( *(_BYTE *)(((unsigned __int64)__a >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__a & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__a >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(__a);
  }
  *__a = v2;
  return __a;
};

// Line 170: range 000000000F7756EA-000000000F7756FB
std::_Ios_Iostate __cdecl std::operator|(std::_Ios_Iostate __a, std::_Ios_Iostate __b)
{
  return __b | __a;
};

// Line 670: range 000000000CDF9DD6-000000000CDF9E6A
std::ios_base::fmtflags __cdecl std::ios_base::setf(
        std::ios_base *const this,
        std::ios_base::fmtflags __fmtfl,
        std::ios_base::fmtflags __mask)
{
  std::_Ios_Fmtflags v3; // eax
  std::_Ios_Fmtflags v4; // eax
  std::ios_base::fmtflags __old; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)((((unsigned __int64)this + 24) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)this + 24) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4((char *)this + 24);
  }
  __old = *((_DWORD *)this + 6);
  v3 = std::operator~(__mask);
  std::operator&=((std::_Ios_Fmtflags *)this + 6, v3);
  v4 = std::operator&(__fmtfl, __mask);
  std::operator|=((std::_Ios_Fmtflags *)this + 6, v4);
  return __old;
};

// Line 1032: range 000000000CDF9E6B-000000000CDF9E92
std::ios_base *__cdecl std::hex(std::ios_base *__base)
{
  std::ios_base::setf(__base, _S_hex, _S_basefield);
  return __base;
};

// Line 1040: range 000000000CDF9E93-000000000CDF9EBA
std::ios_base *__cdecl std::oct(std::ios_base *__base)
{
  std::ios_base::setf(__base, _S_oct, _S_basefield);
  return __base;
};

// Line 1043: range 000000000CDF9EBB-000000000CDF9EE2
std::ios_base *__cdecl std::fixed(std::ios_base *__base)
{
  std::ios_base::setf(__base, _S_fixed, _S_floatfield);
  return __base;
};
