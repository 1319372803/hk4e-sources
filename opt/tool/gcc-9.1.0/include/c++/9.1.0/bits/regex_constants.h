// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/regex_constants.h

// Line 184: range 000000000CDFAA99-000000000CDFAAAA
std::regex_constants::syntax_option_type __cdecl std::regex_constants::operator&(
        std::regex_constants::syntax_option_type __a,
        std::regex_constants::syntax_option_type __b)
{
  return __b & __a;
};

// Line 191: range 000000000CDFAAAB-000000000CDFAABC
std::regex_constants::syntax_option_type __cdecl std::regex_constants::operator|(
        std::regex_constants::syntax_option_type __a,
        std::regex_constants::syntax_option_type __b)
{
  return __b | __a;
};

// Line 375: range 000000000CDFAABD-000000000CDFAACE
std::regex_constants::match_flag_type __cdecl std::regex_constants::operator&(
        std::regex_constants::match_flag_type __a,
        std::regex_constants::match_flag_type __b)
{
  return __b & __a;
};

// Line 382: range 000000000CDFAACF-000000000CDFAAE0
std::regex_constants::match_flag_type __cdecl std::regex_constants::operator|(
        std::regex_constants::match_flag_type __a,
        std::regex_constants::match_flag_type __b)
{
  return __b | __a;
};

// Line 396: range 000000000CDFAAE1-000000000CDFAAEE
std::regex_constants::match_flag_type __cdecl std::regex_constants::operator~(
        std::regex_constants::match_flag_type __a)
{
  return ~__a;
};

// Line 404: range 000000000CDFAAEF-000000000CDFAB8C
std::regex_constants::match_flag_type *__cdecl std::regex_constants::operator|=(
        std::regex_constants::match_flag_type *__a,
        std::regex_constants::match_flag_type __b)
{
  std::regex_constants::match_flag_type v2; // ecx

  if ( *(_BYTE *)(((unsigned __int64)__a >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__a & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__a >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__a);
  }
  v2 = std::regex_constants::operator|(*__a, __b);
  if ( *(_BYTE *)(((unsigned __int64)__a >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__a & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__a >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(__a);
  }
  *__a = v2;
  return __a;
};
