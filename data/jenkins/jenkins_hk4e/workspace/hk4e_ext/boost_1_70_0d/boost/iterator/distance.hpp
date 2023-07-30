// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/iterator/distance.hpp

// Line 36: range 000000000C8A0C5B-000000000C8A0C70
boost::iterators::iterator_difference<char const*>::type __cdecl boost::iterators::detail::distance_impl<char const*>(
        const char *first,
        const char *last,
        boost::iterators::random_access_traversal_tag a3)
{
  return last - first;
};

// Line 49: range 000000000C7D3CA3-000000000C7D3CC7
boost::iterators::iterator_difference<char const*>::type __cdecl boost::iterators::distance_adl_barrier::distance<char const*>(
        const char *first,
        const char *last)
{
  return boost::iterators::detail::distance_impl<char const*>(
           first,
           last,
           (boost::iterators::random_access_traversal_tag)last);
};
