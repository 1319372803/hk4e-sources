// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/base/include/thread_group.h

// Line 26: range 000000000C63E76C-000000000C63E796
void __cdecl common::tools::ThreadGroup::ThreadGroup(common::tools::ThreadGroup *const this)
{
  std::vector<std::thread>::vector(&this->thread_vec_);
  std::mutex::mutex(&this->thread_mu_);
};

// Line 26: range 000000000C63E798-000000000C63E7B2
void __cdecl common::tools::ThreadGroup::~ThreadGroup(common::tools::ThreadGroup *const this)
{
  std::vector<std::thread>::~vector(&this->thread_vec_);
};
