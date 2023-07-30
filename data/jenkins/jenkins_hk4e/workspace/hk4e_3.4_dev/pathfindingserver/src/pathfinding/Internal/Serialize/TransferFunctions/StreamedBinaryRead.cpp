// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Serialize/TransferFunctions/StreamedBinaryRead.cpp

// Line 5: range 000000000CD75CF4-000000000CD75D12
void __cdecl StreamedBinaryRead<false>::Align(StreamedBinaryRead<false> *const this)
{
  CachedReader::Align4Read(&this->m_Cache);
};

// Line 5: range 000000000CD75CD4-000000000CD75CF2
void __cdecl StreamedBinaryRead<true>::Align(StreamedBinaryRead<true> *const this)
{
  CachedReader::Align4Read(&this->m_Cache);
};

// Line 11: range 000000000CD75F00-000000000CD7601E
void __cdecl StreamedBinaryRead<false>::TransferTypeless(
        StreamedBinaryRead<false> *const this,
        unsigned int *byteSize,
        const char *a3,
        TransferMetaFlags a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  unsigned int v7; // edi
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 7 size:13";
  *(_QWORD *)(v4 + 16) = StreamedBinaryRead<false>::TransferTypeless;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  StreamedBinaryRead<false>::Transfer<int>(this, (int *)(v4 + 32), "size", kNoTransferFlags);
  v7 = *(_DWORD *)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)byteSize >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)byteSize & 7) + 3) >= *(_BYTE *)(((unsigned __int64)byteSize >> 3) + 0x7FFF8000) )
  {
    v7 = (unsigned int)byteSize;
    __asan_report_store4(byteSize);
  }
  *byteSize = v7;
  if ( v8 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 11: range 000000000CD75DE0-000000000CD75EFE
void __cdecl StreamedBinaryRead<true>::TransferTypeless(
        StreamedBinaryRead<true> *const this,
        unsigned int *byteSize,
        const char *a3,
        TransferMetaFlags a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  unsigned int v7; // edi
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 7 size:13";
  *(_QWORD *)(v4 + 16) = StreamedBinaryRead<true>::TransferTypeless;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  StreamedBinaryRead<true>::Transfer<int>(this, (int *)(v4 + 32), "size", kNoTransferFlags);
  v7 = *(_DWORD *)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)byteSize >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)byteSize & 7) + 3) >= *(_BYTE *)(((unsigned __int64)byteSize >> 3) + 0x7FFF8000) )
  {
    v7 = (unsigned int)byteSize;
    __asan_report_store4(byteSize);
  }
  *byteSize = v7;
  if ( v8 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 21: range 000000000CD75D7A-000000000CD75DDF
void __cdecl StreamedBinaryRead<false>::TransferTypelessData(
        StreamedBinaryRead<false> *const this,
        unsigned int byteSize,
        void *copyData,
        int metaData)
{
  if ( byteSize )
  {
    if ( copyData )
      CachedReader::Read(&this->m_Cache, copyData, byteSize);
    else
      CachedReader::Skip(&this->m_Cache, byteSize);
    StreamedBinaryRead<false>::Align(this);
  }
};

// Line 21: range 000000000CD75D14-000000000CD75D79
void __cdecl StreamedBinaryRead<true>::TransferTypelessData(
        StreamedBinaryRead<true> *const this,
        unsigned int byteSize,
        void *copyData,
        int metaData)
{
  if ( byteSize )
  {
    if ( copyData )
      CachedReader::Read(&this->m_Cache, copyData, byteSize);
    else
      CachedReader::Skip(&this->m_Cache, byteSize);
    StreamedBinaryRead<true>::Align(this);
  }
};

// Line 37: range 000000000CD75CA0-000000000CD75CD2
void __cdecl StreamedBinaryRead<false>::ReadDirect(StreamedBinaryRead<false> *const this, void *data, int byteSize)
{
  CachedReader::Read(&this->m_Cache, data, byteSize);
};

// Line 37: range 000000000CD75C68-000000000CD75C9A
void __cdecl __noreturn StreamedBinaryRead<true>::ReadDirect(
        StreamedBinaryRead<true> *const this,
        void *data,
        int byteSize)
{
  __asan_handle_no_return(this);
  __assert_fail(
    "!kSwapEndianess",
    "./src/pathfinding/Internal/Serialize/TransferFunctions/StreamedBinaryRead.cpp",
    0x27u,
    "void StreamedBinaryRead<kSwapEndianess>::ReadDirect(void*, int) [with bool kSwapEndianess = true]");
};
