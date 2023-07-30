// File: /home/cong.zou/work_repo/ext/luabind_d/src/error.cpp

// Line 67: range 000000001530B990-000000001530B997
void __fastcall luabind::set_pcall_callback(luabind::pcall_callback_fun e)
{
  luabind::`anonymous namespace'::pcall_callback = e;
};

// Line 73: range 000000001530B9A0-000000001530B9A7
luabind::pcall_callback_fun __cdecl luabind::get_pcall_callback()
{
  return luabind::`anonymous namespace'::pcall_callback;
};
