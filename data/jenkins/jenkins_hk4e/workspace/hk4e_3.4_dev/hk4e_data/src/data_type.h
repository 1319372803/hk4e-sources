// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/data_type.h

// Line 48: range 000000000C685D40-000000000C685D5A
void __cdecl DbIpConfig::~DbIpConfig(DbIpConfig *const this)
{
  std::string::~string(this);
};

// Line 57: range 000000000CE409B6-000000000CE409E0
void __cdecl DbIpConfig::DbIpConfig(DbIpConfig *const this)
{
  std::string::basic_string(this);
  boost::asio::ip::network_v4::network_v4(&this->ip_net);
};

// Line 57: range 000000000D435424-000000000D435464
void __cdecl DbIpConfig::DbIpConfig(DbIpConfig *const this, DbIpConfig *a2)
{
  std::string::basic_string(this, a2);
  boost::asio::ip::network_v4::network_v4(&this->ip_net, &a2->ip_net);
};

// Line 57: range 000000000D0D2D3E-000000000D0D2D7E
void __cdecl DbIpConfig::DbIpConfig(DbIpConfig *const this, const DbIpConfig *a2)
{
  std::string::basic_string(this, a2);
  boost::asio::ip::network_v4::network_v4(&this->ip_net, &a2->ip_net);
};
