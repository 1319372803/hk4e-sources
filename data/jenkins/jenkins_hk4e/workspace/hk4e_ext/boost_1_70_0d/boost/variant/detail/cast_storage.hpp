// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/variant/detail/cast_storage.hpp

// Line 28: range 000000000BF43FEB-000000000BF43FF8
boost::shared_ptr<void> *__cdecl boost::detail::variant::cast_storage<boost::shared_ptr<void>>(void *storage)
{
  return (boost::shared_ptr<void> *)storage;
};

// Line 28: range 000000000BF4401C-000000000BF44029
boost::signals2::detail::foreign_void_shared_ptr *__cdecl boost::detail::variant::cast_storage<boost::signals2::detail::foreign_void_shared_ptr>(
        void *storage)
{
  return (boost::signals2::detail::foreign_void_shared_ptr *)storage;
};

// Line 28: range 000000000BF443EE-000000000BF443FB
boost::signals2::detail::foreign_void_weak_ptr *__cdecl boost::detail::variant::cast_storage<boost::signals2::detail::foreign_void_weak_ptr>(
        void *storage)
{
  return (boost::signals2::detail::foreign_void_weak_ptr *)storage;
};

// Line 28: range 000000000BF4438E-000000000BF4439B
boost::weak_ptr<boost::signals2::detail::trackable_pointee> *__cdecl boost::detail::variant::cast_storage<boost::weak_ptr<boost::signals2::detail::trackable_pointee>>(
        void *storage)
{
  return (boost::weak_ptr<boost::signals2::detail::trackable_pointee> *)storage;
};

// Line 28: range 000000000BF443BE-000000000BF443CB
boost::weak_ptr<void> *__cdecl boost::detail::variant::cast_storage<boost::weak_ptr<void>>(void *storage)
{
  return (boost::weak_ptr<void> *)storage;
};

// Line 34: range 000000000BF441DF-000000000BF441EC
const boost::signals2::detail::foreign_void_weak_ptr *__cdecl boost::detail::variant::cast_storage<boost::signals2::detail::foreign_void_weak_ptr>(
        const void *storage)
{
  return (const boost::signals2::detail::foreign_void_weak_ptr *)storage;
};

// Line 34: range 000000000BF4404C-000000000BF44059
const boost::weak_ptr<boost::signals2::detail::trackable_pointee> *__cdecl boost::detail::variant::cast_storage<boost::weak_ptr<boost::signals2::detail::trackable_pointee>>(
        const void *storage)
{
  return (const boost::weak_ptr<boost::signals2::detail::trackable_pointee> *)storage;
};

// Line 34: range 000000000BF44115-000000000BF44122
const boost::weak_ptr<void> *__cdecl boost::detail::variant::cast_storage<boost::weak_ptr<void>>(const void *storage)
{
  return (const boost::weak_ptr<void> *)storage;
};
