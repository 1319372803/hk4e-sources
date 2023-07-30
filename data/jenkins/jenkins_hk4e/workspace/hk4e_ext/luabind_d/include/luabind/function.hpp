// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/luabind_d/include/luabind/function.hpp

// Line 18: range 000000000096931A-0000000000969367
void __cdecl luabind::detail::function_registration<std::string const& (*)(int),luabind::detail::null_type>::~function_registration(
        luabind::detail::function_registration<const std::string& (*)(int),luabind::detail::null_type> *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'luabind::detail::function_registration<std::string const& (*)(int),luabind::detail::null_type>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_registration = v1;
  luabind::detail::registration::~registration(this);
};

// Line 18: range 0000000000969368-0000000000969392
void __cdecl luabind::detail::function_registration<std::string const& (*)(int),luabind::detail::null_type>::~function_registration(
        luabind::detail::function_registration<const std::string& (*)(int),luabind::detail::null_type> *const this)
{
  luabind::detail::function_registration<std::string const& (*)(int),luabind::detail::null_type>::~function_registration(this);
  operator delete(this, 0x28uLL);
};

// Line 18: range 00000000009693E2-000000000096940C
void __cdecl luabind::detail::function_registration<std::string const& (*)(unsigned int),luabind::detail::null_type>::~function_registration(
        luabind::detail::function_registration<const std::string& (*)(unsigned int),luabind::detail::null_type> *const this)
{
  luabind::detail::function_registration<std::string const& (*)(unsigned int),luabind::detail::null_type>::~function_registration(this);
  operator delete(this, 0x28uLL);
};

// Line 18: range 0000000000969394-00000000009693E1
void __cdecl luabind::detail::function_registration<std::string const& (*)(unsigned int),luabind::detail::null_type>::~function_registration(
        luabind::detail::function_registration<const std::string& (*)(unsigned int),luabind::detail::null_type> *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'luabind::detail::function_registration<std::string const& (*)(unsigned int),luabind::detail::null_type>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_registration = v1;
  luabind::detail::registration::~registration(this);
};

// Line 18: range 0000000000969488-00000000009694D5
void __cdecl luabind::detail::function_registration<std::vector<float> (*)(data::ConstValueType),luabind::detail::null_type>::~function_registration(
        luabind::detail::function_registration<std::vector<float> (*)(data::ConstValueType),luabind::detail::null_type> *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'luabind::detail::function_registration<std::vector<float> (*)(data::ConstValueType),luabind::detail::null_type>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_registration = v1;
  luabind::detail::registration::~registration(this);
};

// Line 18: range 00000000009694D6-0000000000969500
void __cdecl luabind::detail::function_registration<std::vector<float> (*)(data::ConstValueType),luabind::detail::null_type>::~function_registration(
        luabind::detail::function_registration<std::vector<float> (*)(data::ConstValueType),luabind::detail::null_type> *const this)
{
  luabind::detail::function_registration<std::vector<float> (*)(data::ConstValueType),luabind::detail::null_type>::~function_registration(this);
  operator delete(this, 0x28uLL);
};

// Line 18: range 000000000096945C-0000000000969486
void __cdecl luabind::detail::function_registration<void (*)(std::string const&),luabind::detail::null_type>::~function_registration(
        luabind::detail::function_registration<void (*)(const std::string&),luabind::detail::null_type> *const this)
{
  luabind::detail::function_registration<void (*)(std::string const&),luabind::detail::null_type>::~function_registration(this);
  operator delete(this, 0x28uLL);
};

// Line 18: range 000000000096940E-000000000096945B
void __cdecl luabind::detail::function_registration<void (*)(std::string const&),luabind::detail::null_type>::~function_registration(
        luabind::detail::function_registration<void (*)(const std::string&),luabind::detail::null_type> *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'luabind::detail::function_registration<void (*)(std::string const&),luabind::detail::null_type>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_registration = v1;
  luabind::detail::registration::~registration(this);
};

// Line 20: range 0000000000676534-00000000006765EF
void __cdecl luabind::detail::function_registration<std::string const& (*)(int),luabind::detail::null_type>::function_registration(
        luabind::detail::function_registration<const std::string& (*)(int),luabind::detail::null_type> *const this,
        const char *name,
        const std::string *(*f)(int),
        const luabind::detail::null_type *policies)
{
  int (**v4)(...); // rdx

  luabind::detail::registration::registration(this);
  v4 = (int (**)(...))(&`vtable for'luabind::detail::function_registration<std::string const& (*)(int),luabind::detail::null_type>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_registration = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->name >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->name = name;
  if ( *(_BYTE *)(((unsigned __int64)&this->f >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->f = f;
};

// Line 20: range 0000000000676478-0000000000676533
void __cdecl luabind::detail::function_registration<std::string const& (*)(unsigned int),luabind::detail::null_type>::function_registration(
        luabind::detail::function_registration<const std::string& (*)(unsigned int),luabind::detail::null_type> *const this,
        const char *name,
        const std::string *(*f)(unsigned int),
        const luabind::detail::null_type *policies)
{
  int (**v4)(...); // rdx

  luabind::detail::registration::registration(this);
  v4 = (int (**)(...))(&`vtable for'luabind::detail::function_registration<std::string const& (*)(unsigned int),luabind::detail::null_type>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_registration = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->name >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->name = name;
  if ( *(_BYTE *)(((unsigned __int64)&this->f >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->f = f;
};

// Line 20: range 0000000000676234-00000000006762EF
void __cdecl luabind::detail::function_registration<std::vector<float> (*)(data::ConstValueType),luabind::detail::null_type>::function_registration(
        luabind::detail::function_registration<std::vector<float> (*)(data::ConstValueType),luabind::detail::null_type> *const this,
        const char *name,
        std::vector<float> *(*f)(std::vector<float> *__return_ptr __struct_ptr retstr, data::ConstValueType),
        const luabind::detail::null_type *policies)
{
  int (**v4)(...); // rdx

  luabind::detail::registration::registration(this);
  v4 = (int (**)(...))(&`vtable for'luabind::detail::function_registration<std::vector<float> (*)(data::ConstValueType),luabind::detail::null_type>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_registration = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->name >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->name = name;
  if ( *(_BYTE *)(((unsigned __int64)&this->f >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->f = (std::vector<float> (*)(data::ConstValueType))f;
};

// Line 20: range 00000000006763BC-0000000000676477
void __cdecl luabind::detail::function_registration<void (*)(std::string const&),luabind::detail::null_type>::function_registration(
        luabind::detail::function_registration<void (*)(const std::string&),luabind::detail::null_type> *const this,
        const char *name,
        void (*f)(const std::string *),
        const luabind::detail::null_type *policies)
{
  int (**v4)(...); // rdx

  luabind::detail::registration::registration(this);
  v4 = (int (**)(...))(&`vtable for'luabind::detail::function_registration<void (*)(std::string const&),luabind::detail::null_type>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_registration = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->name >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->name = name;
  if ( *(_BYTE *)(((unsigned __int64)&this->f >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->f = f;
};

// Line 26: range 0000000000993AC8-0000000000993CD4
void __cdecl luabind::detail::function_registration<std::string const& (*)(int),luabind::detail::null_type>::register_(
        const luabind::detail::function_registration<const std::string& (*)(int),luabind::detail::null_type> *const this,
        lua_State_0 *L)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const char *name; // r14
  const luabind::adl::object *v6; // rcx
  luabind::from_stack stack_reference; // [rsp+10h] [rbp-90h] BYREF
  luabind::adl::object v8; // [rsp+20h] [rbp-80h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 fn:28";
  *(_QWORD *)(v2 + 16) = luabind::detail::function_registration<std::string const& (*)(int),luabind::detail::null_type>::register_;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->f >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->f);
  luabind::detail::deduce_signature<std::string const&,int>(this->f);
  if ( *(_BYTE *)(((unsigned __int64)&this->f >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->f);
  luabind::make_function<std::string const& (*)(int),boost::mpl::vector2<std::string const&,int>,luabind::detail::null_type>(
    (lua_State_0 *)(v2 + 32),
    (const std::string *(*)(int))L,
    (boost::mpl::vector2<const std::string&,int>)this->f,
    (luabind::detail::null_type)L);
  if ( *(_BYTE *)(((unsigned __int64)&this->name >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->name);
  name = this->name;
  luabind::from_stack::from_stack(&stack_reference, L, -1);
  luabind::adl::object::object(&v8, &stack_reference);
  luabind::detail::add_overload((luabind::detail *)&v8, (const luabind::adl::object *)name, (const char *)(v2 + 32), v6);
  luabind::adl::object::~object(&v8);
  luabind::adl::object::~object((luabind::adl::object *const)(v2 + 32));
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 26: range 0000000000993CD6-0000000000993EE2
void __cdecl luabind::detail::function_registration<std::string const& (*)(unsigned int),luabind::detail::null_type>::register_(
        const luabind::detail::function_registration<const std::string& (*)(unsigned int),luabind::detail::null_type> *const this,
        lua_State_0 *L)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const char *name; // r14
  const luabind::adl::object *v6; // rcx
  luabind::from_stack stack_reference; // [rsp+10h] [rbp-90h] BYREF
  luabind::adl::object v8; // [rsp+20h] [rbp-80h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 fn:28";
  *(_QWORD *)(v2 + 16) = luabind::detail::function_registration<std::string const& (*)(unsigned int),luabind::detail::null_type>::register_;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->f >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->f);
  luabind::detail::deduce_signature<std::string const&,unsigned int>(this->f);
  if ( *(_BYTE *)(((unsigned __int64)&this->f >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->f);
  luabind::make_function<std::string const& (*)(unsigned int),boost::mpl::vector2<std::string const&,unsigned int>,luabind::detail::null_type>(
    (lua_State_0 *)(v2 + 32),
    (const std::string *(*)(unsigned int))L,
    (boost::mpl::vector2<const std::string&,unsigned int>)this->f,
    (luabind::detail::null_type)L);
  if ( *(_BYTE *)(((unsigned __int64)&this->name >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->name);
  name = this->name;
  luabind::from_stack::from_stack(&stack_reference, L, -1);
  luabind::adl::object::object(&v8, &stack_reference);
  luabind::detail::add_overload((luabind::detail *)&v8, (const luabind::adl::object *)name, (const char *)(v2 + 32), v6);
  luabind::adl::object::~object(&v8);
  luabind::adl::object::~object((luabind::adl::object *const)(v2 + 32));
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 26: range 00000000009940F2-00000000009942FE
void __cdecl luabind::detail::function_registration<std::vector<float> (*)(data::ConstValueType),luabind::detail::null_type>::register_(
        const luabind::detail::function_registration<std::vector<float> (*)(data::ConstValueType),luabind::detail::null_type> *const this,
        lua_State_0 *L)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const char *name; // r14
  const luabind::adl::object *v6; // rcx
  luabind::from_stack stack_reference; // [rsp+10h] [rbp-90h] BYREF
  luabind::adl::object v8; // [rsp+20h] [rbp-80h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 fn:28";
  *(_QWORD *)(v2 + 16) = luabind::detail::function_registration<std::vector<float> (*)(data::ConstValueType),luabind::detail::null_type>::register_;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->f >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->f);
  luabind::detail::deduce_signature<std::vector<float>,data::ConstValueType>((std::vector<float> *(*)(std::vector<float> *__return_ptr __struct_ptr, data::ConstValueType))this->f);
  if ( *(_BYTE *)(((unsigned __int64)&this->f >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->f);
  luabind::make_function<std::vector<float> (*)(data::ConstValueType),boost::mpl::vector2<std::vector<float>,data::ConstValueType>,luabind::detail::null_type>(
    (lua_State_0 *)(v2 + 32),
    (std::vector<float> *(*)(std::vector<float> *__return_ptr __struct_ptr, data::ConstValueType))L,
    (boost::mpl::vector2<std::vector<float>,data::ConstValueType>)this->f,
    (luabind::detail::null_type)L);
  if ( *(_BYTE *)(((unsigned __int64)&this->name >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->name);
  name = this->name;
  luabind::from_stack::from_stack(&stack_reference, L, -1);
  luabind::adl::object::object(&v8, &stack_reference);
  luabind::detail::add_overload((luabind::detail *)&v8, (const luabind::adl::object *)name, (const char *)(v2 + 32), v6);
  luabind::adl::object::~object(&v8);
  luabind::adl::object::~object((luabind::adl::object *const)(v2 + 32));
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 26: range 0000000000993EE4-00000000009940F0
void __cdecl luabind::detail::function_registration<void (*)(std::string const&),luabind::detail::null_type>::register_(
        const luabind::detail::function_registration<void (*)(const std::string&),luabind::detail::null_type> *const this,
        lua_State_0 *L)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const char *name; // r14
  const luabind::adl::object *v6; // rcx
  luabind::from_stack stack_reference; // [rsp+10h] [rbp-90h] BYREF
  luabind::adl::object v8; // [rsp+20h] [rbp-80h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 fn:28";
  *(_QWORD *)(v2 + 16) = luabind::detail::function_registration<void (*)(std::string const&),luabind::detail::null_type>::register_;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->f >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->f);
  luabind::detail::deduce_signature<void,std::string const&>(this->f);
  if ( *(_BYTE *)(((unsigned __int64)&this->f >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->f);
  luabind::make_function<void (*)(std::string const&),boost::mpl::vector2<void,std::string const&>,luabind::detail::null_type>(
    (lua_State_0 *)(v2 + 32),
    (void (*)(const std::string *))L,
    (boost::mpl::vector2<void,const std::string&>)this->f,
    (luabind::detail::null_type)L);
  if ( *(_BYTE *)(((unsigned __int64)&this->name >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->name);
  name = this->name;
  luabind::from_stack::from_stack(&stack_reference, L, -1);
  luabind::adl::object::object(&v8, &stack_reference);
  luabind::detail::add_overload((luabind::detail *)&v8, (const luabind::adl::object *)name, (const char *)(v2 + 32), v6);
  luabind::adl::object::~object(&v8);
  luabind::adl::object::~object((luabind::adl::object *const)(v2 + 32));
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 47: range 00000000005EBF5B-00000000005EC00E
luabind::scope __cdecl luabind::def<std::string const& (*)(int),luabind::detail::null_type>(
        const char *name,
        const std::string *(*f)(int),
        const luabind::detail::null_type *policies)
{
  const luabind::detail::null_type *v3; // rcx
  luabind::detail::function_registration<const std::string& (*)(int),luabind::detail::null_type> *__p; // [rsp+8h] [rbp-48h]
  const luabind::detail::null_type *policiesa; // [rsp+10h] [rbp-40h]
  std::auto_ptr<luabind::detail::registration> reg; // [rsp+38h] [rbp-18h] BYREF

  policiesa = v3;
  __p = (luabind::detail::function_registration<const std::string& (*)(int),luabind::detail::null_type> *)operator new(0x28uLL);
  luabind::detail::function_registration<std::string const& (*)(int),luabind::detail::null_type>::function_registration(
    __p,
    (const char *)f,
    (const std::string *(*)(int))policies,
    policiesa);
  std::auto_ptr<luabind::detail::registration>::auto_ptr(&reg, __p);
  luabind::scope::scope((luabind::scope *const)name, (std::auto_ptr<luabind::detail::registration>)&reg);
  std::auto_ptr<luabind::detail::registration>::~auto_ptr(&reg);
  return (luabind::scope)name;
};

// Line 47: range 00000000005EBEA7-00000000005EBF5A
luabind::scope __cdecl luabind::def<std::string const& (*)(unsigned int),luabind::detail::null_type>(
        const char *name,
        const std::string *(*f)(unsigned int),
        const luabind::detail::null_type *policies)
{
  const luabind::detail::null_type *v3; // rcx
  luabind::detail::function_registration<const std::string& (*)(unsigned int),luabind::detail::null_type> *__p; // [rsp+8h] [rbp-48h]
  const luabind::detail::null_type *policiesa; // [rsp+10h] [rbp-40h]
  std::auto_ptr<luabind::detail::registration> reg; // [rsp+38h] [rbp-18h] BYREF

  policiesa = v3;
  __p = (luabind::detail::function_registration<const std::string& (*)(unsigned int),luabind::detail::null_type> *)operator new(0x28uLL);
  luabind::detail::function_registration<std::string const& (*)(unsigned int),luabind::detail::null_type>::function_registration(
    __p,
    (const char *)f,
    (const std::string *(*)(unsigned int))policies,
    policiesa);
  std::auto_ptr<luabind::detail::registration>::auto_ptr(&reg, __p);
  luabind::scope::scope((luabind::scope *const)name, (std::auto_ptr<luabind::detail::registration>)&reg);
  std::auto_ptr<luabind::detail::registration>::~auto_ptr(&reg);
  return (luabind::scope)name;
};

// Line 47: range 00000000005EBD3F-00000000005EBDF2
luabind::scope __cdecl luabind::def<std::vector<float> (*)(data::ConstValueType),luabind::detail::null_type>(
        const char *name,
        std::vector<float> *(*f)(std::vector<float> *__return_ptr __struct_ptr retstr, data::ConstValueType),
        const luabind::detail::null_type *policies)
{
  const luabind::detail::null_type *v3; // rcx
  luabind::detail::function_registration<std::vector<float> (*)(data::ConstValueType),luabind::detail::null_type> *__p; // [rsp+8h] [rbp-48h]
  const luabind::detail::null_type *policiesa; // [rsp+10h] [rbp-40h]
  std::auto_ptr<luabind::detail::registration> reg; // [rsp+38h] [rbp-18h] BYREF

  policiesa = v3;
  __p = (luabind::detail::function_registration<std::vector<float> (*)(data::ConstValueType),luabind::detail::null_type> *)operator new(0x28uLL);
  luabind::detail::function_registration<std::vector<float> (*)(data::ConstValueType),luabind::detail::null_type>::function_registration(
    __p,
    (const char *)f,
    (std::vector<float> *(*)(std::vector<float> *__return_ptr __struct_ptr, data::ConstValueType))policies,
    policiesa);
  std::auto_ptr<luabind::detail::registration>::auto_ptr(&reg, __p);
  luabind::scope::scope((luabind::scope *const)name, (std::auto_ptr<luabind::detail::registration>)&reg);
  std::auto_ptr<luabind::detail::registration>::~auto_ptr(&reg);
  return (luabind::scope)name;
};

// Line 47: range 00000000005EBDF3-00000000005EBEA6
luabind::scope __cdecl luabind::def<void (*)(std::string const&),luabind::detail::null_type>(
        const char *name,
        void (*f)(const std::string *),
        const luabind::detail::null_type *policies)
{
  const luabind::detail::null_type *v3; // rcx
  luabind::detail::function_registration<void (*)(const std::string&),luabind::detail::null_type> *__p; // [rsp+8h] [rbp-48h]
  const luabind::detail::null_type *policiesa; // [rsp+10h] [rbp-40h]
  std::auto_ptr<luabind::detail::registration> reg; // [rsp+38h] [rbp-18h] BYREF

  policiesa = v3;
  __p = (luabind::detail::function_registration<void (*)(const std::string&),luabind::detail::null_type> *)operator new(0x28uLL);
  luabind::detail::function_registration<void (*)(std::string const&),luabind::detail::null_type>::function_registration(
    __p,
    (const char *)f,
    (void (*)(const std::string *))policies,
    policiesa);
  std::auto_ptr<luabind::detail::registration>::auto_ptr(&reg, __p);
  luabind::scope::scope((luabind::scope *const)name, (std::auto_ptr<luabind::detail::registration>)&reg);
  std::auto_ptr<luabind::detail::registration>::~auto_ptr(&reg);
  return (luabind::scope)name;
};

// Line 54: range 000000000053B0AF-000000000053B101
luabind::scope __cdecl luabind::def<std::string const& (*)(int)>(const char *name, const std::string *(*f)(int))
{
  const std::string *(*v2)(int); // rdx
  const std::string *(*fa)(int); // [rsp+8h] [rbp-28h]

  fa = v2;
  if ( *(_BYTE *)(((unsigned __int64)name >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  luabind::def<std::string const& (*)(int),luabind::detail::null_type>(name, f, (const luabind::detail::null_type *)fa);
  return (luabind::scope)name;
};

// Line 54: range 000000000053B05C-000000000053B0AE
luabind::scope __cdecl luabind::def<std::string const& (*)(unsigned int)>(
        const char *name,
        const std::string *(*f)(unsigned int))
{
  const std::string *(*v2)(unsigned int); // rdx
  const std::string *(*fa)(unsigned int); // [rsp+8h] [rbp-28h]

  fa = v2;
  if ( *(_BYTE *)(((unsigned __int64)name >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  luabind::def<std::string const& (*)(unsigned int),luabind::detail::null_type>(
    name,
    f,
    (const luabind::detail::null_type *)fa);
  return (luabind::scope)name;
};

// Line 54: range 000000000053AFB6-000000000053B008
luabind::scope __cdecl luabind::def<std::vector<float> (*)(data::ConstValueType)>(
        const char *name,
        std::vector<float> *(*f)(std::vector<float> *__return_ptr __struct_ptr retstr, data::ConstValueType))
{
  std::vector<float> (*v2)(data::ConstValueType); // rdx
  std::vector<float> (*fa)(data::ConstValueType); // [rsp+8h] [rbp-28h]

  fa = v2;
  if ( *(_BYTE *)(((unsigned __int64)name >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  luabind::def<std::vector<float> (*)(data::ConstValueType),luabind::detail::null_type>(
    name,
    f,
    (const luabind::detail::null_type *)fa);
  return (luabind::scope)name;
};

// Line 54: range 000000000053B009-000000000053B05B
luabind::scope __cdecl luabind::def<void (*)(std::string const&)>(const char *name, void (*f)(const std::string *))
{
  void (*v2)(const std::string *); // rdx
  void (*fa)(const std::string *); // [rsp+8h] [rbp-28h]

  fa = v2;
  if ( *(_BYTE *)(((unsigned __int64)name >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  luabind::def<void (*)(std::string const&),luabind::detail::null_type>(name, f, (const luabind::detail::null_type *)fa);
  return (luabind::scope)name;
};
