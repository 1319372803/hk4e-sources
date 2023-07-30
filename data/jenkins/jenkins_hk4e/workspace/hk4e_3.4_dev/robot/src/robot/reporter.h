// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/robot/reporter.h

// Line 13: range 0000000000724E2E-0000000000724E71
Property *__cdecl Property::operator=(Property *const this, const Property *a2)
{
  std::string::operator=(&this->name, &a2->name);
  std::string::operator=(&this->value, &a2->value);
  return this;
};

// Line 13: range 0000000000683452-0000000000683492
void __cdecl Property::Property(Property *const this, Property *a2)
{
  std::string::basic_string(&this->name, &a2->name);
  std::string::basic_string(&this->value, &a2->value);
};

// Line 13: range 00000000004B60DA-00000000004B613D
void __cdecl Property::Property(Property *const this, const Property *a2)
{
  std::string::basic_string(&this->name, &a2->name);
  std::string::basic_string(&this->value, &a2->value);
};

// Line 13: range 00000000004B5BF0-00000000004B5C1A
void __cdecl Property::~Property(Property *const this)
{
  std::string::~string(&this->value);
  std::string::~string(&this->name);
};

// Line 20: range 00000000004B51D8-00000000004B5267
void __cdecl Property::Property(Property *const this, std::string *p_name, std::string *p_value)
{
  std::string::basic_string(&this->name);
  std::string::basic_string(&this->value);
  std::string::operator=(&this->name, p_name);
  std::string::operator=(&this->value, p_value);
};

// Line 26: range 00000000004B5284-00000000004B536B
boost::property_tree::ptree *__cdecl Property::getPtree[abi:cxx11](
        boost::property_tree::ptree *retstr,
        const Property *const this)
{
  boost::property_tree::id_translator<std::string > v2; // cl
  boost::property_tree::id_translator<std::string > v3; // cl
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > > path; // [rsp+10h] [rbp-40h] BYREF

  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(retstr);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.name",
    46,
    v2);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    retstr,
    &path,
    &this->name);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.value",
    46,
    v3);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    retstr,
    &path,
    &this->value);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  return retstr;
};

// Line 35: range 00000000004B5D18-00000000004B5D5B
Failure *__cdecl Failure::operator=(Failure *const this, Failure *a2)
{
  std::string::operator=(&this->stackTrack, &a2->stackTrack);
  std::string::operator=(&this->message, &a2->message);
  return this;
};

// Line 35: range 00000000004B95A2-00000000004B95E5
Failure *__cdecl Failure::operator=(Failure *const this, const Failure *a2)
{
  std::string::operator=(&this->stackTrack, &a2->stackTrack);
  std::string::operator=(&this->message, &a2->message);
  return this;
};

// Line 35: range 00000000008DBDDC-00000000008DBE1C
void __cdecl Failure::Failure(Failure *const this, Failure *a2)
{
  std::string::basic_string(&this->stackTrack, &a2->stackTrack);
  std::string::basic_string(&this->message, &a2->message);
};

// Line 35: range 00000000004B7AD4-00000000004B7B37
void __cdecl Failure::Failure(Failure *const this, const Failure *a2)
{
  std::string::basic_string(&this->stackTrack, &a2->stackTrack);
  std::string::basic_string(&this->message, &a2->message);
};

// Line 35: range 00000000004B561A-00000000004B5644
void __cdecl Failure::~Failure(Failure *const this)
{
  std::string::~string(&this->message);
  std::string::~string(&this->stackTrack);
};

// Line 41: range 00000000004B536C-00000000004B5396
void __cdecl Failure::Failure(Failure *const this)
{
  std::string::basic_string(&this->stackTrack);
  std::string::basic_string(&this->message);
};

// Line 42: range 00000000004B5398-00000000004B5427
void __cdecl Failure::Failure(Failure *const this, std::string *p_stackTrack, std::string *p_message)
{
  std::string::basic_string(&this->stackTrack);
  std::string::basic_string(&this->message);
  std::string::operator=(&this->stackTrack, p_stackTrack);
  std::string::operator=(&this->message, p_message);
};

// Line 48: range 00000000004B5454-00000000004B55C4
boost::property_tree::ptree *__cdecl Failure::getPtree[abi:cxx11](
        boost::property_tree::ptree *retstr,
        const Failure *const this)
{
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > __y; // [rsp+10h] [rbp-90h] BYREF
  std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > value; // [rsp+40h] [rbp-60h] BYREF

  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(retstr);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(
    &__y,
    &this->stackTrack);
  std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>::pair<char const(&)[12],boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>,true>(
    &value,
    (const char (*)[12])"stack-trace",
    &__y);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::push_back(retstr, &value);
  std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>::~pair(&value);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&__y);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(&__y, &this->message);
  std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>::pair<char const(&)[8],boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>,true>(
    &value,
    (const char (*)[8])"message",
    &__y);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::push_back(retstr, &value);
  std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>::~pair(&value);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&__y);
  return retstr;
};

// Line 59: range 00000000004BC430-00000000004BC75B
TestCase *__cdecl TestCase::operator=(TestCase *const this, TestCase *a2)
{
  int id; // ecx
  float time; // xmm0_4
  int asserts; // ecx
  float duration; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = id;
  std::string::operator=(&this->name, &a2->name);
  std::string::operator=(&this->fullname, &a2->fullname);
  std::string::operator=(&this->result, &a2->result);
  if ( *(_BYTE *)(((unsigned __int64)&a2->time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->time);
  }
  time = a2->time;
  if ( *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time);
  }
  this->time = time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->asserts >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->asserts >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->asserts);
  }
  asserts = a2->asserts;
  if ( *(_BYTE *)(((unsigned __int64)&this->asserts >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->asserts >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->asserts);
  }
  this->asserts = asserts;
  std::string::operator=(&this->startTime, &a2->startTime);
  std::string::operator=(&this->endTime, &a2->endTime);
  if ( *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->duration);
  }
  duration = a2->duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration);
  }
  this->duration = duration;
  std::string::operator=(&this->runState, &a2->runState);
  std::string::operator=(&this->className, &a2->className);
  std::string::operator=(&this->methodName, &a2->methodName);
  std::vector<Property>::operator=(&this->properties, &a2->properties);
  Failure::operator=(&this->failure, &a2->failure);
  return this;
};

// Line 59: range 0000000000725356-0000000000725681
TestCase *__cdecl TestCase::operator=(TestCase *const this, const TestCase *a2)
{
  int id; // ecx
  float time; // xmm0_4
  int asserts; // ecx
  float duration; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = id;
  std::string::operator=(&this->name, &a2->name);
  std::string::operator=(&this->fullname, &a2->fullname);
  std::string::operator=(&this->result, &a2->result);
  if ( *(_BYTE *)(((unsigned __int64)&a2->time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->time);
  }
  time = a2->time;
  if ( *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time);
  }
  this->time = time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->asserts >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->asserts >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->asserts);
  }
  asserts = a2->asserts;
  if ( *(_BYTE *)(((unsigned __int64)&this->asserts >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->asserts >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->asserts);
  }
  this->asserts = asserts;
  std::string::operator=(&this->startTime, &a2->startTime);
  std::string::operator=(&this->endTime, &a2->endTime);
  if ( *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->duration);
  }
  duration = a2->duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration);
  }
  this->duration = duration;
  std::string::operator=(&this->runState, &a2->runState);
  std::string::operator=(&this->className, &a2->className);
  std::string::operator=(&this->methodName, &a2->methodName);
  std::vector<Property>::operator=(&this->properties, &a2->properties);
  Failure::operator=(&this->failure, &a2->failure);
  return this;
};

// Line 59: range 00000000008DBE1E-00000000008DC146
void __cdecl TestCase::TestCase(TestCase *const this, TestCase *a2)
{
  int id; // ecx
  float time; // xmm0_4
  int asserts; // ecx
  float duration; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = id;
  std::string::basic_string(&this->name, &a2->name);
  std::string::basic_string(&this->fullname, &a2->fullname);
  std::string::basic_string(&this->result, &a2->result);
  if ( *(_BYTE *)(((unsigned __int64)&a2->time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->time);
  }
  time = a2->time;
  if ( *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time);
  }
  this->time = time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->asserts >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->asserts >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->asserts);
  }
  asserts = a2->asserts;
  if ( *(_BYTE *)(((unsigned __int64)&this->asserts >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->asserts >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->asserts);
  }
  this->asserts = asserts;
  std::string::basic_string(&this->startTime, &a2->startTime);
  std::string::basic_string(&this->endTime, &a2->endTime);
  if ( *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->duration);
  }
  duration = a2->duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration);
  }
  this->duration = duration;
  std::string::basic_string(&this->runState, &a2->runState);
  std::string::basic_string(&this->className, &a2->className);
  std::string::basic_string(&this->methodName, &a2->methodName);
  std::vector<Property>::vector(&this->properties, &a2->properties);
  Failure::Failure(&this->failure, &a2->failure);
};

// Line 59: range 00000000004B7B38-00000000004B7F3C
void __cdecl TestCase::TestCase(TestCase *const this, const TestCase *a2)
{
  int id; // ecx
  float time; // xmm0_4
  int asserts; // ecx
  float duration; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = id;
  std::string::basic_string(&this->name, &a2->name);
  std::string::basic_string(&this->fullname, &a2->fullname);
  std::string::basic_string(&this->result, &a2->result);
  if ( *(_BYTE *)(((unsigned __int64)&a2->time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->time);
  }
  time = a2->time;
  if ( *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time);
  }
  this->time = time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->asserts >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->asserts >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->asserts);
  }
  asserts = a2->asserts;
  if ( *(_BYTE *)(((unsigned __int64)&this->asserts >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->asserts >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->asserts);
  }
  this->asserts = asserts;
  std::string::basic_string(&this->startTime, &a2->startTime);
  std::string::basic_string(&this->endTime, &a2->endTime);
  if ( *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->duration);
  }
  duration = a2->duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration);
  }
  this->duration = duration;
  std::string::basic_string(&this->runState, &a2->runState);
  std::string::basic_string(&this->className, &a2->className);
  std::string::basic_string(&this->methodName, &a2->methodName);
  std::vector<Property>::vector(&this->properties, &a2->properties);
  Failure::Failure(&this->failure, &a2->failure);
};

// Line 59: range 00000000004B7F3E-00000000004B7FF8
void __cdecl TestCase::~TestCase(TestCase *const this)
{
  Failure::~Failure(&this->failure);
  std::vector<Property>::~vector(&this->properties);
  std::string::~string(&this->methodName);
  std::string::~string(&this->className);
  std::string::~string(&this->runState);
  std::string::~string(&this->endTime);
  std::string::~string(&this->startTime);
  std::string::~string(&this->result);
  std::string::~string(&this->fullname);
  std::string::~string(&this->name);
};

// Line 77: range 00000000004B5646-00000000004B5700
void __cdecl TestCase::TestCase(TestCase *const this)
{
  std::string::basic_string(&this->name);
  std::string::basic_string(&this->fullname);
  std::string::basic_string(&this->result);
  std::string::basic_string(&this->startTime);
  std::string::basic_string(&this->endTime);
  std::string::basic_string(&this->runState);
  std::string::basic_string(&this->className);
  std::string::basic_string(&this->methodName);
  std::vector<Property>::vector(&this->properties);
  Failure::Failure(&this->failure);
};

// Line 97: range 00000000004B5702-00000000004B5BEF
void __cdecl TestCase::TestCase(TestCase *const this, int id, std::string *p_name, std::string *p_fullname)
{
  std::string *v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::string::size_type v7; // rax
  std::string *v8; // rax
  std::string __str; // [rsp+20h] [rbp-C0h] BYREF
  std::string v12; // [rsp+40h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+60h] [rbp-80h] BYREF

  v4 = (std::string *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = (std::string *)v5;
  }
  v4->_M_dataplus._M_p = (std::string::pointer)1102416563;
  v4->_M_string_length = (std::string::size_type)"1 32 32 15 startTimeStr:99";
  v4->_anon_0._M_allocated_capacity = (std::string::size_type)TestCase::TestCase;
  v6 = (unsigned __int64)v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450888) = -202116109;
  std::string::basic_string(&this->name);
  std::string::basic_string(&this->fullname);
  std::string::basic_string(&this->result);
  std::string::basic_string(&this->startTime);
  std::string::basic_string(&this->endTime);
  std::string::basic_string(&this->runState);
  std::string::basic_string(&this->className);
  std::string::basic_string(&this->methodName);
  std::vector<Property>::vector(&this->properties);
  Failure::Failure(&this->failure);
  common::tools::TimeUtils::getNowStr[abi:cxx11](v4 + 1);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = id;
  std::string::operator=(&this->name, p_name);
  std::string::operator=(&this->fullname, p_fullname);
  std::string::operator=(&this->result, &this->result);
  v7 = std::string::find(v4 + 1, " ", 0LL);
  v8 = std::string::erase(v4 + 1, 0LL, v7 + 1);
  std::string::operator=(&this->startTime, v8);
  if ( *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time);
  }
  this->time = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->asserts >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->asserts >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->asserts);
  }
  this->asserts = 0;
  std::string::operator=(&this->runState, "Runnable");
  std::operator+<char>(&__str, p_name, " className");
  std::string::operator=(&this->className, &__str);
  std::string::~string(&__str);
  std::operator+<char>(&v12, p_name, " methodName");
  std::string::operator=(&this->methodName, &v12);
  std::string::~string(&v12);
  std::string::~string(v4 + 1);
  if ( v13 == (char *)v4 )
  {
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v4->_M_dataplus._M_p = (std::string::pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 113: range 00000000004B5C1C-00000000004B5D16
void __cdecl TestCase::addProperty(TestCase *const this, std::string *p_name, std::string *p_value)
{
  std::string v3; // [rsp+20h] [rbp-90h] BYREF
  std::string v4; // [rsp+40h] [rbp-70h] BYREF
  Property __x; // [rsp+60h] [rbp-50h] BYREF

  std::string::basic_string(&v4, p_value);
  std::string::basic_string(&v3, p_name);
  Property::Property(&__x, &v3, &v4);
  std::vector<Property>::push_back(&this->properties, &__x);
  Property::~Property(&__x);
  std::string::~string(&v3);
  std::string::~string(&v4);
};

// Line 118: range 00000000004B5D5C-00000000004B5E45
void __cdecl TestCase::setFailure(TestCase *const this, std::string *p_stackTrack, std::string *p_message)
{
  std::string v3; // [rsp+20h] [rbp-90h] BYREF
  std::string v4; // [rsp+40h] [rbp-70h] BYREF
  Failure v5; // [rsp+60h] [rbp-50h] BYREF

  std::string::basic_string(&v4, p_message);
  std::string::basic_string(&v3, p_stackTrack);
  Failure::Failure(&v5, &v3, &v4);
  Failure::operator=(&this->failure, &v5);
  Failure::~Failure(&v5);
  std::string::~string(&v3);
  std::string::~string(&v4);
};

// Line 123: range 00000000004B5E46-00000000004B60D8
void __cdecl TestCase::endCase(TestCase *const this, std::string *p_result)
{
  std::string *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::string::size_type v5; // rax
  std::string *v6; // rax
  float v7; // xmm0_4
  time_t start; // [rsp+10h] [rbp-B0h]
  time_t end; // [rsp+18h] [rbp-A8h]
  std::string time_str; // [rsp+20h] [rbp-A0h] BYREF
  char v11[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::string *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::string *)v3;
  }
  v2->_M_dataplus._M_p = (std::string::pointer)1102416563;
  v2->_M_string_length = (std::string::size_type)"1 32 32 14 endTimeStr:125";
  v2->_anon_0._M_allocated_capacity = (std::string::size_type)TestCase::endCase;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  common::tools::TimeUtils::getNowStr[abi:cxx11](v2 + 1);
  v5 = std::string::find(v2 + 1, " ", 0LL);
  v6 = std::string::erase(v2 + 1, 0LL, v5 + 1);
  std::string::operator=(&this->endTime, v6);
  std::operator+<char>(&time_str, "2000-10-10 ", &this->startTime);
  start = common::tools::TimeUtils::getTimeByStr(&time_str);
  std::string::~string(&time_str);
  std::operator+<char>(&time_str, "2000-10-10 ", &this->endTime);
  end = common::tools::TimeUtils::getTimeByStr(&time_str);
  std::string::~string(&time_str);
  v7 = difftime(end, start);
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration);
  }
  this->duration = v7;
  std::string::operator=(&this->result, p_result);
  std::string::~string(v2 + 1);
  if ( v11 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_dataplus._M_p = (std::string::pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 136: range 00000000004B613E-00000000004B6A0F
boost::property_tree::ptree *__cdecl TestCase::getPtree[abi:cxx11](
        boost::property_tree::ptree *retstr,
        const TestCase *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  boost::property_tree::id_translator<std::string > v5; // cl
  boost::property_tree::id_translator<std::string > v6; // cl
  boost::property_tree::id_translator<std::string > v7; // cl
  boost::property_tree::id_translator<std::string > v8; // cl
  boost::property_tree::id_translator<std::string > v9; // cl
  boost::property_tree::id_translator<std::string > v10; // cl
  boost::property_tree::id_translator<std::string > v11; // cl
  boost::property_tree::id_translator<std::string > v12; // cl
  boost::property_tree::id_translator<std::string > v13; // cl
  boost::property_tree::id_translator<std::string > v14; // cl
  boost::property_tree::id_translator<std::string > v15; // cl
  boost::property_tree::id_translator<std::string > v16; // cl
  boost::property_tree::id_translator<std::string > v17; // cl
  const Property *v18; // rax
  boost::property_tree::id_translator<std::string > v19; // cl
  boost::property_tree::id_translator<std::string > v20; // cl
  std::vector<Property>::const_iterator __for_begin; // [rsp+18h] [rbp-188h] BYREF
  std::vector<Property>::const_iterator __for_end; // [rsp+20h] [rbp-180h] BYREF
  const std::vector<Property> *__for_range; // [rsp+28h] [rbp-178h]
  boost::property_tree::ptree value; // [rsp+30h] [rbp-170h] BYREF
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > > path; // [rsp+60h] [rbp-140h] BYREF
  char v27[272]; // [rsp+90h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 40 17 propertiesPtr:152 128 64 5 p:153";
  *(_QWORD *)(v2 + 16) = TestCase::getPtree[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862726] = -202116109;
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(retstr);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.id",
    46,
    v5);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<int>(retstr, &path, &this->id);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.name",
    46,
    v6);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    retstr,
    &path,
    &this->name);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.fullname",
    46,
    v7);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    retstr,
    &path,
    &this->fullname);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.result",
    46,
    v8);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    retstr,
    &path,
    &this->result);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.time",
    46,
    v9);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<float>(
    retstr,
    &path,
    &this->time);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.asserts",
    46,
    v10);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<int>(
    retstr,
    &path,
    &this->asserts);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.start-time",
    46,
    v11);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    retstr,
    &path,
    &this->startTime);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.end-time",
    46,
    v12);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    retstr,
    &path,
    &this->endTime);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.duration",
    46,
    v13);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<float>(
    retstr,
    &path,
    &this->duration);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.runstate",
    46,
    v14);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    retstr,
    &path,
    &this->runState);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.classname",
    46,
    v15);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    retstr,
    &path,
    &this->className);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.methodname",
    46,
    v16);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    retstr,
    &path,
    &this->methodName);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree((boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 48));
  __for_range = &this->properties;
  __for_begin._M_current = std::vector<Property>::begin(&this->properties)._M_current;
  __for_end._M_current = std::vector<Property>::end(&this->properties)._M_current;
  while ( __gnu_cxx::operator!=<Property const*,std::vector<Property>>(&__for_begin, &__for_end) )
  {
    v18 = __gnu_cxx::__normal_iterator<Property const*,std::vector<Property>>::operator*(&__for_begin);
    Property::Property((Property *const)(v2 + 128), v18);
    Property::getPtree[abi:cxx11](&value, (const Property *const)(v2 + 128));
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
      &path,
      "property",
      46,
      v19);
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::add_child(
      (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 48),
      &path,
      &value);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&value);
    Property::~Property((Property *const)(v2 + 128));
    __gnu_cxx::__normal_iterator<Property const*,std::vector<Property>>::operator++(&__for_begin);
  }
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "properties",
    46,
    v17);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::add_child(
    retstr,
    &path,
    (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::self_type *)(v2 + 48));
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  Failure::getPtree[abi:cxx11](&value, &this->failure);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "failure",
    46,
    v20);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::add_child(retstr, &path, &value);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&value);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree((boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 48));
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return retstr;
};

// Line 164: range 00000000004BA7F4-00000000004BAE85
TestSuite *__cdecl TestSuite::operator=(TestSuite *const this, TestSuite *a2)
{
  int id; // ecx
  int testcaseCount; // ecx
  float time; // xmm0_4
  int total; // ecx
  int passed; // ecx
  int failed; // ecx
  int inconclusive; // ecx
  int skipped; // ecx
  int asserts; // ecx
  float duration; // xmm0_4

  std::string::operator=(&this->type, &a2->type);
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id);
  }
  this->id = id;
  std::string::operator=(&this->name, &a2->name);
  std::string::operator=(&this->fullname, &a2->fullname);
  if ( *(_BYTE *)(((unsigned __int64)&a2->testcaseCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->testcaseCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->testcaseCount);
  }
  testcaseCount = a2->testcaseCount;
  if ( *(_BYTE *)(((unsigned __int64)&this->testcaseCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->testcaseCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->testcaseCount);
  }
  this->testcaseCount = testcaseCount;
  std::string::operator=(&this->result, &a2->result);
  if ( *(_BYTE *)(((unsigned __int64)&a2->time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->time);
  }
  time = a2->time;
  if ( *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time);
  }
  this->time = time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->total >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->total >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->total);
  }
  total = a2->total;
  if ( *(_BYTE *)(((unsigned __int64)&this->total >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->total);
  }
  this->total = total;
  if ( *(_BYTE *)(((unsigned __int64)&a2->passed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->passed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->passed);
  }
  passed = a2->passed;
  if ( *(_BYTE *)(((unsigned __int64)&this->passed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->passed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->passed);
  }
  this->passed = passed;
  if ( *(_BYTE *)(((unsigned __int64)&a2->failed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->failed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->failed);
  }
  failed = a2->failed;
  if ( *(_BYTE *)(((unsigned __int64)&this->failed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->failed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->failed);
  }
  this->failed = failed;
  if ( *(_BYTE *)(((unsigned __int64)&a2->inconclusive >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->inconclusive >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->inconclusive);
  }
  inconclusive = a2->inconclusive;
  if ( *(_BYTE *)(((unsigned __int64)&this->inconclusive >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->inconclusive >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->inconclusive);
  }
  this->inconclusive = inconclusive;
  if ( *(_BYTE *)(((unsigned __int64)&a2->skipped >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->skipped >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->skipped);
  }
  skipped = a2->skipped;
  if ( *(_BYTE *)(((unsigned __int64)&this->skipped >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skipped >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skipped);
  }
  this->skipped = skipped;
  if ( *(_BYTE *)(((unsigned __int64)&a2->asserts >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->asserts >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->asserts);
  }
  asserts = a2->asserts;
  if ( *(_BYTE *)(((unsigned __int64)&this->asserts >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->asserts >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->asserts);
  }
  this->asserts = asserts;
  std::string::operator=(&this->startTime, &a2->startTime);
  std::string::operator=(&this->endTime, &a2->endTime);
  if ( *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->duration);
  }
  duration = a2->duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration);
  }
  this->duration = duration;
  std::string::operator=(&this->runState, &a2->runState);
  std::string::operator=(&this->site, &a2->site);
  std::vector<Property>::operator=(&this->properties, &a2->properties);
  std::vector<TestSuite>::operator=(&this->testSuites, &a2->testSuites);
  std::vector<TestCase>::operator=(&this->testcases, &a2->testcases);
  Failure::operator=(&this->failure, &a2->failure);
  return this;
};

// Line 164: range 00000000004B95E6-00000000004B9C77
TestSuite *__cdecl TestSuite::operator=(TestSuite *const this, const TestSuite *a2)
{
  int id; // ecx
  int testcaseCount; // ecx
  float time; // xmm0_4
  int total; // ecx
  int passed; // ecx
  int failed; // ecx
  int inconclusive; // ecx
  int skipped; // ecx
  int asserts; // ecx
  float duration; // xmm0_4

  std::string::operator=(&this->type, &a2->type);
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id);
  }
  this->id = id;
  std::string::operator=(&this->name, &a2->name);
  std::string::operator=(&this->fullname, &a2->fullname);
  if ( *(_BYTE *)(((unsigned __int64)&a2->testcaseCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->testcaseCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->testcaseCount);
  }
  testcaseCount = a2->testcaseCount;
  if ( *(_BYTE *)(((unsigned __int64)&this->testcaseCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->testcaseCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->testcaseCount);
  }
  this->testcaseCount = testcaseCount;
  std::string::operator=(&this->result, &a2->result);
  if ( *(_BYTE *)(((unsigned __int64)&a2->time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->time);
  }
  time = a2->time;
  if ( *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time);
  }
  this->time = time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->total >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->total >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->total);
  }
  total = a2->total;
  if ( *(_BYTE *)(((unsigned __int64)&this->total >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->total);
  }
  this->total = total;
  if ( *(_BYTE *)(((unsigned __int64)&a2->passed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->passed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->passed);
  }
  passed = a2->passed;
  if ( *(_BYTE *)(((unsigned __int64)&this->passed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->passed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->passed);
  }
  this->passed = passed;
  if ( *(_BYTE *)(((unsigned __int64)&a2->failed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->failed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->failed);
  }
  failed = a2->failed;
  if ( *(_BYTE *)(((unsigned __int64)&this->failed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->failed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->failed);
  }
  this->failed = failed;
  if ( *(_BYTE *)(((unsigned __int64)&a2->inconclusive >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->inconclusive >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->inconclusive);
  }
  inconclusive = a2->inconclusive;
  if ( *(_BYTE *)(((unsigned __int64)&this->inconclusive >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->inconclusive >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->inconclusive);
  }
  this->inconclusive = inconclusive;
  if ( *(_BYTE *)(((unsigned __int64)&a2->skipped >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->skipped >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->skipped);
  }
  skipped = a2->skipped;
  if ( *(_BYTE *)(((unsigned __int64)&this->skipped >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skipped >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skipped);
  }
  this->skipped = skipped;
  if ( *(_BYTE *)(((unsigned __int64)&a2->asserts >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->asserts >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->asserts);
  }
  asserts = a2->asserts;
  if ( *(_BYTE *)(((unsigned __int64)&this->asserts >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->asserts >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->asserts);
  }
  this->asserts = asserts;
  std::string::operator=(&this->startTime, &a2->startTime);
  std::string::operator=(&this->endTime, &a2->endTime);
  if ( *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->duration);
  }
  duration = a2->duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration);
  }
  this->duration = duration;
  std::string::operator=(&this->runState, &a2->runState);
  std::string::operator=(&this->site, &a2->site);
  std::vector<Property>::operator=(&this->properties, &a2->properties);
  std::vector<TestSuite>::operator=(&this->testSuites, &a2->testSuites);
  std::vector<TestCase>::operator=(&this->testcases, &a2->testcases);
  Failure::operator=(&this->failure, &a2->failure);
  return this;
};

// Line 164: range 00000000008DC236-00000000008DC8C4
void __cdecl TestSuite::TestSuite(TestSuite *const this, TestSuite *a2)
{
  int id; // ecx
  int testcaseCount; // ecx
  float time; // xmm0_4
  int total; // ecx
  int passed; // ecx
  int failed; // ecx
  int inconclusive; // ecx
  int skipped; // ecx
  int asserts; // ecx
  float duration; // xmm0_4

  std::string::basic_string(&this->type, &a2->type);
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id);
  }
  this->id = id;
  std::string::basic_string(&this->name, &a2->name);
  std::string::basic_string(&this->fullname, &a2->fullname);
  if ( *(_BYTE *)(((unsigned __int64)&a2->testcaseCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->testcaseCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->testcaseCount);
  }
  testcaseCount = a2->testcaseCount;
  if ( *(_BYTE *)(((unsigned __int64)&this->testcaseCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->testcaseCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->testcaseCount);
  }
  this->testcaseCount = testcaseCount;
  std::string::basic_string(&this->result, &a2->result);
  if ( *(_BYTE *)(((unsigned __int64)&a2->time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->time);
  }
  time = a2->time;
  if ( *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time);
  }
  this->time = time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->total >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->total >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->total);
  }
  total = a2->total;
  if ( *(_BYTE *)(((unsigned __int64)&this->total >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->total);
  }
  this->total = total;
  if ( *(_BYTE *)(((unsigned __int64)&a2->passed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->passed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->passed);
  }
  passed = a2->passed;
  if ( *(_BYTE *)(((unsigned __int64)&this->passed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->passed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->passed);
  }
  this->passed = passed;
  if ( *(_BYTE *)(((unsigned __int64)&a2->failed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->failed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->failed);
  }
  failed = a2->failed;
  if ( *(_BYTE *)(((unsigned __int64)&this->failed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->failed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->failed);
  }
  this->failed = failed;
  if ( *(_BYTE *)(((unsigned __int64)&a2->inconclusive >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->inconclusive >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->inconclusive);
  }
  inconclusive = a2->inconclusive;
  if ( *(_BYTE *)(((unsigned __int64)&this->inconclusive >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->inconclusive >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->inconclusive);
  }
  this->inconclusive = inconclusive;
  if ( *(_BYTE *)(((unsigned __int64)&a2->skipped >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->skipped >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->skipped);
  }
  skipped = a2->skipped;
  if ( *(_BYTE *)(((unsigned __int64)&this->skipped >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skipped >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skipped);
  }
  this->skipped = skipped;
  if ( *(_BYTE *)(((unsigned __int64)&a2->asserts >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->asserts >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->asserts);
  }
  asserts = a2->asserts;
  if ( *(_BYTE *)(((unsigned __int64)&this->asserts >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->asserts >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->asserts);
  }
  this->asserts = asserts;
  std::string::basic_string(&this->startTime, &a2->startTime);
  std::string::basic_string(&this->endTime, &a2->endTime);
  if ( *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->duration);
  }
  duration = a2->duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration);
  }
  this->duration = duration;
  std::string::basic_string(&this->runState, &a2->runState);
  std::string::basic_string(&this->site, &a2->site);
  std::vector<Property>::vector(&this->properties, &a2->properties);
  std::vector<TestSuite>::vector(&this->testSuites, &a2->testSuites);
  std::vector<TestCase>::vector(&this->testcases, &a2->testcases);
  Failure::Failure(&this->failure, &a2->failure);
};

// Line 164: range 00000000004BC8E8-00000000004BD07C
void __cdecl TestSuite::TestSuite(TestSuite *const this, const TestSuite *a2)
{
  int id; // ecx
  int testcaseCount; // ecx
  float time; // xmm0_4
  int total; // ecx
  int passed; // ecx
  int failed; // ecx
  int inconclusive; // ecx
  int skipped; // ecx
  int asserts; // ecx
  float duration; // xmm0_4

  std::string::basic_string(&this->type, &a2->type);
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id);
  }
  this->id = id;
  std::string::basic_string(&this->name, &a2->name);
  std::string::basic_string(&this->fullname, &a2->fullname);
  if ( *(_BYTE *)(((unsigned __int64)&a2->testcaseCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->testcaseCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->testcaseCount);
  }
  testcaseCount = a2->testcaseCount;
  if ( *(_BYTE *)(((unsigned __int64)&this->testcaseCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->testcaseCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->testcaseCount);
  }
  this->testcaseCount = testcaseCount;
  std::string::basic_string(&this->result, &a2->result);
  if ( *(_BYTE *)(((unsigned __int64)&a2->time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->time);
  }
  time = a2->time;
  if ( *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time);
  }
  this->time = time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->total >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->total >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->total);
  }
  total = a2->total;
  if ( *(_BYTE *)(((unsigned __int64)&this->total >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->total);
  }
  this->total = total;
  if ( *(_BYTE *)(((unsigned __int64)&a2->passed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->passed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->passed);
  }
  passed = a2->passed;
  if ( *(_BYTE *)(((unsigned __int64)&this->passed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->passed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->passed);
  }
  this->passed = passed;
  if ( *(_BYTE *)(((unsigned __int64)&a2->failed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->failed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->failed);
  }
  failed = a2->failed;
  if ( *(_BYTE *)(((unsigned __int64)&this->failed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->failed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->failed);
  }
  this->failed = failed;
  if ( *(_BYTE *)(((unsigned __int64)&a2->inconclusive >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->inconclusive >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->inconclusive);
  }
  inconclusive = a2->inconclusive;
  if ( *(_BYTE *)(((unsigned __int64)&this->inconclusive >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->inconclusive >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->inconclusive);
  }
  this->inconclusive = inconclusive;
  if ( *(_BYTE *)(((unsigned __int64)&a2->skipped >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->skipped >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->skipped);
  }
  skipped = a2->skipped;
  if ( *(_BYTE *)(((unsigned __int64)&this->skipped >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skipped >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skipped);
  }
  this->skipped = skipped;
  if ( *(_BYTE *)(((unsigned __int64)&a2->asserts >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->asserts >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->asserts);
  }
  asserts = a2->asserts;
  if ( *(_BYTE *)(((unsigned __int64)&this->asserts >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->asserts >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->asserts);
  }
  this->asserts = asserts;
  std::string::basic_string(&this->startTime, &a2->startTime);
  std::string::basic_string(&this->endTime, &a2->endTime);
  if ( *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->duration);
  }
  duration = a2->duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration);
  }
  this->duration = duration;
  std::string::basic_string(&this->runState, &a2->runState);
  std::string::basic_string(&this->site, &a2->site);
  std::vector<Property>::vector(&this->properties, &a2->properties);
  std::vector<TestSuite>::vector(&this->testSuites, &a2->testSuites);
  std::vector<TestCase>::vector(&this->testcases, &a2->testcases);
  Failure::Failure(&this->failure, &a2->failure);
};

// Line 164: range 00000000004B8E24-00000000004B8EFE
void __cdecl TestSuite::~TestSuite(TestSuite *const this)
{
  Failure::~Failure(&this->failure);
  std::vector<TestCase>::~vector(&this->testcases);
  std::vector<TestSuite>::~vector(&this->testSuites);
  std::vector<Property>::~vector(&this->properties);
  std::string::~string(&this->site);
  std::string::~string(&this->runState);
  std::string::~string(&this->endTime);
  std::string::~string(&this->startTime);
  std::string::~string(&this->result);
  std::string::~string(&this->fullname);
  std::string::~string(&this->name);
  std::string::~string(&this->type);
};

// Line 191: range 00000000004B6AB8-00000000004B6B92
void __cdecl TestSuite::TestSuite(TestSuite *const this)
{
  std::string::basic_string(&this->type);
  std::string::basic_string(&this->name);
  std::string::basic_string(&this->fullname);
  std::string::basic_string(&this->result);
  std::string::basic_string(&this->startTime);
  std::string::basic_string(&this->endTime);
  std::string::basic_string(&this->runState);
  std::string::basic_string(&this->site);
  std::vector<Property>::vector(&this->properties);
  std::vector<TestSuite>::vector(&this->testSuites);
  std::vector<TestCase>::vector(&this->testcases);
  Failure::Failure(&this->failure);
};

// Line 192: range 00000000004B6B94-00000000004B7226
void __cdecl TestSuite::TestSuite(TestSuite *const this, int id, std::string *p_name, std::string *p_fullname)
{
  std::string *v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::string::size_type v7; // rax
  std::string *v8; // rax
  char v11[128]; // [rsp+20h] [rbp-80h] BYREF

  v4 = (std::string *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = (std::string *)v5;
  }
  v4->_M_dataplus._M_p = (std::string::pointer)1102416563;
  v4->_M_string_length = (std::string::size_type)"1 32 32 16 startTimeStr:194";
  v4->_anon_0._M_allocated_capacity = (std::string::size_type)TestSuite::TestSuite;
  v6 = (unsigned __int64)v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450888) = -202116109;
  std::string::basic_string(&this->type);
  std::string::basic_string(&this->name);
  std::string::basic_string(&this->fullname);
  std::string::basic_string(&this->result);
  std::string::basic_string(&this->startTime);
  std::string::basic_string(&this->endTime);
  std::string::basic_string(&this->runState);
  std::string::basic_string(&this->site);
  std::vector<Property>::vector(&this->properties);
  std::vector<TestSuite>::vector(&this->testSuites);
  std::vector<TestCase>::vector(&this->testcases);
  Failure::Failure(&this->failure);
  common::tools::TimeUtils::getNowStr[abi:cxx11](v4 + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id);
  }
  this->id = id;
  std::string::operator=(&this->name, p_name);
  std::string::operator=(&this->fullname, p_fullname);
  std::string::operator=(&this->type, "Type");
  if ( *(_BYTE *)(((unsigned __int64)&this->testcaseCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->testcaseCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->testcaseCount);
  }
  this->testcaseCount = 0;
  std::string::operator=(&this->result, "Passed");
  if ( *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time);
  }
  this->time = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->total >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->total);
  }
  this->total = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->passed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->passed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->passed);
  }
  this->passed = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->failed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->failed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->failed);
  }
  this->failed = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->inconclusive >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->inconclusive >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->inconclusive);
  }
  this->inconclusive = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->skipped >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skipped >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skipped);
  }
  this->skipped = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->asserts >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->asserts >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->asserts);
  }
  this->asserts = 0;
  std::string::operator=(&this->runState, "Runnable");
  std::string::operator=(&this->site, "Child");
  v7 = std::string::find(v4 + 1, " ", 0LL);
  v8 = std::string::erase(v4 + 1, 0LL, v7 + 1);
  std::string::operator=(&this->startTime, v8);
  std::string::~string(v4 + 1);
  if ( v11 == (char *)v4 )
  {
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v4->_M_dataplus._M_p = (std::string::pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 214: range 00000000004B7228-00000000004B7322
void __cdecl TestSuite::addProperty(TestSuite *const this, std::string *p_name, std::string *p_value)
{
  std::string v3; // [rsp+20h] [rbp-90h] BYREF
  std::string v4; // [rsp+40h] [rbp-70h] BYREF
  Property __x; // [rsp+60h] [rbp-50h] BYREF

  std::string::basic_string(&v4, p_value);
  std::string::basic_string(&v3, p_name);
  Property::Property(&__x, &v3, &v4);
  std::vector<Property>::push_back(&this->properties, &__x);
  Property::~Property(&__x);
  std::string::~string(&v3);
  std::string::~string(&v4);
};

// Line 219: range 00000000004B7324-00000000004B740D
void __cdecl TestSuite::setFailure(TestSuite *const this, std::string *p_stackTrack, std::string *p_message)
{
  std::string v3; // [rsp+20h] [rbp-90h] BYREF
  std::string v4; // [rsp+40h] [rbp-70h] BYREF
  Failure v5; // [rsp+60h] [rbp-50h] BYREF

  std::string::basic_string(&v4, p_message);
  std::string::basic_string(&v3, p_stackTrack);
  Failure::Failure(&v5, &v3, &v4);
  Failure::operator=(&this->failure, &v5);
  Failure::~Failure(&v5);
  std::string::~string(&v3);
  std::string::~string(&v4);
};

// Line 225: range 00000000004B740E-00000000004B75BF
void __cdecl TestSuite::addCase(TestSuite *const this, const TestCase *testcase)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->testcaseCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->testcaseCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->testcaseCount);
  }
  ++this->testcaseCount;
  if ( *(_BYTE *)(((unsigned __int64)&this->total >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->total);
  }
  ++this->total;
  if ( std::operator==<char>(&testcase->result, "Passed") )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->passed >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->passed >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->passed);
    }
    ++this->passed;
  }
  if ( std::operator==<char>(&testcase->result, "Failed") )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->failed >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->failed >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->failed);
    }
    ++this->failed;
    std::string::operator=(&this->result, "Failed");
  }
  std::vector<TestCase>::push_back(&this->testcases, testcase);
};

// Line 242: range 00000000004B75C0-00000000004B7861
void __cdecl TestSuite::addSuite(TestSuite *const this, const TestSuite *testSuite)
{
  int testcaseCount; // ecx
  int total; // ecx
  int passed; // ecx
  int failed; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->testcaseCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->testcaseCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->testcaseCount);
  }
  testcaseCount = this->testcaseCount;
  if ( *(_BYTE *)(((unsigned __int64)&testSuite->testcaseCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&testSuite->testcaseCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&testSuite->testcaseCount);
  }
  this->testcaseCount = testcaseCount + testSuite->testcaseCount;
  if ( *(_BYTE *)(((unsigned __int64)&this->total >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->total);
  }
  total = this->total;
  if ( *(_BYTE *)(((unsigned __int64)&testSuite->total >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)testSuite - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&testSuite->total >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&testSuite->total);
  }
  this->total = total + testSuite->total;
  if ( *(_BYTE *)(((unsigned __int64)&this->passed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->passed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->passed);
  }
  passed = this->passed;
  if ( *(_BYTE *)(((unsigned __int64)&testSuite->passed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&testSuite->passed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&testSuite->passed);
  }
  this->passed = passed + testSuite->passed;
  if ( *(_BYTE *)(((unsigned __int64)&this->failed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->failed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->failed);
  }
  failed = this->failed;
  if ( *(_BYTE *)(((unsigned __int64)&testSuite->failed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)testSuite - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&testSuite->failed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&testSuite->failed);
  }
  this->failed = failed + testSuite->failed;
  if ( std::operator==<char>(&testSuite->result, "Failed") )
    std::string::operator=(&this->result, "Failed");
  std::vector<TestSuite>::push_back(&this->testSuites, testSuite);
};

// Line 255: range 00000000004B7862-00000000004B7AD3
void __cdecl TestSuite::endSuite(TestSuite *const this)
{
  std::string *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::string::size_type v4; // rax
  std::string *v5; // rax
  float v6; // xmm0_4
  time_t start; // [rsp+10h] [rbp-B0h]
  time_t end; // [rsp+18h] [rbp-A8h]
  std::string time_str; // [rsp+20h] [rbp-A0h] BYREF
  char v10[128]; // [rsp+40h] [rbp-80h] BYREF

  v1 = (std::string *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = (std::string *)v2;
  }
  v1->_M_dataplus._M_p = (std::string::pointer)1102416563;
  v1->_M_string_length = (std::string::size_type)"1 32 32 14 endTimeStr:257";
  v1->_anon_0._M_allocated_capacity = (std::string::size_type)TestSuite::endSuite;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  common::tools::TimeUtils::getNowStr[abi:cxx11](v1 + 1);
  v4 = std::string::find(v1 + 1, " ", 0LL);
  v5 = std::string::erase(v1 + 1, 0LL, v4 + 1);
  std::string::operator=(&this->endTime, v5);
  std::operator+<char>(&time_str, "2000-10-10 ", &this->startTime);
  start = common::tools::TimeUtils::getTimeByStr(&time_str);
  std::string::~string(&time_str);
  std::operator+<char>(&time_str, "2000-10-10 ", &this->endTime);
  end = common::tools::TimeUtils::getTimeByStr(&time_str);
  std::string::~string(&time_str);
  v6 = difftime(end, start);
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration);
  }
  this->duration = v6;
  std::string::~string(v1 + 1);
  if ( v10 == (char *)v1 )
  {
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v1->_M_dataplus._M_p = (std::string::pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 267: range 00000000004B7FFA-00000000004B8E23
boost::property_tree::ptree *__cdecl TestSuite::getPtree[abi:cxx11](
        boost::property_tree::ptree *retstr,
        const TestSuite *const this)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  boost::property_tree::id_translator<std::string > v5; // cl
  boost::property_tree::id_translator<std::string > v6; // cl
  boost::property_tree::id_translator<std::string > v7; // cl
  boost::property_tree::id_translator<std::string > v8; // cl
  boost::property_tree::id_translator<std::string > v9; // cl
  boost::property_tree::id_translator<std::string > v10; // cl
  boost::property_tree::id_translator<std::string > v11; // cl
  boost::property_tree::id_translator<std::string > v12; // cl
  boost::property_tree::id_translator<std::string > v13; // cl
  boost::property_tree::id_translator<std::string > v14; // cl
  boost::property_tree::id_translator<std::string > v15; // cl
  boost::property_tree::id_translator<std::string > v16; // cl
  boost::property_tree::id_translator<std::string > v17; // cl
  boost::property_tree::id_translator<std::string > v18; // cl
  boost::property_tree::id_translator<std::string > v19; // cl
  boost::property_tree::id_translator<std::string > v20; // cl
  boost::property_tree::id_translator<std::string > v21; // cl
  boost::property_tree::id_translator<std::string > v22; // cl
  boost::property_tree::id_translator<std::string > v23; // cl
  const TestCase *v24; // rax
  boost::property_tree::id_translator<std::string > v25; // cl
  boost::property_tree::id_translator<std::string > v26; // cl
  const Property *v27; // rax
  boost::property_tree::id_translator<std::string > v28; // cl
  boost::property_tree::id_translator<std::string > v29; // cl
  std::vector<TestSuite>::const_iterator __for_begin; // [rsp+10h] [rbp-340h] BYREF
  std::vector<TestSuite>::const_iterator __for_end; // [rsp+18h] [rbp-338h] BYREF
  const std::vector<TestSuite> *__for_range; // [rsp+20h] [rbp-330h]
  const std::vector<TestCase> *__for_range_0; // [rsp+28h] [rbp-328h]
  const std::vector<Property> *__for_range_1; // [rsp+30h] [rbp-320h]
  const TestSuite *ts; // [rsp+38h] [rbp-318h]
  boost::property_tree::ptree value; // [rsp+40h] [rbp-310h] BYREF
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > > path; // [rsp+70h] [rbp-2E0h] BYREF
  char v39[688]; // [rsp+A0h] [rbp-2B0h] BYREF

  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(640LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 40 17 propertiesPtr:299 112 64 5 p:300 208 368 6 tc:294";
  *(_QWORD *)(v2 + 16) = TestSuite::getPtree[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959360;
  v4[536862723] = 62194;
  v4[536862725] = -219021312;
  v4[536862726] = 62194;
  v4[536862738] = -202116109;
  v4[536862739] = -202116109;
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(retstr);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.type",
    46,
    v5);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    retstr,
    &path,
    &this->type);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.id",
    46,
    v6);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<int>(retstr, &path, &this->id);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.name",
    46,
    v7);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    retstr,
    &path,
    &this->name);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.fullname",
    46,
    v8);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    retstr,
    &path,
    &this->fullname);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.testcasecount",
    46,
    v9);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<int>(
    retstr,
    &path,
    &this->testcaseCount);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.result",
    46,
    v10);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    retstr,
    &path,
    &this->result);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.time",
    46,
    v11);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<float>(
    retstr,
    &path,
    &this->time);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.total",
    46,
    v12);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<int>(
    retstr,
    &path,
    &this->total);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.passed",
    46,
    v13);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<int>(
    retstr,
    &path,
    &this->passed);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.failed",
    46,
    v14);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<int>(
    retstr,
    &path,
    &this->failed);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.asserts",
    46,
    v15);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<int>(
    retstr,
    &path,
    &this->asserts);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.inconclusive",
    46,
    v16);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<int>(
    retstr,
    &path,
    &this->inconclusive);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.skipped",
    46,
    v17);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<int>(
    retstr,
    &path,
    &this->skipped);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.site",
    46,
    v18);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    retstr,
    &path,
    &this->site);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.duration",
    46,
    v19);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<float>(
    retstr,
    &path,
    &this->duration);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.runstate",
    46,
    v20);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    retstr,
    &path,
    &this->runState);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.start-time",
    46,
    v21);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    retstr,
    &path,
    &this->startTime);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.end-time",
    46,
    v22);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    retstr,
    &path,
    &this->endTime);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  __for_range = &this->testSuites;
  __for_begin._M_current = std::vector<TestSuite>::begin(&this->testSuites)._M_current;
  __for_end._M_current = std::vector<TestSuite>::end(&this->testSuites)._M_current;
  while ( __gnu_cxx::operator!=<TestSuite const*,std::vector<TestSuite>>(&__for_begin, &__for_end) )
  {
    ts = __gnu_cxx::__normal_iterator<TestSuite const*,std::vector<TestSuite>>::operator*(&__for_begin);
    TestSuite::getPtree[abi:cxx11](&value, ts);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
      &path,
      "test-suite",
      46,
      v23);
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::add_child(retstr, &path, &value);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&value);
    __gnu_cxx::__normal_iterator<TestSuite const*,std::vector<TestSuite>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->testcases;
  __for_begin._M_current = (const TestSuite *)std::vector<TestCase>::begin(&this->testcases)._M_current;
  __for_end._M_current = (const TestSuite *)std::vector<TestCase>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<TestCase const*,std::vector<TestCase>>(
            (const __gnu_cxx::__normal_iterator<const TestCase*,std::vector<TestCase> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<const TestCase*,std::vector<TestCase> > *)&__for_end) )
  {
    v24 = __gnu_cxx::__normal_iterator<TestCase const*,std::vector<TestCase>>::operator*((const __gnu_cxx::__normal_iterator<const TestCase*,std::vector<TestCase> > *const)&__for_begin);
    TestCase::TestCase((TestCase *const)(v2 + 208), v24);
    TestCase::getPtree[abi:cxx11](&value, (const TestCase *const)(v2 + 208));
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
      &path,
      "test-case",
      46,
      v25);
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::add_child(retstr, &path, &value);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&value);
    TestCase::~TestCase((TestCase *const)(v2 + 208));
    __gnu_cxx::__normal_iterator<TestCase const*,std::vector<TestCase>>::operator++((__gnu_cxx::__normal_iterator<const TestCase*,std::vector<TestCase> > *const)&__for_begin);
  }
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree((boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 32));
  __for_range_1 = &this->properties;
  __for_begin._M_current = (const TestSuite *)std::vector<Property>::begin(&this->properties)._M_current;
  __for_end._M_current = (const TestSuite *)std::vector<Property>::end(__for_range_1)._M_current;
  while ( __gnu_cxx::operator!=<Property const*,std::vector<Property>>(
            (const __gnu_cxx::__normal_iterator<const Property*,std::vector<Property> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<const Property*,std::vector<Property> > *)&__for_end) )
  {
    v27 = __gnu_cxx::__normal_iterator<Property const*,std::vector<Property>>::operator*((const __gnu_cxx::__normal_iterator<const Property*,std::vector<Property> > *const)&__for_begin);
    Property::Property((Property *const)(v2 + 112), v27);
    Property::getPtree[abi:cxx11](&value, (const Property *const)(v2 + 112));
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
      &path,
      "property",
      46,
      v28);
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::add_child(
      (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 32),
      &path,
      &value);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&value);
    Property::~Property((Property *const)(v2 + 112));
    __gnu_cxx::__normal_iterator<Property const*,std::vector<Property>>::operator++((__gnu_cxx::__normal_iterator<const Property*,std::vector<Property> > *const)&__for_begin);
  }
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "properties",
    46,
    v26);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::add_child(
    retstr,
    &path,
    (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::self_type *)(v2 + 32));
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  Failure::getPtree[abi:cxx11](&value, &this->failure);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "failure",
    46,
    v29);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::add_child(retstr, &path, &value);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&value);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree((boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 32));
  if ( v39 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 311: range 00000000004BAE86-00000000004BB418
TestRun *__cdecl TestRun::operator=(TestRun *const this, TestRun *a2)
{
  int id; // ecx
  int testcaseCount; // ecx
  float time; // xmm0_4
  int total; // ecx
  int passed; // ecx
  int failed; // ecx
  int inconclusive; // ecx
  int skipped; // ecx
  int asserts; // ecx

  TestSuite::operator=(&this->testSuite, &a2->testSuite);
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id);
  }
  this->id = id;
  std::string::operator=(&this->name, &a2->name);
  std::string::operator=(&this->fullname, &a2->fullname);
  if ( *(_BYTE *)(((unsigned __int64)&a2->testcaseCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->testcaseCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->testcaseCount);
  }
  testcaseCount = a2->testcaseCount;
  if ( *(_BYTE *)(((unsigned __int64)&this->testcaseCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->testcaseCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->testcaseCount);
  }
  this->testcaseCount = testcaseCount;
  std::string::operator=(&this->result, &a2->result);
  if ( *(_BYTE *)(((unsigned __int64)&a2->time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->time);
  }
  time = a2->time;
  if ( *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time);
  }
  this->time = time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->total >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->total >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->total);
  }
  total = a2->total;
  if ( *(_BYTE *)(((unsigned __int64)&this->total >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->total);
  }
  this->total = total;
  if ( *(_BYTE *)(((unsigned __int64)&a2->passed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->passed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->passed);
  }
  passed = a2->passed;
  if ( *(_BYTE *)(((unsigned __int64)&this->passed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->passed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->passed);
  }
  this->passed = passed;
  if ( *(_BYTE *)(((unsigned __int64)&a2->failed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->failed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->failed);
  }
  failed = a2->failed;
  if ( *(_BYTE *)(((unsigned __int64)&this->failed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->failed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->failed);
  }
  this->failed = failed;
  if ( *(_BYTE *)(((unsigned __int64)&a2->inconclusive >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->inconclusive >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->inconclusive);
  }
  inconclusive = a2->inconclusive;
  if ( *(_BYTE *)(((unsigned __int64)&this->inconclusive >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->inconclusive >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->inconclusive);
  }
  this->inconclusive = inconclusive;
  if ( *(_BYTE *)(((unsigned __int64)&a2->skipped >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->skipped >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->skipped);
  }
  skipped = a2->skipped;
  if ( *(_BYTE *)(((unsigned __int64)&this->skipped >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skipped >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skipped);
  }
  this->skipped = skipped;
  if ( *(_BYTE *)(((unsigned __int64)&a2->asserts >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->asserts >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->asserts);
  }
  asserts = a2->asserts;
  if ( *(_BYTE *)(((unsigned __int64)&this->asserts >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->asserts >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->asserts);
  }
  this->asserts = asserts;
  std::string::operator=(&this->runDate, &a2->runDate);
  std::string::operator=(&this->startTime, &a2->startTime);
  std::string::operator=(&this->platform, &a2->platform);
  return this;
};

// Line 311: range 00000000004BA74C-00000000004BA7D2
void __cdecl TestRun::~TestRun(TestRun *const this)
{
  std::string::~string(&this->platform);
  std::string::~string(&this->startTime);
  std::string::~string(&this->runDate);
  std::string::~string(&this->result);
  std::string::~string(&this->fullname);
  std::string::~string(&this->name);
  TestSuite::~TestSuite(&this->testSuite);
};

// Line 331: range 00000000004B8F00-00000000004B8F86
void __cdecl TestRun::TestRun(TestRun *const this)
{
  TestSuite::TestSuite(&this->testSuite);
  std::string::basic_string(&this->name);
  std::string::basic_string(&this->fullname);
  std::string::basic_string(&this->result);
  std::string::basic_string(&this->runDate);
  std::string::basic_string(&this->startTime);
  std::string::basic_string(&this->platform);
};

// Line 332: range 00000000004B8F88-00000000004B95A0
void __cdecl TestRun::TestRun(TestRun *const this, int id, std::string *p_name, std::string *p_fullname)
{
  std::string *v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  std::string::size_type v7; // rax
  std::string::size_type v8; // rax
  std::string *v9; // rax
  std::string __str; // [rsp+20h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+40h] [rbp-80h] BYREF

  v4 = (std::string *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = (std::string *)v5;
  }
  v4->_M_dataplus._M_p = (std::string::pointer)1102416563;
  v4->_M_string_length = (std::string::size_type)"1 32 32 16 startTimeStr:334";
  v4->_anon_0._M_allocated_capacity = (std::string::size_type)TestRun::TestRun;
  v6 = (unsigned __int64)v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450888) = -202116109;
  TestSuite::TestSuite(&this->testSuite);
  std::string::basic_string(&this->name);
  std::string::basic_string(&this->fullname);
  std::string::basic_string(&this->result);
  std::string::basic_string(&this->runDate);
  std::string::basic_string(&this->startTime);
  std::string::basic_string(&this->platform);
  common::tools::TimeUtils::getNowStr[abi:cxx11](v4 + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id);
  }
  this->id = id;
  std::string::operator=(&this->name, p_name);
  std::string::operator=(&this->fullname, p_fullname);
  if ( *(_BYTE *)(((unsigned __int64)&this->testcaseCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->testcaseCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->testcaseCount);
  }
  this->testcaseCount = 0;
  std::string::operator=(&this->result, "Passed");
  if ( *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time);
  }
  this->time = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->total >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->total);
  }
  this->total = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->passed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->passed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->passed);
  }
  this->passed = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->failed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->failed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->failed);
  }
  this->failed = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->inconclusive >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->inconclusive >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->inconclusive);
  }
  this->inconclusive = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->skipped >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skipped >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skipped);
  }
  this->skipped = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->asserts >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->asserts >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->asserts);
  }
  this->asserts = 0;
  v7 = std::string::find(v4 + 1, " ", 0LL);
  std::string::substr(&__str, v4 + 1, 0LL, v7);
  std::string::operator=(&this->runDate, &__str);
  std::string::~string(&__str);
  v8 = std::string::find(v4 + 1, " ", 0LL);
  v9 = std::string::erase(v4 + 1, 0LL, v8 + 1);
  std::string::operator=(&this->startTime, v9);
  std::string::operator=(&this->platform, "Linux");
  std::string::~string(v4 + 1);
  if ( v13 == (char *)v4 )
  {
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v4->_M_dataplus._M_p = (std::string::pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 353: range 00000000004B9C78-00000000004B9ED1
void __cdecl TestRun::addSuite(TestRun *const this, const TestSuite *testSuite)
{
  int testcaseCount; // ecx
  int total; // ecx
  int passed; // ecx
  int failed; // ecx

  TestSuite::operator=(&this->testSuite, testSuite);
  if ( *(_BYTE *)(((unsigned __int64)&testSuite->testcaseCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&testSuite->testcaseCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&testSuite->testcaseCount);
  }
  testcaseCount = testSuite->testcaseCount;
  if ( *(_BYTE *)(((unsigned __int64)&this->testcaseCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->testcaseCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->testcaseCount);
  }
  this->testcaseCount = testcaseCount;
  if ( *(_BYTE *)(((unsigned __int64)&testSuite->total >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)testSuite - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&testSuite->total >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&testSuite->total);
  }
  total = testSuite->total;
  if ( *(_BYTE *)(((unsigned __int64)&this->total >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->total);
  }
  this->total = total;
  if ( *(_BYTE *)(((unsigned __int64)&testSuite->passed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&testSuite->passed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&testSuite->passed);
  }
  passed = testSuite->passed;
  if ( *(_BYTE *)(((unsigned __int64)&this->passed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->passed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->passed);
  }
  this->passed = passed;
  if ( *(_BYTE *)(((unsigned __int64)&testSuite->failed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)testSuite - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&testSuite->failed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&testSuite->failed);
  }
  failed = testSuite->failed;
  if ( *(_BYTE *)(((unsigned __int64)&this->failed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->failed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->failed);
  }
  this->failed = failed;
  std::string::operator=(&this->result, &testSuite->result);
};

// Line 363: range 00000000004B9ED2-00000000004B9EDC
void __cdecl TestRun::endRun(TestRun *const this)
{
  ;
};

// Line 368: range 00000000004B9EDE-00000000004BA74B
boost::property_tree::ptree *__cdecl TestRun::getPtree[abi:cxx11](
        boost::property_tree::ptree *retstr,
        const TestRun *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  boost::property_tree::id_translator<std::string > v5; // cl
  boost::property_tree::id_translator<std::string > v6; // cl
  boost::property_tree::id_translator<std::string > v7; // cl
  boost::property_tree::id_translator<std::string > v8; // cl
  boost::property_tree::id_translator<std::string > v9; // cl
  boost::property_tree::id_translator<std::string > v10; // cl
  boost::property_tree::id_translator<std::string > v11; // cl
  boost::property_tree::id_translator<std::string > v12; // cl
  boost::property_tree::id_translator<std::string > v13; // cl
  boost::property_tree::id_translator<std::string > v14; // cl
  boost::property_tree::id_translator<std::string > v15; // cl
  boost::property_tree::id_translator<std::string > v16; // cl
  boost::property_tree::id_translator<std::string > v17; // cl
  boost::property_tree::id_translator<std::string > v18; // cl
  boost::property_tree::id_translator<std::string > v19; // cl
  boost::property_tree::id_translator<std::string > v20; // cl
  boost::property_tree::id_translator<std::string > v21; // cl
  boost::property_tree::ptree value; // [rsp+10h] [rbp-110h] BYREF
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > > path; // [rsp+40h] [rbp-E0h] BYREF
  char v25[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 40 10 tmpPtr:370";
  *(_QWORD *)(v2 + 16) = TestRun::getPtree[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree((boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 48));
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.id",
    46,
    v5);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<int>(
    (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 48),
    &path,
    &this->id);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.name",
    46,
    v6);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 48),
    &path,
    &this->name);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.fullname",
    46,
    v7);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 48),
    &path,
    &this->fullname);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.testcasecount",
    46,
    v8);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<int>(
    (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 48),
    &path,
    &this->testcaseCount);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.result",
    46,
    v9);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 48),
    &path,
    &this->result);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.time",
    46,
    v10);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<float>(
    (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 48),
    &path,
    &this->time);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.total",
    46,
    v11);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<int>(
    (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 48),
    &path,
    &this->total);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.passed",
    46,
    v12);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<int>(
    (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 48),
    &path,
    &this->passed);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.failed",
    46,
    v13);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<int>(
    (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 48),
    &path,
    &this->failed);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.inconclusive",
    46,
    v14);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<int>(
    (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 48),
    &path,
    &this->inconclusive);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.skipped",
    46,
    v15);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<int>(
    (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 48),
    &path,
    &this->skipped);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.asserts",
    46,
    v16);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<int>(
    (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 48),
    &path,
    &this->asserts);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.run-date",
    46,
    v17);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 48),
    &path,
    &this->runDate);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.start-time",
    46,
    v18);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 48),
    &path,
    &this->startTime);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.platform",
    46,
    v19);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 48),
    &path,
    &this->platform);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  TestSuite::getPtree[abi:cxx11](&value, &this->testSuite);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "test-suite",
    46,
    v20);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::add_child(
    (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 48),
    &path,
    &value);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&value);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(retstr);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "test-run",
    46,
    v21);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::add_child(
    retstr,
    &path,
    (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::self_type *)(v2 + 48));
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree((boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 48));
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 395: range 000000000050FECA-000000000050FF2C
void __cdecl Reporter::~Reporter(Reporter *const this)
{
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&this->lastPtr);
  TestSuite::~TestSuite(&this->curSuite);
  TestCase::~TestCase(&this->curCase);
  TestSuite::~TestSuite(&this->testSuite);
  TestRun::~TestRun(&this->testRun);
};

// Line 405: range 00000000004BB41A-00000000004BC42F
void __cdecl Reporter::Reporter(Reporter *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  bool v4; // r14
  boost::property_tree::id_translator<std::string > v5; // cl
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v6; // rax
  boost::property_tree::id_translator<std::string > v7; // cl
  boost::property_tree::id_translator<std::string > v8; // cl
  boost::property_tree::id_translator<std::string > v9; // cl
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v10; // rax
  boost::property_tree::id_translator<std::string > v11; // cl
  int v12; // edx
  boost::property_tree::id_translator<std::string > v13; // cl
  boost::property_tree::id_translator<std::string > v14; // cl
  int v15; // ecx
  boost::property_tree::id_translator<std::string > v16; // cl
  int v17; // edx
  boost::property_tree::id_translator<std::string > v18; // cl
  int v19; // ecx
  boost::property_tree::id_translator<std::string > v20; // cl
  int curId; // ecx
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *p_second; // r14
  boost::property_tree::id_translator<std::string > v23; // cl
  std::allocator<char> v24; // [rsp+1Eh] [rbp-6B2h] BYREF
  std::allocator<char> __a; // [rsp+1Fh] [rbp-6B1h] BYREF
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::iterator __for_begin; // [rsp+20h] [rbp-6B0h] BYREF
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::iterator __for_end; // [rsp+28h] [rbp-6A8h] BYREF
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *__for_range; // [rsp+30h] [rbp-6A0h]
  std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > *child; // [rsp+38h] [rbp-698h]
  std::string __str; // [rsp+40h] [rbp-690h] BYREF
  std::string v31; // [rsp+60h] [rbp-670h] BYREF
  std::string p_name; // [rsp+80h] [rbp-650h] BYREF
  std::string p_fullname; // [rsp+A0h] [rbp-630h] BYREF
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > > path; // [rsp+C0h] [rbp-610h] BYREF
  TestSuite v35; // [rsp+F0h] [rbp-5E0h] BYREF
  TestRun v36; // [rsp+2B0h] [rbp-420h] BYREF
  char v37[368]; // [rsp+560h] [rbp-170h] BYREF

  v1 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(320LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 8 8 type:446 80 40 8 root:414 160 40 14 testRunPtr:416 240 40 16 testSuitePtr:433";
  *(_QWORD *)(v1 + 16) = Reporter::Reporter;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862721] = -234881024;
  v3[536862722] = 62194;
  v3[536862723] = -234881024;
  v3[536862724] = -218959118;
  v3[536862726] = -218959360;
  v3[536862727] = 62194;
  v3[536862728] = -218103808;
  v3[536862729] = -202116109;
  MultiThreadSingleton<Reporter>::MultiThreadSingleton((MultiThreadSingleton<Reporter> *const)this);
  TestRun::TestRun(&this->testRun);
  TestSuite::TestSuite(&this->testSuite);
  TestCase::TestCase(&this->curCase);
  TestSuite::TestSuite(&this->curSuite);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(&this->lastPtr);
  if ( *(_BYTE *)(((unsigned __int64)&this->curId >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->curId >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->curId);
  }
  this->curId = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&p_fullname, "Server_Test_v1.0", &__a);
  std::allocator<char>::allocator(&v24);
  std::string::basic_string<std::allocator<char>>(&p_name, "Server_Test", &v24);
  if ( *(_BYTE *)(((unsigned __int64)&this->curId >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->curId >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->curId);
  }
  TestRun::TestRun(&v36, ++this->curId, &p_name, &p_fullname);
  TestRun::operator=(&this->testRun, &v36);
  TestRun::~TestRun(&v36);
  std::string::~string(&p_name);
  std::allocator<char>::~allocator(&v24);
  std::string::~string(&p_fullname);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&p_fullname, "Server_Test_Suite_v1.0", &__a);
  std::allocator<char>::allocator(&v24);
  std::string::basic_string<std::allocator<char>>(&p_name, "Server_Test_Suite", &v24);
  if ( *(_BYTE *)(((unsigned __int64)&this->curId >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->curId >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->curId);
  }
  TestSuite::TestSuite(&v35, ++this->curId, &p_name, &p_fullname);
  TestSuite::operator=(&this->testSuite, &v35);
  TestSuite::~TestSuite(&v35);
  std::string::~string(&p_name);
  std::allocator<char>::~allocator(&v24);
  std::string::~string(&p_fullname);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&p_fullname, &byte_DE30BC0, &__a);
  std::allocator<char>::allocator(&v24);
  std::string::basic_string<std::allocator<char>>(&p_name, "Description", &v24);
  TestSuite::addProperty(&this->testSuite, &p_name, &p_fullname);
  std::string::~string(&p_name);
  std::allocator<char>::~allocator(&v24);
  std::string::~string(&p_fullname);
  std::allocator<char>::~allocator(&__a);
  std::filesystem::__cxx11::path::path<char [12],std::filesystem::__cxx11::path>(
    (std::filesystem::__cxx11::path *const)(v1 + 240),
    (const char (*)[12])"results.xml",
    auto_format);
  v4 = std::filesystem::exists((const std::filesystem::__cxx11::path *)(v1 + 240));
  std::filesystem::__cxx11::path::~path((std::filesystem::__cxx11::path *const)(v1 + 240));
  if ( v4 )
  {
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree((boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v1 + 80));
    std::locale::locale((std::locale *)(v1 + 48));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&p_fullname, "results.xml", &__a);
    boost::property_tree::xml_parser::read_xml<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>(
      &p_fullname,
      (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)(v1 + 80),
      4,
      (const std::locale *)(v1 + 48));
    std::string::~string(&p_fullname);
    std::allocator<char>::~allocator(&__a);
    std::locale::~locale((std::locale *)(v1 + 48));
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
      &path,
      "test-run",
      46,
      v5);
    v6 = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get_child(
           (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v1 + 80),
           &path);
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(
      (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v1 + 160),
      v6);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
      &path,
      "<xmlattr>.run-date",
      46,
      v7);
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get<std::string>(
      &__str,
      (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v1 + 160),
      &path);
    std::string::operator=(&this->testRun.runDate, &__str);
    std::string::~string(&__str);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
      &path,
      "<xmlattr>.start-time",
      46,
      v8);
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get<std::string>(
      &v31,
      (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v1 + 160),
      &path);
    std::string::operator=(&this->testRun.startTime, &v31);
    std::string::~string(&v31);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
      &path,
      "test-run.test-suite",
      46,
      v9);
    v10 = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get_child(
            (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v1 + 80),
            &path);
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(
      (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v1 + 240),
      v10);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
      &path,
      "<xmlattr>.testcasecount",
      46,
      v11);
    v12 = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get<int>(
            (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v1 + 240),
            &path);
    if ( *(_BYTE *)(((unsigned __int64)&this->testSuite.testcaseCount >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->testSuite.testcaseCount >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->testSuite.testcaseCount);
    }
    this->testSuite.testcaseCount = v12;
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
      &path,
      "<xmlattr>.result",
      46,
      v13);
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get<std::string>(
      &p_name,
      (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v1 + 240),
      &path);
    std::string::operator=(&this->testSuite.result, &p_name);
    std::string::~string(&p_name);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
      &path,
      "<xmlattr>.total",
      46,
      v14);
    v15 = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get<int>(
            (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v1 + 240),
            &path);
    if ( *(_BYTE *)(((unsigned __int64)&this->testSuite.total >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->testSuite.total >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->testSuite.total);
    }
    this->testSuite.total = v15;
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
      &path,
      "<xmlattr>.passed",
      46,
      v16);
    v17 = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get<int>(
            (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v1 + 240),
            &path);
    if ( *(_BYTE *)(((unsigned __int64)&this->testSuite.passed >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->testSuite.passed >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->testSuite.passed);
    }
    this->testSuite.passed = v17;
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
      &path,
      "<xmlattr>.failed",
      46,
      v18);
    v19 = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get<int>(
            (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v1 + 240),
            &path);
    if ( *(_BYTE *)(((unsigned __int64)&this->testSuite.failed >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->testSuite.failed >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->testSuite.failed);
    }
    this->testSuite.failed = v19;
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
      &path,
      "<xmlattr>.start-time",
      46,
      v20);
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get<std::string>(
      &p_fullname,
      (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v1 + 240),
      &path);
    std::string::operator=(&this->testSuite.startTime, &p_fullname);
    std::string::~string(&p_fullname);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
    if ( *(_BYTE *)(((unsigned __int64)&this->curId >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->curId >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->curId);
    }
    curId = this->curId;
    if ( *(_BYTE *)(((unsigned __int64)&this->testSuite.testcaseCount >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->testSuite.testcaseCount >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->testSuite.testcaseCount);
    }
    this->curId = curId + this->testSuite.testcaseCount;
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::operator=(
      &this->lastPtr,
      (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)(v1 + 240));
    __for_range = &this->lastPtr;
    __for_begin.m_iterator.node = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::begin(&this->lastPtr).m_iterator.node;
    __for_end.m_iterator.node = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::end(__for_range).m_iterator.node;
    while ( boost::iterators::operator!=<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>&,long,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>&,long>(
              (const boost::iterators::iterator_facade<boost::property_tree::basic_ptree<std::string,std::string >::iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int> *)&__for_begin,
              (const boost::iterators::iterator_facade<boost::property_tree::basic_ptree<std::string,std::string >::iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int> *)&__for_end) )
    {
      child = boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>&,long,false,false>::operator*((const boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false> *const)&__for_begin);
      p_second = &child->second;
      boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
        &path,
        "<xmlattr>.type",
        46,
        v23);
      boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get_child_optional(
        (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v1 + 48),
        (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::path_type *)p_second);
      boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
      if ( !boost::optional<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>> &>::operator!((const boost::optional<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >&> *const)(v1 + 48)) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->curId >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->curId >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->curId);
        }
        ++this->curId;
      }
      boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>&,long,false,false>::operator++((boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false> *const)&__for_begin);
    }
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree((boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v1 + 240));
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree((boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v1 + 160));
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree((boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v1 + 80));
  }
  if ( v37 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 460: range 00000000004BC75C-00000000004BC8E7
TestCase *__cdecl Reporter::newCurCase(
        TestCase *retstr,
        Reporter *const this,
        std::string *p_name,
        std::string *p_fullname)
{
  std::string v6; // [rsp+20h] [rbp-1C0h] BYREF
  std::string v7; // [rsp+40h] [rbp-1A0h] BYREF
  TestCase v8; // [rsp+60h] [rbp-180h] BYREF

  std::string::basic_string(&v7, p_fullname);
  std::string::basic_string(&v6, p_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->curId >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->curId >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->curId);
  }
  TestCase::TestCase(&v8, ++this->curId, &v6, &v7);
  TestCase::operator=(&this->curCase, &v8);
  TestCase::~TestCase(&v8);
  std::string::~string(&v6);
  std::string::~string(&v7);
  TestCase::TestCase(retstr, &this->curCase);
  return retstr;
};

// Line 466: range 00000000004BD07E-00000000004BD209
TestSuite *__cdecl Reporter::newCurSuite(
        TestSuite *retstr,
        Reporter *const this,
        std::string *p_name,
        std::string *p_fullname)
{
  std::string v6; // [rsp+20h] [rbp-210h] BYREF
  std::string v7; // [rsp+40h] [rbp-1F0h] BYREF
  TestSuite v8; // [rsp+60h] [rbp-1D0h] BYREF

  std::string::basic_string(&v7, p_fullname);
  std::string::basic_string(&v6, p_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->curId >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->curId >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->curId);
  }
  TestSuite::TestSuite(&v8, ++this->curId, &v6, &v7);
  TestSuite::operator=(&this->curSuite, &v8);
  TestSuite::~TestSuite(&v8);
  std::string::~string(&v6);
  std::string::~string(&v7);
  TestSuite::TestSuite(retstr, &this->curSuite);
  return retstr;
};

// Line 477: range 00000000004BD20A-00000000004BD238
void __cdecl Reporter::addCurSuite(Reporter *const this)
{
  TestSuite::addSuite(&this->testSuite, &this->curSuite);
};

// Line 482: range 00000000004BD23A-00000000004BD268
void __cdecl Reporter::addCurCase2CurSuite(Reporter *const this)
{
  TestSuite::addCase(&this->curSuite, &this->curCase);
};

// Line 487: range 00000000004BD26A-00000000004BD2D8
void __cdecl Reporter::endCurCase(Reporter *const this, std::string *p_result)
{
  std::string v2; // [rsp+10h] [rbp-30h] BYREF

  std::string::basic_string(&v2, p_result);
  TestCase::endCase(&this->curCase, &v2);
  std::string::~string(&v2);
};

// Line 492: range 00000000004BD2DA-00000000004BD2FA
void __cdecl Reporter::endCurSuite(Reporter *const this)
{
  TestSuite::endSuite(&this->curSuite);
};

// Line 497: range 00000000004BD2FC-00000000004BD3A2
void __cdecl Reporter::addCurCasePro(Reporter *const this, std::string *p_name, std::string *p_value)
{
  std::string v3; // [rsp+20h] [rbp-50h] BYREF
  std::string v4; // [rsp+40h] [rbp-30h] BYREF

  std::string::basic_string(&v4, p_value);
  std::string::basic_string(&v3, p_name);
  TestCase::addProperty(&this->curCase, &v3, &v4);
  std::string::~string(&v3);
  std::string::~string(&v4);
};

// Line 502: range 00000000004BD3A4-00000000004BD44A
void __cdecl Reporter::addCurSuitePro(Reporter *const this, std::string *p_name, std::string *p_value)
{
  std::string v3; // [rsp+20h] [rbp-50h] BYREF
  std::string v4; // [rsp+40h] [rbp-30h] BYREF

  std::string::basic_string(&v4, p_value);
  std::string::basic_string(&v3, p_name);
  TestSuite::addProperty(&this->curSuite, &v3, &v4);
  std::string::~string(&v3);
  std::string::~string(&v4);
};

// Line 507: range 00000000004BD44C-00000000004BD4F2
void __cdecl Reporter::setCurCaseFailure(Reporter *const this, std::string *p_stackTrace, std::string *p_msg)
{
  std::string p_stackTrack; // [rsp+20h] [rbp-50h] BYREF
  std::string p_message; // [rsp+40h] [rbp-30h] BYREF

  std::string::basic_string(&p_message, p_msg);
  std::string::basic_string(&p_stackTrack, p_stackTrace);
  TestCase::setFailure(&this->curCase, &p_stackTrack, &p_message);
  std::string::~string(&p_stackTrack);
  std::string::~string(&p_message);
};

// Line 512: range 00000000004BD4F4-00000000004BD59A
void __cdecl Reporter::setCurSuiteFailure(Reporter *const this, std::string *p_stackTrace, std::string *p_msg)
{
  std::string p_stackTrack; // [rsp+20h] [rbp-50h] BYREF
  std::string p_message; // [rsp+40h] [rbp-30h] BYREF

  std::string::basic_string(&p_message, p_msg);
  std::string::basic_string(&p_stackTrack, p_stackTrace);
  TestSuite::setFailure(&this->curSuite, &p_stackTrack, &p_message);
  std::string::~string(&p_stackTrack);
  std::string::~string(&p_message);
};

// Line 517: range 00000000004BD59C-00000000004BD5EE
void __cdecl Reporter::endReport(Reporter *const this)
{
  TestSuite::endSuite(&this->testSuite);
  TestRun::addSuite(&this->testRun, &this->testSuite);
  TestRun::endRun(&this->testRun);
  Reporter::save2Xml(this);
};

// Line 525: range 00000000004BD610-00000000004BDA6C
void __cdecl Reporter::save2Xml(Reporter *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *p_second; // r14
  boost::property_tree::id_translator<std::string > v5; // cl
  boost::property_tree::id_translator<std::string > v6; // cl
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v7; // r15
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v8; // r14
  boost::property_tree::id_translator<std::string > v9; // cl
  std::allocator<char> __a; // [rsp+1Fh] [rbp-191h] BYREF
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::iterator __for_begin; // [rsp+20h] [rbp-190h] BYREF
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::iterator __for_end; // [rsp+28h] [rbp-188h] BYREF
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *__for_range; // [rsp+30h] [rbp-180h]
  std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > *child; // [rsp+38h] [rbp-178h]
  std::string enc; // [rsp+40h] [rbp-170h] BYREF
  std::string filename; // [rsp+60h] [rbp-150h] BYREF
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > > path; // [rsp+80h] [rbp-130h] BYREF
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > > v18; // [rsp+B0h] [rbp-100h] BYREF
  char v19[208]; // [rsp+E0h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 8 8 type:530 80 40 14 testRunPtr:527";
  *(_QWORD *)(v1 + 16) = Reporter::save2Xml;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862721] = -234881024;
  v3[536862722] = 62194;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  TestRun::getPtree[abi:cxx11]((boost::property_tree::ptree *)(v1 + 80), &this->testRun);
  __for_range = &this->lastPtr;
  __for_begin.m_iterator.node = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::begin(&this->lastPtr).m_iterator.node;
  __for_end.m_iterator.node = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::end(&this->lastPtr).m_iterator.node;
  while ( boost::iterators::operator!=<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>&,long,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>&,long>(
            (const boost::iterators::iterator_facade<boost::property_tree::basic_ptree<std::string,std::string >::iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int> *)&__for_begin,
            (const boost::iterators::iterator_facade<boost::property_tree::basic_ptree<std::string,std::string >::iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int> *)&__for_end) )
  {
    child = boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>&,long,false,false>::operator*((const boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false> *const)&__for_begin);
    p_second = &child->second;
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
      &v18,
      "<xmlattr>.type",
      46,
      v5);
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get_child_optional(
      (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v1 + 48),
      (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::path_type *)p_second);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&v18);
    if ( !boost::optional<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>> &>::operator!((const boost::optional<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >&> *const)(v1 + 48)) )
    {
      boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
        &path,
        "test-run.test-suite",
        46,
        v6);
      v7 = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get_child(
             (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v1 + 80),
             &path);
      v8 = &child->second;
      boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
        &v18,
        "test-suite",
        46,
        v9);
      boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::add_child(v7, &v18, v8);
      boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&v18);
      boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
    }
    boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>&,long,false,false>::operator++((boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false> *const)&__for_begin);
  }
  boost::property_tree::xml_parser::widen<std::string>(&enc, "utf-8");
  boost::property_tree::xml_parser::xml_writer_settings<std::string>::xml_writer_settings(
    (boost::property_tree::xml_parser::xml_writer_settings<std::string > *const)&v18,
    9,
    1uLL,
    &enc);
  std::locale::locale((std::locale *)(v1 + 48));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&filename, "results.xml", &__a);
  boost::property_tree::xml_parser::write_xml<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>(
    &filename,
    (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)(v1 + 80),
    (const std::locale *)(v1 + 48),
    (const boost::property_tree::xml_parser::xml_writer_settings<std::string > *)&v18);
  std::string::~string(&filename);
  std::allocator<char>::~allocator(&__a);
  std::locale::~locale((std::locale *)(v1 + 48));
  boost::property_tree::xml_parser::xml_writer_settings<std::string>::~xml_writer_settings((boost::property_tree::xml_parser::xml_writer_settings<std::string > *const)&v18);
  std::string::~string(&enc);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree((boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v1 + 80));
  if ( v19 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};
