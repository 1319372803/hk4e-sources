// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/robot/robot_reporter.cpp

// Line 9: range 000000000047D144-000000000047D2A5
void __cdecl PropertyOnce::PropertyOnce(
        PropertyOnce *const this,
        const std::string *name,
        const std::string *value,
        const ReporterTypes *types)
{
  ReporterTypes v4; // ecx
  std::string __str; // [rsp+20h] [rbp-30h] BYREF

  std::string::basic_string(&this->time_);
  std::string::basic_string(&this->name_);
  std::string::basic_string(&this->value_);
  std::string::operator=(&this->name_, name);
  std::string::operator=(&this->value_, value);
  if ( *(_BYTE *)(((unsigned __int64)types >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)types & 7) + 3) >= *(_BYTE *)(((unsigned __int64)types >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(types);
  }
  v4 = *types;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->types_ = v4;
  common::tools::TimeUtils::getNowStr[abi:cxx11](&__str);
  std::string::operator=(&this->time_, &__str);
  std::string::~string(&__str);
};

// Line 18: range 000000000047D2A6-000000000047D41E
boost::property_tree::ptree *__cdecl PropertyOnce::getPtree[abi:cxx11](
        boost::property_tree::ptree *retstr,
        PropertyOnce *const this)
{
  char v2; // al
  bool v3; // cl
  boost::property_tree::id_translator<std::string > v4; // cl
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > > path; // [rsp+10h] [rbp-40h] BYREF

  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(retstr);
  v2 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  v3 = v2 != 0;
  if ( v2 != 0 && v2 <= 3 )
    __asan_report_load4(this);
  if ( this->types_ != TYPES_PROPERTY )
  {
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
      &path,
      "<xmlattr>.time",
      46,
      (boost::property_tree::id_translator<std::string >)v3);
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
      retstr,
      &path,
      &this->time_);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  }
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.name",
    46,
    (boost::property_tree::id_translator<std::string >)v3);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    retstr,
    &path,
    &this->name_);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.value",
    46,
    v4);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    retstr,
    &path,
    &this->value_);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  return retstr;
};

// Line 31: range 000000000047D420-000000000047D4F2
void __cdecl PropertyUp::PropertyUp(PropertyUp *const this, const std::string *name, uint32_t value)
{
  std::string::basic_string(&this->name_);
  if ( *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value_);
  }
  this->value_ = 0;
  std::string::operator=(&this->name_, name);
  if ( *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value_);
  }
  this->value_ = value;
};

// Line 38: range 000000000047D4F4-000000000047D562
void __cdecl PropertyUp::upValue(PropertyUp *const this, const std::string *name, uint32_t value)
{
  std::string::operator=(&this->name_, name);
  if ( *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->value_);
  }
  this->value_ += value;
};

// Line 44: range 000000000047D564-000000000047D64B
boost::property_tree::ptree *__cdecl PropertyUp::getPtree[abi:cxx11](
        boost::property_tree::ptree *retstr,
        PropertyUp *const this)
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
    &this->name_);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.value",
    46,
    v3);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<unsigned int>(
    retstr,
    &path,
    &this->value_);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  return retstr;
};

// Line 53: range 000000000047D64C-000000000047D734
void __cdecl Case::Case(Case *const this)
{
  std::string __str; // [rsp+10h] [rbp-30h] BYREF

  std::string::basic_string(&this->time_);
  std::string::basic_string(&this->name_);
  std::vector<PropertyOnce>::vector(&this->properties_once_vec_);
  std::vector<PropertyUp>::vector(&this->properties_up_vec_);
  std::map<std::string,unsigned int>::map(&this->up_index_map_);
  common::tools::TimeUtils::getNowStr[abi:cxx11](&__str);
  std::string::operator=(&this->time_, &__str);
  std::string::~string(&__str);
};

// Line 59: range 000000000047D736-000000000047D7CC
void __cdecl Case::addPropertyOnce(
        Case *const this,
        const std::string *name,
        const std::string *value,
        const ReporterTypes *types)
{
  PropertyOnce __x; // [rsp+20h] [rbp-80h] BYREF

  PropertyOnce::PropertyOnce(&__x, name, value, types);
  std::vector<PropertyOnce>::push_back(&this->properties_once_vec_, &__x);
  PropertyOnce::~PropertyOnce(&__x);
};

// Line 64: range 000000000047D7CE-000000000047D970
void __cdecl Case::addPropertyUp(Case *const this, const std::string *name, uint32_t value)
{
  int v3; // ebx
  std::map<std::string,unsigned int>::mapped_type *v4; // rax
  _DWORD *v5; // rdx
  std::map<std::string,unsigned int>::mapped_type *v6; // rax
  unsigned int *v7; // rdx
  PropertyUp *v8; // rcx
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Self __x; // [rsp+20h] [rbp-50h] BYREF
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Self __y; // [rsp+28h] [rbp-48h] BYREF
  PropertyUp v12; // [rsp+30h] [rbp-40h] BYREF

  __y._M_node = std::map<std::string,unsigned int>::end(&this->up_index_map_)._M_node;
  __x._M_node = std::map<std::string,unsigned int>::find(&this->up_index_map_, name)._M_node;
  if ( std::operator==(&__x, &__y) )
  {
    v3 = std::vector<PropertyUp>::size(&this->properties_up_vec_);
    v4 = std::map<std::string,unsigned int>::operator[](&this->up_index_map_, name);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v4);
    }
    *v5 = v3;
    PropertyUp::PropertyUp(&v12, name, value);
    std::vector<PropertyUp>::push_back(&this->properties_up_vec_, &v12);
    PropertyUp::~PropertyUp(&v12);
  }
  else
  {
    v6 = std::map<std::string,unsigned int>::operator[](&this->up_index_map_, name);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    v8 = std::vector<PropertyUp>::operator[](&this->properties_up_vec_, *v7);
    PropertyUp::upValue(v8, name, value);
  }
};

// Line 77: range 000000000047D972-000000000047E1B0
boost::property_tree::ptree *__cdecl Case::getPtree[abi:cxx11](boost::property_tree::ptree *retstr, Case *const this)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  boost::property_tree::id_translator<std::string > v5; // cl
  boost::property_tree::id_translator<std::string > v6; // cl
  boost::property_tree::id_translator<std::string > v7; // cl
  ReporterTypes types; // eax
  boost::property_tree::id_translator<std::string > v9; // cl
  boost::property_tree::id_translator<std::string > v10; // cl
  boost::property_tree::id_translator<std::string > v11; // cl
  boost::property_tree::id_translator<std::string > v12; // cl
  boost::property_tree::id_translator<std::string > v13; // cl
  std::vector<PropertyUp> *p_properties_up_vec; // rcx
  PropertyUp *v15; // rax
  boost::property_tree::id_translator<std::string > v16; // cl
  std::vector<PropertyOnce>::iterator __for_begin; // [rsp+10h] [rbp-180h] BYREF
  std::vector<PropertyOnce>::iterator __for_end; // [rsp+18h] [rbp-178h] BYREF
  std::vector<PropertyOnce> *__for_range; // [rsp+20h] [rbp-170h]
  std::map<std::string,unsigned int> *__for_range_0; // [rsp+28h] [rbp-168h]
  std::pair<const std::string,unsigned int> *p_0; // [rsp+30h] [rbp-160h]
  PropertyOnce *p; // [rsp+38h] [rbp-158h]
  boost::property_tree::ptree value; // [rsp+40h] [rbp-150h] BYREF
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > > path; // [rsp+70h] [rbp-120h] BYREF
  char v26[240]; // [rsp+A0h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 40 22 properties_once_ptr:82 112 40 21 properties_up_ptr:106";
  *(_QWORD *)(v2 + 16) = Case::getPtree[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959360;
  v4[536862723] = 62194;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(retstr);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.time",
    46,
    v5);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    retstr,
    &path,
    &this->time_);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "<xmlattr>.name",
    46,
    v6);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string>(
    retstr,
    &path,
    &this->name_);
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree((boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 32));
  __for_range = &this->properties_once_vec_;
  __for_begin._M_current = std::vector<PropertyOnce>::begin(&this->properties_once_vec_)._M_current;
  __for_end._M_current = std::vector<PropertyOnce>::end(&this->properties_once_vec_)._M_current;
  while ( __gnu_cxx::operator!=<PropertyOnce *,std::vector<PropertyOnce>>(&__for_begin, &__for_end) )
  {
    p = __gnu_cxx::__normal_iterator<PropertyOnce *,std::vector<PropertyOnce>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(p);
    }
    types = p->types_;
    if ( p->types_ == TYPES_ERROR )
    {
      PropertyOnce::getPtree[abi:cxx11](&value, p);
      boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
        &path,
        "error",
        46,
        v12);
      boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::add_child(
        (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 32),
        &path,
        &value);
      boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
      boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&value);
    }
    else if ( types <= TYPES_ERROR )
    {
      if ( types == TYPES_WARNING )
      {
        PropertyOnce::getPtree[abi:cxx11](&value, p);
        boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
          &path,
          "warning",
          46,
          v11);
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::add_child(
          (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 32),
          &path,
          &value);
        boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&value);
      }
      else if ( types <= TYPES_WARNING )
      {
        if ( types == TYPES_PROPERTY )
        {
          PropertyOnce::getPtree[abi:cxx11](&value, p);
          boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
            &path,
            "property",
            46,
            v9);
          boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::add_child(
            (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 32),
            &path,
            &value);
          boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
          boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&value);
        }
        else if ( types == TYPES_DEBUG )
        {
          PropertyOnce::getPtree[abi:cxx11](&value, p);
          boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
            &path,
            "debug",
            46,
            v10);
          boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::add_child(
            (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 32),
            &path,
            &value);
          boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
          boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&value);
        }
      }
    }
    __gnu_cxx::__normal_iterator<PropertyOnce *,std::vector<PropertyOnce>>::operator++(&__for_begin);
  }
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "properties",
    46,
    v7);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::add_child(
    retstr,
    &path,
    (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::self_type *)(v2 + 32));
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree((boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 112));
  __for_range_0 = &this->up_index_map_;
  __for_begin._M_current = (PropertyOnce *)std::map<std::string,unsigned int>::begin(&this->up_index_map_)._M_node;
  __for_end._M_current = (PropertyOnce *)std::map<std::string,unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Self *)&__for_end) )
  {
    p_0 = std::_Rb_tree_iterator<std::pair<std::string const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> > *const)&__for_begin);
    p_properties_up_vec = &this->properties_up_vec_;
    if ( *(_BYTE *)(((unsigned __int64)&p_0->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&p_0->second >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&p_0->second);
    }
    v15 = std::vector<PropertyUp>::operator[](p_properties_up_vec, p_0->second);
    PropertyUp::getPtree[abi:cxx11](&value, v15);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
      &path,
      off_DEC27C0,
      46,
      v16);
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::add_child(
      (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 112),
      &path,
      &value);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&value);
    std::_Rb_tree_iterator<std::pair<std::string const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> > *const)&__for_begin);
  }
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
    &path,
    "properties-up",
    46,
    v13);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::add_child(
    retstr,
    &path,
    (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::self_type *)(v2 + 112));
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree((boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 112));
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree((boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v2 + 32));
  if ( v26 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 118: range 000000000047E1B2-000000000047E24D
void __cdecl RobotReporter::RobotReporter(RobotReporter *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  MultiThreadSingleton<RobotReporter>::MultiThreadSingleton((MultiThreadSingleton<RobotReporter> *const)this);
  std::map<std::string,Case>::map(&this->case_vec_);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&this->file_path_, "default.xml", &__a);
  std::allocator<char>::~allocator(&__a);
  std::mutex::mutex(&this->mutex_);
};

// Line 123: range 000000000047E24E-000000000047E39C
void __cdecl RobotReporter::addPropertyUp(
        RobotReporter *const this,
        const std::string *robot,
        const std::string *name,
        uint32_t value)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::string *p_name; // rdx
  Case *v8; // rcx
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 8 lock:124";
  *(_QWORD *)(v4 + 16) = RobotReporter::addPropertyUp;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v4 + 32), &this->mutex_);
  p_name = &std::map<std::string,Case>::operator[](&this->case_vec_, robot)->name_;
  std::string::operator=(p_name, robot);
  v8 = std::map<std::string,Case>::operator[](&this->case_vec_, robot);
  Case::addPropertyUp(v8, name, value);
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v4 + 32));
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 130: range 000000000047E39E-000000000047E502
void __cdecl RobotReporter::addProperty(
        RobotReporter *const this,
        const std::string *robot,
        const std::string *name,
        const std::string *value)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::string *p_name; // rdx
  Case *v8; // rdi
  ReporterTypes types; // [rsp+2Ch] [rbp-64h] BYREF
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 8 lock:131";
  *(_QWORD *)(v4 + 16) = RobotReporter::addProperty;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v4 + 32), &this->mutex_);
  p_name = &std::map<std::string,Case>::operator[](&this->case_vec_, robot)->name_;
  std::string::operator=(p_name, robot);
  v8 = std::map<std::string,Case>::operator[](&this->case_vec_, robot);
  types = TYPES_PROPERTY;
  Case::addPropertyOnce(v8, name, value, &types);
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v4 + 32));
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 137: range 000000000047E504-000000000047E668
void __cdecl RobotReporter::addDebug(
        RobotReporter *const this,
        const std::string *robot,
        const std::string *name,
        const std::string *value)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::string *p_name; // rdx
  Case *v8; // rdi
  ReporterTypes types; // [rsp+2Ch] [rbp-64h] BYREF
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 8 lock:138";
  *(_QWORD *)(v4 + 16) = RobotReporter::addDebug;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v4 + 32), &this->mutex_);
  p_name = &std::map<std::string,Case>::operator[](&this->case_vec_, robot)->name_;
  std::string::operator=(p_name, robot);
  v8 = std::map<std::string,Case>::operator[](&this->case_vec_, robot);
  types = TYPES_DEBUG;
  Case::addPropertyOnce(v8, name, value, &types);
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v4 + 32));
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 144: range 000000000047E66A-000000000047E7CE
void __cdecl RobotReporter::addWarning(
        RobotReporter *const this,
        const std::string *robot,
        const std::string *name,
        const std::string *value)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::string *p_name; // rdx
  Case *v8; // rdi
  ReporterTypes types; // [rsp+2Ch] [rbp-64h] BYREF
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 8 lock:145";
  *(_QWORD *)(v4 + 16) = RobotReporter::addWarning;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v4 + 32), &this->mutex_);
  p_name = &std::map<std::string,Case>::operator[](&this->case_vec_, robot)->name_;
  std::string::operator=(p_name, robot);
  v8 = std::map<std::string,Case>::operator[](&this->case_vec_, robot);
  types = TYPES_WARNING;
  Case::addPropertyOnce(v8, name, value, &types);
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v4 + 32));
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 151: range 000000000047E7D0-000000000047E934
void __cdecl RobotReporter::addError(
        RobotReporter *const this,
        const std::string *robot,
        const std::string *name,
        const std::string *value)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::string *p_name; // rdx
  Case *v8; // rdi
  ReporterTypes types; // [rsp+2Ch] [rbp-64h] BYREF
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 8 lock:152";
  *(_QWORD *)(v4 + 16) = RobotReporter::addError;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v4 + 32), &this->mutex_);
  p_name = &std::map<std::string,Case>::operator[](&this->case_vec_, robot)->name_;
  std::string::operator=(p_name, robot);
  v8 = std::map<std::string,Case>::operator[](&this->case_vec_, robot);
  types = TYPES_ERROR;
  Case::addPropertyOnce(v8, name, value, &types);
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v4 + 32));
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 158: range 000000000047E936-000000000047E95F
void __cdecl RobotReporter::setSavePath(RobotReporter *const this, const std::string *file_path)
{
  std::string::operator=(&this->file_path_, file_path);
};

// Line 163: range 000000000047E960-000000000047EB47
void __cdecl RobotReporter::registerScriptFunc(lua_State_0 *lua_state_ptr)
{
  luabind::class_<RobotReporter,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v1; // rax
  luabind::class_<RobotReporter,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v2; // rax
  luabind::class_<RobotReporter,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v3; // rax
  luabind::class_<RobotReporter,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v4; // rax
  luabind::class_<RobotReporter,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v5; // rax
  luabind::class_<RobotReporter,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v6; // rax
  luabind::scope v7; // [rsp+58h] [rbp-68h] BYREF
  luabind::module_ v8; // [rsp+60h] [rbp-60h] BYREF
  luabind::class_<RobotReporter,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> v9; // [rsp+70h] [rbp-50h] BYREF

  v8 = luabind::module(lua_state_ptr, 0LL);
  luabind::class_<RobotReporter,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    &v9,
    "RobotReporter");
  v1 = luabind::class_<RobotReporter,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (RobotReporter::*)(std::string const&,std::string const&,unsigned int)>(
         &v9,
         "addPropertyUp",
         (void (*)(RobotReporter *, const std::string *, const std::string *, unsigned int))RobotReporter::addPropertyUp);
  v2 = luabind::class_<RobotReporter,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (RobotReporter::*)(std::string const&,std::string const&,std::string const&)>(
         v1,
         "addProperty",
         (void (*)(RobotReporter *, const std::string *, const std::string *, const std::string *))RobotReporter::addProperty);
  v3 = luabind::class_<RobotReporter,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (RobotReporter::*)(std::string const&,std::string const&,std::string const&)>(
         v2,
         "addDebug",
         (void (*)(RobotReporter *, const std::string *, const std::string *, const std::string *))RobotReporter::addDebug);
  v4 = luabind::class_<RobotReporter,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (RobotReporter::*)(std::string const&,std::string const&,std::string const&)>(
         v3,
         "addWarning",
         (void (*)(RobotReporter *, const std::string *, const std::string *, const std::string *))RobotReporter::addWarning);
  v5 = luabind::class_<RobotReporter,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (RobotReporter::*)(std::string const&,std::string const&,std::string const&)>(
         v4,
         "addError",
         (void (*)(RobotReporter *, const std::string *, const std::string *, const std::string *))RobotReporter::addError);
  v6 = luabind::class_<RobotReporter,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (RobotReporter::*)(std::string const&)>(
         v5,
         "setSavePath",
         (void (*)(RobotReporter *, const std::string *))RobotReporter::setSavePath);
  luabind::scope::scope(&v7, v6);
  luabind::module_::operator[](&v8, &v7);
  luabind::scope::~scope(&v7);
  luabind::class_<RobotReporter,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_(&v9);
};

// Line 177: range 000000000047EB48-000000000047F118
void __cdecl RobotReporter::endReport(RobotReporter *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  bool v4; // r14
  boost::property_tree::id_translator<std::string > v5; // cl
  boost::property_tree::id_translator<std::string > v6; // cl
  std::allocator<char> __a; // [rsp+17h] [rbp-159h] BYREF
  std::map<std::string,Case>::iterator __for_begin; // [rsp+18h] [rbp-158h] BYREF
  std::map<std::string,Case>::iterator __for_end; // [rsp+20h] [rbp-150h] BYREF
  std::map<std::string,Case> *__for_range; // [rsp+30h] [rbp-140h]
  std::pair<const std::string,Case> *case_item; // [rsp+38h] [rbp-138h]
  std::string d; // [rsp+40h] [rbp-130h] BYREF
  std::filesystem::__cxx11::path __p; // [rsp+60h] [rbp-110h] BYREF
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > > path; // [rsp+90h] [rbp-E0h] BYREF
  char v15[176]; // [rsp+C0h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 40 12 res_ptr_:178";
  *(_QWORD *)(v1 + 16) = RobotReporter::endReport;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree((boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v1 + 48));
  std::filesystem::__cxx11::path::path<std::string,std::filesystem::__cxx11::path>(&__p, &this->file_path_, auto_format);
  v4 = std::filesystem::exists(&__p);
  std::filesystem::__cxx11::path::~path(&__p);
  if ( v4 )
  {
    std::locale::locale((std::locale *)&__for_end);
    boost::property_tree::xml_parser::read_xml<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>(
      &this->file_path_,
      (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)(v1 + 48),
      4,
      (const std::locale *)&__for_end);
    std::locale::~locale((std::locale *)&__for_end);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&d, "**************************************************", &__a);
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(
      (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)&__p,
      &d);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
      &path,
      &byte_DEC2B20,
      46,
      v5);
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::add_child(
      (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v1 + 48),
      &path,
      (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::self_type *)&__p);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree((boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)&__p);
    std::string::~string(&d);
    std::allocator<char>::~allocator(&__a);
  }
  __for_range = &this->case_vec_;
  __for_begin._M_node = std::map<std::string,Case>::begin(&this->case_vec_)._M_node;
  __for_end._M_node = std::map<std::string,Case>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    case_item = std::_Rb_tree_iterator<std::pair<std::string const,Case>>::operator*(&__for_begin);
    Case::getPtree[abi:cxx11]((boost::property_tree::ptree *)&__p, &case_item->second);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
      &path,
      "test-case",
      46,
      v6);
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::add_child(
      (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v1 + 48),
      &path,
      (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::self_type *)&__p);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&path);
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree((boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)&__p);
    std::_Rb_tree_iterator<std::pair<std::string const,Case>>::operator++(&__for_begin);
  }
  boost::property_tree::xml_parser::widen<std::string>(&d, "utf-8");
  boost::property_tree::xml_parser::xml_writer_settings<std::string>::xml_writer_settings(
    (boost::property_tree::xml_parser::xml_writer_settings<std::string > *const)&path,
    32,
    4uLL,
    &d);
  std::locale::locale((std::locale *)&__for_end);
  boost::property_tree::xml_parser::write_xml<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>(
    &this->file_path_,
    (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)(v1 + 48),
    (const std::locale *)&__for_end,
    (const boost::property_tree::xml_parser::xml_writer_settings<std::string > *)&path);
  std::locale::~locale((std::locale *)&__for_end);
  boost::property_tree::xml_parser::xml_writer_settings<std::string>::~xml_writer_settings((boost::property_tree::xml_parser::xml_writer_settings<std::string > *const)&path);
  std::string::~string(&d);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree((boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v1 + 48));
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 201: range 000000000047F11A-000000000047F45E
void __cdecl ReporterReqRspHelper::send(ReporterReqRspHelper *const this, uint16_t cmd_id)
{
  std::string *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::string *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  uint64_t NowMs; // r14
  unsigned __int64 v9; // rax
  uint16_t cmd_ida; // [rsp+4h] [rbp-10Ch]
  size_t pos; // [rsp+18h] [rbp-F8h]
  std::string __lhs; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (std::string *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = (std::string *)v3;
  }
  v2->_M_dataplus._M_p = (std::string::pointer)1102416563;
  v2->_M_string_length = (std::string::size_type)"2 32 32 11 req_str:202 96 32 11 rsp_str:207";
  v2->_anon_0._M_allocated_capacity = (std::string::size_type)ReporterReqRspHelper::send;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  v5 = ProtoUtils::getCmdName[abi:cxx11](cmd_id);
  std::string::basic_string(v2 + 1, v5);
  pos = std::string::find(v2 + 1, off_DEB40E0, 0LL);
  if ( pos != -1LL )
  {
    std::string::substr(&__lhs, v2 + 1, 0LL, pos);
    std::operator+<char>(v2 + 3, &__lhs, "Rsp");
    std::string::~string(&__lhs);
    std::operator+<char>(&__lhs, "proto.", v2 + 3);
    cmd_ida = ProtoUtils::getCmdId(&__lhs);
    std::string::~string(&__lhs);
    if ( !cmd_ida )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__lhs,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot_reporter.cpp",
        "send",
        212);
      v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             (common::milog::MiLogStream *const)&__lhs,
             (const char (*)[18])"[reporter] found ");
      v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, v2 + 3);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])" error");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__lhs);
    }
    NowMs = common::tools::TimeUtils::getNowMs();
    v9 = (unsigned __int64)common::tools::SafeMap<unsigned long,19u>::operator[](&this->record_send_ms_map_, cmd_ida);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_store8();
    *(_QWORD *)v9 = NowMs;
    std::string::~string(v2 + 3);
  }
  std::string::~string(v2 + 1);
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    v2->_M_dataplus._M_p = (std::string::pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 218: range 000000000047F4D2-000000000047F72F
void __fastcall ReporterReqRspHelper::recv(ReporterReqRspHelper *const this, uint16_t cmd_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t v5; // esi
  common::milog::MiLogStream *v6; // rax
  ReporterReqRspHelper::recv::<lambda(std::vector<long unsigned int>&)> v7; // [rsp-20h] [rbp-100h]
  __int64 __f; // [rsp+10h] [rbp-D0h]
  std::function<void(std::vector<long unsigned int>&)> p_func; // [rsp+30h] [rbp-B0h] BYREF
  char v10[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 2 10 cmd_id:217 64 16 11 send_ms:220";
  *(_QWORD *)(v2 + 16) = ReporterReqRspHelper::recv;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234688015;
  v4[536862722] = -202178560;
  *(_WORD *)(v2 + 48) = cmd_id;
  v5 = *(unsigned __int16 *)(v2 + 48);
  *(std::optional<long unsigned int> *)(v2 + 64) = common::tools::SafeMap<unsigned long,19u>::find(
                                                     &this->record_send_ms_map_,
                                                     v5);
  if ( std::operator!=<unsigned long>((const std::optional<long unsigned int> *)(v2 + 64), (std::nullopt_t)v5) )
  {
    LOWORD(__f) = *(_WORD *)(v2 + 48);
    v7.__send_ms = *(std::optional<long unsigned int> *)(v2 + 64);
    *(_QWORD *)&v7.__cmd_id = __f;
    std::function<void ()(std::vector<unsigned long> &)>::function<ReporterReqRspHelper::recv(unsigned short)::{lambda(std::vector<unsigned long> &)#1},void,void>(
      &p_func,
      v7);
    common::tools::SafeMap<std::vector<unsigned long>,19u>::get(
      &this->record_use_ms_map_,
      *(unsigned __int16 *)(v2 + 48),
      &p_func);
    std::function<void ()(std::vector<unsigned long> &)>::~function(&p_func);
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_func,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot_reporter.cpp",
      "recv",
      230);
    v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           (common::milog::MiLogStream *const)&p_func,
           (const char (*)[35])"[reporter] found not except Rsp : ");
    common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v6, (const unsigned __int16 *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 223: range 000000000047F460-000000000047F4D0
void __cdecl ReporterReqRspHelper::recv(unsigned short)::{lambda(std::vector<unsigned long> &)#1}::operator()(
        const ReporterReqRspHelper::recv::<lambda(std::vector<long unsigned int>&)> *const __closure,
        std::vector<long unsigned int> *vec)
{
  uint64_t NowMs; // rbx
  unsigned __int64 v3; // rax
  std::vector<long unsigned int>::value_type __x[3]; // [rsp+18h] [rbp-18h] BYREF

  NowMs = common::tools::TimeUtils::getNowMs();
  v3 = (unsigned __int64)std::optional<unsigned long>::operator*(&__closure->__send_ms);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(v3);
  __x[0] = NowMs - *(_QWORD *)v3;
  std::vector<unsigned long>::push_back(vec, __x);
};

// Line 235: range 000000000047F784-000000000047F7F2
void __cdecl ReporterReqRspHelper::getAllCmdId(ReporterReqRspHelper *const this, std::set<short unsigned int> *st)
{
  std::function<void(unsigned int,std::vector<long unsigned int>&)> p_func; // [rsp+10h] [rbp-30h] BYREF

  std::function<void ()(unsigned int,std::vector<unsigned long> &)>::function<ReporterReqRspHelper::getAllCmdId(std::set<unsigned short> &)::{lambda(unsigned int,std::vector<unsigned long> &)#1},void,void>(
    &p_func,
    (ReporterReqRspHelper::getAllCmdId::<lambda(uint32_t, std::vector<long unsigned int>&)>)st);
  common::tools::SafeMap<std::vector<unsigned long>,19u>::foreach(&this->record_use_ms_map_, &p_func);
  std::function<void ()(unsigned int,std::vector<unsigned long> &)>::~function(&p_func);
};

// Line 236: range 000000000047F730-000000000047F783
void __cdecl ReporterReqRspHelper::getAllCmdId(std::set<unsigned short> &)::{lambda(unsigned int,std::vector<unsigned long> &)#1}::operator()(
        const ReporterReqRspHelper::getAllCmdId::<lambda(uint32_t, std::vector<long unsigned int>&)> *const __closure,
        uint32_t cmd_id,
        std::vector<long unsigned int> *temp)
{
  std::set<short unsigned int> *st; // rax
  std::set<short unsigned int>::value_type __x; // [rsp+2Eh] [rbp-2h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  st = __closure->__st;
  __x = cmd_id;
  std::set<unsigned short>::insert(st, &__x);
};

// Line 243: range 000000000047F7F4-000000000047F883
uint64_t __cdecl ReporterReqRspHelper::getMaxMs(ReporterReqRspHelper *const this, uint16_t cmd_id)
{
  unsigned __int64 *M_current; // rbx
  std::vector<long unsigned int>::iterator v3; // rax
  uint64_t *v4; // rax
  __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > v6; // [rsp+10h] [rbp-20h] BYREF
  std::vector<long unsigned int> *vec; // [rsp+18h] [rbp-18h]

  vec = common::tools::SafeMap<std::vector<unsigned long>,19u>::operator[](&this->record_use_ms_map_, cmd_id);
  M_current = std::vector<unsigned long>::end(vec)._M_current;
  v3._M_current = std::vector<unsigned long>::begin(vec)._M_current;
  v6._M_current = std::max_element<__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>>(
                    v3,
                    (__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> >)M_current)._M_current;
  v4 = __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&v6);
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    v4 = (uint64_t *)__asan_report_load8(v4);
  return *v4;
};

// Line 249: range 000000000047F884-000000000047F913
uint64_t __cdecl ReporterReqRspHelper::getMinMs(ReporterReqRspHelper *const this, uint16_t cmd_id)
{
  unsigned __int64 *M_current; // rbx
  std::vector<long unsigned int>::iterator v3; // rax
  uint64_t *v4; // rax
  __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > v6; // [rsp+10h] [rbp-20h] BYREF
  std::vector<long unsigned int> *vec; // [rsp+18h] [rbp-18h]

  vec = common::tools::SafeMap<std::vector<unsigned long>,19u>::operator[](&this->record_use_ms_map_, cmd_id);
  M_current = std::vector<unsigned long>::end(vec)._M_current;
  v3._M_current = std::vector<unsigned long>::begin(vec)._M_current;
  v6._M_current = std::min_element<__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>>(
                    v3,
                    (__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> >)M_current)._M_current;
  v4 = __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&v6);
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    v4 = (uint64_t *)__asan_report_load8(v4);
  return *v4;
};

// Line 255: range 000000000047F914-000000000047F988
uint64_t __cdecl ReporterReqRspHelper::getMidMs(ReporterReqRspHelper *const this, uint16_t cmd_id)
{
  std::vector<long unsigned int>::size_type v2; // rdx
  uint64_t *v3; // rax
  std::vector<long unsigned int> *vec; // [rsp+18h] [rbp-8h]

  vec = common::tools::SafeMap<std::vector<unsigned long>,19u>::operator[](&this->record_use_ms_map_, cmd_id);
  v2 = std::vector<unsigned long>::size(vec) >> 1;
  v3 = std::vector<unsigned long>::operator[](vec, v2);
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    v3 = (uint64_t *)__asan_report_load8(v3);
  return *v3;
};

// Line 261: range 000000000047F98A-000000000047FA66
uint64_t __cdecl ReporterReqRspHelper::getAvgMs(ReporterReqRspHelper *const this, uint16_t cmd_id)
{
  unsigned __int64 *v2; // rax
  std::vector<long unsigned int>::size_type v3; // rax
  std::vector<long unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<long unsigned int>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  uint64_t sum; // [rsp+20h] [rbp-20h]
  std::vector<long unsigned int> *vec; // [rsp+28h] [rbp-18h]
  std::vector<long unsigned int> *__for_range; // [rsp+30h] [rbp-10h]
  unsigned __int64 *n; // [rsp+38h] [rbp-8h]

  vec = common::tools::SafeMap<std::vector<unsigned long>,19u>::operator[](&this->record_use_ms_map_, cmd_id);
  sum = 0LL;
  __for_range = vec;
  __for_begin._M_current = std::vector<unsigned long>::begin(vec)._M_current;
  __for_end._M_current = std::vector<unsigned long>::end(vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin, &__for_end) )
  {
    v2 = __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
    n = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v2);
    sum += *n;
    __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
  }
  v3 = std::vector<unsigned long>::size(vec);
  return sum / v3;
};

// Line 269: range 000000000047FA68-000000000047FAA4
uint32_t __cdecl ReporterReqRspHelper::getCnt(ReporterReqRspHelper *const this, uint16_t cmd_id)
{
  std::vector<long unsigned int> *vec; // [rsp+18h] [rbp-8h]

  vec = common::tools::SafeMap<std::vector<unsigned long>,19u>::operator[](&this->record_use_ms_map_, cmd_id);
  return std::vector<unsigned long>::size(vec);
};

// Line 275: range 000000000047FAA6-000000000048032D
void __cdecl ReporterReqRspHelper::settle(ReporterReqRspHelper *const this, const std::string *robot)
{
  std::set<short unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  ReporterReqRspHelper *v5; // rax
  RobotReporter *v6; // r14
  const std::string *v7; // r15
  RobotReporter *v8; // r14
  ReporterReqRspHelper *v9; // rcx
  unsigned __int64 MaxMs; // rax
  RobotReporter *v11; // r14
  ReporterReqRspHelper *v12; // rcx
  unsigned __int64 MinMs; // rax
  RobotReporter *v14; // r14
  ReporterReqRspHelper *v15; // rcx
  unsigned __int64 MidMs; // rax
  RobotReporter *v17; // r14
  ReporterReqRspHelper *v18; // rcx
  unsigned __int64 AvgMs; // rax
  RobotReporter *v20; // r14
  ReporterReqRspHelper *v21; // rcx
  unsigned int Cnt; // eax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-111h] BYREF
  std::set<short unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-110h] BYREF
  std::set<short unsigned int>::iterator __for_end; // [rsp+38h] [rbp-108h] BYREF
  std::set<short unsigned int> *__for_range; // [rsp+40h] [rbp-100h]
  const unsigned __int16 *cmd_id; // [rsp+48h] [rbp-F8h]
  std::string value; // [rsp+50h] [rbp-F0h] BYREF
  std::string name; // [rsp+70h] [rbp-D0h] BYREF
  char v30[176]; // [rsp+90h] [rbp-B0h] BYREF

  v2 = (std::set<short unsigned int> *)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<short unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 14 cmd_id_set:276";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)ReporterReqRspHelper::settle;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  std::set<unsigned short>::set(v2 + 1);
  v5 = MultiThreadSingleton<ReporterReqRspHelper>::instance();
  ReporterReqRspHelper::getAllCmdId(v5, v2 + 1);
  __for_range = v2 + 1;
  __for_begin._M_node = std::set<unsigned short>::begin(v2 + 1)._M_node;
  __for_end._M_node = std::set<unsigned short>::end(v2 + 1)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    cmd_id = std::_Rb_tree_const_iterator<unsigned short>::operator*(&__for_begin);
    v6 = MultiThreadSingleton<RobotReporter>::instance();
    if ( *(_BYTE *)(((unsigned __int64)cmd_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)cmd_id & 7) + 1) >= *(_BYTE *)(((unsigned __int64)cmd_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(cmd_id);
    }
    v7 = ProtoUtils::getCmdName[abi:cxx11](*cmd_id);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&name, aReqRsp, &__a);
    RobotReporter::addProperty(v6, robot, &name, v7);
    std::string::~string(&name);
    std::allocator<char>::~allocator(&__a);
    v8 = MultiThreadSingleton<RobotReporter>::instance();
    v9 = MultiThreadSingleton<ReporterReqRspHelper>::instance();
    if ( *(_BYTE *)(((unsigned __int64)cmd_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)cmd_id & 7) + 1) >= *(_BYTE *)(((unsigned __int64)cmd_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(cmd_id);
    }
    MaxMs = ReporterReqRspHelper::getMaxMs(v9, *cmd_id);
    common::tools::StringUtils::numToStr<unsigned long>(&value, MaxMs);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&name, "max", &__a);
    RobotReporter::addProperty(v8, robot, &name, &value);
    std::string::~string(&name);
    std::allocator<char>::~allocator(&__a);
    std::string::~string(&value);
    v11 = MultiThreadSingleton<RobotReporter>::instance();
    v12 = MultiThreadSingleton<ReporterReqRspHelper>::instance();
    if ( *(_BYTE *)(((unsigned __int64)cmd_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)cmd_id & 7) + 1) >= *(_BYTE *)(((unsigned __int64)cmd_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(cmd_id);
    }
    MinMs = ReporterReqRspHelper::getMinMs(v12, *cmd_id);
    common::tools::StringUtils::numToStr<unsigned long>(&value, MinMs);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&name, off_DEC2EA0, &__a);
    RobotReporter::addProperty(v11, robot, &name, &value);
    std::string::~string(&name);
    std::allocator<char>::~allocator(&__a);
    std::string::~string(&value);
    v14 = MultiThreadSingleton<RobotReporter>::instance();
    v15 = MultiThreadSingleton<ReporterReqRspHelper>::instance();
    if ( *(_BYTE *)(((unsigned __int64)cmd_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)cmd_id & 7) + 1) >= *(_BYTE *)(((unsigned __int64)cmd_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(cmd_id);
    }
    MidMs = ReporterReqRspHelper::getMidMs(v15, *cmd_id);
    common::tools::StringUtils::numToStr<unsigned long>(&value, MidMs);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&name, "mid", &__a);
    RobotReporter::addProperty(v14, robot, &name, &value);
    std::string::~string(&name);
    std::allocator<char>::~allocator(&__a);
    std::string::~string(&value);
    v17 = MultiThreadSingleton<RobotReporter>::instance();
    v18 = MultiThreadSingleton<ReporterReqRspHelper>::instance();
    if ( *(_BYTE *)(((unsigned __int64)cmd_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)cmd_id & 7) + 1) >= *(_BYTE *)(((unsigned __int64)cmd_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(cmd_id);
    }
    AvgMs = ReporterReqRspHelper::getAvgMs(v18, *cmd_id);
    common::tools::StringUtils::numToStr<unsigned long>(&value, AvgMs);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&name, "avg", &__a);
    RobotReporter::addProperty(v17, robot, &name, &value);
    std::string::~string(&name);
    std::allocator<char>::~allocator(&__a);
    std::string::~string(&value);
    v20 = MultiThreadSingleton<RobotReporter>::instance();
    v21 = MultiThreadSingleton<ReporterReqRspHelper>::instance();
    if ( *(_BYTE *)(((unsigned __int64)cmd_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)cmd_id & 7) + 1) >= *(_BYTE *)(((unsigned __int64)cmd_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(cmd_id);
    }
    Cnt = ReporterReqRspHelper::getCnt(v21, *cmd_id);
    common::tools::StringUtils::numToStr<unsigned int>(&value, Cnt);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&name, "cnt", &__a);
    RobotReporter::addProperty(v20, robot, &name, &value);
    std::string::~string(&name);
    std::allocator<char>::~allocator(&__a);
    std::string::~string(&value);
    std::_Rb_tree_const_iterator<unsigned short>::operator++(&__for_begin);
  }
  std::set<unsigned short>::~set(v2 + 1);
  if ( v30 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 292: range 000000000048032E-0000000000480652
void __fastcall ReporterNZeroHelper::recv(
        ReporterNZeroHelper *const this,
        uint16_t cmd_id,
        const luabind::adl::object *proto_table)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const std::string *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned __int64 v10; // rax
  std::string *v11; // rax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-C1h] BYREF
  std::string name; // [rsp+30h] [rbp-C0h] BYREF
  char v15[160]; // [rsp+50h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 2 10 cmd_id:291 48 4 11 retcode:293 64 32 16 retcode_name:297";
  *(_QWORD *)(v3 + 16) = ReporterNZeroHelper::recv;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556926;
  v5[536862723] = -202116109;
  *(_WORD *)(v3 + 32) = cmd_id;
  *(_DWORD *)(v3 + 48) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "retcode", &__a);
  ScriptUtil::getTableValue<int>(&ScriptUtil::no_exception_instance, proto_table, &name, (int *)(v3 + 48));
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( *(_DWORD *)(v3 + 48) )
  {
    v6 = ProtoUtils::getRetcodeName[abi:cxx11](*(_DWORD *)(v3 + 48));
    std::string::basic_string((std::string *const)(v3 + 64), v6);
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/robot/robot_reporter.cpp",
      "recv",
      298);
    v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[37])"[reporter] found not zero retcode : ");
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)(v3 + 64));
    v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])", cmd_id:");
    common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v9, (const unsigned __int16 *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v10 = (unsigned __int64)common::tools::SafeMap<unsigned int,19u>::operator[](
                              &this->cmd_id_cnt_map_,
                              *(unsigned __int16 *)(v3 + 32));
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)((v10 & 7) + 3) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v10);
    ++*(_DWORD *)v10;
    v11 = common::tools::SafeMap<std::string,19u>::operator[](
            &this->cmd_id_retcode_map_,
            *(unsigned __int16 *)(v3 + 32));
    std::string::operator=(v11, (const std::string *)(v3 + 64));
    std::string::~string((std::string *const)(v3 + 64));
  }
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 305: range 00000000004806A8-000000000048070F
void __cdecl ReporterNZeroHelper::getAllCmdId(ReporterNZeroHelper *const this, std::set<short unsigned int> *st)
{
  std::function<void(unsigned int,unsigned int&)> p_func; // [rsp+10h] [rbp-30h] BYREF

  std::function<void ()(unsigned int,unsigned int &)>::function<ReporterNZeroHelper::getAllCmdId(std::set<unsigned short> &)::{lambda(unsigned int,unsigned int)#1},void,void>(
    &p_func,
    (ReporterNZeroHelper::getAllCmdId::<lambda(uint32_t, uint32_t)>)st);
  common::tools::SafeMap<unsigned int,19u>::foreach(&this->cmd_id_cnt_map_, &p_func);
  std::function<void ()(unsigned int,unsigned int &)>::~function(&p_func);
};

// Line 306: range 0000000000480654-00000000004806A6
void __cdecl ReporterNZeroHelper::getAllCmdId(std::set<unsigned short> &)::{lambda(unsigned int,unsigned int)#1}::operator()(
        const ReporterNZeroHelper::getAllCmdId::<lambda(uint32_t, uint32_t)> *const __closure,
        uint32_t cmd_id,
        uint32_t temp)
{
  std::set<short unsigned int> *st; // rax
  std::set<short unsigned int>::value_type __x; // [rsp+1Eh] [rbp-2h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  st = __closure->__st;
  __x = cmd_id;
  std::set<unsigned short>::insert(st, &__x);
};

// Line 313: range 0000000000480710-0000000000480771
uint32_t __cdecl ReporterNZeroHelper::getCnt(ReporterNZeroHelper *const this, uint16_t cmd_id)
{
  unsigned int *v2; // rax
  uint32_t *v3; // rdx

  v2 = common::tools::SafeMap<unsigned int,19u>::operator[](&this->cmd_id_cnt_map_, cmd_id);
  v3 = v2;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2);
  }
  return *v3;
};

// Line 318: range 0000000000480772-00000000004807B8
std::string *__cdecl ReporterNZeroHelper::getRetcode[abi:cxx11](
        std::string *retstr,
        ReporterNZeroHelper *const this,
        uint16_t cmd_id)
{
  const std::string *v3; // rdx

  v3 = common::tools::SafeMap<std::string,19u>::operator[](&this->cmd_id_retcode_map_, cmd_id);
  std::string::basic_string(retstr, v3);
  return retstr;
};

// Line 323: range 00000000004807BA-0000000000480CB6
void __cdecl ReporterNZeroHelper::settle(ReporterNZeroHelper *const this, const std::string *robot)
{
  std::set<short unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  ReporterNZeroHelper *v5; // rax
  RobotReporter *v6; // r14
  const std::string *v7; // r15
  RobotReporter *v8; // r14
  ReporterNZeroHelper *v9; // rcx
  RobotReporter *v10; // r14
  ReporterNZeroHelper *v11; // rcx
  unsigned int Cnt; // eax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-111h] BYREF
  std::set<short unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-110h] BYREF
  std::set<short unsigned int>::iterator __for_end; // [rsp+38h] [rbp-108h] BYREF
  std::set<short unsigned int> *__for_range; // [rsp+40h] [rbp-100h]
  const unsigned __int16 *cmd_id; // [rsp+48h] [rbp-F8h]
  std::string value; // [rsp+50h] [rbp-F0h] BYREF
  std::string name; // [rsp+70h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+90h] [rbp-B0h] BYREF

  v2 = (std::set<short unsigned int> *)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<short unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 15 cmd_id_set2:324";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)ReporterNZeroHelper::settle;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  std::set<unsigned short>::set(v2 + 1);
  v5 = MultiThreadSingleton<ReporterNZeroHelper>::instance();
  ReporterNZeroHelper::getAllCmdId(v5, v2 + 1);
  __for_range = v2 + 1;
  __for_begin._M_node = std::set<unsigned short>::begin(v2 + 1)._M_node;
  __for_end._M_node = std::set<unsigned short>::end(v2 + 1)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    cmd_id = std::_Rb_tree_const_iterator<unsigned short>::operator*(&__for_begin);
    v6 = MultiThreadSingleton<RobotReporter>::instance();
    if ( *(_BYTE *)(((unsigned __int64)cmd_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)cmd_id & 7) + 1) >= *(_BYTE *)(((unsigned __int64)cmd_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(cmd_id);
    }
    v7 = ProtoUtils::getCmdName[abi:cxx11](*cmd_id);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&name, &byte_DEC3100, &__a);
    RobotReporter::addProperty(v6, robot, &name, v7);
    std::string::~string(&name);
    std::allocator<char>::~allocator(&__a);
    v8 = MultiThreadSingleton<RobotReporter>::instance();
    v9 = MultiThreadSingleton<ReporterNZeroHelper>::instance();
    if ( *(_BYTE *)(((unsigned __int64)cmd_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)cmd_id & 7) + 1) >= *(_BYTE *)(((unsigned __int64)cmd_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(cmd_id);
    }
    ReporterNZeroHelper::getRetcode[abi:cxx11](&value, v9, *cmd_id);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&name, "recode", &__a);
    RobotReporter::addProperty(v8, robot, &name, &value);
    std::string::~string(&name);
    std::allocator<char>::~allocator(&__a);
    std::string::~string(&value);
    v10 = MultiThreadSingleton<RobotReporter>::instance();
    v11 = MultiThreadSingleton<ReporterNZeroHelper>::instance();
    if ( *(_BYTE *)(((unsigned __int64)cmd_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)cmd_id & 7) + 1) >= *(_BYTE *)(((unsigned __int64)cmd_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(cmd_id);
    }
    Cnt = ReporterNZeroHelper::getCnt(v11, *cmd_id);
    common::tools::StringUtils::numToStr<unsigned int>(&value, Cnt);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&name, "cnt", &__a);
    RobotReporter::addProperty(v10, robot, &name, &value);
    std::string::~string(&name);
    std::allocator<char>::~allocator(&__a);
    std::string::~string(&value);
    std::_Rb_tree_const_iterator<unsigned short>::operator++(&__for_begin);
  }
  std::set<unsigned short>::~set(v2 + 1);
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
