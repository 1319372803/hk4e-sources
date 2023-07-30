// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/luabind_d/include/luabind/detail/call.hpp

// Line 33: range 000000000C643A9A-000000000C643B61
void __cdecl luabind::detail::function_object::function_object(
        luabind::detail::function_object *const this,
        lua_CFunction entry)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'luabind::detail::function_object + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_function_object = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->entry = entry;
  std::string::basic_string(&this->name);
  if ( *(_BYTE *)(((unsigned __int64)&this->next >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->next = 0LL;
  luabind::adl::object::object(&this->keepalive);
};

// Line 38: range 000000000C643B62-000000000C643BC3
void __cdecl luabind::detail::function_object::~function_object(luabind::detail::function_object *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'luabind::detail::function_object + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_function_object = v1;
  luabind::adl::object::~object(&this->keepalive);
  std::string::~string(&this->name);
};

// Line 38: range 000000000C643BC4-000000000C643BEE
void __cdecl luabind::detail::function_object::~function_object(luabind::detail::function_object *const this)
{
  luabind::detail::function_object::~function_object(this);
  operator delete(this, 0x48uLL);
};

// Line 53: range 000000000C643BF0-000000000C643C79
void __cdecl luabind::detail::invoke_context::invoke_context(luabind::detail::invoke_context *const this)
{
  int v1; // edx

  v1 = std::numeric_limits<int>::max();
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->best_score = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->candidate_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->candidate_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->candidate_index);
  }
  this->candidate_index = 0;
};

// Line 58: range 000000000C643C7A-000000000C643CC7
bool __cdecl luabind::detail::invoke_context::operator bool(const luabind::detail::invoke_context *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->candidate_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->candidate_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->candidate_index);
  }
  return this->candidate_index == 1;
};

// Line 82: range 000000000CBEA81F-000000000CBEA90F
int __fastcall luabind::detail::invoke0<luabind::detail::access_member_ptr<Event,data::EventType,data::EventType>,boost::mpl::vector2<data::EventType,Event const&>,luabind::detail::null_type,boost::is_void<data::EventType>>(
        lua_State_0 *L,
        const luabind::detail::function_object *self,
        luabind::detail::invoke_context *ctx,
        const luabind::detail::access_member_ptr<Event,data::EventType,data::EventType> *f,
        boost::mpl::vector2<data::EventType,const Event&> a5,
        const luabind::detail::null_type *policies)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  const luabind::detail::null_type *v9; // r9
  int result; // eax
  mpl_::long_<1> v11; // [rsp+0h] [rbp-90h]
  char v15[96]; // [rsp+30h] [rbp-60h] BYREF

  v6 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v6 + 16) = luabind::detail::invoke0<luabind::detail::access_member_ptr<Event,data::EventType,data::EventType>,boost::mpl::vector2<data::EventType,Event const&>,luabind::detail::null_type,boost::is_void<data::EventType>>;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202116351;
  boost::integral_constant<bool,false>::operator mpl_::bool_<false> const&((const boost::integral_constant<bool,false> *const)(v6 + 32));
  result = luabind::detail::invoke_normal<luabind::detail::access_member_ptr<Event,data::EventType,data::EventType>,boost::mpl::vector2<data::EventType,Event const&>,luabind::detail::null_type>(
             L,
             self,
             ctx,
             f,
             a5,
             v9,
             v11,
             (mpl_::false_)a5.gap0[0]);
  if ( v15 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 82: range 000000000CBEA54C-000000000CBEA63C
int __fastcall luabind::detail::invoke0<luabind::detail::access_member_ptr<Event,int,int>,boost::mpl::vector2<int,Event const&>,luabind::detail::null_type,boost::is_void<int>>(
        lua_State_0 *L,
        const luabind::detail::function_object *self,
        luabind::detail::invoke_context *ctx,
        const luabind::detail::access_member_ptr<Event,int,int> *f,
        boost::mpl::vector2<int,const Event&> a5,
        const luabind::detail::null_type *policies)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  const luabind::detail::null_type *v9; // r9
  int result; // eax
  mpl_::long_<1> v11; // [rsp+0h] [rbp-90h]
  char v15[96]; // [rsp+30h] [rbp-60h] BYREF

  v6 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v6 + 16) = luabind::detail::invoke0<luabind::detail::access_member_ptr<Event,int,int>,boost::mpl::vector2<int,Event const&>,luabind::detail::null_type,boost::is_void<int>>;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202116351;
  boost::integral_constant<bool,false>::operator mpl_::bool_<false> const&((const boost::integral_constant<bool,false> *const)(v6 + 32));
  result = luabind::detail::invoke_normal<luabind::detail::access_member_ptr<Event,int,int>,boost::mpl::vector2<int,Event const&>,luabind::detail::null_type>(
             L,
             self,
             ctx,
             f,
             a5,
             v9,
             v11,
             (mpl_::false_)a5.gap0[0]);
  if ( v15 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 82: range 000000000CBEA72E-000000000CBEA81E
int __fastcall luabind::detail::invoke0<luabind::detail::access_member_ptr<Event,std::string,std::string>,boost::mpl::vector2<std::string,Event const&>,luabind::detail::null_type,boost::is_void<std::string>>(
        lua_State_0 *L,
        const luabind::detail::function_object *self,
        luabind::detail::invoke_context *ctx,
        const luabind::detail::access_member_ptr<Event,std::string,std::string > *f,
        boost::mpl::vector2<std::string,const Event&> a5,
        const luabind::detail::null_type *policies)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  const luabind::detail::null_type *v9; // r9
  int result; // eax
  mpl_::long_<1> v11; // [rsp+0h] [rbp-90h]
  char v15[96]; // [rsp+30h] [rbp-60h] BYREF

  v6 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v6 + 16) = luabind::detail::invoke0<luabind::detail::access_member_ptr<Event,std::string,std::string>,boost::mpl::vector2<std::string,Event const&>,luabind::detail::null_type,boost::is_void<std::string>>;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202116351;
  boost::integral_constant<bool,false>::operator mpl_::bool_<false> const&((const boost::integral_constant<bool,false> *const)(v6 + 32));
  result = luabind::detail::invoke_normal<luabind::detail::access_member_ptr<Event,std::string,std::string>,boost::mpl::vector2<std::string,Event const&>,luabind::detail::null_type>(
             L,
             self,
             ctx,
             f,
             a5,
             v9,
             v11,
             (mpl_::false_)a5.gap0[0]);
  if ( v15 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 82: range 000000000CBEA63D-000000000CBEA72D
int __fastcall luabind::detail::invoke0<luabind::detail::access_member_ptr<Event,unsigned int,unsigned int>,boost::mpl::vector2<unsigned int,Event const&>,luabind::detail::null_type,boost::is_void<unsigned int>>(
        lua_State_0 *L,
        const luabind::detail::function_object *self,
        luabind::detail::invoke_context *ctx,
        const luabind::detail::access_member_ptr<Event,unsigned int,unsigned int> *f,
        boost::mpl::vector2<unsigned int,const Event&> a5,
        const luabind::detail::null_type *policies)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  const luabind::detail::null_type *v9; // r9
  int result; // eax
  mpl_::long_<1> v11; // [rsp+0h] [rbp-90h]
  char v15[96]; // [rsp+30h] [rbp-60h] BYREF

  v6 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v6 + 16) = luabind::detail::invoke0<luabind::detail::access_member_ptr<Event,unsigned int,unsigned int>,boost::mpl::vector2<unsigned int,Event const&>,luabind::detail::null_type,boost::is_void<unsigned int>>;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202116351;
  boost::integral_constant<bool,false>::operator mpl_::bool_<false> const&((const boost::integral_constant<bool,false> *const)(v6 + 32));
  result = luabind::detail::invoke_normal<luabind::detail::access_member_ptr<Event,unsigned int,unsigned int>,boost::mpl::vector2<unsigned int,Event const&>,luabind::detail::null_type>(
             L,
             self,
             ctx,
             f,
             a5,
             v9,
             v11,
             (mpl_::false_)a5.gap0[0]);
  if ( v15 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 82: range 000000000CBEA324-000000000CBEA414
int __fastcall luabind::detail::invoke0<luabind::detail::access_member_ptr<Vector3,float,float>,boost::mpl::vector2<float,Vector3 const&>,luabind::detail::null_type,boost::is_void<float>>(
        lua_State_0 *L,
        const luabind::detail::function_object *self,
        luabind::detail::invoke_context *ctx,
        const luabind::detail::access_member_ptr<Vector3,float,float> *f,
        boost::mpl::vector2<float,const Vector3&> a5,
        const luabind::detail::null_type *policies)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  const luabind::detail::null_type *v9; // r9
  int result; // eax
  mpl_::long_<1> v11; // [rsp+0h] [rbp-90h]
  char v15[96]; // [rsp+30h] [rbp-60h] BYREF

  v6 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v6 + 16) = luabind::detail::invoke0<luabind::detail::access_member_ptr<Vector3,float,float>,boost::mpl::vector2<float,Vector3 const&>,luabind::detail::null_type,boost::is_void<float>>;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202116351;
  boost::integral_constant<bool,false>::operator mpl_::bool_<false> const&((const boost::integral_constant<bool,false> *const)(v6 + 32));
  result = luabind::detail::invoke_normal<luabind::detail::access_member_ptr<Vector3,float,float>,boost::mpl::vector2<float,Vector3 const&>,luabind::detail::null_type>(
             L,
             self,
             ctx,
             f,
             a5,
             v9,
             v11,
             (mpl_::false_)a5.gap0[0]);
  if ( v15 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 93: range 000000000CBEA1A7-000000000CBEA297
int __cdecl luabind::detail::invoke<luabind::detail::access_member_ptr<Event,data::EventType,data::EventType>,boost::mpl::vector2<data::EventType,Event const&>,luabind::detail::null_type>(
        lua_State_0 *L,
        const luabind::detail::function_object *self,
        luabind::detail::invoke_context *ctx,
        const luabind::detail::access_member_ptr<Event,data::EventType,data::EventType> *f,
        boost::mpl::vector2<data::EventType,const Event&> a5,
        const luabind::detail::null_type *policies)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  const luabind::detail::null_type *v9; // r9
  int result; // eax
  char v14[96]; // [rsp+30h] [rbp-60h] BYREF

  v6 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v6 + 16) = luabind::detail::invoke<luabind::detail::access_member_ptr<Event,data::EventType,data::EventType>,boost::mpl::vector2<data::EventType,Event const&>,luabind::detail::null_type>;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202116351;
  boost::integral_constant<bool,false>::operator mpl_::bool_<false> const&((const boost::integral_constant<bool,false> *const)(v6 + 32));
  result = luabind::detail::invoke0<luabind::detail::access_member_ptr<Event,data::EventType,data::EventType>,boost::mpl::vector2<data::EventType,Event const&>,luabind::detail::null_type,boost::is_void<data::EventType>>(
             L,
             self,
             ctx,
             f,
             a5,
             v9);
  if ( v14 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 93: range 000000000CBE9ED4-000000000CBE9FC4
int __cdecl luabind::detail::invoke<luabind::detail::access_member_ptr<Event,int,int>,boost::mpl::vector2<int,Event const&>,luabind::detail::null_type>(
        lua_State_0 *L,
        const luabind::detail::function_object *self,
        luabind::detail::invoke_context *ctx,
        const luabind::detail::access_member_ptr<Event,int,int> *f,
        boost::mpl::vector2<int,const Event&> a5,
        const luabind::detail::null_type *policies)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  const luabind::detail::null_type *v9; // r9
  int result; // eax
  char v14[96]; // [rsp+30h] [rbp-60h] BYREF

  v6 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v6 + 16) = luabind::detail::invoke<luabind::detail::access_member_ptr<Event,int,int>,boost::mpl::vector2<int,Event const&>,luabind::detail::null_type>;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202116351;
  boost::integral_constant<bool,false>::operator mpl_::bool_<false> const&((const boost::integral_constant<bool,false> *const)(v6 + 32));
  result = luabind::detail::invoke0<luabind::detail::access_member_ptr<Event,int,int>,boost::mpl::vector2<int,Event const&>,luabind::detail::null_type,boost::is_void<int>>(
             L,
             self,
             ctx,
             f,
             a5,
             v9);
  if ( v14 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 93: range 000000000CBEA0B6-000000000CBEA1A6
int __cdecl luabind::detail::invoke<luabind::detail::access_member_ptr<Event,std::string,std::string>,boost::mpl::vector2<std::string,Event const&>,luabind::detail::null_type>(
        lua_State_0 *L,
        const luabind::detail::function_object *self,
        luabind::detail::invoke_context *ctx,
        const luabind::detail::access_member_ptr<Event,std::string,std::string > *f,
        boost::mpl::vector2<std::string,const Event&> a5,
        const luabind::detail::null_type *policies)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  const luabind::detail::null_type *v9; // r9
  int result; // eax
  char v14[96]; // [rsp+30h] [rbp-60h] BYREF

  v6 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v6 + 16) = luabind::detail::invoke<luabind::detail::access_member_ptr<Event,std::string,std::string>,boost::mpl::vector2<std::string,Event const&>,luabind::detail::null_type>;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202116351;
  boost::integral_constant<bool,false>::operator mpl_::bool_<false> const&((const boost::integral_constant<bool,false> *const)(v6 + 32));
  result = luabind::detail::invoke0<luabind::detail::access_member_ptr<Event,std::string,std::string>,boost::mpl::vector2<std::string,Event const&>,luabind::detail::null_type,boost::is_void<std::string>>(
             L,
             self,
             ctx,
             f,
             a5,
             v9);
  if ( v14 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 93: range 000000000CBE9FC5-000000000CBEA0B5
int __cdecl luabind::detail::invoke<luabind::detail::access_member_ptr<Event,unsigned int,unsigned int>,boost::mpl::vector2<unsigned int,Event const&>,luabind::detail::null_type>(
        lua_State_0 *L,
        const luabind::detail::function_object *self,
        luabind::detail::invoke_context *ctx,
        const luabind::detail::access_member_ptr<Event,unsigned int,unsigned int> *f,
        boost::mpl::vector2<unsigned int,const Event&> a5,
        const luabind::detail::null_type *policies)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  const luabind::detail::null_type *v9; // r9
  int result; // eax
  char v14[96]; // [rsp+30h] [rbp-60h] BYREF

  v6 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v6 + 16) = luabind::detail::invoke<luabind::detail::access_member_ptr<Event,unsigned int,unsigned int>,boost::mpl::vector2<unsigned int,Event const&>,luabind::detail::null_type>;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202116351;
  boost::integral_constant<bool,false>::operator mpl_::bool_<false> const&((const boost::integral_constant<bool,false> *const)(v6 + 32));
  result = luabind::detail::invoke0<luabind::detail::access_member_ptr<Event,unsigned int,unsigned int>,boost::mpl::vector2<unsigned int,Event const&>,luabind::detail::null_type,boost::is_void<unsigned int>>(
             L,
             self,
             ctx,
             f,
             a5,
             v9);
  if ( v14 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 93: range 000000000CBE9CD5-000000000CBE9DC5
int __cdecl luabind::detail::invoke<luabind::detail::access_member_ptr<Vector3,float,float>,boost::mpl::vector2<float,Vector3 const&>,luabind::detail::null_type>(
        lua_State_0 *L,
        const luabind::detail::function_object *self,
        luabind::detail::invoke_context *ctx,
        const luabind::detail::access_member_ptr<Vector3,float,float> *f,
        boost::mpl::vector2<float,const Vector3&> a5,
        const luabind::detail::null_type *policies)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  const luabind::detail::null_type *v9; // r9
  int result; // eax
  char v14[96]; // [rsp+30h] [rbp-60h] BYREF

  v6 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v6 + 16) = luabind::detail::invoke<luabind::detail::access_member_ptr<Vector3,float,float>,boost::mpl::vector2<float,Vector3 const&>,luabind::detail::null_type>;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202116351;
  boost::integral_constant<bool,false>::operator mpl_::bool_<false> const&((const boost::integral_constant<bool,false> *const)(v6 + 32));
  result = luabind::detail::invoke0<luabind::detail::access_member_ptr<Vector3,float,float>,boost::mpl::vector2<float,Vector3 const&>,luabind::detail::null_type,boost::is_void<float>>(
             L,
             self,
             ctx,
             f,
             a5,
             v9);
  if ( v14 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 105: range 000000000C643CC8-000000000C643CD7
int __cdecl luabind::detail::maybe_yield_aux(lua_State_0 *a1, int results, mpl_::false_ a3)
{
  return results;
};

// Line 115: range 000000000CBED0B0-000000000CBED170
int __cdecl luabind::detail::maybe_yield<luabind::detail::null_type>(
        lua_State_0 *L,
        int results,
        luabind::detail::null_type *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int result; // eax
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v3 + 16) = luabind::detail::maybe_yield<luabind::detail::null_type>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  result = luabind::detail::maybe_yield_aux(L, results, (mpl_::false_)results);
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 122: range 000000000C643CD8-000000000C643D94
int __cdecl luabind::detail::sum_scores(const int *first, const int *last)
{
  int result; // [rsp+1Ch] [rbp-4h]

  result = 0;
  while ( first != last )
  {
    if ( *(_BYTE *)(((unsigned __int64)first >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)first & 7) + 3) >= *(_BYTE *)(((unsigned __int64)first >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(first);
    }
    if ( *first < 0 )
      return *first;
    if ( *(_BYTE *)(((unsigned __int64)first >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)first & 7) + 3) >= *(_BYTE *)(((unsigned __int64)first >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(first);
    }
    result += *first++;
  }
  return result;
};

// Line 210: range 000000000CBEC6DF-000000000CBECDFE
__int64 __fastcall luabind::detail::invoke_normal<luabind::detail::access_member_ptr<Event,data::EventType,data::EventType>,boost::mpl::vector2<data::EventType,Event const&>,luabind::detail::null_type>(
        lua_State_0 *L,
        const luabind::detail::function_object *self,
        unsigned __int64 ctx,
        const luabind::detail::access_member_ptr<Event,data::EventType,data::EventType> *f,
        boost::mpl::vector2<data::EventType,const Event&> a5,
        const luabind::detail::null_type *a6)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  int v9; // ecx
  const luabind::detail::function_object *v10; // rcx
  int v11; // eax
  luabind::detail::function_object *next; // rcx
  luabind::detail::function_object *v13; // rax
  unsigned __int64 v14; // rax
  const Event *v15; // rax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ecx
  __int64 result; // rax
  int score; // [rsp+3Ch] [rbp-F4h]
  unsigned int results; // [rsp+40h] [rbp-F0h]
  int arity; // [rsp+48h] [rbp-E8h]
  int arguments; // [rsp+4Ch] [rbp-E4h]
  char v26[224]; // [rsp+50h] [rbp-E0h] BYREF

  v6 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 48 1 20 result_converter:227 64 8 2 c0 96 8 10 scores:250 128 8 11 indices:310 160 8 9 <unknown>";
  *(_QWORD *)(v6 + 16) = luabind::detail::invoke_normal<luabind::detail::access_member_ptr<Event,data::EventType,data::EventType>,boost::mpl::vector2<data::EventType,Event const&>,luabind::detail::null_type>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -218959360;
  v8[536862725] = -202116352;
  luabind::default_converter<Event const&,void>::default_converter((luabind::default_converter<const Event&,void> *const)(v6 + 64));
  arity = luabind::detail::const_ref_converter::consumed_args((const luabind::detail::const_ref_converter *const)(v6 + 64));
  arguments = lua_gettop(L);
  score = -1;
  if ( arity == arguments )
  {
    if ( *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v6 + 96) = 0LL;
    luabind::detail::decorated_type<Event const&>::get();
    v9 = luabind::detail::const_ref_converter::match<Event>(
           (luabind::detail::const_ref_converter *const)(v6 + 64),
           L,
           (luabind::detail::by_const_reference<Event>)1,
           (int)L);
    if ( *(_BYTE *)(((v6 + 100) >> 3) + 0x7FFF8000) != 0
      && (char)(((v6 + 100) & 7) + 3) >= *(_BYTE *)(((v6 + 100) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v6 + 100);
    }
    *(_DWORD *)(v6 + 100) = v9;
    score = luabind::detail::sum_scores((const int *)(v6 + 100), (const int *)(v6 + 104));
    *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) = -8;
  }
  if ( score < 0 )
    goto LABEL_19;
  if ( *(_BYTE *)((ctx >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((ctx >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(ctx);
  if ( score >= *(_DWORD *)ctx )
  {
LABEL_19:
    if ( *(_BYTE *)((ctx >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((ctx >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(ctx);
    if ( score == *(_DWORD *)ctx )
    {
      v10 = self;
      if ( *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(ctx + 88);
      v11 = *(_DWORD *)(ctx + 88);
      *(_DWORD *)(ctx + 88) = v11 + 1;
      if ( *(_BYTE *)(((8LL * v11 + ctx + 8) >> 3) + 0x7FFF8000) )
        v11 = __asan_report_store8();
      *(_QWORD *)(ctx + 8LL * v11 + 8) = v10;
    }
  }
  else
  {
    *(_DWORD *)ctx = score;
    if ( *(_BYTE *)(((ctx + 8) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(ctx + 8) = self;
    if ( *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(ctx + 88);
    *(_DWORD *)(ctx + 88) = 1;
  }
  results = 0;
  if ( *(_BYTE *)(((unsigned __int64)&self->next >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( self->next )
  {
    next = self->next;
    v13 = next;
    if ( *(_BYTE *)(((unsigned __int64)next >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = (unsigned __int64)(v13->_vptr_function_object + 2);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    results = (*(__int64 (__fastcall **)(luabind::detail::function_object *, lua_State_0 *, unsigned __int64))v14)(
                next,
                L,
                ctx);
  }
  if ( *(_BYTE *)((ctx >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((ctx >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(ctx);
  if ( score == *(_DWORD *)ctx )
  {
    if ( *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(ctx + 88);
    if ( *(_DWORD *)(ctx + 88) == 1 )
    {
      luabind::detail::decorated_type<Event const&>::get();
      v15 = luabind::detail::const_ref_converter::apply<Event>(
              (luabind::detail::const_ref_converter *const)(v6 + 64),
              L,
              (luabind::detail::by_const_reference<Event>)1,
              (int)L);
      v16 = luabind::detail::access_member_ptr<Event,data::EventType,data::EventType>::operator()(f, v15);
      luabind::detail::enum_converter::apply((luabind::detail::enum_converter *const)(v6 + 48), L, v16);
      luabind::detail::decorated_type<Event const&>::get();
      luabind::detail::const_ref_converter::converter_postcall<Event>(
        (luabind::detail::const_ref_converter *const)(v6 + 64),
        L,
        (luabind::detail::by_const_reference<Event>)1,
        (int)L);
      v17 = lua_gettop(L);
      results = luabind::detail::maybe_yield<luabind::detail::null_type>(L, v17 - arguments, 0LL);
      *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v6 + 128) = 0LL;
      if ( *(_BYTE *)(((v6 + 132) >> 3) + 0x7FFF8000) != 0
        && (char)(((v6 - 124) & 7) + 3) >= *(_BYTE *)(((v6 + 132) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v6 + 132);
      }
      *(_DWORD *)(v6 + 132) = 1;
      v18 = arguments + results;
      if ( *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v6 + 128);
      *(_DWORD *)(v6 + 128) = v18;
      *(_BYTE *)(((v6 + 160) >> 3) + 0x7FFF8000) = 0;
      luabind::index_map::index_map((luabind::index_map *const)(v6 + 160), (const int *)(v6 + 128));
      luabind::detail::policy_list_postcall<luabind::detail::null_type>::apply(
        L,
        (const luabind::index_map *)(v6 + 160));
    }
  }
  result = results;
  if ( v26 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 210: range 000000000CBEB081-000000000CBEB7A0
__int64 __fastcall luabind::detail::invoke_normal<luabind::detail::access_member_ptr<Event,int,int>,boost::mpl::vector2<int,Event const&>,luabind::detail::null_type>(
        lua_State_0 *L,
        const luabind::detail::function_object *self,
        unsigned __int64 ctx,
        const luabind::detail::access_member_ptr<Event,int,int> *f,
        boost::mpl::vector2<int,const Event&> a5,
        const luabind::detail::null_type *a6)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  int v9; // ecx
  const luabind::detail::function_object *v10; // rcx
  int v11; // eax
  luabind::detail::function_object *next; // rcx
  luabind::detail::function_object *v13; // rax
  unsigned __int64 v14; // rax
  const Event *v15; // rax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ecx
  __int64 result; // rax
  int score; // [rsp+3Ch] [rbp-F4h]
  unsigned int results; // [rsp+40h] [rbp-F0h]
  int arity; // [rsp+48h] [rbp-E8h]
  int arguments; // [rsp+4Ch] [rbp-E4h]
  char v26[224]; // [rsp+50h] [rbp-E0h] BYREF

  v6 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 48 1 20 result_converter:227 64 8 2 c0 96 8 10 scores:250 128 8 11 indices:310 160 8 9 <unknown>";
  *(_QWORD *)(v6 + 16) = luabind::detail::invoke_normal<luabind::detail::access_member_ptr<Event,int,int>,boost::mpl::vector2<int,Event const&>,luabind::detail::null_type>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -218959360;
  v8[536862725] = -202116352;
  luabind::default_converter<Event const&,void>::default_converter((luabind::default_converter<const Event&,void> *const)(v6 + 64));
  arity = luabind::detail::const_ref_converter::consumed_args((const luabind::detail::const_ref_converter *const)(v6 + 64));
  arguments = lua_gettop(L);
  score = -1;
  if ( arity == arguments )
  {
    if ( *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v6 + 96) = 0LL;
    luabind::detail::decorated_type<Event const&>::get();
    v9 = luabind::detail::const_ref_converter::match<Event>(
           (luabind::detail::const_ref_converter *const)(v6 + 64),
           L,
           (luabind::detail::by_const_reference<Event>)1,
           (int)L);
    if ( *(_BYTE *)(((v6 + 100) >> 3) + 0x7FFF8000) != 0
      && (char)(((v6 + 100) & 7) + 3) >= *(_BYTE *)(((v6 + 100) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v6 + 100);
    }
    *(_DWORD *)(v6 + 100) = v9;
    score = luabind::detail::sum_scores((const int *)(v6 + 100), (const int *)(v6 + 104));
    *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) = -8;
  }
  if ( score < 0 )
    goto LABEL_19;
  if ( *(_BYTE *)((ctx >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((ctx >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(ctx);
  if ( score >= *(_DWORD *)ctx )
  {
LABEL_19:
    if ( *(_BYTE *)((ctx >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((ctx >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(ctx);
    if ( score == *(_DWORD *)ctx )
    {
      v10 = self;
      if ( *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(ctx + 88);
      v11 = *(_DWORD *)(ctx + 88);
      *(_DWORD *)(ctx + 88) = v11 + 1;
      if ( *(_BYTE *)(((8LL * v11 + ctx + 8) >> 3) + 0x7FFF8000) )
        v11 = __asan_report_store8();
      *(_QWORD *)(ctx + 8LL * v11 + 8) = v10;
    }
  }
  else
  {
    *(_DWORD *)ctx = score;
    if ( *(_BYTE *)(((ctx + 8) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(ctx + 8) = self;
    if ( *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(ctx + 88);
    *(_DWORD *)(ctx + 88) = 1;
  }
  results = 0;
  if ( *(_BYTE *)(((unsigned __int64)&self->next >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( self->next )
  {
    next = self->next;
    v13 = next;
    if ( *(_BYTE *)(((unsigned __int64)next >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = (unsigned __int64)(v13->_vptr_function_object + 2);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    results = (*(__int64 (__fastcall **)(luabind::detail::function_object *, lua_State_0 *, unsigned __int64))v14)(
                next,
                L,
                ctx);
  }
  if ( *(_BYTE *)((ctx >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((ctx >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(ctx);
  if ( score == *(_DWORD *)ctx )
  {
    if ( *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(ctx + 88);
    if ( *(_DWORD *)(ctx + 88) == 1 )
    {
      luabind::detail::decorated_type<Event const&>::get();
      v15 = luabind::detail::const_ref_converter::apply<Event>(
              (luabind::detail::const_ref_converter *const)(v6 + 64),
              L,
              (luabind::detail::by_const_reference<Event>)1,
              (int)L);
      v16 = luabind::detail::access_member_ptr<Event,int,int>::operator()(f, v15);
      luabind::native_converter_base<int,luabind::default_converter<int,void>>::apply(
        (luabind::native_converter_base<int,luabind::default_converter<int,void> > *const)(v6 + 48),
        L,
        v16);
      luabind::detail::decorated_type<Event const&>::get();
      luabind::detail::const_ref_converter::converter_postcall<Event>(
        (luabind::detail::const_ref_converter *const)(v6 + 64),
        L,
        (luabind::detail::by_const_reference<Event>)1,
        (int)L);
      v17 = lua_gettop(L);
      results = luabind::detail::maybe_yield<luabind::detail::null_type>(L, v17 - arguments, 0LL);
      *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v6 + 128) = 0LL;
      if ( *(_BYTE *)(((v6 + 132) >> 3) + 0x7FFF8000) != 0
        && (char)(((v6 - 124) & 7) + 3) >= *(_BYTE *)(((v6 + 132) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v6 + 132);
      }
      *(_DWORD *)(v6 + 132) = 1;
      v18 = arguments + results;
      if ( *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v6 + 128);
      *(_DWORD *)(v6 + 128) = v18;
      *(_BYTE *)(((v6 + 160) >> 3) + 0x7FFF8000) = 0;
      luabind::index_map::index_map((luabind::index_map *const)(v6 + 160), (const int *)(v6 + 128));
      luabind::detail::policy_list_postcall<luabind::detail::null_type>::apply(
        L,
        (const luabind::index_map *)(v6 + 160));
    }
  }
  result = results;
  if ( v26 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 210: range 000000000CBEBEC1-000000000CBEC6DE
__int64 __fastcall luabind::detail::invoke_normal<luabind::detail::access_member_ptr<Event,std::string,std::string>,boost::mpl::vector2<std::string,Event const&>,luabind::detail::null_type>(
        lua_State_0 *L,
        const luabind::detail::function_object *self,
        unsigned __int64 ctx,
        const luabind::detail::access_member_ptr<Event,std::string,std::string > *f,
        boost::mpl::vector2<std::string,const Event&> a5,
        const luabind::detail::null_type *a6)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  int v9; // ecx
  const luabind::detail::function_object *v10; // rcx
  int v11; // eax
  luabind::detail::function_object *next; // rcx
  luabind::detail::function_object *v13; // rax
  unsigned __int64 v14; // rax
  const Event *v15; // rsi
  int v16; // eax
  unsigned int v17; // ecx
  __int64 result; // rax
  int score; // [rsp+3Ch] [rbp-134h]
  unsigned int results; // [rsp+40h] [rbp-130h]
  int arity; // [rsp+48h] [rbp-128h]
  int arguments; // [rsp+4Ch] [rbp-124h]
  char v25[288]; // [rsp+50h] [rbp-120h] BYREF

  v6 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(256LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "6 48 1 20 result_converter:227 64 8 2 c0 96 8 10 scores:250 128 8 11 indices:310 160 8 9 <unknow"
                        "n> 192 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = luabind::detail::invoke_normal<luabind::detail::access_member_ptr<Event,std::string,std::string>,boost::mpl::vector2<std::string,Event const&>,luabind::detail::null_type>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -218959360;
  v8[536862725] = -218959360;
  v8[536862727] = -202116109;
  luabind::default_converter<Event const&,void>::default_converter((luabind::default_converter<const Event&,void> *const)(v6 + 64));
  arity = luabind::detail::const_ref_converter::consumed_args((const luabind::detail::const_ref_converter *const)(v6 + 64));
  arguments = lua_gettop(L);
  score = -1;
  if ( arity == arguments )
  {
    if ( *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v6 + 96) = 0LL;
    luabind::detail::decorated_type<Event const&>::get();
    v9 = luabind::detail::const_ref_converter::match<Event>(
           (luabind::detail::const_ref_converter *const)(v6 + 64),
           L,
           (luabind::detail::by_const_reference<Event>)1,
           (int)L);
    if ( *(_BYTE *)(((v6 + 100) >> 3) + 0x7FFF8000) != 0
      && (char)(((v6 + 100) & 7) + 3) >= *(_BYTE *)(((v6 + 100) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v6 + 100);
    }
    *(_DWORD *)(v6 + 100) = v9;
    score = luabind::detail::sum_scores((const int *)(v6 + 100), (const int *)(v6 + 104));
    *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) = -8;
  }
  if ( score < 0 )
    goto LABEL_19;
  if ( *(_BYTE *)((ctx >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((ctx >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(ctx);
  if ( score >= *(_DWORD *)ctx )
  {
LABEL_19:
    if ( *(_BYTE *)((ctx >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((ctx >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(ctx);
    if ( score == *(_DWORD *)ctx )
    {
      v10 = self;
      if ( *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(ctx + 88);
      v11 = *(_DWORD *)(ctx + 88);
      *(_DWORD *)(ctx + 88) = v11 + 1;
      if ( *(_BYTE *)(((8LL * v11 + ctx + 8) >> 3) + 0x7FFF8000) )
        v11 = __asan_report_store8();
      *(_QWORD *)(ctx + 8LL * v11 + 8) = v10;
    }
  }
  else
  {
    *(_DWORD *)ctx = score;
    if ( *(_BYTE *)(((ctx + 8) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(ctx + 8) = self;
    if ( *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(ctx + 88);
    *(_DWORD *)(ctx + 88) = 1;
  }
  results = 0;
  if ( *(_BYTE *)(((unsigned __int64)&self->next >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( self->next )
  {
    next = self->next;
    v13 = next;
    if ( *(_BYTE *)(((unsigned __int64)next >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = (unsigned __int64)(v13->_vptr_function_object + 2);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    results = (*(__int64 (__fastcall **)(luabind::detail::function_object *, lua_State_0 *, unsigned __int64))v14)(
                next,
                L,
                ctx);
  }
  if ( *(_BYTE *)((ctx >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((ctx >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(ctx);
  if ( score == *(_DWORD *)ctx )
  {
    if ( *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(ctx + 88);
    if ( *(_DWORD *)(ctx + 88) == 1 )
    {
      *(_DWORD *)(((v6 + 192) >> 3) + 0x7FFF8000) = 0;
      luabind::detail::decorated_type<Event const&>::get();
      v15 = luabind::detail::const_ref_converter::apply<Event>(
              (luabind::detail::const_ref_converter *const)(v6 + 64),
              L,
              (luabind::detail::by_const_reference<Event>)1,
              (int)L);
      if ( *(char *)(((v6 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v6 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v6 - 64 + 31) & 7) >= *(_BYTE *)(((v6 + 223) >> 3) + 0x7FFF8000) )
      {
        v15 = (const Event *)32;
        __asan_report_store_n(v6 + 192, 32LL);
      }
      luabind::detail::access_member_ptr<Event,std::string,std::string>::operator()((std::string *)(v6 + 192), f, v15);
      luabind::native_converter_base<std::string,luabind::default_converter<std::string,void>>::apply(
        (luabind::native_converter_base<std::string,luabind::default_converter<std::string,void> > *const)(v6 + 48),
        L,
        (luabind::native_converter_base<std::string,luabind::default_converter<std::string,void> >::param_type)(v6 + 192));
      std::string::~string((void *)(v6 + 192));
      *(_DWORD *)(((v6 + 192) >> 3) + 0x7FFF8000) = -117901064;
      luabind::detail::decorated_type<Event const&>::get();
      luabind::detail::const_ref_converter::converter_postcall<Event>(
        (luabind::detail::const_ref_converter *const)(v6 + 64),
        L,
        (luabind::detail::by_const_reference<Event>)1,
        (int)L);
      v16 = lua_gettop(L);
      results = luabind::detail::maybe_yield<luabind::detail::null_type>(L, v16 - arguments, 0LL);
      *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v6 + 128) = 0LL;
      if ( *(_BYTE *)(((v6 + 132) >> 3) + 0x7FFF8000) != 0
        && (char)(((v6 - 124) & 7) + 3) >= *(_BYTE *)(((v6 + 132) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v6 + 132);
      }
      *(_DWORD *)(v6 + 132) = 1;
      v17 = arguments + results;
      if ( *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v6 + 128);
      *(_DWORD *)(v6 + 128) = v17;
      *(_BYTE *)(((v6 + 160) >> 3) + 0x7FFF8000) = 0;
      luabind::index_map::index_map((luabind::index_map *const)(v6 + 160), (const int *)(v6 + 128));
      luabind::detail::policy_list_postcall<luabind::detail::null_type>::apply(
        L,
        (const luabind::index_map *)(v6 + 160));
    }
  }
  result = results;
  if ( v25 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 210: range 000000000CBEB7A1-000000000CBEBEC0
__int64 __fastcall luabind::detail::invoke_normal<luabind::detail::access_member_ptr<Event,unsigned int,unsigned int>,boost::mpl::vector2<unsigned int,Event const&>,luabind::detail::null_type>(
        lua_State_0 *L,
        const luabind::detail::function_object *self,
        unsigned __int64 ctx,
        const luabind::detail::access_member_ptr<Event,unsigned int,unsigned int> *f,
        boost::mpl::vector2<unsigned int,const Event&> a5,
        const luabind::detail::null_type *a6)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  int v9; // ecx
  const luabind::detail::function_object *v10; // rcx
  int v11; // eax
  luabind::detail::function_object *next; // rcx
  luabind::detail::function_object *v13; // rax
  unsigned __int64 v14; // rax
  const Event *v15; // rax
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // ecx
  __int64 result; // rax
  int score; // [rsp+3Ch] [rbp-F4h]
  unsigned int results; // [rsp+40h] [rbp-F0h]
  int arity; // [rsp+48h] [rbp-E8h]
  int arguments; // [rsp+4Ch] [rbp-E4h]
  char v26[224]; // [rsp+50h] [rbp-E0h] BYREF

  v6 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 48 1 20 result_converter:227 64 8 2 c0 96 8 10 scores:250 128 8 11 indices:310 160 8 9 <unknown>";
  *(_QWORD *)(v6 + 16) = luabind::detail::invoke_normal<luabind::detail::access_member_ptr<Event,unsigned int,unsigned int>,boost::mpl::vector2<unsigned int,Event const&>,luabind::detail::null_type>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -218959360;
  v8[536862725] = -202116352;
  luabind::default_converter<Event const&,void>::default_converter((luabind::default_converter<const Event&,void> *const)(v6 + 64));
  arity = luabind::detail::const_ref_converter::consumed_args((const luabind::detail::const_ref_converter *const)(v6 + 64));
  arguments = lua_gettop(L);
  score = -1;
  if ( arity == arguments )
  {
    if ( *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v6 + 96) = 0LL;
    luabind::detail::decorated_type<Event const&>::get();
    v9 = luabind::detail::const_ref_converter::match<Event>(
           (luabind::detail::const_ref_converter *const)(v6 + 64),
           L,
           (luabind::detail::by_const_reference<Event>)1,
           (int)L);
    if ( *(_BYTE *)(((v6 + 100) >> 3) + 0x7FFF8000) != 0
      && (char)(((v6 + 100) & 7) + 3) >= *(_BYTE *)(((v6 + 100) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v6 + 100);
    }
    *(_DWORD *)(v6 + 100) = v9;
    score = luabind::detail::sum_scores((const int *)(v6 + 100), (const int *)(v6 + 104));
    *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) = -8;
  }
  if ( score < 0 )
    goto LABEL_19;
  if ( *(_BYTE *)((ctx >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((ctx >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(ctx);
  if ( score >= *(_DWORD *)ctx )
  {
LABEL_19:
    if ( *(_BYTE *)((ctx >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((ctx >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(ctx);
    if ( score == *(_DWORD *)ctx )
    {
      v10 = self;
      if ( *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(ctx + 88);
      v11 = *(_DWORD *)(ctx + 88);
      *(_DWORD *)(ctx + 88) = v11 + 1;
      if ( *(_BYTE *)(((8LL * v11 + ctx + 8) >> 3) + 0x7FFF8000) )
        v11 = __asan_report_store8();
      *(_QWORD *)(ctx + 8LL * v11 + 8) = v10;
    }
  }
  else
  {
    *(_DWORD *)ctx = score;
    if ( *(_BYTE *)(((ctx + 8) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(ctx + 8) = self;
    if ( *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(ctx + 88);
    *(_DWORD *)(ctx + 88) = 1;
  }
  results = 0;
  if ( *(_BYTE *)(((unsigned __int64)&self->next >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( self->next )
  {
    next = self->next;
    v13 = next;
    if ( *(_BYTE *)(((unsigned __int64)next >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = (unsigned __int64)(v13->_vptr_function_object + 2);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    results = (*(__int64 (__fastcall **)(luabind::detail::function_object *, lua_State_0 *, unsigned __int64))v14)(
                next,
                L,
                ctx);
  }
  if ( *(_BYTE *)((ctx >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((ctx >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(ctx);
  if ( score == *(_DWORD *)ctx )
  {
    if ( *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(ctx + 88);
    if ( *(_DWORD *)(ctx + 88) == 1 )
    {
      luabind::detail::decorated_type<Event const&>::get();
      v15 = luabind::detail::const_ref_converter::apply<Event>(
              (luabind::detail::const_ref_converter *const)(v6 + 64),
              L,
              (luabind::detail::by_const_reference<Event>)1,
              (int)L);
      v16 = luabind::detail::access_member_ptr<Event,unsigned int,unsigned int>::operator()(f, v15);
      luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void>>::apply(
        (luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void> > *const)(v6 + 48),
        L,
        v16);
      luabind::detail::decorated_type<Event const&>::get();
      luabind::detail::const_ref_converter::converter_postcall<Event>(
        (luabind::detail::const_ref_converter *const)(v6 + 64),
        L,
        (luabind::detail::by_const_reference<Event>)1,
        (int)L);
      v17 = lua_gettop(L);
      results = luabind::detail::maybe_yield<luabind::detail::null_type>(L, v17 - arguments, 0LL);
      *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v6 + 128) = 0LL;
      if ( *(_BYTE *)(((v6 + 132) >> 3) + 0x7FFF8000) != 0
        && (char)(((v6 - 124) & 7) + 3) >= *(_BYTE *)(((v6 + 132) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v6 + 132);
      }
      *(_DWORD *)(v6 + 132) = 1;
      v18 = arguments + results;
      if ( *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v6 + 128);
      *(_DWORD *)(v6 + 128) = v18;
      *(_BYTE *)(((v6 + 160) >> 3) + 0x7FFF8000) = 0;
      luabind::index_map::index_map((luabind::index_map *const)(v6 + 160), (const int *)(v6 + 128));
      luabind::detail::policy_list_postcall<luabind::detail::null_type>::apply(
        L,
        (const luabind::index_map *)(v6 + 160));
    }
  }
  result = results;
  if ( v26 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 210: range 000000000CBEA939-000000000CBEB056
__int64 __fastcall luabind::detail::invoke_normal<luabind::detail::access_member_ptr<Vector3,float,float>,boost::mpl::vector2<float,Vector3 const&>,luabind::detail::null_type>(
        lua_State_0 *L,
        const luabind::detail::function_object *self,
        unsigned __int64 ctx,
        const luabind::detail::access_member_ptr<Vector3,float,float> *f,
        boost::mpl::vector2<float,const Vector3&> a5,
        const luabind::detail::null_type *a6)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  int v9; // ecx
  const luabind::detail::function_object *v10; // rcx
  int v11; // eax
  luabind::detail::function_object *next; // rcx
  luabind::detail::function_object *v13; // rax
  unsigned __int64 v14; // rax
  const Vector3 *v15; // rax
  float v16; // xmm0_4
  int v17; // eax
  unsigned int v18; // ecx
  __int64 result; // rax
  int score; // [rsp+3Ch] [rbp-F4h]
  unsigned int results; // [rsp+40h] [rbp-F0h]
  int arity; // [rsp+48h] [rbp-E8h]
  int arguments; // [rsp+4Ch] [rbp-E4h]
  char v26[224]; // [rsp+50h] [rbp-E0h] BYREF

  v6 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 48 1 20 result_converter:227 64 8 2 c0 96 8 10 scores:250 128 8 11 indices:310 160 8 9 <unknown>";
  *(_QWORD *)(v6 + 16) = luabind::detail::invoke_normal<luabind::detail::access_member_ptr<Vector3,float,float>,boost::mpl::vector2<float,Vector3 const&>,luabind::detail::null_type>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -218959360;
  v8[536862725] = -202116352;
  luabind::default_converter<Vector3 const&,void>::default_converter((luabind::default_converter<const Vector3&,void> *const)(v6 + 64));
  arity = luabind::detail::const_ref_converter::consumed_args((const luabind::detail::const_ref_converter *const)(v6 + 64));
  arguments = lua_gettop(L);
  score = -1;
  if ( arity == arguments )
  {
    if ( *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v6 + 96) = 0LL;
    luabind::detail::decorated_type<Vector3 const&>::get();
    v9 = luabind::detail::const_ref_converter::match<Vector3>(
           (luabind::detail::const_ref_converter *const)(v6 + 64),
           L,
           (luabind::detail::by_const_reference<Vector3>)1,
           (int)L);
    if ( *(_BYTE *)(((v6 + 100) >> 3) + 0x7FFF8000) != 0
      && (char)(((v6 + 100) & 7) + 3) >= *(_BYTE *)(((v6 + 100) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v6 + 100);
    }
    *(_DWORD *)(v6 + 100) = v9;
    score = luabind::detail::sum_scores((const int *)(v6 + 100), (const int *)(v6 + 104));
    *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) = -8;
  }
  if ( score < 0 )
    goto LABEL_19;
  if ( *(_BYTE *)((ctx >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((ctx >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(ctx);
  if ( score >= *(_DWORD *)ctx )
  {
LABEL_19:
    if ( *(_BYTE *)((ctx >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((ctx >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(ctx);
    if ( score == *(_DWORD *)ctx )
    {
      v10 = self;
      if ( *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(ctx + 88);
      v11 = *(_DWORD *)(ctx + 88);
      *(_DWORD *)(ctx + 88) = v11 + 1;
      if ( *(_BYTE *)(((8LL * v11 + ctx + 8) >> 3) + 0x7FFF8000) )
        v11 = __asan_report_store8();
      *(_QWORD *)(ctx + 8LL * v11 + 8) = v10;
    }
  }
  else
  {
    *(_DWORD *)ctx = score;
    if ( *(_BYTE *)(((ctx + 8) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(ctx + 8) = self;
    if ( *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(ctx + 88);
    *(_DWORD *)(ctx + 88) = 1;
  }
  results = 0;
  if ( *(_BYTE *)(((unsigned __int64)&self->next >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( self->next )
  {
    next = self->next;
    v13 = next;
    if ( *(_BYTE *)(((unsigned __int64)next >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = (unsigned __int64)(v13->_vptr_function_object + 2);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    results = (*(__int64 (__fastcall **)(luabind::detail::function_object *, lua_State_0 *, unsigned __int64))v14)(
                next,
                L,
                ctx);
  }
  if ( *(_BYTE *)((ctx >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((ctx >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(ctx);
  if ( score == *(_DWORD *)ctx )
  {
    if ( *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((ctx + 88) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(ctx + 88);
    if ( *(_DWORD *)(ctx + 88) == 1 )
    {
      luabind::detail::decorated_type<Vector3 const&>::get();
      v15 = luabind::detail::const_ref_converter::apply<Vector3>(
              (luabind::detail::const_ref_converter *const)(v6 + 64),
              L,
              (luabind::detail::by_const_reference<Vector3>)1,
              (int)L);
      v16 = luabind::detail::access_member_ptr<Vector3,float,float>::operator()(f, v15);
      luabind::native_converter_base<float,luabind::default_converter<float,void>>::apply(
        (luabind::native_converter_base<float,luabind::default_converter<float,void> > *const)(v6 + 48),
        L,
        v16);
      luabind::detail::decorated_type<Vector3 const&>::get();
      luabind::detail::const_ref_converter::converter_postcall<Vector3>(
        (luabind::detail::const_ref_converter *const)(v6 + 64),
        L,
        (luabind::detail::by_const_reference<Vector3>)1,
        (int)L);
      v17 = lua_gettop(L);
      results = luabind::detail::maybe_yield<luabind::detail::null_type>(L, v17 - arguments, 0LL);
      *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v6 + 128) = 0LL;
      if ( *(_BYTE *)(((v6 + 132) >> 3) + 0x7FFF8000) != 0
        && (char)(((v6 - 124) & 7) + 3) >= *(_BYTE *)(((v6 + 132) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v6 + 132);
      }
      *(_DWORD *)(v6 + 132) = 1;
      v18 = arguments + results;
      if ( *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v6 + 128);
      *(_DWORD *)(v6 + 128) = v18;
      *(_BYTE *)(((v6 + 160) >> 3) + 0x7FFF8000) = 0;
      luabind::index_map::index_map((luabind::index_map *const)(v6 + 160), (const int *)(v6 + 128));
      luabind::detail::policy_list_postcall<luabind::detail::null_type>::apply(
        L,
        (const luabind::index_map *)(v6 + 160));
    }
  }
  result = results;
  if ( v26 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
