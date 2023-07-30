// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/asio/ip/basic_endpoint.hpp

// Line 60: range 000000000BF4C2D4-000000000BF4C2EE
void __cdecl boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>::basic_endpoint(
        boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> *const this)
{
  boost::asio::ip::detail::endpoint::endpoint(&this->impl_);
};

// Line 81: range 000000000BF62BEC-000000000BF62C30
void __cdecl boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>::basic_endpoint(
        boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> *const this,
        const boost::asio::ip::tcp *internet_protocol,
        unsigned __int16 port_num)
{
  int v4; // eax

  v4 = boost::asio::ip::tcp::family(internet_protocol);
  boost::asio::ip::detail::endpoint::endpoint(&this->impl_, v4, port_num);
};

// Line 127: range 000000000BF4C2F0-000000000BF4C319
boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>::protocol_type __cdecl boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>::protocol(
        const boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> *const this)
{
  if ( boost::asio::ip::detail::endpoint::is_v4(&this->impl_) )
    return boost::asio::ip::tcp::v4();
  else
    return boost::asio::ip::tcp::v6();
};

// Line 135: range 000000000BF92E92-000000000BF92EAB
boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>::data_type *__cdecl boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>::data(
        boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> *const this)
{
  return boost::asio::ip::detail::endpoint::data(&this->impl_);
};

// Line 141: range 000000000BF71CFE-000000000BF71D17
const boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>::data_type *__cdecl boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>::data(
        const boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> *const this)
{
  return boost::asio::ip::detail::endpoint::data(&this->impl_);
};

// Line 147: range 000000000BF71D18-000000000BF71D31
std::size_t __cdecl boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>::size(
        const boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> *const this)
{
  return boost::asio::ip::detail::endpoint::size(&this->impl_);
};

// Line 153: range 000000000BF92C6E-000000000BF92C93
void __cdecl boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>::resize(
        boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> *const this,
        std::size_t new_size)
{
  boost::asio::ip::detail::endpoint::resize(&this->impl_, new_size);
};

// Line 159: range 000000000BF8C42A-000000000BF8C443
std::size_t __cdecl boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>::capacity(
        const boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> *const this)
{
  return boost::asio::ip::detail::endpoint::capacity(&this->impl_);
};
