// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/luabind_d/include/luabind/detail/inheritance.hpp

// Line 118: range 00000000004AEBD8-00000000004AEC3D
luabind::detail::class_rep *__cdecl luabind::detail::class_map::get(
        const luabind::detail::class_map *const this,
        luabind::detail::class_id id)
{
  luabind::detail::class_rep **v3; // rax

  if ( id >= std::vector<luabind::detail::class_rep *>::size(&this->m_classes) )
    return 0LL;
  v3 = (luabind::detail::class_rep **)std::vector<luabind::detail::class_rep *>::operator[](&this->m_classes, id);
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    v3 = (luabind::detail::class_rep **)__asan_report_load8(v3);
  return *v3;
};

// Line 144: range 00000000004AE984-00000000004AEBD7
luabind::detail::class_id __cdecl luabind::detail::class_id_map::get_local(
        luabind::detail::class_id_map *const this,
        const luabind::type_id *type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  luabind::detail::class_id m_local_id; // r14
  __int64 v6; // rax
  luabind::detail::class_id v7; // rcx
  std::_Rb_tree_iterator<std::pair<const luabind::type_id,long unsigned int> >::pointer v8; // rax
  luabind::detail::class_id result; // rax
  luabind::detail::class_id_map *thisa; // [rsp+8h] [rbp-98h]
  int __y; // [rsp+1Ch] [rbp-84h] BYREF
  std::pair<luabind::type_id,int> __x; // [rsp+20h] [rbp-80h] BYREF
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  thisa = this;
  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 result:80";
  *(_QWORD *)(v2 + 16) = luabind::detail::class_id_map::get_local;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __y = 0;
  __x = std::make_pair<luabind::type_id const&,int>(type, &__y);
  *(std::__enable_if_t_4 *)(v2 + 32) = std::map<luabind::type_id,unsigned long>::insert<std::pair<luabind::type_id,int>>(
                                         &this->m_classes,
                                         &__x);
  if ( *(_BYTE *)(v2 + 40) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_local_id >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_local_id);
    m_local_id = this->m_local_id;
    this->m_local_id = m_local_id + 1;
    this = (luabind::detail::class_id_map *const)(v2 + 32);
    v6 = (__int64)std::_Rb_tree_iterator<std::pair<luabind::type_id const,unsigned long>>::operator->((const std::_Rb_tree_iterator<std::pair<const luabind::type_id,long unsigned int> > *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
    {
      this = (luabind::detail::class_id_map *const)(v6 + 8);
      v6 = __asan_report_store8();
    }
    *(_QWORD *)(v6 + 8) = m_local_id;
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_local_id >> 3) + 0x7FFF8000) )
  {
    this = (luabind::detail::class_id_map *const)&thisa->m_local_id;
    __asan_report_load8(&thisa->m_local_id);
  }
  v7 = thisa->m_local_id;
  if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::class_id_map::local_id_base >> 3) + 0x7FFF8000) )
  {
    this = (luabind::detail::class_id_map *const)&luabind::detail::class_id_map::local_id_base;
    __asan_report_load8(&luabind::detail::class_id_map::local_id_base);
  }
  if ( v7 < luabind::detail::class_id_map::local_id_base )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_local_id >= local_id_base",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/luabind/../luabind_d/include/luabind/detail/inheritance.hpp",
      0x56u,
      "luabind::detail::class_id luabind::detail::class_id_map::get_local(const luabind::type_id&)");
  }
  v8 = std::_Rb_tree_iterator<std::pair<luabind::type_id const,unsigned long>>::operator->((const std::_Rb_tree_iterator<std::pair<const luabind::type_id,long unsigned int> > *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) )
    v8 = (std::_Rb_tree_iterator<std::pair<const luabind::type_id,long unsigned int> >::pointer)__asan_report_load8(&v8->second);
  result = v8->second;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
