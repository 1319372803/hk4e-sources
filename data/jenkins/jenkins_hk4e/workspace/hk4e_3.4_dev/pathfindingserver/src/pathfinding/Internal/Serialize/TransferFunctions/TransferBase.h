// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Serialize/TransferFunctions/TransferBase.h

// Line 29: range 000000000CD6E38A-000000000CD6E402
void __cdecl TransferBase::TransferBase(TransferBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->m_Flags = kNoTransferInstructionFlags;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_UserData >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_UserData = 0LL;
};

// Line 76: range 000000000CD6E404-000000000CD6E412
bool __cdecl TransferBase::IsWriting(TransferBase *const this)
{
  return 0;
};

// Line 171: range 000000000CD6E414-000000000CD6E421
void __cdecl TransferBase::SetVersion(TransferBase *const this, int a2)
{
  ;
};

// Line 177: range 000000000CD6E422-000000000CD6E433
bool __cdecl TransferBase::IsOldVersion(TransferBase *const this, int a2)
{
  return 0;
};
