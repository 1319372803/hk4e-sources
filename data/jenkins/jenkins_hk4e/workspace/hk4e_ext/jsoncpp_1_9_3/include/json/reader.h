// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/jsoncpp_1_9_3/include/json/reader.h

// Line 37: range 000000000C643936-000000000C643984
void __cdecl Json::Reader::~Reader(Json::Reader *const this)
{
  std::string::~string(&this->commentsBefore_);
  std::string::~string(&this->document_);
  std::deque<Json::Reader::ErrorInfo>::~deque(&this->errors_);
  std::stack<Json::Value *>::~stack(&this->nodes_);
};

// Line 183: range 000000000CAED88A-000000000CAED8A8
void __cdecl Json::Reader::ErrorInfo::~ErrorInfo(Json::Reader::ErrorInfo *const this)
{
  std::string::~string(&this->message_);
};
