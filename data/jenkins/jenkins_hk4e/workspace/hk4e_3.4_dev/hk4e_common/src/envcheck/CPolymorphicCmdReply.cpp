// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/envcheck/CPolymorphicCmdReply.cpp

// Line 5: range 000000000CF4B42A-000000000CF4B4EF
void __cdecl CPolymorphicCmdReply::CPolymorphicCmdReply(CPolymorphicCmdReply *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->m_uiVersion = 1808417537;
  std::string::basic_string(&this->m_strRandomKey);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_uiExtraType >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_uiExtraType >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->m_uiExtraType);
  }
  this->m_uiExtraType = -2;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pExtraCmdReply >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_pExtraCmdReply = 0LL;
};

// Line 11: range 000000000CF4B4F0-000000000CF4B50E
void __cdecl CPolymorphicCmdReply::~CPolymorphicCmdReply(CPolymorphicCmdReply *const this)
{
  std::string::~string(&this->m_strRandomKey);
};

// Line 17: range 000000000CF4B510-000000000CF4B51E
int __cdecl CPolymorphicCmdReply::SetEnvSignature(CPolymorphicCmdReply *const this)
{
  return 0;
};

// Line 24: range 000000000CF4B520-000000000CF4B52E
int __cdecl CPolymorphicCmdReply::SetMainModuleSignature(CPolymorphicCmdReply *const this)
{
  return 0;
};

// Line 30: range 000000000CF4B530-000000000CF4BB5F
int __cdecl CPolymorphicCmdReply::Serialize(CPolymorphicCmdReply *const this, BYTE **SerialCmd, uint16_t *uiCmdLength)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  CExtraCmdReply *m_pExtraCmdReply; // rcx
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rax
  __int16 v9; // cx
  DWORD v10; // rdx
  uint16_t v11; // di
  BYTE *v12; // rcx
  int result; // eax
  const BYTE *pBuffer; // [rsp+28h] [rbp-138h]
  char v16[304]; // [rsp+30h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 2 19 uiExtraCmdLength:32 48 8 17 ExtraSerialCmd:33 80 8 9 dwSize:53 112 28 12 repSerial:31 176 40 5 ds:41";
  *(_QWORD *)(v3 + 16) = CPolymorphicCmdReply::Serialize;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61954;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = -219020288;
  v5[536862725] = 62194;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 1 )
    __asan_report_store2(v3 + 32);
  *(_WORD *)(v3 + 32) = 0;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 48) = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pExtraCmdReply >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_pExtraCmdReply);
  if ( this->m_pExtraCmdReply )
  {
    m_pExtraCmdReply = this->m_pExtraCmdReply;
    v7 = (unsigned __int64 *)m_pExtraCmdReply;
    if ( *(_BYTE *)(((unsigned __int64)m_pExtraCmdReply >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->m_pExtraCmdReply);
    v8 = *v7;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v8);
    (*(void (__fastcall **)(CExtraCmdReply *, unsigned __int64, _QWORD))v8)(
      m_pExtraCmdReply,
      v3 + 48,
      *(unsigned __int16 *)(v3 + 32));
  }
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 1 )
    __asan_report_load2(v3 + 32);
  v9 = *(_WORD *)(v3 + 32);
  if ( *(_BYTE *)(((v3 + 130) >> 3) + 0x7FFF8000) != 0
    && (char)(((v3 - 126) & 7) + 1) >= *(_BYTE *)(((v3 + 130) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(v3 + 130);
  }
  *(_WORD *)(v3 + 130) = v9;
  CPolymorphicCmdReply::BuildPacket(this, (PolymorphicCmdRepSerial *)(v3 + 112));
  CDataSerialize::CDataSerialize((CDataSerialize *const)(v3 + 176));
  operator<<<unsigned int>((CDataSerialize *)(v3 + 176), (unsigned int *)(v3 + 112));
  operator<<<unsigned short>((CDataSerialize *)(v3 + 176), (unsigned __int16 *)(v3 + 116));
  operator<<<unsigned short>((CDataSerialize *)(v3 + 176), (unsigned __int16 *)(v3 + 118));
  operator<<<unsigned int>((CDataSerialize *)(v3 + 176), (unsigned int *)(v3 + 124));
  operator<<<unsigned int>((CDataSerialize *)(v3 + 176), (unsigned int *)(v3 + 120));
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pExtraCmdReply >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_pExtraCmdReply);
  if ( this->m_pExtraCmdReply )
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 1 )
      __asan_report_load2(v3 + 32);
    v10 = *(unsigned __int16 *)(v3 + 32);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 48);
    CDataSerialize::PushData((CDataSerialize *const)(v3 + 176), *(void **)(v3 + 48), v10);
  }
  operator<<<unsigned short>((CDataSerialize *)(v3 + 176), (unsigned __int16 *)(v3 + 32));
  operator<<<unsigned short>((CDataSerialize *)(v3 + 176), (unsigned __int16 *)(v3 + 128));
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 80) = 0LL;
  pBuffer = CDataSerialize::GetBufferAndLength((CDataSerialize *const)(v3 + 176), (DWORD *)(v3 + 80));
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 80);
  v11 = *(_QWORD *)(v3 + 80);
  if ( *(_BYTE *)(((unsigned __int64)uiCmdLength >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)uiCmdLength & 7) + 1) >= *(_BYTE *)(((unsigned __int64)uiCmdLength >> 3) + 0x7FFF8000) )
  {
    v11 = (unsigned __int16)uiCmdLength;
    __asan_report_store2(uiCmdLength);
  }
  *uiCmdLength = v11;
  v12 = (BYTE *)operator new[](*uiCmdLength);
  if ( *(_BYTE *)(((unsigned __int64)SerialCmd >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *SerialCmd = v12;
  if ( *(_BYTE *)(((unsigned __int64)uiCmdLength >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)uiCmdLength & 7) + 1) >= *(_BYTE *)(((unsigned __int64)uiCmdLength >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(uiCmdLength);
  }
  memcpy(*SerialCmd, pBuffer, *uiCmdLength);
  CDataSerialize::~CDataSerialize((CDataSerialize *const)(v3 + 176));
  result = 0;
  if ( v16 == (char *)v3 )
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

// Line 61: range 000000000CF4BB60-000000000CF4BBEC
int __cdecl CPolymorphicCmdReply::SetExtraCmdReply(
        CPolymorphicCmdReply *const this,
        uint16_t uiExtraType,
        CExtraCmdReply *pExtraCmdReply)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_uiExtraType >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_uiExtraType >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->m_uiExtraType);
  }
  this->m_uiExtraType = uiExtraType;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pExtraCmdReply >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_pExtraCmdReply = pExtraCmdReply;
  return 0;
};

// Line 68: range 000000000CF4BBEE-000000000CF4C07B
int __cdecl CPolymorphicCmdReply::BuildPacket(CPolymorphicCmdReply *const this, PolymorphicCmdRepSerial *repSerial)
{
  uint32_t m_uiVersion; // esi
  uint16_t v3; // si
  uint16_t m_ClientType; // si
  uint32_t m_uiEnvSign; // esi
  uint32_t m_uiModuleCheckValue; // esi
  uint16_t m_uiExtraType; // si

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  m_uiVersion = this->m_uiVersion;
  if ( ((unsigned __int8)repSerial & 7) >= *(_BYTE *)(((unsigned __int64)repSerial >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)repSerial >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&repSerial->uiVersion + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)repSerial + 3) & 7) >= *(_BYTE *)((((unsigned __int64)&repSerial->uiVersion + 3) >> 3)
                                                          + 0x7FFF8000) )
  {
    m_uiVersion = 4;
    __asan_report_store_n(repSerial, 4LL);
  }
  repSerial->uiVersion = m_uiVersion;
  if ( (((unsigned __int8)repSerial + 18) & 7) >= *(_BYTE *)(((unsigned __int64)&repSerial->uiExtraLength >> 3)
                                                           + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&repSerial->uiExtraLength >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&repSerial->uiExtraLength + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)repSerial + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&repSerial->uiExtraLength + 1) >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_load_n(&repSerial->uiExtraLength, 2LL);
  }
  v3 = repSerial->uiExtraLength + 20;
  if ( (((unsigned __int8)repSerial + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&repSerial->uiLength >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&repSerial->uiLength >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&repSerial->uiLength + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)repSerial + 5) & 7) >= *(_BYTE *)((((unsigned __int64)&repSerial->uiLength + 1) >> 3)
                                                          + 0x7FFF8000) )
  {
    v3 = 2;
    __asan_report_store_n(&repSerial->uiLength, 2LL);
  }
  repSerial->uiLength = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ClientType >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->m_ClientType >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(&this->m_ClientType);
  }
  m_ClientType = this->m_ClientType;
  if ( (((unsigned __int8)repSerial + 6) & 7) >= *(_BYTE *)(((unsigned __int64)&repSerial->ClientType >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&repSerial->ClientType >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&repSerial->ClientType + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)repSerial + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&repSerial->ClientType + 1) >> 3)
                                                          + 0x7FFF8000) )
  {
    m_ClientType = 2;
    __asan_report_store_n(&repSerial->ClientType, 2LL);
  }
  repSerial->ClientType = m_ClientType;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_uiEnvSign >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_uiEnvSign >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_uiEnvSign);
  }
  m_uiEnvSign = this->m_uiEnvSign;
  if ( (((unsigned __int8)repSerial + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&repSerial->uiEnvSign >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&repSerial->uiEnvSign >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&repSerial->uiEnvSign + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)repSerial + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&repSerial->uiEnvSign + 3) >> 3)
                                                           + 0x7FFF8000) )
  {
    m_uiEnvSign = 4;
    __asan_report_store_n(&repSerial->uiEnvSign, 4LL);
  }
  repSerial->uiEnvSign = m_uiEnvSign;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_uiModuleCheckValue >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_uiModuleCheckValue >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_uiModuleCheckValue);
  }
  m_uiModuleCheckValue = this->m_uiModuleCheckValue;
  if ( (((unsigned __int8)repSerial + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&repSerial->uiModuleCheckValue >> 3)
                                                           + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&repSerial->uiModuleCheckValue >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&repSerial->uiModuleCheckValue + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)repSerial + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&repSerial->uiModuleCheckValue + 3) >> 3)
                                                           + 0x7FFF8000) )
  {
    m_uiModuleCheckValue = 4;
    __asan_report_store_n(&repSerial->uiModuleCheckValue, 4LL);
  }
  repSerial->uiModuleCheckValue = m_uiModuleCheckValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_uiExtraType >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_uiExtraType >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&this->m_uiExtraType);
  }
  m_uiExtraType = this->m_uiExtraType;
  if ( (((unsigned __int8)repSerial + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&repSerial->uiExtraType >> 3)
                                                           + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&repSerial->uiExtraType >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&repSerial->uiExtraType + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)repSerial + 17) & 7) >= *(_BYTE *)((((unsigned __int64)&repSerial->uiExtraType + 1) >> 3)
                                                           + 0x7FFF8000) )
  {
    m_uiExtraType = 2;
    __asan_report_store_n(&repSerial->uiExtraType, 2LL);
  }
  repSerial->uiExtraType = m_uiExtraType;
  return 0;
};

// Line 80: range 000000000CF4C07C-000000000CF4C502
int __cdecl CPolymorphicCmdReply::Deserialize(CPolymorphicCmdReply *const this, BYTE *pCmdBuffer, uint32_t uiLength)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  CExtraCmdReply *v6; // rax
  CExtraCmdReply *m_pExtraCmdReply; // rcx
  CExtraCmdReply *v8; // rax
  unsigned __int64 v9; // rax
  void (__fastcall *v10)(CExtraCmdReply *, BYTE *, _QWORD); // r8
  int result; // eax
  BYTE *pExtraCmdData; // [rsp+28h] [rbp-B8h]
  char v14[176]; // [rsp+30h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 40 5 ds:81";
  *(_QWORD *)(v3 + 16) = CPolymorphicCmdReply::Deserialize;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  CDataSerialize::CDataSerialize((CDataSerialize *const)(v3 + 48), pCmdBuffer, uiLength);
  operator>><unsigned short>((CDataSerialize *)(v3 + 48), &this->m_uiExtraType);
  operator>><unsigned short>((CDataSerialize *)(v3 + 48), &this->m_uiExtraLength);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_uiExtraType >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_uiExtraType >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&this->m_uiExtraType);
  }
  if ( this->m_uiExtraType != 0xFFFE )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_uiExtraLength >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 50) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->m_uiExtraLength >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(&this->m_uiExtraLength);
    }
    pExtraCmdData = (BYTE *)operator new[](this->m_uiExtraLength);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_uiExtraLength >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 50) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->m_uiExtraLength >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(&this->m_uiExtraLength);
    }
    CDataSerialize::PopData((CDataSerialize *const)(v3 + 48), pExtraCmdData, this->m_uiExtraLength);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_uiExtraType >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_uiExtraType >> 3) + 0x7FFF8000) <= 1 )
    {
      __asan_report_load2(&this->m_uiExtraType);
    }
    v6 = CExtraCmdReply::Init(this->m_uiExtraType);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_pExtraCmdReply >> 3) + 0x7FFF8000) )
      v6 = (CExtraCmdReply *)__asan_report_store8();
    this->m_pExtraCmdReply = v6;
    if ( this->m_pExtraCmdReply )
    {
      m_pExtraCmdReply = this->m_pExtraCmdReply;
      v8 = m_pExtraCmdReply;
      if ( *(_BYTE *)(((unsigned __int64)m_pExtraCmdReply >> 3) + 0x7FFF8000) )
        __asan_report_load8(this->m_pExtraCmdReply);
      v9 = (unsigned __int64)(v8->_vptr_CExtraCmdReply + 1);
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v9);
      v10 = *(void (__fastcall **)(CExtraCmdReply *, BYTE *, _QWORD))v9;
      if ( *(_BYTE *)(((unsigned __int64)&this->m_uiExtraLength >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 50) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->m_uiExtraLength >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load2(&this->m_uiExtraLength);
      }
      v10(m_pExtraCmdReply, pExtraCmdData, this->m_uiExtraLength);
    }
    if ( pExtraCmdData )
      operator delete[](pExtraCmdData);
  }
  operator>><unsigned int>((CDataSerialize *)(v3 + 48), &this->m_uiEnvSign);
  operator>><unsigned int>((CDataSerialize *)(v3 + 48), &this->m_uiModuleCheckValue);
  operator>><unsigned short>((CDataSerialize *)(v3 + 48), &this->m_ClientType);
  operator>><unsigned short>((CDataSerialize *)(v3 + 48), &this->m_uiLength);
  operator>><unsigned int>((CDataSerialize *)(v3 + 48), &this->m_uiVersion);
  CDataSerialize::~CDataSerialize((CDataSerialize *const)(v3 + 48));
  result = 0;
  if ( v14 == (char *)v3 )
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
  return result;
};

// Line 110: range 000000000CF4C504-000000000CF4C697
int __cdecl CPolymorphicCmdReply::CheckReplyInfo(CPolymorphicCmdReply *const this, stCBReplyCheckInfo *p_CheckInfo)
{
  uint32_t uiEnvSign; // ecx
  uint32_t uiModuleCheckValue; // ecx

  if ( (((unsigned __int8)p_CheckInfo + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&p_CheckInfo->uiEnvSign >> 3)
                                                            + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&p_CheckInfo->uiEnvSign >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&p_CheckInfo->uiEnvSign + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)p_CheckInfo + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&p_CheckInfo->uiEnvSign + 3) >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load_n(&p_CheckInfo->uiEnvSign, 4LL);
  }
  uiEnvSign = p_CheckInfo->uiEnvSign;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_uiEnvSign >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_uiEnvSign >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_uiEnvSign);
  }
  if ( uiEnvSign != this->m_uiEnvSign )
    return -1;
  if ( (((unsigned __int8)p_CheckInfo + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&p_CheckInfo->uiModuleCheckValue >> 3)
                                                             + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&p_CheckInfo->uiModuleCheckValue >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&p_CheckInfo->uiModuleCheckValue + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)p_CheckInfo + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&p_CheckInfo->uiModuleCheckValue + 3) >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load_n(&p_CheckInfo->uiModuleCheckValue, 4LL);
  }
  uiModuleCheckValue = p_CheckInfo->uiModuleCheckValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_uiModuleCheckValue >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_uiModuleCheckValue >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_uiModuleCheckValue);
  }
  if ( uiModuleCheckValue == this->m_uiModuleCheckValue )
    return 0;
  else
    return -1;
};
