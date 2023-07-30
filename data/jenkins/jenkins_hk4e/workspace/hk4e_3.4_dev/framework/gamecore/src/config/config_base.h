// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/config/config_base.h

// Line 26: range 000000000C6372DE-000000000C6375C5
void __cdecl ConfigBase::ConfigBase(ConfigBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigBase = v1;
  common::tools::PTree::PTree(&this->pt);
  std::string::basic_string(&this->region_name);
  std::string::basic_string(&this->log_level_mask);
  if ( *(char *)(((unsigned __int64)&this->is_open_mem_perf >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_open_mem_perf);
  this->is_open_mem_perf = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->output_mem_perf_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->output_mem_perf_interval >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->output_mem_perf_interval);
  }
  this->output_mem_perf_interval = 1800;
  if ( *(_BYTE *)(((unsigned __int64)&this->output_mem_tcmalloc_perf_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->output_mem_tcmalloc_perf_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->output_mem_tcmalloc_perf_interval);
  }
  this->output_mem_tcmalloc_perf_interval = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->tcmalloc_free_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tcmalloc_free_interval >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->tcmalloc_free_interval);
  }
  this->tcmalloc_free_interval = 1800;
  if ( *(char *)(((unsigned __int64)&this->is_output_mem_perf_to_monitor >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_output_mem_perf_to_monitor);
  this->is_output_mem_perf_to_monitor = 0;
  std::vector<std::string>::vector(&this->monitor_black_list_obj_name_vec);
  std::vector<std::string>::vector(&this->monitor_white_list_obj_name_vec);
  if ( *(char *)(((unsigned __int64)&this->is_open_cmd_report >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_open_cmd_report);
  this->is_open_cmd_report = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->output_cmd_report_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->output_cmd_report_interval >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->output_cmd_report_interval);
  }
  this->output_cmd_report_interval = 0;
  if ( *(char *)(((unsigned __int64)&this->is_readlink >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_readlink);
  this->is_readlink = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->svn_version_report_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->svn_version_report_interval >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->svn_version_report_interval);
  }
  this->svn_version_report_interval = 120;
};

// Line 27: range 000000000C6375C6-000000000C637657
void __cdecl ConfigBase::~ConfigBase(ConfigBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigBase = v1;
  std::vector<std::string>::~vector(&this->monitor_white_list_obj_name_vec);
  std::vector<std::string>::~vector(&this->monitor_black_list_obj_name_vec);
  std::string::~string(&this->log_level_mask);
  std::string::~string(&this->region_name);
  common::tools::PTree::~PTree(&this->pt);
};

// Line 27: range 000000000C637658-000000000C637682
void __cdecl ConfigBase::~ConfigBase(ConfigBase *const this)
{
  ConfigBase::~ConfigBase(this);
  operator delete(this, 0xA8uLL);
};

// Line 34: range 000000000C637684-000000000C637695
const std::string *__cdecl ConfigBase::getRegionName[abi:cxx11](ConfigBase *const this)
{
  return &this->region_name;
};

// Line 40: range 0000000014E74AB4-0000000014E74D1F
void __fastcall ConfigBase::onReloadConfig(ConfigBase *const this)
{
  ;
};
