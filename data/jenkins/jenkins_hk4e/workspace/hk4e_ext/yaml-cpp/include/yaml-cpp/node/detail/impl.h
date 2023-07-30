// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/yaml-cpp/include/yaml-cpp/node/detail/impl.h

// Line 108: range 000000001531DE82-000000001531E2D1
_BOOL8 __fastcall YAML::detail::node::equals(
        YAML::detail::node *const this,
        const char *rhs,
        YAML::detail::shared_memory_holder pMemory)
{
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rbp
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v8; // rdx
  volatile signed __int32 *p_M_use_count; // rax
  char v10; // cl
  unsigned __int64 m_pNode; // rdi
  char v12; // al
  int v13; // eax
  __int64 v14; // rax
  _Atomic_word *v15; // rdi
  char v16; // cl
  YAML::InvalidNode *exception; // rdi
  _BOOL4 m_isValid; // ebp
  char *v19; // rdi
  _QWORD *p_M_ptr; // rdi
  __int64 v22; // rsi
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *v24; // [rsp+10h] [rbp-E8h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v25; // [rsp+18h] [rbp-E0h]
  YAML::Node v26; // [rsp+20h] [rbp-D8h] BYREF
  char v27[152]; // [rsp+60h] [rbp-98h] BYREF

  M_ptr = pMemory._M_ptr;
  v5 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v14 = __asan_stack_malloc_1(96LL);
    if ( v14 )
      v5 = v14;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 32 7 lhs:109";
  *(_QWORD *)(v5 + 16) = YAML::detail::node::equals;
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450888) = -202116109;
  *(_QWORD *)(v5 + 32) = v5 + 48;
  *(_QWORD *)(v5 + 40) = 0LL;
  *(_BYTE *)(v5 + 48) = 0;
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_21;
  }
  v24 = (std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *)M_ptr->m_pMemory._M_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&M_ptr->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8();
    goto LABEL_22;
  }
  M_pi = M_ptr->m_pMemory._M_refcount._M_pi;
  M_ptr->m_pMemory._M_refcount._M_pi = 0LL;
  v25 = M_pi;
  M_ptr->m_pMemory._M_ptr = 0LL;
  v26.m_isValid = 1;
  v26.m_invalidKey._M_dataplus._M_p = v26.m_invalidKey._anon_0._M_local_buf;
  v26.m_invalidKey._M_string_length = 0LL;
  v26.m_invalidKey._anon_0._M_local_buf[0] = 0;
  v26.m_pMemory._M_ptr = v24;
  v8 = M_pi;
  v26.m_pMemory._M_refcount._M_pi = M_pi;
  if ( !M_pi )
    goto LABEL_9;
  p_M_use_count = &M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_23;
  v10 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
  v8 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(((unsigned __int8)p_M_use_count & 7u) + 3);
  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v10 || !v10 )
  {
    _InterlockedAdd(p_M_use_count, 1u);
    goto LABEL_9;
  }
LABEL_22:
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)p_M_use_count;
  __asan_report_store4(p_M_use_count);
LABEL_23:
  v15 = &M_pi->_M_use_count;
  v16 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v15 & 7) + 3) >= v16 && v16 )
  {
    __asan_report_load4(v15);
LABEL_27:
    exception = (YAML::InvalidNode *)__cxa_allocate_exception(0x40uLL);
    YAML::InvalidNode::InvalidNode(exception, &v26.m_invalidKey);
    __asan_handle_no_return(exception);
    _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::InvalidNode, YAML::InvalidNode::~InvalidNode);
  }
  ++v8->_M_use_count;
LABEL_9:
  v26.m_pNode = this;
  if ( !v26.m_isValid )
    goto LABEL_27;
  m_pNode = (unsigned __int64)v26.m_pNode;
  if ( !v26.m_pNode )
  {
LABEL_32:
    v13 = 1;
    goto LABEL_34;
  }
  if ( *(_BYTE *)(((unsigned __int64)v26.m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_29;
  }
  m_pNode = (unsigned __int64)v26.m_pNode->m_pRef._M_ptr;
  if ( *(_BYTE *)(((unsigned __int64)v26.m_pNode->m_pRef._M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_load8();
    goto LABEL_30;
  }
  m_pNode = *(_QWORD *)m_pNode;
  if ( *(char *)((m_pNode >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_30:
    __asan_report_load1(m_pNode);
LABEL_31:
    __asan_report_load4(v8);
    goto LABEL_32;
  }
  if ( *(_BYTE *)m_pNode )
  {
    v8 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(m_pNode + 16);
    v12 = *(_BYTE *)(((m_pNode + 16) >> 3) + 0x7FFF8000);
    if ( !v12 || v12 > 3 )
    {
      v13 = *(_DWORD *)(m_pNode + 16);
      goto LABEL_34;
    }
    goto LABEL_31;
  }
  v13 = 0;
LABEL_34:
  if ( v13 != 2 )
  {
    m_isValid = 0;
    goto LABEL_36;
  }
  m_isValid = v26.m_isValid;
  p_M_ptr = &v26.m_pNode->m_pRef._M_ptr;
  if ( !v26.m_pNode )
    goto LABEL_56;
  if ( *(_BYTE *)(((unsigned __int64)v26.m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_55;
  }
  p_M_ptr = v26.m_pNode->m_pRef._M_ptr;
  if ( *(_BYTE *)(((unsigned __int64)v26.m_pNode->m_pRef._M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_load8();
LABEL_56:
    v22 = YAML::detail::node_data::empty_scalar[abi:cxx11](p_M_ptr, rhs, v8);
    goto LABEL_53;
  }
  v22 = *p_M_ptr + 64LL;
LABEL_53:
  std::string::_M_assign(v5 + 32, v22);
LABEL_36:
  if ( v26.m_pMemory._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v26.m_pMemory._M_refcount._M_pi);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v26.m_invalidKey._M_dataplus._M_p != &v26.m_invalidKey._anon_0 )
    operator delete(v26.m_invalidKey._M_dataplus._M_p);
  if ( v25 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v25);
  if ( m_isValid )
    LOBYTE(m_isValid) = (unsigned int)std::string::compare(v5 + 32, rhs) == 0;
  v19 = *(char **)(v5 + 32);
  if ( v19 != (char *)(v5 + 48) )
    operator delete(v19);
  if ( v27 == (char *)v5 )
  {
    *(_DWORD *)((v5 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return m_isValid;
};

// Line 134: range 00000000153281FE-000000001532841D
// local variable allocation has failed, the output may be wrong!
_BOOL8 __fastcall YAML::detail::node_data::get<char [10]>(char [10] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator()(
        const YAML::detail::node_data::get<char [10]>::<lambda(YAML::detail::node_data::kv_pair)> *const this,
        const YAML::detail::node_data::kv_pair m)
{
  YAML::detail::node *second; // r14
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  YAML::detail::node *v7; // rcx OVERLAPPED
  __int64 *pMemory; // rdi
  volatile signed __int32 *v9; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rax
  volatile signed __int32 *p_M_use_count; // rdi
  char v12; // dl
  __int64 *v13; // rdx
  _BOOL4 v14; // eax
  __int64 v15; // rax
  char v16; // si
  _BOOL4 v17; // ebp
  __int64 v19; // [rsp+0h] [rbp-88h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // [rsp+8h] [rbp-80h]
  char v21[120]; // [rsp+10h] [rbp-78h] BYREF

  second = m.second;
  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v4 = v15;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 5 m:134";
  *(_QWORD *)(v4 + 16) = YAML::detail::node_data::get<char [10]>(char [10] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator();
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = v6;
  *(_QWORD *)(v4 + 40) = second;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_16;
  }
  v7 = *(YAML::detail::node **)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  pMemory = (__int64 *)this->__pMemory;
  if ( *(_BYTE *)(((unsigned __int64)this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8();
    goto LABEL_18;
  }
  v19 = *pMemory;
  v9 = (volatile signed __int32 *)(pMemory + 1);
  if ( *(_BYTE *)(((unsigned __int64)(pMemory + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    p_M_use_count = v9;
    __asan_report_load8();
    goto LABEL_19;
  }
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)pMemory[1];
  v20 = v10;
  if ( !v10 )
    goto LABEL_11;
  p_M_use_count = &v10->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_20;
  v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
  {
    _InterlockedAdd(p_M_use_count, 1u);
    goto LABEL_11;
  }
LABEL_19:
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_20:
  v16 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v16 && v16 )
  {
    __asan_report_load4(&v10->_M_use_count);
    goto LABEL_24;
  }
  ++v10->_M_use_count;
LABEL_11:
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v13 = &v19;
    v14 = YAML::detail::node::equals(v7, (const char *)this->__key, *(YAML::detail::shared_memory_holder *)(&v7 - 1));
    goto LABEL_25;
  }
LABEL_24:
  __asan_report_load8();
LABEL_25:
  v17 = v14;
  if ( v20 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v17;
};

// Line 134: range 0000000015328ECA-00000000153290E9
// local variable allocation has failed, the output may be wrong!
_BOOL8 __fastcall YAML::detail::node_data::get<char [13]>(char [13] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator()(
        const YAML::detail::node_data::get<char [13]>::<lambda(YAML::detail::node_data::kv_pair)> *const this,
        const YAML::detail::node_data::kv_pair m)
{
  YAML::detail::node *second; // r14
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  YAML::detail::node *v7; // rcx OVERLAPPED
  __int64 *pMemory; // rdi
  volatile signed __int32 *v9; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rax
  volatile signed __int32 *p_M_use_count; // rdi
  char v12; // dl
  __int64 *v13; // rdx
  _BOOL4 v14; // eax
  __int64 v15; // rax
  char v16; // si
  _BOOL4 v17; // ebp
  __int64 v19; // [rsp+0h] [rbp-88h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // [rsp+8h] [rbp-80h]
  char v21[120]; // [rsp+10h] [rbp-78h] BYREF

  second = m.second;
  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v4 = v15;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 5 m:134";
  *(_QWORD *)(v4 + 16) = YAML::detail::node_data::get<char [13]>(char [13] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator();
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = v6;
  *(_QWORD *)(v4 + 40) = second;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_16;
  }
  v7 = *(YAML::detail::node **)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  pMemory = (__int64 *)this->__pMemory;
  if ( *(_BYTE *)(((unsigned __int64)this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8();
    goto LABEL_18;
  }
  v19 = *pMemory;
  v9 = (volatile signed __int32 *)(pMemory + 1);
  if ( *(_BYTE *)(((unsigned __int64)(pMemory + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    p_M_use_count = v9;
    __asan_report_load8();
    goto LABEL_19;
  }
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)pMemory[1];
  v20 = v10;
  if ( !v10 )
    goto LABEL_11;
  p_M_use_count = &v10->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_20;
  v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
  {
    _InterlockedAdd(p_M_use_count, 1u);
    goto LABEL_11;
  }
LABEL_19:
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_20:
  v16 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v16 && v16 )
  {
    __asan_report_load4(&v10->_M_use_count);
    goto LABEL_24;
  }
  ++v10->_M_use_count;
LABEL_11:
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v13 = &v19;
    v14 = YAML::detail::node::equals(v7, (const char *)this->__key, *(YAML::detail::shared_memory_holder *)(&v7 - 1));
    goto LABEL_25;
  }
LABEL_24:
  __asan_report_load8();
LABEL_25:
  v17 = v14;
  if ( v20 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v17;
};

// Line 134: range 0000000015328A86-0000000015328CA5
// local variable allocation has failed, the output may be wrong!
_BOOL8 __fastcall YAML::detail::node_data::get<char [14]>(char [14] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator()(
        const YAML::detail::node_data::get<char [14]>::<lambda(YAML::detail::node_data::kv_pair)> *const this,
        const YAML::detail::node_data::kv_pair m)
{
  YAML::detail::node *second; // r14
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  YAML::detail::node *v7; // rcx OVERLAPPED
  __int64 *pMemory; // rdi
  volatile signed __int32 *v9; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rax
  volatile signed __int32 *p_M_use_count; // rdi
  char v12; // dl
  __int64 *v13; // rdx
  _BOOL4 v14; // eax
  __int64 v15; // rax
  char v16; // si
  _BOOL4 v17; // ebp
  __int64 v19; // [rsp+0h] [rbp-88h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // [rsp+8h] [rbp-80h]
  char v21[120]; // [rsp+10h] [rbp-78h] BYREF

  second = m.second;
  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v4 = v15;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 5 m:134";
  *(_QWORD *)(v4 + 16) = YAML::detail::node_data::get<char [14]>(char [14] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator();
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = v6;
  *(_QWORD *)(v4 + 40) = second;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_16;
  }
  v7 = *(YAML::detail::node **)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  pMemory = (__int64 *)this->__pMemory;
  if ( *(_BYTE *)(((unsigned __int64)this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8();
    goto LABEL_18;
  }
  v19 = *pMemory;
  v9 = (volatile signed __int32 *)(pMemory + 1);
  if ( *(_BYTE *)(((unsigned __int64)(pMemory + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    p_M_use_count = v9;
    __asan_report_load8();
    goto LABEL_19;
  }
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)pMemory[1];
  v20 = v10;
  if ( !v10 )
    goto LABEL_11;
  p_M_use_count = &v10->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_20;
  v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
  {
    _InterlockedAdd(p_M_use_count, 1u);
    goto LABEL_11;
  }
LABEL_19:
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_20:
  v16 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v16 && v16 )
  {
    __asan_report_load4(&v10->_M_use_count);
    goto LABEL_24;
  }
  ++v10->_M_use_count;
LABEL_11:
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v13 = &v19;
    v14 = YAML::detail::node::equals(v7, (const char *)this->__key, *(YAML::detail::shared_memory_holder *)(&v7 - 1));
    goto LABEL_25;
  }
LABEL_24:
  __asan_report_load8();
LABEL_25:
  v17 = v14;
  if ( v20 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v17;
};

// Line 134: range 0000000015327754-0000000015327973
// local variable allocation has failed, the output may be wrong!
_BOOL8 __fastcall YAML::detail::node_data::get<char [16]>(char [16] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator()(
        const YAML::detail::node_data::get<char [16]>::<lambda(YAML::detail::node_data::kv_pair)> *const this,
        const YAML::detail::node_data::kv_pair m)
{
  YAML::detail::node *second; // r14
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  YAML::detail::node *v7; // rcx OVERLAPPED
  __int64 *pMemory; // rdi
  volatile signed __int32 *v9; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rax
  volatile signed __int32 *p_M_use_count; // rdi
  char v12; // dl
  __int64 *v13; // rdx
  _BOOL4 v14; // eax
  __int64 v15; // rax
  char v16; // si
  _BOOL4 v17; // ebp
  __int64 v19; // [rsp+0h] [rbp-88h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // [rsp+8h] [rbp-80h]
  char v21[120]; // [rsp+10h] [rbp-78h] BYREF

  second = m.second;
  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v4 = v15;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 5 m:134";
  *(_QWORD *)(v4 + 16) = YAML::detail::node_data::get<char [16]>(char [16] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator();
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = v6;
  *(_QWORD *)(v4 + 40) = second;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_16;
  }
  v7 = *(YAML::detail::node **)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  pMemory = (__int64 *)this->__pMemory;
  if ( *(_BYTE *)(((unsigned __int64)this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8();
    goto LABEL_18;
  }
  v19 = *pMemory;
  v9 = (volatile signed __int32 *)(pMemory + 1);
  if ( *(_BYTE *)(((unsigned __int64)(pMemory + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    p_M_use_count = v9;
    __asan_report_load8();
    goto LABEL_19;
  }
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)pMemory[1];
  v20 = v10;
  if ( !v10 )
    goto LABEL_11;
  p_M_use_count = &v10->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_20;
  v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
  {
    _InterlockedAdd(p_M_use_count, 1u);
    goto LABEL_11;
  }
LABEL_19:
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_20:
  v16 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v16 && v16 )
  {
    __asan_report_load4(&v10->_M_use_count);
    goto LABEL_24;
  }
  ++v10->_M_use_count;
LABEL_11:
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v13 = &v19;
    v14 = YAML::detail::node::equals(v7, (const char *)this->__key, *(YAML::detail::shared_memory_holder *)(&v7 - 1));
    goto LABEL_25;
  }
LABEL_24:
  __asan_report_load8();
LABEL_25:
  v17 = v14;
  if ( v20 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v17;
};

// Line 134: range 0000000015327976-0000000015327B95
// local variable allocation has failed, the output may be wrong!
_BOOL8 __fastcall YAML::detail::node_data::get<char [18]>(char [18] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator()(
        const YAML::detail::node_data::get<char [18]>::<lambda(YAML::detail::node_data::kv_pair)> *const this,
        const YAML::detail::node_data::kv_pair m)
{
  YAML::detail::node *second; // r14
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  YAML::detail::node *v7; // rcx OVERLAPPED
  __int64 *pMemory; // rdi
  volatile signed __int32 *v9; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rax
  volatile signed __int32 *p_M_use_count; // rdi
  char v12; // dl
  __int64 *v13; // rdx
  _BOOL4 v14; // eax
  __int64 v15; // rax
  char v16; // si
  _BOOL4 v17; // ebp
  __int64 v19; // [rsp+0h] [rbp-88h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // [rsp+8h] [rbp-80h]
  char v21[120]; // [rsp+10h] [rbp-78h] BYREF

  second = m.second;
  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v4 = v15;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 5 m:134";
  *(_QWORD *)(v4 + 16) = YAML::detail::node_data::get<char [18]>(char [18] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator();
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = v6;
  *(_QWORD *)(v4 + 40) = second;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_16;
  }
  v7 = *(YAML::detail::node **)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  pMemory = (__int64 *)this->__pMemory;
  if ( *(_BYTE *)(((unsigned __int64)this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8();
    goto LABEL_18;
  }
  v19 = *pMemory;
  v9 = (volatile signed __int32 *)(pMemory + 1);
  if ( *(_BYTE *)(((unsigned __int64)(pMemory + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    p_M_use_count = v9;
    __asan_report_load8();
    goto LABEL_19;
  }
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)pMemory[1];
  v20 = v10;
  if ( !v10 )
    goto LABEL_11;
  p_M_use_count = &v10->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_20;
  v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
  {
    _InterlockedAdd(p_M_use_count, 1u);
    goto LABEL_11;
  }
LABEL_19:
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_20:
  v16 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v16 && v16 )
  {
    __asan_report_load4(&v10->_M_use_count);
    goto LABEL_24;
  }
  ++v10->_M_use_count;
LABEL_11:
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v13 = &v19;
    v14 = YAML::detail::node::equals(v7, (const char *)this->__key, *(YAML::detail::shared_memory_holder *)(&v7 - 1));
    goto LABEL_25;
  }
LABEL_24:
  __asan_report_load8();
LABEL_25:
  v17 = v14;
  if ( v20 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v17;
};

// Line 134: range 0000000015328420-000000001532863F
// local variable allocation has failed, the output may be wrong!
_BOOL8 __fastcall YAML::detail::node_data::get<char [19]>(char [19] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator()(
        const YAML::detail::node_data::get<char [19]>::<lambda(YAML::detail::node_data::kv_pair)> *const this,
        const YAML::detail::node_data::kv_pair m)
{
  YAML::detail::node *second; // r14
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  YAML::detail::node *v7; // rcx OVERLAPPED
  __int64 *pMemory; // rdi
  volatile signed __int32 *v9; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rax
  volatile signed __int32 *p_M_use_count; // rdi
  char v12; // dl
  __int64 *v13; // rdx
  _BOOL4 v14; // eax
  __int64 v15; // rax
  char v16; // si
  _BOOL4 v17; // ebp
  __int64 v19; // [rsp+0h] [rbp-88h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // [rsp+8h] [rbp-80h]
  char v21[120]; // [rsp+10h] [rbp-78h] BYREF

  second = m.second;
  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v4 = v15;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 5 m:134";
  *(_QWORD *)(v4 + 16) = YAML::detail::node_data::get<char [19]>(char [19] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator();
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = v6;
  *(_QWORD *)(v4 + 40) = second;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_16;
  }
  v7 = *(YAML::detail::node **)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  pMemory = (__int64 *)this->__pMemory;
  if ( *(_BYTE *)(((unsigned __int64)this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8();
    goto LABEL_18;
  }
  v19 = *pMemory;
  v9 = (volatile signed __int32 *)(pMemory + 1);
  if ( *(_BYTE *)(((unsigned __int64)(pMemory + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    p_M_use_count = v9;
    __asan_report_load8();
    goto LABEL_19;
  }
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)pMemory[1];
  v20 = v10;
  if ( !v10 )
    goto LABEL_11;
  p_M_use_count = &v10->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_20;
  v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
  {
    _InterlockedAdd(p_M_use_count, 1u);
    goto LABEL_11;
  }
LABEL_19:
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_20:
  v16 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v16 && v16 )
  {
    __asan_report_load4(&v10->_M_use_count);
    goto LABEL_24;
  }
  ++v10->_M_use_count;
LABEL_11:
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v13 = &v19;
    v14 = YAML::detail::node::equals(v7, (const char *)this->__key, *(YAML::detail::shared_memory_holder *)(&v7 - 1));
    goto LABEL_25;
  }
LABEL_24:
  __asan_report_load8();
LABEL_25:
  v17 = v14;
  if ( v20 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v17;
};

// Line 134: range 0000000015327B98-0000000015327DB7
// local variable allocation has failed, the output may be wrong!
_BOOL8 __fastcall YAML::detail::node_data::get<char [20]>(char [20] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator()(
        const YAML::detail::node_data::get<char [20]>::<lambda(YAML::detail::node_data::kv_pair)> *const this,
        const YAML::detail::node_data::kv_pair m)
{
  YAML::detail::node *second; // r14
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  YAML::detail::node *v7; // rcx OVERLAPPED
  __int64 *pMemory; // rdi
  volatile signed __int32 *v9; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rax
  volatile signed __int32 *p_M_use_count; // rdi
  char v12; // dl
  __int64 *v13; // rdx
  _BOOL4 v14; // eax
  __int64 v15; // rax
  char v16; // si
  _BOOL4 v17; // ebp
  __int64 v19; // [rsp+0h] [rbp-88h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // [rsp+8h] [rbp-80h]
  char v21[120]; // [rsp+10h] [rbp-78h] BYREF

  second = m.second;
  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v4 = v15;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 5 m:134";
  *(_QWORD *)(v4 + 16) = YAML::detail::node_data::get<char [20]>(char [20] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator();
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = v6;
  *(_QWORD *)(v4 + 40) = second;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_16;
  }
  v7 = *(YAML::detail::node **)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  pMemory = (__int64 *)this->__pMemory;
  if ( *(_BYTE *)(((unsigned __int64)this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8();
    goto LABEL_18;
  }
  v19 = *pMemory;
  v9 = (volatile signed __int32 *)(pMemory + 1);
  if ( *(_BYTE *)(((unsigned __int64)(pMemory + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    p_M_use_count = v9;
    __asan_report_load8();
    goto LABEL_19;
  }
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)pMemory[1];
  v20 = v10;
  if ( !v10 )
    goto LABEL_11;
  p_M_use_count = &v10->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_20;
  v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
  {
    _InterlockedAdd(p_M_use_count, 1u);
    goto LABEL_11;
  }
LABEL_19:
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_20:
  v16 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v16 && v16 )
  {
    __asan_report_load4(&v10->_M_use_count);
    goto LABEL_24;
  }
  ++v10->_M_use_count;
LABEL_11:
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v13 = &v19;
    v14 = YAML::detail::node::equals(v7, (const char *)this->__key, *(YAML::detail::shared_memory_holder *)(&v7 - 1));
    goto LABEL_25;
  }
LABEL_24:
  __asan_report_load8();
LABEL_25:
  v17 = v14;
  if ( v20 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v17;
};

// Line 134: range 00000000153268A0-0000000015326ABF
// local variable allocation has failed, the output may be wrong!
_BOOL8 __fastcall YAML::detail::node_data::get<char [21]>(char [21] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator()(
        const YAML::detail::node_data::get<char [21]>::<lambda(YAML::detail::node_data::kv_pair)> *const this,
        const YAML::detail::node_data::kv_pair m)
{
  YAML::detail::node *second; // r14
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  YAML::detail::node *v7; // rcx OVERLAPPED
  __int64 *pMemory; // rdi
  volatile signed __int32 *v9; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rax
  volatile signed __int32 *p_M_use_count; // rdi
  char v12; // dl
  __int64 *v13; // rdx
  _BOOL4 v14; // eax
  __int64 v15; // rax
  char v16; // si
  _BOOL4 v17; // ebp
  __int64 v19; // [rsp+0h] [rbp-88h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // [rsp+8h] [rbp-80h]
  char v21[120]; // [rsp+10h] [rbp-78h] BYREF

  second = m.second;
  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v4 = v15;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 5 m:134";
  *(_QWORD *)(v4 + 16) = YAML::detail::node_data::get<char [21]>(char [21] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator();
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = v6;
  *(_QWORD *)(v4 + 40) = second;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_16;
  }
  v7 = *(YAML::detail::node **)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  pMemory = (__int64 *)this->__pMemory;
  if ( *(_BYTE *)(((unsigned __int64)this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8();
    goto LABEL_18;
  }
  v19 = *pMemory;
  v9 = (volatile signed __int32 *)(pMemory + 1);
  if ( *(_BYTE *)(((unsigned __int64)(pMemory + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    p_M_use_count = v9;
    __asan_report_load8();
    goto LABEL_19;
  }
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)pMemory[1];
  v20 = v10;
  if ( !v10 )
    goto LABEL_11;
  p_M_use_count = &v10->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_20;
  v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
  {
    _InterlockedAdd(p_M_use_count, 1u);
    goto LABEL_11;
  }
LABEL_19:
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_20:
  v16 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v16 && v16 )
  {
    __asan_report_load4(&v10->_M_use_count);
    goto LABEL_24;
  }
  ++v10->_M_use_count;
LABEL_11:
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v13 = &v19;
    v14 = YAML::detail::node::equals(v7, (const char *)this->__key, *(YAML::detail::shared_memory_holder *)(&v7 - 1));
    goto LABEL_25;
  }
LABEL_24:
  __asan_report_load8();
LABEL_25:
  v17 = v14;
  if ( v20 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v17;
};

// Line 134: range 0000000015327DBA-0000000015327FD9
// local variable allocation has failed, the output may be wrong!
_BOOL8 __fastcall YAML::detail::node_data::get<char [23]>(char [23] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator()(
        const YAML::detail::node_data::get<char [23]>::<lambda(YAML::detail::node_data::kv_pair)> *const this,
        const YAML::detail::node_data::kv_pair m)
{
  YAML::detail::node *second; // r14
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  YAML::detail::node *v7; // rcx OVERLAPPED
  __int64 *pMemory; // rdi
  volatile signed __int32 *v9; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rax
  volatile signed __int32 *p_M_use_count; // rdi
  char v12; // dl
  __int64 *v13; // rdx
  _BOOL4 v14; // eax
  __int64 v15; // rax
  char v16; // si
  _BOOL4 v17; // ebp
  __int64 v19; // [rsp+0h] [rbp-88h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // [rsp+8h] [rbp-80h]
  char v21[120]; // [rsp+10h] [rbp-78h] BYREF

  second = m.second;
  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v4 = v15;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 5 m:134";
  *(_QWORD *)(v4 + 16) = YAML::detail::node_data::get<char [23]>(char [23] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator();
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = v6;
  *(_QWORD *)(v4 + 40) = second;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_16;
  }
  v7 = *(YAML::detail::node **)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  pMemory = (__int64 *)this->__pMemory;
  if ( *(_BYTE *)(((unsigned __int64)this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8();
    goto LABEL_18;
  }
  v19 = *pMemory;
  v9 = (volatile signed __int32 *)(pMemory + 1);
  if ( *(_BYTE *)(((unsigned __int64)(pMemory + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    p_M_use_count = v9;
    __asan_report_load8();
    goto LABEL_19;
  }
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)pMemory[1];
  v20 = v10;
  if ( !v10 )
    goto LABEL_11;
  p_M_use_count = &v10->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_20;
  v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
  {
    _InterlockedAdd(p_M_use_count, 1u);
    goto LABEL_11;
  }
LABEL_19:
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_20:
  v16 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v16 && v16 )
  {
    __asan_report_load4(&v10->_M_use_count);
    goto LABEL_24;
  }
  ++v10->_M_use_count;
LABEL_11:
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v13 = &v19;
    v14 = YAML::detail::node::equals(v7, (const char *)this->__key, *(YAML::detail::shared_memory_holder *)(&v7 - 1));
    goto LABEL_25;
  }
LABEL_24:
  __asan_report_load8();
LABEL_25:
  v17 = v14;
  if ( v20 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v17;
};

// Line 134: range 0000000015328CA8-0000000015328EC7
// local variable allocation has failed, the output may be wrong!
_BOOL8 __fastcall YAML::detail::node_data::get<char [24]>(char [24] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator()(
        const YAML::detail::node_data::get<char [24]>::<lambda(YAML::detail::node_data::kv_pair)> *const this,
        const YAML::detail::node_data::kv_pair m)
{
  YAML::detail::node *second; // r14
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  YAML::detail::node *v7; // rcx OVERLAPPED
  __int64 *pMemory; // rdi
  volatile signed __int32 *v9; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rax
  volatile signed __int32 *p_M_use_count; // rdi
  char v12; // dl
  __int64 *v13; // rdx
  _BOOL4 v14; // eax
  __int64 v15; // rax
  char v16; // si
  _BOOL4 v17; // ebp
  __int64 v19; // [rsp+0h] [rbp-88h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // [rsp+8h] [rbp-80h]
  char v21[120]; // [rsp+10h] [rbp-78h] BYREF

  second = m.second;
  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v4 = v15;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 5 m:134";
  *(_QWORD *)(v4 + 16) = YAML::detail::node_data::get<char [24]>(char [24] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator();
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = v6;
  *(_QWORD *)(v4 + 40) = second;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_16;
  }
  v7 = *(YAML::detail::node **)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  pMemory = (__int64 *)this->__pMemory;
  if ( *(_BYTE *)(((unsigned __int64)this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8();
    goto LABEL_18;
  }
  v19 = *pMemory;
  v9 = (volatile signed __int32 *)(pMemory + 1);
  if ( *(_BYTE *)(((unsigned __int64)(pMemory + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    p_M_use_count = v9;
    __asan_report_load8();
    goto LABEL_19;
  }
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)pMemory[1];
  v20 = v10;
  if ( !v10 )
    goto LABEL_11;
  p_M_use_count = &v10->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_20;
  v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
  {
    _InterlockedAdd(p_M_use_count, 1u);
    goto LABEL_11;
  }
LABEL_19:
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_20:
  v16 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v16 && v16 )
  {
    __asan_report_load4(&v10->_M_use_count);
    goto LABEL_24;
  }
  ++v10->_M_use_count;
LABEL_11:
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v13 = &v19;
    v14 = YAML::detail::node::equals(v7, (const char *)this->__key, *(YAML::detail::shared_memory_holder *)(&v7 - 1));
    goto LABEL_25;
  }
LABEL_24:
  __asan_report_load8();
LABEL_25:
  v17 = v14;
  if ( v20 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v17;
};

// Line 134: range 0000000015327FDC-00000000153281FB
// local variable allocation has failed, the output may be wrong!
_BOOL8 __fastcall YAML::detail::node_data::get<char [25]>(char [25] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator()(
        const YAML::detail::node_data::get<char [25]>::<lambda(YAML::detail::node_data::kv_pair)> *const this,
        const YAML::detail::node_data::kv_pair m)
{
  YAML::detail::node *second; // r14
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  YAML::detail::node *v7; // rcx OVERLAPPED
  __int64 *pMemory; // rdi
  volatile signed __int32 *v9; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rax
  volatile signed __int32 *p_M_use_count; // rdi
  char v12; // dl
  __int64 *v13; // rdx
  _BOOL4 v14; // eax
  __int64 v15; // rax
  char v16; // si
  _BOOL4 v17; // ebp
  __int64 v19; // [rsp+0h] [rbp-88h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // [rsp+8h] [rbp-80h]
  char v21[120]; // [rsp+10h] [rbp-78h] BYREF

  second = m.second;
  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v4 = v15;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 5 m:134";
  *(_QWORD *)(v4 + 16) = YAML::detail::node_data::get<char [25]>(char [25] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator();
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = v6;
  *(_QWORD *)(v4 + 40) = second;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_16;
  }
  v7 = *(YAML::detail::node **)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  pMemory = (__int64 *)this->__pMemory;
  if ( *(_BYTE *)(((unsigned __int64)this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8();
    goto LABEL_18;
  }
  v19 = *pMemory;
  v9 = (volatile signed __int32 *)(pMemory + 1);
  if ( *(_BYTE *)(((unsigned __int64)(pMemory + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    p_M_use_count = v9;
    __asan_report_load8();
    goto LABEL_19;
  }
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)pMemory[1];
  v20 = v10;
  if ( !v10 )
    goto LABEL_11;
  p_M_use_count = &v10->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_20;
  v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
  {
    _InterlockedAdd(p_M_use_count, 1u);
    goto LABEL_11;
  }
LABEL_19:
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_20:
  v16 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v16 && v16 )
  {
    __asan_report_load4(&v10->_M_use_count);
    goto LABEL_24;
  }
  ++v10->_M_use_count;
LABEL_11:
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v13 = &v19;
    v14 = YAML::detail::node::equals(v7, (const char *)this->__key, *(YAML::detail::shared_memory_holder *)(&v7 - 1));
    goto LABEL_25;
  }
LABEL_24:
  __asan_report_load8();
LABEL_25:
  v17 = v14;
  if ( v20 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v17;
};

// Line 134: range 0000000015327532-0000000015327751
// local variable allocation has failed, the output may be wrong!
_BOOL8 __fastcall YAML::detail::node_data::get<char [35]>(char [35] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator()(
        const YAML::detail::node_data::get<char [35]>::<lambda(YAML::detail::node_data::kv_pair)> *const this,
        const YAML::detail::node_data::kv_pair m)
{
  YAML::detail::node *second; // r14
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  YAML::detail::node *v7; // rcx OVERLAPPED
  __int64 *pMemory; // rdi
  volatile signed __int32 *v9; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rax
  volatile signed __int32 *p_M_use_count; // rdi
  char v12; // dl
  __int64 *v13; // rdx
  _BOOL4 v14; // eax
  __int64 v15; // rax
  char v16; // si
  _BOOL4 v17; // ebp
  __int64 v19; // [rsp+0h] [rbp-88h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // [rsp+8h] [rbp-80h]
  char v21[120]; // [rsp+10h] [rbp-78h] BYREF

  second = m.second;
  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v4 = v15;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 5 m:134";
  *(_QWORD *)(v4 + 16) = YAML::detail::node_data::get<char [35]>(char [35] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator();
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = v6;
  *(_QWORD *)(v4 + 40) = second;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_16;
  }
  v7 = *(YAML::detail::node **)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  pMemory = (__int64 *)this->__pMemory;
  if ( *(_BYTE *)(((unsigned __int64)this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8();
    goto LABEL_18;
  }
  v19 = *pMemory;
  v9 = (volatile signed __int32 *)(pMemory + 1);
  if ( *(_BYTE *)(((unsigned __int64)(pMemory + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    p_M_use_count = v9;
    __asan_report_load8();
    goto LABEL_19;
  }
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)pMemory[1];
  v20 = v10;
  if ( !v10 )
    goto LABEL_11;
  p_M_use_count = &v10->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_20;
  v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
  {
    _InterlockedAdd(p_M_use_count, 1u);
    goto LABEL_11;
  }
LABEL_19:
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_20:
  v16 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v16 && v16 )
  {
    __asan_report_load4(&v10->_M_use_count);
    goto LABEL_24;
  }
  ++v10->_M_use_count;
LABEL_11:
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v13 = &v19;
    v14 = YAML::detail::node::equals(v7, (const char *)this->__key, *(YAML::detail::shared_memory_holder *)(&v7 - 1));
    goto LABEL_25;
  }
LABEL_24:
  __asan_report_load8();
LABEL_25:
  v17 = v14;
  if ( v20 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v17;
};

// Line 134: range 0000000015328642-0000000015328861
// local variable allocation has failed, the output may be wrong!
_BOOL8 __fastcall YAML::detail::node_data::get<char [5]>(char [5] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator()(
        const YAML::detail::node_data::get<char [5]>::<lambda(YAML::detail::node_data::kv_pair)> *const this,
        const YAML::detail::node_data::kv_pair m)
{
  YAML::detail::node *second; // r14
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  YAML::detail::node *v7; // rcx OVERLAPPED
  __int64 *pMemory; // rdi
  volatile signed __int32 *v9; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rax
  volatile signed __int32 *p_M_use_count; // rdi
  char v12; // dl
  __int64 *v13; // rdx
  _BOOL4 v14; // eax
  __int64 v15; // rax
  char v16; // si
  _BOOL4 v17; // ebp
  __int64 v19; // [rsp+0h] [rbp-88h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // [rsp+8h] [rbp-80h]
  char v21[120]; // [rsp+10h] [rbp-78h] BYREF

  second = m.second;
  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v4 = v15;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 5 m:134";
  *(_QWORD *)(v4 + 16) = YAML::detail::node_data::get<char [5]>(char [5] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator();
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = v6;
  *(_QWORD *)(v4 + 40) = second;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_16;
  }
  v7 = *(YAML::detail::node **)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  pMemory = (__int64 *)this->__pMemory;
  if ( *(_BYTE *)(((unsigned __int64)this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8();
    goto LABEL_18;
  }
  v19 = *pMemory;
  v9 = (volatile signed __int32 *)(pMemory + 1);
  if ( *(_BYTE *)(((unsigned __int64)(pMemory + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    p_M_use_count = v9;
    __asan_report_load8();
    goto LABEL_19;
  }
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)pMemory[1];
  v20 = v10;
  if ( !v10 )
    goto LABEL_11;
  p_M_use_count = &v10->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_20;
  v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
  {
    _InterlockedAdd(p_M_use_count, 1u);
    goto LABEL_11;
  }
LABEL_19:
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_20:
  v16 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v16 && v16 )
  {
    __asan_report_load4(&v10->_M_use_count);
    goto LABEL_24;
  }
  ++v10->_M_use_count;
LABEL_11:
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v13 = &v19;
    v14 = YAML::detail::node::equals(v7, (const char *)this->__key, *(YAML::detail::shared_memory_holder *)(&v7 - 1));
    goto LABEL_25;
  }
LABEL_24:
  __asan_report_load8();
LABEL_25:
  v17 = v14;
  if ( v20 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v17;
};

// Line 134: range 0000000015328864-0000000015328A83
// local variable allocation has failed, the output may be wrong!
_BOOL8 __fastcall YAML::detail::node_data::get<char [6]>(char [6] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator()(
        const YAML::detail::node_data::get<char [6]>::<lambda(YAML::detail::node_data::kv_pair)> *const this,
        const YAML::detail::node_data::kv_pair m)
{
  YAML::detail::node *second; // r14
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  YAML::detail::node *v7; // rcx OVERLAPPED
  __int64 *pMemory; // rdi
  volatile signed __int32 *v9; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rax
  volatile signed __int32 *p_M_use_count; // rdi
  char v12; // dl
  __int64 *v13; // rdx
  _BOOL4 v14; // eax
  __int64 v15; // rax
  char v16; // si
  _BOOL4 v17; // ebp
  __int64 v19; // [rsp+0h] [rbp-88h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // [rsp+8h] [rbp-80h]
  char v21[120]; // [rsp+10h] [rbp-78h] BYREF

  second = m.second;
  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v4 = v15;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 5 m:134";
  *(_QWORD *)(v4 + 16) = YAML::detail::node_data::get<char [6]>(char [6] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator();
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = v6;
  *(_QWORD *)(v4 + 40) = second;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_16;
  }
  v7 = *(YAML::detail::node **)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  pMemory = (__int64 *)this->__pMemory;
  if ( *(_BYTE *)(((unsigned __int64)this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8();
    goto LABEL_18;
  }
  v19 = *pMemory;
  v9 = (volatile signed __int32 *)(pMemory + 1);
  if ( *(_BYTE *)(((unsigned __int64)(pMemory + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    p_M_use_count = v9;
    __asan_report_load8();
    goto LABEL_19;
  }
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)pMemory[1];
  v20 = v10;
  if ( !v10 )
    goto LABEL_11;
  p_M_use_count = &v10->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_20;
  v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
  {
    _InterlockedAdd(p_M_use_count, 1u);
    goto LABEL_11;
  }
LABEL_19:
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_20:
  v16 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v16 && v16 )
  {
    __asan_report_load4(&v10->_M_use_count);
    goto LABEL_24;
  }
  ++v10->_M_use_count;
LABEL_11:
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v13 = &v19;
    v14 = YAML::detail::node::equals(v7, (const char *)this->__key, *(YAML::detail::shared_memory_holder *)(&v7 - 1));
    goto LABEL_25;
  }
LABEL_24:
  __asan_report_load8();
LABEL_25:
  v17 = v14;
  if ( v20 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v17;
};

// Line 134: range 000000001532667E-000000001532689D
// local variable allocation has failed, the output may be wrong!
_BOOL8 __fastcall YAML::detail::node_data::get<char [9]>(char [9] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator()(
        const YAML::detail::node_data::get<char [9]>::<lambda(YAML::detail::node_data::kv_pair)> *const this,
        const YAML::detail::node_data::kv_pair m)
{
  YAML::detail::node *second; // r14
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  YAML::detail::node *v7; // rcx OVERLAPPED
  __int64 *pMemory; // rdi
  volatile signed __int32 *v9; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rax
  volatile signed __int32 *p_M_use_count; // rdi
  char v12; // dl
  __int64 *v13; // rdx
  _BOOL4 v14; // eax
  __int64 v15; // rax
  char v16; // si
  _BOOL4 v17; // ebp
  __int64 v19; // [rsp+0h] [rbp-88h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // [rsp+8h] [rbp-80h]
  char v21[120]; // [rsp+10h] [rbp-78h] BYREF

  second = m.second;
  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v4 = v15;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 5 m:134";
  *(_QWORD *)(v4 + 16) = YAML::detail::node_data::get<char [9]>(char [9] const&,std::shared_ptr<YAML::detail::memory_holder>)const::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}::operator();
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = v6;
  *(_QWORD *)(v4 + 40) = second;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_16;
  }
  v7 = *(YAML::detail::node **)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  pMemory = (__int64 *)this->__pMemory;
  if ( *(_BYTE *)(((unsigned __int64)this->__pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8();
    goto LABEL_18;
  }
  v19 = *pMemory;
  v9 = (volatile signed __int32 *)(pMemory + 1);
  if ( *(_BYTE *)(((unsigned __int64)(pMemory + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    p_M_use_count = v9;
    __asan_report_load8();
    goto LABEL_19;
  }
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)pMemory[1];
  v20 = v10;
  if ( !v10 )
    goto LABEL_11;
  p_M_use_count = &v10->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_20;
  v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
  {
    _InterlockedAdd(p_M_use_count, 1u);
    goto LABEL_11;
  }
LABEL_19:
  v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_20:
  v16 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v16 && v16 )
  {
    __asan_report_load4(&v10->_M_use_count);
    goto LABEL_24;
  }
  ++v10->_M_use_count;
LABEL_11:
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v13 = &v19;
    v14 = YAML::detail::node::equals(v7, (const char *)this->__key, *(YAML::detail::shared_memory_holder *)(&v7 - 1));
    goto LABEL_25;
  }
LABEL_24:
  __asan_report_load8();
LABEL_25:
  v17 = v14;
  if ( v20 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v17;
};
