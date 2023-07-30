// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/opentracing-cpp/include/opentracing/value.h

// Line 25: range 000000000C79481C-000000000C794836
void __cdecl opentracing::v3::Value::~Value(opentracing::v3::Value *const this)
{
  opentracing::v3::util::variant<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::~variant(this);
};

// Line 44: range 000000000C7C3016-000000000C7C3041
void __cdecl opentracing::v3::Value::Value<unsigned int,(void *)0>(opentracing::v3::Value *const this, unsigned int t)
{
  unsigned __int64 val; // [rsp+18h] [rbp-8h] BYREF

  val = t;
  opentracing::v3::util::variant<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::variant<unsigned long,opentracing::v3::util::detail::value_traits<unsigned long,bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>,void>(
    this,
    &val);
};

// Line 55: range 000000000C794796-000000000C7947BB
void __cdecl opentracing::v3::Value::Value(opentracing::v3::Value *const this, const std::string *s)
{
  opentracing::v3::util::variant<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::variant<std::string const&,opentracing::v3::util::detail::value_traits<std::string const&,bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>,void>(
    this,
    s);
};

// Line 56: range 000000000C7947BC-000000000C7947EF
void __cdecl opentracing::v3::Value::Value(opentracing::v3::Value *const this, std::string *s)
{
  std::string *v2; // rax

  v2 = std::move<std::string &>(s);
  opentracing::v3::util::variant<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::variant<std::string,opentracing::v3::util::detail::value_traits<std::string,bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>,void>(
    this,
    v2);
};
