// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/optional/optional.hpp

// Line 89: range 000000000BEE44D0-000000000BEE44DA
void __cdecl boost::optional_ns::in_place_init_t::in_place_init_t(
        boost::optional_ns::in_place_init_t *const this,
        boost::optional_ns::in_place_init_t::init_tag a2)
{
  ;
};

// Line 97: range 000000000BEE44DC-000000000BEE44E6
void __cdecl boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        boost::optional_ns::in_place_init_if_t *const this,
        boost::optional_ns::in_place_init_if_t::init_tag a2)
{
  ;
};

// Line 140: range 00000000122FCF92-00000000122FCFD6
void __cdecl boost::optional_detail::optional_base<luabind::adl::object>::optional_base(
        boost::optional_detail::optional_base<luabind::adl::object> *const this)
{
  __int64 v1; // rsi

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1);
  this->m_initialized = 0;
};

// Line 140: range 00000000123107B6-00000000123107FA
void __cdecl boost::optional_detail::optional_base<std::string>::optional_base(
        boost::optional_detail::optional_base<std::string > *const this)
{
  __int64 v1; // rsi

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1);
  this->m_initialized = 0;
};

// Line 162: range 00000000122F191A-00000000122F197D
// local variable allocation has failed, the output may be wrong!
void __cdecl boost::optional_detail::optional_base<luabind::adl::object>::optional_base(
        boost::optional_detail::optional_base<luabind::adl::object> *const this,
        boost::optional_detail::init_value_tag a2,
        boost::optional_detail::optional_base<luabind::adl::object>::rval_reference_type val)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, *(_QWORD *)&a2);
  this->m_initialized = 0;
  boost::optional_detail::optional_base<luabind::adl::object>::construct(
    this,
    (boost::optional_detail::optional_base<luabind::adl::object>::rval_reference_type)a2.gap0[0]);
};

// Line 162: range 00000000123102A2-0000000012310305
// local variable allocation has failed, the output may be wrong!
void __cdecl boost::optional_detail::optional_base<std::string>::optional_base(
        boost::optional_detail::optional_base<std::string > *const this,
        boost::optional_detail::init_value_tag a2,
        boost::optional_detail::optional_base<std::string >::rval_reference_type val)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, *(_QWORD *)&a2);
  this->m_initialized = 0;
  boost::optional_detail::optional_base<std::string>::construct(
    this,
    (boost::optional_detail::optional_base<std::string >::rval_reference_type)a2.gap0[0]);
};

// Line 255: range 00000000122C9702-00000000122C971C
void __cdecl boost::optional_detail::optional_base<luabind::adl::object>::~optional_base(
        boost::optional_detail::optional_base<luabind::adl::object> *const this)
{
  boost::optional_detail::optional_base<luabind::adl::object>::destroy(this);
};

// Line 255: range 000000001230E05A-000000001230E074
void __cdecl boost::optional_detail::optional_base<std::string>::~optional_base(
        boost::optional_detail::optional_base<std::string > *const this)
{
  boost::optional_detail::optional_base<std::string>::destroy(this);
};

// Line 396: range 00000000122E5DA0-00000000122E5DE3
bool __cdecl boost::optional_detail::optional_base<luabind::adl::object>::is_initialized(
        const boost::optional_detail::optional_base<luabind::adl::object> *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this);
  return this->m_initialized;
};

// Line 396: range 000000001230FCD6-000000001230FD19
bool __cdecl boost::optional_detail::optional_base<std::string>::is_initialized(
        const boost::optional_detail::optional_base<std::string > *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this);
  return this->m_initialized;
};

// Line 407: range 00000000122FD022-00000000122FD0D1
void __cdecl boost::optional_detail::optional_base<luabind::adl::object>::construct(
        boost::optional_detail::optional_base<luabind::adl::object> *const this,
        boost::optional_detail::optional_base<luabind::adl::object>::rval_reference_type val)
{
  void *v2; // rax
  luabind::adl::object *v3; // rax

  v2 = boost::optional_detail::aligned_storage<luabind::adl::object>::address(&this->m_storage);
  v3 = (luabind::adl::object *)operator new(0x10uLL, v2);
  luabind::adl::object::object(v3, val);
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, val);
  this->m_initialized = 1;
};

// Line 407: range 00000000123107FC-000000001231087E
void __cdecl boost::optional_detail::optional_base<std::string>::construct(
        boost::optional_detail::optional_base<std::string > *const this,
        boost::optional_detail::optional_base<std::string >::rval_reference_type val)
{
  void *v2; // rax
  void *v3; // rax

  v2 = boost::optional_detail::aligned_storage<std::string>::address(&this->m_storage);
  v3 = operator new(0x20uLL, v2);
  std::string::basic_string(v3, val);
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, val);
  this->m_initialized = 1;
};

// Line 754: range 00000000122D8838-00000000122D888C
void __cdecl boost::optional_detail::optional_base<luabind::adl::object>::destroy(
        boost::optional_detail::optional_base<luabind::adl::object> *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this);
  if ( this->m_initialized )
    boost::optional_detail::optional_base<luabind::adl::object>::destroy_impl(this);
};

// Line 754: range 000000001230F07A-000000001230F0CE
void __cdecl boost::optional_detail::optional_base<std::string>::destroy(
        boost::optional_detail::optional_base<std::string > *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this);
  if ( this->m_initialized )
    boost::optional_detail::optional_base<std::string>::destroy_impl(this);
};

// Line 761: range 00000000122E5DE4-00000000122E5E01
boost::optional_detail::optional_base<luabind::adl::object>::reference_type __cdecl boost::optional_detail::optional_base<luabind::adl::object>::get_impl(
        boost::optional_detail::optional_base<luabind::adl::object> *const this)
{
  return boost::optional_detail::aligned_storage<luabind::adl::object>::ref(&this->m_storage);
};

// Line 761: range 000000001230FD1A-000000001230FD37
boost::optional_detail::optional_base<std::string >::reference_type __cdecl boost::optional_detail::optional_base<std::string>::get_impl(
        boost::optional_detail::optional_base<std::string > *const this)
{
  return boost::optional_detail::aligned_storage<std::string>::ref(&this->m_storage);
};

// Line 771: range 00000000122E5D42-00000000122E5D9E
void __cdecl boost::optional_detail::optional_base<luabind::adl::object>::destroy_impl(
        boost::optional_detail::optional_base<luabind::adl::object> *const this)
{
  __int64 v1; // rsi
  luabind::adl::object *v2; // rax

  v2 = boost::optional_detail::aligned_storage<luabind::adl::object>::ref(&this->m_storage);
  luabind::adl::object::~object(v2);
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1);
  this->m_initialized = 0;
};

// Line 771: range 000000001230FC78-000000001230FCD4
void __cdecl boost::optional_detail::optional_base<std::string>::destroy_impl(
        boost::optional_detail::optional_base<std::string > *const this)
{
  __int64 v1; // rsi
  std::string *v2; // rax

  v2 = boost::optional_detail::aligned_storage<std::string>::ref(&this->m_storage);
  std::string::~string(v2);
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1);
  this->m_initialized = 0;
};

// Line 845: range 00000000122B1D36-00000000122B1D50
void __cdecl boost::optional<luabind::adl::object>::~optional(boost::optional<luabind::adl::object> *const this)
{
  boost::optional_detail::optional_base<luabind::adl::object>::~optional_base(this);
};

// Line 845: range 000000001230BF0E-000000001230BF28
void __cdecl boost::optional<std::string>::~optional(boost::optional<std::string > *const this)
{
  boost::optional_detail::optional_base<std::string>::~optional_base(this);
};

// Line 867: range 000000000BF7D51E-000000000BF7D538
void __cdecl boost::optional<int>::optional(boost::optional<int> *const this)
{
  boost::optional_detail::tc_optional_base<int>::tc_optional_base(this);
};

// Line 867: range 00000000122F18FE-00000000122F1918
void __cdecl boost::optional<luabind::adl::object>::optional(boost::optional<luabind::adl::object> *const this)
{
  boost::optional_detail::optional_base<luabind::adl::object>::optional_base(this);
};

// Line 867: range 0000000012310286-00000000123102A0
void __cdecl boost::optional<std::string>::optional(boost::optional<std::string > *const this)
{
  boost::optional_detail::optional_base<std::string>::optional_base(this);
};

// Line 867: range 00000000122FA08A-00000000122FA0A4
void __cdecl boost::optional<unsigned int>::optional(boost::optional<unsigned int> *const this)
{
  boost::optional_detail::tc_optional_base<unsigned int>::tc_optional_base(this);
};

// Line 880: range 00000000122E5D14-00000000122E5D41
void __cdecl boost::optional<luabind::adl::object>::optional(
        boost::optional<luabind::adl::object> *const this,
        boost::optional<luabind::adl::object>::rval_reference_type val)
{
  boost::optional_detail::optional_base<luabind::adl::object>::optional_base(
    this,
    (boost::optional_detail::init_value_tag)val,
    val);
};

// Line 880: range 000000001230FC4A-000000001230FC77
void __cdecl boost::optional<std::string>::optional(
        boost::optional<std::string > *const this,
        boost::optional<std::string >::rval_reference_type val)
{
  boost::optional_detail::optional_base<std::string>::optional_base(
    this,
    (boost::optional_detail::init_value_tag)val,
    val);
};

// Line 880: range 00000000122ECB10-00000000122ECB3D
void __cdecl boost::optional<unsigned int>::optional(
        boost::optional<unsigned int> *const this,
        boost::optional<unsigned int>::rval_reference_type val)
{
  boost::optional_detail::tc_optional_base<unsigned int>::tc_optional_base(
    this,
    (boost::optional_detail::init_value_tag)val,
    val);
};

// Line 1206: range 000000000BF967E6-000000000BF96833
boost::optional<int>::reference_const_type __cdecl boost::optional<int>::get(const boost::optional<int> *const this)
{
  if ( !boost::optional_detail::tc_optional_base<int>::is_initialized(this) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "this->is_initialized()",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/optional/optional.hpp",
      0x4B6u,
      "boost::optional<T>::reference_const_type boost::optional<T>::get() const [with T = int; boost::optional<T>::refere"
      "nce_const_type = const int&]");
  }
  return boost::optional_detail::tc_optional_base<int>::get_impl(this);
};

// Line 1207: range 00000000122D88AC-00000000122D88F9
boost::optional<luabind::adl::object>::reference_type __cdecl boost::optional<luabind::adl::object>::get(
        boost::optional<luabind::adl::object> *const this)
{
  if ( !boost::optional_detail::optional_base<luabind::adl::object>::is_initialized(this) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "this->is_initialized()",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/optional/optional.hpp",
      0x4B7u,
      "boost::optional<T>::reference_type boost::optional<T>::get() [with T = luabind::adl::object; boost::optional<T>::r"
      "eference_type = luabind::adl::object&]");
  }
  return boost::optional_detail::optional_base<luabind::adl::object>::get_impl(this);
};

// Line 1207: range 000000001230F0EE-000000001230F13B
boost::optional<std::string >::reference_type __cdecl boost::optional<std::string>::get(
        boost::optional<std::string > *const this)
{
  if ( !boost::optional_detail::optional_base<std::string>::is_initialized(this) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "this->is_initialized()",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/optional/optional.hpp",
      0x4B7u,
      "boost::optional<T>::reference_type boost::optional<T>::get() [with T = std::__cxx11::basic_string<char>; boost::op"
      "tional<T>::reference_type = std::__cxx11::basic_string<char>&]");
  }
  return boost::optional_detail::optional_base<std::string>::get_impl(this);
};

// Line 1207: range 00000000122DCA4A-00000000122DCA97
boost::optional<unsigned int>::reference_type __cdecl boost::optional<unsigned int>::get(
        boost::optional<unsigned int> *const this)
{
  if ( !boost::optional_detail::tc_optional_base<unsigned int>::is_initialized(this) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "this->is_initialized()",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/optional/optional.hpp",
      0x4B7u,
      "boost::optional<T>::reference_type boost::optional<T>::get() [with T = unsigned int; boost::optional<T>::reference"
      "_type = unsigned int&]");
  }
  return boost::optional_detail::tc_optional_base<unsigned int>::get_impl(this);
};

// Line 1224: range 00000000122C971E-00000000122C9737
boost::optional<luabind::adl::object>::reference_type __cdecl boost::optional<luabind::adl::object>::operator*(
        boost::optional<luabind::adl::object> *const this)
{
  return boost::optional<luabind::adl::object>::get(this);
};

// Line 1224: range 000000001230E076-000000001230E08F
boost::optional<std::string >::reference_type __cdecl boost::optional<std::string>::operator*(
        boost::optional<std::string > *const this)
{
  return boost::optional<std::string>::get(this);
};

// Line 1224: range 00000000122CB1A8-00000000122CB1C1
boost::optional<unsigned int>::reference_type __cdecl boost::optional<unsigned int>::operator*(
        boost::optional<unsigned int> *const this)
{
  return boost::optional<unsigned int>::get(this);
};

// Line 1446: range 00000000122D888E-00000000122D88AA
bool __cdecl boost::optional<luabind::adl::object>::operator!(const boost::optional<luabind::adl::object> *const this)
{
  return !boost::optional_detail::optional_base<luabind::adl::object>::is_initialized(this);
};

// Line 1446: range 000000001230F0D0-000000001230F0EC
bool __cdecl boost::optional<std::string>::operator!(const boost::optional<std::string > *const this)
{
  return !boost::optional_detail::optional_base<std::string>::is_initialized(this);
};

// Line 1446: range 00000000122DCA2C-00000000122DCA48
bool __cdecl boost::optional<unsigned int>::operator!(const boost::optional<unsigned int> *const this)
{
  return !boost::optional_detail::tc_optional_base<unsigned int>::is_initialized(this);
};
