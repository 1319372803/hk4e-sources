// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/regex_automaton.h

// Line 98: range 000000000CDFAC94-000000000CDFAD0E
void __cdecl std::__detail::_State_base::_State_base(
        std::__detail::_State_base *const this,
        std::__detail::_Opcode __opcode)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->_M_opcode = __opcode;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_next >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_next = -1LL;
};

// Line 104: range 000000000CDFAD10-000000000CDFAD79
bool __cdecl std::__detail::_State_base::_M_has_alt(std::__detail::_State_base *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return this->_M_opcode == _S_opcode_alternative
      || this->_M_opcode == _S_opcode_repeat
      || this->_M_opcode == _S_opcode_subexpr_lookahead;
};

// Line 133: range 000000000D397828-000000000D397885
void __cdecl std::__detail::_State<char>::_State(
        std::__detail::_State<char> *const this,
        std::__detail::_Opcode __opcode)
{
  void *v2; // rax
  std::function<bool(char)> *v3; // rax

  std::__detail::_State_base::_State_base(this, __opcode);
  if ( std::__detail::_State<char>::_M_opcode(this) == _S_opcode_match )
  {
    v2 = __gnu_cxx::__aligned_membuf<std::function<bool ()(char)>>::_M_addr((__gnu_cxx::__aligned_membuf<std::function<bool(char)> > *const)&this->_anon_0);
    v3 = (std::function<bool(char)> *)operator new(0x20uLL, v2);
    std::function<bool ()(char)>::function(v3);
  }
};

// Line 139: range 000000000D459590-000000000D459721
void __cdecl std::__detail::_State<char>::_State(
        std::__detail::_State<char> *const this,
        const std::__detail::_State<char> *__rhs)
{
  std::__detail::_StateIdT M_next; // rbx
  __int64 v3; // rbx
  __int64 v4; // rbx
  const std::function<bool(char)> *matcher; // r13
  void *v6; // rax
  std::function<bool(char)> *v7; // rax

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)&this->_anon_0._M_matcher_storage._M_storage[31] >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 47) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_anon_0._M_matcher_storage._M_storage[31] >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 48LL);
  }
  if ( *(char *)(((unsigned __int64)__rhs >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)&__rhs->_anon_0._M_matcher_storage._M_storage[31] >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)__rhs + 47) & 7) >= *(_BYTE *)(((unsigned __int64)&__rhs->_anon_0._M_matcher_storage._M_storage[31] >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load_n(__rhs, 48LL);
  }
  M_next = __rhs->_M_next;
  *(_QWORD *)&this->_M_opcode = *(_QWORD *)&__rhs->_M_opcode;
  this->_M_next = M_next;
  v3 = *(_QWORD *)&__rhs->_anon_0._M_matcher_storage._M_storage[8];
  this->_anon_0._M_subexpr = __rhs->_anon_0._M_subexpr;
  *(_QWORD *)&this->_anon_0._M_matcher_storage._M_storage[8] = v3;
  v4 = *(_QWORD *)&__rhs->_anon_0._M_matcher_storage._M_storage[24];
  *(_QWORD *)&this->_anon_0._M_matcher_storage._M_storage[16] = *(_QWORD *)&__rhs->_anon_0._M_matcher_storage._M_storage[16];
  *(_QWORD *)&this->_anon_0._M_matcher_storage._M_storage[24] = v4;
  if ( std::__detail::_State<char>::_M_opcode(__rhs) == _S_opcode_match )
  {
    matcher = std::__detail::_State<char>::_M_get_matcher(__rhs);
    v6 = __gnu_cxx::__aligned_membuf<std::function<bool ()(char)>>::_M_addr((__gnu_cxx::__aligned_membuf<std::function<bool(char)> > *const)&this->_anon_0);
    v7 = (std::function<bool(char)> *)operator new(0x20uLL, v6);
    std::function<bool ()(char)>::function(v7, matcher);
  }
};

// Line 146: range 000000000D397964-000000000D397ACF
void __cdecl std::__detail::_State<char>::_State(
        std::__detail::_State<char> *const this,
        std::__detail::_State<char> *__rhs)
{
  std::__detail::_StateIdT M_next; // rbx
  __int64 v3; // rbx
  __int64 v4; // rbx
  std::function<bool(char)> *matcher; // rax
  std::function<bool(char)> *v6; // rbx
  void *v7; // rax
  std::function<bool(char)> *v8; // rax

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)&this->_anon_0._M_matcher_storage._M_storage[31] >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 47) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_anon_0._M_matcher_storage._M_storage[31] >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 48LL);
  }
  if ( *(char *)(((unsigned __int64)__rhs >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)&__rhs->_anon_0._M_matcher_storage._M_storage[31] >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)__rhs + 47) & 7) >= *(_BYTE *)(((unsigned __int64)&__rhs->_anon_0._M_matcher_storage._M_storage[31] >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load_n(__rhs, 48LL);
  }
  M_next = __rhs->_M_next;
  *(_QWORD *)&this->_M_opcode = *(_QWORD *)&__rhs->_M_opcode;
  this->_M_next = M_next;
  v3 = *(_QWORD *)&__rhs->_anon_0._M_matcher_storage._M_storage[8];
  this->_anon_0._M_subexpr = __rhs->_anon_0._M_subexpr;
  *(_QWORD *)&this->_anon_0._M_matcher_storage._M_storage[8] = v3;
  v4 = *(_QWORD *)&__rhs->_anon_0._M_matcher_storage._M_storage[24];
  *(_QWORD *)&this->_anon_0._M_matcher_storage._M_storage[16] = *(_QWORD *)&__rhs->_anon_0._M_matcher_storage._M_storage[16];
  *(_QWORD *)&this->_anon_0._M_matcher_storage._M_storage[24] = v4;
  if ( std::__detail::_State<char>::_M_opcode(__rhs) == _S_opcode_match )
  {
    matcher = std::__detail::_State<char>::_M_get_matcher(__rhs);
    v6 = std::move<std::function<bool ()(char)> &>(matcher);
    v7 = __gnu_cxx::__aligned_membuf<std::function<bool ()(char)>>::_M_addr((__gnu_cxx::__aligned_membuf<std::function<bool(char)> > *const)&this->_anon_0);
    v8 = (std::function<bool(char)> *)operator new(0x20uLL, v7);
    std::function<bool ()(char)>::function(v8, v6);
  }
};

// Line 156: range 000000000D3978A2-000000000D3978DA
void __cdecl std::__detail::_State<char>::~_State(std::__detail::_State<char> *const this)
{
  std::function<bool(char)> *matcher; // rax

  if ( std::__detail::_State<char>::_M_opcode(this) == _S_opcode_match )
  {
    matcher = std::__detail::_State<char>::_M_get_matcher(this);
    std::function<bool ()(char)>::~function(matcher);
  }
};

// Line 165: range 000000000D3987FE-000000000D398840
std::__detail::_Opcode __cdecl std::__detail::_State<char>::_M_opcode(const std::__detail::_State<char> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return this->_M_opcode;
};

// Line 169: range 000000000D42B902-000000000D42B931
bool __cdecl std::__detail::_State<char>::_M_matches(const std::__detail::_State<char> *const this, char __char)
{
  const std::function<bool(char)> *matcher; // rax

  matcher = std::__detail::_State<char>::_M_get_matcher(this);
  return std::function<bool ()(char)>::operator()(matcher, __char);
};

// Line 173: range 000000000D3F1344-000000000D3F1361
std::__detail::_State<char>::_MatcherT *__cdecl std::__detail::_State<char>::_M_get_matcher(
        std::__detail::_State<char> *const this)
{
  return (std::__detail::_State<char>::_MatcherT *)__gnu_cxx::__aligned_membuf<std::function<bool ()(char)>>::_M_addr((__gnu_cxx::__aligned_membuf<std::function<bool(char)> > *const)&this->_anon_0);
};

// Line 177: range 000000000D449F4E-000000000D449F6B
const std::__detail::_State<char>::_MatcherT *__cdecl std::__detail::_State<char>::_M_get_matcher(
        const std::__detail::_State<char> *const this)
{
  return (const std::__detail::_State<char>::_MatcherT *)__gnu_cxx::__aligned_membuf<std::function<bool ()(char)>>::_M_addr((const __gnu_cxx::__aligned_membuf<std::function<bool(char)> > *const)&this->_anon_0);
};

// Line 190: range 000000000CDFADCE-000000000CDFAEC5
void __cdecl std::__detail::_NFA_base::_NFA_base(
        std::__detail::_NFA_base *const this,
        std::__detail::_NFA_base::_FlagT __f)
{
  std::vector<unsigned long>::vector(&this->_M_paren_stack);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_M_flags);
  }
  this->_M_flags = __f;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_start_state >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_start_state = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_subexpr_count >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_subexpr_count = 0LL;
  if ( *(char *)(((unsigned __int64)&this->_M_has_backref >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_has_backref);
  this->_M_has_backref = 0;
};

// Line 198: range 000000000D47BFA6-000000000D47BFC0
void __cdecl std::__detail::_NFA_base::~_NFA_base(std::__detail::_NFA_base *const this)
{
  std::vector<unsigned long>::~vector(&this->_M_paren_stack);
};

// Line 206: range 000000000CDFAEC6-000000000CDFAF00
std::__detail::_StateIdT __cdecl std::__detail::_NFA_base::_M_start(const std::__detail::_NFA_base *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_start_state >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_start_state);
  return this->_M_start_state;
};

// Line 210: range 000000000CDFAF02-000000000CDFAF3C
std::__detail::_NFA_base::_SizeT __cdecl std::__detail::_NFA_base::_M_sub_count(
        const std::__detail::_NFA_base *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_subexpr_count >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_subexpr_count);
  return this->_M_subexpr_count;
};

// Line 221: range 000000000D4A28F0-000000000D4A292A
void __cdecl std::__detail::_NFA<std::regex_traits<char>>::~_NFA(
        std::__detail::_NFA<std::regex_traits<char> > *const this)
{
  std::regex_traits<char>::~regex_traits(&this->_M_traits);
  std::vector<std::__detail::_State<char>>::~vector(&this->std::vector<std::__detail::_State<char>>);
  std::__detail::_NFA_base::~_NFA_base(this);
};

// Line 228: range 000000000D47C032-000000000D47C1E2
void __cdecl std::__detail::_NFA<std::regex_traits<char>>::_NFA(
        std::__detail::_NFA<std::regex_traits<char> > *const this,
        const std::regex_traits<char>::locale_type *__loc,
        std::__detail::_NFA_base::_FlagT __flags)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v7[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::__detail::_NFA<std::regex_traits<char>>::_NFA;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  std::__detail::_NFA_base::_NFA_base(this, __flags);
  std::vector<std::__detail::_State<char>>::vector(&this->std::vector<std::__detail::_State<char>>);
  std::regex_traits<char>::regex_traits(&this->_M_traits);
  std::locale::locale((std::locale *)(v3 + 64), __loc);
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  std::regex_traits<char>::imbue((std::regex_traits<char> *const)(v3 + 32), &this->_M_traits._M_locale);
  std::locale::~locale((std::locale *)(v3 + 32));
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  std::locale::~locale((std::locale *)(v3 + 64));
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 237: range 000000000D31F44A-000000000D31F595
std::__detail::_StateIdT __cdecl std::__detail::_NFA<std::regex_traits<char>>::_M_insert_accept(
        std::__detail::_NFA<std::regex_traits<char> > *const this)
{
  std::__detail::_State<char> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_StateIdT result; // rax
  __int64 __ret; // [rsp+18h] [rbp-A8h]
  char v6[160]; // [rsp+20h] [rbp-A0h] BYREF

  v1 = (std::__detail::_State<char> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (std::__detail::_State<char> *)v2;
  }
  *(_QWORD *)&v1->_M_opcode = 1102416563LL;
  v1->_M_next = (std::__detail::_StateIdT)"1 48 48 9 <unknown>";
  v1->_anon_0._M_subexpr = (std::size_t)std::__detail::_NFA<std::regex_traits<char>>::_M_insert_accept;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  std::__detail::_State<char>::_State(v1 + 1, _S_opcode_accept);
  __ret = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_state(this, v1 + 1);
  std::__detail::_State<char>::~_State(v1 + 1);
  result = __ret;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)&v1->_M_opcode = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 244: range 000000000D397F90-000000000D398201
std::__detail::_StateIdT __cdecl std::__detail::_NFA<std::regex_traits<char>>::_M_insert_alt(
        std::__detail::_NFA<std::regex_traits<char> > *const this,
        std::__detail::_StateIdT __next,
        std::__detail::_StateIdT __alt,
        bool __neg)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__detail::_State<char> *v7; // rax
  std::__detail::_StateIdT inserted; // r14
  unsigned __int64 v9; // rax
  std::__detail::_StateIdT result; // rax
  char v12[240]; // [rsp+20h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 48 9 __tmp:247 112 48 9 <unknown>";
  *(_QWORD *)(v4 + 16) = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_alt;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862722] = -219021312;
  v6[536862723] = 62194;
  v6[536862725] = -202116109;
  std::__detail::_State<char>::_State((std::__detail::_State<char> *const)(v4 + 32), _S_opcode_alternative);
  if ( *(_BYTE *)(((v4 + 40) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v4 + 40) = __next;
  if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v4 + 48) = __alt;
  v7 = std::move<std::__detail::_State<char> &>((std::__detail::_State<char> *)(v4 + 32));
  std::__detail::_State<char>::_State((std::__detail::_State<char> *const)(v4 + 112), v7);
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_state(
               this,
               (std::__detail::_NFA<std::regex_traits<char> >::_StateT *)(v4 + 112));
  std::__detail::_State<char>::~_State((std::__detail::_State<char> *const)(v4 + 112));
  v9 = ((v4 + 112) >> 3) + 2147450880;
  *(_DWORD *)v9 = -117901064;
  *(_WORD *)(v9 + 4) = -1800;
  std::__detail::_State<char>::~_State((std::__detail::_State<char> *const)(v4 + 32));
  result = inserted;
  if ( v12 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 256: range 000000000D4479AA-000000000D447C5E
std::__detail::_StateIdT __cdecl std::__detail::_NFA<std::regex_traits<char>>::_M_insert_repeat(
        std::__detail::_NFA<std::regex_traits<char> > *const this,
        std::__detail::_StateIdT __next,
        std::__detail::_StateIdT __alt,
        bool __neg)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__detail::_State<char> *v7; // rax
  std::__detail::_StateIdT inserted; // r14
  unsigned __int64 v9; // rax
  std::__detail::_StateIdT result; // rax
  char v13[240]; // [rsp+20h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 48 9 __tmp:258 112 48 9 <unknown>";
  *(_QWORD *)(v4 + 16) = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_repeat;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862722] = -219021312;
  v6[536862723] = 62194;
  v6[536862725] = -202116109;
  std::__detail::_State<char>::_State((std::__detail::_State<char> *const)(v4 + 32), _S_opcode_repeat);
  if ( *(_BYTE *)(((v4 + 40) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v4 + 40) = __next;
  if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v4 + 48) = __alt;
  if ( *(char *)(((v4 + 56) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v4 + 56);
  *(_BYTE *)(v4 + 56) = __neg;
  v7 = std::move<std::__detail::_State<char> &>((std::__detail::_State<char> *)(v4 + 32));
  std::__detail::_State<char>::_State((std::__detail::_State<char> *const)(v4 + 112), v7);
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_state(
               this,
               (std::__detail::_NFA<std::regex_traits<char> >::_StateT *)(v4 + 112));
  std::__detail::_State<char>::~_State((std::__detail::_State<char> *const)(v4 + 112));
  v9 = ((v4 + 112) >> 3) + 2147450880;
  *(_DWORD *)v9 = -117901064;
  *(_WORD *)(v9 + 4) = -1800;
  std::__detail::_State<char>::~_State((std::__detail::_State<char> *const)(v4 + 32));
  result = inserted;
  if ( v13 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 268: range 000000000D45363A-000000000D45385C
std::__detail::_StateIdT __cdecl std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher(
        std::__detail::_NFA<std::regex_traits<char> > *const this,
        std::__detail::_NFA<std::regex_traits<char> >::_MatcherT *p___m)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::function<bool(char)> *v5; // r14
  std::function<bool(char)> *matcher; // rax
  std::__detail::_State<char> *v7; // rax
  std::__detail::_StateIdT inserted; // r14
  unsigned __int64 v9; // rax
  std::__detail::_StateIdT result; // rax
  char v11[240]; // [rsp+10h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 48 9 __tmp:270 112 48 9 <unknown>";
  *(_QWORD *)(v2 + 16) = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  std::__detail::_State<char>::_State((std::__detail::_State<char> *const)(v2 + 32), _S_opcode_match);
  v5 = std::move<std::function<bool ()(char)> &>(p___m);
  matcher = std::__detail::_State<char>::_M_get_matcher((std::__detail::_State<char> *const)(v2 + 32));
  std::function<bool ()(char)>::operator=(matcher, v5);
  v7 = std::move<std::__detail::_State<char> &>((std::__detail::_State<char> *)(v2 + 32));
  std::__detail::_State<char>::_State((std::__detail::_State<char> *const)(v2 + 112), v7);
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_state(
               this,
               (std::__detail::_NFA<std::regex_traits<char> >::_StateT *)(v2 + 112));
  std::__detail::_State<char>::~_State((std::__detail::_State<char> *const)(v2 + 112));
  v9 = ((v2 + 112) >> 3) + 2147450880;
  *(_DWORD *)v9 = -117901064;
  *(_WORD *)(v9 + 4) = -1800;
  std::__detail::_State<char>::~_State((std::__detail::_State<char> *const)(v2 + 32));
  result = inserted;
  if ( v11 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 276: range 000000000D31E770-000000000D31EA63
std::__detail::_StateIdT __cdecl std::__detail::_NFA<std::regex_traits<char>>::_M_insert_subexpr_begin(
        std::__detail::_NFA<std::regex_traits<char> > *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_NFA_base::_SizeT M_subexpr_count; // rax
  __int64 v5; // rdx
  std::__detail::_State<char> *v6; // rax
  std::__detail::_StateIdT inserted; // r14
  unsigned __int64 v8; // rax
  std::__detail::_StateIdT result; // rax
  char v10[272]; // [rsp+10h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 8 8 __id:278 64 48 9 __tmp:280 144 48 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_subexpr_begin;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862723] = -219021312;
  v3[536862724] = 62194;
  v3[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_subexpr_count >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_subexpr_count);
  M_subexpr_count = this->_M_subexpr_count;
  this->_M_subexpr_count = M_subexpr_count + 1;
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v1 + 32) = M_subexpr_count;
  std::vector<unsigned long>::push_back(
    &this->_M_paren_stack,
    (const std::vector<long unsigned int>::value_type *)(v1 + 32));
  std::__detail::_State<char>::_State((std::__detail::_State<char> *const)(v1 + 64), _S_opcode_subexpr_begin);
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1 + 32);
  v5 = *(_QWORD *)(v1 + 32);
  if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v1 + 80) = v5;
  v6 = std::move<std::__detail::_State<char> &>((std::__detail::_State<char> *)(v1 + 64));
  std::__detail::_State<char>::_State((std::__detail::_State<char> *const)(v1 + 144), v6);
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_state(
               this,
               (std::__detail::_NFA<std::regex_traits<char> >::_StateT *)(v1 + 144));
  std::__detail::_State<char>::~_State((std::__detail::_State<char> *const)(v1 + 144));
  v8 = ((v1 + 144) >> 3) + 2147450880;
  *(_DWORD *)v8 = -117901064;
  *(_WORD *)(v8 + 4) = -1800;
  std::__detail::_State<char>::~_State((std::__detail::_State<char> *const)(v1 + 64));
  result = inserted;
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF800C) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 286: range 000000000D31F1E4-000000000D31F448
std::__detail::_StateIdT __cdecl std::__detail::_NFA<std::regex_traits<char>>::_M_insert_subexpr_end(
        std::__detail::_NFA<std::regex_traits<char> > *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  std::__detail::_State<char> *v6; // rax
  std::__detail::_StateIdT inserted; // r14
  unsigned __int64 v8; // rax
  std::__detail::_StateIdT result; // rax
  char v10[240]; // [rsp+10h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 48 9 __tmp:288 112 48 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_subexpr_end;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -219021312;
  v3[536862723] = 62194;
  v3[536862725] = -202116109;
  std::__detail::_State<char>::_State((std::__detail::_State<char> *const)(v1 + 32), _S_opcode_subexpr_end);
  v4 = (unsigned __int64)std::vector<unsigned long>::back(&this->_M_paren_stack);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(v4);
  v5 = *(_QWORD *)v4;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v1 + 48) = v5;
  std::vector<unsigned long>::pop_back(&this->_M_paren_stack);
  v6 = std::move<std::__detail::_State<char> &>((std::__detail::_State<char> *)(v1 + 32));
  std::__detail::_State<char>::_State((std::__detail::_State<char> *const)(v1 + 112), v6);
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_state(
               this,
               (std::__detail::_NFA<std::regex_traits<char> >::_StateT *)(v1 + 112));
  std::__detail::_State<char>::~_State((std::__detail::_State<char> *const)(v1 + 112));
  v8 = ((v1 + 112) >> 3) + 2147450880;
  *(_DWORD *)v8 = -117901064;
  *(_WORD *)(v8 + 4) = -1800;
  std::__detail::_State<char>::~_State((std::__detail::_State<char> *const)(v1 + 32));
  result = inserted;
  if ( v10 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 298: range 000000000D4426DA-000000000D442821
std::__detail::_StateIdT __cdecl std::__detail::_NFA<std::regex_traits<char>>::_M_insert_line_begin(
        std::__detail::_NFA<std::regex_traits<char> > *const this)
{
  std::__detail::_State<char> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_StateIdT inserted; // r14
  std::__detail::_StateIdT result; // rax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (std::__detail::_State<char> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (std::__detail::_State<char> *)v2;
  }
  *(_QWORD *)&v1->_M_opcode = 1102416563LL;
  v1->_M_next = (std::__detail::_StateIdT)"1 48 48 9 <unknown>";
  v1->_anon_0._M_subexpr = (std::size_t)std::__detail::_NFA<std::regex_traits<char>>::_M_insert_line_begin;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  std::__detail::_State<char>::_State(v1 + 1, _S_opcode_line_begin_assertion);
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_state(this, v1 + 1);
  std::__detail::_State<char>::~_State(v1 + 1);
  result = inserted;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)&v1->_M_opcode = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 302: range 000000000D442822-000000000D442969
std::__detail::_StateIdT __cdecl std::__detail::_NFA<std::regex_traits<char>>::_M_insert_line_end(
        std::__detail::_NFA<std::regex_traits<char> > *const this)
{
  std::__detail::_State<char> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_StateIdT inserted; // r14
  std::__detail::_StateIdT result; // rax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (std::__detail::_State<char> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (std::__detail::_State<char> *)v2;
  }
  *(_QWORD *)&v1->_M_opcode = 1102416563LL;
  v1->_M_next = (std::__detail::_StateIdT)"1 48 48 9 <unknown>";
  v1->_anon_0._M_subexpr = (std::size_t)std::__detail::_NFA<std::regex_traits<char>>::_M_insert_line_end;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  std::__detail::_State<char>::_State(v1 + 1, _S_opcode_line_end_assertion);
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_state(this, v1 + 1);
  std::__detail::_State<char>::~_State(v1 + 1);
  result = inserted;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)&v1->_M_opcode = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 306: range 000000000D44296A-000000000D442BA4
std::__detail::_StateIdT __cdecl std::__detail::_NFA<std::regex_traits<char>>::_M_insert_word_bound(
        std::__detail::_NFA<std::regex_traits<char> > *const this,
        bool __neg)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__detail::_State<char> *v5; // rax
  std::__detail::_StateIdT inserted; // r14
  unsigned __int64 v7; // rax
  std::__detail::_StateIdT result; // rax
  char v9[240]; // [rsp+10h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 48 9 __tmp:308 112 48 9 <unknown>";
  *(_QWORD *)(v2 + 16) = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_word_bound;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  std::__detail::_State<char>::_State((std::__detail::_State<char> *const)(v2 + 32), _S_opcode_word_boundary);
  if ( *(char *)(((v2 + 56) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v2 + 56);
  *(_BYTE *)(v2 + 56) = __neg;
  v5 = std::move<std::__detail::_State<char> &>((std::__detail::_State<char> *)(v2 + 32));
  std::__detail::_State<char>::_State((std::__detail::_State<char> *const)(v2 + 112), v5);
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_state(
               this,
               (std::__detail::_NFA<std::regex_traits<char> >::_StateT *)(v2 + 112));
  std::__detail::_State<char>::~_State((std::__detail::_State<char> *const)(v2 + 112));
  v7 = ((v2 + 112) >> 3) + 2147450880;
  *(_DWORD *)v7 = -117901064;
  *(_WORD *)(v7 + 4) = -1800;
  std::__detail::_State<char>::~_State((std::__detail::_State<char> *const)(v2 + 32));
  result = inserted;
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 314: range 000000000D442BA6-000000000D442E1D
std::__detail::_StateIdT __cdecl std::__detail::_NFA<std::regex_traits<char>>::_M_insert_lookahead(
        std::__detail::_NFA<std::regex_traits<char> > *const this,
        std::__detail::_StateIdT __alt,
        bool __neg)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_State<char> *v6; // rax
  std::__detail::_StateIdT inserted; // r14
  unsigned __int64 v8; // rax
  std::__detail::_StateIdT result; // rax
  char v11[240]; // [rsp+20h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 48 9 __tmp:316 112 48 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_lookahead;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  std::__detail::_State<char>::_State((std::__detail::_State<char> *const)(v3 + 32), _S_opcode_subexpr_lookahead);
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 48) = __alt;
  if ( *(char *)(((v3 + 56) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v3 + 56);
  *(_BYTE *)(v3 + 56) = __neg;
  v6 = std::move<std::__detail::_State<char> &>((std::__detail::_State<char> *)(v3 + 32));
  std::__detail::_State<char>::_State((std::__detail::_State<char> *const)(v3 + 112), v6);
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_state(
               this,
               (std::__detail::_NFA<std::regex_traits<char> >::_StateT *)(v3 + 112));
  std::__detail::_State<char>::~_State((std::__detail::_State<char> *const)(v3 + 112));
  v8 = ((v3 + 112) >> 3) + 2147450880;
  *(_DWORD *)v8 = -117901064;
  *(_WORD *)(v8 + 4) = -1800;
  std::__detail::_State<char>::~_State((std::__detail::_State<char> *const)(v3 + 32));
  result = inserted;
  if ( v11 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 323: range 000000000D397E48-000000000D397F8F
std::__detail::_StateIdT __cdecl std::__detail::_NFA<std::regex_traits<char>>::_M_insert_dummy(
        std::__detail::_NFA<std::regex_traits<char> > *const this)
{
  std::__detail::_State<char> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_StateIdT inserted; // r14
  std::__detail::_StateIdT result; // rax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (std::__detail::_State<char> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (std::__detail::_State<char> *)v2;
  }
  *(_QWORD *)&v1->_M_opcode = 1102416563LL;
  v1->_M_next = (std::__detail::_StateIdT)"1 48 48 9 <unknown>";
  v1->_anon_0._M_subexpr = (std::size_t)std::__detail::_NFA<std::regex_traits<char>>::_M_insert_dummy;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  std::__detail::_State<char>::_State(v1 + 1, _S_opcode_dummy);
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_state(this, v1 + 1);
  std::__detail::_State<char>::~_State(v1 + 1);
  result = inserted;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)&v1->_M_opcode = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 327: range 000000000D3978DC-000000000D397954
std::__detail::_StateIdT __cdecl std::__detail::_NFA<std::regex_traits<char>>::_M_insert_state(
        std::__detail::_NFA<std::regex_traits<char> > *const this,
        std::__detail::_NFA<std::regex_traits<char> >::_StateT *p___s)
{
  std::vector<std::__detail::_State<char>>::value_type *v2; // rax

  v2 = std::move<std::__detail::_State<char> &>(p___s);
  std::vector<std::__detail::_State<char>>::push_back(&this->std::vector<std::__detail::_State<char>>, v2);
  if ( std::vector<std::__detail::_State<char>>::size(&this->std::vector<std::__detail::_State<char>>) > 0x186A0 )
    std::__throw_regex_error(
      _S_error_space,
      "Number of NFA states exceeds limit. Please use shorter regex string, or use smaller brace expression, or make _GLI"
      "BCXX_REGEX_STATE_LIMIT larger.");
  return std::vector<std::__detail::_State<char>>::size(&this->std::vector<std::__detail::_State<char>>) - 1;
};

// Line 361: range 000000000D31E6CA-000000000D31E76E
void __cdecl std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
        std::__detail::_StateSeq<std::regex_traits<char> > *const this,
        std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *__nfa,
        std::__detail::_StateIdT __s)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_nfa = __nfa;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_start >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_start = __s;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_end = __s;
};

// Line 365: range 000000000D398202-000000000D3982AA
void __cdecl std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
        std::__detail::_StateSeq<std::regex_traits<char> > *const this,
        std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *__nfa,
        std::__detail::_StateIdT __s,
        std::__detail::_StateIdT __end)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_nfa = __nfa;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_start >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_start = __s;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_end = __end;
};

// Line 371: range 000000000D31EA64-000000000D31EB3A
void __cdecl std::__detail::_StateSeq<std::regex_traits<char>>::_M_append(
        std::__detail::_StateSeq<std::regex_traits<char> > *const this,
        std::__detail::_StateIdT __id)
{
  std::vector<std::__detail::_State<char>> *v2; // rdx
  std::vector<std::__detail::_State<char>>::reference v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v2 = &this->_M_nfa->std::vector<std::__detail::_State<char>>;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_end);
  v3 = std::vector<std::__detail::_State<char>>::operator[](v2, this->_M_end);
  if ( *(_BYTE *)(((unsigned __int64)&v3->_M_next >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v3->_M_next = __id;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_end = __id;
};

// Line 379: range 000000000D31F0BA-000000000D31F1E2
void __cdecl std::__detail::_StateSeq<std::regex_traits<char>>::_M_append(
        std::__detail::_StateSeq<std::regex_traits<char> > *const this,
        const std::__detail::_StateSeq<std::regex_traits<char> > *__s)
{
  std::__detail::_StateIdT M_start; // rbx
  std::vector<std::__detail::_State<char>> *v3; // rdx
  std::vector<std::__detail::_State<char>>::reference v4; // rax
  std::__detail::_StateIdT M_end; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&__s->_M_start >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__s->_M_start);
  M_start = __s->_M_start;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v3 = &this->_M_nfa->std::vector<std::__detail::_State<char>>;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_end);
  v4 = std::vector<std::__detail::_State<char>>::operator[](v3, this->_M_end);
  if ( *(_BYTE *)(((unsigned __int64)&v4->_M_next >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v4->_M_next = M_start;
  if ( *(_BYTE *)(((unsigned __int64)&__s->_M_end >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__s->_M_end);
  M_end = __s->_M_end;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_end = M_end;
};
