// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/include/word_filter.h

// Line 45: range 000000000D80BBFE-000000000D80BC28
void __cdecl common::tools::WordFilter::WordFilter(common::tools::WordFilter *const this)
{
  std::set<std::string>::set(&this->word_set_);
  std::unordered_map<std::string,std::vector<std::string>>::unordered_map(&this->word_vec_map_);
};

// Line 46: range 000000000DF36378-000000000DF363A2
void __cdecl common::tools::WordFilter::~WordFilter(common::tools::WordFilter *const this)
{
  std::unordered_map<std::string,std::vector<std::string>>::~unordered_map(&this->word_vec_map_);
  std::set<std::string>::~set(&this->word_set_);
};
