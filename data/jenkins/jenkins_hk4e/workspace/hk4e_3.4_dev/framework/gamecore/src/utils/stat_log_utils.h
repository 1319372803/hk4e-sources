// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/utils/stat_log_utils.h

// Line 93: range 00000000158B89D6-00000000158B8A00
void __cdecl StatLogUtils::Context::Context(StatLogUtils::Context *const this)
{
  std::vector<unsigned int>::vector(&this->action_id_vec_);
  std::string::basic_string(&this->trans_no_);
};

// Line 93: range 000000001591BBAC-000000001591BBD6
void __cdecl StatLogUtils::Context::~Context(StatLogUtils::Context *const this)
{
  std::string::~string(&this->trans_no_);
  std::vector<unsigned int>::~vector(&this->action_id_vec_);
};
