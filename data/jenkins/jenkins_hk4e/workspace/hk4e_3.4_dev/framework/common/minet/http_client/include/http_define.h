// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/http_client/include/http_define.h

// Line 48: range 000000000C7A55FC-000000000C7A5738
void __cdecl common::minet::http_client::HttpRequest::HttpRequest(common::minet::http_client::HttpRequest *const this)
{
  std::string::basic_string(this);
  std::string::basic_string(&this->port);
  std::string::basic_string(&this->uri);
  std::map<std::string,std::string>::map(&this->head_map);
  std::map<std::string,std::string>::map(&this->param_map);
  std::string::basic_string(&this->body);
  if ( *(_BYTE *)(((unsigned __int64)&this->method >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->method >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->method);
  }
  this->method = HTTP_GET;
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->version);
  }
  this->version = HTTP_VER_1_0;
  if ( *(char *)(((unsigned __int64)&this->is_ssl >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ssl);
  this->is_ssl = 0;
};

// Line 48: range 000000000C7A573A-000000000C7A57A8
void __cdecl common::minet::http_client::HttpRequest::~HttpRequest(common::minet::http_client::HttpRequest *const this)
{
  std::string::~string(&this->body);
  std::map<std::string,std::string>::~map(&this->param_map);
  std::map<std::string,std::string>::~map(&this->head_map);
  std::string::~string(&this->uri);
  std::string::~string(&this->port);
  std::string::~string(this);
};
