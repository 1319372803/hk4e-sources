// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/numeric/conversion/detail/converter.hpp

// Line 208: range 000000000BF7959F-000000000BF795A8
void __cdecl boost::numeric::convdetail::dummy_range_checker<boost::numeric::conversion_traits<long,int>>::validate_range(
        boost::numeric::convdetail::dummy_range_checker<boost::numeric::conversion_traits<long int,int> >::argument_type a1)
{
  ;
};

// Line 252: range 000000000BF742A4-000000000BF742C4
boost::numeric::convdetail::non_rounding_converter<boost::numeric::conversion_traits<long int,int>,boost::numeric::convdetail::dummy_range_checker<boost::numeric::conversion_traits<long int,int> >,boost::numeric::raw_converter<boost::numeric::conversion_traits<long int,int> > >::result_type __cdecl boost::numeric::convdetail::non_rounding_converter<boost::numeric::conversion_traits<long,int>,boost::numeric::convdetail::dummy_range_checker<boost::numeric::conversion_traits<long,int>>,boost::numeric::raw_converter<boost::numeric::conversion_traits<long,int>>>::convert(
        boost::numeric::convdetail::non_rounding_converter<boost::numeric::conversion_traits<long int,int>,boost::numeric::convdetail::dummy_range_checker<boost::numeric::conversion_traits<long int,int> >,boost::numeric::raw_converter<boost::numeric::conversion_traits<long int,int> > >::argument_type s)
{
  boost::numeric::convdetail::dummy_range_checker<boost::numeric::conversion_traits<long,int>>::validate_range(s);
  return boost::numeric::raw_converter<boost::numeric::conversion_traits<long,int>>::low_level_convert(s);
};
