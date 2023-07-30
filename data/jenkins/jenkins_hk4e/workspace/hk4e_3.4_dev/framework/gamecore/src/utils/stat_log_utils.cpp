// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/utils/stat_log_utils.cpp

// Line 22: range 0000000014EC01B0-0000000014EC053A
void __fastcall StatLogUtils::ContextHolder::ContextHolder(
        StatLogUtils::ContextHolder *const this,
        uint32_t action_id,
        std::string *a3)
{
  char v3; // al
  char v4; // al

  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 <= ((unsigned __int8)this & 7) && v3 )
  {
    __asan_report_store1(this);
    goto LABEL_9;
  }
  this->is_valid_ = 0;
  if ( StatLogUtils::pushContext(action_id, a3) )
    return;
  v4 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v4 <= ((unsigned __int8)this & 7) && v4 )
  {
LABEL_9:
    __asan_report_store1(this);
    StatLogUtils::popContext();
    return;
  }
  this->is_valid_ = 1;
};

// Line 29: range 0000000014EC0540-0000000014EC0574
void __fastcall StatLogUtils::ContextHolder::~ContextHolder(StatLogUtils::ContextHolder *const this)
{
  char v1; // al

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 <= ((unsigned __int8)this & 7) && v1 )
  {
    __asan_report_load1(this);
    goto LABEL_6;
  }
  if ( this->is_valid_ )
LABEL_6:
    StatLogUtils::popContext();
};

// Line 50: range 0000000014EBD900-0000000014EBE00A
__int64 __fastcall StatLogUtils::parseToString(
        const StatLogUtils::MessagePtr head_ptr,
        const StatLogUtils::MessagePtr head_ext_ptr,
        const StatLogUtils::MessagePtr body_ptr)
{
  int (**v3)(...); // r15
  const StatLogUtils::Message **M_ptr; // r13
  std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *v5; // rbx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r14
  int (**vptr_MessageLite)(...); // rdi
  char v9; // al
  int32_t v10; // eax
  __int64 v11; // rax
  char *v12; // rdi
  std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *v14; // rdi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r15
  char v17; // al
  char v18; // al
  int32_t v19; // eax
  int (**v20)(...); // r15
  int (**v21)(...); // r13
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r15
  char v24; // al
  char v25; // al
  int32_t v26; // eax
  int (**v27)(...); // r15
  int (**v28)(...); // r13
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r15
  char v31; // al
  char v32; // al
  int32_t v33; // eax
  unsigned int body_ext_ptr_12; // [rsp+24h] [rbp-C4h]
  common::milog::MiLogStream v36; // [rsp+30h] [rbp-B8h] BYREF
  char v37[152]; // [rsp+50h] [rbp-98h] BYREF

  M_ptr = (const StatLogUtils::Message **)head_ptr._M_ptr;
  v5 = body_ptr._M_ptr;
  v6 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(96LL);
    if ( v11 )
      v6 = v11;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 32 10 tmp_str:52";
  *(_QWORD *)(v6 + 16) = StatLogUtils::parseToString;
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&v5[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_12;
  }
  v5[1]._vptr_MessageLite = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    vptr_MessageLite = (int (**)(...))v5;
    __asan_report_load8(v5);
LABEL_13:
    __asan_report_store1(vptr_MessageLite);
    goto LABEL_14;
  }
  vptr_MessageLite = v5->_vptr_MessageLite;
  v9 = *(_BYTE *)(((unsigned __int64)v5->_vptr_MessageLite >> 3) + 0x7FFF8000);
  if ( v9 <= ((__int64)v5->_vptr_MessageLite & 7) && v9 )
    goto LABEL_13;
  *(_BYTE *)vptr_MessageLite = 0;
  *(_QWORD *)(v6 + 32) = v6 + 48;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_BYTE *)(v6 + 48) = 0;
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    v10 = __asan_report_load8(M_ptr);
    goto LABEL_15;
  }
  if ( !*M_ptr )
  {
LABEL_17:
    common::milog::MiLogStream::MiLogStream(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/stat_log_utils.cpp",
      "parseToString",
      57);
    common::milog::MiLogStream::operator()(&v36, "convert head failed");
    common::milog::MiLogStream::~MiLogStream(&v36);
    body_ext_ptr_12 = -1;
    goto LABEL_18;
  }
  v10 = StatLogUtils::parseProtoToString(*M_ptr, 1u, (std::string *)(v6 + 32));
LABEL_15:
  body_ext_ptr_12 = v10;
  if ( v10 )
    goto LABEL_17;
  std::string::_M_append(v5, *(_QWORD *)(v6 + 32), *(_QWORD *)(v6 + 40));
  if ( *(_BYTE *)(((unsigned __int64)&v5[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&v5[1]);
    goto LABEL_38;
  }
  v3 = v5[1]._vptr_MessageLite;
  M_ptr = (const StatLogUtils::Message **)((char *)v3 + 1);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    v14 = v5;
    __asan_report_load8(v5);
LABEL_39:
    __asan_report_load8(v14);
    goto LABEL_40;
  }
  if ( (std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *)v5->_vptr_MessageLite != &v5[2] )
  {
    v14 = v5 + 2;
    if ( !*(_BYTE *)(((unsigned __int64)&v5[2] >> 3) + 0x7FFF8000) )
    {
      v15 = (unsigned __int64)v5[2]._vptr_MessageLite;
      goto LABEL_28;
    }
    goto LABEL_39;
  }
LABEL_40:
  v15 = 15LL;
LABEL_28:
  if ( (unsigned __int64)M_ptr > v15 )
    std::string::_M_mutate(v5, v3, 0LL, 0LL, 1LL);
  v16 = (unsigned __int64)v5->_vptr_MessageLite + (unsigned __int64)v3;
  v17 = *(_BYTE *)((v16 >> 3) + 0x7FFF8000);
  if ( v17 <= (char)(v16 & 7) && v17 )
  {
    __asan_report_store1(v16);
LABEL_42:
    __asan_report_store1(M_ptr);
    goto LABEL_43;
  }
  *(_BYTE *)v16 = 35;
  v5[1]._vptr_MessageLite = (int (**)(...))M_ptr;
  M_ptr = (const StatLogUtils::Message **)((char *)M_ptr + (unsigned __int64)v5->_vptr_MessageLite);
  v18 = *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000);
  if ( v18 <= ((unsigned __int8)M_ptr & 7) && v18 )
    goto LABEL_42;
  *(_BYTE *)M_ptr = 0;
  if ( *(_BYTE *)(((unsigned __int64)head_ptr._M_refcount._M_pi >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    v19 = __asan_report_load8(head_ptr._M_refcount._M_pi);
    goto LABEL_44;
  }
  if ( !head_ptr._M_refcount._M_pi->_vptr__Sp_counted_base )
    goto LABEL_47;
  v19 = StatLogUtils::parseProtoToString(
          (const StatLogUtils::Message *)head_ptr._M_refcount._M_pi->_vptr__Sp_counted_base,
          1u,
          (std::string *)(v6 + 32));
LABEL_44:
  if ( v19 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/stat_log_utils.cpp",
      "parseToString",
      70);
    common::milog::MiLogStream::operator()(&v36, "convert head_ext failed");
    common::milog::MiLogStream::~MiLogStream(&v36);
    body_ext_ptr_12 = -1;
    goto LABEL_18;
  }
  std::string::_M_append(v5, *(_QWORD *)(v6 + 32), *(_QWORD *)(v6 + 40));
LABEL_47:
  v20 = v5[1]._vptr_MessageLite;
  v21 = (int (**)(...))((char *)v20 + 1);
  if ( (std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *)v5->_vptr_MessageLite != &v5[2] )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&v5[2] >> 3) + 0x7FFF8000) )
    {
      v22 = (unsigned __int64)v5[2]._vptr_MessageLite;
      goto LABEL_50;
    }
    __asan_report_load8(&v5[2]);
  }
  v22 = 15LL;
LABEL_50:
  if ( (unsigned __int64)v21 > v22 )
    std::string::_M_mutate(v5, v20, 0LL, 0LL, 1LL);
  v23 = (unsigned __int64)v5->_vptr_MessageLite + (unsigned __int64)v20;
  v24 = *(_BYTE *)((v23 >> 3) + 0x7FFF8000);
  if ( v24 <= (char)(v23 & 7) && v24 )
  {
    __asan_report_store1(v23);
LABEL_62:
    __asan_report_store1(v21);
    goto LABEL_63;
  }
  *(_BYTE *)v23 = 35;
  v5[1]._vptr_MessageLite = v21;
  v21 = (int (**)(...))((char *)v21 + (unsigned __int64)v5->_vptr_MessageLite);
  v25 = *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000);
  if ( v25 <= ((unsigned __int8)v21 & 7) && v25 )
    goto LABEL_62;
  *(_BYTE *)v21 = 0;
  if ( *(_BYTE *)(((unsigned __int64)head_ext_ptr._M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    v26 = __asan_report_load8(head_ext_ptr._M_ptr);
    goto LABEL_64;
  }
  if ( !head_ext_ptr._M_ptr->_vptr_MessageLite )
    goto LABEL_67;
  v26 = StatLogUtils::parseProtoToString(
          (const StatLogUtils::Message *)head_ext_ptr._M_ptr->_vptr_MessageLite,
          1u,
          (std::string *)(v6 + 32));
LABEL_64:
  if ( v26 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/stat_log_utils.cpp",
      "parseToString",
      84);
    common::milog::MiLogStream::operator()(&v36, "convert body failed");
    common::milog::MiLogStream::~MiLogStream(&v36);
    body_ext_ptr_12 = -1;
    goto LABEL_18;
  }
  std::string::_M_append(v5, *(_QWORD *)(v6 + 32), *(_QWORD *)(v6 + 40));
LABEL_67:
  v27 = v5[1]._vptr_MessageLite;
  v28 = (int (**)(...))((char *)v27 + 1);
  if ( (std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *)v5->_vptr_MessageLite != &v5[2] )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&v5[2] >> 3) + 0x7FFF8000) )
    {
      v29 = (unsigned __int64)v5[2]._vptr_MessageLite;
      goto LABEL_70;
    }
    __asan_report_load8(&v5[2]);
  }
  v29 = 15LL;
LABEL_70:
  if ( (unsigned __int64)v28 > v29 )
    std::string::_M_mutate(v5, v27, 0LL, 0LL, 1LL);
  v30 = (unsigned __int64)v5->_vptr_MessageLite + (unsigned __int64)v27;
  v31 = *(_BYTE *)((v30 >> 3) + 0x7FFF8000);
  if ( v31 <= (char)(v30 & 7) && v31 )
  {
    __asan_report_store1(v30);
LABEL_82:
    __asan_report_store1(v28);
    goto LABEL_83;
  }
  *(_BYTE *)v30 = 35;
  v5[1]._vptr_MessageLite = v28;
  v28 = (int (**)(...))((char *)v28 + (unsigned __int64)v5->_vptr_MessageLite);
  v32 = *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000);
  if ( v32 <= ((unsigned __int8)v28 & 7) && v32 )
    goto LABEL_82;
  *(_BYTE *)v28 = 0;
  if ( *(_BYTE *)(((unsigned __int64)head_ext_ptr._M_refcount._M_pi >> 3) + 0x7FFF8000) )
  {
LABEL_83:
    v33 = __asan_report_load8(head_ext_ptr._M_refcount._M_pi);
    goto LABEL_84;
  }
  if ( !head_ext_ptr._M_refcount._M_pi->_vptr__Sp_counted_base )
    goto LABEL_18;
  v33 = StatLogUtils::parseProtoToString(
          (const StatLogUtils::Message *)head_ext_ptr._M_refcount._M_pi->_vptr__Sp_counted_base,
          1u,
          (std::string *)(v6 + 32));
LABEL_84:
  body_ext_ptr_12 = v33;
  if ( v33 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/stat_log_utils.cpp",
      "parseToString",
      98);
    common::milog::MiLogStream::operator()(&v36, "convert body_ext failed");
    common::milog::MiLogStream::~MiLogStream(&v36);
    body_ext_ptr_12 = -1;
  }
  else
  {
    std::string::_M_append(v5, *(_QWORD *)(v6 + 32), *(_QWORD *)(v6 + 40));
  }
LABEL_18:
  v12 = *(char **)(v6 + 32);
  if ( v12 != (char *)(v6 + 48) )
    operator delete(v12);
  if ( v37 == (char *)v6 )
  {
    *(_DWORD *)((v6 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
  return body_ext_ptr_12;
};

// Line 108: range 0000000014EBE010-0000000014EBE416
__int64 __fastcall StatLogUtils::parseToString(
        const StatLogUtils::MessagePtr head_ptr,
        const StatLogUtils::MessagePtr body_ptr,
        std::string *str)
{
  int (**v3)(...); // r14
  const StatLogUtils::Message **M_ptr; // r13
  std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *v5; // rbx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r15
  int (**vptr_MessageLite)(...); // rdi
  char v9; // al
  int32_t v10; // eax
  __int64 v11; // rax
  char *v12; // rdi
  std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *v14; // rdi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r14
  char v17; // al
  char v18; // al
  int32_t v19; // eax
  unsigned int body_ptr_12; // [rsp+14h] [rbp-C4h]
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-B8h] BYREF
  char v22[152]; // [rsp+40h] [rbp-98h] BYREF

  M_ptr = (const StatLogUtils::Message **)head_ptr._M_ptr;
  v5 = body_ptr._M_ptr;
  v6 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(96LL);
    if ( v11 )
      v6 = v11;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 32 11 tmp_str:110";
  *(_QWORD *)(v6 + 16) = StatLogUtils::parseToString;
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&v5[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_12;
  }
  v5[1]._vptr_MessageLite = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    vptr_MessageLite = (int (**)(...))v5;
    __asan_report_load8(v5);
LABEL_13:
    __asan_report_store1(vptr_MessageLite);
    goto LABEL_14;
  }
  vptr_MessageLite = v5->_vptr_MessageLite;
  v9 = *(_BYTE *)(((unsigned __int64)v5->_vptr_MessageLite >> 3) + 0x7FFF8000);
  if ( v9 <= ((__int64)v5->_vptr_MessageLite & 7) && v9 )
    goto LABEL_13;
  *(_BYTE *)vptr_MessageLite = 0;
  *(_QWORD *)(v6 + 32) = v6 + 48;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_BYTE *)(v6 + 48) = 0;
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    v10 = __asan_report_load8(M_ptr);
    goto LABEL_15;
  }
  if ( !*M_ptr )
  {
LABEL_17:
    common::milog::MiLogStream::MiLogStream(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/stat_log_utils.cpp",
      "parseToString",
      115);
    common::milog::MiLogStream::operator()(&v21, "convert head failed");
    common::milog::MiLogStream::~MiLogStream(&v21);
    body_ptr_12 = -1;
    goto LABEL_18;
  }
  v10 = StatLogUtils::parseProtoToString(*M_ptr, 1u, (std::string *)(v6 + 32));
LABEL_15:
  body_ptr_12 = v10;
  if ( v10 )
    goto LABEL_17;
  std::string::_M_append(v5, *(_QWORD *)(v6 + 32), *(_QWORD *)(v6 + 40));
  if ( *(_BYTE *)(((unsigned __int64)&v5[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&v5[1]);
    goto LABEL_38;
  }
  v3 = v5[1]._vptr_MessageLite;
  M_ptr = (const StatLogUtils::Message **)((char *)v3 + 1);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    v14 = v5;
    __asan_report_load8(v5);
LABEL_39:
    __asan_report_load8(v14);
    goto LABEL_40;
  }
  if ( (std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *)v5->_vptr_MessageLite != &v5[2] )
  {
    v14 = v5 + 2;
    if ( !*(_BYTE *)(((unsigned __int64)&v5[2] >> 3) + 0x7FFF8000) )
    {
      v15 = (unsigned __int64)v5[2]._vptr_MessageLite;
      goto LABEL_28;
    }
    goto LABEL_39;
  }
LABEL_40:
  v15 = 15LL;
LABEL_28:
  if ( (unsigned __int64)M_ptr > v15 )
    std::string::_M_mutate(v5, v3, 0LL, 0LL, 1LL);
  v16 = (unsigned __int64)v5->_vptr_MessageLite + (unsigned __int64)v3;
  v17 = *(_BYTE *)((v16 >> 3) + 0x7FFF8000);
  if ( v17 <= (char)(v16 & 7) && v17 )
  {
    __asan_report_store1(v16);
LABEL_42:
    __asan_report_store1(M_ptr);
    goto LABEL_43;
  }
  *(_BYTE *)v16 = 35;
  v5[1]._vptr_MessageLite = (int (**)(...))M_ptr;
  M_ptr = (const StatLogUtils::Message **)((char *)M_ptr + (unsigned __int64)v5->_vptr_MessageLite);
  v18 = *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000);
  if ( v18 <= ((unsigned __int8)M_ptr & 7) && v18 )
    goto LABEL_42;
  *(_BYTE *)M_ptr = 0;
  if ( *(_BYTE *)(((unsigned __int64)head_ptr._M_refcount._M_pi >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    v19 = __asan_report_load8(head_ptr._M_refcount._M_pi);
    goto LABEL_44;
  }
  if ( !head_ptr._M_refcount._M_pi->_vptr__Sp_counted_base )
    goto LABEL_18;
  v19 = StatLogUtils::parseProtoToString(
          (const StatLogUtils::Message *)head_ptr._M_refcount._M_pi->_vptr__Sp_counted_base,
          1u,
          (std::string *)(v6 + 32));
LABEL_44:
  body_ptr_12 = v19;
  if ( v19 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/stat_log_utils.cpp",
      "parseToString",
      128);
    common::milog::MiLogStream::operator()(&v21, "convert body failed");
    common::milog::MiLogStream::~MiLogStream(&v21);
    body_ptr_12 = -1;
  }
  else
  {
    std::string::_M_append(v5, *(_QWORD *)(v6 + 32), *(_QWORD *)(v6 + 40));
  }
LABEL_18:
  v12 = *(char **)(v6 + 32);
  if ( v12 != (char *)(v6 + 48) )
    operator delete(v12);
  if ( v22 == (char *)v6 )
  {
    *(_DWORD *)((v6 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
  return body_ptr_12;
};

// Line 139: range 0000000014EBE41C-0000000014EBE431
int32_t __fastcall StatLogUtils::parseProtoToString(const StatLogUtils::Message *proto, std::string *str)
{
  return StatLogUtils::parseProtoToString(proto, 1u, str);
};

// Line 149: range 0000000014EBC50A-0000000014EBCCDA
int32_t __fastcall StatLogUtils::parseProtoToString(
        const StatLogUtils::Message *proto,
        uint32_t depth,
        std::string *str)
{
  std::string::size_type M_string_length; // r12
  std::string::size_type v4; // r13
  _BYTE *M_p; // rdi
  char v7; // al
  const StatLogUtils::Message *v8; // rdi
  std::string::size_type i; // rbp
  __int64 v10; // r14
  std::string::size_type v11; // rdi
  char v12; // al
  __int64 v13; // rax
  int32_t v14; // ebx
  void *p_anon_0; // rdi
  std::string::size_type M_allocated_capacity; // rax
  char v17; // al
  char v18; // al
  int32_t v19; // eax
  std::string::size_type v20; // rdi
  std::string::size_type v21; // rax
  std::string::size_type v22; // rdi
  char v23; // al
  char v24; // al
  void *p_M_string_length; // rdi
  std::string::size_type v26; // rax
  char v27; // al
  char v28; // al
  const StatLogUtils::FieldDescriptor *v29; // rsi
  void *v30; // rdi
  std::string::size_type v31; // rax
  char *v32; // rdi
  char v33; // al
  char v34; // al
  char *v35; // rdi
  int field_count; // [rsp+Ch] [rbp-BCh]
  unsigned __int64 v40; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v41; // [rsp+20h] [rbp-A8h]
  char v42[152]; // [rsp+30h] [rbp-98h] BYREF

  v40 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_1(96LL);
    if ( v13 )
      v40 = v13;
  }
  *(_QWORD *)v40 = 1102416563LL;
  *(_QWORD *)(v40 + 8) = "1 32 32 13 field_str:169";
  *(_QWORD *)(v40 + 16) = StatLogUtils::parseProtoToString;
  v41 = v40 >> 3;
  *(_DWORD *)(v41 + 2147450880) = -235802127;
  *(_DWORD *)(v41 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_17;
  }
  str->_M_string_length = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    M_p = str;
    __asan_report_load8(str);
LABEL_18:
    __asan_report_store1(M_p);
    goto LABEL_19;
  }
  M_p = str->_M_dataplus._M_p;
  v7 = *(_BYTE *)(((unsigned __int64)str->_M_dataplus._M_p >> 3) + 0x7FFF8000);
  if ( v7 <= ((__int64)str->_M_dataplus._M_p & 7) && v7 )
    goto LABEL_18;
  *M_p = 0;
  if ( *(_BYTE *)(((unsigned __int64)proto >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v8 = proto;
    __asan_report_load8(proto);
    goto LABEL_20;
  }
  v8 = (const StatLogUtils::Message *)(proto->_vptr_MessageLite + 24);
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8(v8);
    goto LABEL_21;
  }
  i = (std::string::size_type)proto;
  v10 = (*((__int64 (__fastcall **)(const StatLogUtils::Message *))proto->_vptr_MessageLite + 24))(proto);
  v8 = (const StatLogUtils::Message *)(proto->_vptr_MessageLite + 23);
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(v8);
    goto LABEL_22;
  }
  if ( (*((__int64 (__fastcall **)(const StatLogUtils::Message *))proto->_vptr_MessageLite + 23))(proto) == 0
    || v10 == 0 )
  {
LABEL_22:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v40 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/stat_log_utils.cpp",
      "parseProtoToString",
      157);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v40 + 32),
      "GetDescriptor/GetReflection failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v40 + 32));
    v14 = -1;
    goto LABEL_115;
  }
  if ( depth > 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&str->_M_string_length);
    }
    else
    {
      M_string_length = str->_M_string_length;
      i = M_string_length + 1;
      if ( !*(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
      {
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)str->_M_dataplus._M_p == &str->_anon_0 )
        {
LABEL_40:
          M_allocated_capacity = 15LL;
LABEL_28:
          if ( i > M_allocated_capacity )
            std::string::_M_mutate(str, M_string_length, 0LL, 0LL, 1LL);
          if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(str);
          }
          else
          {
            M_string_length += (std::string::size_type)str->_M_dataplus._M_p;
            v17 = *(_BYTE *)((M_string_length >> 3) + 0x7FFF8000);
            if ( v17 > (char)(M_string_length & 7) || !v17 )
            {
              *(_BYTE *)M_string_length = 123;
              if ( !*(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
              {
                str->_M_string_length = i;
                i += (std::string::size_type)str->_M_dataplus._M_p;
                v18 = *(_BYTE *)((i >> 3) + 0x7FFF8000);
                if ( v18 > (char)(i & 7) || !v18 )
                {
                  *(_BYTE *)i = 0;
                  goto LABEL_11;
                }
LABEL_44:
                v11 = i;
                __asan_report_store1(i);
LABEL_45:
                __asan_report_load4(v11);
                goto LABEL_46;
              }
LABEL_43:
              __asan_report_store8();
              goto LABEL_44;
            }
          }
          __asan_report_store1(M_string_length);
          goto LABEL_43;
        }
        p_anon_0 = &str->_anon_0;
        if ( !*(_BYTE *)(((unsigned __int64)&str->_anon_0 >> 3) + 0x7FFF8000) )
        {
          M_allocated_capacity = str->_anon_0._M_allocated_capacity;
          goto LABEL_28;
        }
LABEL_39:
        __asan_report_load8(p_anon_0);
        goto LABEL_40;
      }
    }
    p_anon_0 = str;
    __asan_report_load8(str);
    goto LABEL_39;
  }
LABEL_11:
  v11 = v10 + 104;
  v12 = *(_BYTE *)(((unsigned __int64)(v10 + 104) >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
    goto LABEL_45;
  field_count = *(_DWORD *)(v10 + 104);
  *(_QWORD *)(v40 + 32) = v40 + 48;
  *(_QWORD *)(v40 + 40) = 0LL;
  *(_BYTE *)(v40 + 48) = 0;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (int)i >= field_count )
    {
      if ( depth <= 1 )
      {
        v14 = 0;
        goto LABEL_113;
      }
      if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(&str->_M_string_length);
      }
      else
      {
        M_string_length = str->_M_string_length;
        i = M_string_length + 1;
        if ( !*(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
        {
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)str->_M_dataplus._M_p == &str->_anon_0 )
          {
LABEL_109:
            v31 = 15LL;
            goto LABEL_99;
          }
          v30 = &str->_anon_0;
          if ( !*(_BYTE *)(((unsigned __int64)&str->_anon_0 >> 3) + 0x7FFF8000) )
          {
            v31 = str->_anon_0._M_allocated_capacity;
LABEL_99:
            if ( i > v31 )
              std::string::_M_mutate(str, M_string_length, 0LL, 0LL, 1LL);
            v32 = &str->_M_dataplus._M_p[M_string_length];
            v33 = *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000);
            if ( v33 <= (char)((LOBYTE(str->_M_dataplus._M_p) + M_string_length) & 7) && v33 )
            {
              __asan_report_store1(v32);
            }
            else
            {
              *v32 = 125;
              str->_M_string_length = i;
              v32 = &str->_M_dataplus._M_p[i];
              v34 = *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000);
              if ( v34 > (char)((LOBYTE(str->_M_dataplus._M_p) + i) & 7) || !v34 )
              {
                *v32 = 0;
                v14 = 0;
                goto LABEL_113;
              }
            }
            __asan_report_store1(v32);
LABEL_112:
            v14 = -1;
            goto LABEL_113;
          }
LABEL_108:
          __asan_report_load8(v30);
          goto LABEL_109;
        }
      }
      v30 = str;
      __asan_report_load8(str);
      goto LABEL_108;
    }
    v11 = v10 + 40;
    if ( *(_BYTE *)(((unsigned __int64)(v10 + 40) >> 3) + 0x7FFF8000) )
    {
LABEL_46:
      v19 = __asan_report_load8(v11);
    }
    else
    {
      v29 = (const StatLogUtils::FieldDescriptor *)(*(_QWORD *)(v10 + 40) + 152LL * (int)i);
      if ( !v29 )
        goto LABEL_112;
      v4 = depth;
      v19 = StatLogUtils::parseFieldToString(proto, v29, depth, (std::string *)(v40 + 32));
    }
    if ( v19 )
      break;
    if ( (int)i <= 0 )
      goto LABEL_62;
    if ( (_DWORD)v4 == 1 )
    {
      p_M_string_length = &str->_M_string_length;
      if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_M_string_length);
      }
      else
      {
        v4 = str->_M_string_length;
        M_string_length = v4 + 1;
        p_M_string_length = str;
        if ( !*(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
        {
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)str->_M_dataplus._M_p != &str->_anon_0 )
          {
            p_M_string_length = &str->_anon_0;
            if ( !*(_BYTE *)(((unsigned __int64)&str->_anon_0 >> 3) + 0x7FFF8000) )
            {
              v26 = str->_anon_0._M_allocated_capacity;
LABEL_68:
              if ( M_string_length > v26 )
                std::string::_M_mutate(str, v4, 0LL, 0LL, 1LL);
              v4 += (std::string::size_type)str->_M_dataplus._M_p;
              v20 = v4;
              v27 = *(_BYTE *)((v4 >> 3) + 0x7FFF8000);
              if ( v27 <= (char)(v4 & 7) && v27 )
              {
                __asan_report_store1(v4);
              }
              else
              {
                *(_BYTE *)v4 = 124;
                str->_M_string_length = M_string_length;
                M_string_length += (std::string::size_type)str->_M_dataplus._M_p;
                v20 = M_string_length;
                v28 = *(_BYTE *)((M_string_length >> 3) + 0x7FFF8000);
                if ( v28 > (char)(M_string_length & 7) || !v28 )
                {
                  *(_BYTE *)M_string_length = 0;
                  goto LABEL_62;
                }
              }
              __asan_report_store1(v20);
LABEL_81:
              __asan_report_load8(v20);
LABEL_82:
              __asan_report_load8(v20);
LABEL_83:
              __asan_report_load8(v20);
              goto LABEL_84;
            }
LABEL_77:
            __asan_report_load8(p_M_string_length);
          }
          v26 = 15LL;
          goto LABEL_68;
        }
      }
      __asan_report_load8(p_M_string_length);
      goto LABEL_77;
    }
    v20 = (std::string::size_type)&str->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
      goto LABEL_81;
    v4 = str->_M_string_length;
    M_string_length = v4 + 1;
    v20 = (std::string::size_type)str;
    if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
      goto LABEL_82;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)str->_M_dataplus._M_p != &str->_anon_0 )
    {
      v20 = (std::string::size_type)&str->_anon_0;
      if ( !*(_BYTE *)(((unsigned __int64)&str->_anon_0 >> 3) + 0x7FFF8000) )
      {
        v21 = str->_anon_0._M_allocated_capacity;
        goto LABEL_55;
      }
      goto LABEL_83;
    }
LABEL_84:
    v21 = 15LL;
LABEL_55:
    if ( M_string_length > v21 )
      std::string::_M_mutate(str, v4, 0LL, 0LL, 1LL);
    v4 += (std::string::size_type)str->_M_dataplus._M_p;
    v22 = v4;
    v23 = *(_BYTE *)((v4 >> 3) + 0x7FFF8000);
    if ( v23 <= (char)(v4 & 7) && v23 )
    {
      __asan_report_store1(v4);
    }
    else
    {
      *(_BYTE *)v4 = 59;
      str->_M_string_length = M_string_length;
      M_string_length += (std::string::size_type)str->_M_dataplus._M_p;
      v22 = M_string_length;
      v24 = *(_BYTE *)((M_string_length >> 3) + 0x7FFF8000);
      if ( v24 > (char)(M_string_length & 7) || !v24 )
      {
        *(_BYTE *)M_string_length = 0;
LABEL_62:
        std::string::_M_append(str, *(_QWORD *)(v40 + 32), *(_QWORD *)(v40 + 40));
        continue;
      }
    }
    __asan_report_store1(v22);
  }
  v14 = -1;
LABEL_113:
  v35 = *(char **)(v40 + 32);
  if ( v35 != (char *)(v40 + 48) )
    operator delete(v35);
LABEL_115:
  if ( v42 == (char *)v40 )
  {
    *(_DWORD *)((v40 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v40 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v40 = 1172321806LL;
    *(_QWORD *)((v40 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v40 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v14;
};

// Line 213: range 0000000014EBA422-0000000014EBAD9B
int32_t StatLogUtils::assignProto(StatLogUtils::Message *proto_ptr, int arg_num, ...)
{
  va_list va; // kr00_24
  double v3; // xmm0_8
  StatLogUtils::Message **v4; // r15
  google::protobuf::FieldDescriptor *v5; // rbx
  int (**vptr_MessageLite)(...); // rax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  char v9; // al
  int i; // r12d
  __int64 v11; // rax
  int32_t result; // eax
  unsigned __int64 v13; // rdi
  void (__fastcall *v14)(unsigned __int64, StatLogUtils::Message **, google::protobuf::FieldDescriptor *, _QWORD, double); // r8
  unsigned int *v15; // rax
  unsigned __int64 v16; // rdi
  int v17; // eax
  char v18; // cl
  unsigned __int64 v19; // rdi
  void (__fastcall *v20)(unsigned __int64, StatLogUtils::Message **, google::protobuf::FieldDescriptor *, _QWORD); // r8
  _QWORD *v21; // rax
  unsigned __int64 v22; // rdi
  void (__fastcall *v23)(unsigned __int64, StatLogUtils::Message **, google::protobuf::FieldDescriptor *, _QWORD); // r8
  unsigned int *v24; // rax
  unsigned __int64 v25; // rdi
  _DWORD *v26; // rax
  unsigned __int64 v27; // rdi
  char **v28; // rax
  const char *v29; // rsi
  __int64 v30; // rdx
  unsigned __int64 v31; // rdi
  char *v32; // rdi
  double *v33; // rax
  unsigned __int64 v34; // rdi
  char **p_M_p; // rdi
  int v36; // eax
  int field_count; // [rsp+Ch] [rbp-1BCh]
  char *__beg; // [rsp+10h] [rbp-1B8h]
  unsigned __int64 v39; // [rsp+18h] [rbp-1B0h]
  const char *M_p; // [rsp+28h] [rbp-1A0h]
  _DWORD *v41; // [rsp+38h] [rbp-190h]
  char v42[160]; // [rsp+40h] [rbp-188h] BYREF
  char v43; // [rsp+E0h] [rbp-E8h] BYREF
  __int64 v44; // [rsp+F0h] [rbp-D8h]
  __int64 v45; // [rsp+F8h] [rbp-D0h]
  __int64 v46; // [rsp+100h] [rbp-C8h]
  __int128 v47; // [rsp+110h] [rbp-B8h]
  char v48; // [rsp+1D0h] [rbp+8h] BYREF

  va_start(va, arg_num);
  v44 = va_arg(va, _QWORD);
  v45 = va_arg(va, _QWORD);
  v46 = va_arg(va, _QWORD);
  *(double *)&v47 = va_arg(va, double);
  v3 = *(double *)&v47;
  va_end(va);
  v4 = (StatLogUtils::Message **)proto_ptr;
  v5 = (google::protobuf::FieldDescriptor *)(unsigned int)arg_num;
  v39 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_2(160LL);
    if ( v11 )
      v39 = v11;
  }
  *(_QWORD *)v39 = 1102416563LL;
  *(_QWORD *)(v39 + 8) = "2 32 24 8 args:238 96 32 11 val_str:289";
  *(_QWORD *)(v39 + 16) = StatLogUtils::assignProto;
  v41 = (_DWORD *)(v39 >> 3);
  v41[536862720] = -235802127;
  v41[536862721] = -234881024;
  v41[536862722] = -218959118;
  v41[536862724] = -202116109;
  if ( !proto_ptr )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v39 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/stat_log_utils.cpp",
      "assignProto",
      216);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v39 + 96), "proto_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v39 + 96));
    result = -1;
    goto LABEL_103;
  }
  if ( *(_BYTE *)(((unsigned __int64)proto_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(proto_ptr);
    goto LABEL_15;
  }
  vptr_MessageLite = proto_ptr->_vptr_MessageLite;
  proto_ptr = (StatLogUtils::Message *)(proto_ptr->_vptr_MessageLite + 24);
  if ( *(_BYTE *)(((unsigned __int64)&(*v4)[24] >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8(proto_ptr);
    goto LABEL_16;
  }
  v7 = ((__int64 (__fastcall *)(StatLogUtils::Message **))vptr_MessageLite[24])(v4);
  proto_ptr = *v4 + 23;
  if ( *(_BYTE *)(((unsigned __int64)proto_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(proto_ptr);
    goto LABEL_17;
  }
  v8 = ((__int64 (__fastcall *)(StatLogUtils::Message **))(*v4)[23]._vptr_MessageLite)(v4);
  if ( v8 == 0 || v7 == 0 )
  {
LABEL_17:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v39 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/stat_log_utils.cpp",
      "assignProto",
      225);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v39 + 96),
      "GetDescriptor/GetReflection failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v39 + 96));
    result = -1;
    goto LABEL_103;
  }
  v9 = *(_BYTE *)(((v7 + 104) >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
  {
    __asan_report_load4(v7 + 104);
    goto LABEL_19;
  }
  field_count = *(_DWORD *)(v7 + 104);
  if ( arg_num != field_count )
  {
LABEL_19:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v39 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/stat_log_utils.cpp",
      "assignProto",
      233);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v39 + 96),
      "error arg_num=%d, while field_num=%d",
      (unsigned int)arg_num,
      (unsigned int)field_count);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v39 + 96));
    result = -1;
    goto LABEL_103;
  }
  *(_DWORD *)(v39 + 32) = 16;
  *(_DWORD *)(v39 + 36) = 48;
  *(_QWORD *)(v39 + 40) = &v48;
  *(_QWORD *)(v39 + 48) = &v43;
  for ( i = 0; ; ++i )
  {
    if ( i >= field_count )
    {
      result = 0;
      goto LABEL_103;
    }
    v16 = v7 + 40;
    if ( *(_BYTE *)(((v7 + 40) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v16);
LABEL_21:
      v3 = __asan_report_load4(v16);
LABEL_22:
      v13 = v8;
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v8);
      }
      else
      {
        v13 = *(_QWORD *)v8 + 232LL;
        if ( !*(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        {
          v14 = *(void (__fastcall **)(unsigned __int64, StatLogUtils::Message **, google::protobuf::FieldDescriptor *, _QWORD, double))(*(_QWORD *)v8 + 232LL);
          if ( *(_DWORD *)(v39 + 32) <= 0x2Fu )
          {
            v15 = (unsigned int *)(*(_QWORD *)(v39 + 48) + *(unsigned int *)(v39 + 32));
            *(_DWORD *)(v39 + 32) += 8;
LABEL_26:
            v14(v8, v4, v5, *v15, v3);
            continue;
          }
LABEL_36:
          v15 = *(unsigned int **)(v39 + 40);
          *(_QWORD *)(v39 + 40) = v15 + 2;
          goto LABEL_26;
        }
      }
      __asan_report_load8(v13);
      goto LABEL_36;
    }
    v5 = (google::protobuf::FieldDescriptor *)(*(_QWORD *)(v7 + 40) + 152LL * i);
    if ( !v5 )
      break;
    v17 = google::protobuf::FieldDescriptor::type(v5);
    v16 = (unsigned __int64)&google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v17];
    v18 = *(_BYTE *)((v16 >> 3) + 0x7FFF8000);
    if ( (char)((v16 & 7) + 3) >= v18 && v18 )
      goto LABEL_21;
    switch ( v17 )
    {
      case 2:
        if ( *(_DWORD *)(v39 + 36) > 0xAFu )
        {
          v33 = *(double **)(v39 + 40);
          *(_QWORD *)(v39 + 40) = v33 + 1;
        }
        else
        {
          v33 = (double *)(*(_QWORD *)(v39 + 48) + *(unsigned int *)(v39 + 36));
          *(_DWORD *)(v39 + 36) += 16;
        }
        v3 = *v33;
        v34 = v8;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v8);
        }
        else
        {
          v34 = *(_QWORD *)v8 + 264LL;
          if ( !*(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
          {
            *(float *)&v3 = v3;
            (*(void (__fastcall **)(unsigned __int64, StatLogUtils::Message **, google::protobuf::FieldDescriptor *, float))(*(_QWORD *)v8 + 264LL))(
              v8,
              v4,
              v5,
              *(float *)&v3);
            continue;
          }
        }
        __asan_report_load8(v34);
LABEL_89:
        common::milog::MiLogStream::MiLogStream(
          (common::milog::MiLogStream *const)(v39 + 96),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/utils/stat_log_utils.cpp",
          "assignProto",
          303);
        p_M_p = (char **)v5;
        if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v5);
LABEL_95:
          __asan_report_load8(p_M_p);
LABEL_96:
          __asan_report_load8(p_M_p);
          goto LABEL_97;
        }
        p_M_p = &v5->name_->_M_dataplus._M_p;
        if ( *(_BYTE *)(((unsigned __int64)v5->name_ >> 3) + 0x7FFF8000) )
          goto LABEL_95;
        M_p = v5->name_->_M_dataplus._M_p;
        p_M_p = (char **)v7;
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          goto LABEL_96;
        p_M_p = *(char ***)v7;
        if ( !*(_BYTE *)((*(_QWORD *)v7 >> 3) + 0x7FFF8000LL) )
        {
          __beg = **(char ***)v7;
          v36 = google::protobuf::FieldDescriptor::type(v5);
          goto LABEL_98;
        }
LABEL_97:
        v36 = __asan_report_load8(p_M_p);
LABEL_98:
        if ( *(_BYTE *)(((unsigned __int64)&google::protobuf::FieldDescriptor::kTypeToName[v36] >> 3) + 0x7FFF8000) )
          __asan_report_load8(&google::protobuf::FieldDescriptor::kTypeToName[v36]);
        else
          common::milog::MiLogStream::operator()(
            (common::milog::MiLogStream *const)(v39 + 96),
            "invalid type '%s %s.%s'",
            google::protobuf::FieldDescriptor::kTypeToName[v36],
            __beg,
            M_p);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v39 + 96));
        break;
      case 3:
        v19 = v8;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v8);
LABEL_43:
          __asan_report_load8(v19);
          goto LABEL_44;
        }
        v19 = *(_QWORD *)v8 + 240LL;
        if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          goto LABEL_43;
        v20 = *(void (__fastcall **)(unsigned __int64, StatLogUtils::Message **, google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v8 + 240LL);
        if ( *(_DWORD *)(v39 + 32) <= 0x2Fu )
        {
          v21 = (_QWORD *)(*(_QWORD *)(v39 + 48) + *(unsigned int *)(v39 + 32));
          *(_DWORD *)(v39 + 32) += 8;
          goto LABEL_41;
        }
LABEL_44:
        v21 = *(_QWORD **)(v39 + 40);
        *(_QWORD *)(v39 + 40) = v21 + 1;
        goto LABEL_41;
      case 4:
      case 6:
        v25 = v8;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v8);
LABEL_58:
          __asan_report_load8(v25);
          goto LABEL_59;
        }
        v25 = *(_QWORD *)v8 + 256LL;
        if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
          goto LABEL_58;
        v20 = *(void (__fastcall **)(unsigned __int64, StatLogUtils::Message **, google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v8 + 256LL);
        if ( *(_DWORD *)(v39 + 32) <= 0x2Fu )
        {
          v21 = (_QWORD *)(*(_QWORD *)(v39 + 48) + *(unsigned int *)(v39 + 32));
          *(_DWORD *)(v39 + 32) += 8;
          goto LABEL_41;
        }
LABEL_59:
        v21 = *(_QWORD **)(v39 + 40);
        *(_QWORD *)(v39 + 40) = v21 + 1;
LABEL_41:
        v20(v8, v4, v5, *v21);
        continue;
      case 5:
        goto LABEL_22;
      case 7:
        v22 = v8;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v8);
LABEL_51:
          __asan_report_load8(v22);
          goto LABEL_52;
        }
        v22 = *(_QWORD *)v8 + 248LL;
        if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
          goto LABEL_51;
        v23 = *(void (__fastcall **)(unsigned __int64, StatLogUtils::Message **, google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v8 + 248LL);
        if ( *(_DWORD *)(v39 + 32) <= 0x2Fu )
        {
          v24 = (unsigned int *)(*(_QWORD *)(v39 + 48) + *(unsigned int *)(v39 + 32));
          *(_DWORD *)(v39 + 32) += 8;
          goto LABEL_49;
        }
LABEL_52:
        v24 = *(unsigned int **)(v39 + 40);
        *(_QWORD *)(v39 + 40) = v24 + 2;
LABEL_49:
        v23(v8, v4, v5, *v24);
        continue;
      case 8:
        if ( *(_DWORD *)(v39 + 32) > 0x2Fu )
        {
          v26 = *(_DWORD **)(v39 + 40);
          *(_QWORD *)(v39 + 40) = v26 + 2;
        }
        else
        {
          v26 = (_DWORD *)(*(_QWORD *)(v39 + 48) + *(unsigned int *)(v39 + 32));
          *(_DWORD *)(v39 + 32) += 8;
        }
        v27 = v8;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v8);
        }
        else
        {
          v27 = *(_QWORD *)v8 + 280LL;
          if ( !*(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64, StatLogUtils::Message **, google::protobuf::FieldDescriptor *, bool))(*(_QWORD *)v8 + 280LL))(
              v8,
              v4,
              v5,
              *v26 != 0);
            continue;
          }
        }
        __asan_report_load8(v27);
LABEL_68:
        if ( *(_DWORD *)(v39 + 32) > 0x2Fu )
        {
          v28 = *(char ***)(v39 + 40);
          *(_QWORD *)(v39 + 40) = v28 + 1;
        }
        else
        {
          v28 = (char **)(*(_QWORD *)(v39 + 48) + *(unsigned int *)(v39 + 32));
          *(_DWORD *)(v39 + 32) += 8;
        }
        __beg = *v28;
        v29 = *v28;
        *(_QWORD *)(v39 + 96) = v39 + 112;
        if ( v29 )
          v30 = (__int64)&__beg[strlen(v29)];
        else
          v30 = -1LL;
        std::string::_M_construct<char const*>(
          (std::string *const)(v39 + 96),
          __beg,
          (const char *)v30,
          (std::forward_iterator_tag)v18);
        v31 = v8;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v8);
        }
        else
        {
          v31 = *(_QWORD *)v8 + 288LL;
          if ( !*(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64, StatLogUtils::Message **, google::protobuf::FieldDescriptor *, unsigned __int64))(*(_QWORD *)v8 + 288LL))(
              v8,
              v4,
              v5,
              v39 + 96);
            goto LABEL_79;
          }
        }
        __asan_report_load8(v31);
LABEL_79:
        v32 = *(char **)(v39 + 96);
        if ( v32 != (char *)(v39 + 112) )
          operator delete(v32);
        continue;
      case 9:
        goto LABEL_68;
      default:
        goto LABEL_89;
    }
  }
  result = -1;
LABEL_103:
  if ( v42 == (char *)v39 )
  {
    *(_QWORD *)((v39 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v39 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v39 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v39 = 1172321806LL;
    *(_QWORD *)((v39 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v39 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v39 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 316: range 0000000014EBF4A0-0000000014EBF9B8
int32_t __fastcall StatLogUtils::getContextData(uint32_t *action_id, uint32_t *sub_action_id, std::string *trans_no)
{
  unsigned __int64 v4; // rbx
  char *v5; // r13
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  uint32_t *v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  char v12; // cl
  char v13; // dl
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdi
  char v16; // dl
  char v17; // dl
  __int64 v18; // rax
  int32_t v19; // r12d
  char v20; // cl
  char v21; // dl
  char v22; // dl
  unsigned __int64 v23; // rbp
  volatile signed __int32 *v24; // rdi
  char v25; // dl
  signed __int32 v26; // eax
  char v28; // dl
  unsigned __int64 v29; // rdi
  char v30; // dl
  signed __int32 v31; // eax
  unsigned __int64 v32; // rdi
  char v33; // dl
  struct _Unwind_Exception *v34; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v35; // rdi
  common::milog::MiLogStream v37; // [rsp+10h] [rbp-98h] BYREF
  char v38[120]; // [rsp+30h] [rbp-78h] BYREF

  v4 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v18 = __asan_stack_malloc_0(64LL);
    if ( v18 )
      v4 = v18;
  }
  v5 = (char *)(v4 + 64);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 15 context_ptr:317";
  *(_QWORD *)(v4 + 16) = StatLogUtils::getContextData;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  StatLogUtils::getContext();
  v7 = *(_QWORD *)(v4 + 32);
  if ( !v7 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/stat_log_utils.cpp",
      "getContextData",
      320);
    common::milog::MiLogStream::operator()(&v37, "get context failed");
    common::milog::MiLogStream::~MiLogStream(&v37);
    v19 = -1;
    goto LABEL_40;
  }
  if ( *(_BYTE *)(((v7 + 8) >> 3) + 0x7FFF8000) )
  {
    v7 = __asan_report_load8(v7 + 8);
    goto LABEL_22;
  }
  v8 = *(_QWORD *)(v7 + 8);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(v7);
    goto LABEL_23;
  }
  v9 = *(uint32_t **)v7;
  v10 = v8 - (_QWORD)v9;
  if ( !(v10 >> 2) )
  {
LABEL_23:
    common::milog::MiLogStream::MiLogStream(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/stat_log_utils.cpp",
      "getContextData",
      330);
    common::milog::MiLogStream::operator()(&v37, "action_id_vec is empty");
    common::milog::MiLogStream::~MiLogStream(&v37);
    v19 = -1;
    goto LABEL_40;
  }
  if ( v10 >> 2 == 1 )
  {
    v20 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v9 & 7) + 3) >= v20 && v20 )
    {
      __asan_report_load4(v9);
    }
    else
    {
      v21 = *(_BYTE *)(((unsigned __int64)action_id >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)action_id & 7) + 3) < v21 || !v21 )
      {
        *action_id = *v9;
        v22 = *(_BYTE *)(((unsigned __int64)sub_action_id >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)sub_action_id & 7) + 3) < v22 || !v22 )
        {
          *sub_action_id = 0;
          goto LABEL_17;
        }
        goto LABEL_33;
      }
    }
    __asan_report_store4(action_id);
LABEL_33:
    v11 = __asan_report_store4(sub_action_id);
LABEL_34:
    __asan_report_load4(v11);
LABEL_35:
    v14 = __asan_report_store4(action_id);
    goto LABEL_36;
  }
  v11 = (unsigned __int64)v9 + v10 - 4;
  v12 = *(_BYTE *)((v11 >> 3) + 0x7FFF8000);
  if ( (char)((v11 & 7) + 3) >= v12 && v12 )
    goto LABEL_34;
  v13 = *(_BYTE *)(((unsigned __int64)action_id >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)action_id & 7) + 3) >= v13 && v13 )
    goto LABEL_35;
  *action_id = *(_DWORD *)v11;
  v14 = *(_QWORD *)(v4 + 32);
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    v15 = v14;
    __asan_report_load8(v14);
LABEL_37:
    __asan_report_load4(v15);
LABEL_38:
    __asan_report_store4(sub_action_id);
    goto LABEL_39;
  }
  v15 = *(_QWORD *)v14 + v10 - 8;
  v16 = *(_BYTE *)((v15 >> 3) + 0x7FFF8000);
  if ( (char)((v15 & 7) + 3) >= v16 && v16 )
    goto LABEL_37;
  v17 = *(_BYTE *)(((unsigned __int64)sub_action_id >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)sub_action_id & 7) + 3) >= v17 && v17 )
    goto LABEL_38;
  *sub_action_id = *(_DWORD *)v15;
LABEL_17:
  std::string::_M_assign(trans_no, *(_QWORD *)(v4 + 32) + 24LL);
LABEL_39:
  v19 = 0;
LABEL_40:
  v23 = *(_QWORD *)(v4 + 40);
  if ( !v23 )
    goto LABEL_46;
  v24 = (volatile signed __int32 *)(v23 + 8);
  if ( &_pthread_key_create )
  {
    v25 = *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v24 & 7) + 3) < v25 || !v25 )
    {
      v26 = _InterlockedExchangeAdd(v24, 0xFFFFFFFF);
      goto LABEL_45;
    }
    __asan_report_store4(v24);
  }
  v28 = *(_BYTE *)(((v23 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v23 + 8) & 7) + 3) >= v28 && v28 )
  {
    __asan_report_load4(v23 + 8);
    goto LABEL_54;
  }
  v26 = *(_DWORD *)(v23 + 8);
  *(_DWORD *)(v23 + 8) = v26 - 1;
LABEL_45:
  if ( v26 != 1 )
    goto LABEL_46;
LABEL_54:
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
    v29 = v23;
    __asan_report_load8(v23);
    goto LABEL_65;
  }
  v29 = *(_QWORD *)v23 + 16LL;
  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    __asan_report_load8(v29);
    goto LABEL_66;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v23 + 16LL))(v23);
  v29 = v23 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_67;
  v30 = *(_BYTE *)((v29 >> 3) + 0x7FFF8000);
  if ( (char)((v29 & 7) + 3) < v30 || !v30 )
  {
    v31 = _InterlockedExchangeAdd((volatile signed __int32 *)v29, 0xFFFFFFFF);
    goto LABEL_60;
  }
LABEL_66:
  __asan_report_store4(v29);
LABEL_67:
  v33 = *(_BYTE *)(((v23 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v23 + 12) & 7) + 3) >= v33 && v33 )
  {
    __asan_report_load4(v23 + 12);
LABEL_71:
    v32 = v23;
    __asan_report_load8(v23);
LABEL_72:
    v34 = (struct _Unwind_Exception *)__asan_report_load8(v32);
    common::milog::MiLogStream::~MiLogStream(&v37);
    v35 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v5 - 3);
    if ( v35 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v35);
    __asan_handle_no_return(v35);
    _Unwind_Resume(v34);
  }
  v31 = *(_DWORD *)(v23 + 12);
  *(_DWORD *)(v23 + 12) = v31 - 1;
LABEL_60:
  if ( v31 != 1 )
    goto LABEL_46;
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
    goto LABEL_71;
  v32 = *(_QWORD *)v23 + 24LL;
  if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
    goto LABEL_72;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v23 + 24LL))(v23);
LABEL_46:
  if ( v38 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v19;
};

// Line 354: range 0000000014EBF9BE-0000000014EBFC8A
const std::vector<unsigned int> *__cdecl StatLogUtils::findContextActionVec()
{
  unsigned __int64 v0; // rbx
  unsigned __int64 v1; // r12
  const std::vector<unsigned int> *v2; // r13
  unsigned __int64 v3; // rbp
  volatile signed __int32 *v4; // rdi
  char v5; // dl
  signed __int32 v6; // eax
  __int64 v8; // rax
  char v9; // dl
  unsigned __int64 v10; // rdi
  char v11; // dl
  signed __int32 v12; // eax
  unsigned __int64 v13; // rdi
  char v14; // dl
  struct _Unwind_Exception *v15; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v16; // rdi
  common::milog::MiLogStream v17; // [rsp+0h] [rbp-88h] BYREF
  char v18[104]; // [rsp+20h] [rbp-68h] BYREF

  v0 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v0 = v8;
  }
  *(_QWORD *)v0 = 1102416563LL;
  *(_QWORD *)(v0 + 8) = "1 32 16 15 context_ptr:355";
  *(_QWORD *)(v0 + 16) = StatLogUtils::findContextActionVec;
  v1 = v0 >> 3;
  *(_DWORD *)(v1 + 2147450880) = -235802127;
  *(_DWORD *)(v1 + 2147450884) = -202178560;
  StatLogUtils::getContext();
  v2 = *(const std::vector<unsigned int> **)(v0 + 32);
  if ( !v2 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/stat_log_utils.cpp",
      "findContextActionVec",
      358);
    common::milog::MiLogStream::operator()(&v17, "get context failed");
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  v3 = *(_QWORD *)(v0 + 40);
  if ( v3 )
  {
    v4 = (volatile signed __int32 *)(v3 + 8);
    if ( &_pthread_key_create )
    {
      v5 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v4 & 7) + 3) < v5 || !v5 )
      {
        v6 = _InterlockedExchangeAdd(v4, 0xFFFFFFFF);
        goto LABEL_9;
      }
      __asan_report_store4(v4);
    }
    v9 = *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v3 + 8) & 7) + 3) >= v9 && v9 )
    {
      __asan_report_load4(v3 + 8);
      goto LABEL_20;
    }
    v6 = *(_DWORD *)(v3 + 8);
    *(_DWORD *)(v3 + 8) = v6 - 1;
LABEL_9:
    if ( v6 != 1 )
      goto LABEL_10;
LABEL_20:
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    {
      v10 = v3;
      __asan_report_load8(v3);
    }
    else
    {
      v10 = *(_QWORD *)v3 + 16LL;
      if ( !*(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
        v10 = v3 + 12;
        if ( !&_pthread_key_create )
          goto LABEL_33;
        v11 = *(_BYTE *)((v10 >> 3) + 0x7FFF8000);
        if ( (char)((v10 & 7) + 3) < v11 || !v11 )
        {
          v12 = _InterlockedExchangeAdd((volatile signed __int32 *)v10, 0xFFFFFFFF);
          goto LABEL_26;
        }
LABEL_32:
        __asan_report_store4(v10);
LABEL_33:
        v14 = *(_BYTE *)(((v3 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v3 + 12) & 7) + 3) >= v14 && v14 )
        {
          __asan_report_load4(v3 + 12);
          goto LABEL_37;
        }
        v12 = *(_DWORD *)(v3 + 12);
        *(_DWORD *)(v3 + 12) = v12 - 1;
LABEL_26:
        if ( v12 != 1 )
          goto LABEL_10;
        if ( !*(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        {
          v13 = *(_QWORD *)v3 + 24LL;
          if ( !*(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 24LL))(v3);
            goto LABEL_10;
          }
LABEL_38:
          v15 = (struct _Unwind_Exception *)__asan_report_load8(v13);
          common::milog::MiLogStream::~MiLogStream(&v17);
          v16 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v3 - 24);
          if ( v16 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v16);
          __asan_handle_no_return(v16);
          _Unwind_Resume(v15);
        }
LABEL_37:
        v13 = v3;
        __asan_report_load8(v3);
        goto LABEL_38;
      }
    }
    __asan_report_load8(v10);
    goto LABEL_32;
  }
LABEL_10:
  if ( v18 == (char *)v0 )
  {
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v0 = 1172321806LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v2;
};

// Line 367: range 0000000014EBC250-0000000014EBC504
int32_t __fastcall StatLogUtils::parseFieldToString(
        const StatLogUtils::Message *proto,
        const StatLogUtils::FieldDescriptor *field_desc_ptr,
        uint32_t depth,
        std::string *str)
{
  _BYTE *M_p; // rdi
  char v8; // al
  char v9; // dl
  google::protobuf::FieldDescriptor::Label label; // r14d
  const char **p_M_p; // rdi
  common::milog::MiLogStream v13[2]; // [rsp+0h] [rbp-48h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_15;
  }
  str->_M_string_length = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    M_p = str;
    __asan_report_load8(str);
LABEL_16:
    __asan_report_store1(M_p);
    goto LABEL_17;
  }
  M_p = str->_M_dataplus._M_p;
  v8 = *(_BYTE *)(((unsigned __int64)str->_M_dataplus._M_p >> 3) + 0x7FFF8000);
  if ( v8 <= ((__int64)str->_M_dataplus._M_p & 7) && v8 )
    goto LABEL_16;
  *M_p = 0;
  if ( !field_desc_ptr )
  {
LABEL_17:
    common::milog::MiLogStream::MiLogStream(
      v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/stat_log_utils.cpp",
      "parseFieldToString",
      373);
    common::milog::MiLogStream::operator()(v13, "ptr is null");
    common::milog::MiLogStream::~MiLogStream(v13);
    return -1;
  }
  if ( (unsigned __int8)google::protobuf::FieldDescriptor::is_map((google::protobuf::FieldDescriptor *)field_desc_ptr) )
  {
    common::milog::MiLogStream::MiLogStream(
      v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/stat_log_utils.cpp",
      "parseFieldToString",
      380);
    if ( *(_BYTE *)(((unsigned __int64)field_desc_ptr >> 3) + 0x7FFF8000) )
    {
      p_M_p = (const char **)field_desc_ptr;
      __asan_report_load8(field_desc_ptr);
    }
    else
    {
      p_M_p = (const char **)&field_desc_ptr->name_->_M_dataplus._M_p;
      if ( !*(_BYTE *)(((unsigned __int64)field_desc_ptr->name_ >> 3) + 0x7FFF8000) )
      {
        common::milog::MiLogStream::operator()(v13, "can not use map in '%s'", *p_M_p);
        goto LABEL_28;
      }
    }
    goto LABEL_27;
  }
  v9 = *(_BYTE *)(((unsigned __int64)&field_desc_ptr->label_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)field_desc_ptr + 60) & 7) + 3) >= v9 && v9 )
  {
    __asan_report_load4(&field_desc_ptr->label_);
    return StatLogUtils::parseOptionalFieldToString(proto, field_desc_ptr, depth, str);
  }
  label = field_desc_ptr->label_;
  if ( label == LABEL_OPTIONAL )
    return StatLogUtils::parseOptionalFieldToString(proto, field_desc_ptr, depth, str);
  if ( label == LABEL_REPEATED )
    return StatLogUtils::parseRepeatedFieldToString(proto, field_desc_ptr, depth, str);
  common::milog::MiLogStream::MiLogStream(
    v13,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/utils/stat_log_utils.cpp",
    "parseFieldToString",
    400);
  if ( *(_BYTE *)(((unsigned __int64)field_desc_ptr >> 3) + 0x7FFF8000) )
  {
    p_M_p = (const char **)field_desc_ptr;
    __asan_report_load8(field_desc_ptr);
    goto LABEL_27;
  }
  p_M_p = (const char **)&field_desc_ptr->name_->_M_dataplus._M_p;
  if ( *(_BYTE *)(((unsigned __int64)field_desc_ptr->name_ >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_load8(p_M_p);
    goto LABEL_28;
  }
  common::milog::MiLogStream::operator()(v13, "error label=%d in '%s'", (unsigned int)label, *p_M_p);
LABEL_28:
  common::milog::MiLogStream::~MiLogStream(v13);
  return -1;
};

// Line 410: range 0000000014EBCCE0-0000000014EBD8FB
int32_t __fastcall StatLogUtils::parseOptionalFieldToString(
        const StatLogUtils::Message *proto,
        const StatLogUtils::FieldDescriptor *field_desc_ptr,
        uint32_t depth,
        std::string *str)
{
  unsigned __int64 v6; // r13
  _DWORD *v7; // rbp
  _BYTE *M_p; // rdi
  char v9; // al
  const StatLogUtils::Message *v10; // rdi
  unsigned __int64 v11; // r14
  int v12; // eax
  char v13; // cl
  __int64 v14; // rax
  int32_t v15; // r12d
  unsigned __int64 p_M_string_length; // rdi
  unsigned int v17; // eax
  size_t v18; // rdx
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // rdi
  unsigned int v22; // eax
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  unsigned __int64 v25; // rdi
  unsigned __int8 v26; // al
  unsigned __int64 v27; // rdi
  char *v28; // rdi
  unsigned __int64 v30; // rdi
  float v31; // xmm0_4
  unsigned __int64 v32; // rdi
  const StatLogUtils::Message *v33; // rax
  int32_t v34; // eax
  const char **p_M_p; // rdi
  const char *v36; // rcx
  const char **v37; // rdi
  char *v38; // rdi
  char *v39; // rdi
  std::string **name; // rdi
  const StatLogUtils::Message **v41; // rdi
  int v42; // eax
  unsigned __int64 desc_ptr; // [rsp+8h] [rbp-150h]
  char v45[312]; // [rsp+20h] [rbp-138h] BYREF

  v6 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v14 = __asan_stack_malloc_2(256LL);
    if ( v14 )
      v6 = v14;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 32 11 msg_str:487 96 32 13 field_str:471 160 64 11 num_buf:430";
  *(_QWORD *)(v6 + 16) = StatLogUtils::parseOptionalFieldToString;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862722] = -218959118;
  v7[536862724] = -218959118;
  v7[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_17;
  }
  str->_M_string_length = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    M_p = str;
    __asan_report_load8(str);
LABEL_18:
    __asan_report_store1(M_p);
    goto LABEL_19;
  }
  M_p = str->_M_dataplus._M_p;
  v9 = *(_BYTE *)(((unsigned __int64)str->_M_dataplus._M_p >> 3) + 0x7FFF8000);
  if ( v9 <= ((__int64)str->_M_dataplus._M_p & 7) && v9 )
    goto LABEL_18;
  *M_p = 0;
  if ( !field_desc_ptr )
  {
LABEL_19:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v6 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/stat_log_utils.cpp",
      "parseOptionalFieldToString",
      416);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v6 + 96), "ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 96));
    v15 = -1;
    goto LABEL_78;
  }
  if ( *(_BYTE *)(((unsigned __int64)proto >> 3) + 0x7FFF8000) )
  {
    v10 = proto;
    __asan_report_load8(proto);
    goto LABEL_21;
  }
  v10 = (const StatLogUtils::Message *)(proto->_vptr_MessageLite + 24);
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(v10);
    goto LABEL_22;
  }
  desc_ptr = (*((__int64 (__fastcall **)(const StatLogUtils::Message *))proto->_vptr_MessageLite + 24))(proto);
  v10 = (const StatLogUtils::Message *)(proto->_vptr_MessageLite + 23);
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(v10);
    goto LABEL_23;
  }
  v11 = (*((__int64 (__fastcall **)(const StatLogUtils::Message *))proto->_vptr_MessageLite + 23))(proto);
  if ( v11 == 0 || desc_ptr == 0 )
  {
LABEL_23:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v6 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/stat_log_utils.cpp",
      "parseOptionalFieldToString",
      425);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v6 + 96),
      "GetDescriptor/GetReflection failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 96));
    v15 = -1;
    goto LABEL_78;
  }
  v12 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field_desc_ptr);
  v13 = *(_BYTE *)(((unsigned __int64)&google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v12] >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)&google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v12] & 7) + 3) >= v13 && v13 )
  {
    __asan_report_load4(&google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v12]);
LABEL_25:
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    {
      p_M_string_length = v11;
      __asan_report_load8(v11);
    }
    else
    {
      p_M_string_length = *(_QWORD *)v11 + 136LL;
      if ( !*(_BYTE *)((p_M_string_length >> 3) + 0x7FFF8000) )
      {
        v17 = (*(__int64 (__fastcall **)(unsigned __int64, const StatLogUtils::Message *, const StatLogUtils::FieldDescriptor *))(*(_QWORD *)v11 + 136LL))(
                v11,
                proto,
                field_desc_ptr);
        snprintf((char *)(v6 + 160), 0x40uLL, "%d", v17);
        v18 = strlen((const char *)(v6 + 160));
        p_M_string_length = (unsigned __int64)&str->_M_string_length;
        if ( !*(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
        {
          if ( v18 <= 0x3FFFFFFFFFFFFFFFLL - str->_M_string_length )
            goto LABEL_85;
LABEL_33:
          __asan_handle_no_return(p_M_string_length);
          std::__throw_length_error("basic_string::append");
        }
LABEL_32:
        __asan_report_load8(p_M_string_length);
        goto LABEL_33;
      }
    }
    __asan_report_load8(p_M_string_length);
    goto LABEL_32;
  }
  switch ( v12 )
  {
    case 2:
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      {
        v30 = v11;
        __asan_report_load8(v11);
      }
      else
      {
        v30 = *(_QWORD *)v11 + 168LL;
        if ( !*(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
        {
          v31 = (*(float (__fastcall **)(unsigned __int64, const StatLogUtils::Message *, const StatLogUtils::FieldDescriptor *))(*(_QWORD *)v11 + 168LL))(
                  v11,
                  proto,
                  field_desc_ptr);
          snprintf((char *)(v6 + 160), 0x40uLL, "%f", v31);
          v18 = strlen((const char *)(v6 + 160));
          v30 = (unsigned __int64)&str->_M_string_length;
          if ( !*(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
          {
            if ( v18 <= 0x3FFFFFFFFFFFFFFFLL - str->_M_string_length )
            {
LABEL_85:
              std::string::_M_append(str, v6 + 160, v18);
              v15 = 0;
              goto LABEL_78;
            }
LABEL_89:
            __asan_handle_no_return(v30);
            std::__throw_length_error("basic_string::append");
          }
LABEL_88:
          __asan_report_load8(v30);
          goto LABEL_89;
        }
      }
      __asan_report_load8(v30);
      goto LABEL_88;
    case 3:
    case 16:
    case 18:
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      {
        v19 = v11;
        __asan_report_load8(v11);
      }
      else
      {
        v19 = *(_QWORD *)v11 + 144LL;
        if ( !*(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        {
          v20 = (*(__int64 (__fastcall **)(unsigned __int64, const StatLogUtils::Message *, const StatLogUtils::FieldDescriptor *))(*(_QWORD *)v11 + 144LL))(
                  v11,
                  proto,
                  field_desc_ptr);
          snprintf((char *)(v6 + 160), 0x40uLL, off_1AE47940, v20);
          v18 = strlen((const char *)(v6 + 160));
          v19 = (unsigned __int64)&str->_M_string_length;
          if ( !*(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
          {
            if ( v18 <= 0x3FFFFFFFFFFFFFFFLL - str->_M_string_length )
              goto LABEL_85;
LABEL_42:
            __asan_handle_no_return(v19);
            std::__throw_length_error("basic_string::append");
          }
LABEL_41:
          __asan_report_load8(v19);
          goto LABEL_42;
        }
      }
      __asan_report_load8(v19);
      goto LABEL_41;
    case 4:
    case 6:
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      {
        v23 = v11;
        __asan_report_load8(v11);
      }
      else
      {
        v23 = *(_QWORD *)v11 + 160LL;
        if ( !*(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
        {
          v24 = (*(__int64 (__fastcall **)(unsigned __int64, const StatLogUtils::Message *, const StatLogUtils::FieldDescriptor *))(*(_QWORD *)v11 + 160LL))(
                  v11,
                  proto,
                  field_desc_ptr);
          snprintf((char *)(v6 + 160), 0x40uLL, off_1AE479C0, v24);
          v18 = strlen((const char *)(v6 + 160));
          v23 = (unsigned __int64)&str->_M_string_length;
          if ( !*(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
          {
            if ( v18 <= 0x3FFFFFFFFFFFFFFFLL - str->_M_string_length )
              goto LABEL_85;
LABEL_60:
            __asan_handle_no_return(v23);
            std::__throw_length_error("basic_string::append");
          }
LABEL_59:
          __asan_report_load8(v23);
          goto LABEL_60;
        }
      }
      __asan_report_load8(v23);
      goto LABEL_59;
    case 5:
    case 15:
    case 17:
      goto LABEL_25;
    case 7:
    case 13:
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      {
        v21 = v11;
        __asan_report_load8(v11);
      }
      else
      {
        v21 = *(_QWORD *)v11 + 152LL;
        if ( !*(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
        {
          v22 = (*(__int64 (__fastcall **)(unsigned __int64, const StatLogUtils::Message *, const StatLogUtils::FieldDescriptor *))(*(_QWORD *)v11 + 152LL))(
                  v11,
                  proto,
                  field_desc_ptr);
          snprintf((char *)(v6 + 160), 0x40uLL, "%u", v22);
          v18 = strlen((const char *)(v6 + 160));
          v21 = (unsigned __int64)&str->_M_string_length;
          if ( !*(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
          {
            if ( v18 <= 0x3FFFFFFFFFFFFFFFLL - str->_M_string_length )
              goto LABEL_85;
LABEL_51:
            __asan_handle_no_return(v21);
            std::__throw_length_error("basic_string::append");
          }
LABEL_50:
          __asan_report_load8(v21);
          goto LABEL_51;
        }
      }
      __asan_report_load8(v21);
      goto LABEL_50;
    case 8:
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      {
        v25 = v11;
        __asan_report_load8(v11);
      }
      else
      {
        v25 = *(_QWORD *)v11 + 184LL;
        if ( !*(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
        {
          v26 = (*(__int64 (__fastcall **)(unsigned __int64, const StatLogUtils::Message *, const StatLogUtils::FieldDescriptor *))(*(_QWORD *)v11 + 184LL))(
                  v11,
                  proto,
                  field_desc_ptr);
          snprintf((char *)(v6 + 160), 0x40uLL, "%d", v26);
          v18 = strlen((const char *)(v6 + 160));
          v25 = (unsigned __int64)&str->_M_string_length;
          if ( !*(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
          {
            if ( v18 <= 0x3FFFFFFFFFFFFFFFLL - str->_M_string_length )
              goto LABEL_85;
LABEL_69:
            __asan_handle_no_return(v25);
            std::__throw_length_error("basic_string::append");
          }
LABEL_68:
          __asan_report_load8(v25);
          goto LABEL_69;
        }
      }
      __asan_report_load8(v25);
      goto LABEL_68;
    case 9:
    case 12:
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      {
        v27 = v11;
        __asan_report_load8(v11);
      }
      else
      {
        v27 = *(_QWORD *)v11 + 192LL;
        if ( !*(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
        {
          (*(void (__fastcall **)(unsigned __int64, unsigned __int64, const StatLogUtils::Message *, const StatLogUtils::FieldDescriptor *))(*(_QWORD *)v11 + 192LL))(
            v6 + 96,
            v11,
            proto,
            field_desc_ptr);
          StatLogUtils::escapeString((std::string *)(v6 + 96));
          goto LABEL_75;
        }
      }
      __asan_report_load8(v27);
LABEL_75:
      std::string::_M_append(str, *(_QWORD *)(v6 + 96), *(_QWORD *)(v6 + 104));
      v28 = *(char **)(v6 + 96);
      if ( v28 != (char *)(v6 + 112) )
        operator delete(v28);
      v15 = 0;
      goto LABEL_78;
    case 10:
    case 11:
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      {
        v32 = v11;
        __asan_report_load8(v11);
      }
      else
      {
        v32 = *(_QWORD *)v11 + 216LL;
        if ( !*(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
        {
          v33 = (const StatLogUtils::Message *)(*(__int64 (__fastcall **)(unsigned __int64, const StatLogUtils::Message *, const StatLogUtils::FieldDescriptor *, _QWORD))(*(_QWORD *)v11 + 216LL))(
                                                 v11,
                                                 proto,
                                                 field_desc_ptr,
                                                 0LL);
          *(_QWORD *)(v6 + 32) = v6 + 48;
          *(_QWORD *)(v6 + 40) = 0LL;
          *(_BYTE *)(v6 + 48) = 0;
          v34 = StatLogUtils::parseProtoToString(v33, depth + 1, (std::string *)(v6 + 32));
          goto LABEL_95;
        }
      }
      v34 = __asan_report_load8(v32);
LABEL_95:
      v15 = v34;
      if ( !v34 )
      {
        std::string::_M_append(str, *(_QWORD *)(v6 + 32), *(_QWORD *)(v6 + 40));
        v39 = *(char **)(v6 + 32);
        if ( v39 != (char *)(v6 + 48) )
          operator delete(v39);
        goto LABEL_78;
      }
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)(v6 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/utils/stat_log_utils.cpp",
        "parseOptionalFieldToString",
        490);
      if ( *(_BYTE *)(((unsigned __int64)field_desc_ptr >> 3) + 0x7FFF8000) )
      {
        p_M_p = (const char **)field_desc_ptr;
        __asan_report_load8(field_desc_ptr);
      }
      else
      {
        p_M_p = (const char **)&field_desc_ptr->name_->_M_dataplus._M_p;
        if ( !*(_BYTE *)(((unsigned __int64)field_desc_ptr->name_ >> 3) + 0x7FFF8000) )
        {
          v36 = *p_M_p;
          if ( !*(_BYTE *)((desc_ptr >> 3) + 0x7FFF8000) )
          {
            v37 = *(const char ***)desc_ptr;
            if ( !*(_BYTE *)((*(_QWORD *)desc_ptr >> 3) + 0x7FFF8000LL) )
            {
              common::milog::MiLogStream::operator()(
                (common::milog::MiLogStream *const)(v6 + 96),
                "parseProtoToString for '%s.%s' failed",
                *v37,
                v36);
              goto LABEL_106;
            }
LABEL_105:
            __asan_report_load8(v37);
LABEL_106:
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 96));
            v38 = *(char **)(v6 + 32);
            if ( v38 != (char *)(v6 + 48) )
              operator delete(v38);
            v15 = -1;
            goto LABEL_78;
          }
LABEL_104:
          v37 = (const char **)desc_ptr;
          __asan_report_load8(desc_ptr);
          goto LABEL_105;
        }
      }
      __asan_report_load8(p_M_p);
      goto LABEL_104;
    default:
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)(v6 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/utils/stat_log_utils.cpp",
        "parseOptionalFieldToString",
        500);
      if ( *(_BYTE *)(((unsigned __int64)field_desc_ptr >> 3) + 0x7FFF8000) )
      {
        name = (std::string **)field_desc_ptr;
        __asan_report_load8(field_desc_ptr);
        goto LABEL_117;
      }
      name = (std::string **)field_desc_ptr->name_;
      if ( *(_BYTE *)(((unsigned __int64)field_desc_ptr->name_ >> 3) + 0x7FFF8000) )
      {
LABEL_117:
        __asan_report_load8(name);
        goto LABEL_118;
      }
      str = *name;
      if ( *(_BYTE *)((desc_ptr >> 3) + 0x7FFF8000) )
      {
LABEL_118:
        v41 = (const StatLogUtils::Message **)desc_ptr;
        __asan_report_load8(desc_ptr);
        goto LABEL_119;
      }
      v41 = *(const StatLogUtils::Message ***)desc_ptr;
      if ( !*(_BYTE *)((*(_QWORD *)desc_ptr >> 3) + 0x7FFF8000LL) )
      {
        proto = *v41;
        v42 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field_desc_ptr);
        goto LABEL_120;
      }
LABEL_119:
      v42 = __asan_report_load8(v41);
LABEL_120:
      if ( *(_BYTE *)(((unsigned __int64)&google::protobuf::FieldDescriptor::kTypeToName[v42] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&google::protobuf::FieldDescriptor::kTypeToName[v42]);
      else
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v6 + 96),
          "invalid type '%s %s.%s'",
          google::protobuf::FieldDescriptor::kTypeToName[v42],
          (const char *)proto,
          (const char *)str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 96));
      v15 = 0;
LABEL_78:
      if ( v45 == (char *)v6 )
      {
        *(_DWORD *)((v6 >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
        *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
        *(_DWORD *)((v6 >> 3) + 0x7FFF801C) = 0;
      }
      else
      {
        *(_QWORD *)v6 = 1172321806LL;
        *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
      }
      return v15;
  }
};

// Line 509: range 0000000014EBB1B2-0000000014EBC24A
int32_t __fastcall StatLogUtils::parseRepeatedFieldToString(
        const StatLogUtils::Message *proto,
        const StatLogUtils::FieldDescriptor *field_desc_ptr,
        uint32_t depth,
        std::string *str)
{
  std::string::size_type v4; // rbp
  std::string::size_type M_string_length; // r12
  std::string::size_type v6; // r13
  double v7; // xmm0_8
  _BYTE *M_p; // rdi
  char v10; // al
  const StatLogUtils::Message *v11; // rdi
  unsigned __int64 v12; // r14
  void *p_anon_0; // rdi
  std::string::size_type M_allocated_capacity; // rax
  char v15; // al
  char v16; // al
  unsigned __int64 p_M_string_length; // rdi
  int v18; // eax
  char v19; // cl
  __int64 v20; // rax
  int32_t result; // eax
  std::string::size_type v22; // rax
  unsigned __int64 v23; // rdi
  unsigned int v24; // eax
  size_t v25; // rdx
  unsigned __int64 v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // rdi
  unsigned int v29; // eax
  unsigned __int64 v30; // rdi
  __int64 v31; // rax
  unsigned __int64 v32; // rdi
  unsigned __int8 v33; // al
  unsigned __int64 v34; // rdi
  char *v35; // rdi
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // rdi
  const StatLogUtils::Message *v38; // rax
  int32_t v39; // eax
  const char **p_M_p; // rdi
  const char *v41; // rcx
  const char **v42; // rdi
  std::string *v43; // rdi
  const char **v44; // rdi
  int v45; // eax
  std::string::size_type v46; // rdi
  char v47; // al
  char v48; // al
  void *v49; // rdi
  std::string::size_type v50; // rax
  char v51; // al
  char v52; // al
  struct _Unwind_Exception *v53; // rbx
  int field_size; // [rsp+1Ch] [rbp-16Ch]
  unsigned __int64 desc_ptr; // [rsp+20h] [rbp-168h]
  unsigned __int64 v57; // [rsp+28h] [rbp-160h]
  int field_cpp_type; // [rsp+30h] [rbp-158h]
  _DWORD *v60; // [rsp+38h] [rbp-150h]
  char v61[312]; // [rsp+50h] [rbp-138h] BYREF

  v57 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v20 = __asan_stack_malloc_2(256LL);
    if ( v20 )
      v57 = v20;
  }
  *(_QWORD *)v57 = 1102416563LL;
  *(_QWORD *)(v57 + 8) = "3 32 32 11 msg_str:600 96 32 13 field_str:584 160 64 11 num_buf:532";
  *(_QWORD *)(v57 + 16) = StatLogUtils::parseRepeatedFieldToString;
  v60 = (_DWORD *)(v57 >> 3);
  v60[536862720] = -235802127;
  v60[536862722] = -218959118;
  v60[536862724] = -218959118;
  v60[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_32;
  }
  str->_M_string_length = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    M_p = str;
    __asan_report_load8(str);
LABEL_33:
    __asan_report_store1(M_p);
    goto LABEL_34;
  }
  M_p = str->_M_dataplus._M_p;
  v10 = *(_BYTE *)(((unsigned __int64)str->_M_dataplus._M_p >> 3) + 0x7FFF8000);
  if ( v10 <= ((__int64)str->_M_dataplus._M_p & 7) && v10 )
    goto LABEL_33;
  *M_p = 0;
  if ( !field_desc_ptr )
  {
LABEL_34:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v57 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/stat_log_utils.cpp",
      "parseRepeatedFieldToString",
      515);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v57 + 96), "ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v57 + 96));
    result = -1;
    goto LABEL_185;
  }
  if ( *(_BYTE *)(((unsigned __int64)proto >> 3) + 0x7FFF8000) )
  {
    v11 = proto;
    __asan_report_load8(proto);
    goto LABEL_36;
  }
  v11 = (const StatLogUtils::Message *)(proto->_vptr_MessageLite + 24);
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_load8(v11);
    goto LABEL_37;
  }
  desc_ptr = (*((__int64 (__fastcall **)(const StatLogUtils::Message *))proto->_vptr_MessageLite + 24))(proto);
  v11 = (const StatLogUtils::Message *)(proto->_vptr_MessageLite + 23);
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8(v11);
    goto LABEL_38;
  }
  v12 = (*((__int64 (__fastcall **)(const StatLogUtils::Message *))proto->_vptr_MessageLite + 23))(proto);
  if ( v12 == 0 || desc_ptr == 0 )
  {
LABEL_38:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v57 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/stat_log_utils.cpp",
      "parseRepeatedFieldToString",
      524);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v57 + 96),
      "GetDescriptor/GetReflection failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v57 + 96));
    result = -1;
    goto LABEL_185;
  }
  if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&str->_M_string_length);
    goto LABEL_40;
  }
  M_string_length = str->_M_string_length;
  v4 = M_string_length + 1;
  if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    p_anon_0 = str;
    __asan_report_load8(str);
LABEL_41:
    __asan_report_load8(p_anon_0);
    goto LABEL_42;
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)str->_M_dataplus._M_p != &str->_anon_0 )
  {
    p_anon_0 = &str->_anon_0;
    if ( !*(_BYTE *)(((unsigned __int64)&str->_anon_0 >> 3) + 0x7FFF8000) )
    {
      M_allocated_capacity = str->_anon_0._M_allocated_capacity;
      goto LABEL_16;
    }
    goto LABEL_41;
  }
LABEL_42:
  M_allocated_capacity = 15LL;
LABEL_16:
  if ( v4 > M_allocated_capacity )
    std::string::_M_mutate(str, M_string_length, 0LL, 0LL, 1LL);
  if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(str);
LABEL_44:
    __asan_report_store1(M_string_length);
    goto LABEL_45;
  }
  M_string_length += (std::string::size_type)str->_M_dataplus._M_p;
  v15 = *(_BYTE *)((M_string_length >> 3) + 0x7FFF8000);
  if ( v15 <= (char)(M_string_length & 7) && v15 )
    goto LABEL_44;
  *(_BYTE *)M_string_length = 91;
  if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_store8();
LABEL_46:
    __asan_report_store1(v4);
    goto LABEL_47;
  }
  str->_M_string_length = v4;
  v4 += (std::string::size_type)str->_M_dataplus._M_p;
  v16 = *(_BYTE *)((v4 >> 3) + 0x7FFF8000);
  if ( v16 <= (char)(v4 & 7) && v16 )
    goto LABEL_46;
  *(_BYTE *)v4 = 0;
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    p_M_string_length = v12;
    __asan_report_load8(v12);
    goto LABEL_48;
  }
  p_M_string_length = *(_QWORD *)v12 + 48LL;
  if ( *(_BYTE *)((p_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    __asan_report_load8(p_M_string_length);
LABEL_49:
    v7 = __asan_report_load4(p_M_string_length);
    goto LABEL_50;
  }
  v4 = (std::string::size_type)field_desc_ptr;
  field_size = (*(__int64 (__fastcall **)(unsigned __int64, const StatLogUtils::Message *, const StatLogUtils::FieldDescriptor *))(*(_QWORD *)v12 + 48LL))(
                 v12,
                 proto,
                 field_desc_ptr);
  v18 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field_desc_ptr);
  p_M_string_length = (unsigned __int64)&google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v18];
  v19 = *(_BYTE *)((p_M_string_length >> 3) + 0x7FFF8000);
  if ( (char)((p_M_string_length & 7) + 3) >= v19 && v19 )
    goto LABEL_49;
  field_cpp_type = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v18];
  for ( M_string_length = 0LL; ; M_string_length = (unsigned int)(M_string_length + 1) )
  {
    if ( (int)M_string_length >= field_size )
    {
      if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(&str->_M_string_length);
      }
      else
      {
        M_string_length = str->_M_string_length;
        v4 = M_string_length + 1;
        if ( !*(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
        {
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)str->_M_dataplus._M_p == &str->_anon_0 )
          {
LABEL_190:
            v50 = 15LL;
LABEL_176:
            if ( v4 > v50 )
              std::string::_M_mutate(str, M_string_length, 0LL, 0LL, 1LL);
            if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(str);
            }
            else
            {
              M_string_length += (std::string::size_type)str->_M_dataplus._M_p;
              v51 = *(_BYTE *)((M_string_length >> 3) + 0x7FFF8000);
              if ( v51 > (char)(M_string_length & 7) || !v51 )
              {
                *(_BYTE *)M_string_length = 93;
                if ( !*(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
                {
                  str->_M_string_length = v4;
                  v4 += (std::string::size_type)str->_M_dataplus._M_p;
                  v52 = *(_BYTE *)((v4 >> 3) + 0x7FFF8000);
                  if ( v52 > (char)(v4 & 7) || !v52 )
                  {
                    *(_BYTE *)v4 = 0;
                    result = 0;
                    goto LABEL_185;
                  }
LABEL_194:
                  v53 = (struct _Unwind_Exception *)__asan_report_store1(v4);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v57 + 96));
                  __asan_handle_no_return(v57 + 96);
                  _Unwind_Resume(v53);
                }
LABEL_193:
                __asan_report_store8();
                goto LABEL_194;
              }
            }
            __asan_report_store1(M_string_length);
            goto LABEL_193;
          }
          v49 = &str->_anon_0;
          if ( !*(_BYTE *)(((unsigned __int64)&str->_anon_0 >> 3) + 0x7FFF8000) )
          {
            v50 = str->_anon_0._M_allocated_capacity;
            goto LABEL_176;
          }
LABEL_189:
          __asan_report_load8(v49);
          goto LABEL_190;
        }
      }
      v49 = str;
      __asan_report_load8(str);
      goto LABEL_189;
    }
    if ( (int)M_string_length <= 0 )
      goto LABEL_170;
    p_M_string_length = (unsigned __int64)&str->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
    {
LABEL_50:
      __asan_report_load8(p_M_string_length);
LABEL_51:
      __asan_report_load8(p_M_string_length);
LABEL_52:
      __asan_report_load8(p_M_string_length);
LABEL_53:
      v22 = 15LL;
      goto LABEL_161;
    }
    v6 = str->_M_string_length;
    v4 = v6 + 1;
    p_M_string_length = (unsigned __int64)str;
    if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
      goto LABEL_51;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)str->_M_dataplus._M_p == &str->_anon_0 )
      goto LABEL_53;
    p_M_string_length = (unsigned __int64)&str->_anon_0;
    if ( *(_BYTE *)(((unsigned __int64)&str->_anon_0 >> 3) + 0x7FFF8000) )
      goto LABEL_52;
    v22 = str->_anon_0._M_allocated_capacity;
LABEL_161:
    if ( v4 > v22 )
      std::string::_M_mutate(str, v6, 0LL, 0LL, 1LL);
    v46 = (std::string::size_type)str;
    if ( !*(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
      break;
    __asan_report_load8(str);
LABEL_55:
    __asan_report_store1(v46);
LABEL_56:
    v7 = __asan_report_store8();
LABEL_57:
    __asan_report_store1(v46);
LABEL_58:
    v23 = v12;
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v12);
LABEL_64:
      __asan_report_load8(v23);
LABEL_65:
      __asan_report_load8(v23);
LABEL_66:
      __asan_handle_no_return(v23);
      std::__throw_length_error("basic_string::append");
    }
    v23 = *(_QWORD *)v12 + 336LL;
    if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
      goto LABEL_64;
    v24 = (*(__int64 (__fastcall **)(unsigned __int64, const StatLogUtils::Message *, const StatLogUtils::FieldDescriptor *, _QWORD, double))(*(_QWORD *)v12 + 336LL))(
            v12,
            proto,
            field_desc_ptr,
            (unsigned int)M_string_length,
            v7);
    v4 = v57 + 160;
    snprintf((char *)(v57 + 160), 0x40uLL, "%d", v24);
    v25 = strlen((const char *)(v57 + 160));
    v23 = (unsigned __int64)&str->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
      goto LABEL_65;
    if ( v25 > 0x3FFFFFFFFFFFFFFFLL - str->_M_string_length )
      goto LABEL_66;
LABEL_114:
    std::string::_M_append(str, v57 + 160, v25);
LABEL_153:
    ;
  }
  v6 += (std::string::size_type)str->_M_dataplus._M_p;
  v46 = v6;
  v47 = *(_BYTE *)((v6 >> 3) + 0x7FFF8000);
  if ( v47 <= (char)(v6 & 7) && v47 )
    goto LABEL_55;
  *(_BYTE *)v6 = 44;
  v46 = (std::string::size_type)&str->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
    goto LABEL_56;
  str->_M_string_length = v4;
  v4 += (std::string::size_type)str->_M_dataplus._M_p;
  v46 = v4;
  v48 = *(_BYTE *)((v4 >> 3) + 0x7FFF8000);
  if ( v48 <= (char)(v4 & 7) && v48 )
    goto LABEL_57;
  *(_BYTE *)v4 = 0;
LABEL_170:
  switch ( field_cpp_type )
  {
    case 1:
      goto LABEL_58;
    case 2:
      v26 = v12;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v12);
LABEL_73:
        __asan_report_load8(v26);
LABEL_74:
        __asan_report_load8(v26);
LABEL_75:
        __asan_handle_no_return(v26);
        std::__throw_length_error("basic_string::append");
      }
      v26 = *(_QWORD *)v12 + 344LL;
      if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
        goto LABEL_73;
      v27 = (*(__int64 (__fastcall **)(unsigned __int64, const StatLogUtils::Message *, const StatLogUtils::FieldDescriptor *, _QWORD))(*(_QWORD *)v12 + 344LL))(
              v12,
              proto,
              field_desc_ptr,
              (unsigned int)M_string_length);
      v4 = v57 + 160;
      snprintf((char *)(v57 + 160), 0x40uLL, off_1AE47940, v27);
      v25 = strlen((const char *)(v57 + 160));
      v26 = (unsigned __int64)&str->_M_string_length;
      if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
        goto LABEL_74;
      if ( v25 > 0x3FFFFFFFFFFFFFFFLL - str->_M_string_length )
        goto LABEL_75;
      goto LABEL_114;
    case 3:
      v28 = v12;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v12);
LABEL_82:
        __asan_report_load8(v28);
LABEL_83:
        __asan_report_load8(v28);
LABEL_84:
        __asan_handle_no_return(v28);
        std::__throw_length_error("basic_string::append");
      }
      v28 = *(_QWORD *)v12 + 352LL;
      if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
        goto LABEL_82;
      v29 = (*(__int64 (__fastcall **)(unsigned __int64, const StatLogUtils::Message *, const StatLogUtils::FieldDescriptor *, _QWORD))(*(_QWORD *)v12 + 352LL))(
              v12,
              proto,
              field_desc_ptr,
              (unsigned int)M_string_length);
      v4 = v57 + 160;
      snprintf((char *)(v57 + 160), 0x40uLL, "%u", v29);
      v25 = strlen((const char *)(v57 + 160));
      v28 = (unsigned __int64)&str->_M_string_length;
      if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
        goto LABEL_83;
      if ( v25 > 0x3FFFFFFFFFFFFFFFLL - str->_M_string_length )
        goto LABEL_84;
      goto LABEL_114;
    case 4:
      v30 = v12;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v12);
LABEL_91:
        __asan_report_load8(v30);
LABEL_92:
        __asan_report_load8(v30);
LABEL_93:
        __asan_handle_no_return(v30);
        std::__throw_length_error("basic_string::append");
      }
      v30 = *(_QWORD *)v12 + 360LL;
      if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
        goto LABEL_91;
      v31 = (*(__int64 (__fastcall **)(unsigned __int64, const StatLogUtils::Message *, const StatLogUtils::FieldDescriptor *, _QWORD))(*(_QWORD *)v12 + 360LL))(
              v12,
              proto,
              field_desc_ptr,
              (unsigned int)M_string_length);
      v4 = v57 + 160;
      snprintf((char *)(v57 + 160), 0x40uLL, off_1AE479C0, v31);
      v25 = strlen((const char *)(v57 + 160));
      v30 = (unsigned __int64)&str->_M_string_length;
      if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
        goto LABEL_92;
      if ( v25 > 0x3FFFFFFFFFFFFFFFLL - str->_M_string_length )
        goto LABEL_93;
      goto LABEL_114;
    case 6:
      v36 = v12;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v12);
LABEL_116:
        __asan_report_load8(v36);
LABEL_117:
        __asan_report_load8(v36);
LABEL_118:
        __asan_handle_no_return(v36);
        std::__throw_length_error("basic_string::append");
      }
      v36 = *(_QWORD *)v12 + 368LL;
      if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
        goto LABEL_116;
      v7 = (*(float (__fastcall **)(unsigned __int64, const StatLogUtils::Message *, const StatLogUtils::FieldDescriptor *, _QWORD))(*(_QWORD *)v12 + 368LL))(
             v12,
             proto,
             field_desc_ptr,
             (unsigned int)M_string_length);
      v4 = v57 + 160;
      snprintf((char *)(v57 + 160), 0x40uLL, "%f", v7);
      v25 = strlen((const char *)(v57 + 160));
      v36 = (unsigned __int64)&str->_M_string_length;
      if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
        goto LABEL_117;
      if ( v25 > 0x3FFFFFFFFFFFFFFFLL - str->_M_string_length )
        goto LABEL_118;
      goto LABEL_114;
    case 7:
      v32 = v12;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v12);
LABEL_100:
        __asan_report_load8(v32);
LABEL_101:
        __asan_report_load8(v32);
LABEL_102:
        __asan_handle_no_return(v32);
        std::__throw_length_error("basic_string::append");
      }
      v32 = *(_QWORD *)v12 + 384LL;
      if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
        goto LABEL_100;
      v33 = (*(__int64 (__fastcall **)(unsigned __int64, const StatLogUtils::Message *, const StatLogUtils::FieldDescriptor *, _QWORD))(*(_QWORD *)v12 + 384LL))(
              v12,
              proto,
              field_desc_ptr,
              (unsigned int)M_string_length);
      v4 = v57 + 160;
      snprintf((char *)(v57 + 160), 0x40uLL, "%d", v33);
      v25 = strlen((const char *)(v57 + 160));
      v32 = (unsigned __int64)&str->_M_string_length;
      if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
        goto LABEL_101;
      if ( v25 > 0x3FFFFFFFFFFFFFFFLL - str->_M_string_length )
        goto LABEL_102;
      goto LABEL_114;
    case 9:
      v34 = v12;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v12);
      }
      else
      {
        v34 = *(_QWORD *)v12 + 392LL;
        if ( !*(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
        {
          v4 = v57 + 96;
          (*(void (__fastcall **)(unsigned __int64, unsigned __int64, const StatLogUtils::Message *, const StatLogUtils::FieldDescriptor *, _QWORD))(*(_QWORD *)v12 + 392LL))(
            v57 + 96,
            v12,
            proto,
            field_desc_ptr,
            (unsigned int)M_string_length);
          StatLogUtils::escapeString((std::string *)(v57 + 96));
          goto LABEL_108;
        }
      }
      __asan_report_load8(v34);
LABEL_108:
      std::string::_M_append(str, *(_QWORD *)(v57 + 96), *(_QWORD *)(v57 + 104));
      v35 = *(char **)(v57 + 96);
      if ( v35 != (char *)(v57 + 112) )
        goto LABEL_109;
      goto LABEL_153;
    case 10:
      v37 = v12;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v12);
      }
      else
      {
        v37 = *(_QWORD *)v12 + 416LL;
        if ( !*(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
        {
          v38 = (const StatLogUtils::Message *)(*(__int64 (__fastcall **)(unsigned __int64, const StatLogUtils::Message *, const StatLogUtils::FieldDescriptor *, _QWORD))(*(_QWORD *)v12 + 416LL))(
                                                 v12,
                                                 proto,
                                                 field_desc_ptr,
                                                 (unsigned int)M_string_length);
          *(_QWORD *)(v57 + 32) = v57 + 48;
          *(_QWORD *)(v57 + 40) = 0LL;
          *(_BYTE *)(v57 + 48) = 0;
          v39 = StatLogUtils::parseProtoToString(v38, depth + 1, (std::string *)(v57 + 32));
          goto LABEL_124;
        }
      }
      v39 = __asan_report_load8(v37);
LABEL_124:
      if ( !v39 )
      {
        std::string::_M_append(str, *(_QWORD *)(v57 + 32), *(_QWORD *)(v57 + 40));
        v35 = *(char **)(v57 + 32);
        if ( v35 != (char *)(v57 + 48) )
LABEL_109:
          operator delete(v35);
        goto LABEL_153;
      }
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)(v57 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/utils/stat_log_utils.cpp",
        "parseRepeatedFieldToString",
        603);
      if ( *(_BYTE *)(((unsigned __int64)field_desc_ptr >> 3) + 0x7FFF8000) )
      {
        p_M_p = (const char **)field_desc_ptr;
        __asan_report_load8(field_desc_ptr);
        goto LABEL_132;
      }
      p_M_p = (const char **)&field_desc_ptr->name_->_M_dataplus._M_p;
      if ( *(_BYTE *)(((unsigned __int64)field_desc_ptr->name_ >> 3) + 0x7FFF8000) )
      {
LABEL_132:
        __asan_report_load8(p_M_p);
        goto LABEL_133;
      }
      v41 = *p_M_p;
      if ( *(_BYTE *)((desc_ptr >> 3) + 0x7FFF8000) )
      {
LABEL_133:
        v42 = (const char **)desc_ptr;
        __asan_report_load8(desc_ptr);
        goto LABEL_134;
      }
      v42 = *(const char ***)desc_ptr;
      if ( !*(_BYTE *)((*(_QWORD *)desc_ptr >> 3) + 0x7FFF8000LL) )
      {
        str = (std::string *)(v57 + 256);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v57 + 96),
          "parseProtoToString for '%s.%s' failed",
          *v42,
          v41);
        goto LABEL_135;
      }
LABEL_134:
      __asan_report_load8(v42);
LABEL_135:
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&str[-5]);
      v43 = (std::string *)str[-7]._M_dataplus._M_p;
      if ( v43 != (std::string *)&str[-7]._anon_0 )
        operator delete(v43);
      result = -1;
LABEL_185:
      if ( v61 == (char *)v57 )
      {
        *(_DWORD *)((v57 >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)((v57 >> 3) + 0x7FFF8008) = 0;
        *(_DWORD *)((v57 >> 3) + 0x7FFF8010) = 0;
        *(_DWORD *)((v57 >> 3) + 0x7FFF801C) = 0;
      }
      else
      {
        *(_QWORD *)v57 = 1172321806LL;
        *(_QWORD *)((v57 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v57 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v57 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v57 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
      }
      return result;
    default:
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)(v57 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/utils/stat_log_utils.cpp",
        "parseRepeatedFieldToString",
        613);
      v44 = (const char **)field_desc_ptr;
      if ( *(_BYTE *)(((unsigned __int64)field_desc_ptr >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(field_desc_ptr);
LABEL_146:
        __asan_report_load8(v44);
LABEL_147:
        __asan_report_load8(v44);
        goto LABEL_148;
      }
      v44 = (const char **)&field_desc_ptr->name_->_M_dataplus._M_p;
      if ( *(_BYTE *)(((unsigned __int64)field_desc_ptr->name_ >> 3) + 0x7FFF8000) )
        goto LABEL_146;
      v6 = (std::string::size_type)field_desc_ptr->name_->_M_dataplus._M_p;
      v44 = (const char **)desc_ptr;
      if ( *(_BYTE *)((desc_ptr >> 3) + 0x7FFF8000) )
        goto LABEL_147;
      v44 = *(const char ***)desc_ptr;
      if ( !*(_BYTE *)((*(_QWORD *)desc_ptr >> 3) + 0x7FFF8000LL) )
      {
        v4 = **(_QWORD **)desc_ptr;
        v45 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field_desc_ptr);
        goto LABEL_149;
      }
LABEL_148:
      v45 = __asan_report_load8(v44);
LABEL_149:
      if ( *(_BYTE *)(((unsigned __int64)&google::protobuf::FieldDescriptor::kTypeToName[v45] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&google::protobuf::FieldDescriptor::kTypeToName[v45]);
      else
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v57 + 96),
          "invalid type '%s %s.%s'",
          google::protobuf::FieldDescriptor::kTypeToName[v45],
          (const char *)v4,
          (const char *)v6);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v57 + 96));
      goto LABEL_153;
  }
};

// Line 627: range 0000000014EBADA0-0000000014EBB1AD
int32_t __fastcall StatLogUtils::escapeString(std::string *str)
{
  char *v1; // rbx
  std::string::size_type v2; // rbp
  std::string::pointer M_p; // r14
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v4; // r13
  unsigned __int64 v5; // r15
  std::string::pointer v6; // rax
  __int64 v7; // rax
  char v8; // dl
  char v9; // al
  char *M_allocated_capacity; // rdi
  char v12; // al
  std::string::pointer v13; // rax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v14; // rdi
  unsigned __int64 v15; // rax
  unsigned __int64 p_M_left; // rdi
  char v17; // dl
  char v18; // al
  char v19; // dl
  std::_Rb_tree<char,std::pair<char const,std::string >,std::_Select1st<std::pair<char const,std::string > >,std::less<char>,std::allocator<std::pair<char const,std::string > > >::iterator v20; // rax
  char *v21; // rdi
  _DWORD *v22; // [rsp+10h] [rbp-D8h]
  std::string::size_type v23; // [rsp+20h] [rbp-C8h]
  char v24; // [rsp+2Fh] [rbp-B9h]
  char v25[184]; // [rsp+30h] [rbp-B8h] BYREF

  v4 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)str;
  v5 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v5 = v7;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 6 ch:647 64 32 11 str_bak:643";
  *(_QWORD *)(v5 + 16) = StatLogUtils::escapeString;
  v22 = (_DWORD *)(v5 >> 3);
  v22[536862720] = -235802127;
  v22[536862721] = -234753551;
  v22[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(str);
    goto LABEL_8;
  }
  M_p = str->_M_dataplus._M_p;
  v6 = str->_M_dataplus._M_p;
  str = (std::string *)((char *)str + 8);
  if ( *(_BYTE *)(((unsigned __int64)(&v4->_M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_load8(str);
    goto LABEL_9;
  }
  M_p += *(&v4->_M_allocated_capacity + 1);
  while ( 1 )
  {
    v1 = v6;
    if ( v6 == M_p )
      goto LABEL_15;
    v8 = *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000);
    if ( v8 <= ((unsigned __int8)v6 & 7) && v8 )
    {
      __asan_report_load1(v6);
LABEL_15:
      v9 = 0;
      goto LABEL_16;
    }
LABEL_9:
    *(_BYTE *)(v5 + 48) = *v1;
    v2 = (std::string::size_type)&StatLogUtils::escape_char_map_[abi:cxx11];
    if ( &StatLogUtils::escape_char_map_[abi:cxx11]._M_t._M_impl.std::_Rb_tree_header != (std::_Rb_tree_header *)std::_Rb_tree<char,std::pair<char const,std::string>,std::_Select1st<std::pair<char const,std::string>>,std::less<char>,std::allocator<std::pair<char const,std::string>>>::find(&StatLogUtils::escape_char_map_[abi:cxx11]._M_t, (const char *)(v5 + 48))._M_node )
      break;
    v6 = v1 + 1;
  }
  v9 = 1;
LABEL_16:
  if ( !v9 )
    goto LABEL_17;
  *(_QWORD *)(v5 + 64) = v5 + 80;
  std::string::_M_construct<char *>(
    (std::string *const)(v5 + 64),
    (char *)v4->_M_allocated_capacity,
    (char *)(*(&v4->_M_allocated_capacity + 1) + v4->_M_allocated_capacity),
    (std::forward_iterator_tag)(v5 + 0x80));
  *(&v4->_M_allocated_capacity + 1) = 0LL;
  M_allocated_capacity = (char *)v4->_M_allocated_capacity;
  v12 = *(_BYTE *)((v4->_M_allocated_capacity >> 3) + 0x7FFF8000);
  if ( v12 <= (v4->_M_local_buf[0] & 7) && v12 )
  {
    __asan_report_store1(M_allocated_capacity);
    goto LABEL_25;
  }
  *M_allocated_capacity = 0;
  v13 = *(std::string::pointer *)(v5 + 64);
  M_p = &v13[*(_QWORD *)(v5 + 72)];
  while ( 1 )
  {
    v1 = v13;
    if ( M_p == v13 )
      break;
    M_allocated_capacity = v13;
    v19 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
    if ( v19 <= ((unsigned __int8)v13 & 7) && v19 )
    {
LABEL_25:
      __asan_report_load1(M_allocated_capacity);
    }
    else
    {
      *(_BYTE *)(v5 + 48) = *v13;
      v2 = (std::string::size_type)&StatLogUtils::escape_char_map_[abi:cxx11];
      v20._M_node = std::_Rb_tree<char,std::pair<char const,std::string>,std::_Select1st<std::pair<char const,std::string>>,std::less<char>,std::allocator<std::pair<char const,std::string>>>::find(
                      &StatLogUtils::escape_char_map_[abi:cxx11]._M_t,
                      (const char *)(v5 + 48))._M_node;
      if ( (std::_Rb_tree_header *)v20._M_node != &StatLogUtils::escape_char_map_[abi:cxx11]._M_t._M_impl.std::_Rb_tree_header )
      {
        p_M_left = (unsigned __int64)&v20._M_node[1]._M_left;
        if ( *(_BYTE *)(((unsigned __int64)&v20._M_node[1]._M_left >> 3) + 0x7FFF8000) )
          goto LABEL_52;
        p_M_left = (unsigned __int64)&v20._M_node[1]._M_parent;
        if ( *(_BYTE *)(((unsigned __int64)&v20._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
          goto LABEL_53;
        std::string::_M_append(v4, v20._M_node[1]._M_parent, v20._M_node[1]._M_left);
        goto LABEL_38;
      }
    }
    v24 = *(_BYTE *)(v5 + 48);
    v14 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)&v4->_M_local_buf[8];
    if ( *(_BYTE *)(((unsigned __int64)(&v4->_M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v14);
LABEL_47:
      __asan_report_load8(v14);
LABEL_48:
      __asan_report_load8(v14);
LABEL_49:
      v15 = 15LL;
      goto LABEL_31;
    }
    v23 = *(&v4->_M_allocated_capacity + 1);
    v2 = v23 + 1;
    v14 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      goto LABEL_47;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v4->_M_allocated_capacity == &v4[1] )
      goto LABEL_49;
    v14 = v4 + 1;
    if ( *(_BYTE *)(((unsigned __int64)&v4[1] >> 3) + 0x7FFF8000) )
      goto LABEL_48;
    v15 = v4[1]._M_allocated_capacity;
LABEL_31:
    if ( v2 > v15 )
      std::string::_M_mutate(v4, v23, 0LL, 0LL, 1LL);
    p_M_left = v4->_M_allocated_capacity + v23;
    v17 = *(_BYTE *)((p_M_left >> 3) + 0x7FFF8000);
    if ( v17 <= (char)((v4->_M_local_buf[0] + v23) & 7) && v17 )
    {
      __asan_report_store1(p_M_left);
LABEL_51:
      __asan_report_store1(p_M_left);
LABEL_52:
      __asan_report_load8(p_M_left);
LABEL_53:
      __asan_report_load8(p_M_left);
      break;
    }
    *(_BYTE *)(v4->_M_allocated_capacity + v23) = v24;
    *(&v4->_M_allocated_capacity + 1) = v2;
    v2 += v4->_M_allocated_capacity;
    p_M_left = v2;
    v18 = *(_BYTE *)((v2 >> 3) + 0x7FFF8000);
    if ( v18 <= (char)(v2 & 7) && v18 )
      goto LABEL_51;
    *(_BYTE *)v2 = 0;
LABEL_38:
    v13 = v1 + 1;
  }
  v21 = *(char **)(v5 + 64);
  if ( v21 != (char *)(v5 + 80) )
    operator delete(v21);
LABEL_17:
  if ( v25 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return 0;
};

// Line 666: range 0000000014EBE83E-0000000014EBE8C3
int32_t __cdecl StatLogUtils::init()
{
  StatLogUtils::registerEscapeChar(35);
  StatLogUtils::registerEscapeChar(124);
  StatLogUtils::registerEscapeChar(91);
  StatLogUtils::registerEscapeChar(93);
  StatLogUtils::registerEscapeChar(44);
  StatLogUtils::registerEscapeChar(123);
  StatLogUtils::registerEscapeChar(125);
  StatLogUtils::registerEscapeChar(59);
  StatLogUtils::registerEscapeChar(37);
  StatLogUtils::registerEscapeChar(10);
  StatLogUtils::registerEscapeChar(13);
  StatLogUtils::registerEscapeChar(0);
  return 0;
};

// Line 683: range 0000000014EBE432-0000000014EBE839
int32_t __fastcall StatLogUtils::registerEscapeChar(char ch_0)
{
  unsigned __int64 v1; // rbx
  _DWORD *v2; // rbp
  size_t v3; // rax
  std::_Rb_tree<char,std::pair<char const,std::string >,std::_Select1st<std::pair<char const,std::string > >,std::less<char>,std::allocator<std::pair<char const,std::string > > >::const_iterator v4; // rsi
  std::forward_iterator_tag v5; // cl
  std::_Rb_tree<char,std::pair<char const,std::string >,std::_Select1st<std::pair<char const,std::string > >,std::less<char>,std::allocator<std::pair<char const,std::string > > >::iterator v6; // rax
  std::_Rb_tree<char,std::pair<char const,std::string >,std::_Select1st<std::pair<char const,std::string > >,std::less<char>,std::allocator<std::pair<char const,std::string > > >::iterator v7; // r9
  std::_Rb_tree_iterator<std::pair<char const,std::string > >::_Base_ptr M_node; // rdx
  unsigned __int64 v9; // rax
  char v10; // cl
  std::_Rb_tree<char,std::pair<char const,std::string >,std::_Select1st<std::pair<char const,std::string > >,std::less<char>,std::allocator<std::pair<char const,std::string > > >::iterator v11; // rax
  __int64 v12; // rax
  _QWORD *p_M_parent; // r12
  unsigned __int64 M_parent; // rdi
  std::_Rb_tree_node_base::_Base_ptr *p_M_right; // rdx
  __int64 v16; // rax
  char v17; // al
  std::string::size_type M_string_length; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // rdi
  char v22; // al
  char v23; // al
  char v24; // al
  struct _Unwind_Exception *v25; // rbx
  std::string::pointer M_p; // rdi
  std::tuple<char const&> *v27; // [rsp+0h] [rbp-D8h]
  std::tuple<> *v28; // [rsp+8h] [rbp-D0h]
  std::tuple<> v29; // [rsp+17h] [rbp-C1h] BYREF
  std::tuple<char const&> v30; // [rsp+18h] [rbp-C0h] BYREF
  std::string v31; // [rsp+20h] [rbp-B8h] BYREF
  char v32[152]; // [rsp+40h] [rbp-98h] BYREF

  v1 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_1(96LL);
    if ( v12 )
      v1 = v12;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 6 ch:682 64 8 7 buf:685";
  *(_QWORD *)(v1 + 16) = StatLogUtils::registerEscapeChar;
  v2 = (_DWORD *)(v1 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234753551;
  v2[536862722] = -202116352;
  *(_BYTE *)(v1 + 48) = ch_0;
  snprintf((char *)(v1 + 64), 8uLL, "%c%02X", 37LL, (unsigned int)ch_0);
  v31._M_dataplus._M_p = v31._anon_0._M_local_buf;
  v3 = strlen((const char *)(v1 + 64));
  v4._M_node = (std::_Rb_tree_const_iterator<std::pair<char const,std::string > >::_Base_ptr)(v1 + 64);
  std::string::_M_construct<char const*>(&v31, (const char *)(v1 + 64), (const char *)(v1 + 64 + v3), v5);
  if ( *(_BYTE *)(((unsigned __int64)&StatLogUtils::escape_char_map_[abi:cxx11]._M_t._M_impl._M_header._M_parent >> 3)
                + 0x7FFF8000) )
  {
    v9 = __asan_report_load8(&StatLogUtils::escape_char_map_[abi:cxx11]._M_t._M_impl._M_header._M_parent);
    goto LABEL_11;
  }
  v6._M_node = std::_Rb_tree<char,std::pair<char const,std::string>,std::_Select1st<std::pair<char const,std::string>>,std::less<char>,std::allocator<std::pair<char const,std::string>>>::_M_lower_bound(
                 &StatLogUtils::escape_char_map_[abi:cxx11]._M_t,
                 (std::_Rb_tree<char,std::pair<char const,std::string >,std::_Select1st<std::pair<char const,std::string > >,std::less<char>,std::allocator<std::pair<char const,std::string > > >::_Link_type)StatLogUtils::escape_char_map_[abi:cxx11]._M_t._M_impl._M_header._M_parent,
                 &StatLogUtils::escape_char_map_[abi:cxx11]._M_t._M_impl._M_header,
                 (const char *)(v1 + 48))._M_node;
  M_node = v6._M_node;
  v4._M_node = v6._M_node;
  if ( (std::_Rb_tree_header *)v6._M_node != &StatLogUtils::escape_char_map_[abi:cxx11]._M_t._M_impl.std::_Rb_tree_header )
  {
    v9 = (unsigned __int64)&v6._M_node[1];
    v10 = *(_BYTE *)((v9 >> 3) + 0x7FFF8000);
    if ( v10 > (char)(v9 & 7) || !v10 )
    {
      if ( *(_BYTE *)(v1 + 48) >= SLOBYTE(v4._M_node[1]._M_color) )
        goto LABEL_13;
      goto LABEL_7;
    }
LABEL_11:
    v11._M_node = (std::_Rb_tree_iterator<std::pair<char const,std::string > >::_Base_ptr)__asan_report_load1(v9);
    goto LABEL_12;
  }
LABEL_7:
  v30._M_head_impl = (const char *)(v1 + 48);
  v11._M_node = std::_Rb_tree<char,std::pair<char const,std::string>,std::_Select1st<std::pair<char const,std::string>>,std::less<char>,std::allocator<std::pair<char const,std::string>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<char const&>,std::tuple<>>(
                  &StatLogUtils::escape_char_map_[abi:cxx11]._M_t,
                  v4,
                  &std::piecewise_construct,
                  &v30,
                  &v29,
                  (const std::piecewise_construct_t *)v7._M_node,
                  v27,
                  v28)._M_node;
LABEL_12:
  M_node = v11._M_node;
LABEL_13:
  p_M_parent = &M_node[1]._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&M_node[1]._M_parent >> 3) + 0x7FFF8000) )
  {
    M_parent = (unsigned __int64)&M_node[1]._M_parent;
    __asan_report_load8(&M_node[1]._M_parent);
LABEL_30:
    if ( !v31._M_string_length )
      goto LABEL_33;
    if ( v31._M_string_length != 1 )
    {
      memcpy((void *)M_parent, v4._M_node, v31._M_string_length);
      goto LABEL_33;
    }
    v23 = *(_BYTE *)(((unsigned __int64)v4._M_node >> 3) + 0x7FFF8000);
    if ( v23 <= ((__int64)v4._M_node & 7) && v23 )
    {
      M_parent = (unsigned __int64)v4._M_node;
      __asan_report_load1(v4._M_node);
    }
    else
    {
      v24 = *(_BYTE *)((M_parent >> 3) + 0x7FFF8000);
      if ( v24 > (char)(M_parent & 7) || !v24 )
      {
        *(_BYTE *)M_parent = v4._M_node->_M_color;
LABEL_33:
        M_string_length = v31._M_string_length;
        v20 = (__int64)(p_M_parent + 1);
        if ( !*(_BYTE *)(((unsigned __int64)(p_M_parent + 1) >> 3) + 0x7FFF8000) )
        {
          p_M_parent[1] = v31._M_string_length;
          v21 = *p_M_parent + M_string_length;
          v22 = *(_BYTE *)((v21 >> 3) + 0x7FFF8000);
          if ( v22 > (char)(v21 & 7) || !v22 )
          {
            *(_BYTE *)v21 = 0;
            goto LABEL_22;
          }
          goto LABEL_45;
        }
LABEL_44:
        v21 = v20;
        __asan_report_store8();
LABEL_45:
        v16 = __asan_report_store1(v21);
LABEL_46:
        __asan_report_load8(v16);
        goto LABEL_47;
      }
    }
    v20 = __asan_report_store1(M_parent);
    goto LABEL_44;
  }
  M_parent = (unsigned __int64)M_node[1]._M_parent;
  p_M_right = &M_node[1]._M_right;
  v4._M_node = (std::_Rb_tree_const_iterator<std::pair<char const,std::string > >::_Base_ptr)v31._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v31._M_dataplus._M_p == &v31._anon_0 )
    goto LABEL_30;
  if ( (std::_Rb_tree_node_base::_Base_ptr *)M_parent != p_M_right )
  {
    v16 = (__int64)(p_M_parent + 2);
    if ( !*(_BYTE *)(((unsigned __int64)(p_M_parent + 2) >> 3) + 0x7FFF8000) )
    {
      v28 = (std::tuple<> *)p_M_parent[2];
      goto LABEL_18;
    }
    goto LABEL_46;
  }
LABEL_47:
  M_parent = 0LL;
LABEL_18:
  *p_M_parent = v4._M_node;
  if ( *(_BYTE *)(((unsigned __int64)(p_M_parent + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_49;
  }
  p_M_parent[1] = v31._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)(p_M_parent + 2) >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_store8();
    goto LABEL_50;
  }
  p_M_parent[2] = v31._anon_0._M_allocated_capacity;
  if ( !M_parent )
  {
LABEL_50:
    v31._M_dataplus._M_p = v31._anon_0._M_local_buf;
    goto LABEL_22;
  }
  v31._M_dataplus._M_p = (std::string::pointer)M_parent;
  v31._anon_0._M_allocated_capacity = (std::string::size_type)v28;
LABEL_22:
  v31._M_string_length = 0LL;
  v17 = *(_BYTE *)(((unsigned __int64)v31._M_dataplus._M_p >> 3) + 0x7FFF8000);
  if ( v17 <= ((__int64)v31._M_dataplus._M_p & 7) && v17 )
  {
    v25 = (struct _Unwind_Exception *)__asan_report_store1(v31._M_dataplus._M_p);
    M_p = v31._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v31._M_dataplus._M_p != &v31._anon_0 )
      operator delete(v31._M_dataplus._M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v25);
  }
  *v31._M_dataplus._M_p = 0;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v31._M_dataplus._M_p != &v31._anon_0 )
    operator delete(v31._M_dataplus._M_p);
  if ( v32 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return 0;
};

// Line 699: range 0000000014EBF116-0000000014EBF49A
StatLogUtils::ContextPtr __cdecl StatLogUtils::getContext()
{
  std::__shared_ptr<StatLogUtils::Context,(__gnu_cxx::_Lock_policy)2>::element_type *p_M_finish; // rdi
  std::__shared_ptr<StatLogUtils::Context,(__gnu_cxx::_Lock_policy)2>::element_type *v1; // rbp
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r13
  __int64 v5; // rsi
  common::minet::CoroutineContext *v6; // rsi
  StatLogUtils::ContextPtr result; // rax
  __int64 v8; // rax
  unsigned int *v9; // rax
  std::_Vector_base<unsigned int>::pointer *v10; // rdi
  char v11; // cl
  char v12; // dl
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  char v15; // dl
  struct _Unwind_Exception *v16; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v17; // rdi
  _BYTE v18[104]; // [rsp+0h] [rbp-68h] BYREF

  v1 = p_M_finish;
  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v2 = v8;
  }
  v3 = v2 + 64;
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 coro_ptr:700";
  *(_QWORD *)(v2 + 16) = StatLogUtils::getContext;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::Coroutine::thisCoro();
  v5 = *(_QWORD *)(v2 + 32);
  if ( v5 )
  {
    v6 = (common::minet::CoroutineContext *)(v5 + 120);
    if ( !*(_WORD *)(((unsigned __int64)p_M_finish >> 3) + 0x7FFF8000) )
    {
      result = common::minet::CoroutineContext::get<std::shared_ptr<StatLogUtils::Context>>(v6);
      goto LABEL_15;
    }
    __asan_report_store16(p_M_finish);
  }
  _tls_init_5();
  v9 = *(unsigned int **)((char *)&StatLogUtils::context_ptr_._M_ptr + __readfsqword(0));
  if ( *(_BYTE *)(((unsigned __int64)p_M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_25;
  }
  p_M_finish->action_id_vec_._M_impl._M_start = v9;
  result._M_ptr = *(std::__shared_ptr<StatLogUtils::Context,(__gnu_cxx::_Lock_policy)2>::element_type **)((char *)&StatLogUtils::context_ptr_._M_refcount._M_pi + __readfsqword(0));
  p_M_finish = (std::__shared_ptr<StatLogUtils::Context,(__gnu_cxx::_Lock_policy)2>::element_type *)((char *)p_M_finish + 8);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((unsigned __int64)&v1->action_id_vec_._M_impl._M_finish >> 3);
  if ( LOBYTE(result._M_refcount._M_pi[134215680]._vptr__Sp_counted_base) )
  {
LABEL_25:
    __asan_report_store8();
    goto LABEL_26;
  }
  v1->action_id_vec_._M_impl._M_finish = (std::_Vector_base<unsigned int>::pointer)result._M_ptr;
  if ( !result._M_ptr )
    goto LABEL_15;
  p_M_finish = (std::__shared_ptr<StatLogUtils::Context,(__gnu_cxx::_Lock_policy)2>::element_type *)&result._M_ptr->action_id_vec_._M_impl._M_finish;
  if ( !&_pthread_key_create )
    goto LABEL_27;
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*(unsigned __int8 *)(((unsigned __int64)p_M_finish >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_finish & 7) + 3) < SLOBYTE(result._M_refcount._M_pi)
    || !LOBYTE(result._M_refcount._M_pi) )
  {
    _InterlockedAdd((volatile signed __int32 *)p_M_finish, 1u);
    goto LABEL_15;
  }
LABEL_26:
  result._M_ptr = (std::__shared_ptr<StatLogUtils::Context,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(p_M_finish);
LABEL_27:
  v10 = &result._M_ptr->action_id_vec_._M_impl._M_finish;
  v11 = *(_BYTE *)(((unsigned __int64)&result._M_ptr->action_id_vec_._M_impl._M_finish >> 3) + 0x7FFF8000);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(((LOBYTE(result._M_ptr) + 8) & 7u) + 3);
  if ( (char)(((LOBYTE(result._M_ptr) + 8) & 7) + 3) >= v11 && v11 )
  {
    __asan_report_load4(v10);
    goto LABEL_31;
  }
  ++LODWORD(result._M_ptr->action_id_vec_._M_impl._M_finish);
LABEL_15:
  v3 = *(_QWORD *)(v2 + 40);
  if ( !v3 )
    goto LABEL_21;
  v10 = (std::_Vector_base<unsigned int>::pointer *)(v3 + 8);
  if ( !&_pthread_key_create )
    goto LABEL_32;
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*(unsigned __int8 *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v10 & 7) + 3) < SLOBYTE(result._M_refcount._M_pi) || !LOBYTE(result._M_refcount._M_pi) )
  {
    LODWORD(result._M_ptr) = _InterlockedExchangeAdd((volatile signed __int32 *)v10, 0xFFFFFFFF);
    goto LABEL_20;
  }
LABEL_31:
  __asan_report_store4(v10);
LABEL_32:
  v12 = *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v3 + 8) & 7) + 3) >= v12 && v12 )
  {
    __asan_report_load4(v3 + 8);
    goto LABEL_36;
  }
  LODWORD(result._M_ptr) = *(_DWORD *)(v3 + 8);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(unsigned int)(LODWORD(result._M_ptr)
                                                                                               - 1);
  *(_DWORD *)(v3 + 8) = result._M_refcount._M_pi;
LABEL_20:
  if ( LODWORD(result._M_ptr) != 1 )
    goto LABEL_21;
LABEL_36:
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
    v13 = v3;
    __asan_report_load8(v3);
    goto LABEL_47;
  }
  v13 = *(_QWORD *)v3 + 16LL;
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_load8(v13);
    goto LABEL_48;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
  v13 = v3 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_49;
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*(unsigned __int8 *)((v13 >> 3) + 0x7FFF8000);
  if ( (char)((v13 & 7) + 3) < SLOBYTE(result._M_refcount._M_pi) || !LOBYTE(result._M_refcount._M_pi) )
  {
    LODWORD(result._M_ptr) = _InterlockedExchangeAdd((volatile signed __int32 *)v13, 0xFFFFFFFF);
    goto LABEL_42;
  }
LABEL_48:
  __asan_report_store4(v13);
LABEL_49:
  v15 = *(_BYTE *)(((v3 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v3 + 12) & 7) + 3) >= v15 && v15 )
  {
    __asan_report_load4(v3 + 12);
LABEL_53:
    v14 = v3;
    __asan_report_load8(v3);
LABEL_54:
    v16 = (struct _Unwind_Exception *)__asan_report_load8(v14);
    v17 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v3 - 24);
    if ( v17 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v17);
    __asan_handle_no_return(v17);
    _Unwind_Resume(v16);
  }
  LODWORD(result._M_ptr) = *(_DWORD *)(v3 + 12);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(unsigned int)(LODWORD(result._M_ptr)
                                                                                               - 1);
  *(_DWORD *)(v3 + 12) = result._M_refcount._M_pi;
LABEL_42:
  if ( LODWORD(result._M_ptr) != 1 )
    goto LABEL_21;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    goto LABEL_53;
  v14 = *(_QWORD *)v3 + 24LL;
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
    goto LABEL_54;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 24LL))(v3);
LABEL_21:
  if ( v18 == (_BYTE *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = v1;
  return result;
};

// Line 710: range 0000000014EBFC90-0000000014EC01AB
int32_t __fastcall StatLogUtils::pushContext(uint32_t action_id, std::string *trans_no)
{
  std::string *v2; // r13
  unsigned __int64 v3; // rbx
  _DWORD *v4; // r12
  const unsigned int *v5; // rcx
  std::string *v6; // rdi
  char *M_string_length; // rax
  char *v8; // rcx
  __int64 p_M_allocated_capacity; // rax
  char v10; // dl
  int32_t v11; // r13d
  unsigned __int64 v12; // rbp
  volatile signed __int32 *v13; // rdi
  char v14; // dl
  signed __int32 v15; // eax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  char v20; // dl
  unsigned __int64 v21; // rdi
  char v22; // dl
  signed __int32 v23; // eax
  unsigned __int64 v24; // rdi
  char v25; // dl
  struct _Unwind_Exception *v26; // rbx
  common::milog::MiLogStream v27; // [rsp+0h] [rbp-B8h] BYREF
  char v28[152]; // [rsp+20h] [rbp-98h] BYREF

  v2 = trans_no;
  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_1(96LL);
    if ( v17 )
      v3 = v17;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 action_id:709 64 16 15 context_ptr:719";
  *(_QWORD *)(v3 + 16) = StatLogUtils::pushContext;
  v4 = (_DWORD *)(v3 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = action_id;
  if ( !action_id )
  {
    common::milog::MiLogStream::MiLogStream(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/stat_log_utils.cpp",
      "pushContext",
      714);
    common::milog::MiLogStream::operator()(&v27, "can not push action_id = 0");
    common::milog::MiLogStream::~MiLogStream(&v27);
    v11 = -1;
    goto LABEL_25;
  }
  StatLogUtils::getContext();
  v6 = *(std::string **)(v3 + 64);
  if ( !v6 )
  {
    v11 = -1;
    goto LABEL_19;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v6->_M_string_length >> 3) + 0x7FFF8000) )
  {
    v6 = (std::string *)((char *)v6 + 8);
    __asan_report_load8(v6);
    goto LABEL_32;
  }
  M_string_length = (char *)v6->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8(v6);
LABEL_33:
    __asan_report_load4(v8);
    goto LABEL_34;
  }
  if ( v6->_M_dataplus._M_p == M_string_length )
    goto LABEL_10;
  v8 = M_string_length - 4;
  trans_no = (std::string *)*(unsigned __int8 *)(((unsigned __int64)(M_string_length - 4) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_string_length - 4) & 7) + 3) >= (char)trans_no && (_BYTE)trans_no )
    goto LABEL_33;
  v5 = (const unsigned int *)*(unsigned int *)(v3 + 48);
  if ( *((_DWORD *)M_string_length - 1) == (_DWORD)v5 )
  {
LABEL_34:
    common::milog::MiLogStream::MiLogStream(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/utils/stat_log_utils.cpp",
      "pushContext",
      728);
LABEL_40:
    common::milog::MiLogStream::operator()(&v27, "skip repeat action_id=%u", *(unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v27);
    v11 = -1;
    goto LABEL_19;
  }
LABEL_10:
  if ( *(_BYTE *)(((unsigned __int64)&v6->_M_string_length >> 3) + 0x7FFF8000) )
  {
    p_M_allocated_capacity = __asan_report_load8(&v6->_M_string_length);
    goto LABEL_36;
  }
  trans_no = (std::string *)v6->_M_string_length;
  p_M_allocated_capacity = (__int64)&v6->_anon_0._M_allocated_capacity;
  if ( *(_BYTE *)(((unsigned __int64)&v6->_anon_0 >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_load8(p_M_allocated_capacity);
LABEL_37:
    v6 = trans_no;
    __asan_report_store4(trans_no);
    goto LABEL_38;
  }
  if ( trans_no != (std::string *)v6->_anon_0._M_allocated_capacity )
  {
    v10 = *(_BYTE *)(((unsigned __int64)trans_no >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)trans_no & 7) + 3) < v10 || !v10 )
    {
      LODWORD(trans_no->_M_dataplus._M_p) = *(_DWORD *)(v3 + 48);
      v6->_M_string_length += 4LL;
      goto LABEL_16;
    }
    goto LABEL_37;
  }
LABEL_38:
  std::vector<unsigned int>::_M_realloc_insert<unsigned int const&>(
    (std::vector<unsigned int> *const)v6,
    (std::vector<unsigned int>::iterator)trans_no,
    (const unsigned int *)(v3 + 48),
    v5);
LABEL_16:
  if ( *(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&v2->_M_string_length);
    goto LABEL_40;
  }
  if ( !v2->_M_string_length )
  {
    v11 = 0;
    goto LABEL_19;
  }
  v18 = *(_QWORD *)(v3 + 64);
  v19 = v18 + 32;
  if ( *(_BYTE *)(((unsigned __int64)(v18 + 32) >> 3) + 0x7FFF8000) )
  {
    v18 += 32LL;
    __asan_report_load8(v19);
  }
  else if ( *(_QWORD *)(v18 + 32) )
  {
    v11 = 0;
    goto LABEL_19;
  }
  std::string::_M_assign(v18 + 24, v2);
  v11 = 0;
LABEL_19:
  v12 = *(_QWORD *)(v3 + 72);
  if ( !v12 )
    goto LABEL_25;
  v13 = (volatile signed __int32 *)(v12 + 8);
  if ( &_pthread_key_create )
  {
    v14 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v13 & 7) + 3) < v14 || !v14 )
    {
      v15 = _InterlockedExchangeAdd(v13, 0xFFFFFFFF);
      goto LABEL_24;
    }
    __asan_report_store4(v13);
  }
  v20 = *(_BYTE *)(((v12 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v12 + 8) & 7) + 3) >= v20 && v20 )
  {
    __asan_report_load4(v12 + 8);
    goto LABEL_52;
  }
  v15 = *(_DWORD *)(v12 + 8);
  *(_DWORD *)(v12 + 8) = v15 - 1;
LABEL_24:
  if ( v15 != 1 )
    goto LABEL_25;
LABEL_52:
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
  {
    v21 = v12;
    __asan_report_load8(v12);
    goto LABEL_63;
  }
  v21 = *(_QWORD *)v12 + 16LL;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    __asan_report_load8(v21);
    goto LABEL_64;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 16LL))(v12);
  v21 = v12 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_65;
  v22 = *(_BYTE *)((v21 >> 3) + 0x7FFF8000);
  if ( (char)((v21 & 7) + 3) < v22 || !v22 )
  {
    v23 = _InterlockedExchangeAdd((volatile signed __int32 *)v21, 0xFFFFFFFF);
    goto LABEL_58;
  }
LABEL_64:
  __asan_report_store4(v21);
LABEL_65:
  v25 = *(_BYTE *)(((v12 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v12 + 12) & 7) + 3) >= v25 && v25 )
  {
    __asan_report_load4(v12 + 12);
LABEL_69:
    v24 = v12;
    __asan_report_load8(v12);
LABEL_70:
    v26 = (struct _Unwind_Exception *)__asan_report_load8(v24);
    common::milog::MiLogStream::~MiLogStream(&v27);
    __asan_handle_no_return(&v27);
    _Unwind_Resume(v26);
  }
  v23 = *(_DWORD *)(v12 + 12);
  *(_DWORD *)(v12 + 12) = v23 - 1;
LABEL_58:
  if ( v23 != 1 )
    goto LABEL_25;
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    goto LABEL_69;
  v24 = *(_QWORD *)v12 + 24LL;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
    goto LABEL_70;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 24LL))(v12);
LABEL_25:
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v11;
};

// Line 777: range 0000000014EC0576-0000000014EC058D
void __cdecl GLOBAL__sub_I_stat_log_utils_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 777: range 0000000014EC05CC-0000000014EC05CE
void __fastcall __StatLogUtilsInit__::~__StatLogUtilsInit__(__StatLogUtilsInit__ *const this)
{
  ;
};

// Line 777: range 0000000014EBE8C4-0000000014EBF110
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  char v2; // al

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/utils/stat_log_utils.cpp");
    if ( __priority != 0xFFFF )
    {
LABEL_3:
      __asan_after_dynamic_init();
      return;
    }
    std::ios_base::Init::Init(&std::__ioinit);
    __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
    v2 = *(_BYTE *)(((unsigned __int64)&StatLogUtils::escape_char_map_[abi:cxx11]._M_t._M_impl.std::_Rb_tree_header >> 3)
                  + 0x7FFF8000);
    if ( v2 && v2 <= 3 )
    {
      __asan_report_store4(&StatLogUtils::escape_char_map_[abi:cxx11]._M_t._M_impl.std::_Rb_tree_header);
    }
    else
    {
      StatLogUtils::escape_char_map_[abi:cxx11]._M_t._M_impl._M_header._M_color = _S_red;
      if ( !*(_BYTE *)(((unsigned __int64)&StatLogUtils::escape_char_map_[abi:cxx11]._M_t._M_impl._M_header._M_parent >> 3)
                     + 0x7FFF8000) )
      {
        StatLogUtils::escape_char_map_[abi:cxx11]._M_t._M_impl._M_header._M_parent = 0LL;
        if ( !*(_BYTE *)(((unsigned __int64)&StatLogUtils::escape_char_map_[abi:cxx11]._M_t._M_impl._M_header._M_left >> 3)
                       + 0x7FFF8000) )
        {
          StatLogUtils::escape_char_map_[abi:cxx11]._M_t._M_impl._M_header._M_left = &StatLogUtils::escape_char_map_[abi:cxx11]._M_t._M_impl._M_header;
          if ( !*(_BYTE *)(((unsigned __int64)&StatLogUtils::escape_char_map_[abi:cxx11]._M_t._M_impl._M_header._M_right >> 3)
                         + 0x7FFF8000) )
          {
            StatLogUtils::escape_char_map_[abi:cxx11]._M_t._M_impl._M_header._M_right = &StatLogUtils::escape_char_map_[abi:cxx11]._M_t._M_impl._M_header;
            if ( !*(_BYTE *)(((unsigned __int64)&StatLogUtils::escape_char_map_[abi:cxx11]._M_t._M_impl._M_node_count >> 3)
                           + 0x7FFF8000) )
            {
              StatLogUtils::escape_char_map_[abi:cxx11]._M_t._M_impl._M_node_count = 0LL;
              __cxa_atexit(
                (void (__fastcall *)(void *))std::map<char,std::string>::~map,
                &StatLogUtils::escape_char_map_[abi:cxx11],
                &_dso_handle);
              StatLogUtils::init();
              __cxa_atexit(
                (void (__fastcall *)(void *))__StatLogUtilsInit__::~__StatLogUtilsInit__,
                &_stat_log_utils_init__,
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
              goto LABEL_18;
            }
LABEL_17:
            __asan_report_store8();
LABEL_18:
            __asan_report_store8();
            _tls_init_5();
            return;
          }
LABEL_16:
          __asan_report_store8();
          goto LABEL_17;
        }
LABEL_15:
        __asan_report_store8();
        goto LABEL_16;
      }
    }
    __asan_report_store8();
    goto LABEL_15;
  }
};
