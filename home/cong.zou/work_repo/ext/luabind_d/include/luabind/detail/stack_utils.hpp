// File: /home/cong.zou/work_repo/ext/luabind_d/include/luabind/detail/stack_utils.hpp

// Line 45: range 000000000C73C4C2-000000000C73C4D2
void __fastcall __noreturn luabind::detail::make_function_aux()
{
  lua_State_0 *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  lua_settop(v0, -2);
  _Unwind_Resume(v1);
};

// Line 45: range 000000000C73C622-000000000C73C647
void __fastcall __noreturn luabind::scope::register_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        luabind::detail::stack_checker_type a8)
{
  struct _Unwind_Exception *v8; // rbx
  lua_State_0 *v9; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  lua_settop(v9, -2);
  luabind::detail::stack_checker_type::~stack_checker_type(&a8);
  luabind::detail::stack_checker_type::~stack_checker_type((luabind::detail::stack_checker_type *const)&retaddr);
  _Unwind_Resume(v8);
};
