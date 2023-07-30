// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/core_class/service_box.cpp

// Line 24: range 0000000014E3EA66-0000000014E3EC81
std::_Rb_tree_node_base::_Base_ptr *__fastcall ServiceBox::findServiceBase(
        std::_Rb_tree_node_base::_Base_ptr *p_M_parent,
        uint32_t type)
{
  std::_Rb_tree_node_base::_Base_ptr *v2; // rbp
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r12
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::shared_ptr<ServiceBase> >,std::_Select1st<std::pair<unsigned int const,std::shared_ptr<ServiceBase> > >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<ServiceBase> > > >::iterator v5; // rax
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  volatile signed __int32 *v7; // rax
  __int64 v8; // rax
  volatile signed __int32 *v9; // rdi
  char v10; // dl
  __int64 v11; // rax
  char v13; // cl
  _BYTE v14[104]; // [rsp+0h] [rbp-68h] BYREF

  v2 = p_M_parent;
  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_0(64LL);
    if ( v11 )
      v3 = v11;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 type:23";
  *(_QWORD *)(v3 + 16) = ServiceBox::findServiceBase;
  v4 = v3 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = type;
  v5._M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::shared_ptr<ServiceBase>>,std::_Select1st<std::pair<unsigned int const,std::shared_ptr<ServiceBase>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<ServiceBase>>>>::find(
                 &ServiceBox::service_map._M_t,
                 (const unsigned int *)(v3 + 32))._M_node;
  if ( (std::_Rb_tree_header *)v5._M_node == &ServiceBox::service_map._M_t._M_impl.std::_Rb_tree_header )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_M_parent >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8(p_M_parent);
    }
    else
    {
      *p_M_parent++ = 0LL;
      if ( !*(_BYTE *)(((unsigned __int64)(v2 + 1) >> 3) + 0x7FFF8000) )
      {
        v2[1] = 0LL;
        goto LABEL_17;
      }
    }
    __asan_report_store8(p_M_parent);
    goto LABEL_22;
  }
  p_M_parent = &v5._M_node[1]._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&v5._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(p_M_parent);
    goto LABEL_23;
  }
  M_parent = v5._M_node[1]._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_store8(v2);
    goto LABEL_24;
  }
  *v2 = M_parent;
  v7 = (volatile signed __int32 *)(p_M_parent + 1);
  if ( *(_BYTE *)(((unsigned __int64)(p_M_parent + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    v9 = v7;
    __asan_report_load8(v7);
    goto LABEL_25;
  }
  v8 = (__int64)p_M_parent[1];
  v9 = (volatile signed __int32 *)(v2 + 1);
  if ( *(_BYTE *)(((unsigned __int64)(v2 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8(v9);
    goto LABEL_26;
  }
  v2[1] = (std::_Rb_tree_node_base::_Base_ptr)v8;
  if ( !v8 )
    goto LABEL_17;
  v9 = (volatile signed __int32 *)(v8 + 8);
  if ( !&_pthread_key_create )
    goto LABEL_27;
  v10 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v9 & 7) + 3) < v10 || !v10 )
  {
    _InterlockedAdd(v9, 1u);
    goto LABEL_17;
  }
LABEL_26:
  v8 = __asan_report_store4(v9);
LABEL_27:
  v13 = *(_BYTE *)(((unsigned __int64)(v8 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v8 + 8) & 7) + 3) >= v13 && v13 )
  {
    __asan_report_load4(v8 + 8);
    goto LABEL_31;
  }
  ++*(_DWORD *)(v8 + 8);
LABEL_17:
  if ( v14 != (_BYTE *)v3 )
  {
LABEL_31:
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    return v2;
  }
  *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  return v2;
};

// Line 37: range 0000000014E3EC86-0000000014E3EF6F
std::_Rb_tree_node_base::_Base_ptr *__fastcall ServiceBox::findPacketTargetService(
        unsigned __int64 a1,
        uint32_t target_service)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v4; // rbx
  const char *v5; // rsi
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<ServiceBase> > >::_Base_ptr M_node; // rdx
  std::_Rb_tree_node_base::_Base_ptr *p_M_left; // rdi
  volatile signed __int32 *v11; // rax
  __int64 M_left; // rax
  volatile signed __int32 *v13; // rdi
  char v14; // dl
  char v15; // cl
  struct _Unwind_Exception *v16; // rax
  struct _Unwind_Exception *v17; // rbx
  common::milog::MiLogStream v18; // [rsp+0h] [rbp-88h] BYREF
  char v19[104]; // [rsp+20h] [rbp-68h] BYREF

  v2 = a1;
  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v4 = v7;
  }
  v5 = (const char *)(v4 + 64);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 17 target_service:36";
  *(_QWORD *)(v4 + 16) = ServiceBox::findPacketTargetService;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = target_service;
  if ( *(_BYTE *)(((unsigned __int64)&ServiceBox::service_map._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&ServiceBox::service_map._M_t._M_impl._M_node_count);
  }
  else
  {
    if ( ServiceBox::service_map._M_t._M_impl._M_node_count )
      goto LABEL_16;
    common::milog::MiLogStream::MiLogStream(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/core_class/service_box.cpp",
      "findPacketTargetService",
      40);
    v5 = "service_map is empty";
    common::milog::MiLogStream::operator()(&v18, "service_map is empty");
  }
  common::milog::MiLogStream::~MiLogStream(&v18);
  if ( *(_BYTE *)((a1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(a1);
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    a1 += 8LL;
    if ( !*(_BYTE *)(((v2 + 8) >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)(v2 + 8) = 0LL;
      goto LABEL_11;
    }
  }
  __asan_report_store8(a1);
LABEL_16:
  M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::shared_ptr<ServiceBase>>,std::_Select1st<std::pair<unsigned int const,std::shared_ptr<ServiceBase>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<ServiceBase>>>>::find(
             &ServiceBox::service_map._M_t,
             (const unsigned int *)v5 - 8)._M_node;
  if ( M_node == (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<ServiceBase> > >::_Base_ptr)&ServiceBox::service_map._M_t._M_impl.std::_Rb_tree_header )
  {
    p_M_left = &ServiceBox::service_map._M_t._M_impl._M_header._M_left;
    if ( *(_BYTE *)(((unsigned __int64)&ServiceBox::service_map._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_left);
      goto LABEL_29;
    }
    M_node = ServiceBox::service_map._M_t._M_impl._M_header._M_left;
  }
  p_M_left = &M_node[1]._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&M_node[1]._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_load8(p_M_left);
    goto LABEL_30;
  }
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_store8(v2);
    goto LABEL_31;
  }
  *(_QWORD *)v2 = M_node[1]._M_parent;
  v11 = (volatile signed __int32 *)&M_node[1]._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&M_node[1]._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    v13 = v11;
    __asan_report_load8(v11);
    goto LABEL_32;
  }
  M_left = (__int64)M_node[1]._M_left;
  v13 = (volatile signed __int32 *)(v2 + 8);
  if ( *(_BYTE *)(((v2 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_store8(v13);
    goto LABEL_33;
  }
  *(_QWORD *)(v2 + 8) = M_left;
  if ( !M_left )
    goto LABEL_11;
  v13 = (volatile signed __int32 *)(M_left + 8);
  if ( !&_pthread_key_create )
    goto LABEL_34;
  v14 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v13 & 7) + 3) < v14 || !v14 )
  {
    _InterlockedAdd(v13, 1u);
    goto LABEL_11;
  }
LABEL_33:
  M_left = __asan_report_store4(v13);
LABEL_34:
  v15 = *(_BYTE *)(((unsigned __int64)(M_left + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((M_left + 8) & 7) + 3) >= v15 && v15 )
  {
    __asan_report_load4(M_left + 8);
    v17 = v16;
    common::milog::MiLogStream::~MiLogStream(&v18);
    __asan_handle_no_return(&v18);
    _Unwind_Resume(v17);
  }
  ++*(_DWORD *)(M_left + 8);
LABEL_11:
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return (std::_Rb_tree_node_base::_Base_ptr *)v2;
};

// Line 57: range 0000000014E3EF74-0000000014E3F5EC
__int64 __fastcall ServiceBox::pushPacketToService(common::minet::PacketPtr packet_ptr)
{
  unsigned __int64 M_ptr; // rbx
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // r12
  int (**vptr_Packet)(...); // rax
  char v5; // dl
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  ServiceBase *v9; // rdi
  __int64 v10; // rax
  unsigned __int64 p_M_use_count; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // r15d
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  __int64 v21; // rdx
  char v22; // dl
  char v23; // si
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // rbx
  _Atomic_word *v25; // rdi
  char v26; // dl
  signed __int32 M_use_count; // eax
  volatile signed __int32 *v28; // rdi
  char v29; // dl
  signed __int32 v30; // eax
  char v32; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v34; // dl
  signed __int32 M_weak_count; // eax
  char v36; // dl
  char v37; // dl
  volatile signed __int32 *v38; // rdi
  char v39; // dl
  signed __int32 v40; // eax
  unsigned __int64 v41; // rdi
  char v42; // dl
  struct _Unwind_Exception *v43; // rbx
  int (**v44)(...); // [rsp+0h] [rbp-A8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v45; // [rsp+8h] [rbp-A0h]
  common::milog::MiLogStream v46; // [rsp+10h] [rbp-98h] BYREF
  char v47[120]; // [rsp+30h] [rbp-78h] BYREF

  M_ptr = (unsigned __int64)packet_ptr._M_ptr;
  v2 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v14 = __asan_stack_malloc_0(64LL);
    if ( v14 )
      v2 = v14;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 base_ptr:65";
  *(_QWORD *)(v2 + 16) = ServiceBox::pushPacketToService;
  v3 = v2 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)packet_ptr._M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(packet_ptr._M_ptr);
    goto LABEL_18;
  }
  vptr_Packet = packet_ptr._M_ptr->_vptr_Packet;
  if ( !packet_ptr._M_ptr->_vptr_Packet )
  {
LABEL_18:
    common::milog::MiLogStream::MiLogStream(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/core_class/service_box.cpp",
      "pushPacketToService",
      60);
    common::milog::MiLogStream::operator()(&v46, "packet_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v46);
    v15 = -1;
    goto LABEL_49;
  }
  v5 = *(_BYTE *)(((unsigned __int64)(vptr_Packet + 32) >> 3) + 0x7FFF8000);
  if ( v5 && v5 <= 3 )
  {
    __asan_report_load4(vptr_Packet + 32);
LABEL_20:
    common::milog::MiLogStream::MiLogStream(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/core_class/service_box.cpp",
      "pushPacketToService",
      68);
    if ( *(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
    {
      v20 = M_ptr;
      __asan_report_load8(M_ptr);
    }
    else
    {
      v19 = *(_QWORD *)M_ptr;
      v20 = *(_QWORD *)M_ptr + 8LL;
      v21 = *(unsigned __int8 *)((v20 >> 3) + 0x7FFF8000);
      if ( !(_BYTE)v21 || (char)v21 > 1 )
      {
        v20 = v19 + 256;
        v22 = *(_BYTE *)(((unsigned __int64)(v19 + 256) >> 3) + 0x7FFF8000);
        if ( !v22 || v22 > 3 )
        {
          common::milog::MiLogStream::operator()(
            &v46,
            "can not find service=%u for packet cmd_id=%u",
            *(unsigned int *)(v19 + 256),
            *(unsigned __int16 *)(v19 + 8));
LABEL_29:
          common::milog::MiLogStream::~MiLogStream(&v46);
          v15 = -1;
          goto LABEL_43;
        }
LABEL_28:
        __asan_report_load4(v20);
        goto LABEL_29;
      }
    }
    __asan_report_load2(v20, &common::milog::MiLogDefault::default_log_obj_, v21, v16, v17, v18);
    goto LABEL_28;
  }
  ServiceBox::findPacketTargetService(v2 + 32, *((_DWORD *)vptr_Packet + 64));
  v9 = *(ServiceBase **)(v2 + 32);
  if ( !v9 )
    goto LABEL_20;
  if ( *(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
  {
    v10 = __asan_report_load8(M_ptr);
    goto LABEL_31;
  }
  v44 = *(int (***)(...))M_ptr;
  v10 = M_ptr + 8;
  p_M_use_count = (M_ptr + 8) >> 3;
  if ( *(_BYTE *)(p_M_use_count + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_load8(v10);
LABEL_32:
    v9 = (ServiceBase *)p_M_use_count;
    v12 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
    goto LABEL_33;
  }
  v12 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(M_ptr + 8);
  v45 = v12;
  if ( !v12 )
  {
LABEL_14:
    v13 = ServiceBase::pushPacket(v9, (common::minet::PacketPtr)__PAIR128__(p_M_use_count, &v44), v6, v7, v8);
    goto LABEL_37;
  }
  p_M_use_count = (unsigned __int64)&v12->_M_use_count;
  if ( &_pthread_key_create )
  {
    v6 = *(unsigned __int8 *)((p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((p_M_use_count & 7) + 3) < (char)v6 || !(_BYTE)v6 )
    {
      _InterlockedAdd((volatile signed __int32 *)p_M_use_count, 1u);
      goto LABEL_14;
    }
    goto LABEL_32;
  }
LABEL_33:
  v6 = (__int64)&v12->_M_use_count;
  v23 = *(_BYTE *)(((unsigned __int64)&v12->_M_use_count >> 3) + 0x7FFF8000);
  p_M_use_count = (((_BYTE)v12 + 8) & 7u) + 3;
  if ( (char)((((_BYTE)v12 + 8) & 7) + 3) < v23 || !v23 )
  {
    ++v12->_M_use_count;
    goto LABEL_14;
  }
  __asan_report_load4(&v12->_M_use_count);
LABEL_37:
  v15 = v13;
  v24 = v45;
  if ( v45 )
  {
    v25 = &v45->_M_use_count;
    if ( &_pthread_key_create )
    {
      v26 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v25 & 7) + 3) < v26 || !v26 )
      {
        M_use_count = _InterlockedExchangeAdd(v25, 0xFFFFFFFF);
        goto LABEL_42;
      }
      __asan_report_store4(v25);
    }
    v32 = *(_BYTE *)(((unsigned __int64)&v24->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v24 + 8) & 7) + 3) >= v32 && v32 )
    {
      __asan_report_load4(&v24->_M_use_count);
      goto LABEL_57;
    }
    M_use_count = v24->_M_use_count;
    v24->_M_use_count = M_use_count - 1;
LABEL_42:
    if ( M_use_count != 1 )
      goto LABEL_43;
LABEL_57:
    if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v24;
      __asan_report_load8(v24);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v24->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v24->_vptr__Sp_counted_base + 2))(v24);
        p_M_weak_count = &v24->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_70;
        v34 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v34 || !v34 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_63;
        }
LABEL_69:
        __asan_report_store4(p_M_weak_count);
LABEL_70:
        v36 = *(_BYTE *)(((unsigned __int64)&v24->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v24 + 12) & 7) + 3) >= v36 && v36 )
        {
          __asan_report_load4(&v24->_M_weak_count);
          goto LABEL_74;
        }
        M_weak_count = v24->_M_weak_count;
        v24->_M_weak_count = M_weak_count - 1;
LABEL_63:
        if ( M_weak_count != 1 )
          goto LABEL_43;
        if ( !*(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
        {
          v28 = (volatile signed __int32 *)(v24->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v24->_vptr__Sp_counted_base + 3))(v24);
            goto LABEL_43;
          }
LABEL_75:
          __asan_report_load8(v28);
          goto LABEL_76;
        }
LABEL_74:
        v28 = (volatile signed __int32 *)v24;
        __asan_report_load8(v24);
        goto LABEL_75;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_69;
  }
LABEL_43:
  v24 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v2 + 40);
  if ( !v24 )
    goto LABEL_49;
  v28 = &v24->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_77;
  v29 = *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v28 & 7) + 3) < v29 || !v29 )
  {
    v30 = _InterlockedExchangeAdd(v28, 0xFFFFFFFF);
    goto LABEL_48;
  }
LABEL_76:
  __asan_report_store4(v28);
LABEL_77:
  v37 = *(_BYTE *)(((unsigned __int64)&v24->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v24 + 8) & 7) + 3) >= v37 && v37 )
  {
    __asan_report_load4(&v24->_M_use_count);
    goto LABEL_81;
  }
  v30 = v24->_M_use_count;
  v24->_M_use_count = v30 - 1;
LABEL_48:
  if ( v30 != 1 )
    goto LABEL_49;
LABEL_81:
  if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
  {
    v38 = (volatile signed __int32 *)v24;
    __asan_report_load8(v24);
    goto LABEL_92;
  }
  v38 = (volatile signed __int32 *)(v24->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
  {
LABEL_92:
    __asan_report_load8(v38);
    goto LABEL_93;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v24->_vptr__Sp_counted_base + 2))(v24);
  v38 = &v24->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_94;
  v39 = *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v38 & 7) + 3) < v39 || !v39 )
  {
    v40 = _InterlockedExchangeAdd(v38, 0xFFFFFFFF);
    goto LABEL_87;
  }
LABEL_93:
  __asan_report_store4(v38);
LABEL_94:
  v42 = *(_BYTE *)(((unsigned __int64)&v24->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v24 + 12) & 7) + 3) >= v42 && v42 )
  {
    __asan_report_load4(&v24->_M_weak_count);
LABEL_98:
    v41 = (unsigned __int64)v24;
    __asan_report_load8(v24);
LABEL_99:
    v43 = (struct _Unwind_Exception *)__asan_report_load8(v41);
    common::milog::MiLogStream::~MiLogStream(&v46);
    __asan_handle_no_return(&v46);
    _Unwind_Resume(v43);
  }
  v40 = v24->_M_weak_count;
  v24->_M_weak_count = v40 - 1;
LABEL_87:
  if ( v40 != 1 )
    goto LABEL_49;
  if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
    goto LABEL_98;
  v41 = (unsigned __int64)(v24->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
    goto LABEL_99;
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v24->_vptr__Sp_counted_base + 3))(v24);
LABEL_49:
  if ( v47 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v15;
};

// Line 78: range 0000000014E3F5F2-0000000014E3FC6A
__int64 __fastcall ServiceBox::forcePushPacketToService(common::minet::PacketPtr packet_ptr)
{
  unsigned __int64 M_ptr; // rbx
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // r12
  int (**vptr_Packet)(...); // rax
  char v5; // dl
  ServiceBase *v6; // rdi
  __int64 v7; // rax
  unsigned __int64 p_M_use_count; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v9; // rax
  char v10; // cl
  unsigned int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // r15d
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  __int64 v19; // rdx
  char v20; // dl
  char v21; // si
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // rbx
  _Atomic_word *v23; // rdi
  char v24; // dl
  signed __int32 M_use_count; // eax
  volatile signed __int32 *v26; // rdi
  char v27; // dl
  signed __int32 v28; // eax
  char v30; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v32; // dl
  signed __int32 M_weak_count; // eax
  char v34; // dl
  char v35; // dl
  volatile signed __int32 *v36; // rdi
  char v37; // dl
  signed __int32 v38; // eax
  unsigned __int64 v39; // rdi
  char v40; // dl
  struct _Unwind_Exception *v41; // rbx
  int (**v42)(...); // [rsp+0h] [rbp-A8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v43; // [rsp+8h] [rbp-A0h]
  common::milog::MiLogStream v44; // [rsp+10h] [rbp-98h] BYREF
  char v45[120]; // [rsp+30h] [rbp-78h] BYREF

  M_ptr = (unsigned __int64)packet_ptr._M_ptr;
  v2 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_0(64LL);
    if ( v12 )
      v2 = v12;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 base_ptr:86";
  *(_QWORD *)(v2 + 16) = ServiceBox::forcePushPacketToService;
  v3 = v2 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)packet_ptr._M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(packet_ptr._M_ptr);
    goto LABEL_18;
  }
  vptr_Packet = packet_ptr._M_ptr->_vptr_Packet;
  if ( !packet_ptr._M_ptr->_vptr_Packet )
  {
LABEL_18:
    common::milog::MiLogStream::MiLogStream(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/core_class/service_box.cpp",
      "forcePushPacketToService",
      81);
    common::milog::MiLogStream::operator()(&v44, "packet_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v44);
    v13 = -1;
    goto LABEL_49;
  }
  v5 = *(_BYTE *)(((unsigned __int64)(vptr_Packet + 32) >> 3) + 0x7FFF8000);
  if ( v5 && v5 <= 3 )
  {
    __asan_report_load4(vptr_Packet + 32);
LABEL_20:
    common::milog::MiLogStream::MiLogStream(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/core_class/service_box.cpp",
      "forcePushPacketToService",
      89);
    if ( *(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
    {
      v18 = M_ptr;
      __asan_report_load8(M_ptr);
    }
    else
    {
      v17 = *(_QWORD *)M_ptr;
      v18 = *(_QWORD *)M_ptr + 8LL;
      v19 = *(unsigned __int8 *)((v18 >> 3) + 0x7FFF8000);
      if ( !(_BYTE)v19 || (char)v19 > 1 )
      {
        v18 = v17 + 256;
        v20 = *(_BYTE *)(((unsigned __int64)(v17 + 256) >> 3) + 0x7FFF8000);
        if ( !v20 || v20 > 3 )
        {
          common::milog::MiLogStream::operator()(
            &v44,
            "can not find service=%u for packet cmd_id=%u",
            *(unsigned int *)(v17 + 256),
            *(unsigned __int16 *)(v17 + 8));
LABEL_29:
          common::milog::MiLogStream::~MiLogStream(&v44);
          v13 = -1;
          goto LABEL_43;
        }
LABEL_28:
        __asan_report_load4(v18);
        goto LABEL_29;
      }
    }
    __asan_report_load2(v18, &common::milog::MiLogDefault::default_log_obj_, v19, v14, v15, v16);
    goto LABEL_28;
  }
  ServiceBox::findPacketTargetService(v2 + 32, *((_DWORD *)vptr_Packet + 64));
  v6 = *(ServiceBase **)(v2 + 32);
  if ( !v6 )
    goto LABEL_20;
  if ( *(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
  {
    v7 = __asan_report_load8(M_ptr);
    goto LABEL_31;
  }
  v42 = *(int (***)(...))M_ptr;
  v7 = M_ptr + 8;
  p_M_use_count = (M_ptr + 8) >> 3;
  if ( *(_BYTE *)(p_M_use_count + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_load8(v7);
LABEL_32:
    v6 = (ServiceBase *)p_M_use_count;
    v9 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
    goto LABEL_33;
  }
  v9 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(M_ptr + 8);
  v43 = v9;
  if ( !v9 )
  {
LABEL_14:
    v11 = ServiceBase::forcePushPacket(v6, (common::minet::PacketPtr)__PAIR128__(p_M_use_count, &v42));
    goto LABEL_37;
  }
  p_M_use_count = (unsigned __int64)&v9->_M_use_count;
  if ( &_pthread_key_create )
  {
    v10 = *(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((p_M_use_count & 7) + 3) < v10 || !v10 )
    {
      _InterlockedAdd((volatile signed __int32 *)p_M_use_count, 1u);
      goto LABEL_14;
    }
    goto LABEL_32;
  }
LABEL_33:
  v21 = *(_BYTE *)(((unsigned __int64)&v9->_M_use_count >> 3) + 0x7FFF8000);
  p_M_use_count = (((_BYTE)v9 + 8) & 7u) + 3;
  if ( (char)((((_BYTE)v9 + 8) & 7) + 3) < v21 || !v21 )
  {
    ++v9->_M_use_count;
    goto LABEL_14;
  }
  __asan_report_load4(&v9->_M_use_count);
LABEL_37:
  v13 = v11;
  v22 = v43;
  if ( v43 )
  {
    v23 = &v43->_M_use_count;
    if ( &_pthread_key_create )
    {
      v24 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v23 & 7) + 3) < v24 || !v24 )
      {
        M_use_count = _InterlockedExchangeAdd(v23, 0xFFFFFFFF);
        goto LABEL_42;
      }
      __asan_report_store4(v23);
    }
    v30 = *(_BYTE *)(((unsigned __int64)&v22->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v22 + 8) & 7) + 3) >= v30 && v30 )
    {
      __asan_report_load4(&v22->_M_use_count);
      goto LABEL_57;
    }
    M_use_count = v22->_M_use_count;
    v22->_M_use_count = M_use_count - 1;
LABEL_42:
    if ( M_use_count != 1 )
      goto LABEL_43;
LABEL_57:
    if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v22;
      __asan_report_load8(v22);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v22->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v22->_vptr__Sp_counted_base + 2))(v22);
        p_M_weak_count = &v22->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_70;
        v32 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v32 || !v32 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_63;
        }
LABEL_69:
        __asan_report_store4(p_M_weak_count);
LABEL_70:
        v34 = *(_BYTE *)(((unsigned __int64)&v22->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v22 + 12) & 7) + 3) >= v34 && v34 )
        {
          __asan_report_load4(&v22->_M_weak_count);
          goto LABEL_74;
        }
        M_weak_count = v22->_M_weak_count;
        v22->_M_weak_count = M_weak_count - 1;
LABEL_63:
        if ( M_weak_count != 1 )
          goto LABEL_43;
        if ( !*(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
        {
          v26 = (volatile signed __int32 *)(v22->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v22->_vptr__Sp_counted_base + 3))(v22);
            goto LABEL_43;
          }
LABEL_75:
          __asan_report_load8(v26);
          goto LABEL_76;
        }
LABEL_74:
        v26 = (volatile signed __int32 *)v22;
        __asan_report_load8(v22);
        goto LABEL_75;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_69;
  }
LABEL_43:
  v22 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v2 + 40);
  if ( !v22 )
    goto LABEL_49;
  v26 = &v22->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_77;
  v27 = *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v26 & 7) + 3) < v27 || !v27 )
  {
    v28 = _InterlockedExchangeAdd(v26, 0xFFFFFFFF);
    goto LABEL_48;
  }
LABEL_76:
  __asan_report_store4(v26);
LABEL_77:
  v35 = *(_BYTE *)(((unsigned __int64)&v22->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v22 + 8) & 7) + 3) >= v35 && v35 )
  {
    __asan_report_load4(&v22->_M_use_count);
    goto LABEL_81;
  }
  v28 = v22->_M_use_count;
  v22->_M_use_count = v28 - 1;
LABEL_48:
  if ( v28 != 1 )
    goto LABEL_49;
LABEL_81:
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
  {
    v36 = (volatile signed __int32 *)v22;
    __asan_report_load8(v22);
    goto LABEL_92;
  }
  v36 = (volatile signed __int32 *)(v22->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
  {
LABEL_92:
    __asan_report_load8(v36);
    goto LABEL_93;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v22->_vptr__Sp_counted_base + 2))(v22);
  v36 = &v22->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_94;
  v37 = *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v36 & 7) + 3) < v37 || !v37 )
  {
    v38 = _InterlockedExchangeAdd(v36, 0xFFFFFFFF);
    goto LABEL_87;
  }
LABEL_93:
  __asan_report_store4(v36);
LABEL_94:
  v40 = *(_BYTE *)(((unsigned __int64)&v22->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v22 + 12) & 7) + 3) >= v40 && v40 )
  {
    __asan_report_load4(&v22->_M_weak_count);
LABEL_98:
    v39 = (unsigned __int64)v22;
    __asan_report_load8(v22);
LABEL_99:
    v41 = (struct _Unwind_Exception *)__asan_report_load8(v39);
    common::milog::MiLogStream::~MiLogStream(&v44);
    __asan_handle_no_return(&v44);
    _Unwind_Resume(v41);
  }
  v38 = v22->_M_weak_count;
  v22->_M_weak_count = v38 - 1;
LABEL_87:
  if ( v38 != 1 )
    goto LABEL_49;
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
    goto LABEL_98;
  v39 = (unsigned __int64)(v22->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
    goto LABEL_99;
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v22->_vptr__Sp_counted_base + 3))(v22);
LABEL_49:
  if ( v45 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v13;
};

// Line 99: range 0000000014E3FC70-0000000014E3FD37
bool __fastcall ServiceBox::isServiceExist(uint32_t service_type)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rbp
  bool result; // al
  __int64 v4; // rax
  _BYTE v5[104]; // [rsp+0h] [rbp-68h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v1 = v4;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 15 service_type:98";
  *(_QWORD *)(v1 + 16) = ServiceBox::isServiceExist;
  v2 = v1 >> 3;
  *(_DWORD *)(v2 + 2147450880) = -235802127;
  *(_DWORD *)(v2 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = service_type;
  result = &ServiceBox::service_map._M_t._M_impl.std::_Rb_tree_header != (std::_Rb_tree_header *)std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::shared_ptr<ServiceBase>>,std::_Select1st<std::pair<unsigned int const,std::shared_ptr<ServiceBase>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<ServiceBase>>>>::find(
                                                                                                   &ServiceBox::service_map._M_t,
                                                                                                   (const unsigned int *)(v1 + 32))._M_node;
  if ( v5 == (_BYTE *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 130: range 0000000014E3E48A-0000000014E3E53B
int32_t __cdecl ServiceBox::start()
{
  ServiceBox::ServiceMap *i; // rax
  std::_Rb_tree_node_base *v1; // rbx
  unsigned __int64 p_M_node_count; // rax
  unsigned __int64 M_parent; // rdi
  unsigned __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&ServiceBox::service_map._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
    p_M_node_count = __asan_report_load8(&ServiceBox::service_map._M_t._M_impl._M_header._M_left);
LABEL_10:
    M_parent = p_M_node_count;
    __asan_report_load8(p_M_node_count);
LABEL_11:
    __asan_report_load8(M_parent);
LABEL_12:
    __asan_report_load8(v4);
    return -1;
  }
  else
  {
    for ( i = (ServiceBox::ServiceMap *)ServiceBox::service_map._M_t._M_impl._M_header._M_left;
          ;
          i = (ServiceBox::ServiceMap *)std::_Rb_tree_increment(v1) )
    {
      v1 = (std::_Rb_tree_node_base *)i;
      if ( i == (ServiceBox::ServiceMap *)&ServiceBox::service_map._M_t._M_impl.std::_Rb_tree_header )
        break;
      p_M_node_count = (unsigned __int64)&i->_M_t._M_impl._M_node_count;
      if ( *(_BYTE *)((p_M_node_count >> 3) + 0x7FFF8000) )
        goto LABEL_10;
      M_parent = (unsigned __int64)v1[1]._M_parent;
      if ( *(_BYTE *)((M_parent >> 3) + 0x7FFF8000) )
        goto LABEL_11;
      v4 = *(_QWORD *)M_parent + 24LL;
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        goto LABEL_12;
      if ( (*(unsigned int (**)(void))(*(_QWORD *)M_parent + 24LL))() )
        return -1;
    }
    return 0;
  }
};

// Line 143: range 0000000014E3E53C-0000000014E3E5E6
bool __cdecl ServiceBox::isRun()
{
  ServiceBox::ServiceMap *i; // rax
  std::_Rb_tree_node_base *v1; // rbx
  unsigned __int64 p_M_node_count; // rax
  unsigned __int64 M_parent; // rdi
  unsigned __int64 v4; // rdx
  bool result; // al

  if ( *(_BYTE *)(((unsigned __int64)&ServiceBox::service_map._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
    p_M_node_count = __asan_report_load8(&ServiceBox::service_map._M_t._M_impl._M_header._M_left);
LABEL_10:
    M_parent = p_M_node_count;
    __asan_report_load8(p_M_node_count);
LABEL_11:
    __asan_report_load8(M_parent);
LABEL_12:
    __asan_report_load8(v4);
  }
  else
  {
    for ( i = (ServiceBox::ServiceMap *)ServiceBox::service_map._M_t._M_impl._M_header._M_left;
          ;
          i = (ServiceBox::ServiceMap *)std::_Rb_tree_increment(v1) )
    {
      v1 = (std::_Rb_tree_node_base *)i;
      if ( i == (ServiceBox::ServiceMap *)&ServiceBox::service_map._M_t._M_impl.std::_Rb_tree_header )
        break;
      p_M_node_count = (unsigned __int64)&i->_M_t._M_impl._M_node_count;
      if ( *(_BYTE *)((p_M_node_count >> 3) + 0x7FFF8000) )
        goto LABEL_10;
      M_parent = (unsigned __int64)v1[1]._M_parent;
      if ( *(_BYTE *)((M_parent >> 3) + 0x7FFF8000) )
        goto LABEL_11;
      v4 = *(_QWORD *)M_parent + 56LL;
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        goto LABEL_12;
      result = (*(__int64 (**)(void))(*(_QWORD *)M_parent + 56LL))();
      if ( !result )
        return result;
    }
  }
  return 1;
};

// Line 156: range 0000000014E3E5E8-0000000014E3E699
int32_t __cdecl ServiceBox::stop()
{
  ServiceBox::ServiceMap *i; // rax
  std::_Rb_tree_node_base *v1; // rbx
  unsigned __int64 p_M_node_count; // rax
  unsigned __int64 M_parent; // rdi
  unsigned __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&ServiceBox::service_map._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
    p_M_node_count = __asan_report_load8(&ServiceBox::service_map._M_t._M_impl._M_header._M_left);
LABEL_10:
    M_parent = p_M_node_count;
    __asan_report_load8(p_M_node_count);
LABEL_11:
    __asan_report_load8(M_parent);
LABEL_12:
    __asan_report_load8(v4);
    return -1;
  }
  else
  {
    for ( i = (ServiceBox::ServiceMap *)ServiceBox::service_map._M_t._M_impl._M_header._M_left;
          ;
          i = (ServiceBox::ServiceMap *)std::_Rb_tree_increment(v1) )
    {
      v1 = (std::_Rb_tree_node_base *)i;
      if ( i == (ServiceBox::ServiceMap *)&ServiceBox::service_map._M_t._M_impl.std::_Rb_tree_header )
        break;
      p_M_node_count = (unsigned __int64)&i->_M_t._M_impl._M_node_count;
      if ( *(_BYTE *)((p_M_node_count >> 3) + 0x7FFF8000) )
        goto LABEL_10;
      M_parent = (unsigned __int64)v1[1]._M_parent;
      if ( *(_BYTE *)((M_parent >> 3) + 0x7FFF8000) )
        goto LABEL_11;
      v4 = *(_QWORD *)M_parent + 40LL;
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        goto LABEL_12;
      if ( (*(unsigned int (**)(void))(*(_QWORD *)M_parent + 40LL))() )
        return -1;
    }
    return 0;
  }
};

// Line 169: range 0000000014E3E69A-0000000014E3E74B
int32_t __cdecl ServiceBox::fini()
{
  ServiceBox::ServiceMap *i; // rax
  std::_Rb_tree_node_base *v1; // rbx
  unsigned __int64 p_M_node_count; // rax
  unsigned __int64 M_parent; // rdi
  unsigned __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&ServiceBox::service_map._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
    p_M_node_count = __asan_report_load8(&ServiceBox::service_map._M_t._M_impl._M_header._M_left);
LABEL_10:
    M_parent = p_M_node_count;
    __asan_report_load8(p_M_node_count);
LABEL_11:
    __asan_report_load8(M_parent);
LABEL_12:
    __asan_report_load8(v4);
    return -1;
  }
  else
  {
    for ( i = (ServiceBox::ServiceMap *)ServiceBox::service_map._M_t._M_impl._M_header._M_left;
          ;
          i = (ServiceBox::ServiceMap *)std::_Rb_tree_increment(v1) )
    {
      v1 = (std::_Rb_tree_node_base *)i;
      if ( i == (ServiceBox::ServiceMap *)&ServiceBox::service_map._M_t._M_impl.std::_Rb_tree_header )
        break;
      p_M_node_count = (unsigned __int64)&i->_M_t._M_impl._M_node_count;
      if ( *(_BYTE *)((p_M_node_count >> 3) + 0x7FFF8000) )
        goto LABEL_10;
      M_parent = (unsigned __int64)v1[1]._M_parent;
      if ( *(_BYTE *)((M_parent >> 3) + 0x7FFF8000) )
        goto LABEL_11;
      v4 = *(_QWORD *)M_parent + 48LL;
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        goto LABEL_12;
      if ( (*(unsigned int (**)(void))(*(_QWORD *)M_parent + 48LL))() )
        return -1;
    }
    return 0;
  }
};

// Line 182: range 0000000014E3E74C-0000000014E3EA64
void __cdecl ServiceBox::destroy()
{
  void *p_M_parent; // rdi

  p_M_parent = &ServiceBox::service_map._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&ServiceBox::service_map._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_parent);
    goto LABEL_13;
  }
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::shared_ptr<ServiceBase>>,std::_Select1st<std::pair<unsigned int const,std::shared_ptr<ServiceBase>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<ServiceBase>>>>::_M_erase(
    &ServiceBox::service_map._M_t,
    (std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::shared_ptr<ServiceBase> >,std::_Select1st<std::pair<unsigned int const,std::shared_ptr<ServiceBase> > >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<ServiceBase> > > >::_Link_type)ServiceBox::service_map._M_t._M_impl._M_header._M_parent);
  p_M_parent = &ServiceBox::service_map._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&ServiceBox::service_map._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_store8(p_M_parent);
    goto LABEL_14;
  }
  ServiceBox::service_map._M_t._M_impl._M_header._M_parent = 0LL;
  p_M_parent = &ServiceBox::service_map._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&ServiceBox::service_map._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_store8(p_M_parent);
    goto LABEL_15;
  }
  ServiceBox::service_map._M_t._M_impl._M_header._M_left = &ServiceBox::service_map._M_t._M_impl._M_header;
  p_M_parent = &ServiceBox::service_map._M_t._M_impl._M_header._M_right;
  if ( *(_BYTE *)(((unsigned __int64)&ServiceBox::service_map._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_store8(p_M_parent);
    goto LABEL_16;
  }
  ServiceBox::service_map._M_t._M_impl._M_header._M_right = &ServiceBox::service_map._M_t._M_impl._M_header;
  p_M_parent = &ServiceBox::service_map._M_t._M_impl._M_node_count;
  if ( *(_BYTE *)(((unsigned __int64)&ServiceBox::service_map._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_store8(p_M_parent);
    goto LABEL_17;
  }
  ServiceBox::service_map._M_t._M_impl._M_node_count = 0LL;
  p_M_parent = &ServiceBox::tid_to_type_map._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&ServiceBox::tid_to_type_map._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8(p_M_parent);
    goto LABEL_18;
  }
  std::_Rb_tree<unsigned long,std::pair<unsigned long const,unsigned int>,std::_Select1st<std::pair<unsigned long const,unsigned int>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned int>>>::_M_erase(
    &ServiceBox::tid_to_type_map._M_t,
    (std::_Rb_tree<long unsigned int,std::pair<long unsigned int const,unsigned int>,std::_Select1st<std::pair<long unsigned int const,unsigned int> >,std::less<long unsigned int>,std::allocator<std::pair<long unsigned int const,unsigned int> > >::_Link_type)ServiceBox::tid_to_type_map._M_t._M_impl._M_header._M_parent);
  p_M_parent = &ServiceBox::tid_to_type_map._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&ServiceBox::tid_to_type_map._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8(p_M_parent);
    goto LABEL_19;
  }
  ServiceBox::tid_to_type_map._M_t._M_impl._M_header._M_parent = 0LL;
  p_M_parent = &ServiceBox::tid_to_type_map._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&ServiceBox::tid_to_type_map._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_store8(p_M_parent);
    goto LABEL_20;
  }
  ServiceBox::tid_to_type_map._M_t._M_impl._M_header._M_left = &ServiceBox::tid_to_type_map._M_t._M_impl._M_header;
  p_M_parent = &ServiceBox::tid_to_type_map._M_t._M_impl._M_header._M_right;
  if ( *(_BYTE *)(((unsigned __int64)&ServiceBox::tid_to_type_map._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_store8(p_M_parent);
    goto LABEL_21;
  }
  ServiceBox::tid_to_type_map._M_t._M_impl._M_header._M_right = &ServiceBox::tid_to_type_map._M_t._M_impl._M_header;
  p_M_parent = &ServiceBox::tid_to_type_map._M_t._M_impl._M_node_count;
  if ( *(_BYTE *)(((unsigned __int64)&ServiceBox::tid_to_type_map._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8(p_M_parent);
    JUMPOUT(0x14E3E911LL);
  }
  ServiceBox::tid_to_type_map._M_t._M_impl._M_node_count = 0LL;
};

// Line 185: range 0000000014E3FD39-0000000014E3FD50
void __cdecl GLOBAL__sub_I_service_box_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 185: range 0000000014E3E11E-0000000014E3E489
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  void *p_M_parent; // rdi
  char v3; // al
  char v4; // al

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/core_class/service_box.cpp");
    if ( __priority != 0xFFFF )
    {
LABEL_3:
      __asan_after_dynamic_init();
      return;
    }
    std::ios_base::Init::Init(&std::__ioinit);
    __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
    opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
    opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
    opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
    opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
    opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
    p_M_parent = &ServiceBox::service_map._M_t._M_impl.std::_Rb_tree_header;
    v3 = *(_BYTE *)(((unsigned __int64)&ServiceBox::service_map._M_t._M_impl.std::_Rb_tree_header >> 3) + 0x7FFF8000);
    if ( v3 && v3 <= 3 )
    {
      __asan_report_store4(p_M_parent);
    }
    else
    {
      ServiceBox::service_map._M_t._M_impl._M_header._M_color = _S_red;
      p_M_parent = &ServiceBox::service_map._M_t._M_impl._M_header._M_parent;
      if ( !*(_BYTE *)(((unsigned __int64)&ServiceBox::service_map._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
      {
        ServiceBox::service_map._M_t._M_impl._M_header._M_parent = 0LL;
        p_M_parent = &ServiceBox::service_map._M_t._M_impl._M_header._M_left;
        if ( !*(_BYTE *)(((unsigned __int64)&ServiceBox::service_map._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
        {
          ServiceBox::service_map._M_t._M_impl._M_header._M_left = &ServiceBox::service_map._M_t._M_impl._M_header;
          p_M_parent = &ServiceBox::service_map._M_t._M_impl._M_header._M_right;
          if ( !*(_BYTE *)(((unsigned __int64)&ServiceBox::service_map._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
          {
            ServiceBox::service_map._M_t._M_impl._M_header._M_right = &ServiceBox::service_map._M_t._M_impl._M_header;
            p_M_parent = &ServiceBox::service_map._M_t._M_impl._M_node_count;
            if ( !*(_BYTE *)(((unsigned __int64)&ServiceBox::service_map._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
            {
              ServiceBox::service_map._M_t._M_impl._M_node_count = 0LL;
              __cxa_atexit(
                (void (__fastcall *)(void *))std::map<unsigned int,std::shared_ptr<ServiceBase>>::~map,
                &ServiceBox::service_map,
                &_dso_handle);
              p_M_parent = &ServiceBox::tid_to_type_map._M_t._M_impl.std::_Rb_tree_header;
              v4 = *(_BYTE *)(((unsigned __int64)&ServiceBox::tid_to_type_map._M_t._M_impl.std::_Rb_tree_header >> 3)
                            + 0x7FFF8000);
              if ( !v4 || v4 > 3 )
              {
                ServiceBox::tid_to_type_map._M_t._M_impl._M_header._M_color = _S_red;
                p_M_parent = &ServiceBox::tid_to_type_map._M_t._M_impl._M_header._M_parent;
                if ( !*(_BYTE *)(((unsigned __int64)&ServiceBox::tid_to_type_map._M_t._M_impl._M_header._M_parent >> 3)
                               + 0x7FFF8000) )
                {
                  ServiceBox::tid_to_type_map._M_t._M_impl._M_header._M_parent = 0LL;
                  p_M_parent = &ServiceBox::tid_to_type_map._M_t._M_impl._M_header._M_left;
                  if ( !*(_BYTE *)(((unsigned __int64)&ServiceBox::tid_to_type_map._M_t._M_impl._M_header._M_left >> 3)
                                 + 0x7FFF8000) )
                  {
                    ServiceBox::tid_to_type_map._M_t._M_impl._M_header._M_left = &ServiceBox::tid_to_type_map._M_t._M_impl._M_header;
                    p_M_parent = &ServiceBox::tid_to_type_map._M_t._M_impl._M_header._M_right;
                    if ( !*(_BYTE *)(((unsigned __int64)&ServiceBox::tid_to_type_map._M_t._M_impl._M_header._M_right >> 3)
                                   + 0x7FFF8000) )
                    {
                      ServiceBox::tid_to_type_map._M_t._M_impl._M_header._M_right = &ServiceBox::tid_to_type_map._M_t._M_impl._M_header;
                      p_M_parent = &ServiceBox::tid_to_type_map._M_t._M_impl._M_node_count;
                      if ( !*(_BYTE *)(((unsigned __int64)&ServiceBox::tid_to_type_map._M_t._M_impl._M_node_count >> 3)
                                     + 0x7FFF8000) )
                      {
                        ServiceBox::tid_to_type_map._M_t._M_impl._M_node_count = 0LL;
                        __cxa_atexit(
                          (void (__fastcall *)(void *))std::map<unsigned long,unsigned int>::~map,
                          &ServiceBox::tid_to_type_map,
                          &_dso_handle);
                        if ( `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero )
                          goto LABEL_3;
                        `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = 1;
                        if ( !*(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                                       + 0x7FFF8000) )
                        {
                          common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                                               + 9;
                          goto LABEL_3;
                        }
LABEL_29:
                        __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
                        JUMPOUT(0x14E3E3C7LL);
                      }
LABEL_28:
                      __asan_report_store8(p_M_parent);
                      goto LABEL_29;
                    }
LABEL_27:
                    __asan_report_store8(p_M_parent);
                    goto LABEL_28;
                  }
LABEL_26:
                  __asan_report_store8(p_M_parent);
                  goto LABEL_27;
                }
LABEL_25:
                __asan_report_store8(p_M_parent);
                goto LABEL_26;
              }
LABEL_24:
              __asan_report_store4(p_M_parent);
              goto LABEL_25;
            }
LABEL_23:
            __asan_report_store8(p_M_parent);
            goto LABEL_24;
          }
LABEL_22:
          __asan_report_store8(p_M_parent);
          goto LABEL_23;
        }
LABEL_21:
        __asan_report_store8(p_M_parent);
        goto LABEL_22;
      }
    }
    __asan_report_store8(p_M_parent);
    goto LABEL_21;
  }
};
