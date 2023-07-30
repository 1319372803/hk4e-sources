// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/type_index/type_index_facade.hpp

// Line 154: range 000000000BFA95A0-000000000BFA95C4
bool __cdecl boost::typeindex::operator==<boost::typeindex::stl_type_index,std::type_info>(
        const boost::typeindex::type_index_facade<boost::typeindex::stl_type_index,std::type_info> *lhs,
        const boost::typeindex::type_index_facade<boost::typeindex::stl_type_index,std::type_info> *rhs)
{
  return boost::typeindex::stl_type_index::equal(
           (const boost::typeindex::stl_type_index *const)lhs,
           (const boost::typeindex::stl_type_index *)rhs);
};

// Line 187: range 000000000BFA67A6-000000000BFA67DD
bool __cdecl boost::typeindex::operator==<boost::typeindex::stl_type_index,std::type_info>(
        const std::type_info *lhs,
        const boost::typeindex::type_index_facade<boost::typeindex::stl_type_index,std::type_info> *rhs)
{
  boost::typeindex::stl_type_index v3; // [rsp+18h] [rbp-8h] BYREF

  boost::typeindex::stl_type_index::stl_type_index(&v3, lhs);
  return boost::typeindex::operator==<boost::typeindex::stl_type_index,std::type_info>(
           (const boost::typeindex::type_index_facade<boost::typeindex::stl_type_index,std::type_info> *)&v3,
           rhs);
};
