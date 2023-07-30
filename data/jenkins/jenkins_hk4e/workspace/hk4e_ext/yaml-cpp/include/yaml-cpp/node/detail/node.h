// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/yaml-cpp/include/yaml-cpp/node/detail/node.h

// Line 46: range 000000001531A9CE-000000001531AEAC
void __fastcall YAML::detail::node::mark_defined(YAML::detail::node *const this)
{
  std::_Rb_tree_node_base::_Base_ptr v1; // rbp
  std::_Rb_tree_node<YAML::detail::node*> *M_parent; // rsi
  std::_Rb_tree_header *v3; // r12
  YAML::detail::node *v4; // rbx
  std::_Rb_tree_node_base::_Base_ptr M_left; // rax
  std::_Any_data *p_M_parent; // rdi
  std::_Rb_tree_header *v7; // rax
  std::_Manager_operation v8; // edx

  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_7;
  }
  this = (YAML::detail::node *const)this->m_pRef._M_ptr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_load8();
    goto LABEL_8;
  }
  this = (YAML::detail::node *const)this->m_pRef._M_ptr;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_8:
    __asan_report_load1(this);
    goto LABEL_9;
  }
  if ( !LOBYTE(this->m_pRef._M_ptr) )
  {
LABEL_9:
    YAML::detail::node_data::mark_defined((YAML::detail::node_data *)this);
    if ( *(_BYTE *)(((unsigned __int64)&v4->m_dependencies._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
      goto LABEL_12;
    }
    M_left = v4->m_dependencies._M_t._M_impl._M_header._M_left;
    v3 = &v4->m_dependencies._M_t._M_impl.std::_Rb_tree_header;
    while ( 1 )
    {
      v1 = M_left;
      if ( v3 == (std::_Rb_tree_header *)M_left )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&M_left[1] >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
        break;
      }
LABEL_12:
      YAML::detail::node::mark_defined(*(YAML::detail::node *const *)&v1[1]._M_color);
      M_left = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(v1);
    }
    p_M_parent = (std::_Any_data *)&v4->m_dependencies._M_t._M_impl._M_header._M_parent;
    if ( *(_BYTE *)(((unsigned __int64)&v4->m_dependencies._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else
    {
      M_parent = (std::_Rb_tree_node<YAML::detail::node*> *)v4->m_dependencies._M_t._M_impl._M_header._M_parent;
      std::_Rb_tree<YAML::detail::node *,YAML::detail::node *,std::_Identity<YAML::detail::node *>,YAML::detail::node::less,std::allocator<YAML::detail::node *>>::_M_erase(
        &v4->m_dependencies._M_t,
        M_parent);
      p_M_parent = (std::_Any_data *)&v4->m_dependencies._M_t._M_impl._M_header._M_parent;
      if ( !*(_BYTE *)(((unsigned __int64)&v4->m_dependencies._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
      {
        v4->m_dependencies._M_t._M_impl._M_header._M_parent = 0LL;
        v7 = &v4->m_dependencies._M_t._M_impl.std::_Rb_tree_header;
        p_M_parent = (std::_Any_data *)&v4->m_dependencies._M_t._M_impl._M_header._M_left;
        if ( !*(_BYTE *)(((unsigned __int64)&v4->m_dependencies._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
        {
          v4->m_dependencies._M_t._M_impl._M_header._M_left = &v7->_M_header;
          p_M_parent = (std::_Any_data *)&v4->m_dependencies._M_t._M_impl._M_header._M_right;
          if ( !*(_BYTE *)(((unsigned __int64)&v4->m_dependencies._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
          {
            v4->m_dependencies._M_t._M_impl._M_header._M_right = &v7->_M_header;
            p_M_parent = (std::_Any_data *)&v4->m_dependencies._M_t._M_impl._M_node_count;
            if ( !*(_BYTE *)(((unsigned __int64)&v4->m_dependencies._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
            {
              v4->m_dependencies._M_t._M_impl._M_node_count = 0LL;
              return;
            }
            goto LABEL_26;
          }
LABEL_25:
          __asan_report_store8();
LABEL_26:
          __asan_report_store8();
          std::_Function_base::_Base_manager<std::_Bind<void (*)(std::weak_ptr<SpanHolder> const&,unsigned long) ()(std::weak_ptr<SpanHolder>,std::_Placeholder<1>)>>::_M_manager(
            p_M_parent,
            (const std::_Any_data *)M_parent,
            v8);
          return;
        }
LABEL_24:
        __asan_report_store8();
        goto LABEL_25;
      }
    }
    __asan_report_store8();
    goto LABEL_24;
  }
};
