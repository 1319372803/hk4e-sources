// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/range/begin.hpp

// Line 42: range 000000000CBA1F20-000000000CBA1F39
boost::range_detail::extract_const_iterator<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,true>::type __cdecl boost::range_detail::range_begin<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const>(
        const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > *c)
{
  return boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>,boost::iterators::incrementable_traversal_tag>::begin(c);
};

// Line 42: range 000000000C7D3CE2-000000000C7D3CFB
boost::range_detail::extract_const_iterator<boost::iterator_range<char const*>,true>::type __cdecl boost::range_detail::range_begin<boost::iterator_range<char const*> const>(
        const boost::iterator_range<char const*> *c)
{
  return boost::iterator_range_detail::iterator_range_base<char const*,boost::iterators::incrementable_traversal_tag>::begin(c);
};

// Line 42: range 000000000C99133F-000000000C991358
boost::range_detail::extract_iterator<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,true>::type __cdecl boost::range_detail::range_begin<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>>(
        boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > *c)
{
  return boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>,boost::iterators::incrementable_traversal_tag>::begin(c);
};

// Line 42: range 000000000CB7FBEA-000000000CB7FC03
boost::range_detail::extract_iterator<std::string,true>::type __cdecl boost::range_detail::range_begin<std::string>(
        std::string *c)
{
  return (boost::range_detail::extract_iterator<std::string,true>::type)std::string::begin(c);
};

// Line 102: range 000000000C8A0DED-000000000C8A0E06
boost::range_detail::extract_iterator<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,true>::type __cdecl boost::range_adl_barrier::begin<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>>(
        boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > *r)
{
  return boost::range_detail::range_begin<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>>(r);
};

// Line 102: range 000000000CB52D00-000000000CB52D19
boost::range_detail::extract_iterator<std::string,true>::type __cdecl boost::range_adl_barrier::begin<std::string>(
        std::string *r)
{
  return boost::range_detail::range_begin<std::string>(r);
};

// Line 114: range 000000000CB93A36-000000000CB93A4F
boost::range_detail::extract_const_iterator<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,true>::type __cdecl boost::range_adl_barrier::begin<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>>(
        const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > *r)
{
  return boost::range_detail::range_begin<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const>(r);
};

// Line 114: range 000000000C7D3CC8-000000000C7D3CE1
boost::range_detail::extract_const_iterator<boost::iterator_range<char const*>,true>::type __cdecl boost::range_adl_barrier::begin<boost::iterator_range<char const*>>(
        const boost::iterator_range<char const*> *r)
{
  return boost::range_detail::range_begin<boost::iterator_range<char const*> const>(r);
};
