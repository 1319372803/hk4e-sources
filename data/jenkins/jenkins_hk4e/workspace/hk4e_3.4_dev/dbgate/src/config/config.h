// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dbgate/src/config/config.h

// Line 22: range 000000000C5F0E2A-000000000C5F1156
void __cdecl Config::Config(Config *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  bool v4; // dl
  __int64 v5; // rsi
  bool v6; // dl
  __int64 v7; // rsi
  bool v8; // dl
  __int64 v9; // rsi
  bool v10; // dl
  __int64 v11; // rsi
  bool v12; // dl
  __int64 v13; // rsi
  bool v14; // dl

  ConfigBase::ConfigBase(this);
  v2 = (int (**)(...))(&`vtable for'Config + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->xml_config_version, v1);
  }
  this->xml_config_version = 0;
  v3 = ((_BYTE)this - 84) & 7;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_dev_sdk_account_ >> 3) + 0x7FFF8000) != 0
    && (char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_dev_sdk_account_ >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store1(&this->is_dev_sdk_account_, v3, v4);
  this->is_dev_sdk_account_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_register_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_register_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_register_, v3);
  }
  this->max_register_ = 0;
  v5 = ((_BYTE)this - 76) & 7;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_check_login_black_ip_ >> 3) + 0x7FFF8000) != 0
    && (char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_check_login_black_ip_ >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store1(&this->is_check_login_black_ip_, v5, v6);
  this->is_check_login_black_ip_ = 1;
  v7 = ((_BYTE)this - 75) & 7;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_check_register_black_ip >> 3) + 0x7FFF8000) != 0
    && (char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_check_register_black_ip >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store1(&this->is_check_register_black_ip, v7, v8);
  this->is_check_register_black_ip = 1;
  v9 = ((_BYTE)this - 74) & 7;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_check_uncompress_valid >> 3) + 0x7FFF8000) != 0
     && (char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_check_uncompress_valid >> 3) + 0x7FFF8000);
  if ( v10 )
    __asan_report_store1(&this->is_check_uncompress_valid, v9, v10);
  this->is_check_uncompress_valid = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->login_rsp_proto_max_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->login_rsp_proto_max_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->login_rsp_proto_max_size_, v9);
  }
  this->login_rsp_proto_max_size_ = 614400;
  v11 = ((_BYTE)this - 68) & 7;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_judge_user_db_delete_ >> 3) + 0x7FFF8000) != 0
     && (char)v11 >= *(_BYTE *)(((unsigned __int64)&this->is_judge_user_db_delete_ >> 3) + 0x7FFF8000);
  if ( v12 )
    __asan_report_store1(&this->is_judge_user_db_delete_, v11, v12);
  this->is_judge_user_db_delete_ = 0;
  v13 = ((_BYTE)this - 67) & 7;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_login_rsp_split_ >> 3) + 0x7FFF8000) != 0
     && (char)v13 >= *(_BYTE *)(((unsigned __int64)&this->is_login_rsp_split_ >> 3) + 0x7FFF8000);
  if ( v14 )
    __asan_report_store1(&this->is_login_rsp_split_, v13, v14);
  this->is_login_rsp_split_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->login_rsp_split_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->login_rsp_split_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->login_rsp_split_size_, v13);
  }
  this->login_rsp_split_size_ = 614400;
  DbConfigMgr::DbConfigMgr(&this->db_config_mgr);
};

// Line 23: range 000000000C5F1158-000000000C5F11B7
void __cdecl Config::~Config(Config *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'Config + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBase = v2;
  DbConfigMgr::~DbConfigMgr(&this->db_config_mgr);
  ConfigBase::~ConfigBase(this);
};

// Line 23: range 000000000C5F11B8-000000000C5F11E2
void __cdecl Config::~Config(Config *const this)
{
  Config::~Config(this);
  operator delete(this, 0xC30uLL);
};

// Line 30: range 000000000C5F11E4-000000000C5F1236
bool __cdecl Config::isDevSdkAccount(const Config *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_dev_sdk_account_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_dev_sdk_account_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_dev_sdk_account_);
  }
  return this->is_dev_sdk_account_;
};

// Line 35: range 000000000C5F1238-000000000C5F128A
bool __cdecl Config::isCheckLoginBlackIp(const Config *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_check_login_black_ip_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_check_login_black_ip_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_check_login_black_ip_);
  }
  return this->is_check_login_black_ip_;
};

// Line 37: range 000000000C5F128C-000000000C5F12DE
bool __cdecl Config::isCheckRegisterBlackIp(const Config *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_check_register_black_ip >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 75) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_check_register_black_ip >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_check_register_black_ip);
  }
  return this->is_check_register_black_ip;
};

// Line 39: range 000000000C5F12E0-000000000C5F1332
bool __cdecl Config::isCheckUncompressValid(const Config *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_check_uncompress_valid >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 74) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_check_uncompress_valid >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_check_uncompress_valid);
  }
  return this->is_check_uncompress_valid;
};
