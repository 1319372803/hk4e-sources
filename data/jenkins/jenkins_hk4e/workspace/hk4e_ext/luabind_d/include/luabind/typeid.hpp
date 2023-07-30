// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/luabind_d/include/luabind/typeid.hpp

// Line 30: range 000000000C614356-000000000C614394
void __cdecl luabind::type_id::type_id(luabind::type_id *const this, const std::type_info *id)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->id = id;
};

// Line 49: range 000000000C614396-000000000C6143D3
const char *__cdecl luabind::type_id::name(const luabind::type_id *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return std::type_info::name(this->id);
};
