// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/numeric/conversion/cast.hpp

// Line 287: range 000000000BF6C6BB-000000000BF6C6D1
__int64 __cdecl boost::numeric_cast<long,int>(int arg)
{
  return boost::numeric::convdetail::non_rounding_converter<boost::numeric::conversion_traits<long,int>,boost::numeric::convdetail::dummy_range_checker<boost::numeric::conversion_traits<long,int>>,boost::numeric::raw_converter<boost::numeric::conversion_traits<long,int>>>::convert(arg);
};
