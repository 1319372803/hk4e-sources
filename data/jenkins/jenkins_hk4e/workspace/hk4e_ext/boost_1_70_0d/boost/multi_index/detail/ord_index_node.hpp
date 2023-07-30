// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/multi_index/detail/ord_index_node.hpp

// Line 345: range 000000000C2A7705-000000000C2A89CD
void __fastcall boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char>>::rebalance(
        unsigned __int64 x,
        boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> >::parent_ref root)
{
  unsigned __int64 v2; // rcx
  boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> > *v3; // rax
  unsigned __int64 v4; // rdx
  boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> >::pointer v5; // r9
  unsigned __int64 v6; // rcx
  boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> > *p_right; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 *v10; // rdx
  unsigned __int64 v11; // rcx
  boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> > *v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  boost::multi_index::detail::uintptr_type v15; // rax
  unsigned __int64 v16; // rax
  boost::multi_index::detail::ordered_index_node_compressed_base<boost::multi_index::detail::null_augment_policy,std::allocator<char> >::pointer right; // rdx
  boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> > *left; // rcx
  _QWORD *v19; // rcx
  __int64 v20; // rdi
  unsigned __int64 v21; // rcx
  boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> > *p_left; // rdx
  unsigned __int64 v23; // rcx
  boost::multi_index::detail::uintptr_type v24; // rax
  unsigned __int64 v25; // rax
  boost::multi_index::detail::ordered_index_node_compressed_base<boost::multi_index::detail::null_augment_policy,std::allocator<char> >::pointer v26; // rdx
  boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> > *v27; // rcx
  _QWORD *v28; // rcx
  __int64 v29; // rdi
  unsigned __int64 v30; // rcx
  boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> > *v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int64 *v33; // rdx
  __int64 v34; // r8
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  boost::multi_index::detail::sequenced_index<boost::multi_index::detail::nth_layer<1,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > >,boost::mpl::vector0<mpl_::na> > *v38; // rdi
  boost::multi_index::detail::uintptr_type v39; // [rsp+8h] [rbp-10h]
  boost::multi_index::detail::uintptr_type v40; // [rsp+8h] [rbp-10h]
  boost::multi_index::detail::uintptr_type v41; // [rsp+8h] [rbp-10h]
  boost::multi_index::detail::uintptr_type v42; // [rsp+8h] [rbp-10h]

  if ( *(_BYTE *)((x >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_4;
  }
  *(_QWORD *)x &= ~1uLL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( *(_BYTE *)(((unsigned __int64)root.r >> 3) + 0x7FFF8000) )
      {
LABEL_4:
        __asan_report_load8();
LABEL_5:
        __asan_report_load8();
LABEL_6:
        __asan_report_load8();
LABEL_7:
        __asan_report_load8();
LABEL_8:
        __asan_report_load8();
LABEL_9:
        if ( !*(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)v2 |= 1uLL;
          return;
        }
        x = v2;
        __asan_report_load8();
LABEL_12:
        if ( *(_BYTE *)(((v4 + 16) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8();
LABEL_38:
          __asan_report_load8();
          goto LABEL_39;
        }
        v6 = *(_QWORD *)(v4 + 16);
        if ( v6 )
        {
          if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
            goto LABEL_38;
          if ( (*(_BYTE *)v6 & 1) == 0 )
            goto LABEL_40;
        }
        p_right = (boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> > *)&v3->right_;
        if ( *(_BYTE *)(((unsigned __int64)&v3->right_ >> 3) + 0x7FFF8000) )
        {
LABEL_39:
          x = (unsigned __int64)p_right;
          __asan_report_load8();
LABEL_40:
          v3->parentcolor_ = v4 | 1;
          *(_QWORD *)v6 |= 1uLL;
          v15 = *(_QWORD *)x & 0xFFFFFFFFFFFFFFFELL;
          if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8();
LABEL_45:
            __asan_report_load8();
LABEL_46:
            __asan_report_load8();
            goto LABEL_47;
          }
          v16 = *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFELL;
          if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
            goto LABEL_45;
          *(_QWORD *)v16 &= ~1uLL;
          if ( *(_BYTE *)(((v5->parentcolor_ & 0xFFFFFFFFFFFFFFFELL) >> 3) + 0x7FFF8000) )
            goto LABEL_46;
          x = *(_QWORD *)(v5->parentcolor_ & 0xFFFFFFFFFFFFFFFELL) & 0xFFFFFFFFFFFFFFFELL;
        }
        else
        {
          if ( v3->right_ != (boost::multi_index::detail::ordered_index_node_compressed_base<boost::multi_index::detail::null_augment_policy,std::allocator<char> >::pointer)x )
            goto LABEL_18;
LABEL_47:
          v40 = *root.r;
          right = v3->right_;
          if ( *(_BYTE *)(((unsigned __int64)&right->left_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8();
LABEL_60:
            __asan_report_load8();
LABEL_61:
            __asan_report_load8();
LABEL_62:
            LOBYTE(v20) = (_BYTE)v19;
            __asan_report_load8();
LABEL_63:
            *v19 = (unsigned __int64)right | v20 & 1;
            goto LABEL_58;
          }
          left = right->left_;
          v3->right_ = left;
          if ( left )
          {
            if ( *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) )
              goto LABEL_60;
            left->parentcolor_ = (unsigned __int64)v3 | left->parentcolor_ & 1;
          }
          if ( *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) )
            goto LABEL_61;
          right->parentcolor_ = right->parentcolor_ & 1 | v3->parentcolor_ & 0xFFFFFFFFFFFFFFFELL;
          v19 = (_QWORD *)v40;
          if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
            goto LABEL_62;
          v20 = *(_QWORD *)v40;
          if ( v3 == (boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> > *)(*(_QWORD *)v40 & 0xFFFFFFFFFFFFFFFELL) )
            goto LABEL_63;
          v21 = v3->parentcolor_ & 0xFFFFFFFFFFFFFFFELL;
          if ( *(_BYTE *)(((v21 + 8) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8();
          }
          else if ( *(boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> > **)(v21 + 8) != v3 )
          {
            if ( *(_BYTE *)(((v21 + 16) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store8();
LABEL_67:
              __asan_report_load8();
LABEL_68:
              __asan_report_load8();
LABEL_69:
              __asan_report_load8();
LABEL_70:
              __asan_report_load8();
LABEL_71:
              __asan_report_load8();
LABEL_72:
              __asan_report_load8();
LABEL_73:
              __asan_report_load8();
LABEL_74:
              __asan_report_load8();
LABEL_75:
              __asan_report_load8();
LABEL_76:
              __asan_report_load8();
LABEL_77:
              x = (unsigned __int64)v12;
              __asan_report_load8();
LABEL_78:
              v12->parentcolor_ = (unsigned __int64)v10 | v13 & 1;
              goto LABEL_36;
            }
            *(_QWORD *)(v21 + 16) = right;
            goto LABEL_58;
          }
          *(_QWORD *)(v21 + 8) = right;
LABEL_58:
          right->left_ = v3;
          v3->parentcolor_ = v3->parentcolor_ & 1 | (unsigned __int64)right;
          x = (unsigned __int64)v3;
LABEL_18:
          if ( *(_BYTE *)((x >> 3) + 0x7FFF8000) )
            goto LABEL_67;
          if ( *(_BYTE *)(((*(_QWORD *)x & 0xFFFFFFFFFFFFFFFELL) >> 3) + 0x7FFF8000) )
            goto LABEL_68;
          *(_QWORD *)(*(_QWORD *)x & 0xFFFFFFFFFFFFFFFELL) |= 1uLL;
          if ( *(_BYTE *)(((*(_QWORD *)x & 0xFFFFFFFFFFFFFFFELL) >> 3) + 0x7FFF8000) )
            goto LABEL_69;
          v8 = *(_QWORD *)(*(_QWORD *)x & 0xFFFFFFFFFFFFFFFELL) & 0xFFFFFFFFFFFFFFFELL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            goto LABEL_70;
          *(_QWORD *)v8 &= ~1uLL;
          v39 = *root.r;
          if ( *(_BYTE *)(((*(_QWORD *)x & 0xFFFFFFFFFFFFFFFELL) >> 3) + 0x7FFF8000) )
            goto LABEL_71;
          v9 = *(_QWORD *)(*(_QWORD *)x & 0xFFFFFFFFFFFFFFFELL) & 0xFFFFFFFFFFFFFFFELL;
          if ( *(_BYTE *)(((v9 + 8) >> 3) + 0x7FFF8000) )
            goto LABEL_72;
          v10 = *(unsigned __int64 **)(v9 + 8);
          if ( *(_BYTE *)(((unsigned __int64)(v10 + 2) >> 3) + 0x7FFF8000) )
            goto LABEL_73;
          v11 = v10[2];
          *(_QWORD *)(v9 + 8) = v11;
          if ( v11 )
          {
            if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
              goto LABEL_74;
            *(_QWORD *)v11 = v9 | *(_QWORD *)v11 & 1LL;
          }
          if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
            goto LABEL_75;
          if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
            goto LABEL_76;
          *v10 = *v10 & 1 | *(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFELL;
          v12 = (boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> > *)v39;
          if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
            goto LABEL_77;
          v13 = *(_QWORD *)v39;
          if ( v9 == (*(_QWORD *)v39 & 0xFFFFFFFFFFFFFFFELL) )
            goto LABEL_78;
          v14 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFELL;
          if ( *(_BYTE *)(((v14 + 16) >> 3) + 0x7FFF8000) )
          {
            x = v14 + 16;
            __asan_report_load8();
LABEL_80:
            *(_QWORD *)(v14 + 16) = v10;
            goto LABEL_36;
          }
          if ( *(_QWORD *)(v14 + 16) == v9 )
            goto LABEL_80;
          if ( *(_BYTE *)(((v14 + 8) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store8();
LABEL_82:
            __asan_report_load8();
LABEL_83:
            x = (unsigned __int64)p_left;
            __asan_report_load8();
            goto LABEL_84;
          }
          *(_QWORD *)(v14 + 8) = v10;
LABEL_36:
          v10[2] = v9;
          *(_QWORD *)v9 = *(_QWORD *)v9 & 1LL | (unsigned __int64)v10;
        }
      }
      if ( *(_BYTE *)((*root.r >> 3) + 0x7FFF8000) )
        goto LABEL_5;
      v2 = **(_QWORD **)root.r & 0xFFFFFFFFFFFFFFFELL;
      if ( x == v2 )
        goto LABEL_9;
      v5 = (boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> >::pointer)x;
      if ( *(_BYTE *)((x >> 3) + 0x7FFF8000) )
        goto LABEL_6;
      v3 = (boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> > *)(*(_QWORD *)x & 0xFFFFFFFFFFFFFFFELL);
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
        goto LABEL_7;
      if ( (v3->parentcolor_ & 1) != 0 )
        goto LABEL_9;
      v4 = v3->parentcolor_ & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
        goto LABEL_8;
      v23 = *(_QWORD *)(v4 + 8);
      if ( (boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> > *)v23 == v3 )
        goto LABEL_12;
      if ( !v23 )
        break;
      if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
        goto LABEL_82;
      if ( (*(_BYTE *)v23 & 1) != 0 )
        break;
LABEL_84:
      v3->parentcolor_ = v4 | 1;
      *(_QWORD *)v23 |= 1uLL;
      v24 = *(_QWORD *)x & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
LABEL_89:
        __asan_report_load8();
LABEL_90:
        __asan_report_load8();
LABEL_91:
        v41 = *root.r;
        v26 = v3->left_;
        if ( *(_BYTE *)(((unsigned __int64)&v26->right_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8();
        }
        else
        {
          v27 = v26->right_;
          v3->left_ = v27;
          if ( !v27 )
            goto LABEL_95;
          if ( !*(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
          {
            v27->parentcolor_ = (unsigned __int64)v3 | v27->parentcolor_ & 1;
LABEL_95:
            if ( !*(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
            {
              v26->parentcolor_ = v26->parentcolor_ & 1 | v3->parentcolor_ & 0xFFFFFFFFFFFFFFFELL;
              v28 = (_QWORD *)v41;
              if ( !*(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
              {
                v29 = *(_QWORD *)v41;
                if ( v3 != (boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> > *)(*(_QWORD *)v41 & 0xFFFFFFFFFFFFFFFELL) )
                {
                  v30 = v3->parentcolor_ & 0xFFFFFFFFFFFFFFFELL;
                  if ( *(_BYTE *)(((v30 + 16) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load8();
                  }
                  else if ( *(boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> > **)(v30 + 16) != v3 )
                  {
                    if ( *(_BYTE *)(((v30 + 8) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store8();
LABEL_111:
                      __asan_report_load8();
LABEL_112:
                      __asan_report_load8();
LABEL_113:
                      __asan_report_load8();
LABEL_114:
                      __asan_report_load8();
LABEL_115:
                      __asan_report_load8();
LABEL_116:
                      __asan_report_load8();
LABEL_117:
                      __asan_report_load8();
LABEL_118:
                      __asan_report_load8();
LABEL_119:
                      __asan_report_load8();
LABEL_120:
                      __asan_report_load8();
LABEL_121:
                      x = (unsigned __int64)v31;
                      __asan_report_load8();
LABEL_122:
                      v31->parentcolor_ = (unsigned __int64)v33 | v34 & 1;
                      goto LABEL_126;
                    }
                    *(_QWORD *)(v30 + 8) = v26;
                    goto LABEL_102;
                  }
                  *(_QWORD *)(v30 + 16) = v26;
LABEL_102:
                  v26->right_ = v3;
                  v3->parentcolor_ = v3->parentcolor_ & 1 | (unsigned __int64)v26;
                  x = (unsigned __int64)v3;
                  goto LABEL_140;
                }
LABEL_107:
                *v28 = (unsigned __int64)v26 | v29 & 1;
                goto LABEL_102;
              }
LABEL_106:
              LOBYTE(v29) = (_BYTE)v28;
              __asan_report_load8();
              goto LABEL_107;
            }
LABEL_105:
            __asan_report_load8();
            goto LABEL_106;
          }
        }
        __asan_report_load8();
        goto LABEL_105;
      }
      v25 = *(_QWORD *)v24 & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
        goto LABEL_89;
      *(_QWORD *)v25 &= ~1uLL;
      if ( *(_BYTE *)(((v5->parentcolor_ & 0xFFFFFFFFFFFFFFFELL) >> 3) + 0x7FFF8000) )
        goto LABEL_90;
      x = *(_QWORD *)(v5->parentcolor_ & 0xFFFFFFFFFFFFFFFELL) & 0xFFFFFFFFFFFFFFFELL;
    }
    p_left = (boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> > *)&v3->left_;
    if ( *(_BYTE *)(((unsigned __int64)&v3->left_ >> 3) + 0x7FFF8000) )
      goto LABEL_83;
    if ( v3->left_ == (boost::multi_index::detail::ordered_index_node_compressed_base<boost::multi_index::detail::null_augment_policy,std::allocator<char> >::pointer)x )
      goto LABEL_91;
LABEL_140:
    if ( *(_BYTE *)((x >> 3) + 0x7FFF8000) )
      goto LABEL_111;
    if ( *(_BYTE *)(((*(_QWORD *)x & 0xFFFFFFFFFFFFFFFELL) >> 3) + 0x7FFF8000) )
      goto LABEL_112;
    *(_QWORD *)(*(_QWORD *)x & 0xFFFFFFFFFFFFFFFELL) |= 1uLL;
    if ( *(_BYTE *)(((*(_QWORD *)x & 0xFFFFFFFFFFFFFFFELL) >> 3) + 0x7FFF8000) )
      goto LABEL_113;
    v36 = *(_QWORD *)(*(_QWORD *)x & 0xFFFFFFFFFFFFFFFELL) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
      goto LABEL_114;
    *(_QWORD *)v36 &= ~1uLL;
    v42 = *root.r;
    if ( *(_BYTE *)(((*(_QWORD *)x & 0xFFFFFFFFFFFFFFFELL) >> 3) + 0x7FFF8000) )
      goto LABEL_115;
    v32 = *(_QWORD *)(*(_QWORD *)x & 0xFFFFFFFFFFFFFFFELL) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_BYTE *)(((v32 + 16) >> 3) + 0x7FFF8000) )
      goto LABEL_116;
    v33 = *(unsigned __int64 **)(v32 + 16);
    if ( *(_BYTE *)(((unsigned __int64)(v33 + 1) >> 3) + 0x7FFF8000) )
      goto LABEL_117;
    v37 = v33[1];
    *(_QWORD *)(v32 + 16) = v37;
    if ( v37 )
    {
      if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
        goto LABEL_118;
      *(_QWORD *)v37 = v32 | *(_QWORD *)v37 & 1LL;
    }
    if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
      goto LABEL_119;
    if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
      goto LABEL_120;
    *v33 = *v33 & 1 | *(_QWORD *)v32 & 0xFFFFFFFFFFFFFFFELL;
    v31 = (boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> > *)v42;
    if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
      goto LABEL_121;
    v34 = *(_QWORD *)v42;
    if ( v32 == (*(_QWORD *)v42 & 0xFFFFFFFFFFFFFFFELL) )
      goto LABEL_122;
    v35 = *(_QWORD *)v32 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_BYTE *)(((v35 + 8) >> 3) + 0x7FFF8000) )
    {
      x = v35 + 8;
      __asan_report_load8();
LABEL_124:
      *(_QWORD *)(v35 + 8) = v33;
      goto LABEL_126;
    }
    if ( *(_QWORD *)(v35 + 8) == v32 )
      goto LABEL_124;
    if ( *(_BYTE *)(((v35 + 16) >> 3) + 0x7FFF8000) )
      break;
    *(_QWORD *)(v35 + 16) = v33;
LABEL_126:
    v33[1] = v32;
    *(_QWORD *)v32 = *(_QWORD *)v32 & 1LL | (unsigned __int64)v33;
  }
  v38 = (boost::multi_index::detail::sequenced_index<boost::multi_index::detail::nth_layer<1,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > >,boost::mpl::vector0<mpl_::na> > *)(v35 + 16);
  __asan_report_store8();
  boost::multi_index::detail::sequenced_index<boost::multi_index::detail::nth_layer<1,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>>,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::string const,&std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>::first>,std::less<std::string>>,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>,boost::mpl::vector0<mpl_::na>>::push_back(
    v38,
    (const boost::multi_index::detail::sequenced_index<boost::multi_index::detail::nth_layer<1,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > >,boost::mpl::vector0<mpl_::na> >::value_type *)root.r);
};
