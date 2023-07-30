// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/luabind_d/include/luabind/back_reference.hpp

// Line 45: range 00000000009E6127-00000000009E6161
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference_aux0<Avatar>(const Avatar *p, mpl_::true_ a2)
{
  if ( p )
    return (const luabind::wrap_base *)__dynamic_cast(
                                         p,
                                         (const struct __class_type_info *)&`typeinfo for'Avatar,
                                         (const struct __class_type_info *)&`typeinfo for'luabind::wrap_base,
                                         -2LL);
  else
    return 0LL;
};

// Line 45: range 00000000009E5E23-00000000009E5E5D
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference_aux0<Monster>(const Monster *p, mpl_::true_ a2)
{
  if ( p )
    return (const luabind::wrap_base *)__dynamic_cast(
                                         p,
                                         (const struct __class_type_info *)&`typeinfo for'Monster,
                                         (const struct __class_type_info *)&`typeinfo for'luabind::wrap_base,
                                         -2LL);
  else
    return 0LL;
};

// Line 51: range 00000000009E577F-00000000009E578D
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference_aux0<Player>(const Player *a1, mpl_::false_ a2)
{
  return 0LL;
};

// Line 51: range 00000000009E6313-00000000009E6321
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference_aux0<Quest>(const Quest *a1, mpl_::false_ a2)
{
  return 0LL;
};

// Line 51: range 0000000000940FCA-0000000000940FD8
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference_aux0<Robot>(const Robot *a1, mpl_::false_ a2)
{
  return 0LL;
};

// Line 51: range 00000000009E56F1-00000000009E56FF
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference_aux0<RobotReporter>(
        const RobotReporter *a1,
        mpl_::false_ a2)
{
  return 0LL;
};

// Line 51: range 00000000009E580D-00000000009E581B
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference_aux0<Scene>(const Scene *a1, mpl_::false_ a2)
{
  return 0LL;
};

// Line 51: range 00000000009E5597-00000000009E55A5
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference_aux0<common::tools::TxtFile::Row>(
        const common::tools::TxtFile::Row *a1,
        mpl_::false_ a2)
{
  return 0LL;
};

// Line 57: range 00000000009E589B-00000000009E58C0
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference_aux1<Avatar>(const Avatar *p)
{
  mpl_::true_ v1; // si
  boost::integral_constant<bool,true> v3; // [rsp+1Fh] [rbp-1h] BYREF

  boost::integral_constant<bool,true>::operator mpl_::bool_<true> const&(&v3);
  return luabind::detail::get_back_reference_aux0<Avatar>(p, v1);
};

// Line 57: range 00000000009E5376-00000000009E539B
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference_aux1<Monster>(const Monster *p)
{
  mpl_::true_ v1; // si
  boost::integral_constant<bool,true> v3; // [rsp+1Fh] [rbp-1h] BYREF

  boost::integral_constant<bool,true>::operator mpl_::bool_<true> const&(&v3);
  return luabind::detail::get_back_reference_aux0<Monster>(p, v1);
};

// Line 57: range 00000000009E49AF-00000000009E49D4
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference_aux1<Player>(const Player *p)
{
  mpl_::false_ v1; // si
  boost::integral_constant<bool,false> v3; // [rsp+1Fh] [rbp-1h] BYREF

  boost::integral_constant<bool,false>::operator mpl_::bool_<false> const&(&v3);
  return luabind::detail::get_back_reference_aux0<Player>(p, v1);
};

// Line 57: range 00000000009E5C02-00000000009E5C27
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference_aux1<Quest>(const Quest *p)
{
  mpl_::false_ v1; // si
  boost::integral_constant<bool,false> v3; // [rsp+1Fh] [rbp-1h] BYREF

  boost::integral_constant<bool,false>::operator mpl_::bool_<false> const&(&v3);
  return luabind::detail::get_back_reference_aux0<Quest>(p, v1);
};

// Line 57: range 000000000091961C-0000000000919641
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference_aux1<Robot>(const Robot *p)
{
  mpl_::false_ v1; // si
  boost::integral_constant<bool,false> v3; // [rsp+1Fh] [rbp-1h] BYREF

  boost::integral_constant<bool,false>::operator mpl_::bool_<false> const&(&v3);
  return luabind::detail::get_back_reference_aux0<Robot>(p, v1);
};

// Line 57: range 00000000009E4742-00000000009E4767
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference_aux1<RobotReporter>(const RobotReporter *p)
{
  mpl_::false_ v1; // si
  boost::integral_constant<bool,false> v3; // [rsp+1Fh] [rbp-1h] BYREF

  boost::integral_constant<bool,false>::operator mpl_::bool_<false> const&(&v3);
  return luabind::detail::get_back_reference_aux0<RobotReporter>(p, v1);
};

// Line 57: range 00000000009E4C1B-00000000009E4C40
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference_aux1<Scene>(const Scene *p)
{
  mpl_::false_ v1; // si
  boost::integral_constant<bool,false> v3; // [rsp+1Fh] [rbp-1h] BYREF

  boost::integral_constant<bool,false>::operator mpl_::bool_<false> const&(&v3);
  return luabind::detail::get_back_reference_aux0<Scene>(p, v1);
};

// Line 57: range 00000000009E46C3-00000000009E46E8
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference_aux1<common::tools::TxtFile::Row>(
        const common::tools::TxtFile::Row *p)
{
  mpl_::false_ v1; // si
  boost::integral_constant<bool,false> v3; // [rsp+1Fh] [rbp-1h] BYREF

  boost::integral_constant<bool,false>::operator mpl_::bool_<false> const&(&v3);
  return luabind::detail::get_back_reference_aux0<common::tools::TxtFile::Row>(p, v1);
};

// Line 63: range 00000000009E3890-00000000009E38D5
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference_aux2<common::tools::TxtFile::Row const*>(
        const common::tools::TxtFile::Row *const *x,
        mpl_::true_ a2)
{
  const common::tools::TxtFile::Row *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) )
    __asan_report_load8(x);
  v2 = boost::get_pointer<common::tools::TxtFile::Row const>(*x);
  return luabind::detail::get_back_reference_aux1<common::tools::TxtFile::Row>(v2);
};

// Line 63: range 00000000009E4E87-00000000009E4EA8
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference_aux2<std::shared_ptr<Avatar>>(
        const std::shared_ptr<Avatar> *x,
        mpl_::true_ a2)
{
  Avatar *v2; // rax

  v2 = boost::get_pointer<Avatar>(x);
  return luabind::detail::get_back_reference_aux1<Avatar>(v2);
};

// Line 63: range 00000000009E5116-00000000009E5137
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference_aux2<std::shared_ptr<Quest>>(
        const std::shared_ptr<Quest> *x,
        mpl_::true_ a2)
{
  Quest *v2; // rax

  v2 = boost::get_pointer<Quest>(x);
  return luabind::detail::get_back_reference_aux1<Quest>(v2);
};

// Line 69: range 00000000009E3D5B-00000000009E3D74
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference_aux2<Player>(const Player *x, mpl_::false_ a2)
{
  return luabind::detail::get_back_reference_aux1<Player>(x);
};

// Line 69: range 00000000008D8F64-00000000008D8F7D
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference_aux2<Robot>(const Robot *x, mpl_::false_ a2)
{
  return luabind::detail::get_back_reference_aux1<Robot>(x);
};

// Line 69: range 00000000009E3B1E-00000000009E3B37
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference_aux2<RobotReporter>(
        const RobotReporter *x,
        mpl_::false_ a2)
{
  return luabind::detail::get_back_reference_aux1<RobotReporter>(x);
};

// Line 69: range 00000000009E3F98-00000000009E3FB1
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference_aux2<Scene>(const Scene *x, mpl_::false_ a2)
{
  return luabind::detail::get_back_reference_aux1<Scene>(x);
};

// Line 75: range 00000000009E2D6D-00000000009E2D86
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference<Player>(const Player *x)
{
  mpl_::false_ v1; // si

  return luabind::detail::get_back_reference_aux2<Player>(x, v1);
};

// Line 75: range 000000000082549F-00000000008254B8
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference<Robot>(const Robot *x)
{
  mpl_::false_ v1; // si

  return luabind::detail::get_back_reference_aux2<Robot>(x, v1);
};

// Line 75: range 00000000009E2D2D-00000000009E2D46
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference<RobotReporter>(const RobotReporter *x)
{
  mpl_::false_ v1; // si

  return luabind::detail::get_back_reference_aux2<RobotReporter>(x, v1);
};

// Line 75: range 00000000009E2DAD-00000000009E2DC6
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference<Scene>(const Scene *x)
{
  mpl_::false_ v1; // si

  return luabind::detail::get_back_reference_aux2<Scene>(x, v1);
};

// Line 75: range 00000000009E2687-00000000009E26A0
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference<common::tools::TxtFile::Row const*>(
        const common::tools::TxtFile::Row *const *x)
{
  mpl_::true_ v1; // si

  return luabind::detail::get_back_reference_aux2<common::tools::TxtFile::Row const*>(x, v1);
};

// Line 75: range 00000000009E41D5-00000000009E41EE
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference<std::shared_ptr<Avatar>>(
        const std::shared_ptr<Avatar> *x)
{
  mpl_::true_ v1; // si

  return luabind::detail::get_back_reference_aux2<std::shared_ptr<Avatar>>(x, v1);
};

// Line 75: range 00000000009E37EA-00000000009E3803
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference<std::shared_ptr<Monster>>(
        const std::shared_ptr<Monster> *x)
{
  mpl_::true_ v1; // si

  return luabind::detail::get_back_reference_aux2<std::shared_ptr<Monster>>(x, v1);
};

// Line 75: range 00000000009E4318-00000000009E4331
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference<std::shared_ptr<Quest>>(
        const std::shared_ptr<Quest> *x)
{
  mpl_::true_ v1; // si

  return luabind::detail::get_back_reference_aux2<std::shared_ptr<Quest>>(x, v1);
};

// Line 86: range 00000000009E1299-00000000009E12EB
bool __cdecl luabind::get_back_reference<Player>(lua_State_0 *L, const Player *x)
{
  const luabind::wrapped_self_t *v2; // rdx
  const luabind::wrap_base *w; // [rsp+18h] [rbp-8h]

  w = luabind::detail::get_back_reference<Player>(x);
  if ( !w )
    return 0;
  v2 = luabind::detail::wrap_access::ref(w);
  luabind::weak_ref::get(v2, L);
  return 1;
};

// Line 86: range 00000000007E966A-00000000007E96BC
bool __cdecl luabind::get_back_reference<Robot>(lua_State_0 *L, const Robot *x)
{
  const luabind::wrapped_self_t *v2; // rdx
  const luabind::wrap_base *w; // [rsp+18h] [rbp-8h]

  w = luabind::detail::get_back_reference<Robot>(x);
  if ( !w )
    return 0;
  v2 = luabind::detail::wrap_access::ref(w);
  luabind::weak_ref::get(v2, L);
  return 1;
};

// Line 86: range 00000000009E1220-00000000009E1272
bool __cdecl luabind::get_back_reference<RobotReporter>(lua_State_0 *L, const RobotReporter *x)
{
  const luabind::wrapped_self_t *v2; // rdx
  const luabind::wrap_base *w; // [rsp+18h] [rbp-8h]

  w = luabind::detail::get_back_reference<RobotReporter>(x);
  if ( !w )
    return 0;
  v2 = luabind::detail::wrap_access::ref(w);
  luabind::weak_ref::get(v2, L);
  return 1;
};

// Line 86: range 00000000009E1312-00000000009E1364
bool __cdecl luabind::get_back_reference<Scene>(lua_State_0 *L, const Scene *x)
{
  const luabind::wrapped_self_t *v2; // rdx
  const luabind::wrap_base *w; // [rsp+18h] [rbp-8h]

  w = luabind::detail::get_back_reference<Scene>(x);
  if ( !w )
    return 0;
  v2 = luabind::detail::wrap_access::ref(w);
  luabind::weak_ref::get(v2, L);
  return 1;
};

// Line 86: range 00000000009E0BE5-00000000009E0C37
bool __cdecl luabind::get_back_reference<common::tools::TxtFile::Row const*>(
        lua_State_0 *L,
        const common::tools::TxtFile::Row *const *x)
{
  const luabind::wrapped_self_t *v2; // rdx
  const luabind::wrap_base *w; // [rsp+18h] [rbp-8h]

  w = luabind::detail::get_back_reference<common::tools::TxtFile::Row const*>(x);
  if ( !w )
    return 0;
  v2 = luabind::detail::wrap_access::ref(w);
  luabind::weak_ref::get(v2, L);
  return 1;
};

// Line 86: range 00000000009E2E17-00000000009E2E69
bool __cdecl luabind::get_back_reference<std::shared_ptr<Avatar>>(lua_State_0 *L, const std::shared_ptr<Avatar> *x)
{
  const luabind::wrapped_self_t *v2; // rdx
  const luabind::wrap_base *w; // [rsp+18h] [rbp-8h]

  w = luabind::detail::get_back_reference<std::shared_ptr<Avatar>>(x);
  if ( !w )
    return 0;
  v2 = luabind::detail::wrap_access::ref(w);
  luabind::weak_ref::get(v2, L);
  return 1;
};

// Line 86: range 00000000009E25B9-00000000009E260B
bool __cdecl luabind::get_back_reference<std::shared_ptr<Monster>>(lua_State_0 *L, const std::shared_ptr<Monster> *x)
{
  const luabind::wrapped_self_t *v2; // rdx
  const luabind::wrap_base *w; // [rsp+18h] [rbp-8h]

  w = luabind::detail::get_back_reference<std::shared_ptr<Monster>>(x);
  if ( !w )
    return 0;
  v2 = luabind::detail::wrap_access::ref(w);
  luabind::weak_ref::get(v2, L);
  return 1;
};

// Line 86: range 00000000009E32BB-00000000009E330D
bool __cdecl luabind::get_back_reference<std::shared_ptr<Quest>>(lua_State_0 *L, const std::shared_ptr<Quest> *x)
{
  const luabind::wrapped_self_t *v2; // rdx
  const luabind::wrap_base *w; // [rsp+18h] [rbp-8h]

  w = luabind::detail::get_back_reference<std::shared_ptr<Quest>>(x);
  if ( !w )
    return 0;
  v2 = luabind::detail::wrap_access::ref(w);
  luabind::weak_ref::get(v2, L);
  return 1;
};

// Line 711: range 00000000009E4463-00000000009E4484
const luabind::wrap_base *__cdecl luabind::detail::get_back_reference_aux2<std::shared_ptr<Monster>>(
        const std::shared_ptr<Monster> *x,
        mpl_::true_ a2)
{
  Monster *v2; // rax

  v2 = boost::get_pointer<Monster>(x);
  return luabind::detail::get_back_reference_aux1<Monster>(v2);
};
