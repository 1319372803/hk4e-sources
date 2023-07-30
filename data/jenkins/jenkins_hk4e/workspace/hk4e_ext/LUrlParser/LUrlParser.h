// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/LUrlParser/LUrlParser.h

// Line 64: range 000000000C7A471A-000000000C7A4761
bool __cdecl LUrlParser::clParseURL::IsValid(const LUrlParser::clParseURL *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return this->m_ErrorCode == LUrlParserError_Ok;
};
