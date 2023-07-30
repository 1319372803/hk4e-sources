// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/include/csv_utils.hpp

// Line 36: range 000000000F789732-000000000F789A42
void __cdecl common::tools::csvfile::csvfile(
        common::tools::csvfile *const this,
        const std::string *p_filename,
        const std::string *p_separator)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Ios_Iostate v6; // eax
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 9 <unknown> 64 1 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::csvfile::csvfile;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202116351;
  std::ofstream::basic_ofstream(this);
  if ( *(char *)(((unsigned __int64)&this->is_first_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_first_, p_filename, &this->is_first_);
  this->is_first_ = 1;
  std::string::basic_string(&this->separator_, p_separator);
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->escape_seq_,
    "\"",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->special_chars_,
    "\"",
    (const std::allocator<char> *)(v3 + 64));
  std::allocator<char>::~allocator(v3 + 64);
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  v6 = std::operator|(_S_failbit, _S_badbit);
  std::ios::exceptions(&this->fs_[248], (unsigned int)v6);
  std::ofstream::open(this, p_filename, 16LL);
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

// Line 47: range 000000000F789A44-000000000F789AAC
void __cdecl common::tools::csvfile::~csvfile(common::tools::csvfile *const this)
{
  common::tools::csvfile::flush(this);
  std::ofstream::close(this);
  std::string::~string((void *)&this->special_chars_);
  std::string::~string((void *)&this->escape_seq_);
  std::string::~string((void *)&this->separator_);
  std::ofstream::~ofstream(this);
};

// Line 53: range 000000000F789AAE-000000000F789AC8
void __cdecl common::tools::csvfile::flush(common::tools::csvfile *const this)
{
  std::ostream::flush((std::ostream *)this);
};

// Line 58: range 000000000F789ACA-000000000F789B2E
void __cdecl common::tools::csvfile::endrow(common::tools::csvfile *const this)
{
  std::ostream::operator<<(this, &std::endl<char,std::char_traits<char>>);
  if ( *(char *)(((unsigned __int64)&this->is_first_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_first_, &std::endl<char,std::char_traits<char>>, &this->is_first_);
  this->is_first_ = 1;
};

// Line 64: range 000000000F789B30-000000000F789B4E
common::tools::csvfile *__cdecl common::tools::csvfile::operator<<(
        common::tools::csvfile *const this,
        common::tools::csvfile *(*val)(common::tools::csvfile *))
{
  return val(this);
};

// Line 69: range 000000000F789B50-000000000F789DFF
common::tools::csvfile *__cdecl common::tools::csvfile::operator<<(common::tools::csvfile *const this, const char *val)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::tools::csvfile *v5; // r14
  common::tools::csvfile *result; // rax
  char v7[240]; // [rsp+10h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::csvfile::operator<<;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    val,
    (const std::allocator<char> *)(v2 + 48));
  if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 128, 32LL);
  }
  common::tools::csvfile::escape((std::string *)(v2 + 128), this, (const std::string *)(v2 + 64));
  v5 = common::tools::csvfile::write<std::string>(this, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  result = v5;
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 74: range 000000000F789E00-000000000F789FA3
common::tools::csvfile *__cdecl common::tools::csvfile::operator<<(
        common::tools::csvfile *const this,
        const std::string *val)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::csvfile *v5; // r14
  common::tools::csvfile *result; // rax
  char v7[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::csvfile::operator<<;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 32, 32LL);
  }
  common::tools::csvfile::escape((std::string *)(v2 + 32), this, val);
  v5 = common::tools::csvfile::write<std::string>(this, (const std::string *)(v2 + 32));
  std::string::~string((void *)(v2 + 32));
  result = v5;
  if ( v7 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 87: range 000000000F7DCC5C-000000000F7DCD27
common::tools::csvfile *__cdecl common::tools::csvfile::write<std::string>(
        common::tools::csvfile *const this,
        const std::string *val)
{
  if ( *(char *)(((unsigned __int64)&this->is_first_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_first_, val, &this->is_first_);
  if ( !this->is_first_ )
  {
    std::operator<<<char>(this, &this->separator_);
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_first_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_first_, val, &this->is_first_);
    this->is_first_ = 0;
  }
  std::operator<<<char>(this, val);
  return this;
};

// Line 101: range 000000000F789FA4-000000000F78A572
std::string *__cdecl common::tools::csvfile::escape(
        std::string *retstr,
        common::tools::csvfile *const this,
        const std::string *val)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r14
  std::string::size_type v10; // rsi
  unsigned __int64 v11; // rax
  char *v12; // rdx
  char v13; // cl
  __int64 v14; // rax
  std::string::size_type to; // [rsp+28h] [rbp-2A8h]
  std::string::size_type from; // [rsp+30h] [rbp-2A0h]
  std::string::size_type len; // [rsp+38h] [rbp-298h]
  char v22[656]; // [rsp+40h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 32 9 <unknown> 96 32 9 <unknown> 160 376 10 result:103";
  *(_QWORD *)(v3 + 16) = common::tools::csvfile::escape;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -218959118;
  v5[536862736] = -218103808;
  v5[536862737] = -202116109;
  v5[536862738] = -202116109;
  std::ostringstream::basic_ostringstream(v3 + 160);
  std::operator<<<std::char_traits<char>>(v3 + 160, 34LL);
  from = 0LL;
  len = std::string::length(val);
  while ( from < len )
  {
    to = std::string::find_first_of(val, &this->special_chars_, from);
    if ( to == -1LL )
      break;
    *(_DWORD *)(((v3 + 32) >> 3) + 0x7FFF8000) = 0;
    v7 = (char *)(to - from);
    if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) )
    {
      v7 = (char *)(v3 + 32);
      __asan_report_store_n(v3 + 32, 32LL);
    }
    std::string::substr(v3 + 32, val, from, v7);
    v8 = std::operator<<<char>(v3 + 160, v3 + 32);
    v9 = std::operator<<<char>(v8, &this->escape_seq_);
    v10 = to;
    v11 = std::string::operator[](val, to);
    v12 = (char *)v11;
    v13 = *(_BYTE *)((v11 >> 3) + 0x7FFF8000);
    if ( v13 != 0 && (char)(v11 & 7) >= v13 )
    {
      LOBYTE(v10) = v13 != 0;
      __asan_report_load1(v11, v10, v11);
    }
    std::operator<<<std::char_traits<char>>(v9, (unsigned int)*v12);
    std::string::~string((void *)(v3 + 32));
    *(_DWORD *)(((v3 + 32) >> 3) + 0x7FFF8000) = -117901064;
    from = to + 1;
  }
  *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 96, 32LL);
  }
  std::string::substr(v3 + 96, val, from, -1LL);
  v14 = std::operator<<<char>(v3 + 160, v3 + 96);
  std::operator<<<std::char_traits<char>>(v14, 34LL);
  std::string::~string((void *)(v3 + 96));
  *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::ostringstream::str(retstr, v3 + 160);
  std::ostringstream::~ostringstream(v3 + 160);
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = -168430091;
  }
  return retstr;
};

// Line 119: range 000000000F2CAD1B-000000000F2CAD38
common::tools::csvfile *__cdecl common::tools::endrow(common::tools::csvfile *file)
{
  common::tools::csvfile::endrow(file);
  return file;
};
