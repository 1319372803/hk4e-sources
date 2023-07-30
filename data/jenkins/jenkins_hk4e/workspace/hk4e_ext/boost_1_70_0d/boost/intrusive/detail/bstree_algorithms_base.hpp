// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/intrusive/detail/bstree_algorithms_base.hpp

// Line 45: range 000000000C76ACA3-000000000C76AF0C
boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr __cdecl boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void *,false>>::next_node(
        const boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *node)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  _DWORD *v5; // r12
  boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr v6; // rdx
  __int64 v7; // rsi
  boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr result; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  boost::intrusive::rbtree_node<void*> *n_right; // [rsp+10h] [rbp-90h]
  char v18[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = v2 + 96;
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 4 n:52 64 8 4 p:53";
  *(_QWORD *)(v2 + 16) = boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void *,false>>::next_node;
  v5 = (_DWORD *)(v2 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)node >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(node, v1);
  v6 = *node;
  v7 = *(unsigned __int8 *)(((unsigned __int64)&(*node)->right_ >> 3) + 0x7FFF8000);
  if ( (_BYTE)v7 )
    v4 = __asan_report_load8(&(*node)->right_, v7);
  n_right = v6->right_;
  if ( n_right )
  {
    result = boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void *,false>>::minimum(n_right);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)node >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(node, v7);
    *(boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v4 - 64) = *node;
    v9 = *(_QWORD *)(v4 - 64);
    v10 = *(unsigned __int8 *)((v9 >> 3) + 0x7FFF8000);
    if ( (_BYTE)v10 )
      v4 = __asan_report_load8(*(_QWORD *)(v4 - 64), v10);
    for ( *(_QWORD *)(v4 - 32) = *(_QWORD *)v9; ; *(_QWORD *)(v4 - 32) = *(_QWORD *)v13 )
    {
      v11 = *(_QWORD *)(v4 - 32);
      v12 = *(unsigned __int8 *)(((unsigned __int64)(v11 + 16) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v12 )
        v4 = __asan_report_load8(v11 + 16, v12);
      if ( *(_QWORD *)(v11 + 16) != *(_QWORD *)(v4 - 64) )
        break;
      *(_QWORD *)(v4 - 64) = *(_QWORD *)(v4 - 32);
      v13 = *(_QWORD *)(v4 - 32);
      v14 = *(unsigned __int8 *)((v13 >> 3) + 0x7FFF8000);
      if ( (_BYTE)v14 )
        v4 = __asan_report_load8(*(_QWORD *)(v4 - 32), v14);
    }
    v15 = *(_QWORD *)(v4 - 64);
    v16 = *(unsigned __int8 *)(((unsigned __int64)(v15 + 16) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v16 )
      v4 = __asan_report_load8(v15 + 16, v16);
    if ( *(_QWORD *)(v15 + 16) == *(_QWORD *)(v4 - 32) )
      result = *(boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v4 - 64);
    else
      result = *(boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v4 - 32);
  }
  if ( v18 == (char *)v2 )
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

// Line 69: range 000000000C78AD6E-000000000C78B0A0
boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr __cdecl boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void *,false>>::prev_node(
        const boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *node)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *v5; // rax
  boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr result; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 4 p:79 64 8 4 x:80";
  *(_QWORD *)(v2 + 16) = boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void *,false>>::prev_node;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)node >> 3) + 0x7FFF8000) )
    __asan_report_load8(node, v1);
  *(boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v2 + 64) = *node;
  if ( boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void *,false>>::is_header((const boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::const_node_ptr *)(v2 + 64)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)node >> 3) + 0x7FFF8000) )
      __asan_report_load8(node, v1);
    v5 = (boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)*node;
    if ( *(_BYTE *)(((unsigned __int64)*node >> 3) + 0x7FFF8000) )
      v5 = (boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)__asan_report_load8(*node, v1);
    result = boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void *,false>>::maximum(*v5);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)node >> 3) + 0x7FFF8000) )
      __asan_report_load8(node, v1);
    v7 = (__int64)*node;
    if ( *(_BYTE *)(((unsigned __int64)&(*node)->left_ >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(&(*node)->left_, v1);
    if ( *(_QWORD *)(v7 + 8) )
    {
      if ( *(_BYTE *)(((unsigned __int64)node >> 3) + 0x7FFF8000) )
        __asan_report_load8(node, v1);
      v8 = (__int64)*node;
      if ( *(_BYTE *)(((unsigned __int64)&(*node)->left_ >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(&(*node)->left_, v1);
      result = boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void *,false>>::maximum(*(boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v8 + 8));
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)node >> 3) + 0x7FFF8000) )
        __asan_report_load8(node, v1);
      *(boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v2 + 32) = *node;
      v9 = *(_QWORD *)(v2 + 32);
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8(*(_QWORD *)(v2 + 32), v1);
      for ( *(_QWORD *)(v2 + 64) = *(_QWORD *)v9; ; *(_QWORD *)(v2 + 64) = *(_QWORD *)v11 )
      {
        v10 = *(_QWORD *)(v2 + 64);
        if ( *(_BYTE *)(((unsigned __int64)(v10 + 8) >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8(v10 + 8, v1);
        if ( *(_QWORD *)(v10 + 8) != *(_QWORD *)(v2 + 32) )
          break;
        *(_QWORD *)(v2 + 32) = *(_QWORD *)(v2 + 64);
        v11 = *(_QWORD *)(v2 + 64);
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          v11 = __asan_report_load8(*(_QWORD *)(v2 + 64), v1);
      }
      result = *(boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v2 + 64);
    }
  }
  if ( v12 == (char *)v2 )
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

// Line 96: range 000000000C77918C-000000000C7792A7
boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr __fastcall boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void *,false>>::minimum(
        boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr node)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr result; // rax
  boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr p_left; // [rsp+18h] [rbp-58h]
  char v9[80]; // [rsp+20h] [rbp-50h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  v3 = v1 + 64;
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 7 node:96";
  *(_QWORD *)(v1 + 16) = boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void *,false>>::minimum;
  v4 = v1 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v1 + 32) = node;
  v5 = *(_QWORD *)(v1 + 32);
  if ( *(_BYTE *)(((unsigned __int64)(v5 + 8) >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(v5 + 8, v5 + 8);
  for ( p_left = *(boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v5 + 8);
        p_left;
        p_left = *(boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v6 + 8) )
  {
    *(_QWORD *)(v3 - 32) = p_left;
    v6 = *(_QWORD *)(v3 - 32);
    if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8(v6 + 8, v6 + 8);
  }
  result = *(boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v3 - 32);
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)(v4 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)(v4 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 113: range 000000000C7838ED-000000000C783A08
boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr __fastcall boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void *,false>>::maximum(
        boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr node)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr result; // rax
  boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr p_right; // [rsp+18h] [rbp-58h]
  char v9[80]; // [rsp+20h] [rbp-50h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  v3 = v1 + 64;
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 8 node:113";
  *(_QWORD *)(v1 + 16) = boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void *,false>>::maximum;
  v4 = v1 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v1 + 32) = node;
  v5 = *(_QWORD *)(v1 + 32);
  if ( *(_BYTE *)(((unsigned __int64)(v5 + 16) >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(v5 + 16, v5 + 16);
  for ( p_right = *(boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v5 + 16);
        p_right;
        p_right = *(boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v6 + 16) )
  {
    *(_QWORD *)(v3 - 32) = p_right;
    v6 = *(_QWORD *)(v3 - 32);
    if ( *(_BYTE *)(((unsigned __int64)(v6 + 16) >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8(v6 + 16, v6 + 16);
  }
  result = *(boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v3 - 32);
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)(v4 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)(v4 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 130: range 000000000C7903E6-000000000C7906AF
bool __cdecl boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void *,false>>::is_header(
        const boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::const_node_ptr *p)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rax
  _DWORD *v4; // rdx
  __int64 v5; // rsi
  boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::const_node_ptr v6; // rcx
  __int64 v7; // rsi
  boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::const_node_ptr v8; // rcx
  __int64 v9; // rsi
  boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::const_node_ptr v10; // rcx
  const boost::intrusive::rbtree_node<void*> **v11; // rcx
  const boost::intrusive::rbtree_node<void*> *v12; // rdi
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  char v16; // al
  bool result; // al
  char v19[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  v3 = v1 + 96;
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 10 p_left:132 64 8 11 p_right:133";
  *(_QWORD *)(v1 + 16) = boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void *,false>>::is_header;
  v4 = (_DWORD *)(v1 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = *(unsigned __int8 *)(((unsigned __int64)p >> 3) + 0x7FFF8000);
  if ( (_BYTE)v5 )
    v3 = __asan_report_load8(p, v5);
  v6 = *p;
  if ( *(_BYTE *)(((unsigned __int64)&(*p)->left_ >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(&(*p)->left_, &(*p)->left_);
  *(_QWORD *)(v3 - 64) = v6->left_;
  v7 = *(unsigned __int8 *)(((unsigned __int64)p >> 3) + 0x7FFF8000);
  if ( (_BYTE)v7 )
    v3 = __asan_report_load8(p, v7);
  v8 = *p;
  if ( *(_BYTE *)(((unsigned __int64)&(*p)->right_ >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(&(*p)->right_, &(*p)->right_);
  *(_QWORD *)(v3 - 32) = v8->right_;
  v9 = *(unsigned __int8 *)(((unsigned __int64)p >> 3) + 0x7FFF8000);
  if ( (_BYTE)v9 )
    v3 = __asan_report_load8(p, v9);
  v10 = *p;
  if ( *(_BYTE *)(((unsigned __int64)*p >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(*p, *p);
  if ( !v10->parent_ )
    goto LABEL_28;
  if ( !*(_QWORD *)(v3 - 64) || !*(_QWORD *)(v3 - 32) )
    goto LABEL_29;
  if ( *(_QWORD *)(v3 - 64) == *(_QWORD *)(v3 - 32) )
    goto LABEL_28;
  v11 = *(const boost::intrusive::rbtree_node<void*> ***)(v3 - 64);
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(*(_QWORD *)(v3 - 64), *(_QWORD *)(v3 - 64));
  v12 = *v11;
  v13 = *(unsigned __int8 *)(((unsigned __int64)p >> 3) + 0x7FFF8000);
  if ( (_BYTE)v13 )
  {
    v12 = (const boost::intrusive::rbtree_node<void*> *)p;
    v3 = __asan_report_load8(p, v13);
  }
  if ( v12 != *p )
    goto LABEL_28;
  v14 = *(_QWORD *)(v3 - 32);
  v15 = *(unsigned __int8 *)((v14 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v15 )
    v14 = __asan_report_load8(v14, v15);
  if ( *(const boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::const_node_ptr *)v14 == *p )
LABEL_29:
    v16 = 0;
  else
LABEL_28:
    v16 = 1;
  result = v16 != 0;
  if ( v19 == (char *)v1 )
  {
    *((_QWORD *)v4 + 268431360) = 0LL;
    v4[536862722] = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *((_QWORD *)v4 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    v4[536862722] = -168430091;
  }
  return result;
};
