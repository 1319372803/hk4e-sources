// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/custom_data_type.h

// Line 30: range 000000000CE39382-000000000CE393E3
void __cdecl data::JsonFormatConfigBase::~JsonFormatConfigBase(data::JsonFormatConfigBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'data::JsonFormatConfigBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_JsonFormatConfigBase = v1;
  std::string::~string(&this->ori_str);
  std::map<std::string,std::string>::~map(&this->data_map);
};

// Line 30: range 000000000CE393E4-000000000CE3940E
void __cdecl data::JsonFormatConfigBase::~JsonFormatConfigBase(data::JsonFormatConfigBase *const this)
{
  data::JsonFormatConfigBase::~JsonFormatConfigBase(this);
  operator delete(this, 0x58uLL);
};

// Line 62: range 000000000CE39410-000000000CE3945D
void __cdecl data::JsonMapConfig::~JsonMapConfig(data::JsonMapConfig *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'data::JsonMapConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_JsonFormatConfigBase = v1;
  data::JsonFormatConfigBase::~JsonFormatConfigBase(this);
};

// Line 62: range 000000000CE3945E-000000000CE39488
void __cdecl data::JsonMapConfig::~JsonMapConfig(data::JsonMapConfig *const this)
{
  data::JsonMapConfig::~JsonMapConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 75: range 000000000CE3948A-000000000CE394F7
void __cdecl data::StopServerConfig::~StopServerConfig(data::StopServerConfig *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'data::StopServerConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_JsonFormatConfigBase = v1;
  std::string::~string(&this->url);
  std::string::~string(&this->msg);
  data::JsonFormatConfigBase::~JsonFormatConfigBase(this);
};

// Line 75: range 000000000CE394F8-000000000CE39522
void __cdecl data::StopServerConfig::~StopServerConfig(data::StopServerConfig *const this)
{
  data::StopServerConfig::~StopServerConfig(this);
  operator delete(this, 0xA0uLL);
};

// Line 96: range 000000000CE39524-000000000CE39571
void __cdecl data::StopRegisterConfig::~StopRegisterConfig(data::StopRegisterConfig *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'data::StopRegisterConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_JsonFormatConfigBase = v1;
  data::JsonFormatConfigBase::~JsonFormatConfigBase(this);
};

// Line 96: range 000000000CE39572-000000000CE3959C
void __cdecl data::StopRegisterConfig::~StopRegisterConfig(data::StopRegisterConfig *const this)
{
  data::StopRegisterConfig::~StopRegisterConfig(this);
  operator delete(this, 0x68uLL);
};

// Line 116: range 000000000CE3959E-000000000CE3960B
void __cdecl data::ForceUpdateConfig::~ForceUpdateConfig(data::ForceUpdateConfig *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'data::ForceUpdateConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_JsonFormatConfigBase = v1;
  std::string::~string(&this->url);
  std::string::~string(&this->msg);
  data::JsonFormatConfigBase::~JsonFormatConfigBase(this);
};

// Line 116: range 000000000CE3960C-000000000CE39636
void __cdecl data::ForceUpdateConfig::~ForceUpdateConfig(data::ForceUpdateConfig *const this)
{
  data::ForceUpdateConfig::~ForceUpdateConfig(this);
  operator delete(this, 0x98uLL);
};
