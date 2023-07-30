// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/luabind_d/include/luabind/error.hpp

// Line 49: range 000000000C6C64A6-000000000C6C64F3
void __cdecl luabind::error::~error(luabind::error *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'luabind::error + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  std::exception::~exception((std::exception *)this);
};

// Line 49: range 000000000C6C64F4-000000000C6C651E
void __cdecl luabind::error::~error(luabind::error *const this)
{
  luabind::error::~error(this);
  operator delete(this, 0x10uLL);
};

// Line 52: range 000000000C6143D4-000000000C614456
void __cdecl luabind::error::error(luabind::error *const this, lua_State_0 *L)
{
  __int64 *v2; // rdx

  std::exception::exception((std::exception *const)this);
  v2 = &`vtable for'luabind::error + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_L >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_L = L;
};

// Line 54: range 000000000C614458-000000000C614468
const char *__cdecl luabind::error::what(const luabind::error *const this)
{
  return "lua runtime error";
};

// Line 65: range 000000000C6C682A-000000000C6C6877
void __cdecl luabind::cast_failed::~cast_failed(luabind::cast_failed *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'luabind::cast_failed + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  std::exception::~exception((std::exception *)this);
};

// Line 65: range 000000000C6C6878-000000000C6C68A2
void __cdecl luabind::cast_failed::~cast_failed(luabind::cast_failed *const this)
{
  luabind::cast_failed::~cast_failed(this);
  operator delete(this, 0x18uLL);
};

// Line 68: range 000000000C61446A-000000000C614545
void __cdecl luabind::cast_failed::cast_failed(
        luabind::cast_failed *const this,
        lua_State_0 *L,
        const luabind::type_id *i)
{
  __int64 *v3; // rdx

  std::exception::exception((std::exception *const)this);
  v3 = &`vtable for'luabind::cast_failed + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_L >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_L = L;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_info >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this->m_info = (luabind::type_id)i->id;
};

// Line 70: range 000000000C614546-000000000C614580
luabind::type_id __cdecl luabind::cast_failed::info(const luabind::cast_failed *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (luabind::type_id)this->m_info.id;
};

// Line 71: range 000000000C614582-000000000C614592
const char *__cdecl luabind::cast_failed::what(const luabind::cast_failed *const this)
{
  return "unable to make cast";
};
