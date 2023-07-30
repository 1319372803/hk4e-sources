// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/net_tools/src/packet_utils.cpp

// Line 41: range 000000000C7F9538-000000000C7F98C3
volatile signed __int32 *__fastcall common::minet::PacketUtils::createPacket(
        volatile signed __int32 *a1,
        const char *data,
        uint32_t len)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  common::minet::Packet *v8; // rdi
  int v9; // eax
  __int64 v10; // rax
  volatile signed __int32 *v11; // rdi
  volatile signed __int32 *v12; // rdi
  char v13; // dl
  signed __int32 v14; // eax
  volatile signed __int32 *v16; // rdi
  __int64 v17; // rax
  char v18; // dl
  unsigned __int64 v19; // rdi
  char v20; // dl
  signed __int32 v21; // eax
  unsigned __int64 v22; // rdi
  char v23; // dl
  struct _Unwind_Exception *v24; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v25; // rdi
  char v26[120]; // [rsp+10h] [rbp-78h] BYREF

  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_0(64LL);
    if ( v10 )
      v5 = v10;
  }
  v6 = v5 + 64;
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 13 packet_ptr:42";
  *(_QWORD *)(v5 + 16) = common::minet::PacketUtils::createPacket;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket();
  v8 = *(common::minet::Packet **)(v5 + 32);
  if ( v8 )
  {
    v9 = common::minet::Packet::parseFromArray(v8, data, len);
    goto LABEL_20;
  }
  if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
  {
    v11 = a1;
    __asan_report_store8(a1, data);
    goto LABEL_19;
  }
  *(_QWORD *)a1 = 0LL;
  v11 = a1 + 2;
  if ( *(_BYTE *)(((unsigned __int64)(a1 + 2) >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v9 = __asan_report_store8(v11, data);
LABEL_20:
    if ( v9 )
    {
      if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
      {
        v16 = a1;
        __asan_report_store8(a1, data);
      }
      else
      {
        *(_QWORD *)a1 = 0LL;
        v16 = a1 + 2;
        if ( !*(_BYTE *)(((unsigned __int64)(a1 + 2) >> 3) + 0x7FFF8000) )
        {
          *((_QWORD *)a1 + 1) = 0LL;
          goto LABEL_9;
        }
      }
      __asan_report_store8(v16, data);
    }
    if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
    {
      v12 = a1;
      __asan_report_store8(a1, data);
    }
    else
    {
      *(_QWORD *)a1 = *(_QWORD *)(v5 + 32);
      v12 = a1 + 2;
      if ( !*(_BYTE *)(((unsigned __int64)(a1 + 2) >> 3) + 0x7FFF8000) )
      {
        *((_QWORD *)a1 + 1) = 0LL;
        v17 = *(_QWORD *)(v5 + 40);
        *(_QWORD *)(v5 + 40) = 0LL;
        *((_QWORD *)a1 + 1) = v17;
        *(_QWORD *)(v5 + 32) = 0LL;
        goto LABEL_9;
      }
    }
    __asan_report_store8(v12, data);
    goto LABEL_31;
  }
  *((_QWORD *)a1 + 1) = 0LL;
LABEL_9:
  v6 = *(_QWORD *)(v5 + 40);
  if ( !v6 )
    goto LABEL_15;
  v12 = (volatile signed __int32 *)(v6 + 8);
  if ( !&_pthread_key_create )
    goto LABEL_32;
  v13 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v12 & 7) + 3) < v13 || !v13 )
  {
    v14 = _InterlockedExchangeAdd(v12, 0xFFFFFFFF);
    goto LABEL_14;
  }
LABEL_31:
  __asan_report_store4(v12, data);
LABEL_32:
  v18 = *(_BYTE *)(((v6 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v6 + 8) & 7) + 3) >= v18 && v18 )
  {
    __asan_report_load4(v6 + 8);
    goto LABEL_36;
  }
  v14 = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v6 + 8) = v14 - 1;
LABEL_14:
  if ( v14 != 1 )
    goto LABEL_15;
LABEL_36:
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
    v19 = v6;
    __asan_report_load8(v6);
    goto LABEL_47;
  }
  v19 = *(_QWORD *)v6 + 16LL;
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_load8(v19);
    goto LABEL_48;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 16LL))(v6);
  v19 = v6 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_49;
  v20 = *(_BYTE *)((v19 >> 3) + 0x7FFF8000);
  if ( (char)((v19 & 7) + 3) < v20 || !v20 )
  {
    v21 = _InterlockedExchangeAdd((volatile signed __int32 *)v19, 0xFFFFFFFF);
    goto LABEL_42;
  }
LABEL_48:
  __asan_report_store4(v19, data);
LABEL_49:
  v23 = *(_BYTE *)(((v6 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v6 + 12) & 7) + 3) >= v23 && v23 )
  {
    __asan_report_load4(v6 + 12);
LABEL_53:
    v22 = v6;
    __asan_report_load8(v6);
LABEL_54:
    v24 = (struct _Unwind_Exception *)__asan_report_load8(v22);
    v25 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 - 24);
    if ( v25 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v25);
    __asan_handle_no_return(v25);
    _Unwind_Resume(v24);
  }
  v21 = *(_DWORD *)(v6 + 12);
  *(_DWORD *)(v6 + 12) = v21 - 1;
LABEL_42:
  if ( v21 != 1 )
    goto LABEL_15;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    goto LABEL_53;
  v22 = *(_QWORD *)v6 + 24LL;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
    goto LABEL_54;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 24LL))(v6);
LABEL_15:
  if ( v26 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return a1;
};

// Line 57: range 000000000C7F98C8-000000000C7F9C51
volatile signed __int32 *__fastcall common::minet::PacketUtils::createPacket(
        volatile signed __int32 *a1,
        __int64 cmd_id,
        google::protobuf::Message *message)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  common::minet::Packet *v8; // rdi
  int v9; // eax
  __int64 v10; // rax
  volatile signed __int32 *v11; // rdi
  volatile signed __int32 *v12; // rdi
  char v13; // dl
  signed __int32 v14; // eax
  volatile signed __int32 *v16; // rdi
  __int64 v17; // rax
  char v18; // dl
  unsigned __int64 v19; // rdi
  char v20; // dl
  signed __int32 v21; // eax
  unsigned __int64 v22; // rdi
  char v23; // dl
  struct _Unwind_Exception *v24; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v25; // rdi
  char v26[120]; // [rsp+10h] [rbp-78h] BYREF

  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_0(64LL);
    if ( v10 )
      v5 = v10;
  }
  v6 = v5 + 64;
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 13 packet_ptr:58";
  *(_QWORD *)(v5 + 16) = common::minet::PacketUtils::createPacket;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket();
  v8 = *(common::minet::Packet **)(v5 + 32);
  if ( v8 )
  {
    cmd_id = (unsigned int)cmd_id;
    v9 = common::minet::Packet::setMessage(v8, cmd_id, message);
    goto LABEL_20;
  }
  if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
  {
    v11 = a1;
    __asan_report_store8(a1, cmd_id);
    goto LABEL_19;
  }
  *(_QWORD *)a1 = 0LL;
  v11 = a1 + 2;
  if ( *(_BYTE *)(((unsigned __int64)(a1 + 2) >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v9 = __asan_report_store8(v11, cmd_id);
LABEL_20:
    if ( v9 )
    {
      if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
      {
        v16 = a1;
        __asan_report_store8(a1, cmd_id);
      }
      else
      {
        *(_QWORD *)a1 = 0LL;
        v16 = a1 + 2;
        if ( !*(_BYTE *)(((unsigned __int64)(a1 + 2) >> 3) + 0x7FFF8000) )
        {
          *((_QWORD *)a1 + 1) = 0LL;
          goto LABEL_9;
        }
      }
      __asan_report_store8(v16, cmd_id);
    }
    if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
    {
      v12 = a1;
      __asan_report_store8(a1, cmd_id);
    }
    else
    {
      *(_QWORD *)a1 = *(_QWORD *)(v5 + 32);
      v12 = a1 + 2;
      if ( !*(_BYTE *)(((unsigned __int64)(a1 + 2) >> 3) + 0x7FFF8000) )
      {
        *((_QWORD *)a1 + 1) = 0LL;
        v17 = *(_QWORD *)(v5 + 40);
        *(_QWORD *)(v5 + 40) = 0LL;
        *((_QWORD *)a1 + 1) = v17;
        *(_QWORD *)(v5 + 32) = 0LL;
        goto LABEL_9;
      }
    }
    __asan_report_store8(v12, cmd_id);
    goto LABEL_31;
  }
  *((_QWORD *)a1 + 1) = 0LL;
LABEL_9:
  v6 = *(_QWORD *)(v5 + 40);
  if ( !v6 )
    goto LABEL_15;
  v12 = (volatile signed __int32 *)(v6 + 8);
  if ( !&_pthread_key_create )
    goto LABEL_32;
  v13 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v12 & 7) + 3) < v13 || !v13 )
  {
    v14 = _InterlockedExchangeAdd(v12, 0xFFFFFFFF);
    goto LABEL_14;
  }
LABEL_31:
  __asan_report_store4(v12, cmd_id);
LABEL_32:
  v18 = *(_BYTE *)(((v6 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v6 + 8) & 7) + 3) >= v18 && v18 )
  {
    __asan_report_load4(v6 + 8);
    goto LABEL_36;
  }
  v14 = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v6 + 8) = v14 - 1;
LABEL_14:
  if ( v14 != 1 )
    goto LABEL_15;
LABEL_36:
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
    v19 = v6;
    __asan_report_load8(v6);
    goto LABEL_47;
  }
  v19 = *(_QWORD *)v6 + 16LL;
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_load8(v19);
    goto LABEL_48;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 16LL))(v6);
  v19 = v6 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_49;
  v20 = *(_BYTE *)((v19 >> 3) + 0x7FFF8000);
  if ( (char)((v19 & 7) + 3) < v20 || !v20 )
  {
    v21 = _InterlockedExchangeAdd((volatile signed __int32 *)v19, 0xFFFFFFFF);
    goto LABEL_42;
  }
LABEL_48:
  __asan_report_store4(v19, cmd_id);
LABEL_49:
  v23 = *(_BYTE *)(((v6 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v6 + 12) & 7) + 3) >= v23 && v23 )
  {
    __asan_report_load4(v6 + 12);
LABEL_53:
    v22 = v6;
    __asan_report_load8(v6);
LABEL_54:
    v24 = (struct _Unwind_Exception *)__asan_report_load8(v22);
    v25 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 - 24);
    if ( v25 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v25);
    __asan_handle_no_return(v25);
    _Unwind_Resume(v24);
  }
  v21 = *(_DWORD *)(v6 + 12);
  *(_DWORD *)(v6 + 12) = v21 - 1;
LABEL_42:
  if ( v21 != 1 )
    goto LABEL_15;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    goto LABEL_53;
  v22 = *(_QWORD *)v6 + 24LL;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
    goto LABEL_54;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 24LL))(v6);
LABEL_15:
  if ( v26 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return a1;
};

// Line 71: range 000000000C7F9C56-000000000C7FA25B
// local variable allocation has failed, the output may be wrong!
volatile signed __int32 *__fastcall common::minet::PacketUtils::createPacket(
        unsigned __int64 cmd_id,
        common::minet::ConstMessagePtr msg_ptr)
{
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r14
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r13
  _Atomic_word *v7; // rcx OVERLAPPED
  common::minet::Packet *v8; // rdi
  __int64 p_M_use_count; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rax
  volatile signed __int32 *v11; // rdx
  common::minet::ConstMessagePtr *p_msg_ptra; // rdx
  __int64 v13; // rsi
  uint32_t v14; // eax
  __int64 v15; // rax
  volatile signed __int32 *v16; // rdi
  unsigned __int64 v17; // rdi
  char v18; // dl
  signed __int32 v19; // eax
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // rsi
  char v25; // si
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v26; // r14
  _Atomic_word *v27; // rdi
  char v28; // dl
  signed __int32 M_use_count; // eax
  volatile signed __int32 *v30; // rdi
  __int64 v31; // rsi
  char v32; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v34; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v36; // rdi
  __int64 v37; // rsi
  char v38; // dl
  __int64 v39; // rsi
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rsi
  __int64 v44; // rsi
  char v45; // dl
  unsigned __int64 v46; // rdi
  char v47; // dl
  signed __int32 v48; // eax
  unsigned __int64 v49; // rdi
  __int64 v50; // rsi
  char v51; // dl
  struct _Unwind_Exception *v52; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v53; // rdi
  uint32_t cmd_ida; // [rsp+Ch] [rbp-8Ch]
  uint32_t cmd_idb; // [rsp+Ch] [rbp-8Ch]
  common::minet::ConstMessagePtr msg_ptra; // [rsp+10h] [rbp-88h] BYREF
  char v57[120]; // [rsp+20h] [rbp-78h] BYREF

  cmd_ida = (uint32_t)msg_ptr._M_ptr;
  M_pi = msg_ptr._M_refcount._M_pi;
  v4 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v4 = v15;
  }
  v5 = v4 + 64;
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 13 packet_ptr:72";
  *(_QWORD *)(v4 + 16) = common::minet::PacketUtils::createPacket;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket();
  v8 = *(common::minet::Packet **)(v4 + 32);
  if ( v8 )
  {
    if ( !*(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
    {
      msg_ptra._M_ptr = (std::__shared_ptr<const google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *)M_pi->_vptr__Sp_counted_base;
      p_M_use_count = (__int64)&M_pi->_M_use_count;
      if ( !*(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000) )
      {
        v10 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&M_pi->_M_use_count;
        msg_ptra._M_refcount._M_pi = v10;
        if ( !v10 )
          goto LABEL_10;
        v11 = &v10->_M_use_count;
        if ( !&_pthread_key_create )
        {
LABEL_30:
          v7 = &v10->_M_use_count;
          v24 = *(unsigned __int8 *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= (char)v24 && v25 )
          {
            v14 = __asan_report_load4(&v10->_M_use_count);
LABEL_34:
            cmd_idb = v14;
            v26 = msg_ptra._M_refcount._M_pi;
            if ( !msg_ptra._M_refcount._M_pi )
              goto LABEL_40;
            v27 = &msg_ptra._M_refcount._M_pi->_M_use_count;
            if ( &_pthread_key_create )
            {
              v28 = *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000);
              if ( (char)(((unsigned __int8)v27 & 7) + 3) < v28 || !v28 )
              {
                M_use_count = _InterlockedExchangeAdd(v27, 0xFFFFFFFF);
                goto LABEL_39;
              }
              __asan_report_store4(v27, v31);
            }
            v32 = *(_BYTE *)(((unsigned __int64)&v26->_M_use_count >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)v26 + 8) & 7) + 3) >= v32 && v32 )
            {
              __asan_report_load4(&v26->_M_use_count);
              goto LABEL_49;
            }
            M_use_count = v26->_M_use_count;
            v26->_M_use_count = M_use_count - 1;
LABEL_39:
            if ( M_use_count != 1 )
              goto LABEL_40;
LABEL_49:
            if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
            {
              p_M_weak_count = (volatile signed __int32 *)v26;
              __asan_report_load8(v26);
            }
            else
            {
              p_M_weak_count = (volatile signed __int32 *)(v26->_vptr__Sp_counted_base + 2);
              if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
              {
                (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v26->_vptr__Sp_counted_base
                 + 2))(v26);
                p_M_weak_count = &v26->_M_weak_count;
                if ( !&_pthread_key_create )
                  goto LABEL_62;
                v34 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
                if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v34 || !v34 )
                {
                  M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
                  goto LABEL_55;
                }
LABEL_61:
                __asan_report_store4(p_M_weak_count, v37);
LABEL_62:
                v38 = *(_BYTE *)(((unsigned __int64)&v26->_M_weak_count >> 3) + 0x7FFF8000);
                if ( (char)((((_BYTE)v26 + 12) & 7) + 3) >= v38 && v38 )
                {
                  __asan_report_load4(&v26->_M_weak_count);
                  goto LABEL_66;
                }
                M_weak_count = v26->_M_weak_count;
                v26->_M_weak_count = M_weak_count - 1;
LABEL_55:
                if ( M_weak_count != 1 )
                  goto LABEL_40;
                if ( !*(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
                {
                  v36 = (unsigned __int64)(v26->_vptr__Sp_counted_base + 3);
                  if ( !*(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
                  {
                    (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v26->_vptr__Sp_counted_base
                     + 3))(v26);
LABEL_40:
                    if ( !cmd_idb )
                      goto LABEL_70;
                    if ( !*(_BYTE *)((cmd_id >> 3) + 0x7FFF8000) )
                    {
                      *(_QWORD *)cmd_id = 0LL;
                      v30 = (volatile signed __int32 *)(cmd_id + 8);
                      if ( !*(_BYTE *)(((cmd_id + 8) >> 3) + 0x7FFF8000) )
                      {
                        *(_QWORD *)(cmd_id + 8) = 0LL;
                        goto LABEL_16;
                      }
                      goto LABEL_69;
                    }
LABEL_68:
                    v30 = (volatile signed __int32 *)cmd_id;
                    __asan_report_store8(cmd_id, v39);
LABEL_69:
                    __asan_report_store8(v30, v40);
LABEL_70:
                    if ( *(_BYTE *)((cmd_id >> 3) + 0x7FFF8000) )
                    {
                      v17 = cmd_id;
                      __asan_report_store8(cmd_id, v42);
                    }
                    else
                    {
                      *(_QWORD *)cmd_id = *(_QWORD *)(v4 + 32);
                      v17 = cmd_id + 8;
                      if ( !*(_BYTE *)(((cmd_id + 8) >> 3) + 0x7FFF8000) )
                      {
                        *(_QWORD *)(cmd_id + 8) = 0LL;
                        v41 = *(_QWORD *)(v4 + 40);
                        *(_QWORD *)(v4 + 40) = 0LL;
                        *(_QWORD *)(cmd_id + 8) = v41;
                        *(_QWORD *)(v4 + 32) = 0LL;
                        goto LABEL_16;
                      }
                    }
                    __asan_report_store8(v17, v43);
                    goto LABEL_75;
                  }
LABEL_67:
                  __asan_report_load8(v36);
                  goto LABEL_68;
                }
LABEL_66:
                v36 = (unsigned __int64)v26;
                __asan_report_load8(v26);
                goto LABEL_67;
              }
            }
            __asan_report_load8(p_M_weak_count);
            goto LABEL_61;
          }
          ++v10->_M_use_count;
LABEL_10:
          p_msg_ptra = &msg_ptra;
          v13 = cmd_ida;
          v14 = common::minet::Packet::setMessagePtr(v8, cmd_ida, *(common::minet::ConstMessagePtr *)(&v7 - 1));
          goto LABEL_34;
        }
        v7 = (_Atomic_word *)*(unsigned __int8 *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v11 & 7) + 3) < (char)v7 || !(_BYTE)v7 )
        {
          _InterlockedAdd(v11, 1u);
          goto LABEL_10;
        }
LABEL_29:
        v8 = (common::minet::Packet *)v11;
        v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v11, v23);
        goto LABEL_30;
      }
LABEL_28:
      __asan_report_load8(p_M_use_count);
      goto LABEL_29;
    }
LABEL_27:
    p_M_use_count = __asan_report_load8(M_pi);
    goto LABEL_28;
  }
  if ( *(_BYTE *)((cmd_id >> 3) + 0x7FFF8000) )
  {
    v16 = (volatile signed __int32 *)cmd_id;
    __asan_report_store8(cmd_id, v21);
    goto LABEL_26;
  }
  *(_QWORD *)cmd_id = 0LL;
  v16 = (volatile signed __int32 *)(cmd_id + 8);
  if ( *(_BYTE *)(((cmd_id + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_store8(v16, v22);
    goto LABEL_27;
  }
  *(_QWORD *)(cmd_id + 8) = 0LL;
LABEL_16:
  v5 = *(_QWORD *)(v4 + 40);
  if ( !v5 )
    goto LABEL_22;
  v17 = v5 + 8;
  if ( !&_pthread_key_create )
    goto LABEL_76;
  v18 = *(_BYTE *)((v17 >> 3) + 0x7FFF8000);
  if ( (char)((v17 & 7) + 3) < v18 || !v18 )
  {
    v19 = _InterlockedExchangeAdd((volatile signed __int32 *)v17, 0xFFFFFFFF);
    goto LABEL_21;
  }
LABEL_75:
  __asan_report_store4(v17, v44);
LABEL_76:
  v45 = *(_BYTE *)(((v5 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v5 + 8) & 7) + 3) >= v45 && v45 )
  {
    __asan_report_load4(v5 + 8);
    goto LABEL_80;
  }
  v19 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = v19 - 1;
LABEL_21:
  if ( v19 != 1 )
    goto LABEL_22;
LABEL_80:
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
    v46 = v5;
    __asan_report_load8(v5);
    goto LABEL_91;
  }
  v46 = *(_QWORD *)v5 + 16LL;
  if ( *(_BYTE *)((v46 >> 3) + 0x7FFF8000) )
  {
LABEL_91:
    __asan_report_load8(v46);
    goto LABEL_92;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 16LL))(v5);
  v46 = v5 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_93;
  v47 = *(_BYTE *)((v46 >> 3) + 0x7FFF8000);
  if ( (char)((v46 & 7) + 3) < v47 || !v47 )
  {
    v48 = _InterlockedExchangeAdd((volatile signed __int32 *)v46, 0xFFFFFFFF);
    goto LABEL_86;
  }
LABEL_92:
  __asan_report_store4(v46, v50);
LABEL_93:
  v51 = *(_BYTE *)(((v5 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v5 + 12) & 7) + 3) >= v51 && v51 )
  {
    __asan_report_load4(v5 + 12);
LABEL_97:
    v49 = v5;
    __asan_report_load8(v5);
LABEL_98:
    v52 = (struct _Unwind_Exception *)__asan_report_load8(v49);
    if ( msg_ptra._M_refcount._M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(msg_ptra._M_refcount._M_pi);
    v53 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v5 - 24);
    if ( v53 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v53);
    __asan_handle_no_return(v53);
    _Unwind_Resume(v52);
  }
  v48 = *(_DWORD *)(v5 + 12);
  *(_DWORD *)(v5 + 12) = v48 - 1;
LABEL_86:
  if ( v48 != 1 )
    goto LABEL_22;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    goto LABEL_97;
  v49 = *(_QWORD *)v5 + 24LL;
  if ( *(_BYTE *)((v49 >> 3) + 0x7FFF8000) )
    goto LABEL_98;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 24LL))(v5);
LABEL_22:
  if ( v57 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return (volatile signed __int32 *)cmd_id;
};

// Line 86: range 000000000C7F8F34-000000000C7F904E
void __fastcall common::minet::PacketUtils::destroyPacket(common::minet::Packet *packet_ptr)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // r12
  int (**vptr_Packet)(...); // rax
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
  *(_QWORD *)(v1 + 8) = "1 32 8 4 p:85";
  *(_QWORD *)(v1 + 16) = common::minet::PacketUtils::destroyPacket;
  v2 = v1 >> 3;
  *(_DWORD *)(v2 + 2147450880) = -235802127;
  *(_DWORD *)(v2 + 2147450884) = -202116352;
  if ( packet_ptr )
  {
    *(_QWORD *)(v1 + 32) = packet_ptr;
    if ( *(_BYTE *)(((unsigned __int64)packet_ptr >> 3) + 0x7FFF8000) )
    {
      vptr_Packet = (int (**)(...))__asan_report_load8(packet_ptr);
    }
    else
    {
      vptr_Packet = packet_ptr->_vptr_Packet;
      if ( !*(_BYTE *)(((unsigned __int64)packet_ptr->_vptr_Packet >> 3) + 0x7FFF8000) )
      {
        (*vptr_Packet)(packet_ptr);
        if ( common::tools::LockFreeStackBase::push(
               &common::minet::PacketUtils::packet_pool_.stack_,
               (common::tools::LockFreeStackBase::ElemType *)(v1 + 32)) )
        {
          goto LABEL_7;
        }
        goto LABEL_13;
      }
    }
    __asan_report_load8(vptr_Packet);
LABEL_13:
    free(*(void **)(v1 + 32));
  }
LABEL_7:
  if ( v5 == (_BYTE *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 92: range 000000000C7FA260-000000000C7FA277
void __cdecl GLOBAL__sub_I_packet_utils_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 92: range 000000000C7F9050-000000000C7F9532
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/packet_utils.cpp");
    if ( __priority != 0xFFFF )
      goto LABEL_3;
    std::ios_base::Init::Init(&std::__ioinit);
    __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
    common::tools::LockFreeStackBase::LockFreeStackBase(&common::minet::PacketUtils::packet_pool_.stack_, 0xC350u);
    __cxa_atexit(
      (void (__fastcall *)(void *))common::tools::ObjectPool<common::minet::Packet>::~ObjectPool,
      &common::minet::PacketUtils::packet_pool_,
      &_dso_handle);
    if ( `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero )
      goto LABEL_3;
    `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = 1;
    if ( !*(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                   + 0x7FFF8000) )
    {
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                           + 9;
LABEL_3:
      __asan_after_dynamic_init();
      return;
    }
    __asan_report_store8(
      &common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
      &common::minet::PacketUtils::packet_pool_);
    common::minet::PacketUtils::createPacket();
  }
};
