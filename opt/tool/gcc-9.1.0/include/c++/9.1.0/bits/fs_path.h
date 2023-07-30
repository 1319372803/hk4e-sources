// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/fs_path.h

// Line 135: range 000000000CFC92FC-000000000CFC9315
const char *__cdecl std::filesystem::__cxx11::path::_S_range_begin<char,std::char_traits<char>,std::allocator<char>>(
        const std::string *__str)
{
  return (const char *)std::string::data(__str);
};

// Line 140: range 000000000CFC9316-000000000CFC9347
const char *__cdecl std::filesystem::__cxx11::path::_S_range_end<char,std::char_traits<char>,std::allocator<char>>(
        const std::string *__str)
{
  __int64 v1; // rbx

  v1 = std::string::data(__str);
  return (const char *)(v1 + std::string::size(__str));
};

// Line 173: range 000000000F7776BC-000000000F7776E6
void __cdecl std::filesystem::__cxx11::path::path(std::filesystem::__cxx11::path *const this)
{
  std::string::basic_string(this);
  std::filesystem::__cxx11::path::_List::_List(&this->_M_cmpts);
};

// Line 175: range 000000000F777702-000000000F777765
void __cdecl std::filesystem::__cxx11::path::path(
        std::filesystem::__cxx11::path *const this,
        const std::filesystem::__cxx11::path *__p)
{
  std::string::basic_string(this, __p);
  std::filesystem::__cxx11::path::_List::_List(&this->_M_cmpts, &__p->_M_cmpts);
};

// Line 191: range 000000000CEC61E4-000000000CEC641D
void __cdecl std::filesystem::__cxx11::path::path<std::string,std::filesystem::__cxx11::path>(
        std::filesystem::__cxx11::path *const this,
        const std::string *__source,
        std::filesystem::__cxx11::path::format a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const char *v6; // r15
  const char *v7; // rcx
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 9 <unknown> 64 16 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::filesystem::__cxx11::path::path<std::string,std::filesystem::__cxx11::path>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202178560;
  std::allocator<char>::allocator(v3 + 48);
  v6 = std::filesystem::__cxx11::path::_S_range_end<char,std::char_traits<char>,std::allocator<char>>(__source);
  v7 = std::filesystem::__cxx11::path::_S_range_begin<char,std::char_traits<char>,std::allocator<char>>(__source);
  if ( *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v3 + 64);
  *(std::string_view *)(v3 + 64) = std::filesystem::__cxx11::path::_S_convert(v7, v6);
  std::string::basic_string<std::string_view,void>(
    &this->_M_pathname,
    (const std::string_view *)(v3 + 64),
    (const std::allocator<char> *)(v3 + 48));
  *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -1800;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  std::filesystem::__cxx11::path::_List::_List(&this->_M_cmpts);
  std::filesystem::__cxx11::path::_M_split_cmpts(this);
  if ( v8 == (char *)v3 )
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

// Line 218: range 000000000C9A7B94-000000000C9A85EE
void __fastcall std::filesystem::__cxx11::path::~path(std::filesystem::__cxx11::path *const this)
{
  std::filesystem::__cxx11::path::_List::_Impl *M_head_impl; // rsi
  std::filesystem::__cxx11::path::_List *p_M_cmpts; // rdi
  const std::filesystem::__cxx11::path *v4; // rdx
  const std::filesystem::__cxx11::path *v5; // rcx

  p_M_cmpts = &this->_M_cmpts;
  if ( *(_BYTE *)(((unsigned __int64)p_M_cmpts >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_cmpts);
LABEL_9:
    __asan_report_load8(this);
    std::vector<std::filesystem::__cxx11::path>::_M_realloc_insert<std::filesystem::__cxx11::path const&>(
      (std::vector<std::filesystem::__cxx11::path> *const)this,
      (std::vector<std::filesystem::__cxx11::path>::iterator)M_head_impl,
      v4,
      v5);
    return;
  }
  M_head_impl = this->_M_cmpts._M_impl._M_t._M_t._M_head_impl;
  if ( M_head_impl )
    std::filesystem::__cxx11::path::_List::_Impl_deleter::operator()(&this->_M_cmpts);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    goto LABEL_9;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)this->_M_pathname._M_dataplus._M_p != &this->_M_pathname._anon_0 )
    operator delete(this->_M_pathname._M_dataplus._M_p);
};

// Line 376: range 000000000F7776E8-000000000F777701
bool __cdecl std::filesystem::__cxx11::path::empty(const std::filesystem::__cxx11::path *const this)
{
  return std::string::empty(this);
};

// Line 503: range 000000000CE396DB-000000000CE397DA
std::string_view __cdecl std::filesystem::__cxx11::path::_S_convert(
        const std::filesystem::__cxx11::path::value_type *__first,
        const std::filesystem::__cxx11::path::value_type *__last)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::string_view result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = std::filesystem::__cxx11::path::_S_convert;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::string_view::basic_string_view((std::string_view *const)(v2 + 32), __first, __last - __first);
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v2 + 32);
  result = *(std::string_view *)(v2 + 32);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 552: range 000000000F777766-000000000F777783
std::filesystem::__cxx11::path::_Type __cdecl std::filesystem::__cxx11::path::_M_type(
        const std::filesystem::__cxx11::path *const this)
{
  return std::filesystem::__cxx11::path::_List::type(&this->_M_cmpts);
};

// Line 569: range 000000000CE396C0-000000000CE396DA
void __cdecl std::filesystem::__cxx11::path::_List::~_List(std::filesystem::__cxx11::path::_List *const this)
{
  std::unique_ptr<std::filesystem::__cxx11::path::_List::_Impl,std::filesystem::__cxx11::path::_List::_Impl_deleter>::~unique_ptr(&this->_M_impl);
};

// Line 571: range 000000000F777784-000000000F7777A0
std::filesystem::__cxx11::path::_Type __cdecl std::filesystem::__cxx11::path::_List::type(
        const std::filesystem::__cxx11::path::_List *const this)
{
  return (unsigned __int8)std::unique_ptr<std::filesystem::__cxx11::path::_List::_Impl,std::filesystem::__cxx11::path::_List::_Impl_deleter>::get(&this->_M_impl) & 3;
};

// Line 863: range 000000000F7777A2-000000000F777850
void __cdecl std::filesystem::__cxx11::path::iterator::iterator(
        std::filesystem::__cxx11::path::iterator *const this,
        const std::filesystem::__cxx11::path *__path,
        std::filesystem::__cxx11::path::_List::const_iterator __iter)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_path = __path;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_cur >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_cur = __iter;
  if ( *(char *)(((unsigned __int64)&this->_M_at_end >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_at_end);
  this->_M_at_end = 0;
};

// Line 867: range 000000000F777852-000000000F777904
void __cdecl std::filesystem::__cxx11::path::iterator::iterator(
        std::filesystem::__cxx11::path::iterator *const this,
        const std::filesystem::__cxx11::path *__path,
        bool __at_end)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_path = __path;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_cur >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_cur = 0LL;
  if ( *(char *)(((unsigned __int64)&this->_M_at_end >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_at_end);
  this->_M_at_end = __at_end;
};

// Line 1018: range 000000000F7B58EE-000000000F7B591E
std::string *__cdecl std::filesystem::__cxx11::path::string<char,std::char_traits<char>,std::allocator<char>>(
        std::string *retstr,
        const std::filesystem::__cxx11::path *const this,
        const std::allocator<char> *__a)
{
  std::string::basic_string(retstr, this, __a);
  return retstr;
};

// Line 1027: range 000000000F777906-000000000F777A72
std::string *__cdecl std::filesystem::__cxx11::path::string(
        std::string *retstr,
        const std::filesystem::__cxx11::path *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = std::filesystem::__cxx11::path::string;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::filesystem::__cxx11::path::string<char,std::char_traits<char>,std::allocator<char>>(
    retstr,
    this,
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 1134: range 000000000F777A74-000000000F777D29
std::filesystem::__cxx11::path *__cdecl std::filesystem::__cxx11::path::filename(
        std::filesystem::__cxx11::path *retstr,
        const std::filesystem::__cxx11::path *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  _BYTE *v6; // rdx
  std::filesystem::__cxx11::path::iterator *v7; // rax
  unsigned __int64 v8; // rax
  std::filesystem::__cxx11::path::iterator::reference __last; // [rsp+18h] [rbp-88h]
  char v11[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 9 <unknown>";
  *(_QWORD *)(v2 + 16) = std::filesystem::__cxx11::path::filename;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( std::filesystem::__cxx11::path::empty(this) )
    goto LABEL_16;
  if ( std::filesystem::__cxx11::path::_M_type(this) == _Filename )
  {
    std::filesystem::__cxx11::path::path(retstr, this);
    goto LABEL_17;
  }
  if ( std::filesystem::__cxx11::path::_M_type(this) )
    goto LABEL_16;
  v5 = std::string::back(this);
  v6 = (_BYTE *)v5;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v5);
  if ( *v6 == 47 )
    goto LABEL_16;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 55) & 7) >= *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 32, 24LL);
  }
  std::filesystem::__cxx11::path::end((std::filesystem::__cxx11::path::iterator *)(v2 + 32), this);
  v7 = std::filesystem::__cxx11::path::iterator::operator--((std::filesystem::__cxx11::path::iterator *const)(v2 + 32));
  __last = std::filesystem::__cxx11::path::iterator::operator*(v7);
  v8 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v8 = -1800;
  *(_BYTE *)(v8 + 2) = -8;
  if ( std::filesystem::__cxx11::path::_M_type(__last) != _Filename )
LABEL_16:
    std::filesystem::__cxx11::path::path(retstr);
  else
    std::filesystem::__cxx11::path::path(retstr, __last);
LABEL_17:
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 1202: range 000000000F777D2A-000000000F777D94
std::filesystem::__cxx11::path::iterator *__cdecl std::filesystem::__cxx11::path::end(
        std::filesystem::__cxx11::path::iterator *retstr,
        const std::filesystem::__cxx11::path *const this)
{
  const std::filesystem::__cxx11::path::_List::value_type *v2; // rdx

  if ( std::filesystem::__cxx11::path::_M_type(this) )
  {
    std::filesystem::__cxx11::path::iterator::iterator(retstr, this, 1);
  }
  else
  {
    v2 = (const std::filesystem::__cxx11::path::_List::value_type *)std::filesystem::__cxx11::path::_List::end(&this->_M_cmpts);
    std::filesystem::__cxx11::path::iterator::iterator(retstr, this, v2);
  }
  return retstr;
};

// Line 1227: range 000000000F777D96-000000000F777E56
std::filesystem::__cxx11::path::iterator *__cdecl std::filesystem::__cxx11::path::iterator::operator--(
        std::filesystem::__cxx11::path::iterator *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( std::filesystem::__cxx11::path::_M_type(this->_M_path) )
  {
    if ( *(char *)(((unsigned __int64)&this->_M_at_end >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->_M_at_end);
    this->_M_at_end = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_cur >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_cur);
    --this->_M_cur;
  }
  return this;
};

// Line 1244: range 000000000F777E58-000000000F777EF5
std::filesystem::__cxx11::path::iterator::reference __cdecl std::filesystem::__cxx11::path::iterator::operator*(
        const std::filesystem::__cxx11::path::iterator *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( std::filesystem::__cxx11::path::_M_type(this->_M_path) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    return this->_M_path;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_cur >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_cur);
    return this->_M_cur;
  }
};
