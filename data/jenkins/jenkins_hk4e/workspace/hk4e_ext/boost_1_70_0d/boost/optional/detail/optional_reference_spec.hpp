// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/optional/detail/optional_reference_spec.hpp

// Line 126: range 000000000054CB1C-000000000054CB56
void __cdecl boost::optional<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>> &>::optional(
        boost::optional<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >&> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ptr_ = 0LL;
};

// Line 126: range 000000000072B82A-000000000072B864
void __cdecl boost::optional<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>> const&>::optional(
        boost::optional<const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >&> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ptr_ = 0LL;
};

// Line 139: range 000000000054CB58-000000000054CBA3
void __cdecl boost::optional<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>> &>::optional<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>(
        boost::optional<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >&> *const this,
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *rhs,
        boost::enable_if_c<true,bool>::type a3)
{
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v3; // rax

  v3 = boost::addressof<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>(rhs);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v3 = (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)__asan_report_store8();
  this->ptr_ = v3;
};

// Line 139: range 000000000072B866-000000000072B8B1
void __cdecl boost::optional<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>> const&>::optional<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>(
        boost::optional<const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >&> *const this,
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *rhs,
        boost::enable_if_c<true,bool>::type a3)
{
  const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v3; // rax

  v3 = boost::addressof<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>(rhs);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v3 = (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)__asan_report_store8();
  this->ptr_ = v3;
};

// Line 149: range 00000000005F6D14-00000000005F6D9A
boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *__cdecl boost::optional<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>> &>::get(
        const boost::optional<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >&> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( !this->ptr_ )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "ptr_",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/optional/detail/optiona"
      "l_reference_spec.hpp",
      0x95u,
      "T& boost::optional<T&>::get() const [with T = boost::property_tree::basic_ptree<std::__cxx11::basic_string<char>, "
      "std::__cxx11::basic_string<char> >]");
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->ptr_;
};

// Line 149: range 000000000068BD4C-000000000068BDD2
const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *__cdecl boost::optional<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>> const&>::get(
        const boost::optional<const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >&> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( !this->ptr_ )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "ptr_",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/optional/detail/optiona"
      "l_reference_spec.hpp",
      0x95u,
      "T& boost::optional<T&>::get() const [with T = const boost::property_tree::basic_ptree<std::__cxx11::basic_string<c"
      "har>, std::__cxx11::basic_string<char> >]");
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->ptr_;
};

// Line 153: range 00000000005F7078-00000000005F70FE
boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *__cdecl boost::optional<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>> &>::operator*(
        const boost::optional<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >&> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( !this->ptr_ )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "ptr_",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/optional/detail/optiona"
      "l_reference_spec.hpp",
      0x99u,
      "T& boost::optional<T&>::operator*() const [with T = boost::property_tree::basic_ptree<std::__cxx11::basic_string<c"
      "har>, std::__cxx11::basic_string<char> >]");
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->ptr_;
};

// Line 156: range 000000000054CBA4-000000000054CBDF
bool __cdecl boost::optional<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>> &>::operator!(
        const boost::optional<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >&> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->ptr_ == 0LL;
};

// Line 156: range 000000000072B8B2-000000000072B8ED
bool __cdecl boost::optional<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>> const&>::operator!(
        const boost::optional<const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >&> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->ptr_ == 0LL;
};
