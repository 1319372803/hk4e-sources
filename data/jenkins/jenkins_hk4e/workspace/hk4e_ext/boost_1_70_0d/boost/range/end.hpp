// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/range/end.hpp

// Line 43: range 000000000CBA1F3A-000000000CBA1F53
boost::range_detail::extract_const_iterator<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,true>::type __cdecl boost::range_detail::range_end<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const>(
        const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > *c)
{
  return boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>,boost::iterators::incrementable_traversal_tag>::end(c);
};

// Line 43: range 000000000C990C10-000000000C990C29
boost::range_detail::extract_const_iterator<boost::iterator_range<char const*>,true>::type __cdecl boost::range_detail::range_end<boost::iterator_range<char const*> const>(
        const boost::iterator_range<char const*> *c)
{
  return boost::iterator_range_detail::iterator_range_base<char const*,boost::iterators::incrementable_traversal_tag>::end(c);
};

// Line 43: range 000000000C7D402E-000000000C7D4047
boost::range_detail::extract_iterator<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,true>::type __cdecl boost::range_detail::range_end<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>>(
        boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > *c)
{
  return boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>,boost::iterators::incrementable_traversal_tag>::end(c);
};

// Line 43: range 000000000CB7FC04-000000000CB7FC1D
boost::range_detail::extract_iterator<std::string,true>::type __cdecl boost::range_detail::range_end<std::string>(
        std::string *c)
{
  return (boost::range_detail::extract_iterator<std::string,true>::type)std::string::end(c);
};

// Line 96: range 000000000C7D4014-000000000C7D402D
boost::range_detail::extract_iterator<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,true>::type __cdecl boost::range_adl_barrier::end<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>>(
        boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > *r)
{
  return boost::range_detail::range_end<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>>(r);
};

// Line 96: range 000000000CB52D1A-000000000CB52D33
boost::range_detail::extract_iterator<std::string,true>::type __cdecl boost::range_adl_barrier::end<std::string>(
        std::string *r)
{
  return boost::range_detail::range_end<std::string>(r);
};

// Line 108: range 000000000CB93A50-000000000CB93A69
boost::range_detail::extract_const_iterator<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,true>::type __cdecl boost::range_adl_barrier::end<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>>(
        const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > *r)
{
  return boost::range_detail::range_end<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const>(r);
};

// Line 108: range 000000000C8A0C41-000000000C8A0C5A
boost::range_detail::extract_const_iterator<boost::iterator_range<char const*>,true>::type __cdecl boost::range_adl_barrier::end<boost::iterator_range<char const*>>(
        const boost::iterator_range<char const*> *r)
{
  return boost::range_detail::range_end<boost::iterator_range<char const*> const>(r);
};
