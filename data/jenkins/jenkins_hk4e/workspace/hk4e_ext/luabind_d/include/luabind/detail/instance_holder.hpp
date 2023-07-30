// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/luabind_d/include/luabind/detail/instance_holder.hpp

// Line 31: range 000000000C6145D4-000000000C61461C
bool __cdecl luabind::detail::instance_holder::pointee_const(const luabind::detail::instance_holder *const this)
{
  if ( *(char *)(((unsigned __int64)&this->m_pointee_const >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->m_pointee_const);
  return this->m_pointee_const;
};
