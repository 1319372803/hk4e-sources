// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/detail/clamp.hpp

// Line 34: range 0000000019B6A6FA-0000000019B6A705
std::size_t __fastcall boost::beast::detail::clamp<unsigned long>(unsigned __int64 x, std::size_t limit)
{
  std::size_t result; // rax

  result = limit;
  if ( x < limit )
    return x;
  return result;
};
