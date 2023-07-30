// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/variant/detail/forced_return.hpp

// Line 42: range 000000000BF40959-000000000BF4097C
bool __cdecl __noreturn boost::detail::variant::forced_return<bool>()
{
  __int64 v0; // rdi

  __asan_handle_no_return(v0);
  __assert_fail(
    "false",
    "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/variant/deta"
    "il/forced_return.hpp",
    0x2Du,
    "T boost::detail::variant::forced_return() [with T = bool]");
};

// Line 42: range 000000000BF40875-000000000BF408A0
boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *__cdecl __noreturn boost::detail::variant::forced_return<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>>(
        boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *retstr)
{
  __asan_handle_no_return(retstr);
  __assert_fail(
    "false",
    "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/variant/deta"
    "il/forced_return.hpp",
    0x2Du,
    "T boost::detail::variant::forced_return() [with T = boost::variant<boost::shared_ptr<void>, boost::signals2::detail:"
    ":foreign_void_shared_ptr>]");
};

// Line 42: range 000000000BF40643-000000000BF40666
void __cdecl __noreturn boost::detail::variant::forced_return<void>()
{
  __int64 v0; // rdi

  __asan_handle_no_return(v0);
  __assert_fail(
    "false",
    "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/variant/deta"
    "il/forced_return.hpp",
    0x2Du,
    "T boost::detail::variant::forced_return() [with T = void]");
};
