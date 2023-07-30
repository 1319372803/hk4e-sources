// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/intrusive/detail/uncast.hpp

// Line 46: range 0000000019B6A706-0000000019B6A740
boost::intrusive::detail::uncast_types<const boost::intrusive::list_node<void*>*>::non_const_pointer __fastcall boost::intrusive::detail::uncast<boost::intrusive::list_node<void *> const*>(
        const boost::intrusive::list_node<void*> *const *ptr)
{
  if ( !*(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000) )
    return (boost::intrusive::detail::uncast_types<const boost::intrusive::list_node<void*>*>::non_const_pointer)*ptr;
  __asan_report_load8(ptr);
  return (boost::intrusive::detail::uncast_types<const boost::intrusive::list_node<void*>*>::non_const_pointer)boost::intrusive::detail::uncast<boost::intrusive::rbtree_node<void *> const*>((const boost::intrusive::rbtree_node<void*> *const *)ptr);
};

// Line 46: range 0000000019D015C8-0000000019D01916
boost::intrusive::detail::uncast_types<const boost::intrusive::list_node<void*>*>::non_const_pointer __fastcall boost::intrusive::detail::uncast<boost::intrusive::list_node<void *> const*>(
        const boost::intrusive::list_node<void*> *const *ptr)
{
  if ( !*(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000) )
    return (boost::intrusive::detail::uncast_types<const boost::intrusive::list_node<void*>*>::non_const_pointer)*ptr;
  __asan_report_load8(ptr);
  return (boost::intrusive::detail::uncast_types<const boost::intrusive::list_node<void*>*>::non_const_pointer)boost::intrusive::detail::uncast<boost::intrusive::rbtree_node<void *> const*>((const boost::intrusive::rbtree_node<void*> *const *)ptr);
};
