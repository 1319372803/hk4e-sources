// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/milog/include/milog_context.h

// Line 37: range 000000001559BC9E-000000001559BCB8
void __cdecl common::milog::MilogContext::MilogContext(common::milog::MilogContext *const this)
{
  std::vector<char const*>::vector(&this->str_vec_);
};

// Line 38: range 000000001559BCBA-000000001559BCD4
void __cdecl common::milog::MilogContext::~MilogContext(common::milog::MilogContext *const this)
{
  std::vector<char const*>::~vector(&this->str_vec_);
};
