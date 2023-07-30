// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/envcheck/CEncryptorManager.cpp

// Line 10023: range 000000000CF5FF34-000000000CF5FF40
CEncryptorManager *__cdecl CEncryptorManager::Instance()
{
  return &CEncryptorManager::s_inst;
};

// Line 10028: range 000000000CF5FF42-000000000CF6028C
void __cdecl CEncryptorManager::CEncryptorManager(CEncryptorManager *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rax
  _DWORD *v4; // rdx
  char v5; // si
  char v6; // cl
  char v7; // si
  char v8; // cl
  char v9; // si
  int *v10; // rdi
  char v11; // si
  int i; // [rsp+1Ch] [rbp-74h]
  char v14[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  v3 = v1 + 96;
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 20 16 uCmdLength:10031";
  *(_QWORD *)(v1 + 16) = CEncryptorManager::CEncryptorManager;
  v4 = (_DWORD *)(v1 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -217841664;
  v4[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v3 = __asan_report_store8();
  this->m_pKeyTable = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dwKeyTableLen >> 3) + 0x7FFF8000) )
    v3 = __asan_report_store8();
  this->m_dwKeyTableLen = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)(v3 - 64) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(v3 - 64) >> 3) + 0x7FFF8000) <= 3 )
  {
    v3 = __asan_report_store4(v3 - 64);
  }
  *(_DWORD *)(v3 - 64) = 4;
  v5 = *(_BYTE *)(((unsigned __int64)(v3 - 64 + 4) >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)(((v3 - 64 + 4) & 7) + 3) >= v5 )
    v3 = __asan_report_store4(v3 - 64 + 4);
  *(_DWORD *)(v3 - 60) = 4;
  v6 = *(_BYTE *)(((unsigned __int64)(v3 - 64 + 8) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
    v3 = __asan_report_store4(v3 - 64 + 8);
  *(_DWORD *)(v3 - 56) = 4;
  v7 = *(_BYTE *)(((unsigned __int64)(v3 - 64 + 12) >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)(((v3 - 64 + 12) & 7) + 3) >= v7 )
    v3 = __asan_report_store4(v3 - 64 + 12);
  *(_DWORD *)(v3 - 52) = 16;
  v8 = *(_BYTE *)(((unsigned __int64)(v3 - 64 + 16) >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
    v3 = __asan_report_store4(v3 - 64 + 16);
  *(_DWORD *)(v3 - 48) = 128;
  for ( i = 0; i <= 4; ++i )
  {
    v9 = *(_BYTE *)(((unsigned __int64)(4LL * i + v3 - 64) >> 3) + 0x7FFF8000);
    if ( v9 != 0 && (char)(((4 * i + v3 - 64) & 7) + 3) >= v9 )
      __asan_report_load4(4LL * i + v3 - 64);
    LODWORD(v10) = *(_DWORD *)(v3 + 4LL * i - 64);
    v11 = *(_BYTE *)(((unsigned __int64)&this->m_uCmdLength[i] >> 3) + 0x7FFF8000);
    if ( v11 != 0 && (char)(((4 * (i + 4) + (_BYTE)this) & 7) + 3) >= v11 )
    {
      v10 = &this->m_uCmdLength[i];
      v3 = __asan_report_store4(v10);
    }
    this->m_uCmdLength[i] = (int)v10;
  }
  if ( v14 == (char *)v1 )
  {
    *((_QWORD *)v4 + 268431360) = 0LL;
    v4[536862722] = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *((_QWORD *)v4 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    v4[536862722] = -168430091;
  }
};

// Line 10041: range 000000000CF6028E-000000000CF60788
__int64 __fastcall CEncryptorManager::UpdateCmdLength(CEncryptorManager *const this, stCBCmdLengthInfo lengthInfo)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 n; // rax
  _DWORD *v5; // rdx
  int v6; // ecx
  int v7; // edi
  char v8; // si
  bool v9; // r9
  char v10; // si
  int v11; // ecx
  int v12; // edi
  char v13; // si
  bool v14; // r9
  char v15; // si
  int v16; // ecx
  int v17; // edi
  char v18; // si
  bool v19; // r9
  char v20; // si
  int v21; // ecx
  int v22; // edi
  char v23; // si
  bool v24; // r9
  char v25; // si
  int v26; // kr00_4
  __int64 result; // rax
  char v29[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  n = v2 + 96;
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 20 16 lengthInfo:10040";
  *(_QWORD *)(v2 + 16) = CEncryptorManager::UpdateCmdLength;
  v5 = (_DWORD *)(v2 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -217841664;
  v5[536862722] = -202116109;
  *(stCBCmdLengthInfo *)(v2 + 32) = lengthInfo;
  if ( (char)((v2 + 32) & 7) >= *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((v2 + 35) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 35) & 7) >= *(_BYTE *)(((v2 + 35) >> 3) + 0x7FFF8000) )
  {
    n = __asan_report_load_n(v2 + 32, 4LL);
  }
  v6 = *(_DWORD *)(n - 64) + 3;
  if ( v6 < 0 )
    v6 = *(_DWORD *)(n - 64) + 6;
  v7 = 4 * (v6 >> 2);
  if ( *(_BYTE *)(((unsigned __int64)this->m_uCmdLength >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this->m_uCmdLength >> 3) + 0x7FFF8000) <= 3 )
  {
    v7 = (_DWORD)this + 16;
    n = __asan_report_store4(this->m_uCmdLength);
  }
  this->m_uCmdLength[0] = v7;
  v8 = *(_BYTE *)(((unsigned __int64)(n - 64 + 4) >> 3) + 0x7FFF8000);
  v9 = ((n - 64 + 4) & 7) >= v8 && v8 != 0;
  v10 = *(_BYTE *)(((unsigned __int64)(n - 64 + 7) >> 3) + 0x7FFF8000);
  if ( v9 || v10 != 0 && ((n - 64 + 7) & 7) >= v10 )
    n = __asan_report_load_n(n - 64 + 4, 4LL);
  v11 = *(_DWORD *)(n - 60) + 3;
  if ( v11 < 0 )
    v11 = *(_DWORD *)(n - 60) + 6;
  v12 = 4 * (v11 >> 2);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_uCmdLength[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_uCmdLength[1] >> 3) + 0x7FFF8000) )
  {
    v12 = (_DWORD)this + 20;
    n = __asan_report_store4(&this->m_uCmdLength[1]);
  }
  this->m_uCmdLength[1] = v12;
  v13 = *(_BYTE *)(((unsigned __int64)(n - 64 + 12) >> 3) + 0x7FFF8000);
  v14 = ((n - 64 + 12) & 7) >= v13 && v13 != 0;
  v15 = *(_BYTE *)(((unsigned __int64)(n - 64 + 15) >> 3) + 0x7FFF8000);
  if ( v14 || v15 != 0 && ((n - 64 + 15) & 7) >= v15 )
    n = __asan_report_load_n(n - 64 + 12, 4LL);
  v16 = *(_DWORD *)(n - 52) + 3;
  if ( v16 < 0 )
    v16 = *(_DWORD *)(n - 52) + 6;
  v17 = 4 * (v16 >> 2);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_uCmdLength[3] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_uCmdLength[3] >> 3) + 0x7FFF8000) )
  {
    v17 = (_DWORD)this + 28;
    n = __asan_report_store4(&this->m_uCmdLength[3]);
  }
  this->m_uCmdLength[3] = v17;
  v18 = *(_BYTE *)(((unsigned __int64)(n - 64 + 8) >> 3) + 0x7FFF8000);
  v19 = ((n - 64 + 8) & 7) >= v18 && v18 != 0;
  v20 = *(_BYTE *)(((unsigned __int64)(n - 64 + 11) >> 3) + 0x7FFF8000);
  if ( v19 || v20 != 0 && ((n - 64 + 11) & 7) >= v20 )
    n = __asan_report_load_n(n - 64 + 8, 4LL);
  v21 = *(_DWORD *)(n - 56) + 3;
  if ( v21 < 0 )
    v21 = *(_DWORD *)(n - 56) + 6;
  v22 = 4 * (v21 >> 2);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_uCmdLength[2] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_uCmdLength[2] >> 3) + 0x7FFF8000) <= 3 )
  {
    v22 = (_DWORD)this + 24;
    n = __asan_report_store4(&this->m_uCmdLength[2]);
  }
  this->m_uCmdLength[2] = v22;
  v23 = *(_BYTE *)(((unsigned __int64)(n - 64 + 16) >> 3) + 0x7FFF8000);
  v24 = ((n - 64 + 16) & 7) >= v23 && v23 != 0;
  v25 = *(_BYTE *)(((unsigned __int64)(n - 64 + 19) >> 3) + 0x7FFF8000);
  if ( v24 || v25 != 0 && ((n - 64 + 19) & 7) >= v25 )
    n = __asan_report_load_n(n - 64 + 16, 4LL);
  v26 = *(_DWORD *)(n - 48) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_uCmdLength[4] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_uCmdLength[4] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_uCmdLength[4]);
  }
  this->m_uCmdLength[4] = 4 * (v26 / 4);
  result = 0LL;
  if ( v29 == (char *)v2 )
  {
    *((_QWORD *)v5 + 268431360) = 0LL;
    v5[536862722] = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *((_QWORD *)v5 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    v5[536862722] = -168430091;
  }
  return result;
};

// Line 10050: range 000000000CF6078A-000000000CF60794
void __cdecl CEncryptorManager::~CEncryptorManager(CEncryptorManager *const this)
{
  ;
};

// Line 10061: range 000000000CF60796-000000000CF609DE
int __cdecl CEncryptorManager::GetEncryptKeyFromIndex(
        CEncryptorManager *const this,
        const char *pTablePath,
        int nIndex,
        std::string *strKey)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  int result; // eax
  char v10[160]; // [rsp+20h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = CEncryptorManager::GetEncryptKeyFromIndex;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( !this->m_pKeyTable )
    this->m_pKeyTable = sKeyTable;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( this->m_pKeyTable )
  {
    std::allocator<char>::allocator(v4 + 48);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    std::string::basic_string(v4 + 64, &this->m_pKeyTable[16 * nIndex], 16LL, v4 + 48);
    std::string::operator=(strKey, v4 + 64);
    std::string::~string((void *)(v4 + 64));
    *(_DWORD *)(((v4 + 64) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v4 + 48);
    result = 0;
  }
  else
  {
    result = -1;
  }
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 10079: range 000000000CF609E0-000000000CF60A2B
int __cdecl CEncryptorManager::GenCryptAlgorithmType(CEncryptorManager *const this)
{
  std::random_device::result_type nType; // [rsp+1Ch] [rbp-4h]

  nType = std::random_device::operator()(&gRdGen) % 5;
  if ( nType == 3 )
    return 0;
  return nType;
};

// Line 10090: range 000000000CF60A2C-000000000CF60E13
int __cdecl CEncryptorManager::GenRandomSessinKey(CEncryptorManager *const this, std::string *strKey, int nUsrLevel)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  char v6; // dl
  std::random_device::result_type v7; // ecx
  char v8; // dl
  int result; // eax
  int nLength; // [rsp+28h] [rbp-2E8h]
  int i; // [rsp+2Ch] [rbp-2E4h]
  char v13[736]; // [rsp+30h] [rbp-2E0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(704LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 512 10 uTmp:10091";
  *(_QWORD *)(v3 + 16) = CEncryptorManager::GenRandomSessinKey;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862740] = -202116109;
  v5[536862741] = -202116109;
  if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 128, 512LL);
  }
  memset((void *)(v3 + 128), 0, 0x200uLL);
  if ( nUsrLevel < 0 )
    nUsrLevel = 0;
  if ( nUsrLevel > 4 )
    nUsrLevel = 4;
  v6 = *(_BYTE *)(((unsigned __int64)&this->m_uCmdLength[nUsrLevel] >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)(((4 * (nUsrLevel + 4) + (_BYTE)this) & 7) + 3) >= v6 )
    __asan_report_load4(&this->m_uCmdLength[nUsrLevel]);
  nLength = this->m_uCmdLength[nUsrLevel];
  if ( nLength <= 3 )
    nLength = 4;
  if ( nLength > 128 )
    nLength = 128;
  for ( i = 0; i < nLength; ++i )
  {
    v7 = std::random_device::operator()(&gRdGen);
    v8 = *(_BYTE *)(((4LL * i + v3 + 128) >> 3) + 0x7FFF8000);
    if ( v8 != 0 && (char)(((4 * i + v3 + 0x80) & 7) + 3) >= v8 )
      __asan_report_store4(4LL * i + v3 + 128);
    *(_DWORD *)(v3 + 704 + 4LL * i - 576) = v7;
  }
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string(v3 + 64, v3 + 128, 4LL * nLength, v3 + 48);
  std::string::operator=(strKey, v3 + 64);
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  result = 0;
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 10151: range 000000000CF60E14-000000000CF619FD
int __cdecl CEncryptorManager::EncryptWithAlgorithmType(
        CEncryptorManager *const this,
        uint32_t uType,
        BYTE *pBuffer,
        uint32_t uBufferLen,
        BYTE *pKey,
        uint32_t uKenLen,
        BYTE **pEncryptBuffer,
        uint32_t *uEncryptBufferLen)
{
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  _DWORD *v10; // r12
  __int64 v11; // rsi
  uint32_t v12; // eax
  BYTE *v13; // rcx
  uint32_t v14; // eax
  BYTE *v15; // rcx
  uint32_t v16; // eax
  BYTE *v17; // rcx
  uint32_t v18; // eax
  BYTE *v19; // rcx
  __int64 v20; // rsi
  unsigned __int8 *v21; // rdi
  uint32_t v22; // eax
  BYTE *v23; // rcx
  int v24; // eax
  int v25; // ebx
  uint32_t i; // [rsp+38h] [rbp-558h]
  uint32_t i_0; // [rsp+3Ch] [rbp-554h]
  uint32_t i_1; // [rsp+40h] [rbp-550h]
  uint32_t i_2; // [rsp+44h] [rbp-54Ch]
  uint32_t i_3; // [rsp+48h] [rbp-548h]
  int nrounds_0; // [rsp+54h] [rbp-53Ch]
  int nrounds; // [rsp+5Ch] [rbp-534h]
  unsigned __int8 *p_2; // [rsp+70h] [rbp-520h]
  unsigned __int8 *c_2; // [rsp+78h] [rbp-518h]
  char v41[1248]; // [rsp+B0h] [rbp-4E0h] BYREF

  v8 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_5(1216LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "8 32 16 9 key:10165 64 16 9 key:10184 96 16 9 key:10202 128 16 9 key:10219 160 16 9 key:10236 19"
                        "2 208 8 rk:10201 464 272 8 rk:10182 800 352 8 rk:10164";
  *(_QWORD *)(v8 + 16) = CEncryptorManager::EncryptWithAlgorithmType;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -219021312;
  v10[536862722] = -219021312;
  v10[536862723] = -219021312;
  v10[536862724] = -219021312;
  v10[536862725] = -219021312;
  v10[536862732] = -219021312;
  v10[536862733] = -218959118;
  v10[536862734] = 62194;
  v10[536862743] = -218959118;
  v10[536862744] = -218959118;
  v10[536862756] = -202116109;
  v10[536862757] = -202116109;
  if ( uType > 4 )
  {
    v24 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)pEncryptBuffer >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *pEncryptBuffer = 0LL;
    v11 = ((unsigned __int8)uEncryptBufferLen & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)uEncryptBufferLen >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uEncryptBufferLen & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uEncryptBufferLen >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(uEncryptBufferLen);
    }
    *uEncryptBufferLen = 0;
    switch ( uType )
    {
      case 0u:
        if ( *(_WORD *)(((v8 + 32) >> 3) + 0x7FFF8000) )
          __asan_report_store16(v8 + 32, v11);
        *(_QWORD *)(v8 + 32) = 0LL;
        *(_QWORD *)(v8 + 40) = 0LL;
        v12 = 16;
        if ( uKenLen <= 0x10 )
          v12 = uKenLen;
        memcpy((void *)(v8 + 32), pKey, v12);
        nrounds = rijndaelSetupEncrypt((u32 *)(v8 + 800), (const u8 *)(v8 + 32), 128);
        v13 = (BYTE *)operator new[](uBufferLen);
        if ( *(_BYTE *)(((unsigned __int64)pEncryptBuffer >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *pEncryptBuffer = v13;
        if ( *(_BYTE *)(((unsigned __int64)uEncryptBufferLen >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uEncryptBufferLen & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uEncryptBufferLen >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_store4(uEncryptBufferLen);
        }
        *uEncryptBufferLen = uBufferLen;
        for ( i = 0; i < uBufferLen >> 4; ++i )
        {
          if ( *(_BYTE *)(((unsigned __int64)pEncryptBuffer >> 3) + 0x7FFF8000) )
            __asan_report_load8(pEncryptBuffer);
          rijndaelEncrypt((const u32 *)(v8 + 800), nrounds, &pBuffer[16 * i], &(*pEncryptBuffer)[16 * i]);
        }
        break;
      case 1u:
        if ( *(_WORD *)(((v8 + 64) >> 3) + 0x7FFF8000) )
          __asan_report_store16(v8 + 64, v11);
        *(_QWORD *)(v8 + 64) = 0LL;
        *(_QWORD *)(v8 + 72) = 0LL;
        v14 = 16;
        if ( uKenLen <= 0x10 )
          v14 = uKenLen;
        memcpy((void *)(v8 + 64), pKey, v14);
        nrounds_0 = EncKeySetup((const Byte *)(v8 + 64), (Byte *)(v8 + 464), 128);
        v15 = (BYTE *)operator new[](uBufferLen);
        if ( *(_BYTE *)(((unsigned __int64)pEncryptBuffer >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *pEncryptBuffer = v15;
        if ( *(_BYTE *)(((unsigned __int64)uEncryptBufferLen >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uEncryptBufferLen & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uEncryptBufferLen >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_store4(uEncryptBufferLen);
        }
        *uEncryptBufferLen = uBufferLen;
        for ( i_0 = 0; i_0 < uBufferLen >> 4; ++i_0 )
        {
          if ( *(_BYTE *)(((unsigned __int64)pEncryptBuffer >> 3) + 0x7FFF8000) )
            __asan_report_load8(pEncryptBuffer);
          Crypt(&pBuffer[16 * i_0], nrounds_0, (const Byte *)(v8 + 464), &(*pEncryptBuffer)[16 * i_0]);
        }
        break;
      case 2u:
        if ( *(_WORD *)(((v8 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16(v8 + 96, v11);
        *(_QWORD *)(v8 + 96) = 0LL;
        *(_QWORD *)(v8 + 104) = 0LL;
        v16 = 16;
        if ( uKenLen <= 0x10 )
          v16 = uKenLen;
        memcpy((void *)(v8 + 96), pKey, v16);
        Camellia_Ekeygen(128, (const Byte *)(v8 + 96), (Byte *)(v8 + 192));
        v17 = (BYTE *)operator new[](uBufferLen);
        if ( *(_BYTE *)(((unsigned __int64)pEncryptBuffer >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *pEncryptBuffer = v17;
        if ( *(_BYTE *)(((unsigned __int64)uEncryptBufferLen >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uEncryptBufferLen & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uEncryptBufferLen >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_store4(uEncryptBufferLen);
        }
        *uEncryptBufferLen = uBufferLen;
        for ( i_1 = 0; i_1 < uBufferLen >> 4; ++i_1 )
        {
          if ( *(_BYTE *)(((unsigned __int64)pEncryptBuffer >> 3) + 0x7FFF8000) )
            __asan_report_load8(pEncryptBuffer);
          Camellia_Encrypt(128, &pBuffer[16 * i_1], (const Byte *)(v8 + 192), &(*pEncryptBuffer)[16 * i_1]);
        }
        break;
      case 3u:
        if ( *(_WORD *)(((v8 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store16(v8 + 128, v11);
        *(_QWORD *)(v8 + 128) = 0LL;
        *(_QWORD *)(v8 + 136) = 0LL;
        v18 = 16;
        if ( uKenLen <= 0x10 )
          v18 = uKenLen;
        memcpy((void *)(v8 + 128), pKey, v18);
        v19 = (BYTE *)operator new[](uBufferLen);
        if ( *(_BYTE *)(((unsigned __int64)pEncryptBuffer >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *pEncryptBuffer = v19;
        if ( *(_BYTE *)(((unsigned __int64)uEncryptBufferLen >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uEncryptBufferLen & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uEncryptBufferLen >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_store4(uEncryptBufferLen);
        }
        *uEncryptBufferLen = uBufferLen;
        for ( i_2 = 0; i_2 < uBufferLen >> 4; ++i_2 )
        {
          p_2 = &pBuffer[16 * i_2];
          if ( *(_BYTE *)(((unsigned __int64)pEncryptBuffer >> 3) + 0x7FFF8000) )
            __asan_report_load8(pEncryptBuffer);
          c_2 = &(*pEncryptBuffer)[16 * i_2];
          if ( ((unsigned __int8)p_2 & 7) >= *(_BYTE *)(((unsigned __int64)p_2 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)p_2 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((unsigned __int64)(p_2 + 15) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)p_2 + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(p_2 + 15) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(p_2, 16LL);
          }
          v20 = *(_QWORD *)p_2;
          v21 = (unsigned __int8 *)*((_QWORD *)p_2 + 1);
          if ( ((unsigned __int8)c_2 & 7) >= *(_BYTE *)(((unsigned __int64)c_2 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)c_2 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((unsigned __int64)(c_2 + 15) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)c_2 + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(c_2 + 15) >> 3) + 0x7FFF8000) )
          {
            v20 = 16LL;
            v21 = c_2;
            __asan_report_store_n(c_2, 16LL);
          }
          *(_QWORD *)c_2 = v20;
          *((_QWORD *)c_2 + 1) = v21;
          present128_encryptBlock(c_2, (const unsigned __int8 *)(v8 + 128));
        }
        break;
      case 4u:
        if ( *(_WORD *)(((v8 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store16(v8 + 160, v11);
        *(_QWORD *)(v8 + 160) = 0LL;
        *(_QWORD *)(v8 + 168) = 0LL;
        v22 = 16;
        if ( uKenLen <= 0x10 )
          v22 = uKenLen;
        memcpy((void *)(v8 + 160), pKey, v22);
        v23 = (BYTE *)operator new[](uBufferLen);
        if ( *(_BYTE *)(((unsigned __int64)pEncryptBuffer >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *pEncryptBuffer = v23;
        if ( *(_BYTE *)(((unsigned __int64)uEncryptBufferLen >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uEncryptBufferLen & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uEncryptBufferLen >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_store4(uEncryptBufferLen);
        }
        *uEncryptBufferLen = uBufferLen;
        for ( i_3 = 0; i_3 < uBufferLen >> 4; ++i_3 )
        {
          if ( *(_BYTE *)(((unsigned __int64)pEncryptBuffer >> 3) + 0x7FFF8000) )
            __asan_report_load8(pEncryptBuffer);
          serpent_encrypt_bitslice(
            &pBuffer[16 * i_3],
            (const unsigned __int8 *)(v8 + 160),
            &(*pEncryptBuffer)[16 * i_3],
            0x10u);
        }
        break;
      default:
        break;
    }
    v24 = 0;
  }
  v25 = v24;
  if ( v41 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v8 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8090) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    __asan_stack_free_5(v8, 1216LL, v41);
  }
  return v25;
};

// Line 10262: range 000000000CF619FE-000000000CF61B9C
int __cdecl CEncryptorManager::EncryptWithAesPlus(
        CEncryptorManager *const this,
        BYTE *pBuffer,
        uint32_t uBufferLen,
        BYTE *pKey,
        uint32_t uKeyLen,
        BYTE *pEncryptBuffer,
        uint32_t *uEncryptBufferLen)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  int result; // eax
  char v15[96]; // [rsp+30h] [rbp-60h] BYREF

  v7 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 16 8 iv:10263";
  *(_QWORD *)(v7 + 16) = CEncryptorManager::EncryptWithAesPlus;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v7 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v7 + 32, pBuffer);
  *(_QWORD *)(v7 + 32) = 0x39A462B7998525E2LL;
  *(_QWORD *)(v7 + 40) = 0x8765059173C7E128LL;
  if ( (uBufferLen & 0xF) != 0 )
  {
    result = -4;
  }
  else
  {
    if ( uKeyLen > 0xF )
    {
      if ( *(_BYTE *)(((unsigned __int64)uEncryptBufferLen >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uEncryptBufferLen & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uEncryptBufferLen >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(uEncryptBufferLen);
      }
      *uEncryptBufferLen = uBufferLen;
      memcpy(pEncryptBuffer, pBuffer, *uEncryptBufferLen);
      aes128_wb_enc(pEncryptBuffer, uBufferLen, pKey, (u1 *)(v7 + 32));
    }
    result = 0;
  }
  if ( v15 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 10275: range 000000000CF61C26-000000000CF61C3A
void __cdecl GLOBAL__sub_I_CEncryptorManager_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 10275: range 000000000CF61B9D-000000000CF61C25
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/envcheck/CEncryptorManager.cpp");
    if ( __priority == 0xFFFF )
    {
      std::random_device::random_device(&gRdGen);
      __cxa_atexit((void (__fastcall *)(void *))std::random_device::~random_device, &gRdGen, &_dso_handle);
      CEncryptorManager::CEncryptorManager(&CEncryptorManager::s_inst);
      __cxa_atexit(
        (void (__fastcall *)(void *))CEncryptorManager::~CEncryptorManager,
        &CEncryptorManager::s_inst,
        &_dso_handle);
    }
    __asan_after_dynamic_init();
  }
};
