// File: /home/cong.zou/work_repo/ext/luabind_d/src/weak_ref.cpp

// Line 44: range 00000000090B3050-00000000090B3105
void __fastcall luabind::get_weak_table(lua_State_0 *L)
{
  lua_pushlightuserdata(L, &luabind::`anonymous namespace'::weak_table_tag);
  lua_rawget(L, -1001000);
  if ( !lua_type(L, -1) )
  {
    lua_settop(L, -2);
    lua_createtable(L, 0, 0);
    lua_createtable(L, 0, 1);
    lua_pushstring(L, "__mode");
    lua_pushstring(L, "v");
    lua_rawset(L, -3);
    lua_setmetatable(L, -2);
    lua_pushlightuserdata(L, &luabind::`anonymous namespace'::weak_table_tag);
    lua_pushvalue(L, -2);
    lua_rawset(L, -1001000);
  }
};

// Line 69: range 00000000090B3110-00000000090B317E
void __fastcall luabind::get_impl_table(lua_State_0 *L)
{
  lua_pushlightuserdata(L, &luabind::`anonymous namespace'::impl_table_tag);
  lua_rawget(L, -1001000);
  if ( !lua_type(L, -1) )
  {
    lua_settop(L, -2);
    lua_createtable(L, 0, 0);
    lua_pushlightuserdata(L, &luabind::`anonymous namespace'::impl_table_tag);
    lua_pushvalue(L, -2);
    lua_rawset(L, -1001000);
  }
};

// Line 125: range 00000000090B3190-00000000090B3197
void __fastcall luabind::weak_ref::weak_ref(luabind::weak_ref *const this)
{
  this->m_impl = 0LL;
};

// Line 129: range 00000000090B31A0-00000000090B3249
void __fastcall luabind::weak_ref::weak_ref(luabind::weak_ref *this, lua_State *a2, lua_State *a3, int a4)
{
  luabind::weak_ref::impl *v6; // rax
  luabind::weak_ref::impl *v7; // rbp

  v6 = (luabind::weak_ref::impl *)operator new(0x18uLL);
  v6->count = 0;
  v7 = v6;
  v6->state = a2;
  v6->ref = 0;
  luabind::get_impl_table(a3);
  lua_pushlightuserdata(a3, v7);
  v7->ref = luaL_ref(a3, -2);
  lua_settop(a3, -2);
  luabind::get_weak_table(a3);
  lua_pushvalue(a3, a4);
  lua_rawseti(a3, -2, v7->ref);
  lua_settop(a3, -2);
  this->m_impl = v7;
  v7->count = 1;
};

// Line 130: range 00000000004272C4-00000000004272D4
void __fastcall __noreturn luabind::weak_ref::weak_ref()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0x18uLL);
  _Unwind_Resume(v1);
};

// Line 136: range 00000000090B3250-00000000090B325E
void __fastcall luabind::weak_ref::weak_ref(luabind::weak_ref *const this, const luabind::weak_ref *other)
{
  luabind::weak_ref::impl *m_impl; // rax

  m_impl = other->m_impl;
  this->m_impl = other->m_impl;
  if ( m_impl )
    ++m_impl->count;
};

// Line 141: range 00000000090B3260-00000000090B32A9
void __fastcall luabind::weak_ref::~weak_ref(luabind::weak_ref *const this)
{
  luabind::weak_ref::impl *m_impl; // rbp

  m_impl = this->m_impl;
  if ( this->m_impl )
  {
    if ( m_impl->count-- == 1 )
    {
      luabind::get_impl_table(m_impl->state);
      luaL_unref(m_impl->state, -1, m_impl->ref);
      lua_settop(m_impl->state, -2);
      operator delete(m_impl, 0x18uLL);
    }
  }
};

// Line 150: range 00000000090B32C0-00000000090B32F8
luabind::weak_ref *__fastcall luabind::weak_ref::operator=(luabind::weak_ref *other, const luabind::weak_ref *a2)
{
  luabind::weak_ref v3; // [rsp+8h] [rbp-20h] BYREF

  luabind::weak_ref::weak_ref(&v3, a2);
  luabind::weak_ref::swap(&v3, other);
  luabind::weak_ref::~weak_ref(&v3);
  return other;
};

// Line 151: range 00000000004272DA-00000000004272E5
void __fastcall __noreturn luabind::weak_ref::operator=()
{
  luabind::weak_ref *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  luabind::weak_ref::~weak_ref(v0);
  _Unwind_Resume(v1);
};

// Line 162: range 00000000090B3300-00000000090B3327
int __fastcall luabind::weak_ref::id(const luabind::weak_ref *const this)
{
  if ( !this->m_impl )
    __assert_fail("m_impl", "src/weak_ref.cpp", 0xA2u, "int luabind::weak_ref::id() const");
  return this->m_impl->ref;
};

// Line 171: range 00000000090B3330-00000000090B33C1
void __fastcall luabind::weak_ref::get(const luabind::weak_ref *const this, lua_State_0 *L)
{
  if ( !this->m_impl )
    __assert_fail("m_impl", "src/weak_ref.cpp", 0xACu, "void luabind::weak_ref::get(lua_State*) const");
  if ( !L )
    __assert_fail("L", "src/weak_ref.cpp", 0xADu, "void luabind::weak_ref::get(lua_State*) const");
  luabind::get_weak_table(L);
  lua_rawgeti(L, -1, this->m_impl->ref);
  lua_rotate(L, -2, -1);
  lua_settop(L, -2);
};

// Line 181: range 00000000090B33D0-00000000090B33F8
lua_State_0 *__fastcall luabind::weak_ref::state(const luabind::weak_ref *const this)
{
  if ( !this->m_impl )
    __assert_fail("m_impl", "src/weak_ref.cpp", 0xB5u, "lua_State* luabind::weak_ref::state() const");
  return this->m_impl->state;
};
