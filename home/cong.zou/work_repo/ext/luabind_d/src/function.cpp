// File: /home/cong.zou/work_repo/ext/luabind_d/src/function.cpp

// Line 15: range 000000001530BA40-000000001530BA62
int __fastcall luabind::detail::`anonymous namespace'::function_destroy(lua_State_0 *L)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)lua_touserdata(L, 1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return 0;
};

// Line 49: range 000000001530BA70-000000001530BABE
bool __fastcall luabind::detail::is_luabind_function(lua_State_0 *L, int index)
{
  bool v2; // r12

  v2 = 0;
  if ( lua_getupvalue(L, index, 2) )
  {
    v2 = &luabind::detail::`anonymous namespace'::function_tag == lua_touserdata(L, -1);
    lua_settop(L, -2);
  }
  return v2;
};

// Line 72: range 000000001530BAC0-000000001530BEE9
void __fastcall luabind::detail::add_overload(
        lua_State_0 **this,
        const luabind::adl::object *a2,
        const char *a3,
        const luabind::adl::object *a4)
{
  lua_State_0 *v6; // rbp
  int v7; // r15d
  __int64 *v8; // r14
  __int64 v9; // r14
  size_t v10; // rax
  lua_State_0 *v11; // rbp
  int v12; // r15d
  lua_State_0 *v13; // rbp
  int v14; // r14d
  int v15; // eax
  int v16; // edx
  lua_State_0 *v17; // rdi
  int ref; // [rsp+0h] [rbp-48h]
  bool is_luabind_function; // [rsp+4h] [rbp-44h]
  bool v20; // [rsp+4h] [rbp-44h]
  int v21; // [rsp+4h] [rbp-44h]
  _QWORD *v22; // [rsp+8h] [rbp-40h]

  v6 = *(lua_State_0 **)a3;
  lua_rawgeti(*(lua_State_0 **)a3, -1001000, *((int *)a3 + 2));
  lua_getupvalue(v6, -1, 1);
  lua_pushvalue(v6, -1);
  v7 = luaL_ref(v6, -1001000);
  lua_settop(v6, -3);
  lua_rawgeti(v6, -1001000, v7);
  v8 = (__int64 *)lua_touserdata(v6, -1);
  lua_settop(v6, -2);
  v9 = *v8;
  if ( v7 != -2 && v6 )
    luaL_unref(v6, -1001000, v7);
  v10 = strlen((const char *)a2);
  std::string::_M_replace(v9 + 16, 0LL, *(_QWORD *)(v9 + 24), (const char *)a2, v10);
  v11 = *this;
  v12 = lua_gettop(*this) + 1;
  lua_pushstring(v11, (const char *)a2);
  lua_rawgeti(v11, -1001000, *((int *)this + 2));
  lua_pushvalue(v11, v12);
  lua_gettable(v11, -2);
  lua_rotate(v11, -2, -1);
  lua_settop(v11, -2);
  lua_pushvalue(v11, -1);
  ref = luaL_ref(v11, -1001000);
  lua_settop(v11, -2);
  if ( v11 )
  {
    lua_settop(v11, -2);
    lua_rawgeti(v11, -1001000, ref);
    if ( lua_toboolean(v11, -1) == 1 )
    {
      lua_settop(v11, -2);
      lua_rawgeti(v11, -1001000, ref);
      is_luabind_function = luabind::detail::is_luabind_function(v11, -1);
      lua_settop(v11, -2);
      if ( is_luabind_function )
      {
        lua_rawgeti(*(lua_State_0 **)a3, -1001000, *((int *)a3 + 2));
        v20 = luabind::detail::is_luabind_function(*(lua_State_0 **)a3, -1);
        lua_settop(*(lua_State_0 **)a3, -2);
        if ( v20 )
        {
          lua_rawgeti(v11, -1001000, ref);
          lua_getupvalue(v11, -1, 1);
          lua_pushvalue(v11, -1);
          v21 = luaL_ref(v11, -1001000);
          lua_settop(v11, -3);
          lua_rawgeti(v11, -1001000, v21);
          v22 = lua_touserdata(v11, -1);
          lua_settop(v11, -2);
          *(_QWORD *)(v9 + 48) = *v22;
          if ( v21 != -2 )
            luaL_unref(v11, -1001000, v21);
          lua_rawgeti(v11, -1001000, ref);
          v15 = luaL_ref(v11, -1001000);
          v16 = *(_DWORD *)(v9 + 64);
          v17 = *(lua_State_0 **)(v9 + 56);
          *(_DWORD *)(v9 + 64) = v15;
          *(_QWORD *)(v9 + 56) = v11;
          if ( v16 != -2 && v17 )
            luaL_unref(v17, -1001000, v16);
        }
      }
    }
    else
    {
      lua_settop(v11, -2);
    }
    if ( ref != -2 )
      luaL_unref(v11, -1001000, ref);
  }
  v13 = *this;
  v14 = lua_gettop(*this) + 1;
  lua_pushstring(v13, (const char *)a2);
  lua_rawgeti(v13, -1001000, *((int *)this + 2));
  lua_pushvalue(v13, v14);
  lua_rawgeti(v13, -1001000, *((int *)a3 + 2));
  lua_settable(v13, -3);
  lua_settop(v13, -2);
  if ( v13 )
    lua_settop(v13, -2);
};

// Line 89: range 000000001530BEF0-000000001530C02B
luabind::detail *__fastcall luabind::detail::make_function_aux(
        luabind::detail *this,
        lua_State *a2,
        luabind::detail::function_object *a3)
{
  _QWORD *v4; // r13

  v4 = lua_newuserdata(a2, 8uLL);
  lua_pushstring(a2, "luabind.function");
  lua_rawget(a2, -1001000);
  if ( lua_type(a2, -1) != 5 )
  {
    lua_settop(a2, -2);
    lua_createtable(a2, 0, 0);
    lua_pushstring(a2, "__gc");
    lua_pushcclosure(a2, luabind::detail::`anonymous namespace'::function_destroy, 0);
    lua_rawset(a2, -3);
    lua_pushstring(a2, "luabind.function");
    lua_pushvalue(a2, -2);
    lua_rawset(a2, -1001000);
  }
  *v4 = a3;
  lua_setmetatable(a2, -2);
  lua_pushlightuserdata(a2, &luabind::detail::`anonymous namespace'::function_tag);
  lua_pushcclosure(a2, a3->entry, 2);
  *(_QWORD *)this = a2;
  *((_DWORD *)this + 2) = -2;
  lua_pushvalue(a2, -1);
  *((_DWORD *)this + 2) = luaL_ref(a2, -1001000);
  lua_settop(a2, -2);
  return this;
};

// Line 104: range 000000001530C030-000000001530C141
void __fastcall luabind::detail::invoke_context::format_error(
        const luabind::detail::invoke_context *const this,
        lua_State_0 *L,
        const luabind::detail::function_object *overloads)
{
  std::string::pointer M_p; // r13
  const luabind::detail::function_object *v4; // rbx
  int v5; // r14d
  int v6; // eax
  __int64 v7; // rbx
  int v8; // r15d

  M_p = "<unknown>";
  v4 = overloads;
  if ( overloads->name._M_string_length )
    M_p = overloads->name._M_dataplus._M_p;
  if ( this->candidate_index )
  {
    v7 = 1LL;
    v8 = lua_gettop(L);
    lua_pushstring(L, "Ambiguous, candidates:\n");
    if ( this->candidate_index > 0 )
    {
      while ( 1 )
      {
        (*(void (__fastcall **)(_QWORD, lua_State_0 *, std::string::pointer))(**((_QWORD **)&this->best_score + v7)
                                                                            + 24LL))(
          *((_QWORD *)&this->best_score + v7),
          L,
          M_p);
        if ( this->candidate_index <= (int)v7 )
          break;
        ++v7;
        lua_pushstring(L, "\n");
      }
    }
    v6 = lua_gettop(L) - v8;
  }
  else
  {
    v5 = lua_gettop(L);
    lua_pushstring(L, "No matching overload found, candidates:\n");
    while ( 1 )
    {
      (*((void (__fastcall **)(const luabind::detail::function_object *, lua_State_0 *, std::string::pointer))v4->_vptr_function_object
       + 3))(
        v4,
        L,
        M_p);
      v4 = v4->next;
      if ( !v4 )
        break;
      lua_pushstring(L, "\n");
    }
    v6 = lua_gettop(L) - v5;
  }
  lua_concat(L, v6);
};
