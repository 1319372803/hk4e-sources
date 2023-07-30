// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/script_utils.h

// Line 46: range 000000000CE3A5D6-000000000CE3A627
void __cdecl ScriptUtil::ScriptUtil(ScriptUtil *const this, bool has_exception)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = (unsigned __int8)this & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(this, v2, v3);
  this->has_exception_ = has_exception;
};
