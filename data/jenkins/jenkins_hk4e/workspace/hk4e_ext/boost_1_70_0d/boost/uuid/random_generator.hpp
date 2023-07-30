// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/uuid/random_generator.hpp

// Line 30: range 0000000019B67DFD-0000000019B68865
boost::uuids::uuid *__fastcall boost::uuids::detail::set_uuid_random_vv<boost::uuids::uuid>(boost::uuids::uuid *u)
{
  const boost::throw_function *v1; // rsi
  boost::uuids::uuid *result; // rax
  const boost::exception_detail::error_info_injector<boost::uuids::entropy_error> *v3; // rdi
  char v4; // dl
  char v5; // dl

  result = u;
  v3 = (const boost::exception_detail::error_info_injector<boost::uuids::entropy_error> *)&u->data[8];
  v4 = *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000);
  if ( v4 <= ((unsigned __int8)v3 & 7) && v4 )
  {
    __asan_report_load1(v3);
  }
  else
  {
    result->data[8] = result->data[8] & 0x3F | 0x80;
    v3 = (const boost::exception_detail::error_info_injector<boost::uuids::entropy_error> *)&result->data[6];
    v5 = *(_BYTE *)(((unsigned __int64)&result->data[6] >> 3) + 0x7FFF8000);
    if ( v5 > (((unsigned __int8)result + 6) & 7) || !v5 )
    {
      result->data[6] = result->data[6] & 0xF | 0x40;
      return result;
    }
  }
  __asan_report_load1(v3);
  return (boost::uuids::uuid *)boost::exception_detail::set_info<boost::exception_detail::error_info_injector<boost::uuids::entropy_error>>(
                                 v3,
                                 v1);
};

// Line 85: range 0000000019B6568C-0000000019B6569E
void __fastcall boost::uuids::basic_random_generator<boost::random::mersenne_twister_engine<unsigned int,32ul,624ul,397ul,31ul,2567483615u,11ul,4294967295u,7ul,2636928640u,15ul,4022730752u,18ul,1812433253u>>::self_contained_impl::~self_contained_impl(
        boost::uuids::basic_random_generator<boost::random::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> >::self_contained_impl *const this)
{
  operator delete(this, 0x9E8uLL);
};
