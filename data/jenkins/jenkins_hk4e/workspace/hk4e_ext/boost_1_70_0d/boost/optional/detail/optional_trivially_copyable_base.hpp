// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/optional/detail/optional_trivially_copyable_base.hpp

// Line 25: range 000000000BF83F90-000000000BF83FD9
void __cdecl boost::optional_detail::tc_optional_base<int>::tc_optional_base(
        boost::optional_detail::tc_optional_base<int> *const this)
{
  __int64 v1; // rsi

  v1 = (unsigned __int8)this & 7;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this, v1);
  }
  this->m_initialized = 0;
};

// Line 25: range 00000000122FFBE4-00000000122FFC2D
void __cdecl boost::optional_detail::tc_optional_base<unsigned int>::tc_optional_base(
        boost::optional_detail::tc_optional_base<unsigned int> *const this)
{
  __int64 v1; // rsi

  v1 = (unsigned __int8)this & 7;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this, v1);
  }
  this->m_initialized = 0;
};

// Line 33: range 00000000122FA0A6-00000000122FA173
// local variable allocation has failed, the output may be wrong!
void __cdecl boost::optional_detail::tc_optional_base<unsigned int>::tc_optional_base(
        boost::optional_detail::tc_optional_base<unsigned int> *const this,
        boost::optional_detail::init_value_tag a2,
        boost::optional_detail::tc_optional_base<unsigned int>::argument_type val)
{
  __int64 v3; // rsi
  unsigned int v4; // ecx
  boost::optional_detail::tc_optional_base<unsigned int>::argument_type vala; // [rsp+0h] [rbp-10h]

  vala = *(boost::optional_detail::tc_optional_base<unsigned int>::argument_type *)&a2;
  v3 = (unsigned __int8)this & 7;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)v3 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this, v3);
  }
  this->m_initialized = 1;
  if ( *(_BYTE *)(((unsigned __int64)vala >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)vala & 7) + 3) >= *(_BYTE *)(((unsigned __int64)vala >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(vala);
  }
  v4 = *vala;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_storage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_storage >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_storage);
  }
  this->m_storage = v4;
};

// Line 143: range 000000000BF9BABC-000000000BF9BB04
bool __cdecl boost::optional_detail::tc_optional_base<int>::is_initialized(
        const boost::optional_detail::tc_optional_base<int> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(this);
  }
  return this->m_initialized;
};

// Line 143: range 00000000122ECB3E-00000000122ECB86
bool __cdecl boost::optional_detail::tc_optional_base<unsigned int>::is_initialized(
        const boost::optional_detail::tc_optional_base<unsigned int> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(this);
  }
  return this->m_initialized;
};

// Line 489: range 000000000BF9BB06-000000000BF9BB17
boost::optional_detail::tc_optional_base<int>::reference_const_type __cdecl boost::optional_detail::tc_optional_base<int>::get_impl(
        const boost::optional_detail::tc_optional_base<int> *const this)
{
  return &this->m_storage;
};

// Line 490: range 00000000122ECB88-00000000122ECB99
boost::optional_detail::tc_optional_base<unsigned int>::reference_type __cdecl boost::optional_detail::tc_optional_base<unsigned int>::get_impl(
        boost::optional_detail::tc_optional_base<unsigned int> *const this)
{
  return &this->m_storage;
};
