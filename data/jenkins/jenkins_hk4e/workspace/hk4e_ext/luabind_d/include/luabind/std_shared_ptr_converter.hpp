// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/luabind_d/include/luabind/std_shared_ptr_converter.hpp

// Line 59: range 00000000009D97B6-00000000009D97D0
void __cdecl luabind::default_converter<std::shared_ptr<Avatar>,void>::default_converter(
        luabind::default_converter<std::shared_ptr<Avatar>,void> *const this)
{
  luabind::default_converter<Avatar *,void>::default_converter(this);
};

// Line 59: range 00000000009BA448-00000000009BA462
void __cdecl luabind::default_converter<std::shared_ptr<Monster>,void>::default_converter(
        luabind::default_converter<std::shared_ptr<Monster>,void> *const this)
{
  luabind::default_converter<Monster *,void>::default_converter(this);
};

// Line 59: range 00000000009DB420-00000000009DB43A
void __cdecl luabind::default_converter<std::shared_ptr<Quest>,void>::default_converter(
        luabind::default_converter<std::shared_ptr<Quest>,void> *const this)
{
  luabind::default_converter<Quest *,void>::default_converter(this);
};

// Line 80: range 00000000009DF56C-00000000009DF613
void __cdecl luabind::default_converter<std::shared_ptr<Avatar>,void>::apply(
        luabind::default_converter<std::shared_ptr<Avatar>,void> *const this,
        lua_State_0 *L,
        const std::shared_ptr<Avatar> *p)
{
  luabind::detail::value_converter v4; // [rsp+20h] [rbp-30h] BYREF
  luabind::detail::std_shared_ptr_deleter *d; // [rsp+28h] [rbp-28h]
  std::shared_ptr<Avatar> p_x; // [rsp+30h] [rbp-20h] BYREF

  d = std::get_deleter<luabind::detail::std_shared_ptr_deleter,Avatar>(p);
  if ( d )
  {
    luabind::handle::push(&d->life_support, L);
  }
  else
  {
    luabind::detail::value_converter::value_converter(&v4);
    std::shared_ptr<Avatar>::shared_ptr(&p_x, p);
    luabind::detail::value_converter::apply<std::shared_ptr<Avatar>>(&v4, L, &p_x);
    std::shared_ptr<Avatar>::~shared_ptr(&p_x);
  }
};

// Line 80: range 00000000009DCAE6-00000000009DCB8D
void __cdecl luabind::default_converter<std::shared_ptr<Monster>,void>::apply(
        luabind::default_converter<std::shared_ptr<Monster>,void> *const this,
        lua_State_0 *L,
        const std::shared_ptr<Monster> *p)
{
  luabind::detail::value_converter v4; // [rsp+20h] [rbp-30h] BYREF
  luabind::detail::std_shared_ptr_deleter *d; // [rsp+28h] [rbp-28h]
  std::shared_ptr<Monster> p_x; // [rsp+30h] [rbp-20h] BYREF

  d = std::get_deleter<luabind::detail::std_shared_ptr_deleter,Monster>(p);
  if ( d )
  {
    luabind::handle::push(&d->life_support, L);
  }
  else
  {
    luabind::detail::value_converter::value_converter(&v4);
    std::shared_ptr<Monster>::shared_ptr(&p_x, p);
    luabind::detail::value_converter::apply<std::shared_ptr<Monster>>(&v4, L, &p_x);
    std::shared_ptr<Monster>::~shared_ptr(&p_x);
  }
};

// Line 80: range 00000000009DF64E-00000000009DF6F5
void __cdecl luabind::default_converter<std::shared_ptr<Quest>,void>::apply(
        luabind::default_converter<std::shared_ptr<Quest>,void> *const this,
        lua_State_0 *L,
        const std::shared_ptr<Quest> *p)
{
  luabind::detail::value_converter v4; // [rsp+20h] [rbp-30h] BYREF
  luabind::detail::std_shared_ptr_deleter *d; // [rsp+28h] [rbp-28h]
  std::shared_ptr<Quest> p_x; // [rsp+30h] [rbp-20h] BYREF

  d = std::get_deleter<luabind::detail::std_shared_ptr_deleter,Quest>(p);
  if ( d )
  {
    luabind::handle::push(&d->life_support, L);
  }
  else
  {
    luabind::detail::value_converter::value_converter(&v4);
    std::shared_ptr<Quest>::shared_ptr(&p_x, p);
    luabind::detail::value_converter::apply<std::shared_ptr<Quest>>(&v4, L, &p_x);
    std::shared_ptr<Quest>::~shared_ptr(&p_x);
  }
};
