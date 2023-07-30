// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/error.hpp

// Line 229: range 000000000C63BD96-000000000C63BDA0
const boost::system::error_category *__cdecl boost::asio::error::get_system_category()
{
  return boost::system::system_category();
};

// Line 231: range 000000000C63BDA1-000000000C63BDCE
boost::system::error_code __cdecl boost::asio::error::make_error_code(boost::asio::error::basic_errors e)
{
  const boost::system::error_category *system_category; // rax
  __int64 v2; // rax
  const boost::system::error_category *cat; // rdx
  boost::system::error_code v4; // [rsp+10h] [rbp-10h] BYREF
  boost::system::error_code result; // 0:rax.5,8:rdx.8

  system_category = boost::asio::error::get_system_category();
  boost::system::error_code::error_code(&v4, e, system_category);
  v2 = *(_QWORD *)&v4.val_;
  cat = v4.cat_;
  result.cat_ = cat;
  result.val_ = v2;
  result.failed_ = BYTE4(v2);
  return result;
};

// Line 324: range 000000000C63BDCF-000000000C63BDFC
boost::system::error_code __cdecl boost::asio::error::make_error_code(boost::asio::error::misc_errors e)
{
  const boost::system::error_category *misc_category; // rax
  __int64 v2; // rax
  const boost::system::error_category *cat; // rdx
  boost::system::error_code v4; // [rsp+10h] [rbp-10h] BYREF
  boost::system::error_code result; // 0:rax.5,8:rdx.8

  misc_category = boost::asio::error::get_misc_category();
  boost::system::error_code::error_code(&v4, e, misc_category);
  v2 = *(_QWORD *)&v4.val_;
  cat = v4.cat_;
  result.cat_ = cat;
  result.val_ = v2;
  result.failed_ = BYTE4(v2);
  return result;
};
