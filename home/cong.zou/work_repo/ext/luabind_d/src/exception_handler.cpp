// File: /home/cong.zou/work_repo/ext/luabind_d/src/exception_handler.cpp

// Line 25: range 000000000C73C292-000000000C73C2D6
void __fastcall luabind::detail::`anonymous namespace'::push_exception_string(
        lua_State_0 *L,
        const char *exception,
        const char *what)
{
  lua_pushstring(L, exception);
  lua_pushstring(L, ": '");
  lua_pushstring(L, what);
  lua_pushstring(L, "'");
  lua_concat(L, 4);
};

// Line 35: range 000000001530B9B0-000000001530B9CC
__int64 __fastcall luabind::detail::exception_handler_base::try_next(
        luabind::detail::exception_handler_base *this,
        lua_State *a2)
{
  luabind::detail::exception_handler_base *next; // rdi

  next = this->next;
  if ( !next )
    luabind::detail::exception_handler_base::try_next();
  return (*((__int64 (__fastcall **)(luabind::detail::exception_handler_base *, lua_State *))next->_vptr_exception_handler_base
          + 2))(
           next,
           a2);
};

// Line 39: range 000000000C73C2DC-000000000C73C423
// attributes: thunk
void __noreturn luabind::detail::exception_handler_base::try_next(void)
{
  __cxa_rethrow();
};

// Line 43: range 000000001530B9D0-000000001530B9EF
__int64 __fastcall luabind::detail::handle_exception_aux(luabind::detail *this, lua_State *a2)
{
  if ( !luabind::detail::`anonymous namespace'::handler_chain )
    luabind::detail::handle_exception_aux();
  return (*((__int64 (__fastcall **)(luabind::detail::exception_handler_base *, luabind::detail *))luabind::detail::`anonymous namespace'::handler_chain->_vptr_exception_handler_base
          + 2))(
           luabind::detail::`anonymous namespace'::handler_chain,
           this);
};

// Line 77: range 000000001530BA00-000000001530BA37
void __fastcall luabind::detail::register_exception_handler(luabind::detail::exception_handler_base *handler)
{
  luabind::detail::exception_handler_base *v1; // rax
  luabind::detail::exception_handler_base *v2; // rdx

  v1 = luabind::detail::`anonymous namespace'::handler_chain;
  if ( luabind::detail::`anonymous namespace'::handler_chain )
  {
    do
    {
      v2 = v1;
      v1 = v1->next;
    }
    while ( v1 );
    handler->next = 0LL;
    v2->next = handler;
  }
  else
  {
    luabind::detail::`anonymous namespace'::handler_chain = handler;
  }
};
