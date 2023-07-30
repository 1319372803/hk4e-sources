// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/coroutine2/detail/state.hpp

// Line 35: range 000000000BEFBC08-000000000BEFBC19
boost::coroutines2::detail::state_t __cdecl boost::coroutines2::detail::operator&(
        boost::coroutines2::detail::state_t l,
        boost::coroutines2::detail::state_t r)
{
  return r & l;
};

// Line 42: range 000000000BEFBC1A-000000000BEFBC2B
boost::coroutines2::detail::state_t __cdecl boost::coroutines2::detail::operator|(
        boost::coroutines2::detail::state_t l,
        boost::coroutines2::detail::state_t r)
{
  return r | l;
};

// Line 69: range 000000000BEFBC2C-000000000BEFBCC9
boost::coroutines2::detail::state_t *__cdecl boost::coroutines2::detail::operator|=(
        boost::coroutines2::detail::state_t *l,
        boost::coroutines2::detail::state_t r)
{
  boost::coroutines2::detail::state_t v2; // ecx

  if ( *(_BYTE *)(((unsigned __int64)l >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)l & 7) + 3) >= *(_BYTE *)(((unsigned __int64)l >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(l);
  }
  v2 = boost::coroutines2::detail::operator|(*l, r);
  if ( *(_BYTE *)(((unsigned __int64)l >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)l & 7) + 3) >= *(_BYTE *)(((unsigned __int64)l >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(l);
  }
  *l = v2;
  return l;
};
