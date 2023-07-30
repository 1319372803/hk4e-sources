// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/utils/monitor_report_utils.h

// Line 25: range 00000000158B8CE8-00000000158B8D02
void __cdecl MonitorReportUtils::Context::Context(MonitorReportUtils::Context *const this)
{
  std::map<std::string,std::string>::map(&this->label_map_);
};

// Line 25: range 000000001591BB62-000000001591BB7C
void __cdecl MonitorReportUtils::Context::~Context(MonitorReportUtils::Context *const this)
{
  std::map<std::string,std::string>::~map(&this->label_map_);
};
