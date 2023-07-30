// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/luabind_d/include/luabind/detail/format_signature.hpp

// Line 39: range 000000000CBEEAA9-000000000CBEEC75
void __cdecl luabind::detail::type_to_string<Event,void>::get(lua_State_0 *L)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *v4; // rdx
  char v5[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = luabind::detail::type_to_string<Event,void>::get;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862723] = -202116109;
  luabind::type_id::type_id((luabind::type_id *const)(v1 + 32), (const std::type_info *)&`typeinfo for'Event);
  if ( *(char *)(((v1 + 64) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) != 0
    && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v1 + 64, 32LL);
  }
  luabind::detail::get_class_name[abi:cxx11]((std::string *)(v1 + 64), L, (luabind::type_id *)(v1 + 32));
  v4 = (const char *)std::string::c_str(v1 + 64);
  lua_pushstring(L, v4);
  std::string::~string((void *)(v1 + 64));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 39: range 000000000CBEEC76-000000000CBEEE42
void __cdecl luabind::detail::type_to_string<Vector3,void>::get(lua_State_0 *L)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *v4; // rdx
  char v5[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = luabind::detail::type_to_string<Vector3,void>::get;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862723] = -202116109;
  luabind::type_id::type_id((luabind::type_id *const)(v1 + 32), (const std::type_info *)&`typeinfo for'Vector3);
  if ( *(char *)(((v1 + 64) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) != 0
    && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v1 + 64, 32LL);
  }
  luabind::detail::get_class_name[abi:cxx11]((std::string *)(v1 + 64), L, (luabind::type_id *)(v1 + 32));
  v4 = (const char *)std::string::c_str(v1 + 64);
  lua_pushstring(L, v4);
  std::string::~string((void *)(v1 + 64));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 39: range 000000000CBEE0EB-000000000CBEE2B7
void __cdecl luabind::detail::type_to_string<data::EventType,void>::get(lua_State_0 *L)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *v4; // rdx
  char v5[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = luabind::detail::type_to_string<data::EventType,void>::get;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862723] = -202116109;
  luabind::type_id::type_id((luabind::type_id *const)(v1 + 32), (const std::type_info *)&`typeinfo for'data::EventType);
  if ( *(char *)(((v1 + 64) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) != 0
    && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v1 + 64, 32LL);
  }
  luabind::detail::get_class_name[abi:cxx11]((std::string *)(v1 + 64), L, (luabind::type_id *)(v1 + 32));
  v4 = (const char *)std::string::c_str(v1 + 64);
  lua_pushstring(L, v4);
  std::string::~string((void *)(v1 + 64));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 39: range 000000000CBEE698-000000000CBEE864
void __cdecl luabind::detail::type_to_string<float,void>::get(lua_State_0 *L)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *v4; // rdx
  char v5[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = luabind::detail::type_to_string<float,void>::get;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862723] = -202116109;
  luabind::type_id::type_id((luabind::type_id *const)(v1 + 32), (const std::type_info *)&`typeinfo for'float);
  if ( *(char *)(((v1 + 64) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) != 0
    && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v1 + 64, 32LL);
  }
  luabind::detail::get_class_name[abi:cxx11]((std::string *)(v1 + 64), L, (luabind::type_id *)(v1 + 32));
  v4 = (const char *)std::string::c_str(v1 + 64);
  lua_pushstring(L, v4);
  std::string::~string((void *)(v1 + 64));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 59: range 000000000CBEE95D-000000000CBEE99B
void __cdecl luabind::detail::type_to_string<Event const&,void>::get(lua_State_0 *L)
{
  luabind::detail::type_to_string<Event const,void>::get(L);
  lua_pushstring(L, "&");
  lua_concat(L, 2);
};

// Line 59: range 000000000CBEE9DC-000000000CBEEA1A
void __cdecl luabind::detail::type_to_string<Vector3 const&,void>::get(lua_State_0 *L)
{
  luabind::detail::type_to_string<Vector3 const,void>::get(L);
  lua_pushstring(L, "&");
  lua_concat(L, 2);
};

// Line 70: range 000000000CBEEA2B-000000000CBEEA69
void __cdecl luabind::detail::type_to_string<Event const,void>::get(lua_State_0 *L)
{
  luabind::detail::type_to_string<Event,void>::get(L);
  lua_pushstring(L, " const");
  lua_concat(L, 2);
};

// Line 70: range 000000000CBEEA6A-000000000CBEEAA8
void __cdecl luabind::detail::type_to_string<Vector3 const,void>::get(lua_State_0 *L)
{
  luabind::detail::type_to_string<Vector3,void>::get(L);
  lua_pushstring(L, " const");
  lua_concat(L, 2);
};

// Line 94: range 000000000C643D95-000000000C643DB6
void __cdecl luabind::detail::type_to_string<int,void>::get(lua_State_0 *L)
{
  lua_pushstring(L, off_19180520);
};

// Line 94: range 000000000C643DB7-000000000C643DD8
void __cdecl luabind::detail::type_to_string<unsigned int,void>::get(lua_State_0 *L)
{
  lua_pushstring(L, "unsigned int");
};

// Line 99: range 000000000C643DD9-000000000C643DFA
void __cdecl luabind::detail::type_to_string<std::string,void>::get(lua_State_0 *L)
{
  lua_pushstring(L, "std::string");
};

// Line 118: range 000000000CBEE99C-000000000CBEE9AB
void __fastcall luabind::detail::format_signature_aux<boost::mpl::v_iter<boost::mpl::vector2<data::EventType,Event const&>,2l>>(
        lua_State_0 *a1,
        bool a2,
        boost::mpl::v_iter<boost::mpl::vector2<data::EventType,const Event&>,2> a3,
        boost::mpl::v_iter<boost::mpl::vector2<data::EventType,const Event&>,2> a4)
{
  ;
};

// Line 118: range 000000000CBEEA1B-000000000CBEEA2A
void __fastcall luabind::detail::format_signature_aux<boost::mpl::v_iter<boost::mpl::vector2<float,Vector3 const&>,2l>>(
        lua_State_0 *a1,
        bool a2,
        boost::mpl::v_iter<boost::mpl::vector2<float,const Vector3&>,2> a3,
        boost::mpl::v_iter<boost::mpl::vector2<float,const Vector3&>,2> a4)
{
  ;
};

// Line 118: range 000000000CBEE9CC-000000000CBEE9DB
void __fastcall luabind::detail::format_signature_aux<boost::mpl::v_iter<boost::mpl::vector2<int,Event const&>,2l>>(
        lua_State_0 *a1,
        bool a2,
        boost::mpl::v_iter<boost::mpl::vector2<int,const Event&>,2> a3,
        boost::mpl::v_iter<boost::mpl::vector2<int,const Event&>,2> a4)
{
  ;
};

// Line 118: range 000000000CBEE9AC-000000000CBEE9BB
void __fastcall luabind::detail::format_signature_aux<boost::mpl::v_iter<boost::mpl::vector2<std::string,Event const&>,2l>>(
        lua_State_0 *a1,
        bool a2,
        boost::mpl::v_iter<boost::mpl::vector2<std::string,const Event&>,2> a3,
        boost::mpl::v_iter<boost::mpl::vector2<std::string,const Event&>,2> a4)
{
  ;
};

// Line 118: range 000000000CBEE9BC-000000000CBEE9CB
void __fastcall luabind::detail::format_signature_aux<boost::mpl::v_iter<boost::mpl::vector2<unsigned int,Event const&>,2l>>(
        lua_State_0 *a1,
        bool a2,
        boost::mpl::v_iter<boost::mpl::vector2<unsigned int,const Event&>,2> a3,
        boost::mpl::v_iter<boost::mpl::vector2<unsigned int,const Event&>,2> a4)
{
  ;
};

// Line 122: range 000000000CBEE2B8-000000000CBEE3AF
void __fastcall luabind::detail::format_signature_aux<boost::mpl::v_iter<boost::mpl::vector2<data::EventType,Event const&>,1l>,boost::mpl::v_iter<boost::mpl::vector2<data::EventType,Event const&>,2l>>(
        lua_State_0 *L,
        bool first,
        boost::mpl::v_iter<boost::mpl::vector2<data::EventType,const Event&>,1> a3,
        boost::mpl::v_iter<boost::mpl::vector2<data::EventType,const Event&>,2> end,
        __int64 a5,
        __int64 a6,
        boost::mpl::v_iter<boost::mpl::vector2<data::EventType,const Event&>,1> a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  boost::mpl::v_iter<boost::mpl::vector2<data::EventType,const Event&>,2> v10; // dl
  boost::mpl::v_iter<boost::mpl::vector2<data::EventType,const Event&>,2> v11; // cl
  char v12[96]; // [rsp+10h] [rbp-60h] BYREF

  v7 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 7 end:122";
  *(_QWORD *)(v7 + 16) = luabind::detail::format_signature_aux<boost::mpl::v_iter<boost::mpl::vector2<data::EventType,Event const&>,1l>,boost::mpl::v_iter<boost::mpl::vector2<data::EventType,Event const&>,2l>>;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(boost::mpl::v_iter<boost::mpl::vector2<data::EventType,const Event&>,1> *)(v7 + 32) = a7;
  if ( !first )
    lua_pushstring(L, ",");
  luabind::detail::type_to_string<Event const&,void>::get(L);
  luabind::detail::format_signature_aux<boost::mpl::v_iter<boost::mpl::vector2<data::EventType,Event const&>,2l>>(
    L,
    0,
    v10,
    v11);
  if ( v12 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 122: range 000000000CBEE865-000000000CBEE95C
void __fastcall luabind::detail::format_signature_aux<boost::mpl::v_iter<boost::mpl::vector2<float,Vector3 const&>,1l>,boost::mpl::v_iter<boost::mpl::vector2<float,Vector3 const&>,2l>>(
        lua_State_0 *L,
        bool first,
        boost::mpl::v_iter<boost::mpl::vector2<float,const Vector3&>,1> a3,
        boost::mpl::v_iter<boost::mpl::vector2<float,const Vector3&>,2> end,
        __int64 a5,
        __int64 a6,
        boost::mpl::v_iter<boost::mpl::vector2<float,const Vector3&>,1> a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  boost::mpl::v_iter<boost::mpl::vector2<float,const Vector3&>,2> v10; // dl
  boost::mpl::v_iter<boost::mpl::vector2<float,const Vector3&>,2> v11; // cl
  char v12[96]; // [rsp+10h] [rbp-60h] BYREF

  v7 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 7 end:122";
  *(_QWORD *)(v7 + 16) = luabind::detail::format_signature_aux<boost::mpl::v_iter<boost::mpl::vector2<float,Vector3 const&>,1l>,boost::mpl::v_iter<boost::mpl::vector2<float,Vector3 const&>,2l>>;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(boost::mpl::v_iter<boost::mpl::vector2<float,const Vector3&>,1> *)(v7 + 32) = a7;
  if ( !first )
    lua_pushstring(L, ",");
  luabind::detail::type_to_string<Vector3 const&,void>::get(L);
  luabind::detail::format_signature_aux<boost::mpl::v_iter<boost::mpl::vector2<float,Vector3 const&>,2l>>(
    L,
    0,
    v10,
    v11);
  if ( v12 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 122: range 000000000CBEE5A0-000000000CBEE697
void __fastcall luabind::detail::format_signature_aux<boost::mpl::v_iter<boost::mpl::vector2<int,Event const&>,1l>,boost::mpl::v_iter<boost::mpl::vector2<int,Event const&>,2l>>(
        lua_State_0 *L,
        bool first,
        boost::mpl::v_iter<boost::mpl::vector2<int,const Event&>,1> a3,
        boost::mpl::v_iter<boost::mpl::vector2<int,const Event&>,2> end,
        __int64 a5,
        __int64 a6,
        boost::mpl::v_iter<boost::mpl::vector2<int,const Event&>,1> a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  boost::mpl::v_iter<boost::mpl::vector2<int,const Event&>,2> v10; // dl
  boost::mpl::v_iter<boost::mpl::vector2<int,const Event&>,2> v11; // cl
  char v12[96]; // [rsp+10h] [rbp-60h] BYREF

  v7 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 7 end:122";
  *(_QWORD *)(v7 + 16) = luabind::detail::format_signature_aux<boost::mpl::v_iter<boost::mpl::vector2<int,Event const&>,1l>,boost::mpl::v_iter<boost::mpl::vector2<int,Event const&>,2l>>;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(boost::mpl::v_iter<boost::mpl::vector2<int,const Event&>,1> *)(v7 + 32) = a7;
  if ( !first )
    lua_pushstring(L, ",");
  luabind::detail::type_to_string<Event const&,void>::get(L);
  luabind::detail::format_signature_aux<boost::mpl::v_iter<boost::mpl::vector2<int,Event const&>,2l>>(L, 0, v10, v11);
  if ( v12 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 122: range 000000000CBEE3B0-000000000CBEE4A7
void __fastcall luabind::detail::format_signature_aux<boost::mpl::v_iter<boost::mpl::vector2<std::string,Event const&>,1l>,boost::mpl::v_iter<boost::mpl::vector2<std::string,Event const&>,2l>>(
        lua_State_0 *L,
        bool first,
        boost::mpl::v_iter<boost::mpl::vector2<std::string,const Event&>,1> a3,
        boost::mpl::v_iter<boost::mpl::vector2<std::string,const Event&>,2> end,
        __int64 a5,
        __int64 a6,
        boost::mpl::v_iter<boost::mpl::vector2<std::string,const Event&>,1> a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  boost::mpl::v_iter<boost::mpl::vector2<std::string,const Event&>,2> v10; // dl
  boost::mpl::v_iter<boost::mpl::vector2<std::string,const Event&>,2> v11; // cl
  char v12[96]; // [rsp+10h] [rbp-60h] BYREF

  v7 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 7 end:122";
  *(_QWORD *)(v7 + 16) = luabind::detail::format_signature_aux<boost::mpl::v_iter<boost::mpl::vector2<std::string,Event const&>,1l>,boost::mpl::v_iter<boost::mpl::vector2<std::string,Event const&>,2l>>;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(boost::mpl::v_iter<boost::mpl::vector2<std::string,const Event&>,1> *)(v7 + 32) = a7;
  if ( !first )
    lua_pushstring(L, ",");
  luabind::detail::type_to_string<Event const&,void>::get(L);
  luabind::detail::format_signature_aux<boost::mpl::v_iter<boost::mpl::vector2<std::string,Event const&>,2l>>(
    L,
    0,
    v10,
    v11);
  if ( v12 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 122: range 000000000CBEE4A8-000000000CBEE59F
void __fastcall luabind::detail::format_signature_aux<boost::mpl::v_iter<boost::mpl::vector2<unsigned int,Event const&>,1l>,boost::mpl::v_iter<boost::mpl::vector2<unsigned int,Event const&>,2l>>(
        lua_State_0 *L,
        bool first,
        boost::mpl::v_iter<boost::mpl::vector2<unsigned int,const Event&>,1> a3,
        boost::mpl::v_iter<boost::mpl::vector2<unsigned int,const Event&>,2> end,
        __int64 a5,
        __int64 a6,
        boost::mpl::v_iter<boost::mpl::vector2<unsigned int,const Event&>,1> a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  boost::mpl::v_iter<boost::mpl::vector2<unsigned int,const Event&>,2> v10; // dl
  boost::mpl::v_iter<boost::mpl::vector2<unsigned int,const Event&>,2> v11; // cl
  char v12[96]; // [rsp+10h] [rbp-60h] BYREF

  v7 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 7 end:122";
  *(_QWORD *)(v7 + 16) = luabind::detail::format_signature_aux<boost::mpl::v_iter<boost::mpl::vector2<unsigned int,Event const&>,1l>,boost::mpl::v_iter<boost::mpl::vector2<unsigned int,Event const&>,2l>>;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(boost::mpl::v_iter<boost::mpl::vector2<unsigned int,const Event&>,1> *)(v7 + 32) = a7;
  if ( !first )
    lua_pushstring(L, ",");
  luabind::detail::type_to_string<Event const&,void>::get(L);
  luabind::detail::format_signature_aux<boost::mpl::v_iter<boost::mpl::vector2<unsigned int,Event const&>,2l>>(
    L,
    0,
    v10,
    v11);
  if ( v12 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 131: range 000000000CBEDAA1-000000000CBEDBE2
void __cdecl luabind::detail::format_signature<boost::mpl::vector2<data::EventType,Event const&>>(
        lua_State_0 *L,
        const char *function,
        boost::mpl::vector2<data::EventType,const Event&> a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  boost::mpl::v_iter<boost::mpl::vector2<data::EventType,const Event&>,1> v6; // dl
  boost::mpl::v_iter<boost::mpl::vector2<data::EventType,const Event&>,2> v7; // cl
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edx
  char v11[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v3 + 16) = luabind::detail::format_signature<boost::mpl::vector2<data::EventType,Event const&>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  luabind::detail::type_to_string<data::EventType,void>::get(L);
  lua_pushstring(L, " ");
  lua_pushstring(L, function);
  lua_pushstring(L, "(");
  luabind::detail::format_signature_aux<boost::mpl::v_iter<boost::mpl::vector2<data::EventType,Event const&>,1l>,boost::mpl::v_iter<boost::mpl::vector2<data::EventType,Event const&>,2l>>(
    L,
    1,
    v6,
    v7,
    v8,
    v9,
    (boost::mpl::v_iter<boost::mpl::vector2<data::EventType,const Event&>,1>)function);
  lua_pushstring(L, ")");
  v10 = 2 * (mpl_::long_<2l>::operator long((const mpl_::long_<2> *const)(v3 + 32)) + 1);
  lua_concat(L, v10);
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 131: range 000000000CBEDFA9-000000000CBEE0EA
void __cdecl luabind::detail::format_signature<boost::mpl::vector2<float,Vector3 const&>>(
        lua_State_0 *L,
        const char *function,
        boost::mpl::vector2<float,const Vector3&> a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  boost::mpl::v_iter<boost::mpl::vector2<float,const Vector3&>,1> v6; // dl
  boost::mpl::v_iter<boost::mpl::vector2<float,const Vector3&>,2> v7; // cl
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edx
  char v11[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v3 + 16) = luabind::detail::format_signature<boost::mpl::vector2<float,Vector3 const&>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  luabind::detail::type_to_string<float,void>::get(L);
  lua_pushstring(L, " ");
  lua_pushstring(L, function);
  lua_pushstring(L, "(");
  luabind::detail::format_signature_aux<boost::mpl::v_iter<boost::mpl::vector2<float,Vector3 const&>,1l>,boost::mpl::v_iter<boost::mpl::vector2<float,Vector3 const&>,2l>>(
    L,
    1,
    v6,
    v7,
    v8,
    v9,
    (boost::mpl::v_iter<boost::mpl::vector2<float,const Vector3&>,1>)function);
  lua_pushstring(L, ")");
  v10 = 2 * (mpl_::long_<2l>::operator long((const mpl_::long_<2> *const)(v3 + 32)) + 1);
  lua_concat(L, v10);
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 131: range 000000000CBEDE67-000000000CBEDFA8
void __cdecl luabind::detail::format_signature<boost::mpl::vector2<int,Event const&>>(
        lua_State_0 *L,
        const char *function,
        boost::mpl::vector2<int,const Event&> a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  boost::mpl::v_iter<boost::mpl::vector2<int,const Event&>,1> v6; // dl
  boost::mpl::v_iter<boost::mpl::vector2<int,const Event&>,2> v7; // cl
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edx
  char v11[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v3 + 16) = luabind::detail::format_signature<boost::mpl::vector2<int,Event const&>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  luabind::detail::type_to_string<int,void>::get(L);
  lua_pushstring(L, " ");
  lua_pushstring(L, function);
  lua_pushstring(L, "(");
  luabind::detail::format_signature_aux<boost::mpl::v_iter<boost::mpl::vector2<int,Event const&>,1l>,boost::mpl::v_iter<boost::mpl::vector2<int,Event const&>,2l>>(
    L,
    1,
    v6,
    v7,
    v8,
    v9,
    (boost::mpl::v_iter<boost::mpl::vector2<int,const Event&>,1>)function);
  lua_pushstring(L, ")");
  v10 = 2 * (mpl_::long_<2l>::operator long((const mpl_::long_<2> *const)(v3 + 32)) + 1);
  lua_concat(L, v10);
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 131: range 000000000CBEDBE3-000000000CBEDD24
void __cdecl luabind::detail::format_signature<boost::mpl::vector2<std::string,Event const&>>(
        lua_State_0 *L,
        const char *function,
        boost::mpl::vector2<std::string,const Event&> a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  boost::mpl::v_iter<boost::mpl::vector2<std::string,const Event&>,1> v6; // dl
  boost::mpl::v_iter<boost::mpl::vector2<std::string,const Event&>,2> v7; // cl
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edx
  char v11[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v3 + 16) = luabind::detail::format_signature<boost::mpl::vector2<std::string,Event const&>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  luabind::detail::type_to_string<std::string,void>::get(L);
  lua_pushstring(L, " ");
  lua_pushstring(L, function);
  lua_pushstring(L, "(");
  luabind::detail::format_signature_aux<boost::mpl::v_iter<boost::mpl::vector2<std::string,Event const&>,1l>,boost::mpl::v_iter<boost::mpl::vector2<std::string,Event const&>,2l>>(
    L,
    1,
    v6,
    v7,
    v8,
    v9,
    (boost::mpl::v_iter<boost::mpl::vector2<std::string,const Event&>,1>)function);
  lua_pushstring(L, ")");
  v10 = 2 * (mpl_::long_<2l>::operator long((const mpl_::long_<2> *const)(v3 + 32)) + 1);
  lua_concat(L, v10);
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 131: range 000000000CBEDD25-000000000CBEDE66
void __cdecl luabind::detail::format_signature<boost::mpl::vector2<unsigned int,Event const&>>(
        lua_State_0 *L,
        const char *function,
        boost::mpl::vector2<unsigned int,const Event&> a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  boost::mpl::v_iter<boost::mpl::vector2<unsigned int,const Event&>,1> v6; // dl
  boost::mpl::v_iter<boost::mpl::vector2<unsigned int,const Event&>,2> v7; // cl
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edx
  char v11[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v3 + 16) = luabind::detail::format_signature<boost::mpl::vector2<unsigned int,Event const&>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  luabind::detail::type_to_string<unsigned int,void>::get(L);
  lua_pushstring(L, " ");
  lua_pushstring(L, function);
  lua_pushstring(L, "(");
  luabind::detail::format_signature_aux<boost::mpl::v_iter<boost::mpl::vector2<unsigned int,Event const&>,1l>,boost::mpl::v_iter<boost::mpl::vector2<unsigned int,Event const&>,2l>>(
    L,
    1,
    v6,
    v7,
    v8,
    v9,
    (boost::mpl::v_iter<boost::mpl::vector2<unsigned int,const Event&>,1>)function);
  lua_pushstring(L, ")");
  v10 = 2 * (mpl_::long_<2l>::operator long((const mpl_::long_<2> *const)(v3 + 32)) + 1);
  lua_concat(L, v10);
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
