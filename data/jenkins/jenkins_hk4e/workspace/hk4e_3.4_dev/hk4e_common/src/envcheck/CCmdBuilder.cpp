// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/envcheck/CCmdBuilder.cpp

// Line 21: range 000000000CF47350-000000000CF4757F
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall GetRandomCmdForLogin(
        const char *pTablePath,
        stCBUserInfo userInfo,
        BYTE *pCmdBuffer,
        uint32_t *uiCmdBuffer,
        BYTE *pCheckInfoBuffer,
        uint32_t *uiCheckInfo)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  __int64 v9; // rsi
  __int64 result; // rax
  int nExtraCmdType; // [rsp+20h] [rbp-110h]
  unsigned int nRet; // [rsp+3Ch] [rbp-F4h]
  char v16[240]; // [rsp+40h] [rbp-F0h] BYREF

  nExtraCmdType = userInfo.nExtraCmdType;
  v6 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 48 1 10 builder:22 64 12 11 userInfo:20 96 56 12 CheckInfo:23";
  *(_QWORD *)(v6 + 16) = GetRandomCmdForLogin;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -219020288;
  v8[536862724] = -218103808;
  v8[536862725] = -202116109;
  *(_QWORD *)(v6 + 64) = v9;
  *(_DWORD *)(v6 + 72) = nExtraCmdType;
  CCmdBuilder::CCmdBuilder((CCmdBuilder *const)(v6 + 48));
  stCBReplyCheckInfo::stCBReplyCheckInfo((stCBReplyCheckInfo *const)(v6 + 96));
  nRet = CCmdBuilder::GetRandomCmdForLoginR(
           (CCmdBuilder *const)(v6 + 48),
           pTablePath,
           *(stCBUserInfo *)(v6 + 64),
           pCmdBuffer,
           uiCmdBuffer,
           (stCBReplyCheckInfo *)(v6 + 96));
  CCmdBuilder::SerializeCheckInfo(
    (CCmdBuilder *const)(v6 + 48),
    (stCBReplyCheckInfo *)(v6 + 96),
    pCheckInfoBuffer,
    uiCheckInfo);
  stCBReplyCheckInfo::~stCBReplyCheckInfo((stCBReplyCheckInfo *const)(v6 + 96));
  CCmdBuilder::~CCmdBuilder((CCmdBuilder *const)(v6 + 48));
  result = nRet;
  if ( v16 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 30: range 000000000CF47580-000000000CF4776A
__int64 __fastcall SetCmdParam(stCBUserLevelRateInfo rateInfo, stCBCmdLengthInfo lengthInfo)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int updated; // r14d
  __int64 result; // rax
  char v7[240]; // [rsp+0h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 10 builder:31 64 20 11 rateInfo:29 128 20 13 lengthInfo:29";
  *(_QWORD *)(v2 + 16) = SetCmdParam;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234618880;
  v4[536862723] = -218959118;
  v4[536862724] = -217841664;
  v4[536862725] = -202116109;
  *(stCBUserLevelRateInfo *)(v2 + 64) = rateInfo;
  *(stCBCmdLengthInfo *)(v2 + 128) = lengthInfo;
  CCmdBuilder::CCmdBuilder((CCmdBuilder *const)(v2 + 48));
  updated = CCmdBuilder::UpdateCmdParam(
              (CCmdBuilder *const)(v2 + 48),
              *(stCBUserLevelRateInfo *)(v2 + 64),
              *(stCBCmdLengthInfo *)(v2 + 128));
  CCmdBuilder::~CCmdBuilder((CCmdBuilder *const)(v2 + 48));
  result = updated;
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 36: range 000000000CF4776B-000000000CF4799A
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall GetRandomCmdForBattle(
        const char *pTablePath,
        stCBUserInfo userInfo,
        BYTE *pCmdBuffer,
        uint32_t *uiCmdBuffer,
        BYTE *pCheckInfoBuffer,
        uint32_t *uiCheckInfo)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  __int64 v9; // rsi
  __int64 result; // rax
  int nExtraCmdType; // [rsp+20h] [rbp-110h]
  unsigned int nRet; // [rsp+3Ch] [rbp-F4h]
  char v16[240]; // [rsp+40h] [rbp-F0h] BYREF

  nExtraCmdType = userInfo.nExtraCmdType;
  v6 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 48 1 10 builder:37 64 12 11 userInfo:35 96 56 12 CheckInfo:38";
  *(_QWORD *)(v6 + 16) = GetRandomCmdForBattle;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -219020288;
  v8[536862724] = -218103808;
  v8[536862725] = -202116109;
  *(_QWORD *)(v6 + 64) = v9;
  *(_DWORD *)(v6 + 72) = nExtraCmdType;
  CCmdBuilder::CCmdBuilder((CCmdBuilder *const)(v6 + 48));
  stCBReplyCheckInfo::stCBReplyCheckInfo((stCBReplyCheckInfo *const)(v6 + 96));
  nRet = CCmdBuilder::GetRandomCmdForBattleR(
           (CCmdBuilder *const)(v6 + 48),
           pTablePath,
           *(stCBUserInfo *)(v6 + 64),
           pCmdBuffer,
           uiCmdBuffer,
           (stCBReplyCheckInfo *)(v6 + 96));
  CCmdBuilder::SerializeCheckInfo(
    (CCmdBuilder *const)(v6 + 48),
    (stCBReplyCheckInfo *)(v6 + 96),
    pCheckInfoBuffer,
    uiCheckInfo);
  stCBReplyCheckInfo::~stCBReplyCheckInfo((stCBReplyCheckInfo *const)(v6 + 96));
  CCmdBuilder::~CCmdBuilder((CCmdBuilder *const)(v6 + 48));
  result = nRet;
  if ( v16 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 45: range 000000000CF4799B-000000000CF47C2F
int __cdecl CheckCmdResultValid(
        BYTE *pReplyBuffer,
        uint32_t uiReplyLength,
        BYTE *pCheckInfoBuffer,
        uint32_t uiCheckInfo,
        int *nVaild)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  int v8; // r14d
  unsigned __int64 v9; // rax
  int result; // eax
  char v14[304]; // [rsp+20h] [rbp-130h] BYREF

  v5 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(256LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 48 1 10 builder:46 64 56 12 CheckInfo:47 160 56 9 <unknown>";
  *(_QWORD *)(v5 + 16) = CheckCmdResultValid;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862723] = -234881024;
  v7[536862724] = -218959118;
  v7[536862726] = -218103808;
  v7[536862727] = -202116109;
  CCmdBuilder::CCmdBuilder((CCmdBuilder *const)(v5 + 48));
  stCBReplyCheckInfo::stCBReplyCheckInfo((stCBReplyCheckInfo *const)(v5 + 64));
  CCmdBuilder::DeserializeCheckInfo(
    (CCmdBuilder *const)(v5 + 48),
    (stCBReplyCheckInfo *)(v5 + 64),
    pCheckInfoBuffer,
    uiCheckInfo);
  stCBReplyCheckInfo::stCBReplyCheckInfo((stCBReplyCheckInfo *const)(v5 + 160), (const stCBReplyCheckInfo *)(v5 + 64));
  v8 = CCmdBuilder::CheckCmdResultValidR(
         (CCmdBuilder *const)(v5 + 48),
         pReplyBuffer,
         uiReplyLength,
         (stCBReplyCheckInfo *)(v5 + 160),
         nVaild);
  stCBReplyCheckInfo::~stCBReplyCheckInfo((stCBReplyCheckInfo *const)(v5 + 160));
  v9 = ((v5 + 160) >> 3) + 2147450880;
  *(_DWORD *)v9 = -117901064;
  *(_WORD *)(v9 + 4) = -1800;
  *(_BYTE *)(v9 + 6) = -8;
  stCBReplyCheckInfo::~stCBReplyCheckInfo((stCBReplyCheckInfo *const)(v5 + 64));
  CCmdBuilder::~CCmdBuilder((CCmdBuilder *const)(v5 + 48));
  result = v8;
  if ( v14 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF800C) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 52: range 000000000CF47C30-000000000CF47F07
void __cdecl CCmdBuilder::CCmdBuilder(CCmdBuilder *const this)
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
  char v13[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  v3 = v1 + 96;
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 20 13 nLevelRate:54";
  *(_QWORD *)(v1 + 16) = CCmdBuilder::CCmdBuilder;
  v4 = (_DWORD *)(v1 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -217841664;
  v4[536862722] = -202116109;
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) <= 3 )
    v3 = __asan_report_store4(v1 + 32);
  *(_DWORD *)(v3 - 64) = 2000;
  v5 = *(_BYTE *)(((unsigned __int64)(v3 - 64 + 4) >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)(((v3 - 64 + 4) & 7) + 3) >= v5 )
    v3 = __asan_report_store4(v3 - 64 + 4);
  *(_DWORD *)(v3 - 60) = 500;
  v6 = *(_BYTE *)(((unsigned __int64)(v3 - 64 + 8) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
    v3 = __asan_report_store4(v3 - 64 + 8);
  *(_DWORD *)(v3 - 56) = 100;
  v7 = *(_BYTE *)(((unsigned __int64)(v3 - 64 + 12) >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)(((v3 - 64 + 12) & 7) + 3) >= v7 )
    v3 = __asan_report_store4(v3 - 64 + 12);
  *(_DWORD *)(v3 - 52) = 7;
  v8 = *(_BYTE *)(((unsigned __int64)(v3 - 64 + 16) >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
    v3 = __asan_report_store4(v3 - 64 + 16);
  *(_DWORD *)(v3 - 48) = 1;
  for ( i = 0; i <= 4; ++i )
  {
    v9 = *(_BYTE *)(((unsigned __int64)(4LL * i + v3 - 64) >> 3) + 0x7FFF8000);
    if ( v9 != 0 && (char)(((4 * i + v3 - 64) & 7) + 3) >= v9 )
      __asan_report_load4(4LL * i + v3 - 64);
    LODWORD(v10) = *(_DWORD *)(v3 + 4LL * i - 64);
    v11 = *(_BYTE *)(((unsigned __int64)&CCmdBuilder::m_nLevelRate[i] >> 3) + 0x7FFF8000);
    if ( v11 != 0 && (char)(((unsigned __int8)&CCmdBuilder::m_nLevelRate[i] & 7) + 3) >= v11 )
    {
      v10 = &CCmdBuilder::m_nLevelRate[i];
      v3 = __asan_report_store4(v10);
    }
    CCmdBuilder::m_nLevelRate[i] = (int)v10;
  }
  if ( v13 == (char *)v1 )
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

// Line 63: range 000000000CF47F08-000000000CF47F12
void __cdecl CCmdBuilder::~CCmdBuilder(CCmdBuilder *const this)
{
  ;
};

// Line 68: range 000000000CF47F14-000000000CF47F99
int __cdecl CCmdBuilder::GetLevelRateFromLevel(CCmdBuilder *const this, int nLevel)
{
  char v2; // dl

  if ( (unsigned int)nLevel > 4 )
    return CCmdBuilder::GetLevelRateFromLevel(int)::nLevelRate[1];
  v2 = *(_BYTE *)(((unsigned __int64)&CCmdBuilder::GetLevelRateFromLevel(int)::nLevelRate[nLevel] >> 3) + 0x7FFF8000);
  if ( v2 != 0 && (char)(((unsigned __int8)&CCmdBuilder::GetLevelRateFromLevel(int)::nLevelRate[nLevel] & 7) + 3) >= v2 )
    __asan_report_load4(&CCmdBuilder::GetLevelRateFromLevel(int)::nLevelRate[nLevel]);
  return CCmdBuilder::GetLevelRateFromLevel(int)::nLevelRate[nLevel];
};

// Line 77: range 000000000CF47F9A-000000000CF48381
__int64 __fastcall CCmdBuilder::UpdateCmdParam(
        CCmdBuilder *const this,
        stCBUserLevelRateInfo rateInfo,
        stCBCmdLengthInfo lengthInfo)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  CEncryptorManager *v6; // rax
  __int64 result; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 20 11 rateInfo:76 96 20 13 lengthInfo:76";
  *(_QWORD *)(v3 + 16) = CCmdBuilder::UpdateCmdParam;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234618880;
  v5[536862722] = -218959118;
  v5[536862723] = -217841664;
  v5[536862724] = -202116109;
  *(stCBUserLevelRateInfo *)(v3 + 32) = rateInfo;
  *(stCBCmdLengthInfo *)(v3 + 96) = lengthInfo;
  if ( (char)((v3 + 32) & 7) >= *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((v3 + 35) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 35) & 7) >= *(_BYTE *)(((v3 + 35) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v3 + 32, 4LL);
  }
  CCmdBuilder::m_nLevelRate[0] = *(_DWORD *)(v3 + 32);
  if ( (char)((v3 + 36) & 7) >= *(_BYTE *)(((v3 + 36) >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((v3 + 36) >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((v3 + 39) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 39) & 7) >= *(_BYTE *)(((v3 + 39) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v3 + 36, 4LL);
  }
  CCmdBuilder::m_nLevelRate[1] = *(_DWORD *)(v3 + 36);
  if ( (char)((v3 + 44) & 7) >= *(_BYTE *)(((v3 + 44) >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((v3 + 44) >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((v3 + 47) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 47) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v3 + 44, 4LL);
  }
  CCmdBuilder::m_nLevelRate[3] = *(_DWORD *)(v3 + 44);
  if ( (char)((v3 + 40) & 7) >= *(_BYTE *)(((v3 + 40) >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((v3 + 40) >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((v3 + 43) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 43) & 7) >= *(_BYTE *)(((v3 + 43) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v3 + 40, 4LL);
  }
  CCmdBuilder::m_nLevelRate[2] = *(_DWORD *)(v3 + 40);
  if ( (char)((v3 + 48) & 7) >= *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((v3 + 51) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 51) & 7) >= *(_BYTE *)(((v3 + 51) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v3 + 48, 4LL);
  }
  CCmdBuilder::m_nLevelRate[4] = *(_DWORD *)(v3 + 48);
  v6 = CEncryptorManager::Instance();
  CEncryptorManager::UpdateCmdLength(v6, *(stCBCmdLengthInfo *)(v3 + 96));
  result = 0LL;
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 88: range 000000000CF48382-000000000CF48AA4
__int64 __fastcall CCmdBuilder::GetRandomCmdForLoginR(
        CCmdBuilder *const this,
        const char *pTablePath,
        stCBUserInfo userInfo,
        BYTE *pCmdBuffer,
        uint32_t *uiCmdBuffer,
        stCBReplyCheckInfo *CheckInfo)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  CEncryptorManager *v9; // rax
  CEncryptorManager *v10; // rax
  uint16_t v11; // ax
  CEncryptorManager *v12; // rdi
  CEncryptorManager *v13; // r14
  BYTE *v14; // rsi
  uint32_t v15; // edx
  __int64 result; // rax
  uint32_t uKeyLen; // [rsp+Ch] [rbp-214h]
  int nUserLevel; // [rsp+44h] [rbp-1DCh]
  int nUserLevelRate; // [rsp+48h] [rbp-1D8h]
  char v23[464]; // [rsp+50h] [rbp-1D0h] BYREF

  v6 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(416LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "8 32 2 15 uiCmdLength:102 48 4 9 nIndex:97 64 8 13 SerialCmd:101 96 12 11 userInfo:87 128 32 9 s"
                        "trKey:92 192 32 9 <unknown> 256 32 16 strEncryptKey:99 320 64 6 cmd:89";
  *(_QWORD *)(v6 + 16) = CCmdBuilder::GetRandomCmdForLoginR;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556926;
  v8[536862722] = -218959360;
  v8[536862723] = -219020288;
  v8[536862725] = -218959118;
  v8[536862727] = -218959118;
  v8[536862729] = -218959118;
  v8[536862732] = -202116109;
  *(stCBUserInfo *)(v6 + 96) = userInfo;
  CPolymorphicCmd::CPolymorphicCmd((CPolymorphicCmd *const)(v6 + 320));
  if ( (char)((v6 + 96) & 7) >= *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((v6 + 99) >> 3) + 0x7FFF8000) != 0
    && (char)((v6 + 99) & 7) >= *(_BYTE *)(((v6 + 99) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v6 + 96, 4LL);
  }
  nUserLevel = *(_DWORD *)(v6 + 96);
  nUserLevelRate = CCmdBuilder::GetLevelRateFromLevel(this, nUserLevel);
  std::string::basic_string(v6 + 128);
  v9 = CEncryptorManager::Instance();
  CEncryptorManager::GenRandomSessinKey(v9, (std::string *)(v6 + 128), nUserLevel);
  std::string::basic_string(v6 + 192, v6 + 128);
  v10 = CEncryptorManager::Instance();
  v11 = CEncryptorManager::GenCryptAlgorithmType(v10);
  CPolymorphicCmd::InitBasicParam(
    (CPolymorphicCmd *const)(v6 + 320),
    v11,
    *(stCBUserInfo *)(v6 + 96),
    (std::string *)(v6 + 192));
  std::string::~string((void *)(v6 + 192));
  *(_DWORD *)(((v6 + 192) >> 3) + 0x7FFF8000) = -117901064;
  CPolymorphicCmd::UpdateExtraCmdInfo((CPolymorphicCmd *const)(v6 + 320));
  *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) = 4;
  if ( *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v6 + 48);
  *(_DWORD *)(v6 + 48) = 0;
  if ( (char)((v6 + 100) & 7) >= *(_BYTE *)(((v6 + 100) >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((v6 + 100) >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((v6 + 103) >> 3) + 0x7FFF8000) != 0
    && (char)((v6 + 103) & 7) >= *(_BYTE *)(((v6 + 103) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v6 + 100, 4LL);
  }
  CCmdBuilder::GetRandomIndexFromUserLevel(this, nUserLevelRate, *(_DWORD *)(v6 + 100), (int *)(v6 + 48));
  *(_DWORD *)(((v6 + 256) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(v6 + 256);
  v12 = CEncryptorManager::Instance();
  if ( *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) <= 3 )
  {
    v12 = (CEncryptorManager *)(v6 + 48);
    __asan_report_load4(v6 + 48);
  }
  CEncryptorManager::GetEncryptKeyFromIndex(v12, pTablePath, *(_DWORD *)(v6 + 48), (std::string *)(v6 + 256));
  *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v6 + 64) = 0LL;
  *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) = 2;
  if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) <= 1 )
    __asan_report_store2(v6 + 32);
  *(_WORD *)(v6 + 32) = 0;
  CPolymorphicCmd::BuildCmdCheckInfo((CPolymorphicCmd *const)(v6 + 320), CheckInfo);
  if ( !CPolymorphicCmd::Serialize((CPolymorphicCmd *const)(v6 + 320), (BYTE **)(v6 + 64), (uint16_t *)(v6 + 32)) )
  {
    v13 = CEncryptorManager::Instance();
    uKeyLen = std::string::length(v6 + 256);
    v14 = (BYTE *)std::string::c_str(v6 + 256);
    if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) <= 1 )
      __asan_report_load2(v6 + 32);
    v15 = *(unsigned __int16 *)(v6 + 32);
    if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6 + 64);
    CEncryptorManager::EncryptWithAesPlus(v13, *(BYTE **)(v6 + 64), v15, v14, uKeyLen, pCmdBuffer, uiCmdBuffer);
  }
  if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v6 + 64);
  if ( *(_QWORD *)(v6 + 64) )
    operator delete[](*(void **)(v6 + 64));
  std::string::~string((void *)(v6 + 256));
  std::string::~string((void *)(v6 + 128));
  CPolymorphicCmd::~CPolymorphicCmd((CPolymorphicCmd *const)(v6 + 320));
  result = 0LL;
  if ( v23 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 118: range 000000000CF48AA6-000000000CF48BC0
__int64 __fastcall CCmdBuilder::GetRandomCmdForBattleR(
        CCmdBuilder *const this,
        const char *pTablePath,
        stCBUserInfo userInfo,
        BYTE *pCmdBuffer,
        uint32_t *uiCmdBuffer,
        stCBReplyCheckInfo *CheckInfo)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  __int64 result; // rax
  char v13[96]; // [rsp+30h] [rbp-60h] BYREF

  v6 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 12 12 userInfo:117";
  *(_QWORD *)(v6 + 16) = CCmdBuilder::GetRandomCmdForBattleR;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202177536;
  *(stCBUserInfo *)(v6 + 32) = userInfo;
  result = CCmdBuilder::GetRandomCmdForLoginR(
             this,
             pTablePath,
             *(stCBUserInfo *)(v6 + 32),
             pCmdBuffer,
             uiCmdBuffer,
             CheckInfo);
  if ( v13 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 122: range 000000000CF48BC2-000000000CF48CA2
int __cdecl CCmdBuilder::GetRandomIndexFromUserLevel(
        CCmdBuilder *const this,
        int nUserLevel,
        int nMachineType,
        int *nIndex)
{
  int v4; // edi
  int nRate; // [rsp+28h] [rbp-8h]

  nRate = 1;
  if ( nMachineType == 4 )
  {
    nRate = 2;
  }
  else if ( nMachineType <= 4 )
  {
    switch ( nMachineType )
    {
      case 3:
        nRate = 2;
        break;
      case 1:
        nRate = 1;
        break;
      case 2:
        nRate = 3;
        break;
    }
  }
  v4 = std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>::operator()(&randGen)
     % (10000 / nUserLevel / nRate);
  if ( *(_BYTE *)(((unsigned __int64)nIndex >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)nIndex & 7) + 3) >= *(_BYTE *)(((unsigned __int64)nIndex >> 3) + 0x7FFF8000) )
  {
    v4 = (int)nIndex;
    __asan_report_store4(nIndex);
  }
  *nIndex = v4;
  return 0;
};

// Line 157: range 000000000CF48CA4-000000000CF49252
int __cdecl CCmdBuilder::CheckCmdResultValidR(
        CCmdBuilder *const this,
        BYTE *pReplyBuffer,
        uint32_t uiReplyLength,
        stCBReplyCheckInfo *p_CheckInfo,
        int *nVaild)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  uint32_t v8; // r14d
  BYTE *v9; // r8
  uint32_t v10; // edx
  int v11; // ecx
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  int result; // eax
  int nRet; // [rsp+3Ch] [rbp-154h]
  char v19[336]; // [rsp+40h] [rbp-150h] BYREF

  v5 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(288LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 32 1 10 helper:161 48 4 21 uDecryptBufferLen:160 64 8 18 pDecryptBuffer:159 96 56 9 <unknown> "
                        "192 64 7 cmd:166";
  *(_QWORD *)(v5 + 16) = CCmdBuilder::CheckCmdResultValidR;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556927;
  v7[536862722] = -218959360;
  v7[536862724] = -234881024;
  v7[536862725] = -218959118;
  v7[536862728] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)nVaild >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)nVaild & 7) + 3) >= *(_BYTE *)(((unsigned __int64)nVaild >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(nVaild);
  }
  *nVaild = -1;
  if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v5 + 64) = 0LL;
  if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v5 + 48);
  *(_DWORD *)(v5 + 48) = 0;
  CDecryptHelper::CDecryptHelper((CDecryptHelper *const)(v5 + 32));
  v8 = std::string::length(&p_CheckInfo->strKey);
  v9 = (BYTE *)std::string::c_str(&p_CheckInfo->strKey);
  if ( (((unsigned __int8)p_CheckInfo + 2) & 7) >= *(_BYTE *)(((unsigned __int64)&p_CheckInfo->uiCryptAlgorithmType >> 3)
                                                            + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&p_CheckInfo->uiCryptAlgorithmType >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&p_CheckInfo->uiCryptAlgorithmType + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)p_CheckInfo + 3) & 7) >= *(_BYTE *)((((unsigned __int64)&p_CheckInfo->uiCryptAlgorithmType + 1) >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load_n(&p_CheckInfo->uiCryptAlgorithmType, 2LL);
  }
  CDecryptHelper::DecryptWithAlgorithmType(
    (CDecryptHelper *const)(v5 + 32),
    p_CheckInfo->uiCryptAlgorithmType,
    pReplyBuffer,
    uiReplyLength,
    v9,
    v8,
    (BYTE **)(v5 + 64),
    (uint32_t *)(v5 + 48));
  if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v5 + 64);
  nRet = CCmdBuilder::CheckDecryptValid(this, *(BYTE **)(v5 + 64), (uint32_t *)(v5 + 48));
  if ( !nRet )
  {
    CPolymorphicCmdReply::CPolymorphicCmdReply((CPolymorphicCmdReply *const)(v5 + 192));
    if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v5 + 48);
    v10 = *(_DWORD *)(v5 + 48);
    if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5 + 64);
    CPolymorphicCmdReply::Deserialize((CPolymorphicCmdReply *const)(v5 + 192), *(BYTE **)(v5 + 64), v10);
    stCBReplyCheckInfo::stCBReplyCheckInfo((stCBReplyCheckInfo *const)(v5 + 96), p_CheckInfo);
    v11 = CPolymorphicCmdReply::CheckReplyInfo((CPolymorphicCmdReply *const)(v5 + 192), (stCBReplyCheckInfo *)(v5 + 96));
    if ( *(_BYTE *)(((unsigned __int64)nVaild >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)nVaild & 7) + 3) >= *(_BYTE *)(((unsigned __int64)nVaild >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(nVaild);
    }
    *nVaild = v11;
    stCBReplyCheckInfo::~stCBReplyCheckInfo((stCBReplyCheckInfo *const)(v5 + 96));
    v12 = ((v5 + 96) >> 3) + 2147450880;
    *(_DWORD *)v12 = -117901064;
    *(_WORD *)(v12 + 4) = -1800;
    *(_BYTE *)(v12 + 6) = -8;
    CPolymorphicCmdReply::~CPolymorphicCmdReply((CPolymorphicCmdReply *const)(v5 + 192));
    v13 = (_DWORD *)(((v5 + 192) >> 3) + 2147450880);
    *v13 = -117901064;
    v13[1] = -117901064;
  }
  if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v5 + 64);
  if ( *(_QWORD *)(v5 + 64) )
    operator delete[](*(void **)(v5 + 64));
  CDecryptHelper::~CDecryptHelper((CDecryptHelper *const)(v5 + 32));
  result = nRet;
  if ( v19 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 178: range 000000000CF49254-000000000CF493DB
int __cdecl CCmdBuilder::CheckDecryptValid(CCmdBuilder *const this, BYTE *pReplyBuffer, uint32_t *uiReplyLength)
{
  uint32_t v3; // ecx
  int nRet; // [rsp+24h] [rbp-Ch]

  if ( ((unsigned __int8)pReplyBuffer & 7) >= *(_BYTE *)(((unsigned __int64)pReplyBuffer >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)pReplyBuffer >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(pReplyBuffer + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)pReplyBuffer + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(pReplyBuffer + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(pReplyBuffer, 4LL);
  }
  nRet = CCmdBuilder::CheckCmdVersion(this, *(_DWORD *)pReplyBuffer);
  if ( nRet )
    return nRet;
  if ( (((unsigned __int8)pReplyBuffer + 4) & 7) >= *(_BYTE *)(((unsigned __int64)(pReplyBuffer + 4) >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)(pReplyBuffer + 4) >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(pReplyBuffer + 5) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)pReplyBuffer + 5) & 7) >= *(_BYTE *)(((unsigned __int64)(pReplyBuffer + 5) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(pReplyBuffer + 4, 2LL);
  }
  v3 = *((unsigned __int16 *)pReplyBuffer + 2);
  if ( *(_BYTE *)(((unsigned __int64)uiReplyLength >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)uiReplyLength & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uiReplyLength >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(uiReplyLength);
  }
  if ( v3 > *uiReplyLength )
    return -3;
  *uiReplyLength = *((unsigned __int16 *)pReplyBuffer + 2);
  return 0;
};

// Line 194: range 000000000CF493DC-000000000CF49413
int __cdecl CCmdBuilder::CheckCmdVersion(CCmdBuilder *const this, uint32_t uiVersion)
{
  if ( uiVersion == 1808417537 )
    return 0;
  if ( (uiVersion ^ 0x6BCA43FF) > 0xFE )
    return -1;
  return -2;
};

// Line 207: range 000000000CF49414-000000000CF497B0
int __cdecl CCmdBuilder::SerializeCheckInfo(
        CCmdBuilder *const this,
        stCBReplyCheckInfo *CheckInfo,
        BYTE *pBuffer,
        uint32_t *uiBuffer)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  DWORD v7; // r14
  void *v8; // rax
  __int16 v9; // si
  unsigned __int64 v10; // rcx
  int v11; // r14d
  int result; // eax
  const BYTE *pDsBuffer; // [rsp+28h] [rbp-D8h]
  char v17[208]; // [rsp+30h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 2 13 u16Length:216 48 8 10 dwSize:219 80 40 6 ds:209";
  *(_QWORD *)(v4 + 16) = CCmdBuilder::SerializeCheckInfo;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61954;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  CDataSerialize::CDataSerialize((CDataSerialize *const)(v4 + 80));
  operator<<<unsigned short>((CDataSerialize *)(v4 + 80), &CheckInfo->iCmdType);
  operator<<<unsigned short>((CDataSerialize *)(v4 + 80), &CheckInfo->uiCryptAlgorithmType);
  operator<<<int>((CDataSerialize *)(v4 + 80), &CheckInfo->iValidCheckSum);
  operator<<<unsigned int>((CDataSerialize *)(v4 + 80), &CheckInfo->uiEnvSign);
  operator<<<unsigned int>((CDataSerialize *)(v4 + 80), &CheckInfo->uiModuleCheckValue);
  v7 = std::string::length(&CheckInfo->strKey);
  v8 = (void *)std::string::c_str(&CheckInfo->strKey);
  CDataSerialize::PushData((CDataSerialize *const)(v4 + 80), v8, v7);
  v9 = std::string::length(&CheckInfo->strKey);
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) <= 1 )
    __asan_report_store2(v4 + 32);
  *(_WORD *)(v4 + 32) = v9;
  operator<<<unsigned short>((CDataSerialize *)(v4 + 80), (unsigned __int16 *)(v4 + 32));
  operator<<<long>((CDataSerialize *)(v4 + 80), &CheckInfo->iTaskId);
  if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v4 + 48) = 0LL;
  pDsBuffer = CDataSerialize::GetBufferAndRealLength((CDataSerialize *const)(v4 + 80), (DWORD *)(v4 + 48));
  if ( *(_BYTE *)(((unsigned __int64)uiBuffer >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)uiBuffer & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uiBuffer >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(uiBuffer);
  }
  v10 = *uiBuffer;
  if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v4 + 48);
  if ( v10 <= *(_QWORD *)(v4 + 48) )
  {
    v11 = -3;
  }
  else
  {
    memcpy(pBuffer, pDsBuffer, *(_QWORD *)(v4 + 48));
    *uiBuffer = *(_QWORD *)(v4 + 48);
    v11 = 0;
  }
  CDataSerialize::~CDataSerialize((CDataSerialize *const)(v4 + 80));
  result = v11;
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 230: range 000000000CF497B2-000000000CF49BE0
int __cdecl CCmdBuilder::DeserializeCheckInfo(
        CCmdBuilder *const this,
        stCBReplyCheckInfo *CheckInfo,
        BYTE *pBuffer,
        uint32_t uiBuffer)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  char v10[1424]; // [rsp+20h] [rbp-590h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1376LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 1 9 <unknown> 64 2 13 u16Length:234 80 32 9 <unknown> 144 40 6 ds:231 224 1024 10 keyTmp:232";
  *(_QWORD *)(v4 + 16) = CCmdBuilder::DeserializeCheckInfo;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = 61954;
  v6[536862723] = -219021312;
  v6[536862724] = 62194;
  v6[536862725] = -234881024;
  v6[536862726] = -218959118;
  v6[536862759] = -202116109;
  v6[536862760] = -202116109;
  v6[536862761] = -202116109;
  v6[536862762] = -202116109;
  CDataSerialize::CDataSerialize((CDataSerialize *const)(v4 + 144), pBuffer, uiBuffer);
  operator>><long>((CDataSerialize *)(v4 + 144), &CheckInfo->iTaskId);
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 1 )
    __asan_report_store2(v4 + 64);
  *(_WORD *)(v4 + 64) = 0;
  operator>><unsigned short>((CDataSerialize *)(v4 + 144), (unsigned __int16 *)(v4 + 64));
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 1 )
    __asan_report_load2(v4 + 64);
  CDataSerialize::PopData((CDataSerialize *const)(v4 + 144), (void *)(v4 + 224), *(unsigned __int16 *)(v4 + 64));
  std::allocator<char>::allocator(v4 + 48);
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 1 )
    __asan_report_load2(v4 + 64);
  std::string::basic_string(v4 + 80, v4 + 224, *(unsigned __int16 *)(v4 + 64), v4 + 48);
  std::string::operator=(&CheckInfo->strKey, v4 + 80);
  std::string::~string((void *)(v4 + 80));
  *(_DWORD *)(((v4 + 80) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  operator>><unsigned int>((CDataSerialize *)(v4 + 144), &CheckInfo->uiModuleCheckValue);
  operator>><unsigned int>((CDataSerialize *)(v4 + 144), &CheckInfo->uiEnvSign);
  operator>><int>((CDataSerialize *)(v4 + 144), &CheckInfo->iValidCheckSum);
  operator>><unsigned short>((CDataSerialize *)(v4 + 144), &CheckInfo->uiCryptAlgorithmType);
  operator>><unsigned short>((CDataSerialize *)(v4 + 144), &CheckInfo->iCmdType);
  CDataSerialize::~CDataSerialize((CDataSerialize *const)(v4 + 144));
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF809C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80A4) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1376LL, v10);
  }
  return 0;
};

// Line 244: range 000000000CF49C2D-000000000CF49C41
void __cdecl GLOBAL__sub_I_CCmdBuilder_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 244: range 000000000CF49BE1-000000000CF49C2C
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>::result_type v2; // rsi

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/envcheck/CCmdBuilder.cpp");
    if ( __priority == 0xFFFF )
    {
      v2 = (unsigned int)time(0LL);
      std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>::mersenne_twister_engine(
        &randGen,
        v2);
    }
    __asan_after_dynamic_init();
  }
};
