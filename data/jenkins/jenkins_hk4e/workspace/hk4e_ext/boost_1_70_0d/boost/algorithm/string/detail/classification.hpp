// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/algorithm/string/detail/classification.hpp

// Line 80: range 000000000C7D3CFC-000000000C7D3EB6
void __cdecl boost::algorithm::detail::is_any_ofF<char>::is_any_ofF<boost::iterator_range<char const*>>(
        boost::algorithm::detail::is_any_ofF<char> *const this,
        const boost::iterator_range<char const*> *Range)
{
  boost::algorithm::detail::is_any_ofF<char>::set_value_type *v2; // rcx
  const char *v3; // rbx
  const char *v4; // rcx
  boost::algorithm::detail::is_any_ofF<char> *Storage; // [rsp+10h] [rbp-20h]
  boost::iterators::iterator_difference<char const*>::type Size; // [rsp+18h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)&this->m_Size >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Size = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Storage.m_dynSet = 0LL;
  Size = boost::range_distance_adl_barrier::distance<boost::iterator_range<char const*>>(Range);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Size >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Size = Size;
  if ( boost::algorithm::detail::is_any_ofF<char>::use_fixed_storage(this->m_Size) )
  {
    Storage = this;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Size >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_Size);
    v2 = (boost::algorithm::detail::is_any_ofF<char>::set_value_type *)operator new[](this->m_Size);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->m_Storage.m_dynSet = v2;
    Storage = (boost::algorithm::detail::is_any_ofF<char> *)this->m_Storage.m_dynSet;
  }
  v3 = boost::range_adl_barrier::end<boost::iterator_range<char const*>>(Range);
  v4 = boost::range_adl_barrier::begin<boost::iterator_range<char const*>>(Range);
  std::copy<char const*,char *>(v4, v3, (char *)Storage);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Size >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Size);
  std::sort<char *>((char *)Storage, (char *)Storage + this->m_Size);
};

// Line 133: range 000000000C6FEFF8-000000000C6FF0BB
void __cdecl boost::algorithm::detail::is_any_ofF<char>::~is_any_ofF(
        boost::algorithm::detail::is_any_ofF<char> *const this)
{
  char v1; // al

  if ( *(_BYTE *)(((unsigned __int64)&this->m_Size >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Size);
  if ( boost::algorithm::detail::is_any_ofF<char>::use_fixed_storage(this->m_Size) )
    goto LABEL_8;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( this->m_Storage.m_dynSet )
    v1 = 1;
  else
LABEL_8:
    v1 = 0;
  if ( v1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    if ( this->m_Storage.m_dynSet )
      operator delete[](this->m_Storage.m_dynSet);
  }
};

// Line 216: range 000000000CA259C8-000000000CA25B3B
bool __fastcall boost::algorithm::detail::is_any_ofF<char>::operator()<char>(
        const boost::algorithm::detail::is_any_ofF<char> *const this,
        char Ch_0)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const boost::algorithm::detail::is_any_ofF<char> *m_dynSet; // rax
  bool result; // al
  const char *Storage; // [rsp+18h] [rbp-68h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 6 Ch:216";
  *(_QWORD *)(v2 + 16) = boost::algorithm::detail::is_any_ofF<char>::operator()<char>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  *(_BYTE *)(v2 + 32) = Ch_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Size >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Size);
  if ( boost::algorithm::detail::is_any_ofF<char>::use_fixed_storage(this->m_Size) )
  {
    m_dynSet = this;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    m_dynSet = (const boost::algorithm::detail::is_any_ofF<char> *)this->m_Storage.m_dynSet;
  }
  Storage = (const char *)m_dynSet;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Size >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Size);
  result = std::binary_search<char const*,char>(Storage, &Storage[this->m_Size], (const char *)(v2 + 32));
  if ( v8 == (char *)v2 )
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

// Line 227: range 000000000C7D3EB7-000000000C7D3EC8
bool __cdecl boost::algorithm::detail::is_any_ofF<char>::use_fixed_storage(std::size_t size)
{
  return size <= 0x10;
};
