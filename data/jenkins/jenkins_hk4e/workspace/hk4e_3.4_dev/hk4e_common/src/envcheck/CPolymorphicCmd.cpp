// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/envcheck/CPolymorphicCmd.cpp

// Line 5: range 000000000CF506F8-000000000CF50784
void __cdecl CPolymorphicCmd::CPolymorphicCmd(CPolymorphicCmd *const this)
{
  std::string::basic_string(&this->m_strRandomKey);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_uiExtraType >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_uiExtraType >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->m_uiExtraType);
  }
  this->m_uiExtraType = -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pExtraCmd >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_pExtraCmd = 0LL;
};

// Line 11: range 000000000CF50786-000000000CF507A4
void __cdecl CPolymorphicCmd::~CPolymorphicCmd(CPolymorphicCmd *const this)
{
  std::string::~string(&this->m_strRandomKey);
};

// Line 17: range 000000000CF507A6-000000000CF509D5
__int64 __fastcall CPolymorphicCmd::InitBasicParam(
        CPolymorphicCmd *const this,
        uint16_t uiCryptAlgorithmType,
        stCBUserInfo userInfo,
        std::string *p_strRandomKey)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 n; // rax
  unsigned __int64 v7; // r12
  char v8; // cl
  bool v9; // r8
  char v10; // cl
  int v11; // esi
  __int64 result; // rax
  char v15[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  n = v4 + 64;
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 12 11 userInfo:16";
  *(_QWORD *)(v4 + 16) = CPolymorphicCmd::InitBasicParam;
  v7 = v4 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202177536;
  *(stCBUserInfo *)(v4 + 32) = userInfo;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_uiCryptAlgorithmType >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->m_uiCryptAlgorithmType >> 3)
                                                       + 0x7FFF8000) )
  {
    n = __asan_report_store2(&this->m_uiCryptAlgorithmType);
  }
  this->m_uiCryptAlgorithmType = uiCryptAlgorithmType;
  v8 = *(_BYTE *)(((unsigned __int64)(n - 32 + 4) >> 3) + 0x7FFF8000);
  v9 = ((n - 32 + 4) & 7) >= v8 && v8 != 0;
  v10 = *(_BYTE *)(((unsigned __int64)(n - 32 + 7) >> 3) + 0x7FFF8000);
  if ( v9 || v10 != 0 && ((n - 32 + 7) & 7) >= v10 )
    n = __asan_report_load_n(n - 32 + 4, 4LL);
  v11 = *(_DWORD *)(n - 28);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ClientType >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_ClientType >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->m_ClientType);
  }
  this->m_ClientType = v11;
  std::string::operator=(&this->m_strRandomKey, p_strRandomKey);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->m_uiVersion = 1808417537;
  result = 0LL;
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 28: range 000000000CF509D6-000000000CF509E4
int __cdecl CPolymorphicCmd::UpdateExtraCmdInfo(CPolymorphicCmd *const this)
{
  return 0;
};

// Line 33: range 000000000CF509E6-000000000CF50A72
int __cdecl CPolymorphicCmd::SetExtraCmd(CPolymorphicCmd *const this, uint16_t uiExtraType, CExtraCmd *pExtraCmd)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_uiExtraType >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_uiExtraType >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->m_uiExtraType);
  }
  this->m_uiExtraType = uiExtraType;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pExtraCmd >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_pExtraCmd = pExtraCmd;
  return 0;
};

// Line 41: range 000000000CF50A74-000000000CF5130C
int __cdecl CPolymorphicCmd::Serialize(CPolymorphicCmd *const this, BYTE **SerialCmd, uint16_t *uiCmdLength)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  CExtraCmd *m_pExtraCmd; // rcx
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rax
  uint32_t m_uiVersion; // ecx
  uint16_t m_ClientType; // cx
  __int16 v11; // di
  uint16_t m_uiCryptAlgorithmType; // cx
  uint16_t m_uiExtraType; // cx
  __int16 v14; // cx
  __int16 v15; // cx
  DWORD v16; // r14
  void *v17; // rax
  DWORD v18; // rdx
  uint16_t v19; // di
  BYTE *v20; // rcx
  int result; // eax
  const BYTE *pBuffer; // [rsp+28h] [rbp-138h]
  char v25[304]; // [rsp+30h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 2 19 uiExtraCmdLength:44 48 8 17 ExtraSerialCmd:43 80 8 9 dwSize:69 112 32 12 cmdSerial:49 176 40 5 ds:42";
  *(_QWORD *)(v3 + 16) = CPolymorphicCmd::Serialize;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61954;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  CDataSerialize::CDataSerialize((CDataSerialize *const)(v3 + 176));
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 48) = 0LL;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 1 )
    __asan_report_store2(v3 + 32);
  *(_WORD *)(v3 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pExtraCmd >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_pExtraCmd);
  if ( this->m_pExtraCmd )
  {
    m_pExtraCmd = this->m_pExtraCmd;
    v7 = (unsigned __int64 *)m_pExtraCmd;
    if ( *(_BYTE *)(((unsigned __int64)m_pExtraCmd >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->m_pExtraCmd);
    v8 = *v7;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v8);
    (*(void (__fastcall **)(CExtraCmd *, unsigned __int64, _QWORD))v8)(
      m_pExtraCmd,
      v3 + 48,
      *(unsigned __int16 *)(v3 + 32));
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  m_uiVersion = this->m_uiVersion;
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 112);
  *(_DWORD *)(v3 + 112) = m_uiVersion;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ClientType >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_ClientType >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&this->m_ClientType);
  }
  m_ClientType = this->m_ClientType;
  if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) <= 1 )
    __asan_report_store2(v3 + 120);
  *(_WORD *)(v3 + 120) = m_ClientType;
  v11 = std::string::length(&this->m_strRandomKey);
  if ( *(_BYTE *)(((v3 + 122) >> 3) + 0x7FFF8000) != 0
    && (char)(((v3 + 122) & 7) + 1) >= *(_BYTE *)(((v3 + 122) >> 3) + 0x7FFF8000) )
  {
    v11 = v3 + 122;
    __asan_report_store2(v3 + 122);
  }
  *(_WORD *)(v3 + 122) = v11;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_uiCryptAlgorithmType >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->m_uiCryptAlgorithmType >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load2(&this->m_uiCryptAlgorithmType);
  }
  m_uiCryptAlgorithmType = this->m_uiCryptAlgorithmType;
  if ( *(_BYTE *)(((v3 + 118) >> 3) + 0x7FFF8000) != 0
    && (char)(((v3 + 118) & 7) + 1) >= *(_BYTE *)(((v3 + 118) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(v3 + 118);
  }
  *(_WORD *)(v3 + 118) = m_uiCryptAlgorithmType;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_uiExtraType >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_uiExtraType >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&this->m_uiExtraType);
  }
  m_uiExtraType = this->m_uiExtraType;
  if ( *(_BYTE *)(((v3 + 132) >> 3) + 0x7FFF8000) != 0
    && (char)(((v3 - 124) & 7) + 1) >= *(_BYTE *)(((v3 + 132) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(v3 + 132);
  }
  *(_WORD *)(v3 + 132) = m_uiExtraType;
  v14 = *(_WORD *)(v3 + 122);
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 1 )
    __asan_report_load2(v3 + 32);
  v15 = v14 + *(_WORD *)(v3 + 32) + 16;
  if ( *(_BYTE *)(((v3 + 116) >> 3) + 0x7FFF8000) != 0
    && (char)(((v3 + 116) & 7) + 1) >= *(_BYTE *)(((v3 + 116) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(v3 + 116);
  }
  *(_WORD *)(v3 + 116) = v15;
  operator<<<unsigned int>((CDataSerialize *)(v3 + 176), (unsigned int *)(v3 + 112));
  operator<<<unsigned short>((CDataSerialize *)(v3 + 176), (unsigned __int16 *)(v3 + 116));
  operator<<<unsigned short>((CDataSerialize *)(v3 + 176), (unsigned __int16 *)(v3 + 118));
  operator<<<unsigned short>((CDataSerialize *)(v3 + 176), (unsigned __int16 *)(v3 + 120));
  v16 = std::string::length(&this->m_strRandomKey);
  v17 = (void *)std::string::c_str(&this->m_strRandomKey);
  CDataSerialize::PushData((CDataSerialize *const)(v3 + 176), v17, v16);
  operator<<<unsigned short>((CDataSerialize *)(v3 + 176), (unsigned __int16 *)(v3 + 122));
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 1 )
    __asan_report_load2(v3 + 32);
  if ( *(_WORD *)(v3 + 32) )
  {
    v18 = *(unsigned __int16 *)(v3 + 32);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 48);
    CDataSerialize::PushData((CDataSerialize *const)(v3 + 176), *(void **)(v3 + 48), v18);
  }
  operator<<<unsigned short>((CDataSerialize *)(v3 + 176), (unsigned __int16 *)(v3 + 32));
  operator<<<unsigned short>((CDataSerialize *)(v3 + 176), (unsigned __int16 *)(v3 + 132));
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 80) = 0LL;
  pBuffer = CDataSerialize::GetBufferAndLength((CDataSerialize *const)(v3 + 176), (DWORD *)(v3 + 80));
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 80);
  v19 = *(_QWORD *)(v3 + 80);
  if ( *(_BYTE *)(((unsigned __int64)uiCmdLength >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)uiCmdLength & 7) + 1) >= *(_BYTE *)(((unsigned __int64)uiCmdLength >> 3) + 0x7FFF8000) )
  {
    v19 = (unsigned __int16)uiCmdLength;
    __asan_report_store2(uiCmdLength);
  }
  *uiCmdLength = v19;
  v20 = (BYTE *)operator new[](*uiCmdLength);
  if ( *(_BYTE *)(((unsigned __int64)SerialCmd >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *SerialCmd = v20;
  if ( *(_BYTE *)(((unsigned __int64)uiCmdLength >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)uiCmdLength & 7) + 1) >= *(_BYTE *)(((unsigned __int64)uiCmdLength >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(uiCmdLength);
  }
  memcpy(*SerialCmd, pBuffer, *uiCmdLength);
  CDataSerialize::~CDataSerialize((CDataSerialize *const)(v3 + 176));
  result = 0;
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 78: range 000000000CF5130E-000000000CF514EF
int __cdecl CPolymorphicCmd::BuildCmdCheckInfo(CPolymorphicCmd *const this, stCBReplyCheckInfo *checkInfo)
{
  uint16_t m_uiCryptAlgorithmType; // si

  std::string::operator=(&checkInfo->strKey, &this->m_strRandomKey);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_uiCryptAlgorithmType >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->m_uiCryptAlgorithmType >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load2(&this->m_uiCryptAlgorithmType);
  }
  m_uiCryptAlgorithmType = this->m_uiCryptAlgorithmType;
  if ( (((unsigned __int8)checkInfo + 2) & 7) >= *(_BYTE *)(((unsigned __int64)&checkInfo->uiCryptAlgorithmType >> 3)
                                                          + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&checkInfo->uiCryptAlgorithmType >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&checkInfo->uiCryptAlgorithmType + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)checkInfo + 3) & 7) >= *(_BYTE *)((((unsigned __int64)&checkInfo->uiCryptAlgorithmType + 1) >> 3)
                                                          + 0x7FFF8000) )
  {
    m_uiCryptAlgorithmType = 2;
    __asan_report_store_n(&checkInfo->uiCryptAlgorithmType, 2LL);
  }
  checkInfo->uiCryptAlgorithmType = m_uiCryptAlgorithmType;
  if ( (((unsigned __int8)checkInfo + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&checkInfo->uiEnvSign >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&checkInfo->uiEnvSign >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&checkInfo->uiEnvSign + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)checkInfo + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&checkInfo->uiEnvSign + 3) >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_store_n(&checkInfo->uiEnvSign, 4LL);
  }
  checkInfo->uiEnvSign = 1;
  if ( (((unsigned __int8)checkInfo + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&checkInfo->uiModuleCheckValue >> 3)
                                                           + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&checkInfo->uiModuleCheckValue >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&checkInfo->uiModuleCheckValue + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)checkInfo + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&checkInfo->uiModuleCheckValue + 3) >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_store_n(&checkInfo->uiModuleCheckValue, 4LL);
  }
  checkInfo->uiModuleCheckValue = 1;
  return 0;
};
