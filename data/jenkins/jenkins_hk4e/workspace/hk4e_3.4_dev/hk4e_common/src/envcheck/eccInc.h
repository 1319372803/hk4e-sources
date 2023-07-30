// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/envcheck/eccInc.h

// Line 181: range 000000000CF49CBA-000000000CF4A277
void __cdecl stCBReplyCheckInfo::stCBReplyCheckInfo(stCBReplyCheckInfo *const this, const stCBReplyCheckInfo *a2)
{
  uint16_t iCmdType; // si
  uint16_t uiCryptAlgorithmType; // si
  int iValidCheckSum; // esi
  uint32_t uiEnvSign; // esi
  uint32_t uiModuleCheckValue; // esi
  INT64 iTaskId; // rsi

  if ( ((unsigned __int8)a2 & 7) >= *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->iCmdType + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 1) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->iCmdType + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(a2, 2LL);
  }
  iCmdType = a2->iCmdType;
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->iCmdType + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 1) & 7) >= *(_BYTE *)((((unsigned __int64)&this->iCmdType + 1) >> 3) + 0x7FFF8000) )
  {
    iCmdType = 2;
    __asan_report_store_n(this, 2LL);
  }
  this->iCmdType = iCmdType;
  if ( (((unsigned __int8)a2 + 2) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->uiCryptAlgorithmType >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->uiCryptAlgorithmType >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->uiCryptAlgorithmType + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 3) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->uiCryptAlgorithmType + 1) >> 3)
                                                   + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->uiCryptAlgorithmType, 2LL);
  }
  uiCryptAlgorithmType = a2->uiCryptAlgorithmType;
  if ( (((unsigned __int8)this + 2) & 7) >= *(_BYTE *)(((unsigned __int64)&this->uiCryptAlgorithmType >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->uiCryptAlgorithmType >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->uiCryptAlgorithmType + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 3) & 7) >= *(_BYTE *)((((unsigned __int64)&this->uiCryptAlgorithmType + 1) >> 3)
                                                     + 0x7FFF8000) )
  {
    uiCryptAlgorithmType = 2;
    __asan_report_store_n(&this->uiCryptAlgorithmType, 2LL);
  }
  this->uiCryptAlgorithmType = uiCryptAlgorithmType;
  if ( (((unsigned __int8)a2 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->iValidCheckSum >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->iValidCheckSum >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->iValidCheckSum + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->iValidCheckSum + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->iValidCheckSum, 4LL);
  }
  iValidCheckSum = a2->iValidCheckSum;
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->iValidCheckSum >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->iValidCheckSum >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->iValidCheckSum + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&this->iValidCheckSum + 3) >> 3) + 0x7FFF8000) )
  {
    iValidCheckSum = 4;
    __asan_report_store_n(&this->iValidCheckSum, 4LL);
  }
  this->iValidCheckSum = iValidCheckSum;
  if ( (((unsigned __int8)a2 + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->uiEnvSign >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->uiEnvSign >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->uiEnvSign + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->uiEnvSign + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->uiEnvSign, 4LL);
  }
  uiEnvSign = a2->uiEnvSign;
  if ( (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->uiEnvSign >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->uiEnvSign >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->uiEnvSign + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->uiEnvSign + 3) >> 3) + 0x7FFF8000) )
  {
    uiEnvSign = 4;
    __asan_report_store_n(&this->uiEnvSign, 4LL);
  }
  this->uiEnvSign = uiEnvSign;
  if ( (((unsigned __int8)a2 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->uiModuleCheckValue >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->uiModuleCheckValue >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->uiModuleCheckValue + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->uiModuleCheckValue + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->uiModuleCheckValue, 4LL);
  }
  uiModuleCheckValue = a2->uiModuleCheckValue;
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->uiModuleCheckValue >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->uiModuleCheckValue >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->uiModuleCheckValue + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&this->uiModuleCheckValue + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    uiModuleCheckValue = 4;
    __asan_report_store_n(&this->uiModuleCheckValue, 4LL);
  }
  this->uiModuleCheckValue = uiModuleCheckValue;
  std::string::basic_string(&this->strKey, &a2->strKey);
  if ( (((unsigned __int8)a2 + 48) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->iTaskId >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->iTaskId >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->iTaskId + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->iTaskId + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->iTaskId, 8LL);
  }
  iTaskId = a2->iTaskId;
  if ( (((unsigned __int8)this + 48) & 7) >= *(_BYTE *)(((unsigned __int64)&this->iTaskId >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->iTaskId >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->iTaskId + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&this->iTaskId + 7) >> 3) + 0x7FFF8000) )
  {
    iTaskId = 8LL;
    __asan_report_store_n(&this->iTaskId, 8LL);
  }
  this->iTaskId = iTaskId;
};

// Line 181: range 000000000CF49C9A-000000000CF49CB8
void __cdecl stCBReplyCheckInfo::~stCBReplyCheckInfo(stCBReplyCheckInfo *const this)
{
  std::string::~string(&this->strKey);
};

// Line 244: range 000000000CF49C7A-000000000CF49C98
void __cdecl stCBReplyCheckInfo::stCBReplyCheckInfo(stCBReplyCheckInfo *const this)
{
  std::string::basic_string(&this->strKey);
};
