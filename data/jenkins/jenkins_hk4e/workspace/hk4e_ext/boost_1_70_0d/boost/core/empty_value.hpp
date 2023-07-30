// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/core/empty_value.hpp

// Line 47: range 000000000C79D7CE-000000000C79D7F6
boost::empty_::empty_value<std::string,0,false> *__cdecl boost::empty_::empty_value<std::string,0u,false>::operator=(
        boost::empty_::empty_value<std::string,0,false> *const this,
        boost::empty_::empty_value<std::string,0,false> *a2)
{
  std::string::operator=(this, a2);
  return this;
};

// Line 47: range 000000000C7250C4-000000000C7250EC
boost::empty_::empty_value<std::string,0,false> *__cdecl boost::empty_::empty_value<std::string,0u,false>::operator=(
        boost::empty_::empty_value<std::string,0,false> *const this,
        const boost::empty_::empty_value<std::string,0,false> *a2)
{
  std::string::operator=(this, a2);
  return this;
};

// Line 47: range 000000000C795C20-000000000C795C45
void __cdecl boost::empty_::empty_value<std::string,0u,false>::empty_value(
        boost::empty_::empty_value<std::string,0,false> *const this,
        boost::empty_::empty_value<std::string,0,false> *a2)
{
  std::string::basic_string(this, a2);
};

// Line 47: range 000000000C724BCE-000000000C724BE8
void __cdecl boost::empty_::empty_value<std::string,0u,false>::~empty_value(
        boost::empty_::empty_value<std::string,0,false> *const this)
{
  std::string::~string(this);
};

// Line 52: range 000000000C724BB2-000000000C724BCC
void __cdecl boost::empty_::empty_value<std::string,0u,false>::empty_value(
        boost::empty_::empty_value<std::string,0,false> *const this)
{
  std::string::basic_string(this);
};

// Line 76: range 000000000C78177E-000000000C78178B
const std::string *__cdecl boost::empty_::empty_value<std::string,0u,false>::get(
        const boost::empty_::empty_value<std::string,0,false> *const this)
{
  return &this->value_;
};

// Line 80: range 000000000C7433A2-000000000C7433AF
std::string *__cdecl boost::empty_::empty_value<std::string,0u,false>::get(
        boost::empty_::empty_value<std::string,0,false> *const this)
{
  return &this->value_;
};

// Line 90: range 000000000C724A16-000000000C724A30
void __cdecl boost::empty_::empty_value<std::allocator<char>,0u,true>::~empty_value(
        boost::empty_::empty_value<std::allocator<char>,0,true> *const this)
{
  std::allocator<char>::~allocator(this);
};

// Line 96: range 000000000C7249FA-000000000C724A14
void __cdecl boost::empty_::empty_value<std::allocator<char>,0u,true>::empty_value(
        boost::empty_::empty_value<std::allocator<char>,0,true> *const this)
{
  std::allocator<char>::allocator(this);
};

// Line 107: range 000000000C79A994-000000000C79A9C4
void __fastcall boost::empty_::empty_value<std::allocator<char>,0u,true>::empty_value<std::allocator<char>>(
        boost::empty_::empty_value<std::allocator<char>,0,true> *const this,
        std::remove_reference<std::allocator<char> >::type *a2,
        std::allocator<char> *a3,
        std::allocator<char> *a4)
{
  std::allocator<char> *v4; // rax

  v4 = std::forward<std::allocator<char>>(a2);
  std::allocator<char>::allocator(this, v4);
};

// Line 107: range 000000000C7932EA-000000000C793308
void __fastcall boost::empty_::empty_value<std::allocator<void>,0u,true>::empty_value<std::allocator<void> const&>(
        boost::empty_::empty_value<std::allocator<void>,0,true> *const this,
        std::remove_reference<const std::allocator<void>&>::type *a2,
        const std::allocator<void> *a3,
        const std::allocator<void> *a4)
{
  std::forward<std::allocator<void> const&>(a2);
};

// Line 120: range 000000000C789E86-000000000C789E93
const std::allocator<void> *__cdecl boost::empty_::empty_value<std::allocator<void>,0u,true>::get(
        const boost::empty_::empty_value<std::allocator<void>,0,true> *const this)
{
  return this;
};

// Line 124: range 000000000C788BF6-000000000C788C03
boost::beast::http::detail::opt_token_list_policy *__cdecl boost::empty_::empty_value<boost::beast::http::detail::opt_token_list_policy,0u,true>::get(
        boost::empty_::empty_value<boost::beast::http::detail::opt_token_list_policy,0,true> *const this)
{
  return this;
};

// Line 124: range 000000000C807A72-000000000C807A7F
std::allocator<void> *__cdecl boost::empty_::empty_value<std::allocator<void>,0u,true>::get(
        boost::empty_::empty_value<std::allocator<void>,0,true> *const this)
{
  return this;
};

// Line 506: range 000000000C743B1A-000000000C743B27
std::allocator<char> *__cdecl boost::empty_::empty_value<std::allocator<char>,0u,true>::get(
        boost::empty_::empty_value<std::allocator<char>,0,true> *const this)
{
  return this;
};
