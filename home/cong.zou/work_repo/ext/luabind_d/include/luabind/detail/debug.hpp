// File: /home/cong.zou/work_repo/ext/luabind_d/include/luabind/detail/debug.hpp

// Line 40: range 00000000153099B0-00000000153099DC
void __fastcall luabind::detail::stack_checker_type::~stack_checker_type(
        luabind::detail::stack_checker_type *const this)
{
  int m_stack; // ebx

  m_stack = this->m_stack;
  if ( m_stack != lua_gettop(this->m_L) )
    __assert_fail(
      "m_stack == lua_gettop(m_L)",
      ".//include/luabind/detail/debug.hpp",
      0x2Au,
      "luabind::detail::stack_checker_type::~stack_checker_type()");
};
