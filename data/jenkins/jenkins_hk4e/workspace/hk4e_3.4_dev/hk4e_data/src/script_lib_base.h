// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/script_lib_base.h

// Line 57: range 000000000D42ED5C-000000000D42ED9D
void __cdecl ScriptLibBase::ScriptLibBase(ScriptLibBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ScriptLibBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ScriptLibBase = v2;
};
