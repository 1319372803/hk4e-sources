// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/misc/cpu_profiling_mgr.h

// Line 45: range 000000000CD586DE-000000000CD58720
CPUProfilingModeType __cdecl CPUProfilingMgr::GetMode(const CPUProfilingMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return this->mode_;
};

// Line 47: range 000000000CD58722-000000000CD58844
// local variable allocation has failed, the output may be wrong!
uint64_t __cdecl CPUProfilingMgr::GetAvgCost(const CPUProfilingMgr *const this, CPUProfilingType type)
{
  CPUProfilingType v2; // ecx
  unsigned __int64 v3; // rax
  char v4; // dl
  int v5; // eax
  uint64_t v6; // rsi
  CPUProfilingType v7; // ecx
  char v8; // dl
  CPUProfilingType typea; // [rsp+4h] [rbp-Ch]

  typea = type;
  v2 = type;
  v3 = (unsigned __int64)&this->count_[type];
  v4 = *(_BYTE *)((v3 >> 3) + 0x7FFF8000);
  LOBYTE(type) = v4 != 0;
  if ( v4 != 0 && (char)((v3 & 7) + 3) >= v4 )
    __asan_report_load4(v3);
  if ( !this->count_[v2] )
    return 0LL;
  v5 = typea;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_[typea] >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(&this->cost_[typea], *(_QWORD *)&type);
  v6 = this->cost_[v5];
  v7 = typea;
  v8 = *(_BYTE *)(((unsigned __int64)&this->count_[typea] >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)(((4 * typea + (_BYTE)this + 4) & 7) + 3) >= v8 )
    __asan_report_load4(&this->count_[typea]);
  return v6 / this->count_[v7];
};

// Line 4224: range 000000000CD58692-000000000CD586DC
void __cdecl CPUProfilingMgr::UpdateMode(CPUProfilingMgr *const this, uint32_t mode)
{
  uint32_t v2; // ecx

  v2 = mode;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->mode_ = v2;
};
