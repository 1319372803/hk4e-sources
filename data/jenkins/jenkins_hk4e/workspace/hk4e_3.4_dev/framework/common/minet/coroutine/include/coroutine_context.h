// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/coroutine/include/coroutine_context.h

// Line 83: range 000000000CEDC3D2-000000000CEDC517
std::shared_ptr<LuaScriptMgr> __cdecl common::minet::CoroutineContext::get<std::shared_ptr<LuaScriptMgr>>(
        common::minet::CoroutineContext *const this)
{
  std::map<std::type_index,std::any> *v1; // rsi
  std::type_index *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<LuaScriptMgr> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (std::type_index *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::type_index *)v3;
  }
  v2->_M_target = (const std::type_info *)1102416563;
  v2[1]._M_target = (const std::type_info *)"1 32 8 8 index:85";
  v2[2]._M_target = (const std::type_info *)common::minet::CoroutineContext::get<std::shared_ptr<LuaScriptMgr>>;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  std::type_index::type_index(v2 + 4, (const std::type_info *)&`typeinfo for'std::shared_ptr<LuaScriptMgr>);
  if ( !common::tools::MiscUtils::isContains<std::map<std::type_index,std::any>,std::type_index>(v1, v2 + 4) )
  {
    std::shared_ptr<LuaScriptMgr>::shared_ptr((std::shared_ptr<LuaScriptMgr> *const)this, 0LL);
  }
  else
  {
    std::map<std::type_index,std::any>::operator[](v1, v2 + 4);
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    result = std::any_cast<std::shared_ptr<LuaScriptMgr>>((std::any *)this);
  }
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_target = (const std::type_info *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<LuaScriptMgr,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 83: range 0000000014EB02EA-0000000014EB06F1
volatile signed __int32 *__fastcall common::minet::CoroutineContext::get<std::shared_ptr<MonitorReportUtils::Context>>(
        unsigned __int64 a1,
        common::minet::CoroutineContext *const this)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r13
  std::_Rb_tree_node<std::pair<const std::type_index,std::any> > *M_parent; // rsi
  __int64 v8; // rax
  std::_Rb_tree<std::type_index,std::pair<const std::type_index,std::any>,std::_Select1st<std::pair<const std::type_index,std::any> >,std::less<std::type_index>,std::allocator<std::pair<const std::type_index,std::any> > >::iterator v9; // rax
  std::_Rb_tree<std::type_index,std::pair<const std::type_index,std::any>,std::_Select1st<std::pair<const std::type_index,std::any> >,std::less<std::type_index>,std::allocator<std::pair<const std::type_index,std::any> > >::iterator v10; // r9
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned int v17; // eax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  char v21; // dl
  unsigned __int64 v22; // rdx
  char v23; // cl
  char v24; // cl
  __int64 v25; // rdi
  unsigned __int64 exception; // rbx
  std::tuple<const std::type_index&> *v27; // [rsp+0h] [rbp-A8h]
  std::_Rb_tree_header *__y; // [rsp+8h] [rbp-A0h]
  std::_Rb_tree_iterator<std::pair<const std::type_index,std::any> >::_Base_ptr M_node; // [rsp+10h] [rbp-98h]
  std::_Rb_tree_iterator<std::pair<const std::type_index,std::any> >::_Base_ptr __pos; // [rsp+18h] [rbp-90h]
  std::tuple<> v31; // [rsp+27h] [rbp-81h] BYREF
  std::tuple<const std::type_index&> v32; // [rsp+28h] [rbp-80h] BYREF
  char v33[120]; // [rsp+30h] [rbp-78h] BYREF

  v2 = a1;
  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v4 = v8;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 8 index:85";
  *(_QWORD *)(v4 + 16) = common::minet::CoroutineContext::get<std::shared_ptr<MonitorReportUtils::Context>>;
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v4 + 32) = &`typeinfo for'std::shared_ptr<MonitorReportUtils::Context>;
  M_parent = (std::_Rb_tree_node<std::pair<const std::type_index,std::any> > *)(v4 + 32);
  if ( !common::tools::MiscUtils::isContains<std::map<std::type_index,std::any>,std::type_index>(
          &this->container_,
          (const std::type_index *)(v4 + 32)) )
  {
    if ( *(_BYTE *)((a1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8(a1, M_parent);
    }
    else
    {
      *(_QWORD *)a1 = 0LL;
      a1 += 8LL;
      if ( !*(_BYTE *)(((v2 + 8) >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)(v2 + 8) = 0LL;
        goto LABEL_6;
      }
    }
    __asan_report_store8(a1, M_parent);
  }
  __y = &this->container_._M_t._M_impl.std::_Rb_tree_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->container_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    v12 = __asan_report_load8(&this->container_._M_t._M_impl._M_header._M_parent);
    goto LABEL_35;
  }
  M_parent = (std::_Rb_tree_node<std::pair<const std::type_index,std::any> > *)this->container_._M_t._M_impl._M_header._M_parent;
  v9._M_node = std::_Rb_tree<std::type_index,std::pair<std::type_index const,std::any>,std::_Select1st<std::pair<std::type_index const,std::any>>,std::less<std::type_index>,std::allocator<std::pair<std::type_index const,std::any>>>::_M_lower_bound(
                 &this->container_._M_t,
                 M_parent,
                 &__y->_M_header,
                 (const std::type_index *)(v4 + 32))._M_node;
  M_node = v9._M_node;
  __pos = v9._M_node;
  if ( __y != (std::_Rb_tree_header *)v9._M_node )
  {
    v11 = *(_QWORD *)(v4 + 32);
    v12 = (unsigned __int64)&v9._M_node[1];
    if ( !*(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    {
      v13 = *(_QWORD *)&__pos[1]._M_color;
      v14 = v11 + 8;
      if ( !*(_BYTE *)(((unsigned __int64)(v11 + 8) >> 3) + 0x7FFF8000) )
      {
        v14 = *(_QWORD *)(v11 + 8);
        v15 = *(unsigned __int8 *)((v14 >> 3) + 0x7FFF8000);
        if ( (char)v15 > (char)(v14 & 7) || !(_BYTE)v15 )
        {
          if ( *(_BYTE *)v14 != 42 )
          {
LABEL_20:
            v16 = v13 + 8;
            if ( !*(_BYTE *)(((unsigned __int64)(v13 + 8) >> 3) + 0x7FFF8000) )
            {
              M_parent = *(std::_Rb_tree_node<std::pair<const std::type_index,std::any> > **)(v13 + 8);
              v17 = (unsigned int)strcmp((const char *)v14, (const char *)M_parent) >> 31;
              goto LABEL_22;
            }
LABEL_45:
            v18 = __asan_report_load8(v16);
LABEL_46:
            __asan_report_load8(v18);
            goto LABEL_47;
          }
LABEL_38:
          if ( *(_BYTE *)(((unsigned __int64)(v13 + 8) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v13 + 8);
          }
          else
          {
            v22 = *(_QWORD *)(v13 + 8);
            v23 = *(_BYTE *)((v22 >> 3) + 0x7FFF8000);
            M_parent = (std::_Rb_tree_node<std::pair<const std::type_index,std::any> > *)(v22 & 7);
            if ( v23 > (char)(v22 & 7) || !v23 )
            {
              if ( *(_BYTE *)v22 == 42 )
              {
                LOBYTE(v17) = v14 < v22;
LABEL_22:
                if ( !(_BYTE)v17 )
                  goto LABEL_24;
                goto LABEL_23;
              }
              goto LABEL_20;
            }
          }
          __asan_report_load1(v22, M_parent, v22);
          goto LABEL_45;
        }
LABEL_37:
        v13 = __asan_report_load1(v14, M_parent, v15);
        goto LABEL_38;
      }
LABEL_36:
      __asan_report_load8(v14);
      goto LABEL_37;
    }
LABEL_35:
    v14 = v12;
    __asan_report_load8(v12);
    goto LABEL_36;
  }
LABEL_23:
  v32._M_head_impl = (const std::type_index *)(v4 + 32);
  M_parent = (std::_Rb_tree_node<std::pair<const std::type_index,std::any> > *)__pos;
  M_node = std::_Rb_tree<std::type_index,std::pair<std::type_index const,std::any>,std::_Select1st<std::pair<std::type_index const,std::any>>,std::less<std::type_index>,std::allocator<std::pair<std::type_index const,std::any>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::type_index const&>,std::tuple<>>(
             &this->container_._M_t,
             (std::_Rb_tree<std::type_index,std::pair<const std::type_index,std::any>,std::_Select1st<std::pair<const std::type_index,std::any> >,std::less<std::type_index>,std::allocator<std::pair<const std::type_index,std::any> > >::const_iterator)__pos,
             &std::piecewise_construct,
             &v32,
             &v31,
             (const std::piecewise_construct_t *)v10._M_node,
             v27,
             (std::tuple<> *)__y)._M_node;
LABEL_24:
  v18 = (unsigned __int64)std::__any_caster<std::shared_ptr<MonitorReportUtils::Context>>((const std::any *)&M_node[1]._M_parent);
  if ( !v18 )
    goto LABEL_55;
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
    goto LABEL_46;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    v19 = v2;
    __asan_report_store8(v2, M_parent);
    goto LABEL_48;
  }
  *(_QWORD *)v2 = *(_QWORD *)v18;
  v19 = v18 + 8;
  if ( *(_BYTE *)(((v18 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    __asan_report_load8(v19);
    goto LABEL_49;
  }
  v20 = *(_QWORD *)(v18 + 8);
  v19 = v2 + 8;
  if ( *(_BYTE *)(((v2 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_store8(v19, M_parent);
LABEL_50:
    v20 = __asan_report_store4(v19, M_parent);
    goto LABEL_51;
  }
  *(_QWORD *)(v2 + 8) = v20;
  if ( !v20 )
    goto LABEL_6;
  v19 = v20 + 8;
  if ( &_pthread_key_create )
  {
    v21 = *(_BYTE *)((v19 >> 3) + 0x7FFF8000);
    if ( (char)((v19 & 7) + 3) < v21 || !v21 )
    {
      _InterlockedAdd((volatile signed __int32 *)v19, 1u);
      goto LABEL_6;
    }
    goto LABEL_50;
  }
LABEL_51:
  v24 = *(_BYTE *)(((unsigned __int64)(v20 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v20 + 8) & 7) + 3) >= v24 && v24 )
  {
    __asan_report_load4(v20 + 8);
LABEL_55:
    v25 = 8LL;
    exception = (unsigned __int64)__cxa_allocate_exception(8uLL);
    if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
    {
      v25 = exception;
      __asan_report_store8(exception, M_parent);
    }
    *(_QWORD *)exception = &`vtable for'std::bad_any_cast + 2;
    __asan_handle_no_return(v25);
    _cxa_throw(
      (void *)exception,
      (struct type_info *)&`typeinfo for'std::bad_any_cast,
      (void (__fastcall *)(void *))std::bad_any_cast::~bad_any_cast);
  }
  ++*(_DWORD *)(v20 + 8);
LABEL_6:
  if ( v33 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return (volatile signed __int32 *)v2;
};

// Line 83: range 0000000014EC1910-0000000014EC1D17
volatile signed __int32 *__fastcall common::minet::CoroutineContext::get<std::shared_ptr<StatLogUtils::Context>>(
        unsigned __int64 a1,
        common::minet::CoroutineContext *const this)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r13
  std::_Rb_tree_node<std::pair<const std::type_index,std::any> > *M_parent; // rsi
  __int64 v8; // rax
  std::_Rb_tree<std::type_index,std::pair<const std::type_index,std::any>,std::_Select1st<std::pair<const std::type_index,std::any> >,std::less<std::type_index>,std::allocator<std::pair<const std::type_index,std::any> > >::iterator v9; // rax
  std::_Rb_tree<std::type_index,std::pair<const std::type_index,std::any>,std::_Select1st<std::pair<const std::type_index,std::any> >,std::less<std::type_index>,std::allocator<std::pair<const std::type_index,std::any> > >::iterator v10; // r9
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned int v17; // eax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  char v21; // dl
  unsigned __int64 v22; // rdx
  char v23; // cl
  char v24; // cl
  __int64 v25; // rdi
  unsigned __int64 exception; // rbx
  std::tuple<const std::type_index&> *v27; // [rsp+0h] [rbp-A8h]
  std::_Rb_tree_header *__y; // [rsp+8h] [rbp-A0h]
  std::_Rb_tree_iterator<std::pair<const std::type_index,std::any> >::_Base_ptr M_node; // [rsp+10h] [rbp-98h]
  std::_Rb_tree_iterator<std::pair<const std::type_index,std::any> >::_Base_ptr __pos; // [rsp+18h] [rbp-90h]
  std::tuple<> v31; // [rsp+27h] [rbp-81h] BYREF
  std::tuple<const std::type_index&> v32; // [rsp+28h] [rbp-80h] BYREF
  char v33[120]; // [rsp+30h] [rbp-78h] BYREF

  v2 = a1;
  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v4 = v8;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 8 index:85";
  *(_QWORD *)(v4 + 16) = common::minet::CoroutineContext::get<std::shared_ptr<StatLogUtils::Context>>;
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v4 + 32) = &`typeinfo for'std::shared_ptr<StatLogUtils::Context>;
  M_parent = (std::_Rb_tree_node<std::pair<const std::type_index,std::any> > *)(v4 + 32);
  if ( !common::tools::MiscUtils::isContains<std::map<std::type_index,std::any>,std::type_index>(
          &this->container_,
          (const std::type_index *)(v4 + 32)) )
  {
    if ( *(_BYTE *)((a1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8(a1, M_parent);
    }
    else
    {
      *(_QWORD *)a1 = 0LL;
      a1 += 8LL;
      if ( !*(_BYTE *)(((v2 + 8) >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)(v2 + 8) = 0LL;
        goto LABEL_6;
      }
    }
    __asan_report_store8(a1, M_parent);
  }
  __y = &this->container_._M_t._M_impl.std::_Rb_tree_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->container_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    v12 = __asan_report_load8(&this->container_._M_t._M_impl._M_header._M_parent);
    goto LABEL_35;
  }
  M_parent = (std::_Rb_tree_node<std::pair<const std::type_index,std::any> > *)this->container_._M_t._M_impl._M_header._M_parent;
  v9._M_node = std::_Rb_tree<std::type_index,std::pair<std::type_index const,std::any>,std::_Select1st<std::pair<std::type_index const,std::any>>,std::less<std::type_index>,std::allocator<std::pair<std::type_index const,std::any>>>::_M_lower_bound(
                 &this->container_._M_t,
                 M_parent,
                 &__y->_M_header,
                 (const std::type_index *)(v4 + 32))._M_node;
  M_node = v9._M_node;
  __pos = v9._M_node;
  if ( __y != (std::_Rb_tree_header *)v9._M_node )
  {
    v11 = *(_QWORD *)(v4 + 32);
    v12 = (unsigned __int64)&v9._M_node[1];
    if ( !*(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    {
      v13 = *(_QWORD *)&__pos[1]._M_color;
      v14 = v11 + 8;
      if ( !*(_BYTE *)(((unsigned __int64)(v11 + 8) >> 3) + 0x7FFF8000) )
      {
        v14 = *(_QWORD *)(v11 + 8);
        v15 = *(unsigned __int8 *)((v14 >> 3) + 0x7FFF8000);
        if ( (char)v15 > (char)(v14 & 7) || !(_BYTE)v15 )
        {
          if ( *(_BYTE *)v14 != 42 )
          {
LABEL_20:
            v16 = v13 + 8;
            if ( !*(_BYTE *)(((unsigned __int64)(v13 + 8) >> 3) + 0x7FFF8000) )
            {
              M_parent = *(std::_Rb_tree_node<std::pair<const std::type_index,std::any> > **)(v13 + 8);
              v17 = (unsigned int)strcmp((const char *)v14, (const char *)M_parent) >> 31;
              goto LABEL_22;
            }
LABEL_45:
            v18 = __asan_report_load8(v16);
LABEL_46:
            __asan_report_load8(v18);
            goto LABEL_47;
          }
LABEL_38:
          if ( *(_BYTE *)(((unsigned __int64)(v13 + 8) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v13 + 8);
          }
          else
          {
            v22 = *(_QWORD *)(v13 + 8);
            v23 = *(_BYTE *)((v22 >> 3) + 0x7FFF8000);
            M_parent = (std::_Rb_tree_node<std::pair<const std::type_index,std::any> > *)(v22 & 7);
            if ( v23 > (char)(v22 & 7) || !v23 )
            {
              if ( *(_BYTE *)v22 == 42 )
              {
                LOBYTE(v17) = v14 < v22;
LABEL_22:
                if ( !(_BYTE)v17 )
                  goto LABEL_24;
                goto LABEL_23;
              }
              goto LABEL_20;
            }
          }
          __asan_report_load1(v22, M_parent, v22);
          goto LABEL_45;
        }
LABEL_37:
        v13 = __asan_report_load1(v14, M_parent, v15);
        goto LABEL_38;
      }
LABEL_36:
      __asan_report_load8(v14);
      goto LABEL_37;
    }
LABEL_35:
    v14 = v12;
    __asan_report_load8(v12);
    goto LABEL_36;
  }
LABEL_23:
  v32._M_head_impl = (const std::type_index *)(v4 + 32);
  M_parent = (std::_Rb_tree_node<std::pair<const std::type_index,std::any> > *)__pos;
  M_node = std::_Rb_tree<std::type_index,std::pair<std::type_index const,std::any>,std::_Select1st<std::pair<std::type_index const,std::any>>,std::less<std::type_index>,std::allocator<std::pair<std::type_index const,std::any>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::type_index const&>,std::tuple<>>(
             &this->container_._M_t,
             (std::_Rb_tree<std::type_index,std::pair<const std::type_index,std::any>,std::_Select1st<std::pair<const std::type_index,std::any> >,std::less<std::type_index>,std::allocator<std::pair<const std::type_index,std::any> > >::const_iterator)__pos,
             &std::piecewise_construct,
             &v32,
             &v31,
             (const std::piecewise_construct_t *)v10._M_node,
             v27,
             (std::tuple<> *)__y)._M_node;
LABEL_24:
  v18 = (unsigned __int64)std::__any_caster<std::shared_ptr<StatLogUtils::Context>>((const std::any *)&M_node[1]._M_parent);
  if ( !v18 )
    goto LABEL_55;
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
    goto LABEL_46;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    v19 = v2;
    __asan_report_store8(v2, M_parent);
    goto LABEL_48;
  }
  *(_QWORD *)v2 = *(_QWORD *)v18;
  v19 = v18 + 8;
  if ( *(_BYTE *)(((v18 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    __asan_report_load8(v19);
    goto LABEL_49;
  }
  v20 = *(_QWORD *)(v18 + 8);
  v19 = v2 + 8;
  if ( *(_BYTE *)(((v2 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_store8(v19, M_parent);
LABEL_50:
    v20 = __asan_report_store4(v19, M_parent);
    goto LABEL_51;
  }
  *(_QWORD *)(v2 + 8) = v20;
  if ( !v20 )
    goto LABEL_6;
  v19 = v20 + 8;
  if ( &_pthread_key_create )
  {
    v21 = *(_BYTE *)((v19 >> 3) + 0x7FFF8000);
    if ( (char)((v19 & 7) + 3) < v21 || !v21 )
    {
      _InterlockedAdd((volatile signed __int32 *)v19, 1u);
      goto LABEL_6;
    }
    goto LABEL_50;
  }
LABEL_51:
  v24 = *(_BYTE *)(((unsigned __int64)(v20 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v20 + 8) & 7) + 3) >= v24 && v24 )
  {
    __asan_report_load4(v20 + 8);
LABEL_55:
    v25 = 8LL;
    exception = (unsigned __int64)__cxa_allocate_exception(8uLL);
    if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
    {
      v25 = exception;
      __asan_report_store8(exception, M_parent);
    }
    *(_QWORD *)exception = &`vtable for'std::bad_any_cast + 2;
    __asan_handle_no_return(v25);
    _cxa_throw(
      (void *)exception,
      (struct type_info *)&`typeinfo for'std::bad_any_cast,
      (void (__fastcall *)(void *))std::bad_any_cast::~bad_any_cast);
  }
  ++*(_DWORD *)(v20 + 8);
LABEL_6:
  if ( v33 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return (volatile signed __int32 *)v2;
};
