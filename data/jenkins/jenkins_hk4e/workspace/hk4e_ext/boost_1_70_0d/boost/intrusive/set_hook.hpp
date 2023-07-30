// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/intrusive/set_hook.hpp

// Line 87: range 000000000C75A8E2-000000000C75A8F5
void __cdecl boost::intrusive::set_base_hook<boost::intrusive::link_mode<(boost::intrusive::link_mode_type)0>,void,void,void>::set_base_hook(
        boost::intrusive::set_base_hook<boost::intrusive::link_mode<(boost::intrusive::link_mode_type)0>,void,void,void> *const this)
{
  ;
};

// Line 87: range 000000000C7538AC-000000000C7538CF
void __cdecl boost::intrusive::set_base_hook<boost::intrusive::link_mode<(boost::intrusive::link_mode_type)0>,void,void,void>::~set_base_hook(
        boost::intrusive::set_base_hook<boost::intrusive::link_mode<(boost::intrusive::link_mode_type)0>,void,void,void> *const this)
{
  boost::intrusive::detail::link_dispatch<(boost::intrusive::link_mode_type)0> v1; // si

  boost::intrusive::detail::destructor_impl<boost::intrusive::generic_hook<(boost::intrusive::algo_types)5,boost::intrusive::rbtree_node_traits<void *,false>,boost::intrusive::dft_tag,(boost::intrusive::link_mode_type)0,(boost::intrusive::base_hook_type)3>>(
    this,
    v1);
};
