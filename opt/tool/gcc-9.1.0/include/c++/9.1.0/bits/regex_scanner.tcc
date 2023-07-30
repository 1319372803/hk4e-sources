// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/regex_scanner.tcc

// Line 56: range 000000000D31E482-000000000D31E692
void __cdecl std::__detail::_Scanner<char>::_Scanner(
        std::__detail::_Scanner<char> *const this,
        std::__detail::_Scanner<char>::_IterT __begin,
        std::__detail::_Scanner<char>::_IterT __end,
        std::__detail::_Scanner<char>::_FlagT __flags,
        std::locale *p___loc)
{
  std::__detail::_Scanner<char>::_CtypeT *v5; // rax

  std::__detail::_ScannerBase::_ScannerBase(this, __flags);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_current = __begin;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_end = __end;
  v5 = std::use_facet<std::ctype<char> const>(p___loc);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_ctype >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_ctype = v5;
  std::string::basic_string(&this->_M_value);
  if ( std::__detail::_ScannerBase::_M_is_ecma(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_eat_escape >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_M_eat_escape = (void (*)(std::__detail::_Scanner<char> *))std::__detail::_Scanner<char>::_M_eat_escape_ecma;
    if ( *(_BYTE *)(((unsigned __int64)this->gapF0 >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)this->gapF0 = 0LL;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_eat_escape >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_M_eat_escape = (void (*)(std::__detail::_Scanner<char> *))std::__detail::_Scanner<char>::_M_eat_escape_posix;
    if ( *(_BYTE *)(((unsigned __int64)this->gapF0 >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)this->gapF0 = 0LL;
  }
  std::__detail::_Scanner<char>::_M_advance(this);
};

// Line 70: range 000000000D39756C-000000000D397720
void __cdecl std::__detail::_Scanner<char>::_M_advance(std::__detail::_Scanner<char> *const this)
{
  const char *M_current; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_current);
  M_current = this->_M_current;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_end);
  if ( M_current == this->_M_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->_M_token);
    }
    this->_M_token = _S_token_eof;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_state >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_M_state >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_M_state);
    }
    if ( this->_M_state )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_state >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->_M_state >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->_M_state);
      }
      if ( this->_M_state == _S_state_in_bracket )
      {
        std::__detail::_Scanner<char>::_M_scan_in_bracket(this);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_state >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->_M_state >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->_M_state);
        }
        if ( this->_M_state == _S_state_in_brace )
          std::__detail::_Scanner<char>::_M_scan_in_brace(this);
      }
    }
    else
    {
      std::__detail::_Scanner<char>::_M_scan_normal(this);
    }
  }
};

// Line 96: range 000000000D3EF0EC-000000000D3EFF04
void __cdecl std::__detail::_Scanner<char>::_M_scan_normal(std::__detail::_Scanner<char> *const this)
{
  unsigned __int64 M_current; // rax
  int v2; // edx
  const char *v3; // rcx
  std::__detail::_Scanner<char>::_IterT v4; // rdx
  std::__detail::_Scanner<char>::_IterT v5; // rdx
  std::__detail::_Scanner<char>::_IterT v6; // rdx
  char v7; // al
  std::__detail::_Scanner<char> *v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  std::__detail::_Scanner<char>::_IterT v12; // rdx
  char v13; // al
  const char *v14; // rcx
  std::__detail::_Scanner<char>::_IterT v15; // rdx
  std::__detail::_Scanner<char>::_IterT v16; // rdx
  std::__detail::_Scanner<char>::_IterT v17; // rdx
  int v18; // eax
  const char *v19; // rcx
  std::__detail::_Scanner<char>::_IterT v20; // rdx
  std::__detail::_ScannerBase::_TokenT second; // ecx
  char __c; // [rsp+16h] [rbp-Ah]
  char __narrowc; // [rsp+17h] [rbp-9h]
  std::__detail::_Scanner<char> *__it; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_current);
  M_current = (unsigned __int64)this->_M_current;
  this->_M_current = (std::__detail::_Scanner<char>::_IterT)(M_current + 1);
  if ( *(_BYTE *)((M_current >> 3) + 0x7FFF8000) != 0
    && (char)(M_current & 7) >= *(_BYTE *)((M_current >> 3) + 0x7FFF8000) )
  {
    M_current = __asan_report_load1(M_current);
  }
  __c = *(_BYTE *)M_current;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_ctype >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_ctype);
  v2 = std::ctype<char>::narrow(this->_M_ctype, __c, 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_spec_char >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_spec_char);
  if ( !strchr(this->_M_spec_char, v2) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->_M_token);
    }
LABEL_149:
    this->_M_token = _S_token_ord_char;
    std::string::assign(&this->_M_value, 1LL, (unsigned int)__c);
    return;
  }
  if ( __c == 92 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_current);
    v3 = this->_M_current;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_end);
    if ( v3 == this->_M_end )
      std::__throw_regex_error(_S_error_escape, "Unexpected end of regex when escaping.");
    if ( !std::__detail::_ScannerBase::_M_is_basic(this) )
      goto LABEL_32;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_current);
    v4 = this->_M_current;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && ((__int64)this->_M_current & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(this->_M_current);
    }
    if ( *v4 == 40 )
      goto LABEL_33;
    v5 = this->_M_current;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && ((__int64)this->_M_current & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(this->_M_current);
    }
    if ( *v5 == 41 )
      goto LABEL_33;
    v6 = this->_M_current;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && ((__int64)this->_M_current & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(this->_M_current);
    }
    if ( *v6 == 123 )
LABEL_33:
      v7 = 0;
    else
LABEL_32:
      v7 = 1;
    if ( v7 )
    {
      if ( *(_BYTE *)(((unsigned __int64)this->gapF0 >> 3) + 0x7FFF8000) )
        __asan_report_load8(this->gapF0);
      v8 = (std::__detail::_Scanner<char> *const)((char *)this + *(_QWORD *)this->gapF0);
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_eat_escape >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_eat_escape);
      if ( ((__int64)this->_M_eat_escape & 1) != 0 )
      {
        v9 = (unsigned __int64)this + *(_QWORD *)this->gapF0;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v9 = __asan_report_load8((char *)this + *(_QWORD *)this->gapF0);
        v10 = (unsigned __int64)this->_M_eat_escape + *(_QWORD *)v9 - 1;
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8(v10);
        (*(void (__fastcall **)(std::__detail::_Scanner<char> *))v10)(v8);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_eat_escape >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->_M_eat_escape);
        this->_M_eat_escape(v8);
      }
      return;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_current);
    v11 = (unsigned __int64)this->_M_current;
    this->_M_current = (std::__detail::_Scanner<char>::_IterT)(v11 + 1);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0 && (char)(v11 & 7) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load1(v11);
    __c = *(_BYTE *)v11;
  }
  switch ( __c )
  {
    case '(':
      if ( !std::__detail::_ScannerBase::_M_is_ecma(this) )
        goto LABEL_61;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_current);
      v12 = this->_M_current;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && ((__int64)this->_M_current & 7) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(this->_M_current);
      }
      if ( *v12 == 63 )
        v13 = 1;
      else
LABEL_61:
        v13 = 0;
      if ( v13 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->_M_current);
        v14 = ++this->_M_current;
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->_M_end);
        if ( v14 == this->_M_end )
          std::__throw_regex_error(_S_error_paren, "Unexpected end of regex when in an open parenthesis.");
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->_M_current);
        v15 = this->_M_current;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && ((__int64)this->_M_current & 7) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(this->_M_current);
        }
        if ( *v15 == 58 )
        {
          ++this->_M_current;
          if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->_M_token);
          }
          this->_M_token = _S_token_subexpr_no_group_begin;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->_M_current);
          v16 = this->_M_current;
          if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
            && ((__int64)this->_M_current & 7) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(this->_M_current);
          }
          if ( *v16 == 61 )
          {
            ++this->_M_current;
            if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&this->_M_token);
            }
            this->_M_token = _S_token_subexpr_lookahead_begin;
            std::string::assign(&this->_M_value, 1LL, 112LL);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->_M_current);
            v17 = this->_M_current;
            if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
              && ((__int64)this->_M_current & 7) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(this->_M_current);
            }
            if ( *v17 != 33 )
              std::__throw_regex_error(_S_error_paren, "Invalid special open parenthesis.");
            ++this->_M_current;
            if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&this->_M_token);
            }
            this->_M_token = _S_token_subexpr_lookahead_begin;
            std::string::assign(&this->_M_value, 1LL, 110LL);
          }
        }
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->_M_flags);
        }
        if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)2) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->_M_token);
          }
          this->_M_token = _S_token_subexpr_no_group_begin;
        }
        else
        {
          v18 = *(unsigned __int8 *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000);
          if ( (_BYTE)v18 != 0 && (char)v18 <= 3 )
            __asan_report_store4(&this->_M_token);
          this->_M_token = _S_token_subexpr_begin;
        }
      }
      break;
    case ')':
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->_M_token);
      }
      this->_M_token = _S_token_subexpr_end;
      break;
    case '[':
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_state >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->_M_state >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->_M_state);
      }
      this->_M_state = _S_state_in_bracket;
      if ( *(char *)(((unsigned __int64)&this->_M_at_bracket_start >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->_M_at_bracket_start);
      this->_M_at_bracket_start = 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_current);
      v19 = this->_M_current;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_end);
      if ( v19 == this->_M_end )
        goto LABEL_123;
      v20 = this->_M_current;
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && ((__int64)this->_M_current & 7) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(this->_M_current);
      }
      if ( *v20 != 94 )
      {
LABEL_123:
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->_M_token);
        }
        this->_M_token = _S_token_bracket_begin;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->_M_token);
        }
        this->_M_token = _S_token_bracket_neg_begin;
        ++this->_M_current;
      }
      break;
    case '{':
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_state >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->_M_state >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->_M_state);
      }
      this->_M_state = _S_state_in_brace;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->_M_token);
      }
      this->_M_token = _S_token_interval_begin;
      break;
    case ']':
    case '}':
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->_M_token);
      }
      goto LABEL_149;
    default:
      __it = this;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_ctype >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_ctype);
      __narrowc = std::ctype<char>::narrow(this->_M_ctype, __c, 0);
      while ( 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)__it >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)__it & 7) >= *(_BYTE *)(((unsigned __int64)__it >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(__it);
        }
        if ( !__it->_M_token_tbl[0].first )
          break;
        if ( __narrowc == __it->_M_token_tbl[0].first )
        {
          if ( *(_BYTE *)(((unsigned __int64)&__it->_M_token_tbl[0].second >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)__it + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__it->_M_token_tbl[0].second >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_load4(&__it->_M_token_tbl[0].second);
          }
          second = __it->_M_token_tbl[0].second;
          if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->_M_token);
          }
          this->_M_token = second;
          return;
        }
        __it = (std::__detail::_Scanner<char> *)((char *)__it + 8);
      }
      break;
  }
};

// Line 203: range 000000000D3EFF06-000000000D3F078A
void __cdecl std::__detail::_Scanner<char>::_M_scan_in_bracket(std::__detail::_Scanner<char> *const this)
{
  const char *M_current; // rcx
  unsigned __int64 v2; // rax
  const char *v3; // rcx
  std::__detail::_Scanner<char>::_IterT v4; // rdx
  unsigned __int64 v5; // rax
  std::__detail::_Scanner<char>::_IterT v6; // rdx
  std::__detail::_Scanner<char>::_IterT v7; // rdx
  char v8; // al
  std::__detail::_Scanner<char> *v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  char __c; // [rsp+1Fh] [rbp-1h]

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_current);
  M_current = this->_M_current;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_end);
  if ( M_current == this->_M_end )
    std::__throw_regex_error(_S_error_brack, "Unexpected end of regex when in bracket expression.");
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_current);
  v2 = (unsigned __int64)this->_M_current;
  this->_M_current = (std::__detail::_Scanner<char>::_IterT)(v2 + 1);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)(v2 & 7) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load1(v2);
  __c = *(_BYTE *)v2;
  if ( *(_BYTE *)v2 == 45 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->_M_token);
    }
    this->_M_token = _S_token_bracket_dash;
    goto LABEL_90;
  }
  if ( __c == 91 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_current);
    v3 = this->_M_current;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_end);
    if ( v3 == this->_M_end )
      std::__throw_regex_error(_S_error_brack, "Unexpected character class open bracket.");
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_current);
    v4 = this->_M_current;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && ((__int64)this->_M_current & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(this->_M_current);
    }
    if ( *v4 == 46 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->_M_token);
      }
      this->_M_token = _S_token_collsymbol;
      v5 = (unsigned __int64)this->_M_current;
      this->_M_current = (std::__detail::_Scanner<char>::_IterT)(v5 + 1);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load1(v5);
LABEL_51:
      std::__detail::_Scanner<char>::_M_eat_class(this, *(_BYTE *)v5);
      goto LABEL_90;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_current);
    v6 = this->_M_current;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && ((__int64)this->_M_current & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(this->_M_current);
    }
    if ( *v6 == 58 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->_M_token);
      }
      this->_M_token = _S_token_char_class_name;
      v5 = (unsigned __int64)this->_M_current;
      this->_M_current = (std::__detail::_Scanner<char>::_IterT)(v5 + 1);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load1(v5);
      goto LABEL_51;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_current);
    v7 = this->_M_current;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && ((__int64)this->_M_current & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(this->_M_current);
    }
    if ( *v7 == 61 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->_M_token);
      }
      this->_M_token = _S_token_equiv_class_name;
      v5 = (unsigned __int64)this->_M_current;
      this->_M_current = (std::__detail::_Scanner<char>::_IterT)(v5 + 1);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load1(v5);
      goto LABEL_51;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->_M_token);
    }
LABEL_89:
    this->_M_token = _S_token_ord_char;
    std::string::assign(&this->_M_value, 1LL, (unsigned int)__c);
    goto LABEL_90;
  }
  if ( __c != 93 )
    goto LABEL_61;
  if ( std::__detail::_ScannerBase::_M_is_ecma(this) )
    goto LABEL_60;
  if ( *(char *)(((unsigned __int64)&this->_M_at_bracket_start >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->_M_at_bracket_start);
  if ( !this->_M_at_bracket_start )
LABEL_60:
    v8 = 1;
  else
LABEL_61:
    v8 = 0;
  if ( v8 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->_M_token);
    }
    this->_M_token = _S_token_bracket_end;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_state >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_M_state >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->_M_state);
    }
    this->_M_state = _S_state_normal;
  }
  else
  {
    if ( __c != 92 || !std::__detail::_ScannerBase::_M_is_ecma(this) && !std::__detail::_ScannerBase::_M_is_awk(this) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->_M_token);
      }
      goto LABEL_89;
    }
    if ( *(_BYTE *)(((unsigned __int64)this->gapF0 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->gapF0);
    v10 = (std::__detail::_Scanner<char> *const)((char *)this + *(_QWORD *)this->gapF0);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_eat_escape >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_eat_escape);
    if ( ((__int64)this->_M_eat_escape & 1) != 0 )
    {
      v11 = (unsigned __int64)this + *(_QWORD *)this->gapF0;
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8((char *)this + *(_QWORD *)this->gapF0);
      v12 = (unsigned __int64)this->_M_eat_escape + *(_QWORD *)v11 - 1;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8(v12);
      (*(void (__fastcall **)(std::__detail::_Scanner<char> *))v12)(v10);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_eat_escape >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_eat_escape);
      this->_M_eat_escape(v10);
    }
  }
LABEL_90:
  if ( *(char *)(((unsigned __int64)&this->_M_at_bracket_start >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_at_bracket_start);
  this->_M_at_bracket_start = 0;
};

// Line 265: range 000000000D3F078C-000000000D3F0D5A
void __cdecl std::__detail::_Scanner<char>::_M_scan_in_brace(std::__detail::_Scanner<char> *const this)
{
  const char *M_current; // rcx
  unsigned __int64 v2; // rax
  const char *v3; // rcx
  const std::ctype<char> *M_ctype; // rdi
  char *v5; // rdx
  char v6; // al
  unsigned __int64 v7; // rax
  const char *v8; // rcx
  std::__detail::_Scanner<char>::_IterT v9; // rdx
  char __c; // [rsp+1Fh] [rbp-1h]

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_current);
  M_current = this->_M_current;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_end);
  if ( M_current == this->_M_end )
    std::__throw_regex_error(_S_error_brace, "Unexpected end of regex when in brace expression.");
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_current);
  v2 = (unsigned __int64)this->_M_current;
  this->_M_current = (std::__detail::_Scanner<char>::_IterT)(v2 + 1);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)(v2 & 7) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load1(v2);
  __c = *(_BYTE *)v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_ctype >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_ctype);
  if ( std::ctype<char>::is(this->_M_ctype, 0x800u, __c) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->_M_token);
    }
    this->_M_token = _S_token_dup_count;
    std::string::assign(&this->_M_value, 1LL, (unsigned int)__c);
    while ( 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_current);
      v3 = this->_M_current;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_end);
      if ( v3 == this->_M_end )
        goto LABEL_28;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_ctype >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_ctype);
      M_ctype = this->_M_ctype;
      v5 = (char *)this->_M_current;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && ((__int64)this->_M_current & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        M_ctype = (const std::ctype<char> *)this->_M_current;
        __asan_report_load1(M_ctype);
      }
      if ( !std::ctype<char>::is(M_ctype, 0x800u, *v5) )
LABEL_28:
        v6 = 0;
      else
        v6 = 1;
      if ( !v6 )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_current);
      v7 = (unsigned __int64)this->_M_current;
      this->_M_current = (std::__detail::_Scanner<char>::_IterT)(v7 + 1);
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)(v7 & 7) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load1(v7);
      std::string::operator+=(&this->_M_value, (unsigned int)*(char *)v7);
    }
  }
  else if ( __c == 44 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->_M_token);
    }
    this->_M_token = _S_token_comma;
  }
  else if ( std::__detail::_ScannerBase::_M_is_basic(this) )
  {
    if ( __c != 92 )
      goto LABEL_54;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_current);
    v8 = this->_M_current;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_end);
    if ( v8 == this->_M_end )
      goto LABEL_54;
    v9 = this->_M_current;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && ((__int64)this->_M_current & 7) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(this->_M_current);
    }
    if ( *v9 != 125 )
LABEL_54:
      std::__throw_regex_error(_S_error_badbrace, "Unexpected character in brace expression.");
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_state >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_M_state >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->_M_state);
    }
    this->_M_state = _S_state_normal;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->_M_token);
    }
    this->_M_token = _S_token_interval_end;
    ++this->_M_current;
  }
  else
  {
    if ( __c != 125 )
      std::__throw_regex_error(_S_error_badbrace, "Unexpected character in brace expression.");
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_state >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_M_state >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->_M_state);
    }
    this->_M_state = _S_state_normal;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->_M_token);
    }
    this->_M_token = _S_token_interval_end;
  }
};

// Line 310: range 000000000D3967E8-000000000D3971FB
void __cdecl std::__detail::_Scanner<char>::_M_eat_escape_ecma(std::__detail::_Scanner<char> *const this)
{
  const char *M_current; // rcx
  unsigned __int64 v2; // rax
  char v3; // al
  std::__detail::_Scanner<char>::_StringT *p_M_value; // rcx
  const char *v5; // rcx
  std::__detail::_Scanner<char>::_StringT *p_M_current; // rdi
  unsigned __int64 v7; // rax
  int v8; // eax
  const char *v9; // rcx
  const std::ctype<char> *M_ctype; // rdi
  char *v11; // rdx
  char v12; // al
  unsigned __int64 v13; // rax
  const char *v14; // rcx
  const std::ctype<char> *v15; // rdi
  char *v16; // rdx
  char v17; // al
  unsigned __int64 v18; // rax
  char __c; // [rsp+13h] [rbp-1Dh]
  int __i; // [rsp+14h] [rbp-1Ch]
  const char *__pos; // [rsp+18h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_current);
  M_current = this->_M_current;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_end);
  if ( M_current == this->_M_end )
    std::__throw_regex_error(_S_error_escape, "Unexpected end of regex when escaping.");
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_current);
  v2 = (unsigned __int64)this->_M_current;
  this->_M_current = (std::__detail::_Scanner<char>::_IterT)(v2 + 1);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)(v2 & 7) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load1(v2);
  __c = *(_BYTE *)v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_ctype >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_ctype);
  v3 = std::ctype<char>::narrow(this->_M_ctype, __c, 0);
  __pos = std::__detail::_ScannerBase::_M_find_escape(this, v3);
  if ( !__pos )
    goto LABEL_23;
  if ( __c != 98 )
    goto LABEL_18;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_M_state);
  }
  if ( this->_M_state == _S_state_in_bracket )
  {
LABEL_18:
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->_M_token);
    }
    this->_M_token = _S_token_ord_char;
    p_M_value = &this->_M_value;
    if ( *(_BYTE *)(((unsigned __int64)__pos >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)__pos & 7) >= *(_BYTE *)(((unsigned __int64)__pos >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(__pos);
    }
    std::string::assign(p_M_value, 1LL, (unsigned int)*__pos);
  }
  else
  {
LABEL_23:
    switch ( __c )
    {
      case 'b':
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->_M_token);
        }
        this->_M_token = _S_token_word_bound;
        std::string::assign(&this->_M_value, 1LL, 112LL);
        break;
      case 'B':
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->_M_token);
        }
        this->_M_token = _S_token_word_bound;
        std::string::assign(&this->_M_value, 1LL, 110LL);
        break;
      case 'd':
      case 'D':
      case 's':
      case 'S':
      case 'w':
      case 'W':
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->_M_token);
        }
        this->_M_token = _S_token_quoted_class;
        std::string::assign(&this->_M_value, 1LL, (unsigned int)__c);
        break;
      case 'c':
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->_M_current);
        v5 = this->_M_current;
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->_M_end);
        if ( v5 == this->_M_end )
          std::__throw_regex_error(_S_error_escape, "Unexpected end of regex when reading control code.");
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->_M_token);
        }
        this->_M_token = _S_token_ord_char;
        p_M_current = &this->_M_value;
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
        {
          p_M_current = (std::__detail::_Scanner<char>::_StringT *)&this->_M_current;
          __asan_report_load8(&this->_M_current);
        }
        v7 = (unsigned __int64)this->_M_current;
        this->_M_current = (std::__detail::_Scanner<char>::_IterT)(v7 + 1);
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)(v7 & 7) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        {
          p_M_current = (std::__detail::_Scanner<char>::_StringT *)v7;
          v7 = __asan_report_load1(v7);
        }
        std::string::assign(p_M_current, 1LL, (unsigned int)*(char *)v7);
        break;
      case 'x':
      case 'u':
        std::string::erase(&this->_M_value, 0LL, -1LL);
        for ( __i = 0; ; ++__i )
        {
          v8 = __c == 120 ? 2 : 4;
          if ( v8 <= __i )
            break;
          if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->_M_current);
          v9 = this->_M_current;
          if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->_M_end);
          if ( v9 == this->_M_end )
            goto LABEL_71;
          if ( *(_BYTE *)(((unsigned __int64)&this->_M_ctype >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->_M_ctype);
          M_ctype = this->_M_ctype;
          v11 = (char *)this->_M_current;
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
            && ((__int64)this->_M_current & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          {
            M_ctype = (const std::ctype<char> *)this->_M_current;
            __asan_report_load1(M_ctype);
          }
          if ( !std::ctype<char>::is(M_ctype, 0x1000u, *v11) )
LABEL_71:
            v12 = 1;
          else
            v12 = 0;
          if ( v12 )
            std::__throw_regex_error(_S_error_escape, "Unexpected end of regex when ascii character.");
          if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->_M_current);
          v13 = (unsigned __int64)this->_M_current;
          this->_M_current = (std::__detail::_Scanner<char>::_IterT)(v13 + 1);
          if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0 && (char)(v13 & 7) >= *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
            v13 = __asan_report_load1(v13);
          std::string::operator+=(&this->_M_value, (unsigned int)*(char *)v13);
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->_M_token);
        }
        this->_M_token = _S_token_hex_num;
        break;
      default:
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_ctype >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->_M_ctype);
        if ( std::ctype<char>::is(this->_M_ctype, 0x800u, __c) )
        {
          std::string::assign(&this->_M_value, 1LL, (unsigned int)__c);
          while ( 1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->_M_current);
            v14 = this->_M_current;
            if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->_M_end);
            if ( v14 == this->_M_end )
              goto LABEL_98;
            if ( *(_BYTE *)(((unsigned __int64)&this->_M_ctype >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->_M_ctype);
            v15 = this->_M_ctype;
            v16 = (char *)this->_M_current;
            if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
              && ((__int64)this->_M_current & 7) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
            {
              v15 = (const std::ctype<char> *)this->_M_current;
              __asan_report_load1(v15);
            }
            if ( !std::ctype<char>::is(v15, 0x800u, *v16) )
LABEL_98:
              v17 = 0;
            else
              v17 = 1;
            if ( !v17 )
              break;
            if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->_M_current);
            v18 = (unsigned __int64)this->_M_current;
            this->_M_current = (std::__detail::_Scanner<char>::_IterT)(v18 + 1);
            if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) != 0 && (char)(v18 & 7) >= *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
              v18 = __asan_report_load1(v18);
            std::string::operator+=(&this->_M_value, (unsigned int)*(char *)v18);
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->_M_token);
          }
          this->_M_token = _S_token_backref;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->_M_token);
          }
          this->_M_token = _S_token_ord_char;
          std::string::assign(&this->_M_value, 1LL, (unsigned int)__c);
        }
        break;
    }
  }
};

// Line 389: range 000000000D3971FC-000000000D39756A
void __cdecl std::__detail::_Scanner<char>::_M_eat_escape_posix(std::__detail::_Scanner<char> *const this)
{
  const char *M_current; // rcx
  std::__detail::_Scanner<char>::_IterT v2; // rdx
  int v3; // edx
  char v4; // al
  char __c; // [rsp+17h] [rbp-9h]
  char *__pos; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_current);
  M_current = this->_M_current;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_end);
  if ( M_current == this->_M_end )
    std::__throw_regex_error(_S_error_escape, "Unexpected end of regex when escaping.");
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_current);
  v2 = this->_M_current;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && ((__int64)this->_M_current & 7) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(this->_M_current);
  }
  __c = *v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_ctype >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_ctype);
  v3 = std::ctype<char>::narrow(this->_M_ctype, __c, 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_spec_char >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_spec_char);
  __pos = strchr(this->_M_spec_char, v3);
  if ( !__pos )
    goto LABEL_41;
  if ( *(_BYTE *)(((unsigned __int64)__pos >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)__pos & 7) >= *(_BYTE *)(((unsigned __int64)__pos >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(__pos);
  }
  if ( *__pos )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->_M_token);
    }
    this->_M_token = _S_token_ord_char;
    std::string::assign(&this->_M_value, 1LL, (unsigned int)__c);
  }
  else
  {
LABEL_41:
    if ( std::__detail::_ScannerBase::_M_is_awk(this) )
    {
      std::__detail::_Scanner<char>::_M_eat_escape_awk(this);
      return;
    }
    if ( !std::__detail::_ScannerBase::_M_is_basic(this) )
      goto LABEL_30;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_ctype >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_ctype);
    if ( std::ctype<char>::is(this->_M_ctype, 0x800u, __c) && __c != 48 )
      v4 = 1;
    else
LABEL_30:
      v4 = 0;
    if ( !v4 )
      std::__throw_regex_error(_S_error_escape, "Unexpected escape character.");
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->_M_token);
    }
    this->_M_token = _S_token_backref;
    std::string::assign(&this->_M_value, 1LL, (unsigned int)__c);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_current);
  ++this->_M_current;
};

// Line 431: range 000000000D3EEC12-000000000D3EF0EB
void __cdecl std::__detail::_Scanner<char>::_M_eat_escape_awk(std::__detail::_Scanner<char> *const this)
{
  unsigned __int64 M_current; // rax
  char v2; // al
  std::__detail::_Scanner<char>::_StringT *p_M_value; // rcx
  const char *v5; // rcx
  const std::ctype<char> *M_ctype; // rdi
  char *v7; // rdx
  std::__detail::_Scanner<char>::_IterT v8; // rdx
  std::__detail::_Scanner<char>::_IterT v9; // rdx
  char v10; // al
  unsigned __int64 v11; // rax
  char __c; // [rsp+13h] [rbp-1Dh]
  int __i; // [rsp+14h] [rbp-1Ch]
  const char *__pos; // [rsp+18h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_current);
  M_current = (unsigned __int64)this->_M_current;
  this->_M_current = (std::__detail::_Scanner<char>::_IterT)(M_current + 1);
  if ( *(_BYTE *)((M_current >> 3) + 0x7FFF8000) != 0
    && (char)(M_current & 7) >= *(_BYTE *)((M_current >> 3) + 0x7FFF8000) )
  {
    M_current = __asan_report_load1(M_current);
  }
  __c = *(_BYTE *)M_current;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_ctype >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_ctype);
  v2 = std::ctype<char>::narrow(this->_M_ctype, __c, 0);
  __pos = std::__detail::_ScannerBase::_M_find_escape(this, v2);
  if ( __pos )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->_M_token);
    }
    this->_M_token = _S_token_ord_char;
    p_M_value = &this->_M_value;
    if ( *(_BYTE *)(((unsigned __int64)__pos >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)__pos & 7) >= *(_BYTE *)(((unsigned __int64)__pos >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(__pos);
    }
    std::string::assign(p_M_value, 1LL, (unsigned int)*__pos);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_ctype >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_ctype);
    if ( !std::ctype<char>::is(this->_M_ctype, 0x800u, __c) || __c == 56 || __c == 57 )
      std::__throw_regex_error(_S_error_escape, "Unexpected escape character.");
    std::string::assign(&this->_M_value, 1LL, (unsigned int)__c);
    for ( __i = 0; ; ++__i )
    {
      if ( __i > 1 )
        goto LABEL_42;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_current);
      v5 = this->_M_current;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_end);
      if ( v5 == this->_M_end )
        goto LABEL_42;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_ctype >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_ctype);
      M_ctype = this->_M_ctype;
      v7 = (char *)this->_M_current;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && ((__int64)this->_M_current & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        M_ctype = (const std::ctype<char> *)this->_M_current;
        __asan_report_load1(M_ctype);
      }
      if ( !std::ctype<char>::is(M_ctype, 0x800u, *v7) )
        goto LABEL_42;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_current);
      v8 = this->_M_current;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && ((__int64)this->_M_current & 7) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(this->_M_current);
      }
      if ( *v8 == 56 )
        goto LABEL_42;
      v9 = this->_M_current;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && ((__int64)this->_M_current & 7) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(this->_M_current);
      }
      if ( *v9 == 57 )
LABEL_42:
        v10 = 0;
      else
        v10 = 1;
      if ( !v10 )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_current);
      v11 = (unsigned __int64)this->_M_current;
      this->_M_current = (std::__detail::_Scanner<char>::_IterT)(v11 + 1);
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0 && (char)(v11 & 7) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load1(v11);
      std::string::operator+=(&this->_M_value, (unsigned int)*(char *)v11);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_M_token >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->_M_token);
    }
    this->_M_token = _S_token_oct_num;
  }
};

// Line 469: range 000000000D426560-000000000D426814
void __cdecl std::__detail::_Scanner<char>::_M_eat_class(std::__detail::_Scanner<char> *const this, char __ch)
{
  const char *M_current; // rcx
  std::__detail::_Scanner<char>::_IterT v3; // rdx
  unsigned __int64 v4; // rax
  const char *v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  char v8; // al

  std::string::clear(&this->_M_value);
  while ( 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_current);
    M_current = this->_M_current;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_end);
    if ( M_current == this->_M_end )
      break;
    v3 = this->_M_current;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && ((__int64)this->_M_current & 7) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(this->_M_current);
    }
    if ( __ch == *v3 )
      break;
    v4 = (unsigned __int64)this->_M_current;
    this->_M_current = (std::__detail::_Scanner<char>::_IterT)(v4 + 1);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0 && (char)(v4 & 7) >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load1(v4);
    std::string::operator+=(&this->_M_value, (unsigned int)*(char *)v4);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_current);
  v5 = this->_M_current;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_end);
  if ( v5 == this->_M_end )
    goto LABEL_25;
  v6 = (unsigned __int64)this->_M_current;
  this->_M_current = (std::__detail::_Scanner<char>::_IterT)(v6 + 1);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)(v6 & 7) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load1(v6);
  if ( __ch != *(_BYTE *)v6 || this->_M_current == this->_M_end )
    goto LABEL_25;
  v7 = (unsigned __int64)this->_M_current;
  this->_M_current = (std::__detail::_Scanner<char>::_IterT)(v7 + 1);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)(v7 & 7) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load1(v7);
  if ( *(_BYTE *)v7 == 93 )
    v8 = 0;
  else
LABEL_25:
    v8 = 1;
  if ( v8 )
  {
    if ( __ch == 58 )
      std::__throw_regex_error(_S_error_ctype, "Unexpected end of character class.");
    std::__throw_regex_error(_S_error_collate, "Unexpected end of character class.");
  }
};
