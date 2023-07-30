// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/intrusive/rbtree_algorithms.hpp

// Line 283: range 000000000C76AF0D-000000000C76B02F
boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr __cdecl boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::erase(
        boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr header,
        boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr z)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr result; // rax
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 8 info:285";
  *(_QWORD *)(v2 + 16) = boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::erase;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::erase(
    (__int64)header,
    z,
    v2 + 32);
  boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rebalance_after_erasure(
    header,
    z,
    (const boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::data_for_rebalance *)(v2 + 32));
  result = z;
  if ( v6 == (char *)v2 )
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
  return result;
};

// Line 393: range 000000000C76AC5D-000000000C76ACA2
boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr __cdecl boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::insert_before(
        boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr header,
        boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr pos,
        boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr new_node)
{
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::insert_before(
    header,
    pos,
    new_node,
    0LL);
  boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rebalance_after_insertion(
    header,
    new_node);
  return new_node;
};

// Line 447: range 000000000C779BF8-000000000C779EE1
void __fastcall boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rebalance_after_erasure(
        boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr header,
        unsigned __int64 z,
        unsigned __int64 info)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  boost::intrusive::rbtree_node<void*> *v7; // rdx
  __int64 v8; // rax
  char v9; // dl
  __int64 v10; // rax
  char v11; // dl
  __int64 v12; // rax
  char v13; // dl
  boost::intrusive::rbtree_node<void*> *v14; // rdx
  boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::color new_z_color; // [rsp+28h] [rbp-78h]
  int v17; // [rsp+2Ch] [rbp-74h]
  boost::intrusive::rbtree_node<void*> **v18; // [rsp+30h] [rbp-70h]
  boost::intrusive::rbtree_node<void*> **v19; // [rsp+38h] [rbp-68h]
  char v20[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  v5 = v3 + 64;
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 5 z:448";
  *(_QWORD *)(v3 + 16) = boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rebalance_after_erasure;
  v6 = v3 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = z;
  if ( *(_BYTE *)(((info + 16) >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(info + 16, z);
  if ( *(_QWORD *)(info + 16) == *(_QWORD *)(v5 - 32) )
  {
    v12 = *(_QWORD *)(v5 - 32);
    v13 = *(_BYTE *)(((unsigned __int64)(v12 + 24) >> 3) + 0x7FFF8000);
    LOBYTE(z) = v13 != 0;
    if ( v13 != 0 && v13 <= 3 )
      __asan_report_load4();
    new_z_color = *(_DWORD *)(v12 + 24);
  }
  else
  {
    v19 = (boost::intrusive::rbtree_node<void*> **)(info + 16);
    if ( *(_BYTE *)(((info + 16) >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(info + 16, z);
    v7 = *v19;
    z = (unsigned __int64)&(*v19)->color_;
    if ( *(_BYTE *)((z >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((z >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4();
    new_z_color = v7->color_;
    v8 = *(_QWORD *)(v5 - 32);
    v9 = *(_BYTE *)(((unsigned __int64)(v8 + 24) >> 3) + 0x7FFF8000);
    LOBYTE(z) = v9 != 0;
    if ( v9 != 0 && v9 <= 3 )
      __asan_report_load4();
    v18 = (boost::intrusive::rbtree_node<void*> **)(info + 16);
    v17 = *(_DWORD *)(v8 + 24);
    if ( *(_BYTE *)(((info + 16) >> 3) + 0x7FFF8000) )
      __asan_report_load8(info + 16, z);
    v10 = (__int64)*v18;
    v11 = *(_BYTE *)(((unsigned __int64)&(*v18)->color_ >> 3) + 0x7FFF8000);
    LOBYTE(z) = v11 != 0;
    if ( v11 != 0 && v11 <= 3 )
      v10 = __asan_report_store4(&(*v18)->color_);
    *(_DWORD *)(v10 + 24) = v17;
  }
  if ( new_z_color )
  {
    if ( *(_BYTE *)(((info + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8(info + 8, z);
    v14 = *(boost::intrusive::rbtree_node<void*> **)(info + 8);
    if ( *(_BYTE *)((info >> 3) + 0x7FFF8000) )
      __asan_report_load8(info, z);
    boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rebalance_after_erasure_restore_invariants(
      header,
      *(boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)info,
      v14);
  }
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 464: range 000000000C783A09-000000000C7849EA
void __fastcall boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rebalance_after_erasure_restore_invariants(
        __int64 header,
        boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr x,
        boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr x_parent)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rax
  char v7; // dl
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  char v12; // dl
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // dl
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  char v22; // al
  __int64 v23; // rax
  char v24; // dl
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  char v27; // al
  __int64 v28; // rax
  __int64 v29; // rax
  char v30; // dl
  unsigned __int64 v31; // rax
  boost::intrusive::rbtree_node<void*> *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  char v37; // dl
  __int64 v38; // rax
  __int64 v39; // rax
  char v40; // dl
  unsigned __int64 v41; // rax
  boost::intrusive::rbtree_node<void*> *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rax
  char v46; // dl
  __int64 v47; // rax
  __int64 v48; // rax
  char v49; // dl
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  char v56; // al
  __int64 v57; // rax
  char v58; // dl
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  char v61; // al
  __int64 v62; // rax
  __int64 v63; // rax
  char v64; // dl
  unsigned __int64 v65; // rax
  boost::intrusive::rbtree_node<void*> *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  char v71; // dl
  __int64 v72; // rax
  __int64 v73; // rax
  char v74; // dl
  unsigned __int64 v75; // rax
  boost::intrusive::rbtree_node<void*> *v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rsi
  __int64 v79; // rax
  boost::intrusive::rbtree_node<void*> *headera; // [rsp+18h] [rbp-158h]
  int v82; // [rsp+3Ch] [rbp-134h]
  int v83; // [rsp+5Ch] [rbp-114h]
  boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr x_parent_left; // [rsp+68h] [rbp-108h]
  char v85[256]; // [rsp+70h] [rbp-100h] BYREF

  headera = (boost::intrusive::rbtree_node<void*> *)header;
  v3 = (unsigned __int64)v85;
  if ( _asan_option_detect_stack_use_after_return )
  {
    header = 224LL;
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 5 w:510 64 8 10 w_left:518 96 8 11 w_right:519 128 8 13 new_wleft:536 160 8 5 x:464 192 8"
                        " 12 x_parent:464";
  *(_QWORD *)(v3 + 16) = boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rebalance_after_erasure_restore_invariants;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -202116352;
  *(_QWORD *)(v3 + 160) = x;
  *(_QWORD *)(v3 + 192) = x_parent;
  while ( 1 )
  {
    if ( headera == *(boost::intrusive::rbtree_node<void*> **)(v3 + 192) )
      goto LABEL_10;
    if ( !*(_QWORD *)(v3 + 160) )
      goto LABEL_11;
    v6 = *(_QWORD *)(v3 + 160);
    v7 = *(_BYTE *)(((unsigned __int64)(v6 + 24) >> 3) + 0x7FFF8000);
    LOBYTE(x) = v7 != 0;
    if ( v7 != 0 && v7 <= 3 )
    {
      header = v6 + 24;
      __asan_report_load4();
    }
    if ( *(_DWORD *)(v6 + 24) != 1 )
LABEL_10:
      v8 = 1;
    else
LABEL_11:
      v8 = 0;
    if ( v8 )
      break;
    v9 = *(_QWORD *)(v3 + 192);
    if ( *(_BYTE *)(((unsigned __int64)(v9 + 8) >> 3) + 0x7FFF8000) )
    {
      header = v9 + 8;
      v9 = __asan_report_load8(v9 + 8, x);
    }
    x_parent_left = *(boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v9 + 8);
    if ( x_parent_left == *(boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v3 + 160) )
    {
      v10 = *(_QWORD *)(v3 + 192);
      if ( *(_BYTE *)(((unsigned __int64)(v10 + 16) >> 3) + 0x7FFF8000) )
      {
        header = v10 + 16;
        v10 = __asan_report_load8(v10 + 16, x);
      }
      *(_QWORD *)(v3 + 32) = *(_QWORD *)(v10 + 16);
      if ( !*(_QWORD *)(v3 + 32) )
      {
        __asan_handle_no_return(header);
        __assert_fail(
          "w",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/rbtree_algorithms.hpp",
          0x1DBu,
          "static void boost::intrusive::rbtree_algorithms<NodeTraits>::rebalance_after_erasure_restore_invariants(boost:"
          ":intrusive::rbtree_algorithms<NodeTraits>::node_ptr, boost::intrusive::rbtree_algorithms<NodeTraits>::node_ptr"
          ", boost::intrusive::rbtree_algorithms<NodeTraits>::node_ptr) [with NodeTraits = boost::intrusive::rbtree_node_"
          "traits<void*, false>; boost::intrusive::rbtree_algorithms<NodeTraits>::node_ptr = boost::intrusive::rbtree_node<void*>*]");
      }
      v11 = *(_QWORD *)(v3 + 32);
      v12 = *(_BYTE *)(((unsigned __int64)(v11 + 24) >> 3) + 0x7FFF8000);
      LOBYTE(x) = v12 != 0;
      if ( v12 != 0 && v12 <= 3 )
      {
        header = v11 + 24;
        __asan_report_load4();
      }
      if ( !*(_DWORD *)(v11 + 24) )
      {
        v13 = *(_QWORD *)(v3 + 32);
        if ( *(_BYTE *)(((unsigned __int64)(v13 + 24) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(v13 + 24) >> 3) + 0x7FFF8000) <= 3 )
        {
          v13 = __asan_report_store4(v13 + 24);
        }
        *(_DWORD *)(v13 + 24) = 1;
        v14 = *(_QWORD *)(v3 + 192);
        v15 = *(_BYTE *)(((unsigned __int64)(v14 + 24) >> 3) + 0x7FFF8000);
        LOBYTE(x) = v15 != 0;
        if ( v15 != 0 && v15 <= 3 )
          v14 = __asan_report_store4(v14 + 24);
        *(_DWORD *)(v14 + 24) = 0;
        v16 = *(_QWORD *)(v3 + 192);
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          v16 = __asan_report_load8(*(_QWORD *)(v3 + 192), x);
        x = *(boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v3 + 32);
        header = *(_QWORD *)(v3 + 192);
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rotate_left(
          (boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr)header,
          x,
          *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)v16,
          headera);
        v17 = *(_QWORD *)(v3 + 192);
        if ( *(_BYTE *)(((unsigned __int64)(v17 + 16) >> 3) + 0x7FFF8000) )
        {
          header = v17 + 16;
          v17 = __asan_report_load8(v17 + 16, x);
        }
        *(_QWORD *)(v3 + 32) = *(_QWORD *)(v17 + 16);
        if ( !*(_QWORD *)(v3 + 32) )
        {
          __asan_handle_no_return(header);
          __assert_fail(
            "w",
            "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/rbtree_algorithms.hpp",
            0x1E1u,
            "static void boost::intrusive::rbtree_algorithms<NodeTraits>::rebalance_after_erasure_restore_invariants(boos"
            "t::intrusive::rbtree_algorithms<NodeTraits>::node_ptr, boost::intrusive::rbtree_algorithms<NodeTraits>::node"
            "_ptr, boost::intrusive::rbtree_algorithms<NodeTraits>::node_ptr) [with NodeTraits = boost::intrusive::rbtree"
            "_node_traits<void*, false>; boost::intrusive::rbtree_algorithms<NodeTraits>::node_ptr = boost::intrusive::rb"
            "tree_node<void*>*]");
        }
      }
      v18 = *(_QWORD *)(v3 + 32);
      if ( *(_BYTE *)(((unsigned __int64)(v18 + 8) >> 3) + 0x7FFF8000) )
      {
        header = v18 + 8;
        v18 = __asan_report_load8(v18 + 8, x);
      }
      *(_QWORD *)(v3 + 64) = *(_QWORD *)(v18 + 8);
      v19 = *(_QWORD *)(v3 + 32);
      if ( *(_BYTE *)(((unsigned __int64)(v19 + 16) >> 3) + 0x7FFF8000) )
      {
        header = v19 + 16;
        v19 = __asan_report_load8(v19 + 16, x);
      }
      *(_QWORD *)(v3 + 96) = *(_QWORD *)(v19 + 16);
      if ( *(_QWORD *)(v3 + 64) )
      {
        v20 = *(_QWORD *)(v3 + 64);
        if ( *(_BYTE *)(((unsigned __int64)(v20 + 24) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(v20 + 24) >> 3) + 0x7FFF8000) <= 3 )
        {
          header = v20 + 24;
          __asan_report_load4();
        }
        if ( *(_DWORD *)(v20 + 24) != 1 )
          goto LABEL_46;
      }
      if ( !*(_QWORD *)(v3 + 96) )
        goto LABEL_45;
      v21 = *(_QWORD *)(v3 + 96);
      if ( *(_BYTE *)(((unsigned __int64)(v21 + 24) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(v21 + 24) >> 3) + 0x7FFF8000) <= 3 )
      {
        header = v21 + 24;
        __asan_report_load4();
      }
      if ( *(_DWORD *)(v21 + 24) != 1 )
LABEL_46:
        v22 = 0;
      else
LABEL_45:
        v22 = 1;
      if ( !v22 )
      {
        if ( !*(_QWORD *)(v3 + 96) )
          goto LABEL_57;
        v26 = *(_QWORD *)(v3 + 96);
        if ( *(_BYTE *)(((unsigned __int64)(v26 + 24) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(v26 + 24) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( *(_DWORD *)(v26 + 24) != 1 )
          v27 = 0;
        else
LABEL_57:
          v27 = 1;
        if ( v27 )
        {
          v28 = *(_QWORD *)(v3 + 64);
          if ( *(_BYTE *)(((unsigned __int64)(v28 + 24) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)(v28 + 24) >> 3) + 0x7FFF8000) <= 3 )
          {
            v28 = __asan_report_store4(v28 + 24);
          }
          *(_DWORD *)(v28 + 24) = 1;
          v29 = *(_QWORD *)(v3 + 32);
          v30 = *(_BYTE *)(((unsigned __int64)(v29 + 24) >> 3) + 0x7FFF8000);
          LOBYTE(x) = v30 != 0;
          if ( v30 != 0 && v30 <= 3 )
            v29 = __asan_report_store4(v29 + 24);
          *(_DWORD *)(v29 + 24) = 0;
          v31 = *(_QWORD *)(v3 + 32);
          if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
            v31 = __asan_report_load8(*(_QWORD *)(v3 + 32), x);
          x = *(boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v3 + 64);
          v32 = *(boost::intrusive::rbtree_node<void*> **)(v3 + 32);
          boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rotate_right(
            v32,
            x,
            *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)v31,
            headera);
          v33 = *(_QWORD *)(v3 + 192);
          if ( *(_BYTE *)(((unsigned __int64)(v33 + 16) >> 3) + 0x7FFF8000) )
          {
            v32 = (boost::intrusive::rbtree_node<void*> *)(v33 + 16);
            v33 = __asan_report_load8(v33 + 16, x);
          }
          *(_QWORD *)(v3 + 32) = *(_QWORD *)(v33 + 16);
          if ( !*(_QWORD *)(v3 + 32) )
          {
            __asan_handle_no_return(v32);
            __assert_fail(
              "w",
              "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/rbtre"
              "e_algorithms.hpp",
              0x1F1u,
              "static void boost::intrusive::rbtree_algorithms<NodeTraits>::rebalance_after_erasure_restore_invariants(bo"
              "ost::intrusive::rbtree_algorithms<NodeTraits>::node_ptr, boost::intrusive::rbtree_algorithms<NodeTraits>::"
              "node_ptr, boost::intrusive::rbtree_algorithms<NodeTraits>::node_ptr) [with NodeTraits = boost::intrusive::"
              "rbtree_node_traits<void*, false>; boost::intrusive::rbtree_algorithms<NodeTraits>::node_ptr = boost::intru"
              "sive::rbtree_node<void*>*]");
          }
        }
        v34 = *(_QWORD *)(v3 + 192);
        if ( *(_BYTE *)(((unsigned __int64)(v34 + 24) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(v34 + 24) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v82 = *(_DWORD *)(v34 + 24);
        v35 = *(_QWORD *)(v3 + 32);
        if ( *(_BYTE *)(((unsigned __int64)(v35 + 24) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(v35 + 24) >> 3) + 0x7FFF8000) <= 3 )
        {
          v35 = __asan_report_store4(v35 + 24);
        }
        *(_DWORD *)(v35 + 24) = v82;
        v36 = *(_QWORD *)(v3 + 192);
        v37 = *(_BYTE *)(((unsigned __int64)(v36 + 24) >> 3) + 0x7FFF8000);
        LOBYTE(x) = v37 != 0;
        if ( v37 != 0 && v37 <= 3 )
          v36 = __asan_report_store4(v36 + 24);
        *(_DWORD *)(v36 + 24) = 1;
        v38 = *(_QWORD *)(v3 + 32);
        if ( *(_BYTE *)(((unsigned __int64)(v38 + 16) >> 3) + 0x7FFF8000) )
          v38 = __asan_report_load8(v38 + 16, x);
        *(_QWORD *)(v3 + 128) = *(_QWORD *)(v38 + 16);
        if ( *(_QWORD *)(v3 + 128) )
        {
          v39 = *(_QWORD *)(v3 + 128);
          v40 = *(_BYTE *)(((unsigned __int64)(v39 + 24) >> 3) + 0x7FFF8000);
          LOBYTE(x) = v40 != 0;
          if ( v40 != 0 && v40 <= 3 )
            v39 = __asan_report_store4(v39 + 24);
          *(_DWORD *)(v39 + 24) = 1;
        }
        v41 = *(_QWORD *)(v3 + 192);
        if ( *(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
          v41 = __asan_report_load8(*(_QWORD *)(v3 + 192), x);
        v42 = *(boost::intrusive::rbtree_node<void*> **)v41;
        v43 = *(_QWORD *)(v3 + 192);
        v44 = *(unsigned __int8 *)(((unsigned __int64)(v43 + 16) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v44 )
          v43 = __asan_report_load8(v43 + 16, v44);
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rotate_left(
          *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v3 + 192),
          *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v43 + 16),
          v42,
          headera);
        break;
      }
      v23 = *(_QWORD *)(v3 + 32);
      v24 = *(_BYTE *)(((unsigned __int64)(v23 + 24) >> 3) + 0x7FFF8000);
      LOBYTE(x) = v24 != 0;
      if ( v24 != 0 && v24 <= 3 )
      {
        header = v23 + 24;
        v23 = __asan_report_store4(v23 + 24);
      }
      *(_DWORD *)(v23 + 24) = 0;
      *(_QWORD *)(v3 + 160) = *(_QWORD *)(v3 + 192);
      v25 = *(_QWORD *)(v3 + 192);
      if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
      {
        header = *(_QWORD *)(v3 + 192);
        v25 = __asan_report_load8(header, x);
      }
      *(_QWORD *)(v3 + 192) = *(_QWORD *)v25;
    }
    else
    {
      *(_QWORD *)(v3 + 32) = x_parent_left;
      v45 = *(_QWORD *)(v3 + 32);
      v46 = *(_BYTE *)(((unsigned __int64)(v45 + 24) >> 3) + 0x7FFF8000);
      LOBYTE(x) = v46 != 0;
      if ( v46 != 0 && v46 <= 3 )
      {
        header = v45 + 24;
        __asan_report_load4();
      }
      if ( !*(_DWORD *)(v45 + 24) )
      {
        v47 = *(_QWORD *)(v3 + 32);
        if ( *(_BYTE *)(((unsigned __int64)(v47 + 24) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(v47 + 24) >> 3) + 0x7FFF8000) <= 3 )
        {
          v47 = __asan_report_store4(v47 + 24);
        }
        *(_DWORD *)(v47 + 24) = 1;
        v48 = *(_QWORD *)(v3 + 192);
        v49 = *(_BYTE *)(((unsigned __int64)(v48 + 24) >> 3) + 0x7FFF8000);
        LOBYTE(x) = v49 != 0;
        if ( v49 != 0 && v49 <= 3 )
          v48 = __asan_report_store4(v48 + 24);
        *(_DWORD *)(v48 + 24) = 0;
        v50 = *(_QWORD *)(v3 + 192);
        if ( *(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
          v50 = __asan_report_load8(*(_QWORD *)(v3 + 192), x);
        x = *(boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v3 + 32);
        header = *(_QWORD *)(v3 + 192);
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rotate_right(
          (boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr)header,
          x,
          *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)v50,
          headera);
        v51 = *(_QWORD *)(v3 + 192);
        if ( *(_BYTE *)(((unsigned __int64)(v51 + 8) >> 3) + 0x7FFF8000) )
        {
          header = v51 + 8;
          v51 = __asan_report_load8(v51 + 8, x);
        }
        *(_QWORD *)(v3 + 32) = *(_QWORD *)(v51 + 8);
        if ( !*(_QWORD *)(v3 + 32) )
        {
          __asan_handle_no_return(header);
          __assert_fail(
            "w",
            "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/rbtree_algorithms.hpp",
            0x204u,
            "static void boost::intrusive::rbtree_algorithms<NodeTraits>::rebalance_after_erasure_restore_invariants(boos"
            "t::intrusive::rbtree_algorithms<NodeTraits>::node_ptr, boost::intrusive::rbtree_algorithms<NodeTraits>::node"
            "_ptr, boost::intrusive::rbtree_algorithms<NodeTraits>::node_ptr) [with NodeTraits = boost::intrusive::rbtree"
            "_node_traits<void*, false>; boost::intrusive::rbtree_algorithms<NodeTraits>::node_ptr = boost::intrusive::rb"
            "tree_node<void*>*]");
        }
      }
      v52 = *(_QWORD *)(v3 + 32);
      if ( *(_BYTE *)(((unsigned __int64)(v52 + 8) >> 3) + 0x7FFF8000) )
      {
        header = v52 + 8;
        v52 = __asan_report_load8(v52 + 8, x);
      }
      *(_QWORD *)(v3 + 64) = *(_QWORD *)(v52 + 8);
      v53 = *(_QWORD *)(v3 + 32);
      if ( *(_BYTE *)(((unsigned __int64)(v53 + 16) >> 3) + 0x7FFF8000) )
      {
        header = v53 + 16;
        v53 = __asan_report_load8(v53 + 16, x);
      }
      *(_QWORD *)(v3 + 96) = *(_QWORD *)(v53 + 16);
      if ( *(_QWORD *)(v3 + 96) )
      {
        v54 = *(_QWORD *)(v3 + 96);
        if ( *(_BYTE *)(((unsigned __int64)(v54 + 24) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(v54 + 24) >> 3) + 0x7FFF8000) <= 3 )
        {
          header = v54 + 24;
          __asan_report_load4();
        }
        if ( *(_DWORD *)(v54 + 24) != 1 )
          goto LABEL_113;
      }
      if ( !*(_QWORD *)(v3 + 64) )
        goto LABEL_112;
      v55 = *(_QWORD *)(v3 + 64);
      if ( *(_BYTE *)(((unsigned __int64)(v55 + 24) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(v55 + 24) >> 3) + 0x7FFF8000) <= 3 )
      {
        header = v55 + 24;
        __asan_report_load4();
      }
      if ( *(_DWORD *)(v55 + 24) != 1 )
LABEL_113:
        v56 = 0;
      else
LABEL_112:
        v56 = 1;
      if ( !v56 )
      {
        if ( !*(_QWORD *)(v3 + 64) )
          goto LABEL_124;
        v60 = *(_QWORD *)(v3 + 64);
        if ( *(_BYTE *)(((unsigned __int64)(v60 + 24) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(v60 + 24) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( *(_DWORD *)(v60 + 24) != 1 )
          v61 = 0;
        else
LABEL_124:
          v61 = 1;
        if ( v61 )
        {
          v62 = *(_QWORD *)(v3 + 96);
          if ( *(_BYTE *)(((unsigned __int64)(v62 + 24) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)(v62 + 24) >> 3) + 0x7FFF8000) <= 3 )
          {
            v62 = __asan_report_store4(v62 + 24);
          }
          *(_DWORD *)(v62 + 24) = 1;
          v63 = *(_QWORD *)(v3 + 32);
          v64 = *(_BYTE *)(((unsigned __int64)(v63 + 24) >> 3) + 0x7FFF8000);
          LOBYTE(x) = v64 != 0;
          if ( v64 != 0 && v64 <= 3 )
            v63 = __asan_report_store4(v63 + 24);
          *(_DWORD *)(v63 + 24) = 0;
          v65 = *(_QWORD *)(v3 + 32);
          if ( *(_BYTE *)((v65 >> 3) + 0x7FFF8000) )
            v65 = __asan_report_load8(*(_QWORD *)(v3 + 32), x);
          x = *(boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v3 + 96);
          v66 = *(boost::intrusive::rbtree_node<void*> **)(v3 + 32);
          boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rotate_left(
            v66,
            x,
            *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)v65,
            headera);
          v67 = *(_QWORD *)(v3 + 192);
          if ( *(_BYTE *)(((unsigned __int64)(v67 + 8) >> 3) + 0x7FFF8000) )
          {
            v66 = (boost::intrusive::rbtree_node<void*> *)(v67 + 8);
            v67 = __asan_report_load8(v67 + 8, x);
          }
          *(_QWORD *)(v3 + 32) = *(_QWORD *)(v67 + 8);
          if ( !*(_QWORD *)(v3 + 32) )
          {
            __asan_handle_no_return(v66);
            __assert_fail(
              "w",
              "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/rbtre"
              "e_algorithms.hpp",
              0x214u,
              "static void boost::intrusive::rbtree_algorithms<NodeTraits>::rebalance_after_erasure_restore_invariants(bo"
              "ost::intrusive::rbtree_algorithms<NodeTraits>::node_ptr, boost::intrusive::rbtree_algorithms<NodeTraits>::"
              "node_ptr, boost::intrusive::rbtree_algorithms<NodeTraits>::node_ptr) [with NodeTraits = boost::intrusive::"
              "rbtree_node_traits<void*, false>; boost::intrusive::rbtree_algorithms<NodeTraits>::node_ptr = boost::intru"
              "sive::rbtree_node<void*>*]");
          }
        }
        v68 = *(_QWORD *)(v3 + 192);
        if ( *(_BYTE *)(((unsigned __int64)(v68 + 24) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(v68 + 24) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v83 = *(_DWORD *)(v68 + 24);
        v69 = *(_QWORD *)(v3 + 32);
        if ( *(_BYTE *)(((unsigned __int64)(v69 + 24) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(v69 + 24) >> 3) + 0x7FFF8000) <= 3 )
        {
          v69 = __asan_report_store4(v69 + 24);
        }
        *(_DWORD *)(v69 + 24) = v83;
        v70 = *(_QWORD *)(v3 + 192);
        v71 = *(_BYTE *)(((unsigned __int64)(v70 + 24) >> 3) + 0x7FFF8000);
        LOBYTE(x) = v71 != 0;
        if ( v71 != 0 && v71 <= 3 )
          v70 = __asan_report_store4(v70 + 24);
        *(_DWORD *)(v70 + 24) = 1;
        v72 = *(_QWORD *)(v3 + 32);
        if ( *(_BYTE *)(((unsigned __int64)(v72 + 8) >> 3) + 0x7FFF8000) )
          v72 = __asan_report_load8(v72 + 8, x);
        *(_QWORD *)(v3 + 128) = *(_QWORD *)(v72 + 8);
        if ( *(_QWORD *)(v3 + 128) )
        {
          v73 = *(_QWORD *)(v3 + 128);
          v74 = *(_BYTE *)(((unsigned __int64)(v73 + 24) >> 3) + 0x7FFF8000);
          LOBYTE(x) = v74 != 0;
          if ( v74 != 0 && v74 <= 3 )
            v73 = __asan_report_store4(v73 + 24);
          *(_DWORD *)(v73 + 24) = 1;
        }
        v75 = *(_QWORD *)(v3 + 192);
        if ( *(_BYTE *)((v75 >> 3) + 0x7FFF8000) )
          v75 = __asan_report_load8(*(_QWORD *)(v3 + 192), x);
        v76 = *(boost::intrusive::rbtree_node<void*> **)v75;
        v77 = *(_QWORD *)(v3 + 192);
        v78 = *(unsigned __int8 *)(((unsigned __int64)(v77 + 8) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v78 )
          v77 = __asan_report_load8(v77 + 8, v78);
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rotate_right(
          *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v3 + 192),
          *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v77 + 8),
          v76,
          headera);
        break;
      }
      v57 = *(_QWORD *)(v3 + 32);
      v58 = *(_BYTE *)(((unsigned __int64)(v57 + 24) >> 3) + 0x7FFF8000);
      LOBYTE(x) = v58 != 0;
      if ( v58 != 0 && v58 <= 3 )
      {
        header = v57 + 24;
        v57 = __asan_report_store4(v57 + 24);
      }
      *(_DWORD *)(v57 + 24) = 0;
      *(_QWORD *)(v3 + 160) = *(_QWORD *)(v3 + 192);
      v59 = *(_QWORD *)(v3 + 192);
      if ( *(_BYTE *)((v59 >> 3) + 0x7FFF8000) )
      {
        header = *(_QWORD *)(v3 + 192);
        v59 = __asan_report_load8(header, x);
      }
      *(_QWORD *)(v3 + 192) = *(_QWORD *)v59;
    }
  }
  if ( *(_QWORD *)(v3 + 160) )
  {
    v79 = *(_QWORD *)(v3 + 160);
    if ( *(_BYTE *)(((unsigned __int64)(v79 + 24) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(v79 + 24) >> 3) + 0x7FFF8000) <= 3 )
    {
      v79 = __asan_report_store4(v79 + 24);
    }
    *(_DWORD *)(v79 + 24) = 1;
  }
  if ( v85 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 548: range 000000000C778B67-000000000C77918B
void __fastcall boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rebalance_after_insertion(
        boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr header,
        boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr p)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rax
  char v6; // dl
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  char v10; // al
  __int64 v11; // rax
  char v12; // dl
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  char v17; // dl
  char v18; // al
  __int64 v19; // rax
  __int64 v20; // rax
  char v21; // dl
  __int64 v22; // rax
  boost::intrusive::rbtree_node<void*> *v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rsi
  boost::intrusive::rbtree_node<void*> *v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  bool p_parent_is_left_child; // [rsp+1Eh] [rbp-102h]
  boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr p_grandparent_left; // [rsp+38h] [rbp-E8h]
  char v34[224]; // [rsp+40h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 12 p_parent:552 64 8 17 p_grandparent:553 96 8 5 x:561 128 8 10 header:548 160 8 5 p:548";
  *(_QWORD *)(v2 + 16) = boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rebalance_after_insertion;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -202116352;
  *(_QWORD *)(v2 + 128) = header;
  *(_QWORD *)(v2 + 160) = p;
  v5 = *(_QWORD *)(v2 + 160);
  v6 = *(_BYTE *)(((unsigned __int64)(v5 + 24) >> 3) + 0x7FFF8000);
  LOBYTE(p) = v6 != 0;
  if ( v6 != 0 && v6 <= 3 )
    v5 = __asan_report_store4(v5 + 24);
  *(_DWORD *)(v5 + 24) = 0;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v2 + 160);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(*(_QWORD *)(v2 + 160), p);
    *(_QWORD *)(v2 + 32) = *(_QWORD *)v7;
    v8 = *(_QWORD *)(v2 + 32);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(*(_QWORD *)(v2 + 32), p);
    *(_QWORD *)(v2 + 64) = *(_QWORD *)v8;
    if ( *(_QWORD *)(v2 + 32) == *(_QWORD *)(v2 + 128) )
      goto LABEL_16;
    v9 = *(_QWORD *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)(v9 + 24) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(v9 + 24) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( *(_DWORD *)(v9 + 24) == 1 || *(_QWORD *)(v2 + 64) == *(_QWORD *)(v2 + 128) )
LABEL_16:
      v10 = 1;
    else
      v10 = 0;
    if ( v10 )
      break;
    v11 = *(_QWORD *)(v2 + 64);
    v12 = *(_BYTE *)(((unsigned __int64)(v11 + 24) >> 3) + 0x7FFF8000);
    LOBYTE(p) = v12 != 0;
    if ( v12 != 0 && v12 <= 3 )
      v11 = __asan_report_store4(v11 + 24);
    *(_DWORD *)(v11 + 24) = 0;
    v13 = *(_QWORD *)(v2 + 64);
    if ( *(_BYTE *)(((unsigned __int64)(v13 + 8) >> 3) + 0x7FFF8000) )
      v13 = __asan_report_load8(v13 + 8, p);
    p_grandparent_left = *(boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v13 + 8);
    p_parent_is_left_child = p_grandparent_left == *(boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v2 + 32);
    if ( p_grandparent_left == *(boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v2 + 32) )
    {
      v14 = *(_QWORD *)(v2 + 64);
      if ( *(_BYTE *)(((unsigned __int64)(v14 + 16) >> 3) + 0x7FFF8000) )
        v14 = __asan_report_load8(v14 + 16, p);
      v15 = *(_QWORD *)(v14 + 16);
    }
    else
    {
      v15 = *(_QWORD *)(v13 + 8);
    }
    *(_QWORD *)(v2 + 96) = v15;
    if ( !*(_QWORD *)(v2 + 96) )
      goto LABEL_33;
    v16 = *(_QWORD *)(v2 + 96);
    v17 = *(_BYTE *)(((unsigned __int64)(v16 + 24) >> 3) + 0x7FFF8000);
    LOBYTE(p) = v17 != 0;
    if ( v17 != 0 && v17 <= 3 )
      __asan_report_load4();
    if ( *(_DWORD *)(v16 + 24) )
LABEL_33:
      v18 = 0;
    else
      v18 = 1;
    if ( !v18 )
    {
      v22 = *(_QWORD *)(v2 + 32);
      if ( *(_BYTE *)(((unsigned __int64)(v22 + 8) >> 3) + 0x7FFF8000) )
        v22 = __asan_report_load8(v22 + 8, p);
      if ( p_parent_is_left_child )
      {
        if ( *(_QWORD *)(v22 + 8) != *(_QWORD *)(v2 + 160) )
        {
          boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rotate_left_no_parent_fix(
            *(_QWORD *)(v2 + 32),
            *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v2 + 160));
          *(_QWORD *)(v2 + 32) = *(_QWORD *)(v2 + 160);
        }
        v23 = *(boost::intrusive::rbtree_node<void*> **)(v2 + 128);
        v24 = *(_QWORD *)(v2 + 64);
        v25 = *(unsigned __int8 *)((v24 >> 3) + 0x7FFF8000);
        if ( (_BYTE)v25 )
          v24 = __asan_report_load8(*(_QWORD *)(v2 + 64), v25);
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rotate_right(
          *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v2 + 64),
          *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v2 + 32),
          *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)v24,
          v23);
      }
      else
      {
        if ( *(_QWORD *)(v22 + 8) == *(_QWORD *)(v2 + 160) )
        {
          boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rotate_right_no_parent_fix(
            *(_QWORD *)(v2 + 32),
            *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v2 + 160));
          *(_QWORD *)(v2 + 32) = *(_QWORD *)(v2 + 160);
        }
        v26 = *(boost::intrusive::rbtree_node<void*> **)(v2 + 128);
        v27 = *(_QWORD *)(v2 + 64);
        v28 = *(unsigned __int8 *)((v27 >> 3) + 0x7FFF8000);
        if ( (_BYTE)v28 )
          v27 = __asan_report_load8(*(_QWORD *)(v2 + 64), v28);
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rotate_left(
          *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v2 + 64),
          *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v2 + 32),
          *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)v27,
          v26);
      }
      v29 = *(_QWORD *)(v2 + 32);
      if ( *(_BYTE *)(((unsigned __int64)(v29 + 24) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(v29 + 24) >> 3) + 0x7FFF8000) <= 3 )
      {
        v29 = __asan_report_store4(v29 + 24);
      }
      *(_DWORD *)(v29 + 24) = 1;
      break;
    }
    v19 = *(_QWORD *)(v2 + 96);
    if ( *(_BYTE *)(((unsigned __int64)(v19 + 24) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(v19 + 24) >> 3) + 0x7FFF8000) <= 3 )
    {
      v19 = __asan_report_store4(v19 + 24);
    }
    *(_DWORD *)(v19 + 24) = 1;
    v20 = *(_QWORD *)(v2 + 32);
    v21 = *(_BYTE *)(((unsigned __int64)(v20 + 24) >> 3) + 0x7FFF8000);
    LOBYTE(p) = v21 != 0;
    if ( v21 != 0 && v21 <= 3 )
      v20 = __asan_report_store4(v20 + 24);
    *(_DWORD *)(v20 + 24) = 1;
    *(_QWORD *)(v2 + 160) = *(_QWORD *)(v2 + 64);
  }
  v30 = *(_QWORD *)(v2 + 128);
  if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
    v30 = __asan_report_load8(*(_QWORD *)(v2 + 128), 1LL);
  *(_QWORD *)(v2 + 96) = *(_QWORD *)v30;
  v31 = *(_QWORD *)(v2 + 96);
  if ( *(_BYTE *)(((unsigned __int64)(v31 + 24) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(v31 + 24) >> 3) + 0x7FFF8000) <= 3 )
  {
    v31 = __asan_report_store4(v31 + 24);
  }
  *(_DWORD *)(v31 + 24) = 1;
  if ( v34 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
