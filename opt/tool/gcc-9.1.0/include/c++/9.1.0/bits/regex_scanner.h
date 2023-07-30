// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/regex_scanner.h

// Line 91: range 000000000CDFB06A-000000000CDFC2B8
void __cdecl std::__detail::_ScannerBase::_ScannerBase(
        std::__detail::_ScannerBase *const this,
        std::__detail::_ScannerBase::_FlagT __flags)
{
  const std::pair<char,char> *M_ecma_escape_tbl; // rax
  const char *M_ecma_spec_char; // rax

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->_M_token_tbl[8].second + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 71) & 7) >= *(_BYTE *)((((unsigned __int64)&this->_M_token_tbl[8].second + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 72LL);
  }
  this->_M_token_tbl[0] = 0LL;
  this->_M_token_tbl[1] = 0LL;
  this->_M_token_tbl[2] = 0LL;
  this->_M_token_tbl[3] = 0LL;
  this->_M_token_tbl[4] = 0LL;
  this->_M_token_tbl[5] = 0LL;
  this->_M_token_tbl[6] = 0LL;
  this->_M_token_tbl[7] = 0LL;
  this->_M_token_tbl[8] = 0LL;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->_M_token_tbl[0].first = 94;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_token_tbl[0].second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_M_token_tbl[0].second >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_M_token_tbl[0].second);
  }
  this->_M_token_tbl[0].second = _S_token_line_begin;
  if ( *(char *)(((unsigned __int64)&this->_M_token_tbl[1] >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_token_tbl[1]);
  this->_M_token_tbl[1].first = 36;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_token_tbl[1].second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_M_token_tbl[1].second >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_M_token_tbl[1].second);
  }
  this->_M_token_tbl[1].second = _S_token_line_end;
  if ( *(char *)(((unsigned __int64)&this->_M_token_tbl[2] >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_token_tbl[2]);
  this->_M_token_tbl[2].first = 46;
  if ( *(char *)(((unsigned __int64)&this->_M_token_tbl[3] >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_token_tbl[3]);
  this->_M_token_tbl[3].first = 42;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_token_tbl[3].second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_M_token_tbl[3].second >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_M_token_tbl[3].second);
  }
  this->_M_token_tbl[3].second = _S_token_closure0;
  if ( *(char *)(((unsigned __int64)&this->_M_token_tbl[4] >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_token_tbl[4]);
  this->_M_token_tbl[4].first = 43;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_token_tbl[4].second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_M_token_tbl[4].second >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_M_token_tbl[4].second);
  }
  this->_M_token_tbl[4].second = _S_token_closure1;
  if ( *(char *)(((unsigned __int64)&this->_M_token_tbl[5] >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_token_tbl[5]);
  this->_M_token_tbl[5].first = 63;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_token_tbl[5].second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_M_token_tbl[5].second >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_M_token_tbl[5].second);
  }
  this->_M_token_tbl[5].second = _S_token_opt;
  if ( *(char *)(((unsigned __int64)&this->_M_token_tbl[6] >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_token_tbl[6]);
  this->_M_token_tbl[6].first = 124;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_token_tbl[6].second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_M_token_tbl[6].second >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_M_token_tbl[6].second);
  }
  this->_M_token_tbl[6].second = _S_token_or;
  if ( *(char *)(((unsigned __int64)&this->_M_token_tbl[7] >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_token_tbl[7]);
  this->_M_token_tbl[7].first = 10;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_token_tbl[7].second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_M_token_tbl[7].second >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_M_token_tbl[7].second);
  }
  this->_M_token_tbl[7].second = _S_token_or;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_token_tbl[8].second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_M_token_tbl[8].second >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_M_token_tbl[8].second);
  }
  this->_M_token_tbl[8].second = _S_token_or;
  if ( *(_WORD *)(((unsigned __int64)this->_M_ecma_escape_tbl >> 3) + 0x7FFF8000) )
    __asan_report_store16(this->_M_ecma_escape_tbl);
  *(_QWORD *)&this->_M_ecma_escape_tbl[0].first = 0LL;
  *(_QWORD *)&this->_M_ecma_escape_tbl[4].first = 0LL;
  if ( *(char *)(((unsigned __int64)this->_M_ecma_escape_tbl >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this->_M_ecma_escape_tbl);
  this->_M_ecma_escape_tbl[0].first = 48;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_ecma_escape_tbl[1] >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 74) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_ecma_escape_tbl[1] >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_ecma_escape_tbl[1]);
  }
  this->_M_ecma_escape_tbl[1].first = 98;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_ecma_escape_tbl[1].second >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 75) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_ecma_escape_tbl[1].second >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_ecma_escape_tbl[1].second);
  }
  this->_M_ecma_escape_tbl[1].second = 8;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_ecma_escape_tbl[2] >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_ecma_escape_tbl[2] >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_ecma_escape_tbl[2]);
  }
  this->_M_ecma_escape_tbl[2].first = 102;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_ecma_escape_tbl[2].second >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 77) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_ecma_escape_tbl[2].second >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_ecma_escape_tbl[2].second);
  }
  this->_M_ecma_escape_tbl[2].second = 12;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_ecma_escape_tbl[3] >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 78) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_ecma_escape_tbl[3] >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_ecma_escape_tbl[3]);
  }
  this->_M_ecma_escape_tbl[3].first = 110;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_ecma_escape_tbl[3].second >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 79) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_ecma_escape_tbl[3].second >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_ecma_escape_tbl[3].second);
  }
  this->_M_ecma_escape_tbl[3].second = 10;
  if ( *(char *)(((unsigned __int64)&this->_M_ecma_escape_tbl[4] >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_ecma_escape_tbl[4]);
  this->_M_ecma_escape_tbl[4].first = 114;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_ecma_escape_tbl[4].second >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 81) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_ecma_escape_tbl[4].second >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_ecma_escape_tbl[4].second);
  }
  this->_M_ecma_escape_tbl[4].second = 13;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_ecma_escape_tbl[5] >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 82) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_ecma_escape_tbl[5] >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_ecma_escape_tbl[5]);
  }
  this->_M_ecma_escape_tbl[5].first = 116;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_ecma_escape_tbl[5].second >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 83) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_ecma_escape_tbl[5].second >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_ecma_escape_tbl[5].second);
  }
  this->_M_ecma_escape_tbl[5].second = 9;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_ecma_escape_tbl[6] >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_ecma_escape_tbl[6] >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_ecma_escape_tbl[6]);
  }
  this->_M_ecma_escape_tbl[6].first = 118;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_ecma_escape_tbl[6].second >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 85) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_ecma_escape_tbl[6].second >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_ecma_escape_tbl[6].second);
  }
  this->_M_ecma_escape_tbl[6].second = 11;
  if ( *(char *)(((unsigned __int64)this->_M_awk_escape_tbl >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[10].second >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 109) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[10].second >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(this->_M_awk_escape_tbl, 22LL);
  }
  *(_QWORD *)&this->_M_awk_escape_tbl[0].first = 0LL;
  *(_QWORD *)&this->_M_awk_escape_tbl[4].first = 0LL;
  *(_DWORD *)&this->_M_awk_escape_tbl[8].first = 0;
  this->_M_awk_escape_tbl[10] = 0;
  if ( *(char *)(((unsigned __int64)this->_M_awk_escape_tbl >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this->_M_awk_escape_tbl);
  this->_M_awk_escape_tbl[0].first = 34;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[0].second >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 89) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[0].second >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_awk_escape_tbl[0].second);
  }
  this->_M_awk_escape_tbl[0].second = 34;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[1] >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 90) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_awk_escape_tbl[1]);
  }
  this->_M_awk_escape_tbl[1].first = 47;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[1].second >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 91) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[1].second >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_awk_escape_tbl[1].second);
  }
  this->_M_awk_escape_tbl[1].second = 47;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[2] >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_awk_escape_tbl[2]);
  }
  this->_M_awk_escape_tbl[2].first = 92;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[2].second >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 93) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[2].second >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_awk_escape_tbl[2].second);
  }
  this->_M_awk_escape_tbl[2].second = 92;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[3] >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 94) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[3] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_awk_escape_tbl[3]);
  }
  this->_M_awk_escape_tbl[3].first = 97;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[3].second >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[3].second >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_awk_escape_tbl[3].second);
  }
  this->_M_awk_escape_tbl[3].second = 7;
  if ( *(char *)(((unsigned __int64)&this->_M_awk_escape_tbl[4] >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_awk_escape_tbl[4]);
  this->_M_awk_escape_tbl[4].first = 98;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[4].second >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 97) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[4].second >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_awk_escape_tbl[4].second);
  }
  this->_M_awk_escape_tbl[4].second = 8;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[5] >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 98) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[5] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_awk_escape_tbl[5]);
  }
  this->_M_awk_escape_tbl[5].first = 102;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[5].second >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 99) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[5].second >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_awk_escape_tbl[5].second);
  }
  this->_M_awk_escape_tbl[5].second = 12;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[6] >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[6] >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_awk_escape_tbl[6]);
  }
  this->_M_awk_escape_tbl[6].first = 110;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[6].second >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 101) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[6].second >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_awk_escape_tbl[6].second);
  }
  this->_M_awk_escape_tbl[6].second = 10;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[7] >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 102) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[7] >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_awk_escape_tbl[7]);
  }
  this->_M_awk_escape_tbl[7].first = 114;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[7].second >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 103) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[7].second >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_awk_escape_tbl[7].second);
  }
  this->_M_awk_escape_tbl[7].second = 13;
  if ( *(char *)(((unsigned __int64)&this->_M_awk_escape_tbl[8] >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_awk_escape_tbl[8]);
  this->_M_awk_escape_tbl[8].first = 116;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[8].second >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[8].second >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_awk_escape_tbl[8].second);
  }
  this->_M_awk_escape_tbl[8].second = 9;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[9] >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 106) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[9] >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_awk_escape_tbl[9]);
  }
  this->_M_awk_escape_tbl[9].first = 118;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[9].second >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 107) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_awk_escape_tbl[9].second >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_awk_escape_tbl[9].second);
  }
  this->_M_awk_escape_tbl[9].second = 11;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_ecma_spec_char >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_ecma_spec_char = "^$\\.*+?()[]{}|";
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_basic_spec_char >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_basic_spec_char = ".[\\*^$";
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_extended_spec_char >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_extended_spec_char = ".[\\()*+?{|^$";
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_M_state);
  }
  this->_M_state = _S_state_normal;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_M_flags);
  }
  this->_M_flags = __flags;
  if ( std::__detail::_ScannerBase::_M_is_ecma(this) )
    M_ecma_escape_tbl = this->_M_ecma_escape_tbl;
  else
    M_ecma_escape_tbl = this->_M_awk_escape_tbl;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_escape_tbl >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_escape_tbl = M_ecma_escape_tbl;
  if ( std::__detail::_ScannerBase::_M_is_ecma(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_ecma_spec_char >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_ecma_spec_char);
    M_ecma_spec_char = this->_M_ecma_spec_char;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->_M_flags);
    }
    if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)32) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_basic_spec_char >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_basic_spec_char);
      M_ecma_spec_char = this->_M_basic_spec_char;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->_M_flags);
      }
      if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)64) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_extended_spec_char >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->_M_extended_spec_char);
        M_ecma_spec_char = this->_M_extended_spec_char;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->_M_flags);
        }
        if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)256) )
        {
          M_ecma_spec_char = ".[\\*^$\n";
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&this->_M_flags);
          }
          if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)512) )
          {
            M_ecma_spec_char = ".[\\()*+?{|^$\n";
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&this->_M_flags);
            }
            if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)128) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->_M_extended_spec_char >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->_M_extended_spec_char);
              M_ecma_spec_char = this->_M_extended_spec_char;
            }
            else
            {
              M_ecma_spec_char = 0LL;
            }
          }
        }
      }
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_spec_char >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_spec_char = M_ecma_spec_char;
  if ( *(char *)(((unsigned __int64)&this->_M_at_bracket_start >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_at_bracket_start);
  this->_M_at_bracket_start = 0;
};

// Line 115: range 000000000CDFC2BA-000000000CDFC363
const char *__cdecl std::__detail::_ScannerBase::_M_find_escape(std::__detail::_ScannerBase *const this, char __c)
{
  const std::pair<char,char> *__it; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_escape_tbl >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_escape_tbl);
  for ( __it = this->_M_escape_tbl; ; ++__it )
  {
    if ( *(_BYTE *)(((unsigned __int64)__it >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)__it & 7) >= *(_BYTE *)(((unsigned __int64)__it >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(__it);
    }
    if ( !__it->first )
      break;
    if ( __c == __it->first )
      return &__it->second;
  }
  return 0LL;
};

// Line 125: range 000000000CDFC364-000000000CDFC3C9
bool __cdecl std::__detail::_ScannerBase::_M_is_ecma(const std::__detail::_ScannerBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_M_flags);
  }
  return std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)16) != 0;
};

// Line 129: range 000000000CDFC3CA-000000000CDFC43E
bool __cdecl std::__detail::_ScannerBase::_M_is_basic(const std::__detail::_ScannerBase *const this)
{
  std::regex_constants::syntax_option_type v1; // ecx

  v1 = std::regex_constants::operator|(
         (std::regex_constants::syntax_option_type)32,
         (std::regex_constants::syntax_option_type)256);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_M_flags);
  }
  return std::regex_constants::operator&(this->_M_flags, v1) != 0;
};

// Line 145: range 000000000CDFC440-000000000CDFC4A5
bool __cdecl std::__detail::_ScannerBase::_M_is_awk(const std::__detail::_ScannerBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_M_flags);
  }
  return std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)128) != 0;
};

// Line 210: range 000000000D1D6532-000000000D1D6552
void __cdecl std::__detail::_Scanner<char>::~_Scanner(std::__detail::_Scanner<char> *const this)
{
  std::string::~string(&this->_M_value);
};

// Line 226: range 000000000D3982E0-000000000D39832C
std::__detail::_ScannerBase::_TokenT __cdecl std::__detail::_Scanner<char>::_M_get_token(
        const std::__detail::_Scanner<char> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_M_token);
  }
  return this->_M_token;
};

// Line 230: range 000000000D39832E-000000000D398341
const std::__detail::_Scanner<char>::_StringT *__cdecl std::__detail::_Scanner<char>::_M_get_value[abi:cxx11](
        const std::__detail::_Scanner<char> *const this)
{
  return &this->_M_value;
};
