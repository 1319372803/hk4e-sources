// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Serialize/TransferFunctions/StreamedBinaryRead.h

// Line 10: range 000000000CD6EDEE-000000000CD6EE18
void __cdecl StreamedBinaryRead<false>::StreamedBinaryRead(StreamedBinaryRead<false> *const this)
{
  TransferBase::TransferBase(this);
  CachedReader::CachedReader(&this->m_Cache);
};

// Line 10: range 000000000CD6EE1A-000000000CD6EE38
void __cdecl StreamedBinaryRead<false>::~StreamedBinaryRead(StreamedBinaryRead<false> *const this)
{
  CachedReader::~CachedReader(&this->m_Cache);
};

// Line 18: range 000000000CDB5E82-000000000CDB5F03
CachedReader *__cdecl StreamedBinaryRead<false>::Init(
        StreamedBinaryRead<false> *const this,
        TransferInstructionFlags flags)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_UserData >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_UserData = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->m_Flags = flags;
  return &this->m_Cache;
};

// Line 20: range 000000000D073A20-000000000D073A2E
bool __cdecl StreamedBinaryRead<false>::IsReading(StreamedBinaryRead<false> *const this)
{
  return 1;
};

// Line 25: range 000000000D073590-000000000D07359E
bool __cdecl StreamedBinaryRead<false>::ConvertEndianess(StreamedBinaryRead<false> *const this)
{
  return 0;
};

// Line 70: range 000000000D0A4F1C-000000000D0A50A6
void __cdecl StreamedBinaryRead<false>::TransferSTLStyleArray<dynamic_array<unsigned char,false,1ul>>(
        StreamedBinaryRead<false> *const this,
        dynamic_array<unsigned char,false,1> *data,
        TransferMetaFlags a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int v7; // r13d
  unsigned __int8 *v8; // rcx
  dynamic_array<unsigned char,false,1>::iterator i; // [rsp+20h] [rbp-70h]
  unsigned __int8 *end; // [rsp+28h] [rbp-68h]
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 size:72";
  *(_QWORD *)(v3 + 16) = StreamedBinaryRead<false>::TransferSTLStyleArray<dynamic_array<unsigned char,false,1ul>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  StreamedBinaryRead<false>::Transfer<int>(this, (int *)(v3 + 32), "size", kNoTransferFlags);
  SerializeTraits<dynamic_array<unsigned char,false,1ul>>::ResizeSTLStyleArray(data, *(_DWORD *)(v3 + 32));
  if ( SerializeTraits<unsigned char>::AllowTransferOptimization()
    && SerializeTraits<dynamic_array<unsigned char,false,1ul>>::IsContinousMemoryArray() )
  {
    if ( *(_DWORD *)(v3 + 32) )
    {
      v7 = *(_DWORD *)(v3 + 32);
      v8 = dynamic_array<unsigned char,false,1ul>::begin(data);
      StreamedBinaryRead<false>::ReadDirect(this, v8, v7);
    }
  }
  else
  {
    end = dynamic_array<unsigned char,false,1ul>::end(data);
    for ( i = dynamic_array<unsigned char,false,1ul>::begin(data); i != end; ++i )
      StreamedBinaryRead<false>::Transfer<unsigned char>(this, i, "data", kNoTransferFlags);
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 70: range 000000000CF466F8-000000000CF46920
void __cdecl StreamedBinaryRead<false>::TransferSTLStyleArray<std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>>(
        StreamedBinaryRead<false> *const this,
        std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> > *data,
        TransferMetaFlags a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v7; // r14d
  __gnu_cxx::__normal_iterator<AutoOffMeshLinkData*,std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> > >::reference v8; // rcx
  AutoOffMeshLinkData *v9; // rsi
  char v10[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 7 size:72 64 8 4 i:85 96 8 6 end:86";
  *(_QWORD *)(v3 + 16) = StreamedBinaryRead<false>::TransferSTLStyleArray<std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  StreamedBinaryRead<false>::Transfer<int>(this, (int *)(v3 + 48), "size", kNoTransferFlags);
  SerializeTraits<std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>>::ResizeSTLStyleArray(
    data,
    *(_DWORD *)(v3 + 48));
  if ( SerializeTraits<AutoOffMeshLinkData>::AllowTransferOptimization()
    && SerializeTraits<std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>>::IsContinousMemoryArray() )
  {
    if ( *(_DWORD *)(v3 + 48) )
    {
      v7 = 32 * *(_DWORD *)(v3 + 48);
      *(std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> >::iterator *)(v3 + 96) = std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::begin(data);
      v8 = __gnu_cxx::__normal_iterator<AutoOffMeshLinkData *,std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>>::operator*((const __gnu_cxx::__normal_iterator<AutoOffMeshLinkData*,std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> > > *const)(v3 + 96));
      StreamedBinaryRead<false>::ReadDirect(this, v8, v7);
    }
  }
  else
  {
    *(_QWORD *)(v3 + 64) = 0LL;
    *(std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> >::iterator *)(v3 + 96) = std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::end(data);
    *(std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> >::iterator *)(v3 + 64) = std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::begin(data);
    while ( __gnu_cxx::operator!=<AutoOffMeshLinkData *,std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>>(
              (const __gnu_cxx::__normal_iterator<AutoOffMeshLinkData*,std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> > > *)(v3 + 64),
              (const __gnu_cxx::__normal_iterator<AutoOffMeshLinkData*,std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> > > *)(v3 + 96)) )
    {
      v9 = __gnu_cxx::__normal_iterator<AutoOffMeshLinkData *,std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>>::operator*((const __gnu_cxx::__normal_iterator<AutoOffMeshLinkData*,std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> > > *const)(v3 + 64));
      StreamedBinaryRead<false>::Transfer<AutoOffMeshLinkData>(this, v9, "data", kNoTransferFlags);
      __gnu_cxx::__normal_iterator<AutoOffMeshLinkData *,std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>>::operator++((__gnu_cxx::__normal_iterator<AutoOffMeshLinkData*,std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> > > *const)(v3 + 64));
    }
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 70: range 000000000CF464C6-000000000CF466F7
void __cdecl StreamedBinaryRead<false>::TransferSTLStyleArray<std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>>(
        StreamedBinaryRead<false> *const this,
        std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *data,
        TransferMetaFlags a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v7; // r14d
  __gnu_cxx::__normal_iterator<NavMeshTileData*,std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > >::reference v8; // rcx
  NavMeshTileData *v9; // rsi
  char v10[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 7 size:72 64 8 4 i:85 96 8 6 end:86";
  *(_QWORD *)(v3 + 16) = StreamedBinaryRead<false>::TransferSTLStyleArray<std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  StreamedBinaryRead<false>::Transfer<int>(this, (int *)(v3 + 48), "size", kNoTransferFlags);
  SerializeTraits<std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>>::ResizeSTLStyleArray(
    data,
    *(_DWORD *)(v3 + 48));
  if ( SerializeTraits<NavMeshTileData>::AllowTransferOptimization()
    && SerializeTraits<std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>>::IsContinousMemoryArray() )
  {
    if ( *(_DWORD *)(v3 + 48) )
    {
      v7 = 40 * *(_DWORD *)(v3 + 48);
      *(std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::iterator *)(v3 + 96) = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::begin(data);
      v8 = __gnu_cxx::__normal_iterator<NavMeshTileData *,std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>>::operator*((const __gnu_cxx::__normal_iterator<NavMeshTileData*,std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > > *const)(v3 + 96));
      StreamedBinaryRead<false>::ReadDirect(this, v8, v7);
    }
  }
  else
  {
    *(_QWORD *)(v3 + 64) = 0LL;
    *(std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::iterator *)(v3 + 96) = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::end(data);
    *(std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::iterator *)(v3 + 64) = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::begin(data);
    while ( __gnu_cxx::operator!=<NavMeshTileData *,std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>>(
              (const __gnu_cxx::__normal_iterator<NavMeshTileData*,std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > > *)(v3 + 64),
              (const __gnu_cxx::__normal_iterator<NavMeshTileData*,std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > > *)(v3 + 96)) )
    {
      v9 = __gnu_cxx::__normal_iterator<NavMeshTileData *,std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>>::operator*((const __gnu_cxx::__normal_iterator<NavMeshTileData*,std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > > *const)(v3 + 64));
      StreamedBinaryRead<false>::Transfer<NavMeshTileData>(this, v9, "data", kNoTransferFlags);
      __gnu_cxx::__normal_iterator<NavMeshTileData *,std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>>::operator++((__gnu_cxx::__normal_iterator<NavMeshTileData*,std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > > *const)(v3 + 64));
    }
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 121: range 000000000CE47BDA-000000000CE47C06
void __cdecl StreamedBinaryRead<false>::Transfer<AABB>(
        StreamedBinaryRead<false> *const this,
        AABB *data,
        const char *a3,
        TransferMetaFlags metaFlag)
{
  SerializeTraits<AABB>::Transfer<StreamedBinaryRead<false>>(data, this);
};

// Line 121: range 000000000CFA300A-000000000CFA3036
void __cdecl StreamedBinaryRead<false>::Transfer<AutoOffMeshLinkData>(
        StreamedBinaryRead<false> *const this,
        AutoOffMeshLinkData *data,
        const char *a3,
        TransferMetaFlags metaFlag)
{
  SerializeTraits<AutoOffMeshLinkData>::Transfer<StreamedBinaryRead<false>>(data, this);
};

// Line 121: range 000000000D073A30-000000000D073A5C
void __cdecl StreamedBinaryRead<false>::Transfer<Hash128>(
        StreamedBinaryRead<false> *const this,
        Hash128 *data,
        const char *a3,
        TransferMetaFlags metaFlag)
{
  SerializeTraits<Hash128>::Transfer<StreamedBinaryRead<false>>(data, this);
};

// Line 121: range 000000000CE47B7E-000000000CE47BAA
void __cdecl StreamedBinaryRead<false>::Transfer<NavMeshBuildSettings>(
        StreamedBinaryRead<false> *const this,
        NavMeshBuildSettings *data,
        const char *a3,
        TransferMetaFlags metaFlag)
{
  SerializeTraits<NavMeshBuildSettings>::Transfer<StreamedBinaryRead<false>>(data, this);
};

// Line 121: range 000000000CE47C64-000000000CE47C90
void __cdecl StreamedBinaryRead<false>::Transfer<NavMeshParams>(
        StreamedBinaryRead<false> *const this,
        NavMeshParams *data,
        const char *a3,
        TransferMetaFlags metaFlag)
{
  SerializeTraits<NavMeshParams>::Transfer<StreamedBinaryRead<false>>(data, this);
};

// Line 121: range 000000000CFA2FA4-000000000CFA2FD0
void __cdecl StreamedBinaryRead<false>::Transfer<NavMeshTileData>(
        StreamedBinaryRead<false> *const this,
        NavMeshTileData *data,
        const char *a3,
        TransferMetaFlags metaFlag)
{
  SerializeTraits<NavMeshTileData>::Transfer<StreamedBinaryRead<false>>(data, this);
};

// Line 121: range 000000000CE47C08-000000000CE47C34
void __cdecl StreamedBinaryRead<false>::Transfer<Quaternionf>(
        StreamedBinaryRead<false> *const this,
        Quaternionf *data,
        const char *a3,
        TransferMetaFlags metaFlag)
{
  SerializeTraits<Quaternionf>::Transfer<StreamedBinaryRead<false>>(data, this);
};

// Line 121: range 000000000CE47C36-000000000CE47C62
void __cdecl StreamedBinaryRead<false>::Transfer<Vector3f>(
        StreamedBinaryRead<false> *const this,
        Vector3f *data,
        const char *a3,
        TransferMetaFlags metaFlag)
{
  SerializeTraits<Vector3f>::Transfer<StreamedBinaryRead<false>>(data, this);
};

// Line 121: range 000000000D0735A0-000000000D0735CC
void __cdecl StreamedBinaryRead<false>::Transfer<dynamic_array<unsigned char,false,1ul>>(
        StreamedBinaryRead<false> *const this,
        dynamic_array<unsigned char,false,1> *data,
        const char *a3,
        TransferMetaFlags metaFlag)
{
  SerializeTraits<dynamic_array<unsigned char,false,1ul>>::Transfer<StreamedBinaryRead<false>>(data, this);
};

// Line 121: range 000000000CE46DC8-000000000CE46DF4
void __cdecl StreamedBinaryRead<false>::Transfer<float>(
        StreamedBinaryRead<false> *const this,
        float *data,
        const char *a3,
        TransferMetaFlags metaFlag)
{
  SerializeTraitsBaseForBasicType<float>::Transfer<StreamedBinaryRead<false>>(data, this);
};

// Line 121: range 000000000CE46D9A-000000000CE46DC6
void __cdecl StreamedBinaryRead<false>::Transfer<int>(
        StreamedBinaryRead<false> *const this,
        int *data,
        const char *a3,
        TransferMetaFlags metaFlag)
{
  SerializeTraitsBaseForBasicType<int>::Transfer<StreamedBinaryRead<false>>(data, this);
};

// Line 121: range 000000000CE47BAC-000000000CE47BD8
void __cdecl StreamedBinaryRead<false>::Transfer<std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>>(
        StreamedBinaryRead<false> *const this,
        std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> > *data,
        const char *a3,
        TransferMetaFlags metaFlag)
{
  SerializeTraits<std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>>::Transfer<StreamedBinaryRead<false>>(
    data,
    this);
};

// Line 121: range 000000000CE47B50-000000000CE47B7C
void __cdecl StreamedBinaryRead<false>::Transfer<std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>>(
        StreamedBinaryRead<false> *const this,
        std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *data,
        const char *a3,
        TransferMetaFlags metaFlag)
{
  SerializeTraits<std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>>::Transfer<StreamedBinaryRead<false>>(
    data,
    this);
};

// Line 121: range 000000000D07473E-000000000D07476A
void __cdecl StreamedBinaryRead<false>::Transfer<unsigned char>(
        StreamedBinaryRead<false> *const this,
        unsigned __int8 *data,
        const char *a3,
        TransferMetaFlags metaFlag)
{
  SerializeTraitsBaseForBasicType<unsigned char>::Transfer<StreamedBinaryRead<false>>(data, this);
};

// Line 121: range 000000000CE46DF6-000000000CE46E22
void __cdecl StreamedBinaryRead<false>::Transfer<unsigned int>(
        StreamedBinaryRead<false> *const this,
        unsigned int *data,
        const char *a3,
        TransferMetaFlags metaFlag)
{
  SerializeTraitsBaseForBasicType<unsigned int>::Transfer<StreamedBinaryRead<false>>(data, this);
};

// Line 121: range 000000000D074710-000000000D07473C
void __cdecl StreamedBinaryRead<false>::Transfer<unsigned short>(
        StreamedBinaryRead<false> *const this,
        unsigned __int16 *data,
        const char *a3,
        TransferMetaFlags metaFlag)
{
  SerializeTraitsBaseForBasicType<unsigned short>::Transfer<StreamedBinaryRead<false>>(data, this);
};

// Line 121: range 000000000CE59328-000000000CE59354
void __cdecl StreamedBinaryRead<true>::Transfer<int>(
        StreamedBinaryRead<true> *const this,
        int *data,
        const char *a3,
        TransferMetaFlags metaFlag)
{
  SerializeTraitsBaseForBasicType<int>::Transfer<StreamedBinaryRead<true>>(data, this);
};

// Line 138: range 000000000CF460E4-000000000CF461A8
void __cdecl StreamedBinaryRead<false>::TransferBasicData<float>(StreamedBinaryRead<false> *const this, float *data)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 5 u:145";
  *(_QWORD *)(v2 + 16) = StreamedBinaryRead<false>::TransferBasicData<float>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  CachedReader::Read<float>(&this->m_Cache, data);
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

// Line 138: range 000000000CF4601E-000000000CF460E2
void __cdecl StreamedBinaryRead<false>::TransferBasicData<int>(StreamedBinaryRead<false> *const this, int *data)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 5 u:145";
  *(_QWORD *)(v2 + 16) = StreamedBinaryRead<false>::TransferBasicData<int>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  CachedReader::Read<int>(&this->m_Cache, data);
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

// Line 138: range 000000000D0A5810-000000000D0A58D4
void __cdecl StreamedBinaryRead<false>::TransferBasicData<unsigned char>(
        StreamedBinaryRead<false> *const this,
        unsigned __int8 *data)
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
  *(_QWORD *)(v2 + 8) = "1 32 1 5 u:145";
  *(_QWORD *)(v2 + 16) = StreamedBinaryRead<false>::TransferBasicData<unsigned char>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  CachedReader::Read<unsigned char>(&this->m_Cache, data);
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

// Line 138: range 000000000CF461AA-000000000CF4626E
void __cdecl StreamedBinaryRead<false>::TransferBasicData<unsigned int>(
        StreamedBinaryRead<false> *const this,
        unsigned int *data)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 5 u:145";
  *(_QWORD *)(v2 + 16) = StreamedBinaryRead<false>::TransferBasicData<unsigned int>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  CachedReader::Read<unsigned int>(&this->m_Cache, data);
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

// Line 138: range 000000000D0A574A-000000000D0A580E
void __cdecl StreamedBinaryRead<false>::TransferBasicData<unsigned short>(
        StreamedBinaryRead<false> *const this,
        unsigned __int16 *data)
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
  *(_QWORD *)(v2 + 8) = "1 32 2 5 u:145";
  *(_QWORD *)(v2 + 16) = StreamedBinaryRead<false>::TransferBasicData<unsigned short>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116350;
  CachedReader::Read<unsigned short>(&this->m_Cache, data);
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

// Line 138: range 000000000CF565FC-000000000CF56719
void __cdecl StreamedBinaryRead<true>::TransferBasicData<int>(StreamedBinaryRead<true> *const this, int *data)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // ecx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 5 u:145";
  *(_QWORD *)(v2 + 16) = StreamedBinaryRead<true>::TransferBasicData<int>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  CachedReader::Read<int>(&this->m_Cache, (int *)(v2 + 32));
  SwapEndianBytes((int32_t *)(v2 + 32));
  v5 = *(_DWORD *)(v2 + 32);
  if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(data);
  }
  *data = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
