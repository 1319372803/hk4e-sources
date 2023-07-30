// File: /home/cong.zou/work_repo/ext/luabind_d/src/open.cpp

// Line 39: range 000000001530E270-000000001530E2D4
int __fastcall luabind::`anonymous namespace'::make_property(lua_State_0 *L)
{
  int v1; // eax

  v1 = lua_gettop(L);
  if ( !v1 || v1 > 2 )
  {
    lua_pushstring(L, "make_property() called with wrong number of arguments.");
    lua_error(L);
  }
  if ( v1 == 1 )
    lua_pushnil(L);
  lua_pushcclosure(L, luabind::detail::property_tag, 2);
  return 1;
};

// Line 58: range 000000001530E250-000000001530E263
int __fastcall __noreturn luabind::`anonymous namespace'::deprecated_super(lua_State_0 *L)
{
  lua_pushstring(
    L,
    "DEPRECATION: 'super' has been deprecated in favor of directly calling the base class __init() function. This error c"
    "an be disabled by calling 'luabind::disable_super_deprecation()'.");
  lua_error(L);
};

// Line 72: range 000000001530E2E0-000000001530E333
void *__fastcall luabind::get_main_thread(lua_State_0 *L, lua_State *a2)
{
  void *v2; // r12

  lua_pushlightuserdata(L, &luabind::`anonymous namespace'::main_thread_tag);
  lua_rawget(L, -1001000);
  v2 = lua_touserdata(L, -1);
  lua_settop(L, -2);
  if ( !v2 )
    luabind::get_main_thread();
  return v2;
};

// Line 79: range 000000000C73C598-000000000C73C5D8
void __noreturn luabind::get_main_thread()
{
  std::runtime_error *exception; // rbp

  exception = (std::runtime_error *)__cxa_allocate_exception(0x10uLL);
  std::runtime_error::runtime_error(exception, "Unable to get main thread, luabind::open() not called?");
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::runtime_error,
    (void (__fastcall *)(void *))&std::runtime_error::~runtime_error);
};

// Line 116: range 000000001530E340-000000001530E5E5
void __fastcall luabind::open(lua_State *this, lua_State *a2)
{
  int v2; // ebx
  luabind::detail::class_registry *v3; // r12
  _DWORD *v4; // rbx
  luabind::detail::cast_graph *v5; // r12
  _QWORD *v6; // rbx

  v2 = lua_pushthread(this);
  lua_settop(this, -2);
  if ( v2 != 1 )
    luabind::open();
  lua_pushstring(this, "__luabind_classes");
  v3 = (luabind::detail::class_registry *)lua_newuserdata(this, 0x40uLL);
  lua_createtable(this, 0, 0);
  lua_pushcclosure(this, luabind::detail::garbage_collector<luabind::detail::class_registry>, 0);
  lua_setfield(this, -2, "__gc");
  lua_setmetatable(this, -2);
  lua_settable(this, -1001000);
  luabind::detail::class_registry::class_registry(v3, this);
  lua_pushstring(this, "__luabind_class_id_map");
  v4 = lua_newuserdata(this, 0x38uLL);
  lua_createtable(this, 0, 0);
  lua_pushcclosure(this, luabind::detail::garbage_collector<luabind::detail::class_id_map>, 0);
  lua_setfield(this, -2, "__gc");
  lua_setmetatable(this, -2);
  lua_settable(this, -1001000);
  v4[2] = 0;
  *((_QWORD *)v4 + 3) = v4 + 2;
  *((_QWORD *)v4 + 4) = v4 + 2;
  *((_QWORD *)v4 + 2) = 0LL;
  *((_QWORD *)v4 + 5) = 0LL;
  *((_QWORD *)v4 + 6) = luabind::detail::class_id_map::local_id_base;
  lua_pushstring(this, "__luabind_cast_graph");
  v5 = (luabind::detail::cast_graph *)lua_newuserdata(this, 8uLL);
  lua_createtable(this, 0, 0);
  lua_pushcclosure(this, luabind::detail::garbage_collector<luabind::detail::cast_graph>, 0);
  lua_setfield(this, -2, "__gc");
  lua_setmetatable(this, -2);
  lua_settable(this, -1001000);
  luabind::detail::cast_graph::cast_graph(v5);
  lua_pushstring(this, "__luabind_class_map");
  v6 = lua_newuserdata(this, 0x18uLL);
  lua_createtable(this, 0, 0);
  lua_pushcclosure(this, luabind::detail::garbage_collector<luabind::detail::class_map>, 0);
  lua_setfield(this, -2, "__gc");
  lua_setmetatable(this, -2);
  lua_settable(this, -1001000);
  v6[2] = 0LL;
  *(_OWORD *)v6 = 0LL;
  lua_pushcclosure(this, luabind::detail::create_class::stage1, 0);
  lua_setglobal(this, "class");
  lua_pushcclosure(this, luabind::`anonymous namespace'::make_property, 0);
  lua_setglobal(this, "property");
  lua_pushlightuserdata(this, &luabind::`anonymous namespace'::main_thread_tag);
  lua_pushlightuserdata(this, this);
  lua_rawset(this, -1001000);
  lua_pushcclosure(this, luabind::`anonymous namespace'::deprecated_super, 0);
  lua_setglobal(this, "super");
};

// Line 125: range 000000000C73C5DD-000000000C73C61D
void __noreturn luabind::open()
{
  std::runtime_error *exception; // rbp

  exception = (std::runtime_error *)__cxa_allocate_exception(0x10uLL);
  std::runtime_error::runtime_error(exception, "luabind::open() must be called with the main thread lua_State*");
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::runtime_error,
    (void (__fastcall *)(void *))&std::runtime_error::~runtime_error);
};
