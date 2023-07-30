// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/SensitiveWordExcelConfig.h

// Line 18: range 000000000DE153AE-000000000DE1540B
void __cdecl SensitiveWordExcelConfigMgr::SensitiveWordExcelConfigMgr(SensitiveWordExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::SensitiveWordExcelConfigMgrBase::SensitiveWordExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'SensitiveWordExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_SensitiveWordExcelConfigMgrBase = v1;
  std::vector<std::string>::vector(&this->sensitive_word_vec_);
};

// Line 18: range 000000000D81122E-000000000D81128B
void __cdecl SensitiveWordExcelConfigMgr::~SensitiveWordExcelConfigMgr(SensitiveWordExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SensitiveWordExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_SensitiveWordExcelConfigMgrBase = v1;
  std::vector<std::string>::~vector(&this->sensitive_word_vec_);
  data::SensitiveWordExcelConfigMgrBase::~SensitiveWordExcelConfigMgrBase(this);
};

// Line 24: range 000000000DF36924-000000000DF36935
const std::vector<std::string> *__cdecl SensitiveWordExcelConfigMgr::getSensitiveWordVec[abi:cxx11](
        SensitiveWordExcelConfigMgr *const this)
{
  return &this->sensitive_word_vec_;
};
