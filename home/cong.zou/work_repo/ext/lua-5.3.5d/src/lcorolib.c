// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/lcorolib.c

// Line 21: range 0000000015300637-0000000015300669
lua_State_0 *__fastcall getco(lua_State_0 *L)
{
  lua_State_0 *result; // rax

  result = lua_tothread(L, 1);
  if ( !result )
    luaL_argerror(L, 1, "thread expected");
  return result;
};

// Line 28: range 00000000153004CF-00000000153005B5
int __fastcall auxresume(lua_State_0 *L, lua_State_0 *co, int narg)
{
  int v4; // r12d

  if ( lua_checkstack(co, narg) )
  {
    if ( lua_status(co) || lua_gettop(co) )
    {
      lua_xmove(L, co, narg);
      if ( (unsigned int)lua_resume(co, L, narg) > 1 )
      {
        lua_xmove(co, L, 1);
        return -1;
      }
      else
      {
        v4 = lua_gettop(co);
        if ( lua_checkstack(L, v4 + 1) )
        {
          lua_xmove(co, L, v4);
        }
        else
        {
          lua_settop(co, ~v4);
          lua_pushstring(L, "too many results to resume");
          return -1;
        }
      }
    }
    else
    {
      lua_pushstring(L, "cannot resume dead coroutine");
      return -1;
    }
  }
  else
  {
    lua_pushstring(L, "too many arguments to resume");
    return -1;
  }
  return v4;
};

// Line 57: range 0000000015300721-000000001530079A
int __fastcall luaB_coresume(lua_State_0 *L)
{
  lua_State_0 *v1; // rbp
  int v2; // eax
  int v3; // eax
  int v4; // ebp

  v1 = getco(L);
  v2 = lua_gettop(L);
  v3 = auxresume(L, v1, v2 - 1);
  if ( v3 < 0 )
  {
    lua_pushboolean(L, 0);
    lua_rotate(L, -2, 1);
    return 2;
  }
  else
  {
    v4 = v3;
    lua_pushboolean(L, 1);
    lua_rotate(L, ~v4, 1);
    return v4 + 1;
  }
};

// Line 74: range 00000000153005B7-0000000015300635
int __fastcall luaB_auxwrap(lua_State_0 *L)
{
  lua_State_0 *v1; // rbp
  int v2; // eax
  int result; // eax

  v1 = lua_tothread(L, -1001001);
  v2 = lua_gettop(L);
  result = auxresume(L, v1, v2);
  if ( result < 0 )
  {
    if ( lua_type(L, -1) == 4 )
    {
      luaL_where(L, 1);
      lua_rotate(L, -2, 1);
      lua_concat(L, 2);
    }
    lua_error(L);
  }
  return result;
};

// Line 89: range 00000000153007B6-0000000015300801
int __fastcall luaB_cocreate(lua_State_0 *L)
{
  lua_State_0 *v1; // rbp

  luaL_checktype(L, 1, 6);
  v1 = lua_newthread(L);
  lua_pushvalue(L, 1);
  lua_xmove(L, v1, 1);
  return 1;
};

// Line 99: range 0000000015300802-0000000015300823
int __fastcall luaB_cowrap(lua_State_0 *L)
{
  luaB_cocreate(L);
  lua_pushcclosure(L, luaB_auxwrap, 1);
  return 1;
};

// Line 106: range 00000000153004B0-00000000153004CE
int __fastcall luaB_yield(lua_State_0 *L)
{
  int v1; // eax

  v1 = lua_gettop(L);
  return lua_yieldk(L, v1, 0LL, 0LL);
};

// Line 111: range 0000000015300670-000000001530071F
int __fastcall luaB_costatus(lua_State_0 *L)
{
  lua_State_0 *v1; // rax
  lua_State_0 *v2; // rbp
  int v3; // eax
  lua_Debug_0 ar; // [rsp+0h] [rbp-98h] BYREF

  v1 = getco(L);
  if ( L == v1 )
  {
    lua_pushstring(L, "running");
  }
  else
  {
    v2 = v1;
    v3 = lua_status(v1);
    if ( v3 )
    {
      if ( v3 == 1 )
        lua_pushstring(L, "suspended");
      else
        lua_pushstring(L, "dead");
    }
    else if ( lua_getstack(v2, 0, &ar) <= 0 )
    {
      if ( lua_gettop(v2) )
        lua_pushstring(L, "suspended");
      else
        lua_pushstring(L, "dead");
    }
    else
    {
      lua_pushstring(L, "normal");
    }
  }
  return 1;
};

// Line 138: range 0000000015300496-00000000153004AF
int __fastcall luaB_yieldable(lua_State_0 *L)
{
  int v1; // eax

  v1 = lua_isyieldable(L);
  lua_pushboolean(L, v1);
  return 1;
};

// Line 144: range 000000001530079C-00000000153007B5
int __fastcall luaB_corunning(lua_State_0 *L)
{
  int v1; // eax

  v1 = lua_pushthread(L);
  lua_pushboolean(L, v1);
  return 2;
};

// Line 164: range 0000000015300824-0000000015300864
int __fastcall luaopen_coroutine(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8

  luaL_checkversion_(L, 503.0, v1, 0x88uLL);
  lua_createtable(L, 0, 7);
  luaL_setfuncs(L, co_funcs, 0);
  return 1;
};
