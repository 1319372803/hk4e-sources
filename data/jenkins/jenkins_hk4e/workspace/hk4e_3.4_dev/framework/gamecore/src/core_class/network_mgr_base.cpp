// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/core_class/network_mgr_base.cpp

// Line 19: range 0000000014E441FA-0000000014E44BF5
int32_t __fastcall NetworkMgrBase::getProcessNetworkConfigFromRemote(common::minet::http_client::HttpRequest *req, Json::Value *jval);

// Line 43: range 0000000014E43A02-0000000014E441F5
int32_t __fastcall NetworkMgrBase::convertConnectionListJsonToPTree(
        const Json::Value *connection_list,
        const std::string *port_name,
        common::tools::PTree *ptree)
{
  char *v3; // rbx
  _DWORD *v4; // r14
  __int64 v5; // rax
  Json::Value_0 *v6; // r13
  std::forward_iterator_tag v8; // cl
  common::milog::MilogStringStream *v9; // rbp
  common::milog::MilogStringStream *v10; // rdi
  char *v11; // rdi
  size_t v12; // rbx
  int32_t result; // eax
  Json::Value_0::ArrayIndex i; // ebp
  const Json::Value_0 *v15; // r12
  Json::Value_0 *v16; // rax
  const Json::Value_0 *v17; // rax
  Json::Value_0 *v18; // rax
  const Json::Value_0 *v19; // rax
  Json::Value_0 *v20; // rax
  std::forward_iterator_tag v21; // cl
  std::forward_iterator_tag v22; // cl
  std::forward_iterator_tag v23; // cl
  std::forward_iterator_tag v24; // cl
  int v25; // r12d
  char *v26; // rdi
  char *v27; // rdi
  char *v28; // rdi
  common::milog::MilogStringStream *ostr; // r15
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  size_t v32; // r12
  common::milog::MilogStringStream *v33; // r15
  char *v34; // rdi
  size_t v35; // r12
  char *v36; // rdi
  char *v37; // rdi
  int v38; // [rsp+0h] [rbp-1A8h]
  common::tools::PTree *ptreea; // [rsp+8h] [rbp-1A0h]
  unsigned __int64 v40; // [rsp+18h] [rbp-190h]
  common::milog::MiLogStream v41; // [rsp+30h] [rbp-178h] BYREF
  std::string child_name; // [rsp+50h] [rbp-158h] BYREF
  char v43[312]; // [rsp+70h] [rbp-138h] BYREF

  ptreea = ptree;
  v40 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v40 = v5;
  }
  v3 = (char *)(v40 + 256);
  *(_QWORD *)v40 = 1102416563LL;
  *(_QWORD *)(v40 + 8) = "4 32 8 5 pt:59 64 32 13 app_id_str:56 128 32 5 ip:57 192 32 7 port:58";
  *(_QWORD *)(v40 + 16) = NetworkMgrBase::convertConnectionListJsonToPTree;
  v4 = (_DWORD *)(v40 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  v6 = (Json::Value_0 *)Json::Value::operator[]((const Json::Value_0 *const)connection_list, "processes");
  if ( Json::Value::isArray(v6) )
  {
    child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&child_name, &byte_1AE3966B[-11], byte_1AE3966B, v8);
LABEL_14:
    common::tools::PTree::erase(ptreea, &child_name);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
      operator delete(child_name._M_dataplus._M_p);
    for ( i = 0; ; ++i )
    {
      if ( i >= Json::Value::size(v6) )
      {
LABEL_52:
        result = 0;
        goto LABEL_53;
      }
      v15 = (const Json::Value_0 *)Json::Value::operator[]((Json::Value *)v6, i, v38, (char)ptreea);
      v16 = (Json::Value_0 *)Json::Value::operator[](v15, "app_id");
      Json::Value::asString[abi:cxx11]((Json::String *)v3 - 6, v16);
      v17 = Json::Value::operator[](v15, "server");
      v18 = (Json::Value_0 *)Json::Value::operator[](v17, "inner_ip");
      Json::Value::asString[abi:cxx11]((Json::String *)v3 - 4, v18);
      v19 = Json::Value::operator[](v15, "port");
      v20 = (Json::Value_0 *)Json::Value::operator[](v19, port_name);
      Json::Value::asString[abi:cxx11]((Json::String *)v3 - 2, v20);
      common::tools::PTree::PTree((common::tools::PTree *const)v3 - 28);
      child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&child_name, &byte_1AE397B0[-16], byte_1AE397B0, v21);
      common::tools::PTree::putValue((common::tools::PTree *const)v3 - 28, &child_name, (const std::string *)v3 - 6);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
        operator delete(child_name._M_dataplus._M_p);
      child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&child_name, &byte_1AE397EC[-12], byte_1AE397EC, v22);
      common::tools::PTree::putValue((common::tools::PTree *const)v3 - 28, &child_name, (const std::string *)v3 - 4);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
        operator delete(child_name._M_dataplus._M_p);
      child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&child_name, &byte_1AE3982E[-14], byte_1AE3982E, v23);
      common::tools::PTree::putValue((common::tools::PTree *const)v3 - 28, &child_name, (const std::string *)v3 - 2);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
        operator delete(child_name._M_dataplus._M_p);
      child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&child_name, &byte_1AE39873[-19], byte_1AE39873, v24);
      v25 = common::tools::PTree::addChild(ptreea, &child_name, (const common::tools::PTree *)v3 - 28);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
        operator delete(child_name._M_dataplus._M_p);
      if ( v25 )
      {
        common::milog::MiLogStream::MiLogStream(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/core_class/network_mgr_base.cpp",
          "convertConnectionListJsonToPTree",
          65);
        ostr = v41.ostr_;
        p_cur = v41.ostr_;
        if ( *(_BYTE *)(((unsigned __int64)v41.ostr_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v41.ostr_);
LABEL_49:
          __asan_report_load8(p_cur);
LABEL_50:
          __asan_report_load8(p_cur);
LABEL_51:
          __asan_report_load8(p_cur);
          goto LABEL_52;
        }
        p_cur = (common::milog::MilogStringStream *)&v41.ostr_->buffer_.cur_;
        if ( *(_BYTE *)(((unsigned __int64)&v41.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
          goto LABEL_49;
        cur = v41.ostr_->buffer_.cur_;
        v32 = (size_t)&v41.ostr_->buffer_.data_[-(int)cur + 0x4000];
        if ( v32 > 0x18 )
          v32 = 25LL;
        memcpy(cur, "add child failed, app_id:", v32);
        ostr->buffer_.cur_ += v32;
        v33 = v41.ostr_;
        p_cur = v41.ostr_;
        if ( *(_BYTE *)(((unsigned __int64)v41.ostr_ >> 3) + 0x7FFF8000) )
          goto LABEL_50;
        p_cur = (common::milog::MilogStringStream *)&v41.ostr_->buffer_.cur_;
        if ( *(_BYTE *)(((unsigned __int64)&v41.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
          goto LABEL_51;
        v34 = v41.ostr_->buffer_.cur_;
        v35 = (size_t)&v41.ostr_->buffer_.data_[-(int)v34 + 0x4000];
        if ( *((_QWORD *)v3 - 23) <= v35 )
          v35 = *((_QWORD *)v3 - 23);
        memcpy(v34, *((const void **)v3 - 24), v35);
        v33->buffer_.cur_ += v35;
        common::milog::MiLogStream::~MiLogStream(&v41);
        common::tools::PTree::~PTree((common::tools::PTree *const)v3 - 28);
        v36 = (char *)*((_QWORD *)v3 - 8);
        if ( v36 != v3 - 48 )
          operator delete(v36);
        v37 = (char *)*((_QWORD *)v3 - 16);
        if ( v37 != v3 - 112 )
          operator delete(v37);
        v28 = (char *)*((_QWORD *)v3 - 24);
        if ( v28 != v3 - 176 )
        {
LABEL_32:
          operator delete(v28);
          continue;
        }
      }
      else
      {
        common::tools::PTree::~PTree((common::tools::PTree *const)v3 - 28);
        v26 = (char *)*((_QWORD *)v3 - 8);
        if ( v26 != v3 - 48 )
          operator delete(v26);
        v27 = (char *)*((_QWORD *)v3 - 16);
        if ( v27 != v3 - 112 )
          operator delete(v27);
        v28 = (char *)*((_QWORD *)v3 - 24);
        if ( v28 != v3 - 176 )
          goto LABEL_32;
      }
    }
  }
  v3 = (char *)(v40 + 256);
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)(v40 + 192),
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/core_class/network_mgr_base.cpp",
    "convertConnectionListJsonToPTree",
    49);
  v9 = *(common::milog::MilogStringStream **)(v40 + 216);
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    v10 = *(common::milog::MilogStringStream **)(v40 + 216);
    __asan_report_load8(v10);
    goto LABEL_13;
  }
  v10 = (common::milog::MilogStringStream *)&v9->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v9->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8(v10);
    goto LABEL_14;
  }
  v11 = v9->buffer_.cur_;
  v12 = LODWORD(v9->buffer_.data_) + 0x4000 - (int)v11;
  if ( v12 > 0x17 )
    v12 = 24LL;
  memcpy(v11, "processess is not array!", v12);
  v9->buffer_.cur_ += v12;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v40 + 192));
  result = -1;
LABEL_53:
  if ( v43 == (char *)v40 )
  {
    *(_QWORD *)((v40 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v40 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v40 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v40 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v40 = 1172321806LL;
    *(_QWORD *)((v40 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v40 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v40 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v40 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 79: range 0000000014E44BFA-0000000014E46201
int32_t __fastcall NetworkMgrBase::getCMDBConfigFromPTree(const common::tools::PTree *pt, Json::Value *jval);

// Line 104: range 0000000014E43356-0000000014E436A5
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall NetworkMgrBase::sendPacketToTargetService(
        NetworkMgrBase *const this,
        common::minet::PacketPtr packet_ptr,
        uint32_t target_service,
        uint32_t target_ip)
{
  unsigned __int64 v4; // rsi
  NetworkMgrBase *v5; // rbp
  _QWORD *v6; // rsi
  __int64 (__fastcall *v7)(NetworkMgrBase *, __int64 *); // rdx
  unsigned __int64 v8; // rsi
  __int64 *v9; // rsi
  volatile signed __int32 *p_M_use_count; // rdi
  __int64 v11; // rsi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v12; // rax
  char v13; // cl
  unsigned int v14; // eax
  __int64 v15; // rsi
  unsigned int v16; // ebp
  volatile signed __int32 *v17; // rsi
  char v18; // si
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v19; // rbx
  _Atomic_word *v20; // rdi
  char v21; // dl
  signed __int32 M_use_count; // eax
  char v24; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v26; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v28; // rdi
  char v29; // dl
  struct _Unwind_Exception *v30; // rbx
  __int64 v31; // [rsp+0h] [rbp-48h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v32; // [rsp+8h] [rbp-40h]
  common::milog::MiLogStream v33; // [rsp+10h] [rbp-38h] BYREF

  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v15);
    goto LABEL_14;
  }
  v5 = this;
  if ( !*v6 )
  {
LABEL_14:
    common::milog::MiLogStream::MiLogStream(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/core_class/network_mgr_base.cpp",
      "sendPacketToTargetService",
      107);
    common::milog::MiLogStream::operator()(&v33, "packet_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v33);
    return (unsigned int)-1;
  }
  common::minet::Packet::setTarget(
    (common::minet::Packet *const)packet_ptr._M_ptr->_vptr_Packet,
    (uint32_t)packet_ptr._M_refcount._M_pi,
    target_service);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_16;
  }
  this = (NetworkMgrBase *const)(this->_vptr_NetworkMgrBase + 8);
  if ( *(_BYTE *)(((unsigned __int64)(v5->_vptr_NetworkMgrBase + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(this);
    goto LABEL_17;
  }
  v7 = (__int64 (__fastcall *)(NetworkMgrBase *, __int64 *))*((_QWORD *)v5->_vptr_NetworkMgrBase + 8);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    p_M_use_count = v17;
    __asan_report_load8(v17);
    goto LABEL_18;
  }
  v31 = *v9;
  p_M_use_count = (volatile signed __int32 *)(v9 + 1);
  if ( *(_BYTE *)(((unsigned __int64)(v9 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(p_M_use_count);
LABEL_19:
    v12 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
    goto LABEL_20;
  }
  v12 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v11 + 8);
  v32 = v12;
  if ( !v12 )
  {
LABEL_12:
    v14 = v7(v5, &v31);
    goto LABEL_24;
  }
  p_M_use_count = &v12->_M_use_count;
  if ( &_pthread_key_create )
  {
    v13 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v13 || !v13 )
    {
      _InterlockedAdd(p_M_use_count, 1u);
      goto LABEL_12;
    }
    goto LABEL_19;
  }
LABEL_20:
  v18 = *(_BYTE *)(((unsigned __int64)&v12->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v12 + 8) & 7) + 3) < v18 || !v18 )
  {
    ++v12->_M_use_count;
    goto LABEL_12;
  }
  __asan_report_load4(&v12->_M_use_count);
LABEL_24:
  v16 = v14;
  v19 = v32;
  if ( v32 )
  {
    v20 = &v32->_M_use_count;
    if ( &_pthread_key_create )
    {
      v21 = *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v20 & 7) + 3) < v21 || !v21 )
      {
        M_use_count = _InterlockedExchangeAdd(v20, 0xFFFFFFFF);
        goto LABEL_29;
      }
      __asan_report_store4(v20);
    }
    v24 = *(_BYTE *)(((unsigned __int64)&v19->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v19 + 8) & 7) + 3) >= v24 && v24 )
    {
      __asan_report_load4(&v19->_M_use_count);
      goto LABEL_36;
    }
    M_use_count = v19->_M_use_count;
    v19->_M_use_count = M_use_count - 1;
LABEL_29:
    if ( M_use_count != 1 )
      return v16;
LABEL_36:
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v19;
      __asan_report_load8(v19);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v19->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v19->_vptr__Sp_counted_base + 2))(v19);
        p_M_weak_count = &v19->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_49;
        v26 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v26 || !v26 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_42;
        }
LABEL_48:
        __asan_report_store4(p_M_weak_count);
LABEL_49:
        v29 = *(_BYTE *)(((unsigned __int64)&v19->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v19 + 12) & 7) + 3) >= v29 && v29 )
        {
          __asan_report_load4(&v19->_M_weak_count);
          goto LABEL_53;
        }
        M_weak_count = v19->_M_weak_count;
        v19->_M_weak_count = M_weak_count - 1;
LABEL_42:
        if ( M_weak_count != 1 )
          return v16;
        if ( !*(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          v28 = (unsigned __int64)(v19->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v19->_vptr__Sp_counted_base + 3))(v19);
            return v16;
          }
LABEL_54:
          v30 = (struct _Unwind_Exception *)__asan_report_load8(v28);
          common::milog::MiLogStream::~MiLogStream(&v33);
          __asan_handle_no_return(&v33);
          _Unwind_Resume(v30);
        }
LABEL_53:
        v28 = (unsigned __int64)v19;
        __asan_report_load8(v19);
        goto LABEL_54;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_48;
  }
  return v16;
};

// Line 117: range 0000000014E436AA-0000000014E439FC
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall NetworkMgrBase::broadcastPacketToTargetService(
        NetworkMgrBase *const this,
        common::minet::PacketPtr packet_ptr,
        uint32_t target_service)
{
  unsigned __int64 v3; // rsi
  NetworkMgrBase *v4; // rbp
  _QWORD *v5; // rsi
  __int64 (__fastcall *v6)(NetworkMgrBase *, __int64 *); // rdx
  unsigned __int64 v7; // rsi
  __int64 *v8; // rsi
  volatile signed __int32 *p_M_use_count; // rdi
  __int64 v10; // rsi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v11; // rax
  char v12; // cl
  unsigned int v13; // eax
  __int64 v14; // rsi
  unsigned int v15; // ebp
  volatile signed __int32 *v16; // rsi
  char v17; // si
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v18; // rbx
  _Atomic_word *v19; // rdi
  char v20; // dl
  signed __int32 M_use_count; // eax
  char v23; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v25; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v27; // rdi
  char v28; // dl
  struct _Unwind_Exception *v29; // rbx
  __int64 v30; // [rsp+0h] [rbp-48h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v31; // [rsp+8h] [rbp-40h]
  common::milog::MiLogStream v32; // [rsp+10h] [rbp-38h] BYREF

  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v14);
    goto LABEL_14;
  }
  v4 = this;
  if ( !*v5 )
  {
LABEL_14:
    common::milog::MiLogStream::MiLogStream(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/core_class/network_mgr_base.cpp",
      "broadcastPacketToTargetService",
      120);
    common::milog::MiLogStream::operator()(&v32, "packet_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v32);
    return (unsigned int)-1;
  }
  common::minet::Packet::setTarget(
    (common::minet::Packet *const)packet_ptr._M_ptr->_vptr_Packet,
    (uint32_t)packet_ptr._M_refcount._M_pi,
    0);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_16;
  }
  this = (NetworkMgrBase *const)(this->_vptr_NetworkMgrBase + 9);
  if ( *(_BYTE *)(((unsigned __int64)(v4->_vptr_NetworkMgrBase + 9) >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(this);
    goto LABEL_17;
  }
  v6 = (__int64 (__fastcall *)(NetworkMgrBase *, __int64 *))*((_QWORD *)v4->_vptr_NetworkMgrBase + 9);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    p_M_use_count = v16;
    __asan_report_load8(v16);
    goto LABEL_18;
  }
  v30 = *v8;
  p_M_use_count = (volatile signed __int32 *)(v8 + 1);
  if ( *(_BYTE *)(((unsigned __int64)(v8 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(p_M_use_count);
LABEL_19:
    v11 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
    goto LABEL_20;
  }
  v11 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v10 + 8);
  v31 = v11;
  if ( !v11 )
  {
LABEL_12:
    v13 = v6(v4, &v30);
    goto LABEL_24;
  }
  p_M_use_count = &v11->_M_use_count;
  if ( &_pthread_key_create )
  {
    v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
    {
      _InterlockedAdd(p_M_use_count, 1u);
      goto LABEL_12;
    }
    goto LABEL_19;
  }
LABEL_20:
  v17 = *(_BYTE *)(((unsigned __int64)&v11->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v11 + 8) & 7) + 3) < v17 || !v17 )
  {
    ++v11->_M_use_count;
    goto LABEL_12;
  }
  __asan_report_load4(&v11->_M_use_count);
LABEL_24:
  v15 = v13;
  v18 = v31;
  if ( v31 )
  {
    v19 = &v31->_M_use_count;
    if ( &_pthread_key_create )
    {
      v20 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v19 & 7) + 3) < v20 || !v20 )
      {
        M_use_count = _InterlockedExchangeAdd(v19, 0xFFFFFFFF);
        goto LABEL_29;
      }
      __asan_report_store4(v19);
    }
    v23 = *(_BYTE *)(((unsigned __int64)&v18->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v18 + 8) & 7) + 3) >= v23 && v23 )
    {
      __asan_report_load4(&v18->_M_use_count);
      goto LABEL_36;
    }
    M_use_count = v18->_M_use_count;
    v18->_M_use_count = M_use_count - 1;
LABEL_29:
    if ( M_use_count != 1 )
      return v15;
LABEL_36:
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)v18;
      __asan_report_load8(v18);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(v18->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v18->_vptr__Sp_counted_base + 2))(v18);
        p_M_weak_count = &v18->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_49;
        v25 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v25 || !v25 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_42;
        }
LABEL_48:
        __asan_report_store4(p_M_weak_count);
LABEL_49:
        v28 = *(_BYTE *)(((unsigned __int64)&v18->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v18 + 12) & 7) + 3) >= v28 && v28 )
        {
          __asan_report_load4(&v18->_M_weak_count);
          goto LABEL_53;
        }
        M_weak_count = v18->_M_weak_count;
        v18->_M_weak_count = M_weak_count - 1;
LABEL_42:
        if ( M_weak_count != 1 )
          return v15;
        if ( !*(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          v27 = (unsigned __int64)(v18->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v18->_vptr__Sp_counted_base + 3))(v18);
            return v15;
          }
LABEL_54:
          v29 = (struct _Unwind_Exception *)__asan_report_load8(v27);
          common::milog::MiLogStream::~MiLogStream(&v32);
          __asan_handle_no_return(&v32);
          _Unwind_Resume(v29);
        }
LABEL_53:
        v27 = (unsigned __int64)v18;
        __asan_report_load8(v18);
        goto LABEL_54;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_48;
  }
  return v15;
};

// Line 126: range 0000000014E46206-0000000014E4621D
void __cdecl GLOBAL__sub_I_network_mgr_base_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 126: range 0000000014E43162-0000000014E43350
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority);
