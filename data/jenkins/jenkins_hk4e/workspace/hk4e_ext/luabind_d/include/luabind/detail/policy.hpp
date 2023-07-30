// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/luabind_d/include/luabind/detail/policy.hpp

// Line 69: range 000000000CB46982-000000000CB4698F
luabind::default_converter<bool,void> *__cdecl luabind::native_converter_base<bool,luabind::default_converter<bool,void>>::derived(
        luabind::native_converter_base<bool,luabind::default_converter<bool,void> > *const this)
{
  return (luabind::default_converter<bool,void> *)this;
};

// Line 97: range 000000000C61492E-000000000C61496C
void __cdecl luabind::index_map::index_map(luabind::index_map *const this, const int *m)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_map = m;
};

// Line 239: range 000000000CA87DB6-000000000CA87DC3
luabind::default_converter<int,void> *__cdecl luabind::native_converter_base<int,luabind::default_converter<int,void>>::derived(
        luabind::native_converter_base<int,luabind::default_converter<int,void> > *const this)
{
  return (luabind::default_converter<int,void> *)this;
};

// Line 429: range 000000000C61496E-000000000C6149CA
int luabind::detail::const_ref_converter::consumed_args(const luabind::detail::const_ref_converter *const this, ...)
{
  return 1;
};

// Line 434: range 000000000C6149CC-000000000C614A06
void __cdecl luabind::detail::const_ref_converter::const_ref_converter(
        luabind::detail::const_ref_converter *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->result = 0LL;
};

// Line 450: range 000000000CBED314-000000000CBED350
const Event *__cdecl luabind::detail::const_ref_converter::apply<Event>(
        luabind::detail::const_ref_converter *const this,
        lua_State_0 *a2,
        luabind::detail::by_const_reference<Event> a3,
        int a4)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (const Event *)this->result;
};

// Line 450: range 000000000CBECFA2-000000000CBECFDE
const Vector3 *__cdecl luabind::detail::const_ref_converter::apply<Vector3>(
        luabind::detail::const_ref_converter *const this,
        lua_State_0 *a2,
        luabind::detail::by_const_reference<Vector3> a3,
        int a4)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (const Vector3 *)this->result;
};

// Line 456: range 000000000CBED17E-000000000CBED312
int __cdecl luabind::detail::const_ref_converter::match<Event>(
        luabind::detail::const_ref_converter *const this,
        lua_State_0 *L,
        luabind::detail::by_const_reference<Event> a3,
        int index)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  int result; // eax
  void *v9; // rdx
  int indexa; // [rsp+Ch] [rbp-84h]
  luabind::detail::object_rep *obj; // [rsp+28h] [rbp-68h]
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  indexa = *(_DWORD *)&a3;
  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 5 s:461";
  *(_QWORD *)(v4 + 16) = luabind::detail::const_ref_converter::match<Event>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  obj = (luabind::detail::object_rep *)luabind::detail::get_instance(L, indexa);
  if ( obj )
  {
    if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<Event>::id >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(std::pair<void*,int> *)(v4 + 32) = luabind::detail::object_rep::get_instance(
                                           obj,
                                           luabind::detail::registered_class<Event>::id);
    if ( *(int *)(v4 + 40) >= 0 && !luabind::detail::object_rep::is_const(obj) )
      *(_DWORD *)(v4 + 40) += 10;
    v9 = *(void **)(v4 + 32);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->result = v9;
    result = *(_DWORD *)(v4 + 40);
  }
  else
  {
    result = -1;
  }
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 456: range 000000000CBECE0C-000000000CBECFA0
int __cdecl luabind::detail::const_ref_converter::match<Vector3>(
        luabind::detail::const_ref_converter *const this,
        lua_State_0 *L,
        luabind::detail::by_const_reference<Vector3> a3,
        int index)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  int result; // eax
  void *v9; // rdx
  int indexa; // [rsp+Ch] [rbp-84h]
  luabind::detail::object_rep *obj; // [rsp+28h] [rbp-68h]
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  indexa = *(_DWORD *)&a3;
  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 5 s:461";
  *(_QWORD *)(v4 + 16) = luabind::detail::const_ref_converter::match<Vector3>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  obj = (luabind::detail::object_rep *)luabind::detail::get_instance(L, indexa);
  if ( obj )
  {
    if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<Vector3>::id >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(std::pair<void*,int> *)(v4 + 32) = luabind::detail::object_rep::get_instance(
                                           obj,
                                           luabind::detail::registered_class<Vector3>::id);
    if ( *(int *)(v4 + 40) >= 0 && !luabind::detail::object_rep::is_const(obj) )
      *(_DWORD *)(v4 + 40) += 10;
    v9 = *(void **)(v4 + 32);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->result = v9;
    result = *(_DWORD *)(v4 + 40);
  }
  else
  {
    result = -1;
  }
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 469: range 000000000CBED408-000000000CBED419
void __cdecl luabind::detail::const_ref_converter::converter_postcall<Event>(
        luabind::detail::const_ref_converter *const this,
        lua_State_0 *a2,
        luabind::detail::by_const_reference<Event> a3,
        int a4)
{
  ;
};

// Line 469: range 000000000CBED09E-000000000CBED0AF
void __cdecl luabind::detail::const_ref_converter::converter_postcall<Vector3>(
        luabind::detail::const_ref_converter *const this,
        lua_State_0 *a2,
        luabind::detail::by_const_reference<Vector3> a3,
        int a4)
{
  ;
};

// Line 486: range 000000000C614A08-000000000C614A2E
void __cdecl luabind::detail::enum_converter::apply(
        luabind::detail::enum_converter *const this,
        lua_State_0 *L,
        int val)
{
  lua_Number v3; // xmm1_8

  lua_pushnumber(L, v3);
};

// Line 492: range 00000000122D5B86-00000000122D5BB4
data::EventType __cdecl luabind::detail::enum_converter::apply<data::EventType>(
        luabind::detail::enum_converter *const this,
        lua_State_0 *L,
        luabind::detail::by_value<data::EventType> a3,
        int index)
{
  return (int)lua_tonumberx(L, a3.gap0[0], 0LL);
};

// Line 492: range 00000000122C6A10-00000000122C6A3E
data::GadgetState __cdecl luabind::detail::enum_converter::apply<data::GadgetState>(
        luabind::detail::enum_converter *const this,
        lua_State_0 *L,
        luabind::detail::by_value<data::GadgetState> a3,
        int index)
{
  return (int)lua_tonumberx(L, a3.gap0[0], 0LL);
};

// Line 492: range 00000000122E4A9C-00000000122E4ACA
data::GadgetType __cdecl luabind::detail::enum_converter::apply<data::GadgetType>(
        luabind::detail::enum_converter *const this,
        lua_State_0 *L,
        luabind::detail::by_value<data::GadgetType> a3,
        int index)
{
  return (int)lua_tonumberx(L, a3.gap0[0], 0LL);
};

// Line 492: range 000000001230AC04-000000001230AC32
data::PlatformRotType __cdecl luabind::detail::enum_converter::apply<data::PlatformRotType>(
        luabind::detail::enum_converter *const this,
        lua_State_0 *L,
        luabind::detail::by_value<data::PlatformRotType> a3,
        int index)
{
  return (int)lua_tonumberx(L, a3.gap0[0], 0LL);
};

// Line 492: range 00000000122C4DC8-00000000122C4DF6
data::RegionShape __cdecl luabind::detail::enum_converter::apply<data::RegionShape>(
        luabind::detail::enum_converter *const this,
        lua_State_0 *L,
        luabind::detail::by_value<data::RegionShape> a3,
        int index)
{
  return (int)lua_tonumberx(L, a3.gap0[0], 0LL);
};

// Line 492: range 00000000122835DC-000000001228360A
data::VisionLevelType __cdecl luabind::detail::enum_converter::apply<data::VisionLevelType>(
        luabind::detail::enum_converter *const this,
        lua_State_0 *L,
        luabind::detail::by_value<data::VisionLevelType> a3,
        int index)
{
  return (int)lua_tonumberx(L, a3.gap0[0], 0LL);
};

// Line 492: range 000000001230FE2A-000000001230FE58
proto::GadgetBornType __cdecl luabind::detail::enum_converter::apply<proto::GadgetBornType>(
        luabind::detail::enum_converter *const this,
        lua_State_0 *L,
        luabind::detail::by_value<proto::GadgetBornType> a3,
        int index)
{
  return (int)lua_tonumberx(L, a3.gap0[0], 0LL);
};

// Line 492: range 00000000122F15E4-00000000122F1612
proto::GroupLoadStrategy __cdecl luabind::detail::enum_converter::apply<proto::GroupLoadStrategy>(
        luabind::detail::enum_converter *const this,
        lua_State_0 *L,
        luabind::detail::by_value<proto::GroupLoadStrategy> a3,
        int index)
{
  return (int)lua_tonumberx(L, a3.gap0[0], 0LL);
};

// Line 498: range 00000000122D5B4E-00000000122D5B84
int __cdecl luabind::detail::enum_converter::match<data::EventType>(
        lua_State_0 *L,
        luabind::detail::by_value<data::EventType> a2,
        int index)
{
  if ( lua_isnumber(L, a2.gap0[0]) )
    return 0;
  else
    return -1;
};

// Line 498: range 00000000122C69D9-00000000122C6A0F
int __cdecl luabind::detail::enum_converter::match<data::GadgetState>(
        lua_State_0 *L,
        luabind::detail::by_value<data::GadgetState> a2,
        int index)
{
  if ( lua_isnumber(L, a2.gap0[0]) )
    return 0;
  else
    return -1;
};

// Line 498: range 00000000122E4A65-00000000122E4A9B
int __cdecl luabind::detail::enum_converter::match<data::GadgetType>(
        lua_State_0 *L,
        luabind::detail::by_value<data::GadgetType> a2,
        int index)
{
  if ( lua_isnumber(L, a2.gap0[0]) )
    return 0;
  else
    return -1;
};

// Line 498: range 000000001230ABCD-000000001230AC03
int __cdecl luabind::detail::enum_converter::match<data::PlatformRotType>(
        lua_State_0 *L,
        luabind::detail::by_value<data::PlatformRotType> a2,
        int index)
{
  if ( lua_isnumber(L, a2.gap0[0]) )
    return 0;
  else
    return -1;
};

// Line 498: range 00000000122C4D91-00000000122C4DC7
int __cdecl luabind::detail::enum_converter::match<data::RegionShape>(
        lua_State_0 *L,
        luabind::detail::by_value<data::RegionShape> a2,
        int index)
{
  if ( lua_isnumber(L, a2.gap0[0]) )
    return 0;
  else
    return -1;
};

// Line 498: range 00000000122835A5-00000000122835DB
int __cdecl luabind::detail::enum_converter::match<data::VisionLevelType>(
        lua_State_0 *L,
        luabind::detail::by_value<data::VisionLevelType> a2,
        int index)
{
  if ( lua_isnumber(L, a2.gap0[0]) )
    return 0;
  else
    return -1;
};

// Line 498: range 000000001230FDF3-000000001230FE29
int __cdecl luabind::detail::enum_converter::match<proto::GadgetBornType>(
        lua_State_0 *L,
        luabind::detail::by_value<proto::GadgetBornType> a2,
        int index)
{
  if ( lua_isnumber(L, a2.gap0[0]) )
    return 0;
  else
    return -1;
};

// Line 498: range 00000000122F15AD-00000000122F15E3
int __cdecl luabind::detail::enum_converter::match<proto::GroupLoadStrategy>(
        lua_State_0 *L,
        luabind::detail::by_value<proto::GroupLoadStrategy> a2,
        int index)
{
  if ( lua_isnumber(L, a2.gap0[0]) )
    return 0;
  else
    return -1;
};

// Line 531: range 000000000C8757D8-000000000C8758C3
// local variable allocation has failed, the output may be wrong!
luabind::adl::object __cdecl luabind::detail::value_wrapper_converter<luabind::adl::object>::apply<luabind::adl::object>(
        luabind::detail::value_wrapper_converter<luabind::adl::object> *const this,
        lua_State_0 *L,
        luabind::detail::by_const_reference<luabind::adl::object> a3,
        int index)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  lua_State_0 *La; // [rsp+8h] [rbp-78h]
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF
  luabind::adl::object result; // 0:rax.12

  La = *(lua_State_0 **)&a3;
  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v4 + 16) = luabind::detail::value_wrapper_converter<luabind::adl::object>::apply<luabind::adl::object>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  luabind::from_stack::from_stack((luabind::from_stack *const)(v4 + 32), La, index);
  luabind::adl::object::object((luabind::adl::object *const)this, (const luabind::from_stack *)(v4 + 32));
  if ( v9 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result.m_handle.m_interpreter = (lua_State_0 *)this;
  return result;
};

// Line 537: range 000000000C7B0C54-000000000C7B0CA9
luabind::adl::object __cdecl luabind::detail::value_wrapper_converter<luabind::adl::object>::apply<luabind::adl::object>(
        luabind::detail::value_wrapper_converter<luabind::adl::object> *const this,
        lua_State_0 *L,
        luabind::detail::by_value<luabind::adl::object> a3,
        int index)
{
  luabind::adl::object result; // 0:rax.12

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = luabind::detail::value_wrapper_converter<luabind::adl::object>::apply<luabind::adl::object>(
             this,
             L,
             (luabind::detail::by_const_reference<luabind::adl::object>)a3.gap0[0],
             index);
  result.m_handle.m_interpreter = (lua_State_0 *)this;
  return result;
};

// Line 543: range 000000000C875789-000000000C8757D7
int __cdecl luabind::detail::value_wrapper_converter<luabind::adl::object>::match<luabind::adl::object>(
        lua_State_0 *L,
        luabind::detail::by_const_reference<luabind::adl::object> a2,
        int index)
{
  if ( (unsigned __int8)luabind::value_wrapper_traits<luabind::adl::object>::check(L, (unsigned int)a2.gap0[0]) )
    return std::numeric_limits<int>::max() / 10;
  else
    return -1;
};

// Line 551: range 000000000C7B0C31-000000000C7B0C52
int __cdecl luabind::detail::value_wrapper_converter<luabind::adl::object>::match<luabind::adl::object>(
        lua_State_0 *L,
        luabind::detail::by_value<luabind::adl::object> a2,
        int index)
{
  return luabind::detail::value_wrapper_converter<luabind::adl::object>::match<luabind::adl::object>(
           L,
           (luabind::detail::by_const_reference<luabind::adl::object>)a2.gap0[0],
           a2.gap0[0]);
};

// Line 559: range 000000000CBEA522-000000000CBEA54B
void __cdecl luabind::detail::value_wrapper_converter<luabind::adl::object const>::apply<luabind::adl::object>(
        luabind::detail::value_wrapper_converter<const luabind::adl::object> *const this,
        lua_State_0 *interpreter,
        const luabind::adl::object *value_wrapper)
{
  luabind::value_wrapper_traits<luabind::adl::object>::unwrap(interpreter, value_wrapper);
};

// Line 599: range 000000000CBEB066-000000000CBEB080
void __cdecl luabind::default_converter<Event const&,void>::default_converter(
        luabind::default_converter<const Event&,void> *const this)
{
  luabind::detail::const_ref_converter::const_ref_converter(this);
};

// Line 599: range 000000000CBEA91E-000000000CBEA938
void __cdecl luabind::default_converter<Vector3 const&,void>::default_converter(
        luabind::default_converter<const Vector3&,void> *const this)
{
  luabind::detail::const_ref_converter::const_ref_converter(this);
};

// Line 619: range 000000000CAF2940-000000000CAF2971
int __cdecl luabind::native_converter_base<bool,luabind::default_converter<bool,void>>::match(
        luabind::native_converter_base<bool,luabind::default_converter<bool,void> > *const this,
        lua_State_0 *L,
        luabind::detail::by_value<bool> a3,
        int index)
{
  int indexa; // [rsp+Ch] [rbp-14h]

  indexa = *(_DWORD *)&a3;
  luabind::native_converter_base<bool,luabind::default_converter<bool,void>>::derived(this);
  return luabind::default_converter<bool,void>::compute_score(L, indexa);
};

// Line 619: range 000000001229FBF0-000000001229FC25
int __cdecl luabind::native_converter_base<double,luabind::default_converter<double,void>>::match(
        luabind::native_converter_base<double,luabind::default_converter<double,void> > *const this,
        lua_State_0 *L,
        luabind::detail::by_value<double> a3,
        int index)
{
  luabind::default_converter<double,void> *v4; // rcx
  int indexa; // [rsp+Ch] [rbp-14h]

  indexa = *(_DWORD *)&a3;
  v4 = luabind::native_converter_base<double,luabind::default_converter<double,void>>::derived(this);
  return luabind::number_converter<double>::compute_score(v4, L, indexa);
};

// Line 619: range 000000000C978474-000000000C9784A9
int __cdecl luabind::native_converter_base<float,luabind::default_converter<float,void>>::match(
        luabind::native_converter_base<float,luabind::default_converter<float,void> > *const this,
        lua_State_0 *L,
        luabind::detail::by_value<float> a3,
        int index)
{
  luabind::default_converter<float,void> *v4; // rcx
  int indexa; // [rsp+Ch] [rbp-14h]

  indexa = *(_DWORD *)&a3;
  v4 = luabind::native_converter_base<float,luabind::default_converter<float,void>>::derived(this);
  return luabind::number_converter<float>::compute_score(v4, L, indexa);
};

// Line 619: range 000000000CA0A9CE-000000000CA0AA03
int __cdecl luabind::native_converter_base<int,luabind::default_converter<int,void>>::match(
        luabind::native_converter_base<int,luabind::default_converter<int,void> > *const this,
        lua_State_0 *L,
        luabind::detail::by_value<int> a3,
        int index)
{
  luabind::default_converter<int,void> *v4; // rcx
  int indexa; // [rsp+Ch] [rbp-14h]

  indexa = *(_DWORD *)&a3;
  v4 = luabind::native_converter_base<int,luabind::default_converter<int,void>>::derived(this);
  return luabind::integer_converter<int>::compute_score(v4, L, indexa);
};

// Line 619: range 000000000C7B9EA0-000000000C7B9ED1
int __cdecl luabind::native_converter_base<std::string,luabind::default_converter<std::string,void>>::match(
        luabind::native_converter_base<std::string,luabind::default_converter<std::string,void> > *const this,
        lua_State_0 *L,
        luabind::detail::by_value<std::string > a3,
        int index)
{
  int indexa; // [rsp+Ch] [rbp-14h]

  indexa = *(_DWORD *)&a3;
  luabind::native_converter_base<std::string,luabind::default_converter<std::string,void>>::derived(this);
  return luabind::default_converter<std::string,void>::compute_score(L, indexa);
};

// Line 619: range 000000001228D3D4-000000001228D405
int __cdecl luabind::native_converter_base<std::vector<luabind::adl::object>,luabind::default_converter<std::vector<luabind::adl::object>,void>>::match(
        luabind::native_converter_base<std::vector<luabind::adl::object>,luabind::default_converter<std::vector<luabind::adl::object>,void> > *const this,
        lua_State_0 *L,
        luabind::detail::by_value<std::vector<luabind::adl::object> > a3,
        int index)
{
  int indexa; // [rsp+Ch] [rbp-14h]

  indexa = *(_DWORD *)&a3;
  luabind::native_converter_base<std::vector<luabind::adl::object>,luabind::default_converter<std::vector<luabind::adl::object>,void>>::derived(this);
  return luabind::default_converter<std::vector<luabind::adl::object>,void>::compute_score(L, indexa);
};

// Line 619: range 000000001230B1DA-000000001230B20B
int __cdecl luabind::native_converter_base<std::vector<std::string>,luabind::default_converter<std::vector<std::string>,void>>::match(
        luabind::native_converter_base<std::vector<std::string>,luabind::default_converter<std::vector<std::string>,void> > *const this,
        lua_State_0 *L,
        luabind::detail::by_value<std::vector<std::string> > a3,
        int index)
{
  int indexa; // [rsp+Ch] [rbp-14h]

  indexa = *(_DWORD *)&a3;
  luabind::native_converter_base<std::vector<std::string>,luabind::default_converter<std::vector<std::string>,void>>::derived(this);
  return luabind::default_converter<std::vector<std::string>,void>::compute_score(L, indexa);
};

// Line 619: range 0000000012292CF2-0000000012292D23
int __cdecl luabind::native_converter_base<std::vector<unsigned int>,luabind::default_converter<std::vector<unsigned int>,void>>::match(
        luabind::native_converter_base<std::vector<unsigned int>,luabind::default_converter<std::vector<unsigned int>,void> > *const this,
        lua_State_0 *L,
        luabind::detail::by_value<std::vector<unsigned int> > a3,
        int index)
{
  int indexa; // [rsp+Ch] [rbp-14h]

  indexa = *(_DWORD *)&a3;
  luabind::native_converter_base<std::vector<unsigned int>,luabind::default_converter<std::vector<unsigned int>,void>>::derived(this);
  return luabind::default_converter<std::vector<unsigned int>,void>::compute_score(L, indexa);
};

// Line 619: range 000000000C9783A8-000000000C9783DD
int __cdecl luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void>>::match(
        luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void> > *const this,
        lua_State_0 *L,
        luabind::detail::by_value<unsigned int> a3,
        int index)
{
  luabind::default_converter<unsigned int,void> *v4; // rcx
  int indexa; // [rsp+Ch] [rbp-14h]

  indexa = *(_DWORD *)&a3;
  v4 = luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void>>::derived(this);
  return luabind::integer_converter<unsigned int>::compute_score(v4, L, indexa);
};

// Line 619: range 000000000CBD2A2A-000000000CBD2A5F
int __cdecl luabind::native_converter_base<unsigned long,luabind::default_converter<unsigned long,void>>::match(
        luabind::native_converter_base<long unsigned int,luabind::default_converter<long unsigned int,void> > *const this,
        lua_State_0 *L,
        luabind::detail::by_value<long unsigned int> a3,
        int index)
{
  luabind::default_converter<long unsigned int,void> *v4; // rcx
  int indexa; // [rsp+Ch] [rbp-14h]

  indexa = *(_DWORD *)&a3;
  v4 = luabind::native_converter_base<unsigned long,luabind::default_converter<unsigned long,void>>::derived(this);
  return luabind::integer_converter<unsigned long>::compute_score(v4, L, indexa);
};

// Line 634: range 000000000CAF2972-000000000CAF29A7
luabind::native_converter_base<bool,luabind::default_converter<bool,void> >::value_type __cdecl luabind::native_converter_base<bool,luabind::default_converter<bool,void>>::apply(
        luabind::native_converter_base<bool,luabind::default_converter<bool,void> > *const this,
        lua_State_0 *L,
        luabind::detail::by_value<bool> a3,
        int index)
{
  luabind::default_converter<bool,void> *v4; // rcx
  int indexa; // [rsp+Ch] [rbp-14h]

  indexa = *(_DWORD *)&a3;
  v4 = luabind::native_converter_base<bool,luabind::default_converter<bool,void>>::derived(this);
  return luabind::default_converter<bool,void>::from(v4, L, indexa);
};

// Line 634: range 000000001229FC26-000000001229FC5B
luabind::native_converter_base<double,luabind::default_converter<double,void> >::value_type __cdecl luabind::native_converter_base<double,luabind::default_converter<double,void>>::apply(
        luabind::native_converter_base<double,luabind::default_converter<double,void> > *const this,
        lua_State_0 *L,
        luabind::detail::by_value<double> a3,
        int index)
{
  luabind::default_converter<double,void> *v4; // rcx
  int indexa; // [rsp+Ch] [rbp-14h]

  indexa = *(_DWORD *)&a3;
  v4 = luabind::native_converter_base<double,luabind::default_converter<double,void>>::derived(this);
  return luabind::number_converter<double>::from(v4, L, indexa);
};

// Line 634: range 000000000C9784AA-000000000C9784DF
luabind::native_converter_base<float,luabind::default_converter<float,void> >::value_type __cdecl luabind::native_converter_base<float,luabind::default_converter<float,void>>::apply(
        luabind::native_converter_base<float,luabind::default_converter<float,void> > *const this,
        lua_State_0 *L,
        luabind::detail::by_value<float> a3,
        int index)
{
  luabind::default_converter<float,void> *v4; // rcx
  int indexa; // [rsp+Ch] [rbp-14h]

  indexa = *(_DWORD *)&a3;
  v4 = luabind::native_converter_base<float,luabind::default_converter<float,void>>::derived(this);
  return luabind::number_converter<float>::from(v4, L, indexa);
};

// Line 634: range 000000000CA0AA04-000000000CA0AA39
luabind::native_converter_base<int,luabind::default_converter<int,void> >::value_type __cdecl luabind::native_converter_base<int,luabind::default_converter<int,void>>::apply(
        luabind::native_converter_base<int,luabind::default_converter<int,void> > *const this,
        lua_State_0 *L,
        luabind::detail::by_value<int> a3,
        int index)
{
  luabind::default_converter<int,void> *v4; // rcx
  int indexa; // [rsp+Ch] [rbp-14h]

  indexa = *(_DWORD *)&a3;
  v4 = luabind::native_converter_base<int,luabind::default_converter<int,void>>::derived(this);
  return luabind::integer_converter<int>::from(v4, L, indexa);
};

// Line 634: range 000000000CBD2A60-000000000CBD2A95
luabind::native_converter_base<long unsigned int,luabind::default_converter<long unsigned int,void> >::value_type __cdecl luabind::native_converter_base<unsigned long,luabind::default_converter<unsigned long,void>>::apply(
        luabind::native_converter_base<long unsigned int,luabind::default_converter<long unsigned int,void> > *const this,
        lua_State_0 *L,
        luabind::detail::by_value<long unsigned int> a3,
        int index)
{
  luabind::default_converter<long unsigned int,void> *v4; // rcx
  int indexa; // [rsp+Ch] [rbp-14h]

  indexa = *(_DWORD *)&a3;
  v4 = luabind::native_converter_base<unsigned long,luabind::default_converter<unsigned long,void>>::derived(this);
  return luabind::integer_converter<unsigned long>::from(v4, L, indexa);
};

// Line 634: range 000000000C7B9ED2-000000000C7B9F76
luabind::native_converter_base<std::string,luabind::default_converter<std::string,void> >::value_type *__cdecl luabind::native_converter_base<std::string,luabind::default_converter<std::string,void>>::apply(
        luabind::native_converter_base<std::string,luabind::default_converter<std::string,void> >::value_type *retstr,
        luabind::native_converter_base<std::string,luabind::default_converter<std::string,void> > *const this,
        lua_State_0 *L,
        luabind::detail::by_value<std::string > a4,
        int index)
{
  luabind::default_converter<std::string,void> *v5; // rsi
  int indexa; // [rsp+4h] [rbp-1Ch]

  indexa = *(_DWORD *)&a4;
  v5 = luabind::native_converter_base<std::string,luabind::default_converter<std::string,void>>::derived(this);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    v5 = (luabind::default_converter<std::string,void> *)32;
    __asan_report_store_n(retstr, 32LL);
  }
  luabind::default_converter<std::string,void>::from(retstr, v5, L, indexa);
  return retstr;
};

// Line 634: range 000000001228D406-000000001228D4AA
luabind::native_converter_base<std::vector<luabind::adl::object>,luabind::default_converter<std::vector<luabind::adl::object>,void> >::value_type *__cdecl luabind::native_converter_base<std::vector<luabind::adl::object>,luabind::default_converter<std::vector<luabind::adl::object>,void>>::apply(
        luabind::native_converter_base<std::vector<luabind::adl::object>,luabind::default_converter<std::vector<luabind::adl::object>,void> >::value_type *retstr,
        luabind::native_converter_base<std::vector<luabind::adl::object>,luabind::default_converter<std::vector<luabind::adl::object>,void> > *const this,
        lua_State_0 *L,
        luabind::detail::by_value<std::vector<luabind::adl::object> > a4,
        int index)
{
  luabind::default_converter<std::vector<luabind::adl::object>,void> *v5; // rsi
  int indexa; // [rsp+4h] [rbp-1Ch]

  indexa = *(_DWORD *)&a4;
  v5 = luabind::native_converter_base<std::vector<luabind::adl::object>,luabind::default_converter<std::vector<luabind::adl::object>,void>>::derived(this);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    v5 = (luabind::default_converter<std::vector<luabind::adl::object>,void> *)24;
    __asan_report_store_n(retstr, 24LL);
  }
  luabind::default_converter<std::vector<luabind::adl::object>,void>::from(retstr, v5, L, indexa);
  return retstr;
};

// Line 634: range 000000001230B20C-000000001230B2B0
luabind::native_converter_base<std::vector<std::string>,luabind::default_converter<std::vector<std::string>,void> >::value_type *__cdecl luabind::native_converter_base<std::vector<std::string>,luabind::default_converter<std::vector<std::string>,void>>::apply(
        luabind::native_converter_base<std::vector<std::string>,luabind::default_converter<std::vector<std::string>,void> >::value_type *retstr,
        luabind::native_converter_base<std::vector<std::string>,luabind::default_converter<std::vector<std::string>,void> > *const this,
        lua_State_0 *L,
        luabind::detail::by_value<std::vector<std::string> > a4,
        int index)
{
  luabind::default_converter<std::vector<std::string>,void> *v5; // rsi
  int indexa; // [rsp+4h] [rbp-1Ch]

  indexa = *(_DWORD *)&a4;
  v5 = luabind::native_converter_base<std::vector<std::string>,luabind::default_converter<std::vector<std::string>,void>>::derived(this);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    v5 = (luabind::default_converter<std::vector<std::string>,void> *)24;
    __asan_report_store_n(retstr, 24LL);
  }
  luabind::default_converter<std::vector<std::string>,void>::from(retstr, v5, L, indexa);
  return retstr;
};

// Line 634: range 0000000012292D24-0000000012292DC8
luabind::native_converter_base<std::vector<unsigned int>,luabind::default_converter<std::vector<unsigned int>,void> >::value_type *__cdecl luabind::native_converter_base<std::vector<unsigned int>,luabind::default_converter<std::vector<unsigned int>,void>>::apply(
        luabind::native_converter_base<std::vector<unsigned int>,luabind::default_converter<std::vector<unsigned int>,void> >::value_type *retstr,
        luabind::native_converter_base<std::vector<unsigned int>,luabind::default_converter<std::vector<unsigned int>,void> > *const this,
        lua_State_0 *L,
        luabind::detail::by_value<std::vector<unsigned int> > a4,
        int index)
{
  luabind::default_converter<std::vector<unsigned int>,void> *v5; // rsi
  int indexa; // [rsp+4h] [rbp-1Ch]

  indexa = *(_DWORD *)&a4;
  v5 = luabind::native_converter_base<std::vector<unsigned int>,luabind::default_converter<std::vector<unsigned int>,void>>::derived(this);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    v5 = (luabind::default_converter<std::vector<unsigned int>,void> *)24;
    __asan_report_store_n(retstr, 24LL);
  }
  luabind::default_converter<std::vector<unsigned int>,void>::from(retstr, v5, L, indexa);
  return retstr;
};

// Line 634: range 000000000C9783DE-000000000C978413
luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void> >::value_type __cdecl luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void>>::apply(
        luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void> > *const this,
        lua_State_0 *L,
        luabind::detail::by_value<unsigned int> a3,
        int index)
{
  luabind::default_converter<unsigned int,void> *v4; // rcx
  int indexa; // [rsp+Ch] [rbp-14h]

  indexa = *(_DWORD *)&a3;
  v4 = luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void>>::derived(this);
  return luabind::integer_converter<unsigned int>::from(v4, L, indexa);
};

// Line 649: range 000000000CBED060-000000000CBED09C
void __cdecl luabind::native_converter_base<float,luabind::default_converter<float,void>>::apply(
        luabind::native_converter_base<float,luabind::default_converter<float,void> > *const this,
        lua_State_0 *L,
        luabind::native_converter_base<float,luabind::default_converter<float,void> >::param_type value)
{
  luabind::default_converter<float,void> *v3; // rcx

  v3 = luabind::native_converter_base<float,luabind::default_converter<float,void>>::derived(this);
  luabind::number_converter<float>::to(v3, L, value);
};

// Line 649: range 000000000CBED3D0-000000000CBED406
void __cdecl luabind::native_converter_base<int,luabind::default_converter<int,void>>::apply(
        luabind::native_converter_base<int,luabind::default_converter<int,void> > *const this,
        lua_State_0 *L,
        luabind::native_converter_base<int,luabind::default_converter<int,void> >::param_type value)
{
  luabind::default_converter<int,void> *v3; // rcx

  v3 = luabind::native_converter_base<int,luabind::default_converter<int,void>>::derived(this);
  luabind::integer_converter<int>::to(v3, L, value);
};

// Line 649: range 000000000C9797C2-000000000C9797FA
void __cdecl luabind::native_converter_base<std::string,luabind::default_converter<std::string,void>>::apply(
        luabind::native_converter_base<std::string,luabind::default_converter<std::string,void> > *const this,
        lua_State_0 *L,
        luabind::native_converter_base<std::string,luabind::default_converter<std::string,void> >::param_type value)
{
  luabind::default_converter<std::string,void> *v3; // rcx

  v3 = luabind::native_converter_base<std::string,luabind::default_converter<std::string,void>>::derived(this);
  luabind::default_converter<std::string,void>::to(v3, L, value);
};

// Line 649: range 000000000CBED498-000000000CBED4CE
void __cdecl luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void>>::apply(
        luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void> > *const this,
        lua_State_0 *L,
        luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void> >::param_type value)
{
  luabind::default_converter<unsigned int,void> *v3; // rcx

  v3 = luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void>>::derived(this);
  luabind::integer_converter<unsigned int>::to(v3, L, value);
};

// Line 654: range 00000000122BEF3A-00000000122BEF47
luabind::default_converter<double,void> *__cdecl luabind::native_converter_base<double,luabind::default_converter<double,void>>::derived(
        luabind::native_converter_base<double,luabind::default_converter<double,void> > *const this)
{
  return (luabind::default_converter<double,void> *)this;
};

// Line 654: range 000000000CA13868-000000000CA13875
luabind::default_converter<float,void> *__cdecl luabind::native_converter_base<float,luabind::default_converter<float,void>>::derived(
        luabind::native_converter_base<float,luabind::default_converter<float,void> > *const this)
{
  return (luabind::default_converter<float,void> *)this;
};

// Line 654: range 000000000CBD2AC8-000000000CBD2AD5
luabind::default_converter<long unsigned int,void> *__cdecl luabind::native_converter_base<unsigned long,luabind::default_converter<unsigned long,void>>::derived(
        luabind::native_converter_base<long unsigned int,luabind::default_converter<long unsigned int,void> > *const this)
{
  return (luabind::default_converter<long unsigned int,void> *)this;
};

// Line 654: range 000000000C8785D6-000000000C8785E3
luabind::default_converter<std::string,void> *__cdecl luabind::native_converter_base<std::string,luabind::default_converter<std::string,void>>::derived(
        luabind::native_converter_base<std::string,luabind::default_converter<std::string,void> > *const this)
{
  return (luabind::default_converter<std::string,void> *)this;
};

// Line 654: range 00000000122B1CF4-00000000122B1D01
luabind::default_converter<std::vector<luabind::adl::object>,void> *__cdecl luabind::native_converter_base<std::vector<luabind::adl::object>,luabind::default_converter<std::vector<luabind::adl::object>,void>>::derived(
        luabind::native_converter_base<std::vector<luabind::adl::object>,luabind::default_converter<std::vector<luabind::adl::object>,void> > *const this)
{
  return (luabind::default_converter<std::vector<luabind::adl::object>,void> *)this;
};

// Line 654: range 000000001230BECC-000000001230BED9
luabind::default_converter<std::vector<std::string>,void> *__cdecl luabind::native_converter_base<std::vector<std::string>,luabind::default_converter<std::vector<std::string>,void>>::derived(
        luabind::native_converter_base<std::vector<std::string>,luabind::default_converter<std::vector<std::string>,void> > *const this)
{
  return (luabind::default_converter<std::vector<std::string>,void> *)this;
};

// Line 654: range 00000000122B5C02-00000000122B5C0F
luabind::default_converter<std::vector<unsigned int>,void> *__cdecl luabind::native_converter_base<std::vector<unsigned int>,luabind::default_converter<std::vector<unsigned int>,void>>::derived(
        luabind::native_converter_base<std::vector<unsigned int>,luabind::default_converter<std::vector<unsigned int>,void> > *const this)
{
  return (luabind::default_converter<std::vector<unsigned int>,void> *)this;
};

// Line 654: range 000000000CA1379A-000000000CA137A7
luabind::default_converter<unsigned int,void> *__cdecl luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void>>::derived(
        luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void> > *const this)
{
  return (luabind::default_converter<unsigned int,void> *)this;
};

// Line 669: range 000000000CA87DC4-000000000CA87DFA
int __cdecl luabind::integer_converter<int>::compute_score(
        luabind::integer_converter<int> *const this,
        lua_State_0 *L,
        int index)
{
  if ( lua_type(L, index) == 3 )
    return 0;
  else
    return -1;
};

// Line 669: range 000000000CA137A8-000000000CA137DE
int __cdecl luabind::integer_converter<unsigned int>::compute_score(
        luabind::integer_converter<unsigned int> *const this,
        lua_State_0 *L,
        int index)
{
  if ( lua_type(L, index) == 3 )
    return 0;
  else
    return -1;
};

// Line 669: range 000000000CBD2AD6-000000000CBD2B0C
int __cdecl luabind::integer_converter<unsigned long>::compute_score(
        luabind::integer_converter<long unsigned int> *const this,
        lua_State_0 *L,
        int index)
{
  if ( lua_type(L, index) == 3 )
    return 0;
  else
    return -1;
};

// Line 674: range 000000000CA87DFC-000000000CA87E82
luabind::integer_converter<int>::value_type __cdecl luabind::integer_converter<int>::from(
        luabind::integer_converter<int> *const this,
        lua_State_0 *L,
        int index)
{
  int v3; // ebx

  v3 = lua_tointegerx_HK4E(L, index, 0LL);
  if ( v3 != (unsigned int)lua_tointegerx(L, index, 0LL) )
  {
    __asan_handle_no_return(L);
    __assert_fail(
      "static_cast<T>(lua_tointegerx_HK4E(L,(index),__null)) == static_cast<T>(lua_tointegerx(L,(index),__null))",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/luabind/../luabind_d/include/luabind/detail/policy.hpp",
      0x2A4u,
      "luabind::integer_converter<QualifiedT>::value_type luabind::integer_converter<QualifiedT>::from(lua_State*, int) ["
      "with QualifiedT = int; luabind::integer_converter<QualifiedT>::value_type = int; lua_State = lua_State]");
  }
  return lua_tointegerx(L, index, 0LL);
};

// Line 674: range 000000000CBD2B0E-000000000CBD2B96
luabind::integer_converter<long unsigned int>::value_type __cdecl luabind::integer_converter<unsigned long>::from(
        luabind::integer_converter<long unsigned int> *const this,
        lua_State_0 *L,
        int index)
{
  lua_Integer v3; // rbx

  v3 = lua_tointegerx_HK4E(L, index, 0LL);
  if ( v3 != lua_tointegerx(L, index, 0LL) )
  {
    __asan_handle_no_return(L);
    __assert_fail(
      "static_cast<T>(lua_tointegerx_HK4E(L,(index),__null)) == static_cast<T>(lua_tointegerx(L,(index),__null))",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/luabind/../luabind_d/include/luabind/detail/policy.hpp",
      0x2A4u,
      "luabind::integer_converter<QualifiedT>::value_type luabind::integer_converter<QualifiedT>::from(lua_State*, int) ["
      "with QualifiedT = long unsigned int; luabind::integer_converter<QualifiedT>::value_type = long unsigned int; lua_S"
      "tate = lua_State]");
  }
  return lua_tointegerx(L, index, 0LL);
};

// Line 674: range 000000000CA137E0-000000000CA13866
luabind::integer_converter<unsigned int>::value_type __cdecl luabind::integer_converter<unsigned int>::from(
        luabind::integer_converter<unsigned int> *const this,
        lua_State_0 *L,
        int index)
{
  int v3; // ebx

  v3 = lua_tointegerx_HK4E(L, index, 0LL);
  if ( v3 != (unsigned int)lua_tointegerx(L, index, 0LL) )
  {
    __asan_handle_no_return(L);
    __assert_fail(
      "static_cast<T>(lua_tointegerx_HK4E(L,(index),__null)) == static_cast<T>(lua_tointegerx(L,(index),__null))",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/luabind/../luabind_d/include/luabind/detail/policy.hpp",
      0x2A4u,
      "luabind::integer_converter<QualifiedT>::value_type luabind::integer_converter<QualifiedT>::from(lua_State*, int) ["
      "with QualifiedT = unsigned int; luabind::integer_converter<QualifiedT>::value_type = unsigned int; lua_State = lua_State]");
  }
  return lua_tointegerx(L, index, 0LL);
};

// Line 680: range 000000000CBED5D4-000000000CBED5FE
void __cdecl luabind::integer_converter<int>::to(
        luabind::integer_converter<int> *const this,
        lua_State_0 *L,
        luabind::integer_converter<int>::param_type value)
{
  lua_pushinteger(L, value);
};

// Line 680: range 000000000CBED600-000000000CBED627
void __cdecl luabind::integer_converter<unsigned int>::to(
        luabind::integer_converter<unsigned int> *const this,
        lua_State_0 *L,
        luabind::integer_converter<unsigned int>::param_type value)
{
  lua_pushinteger(L, value);
};

// Line 703: range 00000000122BEF48-00000000122BEF7E
int __cdecl luabind::number_converter<double>::compute_score(
        luabind::number_converter<double> *const this,
        lua_State_0 *L,
        int index)
{
  if ( lua_type(L, index) == 3 )
    return 0;
  else
    return -1;
};

// Line 703: range 000000000CA13876-000000000CA138AC
int __cdecl luabind::number_converter<float>::compute_score(
        luabind::number_converter<float> *const this,
        lua_State_0 *L,
        int index)
{
  if ( lua_type(L, index) == 3 )
    return 0;
  else
    return -1;
};

// Line 708: range 00000000122BEF80-00000000122BEFAA
luabind::number_converter<double>::value_type __cdecl luabind::number_converter<double>::from(
        luabind::number_converter<double> *const this,
        lua_State_0 *L,
        int index)
{
  return lua_tonumberx(L, index, 0LL);
};

// Line 708: range 000000000CA138AE-000000000CA138DC
luabind::number_converter<float>::value_type __cdecl luabind::number_converter<float>::from(
        luabind::number_converter<float> *const this,
        lua_State_0 *L,
        int index)
{
  return lua_tonumberx(L, index, 0LL);
};

// Line 713: range 000000000CBED5AA-000000000CBED5D2
void __cdecl luabind::number_converter<float>::to(
        luabind::number_converter<float> *const this,
        lua_State_0 *L,
        luabind::number_converter<float>::param_type value)
{
  lua_Number v3; // xmm1_8

  lua_pushnumber(L, v3);
};

// Line 731: range 000000000C614A2F-000000000C614A61
int __cdecl luabind::default_converter<bool,void>::compute_score(lua_State_0 *L, int index)
{
  if ( lua_type(L, index) == 1 )
    return 0;
  else
    return -1;
};

// Line 736: range 000000000C614A62-000000000C614A8D
bool __cdecl luabind::default_converter<bool,void>::from(
        luabind::default_converter<bool,void> *const this,
        lua_State_0 *L,
        int index)
{
  return lua_toboolean(L, index) == 1;
};

// Line 763: range 000000000C614A8E-000000000C614AC0
int __cdecl luabind::default_converter<std::string,void>::compute_score(lua_State_0 *L, int index)
{
  if ( lua_type(L, index) == 4 )
    return 0;
  else
    return -1;
};

// Line 768: range 000000000C614AC2-000000000C614C13
std::string *__cdecl luabind::default_converter<std::string,void>::from(
        std::string *retstr,
        luabind::default_converter<std::string,void> *const this,
        lua_State_0 *L,
        int index)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  size_t v7; // r14
  const char *v8; // rsi
  char v12[112]; // [rsp+20h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v4 + 16) = luabind::default_converter<std::string,void>::from;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v4 + 32);
  v7 = lua_rawlen(L, index);
  v8 = lua_tolstring(L, index, 0LL);
  std::string::basic_string(retstr, v8, v7, v4 + 32);
  std::allocator<char>::~allocator(v4 + 32);
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 773: range 000000000C614C14-000000000C614C60
void __cdecl luabind::default_converter<std::string,void>::to(
        luabind::default_converter<std::string,void> *const this,
        lua_State_0 *L,
        const std::string *value)
{
  size_t v3; // rbx
  const char *v4; // rcx

  v3 = std::string::size(value);
  v4 = (const char *)std::string::data(value);
  lua_pushlstring(L, v4, v3);
};

// Line 812: range 000000000C614C62-000000000C614C8B
void __cdecl luabind::default_converter<char const*,void>::apply(
        luabind::default_converter<char const*,void> *const this,
        lua_State_0 *L,
        const char *str)
{
  lua_pushstring(L, str);
};

// Line 966: range 000000000C614C8C-000000000C614C9A
void __cdecl luabind::detail::policy_list_postcall<luabind::detail::null_type>::apply(
        lua_State_0 *a1,
        const luabind::index_map *a2)
{
  ;
};
