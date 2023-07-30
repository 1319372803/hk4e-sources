// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/detail/service_base.hpp

// Line 20: range 000000000C752EA8-000000000C752EC2
void __cdecl boost::beast::detail::service_id<boost::beast::websocket::detail::service>::service_id(
        boost::beast::detail::service_id<boost::beast::websocket::detail::service> *const this)
{
  boost::asio::execution_context::id::id(this);
};

// Line 20: range 000000000C7FC38A-000000000C7FC3A4
void __cdecl boost::beast::detail::service_id<boost::beast::websocket::detail::service>::~service_id(
        boost::beast::detail::service_id<boost::beast::websocket::detail::service> *const this)
{
  boost::asio::execution_context::id::~id(this);
};
