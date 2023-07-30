// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/luabind_d/include/luabind/detail/make_instance.hpp

// Line 15: range 00000000009E6162-00000000009E62B5
std::pair<long unsigned int,void*> __cdecl luabind::detail::get_dynamic_class_aux<Avatar>(
        lua_State_0 *L,
        const Avatar *p,
        mpl_::true_ a3)
{
  const Avatar *v3; // rax
  unsigned __int64 v4; // rdx
  char *v5; // rax
  const Avatar *v6; // rax
  __int64 vptr_Entity; // rax
  luabind::type_id type; // [rsp+10h] [rbp-20h] BYREF
  unsigned __int64 __x; // [rsp+18h] [rbp-18h] BYREF
  void *__y; // [rsp+20h] [rbp-10h] BYREF
  luabind::detail::class_id_map *class_ids; // [rsp+28h] [rbp-8h]

  lua_pushstring(L, "__luabind_class_id_map");
  lua_rawget(L, -1001000);
  class_ids = (luabind::detail::class_id_map *)lua_touserdata(L, -1);
  lua_settop(L, -2);
  v3 = p;
  if ( p )
  {
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
    {
      L = (lua_State_0 *)p;
      v3 = (const Avatar *)__asan_report_load8(p);
    }
    v4 = (unsigned __int64)(v3->_vptr_Entity - 2);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    {
      L = (lua_State_0 *)(v3->_vptr_Entity - 2);
      v3 = (const Avatar *)__asan_report_load8(L);
    }
    v5 = (char *)v3 + *(_QWORD *)v4;
  }
  else
  {
    v5 = 0LL;
  }
  __y = v5;
  v6 = p;
  if ( !p )
  {
    __asan_handle_no_return(L);
    __cxa_bad_typeid();
  }
  if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
    v6 = (const Avatar *)__asan_report_load8(p);
  vptr_Entity = (__int64)v6->_vptr_Entity;
  if ( *(_BYTE *)(((unsigned __int64)(vptr_Entity - 8) >> 3) + 0x7FFF8000) )
    vptr_Entity = __asan_report_load8(vptr_Entity - 8);
  luabind::type_id::type_id(&type, *(const std::type_info **)(vptr_Entity - 8));
  __x = luabind::detail::class_id_map::get_local(class_ids, &type);
  return std::make_pair<unsigned long,void *>(&__x, &__y);
};

// Line 15: range 00000000009E5E5E-00000000009E5FB1
std::pair<long unsigned int,void*> __cdecl luabind::detail::get_dynamic_class_aux<Monster>(
        lua_State_0 *L,
        const Monster *p,
        mpl_::true_ a3)
{
  const Monster *v3; // rax
  unsigned __int64 v4; // rdx
  char *v5; // rax
  const Monster *v6; // rax
  __int64 vptr_Entity; // rax
  luabind::type_id type; // [rsp+10h] [rbp-20h] BYREF
  unsigned __int64 __x; // [rsp+18h] [rbp-18h] BYREF
  void *__y; // [rsp+20h] [rbp-10h] BYREF
  luabind::detail::class_id_map *class_ids; // [rsp+28h] [rbp-8h]

  lua_pushstring(L, "__luabind_class_id_map");
  lua_rawget(L, -1001000);
  class_ids = (luabind::detail::class_id_map *)lua_touserdata(L, -1);
  lua_settop(L, -2);
  v3 = p;
  if ( p )
  {
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
    {
      L = (lua_State_0 *)p;
      v3 = (const Monster *)__asan_report_load8(p);
    }
    v4 = (unsigned __int64)(v3->_vptr_Entity - 2);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    {
      L = (lua_State_0 *)(v3->_vptr_Entity - 2);
      v3 = (const Monster *)__asan_report_load8(L);
    }
    v5 = (char *)v3 + *(_QWORD *)v4;
  }
  else
  {
    v5 = 0LL;
  }
  __y = v5;
  v6 = p;
  if ( !p )
  {
    __asan_handle_no_return(L);
    __cxa_bad_typeid();
  }
  if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
    v6 = (const Monster *)__asan_report_load8(p);
  vptr_Entity = (__int64)v6->_vptr_Entity;
  if ( *(_BYTE *)(((unsigned __int64)(vptr_Entity - 8) >> 3) + 0x7FFF8000) )
    vptr_Entity = __asan_report_load8(vptr_Entity - 8);
  luabind::type_id::type_id(&type, *(const std::type_info **)(vptr_Entity - 8));
  __x = luabind::detail::class_id_map::get_local(class_ids, &type);
  return std::make_pair<unsigned long,void *>(&__x, &__y);
};

// Line 33: range 00000000009E578E-00000000009E57BD
std::pair<long unsigned int,void*> __cdecl luabind::detail::get_dynamic_class_aux<Player>(
        lua_State_0 *a1,
        const Player *p,
        mpl_::false_ a3)
{
  void *__y; // [rsp+18h] [rbp-8h] BYREF

  __y = (void *)p;
  return std::make_pair<unsigned long const&,void *>(&luabind::detail::registered_class<Player>::id, &__y);
};

// Line 33: range 00000000009E6322-00000000009E6351
std::pair<long unsigned int,void*> __cdecl luabind::detail::get_dynamic_class_aux<Quest>(
        lua_State_0 *a1,
        const Quest *p,
        mpl_::false_ a3)
{
  void *__y; // [rsp+18h] [rbp-8h] BYREF

  __y = (void *)p;
  return std::make_pair<unsigned long const&,void *>(&luabind::detail::registered_class<Quest>::id, &__y);
};

// Line 33: range 0000000000940FD9-0000000000941008
std::pair<long unsigned int,void*> __cdecl luabind::detail::get_dynamic_class_aux<Robot>(
        lua_State_0 *a1,
        const Robot *p,
        mpl_::false_ a3)
{
  void *__y; // [rsp+18h] [rbp-8h] BYREF

  __y = (void *)p;
  return std::make_pair<unsigned long const&,void *>(&luabind::detail::registered_class<Robot>::id, &__y);
};

// Line 33: range 00000000009E5700-00000000009E572F
std::pair<long unsigned int,void*> __cdecl luabind::detail::get_dynamic_class_aux<RobotReporter>(
        lua_State_0 *a1,
        const RobotReporter *p,
        mpl_::false_ a3)
{
  void *__y; // [rsp+18h] [rbp-8h] BYREF

  __y = (void *)p;
  return std::make_pair<unsigned long const&,void *>(&luabind::detail::registered_class<RobotReporter>::id, &__y);
};

// Line 33: range 00000000009E581C-00000000009E584B
std::pair<long unsigned int,void*> __cdecl luabind::detail::get_dynamic_class_aux<Scene>(
        lua_State_0 *a1,
        const Scene *p,
        mpl_::false_ a3)
{
  void *__y; // [rsp+18h] [rbp-8h] BYREF

  __y = (void *)p;
  return std::make_pair<unsigned long const&,void *>(&luabind::detail::registered_class<Scene>::id, &__y);
};

// Line 33: range 00000000009E38D6-00000000009E3905
std::pair<long unsigned int,void*> __cdecl luabind::detail::get_dynamic_class_aux<common::tools::TxtFile::Row>(
        lua_State_0 *a1,
        const common::tools::TxtFile::Row *p,
        mpl_::false_ a3)
{
  void *__y; // [rsp+18h] [rbp-8h] BYREF

  __y = (void *)p;
  return std::make_pair<unsigned long const&,void *>(
           &luabind::detail::registered_class<common::tools::TxtFile::Row>::id,
           &__y);
};

// Line 40: range 00000000009E58C1-00000000009E58F1
std::pair<long unsigned int,void*> __cdecl luabind::detail::get_dynamic_class<Avatar>(lua_State_0 *L, Avatar *p)
{
  boost::integral_constant<bool,true> v3; // [rsp+1Fh] [rbp-1h] BYREF

  boost::integral_constant<bool,true>::operator mpl_::bool_<true> const&(&v3);
  return luabind::detail::get_dynamic_class_aux<Avatar>(L, p, (mpl_::true_)p);
};

// Line 40: range 00000000009E539C-00000000009E53CC
std::pair<long unsigned int,void*> __cdecl luabind::detail::get_dynamic_class<Monster>(lua_State_0 *L, Monster *p)
{
  boost::integral_constant<bool,true> v3; // [rsp+1Fh] [rbp-1h] BYREF

  boost::integral_constant<bool,true>::operator mpl_::bool_<true> const&(&v3);
  return luabind::detail::get_dynamic_class_aux<Monster>(L, p, (mpl_::true_)p);
};

// Line 40: range 00000000009E49E3-00000000009E4A13
std::pair<long unsigned int,void*> __cdecl luabind::detail::get_dynamic_class<Player>(lua_State_0 *L, Player *p)
{
  boost::integral_constant<bool,false> v3; // [rsp+1Fh] [rbp-1h] BYREF

  boost::integral_constant<bool,false>::operator mpl_::bool_<false> const&(&v3);
  return luabind::detail::get_dynamic_class_aux<Player>(L, p, (mpl_::false_)p);
};

// Line 40: range 00000000009E5C28-00000000009E5C58
std::pair<long unsigned int,void*> __cdecl luabind::detail::get_dynamic_class<Quest>(lua_State_0 *L, Quest *p)
{
  boost::integral_constant<bool,false> v3; // [rsp+1Fh] [rbp-1h] BYREF

  boost::integral_constant<bool,false>::operator mpl_::bool_<false> const&(&v3);
  return luabind::detail::get_dynamic_class_aux<Quest>(L, p, (mpl_::false_)p);
};

// Line 40: range 0000000000919650-0000000000919680
std::pair<long unsigned int,void*> __cdecl luabind::detail::get_dynamic_class<Robot>(lua_State_0 *L, Robot *p)
{
  boost::integral_constant<bool,false> v3; // [rsp+1Fh] [rbp-1h] BYREF

  boost::integral_constant<bool,false>::operator mpl_::bool_<false> const&(&v3);
  return luabind::detail::get_dynamic_class_aux<Robot>(L, p, (mpl_::false_)p);
};

// Line 40: range 00000000009E4776-00000000009E47A6
std::pair<long unsigned int,void*> __cdecl luabind::detail::get_dynamic_class<RobotReporter>(
        lua_State_0 *L,
        RobotReporter *p)
{
  boost::integral_constant<bool,false> v3; // [rsp+1Fh] [rbp-1h] BYREF

  boost::integral_constant<bool,false>::operator mpl_::bool_<false> const&(&v3);
  return luabind::detail::get_dynamic_class_aux<RobotReporter>(L, p, (mpl_::false_)p);
};

// Line 40: range 00000000009E4C4F-00000000009E4C7F
std::pair<long unsigned int,void*> __cdecl luabind::detail::get_dynamic_class<Scene>(lua_State_0 *L, Scene *p)
{
  boost::integral_constant<bool,false> v3; // [rsp+1Fh] [rbp-1h] BYREF

  boost::integral_constant<bool,false>::operator mpl_::bool_<false> const&(&v3);
  return luabind::detail::get_dynamic_class_aux<Scene>(L, p, (mpl_::false_)p);
};

// Line 40: range 00000000009E26AF-00000000009E26DF
std::pair<long unsigned int,void*> __cdecl luabind::detail::get_dynamic_class<common::tools::TxtFile::Row const>(
        lua_State_0 *L,
        const common::tools::TxtFile::Row *p)
{
  boost::integral_constant<bool,false> v3; // [rsp+1Fh] [rbp-1h] BYREF

  boost::integral_constant<bool,false>::operator mpl_::bool_<false> const&(&v3);
  return luabind::detail::get_dynamic_class_aux<common::tools::TxtFile::Row>(L, p, (mpl_::false_)p);
};

// Line 46: range 00000000009E62B6-00000000009E6304
luabind::detail::class_rep *__cdecl luabind::detail::get_pointee_class<Avatar>(
        const luabind::detail::class_map *classes,
        Avatar *a2)
{
  if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<Avatar>::id >> 3) + 0x7FFF8000) )
    __asan_report_load8(&luabind::detail::registered_class<Avatar>::id);
  return luabind::detail::class_map::get(classes, luabind::detail::registered_class<Avatar>::id);
};

// Line 46: range 00000000009E5FB2-00000000009E6000
luabind::detail::class_rep *__cdecl luabind::detail::get_pointee_class<Monster>(
        const luabind::detail::class_map *classes,
        Monster *a2)
{
  if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<Monster>::id >> 3) + 0x7FFF8000) )
    __asan_report_load8(&luabind::detail::registered_class<Monster>::id);
  return luabind::detail::class_map::get(classes, luabind::detail::registered_class<Monster>::id);
};

// Line 46: range 00000000009E57BE-00000000009E580C
luabind::detail::class_rep *__cdecl luabind::detail::get_pointee_class<Player>(
        const luabind::detail::class_map *classes,
        Player *a2)
{
  if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<Player>::id >> 3) + 0x7FFF8000) )
    __asan_report_load8(&luabind::detail::registered_class<Player>::id);
  return luabind::detail::class_map::get(classes, luabind::detail::registered_class<Player>::id);
};

// Line 46: range 00000000009E6352-00000000009E63A0
luabind::detail::class_rep *__cdecl luabind::detail::get_pointee_class<Quest>(
        const luabind::detail::class_map *classes,
        Quest *a2)
{
  if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<Quest>::id >> 3) + 0x7FFF8000) )
    __asan_report_load8(&luabind::detail::registered_class<Quest>::id);
  return luabind::detail::class_map::get(classes, luabind::detail::registered_class<Quest>::id);
};

// Line 46: range 0000000000941009-0000000000941057
luabind::detail::class_rep *__cdecl luabind::detail::get_pointee_class<Robot>(
        const luabind::detail::class_map *classes,
        Robot *a2)
{
  if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<Robot>::id >> 3) + 0x7FFF8000) )
    __asan_report_load8(&luabind::detail::registered_class<Robot>::id);
  return luabind::detail::class_map::get(classes, luabind::detail::registered_class<Robot>::id);
};

// Line 46: range 00000000009E5730-00000000009E577E
luabind::detail::class_rep *__cdecl luabind::detail::get_pointee_class<RobotReporter>(
        const luabind::detail::class_map *classes,
        RobotReporter *a2)
{
  if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<RobotReporter>::id >> 3) + 0x7FFF8000) )
    __asan_report_load8(&luabind::detail::registered_class<RobotReporter>::id);
  return luabind::detail::class_map::get(classes, luabind::detail::registered_class<RobotReporter>::id);
};

// Line 46: range 00000000009E584C-00000000009E589A
luabind::detail::class_rep *__cdecl luabind::detail::get_pointee_class<Scene>(
        const luabind::detail::class_map *classes,
        Scene *a2)
{
  if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<Scene>::id >> 3) + 0x7FFF8000) )
    __asan_report_load8(&luabind::detail::registered_class<Scene>::id);
  return luabind::detail::class_map::get(classes, luabind::detail::registered_class<Scene>::id);
};

// Line 46: range 00000000009E3906-00000000009E3954
luabind::detail::class_rep *__cdecl luabind::detail::get_pointee_class<common::tools::TxtFile::Row const>(
        const luabind::detail::class_map *classes,
        const common::tools::TxtFile::Row *a2)
{
  if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<common::tools::TxtFile::Row>::id >> 3)
                + 0x7FFF8000) )
    __asan_report_load8(&luabind::detail::registered_class<common::tools::TxtFile::Row>::id);
  return luabind::detail::class_map::get(classes, luabind::detail::registered_class<common::tools::TxtFile::Row>::id);
};

// Line 52: range 00000000009E4A14-00000000009E4ADB
luabind::detail::class_rep *__cdecl luabind::detail::get_pointee_class<Player *>(
        lua_State_0 *L,
        Player *const *p,
        luabind::detail::class_id dynamic_id)
{
  Player *v3; // rdx
  luabind::detail::class_rep *cls; // [rsp+20h] [rbp-10h]
  const luabind::detail::class_map *classes; // [rsp+28h] [rbp-8h]

  lua_pushstring(L, "__luabind_class_map");
  lua_rawget(L, -1001000);
  classes = (const luabind::detail::class_map *)lua_touserdata(L, -1);
  lua_settop(L, -2);
  cls = luabind::detail::class_map::get(classes, dynamic_id);
  if ( !cls )
  {
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
      __asan_report_load8(p);
    v3 = boost::get_pointer<Player>(*p);
    return luabind::detail::get_pointee_class<Player>(classes, v3);
  }
  return cls;
};

// Line 52: range 0000000000919681-0000000000919748
luabind::detail::class_rep *__cdecl luabind::detail::get_pointee_class<Robot *>(
        lua_State_0 *L,
        Robot *const *p,
        luabind::detail::class_id dynamic_id)
{
  Robot *v3; // rdx
  luabind::detail::class_rep *cls; // [rsp+20h] [rbp-10h]
  const luabind::detail::class_map *classes; // [rsp+28h] [rbp-8h]

  lua_pushstring(L, "__luabind_class_map");
  lua_rawget(L, -1001000);
  classes = (const luabind::detail::class_map *)lua_touserdata(L, -1);
  lua_settop(L, -2);
  cls = luabind::detail::class_map::get(classes, dynamic_id);
  if ( !cls )
  {
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
      __asan_report_load8(p);
    v3 = boost::get_pointer<Robot>(*p);
    return luabind::detail::get_pointee_class<Robot>(classes, v3);
  }
  return cls;
};

// Line 52: range 00000000009E47A7-00000000009E486E
luabind::detail::class_rep *__cdecl luabind::detail::get_pointee_class<RobotReporter *>(
        lua_State_0 *L,
        RobotReporter *const *p,
        luabind::detail::class_id dynamic_id)
{
  RobotReporter *v3; // rdx
  luabind::detail::class_rep *cls; // [rsp+20h] [rbp-10h]
  const luabind::detail::class_map *classes; // [rsp+28h] [rbp-8h]

  lua_pushstring(L, "__luabind_class_map");
  lua_rawget(L, -1001000);
  classes = (const luabind::detail::class_map *)lua_touserdata(L, -1);
  lua_settop(L, -2);
  cls = luabind::detail::class_map::get(classes, dynamic_id);
  if ( !cls )
  {
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
      __asan_report_load8(p);
    v3 = boost::get_pointer<RobotReporter>(*p);
    return luabind::detail::get_pointee_class<RobotReporter>(classes, v3);
  }
  return cls;
};

// Line 52: range 00000000009E4C80-00000000009E4D47
luabind::detail::class_rep *__cdecl luabind::detail::get_pointee_class<Scene *>(
        lua_State_0 *L,
        Scene *const *p,
        luabind::detail::class_id dynamic_id)
{
  Scene *v3; // rdx
  luabind::detail::class_rep *cls; // [rsp+20h] [rbp-10h]
  const luabind::detail::class_map *classes; // [rsp+28h] [rbp-8h]

  lua_pushstring(L, "__luabind_class_map");
  lua_rawget(L, -1001000);
  classes = (const luabind::detail::class_map *)lua_touserdata(L, -1);
  lua_settop(L, -2);
  cls = luabind::detail::class_map::get(classes, dynamic_id);
  if ( !cls )
  {
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
      __asan_report_load8(p);
    v3 = boost::get_pointer<Scene>(*p);
    return luabind::detail::get_pointee_class<Scene>(classes, v3);
  }
  return cls;
};

// Line 52: range 00000000009E26E0-00000000009E27A7
luabind::detail::class_rep *__cdecl luabind::detail::get_pointee_class<common::tools::TxtFile::Row const*>(
        lua_State_0 *L,
        const common::tools::TxtFile::Row *const *p,
        luabind::detail::class_id dynamic_id)
{
  const common::tools::TxtFile::Row *v3; // rdx
  luabind::detail::class_rep *cls; // [rsp+20h] [rbp-10h]
  const luabind::detail::class_map *classes; // [rsp+28h] [rbp-8h]

  lua_pushstring(L, "__luabind_class_map");
  lua_rawget(L, -1001000);
  classes = (const luabind::detail::class_map *)lua_touserdata(L, -1);
  lua_settop(L, -2);
  cls = luabind::detail::class_map::get(classes, dynamic_id);
  if ( !cls )
  {
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
      __asan_report_load8(p);
    v3 = boost::get_pointer<common::tools::TxtFile::Row const>(*p);
    return luabind::detail::get_pointee_class<common::tools::TxtFile::Row const>(classes, v3);
  }
  return cls;
};

// Line 52: range 00000000009E58F2-00000000009E5995
luabind::detail::class_rep *__cdecl luabind::detail::get_pointee_class<std::shared_ptr<Avatar>>(
        lua_State_0 *L,
        const std::shared_ptr<Avatar> *p,
        luabind::detail::class_id dynamic_id)
{
  Avatar *v3; // rdx
  luabind::detail::class_rep *cls; // [rsp+20h] [rbp-10h]
  const luabind::detail::class_map *classes; // [rsp+28h] [rbp-8h]

  lua_pushstring(L, "__luabind_class_map");
  lua_rawget(L, -1001000);
  classes = (const luabind::detail::class_map *)lua_touserdata(L, -1);
  lua_settop(L, -2);
  cls = luabind::detail::class_map::get(classes, dynamic_id);
  if ( !cls )
  {
    v3 = boost::get_pointer<Avatar>(p);
    return luabind::detail::get_pointee_class<Avatar>(classes, v3);
  }
  return cls;
};

// Line 52: range 00000000009E53CD-00000000009E5470
luabind::detail::class_rep *__cdecl luabind::detail::get_pointee_class<std::shared_ptr<Monster>>(
        lua_State_0 *L,
        const std::shared_ptr<Monster> *p,
        luabind::detail::class_id dynamic_id)
{
  Monster *v3; // rdx
  luabind::detail::class_rep *cls; // [rsp+20h] [rbp-10h]
  const luabind::detail::class_map *classes; // [rsp+28h] [rbp-8h]

  lua_pushstring(L, "__luabind_class_map");
  lua_rawget(L, -1001000);
  classes = (const luabind::detail::class_map *)lua_touserdata(L, -1);
  lua_settop(L, -2);
  cls = luabind::detail::class_map::get(classes, dynamic_id);
  if ( !cls )
  {
    v3 = boost::get_pointer<Monster>(p);
    return luabind::detail::get_pointee_class<Monster>(classes, v3);
  }
  return cls;
};

// Line 52: range 00000000009E5C59-00000000009E5CFC
luabind::detail::class_rep *__cdecl luabind::detail::get_pointee_class<std::shared_ptr<Quest>>(
        lua_State_0 *L,
        const std::shared_ptr<Quest> *p,
        luabind::detail::class_id dynamic_id)
{
  Quest *v3; // rdx
  luabind::detail::class_rep *cls; // [rsp+20h] [rbp-10h]
  const luabind::detail::class_map *classes; // [rsp+28h] [rbp-8h]

  lua_pushstring(L, "__luabind_class_map");
  lua_rawget(L, -1001000);
  classes = (const luabind::detail::class_map *)lua_touserdata(L, -1);
  lua_settop(L, -2);
  cls = luabind::detail::class_map::get(classes, dynamic_id);
  if ( !cls )
  {
    v3 = boost::get_pointer<Quest>(p);
    return luabind::detail::get_pointee_class<Quest>(classes, v3);
  }
  return cls;
};

// Line 72: range 00000000009E4EC3-00000000009E50E6
void __cdecl luabind::detail::make_instance<std::shared_ptr<Avatar>>(lua_State_0 *L, std::shared_ptr<Avatar> *p_p)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Avatar *v5; // rdx
  std::runtime_error *exception; // rdi
  luabind::detail::pointer_holder<std::shared_ptr<Avatar>,void const> *v7; // rax
  luabind::detail::class_rep *cls; // [rsp+18h] [rbp-98h]
  luabind::detail::object_rep *instance; // [rsp+20h] [rbp-90h]
  luabind::detail::instance_holder *storage; // [rsp+28h] [rbp-88h]
  std::shared_ptr<Avatar> v11; // [rsp+30h] [rbp-80h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 10 dynamic:74";
  *(_QWORD *)(v2 + 16) = luabind::detail::make_instance<std::shared_ptr<Avatar>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  v5 = boost::get_pointer<Avatar>(p_p);
  *(std::pair<long unsigned int,void*> *)(v2 + 32) = luabind::detail::get_dynamic_class<Avatar>(L, v5);
  cls = luabind::detail::get_pointee_class<std::shared_ptr<Avatar>>(L, p_p, *(_QWORD *)(v2 + 32));
  if ( !cls )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10uLL);
    std::runtime_error::runtime_error(exception, "Trying to use unregistered class");
    __asan_handle_no_return(exception);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (__fastcall *)(void *))&std::runtime_error::~runtime_error);
  }
  instance = (luabind::detail::object_rep *)luabind::detail::push_new_instance(L, cls);
  storage = (luabind::detail::instance_holder *)luabind::detail::object_rep::allocate(instance, 0x38uLL);
  std::shared_ptr<Avatar>::shared_ptr(&v11, p_p);
  v7 = (luabind::detail::pointer_holder<std::shared_ptr<Avatar>,void const> *)operator new(0x38uLL, storage);
  luabind::detail::pointer_holder<std::shared_ptr<Avatar>,void const>::pointer_holder(
    v7,
    &v11,
    *(_QWORD *)(v2 + 32),
    *(void **)(v2 + 40));
  std::shared_ptr<Avatar>::~shared_ptr(&v11);
  luabind::detail::object_rep::set_instance(instance, storage);
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 72: range 00000000009E449F-00000000009E46C2
void __cdecl luabind::detail::make_instance<std::shared_ptr<Monster>>(lua_State_0 *L, std::shared_ptr<Monster> *p_p)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Monster *v5; // rdx
  std::runtime_error *exception; // rdi
  luabind::detail::pointer_holder<std::shared_ptr<Monster>,void const> *v7; // rax
  luabind::detail::class_rep *cls; // [rsp+18h] [rbp-98h]
  luabind::detail::object_rep *instance; // [rsp+20h] [rbp-90h]
  luabind::detail::instance_holder *storage; // [rsp+28h] [rbp-88h]
  std::shared_ptr<Monster> v11; // [rsp+30h] [rbp-80h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 10 dynamic:74";
  *(_QWORD *)(v2 + 16) = luabind::detail::make_instance<std::shared_ptr<Monster>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  v5 = boost::get_pointer<Monster>(p_p);
  *(std::pair<long unsigned int,void*> *)(v2 + 32) = luabind::detail::get_dynamic_class<Monster>(L, v5);
  cls = luabind::detail::get_pointee_class<std::shared_ptr<Monster>>(L, p_p, *(_QWORD *)(v2 + 32));
  if ( !cls )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10uLL);
    std::runtime_error::runtime_error(exception, "Trying to use unregistered class");
    __asan_handle_no_return(exception);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (__fastcall *)(void *))&std::runtime_error::~runtime_error);
  }
  instance = (luabind::detail::object_rep *)luabind::detail::push_new_instance(L, cls);
  storage = (luabind::detail::instance_holder *)luabind::detail::object_rep::allocate(instance, 0x38uLL);
  std::shared_ptr<Monster>::shared_ptr(&v11, p_p);
  v7 = (luabind::detail::pointer_holder<std::shared_ptr<Monster>,void const> *)operator new(0x38uLL, storage);
  luabind::detail::pointer_holder<std::shared_ptr<Monster>,void const>::pointer_holder(
    v7,
    &v11,
    *(_QWORD *)(v2 + 32),
    *(void **)(v2 + 40));
  std::shared_ptr<Monster>::~shared_ptr(&v11);
  luabind::detail::object_rep::set_instance(instance, storage);
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 72: range 00000000009E5152-00000000009E5375
void __cdecl luabind::detail::make_instance<std::shared_ptr<Quest>>(lua_State_0 *L, std::shared_ptr<Quest> *p_p)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Quest *v5; // rdx
  std::runtime_error *exception; // rdi
  luabind::detail::pointer_holder<std::shared_ptr<Quest>,void const> *v7; // rax
  luabind::detail::class_rep *cls; // [rsp+18h] [rbp-98h]
  luabind::detail::object_rep *instance; // [rsp+20h] [rbp-90h]
  luabind::detail::instance_holder *storage; // [rsp+28h] [rbp-88h]
  std::shared_ptr<Quest> v11; // [rsp+30h] [rbp-80h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 10 dynamic:74";
  *(_QWORD *)(v2 + 16) = luabind::detail::make_instance<std::shared_ptr<Quest>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  v5 = boost::get_pointer<Quest>(p_p);
  *(std::pair<long unsigned int,void*> *)(v2 + 32) = luabind::detail::get_dynamic_class<Quest>(L, v5);
  cls = luabind::detail::get_pointee_class<std::shared_ptr<Quest>>(L, p_p, *(_QWORD *)(v2 + 32));
  if ( !cls )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10uLL);
    std::runtime_error::runtime_error(exception, "Trying to use unregistered class");
    __asan_handle_no_return(exception);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (__fastcall *)(void *))&std::runtime_error::~runtime_error);
  }
  instance = (luabind::detail::object_rep *)luabind::detail::push_new_instance(L, cls);
  storage = (luabind::detail::instance_holder *)luabind::detail::object_rep::allocate(instance, 0x38uLL);
  std::shared_ptr<Quest>::shared_ptr(&v11, p_p);
  v7 = (luabind::detail::pointer_holder<std::shared_ptr<Quest>,void const> *)operator new(0x38uLL, storage);
  luabind::detail::pointer_holder<std::shared_ptr<Quest>,void const>::pointer_holder(
    v7,
    &v11,
    *(_QWORD *)(v2 + 32),
    *(void **)(v2 + 40));
  std::shared_ptr<Quest>::~shared_ptr(&v11);
  luabind::detail::object_rep::set_instance(instance, storage);
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 72: range 00000000009E3D75-00000000009E3F97
void __fastcall luabind::detail::make_instance<Player *>(lua_State_0 *L, Player *p)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  Player *v5; // rax
  std::runtime_error *exception; // rdi
  luabind::detail::pointer_holder<Player*,void const> *v7; // rax
  luabind::detail::class_rep *cls; // [rsp+18h] [rbp-98h]
  luabind::detail::object_rep *instance; // [rsp+20h] [rbp-90h]
  luabind::detail::instance_holder *storage; // [rsp+28h] [rbp-88h]
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 4 p:72 64 16 10 dynamic:74";
  *(_QWORD *)(v2 + 16) = luabind::detail::make_instance<Player *>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  *(_QWORD *)(v2 + 32) = p;
  v5 = boost::get_pointer<Player>(*(Player **)(v2 + 32));
  *(std::pair<long unsigned int,void*> *)(v2 + 64) = luabind::detail::get_dynamic_class<Player>(L, v5);
  cls = luabind::detail::get_pointee_class<Player *>(L, (Player *const *)(v2 + 32), *(_QWORD *)(v2 + 64));
  if ( !cls )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10uLL);
    std::runtime_error::runtime_error(exception, "Trying to use unregistered class");
    __asan_handle_no_return(exception);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (__fastcall *)(void *))&std::runtime_error::~runtime_error);
  }
  instance = (luabind::detail::object_rep *)luabind::detail::push_new_instance(L, cls);
  storage = (luabind::detail::instance_holder *)luabind::detail::object_rep::allocate(instance, 0x30uLL);
  v7 = (luabind::detail::pointer_holder<Player*,void const> *)operator new(0x30uLL, storage);
  luabind::detail::pointer_holder<Player *,void const>::pointer_holder(
    v7,
    *(Player **)(v2 + 32),
    *(_QWORD *)(v2 + 64),
    *(void **)(v2 + 72));
  luabind::detail::object_rep::set_instance(instance, storage);
  if ( v11 == (char *)v2 )
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

// Line 72: range 00000000008D8F7E-00000000008D921E
void __fastcall luabind::detail::make_instance<Robot *>(lua_State_0 *L, Robot *p)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  Robot *v5; // rax
  std::runtime_error *exception; // rdi
  luabind::detail::pointer_holder<Robot*,void const> *v7; // rax
  luabind::detail::class_rep *cls; // [rsp+28h] [rbp-A8h]
  luabind::detail::object_rep *instance; // [rsp+30h] [rbp-A0h]
  luabind::detail::instance_holder *storage; // [rsp+38h] [rbp-98h]
  char v11[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 4 p:72 64 16 10 dynamic:74";
  *(_QWORD *)(v2 + 16) = luabind::detail::make_instance<Robot *>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  *(_QWORD *)(v2 + 32) = p;
  v5 = boost::get_pointer<Robot>(*(Robot **)(v2 + 32));
  *(std::pair<long unsigned int,void*> *)(v2 + 64) = luabind::detail::get_dynamic_class<Robot>(L, v5);
  cls = luabind::detail::get_pointee_class<Robot *>(L, (Robot *const *)(v2 + 32), *(_QWORD *)(v2 + 64));
  if ( !cls )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10uLL);
    std::runtime_error::runtime_error(exception, "Trying to use unregistered class");
    __asan_handle_no_return(exception);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (__fastcall *)(void *))&std::runtime_error::~runtime_error);
  }
  instance = (luabind::detail::object_rep *)luabind::detail::push_new_instance(L, cls);
  storage = (luabind::detail::instance_holder *)luabind::detail::object_rep::allocate(instance, 0x30uLL);
  v7 = (luabind::detail::pointer_holder<Robot*,void const> *)operator new(0x30uLL, storage);
  luabind::detail::pointer_holder<Robot *,void const>::pointer_holder(
    v7,
    *(Robot **)(v2 + 32),
    *(_QWORD *)(v2 + 64),
    *(void **)(v2 + 72));
  luabind::detail::object_rep::set_instance(instance, storage);
  if ( v11 == (char *)v2 )
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

// Line 72: range 00000000009E3B38-00000000009E3D5A
void __fastcall luabind::detail::make_instance<RobotReporter *>(lua_State_0 *L, RobotReporter *p)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  RobotReporter *v5; // rax
  std::runtime_error *exception; // rdi
  luabind::detail::pointer_holder<RobotReporter*,void const> *v7; // rax
  luabind::detail::class_rep *cls; // [rsp+18h] [rbp-98h]
  luabind::detail::object_rep *instance; // [rsp+20h] [rbp-90h]
  luabind::detail::instance_holder *storage; // [rsp+28h] [rbp-88h]
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 4 p:72 64 16 10 dynamic:74";
  *(_QWORD *)(v2 + 16) = luabind::detail::make_instance<RobotReporter *>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  *(_QWORD *)(v2 + 32) = p;
  v5 = boost::get_pointer<RobotReporter>(*(RobotReporter **)(v2 + 32));
  *(std::pair<long unsigned int,void*> *)(v2 + 64) = luabind::detail::get_dynamic_class<RobotReporter>(L, v5);
  cls = luabind::detail::get_pointee_class<RobotReporter *>(L, (RobotReporter *const *)(v2 + 32), *(_QWORD *)(v2 + 64));
  if ( !cls )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10uLL);
    std::runtime_error::runtime_error(exception, "Trying to use unregistered class");
    __asan_handle_no_return(exception);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (__fastcall *)(void *))&std::runtime_error::~runtime_error);
  }
  instance = (luabind::detail::object_rep *)luabind::detail::push_new_instance(L, cls);
  storage = (luabind::detail::instance_holder *)luabind::detail::object_rep::allocate(instance, 0x30uLL);
  v7 = (luabind::detail::pointer_holder<RobotReporter*,void const> *)operator new(0x30uLL, storage);
  luabind::detail::pointer_holder<RobotReporter *,void const>::pointer_holder(
    v7,
    *(RobotReporter **)(v2 + 32),
    *(_QWORD *)(v2 + 64),
    *(void **)(v2 + 72));
  luabind::detail::object_rep::set_instance(instance, storage);
  if ( v11 == (char *)v2 )
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

// Line 72: range 00000000009E3FB2-00000000009E41D4
void __fastcall luabind::detail::make_instance<Scene *>(lua_State_0 *L, Scene *p)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  Scene *v5; // rax
  std::runtime_error *exception; // rdi
  luabind::detail::pointer_holder<Scene*,void const> *v7; // rax
  luabind::detail::class_rep *cls; // [rsp+18h] [rbp-98h]
  luabind::detail::object_rep *instance; // [rsp+20h] [rbp-90h]
  luabind::detail::instance_holder *storage; // [rsp+28h] [rbp-88h]
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 4 p:72 64 16 10 dynamic:74";
  *(_QWORD *)(v2 + 16) = luabind::detail::make_instance<Scene *>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  *(_QWORD *)(v2 + 32) = p;
  v5 = boost::get_pointer<Scene>(*(Scene **)(v2 + 32));
  *(std::pair<long unsigned int,void*> *)(v2 + 64) = luabind::detail::get_dynamic_class<Scene>(L, v5);
  cls = luabind::detail::get_pointee_class<Scene *>(L, (Scene *const *)(v2 + 32), *(_QWORD *)(v2 + 64));
  if ( !cls )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10uLL);
    std::runtime_error::runtime_error(exception, "Trying to use unregistered class");
    __asan_handle_no_return(exception);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (__fastcall *)(void *))&std::runtime_error::~runtime_error);
  }
  instance = (luabind::detail::object_rep *)luabind::detail::push_new_instance(L, cls);
  storage = (luabind::detail::instance_holder *)luabind::detail::object_rep::allocate(instance, 0x30uLL);
  v7 = (luabind::detail::pointer_holder<Scene*,void const> *)operator new(0x30uLL, storage);
  luabind::detail::pointer_holder<Scene *,void const>::pointer_holder(
    v7,
    *(Scene **)(v2 + 32),
    *(_QWORD *)(v2 + 64),
    *(void **)(v2 + 72));
  luabind::detail::object_rep::set_instance(instance, storage);
  if ( v11 == (char *)v2 )
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

// Line 72: range 00000000009E0C38-00000000009E0ED8
void __fastcall luabind::detail::make_instance<common::tools::TxtFile::Row const*>(
        lua_State_0 *L,
        const common::tools::TxtFile::Row *p)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const common::tools::TxtFile::Row *v5; // rax
  std::runtime_error *exception; // rdi
  luabind::detail::pointer_holder<const common::tools::TxtFile::Row*,void const> *v7; // rax
  luabind::detail::class_rep *cls; // [rsp+28h] [rbp-A8h]
  luabind::detail::object_rep *instance; // [rsp+30h] [rbp-A0h]
  luabind::detail::instance_holder *storage; // [rsp+38h] [rbp-98h]
  char v11[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 4 p:72 64 16 10 dynamic:74";
  *(_QWORD *)(v2 + 16) = luabind::detail::make_instance<common::tools::TxtFile::Row const*>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  *(_QWORD *)(v2 + 32) = p;
  v5 = boost::get_pointer<common::tools::TxtFile::Row const>(*(const common::tools::TxtFile::Row **)(v2 + 32));
  *(std::pair<long unsigned int,void*> *)(v2 + 64) = luabind::detail::get_dynamic_class<common::tools::TxtFile::Row const>(
                                                       L,
                                                       v5);
  cls = luabind::detail::get_pointee_class<common::tools::TxtFile::Row const*>(
          L,
          (const common::tools::TxtFile::Row *const *)(v2 + 32),
          *(_QWORD *)(v2 + 64));
  if ( !cls )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10uLL);
    std::runtime_error::runtime_error(exception, "Trying to use unregistered class");
    __asan_handle_no_return(exception);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (__fastcall *)(void *))&std::runtime_error::~runtime_error);
  }
  instance = (luabind::detail::object_rep *)luabind::detail::push_new_instance(L, cls);
  storage = (luabind::detail::instance_holder *)luabind::detail::object_rep::allocate(instance, 0x30uLL);
  v7 = (luabind::detail::pointer_holder<const common::tools::TxtFile::Row*,void const> *)operator new(0x30uLL, storage);
  luabind::detail::pointer_holder<common::tools::TxtFile::Row const*,void const>::pointer_holder(
    v7,
    *(const common::tools::TxtFile::Row **)(v2 + 32),
    *(_QWORD *)(v2 + 64),
    *(void **)(v2 + 72));
  luabind::detail::object_rep::set_instance(instance, storage);
  if ( v11 == (char *)v2 )
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
