// File: /home/cong.zou/work_repo/ext/luabind_d/src/scope.cpp

// Line 39: range 000000001530E7C0-000000001530E7D6
void __fastcall luabind::detail::registration::registration(luabind::detail::registration *const this)
{
  this->m_next = 0LL;
  this->_vptr_registration = (int (**)(...))(&`vtable for'luabind::detail::registration + 2);
};

// Line 43: range 000000001530E810-000000001530E822
void __fastcall luabind::detail::registration::~registration(luabind::detail::registration *const this)
{
  luabind::detail::registration::~registration(this);
  operator delete(this, 0x10uLL);
};

// Line 43: range 000000001530E7E0-000000001530E800
void __fastcall luabind::detail::registration::~registration(luabind::detail::registration *const this)
{
  luabind::detail::registration *m_next; // rdi

  this->_vptr_registration = (int (**)(...))(&`vtable for'luabind::detail::registration + 2);
  m_next = this->m_next;
  if ( m_next )
    (*((void (__fastcall **)(luabind::detail::registration *))m_next->_vptr_registration + 1))(m_next);
};

// Line 51: range 000000001530E830-000000001530E837
void __fastcall luabind::scope::scope(luabind::scope *const this)
{
  this->m_chain = 0LL;
};

// Line 61: range 000000001530E850-000000001530E85D
void __fastcall luabind::scope::scope(luabind::scope *const this, const luabind::scope *other)
{
  luabind::detail::registration *m_chain; // rax

  m_chain = other->m_chain;
  other->m_chain = 0LL;
  this->m_chain = m_chain;
};

// Line 67: range 000000001530E860-000000001530E893
luabind::scope *__fastcall luabind::scope::operator=(luabind::scope *const this, const luabind::scope *other_)
{
  luabind::detail::registration *m_chain; // rdi
  luabind::scope *result; // rax

  m_chain = this->m_chain;
  if ( m_chain )
    (*((void (__fastcall **)(luabind::detail::registration *))m_chain->_vptr_registration + 1))(m_chain);
  this->m_chain = other_->m_chain;
  result = this;
  other_->m_chain = 0LL;
  return result;
};

// Line 76: range 000000001530E8A0-000000001530E8B0
void __fastcall luabind::scope::~scope(luabind::scope *const this)
{
  luabind::detail::registration *m_chain; // rdi

  m_chain = this->m_chain;
  if ( m_chain )
    (*((void (__fastcall **)(luabind::detail::registration *))m_chain->_vptr_registration + 1))(m_chain);
};

// Line 81: range 000000001530E8C0-000000001530E8FA
luabind::scope *__fastcall luabind::scope::operator,(luabind::scope *const this, luabind::scope s)
{
  luabind::detail::registration *m_chain; // rdx
  luabind::scope *result; // rax
  int (**vptr_registration)(...); // rdi
  luabind::detail::registration *v5; // rcx

  m_chain = this->m_chain;
  result = this;
  vptr_registration = s.m_chain->_vptr_registration;
  if ( m_chain )
  {
    do
    {
      v5 = m_chain;
      m_chain = m_chain->m_next;
    }
    while ( m_chain );
    v5->m_next = (luabind::detail::registration *)vptr_registration;
    s.m_chain->_vptr_registration = 0LL;
  }
  else
  {
    result->m_chain = (luabind::detail::registration *)vptr_registration;
    s.m_chain->_vptr_registration = 0LL;
  }
  return result;
};

// Line 102: range 000000001530E900-000000001530EA8C
void __fastcall luabind::scope::register_(luabind::scope *this, lua_State *a2)
{
  luabind::detail::registration *i; // rbx
  void (__fastcall *v3)(const luabind::namespace_::registration_ *const, lua_State_0 *); // rax
  int v4; // [rsp+8h] [rbp-40h]
  int v5; // [rsp+18h] [rbp-30h]

  for ( i = this->m_chain; i; i = i->m_next )
  {
    v4 = lua_gettop(a2);
    v3 = (void (__fastcall *)(const luabind::namespace_::registration_ *const, lua_State_0 *))*((_QWORD *)i->_vptr_registration
                                                                                              + 2);
    if ( v3 == luabind::namespace_::registration_::register_ )
    {
      v5 = lua_gettop(a2);
      if ( lua_gettop(a2) <= 0 )
        __assert_fail(
          "lua_gettop(L) >= 1",
          "src/scope.cpp",
          0xAEu,
          "virtual void luabind::namespace_::registration_::register_(lua_State*) const");
      lua_pushstring(a2, (const char *)i[1]._vptr_registration);
      lua_gettable(a2, -2);
      if ( lua_type(a2, -1) != 5 )
      {
        lua_settop(a2, -2);
        lua_createtable(a2, 0, 0);
        lua_pushstring(a2, (const char *)i[1]._vptr_registration);
        lua_pushvalue(a2, -2);
        lua_settable(a2, -4);
      }
      luabind::scope::register_((luabind::scope *)&i[1].m_next, a2);
      lua_settop(a2, -2);
      if ( v5 != lua_gettop(a2) )
LABEL_12:
        __assert_fail(
          "m_stack == lua_gettop(m_L)",
          ".//include/luabind/detail/debug.hpp",
          0x2Au,
          "luabind::detail::stack_checker_type::~stack_checker_type()");
    }
    else
    {
      v3((const luabind::namespace_::registration_ *const)i, a2);
    }
    if ( v4 != lua_gettop(a2) )
      goto LABEL_12;
  }
};

// Line 125: range 000000000C73C64C-000000000C73C65C
void __fastcall __noreturn luabind::module_::operator[]()
{
  struct _Unwind_Exception *v0; // rbp
  lua_State_0 *v1; // r12

  lua_settop(v1, -2);
  _Unwind_Resume(v0);
};

// Line 135: range 000000001530EAA0-000000001530EAB1
void __fastcall luabind::module_::module_(luabind::module_ *const this, lua_State_0 *L, const char *name)
{
  *(__m128i *)this = _mm_unpacklo_epi64((__m128i)(unsigned __int64)L, (__m128i)(unsigned __int64)name);
};

// Line 140: range 000000001530EAC0-000000001530EB5C
void __fastcall luabind::module_::operator[](__int64 a1, luabind::scope *a2)
{
  const char *v3; // rsi
  lua_State_0 *v5; // rdi
  lua_State_0 *v6; // r12

  v3 = *(const char **)(a1 + 8);
  v5 = *(lua_State_0 **)a1;
  if ( v3 )
  {
    lua_getglobal(v5, v3);
    if ( lua_type(*(lua_State_0 **)a1, -1) != 5 )
    {
      lua_settop(*(lua_State_0 **)a1, -2);
      lua_createtable(*(lua_State_0 **)a1, 0, 0);
      lua_pushvalue(*(lua_State_0 **)a1, -1);
      lua_setglobal(*(lua_State_0 **)a1, *(const char **)(a1 + 8));
    }
  }
  else
  {
    lua_rawgeti(v5, -1001000, 2LL);
  }
  v6 = *(lua_State_0 **)a1;
  luabind::scope::register_(a2, *(lua_State **)a1);
  lua_settop(v6, -2);
};

// Line 164: range 000000001530EC50-000000001530EC70
void __fastcall luabind::namespace_::registration_::~registration_(luabind::namespace_::registration_ *const this)
{
  luabind::scope *p_m_scope; // rdi

  p_m_scope = &this->m_scope;
  p_m_scope[-3].m_chain = (luabind::detail::registration *)(&`vtable for'luabind::namespace_::registration_ + 2);
  luabind::scope::~scope(p_m_scope);
  luabind::detail::registration::~registration(this);
};

// Line 164: range 000000001530EC80-000000001530ECAD
void __fastcall luabind::namespace_::registration_::~registration_(luabind::namespace_::registration_ *const this)
{
  luabind::scope *p_m_scope; // rdi

  p_m_scope = &this->m_scope;
  p_m_scope[-3].m_chain = (luabind::detail::registration *)(&`vtable for'luabind::namespace_::registration_ + 2);
  luabind::scope::~scope(p_m_scope);
  luabind::detail::registration::~registration(this);
  operator delete(this, 0x20uLL);
};

// Line 167: range 000000000C73C662-000000000C73C67A
void __fastcall __noreturn luabind::namespace_::namespace_()
{
  luabind::detail::registration *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  luabind::detail::registration::~registration(v0);
  operator delete(v0, 0x20uLL);
  _Unwind_Resume(v1);
};

// Line 171: range 000000001530ECC0-000000001530EDE8
void __fastcall luabind::namespace_::registration_::register_(
        const luabind::namespace_::registration_ *const this,
        lua_State_0 *L)
{
  int stack_checker_object_8; // [rsp+8h] [rbp-20h]

  stack_checker_object_8 = lua_gettop(L);
  if ( lua_gettop(L) <= 0 )
    __assert_fail(
      "lua_gettop(L) >= 1",
      "src/scope.cpp",
      0xAEu,
      "virtual void luabind::namespace_::registration_::register_(lua_State*) const");
  lua_pushstring(L, this->m_name);
  lua_gettable(L, -2);
  if ( lua_type(L, -1) != 5 )
  {
    lua_settop(L, -2);
    lua_createtable(L, 0, 0);
    lua_pushstring(L, this->m_name);
    lua_pushvalue(L, -2);
    lua_settable(L, -4);
  }
  luabind::scope::register_(&this->m_scope, L);
  lua_settop(L, -2);
  if ( stack_checker_object_8 != lua_gettop(L) )
    __assert_fail(
      "m_stack == lua_gettop(m_L)",
      ".//include/luabind/detail/debug.hpp",
      0x2Au,
      "luabind::detail::stack_checker_type::~stack_checker_type()");
};

// Line 198: range 000000001530EB70-000000001530EBF2
void __fastcall luabind::namespace_::namespace_(luabind::namespace_ *this, const char *a2)
{
  luabind::namespace_::registration_ *v2; // rbp
  std::auto_ptr<luabind::detail::registration> reg; // [rsp+8h] [rbp-20h] BYREF

  v2 = (luabind::namespace_::registration_ *)operator new(0x20uLL);
  luabind::detail::registration::registration(v2);
  v2->m_name = a2;
  v2->_vptr_registration = (int (**)(...))(&`vtable for'luabind::namespace_::registration_ + 2);
  luabind::scope::scope(&v2->m_scope);
  this->m_registration = v2;
  reg._M_ptr = v2;
  luabind::scope::scope(this, (std::auto_ptr<luabind::detail::registration>)&reg);
  if ( reg._M_ptr )
    (*((void (__fastcall **)(luabind::detail::registration *))reg._M_ptr->_vptr_registration + 1))(reg._M_ptr);
};

// Line 205: range 000000001530EC00-000000001530EC44
__int64 __fastcall luabind::namespace_::operator[](__int64 a1, const luabind::scope *a2)
{
  luabind::scope *v2; // r13
  luabind::scope s; // [rsp+8h] [rbp-20h] BYREF

  v2 = (luabind::scope *)(*(_QWORD *)(a1 + 8) + 24LL);
  luabind::scope::scope(&s, a2);
  luabind::scope::operator,(v2, (luabind::scope)&s);
  luabind::scope::~scope(&s);
  return a1;
};

// Line 206: range 000000000C73C698-000000000C73C6A3
void __fastcall __noreturn luabind::namespace_::operator[]()
{
  luabind::scope *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  luabind::scope::~scope(v0);
  _Unwind_Resume(v1);
};
