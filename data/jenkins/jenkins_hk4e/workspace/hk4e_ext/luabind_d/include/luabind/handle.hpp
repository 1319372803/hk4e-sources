// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/luabind_d/include/luabind/handle.hpp

// Line 57: range 000000000C613CF2-000000000C613D6A
void __cdecl luabind::handle::handle(luabind::handle *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_interpreter = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_index);
  }
  this->m_index = -2;
};

// Line 62: range 000000000C613D6C-000000000C613F02
void __cdecl luabind::handle::handle(luabind::handle *const this, const luabind::handle *other)
{
  lua_State_0 *m_interpreter; // rdx
  lua_Integer m_index; // rdx
  int v4; // edx

  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m_interpreter = other->m_interpreter;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_interpreter = m_interpreter;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_index);
  }
  this->m_index = -2;
  if ( this->m_interpreter )
  {
    if ( *(_BYTE *)(((unsigned __int64)&other->m_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&other->m_index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&other->m_index);
    }
    m_index = other->m_index;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    lua_rawgeti(this->m_interpreter, -1001000, m_index);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v4 = luaL_ref(this->m_interpreter, -1001000);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->m_index);
    }
    this->m_index = v4;
  }
};

// Line 71: range 000000000C613F04-000000000C613FE2
void __cdecl luabind::handle::handle(luabind::handle *const this, lua_State_0 *interpreter, int stack_index)
{
  int v3; // edx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_interpreter = interpreter;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_index);
  }
  this->m_index = -2;
  lua_pushvalue(interpreter, stack_index);
  v3 = luaL_ref(interpreter, -1001000);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_index);
  }
  this->m_index = v3;
};

// Line 87: range 000000000C613FE4-000000000C614079
void __cdecl luabind::handle::~handle(luabind::handle *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->m_interpreter )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_index);
    }
    if ( this->m_index != -2 )
      luaL_unref(this->m_interpreter, -1001000, this->m_index);
  }
};

// Line 94: range 000000000C61407A-000000000C614185
luabind::handle *__cdecl luabind::handle::operator=(luabind::handle *const this, const luabind::handle *other)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  luabind::handle *result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = luabind::handle::operator=;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  luabind::handle::handle((luabind::handle *const)(v2 + 32), other);
  luabind::handle::swap((luabind::handle *const)(v2 + 32), this);
  luabind::handle::~handle((luabind::handle *const)(v2 + 32));
  result = this;
  if ( v6 == (char *)v2 )
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

// Line 100: range 000000000C614186-000000000C6141C6
void __cdecl luabind::handle::swap(luabind::handle *const this, luabind::handle *other)
{
  std::swap<lua_State *>(&this->m_interpreter, &other->m_interpreter);
  std::swap<int>(&this->m_index, &other->m_index);
};

// Line 106: range 000000000C6141C8-000000000C614228
void __cdecl luabind::handle::push(const luabind::handle *const this, lua_State_0 *interpreter)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_index);
  }
  lua_rawgeti(interpreter, -1001000, this->m_index);
};

// Line 111: range 000000000C61422A-000000000C61425F
lua_State_0 *__cdecl luabind::handle::interpreter(const luabind::handle *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->m_interpreter;
};

// Line 116: range 000000000C614260-000000000C6142D4
void __cdecl luabind::handle::replace(luabind::handle *const this, lua_State_0 *interpreter, int stack_index)
{
  lua_pushvalue(interpreter, stack_index);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_index);
  }
  lua_rawseti(interpreter, -1001000, this->m_index);
};
