// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/range/distance.hpp

// Line 30: range 000000000C7D3C69-000000000C7D3CA2
boost::iterators::iterator_difference<char const*>::type __cdecl boost::range_distance_adl_barrier::distance<boost::iterator_range<char const*>>(
        const boost::iterator_range<char const*> *r)
{
  const char *v1; // rbx
  const char *v2; // rax

  v1 = boost::range_adl_barrier::end<boost::iterator_range<char const*>>(r);
  v2 = boost::range_adl_barrier::begin<boost::iterator_range<char const*>>(r);
  return boost::iterators::distance_adl_barrier::distance<char const*>(v2, v1);
};
