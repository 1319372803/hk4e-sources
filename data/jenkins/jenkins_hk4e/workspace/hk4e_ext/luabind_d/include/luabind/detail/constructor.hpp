// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/luabind_d/include/luabind/detail/constructor.hpp

// Line 25: range 00000000004AFE51-00000000004AFE63
void __cdecl luabind::detail::inject_backref(lua_State_0 *a1, void *a2, void *a3)
{
  ;
};

// Line 46: range 00000000009DDC3C-00000000009DDF27
void __cdecl luabind::detail::construct_aux<0ul,common::tools::TxtFile,std::auto_ptr<common::tools::TxtFile>,boost::mpl::v_item<luabind::adl::argument const&,boost::mpl::v_item<void,boost::mpl::vector0<mpl_::na>,0>,0>>::operator()(
        const luabind::detail::construct_aux<0,common::tools::TxtFile,std::auto_ptr<common::tools::TxtFile>,boost::mpl::v_item<const luabind::adl::argument&,boost::mpl::v_item<void,boost::mpl::vector0<mpl_::na>,0>,0> > *const this,
        const luabind::adl::argument *self_)
{
  std::auto_ptr<common::tools::TxtFile> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::auto_ptr<common::tools::TxtFile>::element_type *v5; // r15
  std::auto_ptr<common::tools::TxtFile>::element_type *v6; // r14
  lua_State_0 *v7; // rax
  std::auto_ptr<common::tools::TxtFile>::element_type *v8; // rax
  luabind::detail::pointer_holder<std::auto_ptr<common::tools::TxtFile>,common::tools::TxtFile> *v9; // r14
  std::auto_ptr<common::tools::TxtFile>::element_type *__p; // [rsp+8h] [rbp-C8h]
  std::auto_ptr<common::tools::TxtFile> v11; // [rsp+20h] [rbp-B0h] BYREF
  luabind::detail::object_rep *self; // [rsp+28h] [rbp-A8h]
  void *naked_ptr; // [rsp+30h] [rbp-A0h]
  void *storage; // [rsp+38h] [rbp-98h]
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (std::auto_ptr<common::tools::TxtFile> *)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::auto_ptr<common::tools::TxtFile> *)v3;
  }
  v2->_M_ptr = (common::tools::TxtFile *)1102416563;
  v2[1]._M_ptr = (common::tools::TxtFile *)"2 32 8 11 instance:50 64 8 6 ptr:54";
  v2[2]._M_ptr = (common::tools::TxtFile *)luabind::detail::construct_aux<0ul,common::tools::TxtFile,std::auto_ptr<common::tools::TxtFile>,boost::mpl::v_item<luabind::adl::argument const&,boost::mpl::v_item<void,boost::mpl::vector0<mpl_::na>,0>,0>>::operator();
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  self = luabind::touserdata<luabind::detail::object_rep,luabind::adl::argument>(self_);
  __p = (std::auto_ptr<common::tools::TxtFile>::element_type *)operator new(0x8070uLL);
  common::tools::TxtFile::TxtFile(__p);
  std::auto_ptr<common::tools::TxtFile>::auto_ptr(v2 + 4, __p);
  v5 = std::auto_ptr<common::tools::TxtFile>::get(v2 + 4);
  v6 = std::auto_ptr<common::tools::TxtFile>::get(v2 + 4);
  v7 = luabind::adl::argument::interpreter(self_);
  luabind::detail::inject_backref(v7, v6, v5);
  naked_ptr = std::auto_ptr<common::tools::TxtFile>::get(v2 + 4);
  v8 = std::auto_ptr<common::tools::TxtFile>::release(v2 + 4);
  std::auto_ptr<common::tools::TxtFile>::auto_ptr(v2 + 8, v8);
  storage = luabind::detail::object_rep::allocate(self, 0x30uLL);
  std::auto_ptr<common::tools::TxtFile>::auto_ptr(&v11, v2 + 8);
  v9 = (luabind::detail::pointer_holder<std::auto_ptr<common::tools::TxtFile>,common::tools::TxtFile> *)operator new(0x30uLL, storage);
  if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<common::tools::TxtFile>::id >> 3) + 0x7FFF8000) )
    __asan_report_load8(&luabind::detail::registered_class<common::tools::TxtFile>::id);
  luabind::detail::pointer_holder<std::auto_ptr<common::tools::TxtFile>,common::tools::TxtFile>::pointer_holder(
    v9,
    &v11,
    luabind::detail::registered_class<common::tools::TxtFile>::id,
    naked_ptr);
  luabind::detail::object_rep::set_instance(self, v9);
  std::auto_ptr<common::tools::TxtFile>::~auto_ptr(&v11);
  std::auto_ptr<common::tools::TxtFile>::~auto_ptr(v2 + 8);
  std::auto_ptr<common::tools::TxtFile>::~auto_ptr(v2 + 4);
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_ptr = (common::tools::TxtFile *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};
