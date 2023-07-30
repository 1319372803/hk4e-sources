// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/std_fenced_block.hpp

// Line 39: range 000000000C6402F6-000000000C640313
void __cdecl boost::asio::detail::std_fenced_block::std_fenced_block(
        boost::asio::detail::std_fenced_block *const this,
        boost::asio::detail::std_fenced_block::half_t a2)
{
  boost::asio::detail::noncopyable::noncopyable(this);
};

// Line 44: range 000000000C640314-000000000C64033C
void __cdecl boost::asio::detail::std_fenced_block::std_fenced_block(
        boost::asio::detail::std_fenced_block *const this,
        boost::asio::detail::std_fenced_block::full_t a2)
{
  boost::asio::detail::noncopyable::noncopyable(this);
  _mm_mfence();
};

// Line 50: range 000000000C64033E-000000000C640363
void __cdecl boost::asio::detail::std_fenced_block::~std_fenced_block(
        boost::asio::detail::std_fenced_block *const this)
{
  _mm_mfence();
  boost::asio::detail::noncopyable::~noncopyable(this);
};
