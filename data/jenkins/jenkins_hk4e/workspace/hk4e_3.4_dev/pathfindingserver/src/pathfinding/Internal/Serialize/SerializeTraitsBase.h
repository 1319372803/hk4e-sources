// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Serialize/SerializeTraitsBase.h

// Line 30: range 000000000CEACE68-000000000CEACE8D
void __cdecl SerializeTraitsBaseForBasicType<float>::Transfer<StreamedBinaryRead<false>>(
        SerializeTraitsBaseForBasicType<float>::value_type *data,
        StreamedBinaryRead<false> *transfer)
{
  StreamedBinaryRead<false>::TransferBasicData<float>(transfer, data);
};

// Line 30: range 000000000CEACE42-000000000CEACE67
void __cdecl SerializeTraitsBaseForBasicType<int>::Transfer<StreamedBinaryRead<false>>(
        SerializeTraitsBaseForBasicType<int>::value_type *data,
        StreamedBinaryRead<false> *transfer)
{
  StreamedBinaryRead<false>::TransferBasicData<int>(transfer, data);
};

// Line 30: range 000000000CEBB969-000000000CEBB98E
void __cdecl SerializeTraitsBaseForBasicType<int>::Transfer<StreamedBinaryRead<true>>(
        SerializeTraitsBaseForBasicType<int>::value_type *data,
        StreamedBinaryRead<true> *transfer)
{
  StreamedBinaryRead<true>::TransferBasicData<int>(transfer, data);
};

// Line 30: range 000000000D091242-000000000D091267
void __cdecl SerializeTraitsBaseForBasicType<unsigned char>::Transfer<StreamedBinaryRead<false>>(
        SerializeTraitsBaseForBasicType<unsigned char>::value_type *data,
        StreamedBinaryRead<false> *transfer)
{
  StreamedBinaryRead<false>::TransferBasicData<unsigned char>(transfer, data);
};

// Line 30: range 000000000CEACE8E-000000000CEACEB3
void __cdecl SerializeTraitsBaseForBasicType<unsigned int>::Transfer<StreamedBinaryRead<false>>(
        SerializeTraitsBaseForBasicType<unsigned int>::value_type *data,
        StreamedBinaryRead<false> *transfer)
{
  StreamedBinaryRead<false>::TransferBasicData<unsigned int>(transfer, data);
};

// Line 30: range 000000000D09121C-000000000D091241
void __cdecl SerializeTraitsBaseForBasicType<unsigned short>::Transfer<StreamedBinaryRead<false>>(
        SerializeTraitsBaseForBasicType<short unsigned int>::value_type *data,
        StreamedBinaryRead<false> *transfer)
{
  StreamedBinaryRead<false>::TransferBasicData<unsigned short>(transfer, data);
};

// Line 49: range 000000000CFA2FF3-000000000CFA2FFD
bool __cdecl SerializeTraits<AutoOffMeshLinkData>::AllowTransferOptimization()
{
  return AutoOffMeshLinkData::AllowTransferOptimization();
};

// Line 49: range 000000000CFA2F8D-000000000CFA2F97
bool __cdecl SerializeTraits<NavMeshTileData>::AllowTransferOptimization()
{
  return NavMeshTileData::AllowTransferOptimization();
};

// Line 52: range 000000000CEAD2AC-000000000CEAD2D1
void __cdecl SerializeTraits<AABB>::Transfer<StreamedBinaryRead<false>>(
        SerializeTraits<AABB>::value_type *data,
        StreamedBinaryRead<false> *transfer)
{
  AABB::Transfer<StreamedBinaryRead<false>>(data, transfer);
};

// Line 52: range 000000000D00E212-000000000D00E237
void __cdecl SerializeTraits<AutoOffMeshLinkData>::Transfer<StreamedBinaryRead<false>>(
        SerializeTraits<AutoOffMeshLinkData>::value_type *data,
        StreamedBinaryRead<false> *transfer)
{
  AutoOffMeshLinkData::Transfer<StreamedBinaryRead<false>>(data, transfer);
};

// Line 52: range 000000000D09023D-000000000D090262
void __cdecl SerializeTraits<Hash128>::Transfer<StreamedBinaryRead<false>>(
        SerializeTraits<Hash128>::value_type *data,
        StreamedBinaryRead<false> *transfer)
{
  Hash128::Transfer<StreamedBinaryRead<false>>(data, transfer);
};

// Line 52: range 000000000CEAD24F-000000000CEAD274
void __cdecl SerializeTraits<NavMeshBuildSettings>::Transfer<StreamedBinaryRead<false>>(
        SerializeTraits<NavMeshBuildSettings>::value_type *data,
        StreamedBinaryRead<false> *transfer)
{
  NavMeshBuildSettings::Transfer<StreamedBinaryRead<false>>(data, transfer);
};

// Line 52: range 000000000CEAD31E-000000000CEAD343
void __cdecl SerializeTraits<NavMeshParams>::Transfer<StreamedBinaryRead<false>>(
        SerializeTraits<NavMeshParams>::value_type *data,
        StreamedBinaryRead<false> *transfer)
{
  NavMeshParams::Transfer<StreamedBinaryRead<false>>(data, transfer);
};

// Line 52: range 000000000D00DEC8-000000000D00DEED
void __cdecl SerializeTraits<NavMeshTileData>::Transfer<StreamedBinaryRead<false>>(
        SerializeTraits<NavMeshTileData>::value_type *data,
        StreamedBinaryRead<false> *transfer)
{
  NavMeshTileData::Transfer<StreamedBinaryRead<false>>(data, transfer);
};

// Line 52: range 000000000CEAD2D2-000000000CEAD2F7
void __cdecl SerializeTraits<Quaternionf>::Transfer<StreamedBinaryRead<false>>(
        SerializeTraits<Quaternionf>::value_type *data,
        StreamedBinaryRead<false> *transfer)
{
  Quaternionf::Transfer<StreamedBinaryRead<false>>(data, transfer);
};

// Line 52: range 000000000CEAD2F8-000000000CEAD31D
void __cdecl SerializeTraits<Vector3f>::Transfer<StreamedBinaryRead<false>>(
        SerializeTraits<Vector3f>::value_type *data,
        StreamedBinaryRead<false> *transfer)
{
  Vector3f::Transfer<StreamedBinaryRead<false>>(data, transfer);
};
