// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/container/flat_set.hpp

// Line 81: range 0000000003935BE0-0000000003935C03
void __cdecl boost::container::flat_set<unsigned int,std::less<unsigned int>,void>::~flat_set(
        boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *const this)
{
  boost::container::dtl::flat_tree<unsigned int,boost::move_detail::identity<unsigned int>,std::less<unsigned int>,void>::Data::~Data(&this->m_data);
};
