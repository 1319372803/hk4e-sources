// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/variant/detail/initializer.hpp

// Line 115: range 000000000BF23492-000000000BF234D6
int __cdecl boost::detail::variant::make_initializer_node::apply<boost::mpl::pair<boost::detail::variant::initializer_root,mpl_::int_<0>>,boost::mpl::l_iter<boost::mpl::list2<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>>>::initializer_node::initialize(
        void *dest,
        boost::detail::variant::make_initializer_node::apply<boost::mpl::pair<boost::detail::variant::initializer_root,mpl_::int_<0> >,boost::mpl::l_iter<boost::mpl::list2<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> > >::initializer_node::param2_T operand)
{
  boost::shared_ptr<void> *v2; // rax

  v2 = (boost::shared_ptr<void> *)operator new(0x10uLL, dest);
  boost::shared_ptr<void>::shared_ptr(v2, operand);
  return 0;
};

// Line 115: range 000000000BF4A6AB-000000000BF4A71A
int __cdecl boost::detail::variant::make_initializer_node::apply<boost::mpl::pair<boost::detail::variant::make_initializer_node::apply<boost::mpl::pair<boost::detail::variant::initializer_root,mpl_::int_<0>>,boost::mpl::l_iter<boost::mpl::list2<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>>>::initializer_node,mpl_::int_<1>>,boost::mpl::l_iter<boost::mpl::list1<boost::signals2::detail::foreign_void_shared_ptr>>>::initializer_node::initialize(
        void *dest,
        boost::detail::variant::make_initializer_node::apply<boost::mpl::pair<boost::detail::variant::make_initializer_node::apply<boost::mpl::pair<boost::detail::variant::initializer_root,mpl_::int_<0> >,boost::mpl::l_iter<boost::mpl::list2<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> > >::initializer_node,mpl_::int_<1> >,boost::mpl::l_iter<boost::mpl::list1<boost::signals2::detail::foreign_void_shared_ptr> > >::initializer_node::param2_T operand)
{
  boost::signals2::detail::foreign_void_shared_ptr *v2; // rax

  v2 = (boost::signals2::detail::foreign_void_shared_ptr *)operator new(8uLL, dest);
  boost::signals2::detail::foreign_void_shared_ptr::foreign_void_shared_ptr(v2, operand);
  return 1;
};
