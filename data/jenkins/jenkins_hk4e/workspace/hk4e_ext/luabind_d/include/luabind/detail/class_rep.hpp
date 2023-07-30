// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/luabind_d/include/luabind/detail/class_rep.hpp

// Line 141: range 000000000C614594-000000000C6145D3
const luabind::detail::cast_graph *__cdecl luabind::detail::class_rep::casts(
        const luabind::detail::class_rep *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_casts >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->m_casts;
};
