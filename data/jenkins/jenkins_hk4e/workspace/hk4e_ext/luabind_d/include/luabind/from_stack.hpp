// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/luabind_d/include/luabind/from_stack.hpp

// Line 32: range 000000000C6142D6-000000000C614354
void __cdecl luabind::from_stack::from_stack(luabind::from_stack *const this, lua_State_0 *interpreter, int index)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->interpreter = interpreter;
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->index);
  }
  this->index = index;
};
