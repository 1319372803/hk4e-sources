// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/luabind_d/include/luabind/detail/stack_utils.hpp

// Line 37: range 000000000C614C9C-000000000C614D1A
void __cdecl luabind::detail::stack_pop::stack_pop(luabind::detail::stack_pop *const this, lua_State_0 *L, int n)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_state = L;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_n >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_n >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_n);
  }
  this->m_n = n;
};

// Line 43: range 000000000C614D1C-000000000C614D9A
void __cdecl luabind::detail::stack_pop::~stack_pop(luabind::detail::stack_pop *const this)
{
  int v1; // edx

  if ( *(_BYTE *)(((unsigned __int64)&this->m_n >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_n >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_n);
  }
  v1 = ~this->m_n;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  lua_settop(this->m_state, v1);
};
