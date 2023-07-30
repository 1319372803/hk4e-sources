// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/atomic_base.h

// Line 279: range 000000000C63622C-000000000C63627D
void __cdecl std::__atomic_base<bool>::__atomic_base(
        std::__atomic_base<bool> *const this,
        std::__atomic_base<bool>::__int_type __i)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this);
  }
  this->_M_i = __i;
};

// Line 279: range 000000000C657402-000000000C657453
void __cdecl std::__atomic_base<int>::__atomic_base(
        std::__atomic_base<int> *const this,
        std::__atomic_base<int>::__int_type __i)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->_M_i = __i;
};

// Line 279: range 000000000C657454-000000000C657492
void __cdecl std::__atomic_base<long>::__atomic_base(
        std::__atomic_base<long int> *const this,
        std::__atomic_base<long int>::__int_type __i)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_i = __i;
};

// Line 279: range 000000000C657494-000000000C6574D2
void __cdecl std::__atomic_base<unsigned long>::__atomic_base(
        std::__atomic_base<long unsigned int> *const this,
        std::__atomic_base<long unsigned int>::__int_type __i)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_i = __i;
};

// Line 281: range 000000000C65DC3E-000000000C65DC93
std::__atomic_base<long int>::__int_type __cdecl std::__atomic_base<long>::operator long(
        const std::__atomic_base<long int> *const this)
{
  const std::__atomic_base<long int> *v1; // rax

  std::operator&(memory_order_seq_cst, __memory_order_mask);
  v1 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v1 = (const std::__atomic_base<long int> *)__asan_report_load8(this);
  return v1->_M_i;
};

// Line 318: range 000000000C65C5F8-000000000C65C637
std::__atomic_base<long int>::__int_type __cdecl std::__atomic_base<long>::operator++(
        std::__atomic_base<long int> *const this)
{
  std::__atomic_base<long int> *v1; // rdx

  v1 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  return _InterlockedIncrement64(&v1->_M_i);
};

// Line 326: range 000000000C65C638-000000000C65C67F
std::__atomic_base<long int>::__int_type __cdecl std::__atomic_base<long>::operator--(
        std::__atomic_base<long int> *const this)
{
  std::__atomic_base<long int> *v1; // rdx

  v1 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  return _InterlockedDecrement64(&v1->_M_i);
};

// Line 334: range 000000000C65C232-000000000C65C277
std::__atomic_base<long int>::__int_type __cdecl std::__atomic_base<long>::operator+=(
        std::__atomic_base<long int> *const this,
        std::__atomic_base<long int>::__int_type __i)
{
  unsigned __int64 v2; // rcx
  std::__atomic_base<long int> *v3; // rdx

  v2 = __i;
  v3 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  return v2 + _InterlockedExchangeAdd64(&v3->_M_i, v2);
};

// Line 512: range 000000000C6355E9-000000000C6355FC
std::memory_order_0 __cdecl std::operator&(std::memory_order_0 __m, std::__memory_order_modifier __mod)
{
  return __m & __mod;
};
