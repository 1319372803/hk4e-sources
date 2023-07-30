// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/yaml-cpp/include/yaml-cpp/node/impl.h

// Line 31: range 000000001531FC4E-00000000153203CA
void __fastcall YAML::Node::Node<char const*>(YAML::Node *const this, const char *const *rhs)
{
  unsigned __int64 v2; // r15
  YAML::Node *v3; // rbx
  const char *const *v4; // r14
  char v5; // al
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  unsigned __int64 p_M_refcount; // rbp
  char v9; // al
  _QWORD *v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  char v13; // dl
  char v14; // cl
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdi
  char v17; // dl
  char v18; // cl
  __int64 node; // rax
  std::forward_iterator_tag v20; // cl
  const char *v21; // rdx
  unsigned __int64 v22; // rdi
  const char *const *v23; // rax
  _QWORD *v24; // rax
  std::string v25[2]; // [rsp+0h] [rbp-58h] BYREF

  v3 = this;
  v4 = rhs;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store1(this);
    goto LABEL_8;
  }
  this->m_isValid = 1;
  this = (YAML::Node *const)((char *)this + 8);
  if ( *(_BYTE *)(((unsigned __int64)&v3->m_invalidKey >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_store8();
    goto LABEL_9;
  }
  v3->m_invalidKey._M_dataplus._M_p = v3->m_invalidKey._anon_0._M_local_buf;
  this = (YAML::Node *const)&v3->m_invalidKey._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v3->m_invalidKey._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_store8();
LABEL_10:
    v6 = __asan_report_store1(this);
    goto LABEL_11;
  }
  v3->m_invalidKey._M_string_length = 0LL;
  this = (YAML::Node *const)&v3->m_invalidKey._anon_0;
  v5 = *(_BYTE *)(((unsigned __int64)&v3->m_invalidKey._anon_0 >> 3) + 0x7FFF8000);
  if ( v5 <= (((unsigned __int8)v3 + 24) & 7) && v5 )
    goto LABEL_10;
  v3->m_invalidKey._anon_0._M_local_buf[0] = 0;
  v6 = operator new(0x10uLL);
LABEL_11:
  v7 = v6;
  p_M_refcount = operator new(0x30uLL);
  v9 = *(_BYTE *)(((p_M_refcount + 8) >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
  {
    __asan_report_store4(p_M_refcount + 8);
    goto LABEL_21;
  }
  *(_DWORD *)(p_M_refcount + 8) = 0;
  if ( *(_BYTE *)(((p_M_refcount + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8();
    goto LABEL_22;
  }
  *(_QWORD *)(p_M_refcount + 16) = 0LL;
  v10 = (_QWORD *)(p_M_refcount + 8);
  if ( *(_BYTE *)(((p_M_refcount + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8();
    goto LABEL_23;
  }
  *(_QWORD *)(p_M_refcount + 24) = v10;
  if ( *(_BYTE *)(((p_M_refcount + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_store8();
    goto LABEL_24;
  }
  *(_QWORD *)(p_M_refcount + 32) = v10;
  if ( *(_BYTE *)(((p_M_refcount + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8();
    goto LABEL_25;
  }
  *(_QWORD *)(p_M_refcount + 40) = 0LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8();
    goto LABEL_26;
  }
  *(_QWORD *)v7 = p_M_refcount;
  v2 = v7 + 8;
  if ( *(_BYTE *)(((v7 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    v11 = __asan_report_store8();
    goto LABEL_27;
  }
  *(_QWORD *)(v7 + 8) = 0LL;
  v11 = operator new(0x18uLL);
LABEL_27:
  v12 = v11 + 8;
  v13 = *(_BYTE *)(((v11 + 8) >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
  {
    __asan_report_store4(v12);
LABEL_38:
    __asan_report_store4(v12);
    goto LABEL_39;
  }
  *(_DWORD *)(v11 + 8) = 1;
  v12 = v11 + 12;
  v14 = *(_BYTE *)(((v11 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v11 + 12) & 7) + 3) >= v14 && v14 )
    goto LABEL_38;
  *(_DWORD *)(v11 + 12) = 1;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_store8();
    goto LABEL_40;
  }
  *(_QWORD *)v11 = &`vtable for'std::_Sp_counted_ptr<YAML::detail::memory *,(__gnu_cxx::_Lock_policy)2> + 2;
  if ( *(_BYTE *)(((v11 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_store8();
    goto LABEL_41;
  }
  *(_QWORD *)(v11 + 16) = p_M_refcount;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_store8();
    goto LABEL_42;
  }
  *(_QWORD *)(v7 + 8) = v11;
  if ( *(_BYTE *)(((unsigned __int64)&v3->m_pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_store8();
    goto LABEL_43;
  }
  v3->m_pMemory._M_ptr = (std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *)v7;
  p_M_refcount = (unsigned __int64)&v3->m_pMemory._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v3->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    v15 = __asan_report_store8();
    goto LABEL_44;
  }
  v3->m_pMemory._M_refcount._M_pi = 0LL;
  v15 = operator new(0x18uLL);
LABEL_44:
  v16 = v15 + 8;
  v17 = *(_BYTE *)(((v15 + 8) >> 3) + 0x7FFF8000);
  if ( v17 && v17 <= 3 )
  {
    __asan_report_store4(v16);
LABEL_55:
    __asan_report_store4(v16);
    goto LABEL_56;
  }
  *(_DWORD *)(v15 + 8) = 1;
  v16 = v15 + 12;
  v18 = *(_BYTE *)(((v15 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v15 + 12) & 7) + 3) >= v18 && v18 )
    goto LABEL_55;
  *(_DWORD *)(v15 + 12) = 1;
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_store8();
    goto LABEL_57;
  }
  *(_QWORD *)v15 = &`vtable for'std::_Sp_counted_ptr<YAML::detail::memory_holder *,(__gnu_cxx::_Lock_policy)2> + 2;
  if ( *(_BYTE *)(((v15 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_store8();
    goto LABEL_58;
  }
  *(_QWORD *)(v15 + 16) = v7;
  if ( *(_BYTE *)((p_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_store8();
    goto LABEL_59;
  }
  v3->m_pMemory._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v15;
  if ( *(_BYTE *)(((unsigned __int64)&v3->m_pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_load8();
    goto LABEL_60;
  }
  if ( !*(_BYTE *)(((unsigned __int64)v3->m_pMemory._M_ptr >> 3) + 0x7FFF8000) )
  {
    node = YAML::detail::memory::create_node(v3->m_pMemory._M_ptr->m_pMemory._M_ptr);
    goto LABEL_61;
  }
LABEL_60:
  __asan_report_load8();
LABEL_61:
  if ( *(_BYTE *)(((unsigned __int64)&v3->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    v3->m_pNode = (YAML::detail::node *)node;
    if ( !*(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
    {
      v7 = (unsigned __int64)*rhs;
      YAML::Node::EnsureNodeExists(v3);
      goto LABEL_66;
    }
  }
  __asan_report_load8();
LABEL_66:
  if ( *(_BYTE *)(((unsigned __int64)&v3->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_71;
  }
  p_M_refcount = (unsigned __int64)v3->m_pNode;
  v25[0]._M_dataplus._M_p = v25[0]._anon_0._M_local_buf;
  if ( !v7 )
  {
LABEL_71:
    v21 = (const char *)(v7 - 1);
    goto LABEL_69;
  }
  v21 = (const char *)(v7 + strlen((const char *)v7));
LABEL_69:
  std::string::_M_construct<char const*>(v25, (const char *)v7, v21, v20);
  if ( *(_BYTE *)((p_M_refcount >> 3) + 0x7FFF8000) )
  {
    v22 = p_M_refcount;
    __asan_report_load8();
    goto LABEL_80;
  }
  v22 = *(_QWORD *)p_M_refcount;
  if ( *(_BYTE *)((*(_QWORD *)p_M_refcount >> 3) + 0x7FFF8000LL) )
  {
LABEL_80:
    __asan_report_load8();
    goto LABEL_81;
  }
  v22 = *(_QWORD *)v22;
  if ( *(char *)((v22 >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_81:
    __asan_report_load1(v22);
    goto LABEL_82;
  }
  if ( *(_BYTE *)v22 )
    goto LABEL_76;
LABEL_82:
  YAML::detail::node_data::mark_defined((YAML::detail::node_data *)v22);
  if ( *(_BYTE *)(((p_M_refcount + 40) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_85;
  }
  v23 = *(const char *const **)(p_M_refcount + 40);
  v4 = (const char *const *)(p_M_refcount + 24);
  while ( 1 )
  {
    v7 = (unsigned __int64)v23;
    if ( v4 == v23 )
      break;
    if ( *(_BYTE *)(((unsigned __int64)(v23 + 4) >> 3) + 0x7FFF8000) )
LABEL_85:
      __asan_report_load8();
    else
      YAML::detail::node::mark_defined(*((YAML::detail::node *const *)v23 + 4));
    v23 = (const char *const *)std::_Rb_tree_increment((const std::_Rb_tree_node_base *)v7);
  }
  if ( *(_BYTE *)(((p_M_refcount + 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_97;
  }
  std::_Rb_tree<YAML::detail::node *,YAML::detail::node *,std::_Identity<YAML::detail::node *>,YAML::detail::node::less,std::allocator<YAML::detail::node *>>::_M_erase(
    (std::_Rb_tree<YAML::detail::node*,YAML::detail::node*,std::_Identity<YAML::detail::node*>,YAML::detail::node::less,std::allocator<YAML::detail::node*> > *const)(p_M_refcount + 16),
    *(std::_Rb_tree<YAML::detail::node*,YAML::detail::node*,std::_Identity<YAML::detail::node*>,YAML::detail::node::less,std::allocator<YAML::detail::node*> >::_Link_type *)(p_M_refcount + 32));
  if ( *(_BYTE *)(((p_M_refcount + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_97:
    __asan_report_store8();
    goto LABEL_98;
  }
  *(_QWORD *)(p_M_refcount + 32) = 0LL;
  v24 = (_QWORD *)(p_M_refcount + 24);
  if ( *(_BYTE *)(((p_M_refcount + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    __asan_report_store8();
    goto LABEL_99;
  }
  *(_QWORD *)(p_M_refcount + 40) = v24;
  if ( *(_BYTE *)(((p_M_refcount + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_99:
    __asan_report_store8();
    goto LABEL_100;
  }
  *(_QWORD *)(p_M_refcount + 48) = v24;
  if ( *(_BYTE *)(((p_M_refcount + 56) >> 3) + 0x7FFF8000) )
  {
LABEL_100:
    __asan_report_store8();
    goto LABEL_101;
  }
  *(_QWORD *)(p_M_refcount + 56) = 0LL;
LABEL_76:
  if ( *(_BYTE *)((p_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_101:
    __asan_report_load8();
    goto LABEL_102;
  }
  if ( !*(_BYTE *)((*(_QWORD *)p_M_refcount >> 3) + 0x7FFF8000LL) )
  {
    YAML::detail::node_data::set_scalar(**(_QWORD **)p_M_refcount, v25);
    goto LABEL_103;
  }
LABEL_102:
  __asan_report_load8();
LABEL_103:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v25[0]._M_dataplus._M_p != &v25[0]._anon_0 )
    operator delete(v25[0]._M_dataplus._M_p);
};

// Line 31: range 000000001531F550-000000001531FC4D
void __fastcall YAML::Node::Node<std::string>(YAML::Node *const this, const std::string *rhs)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // r13
  unsigned __int64 v3; // r15
  YAML::Node *v4; // rbx
  char v5; // al
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 p_M_refcount; // rbp
  char v9; // al
  _QWORD *v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  char v13; // dl
  char v14; // cl
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdi
  char v17; // dl
  char v18; // cl
  __int64 node; // rax
  unsigned __int64 v20; // rdi
  std::_Rb_tree_node_base::_Base_ptr *v21; // rax
  _QWORD *v22; // rax
  _QWORD **v23; // rax
  std::string::pointer M_p; // rdi

  v4 = this;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store1(this);
    goto LABEL_8;
  }
  this->m_isValid = 1;
  this = (YAML::Node *const)((char *)this + 8);
  p_anon_0 = &v4->m_invalidKey._anon_0;
  if ( *(_BYTE *)(((unsigned __int64)&v4->m_invalidKey >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_store8();
    goto LABEL_9;
  }
  v4->m_invalidKey._M_dataplus._M_p = (std::string::pointer)p_anon_0;
  this = (YAML::Node *const)&v4->m_invalidKey._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v4->m_invalidKey._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_store8();
LABEL_10:
    v6 = __asan_report_store1(this);
    goto LABEL_11;
  }
  v4->m_invalidKey._M_string_length = 0LL;
  this = (YAML::Node *const)&v4->m_invalidKey._anon_0;
  v5 = *(_BYTE *)(((unsigned __int64)&v4->m_invalidKey._anon_0 >> 3) + 0x7FFF8000);
  if ( v5 <= (((unsigned __int8)v4 + 24) & 7) && v5 )
    goto LABEL_10;
  v4->m_invalidKey._anon_0._M_local_buf[0] = 0;
  v6 = operator new(0x10uLL);
LABEL_11:
  v7 = v6;
  p_M_refcount = operator new(0x30uLL);
  v9 = *(_BYTE *)(((p_M_refcount + 8) >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
  {
    __asan_report_store4(p_M_refcount + 8);
    goto LABEL_21;
  }
  *(_DWORD *)(p_M_refcount + 8) = 0;
  if ( *(_BYTE *)(((p_M_refcount + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8();
    goto LABEL_22;
  }
  *(_QWORD *)(p_M_refcount + 16) = 0LL;
  v10 = (_QWORD *)(p_M_refcount + 8);
  if ( *(_BYTE *)(((p_M_refcount + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8();
    goto LABEL_23;
  }
  *(_QWORD *)(p_M_refcount + 24) = v10;
  if ( *(_BYTE *)(((p_M_refcount + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_store8();
    goto LABEL_24;
  }
  *(_QWORD *)(p_M_refcount + 32) = v10;
  if ( *(_BYTE *)(((p_M_refcount + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8();
    goto LABEL_25;
  }
  *(_QWORD *)(p_M_refcount + 40) = 0LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8();
    goto LABEL_26;
  }
  *(_QWORD *)v7 = p_M_refcount;
  v3 = v7 + 8;
  if ( *(_BYTE *)(((v7 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    v11 = __asan_report_store8();
    goto LABEL_27;
  }
  *(_QWORD *)(v7 + 8) = 0LL;
  v11 = operator new(0x18uLL);
LABEL_27:
  v12 = v11 + 8;
  v13 = *(_BYTE *)(((v11 + 8) >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
  {
    __asan_report_store4(v12);
LABEL_38:
    __asan_report_store4(v12);
    goto LABEL_39;
  }
  *(_DWORD *)(v11 + 8) = 1;
  v12 = v11 + 12;
  v14 = *(_BYTE *)(((v11 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v11 + 12) & 7) + 3) >= v14 && v14 )
    goto LABEL_38;
  *(_DWORD *)(v11 + 12) = 1;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_store8();
    goto LABEL_40;
  }
  *(_QWORD *)v11 = &`vtable for'std::_Sp_counted_ptr<YAML::detail::memory *,(__gnu_cxx::_Lock_policy)2> + 2;
  if ( *(_BYTE *)(((v11 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_store8();
    goto LABEL_41;
  }
  *(_QWORD *)(v11 + 16) = p_M_refcount;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_store8();
    goto LABEL_42;
  }
  *(_QWORD *)(v7 + 8) = v11;
  if ( *(_BYTE *)(((unsigned __int64)&v4->m_pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_store8();
    goto LABEL_43;
  }
  v4->m_pMemory._M_ptr = (std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *)v7;
  p_M_refcount = (unsigned __int64)&v4->m_pMemory._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v4->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    v15 = __asan_report_store8();
    goto LABEL_44;
  }
  v4->m_pMemory._M_refcount._M_pi = 0LL;
  v15 = operator new(0x18uLL);
LABEL_44:
  v16 = v15 + 8;
  v17 = *(_BYTE *)(((v15 + 8) >> 3) + 0x7FFF8000);
  if ( v17 && v17 <= 3 )
  {
    __asan_report_store4(v16);
LABEL_55:
    __asan_report_store4(v16);
    goto LABEL_56;
  }
  *(_DWORD *)(v15 + 8) = 1;
  v16 = v15 + 12;
  v18 = *(_BYTE *)(((v15 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v15 + 12) & 7) + 3) >= v18 && v18 )
    goto LABEL_55;
  *(_DWORD *)(v15 + 12) = 1;
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_store8();
    goto LABEL_57;
  }
  *(_QWORD *)v15 = &`vtable for'std::_Sp_counted_ptr<YAML::detail::memory_holder *,(__gnu_cxx::_Lock_policy)2> + 2;
  if ( *(_BYTE *)(((v15 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_store8();
    goto LABEL_58;
  }
  *(_QWORD *)(v15 + 16) = v7;
  if ( *(_BYTE *)((p_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_store8();
    goto LABEL_59;
  }
  v4->m_pMemory._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v15;
  if ( *(_BYTE *)(((unsigned __int64)&v4->m_pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_load8();
    goto LABEL_60;
  }
  if ( !*(_BYTE *)(((unsigned __int64)v4->m_pMemory._M_ptr >> 3) + 0x7FFF8000) )
  {
    node = YAML::detail::memory::create_node(v4->m_pMemory._M_ptr->m_pMemory._M_ptr);
    goto LABEL_61;
  }
LABEL_60:
  __asan_report_load8();
LABEL_61:
  if ( !*(_BYTE *)(((unsigned __int64)&v4->m_pNode >> 3) + 0x7FFF8000) )
  {
    v4->m_pNode = (YAML::detail::node *)node;
    YAML::Node::EnsureNodeExists(v4);
    goto LABEL_66;
  }
  while ( 1 )
  {
    __asan_report_store8();
LABEL_66:
    if ( *(_BYTE *)(((unsigned __int64)&v4->m_pNode >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_75:
      v20 = p_M_refcount;
      __asan_report_load8();
LABEL_76:
      __asan_report_load8();
      goto LABEL_77;
    }
    p_M_refcount = (unsigned __int64)v4->m_pNode;
    if ( *(_BYTE *)((p_M_refcount >> 3) + 0x7FFF8000) )
      goto LABEL_75;
    v20 = *(_QWORD *)p_M_refcount;
    if ( *(_BYTE *)((*(_QWORD *)p_M_refcount >> 3) + 0x7FFF8000LL) )
      goto LABEL_76;
    v20 = *(_QWORD *)v20;
    if ( *(char *)((v20 >> 3) + 0x7FFF8000) >= 0 )
    {
      if ( *(_BYTE *)v20 )
        goto LABEL_71;
      goto LABEL_78;
    }
LABEL_77:
    __asan_report_load1(v20);
LABEL_78:
    YAML::detail::node_data::mark_defined((YAML::detail::node_data *)v20);
    if ( !*(_BYTE *)(((p_M_refcount + 40) >> 3) + 0x7FFF8000) )
    {
      v21 = *(std::_Rb_tree_node_base::_Base_ptr **)(p_M_refcount + 40);
      v3 = p_M_refcount + 24;
      goto LABEL_83;
    }
    __asan_report_load8();
LABEL_81:
    __asan_report_load8();
    while ( 1 )
    {
      v21 = (std::_Rb_tree_node_base::_Base_ptr *)std::_Rb_tree_increment((const std::_Rb_tree_node_base *)v7);
LABEL_83:
      v7 = (unsigned __int64)v21;
      if ( (std::_Rb_tree_node_base::_Base_ptr *)v3 == v21 )
        break;
      if ( *(_BYTE *)(((unsigned __int64)(v21 + 4) >> 3) + 0x7FFF8000) )
        goto LABEL_81;
      YAML::detail::node::mark_defined((YAML::detail::node *const)v21[4]);
    }
    if ( *(_BYTE *)(((p_M_refcount + 32) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_93:
      __asan_report_store8();
LABEL_94:
      __asan_report_store8();
LABEL_95:
      __asan_report_store8();
LABEL_96:
      __asan_report_store8();
LABEL_97:
      __asan_report_load8();
      goto LABEL_98;
    }
    std::_Rb_tree<YAML::detail::node *,YAML::detail::node *,std::_Identity<YAML::detail::node *>,YAML::detail::node::less,std::allocator<YAML::detail::node *>>::_M_erase(
      (std::_Rb_tree<YAML::detail::node*,YAML::detail::node*,std::_Identity<YAML::detail::node*>,YAML::detail::node::less,std::allocator<YAML::detail::node*> > *const)(p_M_refcount + 16),
      *(std::_Rb_tree<YAML::detail::node*,YAML::detail::node*,std::_Identity<YAML::detail::node*>,YAML::detail::node::less,std::allocator<YAML::detail::node*> >::_Link_type *)(p_M_refcount + 32));
    if ( *(_BYTE *)(((p_M_refcount + 32) >> 3) + 0x7FFF8000) )
      goto LABEL_93;
    *(_QWORD *)(p_M_refcount + 32) = 0LL;
    v22 = (_QWORD *)(p_M_refcount + 24);
    if ( *(_BYTE *)(((p_M_refcount + 40) >> 3) + 0x7FFF8000) )
      goto LABEL_94;
    *(_QWORD *)(p_M_refcount + 40) = v22;
    if ( *(_BYTE *)(((p_M_refcount + 48) >> 3) + 0x7FFF8000) )
      goto LABEL_95;
    *(_QWORD *)(p_M_refcount + 48) = v22;
    if ( *(_BYTE *)(((p_M_refcount + 56) >> 3) + 0x7FFF8000) )
      goto LABEL_96;
    *(_QWORD *)(p_M_refcount + 56) = 0LL;
LABEL_71:
    if ( *(_BYTE *)((p_M_refcount >> 3) + 0x7FFF8000) )
      goto LABEL_97;
    if ( !*(_BYTE *)((*(_QWORD *)p_M_refcount >> 3) + 0x7FFF8000LL) )
      break;
LABEL_98:
    __asan_report_load8();
    p_M_refcount = (unsigned __int64)v23;
    operator delete((void *)v7, 0x10uLL);
    if ( !*(_BYTE *)(((unsigned __int64)&v4->m_invalidKey >> 3) + 0x7FFF8000) )
    {
      M_p = v4->m_invalidKey._M_dataplus._M_p;
      if ( p_anon_0 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_p )
        operator delete(M_p);
      __asan_handle_no_return(M_p);
      _Unwind_Resume((struct _Unwind_Exception *)p_M_refcount);
    }
    __asan_report_load8();
  }
  YAML::detail::node_data::set_scalar(**(_QWORD **)p_M_refcount, rhs);
};

// Line 58: range 000000001531F128-000000001531F54E
void __fastcall YAML::Node::EnsureNodeExists(const YAML::Node *const this)
{
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // r14
  YAML::InvalidNode *exception; // rdi
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *v4; // r12
  unsigned __int64 node; // rbp
  char v6; // al
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  char v10; // dl
  char v11; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  void *v13; // rax
  unsigned __int64 v14; // rdi
  struct _Unwind_Exception *v15; // rax
  struct _Unwind_Exception *v16; // rbx
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> v17; // [rsp+8h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(this);
LABEL_7:
    exception = (YAML::InvalidNode *)__cxa_allocate_exception(0x40uLL);
    YAML::InvalidNode::InvalidNode(exception, &this->m_invalidKey);
    __asan_handle_no_return(exception);
    _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::InvalidNode, YAML::InvalidNode::~InvalidNode);
  }
  if ( !this->m_isValid )
    goto LABEL_7;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_9;
  }
  if ( !this->m_pNode )
  {
LABEL_9:
    v4 = (std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *)operator new(0x10uLL);
    node = operator new(0x30uLL);
    v6 = *(_BYTE *)(((node + 8) >> 3) + 0x7FFF8000);
    if ( v6 && v6 <= 3 )
    {
      __asan_report_store4(node + 8);
    }
    else
    {
      *(_DWORD *)(node + 8) = 0;
      if ( !*(_BYTE *)(((node + 16) >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)(node + 16) = 0LL;
        v7 = node + 8;
        if ( !*(_BYTE *)(((node + 24) >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)(node + 24) = v7;
          if ( !*(_BYTE *)(((node + 32) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(node + 32) = v7;
            if ( !*(_BYTE *)(((node + 40) >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)(node + 40) = 0LL;
              if ( !*(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
              {
                v4->m_pMemory._M_ptr = (std::__shared_ptr<YAML::detail::memory,(__gnu_cxx::_Lock_policy)2>::element_type *)node;
                p_M_refcount = &v4->m_pMemory._M_refcount;
                if ( !*(_BYTE *)(((unsigned __int64)&v4->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
                {
                  v4->m_pMemory._M_refcount._M_pi = 0LL;
                  v8 = operator new(0x18uLL);
LABEL_25:
                  v9 = v8 + 8;
                  v10 = *(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000);
                  if ( v10 && v10 <= 3 )
                  {
                    __asan_report_store4(v9);
                  }
                  else
                  {
                    *(_DWORD *)(v8 + 8) = 1;
                    v9 = v8 + 12;
                    v11 = *(_BYTE *)(((v8 + 12) >> 3) + 0x7FFF8000);
                    if ( (char)(((v8 + 12) & 7) + 3) < v11 || !v11 )
                    {
                      *(_DWORD *)(v8 + 12) = 1;
                      if ( !*(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
                      {
                        *(_QWORD *)v8 = &`vtable for'std::_Sp_counted_ptr<YAML::detail::memory *,(__gnu_cxx::_Lock_policy)2>
                                      + 2;
                        if ( !*(_BYTE *)(((v8 + 16) >> 3) + 0x7FFF8000) )
                        {
                          *(_QWORD *)(v8 + 16) = node;
                          if ( !*(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000) )
                          {
                            v4->m_pMemory._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v8;
                            std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<YAML::detail::memory_holder *>(
                              &v17,
                              v4);
                            if ( !*(_BYTE *)(((unsigned __int64)&this->m_pMemory >> 3) + 0x7FFF8000) )
                            {
                              this->m_pMemory._M_ptr = v4;
                              if ( !*(_BYTE *)(((unsigned __int64)&this->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
                              {
                                M_pi = this->m_pMemory._M_refcount._M_pi;
                                this->m_pMemory._M_refcount = v17;
                                v17._M_pi = M_pi;
                                if ( M_pi )
                                  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(M_pi);
                                if ( *(_BYTE *)(((unsigned __int64)&this->m_pMemory >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_load8();
                                }
                                else if ( !*(_BYTE *)(((unsigned __int64)this->m_pMemory._M_ptr >> 3) + 0x7FFF8000) )
                                {
                                  node = YAML::detail::memory::create_node(this->m_pMemory._M_ptr->m_pMemory._M_ptr);
                                  if ( !*(_BYTE *)(((unsigned __int64)&this->m_pNode >> 3) + 0x7FFF8000) )
                                  {
                                    this->m_pNode = (YAML::detail::node *)node;
                                    YAML::detail::node::mark_defined((YAML::detail::node *const)node);
                                    if ( !*(_BYTE *)((node >> 3) + 0x7FFF8000) )
                                    {
                                      if ( !*(_BYTE *)((*(_QWORD *)node >> 3) + 0x7FFF8000LL) )
                                      {
                                        YAML::detail::node_data::set_null(**(YAML::detail::node_data ***)node);
                                        return;
                                      }
LABEL_57:
                                      __asan_report_load8();
                                      v16 = v15;
                                      __cxa_free_exception((void *)node);
                                      __asan_handle_no_return(node);
                                      _Unwind_Resume(v16);
                                    }
LABEL_56:
                                    __asan_report_load8();
                                    goto LABEL_57;
                                  }
LABEL_55:
                                  __asan_report_store8();
                                  goto LABEL_56;
                                }
                                __asan_report_load8();
                                goto LABEL_55;
                              }
LABEL_48:
                              __asan_report_load8();
                              v14 = (unsigned __int64)v13;
                              __cxa_begin_catch(v13);
                              if ( node )
                              {
                                if ( *(_BYTE *)(((node + 16) >> 3) + 0x7FFF8000) )
                                  __asan_report_load8();
                                std::_Rb_tree<std::shared_ptr<YAML::detail::node>,std::shared_ptr<YAML::detail::node>,std::_Identity<std::shared_ptr<YAML::detail::node>>,std::less<std::shared_ptr<YAML::detail::node>>,std::allocator<std::shared_ptr<YAML::detail::node>>>::_M_erase(
                                  (std::_Rb_tree<std::shared_ptr<YAML::detail::node>,std::shared_ptr<YAML::detail::node>,std::_Identity<std::shared_ptr<YAML::detail::node> >,std::less<std::shared_ptr<YAML::detail::node> >,std::allocator<std::shared_ptr<YAML::detail::node> > > *const)node,
                                  *(std::_Rb_tree<std::shared_ptr<YAML::detail::node>,std::shared_ptr<YAML::detail::node>,std::_Identity<std::shared_ptr<YAML::detail::node> >,std::less<std::shared_ptr<YAML::detail::node> >,std::allocator<std::shared_ptr<YAML::detail::node> > >::_Link_type *)(node + 16));
                                v14 = node;
                                operator delete((void *)node, 0x30uLL);
                              }
                              __asan_handle_no_return(v14);
                              __cxa_rethrow();
                            }
LABEL_47:
                            __asan_report_load8();
                            goto LABEL_48;
                          }
LABEL_46:
                          __asan_report_store8();
                          goto LABEL_47;
                        }
LABEL_45:
                        __asan_report_store8();
                        goto LABEL_46;
                      }
LABEL_44:
                      __asan_report_store8();
                      goto LABEL_45;
                    }
                  }
                  __asan_report_store4(v9);
                  goto LABEL_44;
                }
LABEL_24:
                v8 = __asan_report_store8();
                goto LABEL_25;
              }
LABEL_23:
              __asan_report_store8();
              goto LABEL_24;
            }
LABEL_22:
            __asan_report_store8();
            goto LABEL_23;
          }
LABEL_21:
          __asan_report_store8();
          goto LABEL_22;
        }
LABEL_20:
        __asan_report_store8();
        goto LABEL_21;
      }
    }
    __asan_report_store8();
    goto LABEL_20;
  }
};

// Line 75: range 000000001531D98E-000000001531DAF9
YAML::Mark __fastcall YAML::Node::Mark(const YAML::Node *const this)
{
  unsigned __int64 p_m_pNode; // rdi
  unsigned __int64 v3; // rax
  YAML::Mark v4; // rax
  YAML::InvalidNode *exception; // rdi
  __int64 v6; // [rsp+18h] [rbp-30h]
  int v7; // [rsp+20h] [rbp-28h]

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(this);
LABEL_12:
    exception = (YAML::InvalidNode *)__cxa_allocate_exception(0x40uLL);
    YAML::InvalidNode::InvalidNode(exception, &this->m_invalidKey);
    __asan_handle_no_return(exception);
    _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::InvalidNode, YAML::InvalidNode::~InvalidNode);
  }
  if ( !this->m_isValid )
    goto LABEL_12;
  p_m_pNode = (unsigned __int64)&this->m_pNode;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_14:
    __asan_report_load8();
    goto LABEL_15;
  }
  p_m_pNode = (unsigned __int64)this->m_pNode;
  if ( !p_m_pNode )
  {
LABEL_17:
    v6 = -1LL;
    v7 = -1;
    goto LABEL_10;
  }
  if ( *(_BYTE *)((p_m_pNode >> 3) + 0x7FFF8000) )
    goto LABEL_14;
  p_m_pNode = *(_QWORD *)p_m_pNode;
  if ( *(_BYTE *)((p_m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8();
LABEL_16:
    __asan_report_load_n(p_m_pNode, 12LL);
    goto LABEL_17;
  }
  v3 = *(_QWORD *)p_m_pNode;
  p_m_pNode = *(_QWORD *)p_m_pNode + 4LL;
  if ( *(_BYTE *)((p_m_pNode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((p_m_pNode >> 3) + 0x7FFF8000) <= (unsigned __int8)(p_m_pNode & 7)
    || *(_BYTE *)(((v3 + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v3 + 15) >> 3) + 0x7FFF8000) <= (unsigned __int8)((v3 + 15) & 7) )
  {
    goto LABEL_16;
  }
  v6 = *(_QWORD *)(v3 + 4);
  v7 = *(_DWORD *)(v3 + 12);
LABEL_10:
  *(_QWORD *)&v4.pos = v6;
  v4.column = v7;
  return v4;
};

// Line 82: range 000000001531D85C-000000001531D988
YAML::NodeType::value __fastcall YAML::Node::Type(const YAML::Node *const this)
{
  unsigned __int64 p_m_pNode; // rdi
  char *v3; // rdx
  char v4; // al
  YAML::InvalidNode *exception; // rdi

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(this);
LABEL_13:
    exception = (YAML::InvalidNode *)__cxa_allocate_exception(0x40uLL);
    YAML::InvalidNode::InvalidNode(exception, &this->m_invalidKey);
    __asan_handle_no_return(exception);
    _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::InvalidNode, YAML::InvalidNode::~InvalidNode);
  }
  if ( !this->m_isValid )
    goto LABEL_13;
  p_m_pNode = (unsigned __int64)&this->m_pNode;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_15:
    __asan_report_load8();
    goto LABEL_16;
  }
  p_m_pNode = (unsigned __int64)this->m_pNode;
  if ( !p_m_pNode )
    return 1;
  if ( *(_BYTE *)((p_m_pNode >> 3) + 0x7FFF8000) )
    goto LABEL_15;
  p_m_pNode = *(_QWORD *)p_m_pNode;
  if ( *(_BYTE *)((p_m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  p_m_pNode = *(_QWORD *)p_m_pNode;
  if ( *(char *)((p_m_pNode >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_17:
    __asan_report_load1(p_m_pNode);
LABEL_18:
    __asan_report_load4(v3);
    return 1;
  }
  if ( *(_BYTE *)p_m_pNode )
  {
    v3 = (char *)(p_m_pNode + 16);
    v4 = *(_BYTE *)(((p_m_pNode + 16) >> 3) + 0x7FFF8000);
    if ( !v4 || v4 > 3 )
      return *(_DWORD *)(p_m_pNode + 16);
    goto LABEL_18;
  }
  return 0;
};

// Line 153: range 000000001531E49A-000000001531E718
int __fastcall YAML::Node::as<int>(const YAML::Node *const this)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // r12
  int result; // eax
  __int64 v5; // rax
  YAML::InvalidNode *exception; // rdi
  YAML::BadConversion *v7; // rbp
  YAML::BadConversion *v8; // rdi
  YAML::BadConversion *v9; // rbp
  YAML::BadConversion *v10; // rdi
  YAML::Mark mark_; // [rsp+4h] [rbp-74h] BYREF
  char v12[104]; // [rsp+10h] [rbp-68h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v2 = v5;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 5 t:130";
  *(_QWORD *)(v2 + 16) = YAML::Node::as<int>;
  v3 = v2 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(this);
LABEL_12:
    exception = (YAML::InvalidNode *)__cxa_allocate_exception(0x40uLL);
    YAML::InvalidNode::InvalidNode(exception, &this->m_invalidKey);
    __asan_handle_no_return(exception);
    _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::InvalidNode, YAML::InvalidNode::~InvalidNode);
  }
  if ( !this->m_isValid )
    goto LABEL_12;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_14:
    v7 = (YAML::BadConversion *)__cxa_allocate_exception(0x40uLL);
    mark_ = YAML::Node::Mark(this);
    v8 = v7;
    YAML::BadConversion::BadConversion(v7, &mark_);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      v8 = v7;
      __asan_report_store8();
    }
    *(_QWORD *)v7 = &`vtable for'YAML::TypedBadConversion<int> + 2;
    __asan_handle_no_return(v8);
    _cxa_throw(
      v7,
      (struct type_info *)&`typeinfo for'YAML::TypedBadConversion<int>,
      (void (__fastcall *)(void *))YAML::TypedBadConversion<int>::~TypedBadConversion);
  }
  if ( !this->m_pNode )
    goto LABEL_14;
  if ( !YAML::convert<int>::decode(this, (int *)(v2 + 32)) )
  {
    v9 = (YAML::BadConversion *)__cxa_allocate_exception(0x40uLL);
    mark_ = YAML::Node::Mark(this);
    v10 = v9;
    YAML::BadConversion::BadConversion(v9, &mark_);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      v10 = v9;
      __asan_report_store8();
    }
    *(_QWORD *)v9 = &`vtable for'YAML::TypedBadConversion<int> + 2;
    __asan_handle_no_return(v10);
    _cxa_throw(
      v9,
      (struct type_info *)&`typeinfo for'YAML::TypedBadConversion<int>,
      (void (__fastcall *)(void *))YAML::TypedBadConversion<int>::~TypedBadConversion);
  }
  result = *(_DWORD *)(v2 + 32);
  if ( v12 == (char *)v2 )
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

// Line 153: range 000000001531E71E-000000001531EC35
std::string *__fastcall YAML::Node::as<std::string>(std::string *retstr, const YAML::Node *const this)
{
  char *v2; // rdx
  std::forward_iterator_tag v3; // cl
  unsigned __int64 p_m_pNode; // rdi
  char v6; // al
  int v7; // eax
  YAML::InvalidNode *exception; // rdi
  YAML::InvalidNode *v9; // rdi
  unsigned __int64 m_pNode; // rdi
  char v11; // al
  int v12; // eax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  YAML::InvalidNode *v16; // rdi
  YAML::BadConversion *v17; // rbp
  YAML::BadConversion *v18; // rdi
  YAML::InvalidNode *v19; // rdi
  struct _Unwind_Exception *v20; // rax
  struct _Unwind_Exception *v21; // rbx
  YAML::Mark mark_; // [rsp+4h] [rbp-24h] BYREF

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(this);
LABEL_15:
    exception = (YAML::InvalidNode *)__cxa_allocate_exception(0x40uLL);
    YAML::InvalidNode::InvalidNode(exception, &this->m_invalidKey);
    __asan_handle_no_return(exception);
    _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::InvalidNode, YAML::InvalidNode::~InvalidNode);
  }
  if ( !this->m_isValid )
    goto LABEL_15;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(this);
LABEL_17:
    v9 = (YAML::InvalidNode *)__cxa_allocate_exception(0x40uLL);
    YAML::InvalidNode::InvalidNode(v9, &this->m_invalidKey);
    __asan_handle_no_return(v9);
    _cxa_throw(v9, (struct type_info *)&`typeinfo for'YAML::InvalidNode, YAML::InvalidNode::~InvalidNode);
  }
  if ( !this->m_isValid )
    goto LABEL_17;
  p_m_pNode = (unsigned __int64)&this->m_pNode;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_19:
    __asan_report_load8();
    goto LABEL_20;
  }
  p_m_pNode = (unsigned __int64)this->m_pNode;
  if ( !p_m_pNode )
  {
LABEL_23:
    v7 = 1;
    goto LABEL_25;
  }
  if ( *(_BYTE *)((p_m_pNode >> 3) + 0x7FFF8000) )
    goto LABEL_19;
  p_m_pNode = *(_QWORD *)p_m_pNode;
  if ( *(_BYTE *)((p_m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8();
    goto LABEL_21;
  }
  p_m_pNode = *(_QWORD *)p_m_pNode;
  if ( *(char *)((p_m_pNode >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_21:
    __asan_report_load1(p_m_pNode);
LABEL_22:
    __asan_report_load4(v2);
    goto LABEL_23;
  }
  if ( *(_BYTE *)p_m_pNode )
  {
    v2 = (char *)(p_m_pNode + 16);
    v6 = *(_BYTE *)(((p_m_pNode + 16) >> 3) + 0x7FFF8000);
    if ( !v6 || v6 > 3 )
    {
      v7 = *(_DWORD *)(p_m_pNode + 16);
      goto LABEL_25;
    }
    goto LABEL_22;
  }
  v7 = 0;
LABEL_25:
  if ( v7 == 1 )
  {
    if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
    {
      retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
      std::string::_M_construct<char const*>(retstr, &byte_1B23C024[-4], byte_1B23C024, v3);
      return retstr;
    }
    __asan_report_store8();
    goto LABEL_53;
  }
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_53:
    __asan_report_load1(this);
LABEL_54:
    v16 = (YAML::InvalidNode *)__cxa_allocate_exception(0x40uLL);
    YAML::InvalidNode::InvalidNode(v16, &this->m_invalidKey);
    __asan_handle_no_return(v16);
    _cxa_throw(v16, (struct type_info *)&`typeinfo for'YAML::InvalidNode, YAML::InvalidNode::~InvalidNode);
  }
  if ( !this->m_isValid )
    goto LABEL_54;
  m_pNode = (unsigned __int64)&this->m_pNode;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_56:
    __asan_report_load8();
    goto LABEL_57;
  }
  m_pNode = (unsigned __int64)this->m_pNode;
  if ( !m_pNode )
  {
LABEL_60:
    v12 = 1;
    goto LABEL_37;
  }
  if ( *(_BYTE *)((m_pNode >> 3) + 0x7FFF8000) )
    goto LABEL_56;
  m_pNode = *(_QWORD *)m_pNode;
  if ( *(_BYTE *)((m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_load8();
    goto LABEL_58;
  }
  m_pNode = *(_QWORD *)m_pNode;
  if ( *(char *)((m_pNode >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_58:
    __asan_report_load1(m_pNode);
LABEL_59:
    __asan_report_load4(v2);
    goto LABEL_60;
  }
  if ( *(_BYTE *)m_pNode )
  {
    v2 = (char *)(m_pNode + 16);
    v11 = *(_BYTE *)(((m_pNode + 16) >> 3) + 0x7FFF8000);
    if ( !v11 || v11 > 3 )
    {
      v12 = *(_DWORD *)(m_pNode + 16);
      goto LABEL_37;
    }
    goto LABEL_59;
  }
  v12 = 0;
LABEL_37:
  if ( v12 != 2 )
  {
    v17 = (YAML::BadConversion *)__cxa_allocate_exception(0x40uLL);
    mark_ = YAML::Node::Mark(this);
    v18 = v17;
    YAML::BadConversion::BadConversion(v17, &mark_);
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      v18 = v17;
      __asan_report_store8();
    }
    *(_QWORD *)v17 = &`vtable for'YAML::TypedBadConversion<std::string> + 2;
    __asan_handle_no_return(v18);
    _cxa_throw(
      v17,
      (struct type_info *)&`typeinfo for'YAML::TypedBadConversion<std::string>,
      (void (__fastcall *)(void *))YAML::TypedBadConversion<std::string>::~TypedBadConversion);
  }
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(this);
LABEL_66:
    v19 = (YAML::InvalidNode *)__cxa_allocate_exception(0x40uLL);
    YAML::InvalidNode::InvalidNode(v19, &this->m_invalidKey);
    __asan_handle_no_return(v19);
    _cxa_throw(v19, (struct type_info *)&`typeinfo for'YAML::InvalidNode, YAML::InvalidNode::~InvalidNode);
  }
  if ( !this->m_isValid )
    goto LABEL_66;
  v13 = (unsigned __int64)&this->m_pNode;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_68;
  }
  v13 = (unsigned __int64)this->m_pNode;
  if ( v13 )
  {
    if ( !*(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
    {
      v13 = *(_QWORD *)v13;
      if ( !*(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      {
        v14 = *(_QWORD *)v13 + 64LL;
        goto LABEL_45;
      }
      goto LABEL_69;
    }
LABEL_68:
    __asan_report_load8();
LABEL_69:
    __asan_report_load8();
  }
  v14 = YAML::detail::node_data::empty_scalar[abi:cxx11](v13, this, v2);
LABEL_45:
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_72;
  }
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
  {
LABEL_72:
    __asan_report_load8();
LABEL_73:
    __asan_report_load8();
    v21 = v20;
    __cxa_free_exception(retstr);
    __asan_handle_no_return(retstr);
    _Unwind_Resume(v21);
  }
  if ( *(_BYTE *)(((v14 + 8) >> 3) + 0x7FFF8000) )
    goto LABEL_73;
  std::string::_M_construct<char *>(
    retstr,
    *(char **)v14,
    (char *)(*(_QWORD *)(v14 + 8) + *(_QWORD *)v14),
    (std::forward_iterator_tag)((unsigned __int64)retstr >> 3));
  return retstr;
};

// Line 319: range 0000000015323F1F-000000001532451F
std::string *__fastcall YAML::key_to_string<char [10]>(std::string *retstr, const char (*key)[10])
{
  std::string *v2; // rbx
  std::string::size_type v4; // r9
  signed __int8 v5; // dl
  std::string v6; // [rsp+0h] [rbp-28h] BYREF

  v2 = retstr;
  streamable_to_string<char [10],true>::impl[abi:cxx11](&v6, key);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6._M_dataplus._M_p != &v6._anon_0 )
    {
      if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
      {
        retstr->_M_dataplus._M_p = v6._M_dataplus._M_p;
        retstr = (std::string *)((char *)retstr + 16);
        if ( !*(_BYTE *)(((unsigned __int64)&v2->_anon_0 >> 3) + 0x7FFF8000) )
        {
          v2->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
          goto LABEL_6;
        }
LABEL_14:
        __asan_report_store8();
        goto LABEL_15;
      }
LABEL_13:
      __asan_report_store8();
      goto LABEL_14;
    }
  }
  v4 = *(&v6._anon_0._M_allocated_capacity + 1);
  v5 = *(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000);
  key = (const char (*)[10])(((_BYTE)retstr + 16) & 7);
  (*key)[0] = v5 <= (signed __int8)key;
  if ( ((v5 != 0) & (unsigned __int8)key) != 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7) )
  {
    key = (const char (*)[10])16;
    __asan_report_store_n(&retstr->_anon_0, 16LL);
    goto LABEL_13;
  }
  retstr->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
  *(&retstr->_anon_0._M_allocated_capacity + 1) = v4;
LABEL_6:
  retstr = (std::string *)&v2->_M_string_length;
  if ( !*(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
  {
    v2->_M_string_length = v6._M_string_length;
    return v2;
  }
LABEL_15:
  __asan_report_store8();
  return streamable_to_string<char [19],true>::impl[abi:cxx11](retstr, (const char (*)[19])key);
};

// Line 319: range 000000001532633D-000000001532667B
std::string *__fastcall YAML::key_to_string<char [13]>(std::string *retstr, const char (*key)[13])
{
  std::string::size_type v3; // r9
  std::string v4; // [rsp+0h] [rbp-28h] BYREF

  streamable_to_string<char [13],true>::impl[abi:cxx11](&v4, key);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v4._M_dataplus._M_p != &v4._anon_0 )
    {
      if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
      {
        retstr->_M_dataplus._M_p = v4._M_dataplus._M_p;
        if ( !*(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000) )
        {
          retstr->_anon_0._M_allocated_capacity = v4._anon_0._M_allocated_capacity;
          goto LABEL_6;
        }
LABEL_14:
        __asan_report_store8();
        goto LABEL_15;
      }
LABEL_13:
      __asan_report_store8();
      goto LABEL_14;
    }
  }
  v3 = *(&v4._anon_0._M_allocated_capacity + 1);
  if ( *(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 16) & 7)
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7) )
  {
    __asan_report_store_n(&retstr->_anon_0, 16LL);
    goto LABEL_13;
  }
  retstr->_anon_0._M_allocated_capacity = v4._anon_0._M_allocated_capacity;
  *(&retstr->_anon_0._M_allocated_capacity + 1) = v3;
LABEL_6:
  if ( *(_BYTE *)(((unsigned __int64)&retstr->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_store8();
    JUMPOUT(0x1532645BLL);
  }
  retstr->_M_string_length = v4._M_string_length;
  return retstr;
};

// Line 319: range 0000000015325733-0000000015325D33
std::string *__fastcall YAML::key_to_string<char [14]>(std::string *retstr, const char (*key)[14])
{
  std::string *v2; // rbx
  std::string::size_type v4; // r9
  signed __int8 v5; // dl
  std::string v6; // [rsp+0h] [rbp-28h] BYREF

  v2 = retstr;
  streamable_to_string<char [14],true>::impl[abi:cxx11](&v6, key);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6._M_dataplus._M_p != &v6._anon_0 )
    {
      if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
      {
        retstr->_M_dataplus._M_p = v6._M_dataplus._M_p;
        retstr = (std::string *)((char *)retstr + 16);
        if ( !*(_BYTE *)(((unsigned __int64)&v2->_anon_0 >> 3) + 0x7FFF8000) )
        {
          v2->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
          goto LABEL_6;
        }
LABEL_14:
        __asan_report_store8();
        goto LABEL_15;
      }
LABEL_13:
      __asan_report_store8();
      goto LABEL_14;
    }
  }
  v4 = *(&v6._anon_0._M_allocated_capacity + 1);
  v5 = *(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000);
  key = (const char (*)[14])(((_BYTE)retstr + 16) & 7);
  (*key)[0] = v5 <= (signed __int8)key;
  if ( ((v5 != 0) & (unsigned __int8)key) != 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7) )
  {
    key = (const char (*)[14])16;
    __asan_report_store_n(&retstr->_anon_0, 16LL);
    goto LABEL_13;
  }
  retstr->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
  *(&retstr->_anon_0._M_allocated_capacity + 1) = v4;
LABEL_6:
  retstr = (std::string *)&v2->_M_string_length;
  if ( !*(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
  {
    v2->_M_string_length = v6._M_string_length;
    return v2;
  }
LABEL_15:
  __asan_report_store8();
  return streamable_to_string<char [24],true>::impl[abi:cxx11](retstr, (const char (*)[24])key);
};

// Line 319: range 0000000015322106-0000000015322706
std::string *__fastcall YAML::key_to_string<char [16]>(std::string *retstr, const char (*key)[16])
{
  std::string *v2; // rbx
  std::string::size_type v4; // r9
  signed __int8 v5; // dl
  std::string v6; // [rsp+0h] [rbp-28h] BYREF

  v2 = retstr;
  streamable_to_string<char [16],true>::impl[abi:cxx11](&v6, key);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6._M_dataplus._M_p != &v6._anon_0 )
    {
      if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
      {
        retstr->_M_dataplus._M_p = v6._M_dataplus._M_p;
        retstr = (std::string *)((char *)retstr + 16);
        if ( !*(_BYTE *)(((unsigned __int64)&v2->_anon_0 >> 3) + 0x7FFF8000) )
        {
          v2->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
          goto LABEL_6;
        }
LABEL_14:
        __asan_report_store8();
        goto LABEL_15;
      }
LABEL_13:
      __asan_report_store8();
      goto LABEL_14;
    }
  }
  v4 = *(&v6._anon_0._M_allocated_capacity + 1);
  v5 = *(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000);
  key = (const char (*)[16])(((_BYTE)retstr + 16) & 7);
  (*key)[0] = v5 <= (signed __int8)key;
  if ( ((v5 != 0) & (unsigned __int8)key) != 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7) )
  {
    key = (const char (*)[16])16;
    __asan_report_store_n(&retstr->_anon_0, 16LL);
    goto LABEL_13;
  }
  retstr->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
  *(&retstr->_anon_0._M_allocated_capacity + 1) = v4;
LABEL_6:
  retstr = (std::string *)&v2->_M_string_length;
  if ( !*(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
  {
    v2->_M_string_length = v6._M_string_length;
    return v2;
  }
LABEL_15:
  __asan_report_store8();
  return streamable_to_string<char [18],true>::impl[abi:cxx11](retstr, (const char (*)[18])key);
};

// Line 319: range 000000001532270B-0000000015322D0B
std::string *__fastcall YAML::key_to_string<char [18]>(std::string *retstr, const char (*key)[18])
{
  std::string *v2; // rbx
  std::string::size_type v4; // r9
  signed __int8 v5; // dl
  std::string v6; // [rsp+0h] [rbp-28h] BYREF

  v2 = retstr;
  streamable_to_string<char [18],true>::impl[abi:cxx11](&v6, key);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6._M_dataplus._M_p != &v6._anon_0 )
    {
      if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
      {
        retstr->_M_dataplus._M_p = v6._M_dataplus._M_p;
        retstr = (std::string *)((char *)retstr + 16);
        if ( !*(_BYTE *)(((unsigned __int64)&v2->_anon_0 >> 3) + 0x7FFF8000) )
        {
          v2->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
          goto LABEL_6;
        }
LABEL_14:
        __asan_report_store8();
        goto LABEL_15;
      }
LABEL_13:
      __asan_report_store8();
      goto LABEL_14;
    }
  }
  v4 = *(&v6._anon_0._M_allocated_capacity + 1);
  v5 = *(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000);
  key = (const char (*)[18])(((_BYTE)retstr + 16) & 7);
  (*key)[0] = v5 <= (signed __int8)key;
  if ( ((v5 != 0) & (unsigned __int8)key) != 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7) )
  {
    key = (const char (*)[18])16;
    __asan_report_store_n(&retstr->_anon_0, 16LL);
    goto LABEL_13;
  }
  retstr->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
  *(&retstr->_anon_0._M_allocated_capacity + 1) = v4;
LABEL_6:
  retstr = (std::string *)&v2->_M_string_length;
  if ( !*(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
  {
    v2->_M_string_length = v6._M_string_length;
    return v2;
  }
LABEL_15:
  __asan_report_store8();
  return streamable_to_string<char [20],true>::impl[abi:cxx11](retstr, (const char (*)[20])key);
};

// Line 319: range 0000000015324524-0000000015324B24
std::string *__fastcall YAML::key_to_string<char [19]>(std::string *retstr, const char (*key)[19])
{
  std::string *v2; // rbx
  std::string::size_type v4; // r9
  signed __int8 v5; // dl
  std::string v6; // [rsp+0h] [rbp-28h] BYREF

  v2 = retstr;
  streamable_to_string<char [19],true>::impl[abi:cxx11](&v6, key);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6._M_dataplus._M_p != &v6._anon_0 )
    {
      if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
      {
        retstr->_M_dataplus._M_p = v6._M_dataplus._M_p;
        retstr = (std::string *)((char *)retstr + 16);
        if ( !*(_BYTE *)(((unsigned __int64)&v2->_anon_0 >> 3) + 0x7FFF8000) )
        {
          v2->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
          goto LABEL_6;
        }
LABEL_14:
        __asan_report_store8();
        goto LABEL_15;
      }
LABEL_13:
      __asan_report_store8();
      goto LABEL_14;
    }
  }
  v4 = *(&v6._anon_0._M_allocated_capacity + 1);
  v5 = *(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000);
  key = (const char (*)[19])(((_BYTE)retstr + 16) & 7);
  (*key)[0] = v5 <= (signed __int8)key;
  if ( ((v5 != 0) & (unsigned __int8)key) != 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7) )
  {
    key = (const char (*)[19])16;
    __asan_report_store_n(&retstr->_anon_0, 16LL);
    goto LABEL_13;
  }
  retstr->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
  *(&retstr->_anon_0._M_allocated_capacity + 1) = v4;
LABEL_6:
  retstr = (std::string *)&v2->_M_string_length;
  if ( !*(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
  {
    v2->_M_string_length = v6._M_string_length;
    return v2;
  }
LABEL_15:
  __asan_report_store8();
  return streamable_to_string<char [5],true>::impl[abi:cxx11](retstr, (const char (*)[5])key);
};

// Line 319: range 0000000015322D10-0000000015323310
std::string *__fastcall YAML::key_to_string<char [20]>(std::string *retstr, const char (*key)[20])
{
  std::string *v2; // rbx
  std::string::size_type v4; // r9
  signed __int8 v5; // dl
  std::string v6; // [rsp+0h] [rbp-28h] BYREF

  v2 = retstr;
  streamable_to_string<char [20],true>::impl[abi:cxx11](&v6, key);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6._M_dataplus._M_p != &v6._anon_0 )
    {
      if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
      {
        retstr->_M_dataplus._M_p = v6._M_dataplus._M_p;
        retstr = (std::string *)((char *)retstr + 16);
        if ( !*(_BYTE *)(((unsigned __int64)&v2->_anon_0 >> 3) + 0x7FFF8000) )
        {
          v2->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
          goto LABEL_6;
        }
LABEL_14:
        __asan_report_store8();
        goto LABEL_15;
      }
LABEL_13:
      __asan_report_store8();
      goto LABEL_14;
    }
  }
  v4 = *(&v6._anon_0._M_allocated_capacity + 1);
  v5 = *(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000);
  key = (const char (*)[20])(((_BYTE)retstr + 16) & 7);
  (*key)[0] = v5 <= (signed __int8)key;
  if ( ((v5 != 0) & (unsigned __int8)key) != 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7) )
  {
    key = (const char (*)[20])16;
    __asan_report_store_n(&retstr->_anon_0, 16LL);
    goto LABEL_13;
  }
  retstr->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
  *(&retstr->_anon_0._M_allocated_capacity + 1) = v4;
LABEL_6:
  retstr = (std::string *)&v2->_M_string_length;
  if ( !*(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
  {
    v2->_M_string_length = v6._M_string_length;
    return v2;
  }
LABEL_15:
  __asan_report_store8();
  return streamable_to_string<char [23],true>::impl[abi:cxx11](retstr, (const char (*)[23])key);
};

// Line 319: range 000000001531C152-000000001531C472
std::string *__fastcall YAML::key_to_string<char [21]>(std::string *retstr, const char (*key)[21])
{
  std::string *v2; // rbx
  std::string::size_type v4; // r9
  signed __int8 v5; // dl
  std::_Rb_tree<long unsigned int,long unsigned int,std::_Identity<long unsigned int>,std::less<long unsigned int>,std::allocator<long unsigned int> >::_Base_ptr v6; // rdx
  const unsigned __int64 *v7; // rcx
  std::_Rb_tree<long unsigned int,long unsigned int,std::_Identity<long unsigned int>,std::less<long unsigned int>,std::allocator<long unsigned int> >::_Alloc_node *v8; // r8
  std::string v9; // [rsp+0h] [rbp-28h] BYREF

  v2 = retstr;
  streamable_to_string<char [21],true>::impl[abi:cxx11](&v9, key);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v9._M_dataplus._M_p != &v9._anon_0 )
    {
      if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
      {
        retstr->_M_dataplus._M_p = v9._M_dataplus._M_p;
        retstr = (std::string *)((char *)retstr + 16);
        if ( !*(_BYTE *)(((unsigned __int64)&v2->_anon_0 >> 3) + 0x7FFF8000) )
        {
          v2->_anon_0._M_allocated_capacity = v9._anon_0._M_allocated_capacity;
          goto LABEL_6;
        }
LABEL_14:
        __asan_report_store8();
        goto LABEL_15;
      }
LABEL_13:
      __asan_report_store8();
      goto LABEL_14;
    }
  }
  v4 = *(&v9._anon_0._M_allocated_capacity + 1);
  v5 = *(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000);
  key = (const char (*)[21])(((_BYTE)retstr + 16) & 7);
  (*key)[0] = v5 <= (signed __int8)key;
  if ( ((v5 != 0) & (unsigned __int8)key) != 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7) )
  {
    key = (const char (*)[21])16;
    __asan_report_store_n(&retstr->_anon_0, 16LL);
    goto LABEL_13;
  }
  retstr->_anon_0._M_allocated_capacity = v9._anon_0._M_allocated_capacity;
  *(&retstr->_anon_0._M_allocated_capacity + 1) = v4;
LABEL_6:
  retstr = (std::string *)&v2->_M_string_length;
  if ( !*(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
  {
    v2->_M_string_length = v9._M_string_length;
    return v2;
  }
LABEL_15:
  __asan_report_store8();
  return (std::string *)std::_Rb_tree<unsigned long,unsigned long,std::_Identity<unsigned long>,std::less<unsigned long>,std::allocator<unsigned long>>::_M_insert_<unsigned long const&,std::_Rb_tree<unsigned long,unsigned long,std::_Identity<unsigned long>,std::less<unsigned long>,std::allocator<unsigned long>>::_Alloc_node>(
                          (std::_Rb_tree<long unsigned int,long unsigned int,std::_Identity<long unsigned int>,std::less<long unsigned int>,std::allocator<long unsigned int> > *const)retstr,
                          (std::_Rb_tree<long unsigned int,long unsigned int,std::_Identity<long unsigned int>,std::less<long unsigned int>,std::allocator<long unsigned int> >::_Base_ptr)key,
                          v6,
                          v7,
                          v8)._M_node;
};

// Line 319: range 0000000015323315-0000000015323915
std::string *__fastcall YAML::key_to_string<char [23]>(std::string *retstr, const char (*key)[23])
{
  std::string *v2; // rbx
  std::string::size_type v4; // r9
  signed __int8 v5; // dl
  std::string v6; // [rsp+0h] [rbp-28h] BYREF

  v2 = retstr;
  streamable_to_string<char [23],true>::impl[abi:cxx11](&v6, key);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6._M_dataplus._M_p != &v6._anon_0 )
    {
      if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
      {
        retstr->_M_dataplus._M_p = v6._M_dataplus._M_p;
        retstr = (std::string *)((char *)retstr + 16);
        if ( !*(_BYTE *)(((unsigned __int64)&v2->_anon_0 >> 3) + 0x7FFF8000) )
        {
          v2->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
          goto LABEL_6;
        }
LABEL_14:
        __asan_report_store8();
        goto LABEL_15;
      }
LABEL_13:
      __asan_report_store8();
      goto LABEL_14;
    }
  }
  v4 = *(&v6._anon_0._M_allocated_capacity + 1);
  v5 = *(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000);
  key = (const char (*)[23])(((_BYTE)retstr + 16) & 7);
  (*key)[0] = v5 <= (signed __int8)key;
  if ( ((v5 != 0) & (unsigned __int8)key) != 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7) )
  {
    key = (const char (*)[23])16;
    __asan_report_store_n(&retstr->_anon_0, 16LL);
    goto LABEL_13;
  }
  retstr->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
  *(&retstr->_anon_0._M_allocated_capacity + 1) = v4;
LABEL_6:
  retstr = (std::string *)&v2->_M_string_length;
  if ( !*(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
  {
    v2->_M_string_length = v6._M_string_length;
    return v2;
  }
LABEL_15:
  __asan_report_store8();
  return streamable_to_string<char [25],true>::impl[abi:cxx11](retstr, (const char (*)[25])key);
};

// Line 319: range 0000000015325D38-0000000015326338
std::string *__fastcall YAML::key_to_string<char [24]>(std::string *retstr, const char (*key)[24])
{
  std::string *v2; // rbx
  std::string::size_type v4; // r9
  signed __int8 v5; // dl
  std::string v6; // [rsp+0h] [rbp-28h] BYREF

  v2 = retstr;
  streamable_to_string<char [24],true>::impl[abi:cxx11](&v6, key);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6._M_dataplus._M_p != &v6._anon_0 )
    {
      if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
      {
        retstr->_M_dataplus._M_p = v6._M_dataplus._M_p;
        retstr = (std::string *)((char *)retstr + 16);
        if ( !*(_BYTE *)(((unsigned __int64)&v2->_anon_0 >> 3) + 0x7FFF8000) )
        {
          v2->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
          goto LABEL_6;
        }
LABEL_14:
        __asan_report_store8();
        goto LABEL_15;
      }
LABEL_13:
      __asan_report_store8();
      goto LABEL_14;
    }
  }
  v4 = *(&v6._anon_0._M_allocated_capacity + 1);
  v5 = *(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000);
  key = (const char (*)[24])(((_BYTE)retstr + 16) & 7);
  (*key)[0] = v5 <= (signed __int8)key;
  if ( ((v5 != 0) & (unsigned __int8)key) != 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7) )
  {
    key = (const char (*)[24])16;
    __asan_report_store_n(&retstr->_anon_0, 16LL);
    goto LABEL_13;
  }
  retstr->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
  *(&retstr->_anon_0._M_allocated_capacity + 1) = v4;
LABEL_6:
  retstr = (std::string *)&v2->_M_string_length;
  if ( !*(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
  {
    v2->_M_string_length = v6._M_string_length;
    return v2;
  }
LABEL_15:
  __asan_report_store8();
  return streamable_to_string<char [13],true>::impl[abi:cxx11](retstr, (const char (*)[13])key);
};

// Line 319: range 000000001532391A-0000000015323F1A
std::string *__fastcall YAML::key_to_string<char [25]>(std::string *retstr, const char (*key)[25])
{
  std::string *v2; // rbx
  std::string::size_type v4; // r9
  signed __int8 v5; // dl
  std::string v6; // [rsp+0h] [rbp-28h] BYREF

  v2 = retstr;
  streamable_to_string<char [25],true>::impl[abi:cxx11](&v6, key);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6._M_dataplus._M_p != &v6._anon_0 )
    {
      if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
      {
        retstr->_M_dataplus._M_p = v6._M_dataplus._M_p;
        retstr = (std::string *)((char *)retstr + 16);
        if ( !*(_BYTE *)(((unsigned __int64)&v2->_anon_0 >> 3) + 0x7FFF8000) )
        {
          v2->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
          goto LABEL_6;
        }
LABEL_14:
        __asan_report_store8();
        goto LABEL_15;
      }
LABEL_13:
      __asan_report_store8();
      goto LABEL_14;
    }
  }
  v4 = *(&v6._anon_0._M_allocated_capacity + 1);
  v5 = *(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000);
  key = (const char (*)[25])(((_BYTE)retstr + 16) & 7);
  (*key)[0] = v5 <= (signed __int8)key;
  if ( ((v5 != 0) & (unsigned __int8)key) != 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7) )
  {
    key = (const char (*)[25])16;
    __asan_report_store_n(&retstr->_anon_0, 16LL);
    goto LABEL_13;
  }
  retstr->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
  *(&retstr->_anon_0._M_allocated_capacity + 1) = v4;
LABEL_6:
  retstr = (std::string *)&v2->_M_string_length;
  if ( !*(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
  {
    v2->_M_string_length = v6._M_string_length;
    return v2;
  }
LABEL_15:
  __asan_report_store8();
  return streamable_to_string<char [10],true>::impl[abi:cxx11](retstr, (const char (*)[10])key);
};

// Line 319: range 0000000015321B01-0000000015322101
std::string *__fastcall YAML::key_to_string<char [35]>(std::string *retstr, const char (*key)[35])
{
  std::string *v2; // rbx
  std::string::size_type v4; // r9
  signed __int8 v5; // dl
  std::string v6; // [rsp+0h] [rbp-28h] BYREF

  v2 = retstr;
  streamable_to_string<char [35],true>::impl[abi:cxx11](&v6, key);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6._M_dataplus._M_p != &v6._anon_0 )
    {
      if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
      {
        retstr->_M_dataplus._M_p = v6._M_dataplus._M_p;
        retstr = (std::string *)((char *)retstr + 16);
        if ( !*(_BYTE *)(((unsigned __int64)&v2->_anon_0 >> 3) + 0x7FFF8000) )
        {
          v2->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
          goto LABEL_6;
        }
LABEL_14:
        __asan_report_store8();
        goto LABEL_15;
      }
LABEL_13:
      __asan_report_store8();
      goto LABEL_14;
    }
  }
  v4 = *(&v6._anon_0._M_allocated_capacity + 1);
  v5 = *(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000);
  key = (const char (*)[35])(((_BYTE)retstr + 16) & 7);
  (*key)[0] = v5 <= (signed __int8)key;
  if ( ((v5 != 0) & (unsigned __int8)key) != 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7) )
  {
    key = (const char (*)[35])16;
    __asan_report_store_n(&retstr->_anon_0, 16LL);
    goto LABEL_13;
  }
  retstr->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
  *(&retstr->_anon_0._M_allocated_capacity + 1) = v4;
LABEL_6:
  retstr = (std::string *)&v2->_M_string_length;
  if ( !*(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
  {
    v2->_M_string_length = v6._M_string_length;
    return v2;
  }
LABEL_15:
  __asan_report_store8();
  return streamable_to_string<char [16],true>::impl[abi:cxx11](retstr, (const char (*)[16])key);
};

// Line 319: range 0000000015324B29-0000000015325129
std::string *__fastcall YAML::key_to_string<char [5]>(std::string *retstr, const char (*key)[5])
{
  std::string *v2; // rbx
  std::string::size_type v4; // r9
  signed __int8 v5; // dl
  std::string v6; // [rsp+0h] [rbp-28h] BYREF

  v2 = retstr;
  streamable_to_string<char [5],true>::impl[abi:cxx11](&v6, key);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6._M_dataplus._M_p != &v6._anon_0 )
    {
      if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
      {
        retstr->_M_dataplus._M_p = v6._M_dataplus._M_p;
        retstr = (std::string *)((char *)retstr + 16);
        if ( !*(_BYTE *)(((unsigned __int64)&v2->_anon_0 >> 3) + 0x7FFF8000) )
        {
          v2->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
          goto LABEL_6;
        }
LABEL_14:
        __asan_report_store8();
        goto LABEL_15;
      }
LABEL_13:
      __asan_report_store8();
      goto LABEL_14;
    }
  }
  v4 = *(&v6._anon_0._M_allocated_capacity + 1);
  v5 = *(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000);
  key = (const char (*)[5])(((_BYTE)retstr + 16) & 7);
  (*key)[0] = v5 <= (signed __int8)key;
  if ( ((v5 != 0) & (unsigned __int8)key) != 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7) )
  {
    key = (const char (*)[5])16;
    __asan_report_store_n(&retstr->_anon_0, 16LL);
    goto LABEL_13;
  }
  retstr->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
  *(&retstr->_anon_0._M_allocated_capacity + 1) = v4;
LABEL_6:
  retstr = (std::string *)&v2->_M_string_length;
  if ( !*(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
  {
    v2->_M_string_length = v6._M_string_length;
    return v2;
  }
LABEL_15:
  __asan_report_store8();
  return streamable_to_string<char [6],true>::impl[abi:cxx11](retstr, (const char (*)[6])key);
};

// Line 319: range 000000001532512E-000000001532572E
std::string *__fastcall YAML::key_to_string<char [6]>(std::string *retstr, const char (*key)[6])
{
  std::string *v2; // rbx
  std::string::size_type v4; // r9
  signed __int8 v5; // dl
  std::string v6; // [rsp+0h] [rbp-28h] BYREF

  v2 = retstr;
  streamable_to_string<char [6],true>::impl[abi:cxx11](&v6, key);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6._M_dataplus._M_p != &v6._anon_0 )
    {
      if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
      {
        retstr->_M_dataplus._M_p = v6._M_dataplus._M_p;
        retstr = (std::string *)((char *)retstr + 16);
        if ( !*(_BYTE *)(((unsigned __int64)&v2->_anon_0 >> 3) + 0x7FFF8000) )
        {
          v2->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
          goto LABEL_6;
        }
LABEL_14:
        __asan_report_store8();
        goto LABEL_15;
      }
LABEL_13:
      __asan_report_store8();
      goto LABEL_14;
    }
  }
  v4 = *(&v6._anon_0._M_allocated_capacity + 1);
  v5 = *(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000);
  key = (const char (*)[6])(((_BYTE)retstr + 16) & 7);
  (*key)[0] = v5 <= (signed __int8)key;
  if ( ((v5 != 0) & (unsigned __int8)key) != 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7) )
  {
    key = (const char (*)[6])16;
    __asan_report_store_n(&retstr->_anon_0, 16LL);
    goto LABEL_13;
  }
  retstr->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
  *(&retstr->_anon_0._M_allocated_capacity + 1) = v4;
LABEL_6:
  retstr = (std::string *)&v2->_M_string_length;
  if ( !*(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
  {
    v2->_M_string_length = v6._M_string_length;
    return v2;
  }
LABEL_15:
  __asan_report_store8();
  return streamable_to_string<char [14],true>::impl[abi:cxx11](retstr, (const char (*)[14])key);
};

// Line 319: range 000000001531B548-000000001531BB48
std::string *__fastcall YAML::key_to_string<char [8]>(std::string *retstr, const char (*key)[8])
{
  std::string *v2; // rbx
  std::string::size_type v4; // r9
  signed __int8 v5; // dl
  std::string v6; // [rsp+0h] [rbp-28h] BYREF

  v2 = retstr;
  streamable_to_string<char [8],true>::impl[abi:cxx11](&v6, key);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6._M_dataplus._M_p != &v6._anon_0 )
    {
      if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
      {
        retstr->_M_dataplus._M_p = v6._M_dataplus._M_p;
        retstr = (std::string *)((char *)retstr + 16);
        if ( !*(_BYTE *)(((unsigned __int64)&v2->_anon_0 >> 3) + 0x7FFF8000) )
        {
          v2->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
          goto LABEL_6;
        }
LABEL_14:
        __asan_report_store8();
        goto LABEL_15;
      }
LABEL_13:
      __asan_report_store8();
      goto LABEL_14;
    }
  }
  v4 = *(&v6._anon_0._M_allocated_capacity + 1);
  v5 = *(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000);
  key = (const char (*)[8])(((_BYTE)retstr + 16) & 7);
  (*key)[0] = v5 <= (signed __int8)key;
  if ( ((v5 != 0) & (unsigned __int8)key) != 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7) )
  {
    key = (const char (*)[8])16;
    __asan_report_store_n(&retstr->_anon_0, 16LL);
    goto LABEL_13;
  }
  retstr->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
  *(&retstr->_anon_0._M_allocated_capacity + 1) = v4;
LABEL_6:
  retstr = (std::string *)&v2->_M_string_length;
  if ( !*(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
  {
    v2->_M_string_length = v6._M_string_length;
    return v2;
  }
LABEL_15:
  __asan_report_store8();
  return streamable_to_string<char [9],true>::impl[abi:cxx11](retstr, (const char (*)[9])key);
};

// Line 319: range 000000001531BB4D-000000001531C14D
std::string *__fastcall YAML::key_to_string<char [9]>(std::string *retstr, const char (*key)[9])
{
  std::string *v2; // rbx
  std::string::size_type v4; // r9
  signed __int8 v5; // dl
  std::string v6; // [rsp+0h] [rbp-28h] BYREF

  v2 = retstr;
  streamable_to_string<char [9],true>::impl[abi:cxx11](&v6, key);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6._M_dataplus._M_p != &v6._anon_0 )
    {
      if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
      {
        retstr->_M_dataplus._M_p = v6._M_dataplus._M_p;
        retstr = (std::string *)((char *)retstr + 16);
        if ( !*(_BYTE *)(((unsigned __int64)&v2->_anon_0 >> 3) + 0x7FFF8000) )
        {
          v2->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
          goto LABEL_6;
        }
LABEL_14:
        __asan_report_store8();
        goto LABEL_15;
      }
LABEL_13:
      __asan_report_store8();
      goto LABEL_14;
    }
  }
  v4 = *(&v6._anon_0._M_allocated_capacity + 1);
  v5 = *(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000);
  key = (const char (*)[9])(((_BYTE)retstr + 16) & 7);
  (*key)[0] = v5 <= (signed __int8)key;
  if ( ((v5 != 0) & (unsigned __int8)key) != 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7) )
  {
    key = (const char (*)[9])16;
    __asan_report_store_n(&retstr->_anon_0, 16LL);
    goto LABEL_13;
  }
  retstr->_anon_0._M_allocated_capacity = v6._anon_0._M_allocated_capacity;
  *(&retstr->_anon_0._M_allocated_capacity + 1) = v4;
LABEL_6:
  retstr = (std::string *)&v2->_M_string_length;
  if ( !*(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
  {
    v2->_M_string_length = v6._M_string_length;
    return v2;
  }
LABEL_15:
  __asan_report_store8();
  return streamable_to_string<char [21],true>::impl[abi:cxx11](retstr, (const char (*)[21])key);
};

// Line 325: range 0000000015333B8A-0000000015334394
// local variable allocation has failed, the output may be wrong!
YAML::Node *__fastcall YAML::Node::operator[]<char [20]>(
        YAML::Node *retstr,
        const YAML::Node *const this,
        const char (*key)[20])
{
  YAML::detail::shared_memory_holder *p_m_pMemory; // r12
  __int64 v4; // r13
  std::random_access_iterator_tag v8; // r8
  YAML::detail::node *m_pNode; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  volatile signed __int32 *p_M_use_count; // rdx
  char v12; // cl
  volatile signed __int32 *M_ptr; // rdi
  __int64 v14; // rax
  volatile signed __int32 *v15; // rdx
  char v16; // cl
  __int64 v17; // rax
  char v18; // dl
  __int64 v19; // rdi
  char v20; // al
  unsigned int v21; // eax
  YAML::detail::node *second; // r13
  volatile signed __int32 *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // rax
  char v25; // dl
  void *p_m_invalidKey; // rdi
  char v27; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v28; // rax
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v29; // rdx
  volatile signed __int32 *v30; // rdi
  char v31; // dl
  char v33; // si
  char v34; // si
  char v35; // cl
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> *p_pred; // rcx OVERLAPPED
  const char (*v37)[20]; // rdx
  __gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > v38; // rax
  YAML::Exception *exception; // rbp
  std::string::pointer M_p; // rdi
  std::forward_iterator_tag v41; // cl
  char v42; // cl
  char v43; // cl
  struct _Unwind_Exception *v44; // rbx
  std::string::pointer v45; // rdi
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v46; // [rsp+0h] [rbp-88h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v47; // [rsp+10h] [rbp-78h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> __pred; // [rsp+20h] [rbp-68h] BYREF
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v49; // [rsp+30h] [rbp-58h] BYREF
  std::string msg_; // [rsp+40h] [rbp-48h] BYREF

  YAML::Node::EnsureNodeExists(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_58;
  }
  m_pNode = this->m_pNode;
  p_m_pMemory = &this->m_pMemory;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_load8();
    goto LABEL_59;
  }
  v46._M_ptr = this->m_pMemory._M_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_load8();
    goto LABEL_60;
  }
  M_pi = this->m_pMemory._M_refcount._M_pi;
  v46._M_refcount._M_pi = M_pi;
  if ( !M_pi )
    goto LABEL_9;
  p_M_use_count = &M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_61;
  v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
  {
    _InterlockedAdd(p_M_use_count, 1u);
    goto LABEL_9;
  }
LABEL_60:
  m_pNode = (YAML::detail::node *)p_M_use_count;
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_61:
  v33 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v33 && v33 )
  {
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_65;
  }
  ++M_pi->_M_use_count;
LABEL_9:
  if ( *(_BYTE *)(((unsigned __int64)m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    __asan_report_load8();
    goto LABEL_66;
  }
  M_ptr = (volatile signed __int32 *)m_pNode->m_pRef._M_ptr;
  v47 = v46;
  v14 = (__int64)v46._M_refcount._M_pi;
  if ( !v46._M_refcount._M_pi )
    goto LABEL_15;
  v15 = &v46._M_refcount._M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_67;
  v16 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v15 & 7) + 3) < v16 || !v16 )
  {
    _InterlockedAdd(v15, 1u);
    goto LABEL_15;
  }
LABEL_66:
  M_ptr = v15;
  v14 = __asan_report_store4(v15);
LABEL_67:
  v34 = *(_BYTE *)(((unsigned __int64)(v14 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v14 + 8) & 7) + 3) >= v34 && v34 )
  {
    M_ptr = (volatile signed __int32 *)(v14 + 8);
    __asan_report_load4(v14 + 8);
    goto LABEL_71;
  }
  ++*(_DWORD *)(v14 + 8);
LABEL_15:
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_load8();
LABEL_72:
    v17 = __asan_report_store4(M_ptr);
    goto LABEL_73;
  }
  v4 = *(_QWORD *)M_ptr;
  __pred = v47;
  v17 = (__int64)v47._M_refcount._M_pi;
  if ( !v47._M_refcount._M_pi )
    goto LABEL_21;
  M_ptr = &v47._M_refcount._M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v18 = *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)M_ptr & 7) + 3) < v18 || !v18 )
    {
      _InterlockedAdd(M_ptr, 1u);
      goto LABEL_21;
    }
    goto LABEL_72;
  }
LABEL_73:
  v19 = v17 + 8;
  v35 = *(_BYTE *)(((unsigned __int64)(v17 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v17 + 8) & 7) + 3) >= v35 && v35 )
  {
    __asan_report_load4(v19);
LABEL_77:
    __asan_report_load4(v19);
LABEL_78:
    if ( v21 == 2 )
    {
      exception = (YAML::Exception *)__cxa_allocate_exception(0x40uLL);
      YAML::ErrorMsg::BAD_SUBSCRIPT_WITH_KEY[abi:cxx11](&msg_, (const char *)key);
      YAML::Exception::Exception(exception, (const YAML::Mark *)(v4 + 4), &msg_);
      if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)exception = &`vtable for'YAML::RepresentationException + 2;
      M_p = msg_._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
        operator delete(msg_._M_dataplus._M_p);
      if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
      {
        M_p = (std::string::pointer)exception;
        __asan_report_store8();
      }
      *(_QWORD *)exception = &`vtable for'YAML::BadSubscript + 2;
      __asan_handle_no_return(M_p);
      _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::BadSubscript, YAML::BadSubscript::~BadSubscript);
    }
    goto LABEL_79;
  }
  ++*(_DWORD *)(v17 + 8);
LABEL_21:
  v19 = v4 + 16;
  v20 = *(_BYTE *)(((unsigned __int64)(v4 + 16) >> 3) + 0x7FFF8000);
  if ( v20 && v20 <= 3 )
    goto LABEL_77;
  v21 = *(_DWORD *)(v4 + 16);
  if ( v21 == 3 )
  {
    std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v49, &__pred);
    if ( v49._M_refcount._M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v49._M_refcount._M_pi);
    second = 0LL;
    goto LABEL_27;
  }
  if ( v21 <= 3 )
  {
    if ( v21 <= 1 )
    {
      second = 0LL;
      goto LABEL_27;
    }
    goto LABEL_78;
  }
LABEL_79:
  p_pred = &__pred;
  if ( *(_BYTE *)(((unsigned __int64)(v4 + 136) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_93;
  }
  if ( *(_BYTE *)(((unsigned __int64)(v4 + 128) >> 3) + 0x7FFF8000) )
  {
LABEL_93:
    __asan_report_load8();
    goto LABEL_94;
  }
  v37 = key;
  v38._M_current = std::__find_if<__gnu_cxx::__normal_iterator<std::pair<YAML::detail::node *,YAML::detail::node *> const*,std::vector<std::pair<YAML::detail::node *,YAML::detail::node *>>>,__gnu_cxx::__ops::_Iter_pred<YAML::detail::node * YAML::detail::node_data::get<char [20]>(char [20] const&,std::shared_ptr<YAML::detail::memory_holder>)::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}>>(
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v4 + 128),
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v4 + 136),
                     *(__gnu_cxx::__ops::_Iter_pred<YAML::detail::node_data::get(const Key&,YAML::detail::shared_memory_holder) const [with Key _ char [20]_ YAML::detail::shared_memory_holder _ std::shared_ptr<YAML::detail::memory_holder>]::<lambda(YAML::detail::node_data::kv_pair)> > *)(&p_pred - 1),
                     v8)._M_current;
LABEL_94:
  if ( *(const std::pair<YAML::detail::node*,YAML::detail::node*> **)(v4 + 136) != v38._M_current )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&v38._M_current->second >> 3) + 0x7FFF8000) )
    {
      second = v38._M_current->second;
      goto LABEL_27;
    }
    __asan_report_load8();
  }
  second = 0LL;
LABEL_27:
  if ( __pred._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(__pred._M_refcount._M_pi);
  if ( v47._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v47._M_refcount._M_pi);
  if ( v46._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v46._M_refcount._M_pi);
  if ( second )
  {
    if ( !*(_BYTE *)(((unsigned __int64)p_m_pMemory >> 3) + 0x7FFF8000) )
    {
      v49._M_ptr = this->m_pMemory._M_ptr;
      p_M_refcount = (volatile signed __int32 *)&p_m_pMemory->_M_refcount;
      if ( !*(_BYTE *)(((unsigned __int64)&p_m_pMemory->_M_refcount >> 3) + 0x7FFF8000) )
      {
        v24 = p_m_pMemory->_M_refcount._M_pi;
        v49._M_refcount._M_pi = v24;
        if ( !v24 )
          goto LABEL_41;
        p_M_refcount = &v24->_M_use_count;
        if ( !&_pthread_key_create )
          goto LABEL_115;
        v25 = *(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_refcount & 7) + 3) < v25 || !v25 )
        {
          _InterlockedAdd(p_M_refcount, 1u);
          goto LABEL_41;
        }
LABEL_114:
        v24 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_refcount);
LABEL_115:
        v42 = *(_BYTE *)(((unsigned __int64)&v24->_M_use_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v24 + 8) & 7) + 3) >= v42 && v42 )
        {
          __asan_report_load4(&v24->_M_use_count);
          goto LABEL_119;
        }
        ++v24->_M_use_count;
LABEL_41:
        if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) >= 0 )
        {
          retstr->m_isValid = 1;
          p_m_invalidKey = &retstr->m_invalidKey;
          if ( !*(_BYTE *)(((unsigned __int64)&retstr->m_invalidKey >> 3) + 0x7FFF8000) )
          {
            retstr->m_invalidKey._M_dataplus._M_p = retstr->m_invalidKey._anon_0._M_local_buf;
            p_m_invalidKey = &retstr->m_invalidKey._M_string_length;
            if ( !*(_BYTE *)(((unsigned __int64)&retstr->m_invalidKey._M_string_length >> 3) + 0x7FFF8000) )
            {
              retstr->m_invalidKey._M_string_length = 0LL;
              p_m_invalidKey = &retstr->m_invalidKey._anon_0;
              v27 = *(_BYTE *)(((unsigned __int64)&retstr->m_invalidKey._anon_0 >> 3) + 0x7FFF8000);
              if ( v27 > (((unsigned __int8)retstr + 24) & 7) || !v27 )
              {
                retstr->m_invalidKey._anon_0._M_local_buf[0] = 0;
                if ( !*(_BYTE *)(((unsigned __int64)&retstr->m_pMemory >> 3) + 0x7FFF8000) )
                {
                  retstr->m_pMemory._M_ptr = v49._M_ptr;
                  v28 = v49._M_refcount._M_pi;
                  v29 = &retstr->m_pMemory._M_refcount;
                  if ( !*(_BYTE *)(((unsigned __int64)&retstr->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
                  {
                    retstr->m_pMemory._M_refcount._M_pi = v49._M_refcount._M_pi;
                    if ( !v28 )
                      goto LABEL_53;
                    v30 = &v28->_M_use_count;
                    if ( !&_pthread_key_create )
                      goto LABEL_126;
                    v31 = *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000);
                    if ( (char)(((unsigned __int8)v30 & 7) + 3) < v31 || !v31 )
                    {
                      _InterlockedAdd(v30, 1u);
                      goto LABEL_53;
                    }
LABEL_125:
                    v28 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v30);
LABEL_126:
                    v43 = *(_BYTE *)(((unsigned __int64)&v28->_M_use_count >> 3) + 0x7FFF8000);
                    if ( (char)((((_BYTE)v28 + 8) & 7) + 3) >= v43 && v43 )
                    {
                      __asan_report_load4(&v28->_M_use_count);
                      goto LABEL_130;
                    }
                    ++v28->_M_use_count;
LABEL_53:
                    if ( !*(_BYTE *)(((unsigned __int64)&retstr->m_pNode >> 3) + 0x7FFF8000) )
                    {
                      retstr->m_pNode = second;
                      if ( v49._M_refcount._M_pi )
                        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v49._M_refcount._M_pi);
                      return retstr;
                    }
LABEL_130:
                    v44 = (struct _Unwind_Exception *)__asan_report_store8();
                    v45 = msg_._M_dataplus._M_p;
                    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
                      operator delete(msg_._M_dataplus._M_p);
                    __asan_handle_no_return(v45);
                    _Unwind_Resume(v44);
                  }
LABEL_124:
                  v30 = (volatile signed __int32 *)v29;
                  __asan_report_store8();
                  goto LABEL_125;
                }
LABEL_123:
                __asan_report_store8();
                goto LABEL_124;
              }
LABEL_122:
              __asan_report_store1(p_m_invalidKey);
              goto LABEL_123;
            }
LABEL_121:
            __asan_report_store8();
            goto LABEL_122;
          }
LABEL_120:
          __asan_report_store8();
          goto LABEL_121;
        }
LABEL_119:
        p_m_invalidKey = retstr;
        __asan_report_store1(retstr);
        goto LABEL_120;
      }
LABEL_113:
      __asan_report_load8();
      goto LABEL_114;
    }
LABEL_112:
    p_M_refcount = (volatile signed __int32 *)p_m_pMemory;
    __asan_report_load8();
    goto LABEL_113;
  }
  YAML::key_to_string<char [20]>(&msg_, key);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store1(retstr);
  }
  else
  {
    retstr->m_isValid = 0;
    if ( !*(_BYTE *)(((unsigned __int64)&retstr->m_invalidKey >> 3) + 0x7FFF8000) )
    {
      retstr->m_invalidKey._M_dataplus._M_p = retstr->m_invalidKey._anon_0._M_local_buf;
      std::string::_M_construct<char *>(
        &retstr->m_invalidKey,
        msg_._M_dataplus._M_p,
        &msg_._M_dataplus._M_p[msg_._M_string_length],
        v41);
      goto LABEL_104;
    }
  }
  __asan_report_store8();
LABEL_104:
  if ( *(_BYTE *)(((unsigned __int64)&retstr->m_pMemory >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_110;
  }
  retstr->m_pMemory._M_ptr = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_110:
    __asan_report_store8();
    goto LABEL_111;
  }
  retstr->m_pMemory._M_refcount._M_pi = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_111:
    __asan_report_store8();
    goto LABEL_112;
  }
  retstr->m_pNode = 0LL;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
    operator delete(msg_._M_dataplus._M_p);
  return retstr;
};

// Line 325: range 000000001532AA78-000000001532B282
// local variable allocation has failed, the output may be wrong!
YAML::Node *__fastcall YAML::Node::operator[]<char [8]>(
        YAML::Node *retstr,
        const YAML::Node *const this,
        const char (*key)[8])
{
  YAML::detail::shared_memory_holder *p_m_pMemory; // r12
  __int64 v4; // r13
  std::random_access_iterator_tag v8; // r8
  YAML::detail::node *m_pNode; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  volatile signed __int32 *p_M_use_count; // rdx
  char v12; // cl
  volatile signed __int32 *M_ptr; // rdi
  __int64 v14; // rax
  volatile signed __int32 *v15; // rdx
  char v16; // cl
  __int64 v17; // rax
  char v18; // dl
  __int64 v19; // rdi
  char v20; // al
  unsigned int v21; // eax
  YAML::detail::node *second; // r13
  volatile signed __int32 *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // rax
  char v25; // dl
  void *p_m_invalidKey; // rdi
  char v27; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v28; // rax
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v29; // rdx
  volatile signed __int32 *v30; // rdi
  char v31; // dl
  char v33; // si
  char v34; // si
  char v35; // cl
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> *p_pred; // rcx OVERLAPPED
  const char (*v37)[8]; // rdx
  __gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > v38; // rax
  YAML::Exception *exception; // rbp
  std::string::pointer M_p; // rdi
  std::forward_iterator_tag v41; // cl
  char v42; // cl
  char v43; // cl
  struct _Unwind_Exception *v44; // rbx
  std::string::pointer v45; // rdi
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v46; // [rsp+0h] [rbp-88h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v47; // [rsp+10h] [rbp-78h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> __pred; // [rsp+20h] [rbp-68h] BYREF
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v49; // [rsp+30h] [rbp-58h] BYREF
  std::string msg_; // [rsp+40h] [rbp-48h] BYREF

  YAML::Node::EnsureNodeExists(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_58;
  }
  m_pNode = this->m_pNode;
  p_m_pMemory = &this->m_pMemory;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_load8();
    goto LABEL_59;
  }
  v46._M_ptr = this->m_pMemory._M_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_load8();
    goto LABEL_60;
  }
  M_pi = this->m_pMemory._M_refcount._M_pi;
  v46._M_refcount._M_pi = M_pi;
  if ( !M_pi )
    goto LABEL_9;
  p_M_use_count = &M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_61;
  v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
  {
    _InterlockedAdd(p_M_use_count, 1u);
    goto LABEL_9;
  }
LABEL_60:
  m_pNode = (YAML::detail::node *)p_M_use_count;
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_61:
  v33 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v33 && v33 )
  {
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_65;
  }
  ++M_pi->_M_use_count;
LABEL_9:
  if ( *(_BYTE *)(((unsigned __int64)m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    __asan_report_load8();
    goto LABEL_66;
  }
  M_ptr = (volatile signed __int32 *)m_pNode->m_pRef._M_ptr;
  v47 = v46;
  v14 = (__int64)v46._M_refcount._M_pi;
  if ( !v46._M_refcount._M_pi )
    goto LABEL_15;
  v15 = &v46._M_refcount._M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_67;
  v16 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v15 & 7) + 3) < v16 || !v16 )
  {
    _InterlockedAdd(v15, 1u);
    goto LABEL_15;
  }
LABEL_66:
  M_ptr = v15;
  v14 = __asan_report_store4(v15);
LABEL_67:
  v34 = *(_BYTE *)(((unsigned __int64)(v14 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v14 + 8) & 7) + 3) >= v34 && v34 )
  {
    M_ptr = (volatile signed __int32 *)(v14 + 8);
    __asan_report_load4(v14 + 8);
    goto LABEL_71;
  }
  ++*(_DWORD *)(v14 + 8);
LABEL_15:
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_load8();
LABEL_72:
    v17 = __asan_report_store4(M_ptr);
    goto LABEL_73;
  }
  v4 = *(_QWORD *)M_ptr;
  __pred = v47;
  v17 = (__int64)v47._M_refcount._M_pi;
  if ( !v47._M_refcount._M_pi )
    goto LABEL_21;
  M_ptr = &v47._M_refcount._M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v18 = *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)M_ptr & 7) + 3) < v18 || !v18 )
    {
      _InterlockedAdd(M_ptr, 1u);
      goto LABEL_21;
    }
    goto LABEL_72;
  }
LABEL_73:
  v19 = v17 + 8;
  v35 = *(_BYTE *)(((unsigned __int64)(v17 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v17 + 8) & 7) + 3) >= v35 && v35 )
  {
    __asan_report_load4(v19);
LABEL_77:
    __asan_report_load4(v19);
LABEL_78:
    if ( v21 == 2 )
    {
      exception = (YAML::Exception *)__cxa_allocate_exception(0x40uLL);
      YAML::ErrorMsg::BAD_SUBSCRIPT_WITH_KEY[abi:cxx11](&msg_, (const char *)key);
      YAML::Exception::Exception(exception, (const YAML::Mark *)(v4 + 4), &msg_);
      if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)exception = &`vtable for'YAML::RepresentationException + 2;
      M_p = msg_._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
        operator delete(msg_._M_dataplus._M_p);
      if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
      {
        M_p = (std::string::pointer)exception;
        __asan_report_store8();
      }
      *(_QWORD *)exception = &`vtable for'YAML::BadSubscript + 2;
      __asan_handle_no_return(M_p);
      _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::BadSubscript, YAML::BadSubscript::~BadSubscript);
    }
    goto LABEL_79;
  }
  ++*(_DWORD *)(v17 + 8);
LABEL_21:
  v19 = v4 + 16;
  v20 = *(_BYTE *)(((unsigned __int64)(v4 + 16) >> 3) + 0x7FFF8000);
  if ( v20 && v20 <= 3 )
    goto LABEL_77;
  v21 = *(_DWORD *)(v4 + 16);
  if ( v21 == 3 )
  {
    std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v49, &__pred);
    if ( v49._M_refcount._M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v49._M_refcount._M_pi);
    second = 0LL;
    goto LABEL_27;
  }
  if ( v21 <= 3 )
  {
    if ( v21 <= 1 )
    {
      second = 0LL;
      goto LABEL_27;
    }
    goto LABEL_78;
  }
LABEL_79:
  p_pred = &__pred;
  if ( *(_BYTE *)(((unsigned __int64)(v4 + 136) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_93;
  }
  if ( *(_BYTE *)(((unsigned __int64)(v4 + 128) >> 3) + 0x7FFF8000) )
  {
LABEL_93:
    __asan_report_load8();
    goto LABEL_94;
  }
  v37 = key;
  v38._M_current = std::__find_if<__gnu_cxx::__normal_iterator<std::pair<YAML::detail::node *,YAML::detail::node *> const*,std::vector<std::pair<YAML::detail::node *,YAML::detail::node *>>>,__gnu_cxx::__ops::_Iter_pred<YAML::detail::node * YAML::detail::node_data::get<char [8]>(char [8] const&,std::shared_ptr<YAML::detail::memory_holder>)::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}>>(
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v4 + 128),
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v4 + 136),
                     *(__gnu_cxx::__ops::_Iter_pred<YAML::detail::node_data::get(const Key&,YAML::detail::shared_memory_holder) const [with Key _ char [8]_ YAML::detail::shared_memory_holder _ std::shared_ptr<YAML::detail::memory_holder>]::<lambda(YAML::detail::node_data::kv_pair)> > *)(&p_pred - 1),
                     v8)._M_current;
LABEL_94:
  if ( *(const std::pair<YAML::detail::node*,YAML::detail::node*> **)(v4 + 136) != v38._M_current )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&v38._M_current->second >> 3) + 0x7FFF8000) )
    {
      second = v38._M_current->second;
      goto LABEL_27;
    }
    __asan_report_load8();
  }
  second = 0LL;
LABEL_27:
  if ( __pred._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(__pred._M_refcount._M_pi);
  if ( v47._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v47._M_refcount._M_pi);
  if ( v46._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v46._M_refcount._M_pi);
  if ( second )
  {
    if ( !*(_BYTE *)(((unsigned __int64)p_m_pMemory >> 3) + 0x7FFF8000) )
    {
      v49._M_ptr = this->m_pMemory._M_ptr;
      p_M_refcount = (volatile signed __int32 *)&p_m_pMemory->_M_refcount;
      if ( !*(_BYTE *)(((unsigned __int64)&p_m_pMemory->_M_refcount >> 3) + 0x7FFF8000) )
      {
        v24 = p_m_pMemory->_M_refcount._M_pi;
        v49._M_refcount._M_pi = v24;
        if ( !v24 )
          goto LABEL_41;
        p_M_refcount = &v24->_M_use_count;
        if ( !&_pthread_key_create )
          goto LABEL_115;
        v25 = *(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_refcount & 7) + 3) < v25 || !v25 )
        {
          _InterlockedAdd(p_M_refcount, 1u);
          goto LABEL_41;
        }
LABEL_114:
        v24 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_refcount);
LABEL_115:
        v42 = *(_BYTE *)(((unsigned __int64)&v24->_M_use_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v24 + 8) & 7) + 3) >= v42 && v42 )
        {
          __asan_report_load4(&v24->_M_use_count);
          goto LABEL_119;
        }
        ++v24->_M_use_count;
LABEL_41:
        if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) >= 0 )
        {
          retstr->m_isValid = 1;
          p_m_invalidKey = &retstr->m_invalidKey;
          if ( !*(_BYTE *)(((unsigned __int64)&retstr->m_invalidKey >> 3) + 0x7FFF8000) )
          {
            retstr->m_invalidKey._M_dataplus._M_p = retstr->m_invalidKey._anon_0._M_local_buf;
            p_m_invalidKey = &retstr->m_invalidKey._M_string_length;
            if ( !*(_BYTE *)(((unsigned __int64)&retstr->m_invalidKey._M_string_length >> 3) + 0x7FFF8000) )
            {
              retstr->m_invalidKey._M_string_length = 0LL;
              p_m_invalidKey = &retstr->m_invalidKey._anon_0;
              v27 = *(_BYTE *)(((unsigned __int64)&retstr->m_invalidKey._anon_0 >> 3) + 0x7FFF8000);
              if ( v27 > (((unsigned __int8)retstr + 24) & 7) || !v27 )
              {
                retstr->m_invalidKey._anon_0._M_local_buf[0] = 0;
                if ( !*(_BYTE *)(((unsigned __int64)&retstr->m_pMemory >> 3) + 0x7FFF8000) )
                {
                  retstr->m_pMemory._M_ptr = v49._M_ptr;
                  v28 = v49._M_refcount._M_pi;
                  v29 = &retstr->m_pMemory._M_refcount;
                  if ( !*(_BYTE *)(((unsigned __int64)&retstr->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
                  {
                    retstr->m_pMemory._M_refcount._M_pi = v49._M_refcount._M_pi;
                    if ( !v28 )
                      goto LABEL_53;
                    v30 = &v28->_M_use_count;
                    if ( !&_pthread_key_create )
                      goto LABEL_126;
                    v31 = *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000);
                    if ( (char)(((unsigned __int8)v30 & 7) + 3) < v31 || !v31 )
                    {
                      _InterlockedAdd(v30, 1u);
                      goto LABEL_53;
                    }
LABEL_125:
                    v28 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v30);
LABEL_126:
                    v43 = *(_BYTE *)(((unsigned __int64)&v28->_M_use_count >> 3) + 0x7FFF8000);
                    if ( (char)((((_BYTE)v28 + 8) & 7) + 3) >= v43 && v43 )
                    {
                      __asan_report_load4(&v28->_M_use_count);
                      goto LABEL_130;
                    }
                    ++v28->_M_use_count;
LABEL_53:
                    if ( !*(_BYTE *)(((unsigned __int64)&retstr->m_pNode >> 3) + 0x7FFF8000) )
                    {
                      retstr->m_pNode = second;
                      if ( v49._M_refcount._M_pi )
                        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v49._M_refcount._M_pi);
                      return retstr;
                    }
LABEL_130:
                    v44 = (struct _Unwind_Exception *)__asan_report_store8();
                    v45 = msg_._M_dataplus._M_p;
                    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
                      operator delete(msg_._M_dataplus._M_p);
                    __asan_handle_no_return(v45);
                    _Unwind_Resume(v44);
                  }
LABEL_124:
                  v30 = (volatile signed __int32 *)v29;
                  __asan_report_store8();
                  goto LABEL_125;
                }
LABEL_123:
                __asan_report_store8();
                goto LABEL_124;
              }
LABEL_122:
              __asan_report_store1(p_m_invalidKey);
              goto LABEL_123;
            }
LABEL_121:
            __asan_report_store8();
            goto LABEL_122;
          }
LABEL_120:
          __asan_report_store8();
          goto LABEL_121;
        }
LABEL_119:
        p_m_invalidKey = retstr;
        __asan_report_store1(retstr);
        goto LABEL_120;
      }
LABEL_113:
      __asan_report_load8();
      goto LABEL_114;
    }
LABEL_112:
    p_M_refcount = (volatile signed __int32 *)p_m_pMemory;
    __asan_report_load8();
    goto LABEL_113;
  }
  YAML::key_to_string<char [8]>(&msg_, key);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store1(retstr);
  }
  else
  {
    retstr->m_isValid = 0;
    if ( !*(_BYTE *)(((unsigned __int64)&retstr->m_invalidKey >> 3) + 0x7FFF8000) )
    {
      retstr->m_invalidKey._M_dataplus._M_p = retstr->m_invalidKey._anon_0._M_local_buf;
      std::string::_M_construct<char *>(
        &retstr->m_invalidKey,
        msg_._M_dataplus._M_p,
        &msg_._M_dataplus._M_p[msg_._M_string_length],
        v41);
      goto LABEL_104;
    }
  }
  __asan_report_store8();
LABEL_104:
  if ( *(_BYTE *)(((unsigned __int64)&retstr->m_pMemory >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_110;
  }
  retstr->m_pMemory._M_ptr = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_110:
    __asan_report_store8();
    goto LABEL_111;
  }
  retstr->m_pMemory._M_refcount._M_pi = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_111:
    __asan_report_store8();
    goto LABEL_112;
  }
  retstr->m_pNode = 0LL;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
    operator delete(msg_._M_dataplus._M_p);
  return retstr;
};

// Line 325: range 000000001532C1FC-000000001532CA06
// local variable allocation has failed, the output may be wrong!
YAML::Node *__fastcall YAML::Node::operator[]<char [9]>(
        YAML::Node *retstr,
        const YAML::Node *const this,
        const char (*key)[9])
{
  YAML::detail::shared_memory_holder *p_m_pMemory; // r12
  __int64 v4; // r13
  std::random_access_iterator_tag v8; // r8
  YAML::detail::node *m_pNode; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  volatile signed __int32 *p_M_use_count; // rdx
  char v12; // cl
  volatile signed __int32 *M_ptr; // rdi
  __int64 v14; // rax
  volatile signed __int32 *v15; // rdx
  char v16; // cl
  __int64 v17; // rax
  char v18; // dl
  __int64 v19; // rdi
  char v20; // al
  unsigned int v21; // eax
  YAML::detail::node *second; // r13
  volatile signed __int32 *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // rax
  char v25; // dl
  void *p_m_invalidKey; // rdi
  char v27; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v28; // rax
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v29; // rdx
  volatile signed __int32 *v30; // rdi
  char v31; // dl
  char v33; // si
  char v34; // si
  char v35; // cl
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> *p_pred; // rcx OVERLAPPED
  const char (*v37)[9]; // rdx
  __gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > v38; // rax
  YAML::Exception *exception; // rbp
  std::string::pointer M_p; // rdi
  std::forward_iterator_tag v41; // cl
  char v42; // cl
  char v43; // cl
  struct _Unwind_Exception *v44; // rbx
  std::string::pointer v45; // rdi
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v46; // [rsp+0h] [rbp-88h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v47; // [rsp+10h] [rbp-78h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> __pred; // [rsp+20h] [rbp-68h] BYREF
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v49; // [rsp+30h] [rbp-58h] BYREF
  std::string msg_; // [rsp+40h] [rbp-48h] BYREF

  YAML::Node::EnsureNodeExists(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_58;
  }
  m_pNode = this->m_pNode;
  p_m_pMemory = &this->m_pMemory;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_load8();
    goto LABEL_59;
  }
  v46._M_ptr = this->m_pMemory._M_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_load8();
    goto LABEL_60;
  }
  M_pi = this->m_pMemory._M_refcount._M_pi;
  v46._M_refcount._M_pi = M_pi;
  if ( !M_pi )
    goto LABEL_9;
  p_M_use_count = &M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_61;
  v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
  {
    _InterlockedAdd(p_M_use_count, 1u);
    goto LABEL_9;
  }
LABEL_60:
  m_pNode = (YAML::detail::node *)p_M_use_count;
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_61:
  v33 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v33 && v33 )
  {
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_65;
  }
  ++M_pi->_M_use_count;
LABEL_9:
  if ( *(_BYTE *)(((unsigned __int64)m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    __asan_report_load8();
    goto LABEL_66;
  }
  M_ptr = (volatile signed __int32 *)m_pNode->m_pRef._M_ptr;
  v47 = v46;
  v14 = (__int64)v46._M_refcount._M_pi;
  if ( !v46._M_refcount._M_pi )
    goto LABEL_15;
  v15 = &v46._M_refcount._M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_67;
  v16 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v15 & 7) + 3) < v16 || !v16 )
  {
    _InterlockedAdd(v15, 1u);
    goto LABEL_15;
  }
LABEL_66:
  M_ptr = v15;
  v14 = __asan_report_store4(v15);
LABEL_67:
  v34 = *(_BYTE *)(((unsigned __int64)(v14 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v14 + 8) & 7) + 3) >= v34 && v34 )
  {
    M_ptr = (volatile signed __int32 *)(v14 + 8);
    __asan_report_load4(v14 + 8);
    goto LABEL_71;
  }
  ++*(_DWORD *)(v14 + 8);
LABEL_15:
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_load8();
LABEL_72:
    v17 = __asan_report_store4(M_ptr);
    goto LABEL_73;
  }
  v4 = *(_QWORD *)M_ptr;
  __pred = v47;
  v17 = (__int64)v47._M_refcount._M_pi;
  if ( !v47._M_refcount._M_pi )
    goto LABEL_21;
  M_ptr = &v47._M_refcount._M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v18 = *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)M_ptr & 7) + 3) < v18 || !v18 )
    {
      _InterlockedAdd(M_ptr, 1u);
      goto LABEL_21;
    }
    goto LABEL_72;
  }
LABEL_73:
  v19 = v17 + 8;
  v35 = *(_BYTE *)(((unsigned __int64)(v17 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v17 + 8) & 7) + 3) >= v35 && v35 )
  {
    __asan_report_load4(v19);
LABEL_77:
    __asan_report_load4(v19);
LABEL_78:
    if ( v21 == 2 )
    {
      exception = (YAML::Exception *)__cxa_allocate_exception(0x40uLL);
      YAML::ErrorMsg::BAD_SUBSCRIPT_WITH_KEY[abi:cxx11](&msg_, (const char *)key);
      YAML::Exception::Exception(exception, (const YAML::Mark *)(v4 + 4), &msg_);
      if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)exception = &`vtable for'YAML::RepresentationException + 2;
      M_p = msg_._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
        operator delete(msg_._M_dataplus._M_p);
      if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
      {
        M_p = (std::string::pointer)exception;
        __asan_report_store8();
      }
      *(_QWORD *)exception = &`vtable for'YAML::BadSubscript + 2;
      __asan_handle_no_return(M_p);
      _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::BadSubscript, YAML::BadSubscript::~BadSubscript);
    }
    goto LABEL_79;
  }
  ++*(_DWORD *)(v17 + 8);
LABEL_21:
  v19 = v4 + 16;
  v20 = *(_BYTE *)(((unsigned __int64)(v4 + 16) >> 3) + 0x7FFF8000);
  if ( v20 && v20 <= 3 )
    goto LABEL_77;
  v21 = *(_DWORD *)(v4 + 16);
  if ( v21 == 3 )
  {
    std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v49, &__pred);
    if ( v49._M_refcount._M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v49._M_refcount._M_pi);
    second = 0LL;
    goto LABEL_27;
  }
  if ( v21 <= 3 )
  {
    if ( v21 <= 1 )
    {
      second = 0LL;
      goto LABEL_27;
    }
    goto LABEL_78;
  }
LABEL_79:
  p_pred = &__pred;
  if ( *(_BYTE *)(((unsigned __int64)(v4 + 136) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_93;
  }
  if ( *(_BYTE *)(((unsigned __int64)(v4 + 128) >> 3) + 0x7FFF8000) )
  {
LABEL_93:
    __asan_report_load8();
    goto LABEL_94;
  }
  v37 = key;
  v38._M_current = std::__find_if<__gnu_cxx::__normal_iterator<std::pair<YAML::detail::node *,YAML::detail::node *> const*,std::vector<std::pair<YAML::detail::node *,YAML::detail::node *>>>,__gnu_cxx::__ops::_Iter_pred<YAML::detail::node * YAML::detail::node_data::get<char [9]>(char [9] const&,std::shared_ptr<YAML::detail::memory_holder>)::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}>>(
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v4 + 128),
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v4 + 136),
                     *(__gnu_cxx::__ops::_Iter_pred<YAML::detail::node_data::get(const Key&,YAML::detail::shared_memory_holder) const [with Key _ char [9]_ YAML::detail::shared_memory_holder _ std::shared_ptr<YAML::detail::memory_holder>]::<lambda(YAML::detail::node_data::kv_pair)> > *)(&p_pred - 1),
                     v8)._M_current;
LABEL_94:
  if ( *(const std::pair<YAML::detail::node*,YAML::detail::node*> **)(v4 + 136) != v38._M_current )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&v38._M_current->second >> 3) + 0x7FFF8000) )
    {
      second = v38._M_current->second;
      goto LABEL_27;
    }
    __asan_report_load8();
  }
  second = 0LL;
LABEL_27:
  if ( __pred._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(__pred._M_refcount._M_pi);
  if ( v47._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v47._M_refcount._M_pi);
  if ( v46._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v46._M_refcount._M_pi);
  if ( second )
  {
    if ( !*(_BYTE *)(((unsigned __int64)p_m_pMemory >> 3) + 0x7FFF8000) )
    {
      v49._M_ptr = this->m_pMemory._M_ptr;
      p_M_refcount = (volatile signed __int32 *)&p_m_pMemory->_M_refcount;
      if ( !*(_BYTE *)(((unsigned __int64)&p_m_pMemory->_M_refcount >> 3) + 0x7FFF8000) )
      {
        v24 = p_m_pMemory->_M_refcount._M_pi;
        v49._M_refcount._M_pi = v24;
        if ( !v24 )
          goto LABEL_41;
        p_M_refcount = &v24->_M_use_count;
        if ( !&_pthread_key_create )
          goto LABEL_115;
        v25 = *(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_refcount & 7) + 3) < v25 || !v25 )
        {
          _InterlockedAdd(p_M_refcount, 1u);
          goto LABEL_41;
        }
LABEL_114:
        v24 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_refcount);
LABEL_115:
        v42 = *(_BYTE *)(((unsigned __int64)&v24->_M_use_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v24 + 8) & 7) + 3) >= v42 && v42 )
        {
          __asan_report_load4(&v24->_M_use_count);
          goto LABEL_119;
        }
        ++v24->_M_use_count;
LABEL_41:
        if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) >= 0 )
        {
          retstr->m_isValid = 1;
          p_m_invalidKey = &retstr->m_invalidKey;
          if ( !*(_BYTE *)(((unsigned __int64)&retstr->m_invalidKey >> 3) + 0x7FFF8000) )
          {
            retstr->m_invalidKey._M_dataplus._M_p = retstr->m_invalidKey._anon_0._M_local_buf;
            p_m_invalidKey = &retstr->m_invalidKey._M_string_length;
            if ( !*(_BYTE *)(((unsigned __int64)&retstr->m_invalidKey._M_string_length >> 3) + 0x7FFF8000) )
            {
              retstr->m_invalidKey._M_string_length = 0LL;
              p_m_invalidKey = &retstr->m_invalidKey._anon_0;
              v27 = *(_BYTE *)(((unsigned __int64)&retstr->m_invalidKey._anon_0 >> 3) + 0x7FFF8000);
              if ( v27 > (((unsigned __int8)retstr + 24) & 7) || !v27 )
              {
                retstr->m_invalidKey._anon_0._M_local_buf[0] = 0;
                if ( !*(_BYTE *)(((unsigned __int64)&retstr->m_pMemory >> 3) + 0x7FFF8000) )
                {
                  retstr->m_pMemory._M_ptr = v49._M_ptr;
                  v28 = v49._M_refcount._M_pi;
                  v29 = &retstr->m_pMemory._M_refcount;
                  if ( !*(_BYTE *)(((unsigned __int64)&retstr->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
                  {
                    retstr->m_pMemory._M_refcount._M_pi = v49._M_refcount._M_pi;
                    if ( !v28 )
                      goto LABEL_53;
                    v30 = &v28->_M_use_count;
                    if ( !&_pthread_key_create )
                      goto LABEL_126;
                    v31 = *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000);
                    if ( (char)(((unsigned __int8)v30 & 7) + 3) < v31 || !v31 )
                    {
                      _InterlockedAdd(v30, 1u);
                      goto LABEL_53;
                    }
LABEL_125:
                    v28 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v30);
LABEL_126:
                    v43 = *(_BYTE *)(((unsigned __int64)&v28->_M_use_count >> 3) + 0x7FFF8000);
                    if ( (char)((((_BYTE)v28 + 8) & 7) + 3) >= v43 && v43 )
                    {
                      __asan_report_load4(&v28->_M_use_count);
                      goto LABEL_130;
                    }
                    ++v28->_M_use_count;
LABEL_53:
                    if ( !*(_BYTE *)(((unsigned __int64)&retstr->m_pNode >> 3) + 0x7FFF8000) )
                    {
                      retstr->m_pNode = second;
                      if ( v49._M_refcount._M_pi )
                        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v49._M_refcount._M_pi);
                      return retstr;
                    }
LABEL_130:
                    v44 = (struct _Unwind_Exception *)__asan_report_store8();
                    v45 = msg_._M_dataplus._M_p;
                    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
                      operator delete(msg_._M_dataplus._M_p);
                    __asan_handle_no_return(v45);
                    _Unwind_Resume(v44);
                  }
LABEL_124:
                  v30 = (volatile signed __int32 *)v29;
                  __asan_report_store8();
                  goto LABEL_125;
                }
LABEL_123:
                __asan_report_store8();
                goto LABEL_124;
              }
LABEL_122:
              __asan_report_store1(p_m_invalidKey);
              goto LABEL_123;
            }
LABEL_121:
            __asan_report_store8();
            goto LABEL_122;
          }
LABEL_120:
          __asan_report_store8();
          goto LABEL_121;
        }
LABEL_119:
        p_m_invalidKey = retstr;
        __asan_report_store1(retstr);
        goto LABEL_120;
      }
LABEL_113:
      __asan_report_load8();
      goto LABEL_114;
    }
LABEL_112:
    p_M_refcount = (volatile signed __int32 *)p_m_pMemory;
    __asan_report_load8();
    goto LABEL_113;
  }
  YAML::key_to_string<char [9]>(&msg_, key);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store1(retstr);
  }
  else
  {
    retstr->m_isValid = 0;
    if ( !*(_BYTE *)(((unsigned __int64)&retstr->m_invalidKey >> 3) + 0x7FFF8000) )
    {
      retstr->m_invalidKey._M_dataplus._M_p = retstr->m_invalidKey._anon_0._M_local_buf;
      std::string::_M_construct<char *>(
        &retstr->m_invalidKey,
        msg_._M_dataplus._M_p,
        &msg_._M_dataplus._M_p[msg_._M_string_length],
        v41);
      goto LABEL_104;
    }
  }
  __asan_report_store8();
LABEL_104:
  if ( *(_BYTE *)(((unsigned __int64)&retstr->m_pMemory >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_110;
  }
  retstr->m_pMemory._M_ptr = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_110:
    __asan_report_store8();
    goto LABEL_111;
  }
  retstr->m_pMemory._M_refcount._M_pi = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_111:
    __asan_report_store8();
    goto LABEL_112;
  }
  retstr->m_pNode = 0LL;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
    operator delete(msg_._M_dataplus._M_p);
  return retstr;
};

// Line 376: range 00000000153203D0-0000000015321618
void __fastcall YAML::Node::force_insert<char [9],bool>(
        YAML::Node *const this,
        const char (*key)[9],
        const bool *value)
{
  YAML::Node *v3; // r14
  unsigned __int64 v6; // r12
  _DWORD *v7; // r13
  YAML::detail::node *m_pNode; // rdx
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  volatile signed __int32 *p_M_use_count; // rdi
  char v12; // cl
  volatile signed __int32 *v13; // rdi
  __int64 v14; // rax
  volatile signed __int32 *v15; // rdx
  char v16; // cl
  __int64 v17; // rax
  char v18; // dl
  std::string::size_type *p_M_string_length; // rdi
  char v20; // al
  unsigned int M_string_length; // eax
  __int64 v22; // rax
  char v23; // si
  char v24; // si
  char v25; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v26; // rax
  _Atomic_word *v27; // rdi
  char v28; // dl
  YAML::BadInsert *exception; // rdi
  char v30; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v31; // rdi
  char *v32; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v33; // rax
  _Atomic_word *v34; // rdi
  char v35; // dl
  char v36; // al
  __int64 v37; // rax
  char v38; // cl
  unsigned __int64 v39; // r15
  __int64 v40; // rbp
  char v41; // al
  __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdi
  char v45; // dl
  char v46; // cl
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rdi
  char v49; // dl
  char v50; // cl
  __int64 v51; // rax
  unsigned __int64 v52; // rbp
  std::forward_iterator_tag v53; // cl
  unsigned __int64 v54; // rdi
  std::_Rb_tree_node_base::_Base_ptr *v55; // rax
  _QWORD *v56; // rax
  std::string::pointer M_p; // rdi
  std::_Rb_tree_node_base *v58; // r15
  __int64 v59; // rbp
  char v60; // al
  __int64 v61; // rax
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rdi
  char v64; // dl
  char v65; // cl
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rdi
  char v68; // dl
  char v69; // cl
  __int64 node; // rax
  unsigned __int64 v71; // rbp
  std::forward_iterator_tag v72; // cl
  unsigned __int64 v73; // rdi
  std::_Rb_tree_node_base *v74; // rax
  _QWORD *v75; // rax
  YAML::detail::node *v76; // rbp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v77; // rdi
  char *v78; // rdi
  YAML::detail::node *v79; // [rsp+8h] [rbp-150h]
  std::_Rb_tree_node_base::_Base_ptr *p_M_parent; // [rsp+18h] [rbp-140h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // [rsp+20h] [rbp-138h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v82; // [rsp+28h] [rbp-130h]
  YAML::detail::memory_holder *v83; // [rsp+30h] [rbp-128h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v84; // [rsp+38h] [rbp-120h]
  YAML::detail::memory_holder *v85; // [rsp+40h] [rbp-118h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v86; // [rsp+48h] [rbp-110h]
  YAML::detail::memory_holder *v87; // [rsp+50h] [rbp-108h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v88; // [rsp+58h] [rbp-100h]
  std::string v89; // [rsp+60h] [rbp-F8h] BYREF
  char v90[216]; // [rsp+80h] [rbp-D8h] BYREF

  v3 = this;
  v6 = (unsigned __int64)v90;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v22 = __asan_stack_malloc_2(160LL);
    if ( v22 )
      v6 = v22;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 3 rhs 64 64 5 value";
  *(_QWORD *)(v6 + 16) = YAML::Node::force_insert<char [9],bool>;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862724] = -202116109;
  YAML::Node::EnsureNodeExists(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_31;
  }
  m_pNode = this->m_pNode;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_load8();
    goto LABEL_32;
  }
  M_ptr = this->m_pMemory._M_ptr;
  p_M_refcount = &this->m_pMemory._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    p_M_use_count = (volatile signed __int32 *)p_M_refcount;
    __asan_report_load8();
    goto LABEL_33;
  }
  M_pi = this->m_pMemory._M_refcount._M_pi;
  v82 = M_pi;
  if ( !M_pi )
    goto LABEL_10;
  p_M_use_count = &M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_34;
  v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
  {
    _InterlockedAdd(p_M_use_count, 1u);
    goto LABEL_10;
  }
LABEL_33:
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_34:
  v23 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v23 && v23 )
  {
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_38;
  }
  ++M_pi->_M_use_count;
LABEL_10:
  if ( *(_BYTE *)(((unsigned __int64)m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_load8();
    goto LABEL_39;
  }
  v13 = (volatile signed __int32 *)m_pNode->m_pRef._M_ptr;
  v83 = M_ptr;
  v14 = (__int64)v82;
  v84 = v82;
  if ( !v82 )
    goto LABEL_16;
  v15 = &v82->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_40;
  v16 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v15 & 7) + 3) < v16 || !v16 )
  {
    _InterlockedAdd(v15, 1u);
    goto LABEL_16;
  }
LABEL_39:
  v13 = v15;
  v14 = __asan_report_store4(v15);
LABEL_40:
  v24 = *(_BYTE *)(((unsigned __int64)(v14 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v14 + 8) & 7) + 3) >= v24 && v24 )
  {
    v13 = (volatile signed __int32 *)(v14 + 8);
    __asan_report_load4(v14 + 8);
    goto LABEL_44;
  }
  ++*(_DWORD *)(v14 + 8);
LABEL_16:
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_load8();
LABEL_45:
    v17 = __asan_report_store4(v13);
    goto LABEL_46;
  }
  v3 = *(YAML::Node **)v13;
  v85 = v83;
  v17 = (__int64)v84;
  v86 = v84;
  if ( !v84 )
    goto LABEL_22;
  v13 = &v84->_M_use_count;
  if ( &_pthread_key_create )
  {
    v18 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v13 & 7) + 3) < v18 || !v18 )
    {
      _InterlockedAdd(v13, 1u);
      goto LABEL_22;
    }
    goto LABEL_45;
  }
LABEL_46:
  p_M_string_length = (std::string::size_type *)(v17 + 8);
  v25 = *(_BYTE *)(((unsigned __int64)(v17 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v17 + 8) & 7) + 3) >= v25 && v25 )
  {
    __asan_report_load4(p_M_string_length);
LABEL_50:
    __asan_report_load4(p_M_string_length);
    goto LABEL_51;
  }
  ++*(_DWORD *)(v17 + 8);
LABEL_22:
  p_M_string_length = &v3->m_invalidKey._M_string_length;
  v20 = *(_BYTE *)(((unsigned __int64)&v3->m_invalidKey._M_string_length >> 3) + 0x7FFF8000);
  if ( v20 && v20 <= 3 )
    goto LABEL_50;
  M_string_length = v3->m_invalidKey._M_string_length;
  if ( M_string_length == 3 )
    goto LABEL_27;
  if ( M_string_length > 3 )
    goto LABEL_52;
  if ( M_string_length <= 1 )
  {
LABEL_27:
    YAML::detail::node_data::convert_to_map(v3, &v85);
    goto LABEL_52;
  }
LABEL_51:
  if ( M_string_length == 2 )
  {
    exception = (YAML::BadInsert *)__cxa_allocate_exception(0x40uLL);
    YAML::BadInsert::BadInsert(exception);
    __asan_handle_no_return(exception);
    _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::BadInsert, YAML::BadInsert::~BadInsert);
  }
LABEL_52:
  v87 = v85;
  v26 = v86;
  v88 = v86;
  if ( !v86 )
  {
LABEL_57:
    *(_QWORD *)(v6 + 32) = key;
    YAML::Node::Node<char const*>((YAML::Node *const)(v6 + 64), (const char *const *)(v6 + 32));
    goto LABEL_64;
  }
  v27 = &v86->_M_use_count;
  if ( &_pthread_key_create )
  {
    v28 = *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v27 & 7) + 3) < v28 || !v28 )
    {
      _InterlockedAdd(v27, 1u);
      goto LABEL_57;
    }
    v26 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v27);
  }
  v30 = *(_BYTE *)(((unsigned __int64)&v26->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v26 + 8) & 7) + 3) < v30 || !v30 )
  {
    ++v26->_M_use_count;
    goto LABEL_57;
  }
  __asan_report_load4(&v26->_M_use_count);
LABEL_64:
  YAML::Node::EnsureNodeExists((const YAML::Node *const)(v6 + 64));
  YAML::detail::memory_holder::merge(v87, *(YAML::detail::memory_holder **)(v6 + 104));
  v79 = *(YAML::detail::node **)(v6 + 120);
  v31 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 112);
  if ( v31 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v31);
  v32 = *(char **)(v6 + 72);
  if ( v32 != (char *)(v6 + 88) )
    operator delete(v32);
  if ( v88 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v88);
  v87 = v85;
  v33 = v86;
  v88 = v86;
  if ( v86 )
  {
    v34 = &v86->_M_use_count;
    if ( &_pthread_key_create )
    {
      v35 = *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v34 & 7) + 3) < v35 || !v35 )
      {
        _InterlockedAdd(v34, 1u);
        goto LABEL_75;
      }
      v33 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v34);
    }
    v38 = *(_BYTE *)(((unsigned __int64)&v33->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v33 + 8) & 7) + 3) >= v38 && v38 )
    {
      __asan_report_load4(&v33->_M_use_count);
LABEL_84:
      v37 = __asan_report_load1(value);
      goto LABEL_85;
    }
    ++v33->_M_use_count;
  }
LABEL_75:
  v36 = *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000);
  if ( v36 <= ((unsigned __int8)value & 7) && v36 )
    goto LABEL_84;
  if ( !*value )
  {
    *(_BYTE *)(v6 + 64) = 1;
    *(_QWORD *)(v6 + 72) = v6 + 88;
    *(_QWORD *)(v6 + 80) = 0LL;
    *(_BYTE *)(v6 + 88) = 0;
    v58 = (std::_Rb_tree_node_base *)operator new(0x10uLL);
    v59 = operator new(0x30uLL);
    v60 = *(_BYTE *)(((unsigned __int64)(v59 + 8) >> 3) + 0x7FFF8000);
    if ( v60 && v60 <= 3 )
    {
      __asan_report_store4(v59 + 8);
    }
    else
    {
      *(_DWORD *)(v59 + 8) = 0;
      if ( !*(_BYTE *)(((unsigned __int64)(v59 + 16) >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)(v59 + 16) = 0LL;
        v61 = v59 + 8;
        if ( !*(_BYTE *)(((unsigned __int64)(v59 + 24) >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)(v59 + 24) = v61;
          if ( !*(_BYTE *)(((unsigned __int64)(v59 + 32) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(v59 + 32) = v61;
            if ( !*(_BYTE *)(((unsigned __int64)(v59 + 40) >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)(v59 + 40) = 0LL;
              if ( !*(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)&v58->_M_color = v59;
                p_M_parent = &v58->_M_parent;
                if ( !*(_BYTE *)(((unsigned __int64)&v58->_M_parent >> 3) + 0x7FFF8000) )
                {
                  v58->_M_parent = 0LL;
                  v62 = operator new(0x18uLL);
LABEL_177:
                  v63 = v62 + 8;
                  v64 = *(_BYTE *)(((v62 + 8) >> 3) + 0x7FFF8000);
                  if ( v64 && v64 <= 3 )
                  {
                    __asan_report_store4(v63);
                  }
                  else
                  {
                    *(_DWORD *)(v62 + 8) = 1;
                    v63 = v62 + 12;
                    v65 = *(_BYTE *)(((v62 + 12) >> 3) + 0x7FFF8000);
                    if ( (char)(((v62 + 12) & 7) + 3) < v65 || !v65 )
                    {
                      *(_DWORD *)(v62 + 12) = 1;
                      if ( !*(_BYTE *)((v62 >> 3) + 0x7FFF8000) )
                      {
                        *(_QWORD *)v62 = &`vtable for'std::_Sp_counted_ptr<YAML::detail::memory *,(__gnu_cxx::_Lock_policy)2>
                                       + 2;
                        if ( !*(_BYTE *)(((v62 + 16) >> 3) + 0x7FFF8000) )
                        {
                          *(_QWORD *)(v62 + 16) = v59;
                          if ( !*(_BYTE *)(((unsigned __int64)p_M_parent >> 3) + 0x7FFF8000) )
                          {
                            v58->_M_parent = (std::_Rb_tree_node_base::_Base_ptr)v62;
                            *(_QWORD *)(v6 + 104) = v58;
                            *(_QWORD *)(v6 + 112) = 0LL;
                            v66 = operator new(0x18uLL);
LABEL_190:
                            v67 = v66 + 8;
                            v68 = *(_BYTE *)(((v66 + 8) >> 3) + 0x7FFF8000);
                            if ( v68 && v68 <= 3 )
                            {
                              __asan_report_store4(v67);
                            }
                            else
                            {
                              *(_DWORD *)(v66 + 8) = 1;
                              v67 = v66 + 12;
                              v69 = *(_BYTE *)(((v66 + 12) >> 3) + 0x7FFF8000);
                              if ( (char)(((v66 + 12) & 7) + 3) < v69 || !v69 )
                              {
                                *(_DWORD *)(v66 + 12) = 1;
                                if ( !*(_BYTE *)((v66 >> 3) + 0x7FFF8000) )
                                {
                                  *(_QWORD *)v66 = &`vtable for'std::_Sp_counted_ptr<YAML::detail::memory_holder *,(__gnu_cxx::_Lock_policy)2>
                                                 + 2;
                                  if ( !*(_BYTE *)(((v66 + 16) >> 3) + 0x7FFF8000) )
                                  {
                                    *(_QWORD *)(v66 + 16) = v58;
                                    *(_QWORD *)(v6 + 112) = v66;
                                    if ( !*(_BYTE *)((*(_QWORD *)(v6 + 104) >> 3) + 0x7FFF8000LL) )
                                    {
                                      node = YAML::detail::memory::create_node(**(YAML::detail::memory ***)(v6 + 104));
                                      goto LABEL_203;
                                    }
LABEL_202:
                                    __asan_report_load8();
LABEL_203:
                                    *(_QWORD *)(v6 + 120) = node;
                                    YAML::Node::EnsureNodeExists((const YAML::Node *const)(v6 + 64));
                                    v71 = *(_QWORD *)(v6 + 120);
                                    v89._M_dataplus._M_p = v89._anon_0._M_local_buf;
                                    std::string::_M_construct<char const*>(&v89, &byte_1B23BB65[-5], byte_1B23BB65, v72);
                                    if ( *(_BYTE *)((v71 >> 3) + 0x7FFF8000) )
                                    {
                                      v73 = v71;
                                      __asan_report_load8();
                                    }
                                    else
                                    {
                                      v73 = *(_QWORD *)v71;
                                      if ( !*(_BYTE *)((*(_QWORD *)v71 >> 3) + 0x7FFF8000LL) )
                                      {
                                        v73 = *(_QWORD *)v73;
                                        if ( *(char *)((v73 >> 3) + 0x7FFF8000) >= 0 )
                                        {
                                          if ( *(_BYTE *)v73 )
                                            goto LABEL_207;
LABEL_213:
                                          YAML::detail::node_data::mark_defined((YAML::detail::node_data *)v73);
                                          if ( *(_BYTE *)(((v71 + 40) >> 3) + 0x7FFF8000) )
                                          {
                                            __asan_report_load8();
                                            goto LABEL_216;
                                          }
                                          v74 = *(std::_Rb_tree_node_base **)(v71 + 40);
                                          p_M_parent = (std::_Rb_tree_node_base::_Base_ptr *)(v71 + 24);
                                          while ( 1 )
                                          {
                                            v58 = v74;
                                            if ( p_M_parent == (std::_Rb_tree_node_base::_Base_ptr *)v74 )
                                              break;
                                            if ( *(_BYTE *)(((unsigned __int64)&v74[1] >> 3) + 0x7FFF8000) )
LABEL_216:
                                              __asan_report_load8();
                                            else
                                              YAML::detail::node::mark_defined(*(YAML::detail::node *const *)&v74[1]._M_color);
                                            v74 = (std::_Rb_tree_node_base *)std::_Rb_tree_increment(v58);
                                          }
                                          if ( *(_BYTE *)(((v71 + 32) >> 3) + 0x7FFF8000) )
                                          {
                                            __asan_report_load8();
                                          }
                                          else
                                          {
                                            std::_Rb_tree<YAML::detail::node *,YAML::detail::node *,std::_Identity<YAML::detail::node *>,YAML::detail::node::less,std::allocator<YAML::detail::node *>>::_M_erase(
                                              (std::_Rb_tree<YAML::detail::node*,YAML::detail::node*,std::_Identity<YAML::detail::node*>,YAML::detail::node::less,std::allocator<YAML::detail::node*> > *const)(v71 + 16),
                                              *(std::_Rb_tree<YAML::detail::node*,YAML::detail::node*,std::_Identity<YAML::detail::node*>,YAML::detail::node::less,std::allocator<YAML::detail::node*> >::_Link_type *)(v71 + 32));
                                            if ( !*(_BYTE *)(((v71 + 32) >> 3) + 0x7FFF8000) )
                                            {
                                              *(_QWORD *)(v71 + 32) = 0LL;
                                              v75 = (_QWORD *)(v71 + 24);
                                              if ( !*(_BYTE *)(((v71 + 40) >> 3) + 0x7FFF8000) )
                                              {
                                                *(_QWORD *)(v71 + 40) = v75;
                                                if ( !*(_BYTE *)(((v71 + 48) >> 3) + 0x7FFF8000) )
                                                {
                                                  *(_QWORD *)(v71 + 48) = v75;
                                                  if ( !*(_BYTE *)(((v71 + 56) >> 3) + 0x7FFF8000) )
                                                  {
                                                    *(_QWORD *)(v71 + 56) = 0LL;
LABEL_207:
                                                    if ( !*(_BYTE *)((v71 >> 3) + 0x7FFF8000) )
                                                    {
                                                      if ( !*(_BYTE *)((*(_QWORD *)v71 >> 3) + 0x7FFF8000LL) )
                                                      {
                                                        YAML::detail::node_data::set_scalar(**(_QWORD **)v71, &v89);
                                                        goto LABEL_234;
                                                      }
LABEL_233:
                                                      __asan_report_load8();
LABEL_234:
                                                      M_p = v89._M_dataplus._M_p;
                                                      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v89._M_dataplus._M_p == &v89._anon_0 )
                                                        goto LABEL_160;
                                                      goto LABEL_159;
                                                    }
LABEL_232:
                                                    __asan_report_load8();
                                                    goto LABEL_233;
                                                  }
LABEL_231:
                                                  __asan_report_store8();
                                                  goto LABEL_232;
                                                }
LABEL_230:
                                                __asan_report_store8();
                                                goto LABEL_231;
                                              }
LABEL_229:
                                              __asan_report_store8();
                                              goto LABEL_230;
                                            }
                                          }
                                          __asan_report_store8();
                                          goto LABEL_229;
                                        }
LABEL_212:
                                        __asan_report_load1(v73);
                                        goto LABEL_213;
                                      }
                                    }
                                    __asan_report_load8();
                                    goto LABEL_212;
                                  }
LABEL_201:
                                  __asan_report_store8();
                                  goto LABEL_202;
                                }
LABEL_200:
                                __asan_report_store8();
                                goto LABEL_201;
                              }
                            }
                            __asan_report_store4(v67);
                            goto LABEL_200;
                          }
LABEL_189:
                          v66 = __asan_report_store8();
                          goto LABEL_190;
                        }
LABEL_188:
                        __asan_report_store8();
                        goto LABEL_189;
                      }
LABEL_187:
                      __asan_report_store8();
                      goto LABEL_188;
                    }
                  }
                  __asan_report_store4(v63);
                  goto LABEL_187;
                }
LABEL_176:
                v62 = __asan_report_store8();
                goto LABEL_177;
              }
LABEL_175:
              __asan_report_store8();
              goto LABEL_176;
            }
LABEL_174:
            __asan_report_store8();
            goto LABEL_175;
          }
LABEL_173:
          __asan_report_store8();
          goto LABEL_174;
        }
LABEL_172:
        __asan_report_store8();
        goto LABEL_173;
      }
    }
    __asan_report_store8();
    goto LABEL_172;
  }
  *(_BYTE *)(v6 + 64) = 1;
  *(_QWORD *)(v6 + 72) = v6 + 88;
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_BYTE *)(v6 + 88) = 0;
  v37 = operator new(0x10uLL);
LABEL_85:
  v39 = v37;
  v40 = operator new(0x30uLL);
  v41 = *(_BYTE *)(((unsigned __int64)(v40 + 8) >> 3) + 0x7FFF8000);
  if ( v41 && v41 <= 3 )
  {
    __asan_report_store4(v40 + 8);
    goto LABEL_95;
  }
  *(_DWORD *)(v40 + 8) = 0;
  if ( *(_BYTE *)(((unsigned __int64)(v40 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_95:
    __asan_report_store8();
    goto LABEL_96;
  }
  *(_QWORD *)(v40 + 16) = 0LL;
  v42 = v40 + 8;
  if ( *(_BYTE *)(((unsigned __int64)(v40 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_96:
    __asan_report_store8();
    goto LABEL_97;
  }
  *(_QWORD *)(v40 + 24) = v42;
  if ( *(_BYTE *)(((unsigned __int64)(v40 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_97:
    __asan_report_store8();
    goto LABEL_98;
  }
  *(_QWORD *)(v40 + 32) = v42;
  if ( *(_BYTE *)(((unsigned __int64)(v40 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    __asan_report_store8();
    goto LABEL_99;
  }
  *(_QWORD *)(v40 + 40) = 0LL;
  if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
  {
LABEL_99:
    __asan_report_store8();
    goto LABEL_100;
  }
  *(_QWORD *)v39 = v40;
  p_M_parent = (std::_Rb_tree_node_base::_Base_ptr *)(v39 + 8);
  if ( *(_BYTE *)(((v39 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_100:
    v43 = __asan_report_store8();
    goto LABEL_101;
  }
  *(_QWORD *)(v39 + 8) = 0LL;
  v43 = operator new(0x18uLL);
LABEL_101:
  v44 = v43 + 8;
  v45 = *(_BYTE *)(((v43 + 8) >> 3) + 0x7FFF8000);
  if ( v45 && v45 <= 3 )
  {
    __asan_report_store4(v44);
LABEL_110:
    __asan_report_store4(v44);
    goto LABEL_111;
  }
  *(_DWORD *)(v43 + 8) = 1;
  v44 = v43 + 12;
  v46 = *(_BYTE *)(((v43 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v43 + 12) & 7) + 3) >= v46 && v46 )
    goto LABEL_110;
  *(_DWORD *)(v43 + 12) = 1;
  if ( *(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
  {
LABEL_111:
    __asan_report_store8();
    goto LABEL_112;
  }
  *(_QWORD *)v43 = &`vtable for'std::_Sp_counted_ptr<YAML::detail::memory *,(__gnu_cxx::_Lock_policy)2> + 2;
  if ( *(_BYTE *)(((v43 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_112:
    __asan_report_store8();
    goto LABEL_113;
  }
  *(_QWORD *)(v43 + 16) = v40;
  if ( *(_BYTE *)(((unsigned __int64)p_M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_113:
    v47 = __asan_report_store8();
    goto LABEL_114;
  }
  *(_QWORD *)(v39 + 8) = v43;
  *(_QWORD *)(v6 + 104) = v39;
  *(_QWORD *)(v6 + 112) = 0LL;
  v47 = operator new(0x18uLL);
LABEL_114:
  v48 = v47 + 8;
  v49 = *(_BYTE *)(((v47 + 8) >> 3) + 0x7FFF8000);
  if ( v49 && v49 <= 3 )
  {
    __asan_report_store4(v48);
LABEL_123:
    __asan_report_store4(v48);
    goto LABEL_124;
  }
  *(_DWORD *)(v47 + 8) = 1;
  v48 = v47 + 12;
  v50 = *(_BYTE *)(((v47 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v47 + 12) & 7) + 3) >= v50 && v50 )
    goto LABEL_123;
  *(_DWORD *)(v47 + 12) = 1;
  if ( *(_BYTE *)((v47 >> 3) + 0x7FFF8000) )
  {
LABEL_124:
    __asan_report_store8();
    goto LABEL_125;
  }
  *(_QWORD *)v47 = &`vtable for'std::_Sp_counted_ptr<YAML::detail::memory_holder *,(__gnu_cxx::_Lock_policy)2> + 2;
  if ( *(_BYTE *)(((v47 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_125:
    __asan_report_store8();
    goto LABEL_126;
  }
  *(_QWORD *)(v47 + 16) = v39;
  *(_QWORD *)(v6 + 112) = v47;
  if ( !*(_BYTE *)((*(_QWORD *)(v6 + 104) >> 3) + 0x7FFF8000LL) )
  {
    v51 = YAML::detail::memory::create_node(**(YAML::detail::memory ***)(v6 + 104));
    goto LABEL_127;
  }
LABEL_126:
  __asan_report_load8();
LABEL_127:
  *(_QWORD *)(v6 + 120) = v51;
  YAML::Node::EnsureNodeExists((const YAML::Node *const)(v6 + 64));
  v52 = *(_QWORD *)(v6 + 120);
  v89._M_dataplus._M_p = v89._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v89, &byte_1B23C0A4[-4], byte_1B23C0A4, v53);
  if ( *(_BYTE *)((v52 >> 3) + 0x7FFF8000) )
  {
    v54 = v52;
    __asan_report_load8();
    goto LABEL_135;
  }
  v54 = *(_QWORD *)v52;
  if ( *(_BYTE *)((*(_QWORD *)v52 >> 3) + 0x7FFF8000LL) )
  {
LABEL_135:
    __asan_report_load8();
    goto LABEL_136;
  }
  v54 = *(_QWORD *)v54;
  if ( *(char *)((v54 >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_136:
    __asan_report_load1(v54);
    goto LABEL_137;
  }
  if ( *(_BYTE *)v54 )
    goto LABEL_131;
LABEL_137:
  YAML::detail::node_data::mark_defined((YAML::detail::node_data *)v54);
  if ( *(_BYTE *)(((v52 + 40) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_140;
  }
  v55 = *(std::_Rb_tree_node_base::_Base_ptr **)(v52 + 40);
  p_M_parent = (std::_Rb_tree_node_base::_Base_ptr *)(v52 + 24);
  while ( 1 )
  {
    v39 = (unsigned __int64)v55;
    if ( p_M_parent == v55 )
      break;
    if ( *(_BYTE *)(((unsigned __int64)(v55 + 4) >> 3) + 0x7FFF8000) )
LABEL_140:
      __asan_report_load8();
    else
      YAML::detail::node::mark_defined((YAML::detail::node *const)v55[4]);
    v55 = (std::_Rb_tree_node_base::_Base_ptr *)std::_Rb_tree_increment((const std::_Rb_tree_node_base *)v39);
  }
  if ( *(_BYTE *)(((v52 + 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_152;
  }
  std::_Rb_tree<YAML::detail::node *,YAML::detail::node *,std::_Identity<YAML::detail::node *>,YAML::detail::node::less,std::allocator<YAML::detail::node *>>::_M_erase(
    (std::_Rb_tree<YAML::detail::node*,YAML::detail::node*,std::_Identity<YAML::detail::node*>,YAML::detail::node::less,std::allocator<YAML::detail::node*> > *const)(v52 + 16),
    *(std::_Rb_tree<YAML::detail::node*,YAML::detail::node*,std::_Identity<YAML::detail::node*>,YAML::detail::node::less,std::allocator<YAML::detail::node*> >::_Link_type *)(v52 + 32));
  if ( *(_BYTE *)(((v52 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_152:
    __asan_report_store8();
    goto LABEL_153;
  }
  *(_QWORD *)(v52 + 32) = 0LL;
  v56 = (_QWORD *)(v52 + 24);
  if ( *(_BYTE *)(((v52 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_153:
    __asan_report_store8();
    goto LABEL_154;
  }
  *(_QWORD *)(v52 + 40) = v56;
  if ( *(_BYTE *)(((v52 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_154:
    __asan_report_store8();
    goto LABEL_155;
  }
  *(_QWORD *)(v52 + 48) = v56;
  if ( *(_BYTE *)(((v52 + 56) >> 3) + 0x7FFF8000) )
  {
LABEL_155:
    __asan_report_store8();
    goto LABEL_156;
  }
  *(_QWORD *)(v52 + 56) = 0LL;
LABEL_131:
  if ( *(_BYTE *)((v52 >> 3) + 0x7FFF8000) )
  {
LABEL_156:
    __asan_report_load8();
    goto LABEL_157;
  }
  if ( !*(_BYTE *)((*(_QWORD *)v52 >> 3) + 0x7FFF8000LL) )
  {
    YAML::detail::node_data::set_scalar(**(_QWORD **)v52, &v89);
    goto LABEL_158;
  }
LABEL_157:
  __asan_report_load8();
LABEL_158:
  M_p = v89._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v89._M_dataplus._M_p != &v89._anon_0 )
LABEL_159:
    operator delete(M_p);
LABEL_160:
  YAML::Node::EnsureNodeExists((const YAML::Node *const)(v6 + 64));
  YAML::detail::memory_holder::merge(v87, *(YAML::detail::memory_holder **)(v6 + 104));
  v76 = *(YAML::detail::node **)(v6 + 120);
  v77 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 112);
  if ( v77 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v77);
  v78 = *(char **)(v6 + 72);
  if ( v78 != (char *)(v6 + 88) )
    operator delete(v78);
  if ( v88 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v88);
  YAML::detail::node_data::insert_map_pair((YAML::detail::node_data *)v3, v79, v76);
  if ( v86 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v86);
  if ( v84 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v84);
  if ( v82 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v82);
  if ( v90 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
};
