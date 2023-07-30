// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Serialize/SerializeTraits.h

// Line 134: range 000000000CD6E207-000000000CD6E211
bool __cdecl SerializeTraits<unsigned char>::AllowTransferOptimization()
{
  return 1;
};

// Line 269: range 000000000CEAD275-000000000CEAD2AB
void __cdecl SerializeTraits<std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>>::Transfer<StreamedBinaryRead<false>>(
        SerializeTraits<std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> > >::value_type *data,
        StreamedBinaryRead<false> *transfer)
{
  StreamedBinaryRead<false>::TransferSTLStyleArray<std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>>(
    transfer,
    data,
    kNoTransferFlags);
  StreamedBinaryRead<false>::Align(transfer);
};

// Line 269: range 000000000CEAD218-000000000CEAD24E
void __cdecl SerializeTraits<std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>>::Transfer<StreamedBinaryRead<false>>(
        SerializeTraits<std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > >::value_type *data,
        StreamedBinaryRead<false> *transfer)
{
  StreamedBinaryRead<false>::TransferSTLStyleArray<std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>>(
    transfer,
    data,
    kNoTransferFlags);
  StreamedBinaryRead<false>::Align(transfer);
};

// Line 275: range 000000000CFA2FFE-000000000CFA3008
bool __cdecl SerializeTraits<std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>>::IsContinousMemoryArray()
{
  return 1;
};

// Line 275: range 000000000CFA2F98-000000000CFA2FA2
bool __cdecl SerializeTraits<std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>>::IsContinousMemoryArray()
{
  return 1;
};

// Line 276: range 000000000CFA2FD1-000000000CFA2FF2
void __cdecl SerializeTraits<std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>>::ResizeSTLStyleArray(
        SerializeTraits<std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> > >::value_type *data,
        int rs)
{
  resize_trimmed<std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>>(data, rs);
};

// Line 276: range 000000000CFA2F6B-000000000CFA2F8C
void __cdecl SerializeTraits<std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>>::ResizeSTLStyleArray(
        SerializeTraits<std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > >::value_type *data,
        int rs)
{
  resize_trimmed<std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>>(data, rs);
};

// Line 475: range 000000000D090206-000000000D09023C
void __cdecl SerializeTraits<dynamic_array<unsigned char,false,1ul>>::Transfer<StreamedBinaryRead<false>>(
        SerializeTraits<dynamic_array<unsigned char,false,1> >::value_type *data,
        StreamedBinaryRead<false> *transfer)
{
  StreamedBinaryRead<false>::TransferSTLStyleArray<dynamic_array<unsigned char,false,1ul>>(
    transfer,
    data,
    kNoTransferFlags);
  StreamedBinaryRead<false>::Align(transfer);
};

// Line 481: range 000000000D0B1AA4-000000000D0B1AAE
bool __cdecl SerializeTraits<dynamic_array<unsigned char,false,1ul>>::IsContinousMemoryArray()
{
  return 1;
};

// Line 482: range 000000000D0B1A73-000000000D0B1AA3
void __cdecl SerializeTraits<dynamic_array<unsigned char,false,1ul>>::ResizeSTLStyleArray(
        SerializeTraits<dynamic_array<unsigned char,false,1> >::value_type *data,
        int rs)
{
  unsigned __int8 t; // [rsp+1Fh] [rbp-1h] BYREF

  t = 0;
  dynamic_array<unsigned char,false,1ul>::resize_initialized(data, rs, &t, kIncreaseToExactSize);
};
