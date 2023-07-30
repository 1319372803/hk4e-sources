// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_mtp_blacklist_config_mgr.h

// Line 52: range 000000000CF1A460-000000000CF1A4B1
void __cdecl data::MtpWhitelistMatcher::MtpWhitelistMatcher(data::MtpWhitelistMatcher *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'data::MtpWhitelistMatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MtpWhitelistMatcher = v1;
  std::vector<std::string>::vector(&this->init_pattern_vec_);
};

// Line 53: range 000000000CF1A4B2-000000000CF1A503
void __cdecl data::MtpWhitelistMatcher::~MtpWhitelistMatcher(data::MtpWhitelistMatcher *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'data::MtpWhitelistMatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MtpWhitelistMatcher = v1;
  std::vector<std::string>::~vector(&this->init_pattern_vec_);
};

// Line 53: range 000000000CF1A504-000000000CF1A52E
void __cdecl data::MtpWhitelistMatcher::~MtpWhitelistMatcher(data::MtpWhitelistMatcher *const this)
{
  data::MtpWhitelistMatcher::~MtpWhitelistMatcher(this);
  operator delete(this, 0x20uLL);
};

// Line 56: range 000000000CE04B42-000000000CE04B79
void __cdecl data::MtpWhitelistMatcher::addInitPatternVec(
        data::MtpWhitelistMatcher *const this,
        std::string *p_pattern_str)
{
  std::vector<std::string>::value_type *v2; // rax

  v2 = std::move<std::string &>(p_pattern_str);
  std::vector<std::string>::push_back(&this->init_pattern_vec_, v2);
};

// Line 57: range 000000000CE04B7A-000000000CE04B88
int32_t __cdecl data::MtpWhitelistMatcher::init(data::MtpWhitelistMatcher *const this)
{
  return 0;
};
