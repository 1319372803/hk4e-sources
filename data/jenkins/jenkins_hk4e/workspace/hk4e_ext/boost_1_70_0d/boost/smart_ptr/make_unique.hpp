// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/smart_ptr/make_unique.hpp

// Line 62: range 000000000C7430D4-000000000C743107
boost::enable_if_<true,std::unique_ptr<char []> >::type __cdecl boost::make_unique_noinit<char []>(std::size_t size)
{
  unsigned __int64 v1; // rsi
  char *v2; // rdx

  v2 = (char *)operator new[](v1);
  std::unique_ptr<char []>::unique_ptr<char *,std::default_delete<char []>,void,bool>(
    (std::unique_ptr<char []> *const)size,
    v2);
  return (boost::enable_if_<true,std::unique_ptr<char []> >::type)size;
};
