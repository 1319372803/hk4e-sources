// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/intrusive/bstree.hpp

// Line 1355: range 0000000019CFF4CA-0000000019CFFE0A
void __fastcall boost::intrusive::bstree_impl<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,void,boost::beast::http::basic_fields<std::allocator<char>>::key_compare,unsigned long,true,(boost::intrusive::algo_types)5,void>::insert_before(
        boost::intrusive::bstree_impl<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,long unsigned int,true,(boost::intrusive::algo_types)5,void> *const this,
        boost::intrusive::bstree_impl<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,long unsigned int,true,(boost::intrusive::algo_types)5,void>::const_iterator pos,
        unsigned __int64 value,
        __int64 a4)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rax
  boost::intrusive::rbtree_node<void*>::node_ptr v6; // rdx
  boost::intrusive::rbtree_node<void*>::node_ptr p_left; // r9
  boost::intrusive::rbtree_node<void*>::node_ptr *p_right; // rdi
  boost::intrusive::rbtree_node<void*>::node_ptr left; // rdi
  boost::intrusive::rbtree_node<void*>::node_ptr *v10; // r10
  boost::intrusive::rbtree_node<void*>::node_ptr right; // r10
  char v12; // di
  unsigned __int64 parent; // r10
  unsigned __int64 i; // rdi
  _QWORD *j; // rdi
  boost::intrusive::rbtree_node<void*>::node_ptr v16; // r11
  boost::intrusive::rbtree_node<void*>::node_ptr *p_parent; // rdi
  char v18; // r11
  boost::intrusive::rbtree_node<void*> *v19; // rdi
  boost::intrusive::rbtree_node<void*> *v20; // rdx
  unsigned __int64 v21; // rdi
  char v22; // dl
  unsigned __int64 k; // r10
  boost::intrusive::rbtree_node<void*>::node_ptr *v24; // rdx
  _QWORD *v25; // r11
  boost::intrusive::rbtree_node<void*>::color *v26; // r11
  boost::intrusive::rbtree_node<void*>::node_ptr p_color; // rdi
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  boost::intrusive::rbtree_node<void*>::node_ptr v30; // r11
  char v31; // di
  char v32; // di
  char v33; // bl
  _QWORD *v34; // r11
  boost::intrusive::rbtree_node<void*>::node_ptr v35; // rdi
  unsigned __int64 v36; // r10
  boost::intrusive::rbtree_node<void*> *v37; // rbp
  _QWORD *v38; // r10
  unsigned __int64 v39; // r10
  boost::intrusive::rbtree_node<void*>::color *v40; // rdi
  char v41; // cl
  boost::intrusive::rbtree_node<void*>::node_ptr v42; // rdx
  char v43; // cl
  unsigned __int64 v44; // rdi
  boost::intrusive::rbtree_node<void*>::node_ptr v45; // rdi
  unsigned __int64 v46; // r10
  boost::intrusive::rbtree_node<void*> *v47; // rbx
  _QWORD *v48; // r10
  unsigned __int64 v49; // r10
  unsigned __int64 v50; // rdi
  const boost::asio::const_buffers_1 *v51; // rdi

  v4 = a4 + 16;
  if ( a4 == -16 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      off_1B5D9D60,
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
      0x4Eu,
      "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr boost::intrusive::bhtraits_base<T, NodePtr"
      ", Tag, Type>::to_node_ptr(boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::reference) [with T = boost::beas"
      "t::http::basic_fields<std::allocator<char> >::element; NodePtr = boost::intrusive::rbtree_node<void*>*; Tag = boos"
      "t::intrusive::dft_tag; unsigned int Type = 3; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = b"
      "oost::intrusive::rbtree_node<void*>*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::reference = boost::b"
      "east::http::basic_fields<std::allocator<char> >::element&]");
  }
  v5 = (unsigned __int64)this;
  if ( *(_BYTE *)(((unsigned __int64)pos.members_.nodeptr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(pos.members_.nodeptr_);
    goto LABEL_21;
  }
  ++pos.members_.nodeptr_->parent_;
  if ( *(_BYTE *)((value >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    p_right = (boost::intrusive::rbtree_node<void*>::node_ptr *)value;
    __asan_report_load8(value);
    goto LABEL_22;
  }
  v6 = *(boost::intrusive::rbtree_node<void*>::node_ptr *)value;
  p_left = (boost::intrusive::rbtree_node<void*>::node_ptr)&pos.members_.nodeptr_->left_;
  p_right = &pos.members_.nodeptr_->right_;
  if ( *(_BYTE *)(((unsigned __int64)&pos.members_.nodeptr_->right_ >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(p_right);
LABEL_23:
    __asan_report_load8(p_right);
    goto LABEL_24;
  }
  if ( v6 == pos.members_.nodeptr_->right_ )
    goto LABEL_53;
  p_right = &v6->left_;
  if ( *(_BYTE *)(((unsigned __int64)&v6->left_ >> 3) + 0x7FFF8000) )
    goto LABEL_23;
  left = v6->left_;
  v10 = &v6->right_;
  if ( *(_BYTE *)(((unsigned __int64)&v6->right_ >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(v10);
    goto LABEL_25;
  }
  right = v6->right_;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    left = v6;
    __asan_report_load8(v6);
LABEL_26:
    v5 = __asan_report_load8(left);
    goto LABEL_27;
  }
  if ( !v6->parent_ )
    goto LABEL_15;
  if ( !left )
  {
LABEL_31:
    v12 = 0;
    goto LABEL_16;
  }
  if ( !right )
  {
    v12 = 0;
    goto LABEL_16;
  }
  if ( left == right )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) )
    goto LABEL_26;
  if ( v6 != left->parent_ )
    goto LABEL_15;
LABEL_27:
  if ( *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load8(right);
    goto LABEL_31;
  }
  if ( v6 == right->parent_ )
  {
    v12 = 0;
    goto LABEL_16;
  }
LABEL_15:
  v12 = 1;
LABEL_16:
  if ( v12 )
  {
    parent = (unsigned __int64)v6->parent_;
    i = (unsigned __int64)&v6->parent_->right_;
    if ( *(_BYTE *)((i >> 3) + 0x7FFF8000) )
    {
      v5 = __asan_report_load8(i);
      goto LABEL_34;
    }
    for ( i = *(_QWORD *)(parent + 16); ; i = *(_QWORD *)(i + 16) )
    {
      if ( !i )
        goto LABEL_54;
      if ( *(_BYTE *)(((i + 16) >> 3) + 0x7FFF8000) )
        break;
LABEL_34:
      parent = i;
    }
    v5 = __asan_report_load8(i + 16);
  }
  parent = (unsigned __int64)v6->left_;
  if ( parent )
  {
    j = (_QWORD *)(parent + 16);
    if ( *(_BYTE *)(((parent + 16) >> 3) + 0x7FFF8000) )
    {
      v5 = __asan_report_load8(j);
      goto LABEL_42;
    }
    for ( j = *(_QWORD **)(parent + 16); ; j = (_QWORD *)j[2] )
    {
      if ( !j )
        goto LABEL_54;
      if ( *(_BYTE *)(((unsigned __int64)(j + 2) >> 3) + 0x7FFF8000) )
        break;
LABEL_42:
      parent = (unsigned __int64)j;
    }
    v5 = __asan_report_load8(j + 2);
  }
  parent = (unsigned __int64)v6->parent_;
  v16 = v6;
  while ( 1 )
  {
    if ( *(_BYTE *)(((parent + 8) >> 3) + 0x7FFF8000) )
    {
      v5 = __asan_report_load8(parent + 8);
      goto LABEL_48;
    }
    if ( *(boost::intrusive::rbtree_node<void*>::node_ptr *)(parent + 8) != v16 )
      goto LABEL_54;
    v16 = (boost::intrusive::rbtree_node<void*>::node_ptr)parent;
    if ( *(_BYTE *)((parent >> 3) + 0x7FFF8000) )
      break;
LABEL_48:
    parent = *(_QWORD *)parent;
  }
  v5 = __asan_report_load8(parent);
LABEL_53:
  parent = (unsigned __int64)v6;
LABEL_54:
  if ( *(_BYTE *)(((unsigned __int64)p_left >> 3) + 0x7FFF8000) )
  {
    p_parent = &p_left->parent_;
    __asan_report_load8(p_left);
    goto LABEL_60;
  }
  if ( !pos.members_.nodeptr_->left_ )
    goto LABEL_61;
  p_parent = &v6->left_;
  if ( *(_BYTE *)(((unsigned __int64)&v6->left_ >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    v5 = __asan_report_load8(p_parent);
    goto LABEL_61;
  }
  if ( v6->left_ )
  {
    v18 = 0;
    v6 = (boost::intrusive::rbtree_node<void*>::node_ptr)parent;
    goto LABEL_62;
  }
LABEL_61:
  v18 = 1;
LABEL_62:
  v19 = v6;
  if ( !v6 )
  {
    __asan_handle_no_return(0LL);
    __assert_fail(
      "commit_data.node != node_ptr()",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/bstree_algorithms.hpp",
      0x6E5u,
      "static void boost::intrusive::bstree_algorithms<NodeTraits>::insert_commit(boost::intrusive::bstree_algorithms<Nod"
      "eTraits>::node_ptr, boost::intrusive::bstree_algorithms<NodeTraits>::node_ptr, const insert_commit_data&) [with No"
      "deTraits = boost::intrusive::rbtree_node_traits<void*, false>; boost::intrusive::bstree_algorithms<NodeTraits>::no"
      "de_ptr = boost::intrusive::rbtree_node<void*>*; boost::intrusive::bstree_algorithms<NodeTraits>::insert_commit_dat"
      "a = boost::intrusive::insert_commit_data_t<boost::intrusive::rbtree_node<void*>*>; typename NodeTraits::node_ptr ="
      " boost::intrusive::rbtree_node<void*>*]");
  }
  if ( p_left == v6 )
  {
    pos.members_.nodeptr_->left_ = (boost::intrusive::rbtree_node<void*>::node_ptr)v4;
    if ( !*(_BYTE *)(((unsigned __int64)&p_left->right_ >> 3) + 0x7FFF8000) )
    {
      p_left->right_ = (boost::intrusive::rbtree_node<void*>::node_ptr)v4;
      p_left->left_ = (boost::intrusive::rbtree_node<void*>::node_ptr)v4;
      goto LABEL_71;
    }
    __asan_report_store8();
    goto LABEL_78;
  }
  if ( v18 )
  {
    v20 = (boost::intrusive::rbtree_node<void*> *)&v6->left_;
    if ( !*(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      v19->left_ = (boost::intrusive::rbtree_node<void*>::node_ptr)v4;
      if ( v19 == p_left->left_ )
        p_left->left_ = (boost::intrusive::rbtree_node<void*>::node_ptr)v4;
      goto LABEL_71;
    }
LABEL_78:
    v19 = v20;
    __asan_report_store8();
  }
  if ( *(_BYTE *)(((unsigned __int64)&v6->right_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_84;
  }
  v19->right_ = (boost::intrusive::rbtree_node<void*>::node_ptr)v4;
  v24 = &p_left->right_;
  if ( *(_BYTE *)(((unsigned __int64)&p_left->right_ >> 3) + 0x7FFF8000) )
  {
LABEL_84:
    __asan_report_load8(v24);
LABEL_85:
    v21 = v4;
    __asan_report_store8();
    goto LABEL_86;
  }
  if ( v19 == p_left->right_ )
    p_left->right_ = (boost::intrusive::rbtree_node<void*>::node_ptr)v4;
LABEL_71:
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    goto LABEL_85;
  *(_QWORD *)(a4 + 16) = v19;
  v21 = v4 + 16;
  if ( *(_BYTE *)(((v4 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_86:
    __asan_report_store8();
    goto LABEL_87;
  }
  *(_QWORD *)(v4 + 16) = 0LL;
  v21 = v4 + 8;
  if ( *(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_87:
    __asan_report_store8();
LABEL_88:
    __asan_report_store4(v21);
    goto LABEL_89;
  }
  *(_QWORD *)(v4 + 8) = 0LL;
  v21 = v4 + 24;
  v22 = *(_BYTE *)(((v4 + 24) >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
    goto LABEL_88;
  *(_DWORD *)(v4 + 24) = 0;
  for ( k = v4; ; k = v29 )
  {
    v21 = k;
    if ( *(_BYTE *)((k >> 3) + 0x7FFF8000) )
    {
LABEL_89:
      __asan_report_load8(v21);
LABEL_90:
      __asan_report_load8(v21);
LABEL_91:
      __asan_report_load4(v25);
LABEL_92:
      p_color = (boost::intrusive::rbtree_node<void*>::node_ptr)v26;
      __asan_report_store4(v26);
LABEL_93:
      v5 = __asan_report_load8(p_color);
      goto LABEL_94;
    }
    v28 = *(_QWORD *)k;
    v21 = *(_QWORD *)k;
    if ( *(_BYTE *)((*(_QWORD *)k >> 3) + 0x7FFF8000LL) )
      goto LABEL_90;
    v29 = *(_QWORD *)v28;
    if ( p_left == (boost::intrusive::rbtree_node<void*>::node_ptr)v28 )
      goto LABEL_132;
    v25 = (_QWORD *)(v28 + 24);
    v31 = *(_BYTE *)(((v28 + 24) >> 3) + 0x7FFF8000);
    if ( v31 && v31 <= 3 )
      goto LABEL_91;
    if ( *(_DWORD *)(v28 + 24) == 1 || p_left == (boost::intrusive::rbtree_node<void*>::node_ptr)v29 )
      goto LABEL_132;
    v26 = (boost::intrusive::rbtree_node<void*>::color *)(v29 + 24);
    v32 = *(_BYTE *)(((v29 + 24) >> 3) + 0x7FFF8000);
    if ( v32 && v32 <= 3 )
      goto LABEL_92;
    *(_DWORD *)(v29 + 24) = 0;
    p_color = (boost::intrusive::rbtree_node<void*>::node_ptr)(v29 + 8);
    if ( *(_BYTE *)(((v29 + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_93;
    p_color = *(boost::intrusive::rbtree_node<void*>::node_ptr *)(v29 + 8);
    if ( (boost::intrusive::rbtree_node<void*>::node_ptr)v28 != p_color )
    {
      v30 = *(boost::intrusive::rbtree_node<void*>::node_ptr *)(v29 + 8);
      goto LABEL_111;
    }
LABEL_94:
    if ( *(_BYTE *)(((v29 + 16) >> 3) + 0x7FFF8000) )
    {
      p_color = (boost::intrusive::rbtree_node<void*>::node_ptr)(v29 + 16);
      v5 = __asan_report_load8(v29 + 16);
      goto LABEL_97;
    }
    v30 = *(boost::intrusive::rbtree_node<void*>::node_ptr *)(v29 + 16);
LABEL_111:
    if ( !v30 )
      goto LABEL_115;
    v33 = *(_BYTE *)(((unsigned __int64)&v30->color_ >> 3) + 0x7FFF8000);
    if ( v33 )
    {
      if ( v33 <= 3 )
        break;
    }
LABEL_97:
    if ( v30->color_ )
      goto LABEL_115;
    v30->color_ = black_t;
    *(_DWORD *)(v28 + 24) = 1;
  }
  p_color = (boost::intrusive::rbtree_node<void*>::node_ptr)&v30->color_;
  __asan_report_load4(&v30->color_);
LABEL_115:
  if ( *(_BYTE *)(((v28 + 8) >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load8(v28 + 8);
  }
  else
  {
    v34 = *(_QWORD **)(v28 + 8);
    if ( (boost::intrusive::rbtree_node<void*>::node_ptr)v28 != p_color )
    {
      if ( (_QWORD *)k != v34 )
        goto LABEL_118;
LABEL_166:
      if ( *(_BYTE *)(((k + 16) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(k + 16);
        goto LABEL_172;
      }
      v50 = *(_QWORD *)(k + 16);
      *(_QWORD *)(v28 + 8) = v50;
      if ( v50 )
      {
        if ( !*(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)v50 = v28;
          goto LABEL_170;
        }
LABEL_172:
        __asan_report_store8();
LABEL_173:
        __asan_report_load8(v29);
        goto LABEL_174;
      }
LABEL_170:
      *(_QWORD *)(k + 16) = v28;
      *(_QWORD *)v28 = k;
      v28 = k;
LABEL_118:
      if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
        goto LABEL_173;
      v35 = *(boost::intrusive::rbtree_node<void*>::node_ptr *)v29;
      v36 = *(_QWORD *)v29 + 8LL;
      if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
      {
LABEL_174:
        __asan_report_load8(v36);
      }
      else
      {
        v37 = v35->left_;
        v38 = (_QWORD *)(v28 + 8);
        if ( !*(_BYTE *)(((v28 + 8) >> 3) + 0x7FFF8000) )
        {
          v39 = *(_QWORD *)(v28 + 8);
          if ( !*(_BYTE *)(((v29 + 16) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(v29 + 16) = v39;
            if ( !v39 )
              goto LABEL_125;
            if ( !*(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)v39 = v29;
LABEL_125:
              *(_QWORD *)(v28 + 8) = v29;
              *(_QWORD *)v29 = v28;
              if ( !*(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)v28 = v35;
                if ( p_left != v35 )
                {
                  if ( (boost::intrusive::rbtree_node<void*> *)v29 == v37 )
                  {
                    v35->left_ = (boost::intrusive::rbtree_node<void*>::node_ptr)v28;
                    goto LABEL_129;
                  }
                  if ( !*(_BYTE *)(((unsigned __int64)&v35->right_ >> 3) + 0x7FFF8000) )
                  {
                    v35->right_ = (boost::intrusive::rbtree_node<void*>::node_ptr)v28;
                    goto LABEL_129;
                  }
                  v40 = (boost::intrusive::rbtree_node<void*>::color *)&v35->right_;
                  __asan_report_store8();
LABEL_183:
                  __asan_report_store4(v40);
                  goto LABEL_184;
                }
LABEL_179:
                pos.members_.nodeptr_->left_ = (boost::intrusive::rbtree_node<void*>::node_ptr)v28;
                goto LABEL_129;
              }
LABEL_178:
              __asan_report_store8();
              goto LABEL_179;
            }
LABEL_177:
            __asan_report_store8();
            goto LABEL_178;
          }
LABEL_176:
          __asan_report_store8();
          goto LABEL_177;
        }
      }
      __asan_report_load8(v38);
      goto LABEL_176;
    }
  }
  if ( (_QWORD *)k == v34 )
    goto LABEL_144;
  if ( *(_BYTE *)(((k + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(k + 8);
    goto LABEL_155;
  }
  v44 = *(_QWORD *)(k + 8);
  if ( *(_BYTE *)(((v28 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_155:
    __asan_report_store8();
LABEL_156:
    __asan_report_store8();
LABEL_157:
    __asan_report_load8(v29);
    goto LABEL_158;
  }
  *(_QWORD *)(v28 + 16) = v44;
  if ( !v44 )
    goto LABEL_143;
  if ( *(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
    goto LABEL_156;
  *(_QWORD *)v44 = v28;
LABEL_143:
  *(_QWORD *)(k + 8) = v28;
  *(_QWORD *)v28 = k;
  v28 = k;
LABEL_144:
  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
    goto LABEL_157;
  v45 = *(boost::intrusive::rbtree_node<void*>::node_ptr *)v29;
  v46 = *(_QWORD *)v29 + 8LL;
  if ( *(_BYTE *)((v46 >> 3) + 0x7FFF8000) )
  {
LABEL_158:
    __asan_report_load8(v46);
    goto LABEL_159;
  }
  v47 = v45->left_;
  v48 = (_QWORD *)(v28 + 16);
  if ( *(_BYTE *)(((v28 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_159:
    __asan_report_load8(v48);
LABEL_160:
    __asan_report_store8();
LABEL_161:
    __asan_report_store8();
    goto LABEL_162;
  }
  v49 = *(_QWORD *)(v28 + 16);
  *(_QWORD *)(v29 + 8) = v49;
  if ( !v49 )
    goto LABEL_150;
  if ( *(_BYTE *)((v49 >> 3) + 0x7FFF8000) )
    goto LABEL_160;
  *(_QWORD *)v49 = v29;
LABEL_150:
  *(_QWORD *)(v28 + 16) = v29;
  *(_QWORD *)v29 = v28;
  if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
    goto LABEL_161;
  *(_QWORD *)v28 = v45;
  if ( p_left == v45 )
  {
LABEL_162:
    pos.members_.nodeptr_->left_ = (boost::intrusive::rbtree_node<void*>::node_ptr)v28;
    goto LABEL_129;
  }
  if ( (boost::intrusive::rbtree_node<void*> *)v29 == v47 )
  {
    v45->left_ = (boost::intrusive::rbtree_node<void*>::node_ptr)v28;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&v45->right_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8();
      goto LABEL_166;
    }
    v45->right_ = (boost::intrusive::rbtree_node<void*>::node_ptr)v28;
  }
LABEL_129:
  v40 = (boost::intrusive::rbtree_node<void*>::color *)(v28 + 24);
  v41 = *(_BYTE *)(((v28 + 24) >> 3) + 0x7FFF8000);
  if ( v41 && v41 <= 3 )
    goto LABEL_183;
  *(_DWORD *)(v28 + 24) = 1;
LABEL_132:
  v42 = pos.members_.nodeptr_->left_;
  v40 = &v42->color_;
  v43 = *(_BYTE *)(((unsigned __int64)&v42->color_ >> 3) + 0x7FFF8000);
  if ( v43 && v43 <= 3 )
  {
LABEL_184:
    v5 = __asan_report_store4(v40);
    goto LABEL_185;
  }
  v42->color_ = black_t;
  if ( !*(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
    *(_QWORD *)v5 = v4;
    return;
  }
LABEL_185:
  v51 = (const boost::asio::const_buffers_1 *)v5;
  __asan_report_store8();
  boost::beast::buffers_range_ref<boost::asio::const_buffers_1>(v51);
};
