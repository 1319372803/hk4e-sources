// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/variant/detail/apply_visitor_unary.hpp

// Line 65: range 000000000BF09C00-000000000BF09C2C
boost::signals2::detail::expired_weak_ptr_visitor::result_type __cdecl boost::apply_visitor<boost::signals2::detail::expired_weak_ptr_visitor,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> const&>(
        const boost::signals2::detail::expired_weak_ptr_visitor *visitor,
        const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> *visitable)
{
  return boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::apply_visitor<boost::signals2::detail::expired_weak_ptr_visitor const>(
           visitable,
           visitor);
};

// Line 65: range 000000000BF09B64-000000000BF09BFF
boost::signals2::detail::lock_weak_ptr_visitor::result_type *__cdecl boost::apply_visitor<boost::signals2::detail::lock_weak_ptr_visitor,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> const&>(
        boost::signals2::detail::lock_weak_ptr_visitor::result_type *retstr,
        const boost::signals2::detail::lock_weak_ptr_visitor *visitor,
        const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> *visitable)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    visitable = (const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> *)24;
    __asan_report_store_n(retstr, 24LL);
  }
  boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::apply_visitor<boost::signals2::detail::lock_weak_ptr_visitor const>(
    retstr,
    visitable,
    visitor);
  return retstr;
};
