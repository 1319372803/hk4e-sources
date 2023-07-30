// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/type_traits/aligned_storage.hpp

// Line 49: range 000000000BF35414-000000000BF35421
void *__cdecl boost::detail::aligned_storage::aligned_storage_imp<160ul,8ul>::address(
        const boost::detail::aligned_storage::aligned_storage_imp<160,8> *const this)
{
  return (void *)this;
};

// Line 49: range 000000000BF2C95A-000000000BF2C967
void *__cdecl boost::detail::aligned_storage::aligned_storage_imp<16ul,8ul>::address(
        const boost::detail::aligned_storage::aligned_storage_imp<16,8> *const this)
{
  return (void *)this;
};

// Line 108: range 000000000BF2CCC0-000000000BF2CCCA
void __cdecl boost::aligned_storage<160ul,8ul>::aligned_storage(boost::aligned_storage<160,8> *const this)
{
  ;
};

// Line 108: range 000000000BF16B62-000000000BF16B6C
void __cdecl boost::aligned_storage<16ul,8ul>::aligned_storage(boost::aligned_storage<16,8> *const this)
{
  ;
};

// Line 112: range 000000000BF17118-000000000BF17122
void __cdecl boost::aligned_storage<160ul,8ul>::~aligned_storage(boost::aligned_storage<160,8> *const this)
{
  ;
};

// Line 112: range 000000000BF16B6E-000000000BF16B78
void __cdecl boost::aligned_storage<16ul,8ul>::~aligned_storage(boost::aligned_storage<16,8> *const this)
{
  ;
};

// Line 118: range 000000000BF2CC9A-000000000BF2CCB3
void *__cdecl boost::aligned_storage<160ul,8ul>::address(boost::aligned_storage<160,8> *const this)
{
  return boost::detail::aligned_storage::aligned_storage_imp<160ul,8ul>::address(this);
};

// Line 118: range 000000000BF23478-000000000BF23491
void *__cdecl boost::aligned_storage<16ul,8ul>::address(boost::aligned_storage<16,8> *const this)
{
  return boost::detail::aligned_storage::aligned_storage_imp<16ul,8ul>::address(this);
};

// Line 123: range 000000000BF2CABA-000000000BF2CAD3
const void *__cdecl boost::aligned_storage<16ul,8ul>::address(const boost::aligned_storage<16,8> *const this)
{
  return boost::detail::aligned_storage::aligned_storage_imp<16ul,8ul>::address(this);
};
