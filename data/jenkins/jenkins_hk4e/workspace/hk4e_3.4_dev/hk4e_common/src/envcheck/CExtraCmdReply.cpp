// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/envcheck/CExtraCmdReply.cpp

// Line 5: range 000000000CF4C6A8-000000000CF4C6E9
void __cdecl CExtraCmdReply::CExtraCmdReply(CExtraCmdReply *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CExtraCmdReply + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_CExtraCmdReply = v1;
};

// Line 10: range 000000000CF4C6EA-000000000CF4C72B
void __cdecl CExtraCmdReply::~CExtraCmdReply(CExtraCmdReply *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CExtraCmdReply + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_CExtraCmdReply = v1;
};

// Line 15: range 000000000CF4C72C-000000000CF4C744
int __cdecl CExtraCmdReply::Serialize(CExtraCmdReply *const this, BYTE **SerialCmd, uint16_t uiCmdLength)
{
  return 0;
};

// Line 19: range 000000000CF4C746-000000000CF4C75B
int __cdecl CExtraCmdReply::Deserialize(CExtraCmdReply *const this, BYTE *pCmdBuffer, uint32_t uiLength)
{
  return 0;
};

// Line 24: range 000000000CF4C75C-000000000CF4C769
CExtraCmdReply *__cdecl CExtraCmdReply::Init(uint32_t m_uiExtraType)
{
  return 0LL;
};
