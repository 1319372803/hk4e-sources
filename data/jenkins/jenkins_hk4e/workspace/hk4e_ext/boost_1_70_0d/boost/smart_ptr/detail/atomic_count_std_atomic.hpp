// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/smart_ptr/detail/atomic_count_std_atomic.hpp

// Line 29: range 00000000121EB74C-00000000121EB770
void __cdecl boost::detail::atomic_count::atomic_count(boost::detail::atomic_count *const this, __int64 v)
{
  std::atomic<int>::atomic(&this->value_, v);
};

// Line 33: range 00000000121EB772-00000000121EB7E0
__int64 __cdecl boost::detail::atomic_count::operator++(boost::detail::atomic_count *const this)
{
  boost::detail::atomic_count *v1; // rdx

  v1 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  return _InterlockedIncrement(&v1->value_._M_i);
};

// Line 38: range 00000000121EB7E2-00000000121EB852
__int64 __cdecl boost::detail::atomic_count::operator--(boost::detail::atomic_count *const this)
{
  boost::detail::atomic_count *v1; // rdx

  v1 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  return _InterlockedDecrement(&v1->value_._M_i);
};
