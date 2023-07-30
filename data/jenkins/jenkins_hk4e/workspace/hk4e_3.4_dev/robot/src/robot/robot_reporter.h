// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/robot/robot_reporter.h

// Line 27: range 00000000004E36E6-00000000004E3724
void __cdecl PropertyOnce::~PropertyOnce(PropertyOnce *const this)
{
  std::string::~string(&this->value_);
  std::string::~string(&this->name_);
  std::string::~string(&this->time_);
};

// Line 41: range 00000000004E3726-00000000004E3740
void __cdecl PropertyUp::~PropertyUp(PropertyUp *const this)
{
  std::string::~string(&this->name_);
};

// Line 55: range 00000000007EA24A-00000000007EA2A4
void __cdecl Case::~Case(Case *const this)
{
  std::map<std::string,unsigned int>::~map(&this->up_index_map_);
  std::vector<PropertyUp>::~vector(&this->properties_up_vec_);
  std::vector<PropertyOnce>::~vector(&this->properties_once_vec_);
  std::string::~string(&this->name_);
  std::string::~string(&this->time_);
};

// Line 78: range 000000000050C57E-000000000050C5A8
void __cdecl RobotReporter::~RobotReporter(RobotReporter *const this)
{
  std::string::~string(&this->file_path_);
  std::map<std::string,Case>::~map(&this->case_vec_);
};

// Line 106: range 000000000050F69A-000000000050F6D2
void __cdecl ReporterReqRspHelper::ReporterReqRspHelper(ReporterReqRspHelper *const this)
{
  MultiThreadSingleton<ReporterReqRspHelper>::MultiThreadSingleton((MultiThreadSingleton<ReporterReqRspHelper> *const)this);
  common::tools::SafeMap<unsigned long,19u>::SafeMap(&this->record_send_ms_map_);
  common::tools::SafeMap<std::vector<unsigned long>,19u>::SafeMap(&this->record_use_ms_map_);
};

// Line 106: range 000000000050F6D4-000000000050F700
void __cdecl ReporterReqRspHelper::~ReporterReqRspHelper(ReporterReqRspHelper *const this)
{
  common::tools::SafeMap<std::vector<unsigned long>,19u>::~SafeMap(&this->record_use_ms_map_);
  common::tools::SafeMap<unsigned long,19u>::~SafeMap(&this->record_send_ms_map_);
};

// Line 133: range 000000000050FD0E-000000000050FD46
void __cdecl ReporterNZeroHelper::ReporterNZeroHelper(ReporterNZeroHelper *const this)
{
  MultiThreadSingleton<ReporterNZeroHelper>::MultiThreadSingleton((MultiThreadSingleton<ReporterNZeroHelper> *const)this);
  common::tools::SafeMap<unsigned int,19u>::SafeMap(&this->cmd_id_cnt_map_);
  common::tools::SafeMap<std::string,19u>::SafeMap(&this->cmd_id_retcode_map_);
};

// Line 133: range 000000000050FD48-000000000050FD74
void __cdecl ReporterNZeroHelper::~ReporterNZeroHelper(ReporterNZeroHelper *const this)
{
  common::tools::SafeMap<std::string,19u>::~SafeMap(&this->cmd_id_retcode_map_);
  common::tools::SafeMap<unsigned int,19u>::~SafeMap(&this->cmd_id_cnt_map_);
};

// Line 584: range 000000000071A9F4-000000000071AAC2
void __cdecl PropertyOnce::PropertyOnce(PropertyOnce *const this, PropertyOnce *a2)
{
  ReporterTypes types; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  types = a2->types_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->types_ = types;
  std::string::basic_string(&this->time_, &a2->time_);
  std::string::basic_string(&this->name_, &a2->name_);
  std::string::basic_string(&this->value_, &a2->value_);
};

// Line 764: range 000000000071B3A2-000000000071B43C
void __cdecl PropertyUp::PropertyUp(PropertyUp *const this, PropertyUp *a2)
{
  uint32_t value; // ecx

  std::string::basic_string(&this->name_, &a2->name_);
  if ( *(_BYTE *)(((unsigned __int64)&a2->value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value_);
  }
  value = a2->value_;
  if ( *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value_);
  }
  this->value_ = value;
};
