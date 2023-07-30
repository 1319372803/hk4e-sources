// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/NavMeshBuildSettings.cpp

// Line 16: range 000000000CB74192-000000000CB745BA
void __cdecl NavMeshBuildSettings::NavMeshBuildSettings(NavMeshBuildSettings *const this)
{
  float v1; // xmm0_4

  memset(this, 0, sizeof(NavMeshBuildSettings));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->agentTypeID = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->agentRadius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->agentRadius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->agentRadius);
  }
  this->agentRadius = 0.5;
  if ( *(_BYTE *)(((unsigned __int64)&this->agentHeight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->agentHeight >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->agentHeight);
  }
  this->agentHeight = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->agentSlope >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->agentSlope >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->agentSlope);
  }
  this->agentSlope = 45.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->agentClimb >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->agentClimb >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->agentClimb);
  }
  this->agentClimb = 0.40000001;
  if ( *(_BYTE *)(((unsigned __int64)&this->ledgeDropHeight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ledgeDropHeight >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ledgeDropHeight);
  }
  this->ledgeDropHeight = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->maxJumpAcrossDistance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->maxJumpAcrossDistance >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->maxJumpAcrossDistance);
  }
  this->maxJumpAcrossDistance = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->minRegionArea >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->minRegionArea >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->minRegionArea);
  }
  this->minRegionArea = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->manualCellSize >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->manualCellSize >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->manualCellSize);
  }
  this->manualCellSize = 0;
  v1 = this->agentRadius / 3.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cellSize >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cellSize >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cellSize);
  }
  this->cellSize = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->manualTileSize >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->manualTileSize >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->manualTileSize);
  }
  this->manualTileSize = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->tileSize >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tileSize >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->tileSize);
  }
  this->tileSize = 256;
  if ( *(_BYTE *)(((unsigned __int64)&this->accuratePlacement >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->accuratePlacement >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->accuratePlacement);
  }
  this->accuratePlacement = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->generateDetailMap >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->generateDetailMap >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->generateDetailMap);
  }
  this->generateDetailMap = 0;
};

// Line 44: range 000000000CD6E434-000000000CD6E6D5
void __cdecl NavMeshBuildSettings::Transfer<StreamedBinaryRead<false>>(
        NavMeshBuildSettings *const this,
        StreamedBinaryRead<false> *transfer)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 debug:69";
  *(_QWORD *)(v2 + 16) = NavMeshBuildSettings::Transfer<StreamedBinaryRead<false>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  TransferBase::SetVersion(transfer, 2);
  StreamedBinaryRead<false>::Transfer<int>(transfer, &this->agentTypeID, "agentTypeID", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<float>(transfer, &this->agentRadius, "agentRadius", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<float>(transfer, &this->agentHeight, "agentHeight", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<float>(transfer, &this->agentSlope, "agentSlope", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<float>(transfer, &this->agentClimb, "agentClimb", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<float>(transfer, &this->ledgeDropHeight, "ledgeDropHeight", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<float>(
    transfer,
    &this->maxJumpAcrossDistance,
    "maxJumpAcrossDistance",
    kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<float>(transfer, &this->minRegionArea, "minRegionArea", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<int>(transfer, &this->manualCellSize, "manualCellSize", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<float>(transfer, &this->cellSize, "cellSize", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<int>(transfer, &this->manualTileSize, "manualTileSize", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<int>(transfer, &this->tileSize, "tileSize", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<int>(transfer, &this->accuratePlacement, "accuratePlacement", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<int>(transfer, &this->generateDetailMap, "generateDetailMap", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<unsigned int>(transfer, (unsigned int *)(v2 + 32), "debug", kNoTransferFlags);
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
