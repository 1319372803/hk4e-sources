// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/intrusive/list_hook.hpp

// Line 84: range 000000000C75A8CE-000000000C75A8E1
void __cdecl boost::intrusive::list_base_hook<boost::intrusive::link_mode<(boost::intrusive::link_mode_type)0>,void,void>::list_base_hook(
        boost::intrusive::list_base_hook<boost::intrusive::link_mode<(boost::intrusive::link_mode_type)0>,void,void> *const this)
{
  ;
};

// Line 84: range 000000000C753888-000000000C7538AB
void __cdecl boost::intrusive::list_base_hook<boost::intrusive::link_mode<(boost::intrusive::link_mode_type)0>,void,void>::~list_base_hook(
        boost::intrusive::list_base_hook<boost::intrusive::link_mode<(boost::intrusive::link_mode_type)0>,void,void> *const this)
{
  boost::intrusive::detail::link_dispatch<(boost::intrusive::link_mode_type)0> v1; // si

  boost::intrusive::detail::destructor_impl<boost::intrusive::generic_hook<(boost::intrusive::algo_types)0,boost::intrusive::list_node_traits<void *>,boost::intrusive::dft_tag,(boost::intrusive::link_mode_type)0,(boost::intrusive::base_hook_type)1>>(
    this,
    v1);
};
