// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/net_tools/src/packet.cpp

// Line 31: range 000000000C80FC6A-000000000C810166
int32_t __fastcall common::minet::Packet::clear(common::minet::Packet *const this)
{
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rbp
  __int64 v2; // rsi
  volatile signed __int32 *p_cmd_id; // rdi
  char v5; // al
  char v6; // al
  __int64 v7; // rdx
  char v8; // dl
  signed __int32 M_use_count; // eax
  char v11; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v13; // dl
  signed __int32 M_weak_count; // eax
  common::minet::Packet *v15; // rdi
  char v16; // dl

  p_cmd_id = (volatile signed __int32 *)&this->cmd_id_;
  v5 = *(_BYTE *)(((unsigned __int64)p_cmd_id >> 3) + 0x7FFF8000);
  if ( v5 && v5 <= 1 )
  {
    __asan_report_store2(p_cmd_id);
    goto LABEL_17;
  }
  this->cmd_id_ = 0;
  proto::PacketHead::Clear(&this->head_);
  p_cmd_id = (volatile signed __int32 *)&this->recv_str_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->recv_str_._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_store8(p_cmd_id, v2);
    goto LABEL_18;
  }
  this->recv_str_._M_string_length = 0LL;
  p_cmd_id = (volatile signed __int32 *)&this->recv_str_;
  if ( *(_BYTE *)(((unsigned __int64)&this->recv_str_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(p_cmd_id);
LABEL_19:
    __asan_report_store1(p_cmd_id, v2, v7);
    goto LABEL_20;
  }
  p_cmd_id = (volatile signed __int32 *)this->recv_str_._M_dataplus._M_p;
  v6 = *(_BYTE *)(((unsigned __int64)p_cmd_id >> 3) + 0x7FFF8000);
  v7 = (unsigned __int8)p_cmd_id & 7;
  if ( v6 <= ((unsigned __int8)p_cmd_id & 7) && v6 )
    goto LABEL_19;
  *(_BYTE *)p_cmd_id = 0;
  p_cmd_id = (volatile signed __int32 *)&this->proto_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->proto_ptr_ >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_store8(p_cmd_id, v2);
    goto LABEL_21;
  }
  this->proto_ptr_._M_ptr = 0LL;
  p_cmd_id = (volatile signed __int32 *)&this->proto_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->proto_ptr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(p_cmd_id);
    goto LABEL_22;
  }
  M_pi = this->proto_ptr_._M_refcount._M_pi;
  this->proto_ptr_._M_refcount._M_pi = 0LL;
  if ( !M_pi )
    return 0;
  p_cmd_id = &M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_23;
  v8 = *(_BYTE *)(((unsigned __int64)p_cmd_id >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_cmd_id & 7) + 3) < v8 || !v8 )
  {
    M_use_count = _InterlockedExchangeAdd(p_cmd_id, 0xFFFFFFFF);
    goto LABEL_14;
  }
LABEL_22:
  __asan_report_store4(p_cmd_id, v2);
LABEL_23:
  v11 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v11 && v11 )
  {
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_27;
  }
  M_use_count = M_pi->_M_use_count;
  M_pi->_M_use_count = M_use_count - 1;
LABEL_14:
  if ( M_use_count != 1 )
    return 0;
LABEL_27:
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_38;
  }
  p_M_weak_count = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_39;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 2))(M_pi);
  p_M_weak_count = &M_pi->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_40;
  v13 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v13 || !v13 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_33;
  }
LABEL_39:
  __asan_report_store4(p_M_weak_count, v2);
LABEL_40:
  v16 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v16 && v16 )
  {
    __asan_report_load4(&M_pi->_M_weak_count);
LABEL_44:
    v15 = (common::minet::Packet *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_45;
  }
  M_weak_count = M_pi->_M_weak_count;
  M_pi->_M_weak_count = M_weak_count - 1;
LABEL_33:
  if ( M_weak_count != 1 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
    goto LABEL_44;
  v15 = (common::minet::Packet *)(M_pi->_vptr__Sp_counted_base + 3);
  if ( !*(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 3))(M_pi);
    return 0;
  }
LABEL_45:
  __asan_report_load8(v15);
  return common::minet::Packet::clearHeadForClient(v15);
};

// Line 70: range 000000000C81016C-000000000C8101E6
int32_t __fastcall common::minet::Packet::serializeToString(const common::minet::Packet *const this, std::string *str)
{
  uint32_t MinPacketLen; // ebx
  int v3; // ebx
  uint32_t v4; // ebx

  MinPacketLen = common::minet::Packet::getMinPacketLen();
  v3 = proto::PacketHead::ByteSizeLong(&this->head_) + MinPacketLen;
  v4 = common::minet::Packet::getBodyLen(this) + v3;
  std::string::resize(str, v4, 0LL);
  if ( !*(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
    return common::minet::Packet::doSerializeToArray(this, str->_M_dataplus._M_p, v4);
  __asan_report_load8(str);
  return GLOBAL__sub_D_00099_0_packet_cpp();
};

// Line 156: range 000000000C80C3BC-000000000C80C509
int32_t __fastcall common::minet::Packet::parseFromString(common::minet::Packet *const this, const std::string *str)
{
  if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&str->_M_string_length);
    goto LABEL_5;
  }
  if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
  {
LABEL_5:
    __asan_report_load8(str);
    JUMPOUT(0xC80C405LL);
  }
  return common::minet::Packet::parseFromArray(this, str->_M_dataplus._M_p, str->_M_string_length);
};

// Line 162: range 000000000C80BE96-000000000C80C3B6
int32_t __fastcall common::minet::Packet::parseFromArray(
        common::minet::Packet *const this,
        const char *buf,
        uint32_t buf_len)
{
  unsigned int v3; // r12d
  char v6; // dl
  const char *p_cmd_id; // rdi
  char v8; // dl
  uint16_t v9; // ax
  char v10; // dl
  char v11; // dl
  unsigned __int16 v12; // bp
  char v13; // dl
  const char *v14; // rbx
  uint32_t v15; // r15d
  const char *v16; // rbp
  char v17; // dl
  char v19; // dl
  common::milog::MiLogStream v20[2]; // [rsp+0h] [rbp-58h] BYREF

  if ( !buf )
  {
    common::milog::MiLogStream::MiLogStream(
      v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/packet.cpp",
      "parseFromArray",
      166);
    common::milog::MiLogStream::operator()(v20, "buf is nullptr");
    common::milog::MiLogStream::~MiLogStream(v20);
    return -1;
  }
  if ( common::minet::Packet::getMinPacketLen() > buf_len )
  {
    common::milog::MiLogStream::MiLogStream(
      v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/packet.cpp",
      "parseFromArray",
      173);
    common::milog::MiLogStream::operator()(v20, "buf_len=%u is too short", buf_len);
    common::milog::MiLogStream::~MiLogStream(v20);
    return -1;
  }
  v6 = *(_BYTE *)(((unsigned __int64)buf >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)buf & 7) + 1) >= v6 && v6 )
  {
    __asan_report_load2(buf);
    goto LABEL_25;
  }
  if ( __ROR2__(*(_WORD *)buf, 8) != 17767 )
  {
LABEL_25:
    common::milog::MiLogStream::MiLogStream(
      v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/packet.cpp",
      "parseFromArray",
      182);
    common::milog::MiLogStream::operator()(v20, "head magic error");
    common::milog::MiLogStream::~MiLogStream(v20);
    return -1;
  }
  p_cmd_id = buf + 2;
  v8 = *(_BYTE *)(((unsigned __int64)(buf + 2) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)buf + 2) & 7) + 1) >= v8 && v8 )
  {
    __asan_report_load2(p_cmd_id);
LABEL_27:
    __asan_report_store2(p_cmd_id);
LABEL_28:
    __asan_report_load2(p_cmd_id);
LABEL_29:
    __asan_report_load4(p_cmd_id);
    goto LABEL_30;
  }
  v9 = __ROR2__(*((_WORD *)buf + 1), 8);
  p_cmd_id = (const char *)&this->cmd_id_;
  v10 = *(_BYTE *)(((unsigned __int64)&this->cmd_id_ >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 1 )
    goto LABEL_27;
  this->cmd_id_ = v9;
  p_cmd_id = buf + 4;
  v11 = *(_BYTE *)(((unsigned __int64)(buf + 4) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)buf + 4) & 7) + 1) >= v11 && v11 )
    goto LABEL_28;
  v12 = __ROR2__(*((_WORD *)buf + 2), 8);
  p_cmd_id = buf + 6;
  v13 = *(_BYTE *)(((unsigned __int64)(buf + 6) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)buf + 6) & 7) + 3) >= v13 && v13 )
    goto LABEL_29;
  v3 = _byteswap_ulong(*(_DWORD *)(buf + 6));
  v14 = buf + 10;
  if ( v3 > (unsigned int)&loc_19999999 )
  {
LABEL_30:
    common::milog::MiLogStream::MiLogStream(
      v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/packet.cpp",
      "parseFromArray",
      205);
    common::milog::MiLogStream::operator()(v20, "body_len=%u is too long", v3);
    common::milog::MiLogStream::~MiLogStream(v20);
    return -1;
  }
  v15 = v3 + common::minet::Packet::getMinPacketLen() + v12;
  if ( buf_len < v15 )
  {
    common::milog::MiLogStream::MiLogStream(
      v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/packet.cpp",
      "parseFromArray",
      213);
    common::milog::MiLogStream::operator()(v20, "buf_len=%u is too short, packet_len=%u", buf_len, v15);
    common::milog::MiLogStream::~MiLogStream(v20);
    return -1;
  }
  if ( !(unsigned __int8)google::protobuf::MessageLite::ParseFromArray(&this->head_, v14, v12) )
  {
    common::milog::MiLogStream::MiLogStream(
      v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/packet.cpp",
      "parseFromArray",
      220);
    common::milog::MiLogStream::operator()(v20, "head_.ParseFromArray failed");
    common::milog::MiLogStream::~MiLogStream(v20);
    return -1;
  }
  v16 = &v14[v12];
  if ( *(_BYTE *)(((unsigned __int64)&this->recv_str_._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->recv_str_._M_string_length);
  }
  else
  {
    std::string::_M_replace(&this->recv_str_, 0LL, this->recv_str_._M_string_length, v16, v3);
    v16 += v3;
    v17 = *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v16 & 7) + 1) < v17 || !v17 )
    {
      if ( __ROR2__(*(_WORD *)v16, 8) == 0x89AB )
        return 0;
      goto LABEL_35;
    }
  }
  __asan_report_load2(v16);
LABEL_35:
  common::milog::MiLogStream::MiLogStream(
    v20,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/packet.cpp",
    "parseFromArray",
    232);
  v19 = *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v16 & 7) + 1) >= v19 && v19 )
    __asan_report_load2(v16);
  else
    common::milog::MiLogStream::operator()(v20, "tail magic error 0x%X", (unsigned __int16)__ROR2__(*(_WORD *)v16, 8));
  common::milog::MiLogStream::~MiLogStream(v20);
  return -1;
};

// Line 245: range 000000000C80C75C-000000000C80D190
volatile signed __int32 *__fastcall common::minet::Packet::getProto(uint16_t *a1, common::minet::Packet *const this)
{
  common::minet::Packet *v3; // rbx
  unsigned __int64 v4; // rbp
  volatile signed __int32 *v5; // r14
  unsigned __int64 v6; // r13
  unsigned __int64 p_M_string_length; // rdi
  char v8; // al
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  char v13; // dl
  __int64 v15; // rax
  char v16; // al
  __int64 v17; // rdi
  char v18; // al
  char v19; // al
  uint16_t *p_cmd_id; // rdi
  char v21; // dl
  signed __int32 v22; // eax
  volatile signed __int32 *v23; // rdi
  char v24; // dl
  signed __int32 v25; // eax
  unsigned __int64 v26; // rdi
  char v27; // dl
  char v28; // dl
  char v29; // al
  volatile signed __int32 *p_M_use_count; // rdi
  char v31; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  volatile signed __int32 *v33; // rdi
  char v34; // dl
  signed __int32 v35; // eax
  volatile signed __int32 *v36; // rdi
  char v37; // dl
  signed __int32 v38; // eax
  volatile signed __int32 *v39; // rdi
  char v40; // dl
  signed __int32 v41; // eax
  char v42; // dl
  char v43; // dl
  unsigned __int64 v44; // rdi
  char v45; // dl
  signed __int32 v46; // eax
  unsigned __int64 v47; // rdi
  char v48; // dl
  char v49; // dl
  char v50; // dl
  char v51; // cl
  struct _Unwind_Exception *v52; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v53; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v54; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v55; // [rsp+10h] [rbp-A8h]
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // [rsp+18h] [rbp-A0h]
  common::milog::MiLogStream v57; // [rsp+20h] [rbp-98h] BYREF
  char v58[120]; // [rsp+40h] [rbp-78h] BYREF

  v3 = this;
  v4 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v4 = v15;
  }
  v5 = (volatile signed __int32 *)(v4 + 64);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 17 tmp_proto_ptr:248";
  *(_QWORD *)(v4 + 16) = common::minet::Packet::getProto;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->proto_ptr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->proto_ptr_);
  }
  else if ( this->proto_ptr_._M_ptr )
  {
    goto LABEL_4;
  }
  v16 = *(_BYTE *)(((unsigned __int64)&this->cmd_id_ >> 3) + 0x7FFF8000);
  if ( v16 && v16 <= 1 )
  {
    __asan_report_load2(&this->cmd_id_);
  }
  else
  {
    ProtoUtils::createMessage(this->cmd_id_);
    v17 = *(_QWORD *)(v4 + 32);
    if ( v17 )
    {
      this = (common::minet::Packet *const)((char *)this + 272);
      v18 = google::protobuf::MessageLite::ParseFromString(v17, &v3->recv_str_);
      goto LABEL_66;
    }
  }
  this = (common::minet::Packet *const)&common::milog::MiLogDefault::default_log_obj_;
  common::milog::MiLogStream::MiLogStream(
    &v57,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/packet.cpp",
    "getProto",
    251);
  v19 = *(_BYTE *)(((unsigned __int64)&v3->cmd_id_ >> 3) + 0x7FFF8000);
  if ( v19 && v19 <= 1 )
  {
    __asan_report_load2(&v3->cmd_id_);
  }
  else
  {
    this = (common::minet::Packet *const)"ProtoUtils::createMessage() fails, cmd_id: %u";
    common::milog::MiLogStream::operator()(&v57, "ProtoUtils::createMessage() fails, cmd_id: %u", v3->cmd_id_);
  }
  common::milog::MiLogStream::~MiLogStream(&v57);
  if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
  {
    p_cmd_id = a1;
    __asan_report_store8(a1, this);
    goto LABEL_51;
  }
  *(_QWORD *)a1 = 0LL;
  p_cmd_id = a1 + 4;
  if ( *(_BYTE *)(((unsigned __int64)(a1 + 4) >> 3) + 0x7FFF8000) )
  {
LABEL_51:
    __asan_report_store8(p_cmd_id, this);
    goto LABEL_52;
  }
  *((_QWORD *)a1 + 1) = 0LL;
  v3 = *(common::minet::Packet **)(v4 + 40);
  if ( !v3 )
    goto LABEL_17;
  p_cmd_id = &v3->cmd_id_;
  if ( !&_pthread_key_create )
    goto LABEL_53;
  v21 = *(_BYTE *)(((unsigned __int64)p_cmd_id >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_cmd_id & 7) + 3) < v21 || !v21 )
  {
    v22 = _InterlockedExchangeAdd((volatile signed __int32 *)p_cmd_id, 0xFFFFFFFF);
    goto LABEL_39;
  }
LABEL_52:
  __asan_report_store4(p_cmd_id, this);
LABEL_53:
  v27 = *(_BYTE *)(((unsigned __int64)&v3->cmd_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v3 + 8) & 7) + 3) >= v27 && v27 )
  {
    __asan_report_load4(&v3->cmd_id_);
LABEL_57:
    v23 = (volatile signed __int32 *)v3;
    __asan_report_load8(v3);
    goto LABEL_58;
  }
  v22 = *(_DWORD *)&v3->cmd_id_;
  *(_DWORD *)&v3->cmd_id_ = v22 - 1;
LABEL_39:
  if ( v22 != 1 )
    goto LABEL_17;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    goto LABEL_57;
  v23 = (volatile signed __int32 *)(v3->_vptr_Packet + 2);
  if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_load8(v23);
    goto LABEL_59;
  }
  (*((void (__fastcall **)(common::minet::Packet *))v3->_vptr_Packet + 2))(v3);
  v23 = (volatile signed __int32 *)(&v3->cmd_id_ + 2);
  if ( !&_pthread_key_create )
    goto LABEL_60;
  v24 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v23 & 7) + 3) < v24 || !v24 )
  {
    v25 = _InterlockedExchangeAdd(v23, 0xFFFFFFFF);
    goto LABEL_46;
  }
LABEL_59:
  __asan_report_store4(v23, this);
LABEL_60:
  v28 = *(_BYTE *)(((unsigned __int64)(&v3->cmd_id_ + 2) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v3 + 12) & 7) + 3) >= v28 && v28 )
  {
    __asan_report_load4(&v3->cmd_id_ + 2);
    goto LABEL_64;
  }
  v25 = *((_DWORD *)&v3->cmd_id_ + 1);
  *((_DWORD *)&v3->cmd_id_ + 1) = v25 - 1;
LABEL_46:
  if ( v25 != 1 )
    goto LABEL_17;
  if ( !*(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    v26 = (unsigned __int64)(v3->_vptr_Packet + 3);
    if ( !*(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
    {
      (*((void (__fastcall **)(common::minet::Packet *))v3->_vptr_Packet + 3))(v3);
      goto LABEL_17;
    }
    goto LABEL_65;
  }
LABEL_64:
  v26 = (unsigned __int64)v3;
  __asan_report_load8(v3);
LABEL_65:
  v18 = __asan_report_load8(v26);
LABEL_66:
  if ( !v18 )
  {
    this = (common::minet::Packet *const)&common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/packet.cpp",
      "getProto",
      257);
    v29 = *(_BYTE *)(((unsigned __int64)&v3->cmd_id_ >> 3) + 0x7FFF8000);
    if ( v29 && v29 <= 1 )
    {
      __asan_report_load2(&v3->cmd_id_);
    }
    else
    {
      this = (common::minet::Packet *const)"ParseFromString cmd_id: %u fails";
      common::milog::MiLogStream::operator()(&v57, "ParseFromString cmd_id: %u fails", v3->cmd_id_);
    }
    common::milog::MiLogStream::~MiLogStream(&v57);
  }
  if ( *(_BYTE *)(((unsigned __int64)&v3->proto_ptr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(&v3->proto_ptr_, this);
    goto LABEL_105;
  }
  v3->proto_ptr_._M_ptr = *(std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type **)(v4 + 32);
  p_M_refcount = &v3->proto_ptr_._M_refcount;
  v54 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 40);
  if ( *(_BYTE *)(((unsigned __int64)&v3->proto_ptr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_105:
    p_M_use_count = (volatile signed __int32 *)p_M_refcount;
    __asan_report_load8(p_M_refcount);
    goto LABEL_106;
  }
  if ( v54 != v3->proto_ptr_._M_refcount._M_pi )
  {
    if ( !v54 )
      goto LABEL_80;
    p_M_use_count = &v54->_M_use_count;
    if ( !&_pthread_key_create )
    {
LABEL_107:
      v33 = &v54->_M_use_count;
      v42 = *(_BYTE *)(((unsigned __int64)&v54->_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v54 + 8) & 7) + 3) >= v42 && v42 )
      {
        __asan_report_load4(v33);
        goto LABEL_111;
      }
      ++v54->_M_use_count;
LABEL_80:
      M_pi = v3->proto_ptr_._M_refcount._M_pi;
      v55 = (unsigned __int64)M_pi;
      if ( !M_pi )
        goto LABEL_86;
      v33 = &M_pi->_M_use_count;
      if ( !&_pthread_key_create )
        goto LABEL_112;
      v34 = *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v33 & 7) + 3) < v34 || !v34 )
      {
        v35 = _InterlockedExchangeAdd(v33, 0xFFFFFFFF);
        goto LABEL_85;
      }
LABEL_111:
      __asan_report_store4(v33, this);
LABEL_112:
      v43 = *(_BYTE *)(((v55 + 8) >> 3) + 0x7FFF8000);
      if ( (char)(((v55 + 8) & 7) + 3) >= v43 && v43 )
      {
        __asan_report_load4(v55 + 8);
        goto LABEL_116;
      }
      v35 = *(_DWORD *)(v55 + 8);
      *(_DWORD *)(v55 + 8) = v35 - 1;
LABEL_85:
      if ( v35 != 1 )
        goto LABEL_86;
LABEL_116:
      if ( *(_BYTE *)((v55 >> 3) + 0x7FFF8000) )
      {
        v44 = v55;
        __asan_report_load8(v55);
      }
      else
      {
        v44 = *(_QWORD *)v55 + 16LL;
        if ( !*(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
        {
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v55 + 16LL))(v55);
          v44 = v55 + 12;
          if ( !&_pthread_key_create )
            goto LABEL_129;
          v45 = *(_BYTE *)((v44 >> 3) + 0x7FFF8000);
          if ( (char)((v44 & 7) + 3) < v45 || !v45 )
          {
            v46 = _InterlockedExchangeAdd((volatile signed __int32 *)v44, 0xFFFFFFFF);
            goto LABEL_122;
          }
LABEL_128:
          __asan_report_store4(v44, this);
LABEL_129:
          v48 = *(_BYTE *)(((v55 + 12) >> 3) + 0x7FFF8000);
          if ( (char)(((v55 + 12) & 7) + 3) >= v48 && v48 )
          {
            __asan_report_load4(v55 + 12);
            goto LABEL_133;
          }
          v46 = *(_DWORD *)(v55 + 12);
          *(_DWORD *)(v55 + 12) = v46 - 1;
LABEL_122:
          if ( v46 != 1 )
            goto LABEL_86;
          if ( !*(_BYTE *)((v55 >> 3) + 0x7FFF8000) )
          {
            v47 = *(_QWORD *)v55 + 24LL;
            if ( !*(_BYTE *)((v47 >> 3) + 0x7FFF8000) )
            {
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v55 + 24LL))(v55);
LABEL_86:
              if ( !*(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000) )
              {
                v3->proto_ptr_._M_refcount._M_pi = v54;
                goto LABEL_88;
              }
LABEL_135:
              v36 = (volatile signed __int32 *)p_M_refcount;
              __asan_report_store8(p_M_refcount, this);
              goto LABEL_136;
            }
LABEL_134:
            __asan_report_load8(v47);
            goto LABEL_135;
          }
LABEL_133:
          v47 = v55;
          __asan_report_load8(v55);
          goto LABEL_134;
        }
      }
      __asan_report_load8(v44);
      goto LABEL_128;
    }
    v31 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v31 || !v31 )
    {
      _InterlockedAdd(p_M_use_count, 1u);
      goto LABEL_80;
    }
LABEL_106:
    __asan_report_store4(p_M_use_count, this);
    goto LABEL_107;
  }
LABEL_88:
  v5 = *(volatile signed __int32 **)(v4 + 40);
  if ( !v5 )
    goto LABEL_4;
  v36 = v5 + 2;
  if ( !&_pthread_key_create )
    goto LABEL_137;
  v37 = *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v36 & 7) + 3) < v37 || !v37 )
  {
    v38 = _InterlockedExchangeAdd(v36, 0xFFFFFFFF);
    goto LABEL_93;
  }
LABEL_136:
  __asan_report_store4(v36, this);
LABEL_137:
  v49 = *(_BYTE *)(((unsigned __int64)(v5 + 2) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v5 + 8) & 7) + 3) >= v49 && v49 )
  {
    __asan_report_load4(v5 + 2);
LABEL_141:
    v39 = v5;
    __asan_report_load8(v5);
    goto LABEL_142;
  }
  v38 = *((_DWORD *)v5 + 2);
  *((_DWORD *)v5 + 2) = v38 - 1;
LABEL_93:
  if ( v38 != 1 )
    goto LABEL_4;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    goto LABEL_141;
  v39 = (volatile signed __int32 *)(*(_QWORD *)v5 + 16LL);
  if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
  {
LABEL_142:
    __asan_report_load8(v39);
    goto LABEL_143;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
  v39 = v5 + 3;
  if ( !&_pthread_key_create )
    goto LABEL_144;
  v40 = *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v39 & 7) + 3) < v40 || !v40 )
  {
    v41 = _InterlockedExchangeAdd(v39, 0xFFFFFFFF);
    goto LABEL_100;
  }
LABEL_143:
  __asan_report_store4(v39, this);
LABEL_144:
  v50 = *(_BYTE *)(((unsigned __int64)(v5 + 3) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v5 + 12) & 7) + 3) >= v50 && v50 )
  {
    __asan_report_load4(v5 + 3);
LABEL_148:
    p_M_string_length = (unsigned __int64)v5;
    __asan_report_load8(v5);
    goto LABEL_149;
  }
  v41 = *((_DWORD *)v5 + 3);
  *((_DWORD *)v5 + 3) = v41 - 1;
LABEL_100:
  if ( v41 != 1 )
    goto LABEL_4;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    goto LABEL_148;
  p_M_string_length = *(_QWORD *)v5 + 24LL;
  if ( *(_BYTE *)((p_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_149:
    __asan_report_load8(p_M_string_length);
    goto LABEL_150;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 24LL))(v5);
LABEL_4:
  p_M_string_length = (unsigned __int64)&v3->recv_str_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v3->recv_str_._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_150:
    __asan_report_store8(p_M_string_length, this);
    goto LABEL_151;
  }
  v3->recv_str_._M_string_length = 0LL;
  p_M_string_length = (unsigned __int64)&v3->recv_str_;
  if ( *(_BYTE *)(((unsigned __int64)&v3->recv_str_ >> 3) + 0x7FFF8000) )
  {
LABEL_151:
    __asan_report_load8(p_M_string_length);
LABEL_152:
    __asan_report_store1(p_M_string_length, this, v9);
    goto LABEL_153;
  }
  p_M_string_length = (unsigned __int64)v3->recv_str_._M_dataplus._M_p;
  v8 = *(_BYTE *)((p_M_string_length >> 3) + 0x7FFF8000);
  v9 = p_M_string_length & 7;
  if ( v8 <= (char)(p_M_string_length & 7) && v8 )
    goto LABEL_152;
  *(_BYTE *)p_M_string_length = 0;
  p_M_string_length = (unsigned __int64)&v3->proto_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&v3->proto_ptr_ >> 3) + 0x7FFF8000) )
  {
LABEL_153:
    __asan_report_load8(p_M_string_length);
    goto LABEL_154;
  }
  if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
  {
LABEL_154:
    v10 = __asan_report_store8(a1, this);
    goto LABEL_155;
  }
  *(_QWORD *)a1 = v3->proto_ptr_._M_ptr;
  v10 = (__int64)&v3->proto_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v3->proto_ptr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_155:
    v12 = v10;
    __asan_report_load8(v10);
    goto LABEL_156;
  }
  v11 = (__int64)v3->proto_ptr_._M_refcount._M_pi;
  v12 = (unsigned __int64)(a1 + 4);
  if ( *(_BYTE *)(((unsigned __int64)(a1 + 4) >> 3) + 0x7FFF8000) )
  {
LABEL_156:
    __asan_report_store8(v12, this);
    goto LABEL_157;
  }
  *((_QWORD *)a1 + 1) = v11;
  if ( !v11 )
    goto LABEL_17;
  v12 = v11 + 8;
  if ( !&_pthread_key_create )
    goto LABEL_158;
  v13 = *(_BYTE *)((v12 >> 3) + 0x7FFF8000);
  if ( (char)((v12 & 7) + 3) < v13 || !v13 )
  {
    _InterlockedAdd((volatile signed __int32 *)v12, 1u);
    goto LABEL_17;
  }
LABEL_157:
  v11 = __asan_report_store4(v12, this);
LABEL_158:
  v51 = *(_BYTE *)(((unsigned __int64)(v11 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v11 + 8) & 7) + 3) >= v51 && v51 )
  {
    v52 = (struct _Unwind_Exception *)__asan_report_load4(v11 + 8);
    common::milog::MiLogStream::~MiLogStream(&v57);
    v53 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v5 - 3);
    if ( v53 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v53);
    __asan_handle_no_return(v53);
    _Unwind_Resume(v52);
  }
  ++*(_DWORD *)(v11 + 8);
LABEL_17:
  if ( v58 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return (volatile signed __int32 *)a1;
};

// Line 267: range 000000000C80A240-000000000C80A9B8
// local variable allocation has failed, the output may be wrong!
int32_t __fastcall common::minet::Packet::setMessage(
        common::minet::Packet *const this,
        uint32_t cmd_id,
        common::minet::ConstMessage *message)
{
  unsigned __int64 v4; // r12
  uint16_t *p_cmd_id; // rdi
  char v7; // al
  uint16_t v8; // ax
  unsigned __int64 p_proto_ptr; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 M_ptr; // rdi
  unsigned __int64 v12; // rdx
  char v14; // al
  common::minet::ConstMessage *v15; // rdi
  unsigned __int64 v16; // rax
  _Atomic_word *v17; // rdi
  char v18; // dl
  char v19; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r12
  volatile signed __int32 *p_M_use_count; // rdi
  char v23; // dl
  signed __int32 M_use_count; // eax
  unsigned __int64 v25; // rdi
  char v26; // al
  void *v27; // rdi
  __int64 v28; // rax
  char v29; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v31; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v33; // rdi
  char v34; // dl
  char v35; // dl
  _Atomic_word v36; // eax
  volatile signed __int32 *v37; // rdi
  char v38; // dl
  signed __int32 v39; // eax
  char v40; // dl
  struct _Unwind_Exception *v41; // rbx
  std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *v42; // [rsp+0h] [rbp-48h]
  common::milog::MiLogStream v43; // [rsp+10h] [rbp-38h] BYREF

  v4 = cmd_id;
  p_cmd_id = &this->cmd_id_;
  v7 = *(_BYTE *)(((unsigned __int64)p_cmd_id >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 1 )
  {
    __asan_report_load2(p_cmd_id);
    goto LABEL_15;
  }
  v8 = this->cmd_id_;
  if ( v8 && v8 != cmd_id )
  {
LABEL_15:
    common::milog::MiLogStream::MiLogStream(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/packet.cpp",
      "setMessage",
      270);
    v14 = *(_BYTE *)(((unsigned __int64)&this->cmd_id_ >> 3) + 0x7FFF8000);
    if ( v14 && v14 <= 1 )
      __asan_report_load2(&this->cmd_id_);
    else
      common::milog::MiLogStream::operator()(&v43, "cmd_id_: %u != cmd_id: %u", this->cmd_id_, cmd_id);
    goto LABEL_19;
  }
  this->cmd_id_ = cmd_id;
  p_proto_ptr = (unsigned __int64)&this->proto_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->proto_ptr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_proto_ptr);
  }
  else
  {
    p_proto_ptr = (unsigned __int64)this->proto_ptr_._M_ptr;
    if ( !p_proto_ptr )
      goto LABEL_23;
    if ( !*(_BYTE *)((p_proto_ptr >> 3) + 0x7FFF8000) )
    {
      v10 = *(_QWORD *)p_proto_ptr + 56LL;
      if ( !*(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)p_proto_ptr + 56LL))();
        goto LABEL_10;
      }
      goto LABEL_22;
    }
  }
  __asan_report_load8(p_proto_ptr);
LABEL_22:
  __asan_report_load8(v10);
LABEL_23:
  if ( *(_BYTE *)(((unsigned __int64)message >> 3) + 0x7FFF8000) )
  {
    v15 = message;
    __asan_report_load8(message);
    goto LABEL_27;
  }
  v15 = (common::minet::ConstMessage *)(message->_vptr_MessageLite + 3);
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    v16 = __asan_report_load8(v15);
    goto LABEL_28;
  }
  v4 = (*((__int64 (__fastcall **)(common::minet::ConstMessage *))message->_vptr_MessageLite + 3))(message);
  v42 = (std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *)v4;
  v16 = operator new(0x18uLL);
LABEL_28:
  v17 = (_Atomic_word *)(v16 + 8);
  v18 = *(_BYTE *)(((v16 + 8) >> 3) + 0x7FFF8000);
  if ( v18 && v18 <= 3 )
  {
    __asan_report_store4(v17, *(_QWORD *)&cmd_id);
LABEL_50:
    v16 = __asan_report_store4(v17, *(_QWORD *)&cmd_id);
    goto LABEL_51;
  }
  *(_DWORD *)(v16 + 8) = 1;
  v17 = (_Atomic_word *)(v16 + 12);
  v19 = *(_BYTE *)(((v16 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v16 + 12) & 7) + 3) >= v19 && v19 )
    goto LABEL_50;
  *(_DWORD *)(v16 + 12) = 1;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
  {
LABEL_51:
    p_M_refcount = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v16;
    __asan_report_store8(v16, *(_QWORD *)&cmd_id);
    goto LABEL_52;
  }
  *(_QWORD *)v16 = &`vtable for'std::_Sp_counted_ptr<google::protobuf::Message *,(__gnu_cxx::_Lock_policy)2> + 2;
  p_M_refcount = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v16 + 16);
  if ( *(_BYTE *)(((v16 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_store8(p_M_refcount, *(_QWORD *)&cmd_id);
    goto LABEL_53;
  }
  *(_QWORD *)(v16 + 16) = v4;
  p_M_refcount = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&this->proto_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->proto_ptr_ >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_store8(p_M_refcount, *(_QWORD *)&cmd_id);
LABEL_54:
    v27 = (void *)__asan_report_load8(p_M_refcount);
    __cxa_begin_catch(v27);
    if ( v4 )
    {
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v4);
      v28 = *(_QWORD *)v4;
      if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v4 + 8LL) >> 3) + 0x7FFF8000) )
        v28 = __asan_report_load8(*(_QWORD *)v4 + 8LL);
      v27 = (void *)v4;
      (*(void (__fastcall **)(unsigned __int64))(v28 + 8))(v4);
    }
    __asan_handle_no_return(v27);
    __cxa_rethrow();
  }
  this->proto_ptr_._M_ptr = v42;
  p_M_refcount = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&this->proto_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->proto_ptr_._M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_54;
  M_pi = this->proto_ptr_._M_refcount._M_pi;
  this->proto_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v16;
  if ( !M_pi )
    goto LABEL_44;
  p_M_use_count = &M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v23 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v23 || !v23 )
    {
      M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
      goto LABEL_41;
    }
    __asan_report_store4(p_M_use_count, *(_QWORD *)&cmd_id);
  }
  v29 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v29 && v29 )
  {
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_66;
  }
  M_use_count = M_pi->_M_use_count;
  M_pi->_M_use_count = M_use_count - 1;
LABEL_41:
  if ( M_use_count != 1 )
    goto LABEL_44;
LABEL_66:
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_77;
  }
  p_M_weak_count = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_77:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_78;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 2))(M_pi);
  p_M_weak_count = &M_pi->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_79;
  v31 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v31 || !v31 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_72;
  }
LABEL_78:
  __asan_report_store4(p_M_weak_count, *(_QWORD *)&cmd_id);
LABEL_79:
  v34 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v34 && v34 )
  {
    __asan_report_load4(&M_pi->_M_weak_count);
LABEL_83:
    v33 = (unsigned __int64)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_84;
  }
  M_weak_count = M_pi->_M_weak_count;
  M_pi->_M_weak_count = M_weak_count - 1;
LABEL_72:
  if ( M_weak_count != 1 )
    goto LABEL_44;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
    goto LABEL_83;
  v33 = (unsigned __int64)(M_pi->_vptr__Sp_counted_base + 3);
  if ( !*(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
    goto LABEL_97;
LABEL_84:
  __asan_report_load8(v33);
  __asan_report_store4(v33, *(_QWORD *)&cmd_id);
  v35 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v35 && v35 )
  {
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_88;
  }
  v36 = M_pi->_M_use_count;
  M_pi->_M_use_count = v36 - 1;
  if ( v36 == 1 )
  {
LABEL_88:
    if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
    {
      v37 = (volatile signed __int32 *)M_pi;
      __asan_report_load8(M_pi);
    }
    else
    {
      v37 = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 2))(M_pi);
        v37 = &M_pi->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_101;
        v38 = *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v37 & 7) + 3) < v38 || !v38 )
        {
          v39 = _InterlockedExchangeAdd(v37, 0xFFFFFFFF);
          goto LABEL_94;
        }
LABEL_100:
        __asan_report_store4(v37, *(_QWORD *)&cmd_id);
LABEL_101:
        v40 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v40 && v40 )
        {
          __asan_report_load4(&M_pi->_M_weak_count);
          goto LABEL_105;
        }
        v39 = M_pi->_M_weak_count;
        M_pi->_M_weak_count = v39 - 1;
LABEL_94:
        if ( v39 != 1 )
          goto LABEL_44;
        if ( !*(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
        {
          v25 = (unsigned __int64)(M_pi->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
          {
LABEL_97:
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base
             + 3))(M_pi);
            goto LABEL_44;
          }
LABEL_106:
          __asan_report_load8(v25);
          goto LABEL_107;
        }
LABEL_105:
        v25 = (unsigned __int64)M_pi;
        __asan_report_load8(M_pi);
        goto LABEL_106;
      }
    }
    __asan_report_load8(v37);
    goto LABEL_100;
  }
LABEL_44:
  v25 = (unsigned __int64)&this->proto_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->proto_ptr_ >> 3) + 0x7FFF8000) )
  {
LABEL_107:
    __asan_report_load8(v25);
LABEL_108:
    __asan_report_load2(v25);
    goto LABEL_19;
  }
  if ( this->proto_ptr_._M_ptr )
  {
LABEL_10:
    M_ptr = (unsigned __int64)&this->proto_ptr_;
    if ( *(_BYTE *)(((unsigned __int64)&this->proto_ptr_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(M_ptr);
    }
    else
    {
      M_ptr = (unsigned __int64)this->proto_ptr_._M_ptr;
      if ( !*(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
      {
        v12 = *(_QWORD *)M_ptr + 152LL;
        if ( !*(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        {
          (*(void (__fastcall **)(unsigned __int64, common::minet::ConstMessage *))(*(_QWORD *)M_ptr + 152LL))(
            M_ptr,
            message);
          return 0;
        }
LABEL_111:
        v41 = (struct _Unwind_Exception *)__asan_report_load8(v12);
        common::milog::MiLogStream::~MiLogStream(&v43);
        __asan_handle_no_return(&v43);
        _Unwind_Resume(v41);
      }
    }
    __asan_report_load8(M_ptr);
    goto LABEL_111;
  }
  common::milog::MiLogStream::MiLogStream(
    &v43,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/packet.cpp",
    "setMessage",
    284);
  v25 = (unsigned __int64)&this->cmd_id_;
  v26 = *(_BYTE *)(((unsigned __int64)&this->cmd_id_ >> 3) + 0x7FFF8000);
  if ( v26 && v26 <= 1 )
    goto LABEL_108;
  common::milog::MiLogStream::operator()(&v43, "message.New() fails, cmd_id: %u", this->cmd_id_);
LABEL_19:
  common::milog::MiLogStream::~MiLogStream(&v43);
  return -1;
};

// Line 293: range 000000000C80A9BE-000000000C80AEC5
__int64 __fastcall common::minet::Packet::setMessagePtr(
        common::minet::Packet *const this,
        __int64 cmd_id,
        common::minet::ConstMessagePtr msg_ptr)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  uint16_t *p_cmd_id; // rdi
  char v6; // al
  uint16_t v7; // ax
  std::__shared_ptr<const google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  __int64 v9; // rax
  char v10; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v11; // rax
  volatile signed __int32 *v12; // rdi
  char v13; // dl
  signed __int32 v14; // eax
  unsigned __int64 v15; // rdi
  char v16; // dl
  signed __int32 v17; // eax
  char v19; // al
  char v20; // cl
  char v21; // dl
  unsigned __int64 v22; // rdi
  char v23; // dl
  signed __int32 v24; // eax
  char v25; // dl
  char v26; // dl
  unsigned __int64 v27; // rdi
  char v28; // dl
  signed __int32 v29; // eax
  unsigned __int64 v30; // rdi
  char v31; // dl
  struct _Unwind_Exception *v32; // rbx
  int (**vptr_MessageLite)(...); // [rsp+0h] [rbp-48h]
  __int64 v34; // [rsp+8h] [rbp-40h]
  common::milog::MiLogStream v35; // [rsp+10h] [rbp-38h] BYREF

  v3 = (unsigned __int64)this;
  v4 = (unsigned int)cmd_id;
  p_cmd_id = &this->cmd_id_;
  v6 = *(_BYTE *)(((unsigned __int64)p_cmd_id >> 3) + 0x7FFF8000);
  if ( v6 && v6 <= 1 )
  {
    __asan_report_load2(p_cmd_id);
  }
  else
  {
    v7 = *(_WORD *)(v3 + 8);
    if ( !v7 || v7 == (_DWORD)cmd_id )
    {
      *(_WORD *)(v3 + 8) = cmd_id;
      if ( *(_BYTE *)(((unsigned __int64)msg_ptr._M_ptr >> 3) + 0x7FFF8000) )
      {
        M_ptr = msg_ptr._M_ptr;
        __asan_report_load8(msg_ptr._M_ptr);
      }
      else
      {
        vptr_MessageLite = msg_ptr._M_ptr->_vptr_MessageLite;
        M_ptr = msg_ptr._M_ptr + 1;
        if ( !*(_BYTE *)(((unsigned __int64)&msg_ptr._M_ptr[1] >> 3) + 0x7FFF8000) )
        {
          v9 = (__int64)msg_ptr._M_ptr[1]._vptr_MessageLite;
          v34 = v9;
          if ( !v9 )
            goto LABEL_12;
          M_ptr = (std::__shared_ptr<const google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *)(v9 + 8);
          if ( !&_pthread_key_create )
            goto LABEL_36;
          v10 = *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)M_ptr & 7) + 3) < v10 || !v10 )
          {
            _InterlockedAdd((volatile signed __int32 *)M_ptr, 1u);
            goto LABEL_12;
          }
LABEL_35:
          v9 = __asan_report_store4(M_ptr, cmd_id);
LABEL_36:
          v12 = (volatile signed __int32 *)(v9 + 8);
          v20 = *(_BYTE *)(((unsigned __int64)(v9 + 8) >> 3) + 0x7FFF8000);
          if ( (char)(((v9 + 8) & 7) + 3) >= v20 && v20 )
          {
            __asan_report_load4(v12);
            goto LABEL_40;
          }
          ++*(_DWORD *)(v9 + 8);
LABEL_12:
          v11 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v34;
          v34 = 0LL;
          v12 = (volatile signed __int32 *)(v3 + 304);
          if ( !*(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(v3 + 304) = vptr_MessageLite;
            v12 = (volatile signed __int32 *)(v3 + 312);
            if ( !*(_BYTE *)(((v3 + 312) >> 3) + 0x7FFF8000) )
            {
              v4 = *(_QWORD *)(v3 + 312);
              *(_QWORD *)(v3 + 312) = v11;
              if ( !v4 )
              {
LABEL_20:
                v3 = v34;
                if ( !v34 )
                  return 0LL;
                v15 = v34 + 8;
                if ( !&_pthread_key_create )
                  goto LABEL_67;
                v16 = *(_BYTE *)((v15 >> 3) + 0x7FFF8000);
                if ( (char)((v15 & 7) + 3) < v16 || !v16 )
                {
                  v17 = _InterlockedExchangeAdd((volatile signed __int32 *)v15, 0xFFFFFFFF);
                  goto LABEL_25;
                }
LABEL_66:
                __asan_report_store4(v15, cmd_id);
LABEL_67:
                v26 = *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000);
                if ( (char)(((v3 + 8) & 7) + 3) >= v26 && v26 )
                {
                  __asan_report_load4(v3 + 8);
                  goto LABEL_71;
                }
                v17 = *(_DWORD *)(v3 + 8);
                *(_DWORD *)(v3 + 8) = v17 - 1;
LABEL_25:
                if ( v17 != 1 )
                  return 0LL;
LABEL_71:
                if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                {
                  v27 = v3;
                  __asan_report_load8(v3);
                }
                else
                {
                  v27 = *(_QWORD *)v3 + 16LL;
                  if ( !*(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
                  {
                    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
                    v27 = v3 + 12;
                    if ( !&_pthread_key_create )
                      goto LABEL_84;
                    v28 = *(_BYTE *)((v27 >> 3) + 0x7FFF8000);
                    if ( (char)((v27 & 7) + 3) < v28 || !v28 )
                    {
                      v29 = _InterlockedExchangeAdd((volatile signed __int32 *)v27, 0xFFFFFFFF);
                      goto LABEL_77;
                    }
LABEL_83:
                    __asan_report_store4(v27, cmd_id);
LABEL_84:
                    v31 = *(_BYTE *)(((v3 + 12) >> 3) + 0x7FFF8000);
                    if ( (char)(((v3 + 12) & 7) + 3) >= v31 && v31 )
                    {
                      __asan_report_load4(v3 + 12);
                      goto LABEL_88;
                    }
                    v29 = *(_DWORD *)(v3 + 12);
                    *(_DWORD *)(v3 + 12) = v29 - 1;
LABEL_77:
                    if ( v29 != 1 )
                      return 0LL;
                    if ( !*(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                    {
                      v30 = *(_QWORD *)v3 + 24LL;
                      if ( !*(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
                      {
                        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 24LL))(v3);
                        return 0LL;
                      }
LABEL_89:
                      v32 = (struct _Unwind_Exception *)__asan_report_load8(v30);
                      common::milog::MiLogStream::~MiLogStream(&v35);
                      __asan_handle_no_return(&v35);
                      _Unwind_Resume(v32);
                    }
LABEL_88:
                    v30 = v3;
                    __asan_report_load8(v3);
                    goto LABEL_89;
                  }
                }
                __asan_report_load8(v27);
                goto LABEL_83;
              }
              v12 = (volatile signed __int32 *)(v4 + 8);
              if ( !&_pthread_key_create )
                goto LABEL_43;
              v13 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
              if ( (char)(((unsigned __int8)v12 & 7) + 3) < v13 || !v13 )
              {
                v14 = _InterlockedExchangeAdd(v12, 0xFFFFFFFF);
                goto LABEL_19;
              }
LABEL_42:
              __asan_report_store4(v12, cmd_id);
LABEL_43:
              v21 = *(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000);
              if ( (char)(((v4 + 8) & 7) + 3) >= v21 && v21 )
              {
                __asan_report_load4(v4 + 8);
                goto LABEL_47;
              }
              v14 = *(_DWORD *)(v4 + 8);
              *(_DWORD *)(v4 + 8) = v14 - 1;
LABEL_19:
              if ( v14 != 1 )
                goto LABEL_20;
LABEL_47:
              if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
              {
                v22 = v4;
                __asan_report_load8(v4);
              }
              else
              {
                v22 = *(_QWORD *)v4 + 16LL;
                if ( !*(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
                {
                  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 16LL))(v4);
                  v22 = v4 + 12;
                  if ( !&_pthread_key_create )
                    goto LABEL_60;
                  v23 = *(_BYTE *)((v22 >> 3) + 0x7FFF8000);
                  if ( (char)((v22 & 7) + 3) < v23 || !v23 )
                  {
                    v24 = _InterlockedExchangeAdd((volatile signed __int32 *)v22, 0xFFFFFFFF);
                    goto LABEL_53;
                  }
LABEL_59:
                  __asan_report_store4(v22, cmd_id);
LABEL_60:
                  v25 = *(_BYTE *)(((v4 + 12) >> 3) + 0x7FFF8000);
                  if ( (char)(((v4 + 12) & 7) + 3) >= v25 && v25 )
                  {
                    __asan_report_load4(v4 + 12);
                    goto LABEL_64;
                  }
                  v24 = *(_DWORD *)(v4 + 12);
                  *(_DWORD *)(v4 + 12) = v24 - 1;
LABEL_53:
                  if ( v24 != 1 )
                    goto LABEL_20;
                  if ( !*(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
                  {
                    v15 = *(_QWORD *)v4 + 24LL;
                    if ( !*(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
                    {
                      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 24LL))(v4);
                      goto LABEL_20;
                    }
LABEL_65:
                    __asan_report_load8(v15);
                    goto LABEL_66;
                  }
LABEL_64:
                  v15 = v4;
                  __asan_report_load8(v4);
                  goto LABEL_65;
                }
              }
              __asan_report_load8(v22);
              goto LABEL_59;
            }
LABEL_41:
            __asan_report_load8(v12);
            goto LABEL_42;
          }
LABEL_40:
          __asan_report_store8(v12, cmd_id);
          goto LABEL_41;
        }
      }
      __asan_report_load8(M_ptr);
      goto LABEL_35;
    }
  }
  common::milog::MiLogStream::MiLogStream(
    &v35,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/packet.cpp",
    "setMessagePtr",
    296);
  v19 = *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000);
  if ( v19 && v19 <= 1 )
    __asan_report_load2(v3 + 8);
  else
    common::milog::MiLogStream::operator()(
      &v35,
      "cmd_id_: %u != cmd_id: %u",
      *(unsigned __int16 *)(v3 + 8),
      (unsigned int)cmd_id);
  common::milog::MiLogStream::~MiLogStream(&v35);
  return 0xFFFFFFFFLL;
};

// Line 306: range 000000000C80AECA-000000000C80B4A9
std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type **__fastcall common::minet::Packet::getConstMessage(
        std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type **a1,
        common::minet::Packet *const this)
{
  common::minet::Packet *v2; // rbx
  unsigned __int64 M_pi; // r12
  __int64 p_M_refcount; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  char v8; // dl
  uint16_t *p_cmd_id; // rdi
  char v11; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v12; // rax
  char v13; // dl
  signed __int32 v14; // eax
  unsigned __int64 p_M_use_count; // rdi
  char v16; // dl
  signed __int32 v17; // eax
  unsigned __int64 p_proto_ptr; // rdi
  std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  char v20; // al
  char v21; // dl
  unsigned __int64 v22; // rdi
  char v23; // dl
  signed __int32 v24; // eax
  char v25; // dl
  char v26; // dl
  unsigned __int64 v27; // rdi
  char v28; // dl
  signed __int32 v29; // eax
  char v30; // dl
  char v31; // cl
  struct _Unwind_Exception *v32; // rbx
  std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *v33; // [rsp+0h] [rbp-48h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v34; // [rsp+8h] [rbp-40h]
  common::milog::MiLogStream v35; // [rsp+10h] [rbp-38h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->proto_ptr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->proto_ptr_);
  }
  else
  {
    v2 = this;
    if ( this->proto_ptr_._M_ptr )
      goto LABEL_3;
  }
  p_cmd_id = &this->cmd_id_;
  v11 = *(_BYTE *)(((unsigned __int64)&this->cmd_id_ >> 3) + 0x7FFF8000);
  if ( v11 && v11 <= 1 )
  {
    __asan_report_load2(p_cmd_id);
    goto LABEL_37;
  }
  this = (common::minet::Packet *const)v2->cmd_id_;
  ProtoUtils::createMessage((uint32_t)this);
  v12 = v34;
  v34 = 0LL;
  p_cmd_id = (uint16_t *)&v2->proto_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->proto_ptr_ >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_store8(p_cmd_id, this);
    goto LABEL_38;
  }
  v2->proto_ptr_._M_ptr = v33;
  p_cmd_id = (uint16_t *)&v2->proto_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v2->proto_ptr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_load8(p_cmd_id);
    goto LABEL_39;
  }
  M_pi = (unsigned __int64)v2->proto_ptr_._M_refcount._M_pi;
  v2->proto_ptr_._M_refcount._M_pi = v12;
  if ( M_pi )
  {
    p_cmd_id = (uint16_t *)(M_pi + 8);
    if ( !&_pthread_key_create )
      goto LABEL_40;
    v13 = *(_BYTE *)(((unsigned __int64)p_cmd_id >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_cmd_id & 7) + 3) < v13 || !v13 )
    {
      v14 = _InterlockedExchangeAdd((volatile signed __int32 *)p_cmd_id, 0xFFFFFFFF);
      goto LABEL_23;
    }
LABEL_39:
    __asan_report_store4(p_cmd_id, this);
LABEL_40:
    v21 = *(_BYTE *)(((M_pi + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((M_pi + 8) & 7) + 3) >= v21 && v21 )
    {
      __asan_report_load4(M_pi + 8);
      goto LABEL_44;
    }
    v14 = *(_DWORD *)(M_pi + 8);
    *(_DWORD *)(M_pi + 8) = v14 - 1;
LABEL_23:
    if ( v14 != 1 )
      goto LABEL_24;
LABEL_44:
    if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
    {
      v22 = M_pi;
      __asan_report_load8(M_pi);
    }
    else
    {
      v22 = *(_QWORD *)M_pi + 16LL;
      if ( !*(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_pi + 16LL))(M_pi);
        v22 = M_pi + 12;
        if ( !&_pthread_key_create )
          goto LABEL_57;
        v23 = *(_BYTE *)((v22 >> 3) + 0x7FFF8000);
        if ( (char)((v22 & 7) + 3) < v23 || !v23 )
        {
          v24 = _InterlockedExchangeAdd((volatile signed __int32 *)v22, 0xFFFFFFFF);
          goto LABEL_50;
        }
LABEL_56:
        __asan_report_store4(v22, this);
LABEL_57:
        v25 = *(_BYTE *)(((M_pi + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((M_pi + 12) & 7) + 3) >= v25 && v25 )
        {
          __asan_report_load4(M_pi + 12);
          goto LABEL_61;
        }
        v24 = *(_DWORD *)(M_pi + 12);
        *(_DWORD *)(M_pi + 12) = v24 - 1;
LABEL_50:
        if ( v24 != 1 )
          goto LABEL_24;
        if ( !*(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
        {
          p_M_use_count = *(_QWORD *)M_pi + 24LL;
          if ( !*(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_pi + 24LL))(M_pi);
            goto LABEL_24;
          }
LABEL_62:
          __asan_report_load8(p_M_use_count);
          goto LABEL_63;
        }
LABEL_61:
        p_M_use_count = M_pi;
        __asan_report_load8(M_pi);
        goto LABEL_62;
      }
    }
    __asan_report_load8(v22);
    goto LABEL_56;
  }
LABEL_24:
  M_pi = (unsigned __int64)v34;
  if ( !v34 )
    goto LABEL_30;
  p_M_use_count = (unsigned __int64)&v34->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_64;
  v16 = *(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((p_M_use_count & 7) + 3) < v16 || !v16 )
  {
    v17 = _InterlockedExchangeAdd((volatile signed __int32 *)p_M_use_count, 0xFFFFFFFF);
    goto LABEL_29;
  }
LABEL_63:
  __asan_report_store4(p_M_use_count, this);
LABEL_64:
  v26 = *(_BYTE *)(((M_pi + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((M_pi + 8) & 7) + 3) >= v26 && v26 )
  {
    __asan_report_load4(M_pi + 8);
    goto LABEL_68;
  }
  v17 = *(_DWORD *)(M_pi + 8);
  *(_DWORD *)(M_pi + 8) = v17 - 1;
LABEL_29:
  if ( v17 != 1 )
    goto LABEL_30;
LABEL_68:
  if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
  {
    v27 = M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_79;
  }
  v27 = *(_QWORD *)M_pi + 16LL;
  if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
  {
LABEL_79:
    __asan_report_load8(v27);
    goto LABEL_80;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_pi + 16LL))(M_pi);
  v27 = M_pi + 12;
  if ( !&_pthread_key_create )
    goto LABEL_81;
  v28 = *(_BYTE *)((v27 >> 3) + 0x7FFF8000);
  if ( (char)((v27 & 7) + 3) < v28 || !v28 )
  {
    v29 = _InterlockedExchangeAdd((volatile signed __int32 *)v27, 0xFFFFFFFF);
    goto LABEL_74;
  }
LABEL_80:
  __asan_report_store4(v27, this);
LABEL_81:
  v30 = *(_BYTE *)(((M_pi + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((M_pi + 12) & 7) + 3) >= v30 && v30 )
  {
    __asan_report_load4(M_pi + 12);
LABEL_85:
    p_proto_ptr = M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_86;
  }
  v29 = *(_DWORD *)(M_pi + 12);
  *(_DWORD *)(M_pi + 12) = v29 - 1;
LABEL_74:
  if ( v29 != 1 )
    goto LABEL_30;
  if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
    goto LABEL_85;
  p_proto_ptr = *(_QWORD *)M_pi + 24LL;
  if ( *(_BYTE *)((p_proto_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_86:
    __asan_report_load8(p_proto_ptr);
    goto LABEL_87;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_pi + 24LL))(M_pi);
LABEL_30:
  p_proto_ptr = (unsigned __int64)&v2->proto_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->proto_ptr_ >> 3) + 0x7FFF8000) )
  {
LABEL_87:
    __asan_report_load8(p_proto_ptr);
    goto LABEL_88;
  }
  M_ptr = v2->proto_ptr_._M_ptr;
  if ( M_ptr )
  {
    this = (common::minet::Packet *const)&v2->recv_str_;
    if ( !(unsigned __int8)google::protobuf::MessageLite::ParseFromString(M_ptr, &v2->recv_str_) )
    {
      this = (common::minet::Packet *const)&common::milog::MiLogDefault::default_log_obj_;
      common::milog::MiLogStream::MiLogStream(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/packet.cpp",
        "getConstMessage",
        314);
      p_proto_ptr = (unsigned __int64)&v2->cmd_id_;
      v20 = *(_BYTE *)(((unsigned __int64)&v2->cmd_id_ >> 3) + 0x7FFF8000);
      if ( !v20 || v20 > 1 )
      {
        this = (common::minet::Packet *const)"ParseFromString cmd_id: %u fails";
        common::milog::MiLogStream::operator()(&v35, "ParseFromString cmd_id: %u fails", v2->cmd_id_);
LABEL_89:
        common::milog::MiLogStream::~MiLogStream(&v35);
        goto LABEL_3;
      }
LABEL_88:
      __asan_report_load2(p_proto_ptr);
      goto LABEL_89;
    }
  }
LABEL_3:
  if ( *(_BYTE *)(((unsigned __int64)&v2->proto_ptr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&v2->proto_ptr_);
    goto LABEL_91;
  }
  if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
  {
LABEL_91:
    p_M_refcount = __asan_report_store8(a1, this);
    goto LABEL_92;
  }
  *a1 = v2->proto_ptr_._M_ptr;
  p_M_refcount = (__int64)&v2->proto_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v2->proto_ptr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_92:
    v7 = p_M_refcount;
    __asan_report_load8(p_M_refcount);
    goto LABEL_93;
  }
  v6 = (__int64)v2->proto_ptr_._M_refcount._M_pi;
  v7 = (unsigned __int64)(a1 + 1);
  if ( *(_BYTE *)(((unsigned __int64)(a1 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_93:
    __asan_report_store8(v7, this);
LABEL_94:
    v6 = __asan_report_store4(v7, this);
    goto LABEL_95;
  }
  a1[1] = (std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *)v6;
  if ( !v6 )
    return a1;
  v7 = v6 + 8;
  if ( &_pthread_key_create )
  {
    v8 = *(_BYTE *)((v7 >> 3) + 0x7FFF8000);
    if ( (char)((v7 & 7) + 3) < v8 || !v8 )
    {
      _InterlockedAdd((volatile signed __int32 *)v7, 1u);
      return a1;
    }
    goto LABEL_94;
  }
LABEL_95:
  v31 = *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v6 + 8) & 7) + 3) >= v31 && v31 )
  {
    v32 = (struct _Unwind_Exception *)__asan_report_load4(v6 + 8);
    common::milog::MiLogStream::~MiLogStream(&v35);
    __asan_handle_no_return(&v35);
    _Unwind_Resume(v32);
  }
  ++*(_DWORD *)(v6 + 8);
  return a1;
};

// Line 325: range 000000000C80B4C6-000000000C80B4E2
int32_t __fastcall common::minet::Packet::copyHead(
        common::minet::Packet *const this,
        const common::minet::Packet *other_packet)
{
  if ( this == other_packet )
    return 0;
  else
    return common::minet::Packet::copyHead(this, &other_packet->head_);
};

// Line 333: range 000000000C80B4AE-000000000C80B4C4
int32_t __fastcall common::minet::Packet::copyHead(
        common::minet::Packet *const this,
        const proto::PacketHead *packet_head)
{
  proto::PacketHead::CopyFrom(&this->head_, packet_head);
  return 0;
};

// Line 382: range 000000000C80B4E4-000000000C80B7DC
int32_t __fastcall common::minet::Packet::copyHeadAndStr(
        common::minet::Packet *const this,
        const common::minet::Packet *other_packet)
{
  unsigned __int64 M_pi; // rbp
  proto::PacketHead *p_head; // rsi
  int32_t v5; // r12d
  volatile signed __int32 *p_cmd_id; // rdi
  char v7; // al
  char v8; // al
  char v9; // dl
  signed __int32 v10; // eax
  unsigned __int64 v11; // rdi
  char v12; // dl
  signed __int32 v13; // eax
  unsigned __int64 v14; // rdi
  char v15; // dl
  char v16; // dl
  common::milog::MiLogStream v18; // [rsp+0h] [rbp-38h] BYREF

  if ( this == other_packet )
    return 0;
  M_pi = (unsigned __int64)other_packet;
  p_head = &other_packet->head_;
  v5 = common::minet::Packet::copyHead(this, p_head);
  if ( v5 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/packet.cpp",
      "copyHeadAndStr",
      389);
    common::milog::MiLogStream::operator()(&v18, "copyHead fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    return -1;
  }
  p_cmd_id = (volatile signed __int32 *)(M_pi + 8);
  v7 = *(_BYTE *)(((M_pi + 8) >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 1 )
  {
    __asan_report_load2(p_cmd_id);
LABEL_27:
    __asan_report_store2(p_cmd_id);
    goto LABEL_28;
  }
  p_cmd_id = (volatile signed __int32 *)&this->cmd_id_;
  v8 = *(_BYTE *)(((unsigned __int64)&this->cmd_id_ >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 1 )
    goto LABEL_27;
  this->cmd_id_ = *(_WORD *)(M_pi + 8);
  p_head = (proto::PacketHead *)(M_pi + 272);
  std::string::_M_assign(&this->recv_str_, M_pi + 272);
  p_cmd_id = (volatile signed __int32 *)&this->proto_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->proto_ptr_ >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_store8(p_cmd_id, p_head);
    goto LABEL_29;
  }
  this->proto_ptr_._M_ptr = 0LL;
  p_cmd_id = (volatile signed __int32 *)&this->proto_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->proto_ptr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_load8(p_cmd_id);
    goto LABEL_30;
  }
  M_pi = (unsigned __int64)this->proto_ptr_._M_refcount._M_pi;
  this->proto_ptr_._M_refcount._M_pi = 0LL;
  if ( !M_pi )
    return v5;
  p_cmd_id = (volatile signed __int32 *)(M_pi + 8);
  if ( !&_pthread_key_create )
    goto LABEL_31;
  v9 = *(_BYTE *)(((unsigned __int64)p_cmd_id >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_cmd_id & 7) + 3) < v9 || !v9 )
  {
    v10 = _InterlockedExchangeAdd(p_cmd_id, 0xFFFFFFFF);
    goto LABEL_14;
  }
LABEL_30:
  __asan_report_store4(p_cmd_id, p_head);
LABEL_31:
  v15 = *(_BYTE *)(((M_pi + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((M_pi + 8) & 7) + 3) >= v15 && v15 )
  {
    __asan_report_load4(M_pi + 8);
LABEL_35:
    v11 = M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_36;
  }
  v10 = *(_DWORD *)(M_pi + 8);
  *(_DWORD *)(M_pi + 8) = v10 - 1;
LABEL_14:
  if ( v10 != 1 )
    return v5;
  if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
    goto LABEL_35;
  v11 = *(_QWORD *)M_pi + 16LL;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_load8(v11);
    goto LABEL_37;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_pi + 16LL))(M_pi);
  v11 = M_pi + 12;
  if ( !&_pthread_key_create )
    goto LABEL_38;
  v12 = *(_BYTE *)((v11 >> 3) + 0x7FFF8000);
  if ( (char)((v11 & 7) + 3) >= v12 && v12 )
  {
LABEL_37:
    __asan_report_store4(v11, p_head);
LABEL_38:
    v16 = *(_BYTE *)(((M_pi + 12) >> 3) + 0x7FFF8000);
    if ( (char)(((M_pi + 12) & 7) + 3) >= v16 && v16 )
    {
      __asan_report_load4(M_pi + 12);
      goto LABEL_42;
    }
    v13 = *(_DWORD *)(M_pi + 12);
    *(_DWORD *)(M_pi + 12) = v13 - 1;
    goto LABEL_21;
  }
  v13 = _InterlockedExchangeAdd((volatile signed __int32 *)v11, 0xFFFFFFFF);
LABEL_21:
  if ( v13 == 1 )
  {
    if ( !*(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
    {
      v14 = *(_QWORD *)M_pi + 24LL;
      if ( !*(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_pi + 24LL))(M_pi);
        return v5;
      }
      goto LABEL_43;
    }
LABEL_42:
    v14 = M_pi;
    __asan_report_load8(M_pi);
LABEL_43:
    __asan_report_load8(v14);
    return 0;
  }
  return v5;
};

// Line 399: range 000000000C80B7E2-000000000C80BD40
// local variable allocation has failed, the output may be wrong!
int32_t __fastcall common::minet::Packet::setCmdIdAndRecvStr(
        common::minet::Packet *const this,
        uint32_t cmd_id,
        std::string *recv_str)
{
  std::string::size_type M_allocated_capacity; // rcx
  std::string *p_recv_str; // r12
  unsigned __int64 M_pi; // rbx
  uint16_t *p_cmd_id; // rdi
  char v8; // al
  unsigned __int64 M_p; // rdi
  __int64 p_M_allocated_capacity; // rax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdx
  std::string::size_type *v12; // rdx
  char *v13; // rdx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v14; // rdx
  volatile signed __int32 *p_proto_ptr; // rdi
  char v16; // al
  __int64 v17; // rdx
  char v18; // dl
  signed __int32 v19; // eax
  size_t v21; // rdx
  std::string::size_type v22; // rdi
  __int64 p_M_string_length; // rax
  unsigned __int64 v24; // rdi
  char v25; // al
  unsigned __int64 v26; // rdx
  char v27; // al
  __int64 v28; // rdx
  __int64 v29; // rdx
  char v30; // al
  char v31; // dl
  unsigned __int64 v32; // rdi
  char v33; // dl
  signed __int32 v34; // eax
  unsigned __int64 v35; // rdi
  char v36; // dl

  M_pi = (unsigned __int64)recv_str;
  p_cmd_id = &this->cmd_id_;
  v8 = *(_BYTE *)(((unsigned __int64)p_cmd_id >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 1 )
  {
    __asan_report_store2(p_cmd_id);
    goto LABEL_28;
  }
  this->cmd_id_ = cmd_id;
  p_recv_str = &this->recv_str_;
  if ( *(_BYTE *)(((unsigned __int64)&this->recv_str_ >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_load8(p_recv_str);
    goto LABEL_29;
  }
  M_p = (unsigned __int64)this->recv_str_._M_dataplus._M_p;
  if ( *(_BYTE *)(((unsigned __int64)recv_str >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    M_p = M_pi;
    __asan_report_load8(M_pi);
LABEL_30:
    if ( *(_BYTE *)(((M_pi + 8) >> 3) + 0x7FFF8000) )
    {
      M_p = M_pi + 8;
      __asan_report_load8(M_pi + 8);
    }
    else
    {
      v21 = *(_QWORD *)(M_pi + 8);
      if ( !v21 )
        goto LABEL_34;
      if ( v21 != 1 )
      {
        memcpy((void *)M_p, *(const void **)&cmd_id, v21);
        goto LABEL_34;
      }
    }
    v27 = *(_BYTE *)((*(_QWORD *)&cmd_id >> 3) + 0x7FFF8000LL);
    v28 = cmd_id & 7;
    if ( v27 <= (char)v28 && v27 )
    {
      M_p = *(_QWORD *)&cmd_id;
      __asan_report_load1(*(_QWORD *)&cmd_id, *(_QWORD *)&cmd_id, v28);
    }
    else
    {
      v29 = (unsigned __int8)**(_BYTE **)&cmd_id;
      v30 = *(_BYTE *)((M_p >> 3) + 0x7FFF8000);
      if ( v30 > (char)(M_p & 7) || !v30 )
      {
        *(_BYTE *)M_p = v29;
LABEL_34:
        v22 = *(_QWORD *)(M_pi + 8);
        p_M_string_length = (__int64)&p_recv_str->_M_string_length;
        if ( !*(_BYTE *)(((unsigned __int64)&p_recv_str->_M_string_length >> 3) + 0x7FFF8000) )
        {
          p_recv_str->_M_string_length = v22;
          v24 = (unsigned __int64)&this->recv_str_._M_dataplus._M_p[v22];
          v25 = *(_BYTE *)((v24 >> 3) + 0x7FFF8000);
          v26 = v24 & 7;
          if ( v25 > (char)v26 || !v25 )
          {
            *(_BYTE *)v24 = 0;
            goto LABEL_15;
          }
          goto LABEL_47;
        }
LABEL_46:
        v24 = p_M_string_length;
        __asan_report_store8(p_M_string_length, *(_QWORD *)&cmd_id);
LABEL_47:
        __asan_report_store1(v24, *(_QWORD *)&cmd_id, v26);
LABEL_48:
        p_M_allocated_capacity = __asan_report_load8(p_anon_0);
        goto LABEL_49;
      }
    }
    p_M_string_length = __asan_report_store1(M_p, *(_QWORD *)&cmd_id, v29);
    goto LABEL_46;
  }
  *(_QWORD *)&cmd_id = recv_str->_M_dataplus._M_p;
  p_M_allocated_capacity = (__int64)&recv_str->_anon_0._M_allocated_capacity;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)recv_str->_M_dataplus._M_p == &recv_str->_anon_0 )
    goto LABEL_30;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_p != &this->recv_str_._anon_0 )
  {
    p_anon_0 = &this->recv_str_._anon_0;
    if ( !*(_BYTE *)(((unsigned __int64)&this->recv_str_._anon_0 >> 3) + 0x7FFF8000) )
    {
      M_allocated_capacity = this->recv_str_._anon_0._M_allocated_capacity;
      goto LABEL_9;
    }
    goto LABEL_48;
  }
LABEL_49:
  M_p = 0LL;
LABEL_9:
  this->recv_str_._M_dataplus._M_p = *(std::string::pointer *)&cmd_id;
  *(_QWORD *)&cmd_id = (M_pi + 8) >> 3;
  if ( *(_BYTE *)(*(_QWORD *)&cmd_id + 0x7FFF8000LL) )
  {
    __asan_report_load8(M_pi + 8);
    goto LABEL_51;
  }
  *(_QWORD *)&cmd_id = *(_QWORD *)(M_pi + 8);
  v12 = &p_recv_str->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&p_recv_str->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_51:
    __asan_report_store8(v12, *(_QWORD *)&cmd_id);
    goto LABEL_52;
  }
  p_recv_str->_M_string_length = *(_QWORD *)&cmd_id;
  v13 = (char *)(M_pi + 16);
  *(_QWORD *)&cmd_id = (M_pi + 16) >> 3;
  if ( *(_BYTE *)(*(_QWORD *)&cmd_id + 0x7FFF8000LL) )
  {
LABEL_52:
    __asan_report_load8(v13);
    goto LABEL_53;
  }
  *(_QWORD *)&cmd_id = *(_QWORD *)(M_pi + 16);
  v14 = &p_recv_str->_anon_0;
  if ( !*(_BYTE *)(((unsigned __int64)&p_recv_str->_anon_0 >> 3) + 0x7FFF8000) )
  {
    p_recv_str->_anon_0._M_allocated_capacity = *(_QWORD *)&cmd_id;
    if ( M_p )
    {
      *(_QWORD *)M_pi = M_p;
      *(_QWORD *)(M_pi + 16) = M_allocated_capacity;
      goto LABEL_15;
    }
    goto LABEL_54;
  }
LABEL_53:
  p_M_allocated_capacity = __asan_report_store8(v14, *(_QWORD *)&cmd_id);
LABEL_54:
  *(_QWORD *)M_pi = p_M_allocated_capacity;
LABEL_15:
  p_proto_ptr = (volatile signed __int32 *)(M_pi + 8);
  if ( *(_BYTE *)(((M_pi + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_proto_ptr, *(_QWORD *)&cmd_id);
LABEL_56:
    __asan_report_store1(p_proto_ptr, *(_QWORD *)&cmd_id, v17);
    goto LABEL_57;
  }
  *(_QWORD *)(M_pi + 8) = 0LL;
  p_proto_ptr = *(volatile signed __int32 **)M_pi;
  v16 = *(_BYTE *)((*(_QWORD *)M_pi >> 3) + 0x7FFF8000LL);
  v17 = *(_QWORD *)M_pi & 7LL;
  if ( v16 <= (char)v17 && v16 )
    goto LABEL_56;
  *(_BYTE *)p_proto_ptr = 0;
  p_proto_ptr = (volatile signed __int32 *)&this->proto_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->proto_ptr_ >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_store8(p_proto_ptr, *(_QWORD *)&cmd_id);
    goto LABEL_58;
  }
  this->proto_ptr_._M_ptr = 0LL;
  p_proto_ptr = (volatile signed __int32 *)&this->proto_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->proto_ptr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_load8(p_proto_ptr);
    goto LABEL_59;
  }
  M_pi = (unsigned __int64)this->proto_ptr_._M_refcount._M_pi;
  this->proto_ptr_._M_refcount._M_pi = 0LL;
  if ( M_pi )
  {
    p_proto_ptr = (volatile signed __int32 *)(M_pi + 8);
    if ( !&_pthread_key_create )
      goto LABEL_60;
    v18 = *(_BYTE *)(((unsigned __int64)p_proto_ptr >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_proto_ptr & 7) + 3) < v18 || !v18 )
    {
      v19 = _InterlockedExchangeAdd(p_proto_ptr, 0xFFFFFFFF);
      goto LABEL_25;
    }
LABEL_59:
    __asan_report_store4(p_proto_ptr, *(_QWORD *)&cmd_id);
LABEL_60:
    v31 = *(_BYTE *)(((M_pi + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((M_pi + 8) & 7) + 3) >= v31 && v31 )
    {
      __asan_report_load4(M_pi + 8);
      goto LABEL_64;
    }
    v19 = *(_DWORD *)(M_pi + 8);
    *(_DWORD *)(M_pi + 8) = v19 - 1;
LABEL_25:
    if ( v19 != 1 )
      return 0;
LABEL_64:
    if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
    {
      v32 = M_pi;
      __asan_report_load8(M_pi);
    }
    else
    {
      v32 = *(_QWORD *)M_pi + 16LL;
      if ( !*(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_pi + 16LL))(M_pi);
        v32 = M_pi + 12;
        if ( !&_pthread_key_create )
          goto LABEL_77;
        v33 = *(_BYTE *)((v32 >> 3) + 0x7FFF8000);
        if ( (char)((v32 & 7) + 3) < v33 || !v33 )
        {
          v34 = _InterlockedExchangeAdd((volatile signed __int32 *)v32, 0xFFFFFFFF);
          goto LABEL_70;
        }
LABEL_76:
        __asan_report_store4(v32, *(_QWORD *)&cmd_id);
LABEL_77:
        v36 = *(_BYTE *)(((M_pi + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((M_pi + 12) & 7) + 3) >= v36 && v36 )
        {
          __asan_report_load4(M_pi + 12);
          goto LABEL_81;
        }
        v34 = *(_DWORD *)(M_pi + 12);
        *(_DWORD *)(M_pi + 12) = v34 - 1;
LABEL_70:
        if ( v34 != 1 )
          return 0;
        if ( !*(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
        {
          v35 = *(_QWORD *)M_pi + 24LL;
          if ( !*(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_pi + 24LL))(M_pi);
            return 0;
          }
LABEL_82:
          __asan_report_load8(v35);
          JUMPOUT(0xC80BC67LL);
        }
LABEL_81:
        v35 = M_pi;
        __asan_report_load8(M_pi);
        goto LABEL_82;
      }
    }
    __asan_report_load8(v32);
    goto LABEL_76;
  }
  return 0;
};

// Line 430: range 000000000C80BD42-000000000C80BE95
std::string *__fastcall common::minet::Packet::getHeadDebugString[abi:cxx11](
        std::string *retstr,
        const common::minet::Packet *const this)
{
  proto::PacketHead *p_head; // rsi

  p_head = &this->head_;
  if ( *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7)
    || *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store_n(retstr, 32LL);
    JUMPOUT(0xC80BDA3LL);
  }
  google::protobuf::Message::ShortDebugString[abi:cxx11](retstr, p_head);
  return retstr;
};

// Line 436: range 000000000C80D348-000000000C80DD75
std::string *__fastcall common::minet::Packet::getProtoDebugString[abi:cxx11](
        std::string *retstr,
        const common::minet::Packet *const this)
{
  volatile signed __int32 *v2; // r15
  char *M_pi; // rbp
  unsigned __int64 v5; // rbx
  char *v6; // r12
  unsigned __int64 v7; // r14
  std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rax
  volatile signed __int32 *p_M_refcount; // rdi
  char v10; // dl
  volatile signed __int32 *v11; // rdi
  char v12; // dl
  signed __int32 v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rax
  char v16; // al
  volatile signed __int32 *v17; // rdi
  char v18; // dl
  signed __int32 v19; // eax
  __int64 v20; // rdi
  char v21; // al
  char v22; // dl
  volatile signed __int32 *v23; // rdi
  char v24; // dl
  signed __int32 v25; // eax
  unsigned __int64 v26; // rdi
  char v27; // dl
  char v28; // dl
  int v29; // eax
  volatile signed __int32 *v30; // rdi
  char v31; // dl
  signed __int32 v32; // eax
  unsigned __int64 v33; // rdi
  char v34; // dl
  common::milog::MiLog *v35; // rsi
  char v36; // al
  std::forward_iterator_tag v37; // cl
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rax
  char v39; // al
  char v40; // dl
  char v41; // dl
  volatile signed __int32 *v42; // rdi
  char v43; // dl
  signed __int32 v44; // eax
  unsigned __int64 v45; // rdi
  char v46; // dl
  unsigned __int64 v47; // rbp
  volatile signed __int32 *v48; // rdi
  char v49; // dl
  signed __int32 v50; // eax
  char v52; // dl
  unsigned __int64 v53; // rdi
  char v54; // dl
  signed __int32 v55; // eax
  unsigned __int64 v56; // rdi
  char v57; // dl
  struct _Unwind_Exception *v58; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v59; // rdi
  __int64 v60; // [rsp+10h] [rbp-A8h]
  __int64 v61; // [rsp+18h] [rbp-A0h]
  common::milog::MiLogStream v62; // [rsp+20h] [rbp-98h] BYREF
  char v63[120]; // [rsp+40h] [rbp-78h] BYREF

  M_pi = (char *)this;
  v5 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v5 = v15;
  }
  v6 = (char *)(v5 + 64);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 17 tmp_proto_ptr:437";
  *(_QWORD *)(v5 + 16) = common::minet::Packet::getProtoDebugString[abi:cxx11];
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  *(_QWORD *)(v5 + 32) = 0LL;
  *(_QWORD *)(v5 + 40) = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->proto_ptr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->proto_ptr_);
    goto LABEL_24;
  }
  M_ptr = this->proto_ptr_._M_ptr;
  if ( !M_ptr )
  {
LABEL_24:
    v16 = *(_BYTE *)(((unsigned __int64)&this->cmd_id_ >> 3) + 0x7FFF8000);
    if ( v16 && v16 <= 1 )
    {
      __asan_report_load2(&this->cmd_id_);
    }
    else
    {
      this = (const common::minet::Packet *const)this->cmd_id_;
      ProtoUtils::createMessage((uint32_t)this);
    }
    *(_QWORD *)(v5 + 32) = v60;
    v2 = *(volatile signed __int32 **)(v5 + 40);
    *(_QWORD *)(v5 + 40) = v61;
    if ( !v2 )
      goto LABEL_34;
    v17 = v2 + 2;
    if ( &_pthread_key_create )
    {
      v18 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v17 & 7) + 3) < v18 || !v18 )
      {
        v19 = _InterlockedExchangeAdd(v17, 0xFFFFFFFF);
        goto LABEL_33;
      }
      __asan_report_store4(v17, this);
    }
    v22 = *(_BYTE *)(((unsigned __int64)(v2 + 2) >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v2 + 8) & 7) + 3) >= v22 && v22 )
    {
      __asan_report_load4(v2 + 2);
      goto LABEL_43;
    }
    v19 = *((_DWORD *)v2 + 2);
    *((_DWORD *)v2 + 2) = v19 - 1;
LABEL_33:
    if ( v19 != 1 )
    {
LABEL_34:
      v2 = 0LL;
      goto LABEL_36;
    }
LABEL_43:
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      v23 = v2;
      __asan_report_load8(v2);
    }
    else
    {
      v23 = (volatile signed __int32 *)(*(_QWORD *)v2 + 16LL);
      if ( !*(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
        v23 = v2 + 3;
        if ( !&_pthread_key_create )
          goto LABEL_56;
        v24 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v23 & 7) + 3) < v24 || !v24 )
        {
          v25 = _InterlockedExchangeAdd(v23, 0xFFFFFFFF);
          goto LABEL_49;
        }
LABEL_55:
        __asan_report_store4(v23, this);
LABEL_56:
        v27 = *(_BYTE *)(((unsigned __int64)(v2 + 3) >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v2 + 12) & 7) + 3) >= v27 && v27 )
        {
          __asan_report_load4(v2 + 3);
          goto LABEL_60;
        }
        v25 = *((_DWORD *)v2 + 3);
        *((_DWORD *)v2 + 3) = v25 - 1;
LABEL_49:
        if ( v25 != 1 )
          goto LABEL_34;
        if ( !*(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
        {
          v26 = *(_QWORD *)v2 + 24LL;
          if ( !*(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 24LL))(v2);
            goto LABEL_34;
          }
LABEL_61:
          __asan_report_load8(v26);
          __asan_report_store4(v26, this);
          v28 = *(_BYTE *)(((unsigned __int64)(v2 + 2) >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)v2 + 8) & 7) + 3) >= v28 && v28 )
          {
            __asan_report_load4(v2 + 2);
          }
          else
          {
            v29 = *((_DWORD *)v2 + 2);
            *((_DWORD *)v2 + 2) = v29 - 1;
            if ( v29 != 1 )
            {
LABEL_36:
              v20 = *(_QWORD *)(v5 + 32);
              if ( v20 )
              {
                v21 = google::protobuf::MessageLite::ParseFromString(v20, M_pi + 272);
                goto LABEL_91;
              }
LABEL_84:
              v35 = &common::milog::MiLogDefault::default_log_obj_;
              common::milog::MiLogStream::MiLogStream(
                &v62,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "src/packet.cpp",
                "getProtoDebugString",
                443);
              v36 = *(_BYTE *)(((unsigned __int64)(M_pi + 8) >> 3) + 0x7FFF8000);
              if ( v36 && v36 <= 1 )
              {
                __asan_report_load2(M_pi + 8);
              }
              else
              {
                v35 = (common::milog::MiLog *)"ProtoUtils::createMessage cmd_id: %u fails";
                common::milog::MiLogStream::operator()(
                  &v62,
                  "ProtoUtils::createMessage cmd_id: %u fails",
                  *((unsigned __int16 *)M_pi + 4));
              }
              common::milog::MiLogStream::~MiLogStream(&v62);
              p_anon_0 = &retstr->_anon_0;
              if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
                goto LABEL_89;
              v21 = __asan_report_store8(retstr, v35);
LABEL_91:
              if ( v21 )
                goto LABEL_18;
              this = (const common::minet::Packet *const)&common::milog::MiLogDefault::default_log_obj_;
              common::milog::MiLogStream::MiLogStream(
                &v62,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "src/packet.cpp",
                "getProtoDebugString",
                448);
              v39 = *(_BYTE *)(((unsigned __int64)(M_pi + 8) >> 3) + 0x7FFF8000);
              if ( v39 && v39 <= 1 )
              {
                __asan_report_load2(M_pi + 8);
              }
              else
              {
                this = (const common::minet::Packet *const)"ParseFromString cmd_id: %u fails";
                common::milog::MiLogStream::operator()(
                  &v62,
                  "ParseFromString cmd_id: %u fails",
                  *((unsigned __int16 *)M_pi + 4));
              }
              common::milog::MiLogStream::~MiLogStream(&v62);
              p_anon_0 = &retstr->_anon_0;
              if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
              {
                p_M_refcount = (volatile signed __int32 *)retstr;
                __asan_report_store8(retstr, this);
                goto LABEL_98;
              }
LABEL_89:
              retstr->_M_dataplus._M_p = (std::string::pointer)p_anon_0;
              v14 = (__int64)byte_19E8E7A0;
              std::string::_M_construct<char const*>(retstr, byte_19E8E7A0, byte_19E8E7A0, v37);
              goto LABEL_129;
            }
          }
          if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
          {
            v30 = v2;
            __asan_report_load8(v2);
          }
          else
          {
            v30 = (volatile signed __int32 *)(*(_QWORD *)v2 + 16LL);
            if ( !*(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
              v30 = v2 + 3;
              if ( !&_pthread_key_create )
                goto LABEL_78;
              v31 = *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000);
              if ( (char)(((unsigned __int8)v30 & 7) + 3) < v31 || !v31 )
              {
                v32 = _InterlockedExchangeAdd(v30, 0xFFFFFFFF);
                goto LABEL_71;
              }
LABEL_77:
              __asan_report_store4(v30, this);
LABEL_78:
              v34 = *(_BYTE *)(((unsigned __int64)(v2 + 3) >> 3) + 0x7FFF8000);
              if ( (char)((((_BYTE)v2 + 12) & 7) + 3) >= v34 && v34 )
              {
                __asan_report_load4(v2 + 3);
                goto LABEL_82;
              }
              v32 = *((_DWORD *)v2 + 3);
              *((_DWORD *)v2 + 3) = v32 - 1;
LABEL_71:
              if ( v32 != 1 )
                goto LABEL_36;
              if ( !*(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
              {
                v33 = *(_QWORD *)v2 + 24LL;
                if ( !*(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 24LL))(v2);
                  goto LABEL_36;
                }
LABEL_83:
                __asan_report_load8(v33);
                goto LABEL_84;
              }
LABEL_82:
              v33 = (unsigned __int64)v2;
              __asan_report_load8(v2);
              goto LABEL_83;
            }
          }
          __asan_report_load8(v30);
          goto LABEL_77;
        }
LABEL_60:
        v26 = (unsigned __int64)v2;
        __asan_report_load8(v2);
        goto LABEL_61;
      }
    }
    __asan_report_load8(v23);
    goto LABEL_55;
  }
  *(_QWORD *)(v5 + 32) = M_ptr;
  p_M_refcount = (volatile signed __int32 *)&this->proto_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->proto_ptr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    __asan_report_load8(p_M_refcount);
    goto LABEL_99;
  }
  M_pi = (char *)this->proto_ptr_._M_refcount._M_pi;
  if ( M_pi == *(char **)(v5 + 40) )
  {
LABEL_18:
    v14 = *(_QWORD *)(v5 + 32);
    if ( (*(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) == 0
       || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) > (((unsigned __int8)retstr + 31) & 7))
      && *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) >= 0 )
    {
      google::protobuf::Message::DebugString[abi:cxx11](retstr, (google::protobuf::Message *)v14);
      goto LABEL_129;
    }
    goto LABEL_128;
  }
  if ( !M_pi )
    goto LABEL_11;
  p_M_refcount = (volatile signed __int32 *)(M_pi + 8);
  if ( !&_pthread_key_create )
    goto LABEL_100;
  v10 = *(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_refcount & 7) + 3) < v10 || !v10 )
  {
    _InterlockedAdd(p_M_refcount, 1u);
    goto LABEL_11;
  }
LABEL_99:
  __asan_report_store4(p_M_refcount, this);
LABEL_100:
  v11 = (volatile signed __int32 *)(M_pi + 8);
  v40 = *(_BYTE *)(((unsigned __int64)(M_pi + 8) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v40 && v40 )
  {
    __asan_report_load4(v11);
    goto LABEL_104;
  }
  ++*((_DWORD *)M_pi + 2);
LABEL_11:
  v2 = *(volatile signed __int32 **)(v5 + 40);
  if ( !v2 )
  {
LABEL_17:
    *(_QWORD *)(v5 + 40) = M_pi;
    goto LABEL_18;
  }
  v11 = v2 + 2;
  if ( !&_pthread_key_create )
    goto LABEL_105;
  v12 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v11 & 7) + 3) < v12 || !v12 )
  {
    v13 = _InterlockedExchangeAdd(v11, 0xFFFFFFFF);
    goto LABEL_16;
  }
LABEL_104:
  __asan_report_store4(v11, this);
LABEL_105:
  v41 = *(_BYTE *)(((unsigned __int64)(v2 + 2) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v2 + 8) & 7) + 3) >= v41 && v41 )
  {
    __asan_report_load4(v2 + 2);
    goto LABEL_109;
  }
  v13 = *((_DWORD *)v2 + 2);
  *((_DWORD *)v2 + 2) = v13 - 1;
LABEL_16:
  if ( v13 != 1 )
    goto LABEL_17;
LABEL_109:
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    v42 = v2;
    __asan_report_load8(v2);
    goto LABEL_120;
  }
  v42 = (volatile signed __int32 *)(*(_QWORD *)v2 + 16LL);
  if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
  {
LABEL_120:
    __asan_report_load8(v42);
    goto LABEL_121;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
  v42 = v2 + 3;
  if ( !&_pthread_key_create )
    goto LABEL_122;
  v43 = *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v42 & 7) + 3) < v43 || !v43 )
  {
    v44 = _InterlockedExchangeAdd(v42, 0xFFFFFFFF);
    goto LABEL_115;
  }
LABEL_121:
  __asan_report_store4(v42, this);
LABEL_122:
  v46 = *(_BYTE *)(((unsigned __int64)(v2 + 3) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v2 + 12) & 7) + 3) >= v46 && v46 )
  {
    __asan_report_load4(v2 + 3);
LABEL_126:
    v45 = (unsigned __int64)v2;
    __asan_report_load8(v2);
    goto LABEL_127;
  }
  v44 = *((_DWORD *)v2 + 3);
  *((_DWORD *)v2 + 3) = v44 - 1;
LABEL_115:
  if ( v44 != 1 )
    goto LABEL_17;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    goto LABEL_126;
  v45 = *(_QWORD *)v2 + 24LL;
  if ( !*(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 24LL))(v2);
    goto LABEL_17;
  }
LABEL_127:
  __asan_report_load8(v45);
LABEL_128:
  v14 = 32LL;
  __asan_report_store_n(retstr, 32LL);
LABEL_129:
  v47 = *(_QWORD *)(v5 + 40);
  if ( !v47 )
    goto LABEL_135;
  v48 = (volatile signed __int32 *)(v47 + 8);
  if ( &_pthread_key_create )
  {
    v49 = *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v48 & 7) + 3) < v49 || !v49 )
    {
      v50 = _InterlockedExchangeAdd(v48, 0xFFFFFFFF);
      goto LABEL_134;
    }
    __asan_report_store4(v48, v14);
  }
  v52 = *(_BYTE *)(((v47 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v47 + 8) & 7) + 3) >= v52 && v52 )
  {
    __asan_report_load4(v47 + 8);
    goto LABEL_143;
  }
  v50 = *(_DWORD *)(v47 + 8);
  *(_DWORD *)(v47 + 8) = v50 - 1;
LABEL_134:
  if ( v50 != 1 )
    goto LABEL_135;
LABEL_143:
  if ( *(_BYTE *)((v47 >> 3) + 0x7FFF8000) )
  {
    v53 = v47;
    __asan_report_load8(v47);
    goto LABEL_154;
  }
  v53 = *(_QWORD *)v47 + 16LL;
  if ( *(_BYTE *)((v53 >> 3) + 0x7FFF8000) )
  {
LABEL_154:
    __asan_report_load8(v53);
    goto LABEL_155;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v47 + 16LL))(v47);
  v53 = v47 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_156;
  v54 = *(_BYTE *)((v53 >> 3) + 0x7FFF8000);
  if ( (char)((v53 & 7) + 3) < v54 || !v54 )
  {
    v55 = _InterlockedExchangeAdd((volatile signed __int32 *)v53, 0xFFFFFFFF);
    goto LABEL_149;
  }
LABEL_155:
  __asan_report_store4(v53, v14);
LABEL_156:
  v57 = *(_BYTE *)(((v47 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v47 + 12) & 7) + 3) >= v57 && v57 )
  {
    __asan_report_load4(v47 + 12);
LABEL_160:
    v56 = v47;
    __asan_report_load8(v47);
LABEL_161:
    v58 = (struct _Unwind_Exception *)__asan_report_load8(v56);
    common::milog::MiLogStream::~MiLogStream(&v62);
    v59 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v6 - 3);
    if ( v59 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v59);
    __asan_handle_no_return(v59);
    _Unwind_Resume(v58);
  }
  v55 = *(_DWORD *)(v47 + 12);
  *(_DWORD *)(v47 + 12) = v55 - 1;
LABEL_149:
  if ( v55 != 1 )
    goto LABEL_135;
  if ( *(_BYTE *)((v47 >> 3) + 0x7FFF8000) )
    goto LABEL_160;
  v56 = *(_QWORD *)v47 + 24LL;
  if ( *(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
    goto LABEL_161;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v47 + 24LL))(v47);
LABEL_135:
  if ( v63 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 515: range 000000000C80C50A-000000000C80C684
uint32_t __fastcall common::minet::Packet::getSendOffset(common::minet::Packet *const this)
{
  uint32_t v1; // esi
  char v2; // cl
  uint32_t result; // eax
  google::protobuf::uint32 *p_user_session_id; // rdx
  char v5; // cl
  google::protobuf::uint32 *p_user_ip; // rdx
  char v7; // al
  common::minet::Packet *v8; // rdi

  v2 = *(_BYTE *)(((unsigned __int64)&this->head_.user_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 44) & 7) + 3) >= v2 && v2 )
  {
    __asan_report_load4(&this->head_.user_id_);
LABEL_12:
    __asan_report_load4(p_user_session_id);
    goto LABEL_13;
  }
  result = this->head_.user_id_;
  if ( result )
    return result;
  p_user_session_id = &this->head_.user_session_id_;
  v5 = *(_BYTE *)(((unsigned __int64)&this->head_.user_session_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 36) & 7) + 3) >= v5 && v5 )
    goto LABEL_12;
  result = this->head_.user_session_id_;
  if ( result )
    return result;
  p_user_ip = &this->head_.user_ip_;
  v7 = *(_BYTE *)(((unsigned __int64)&this->head_.user_ip_ >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
  {
LABEL_13:
    v8 = (common::minet::Packet *)p_user_ip;
    __asan_report_load4(p_user_ip);
    common::minet::Packet::setGameThreadIndex(v8, v1);
    return result;
  }
  return this->head_.user_ip_;
};

// Line 526: range 000000000C80D196-000000000C80D342
void __fastcall common::minet::Packet::tamperMessage(common::minet::Packet *const this)
{
  MessagePtr v1; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v2; // rbx
  char v3; // dl
  signed __int32 M_use_count; // eax
  char v5; // dl
  char v6; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v8; // rdi
  char v9; // dl
  struct _Unwind_Exception *v10; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v11; // rdi
  uint16_t v12; // [rsp+0h] [rbp-18h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v13; // [rsp+8h] [rbp-10h]

  v1._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)this;
  common::minet::Packet::getProto(&v12, this);
  v1._M_ptr = (std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *)&v12;
  ProtoUtils::tamperMessage(v1);
  v2 = v13;
  if ( !v13 )
    return;
  v1._M_ptr = (std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *)&v13->_M_use_count;
  if ( &_pthread_key_create )
  {
    v3 = *(_BYTE *)(((unsigned __int64)v1._M_ptr >> 3) + 0x7FFF8000);
    if ( (char)(((__int64)v1._M_ptr & 7) + 3) < v3 || !v3 )
    {
      M_use_count = _InterlockedExchangeAdd((volatile signed __int32 *)v1._M_ptr, 0xFFFFFFFF);
      goto LABEL_6;
    }
    __asan_report_store4(v1._M_ptr, v1._M_refcount._M_pi);
  }
  v5 = *(_BYTE *)(((unsigned __int64)&v2->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v2 + 8) & 7) + 3) >= v5 && v5 )
  {
    __asan_report_load4(&v2->_M_use_count);
    goto LABEL_13;
  }
  M_use_count = v2->_M_use_count;
  v2->_M_use_count = M_use_count - 1;
LABEL_6:
  if ( M_use_count != 1 )
    return;
LABEL_13:
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    v1._M_ptr = (std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *)v2;
    __asan_report_load8(v2);
    goto LABEL_24;
  }
  v1._M_ptr = (std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *)(v2->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)v1._M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(v1._M_ptr);
    goto LABEL_25;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v2->_vptr__Sp_counted_base + 2))(v2);
  v1._M_ptr = (std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *)&v2->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_26;
  v6 = *(_BYTE *)(((unsigned __int64)v1._M_ptr >> 3) + 0x7FFF8000);
  if ( (char)(((__int64)v1._M_ptr & 7) + 3) >= v6 && v6 )
  {
LABEL_25:
    __asan_report_store4(v1._M_ptr, v1._M_refcount._M_pi);
LABEL_26:
    v9 = *(_BYTE *)(((unsigned __int64)&v2->_M_weak_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v2 + 12) & 7) + 3) >= v9 && v9 )
    {
      __asan_report_load4(&v2->_M_weak_count);
      goto LABEL_30;
    }
    M_weak_count = v2->_M_weak_count;
    v2->_M_weak_count = M_weak_count - 1;
    goto LABEL_19;
  }
  M_weak_count = _InterlockedExchangeAdd((volatile signed __int32 *)v1._M_ptr, 0xFFFFFFFF);
LABEL_19:
  if ( M_weak_count == 1 )
  {
    if ( !*(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      v8 = (unsigned __int64)(v2->_vptr__Sp_counted_base + 3);
      if ( !*(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v2->_vptr__Sp_counted_base + 3))(v2);
        return;
      }
LABEL_31:
      v10 = (struct _Unwind_Exception *)__asan_report_load8(v8);
      v11 = v13;
      if ( v13 )
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v13);
      __asan_handle_no_return(v11);
      _Unwind_Resume(v10);
    }
LABEL_30:
    v8 = (unsigned __int64)v2;
    __asan_report_load8(v2);
    goto LABEL_31;
  }
};

// Line 532: range 000000000C80DD7A-000000000C80DD98
uint32_t __fastcall common::minet::Packet::getThreadOffset(common::minet::Packet *const this)
{
  uint32_t SendOffset; // eax

  SendOffset = common::minet::Packet::getSendOffset(this);
  return common::tools::RandomUtils::rand<unsigned int>(0, 0xFFFFFFFF, SendOffset);
};

// Line 538: range 000000000C80E71C-000000000C80F16E
// local variable allocation has failed, the output may be wrong!
void __fastcall common::minet::Packet::setExt(common::minet::Packet *const this, uint32_t key, uint32_t value)
{
  google::protobuf::Map<unsigned int,unsigned int>::size_type v3; // r14
  unsigned __int64 v4; // r12
  common::milog::MiLog *log; // rbx
  _DWORD *v6; // rbp
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap *p_ext_map; // r13
  google::protobuf::Map<unsigned int,unsigned int> *p_map; // r15
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap **p_elements; // rdi
  void **table; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v14; // rax
  std::atomic<long int> *p_log_level_mask; // rdi
  std::atomic<long int> *v16; // rdi
  std::__atomic_base<long int>::__int_type M_i; // rdx
  char v18; // cl
  __int64 v19; // rax
  char v20; // cl
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > **v21; // rdi
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *v22; // rcx
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> >::iterator v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  char v26; // al
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > **p_alloc; // rdi
  google::protobuf::Arena *arena; // r14
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *Aligned; // rcx
  unsigned __int64 v30; // rdx
  char i; // cl
  size_t *v32; // rdi
  size_t v33; // rax
  __int64 v34; // r14
  void **p_seed; // rdi
  void **v36; // rdx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdi
  char v39; // cl
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *v40; // rcx
  _DWORD *p_table; // rdi
  unsigned __int64 v42; // rax
  char v43; // cl
  char v44; // cl
  char v45; // cl
  char v46; // cl
  struct _Unwind_Exception *v47; // rbx
  uint32_t keya; // [rsp+10h] [rbp-158h]
  google::protobuf::Map<unsigned int,unsigned int>::size_type b; // [rsp+18h] [rbp-150h]
  __int64 v52; // [rsp+28h] [rbp-140h] BYREF
  common::milog::MiLogStream v53; // [rsp+30h] [rbp-138h] BYREF
  char v54[280]; // [rsp+50h] [rbp-118h] BYREF

  keya = key;
  v4 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v19 = __asan_stack_malloc_2(224LL);
    if ( v19 )
      v4 = v19;
  }
  log = (common::milog::MiLog *)(v4 + 224);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 8 3 key 64 16 2 kv 96 24 6 result 160 32 1 p";
  *(_QWORD *)(v4 + 16) = common::minet::Packet::setExt;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -219021312;
  v6[536862723] = -234881024;
  v6[536862724] = -218959118;
  v6[536862726] = -202116109;
  p_ext_map = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *)&this->head_.ext_map_;
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(&this->head_.ext_map_);
  p_map = &this->head_.ext_map_.impl_.map_;
  google::protobuf::internal::MapFieldBase::SetMapDirty(&this->head_.ext_map_);
  if ( this == (common::minet::Packet *const)-80LL )
  {
    common::milog::MiLogStream::MiLogStream(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/packet.cpp",
      "setExt",
      542);
    common::milog::MiLogStream::operator()(&v53, "mutable_ext_map failed");
    common::milog::MiLogStream::~MiLogStream(&v53);
    goto LABEL_23;
  }
  p_elements = &this->head_.ext_map_.impl_.map_.elements_;
  if ( *(_BYTE *)(((unsigned __int64)&p_map->elements_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_elements);
    goto LABEL_29;
  }
  p_ext_map = p_map->elements_;
  *(_DWORD *)(v4 + 64) = key;
  *(_QWORD *)(v4 + 72) = 0LL;
  *(_QWORD *)&key = key;
  v3 = key;
  p_elements = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)&p_ext_map->seed_;
  if ( *(_BYTE *)(((unsigned __int64)&p_ext_map->seed_ >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_load8(p_elements);
    goto LABEL_30;
  }
  v3 = p_ext_map->seed_ + key;
  p_elements = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)&p_ext_map->num_buckets_;
  if ( *(_BYTE *)(((unsigned __int64)&p_ext_map->num_buckets_ >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_load8(p_elements);
    goto LABEL_31;
  }
  v3 &= p_ext_map->num_buckets_ - 1;
  p_elements = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)&p_ext_map->table_;
  if ( *(_BYTE *)(((unsigned __int64)&p_ext_map->table_ >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_load8(p_elements);
    goto LABEL_32;
  }
  table = p_ext_map->table_;
  p_elements = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)&table[v3];
  if ( *(_BYTE *)(((unsigned __int64)p_elements >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8(p_elements);
    goto LABEL_33;
  }
  v11 = (unsigned __int64)*p_elements;
  if ( !*p_elements )
  {
LABEL_11:
    if ( v11 )
    {
      v12 = (unsigned __int64)&table[v3 ^ 1];
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        goto LABEL_42;
      if ( v11 == *(_QWORD *)v12 )
        goto LABEL_43;
    }
    goto LABEL_14;
  }
  p_elements = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)&table[v3 ^ 1];
  if ( *(_BYTE *)(((unsigned __int64)p_elements >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    v11 = __asan_report_load8(p_elements);
    goto LABEL_34;
  }
  if ( (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *)v11 == *p_elements )
    goto LABEL_11;
  while ( 1 )
  {
    v20 = *(_BYTE *)((v11 >> 3) + 0x7FFF8000);
    if ( (char)((v11 & 7) + 3) >= v20 && v20 )
    {
      v11 = __asan_report_load4(v11);
LABEL_40:
      *(_QWORD *)(v4 + 96) = v11;
      *(_QWORD *)(v4 + 104) = p_ext_map;
      *(_QWORD *)(v4 + 112) = v3;
      *(__m128i *)(v4 + 160) = _mm_load_si128((const __m128i *)(v4 + 96));
      *(_QWORD *)(v4 + 176) = v3;
      *(_QWORD *)(v4 + 184) = v3;
LABEL_15:
      v13 = *(_QWORD *)(v4 + 160);
      if ( !v13 )
        goto LABEL_49;
      *(_QWORD *)(v4 + 96) = v13;
      *(_QWORD *)(v4 + 104) = *(_QWORD *)(v4 + 168);
      v14 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 176);
      *(_QWORD *)(v4 + 112) = v14;
      *(__m128i *)&v53.log_ = _mm_load_si128((const __m128i *)(v4 + 96));
      v53.ostr_ptr_._M_refcount._M_pi = v14;
LABEL_17:
      log = v53.log_;
      p_log_level_mask = &v53.log_->log_level_mask_;
      if ( *(_BYTE *)(((unsigned __int64)&v53.log_->log_level_mask_ >> 3) + 0x7FFF8000) )
        goto LABEL_115;
      if ( !v53.log_->log_level_mask_._M_i )
        goto LABEL_116;
      goto LABEL_19;
    }
LABEL_34:
    if ( key == *(_DWORD *)v11 )
      goto LABEL_40;
    v12 = v11 + 16;
    if ( *(_BYTE *)(((v11 + 16) >> 3) + 0x7FFF8000) )
      break;
    v11 = *(_QWORD *)(v11 + 16);
    if ( !v11 )
      goto LABEL_14;
  }
  __asan_report_load8(v12);
LABEL_42:
  __asan_report_load8(v12);
LABEL_43:
  v3 &= ~1uLL;
  v21 = (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > **)&p_ext_map->table_[v3];
  if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v21);
    goto LABEL_48;
  }
  v22 = *v21;
  *(_QWORD *)(v4 + 32) = v4 + 64;
  *(_QWORD *)&key = v4 + 32;
  b = (google::protobuf::Map<unsigned int,unsigned int>::size_type)v22;
  v23._M_node = std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::find(
                  v22,
                  (unsigned int *const *)(v4 + 32))._M_node;
  if ( v23._M_node == (std::_Rb_tree_iterator<unsigned int*>::_Base_ptr)(b + 16) )
  {
LABEL_14:
    *(_QWORD *)(v4 + 96) = 0LL;
    *(_QWORD *)(v4 + 104) = 0LL;
    *(_QWORD *)(v4 + 112) = 0LL;
    *(__m128i *)(v4 + 160) = _mm_load_si128((const __m128i *)(v4 + 96));
    *(_QWORD *)(v4 + 176) = 0LL;
    *(_QWORD *)(v4 + 184) = v3;
    goto LABEL_15;
  }
  v21 = (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > **)&v23._M_node[1];
  if ( !*(_BYTE *)(((unsigned __int64)&v23._M_node[1] >> 3) + 0x7FFF8000) )
  {
    *(_QWORD *)(v4 + 96) = *(_QWORD *)&v23._M_node[1]._M_color;
    *(_QWORD *)(v4 + 104) = p_ext_map;
    *(_QWORD *)(v4 + 112) = v3;
    *(__m128i *)(v4 + 160) = _mm_load_si128((const __m128i *)(v4 + 96));
    *(_QWORD *)(v4 + 176) = v3;
    *(_QWORD *)(v4 + 184) = v3;
    goto LABEL_15;
  }
LABEL_48:
  __asan_report_load8(v21);
LABEL_49:
  if ( *(_BYTE *)(((unsigned __int64)p_ext_map >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_ext_map);
LABEL_63:
    if ( *(_QWORD *)&key <= 0x800000000000000uLL )
    {
      *(_QWORD *)&key *= 2LL;
      google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Resize(p_ext_map, *(size_t *)&key);
      v26 = 1;
    }
    else
    {
      v26 = 0;
    }
    goto LABEL_53;
  }
  v24 = p_ext_map->num_elements_ + 1;
  *(_QWORD *)&key = p_ext_map->num_buckets_;
  v25 = (unsigned __int64)(12LL * *(_QWORD *)&key) >> 4;
  if ( v24 >= v25 )
    goto LABEL_63;
  if ( v24 > (unsigned __int64)(12LL * *(_QWORD *)&key) >> 6 )
  {
    v26 = 0;
    goto LABEL_53;
  }
  if ( *(_QWORD *)&key <= 8uLL )
  {
    v26 = 0;
    goto LABEL_53;
  }
  v30 = ((5 * v24) >> 2) + 1;
  for ( i = 1; v25 > v30 << i; ++i )
    ;
  *(_QWORD *)(v4 + 32) = *(_QWORD *)&key >> i;
  v52 = 8LL;
  if ( *(_QWORD *)&key >> i > 8uLL )
    v32 = (size_t *)(v4 + 32);
  else
    v32 = (size_t *)&v52;
  if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
  {
    v33 = __asan_report_load8(v32);
  }
  else
  {
    v33 = *v32;
    if ( *(_QWORD *)&key == *v32 )
    {
      v26 = 0;
      goto LABEL_53;
    }
  }
  *(_QWORD *)&key = v33;
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Resize(p_ext_map, v33);
  v26 = 1;
LABEL_53:
  if ( v26 )
  {
    *(_QWORD *)&key = *(unsigned int *)(v4 + 64);
    v34 = *(_QWORD *)&key;
    p_seed = (void **)&p_ext_map->seed_;
    if ( *(_BYTE *)(((unsigned __int64)&p_ext_map->seed_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_seed);
    }
    else
    {
      p_seed = (void **)&p_ext_map->num_buckets_;
      if ( !*(_BYTE *)(((unsigned __int64)&p_ext_map->num_buckets_ >> 3) + 0x7FFF8000) )
      {
        v34 = (p_ext_map->seed_ + *(_QWORD *)&key) & (p_ext_map->num_buckets_ - 1);
        p_seed = (void **)&p_ext_map->table_;
        if ( !*(_BYTE *)(((unsigned __int64)&p_ext_map->table_ >> 3) + 0x7FFF8000) )
        {
          v36 = p_ext_map->table_;
          p_seed = &v36[v34];
          if ( !*(_BYTE *)(((unsigned __int64)p_seed >> 3) + 0x7FFF8000) )
          {
            v37 = (unsigned __int64)*p_seed;
            if ( !*p_seed )
              goto LABEL_86;
            p_seed = &v36[v34 ^ 1];
            if ( !*(_BYTE *)(((unsigned __int64)p_seed >> 3) + 0x7FFF8000) )
            {
              if ( (void *)v37 != *p_seed )
              {
                while ( 1 )
                {
                  v39 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
                  if ( (char)((v37 & 7) + 3) >= v39 && v39 )
                  {
                    __asan_report_load4(v37);
LABEL_102:
                    v53.ostr_ = (common::milog::MilogStringStream *)v34;
                    goto LABEL_90;
                  }
LABEL_96:
                  if ( key == *(_DWORD *)v37 )
                    goto LABEL_102;
                  v38 = v37 + 16;
                  if ( *(_BYTE *)(((v37 + 16) >> 3) + 0x7FFF8000) )
                    break;
                  v37 = *(_QWORD *)(v37 + 16);
                  if ( !v37 )
                    goto LABEL_89;
                }
                __asan_report_load8(v38);
                goto LABEL_104;
              }
LABEL_86:
              if ( !v37 )
                goto LABEL_89;
              v38 = (unsigned __int64)&v36[v34 ^ 1];
              if ( !*(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
              {
                if ( v37 != *(_QWORD *)v38 )
                  goto LABEL_89;
                goto LABEL_105;
              }
LABEL_104:
              __asan_report_load8(v38);
LABEL_105:
              v34 &= ~1uLL;
              p_alloc = (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > **)&p_ext_map->table_[v34];
              if ( *(_BYTE *)(((unsigned __int64)p_alloc >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(p_alloc);
                goto LABEL_109;
              }
              v40 = *p_alloc;
              *(_QWORD *)(v4 + 32) = v4 + 64;
              *(_QWORD *)&key = v4 + 32;
              if ( &v40->_M_impl.std::_Rb_tree_header != (std::_Rb_tree_header *)std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::find(
                                                                                   v40,
                                                                                   (unsigned int *const *)(v4 + 32))._M_node )
              {
                v53.ostr_ = (common::milog::MilogStringStream *)v34;
                goto LABEL_90;
              }
LABEL_89:
              v53.ostr_ = (common::milog::MilogStringStream *)v34;
LABEL_90:
              *(_QWORD *)(v4 + 184) = v53.ostr_;
              goto LABEL_54;
            }
LABEL_95:
            v37 = __asan_report_load8(p_seed);
            goto LABEL_96;
          }
LABEL_94:
          __asan_report_load8(p_seed);
          goto LABEL_95;
        }
LABEL_93:
        __asan_report_load8(p_seed);
        goto LABEL_94;
      }
    }
    __asan_report_load8(p_seed);
    goto LABEL_93;
  }
LABEL_54:
  b = *(_QWORD *)(v4 + 184);
  p_alloc = (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > **)&p_ext_map->alloc_;
  if ( *(_BYTE *)(((unsigned __int64)&p_ext_map->alloc_ >> 3) + 0x7FFF8000) )
  {
LABEL_109:
    __asan_report_load8(p_alloc);
    goto LABEL_110;
  }
  arena = p_ext_map->alloc_.arena_;
  if ( !arena )
  {
LABEL_110:
    Aligned = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *)operator new(0x18uLL);
    goto LABEL_59;
  }
  if ( *(_BYTE *)(((unsigned __int64)&arena->hooks_cookie_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&arena->hooks_cookie_);
  }
  else if ( !arena->hooks_cookie_ )
  {
    goto LABEL_58;
  }
  google::protobuf::Arena::OnArenaAllocation(arena, (const std::type_info *)&`typeinfo for'unsigned char, 0x18uLL);
LABEL_58:
  *(_QWORD *)&key = 24LL;
  Aligned = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                                                  &arena->impl_,
                                                                                  0x18uLL);
LABEL_59:
  if ( *(_WORD *)(((unsigned __int64)Aligned >> 3) + 0x7FFF8000) )
  {
    __asan_report_store16();
  }
  else
  {
    Aligned->kv = (google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair)_mm_load_si128((const __m128i *)(v4 + 64));
    *(_QWORD *)&key = p_ext_map;
    google::protobuf::Map<unsigned int,unsigned int>::InnerMap::InsertUnique(
      (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator *)(v4 + 96),
      p_ext_map,
      b,
      Aligned);
    if ( !*(_BYTE *)(((unsigned __int64)p_ext_map >> 3) + 0x7FFF8000) )
    {
      ++p_ext_map->num_elements_;
      *(__m128i *)&v53.log_ = _mm_load_si128((const __m128i *)(v4 + 96));
      v53.ostr_ptr_._M_refcount._M_pi = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 112);
      goto LABEL_17;
    }
  }
  p_log_level_mask = (std::atomic<long int> *)p_ext_map;
  __asan_report_load8(p_ext_map);
LABEL_115:
  __asan_report_load8(p_log_level_mask);
LABEL_116:
  if ( *(_BYTE *)(((unsigned __int64)p_map >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_map);
  }
  else
  {
    p_ext_map = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *)this->head_.ext_map_.impl_.map_.arena_;
    if ( p_ext_map )
    {
      p_table = &p_ext_map[2].table_;
      if ( !*(_BYTE *)(((unsigned __int64)&p_ext_map[2].table_ >> 3) + 0x7FFF8000) )
      {
        if ( !p_ext_map[2].table_ )
        {
LABEL_120:
          *(_QWORD *)&key = 8LL;
          v42 = (unsigned __int64)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                    (google::protobuf::internal::ArenaImpl *const)p_ext_map,
                                    8uLL);
          v16 = (std::atomic<long int> *)v42;
          v43 = *(_BYTE *)((v42 >> 3) + 0x7FFF8000);
          if ( (char)((v42 & 7) + 3) >= v43 && v43 )
          {
            __asan_report_store4(v42, 8LL);
          }
          else
          {
            *(_DWORD *)v42 = 0;
            v16 = (std::atomic<long int> *)(v42 + 4);
            v44 = *(_BYTE *)(((v42 + 4) >> 3) + 0x7FFF8000);
            if ( (char)(((v42 + 4) & 7) + 3) < v44 || !v44 )
            {
              *(_DWORD *)(v42 + 4) = 0;
              *(_QWORD *)&key = keya;
              *(_DWORD *)v42 = keya;
              goto LABEL_125;
            }
          }
          __asan_report_store4(v16, 8LL);
LABEL_139:
          __asan_report_store8(v16, *(_QWORD *)&key);
LABEL_140:
          __asan_report_load8(v16);
LABEL_141:
          v47 = (struct _Unwind_Exception *)__asan_report_store4(v16, *(_QWORD *)&key);
          common::milog::MiLogStream::~MiLogStream(&v53);
          __asan_handle_no_return(&v53);
          _Unwind_Resume(v47);
        }
LABEL_136:
        google::protobuf::Arena::OnArenaAllocation(
          (const google::protobuf::Arena *const)p_ext_map,
          (const std::type_info *)&`typeinfo for'unsigned char,
          8uLL);
        goto LABEL_120;
      }
LABEL_135:
      __asan_report_load8(p_table);
      goto LABEL_136;
    }
  }
  v42 = operator new(8uLL);
  p_table = (_DWORD *)v42;
  v45 = *(_BYTE *)((v42 >> 3) + 0x7FFF8000);
  if ( (char)((v42 & 7) + 3) >= v45 && v45 )
  {
    __asan_report_store4(v42, *(_QWORD *)&key);
LABEL_134:
    __asan_report_store4(p_table, *(_QWORD *)&key);
    goto LABEL_135;
  }
  *(_QWORD *)&key = keya;
  *(_DWORD *)v42 = keya;
  p_table = (_DWORD *)(v42 + 4);
  v46 = *(_BYTE *)(((v42 + 4) >> 3) + 0x7FFF8000);
  if ( (char)(((v42 + 4) & 7) + 3) >= v46 && v46 )
    goto LABEL_134;
  *(_DWORD *)(v42 + 4) = 0;
LABEL_125:
  v16 = &log->log_level_mask_;
  if ( *(_BYTE *)(((unsigned __int64)&log->log_level_mask_ >> 3) + 0x7FFF8000) )
    goto LABEL_139;
  log->log_level_mask_._M_i = v42;
LABEL_19:
  v16 = &log->log_level_mask_;
  if ( *(_BYTE *)(((unsigned __int64)&log->log_level_mask_ >> 3) + 0x7FFF8000) )
    goto LABEL_140;
  M_i = log->log_level_mask_._M_i;
  v16 = (std::atomic<long int> *)(M_i + 4);
  v18 = *(_BYTE *)(((unsigned __int64)(M_i + 4) >> 3) + 0x7FFF8000);
  if ( (char)(((M_i + 4) & 7) + 3) >= v18 && v18 )
    goto LABEL_141;
  *(_DWORD *)(M_i + 4) = value;
LABEL_23:
  if ( v54 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 564: range 000000000C80F174-000000000C80FBCC
// local variable allocation has failed, the output may be wrong!
void __fastcall common::minet::Packet::setServiceAppId(
        common::minet::Packet *const this,
        uint32_t service_type,
        uint32_t app_id)
{
  google::protobuf::Map<unsigned int,unsigned int>::size_type v3; // r14
  unsigned __int64 v4; // r12
  common::milog::MiLog *log; // rbx
  _DWORD *v6; // rbp
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap *p_service_app_id_map; // r13
  google::protobuf::Map<unsigned int,unsigned int> *p_map; // r15
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap **p_elements; // rdi
  void **table; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v14; // rax
  std::atomic<long int> *p_log_level_mask; // rdi
  std::atomic<long int> *v16; // rdi
  std::__atomic_base<long int>::__int_type M_i; // rdx
  char v18; // cl
  __int64 v19; // rax
  char v20; // cl
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > **v21; // rdi
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *v22; // rcx
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> >::iterator v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  char v26; // al
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > **p_alloc; // rdi
  google::protobuf::Arena *arena; // r14
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *Aligned; // rcx
  unsigned __int64 v30; // rdx
  char i; // cl
  size_t *v32; // rdi
  size_t v33; // rax
  __int64 v34; // r14
  void **p_seed; // rdi
  void **v36; // rdx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdi
  char v39; // cl
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *v40; // rcx
  _DWORD *p_table; // rdi
  unsigned __int64 v42; // rax
  char v43; // cl
  char v44; // cl
  char v45; // cl
  char v46; // cl
  struct _Unwind_Exception *v47; // rbx
  uint32_t service_typea; // [rsp+10h] [rbp-158h]
  google::protobuf::Map<unsigned int,unsigned int>::size_type b; // [rsp+18h] [rbp-150h]
  __int64 v52; // [rsp+28h] [rbp-140h] BYREF
  common::milog::MiLogStream v53; // [rsp+30h] [rbp-138h] BYREF
  char v54[280]; // [rsp+50h] [rbp-118h] BYREF

  service_typea = service_type;
  v4 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v19 = __asan_stack_malloc_2(224LL);
    if ( v19 )
      v4 = v19;
  }
  log = (common::milog::MiLog *)(v4 + 224);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 8 3 key 64 16 2 kv 96 24 6 result 160 32 1 p";
  *(_QWORD *)(v4 + 16) = common::minet::Packet::setServiceAppId;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -219021312;
  v6[536862723] = -234881024;
  v6[536862724] = -218959118;
  v6[536862726] = -202116109;
  p_service_app_id_map = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *)&this->head_.service_app_id_map_;
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(&this->head_.service_app_id_map_);
  p_map = &this->head_.service_app_id_map_.impl_.map_;
  google::protobuf::internal::MapFieldBase::SetMapDirty(&this->head_.service_app_id_map_);
  if ( this == (common::minet::Packet *const)-152LL )
  {
    common::milog::MiLogStream::MiLogStream(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/packet.cpp",
      "setServiceAppId",
      569);
    common::milog::MiLogStream::operator()(&v53, "mutable ip_map failed");
    common::milog::MiLogStream::~MiLogStream(&v53);
    goto LABEL_23;
  }
  p_elements = &this->head_.service_app_id_map_.impl_.map_.elements_;
  if ( *(_BYTE *)(((unsigned __int64)&p_map->elements_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_elements);
    goto LABEL_29;
  }
  p_service_app_id_map = p_map->elements_;
  *(_DWORD *)(v4 + 64) = service_type;
  *(_QWORD *)(v4 + 72) = 0LL;
  *(_QWORD *)&service_type = service_type;
  v3 = service_type;
  p_elements = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)&p_service_app_id_map->seed_;
  if ( *(_BYTE *)(((unsigned __int64)&p_service_app_id_map->seed_ >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_load8(p_elements);
    goto LABEL_30;
  }
  v3 = p_service_app_id_map->seed_ + service_type;
  p_elements = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)&p_service_app_id_map->num_buckets_;
  if ( *(_BYTE *)(((unsigned __int64)&p_service_app_id_map->num_buckets_ >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_load8(p_elements);
    goto LABEL_31;
  }
  v3 &= p_service_app_id_map->num_buckets_ - 1;
  p_elements = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)&p_service_app_id_map->table_;
  if ( *(_BYTE *)(((unsigned __int64)&p_service_app_id_map->table_ >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_load8(p_elements);
    goto LABEL_32;
  }
  table = p_service_app_id_map->table_;
  p_elements = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)&table[v3];
  if ( *(_BYTE *)(((unsigned __int64)p_elements >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8(p_elements);
    goto LABEL_33;
  }
  v11 = (unsigned __int64)*p_elements;
  if ( !*p_elements )
  {
LABEL_11:
    if ( v11 )
    {
      v12 = (unsigned __int64)&table[v3 ^ 1];
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        goto LABEL_42;
      if ( v11 == *(_QWORD *)v12 )
        goto LABEL_43;
    }
    goto LABEL_14;
  }
  p_elements = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)&table[v3 ^ 1];
  if ( *(_BYTE *)(((unsigned __int64)p_elements >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    v11 = __asan_report_load8(p_elements);
    goto LABEL_34;
  }
  if ( (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *)v11 == *p_elements )
    goto LABEL_11;
  while ( 1 )
  {
    v20 = *(_BYTE *)((v11 >> 3) + 0x7FFF8000);
    if ( (char)((v11 & 7) + 3) >= v20 && v20 )
    {
      v11 = __asan_report_load4(v11);
LABEL_40:
      *(_QWORD *)(v4 + 96) = v11;
      *(_QWORD *)(v4 + 104) = p_service_app_id_map;
      *(_QWORD *)(v4 + 112) = v3;
      *(__m128i *)(v4 + 160) = _mm_load_si128((const __m128i *)(v4 + 96));
      *(_QWORD *)(v4 + 176) = v3;
      *(_QWORD *)(v4 + 184) = v3;
LABEL_15:
      v13 = *(_QWORD *)(v4 + 160);
      if ( !v13 )
        goto LABEL_49;
      *(_QWORD *)(v4 + 96) = v13;
      *(_QWORD *)(v4 + 104) = *(_QWORD *)(v4 + 168);
      v14 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 176);
      *(_QWORD *)(v4 + 112) = v14;
      *(__m128i *)&v53.log_ = _mm_load_si128((const __m128i *)(v4 + 96));
      v53.ostr_ptr_._M_refcount._M_pi = v14;
LABEL_17:
      log = v53.log_;
      p_log_level_mask = &v53.log_->log_level_mask_;
      if ( *(_BYTE *)(((unsigned __int64)&v53.log_->log_level_mask_ >> 3) + 0x7FFF8000) )
        goto LABEL_115;
      if ( !v53.log_->log_level_mask_._M_i )
        goto LABEL_116;
      goto LABEL_19;
    }
LABEL_34:
    if ( service_type == *(_DWORD *)v11 )
      goto LABEL_40;
    v12 = v11 + 16;
    if ( *(_BYTE *)(((v11 + 16) >> 3) + 0x7FFF8000) )
      break;
    v11 = *(_QWORD *)(v11 + 16);
    if ( !v11 )
      goto LABEL_14;
  }
  __asan_report_load8(v12);
LABEL_42:
  __asan_report_load8(v12);
LABEL_43:
  v3 &= ~1uLL;
  v21 = (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > **)&p_service_app_id_map->table_[v3];
  if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v21);
    goto LABEL_48;
  }
  v22 = *v21;
  *(_QWORD *)(v4 + 32) = v4 + 64;
  *(_QWORD *)&service_type = v4 + 32;
  b = (google::protobuf::Map<unsigned int,unsigned int>::size_type)v22;
  v23._M_node = std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::find(
                  v22,
                  (unsigned int *const *)(v4 + 32))._M_node;
  if ( v23._M_node == (std::_Rb_tree_iterator<unsigned int*>::_Base_ptr)(b + 16) )
  {
LABEL_14:
    *(_QWORD *)(v4 + 96) = 0LL;
    *(_QWORD *)(v4 + 104) = 0LL;
    *(_QWORD *)(v4 + 112) = 0LL;
    *(__m128i *)(v4 + 160) = _mm_load_si128((const __m128i *)(v4 + 96));
    *(_QWORD *)(v4 + 176) = 0LL;
    *(_QWORD *)(v4 + 184) = v3;
    goto LABEL_15;
  }
  v21 = (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > **)&v23._M_node[1];
  if ( !*(_BYTE *)(((unsigned __int64)&v23._M_node[1] >> 3) + 0x7FFF8000) )
  {
    *(_QWORD *)(v4 + 96) = *(_QWORD *)&v23._M_node[1]._M_color;
    *(_QWORD *)(v4 + 104) = p_service_app_id_map;
    *(_QWORD *)(v4 + 112) = v3;
    *(__m128i *)(v4 + 160) = _mm_load_si128((const __m128i *)(v4 + 96));
    *(_QWORD *)(v4 + 176) = v3;
    *(_QWORD *)(v4 + 184) = v3;
    goto LABEL_15;
  }
LABEL_48:
  __asan_report_load8(v21);
LABEL_49:
  if ( *(_BYTE *)(((unsigned __int64)p_service_app_id_map >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_service_app_id_map);
LABEL_63:
    if ( *(_QWORD *)&service_type <= 0x800000000000000uLL )
    {
      *(_QWORD *)&service_type *= 2LL;
      google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Resize(p_service_app_id_map, *(size_t *)&service_type);
      v26 = 1;
    }
    else
    {
      v26 = 0;
    }
    goto LABEL_53;
  }
  v24 = p_service_app_id_map->num_elements_ + 1;
  *(_QWORD *)&service_type = p_service_app_id_map->num_buckets_;
  v25 = (unsigned __int64)(12LL * *(_QWORD *)&service_type) >> 4;
  if ( v24 >= v25 )
    goto LABEL_63;
  if ( v24 > (unsigned __int64)(12LL * *(_QWORD *)&service_type) >> 6 )
  {
    v26 = 0;
    goto LABEL_53;
  }
  if ( *(_QWORD *)&service_type <= 8uLL )
  {
    v26 = 0;
    goto LABEL_53;
  }
  v30 = ((5 * v24) >> 2) + 1;
  for ( i = 1; v25 > v30 << i; ++i )
    ;
  *(_QWORD *)(v4 + 32) = *(_QWORD *)&service_type >> i;
  v52 = 8LL;
  if ( *(_QWORD *)&service_type >> i > 8uLL )
    v32 = (size_t *)(v4 + 32);
  else
    v32 = (size_t *)&v52;
  if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
  {
    v33 = __asan_report_load8(v32);
  }
  else
  {
    v33 = *v32;
    if ( *(_QWORD *)&service_type == *v32 )
    {
      v26 = 0;
      goto LABEL_53;
    }
  }
  *(_QWORD *)&service_type = v33;
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Resize(p_service_app_id_map, v33);
  v26 = 1;
LABEL_53:
  if ( v26 )
  {
    *(_QWORD *)&service_type = *(unsigned int *)(v4 + 64);
    v34 = *(_QWORD *)&service_type;
    p_seed = (void **)&p_service_app_id_map->seed_;
    if ( *(_BYTE *)(((unsigned __int64)&p_service_app_id_map->seed_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_seed);
    }
    else
    {
      p_seed = (void **)&p_service_app_id_map->num_buckets_;
      if ( !*(_BYTE *)(((unsigned __int64)&p_service_app_id_map->num_buckets_ >> 3) + 0x7FFF8000) )
      {
        v34 = (p_service_app_id_map->seed_ + *(_QWORD *)&service_type) & (p_service_app_id_map->num_buckets_ - 1);
        p_seed = (void **)&p_service_app_id_map->table_;
        if ( !*(_BYTE *)(((unsigned __int64)&p_service_app_id_map->table_ >> 3) + 0x7FFF8000) )
        {
          v36 = p_service_app_id_map->table_;
          p_seed = &v36[v34];
          if ( !*(_BYTE *)(((unsigned __int64)p_seed >> 3) + 0x7FFF8000) )
          {
            v37 = (unsigned __int64)*p_seed;
            if ( !*p_seed )
              goto LABEL_86;
            p_seed = &v36[v34 ^ 1];
            if ( !*(_BYTE *)(((unsigned __int64)p_seed >> 3) + 0x7FFF8000) )
            {
              if ( (void *)v37 != *p_seed )
              {
                while ( 1 )
                {
                  v39 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
                  if ( (char)((v37 & 7) + 3) >= v39 && v39 )
                  {
                    __asan_report_load4(v37);
LABEL_102:
                    v53.ostr_ = (common::milog::MilogStringStream *)v34;
                    goto LABEL_90;
                  }
LABEL_96:
                  if ( service_type == *(_DWORD *)v37 )
                    goto LABEL_102;
                  v38 = v37 + 16;
                  if ( *(_BYTE *)(((v37 + 16) >> 3) + 0x7FFF8000) )
                    break;
                  v37 = *(_QWORD *)(v37 + 16);
                  if ( !v37 )
                    goto LABEL_89;
                }
                __asan_report_load8(v38);
                goto LABEL_104;
              }
LABEL_86:
              if ( !v37 )
                goto LABEL_89;
              v38 = (unsigned __int64)&v36[v34 ^ 1];
              if ( !*(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
              {
                if ( v37 != *(_QWORD *)v38 )
                  goto LABEL_89;
                goto LABEL_105;
              }
LABEL_104:
              __asan_report_load8(v38);
LABEL_105:
              v34 &= ~1uLL;
              p_alloc = (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > **)&p_service_app_id_map->table_[v34];
              if ( *(_BYTE *)(((unsigned __int64)p_alloc >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(p_alloc);
                goto LABEL_109;
              }
              v40 = *p_alloc;
              *(_QWORD *)(v4 + 32) = v4 + 64;
              *(_QWORD *)&service_type = v4 + 32;
              if ( &v40->_M_impl.std::_Rb_tree_header != (std::_Rb_tree_header *)std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::find(
                                                                                   v40,
                                                                                   (unsigned int *const *)(v4 + 32))._M_node )
              {
                v53.ostr_ = (common::milog::MilogStringStream *)v34;
                goto LABEL_90;
              }
LABEL_89:
              v53.ostr_ = (common::milog::MilogStringStream *)v34;
LABEL_90:
              *(_QWORD *)(v4 + 184) = v53.ostr_;
              goto LABEL_54;
            }
LABEL_95:
            v37 = __asan_report_load8(p_seed);
            goto LABEL_96;
          }
LABEL_94:
          __asan_report_load8(p_seed);
          goto LABEL_95;
        }
LABEL_93:
        __asan_report_load8(p_seed);
        goto LABEL_94;
      }
    }
    __asan_report_load8(p_seed);
    goto LABEL_93;
  }
LABEL_54:
  b = *(_QWORD *)(v4 + 184);
  p_alloc = (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > **)&p_service_app_id_map->alloc_;
  if ( *(_BYTE *)(((unsigned __int64)&p_service_app_id_map->alloc_ >> 3) + 0x7FFF8000) )
  {
LABEL_109:
    __asan_report_load8(p_alloc);
    goto LABEL_110;
  }
  arena = p_service_app_id_map->alloc_.arena_;
  if ( !arena )
  {
LABEL_110:
    Aligned = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *)operator new(0x18uLL);
    goto LABEL_59;
  }
  if ( *(_BYTE *)(((unsigned __int64)&arena->hooks_cookie_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&arena->hooks_cookie_);
  }
  else if ( !arena->hooks_cookie_ )
  {
    goto LABEL_58;
  }
  google::protobuf::Arena::OnArenaAllocation(arena, (const std::type_info *)&`typeinfo for'unsigned char, 0x18uLL);
LABEL_58:
  *(_QWORD *)&service_type = 24LL;
  Aligned = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                                                  &arena->impl_,
                                                                                  0x18uLL);
LABEL_59:
  if ( *(_WORD *)(((unsigned __int64)Aligned >> 3) + 0x7FFF8000) )
  {
    __asan_report_store16();
  }
  else
  {
    Aligned->kv = (google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair)_mm_load_si128((const __m128i *)(v4 + 64));
    *(_QWORD *)&service_type = p_service_app_id_map;
    google::protobuf::Map<unsigned int,unsigned int>::InnerMap::InsertUnique(
      (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator *)(v4 + 96),
      p_service_app_id_map,
      b,
      Aligned);
    if ( !*(_BYTE *)(((unsigned __int64)p_service_app_id_map >> 3) + 0x7FFF8000) )
    {
      ++p_service_app_id_map->num_elements_;
      *(__m128i *)&v53.log_ = _mm_load_si128((const __m128i *)(v4 + 96));
      v53.ostr_ptr_._M_refcount._M_pi = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 112);
      goto LABEL_17;
    }
  }
  p_log_level_mask = (std::atomic<long int> *)p_service_app_id_map;
  __asan_report_load8(p_service_app_id_map);
LABEL_115:
  __asan_report_load8(p_log_level_mask);
LABEL_116:
  if ( *(_BYTE *)(((unsigned __int64)p_map >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_map);
  }
  else
  {
    p_service_app_id_map = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *)this->head_.service_app_id_map_.impl_.map_.arena_;
    if ( p_service_app_id_map )
    {
      p_table = &p_service_app_id_map[2].table_;
      if ( !*(_BYTE *)(((unsigned __int64)&p_service_app_id_map[2].table_ >> 3) + 0x7FFF8000) )
      {
        if ( !p_service_app_id_map[2].table_ )
        {
LABEL_120:
          *(_QWORD *)&service_type = 8LL;
          v42 = (unsigned __int64)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                    (google::protobuf::internal::ArenaImpl *const)p_service_app_id_map,
                                    8uLL);
          v16 = (std::atomic<long int> *)v42;
          v43 = *(_BYTE *)((v42 >> 3) + 0x7FFF8000);
          if ( (char)((v42 & 7) + 3) >= v43 && v43 )
          {
            __asan_report_store4(v42, 8LL);
          }
          else
          {
            *(_DWORD *)v42 = 0;
            v16 = (std::atomic<long int> *)(v42 + 4);
            v44 = *(_BYTE *)(((v42 + 4) >> 3) + 0x7FFF8000);
            if ( (char)(((v42 + 4) & 7) + 3) < v44 || !v44 )
            {
              *(_DWORD *)(v42 + 4) = 0;
              *(_QWORD *)&service_type = service_typea;
              *(_DWORD *)v42 = service_typea;
              goto LABEL_125;
            }
          }
          __asan_report_store4(v16, 8LL);
LABEL_139:
          __asan_report_store8(v16, *(_QWORD *)&service_type);
LABEL_140:
          __asan_report_load8(v16);
LABEL_141:
          v47 = (struct _Unwind_Exception *)__asan_report_store4(v16, *(_QWORD *)&service_type);
          common::milog::MiLogStream::~MiLogStream(&v53);
          __asan_handle_no_return(&v53);
          _Unwind_Resume(v47);
        }
LABEL_136:
        google::protobuf::Arena::OnArenaAllocation(
          (const google::protobuf::Arena *const)p_service_app_id_map,
          (const std::type_info *)&`typeinfo for'unsigned char,
          8uLL);
        goto LABEL_120;
      }
LABEL_135:
      __asan_report_load8(p_table);
      goto LABEL_136;
    }
  }
  v42 = operator new(8uLL);
  p_table = (_DWORD *)v42;
  v45 = *(_BYTE *)((v42 >> 3) + 0x7FFF8000);
  if ( (char)((v42 & 7) + 3) >= v45 && v45 )
  {
    __asan_report_store4(v42, *(_QWORD *)&service_type);
LABEL_134:
    __asan_report_store4(p_table, *(_QWORD *)&service_type);
    goto LABEL_135;
  }
  *(_QWORD *)&service_type = service_typea;
  *(_DWORD *)v42 = service_typea;
  p_table = (_DWORD *)(v42 + 4);
  v46 = *(_BYTE *)(((v42 + 4) >> 3) + 0x7FFF8000);
  if ( (char)(((v42 + 4) & 7) + 3) >= v46 && v46 )
    goto LABEL_134;
  *(_DWORD *)(v42 + 4) = 0;
LABEL_125:
  v16 = &log->log_level_mask_;
  if ( *(_BYTE *)(((unsigned __int64)&log->log_level_mask_ >> 3) + 0x7FFF8000) )
    goto LABEL_139;
  log->log_level_mask_._M_i = v42;
LABEL_19:
  v16 = &log->log_level_mask_;
  if ( *(_BYTE *)(((unsigned __int64)&log->log_level_mask_ >> 3) + 0x7FFF8000) )
    goto LABEL_140;
  M_i = log->log_level_mask_._M_i;
  v16 = (std::atomic<long int> *)(M_i + 4);
  v18 = *(_BYTE *)(((unsigned __int64)(M_i + 4) >> 3) + 0x7FFF8000);
  if ( (char)(((M_i + 4) & 7) + 3) >= v18 && v18 )
    goto LABEL_141;
  *(_DWORD *)(M_i + 4) = app_id;
LABEL_23:
  if ( v54 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 577: range 000000000C80DD9A-000000000C80E21A
uint32_t __fastcall common::minet::Packet::getServiceAppId(common::minet::Packet *const this, uint32_t service_type)
{
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap *elements; // r13
  unsigned __int64 v3; // rbx
  _DWORD *v4; // rbp
  google::protobuf::Map<unsigned int,unsigned int>::size_type p_elements; // r12
  unsigned int v6; // ecx
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap **p_seed; // rdi
  void **table; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > **v12; // rdi
  __int64 v13; // rdx
  char v14; // cl
  uint32_t result; // eax
  __int64 v16; // rax
  char v17; // si
  unsigned __int64 v18; // r12
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *v19; // rcx
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> >::iterator v20; // rax
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *v21; // [rsp+8h] [rbp-180h]
  __int64 v22; // [rsp+38h] [rbp-150h]
  __m128i v23; // [rsp+70h] [rbp-118h] BYREF
  __int64 v24; // [rsp+80h] [rbp-108h]
  __m128i v25; // [rsp+90h] [rbp-F8h]
  unsigned __int64 v26; // [rsp+A0h] [rbp-E8h]
  char v27[216]; // [rsp+B0h] [rbp-D8h] BYREF

  elements = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *)service_type;
  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v16 = __asan_stack_malloc_2(160LL);
    if ( v16 )
      v3 = v16;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 16 service_type:576 64 8 3 key 96 24 8 iter:579";
  *(_QWORD *)(v3 + 16) = common::minet::Packet::getServiceAppId;
  v4 = (_DWORD *)(v3 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = service_type;
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(&this->head_.service_app_id_map_);
  p_elements = (google::protobuf::Map<unsigned int,unsigned int>::size_type)&this->head_.service_app_id_map_.impl_.map_.elements_;
  if ( *(_BYTE *)(((unsigned __int64)&this->head_.service_app_id_map_.impl_.map_.elements_ >> 3) + 0x7FFF8000) )
  {
    p_seed = &this->head_.service_app_id_map_.impl_.map_.elements_;
    __asan_report_load8(p_elements);
    goto LABEL_24;
  }
  elements = this->head_.service_app_id_map_.impl_.map_.elements_;
  v6 = *(_DWORD *)(v3 + 48);
  p_elements = v6;
  p_seed = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)&elements->seed_;
  if ( *(_BYTE *)(((unsigned __int64)&elements->seed_ >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(p_seed);
    goto LABEL_25;
  }
  p_elements = elements->seed_ + v6;
  p_seed = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)&elements->num_buckets_;
  if ( *(_BYTE *)(((unsigned __int64)&elements->num_buckets_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(p_seed);
    goto LABEL_26;
  }
  p_elements &= elements->num_buckets_ - 1;
  p_seed = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)&elements->table_;
  if ( *(_BYTE *)(((unsigned __int64)&elements->table_ >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(p_seed);
    goto LABEL_27;
  }
  table = elements->table_;
  p_seed = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)&table[p_elements];
  if ( *(_BYTE *)(((unsigned __int64)p_seed >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_load8(p_seed);
    goto LABEL_28;
  }
  v9 = (unsigned __int64)*p_seed;
  if ( !*p_seed )
    goto LABEL_10;
  p_seed = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)&table[p_elements ^ 1];
  if ( *(_BYTE *)(((unsigned __int64)p_seed >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    v9 = __asan_report_load8(p_seed);
    goto LABEL_29;
  }
  if ( (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *)v9 != *p_seed )
  {
    while ( 1 )
    {
      v17 = *(_BYTE *)((v9 >> 3) + 0x7FFF8000);
      if ( (char)((v9 & 7) + 3) >= v17 && v17 )
      {
        v9 = __asan_report_load4(v9);
LABEL_35:
        v23.m128i_i64[0] = v9;
        v23.m128i_i64[1] = (__int64)elements;
        v25 = _mm_load_si128(&v23);
        v26 = p_elements;
        goto LABEL_14;
      }
LABEL_29:
      if ( v6 == *(_DWORD *)v9 )
        goto LABEL_35;
      v10 = v9 + 16;
      if ( *(_BYTE *)(((v9 + 16) >> 3) + 0x7FFF8000) )
        break;
      v9 = *(_QWORD *)(v9 + 16);
      if ( !v9 )
        goto LABEL_13;
    }
    __asan_report_load8(v10);
LABEL_37:
    __asan_report_load8(v10);
    goto LABEL_38;
  }
LABEL_10:
  if ( !v9 )
  {
LABEL_13:
    v23 = 0uLL;
    v25 = _mm_load_si128(&v23);
    v26 = 0LL;
    goto LABEL_14;
  }
  v10 = (unsigned __int64)&table[p_elements ^ 1];
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    goto LABEL_37;
  if ( v9 != *(_QWORD *)v10 )
    goto LABEL_13;
LABEL_38:
  v18 = p_elements & 0xFFFFFFFFFFFFFFFELL;
  v12 = (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > **)&elements->table_[v18];
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v12);
    goto LABEL_43;
  }
  v19 = *v12;
  *(_QWORD *)(v3 + 64) = v3 + 48;
  v21 = v19;
  v20._M_node = std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::find(
                  v19,
                  (unsigned int *const *)(v3 + 64))._M_node;
  if ( (std::_Rb_tree_header *)v20._M_node == &v21->_M_impl.std::_Rb_tree_header )
    goto LABEL_13;
  v12 = (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > **)&v20._M_node[1];
  if ( *(_BYTE *)(((unsigned __int64)&v20._M_node[1] >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load8(v12);
    goto LABEL_44;
  }
  v23.m128i_i64[0] = *(_QWORD *)&v20._M_node[1]._M_color;
  v23.m128i_i64[1] = (__int64)elements;
  v25 = _mm_load_si128(&v23);
  v26 = v18;
LABEL_14:
  v22 = v25.m128i_i64[1];
  v11 = v25.m128i_i64[0];
  *(_QWORD *)(v3 + 96) = v25.m128i_i64[0];
  *(_QWORD *)(v3 + 104) = v22;
  *(_QWORD *)(v3 + 112) = v26;
  v23 = 0uLL;
  v24 = 0LL;
  if ( v11 )
  {
    v12 = (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > **)(v11 + 8);
    if ( !*(_BYTE *)(((unsigned __int64)(v11 + 8) >> 3) + 0x7FFF8000) )
    {
      v13 = *(_QWORD *)(v11 + 8);
      v12 = (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > **)(v13 + 4);
      v14 = *(_BYTE *)(((unsigned __int64)(v13 + 4) >> 3) + 0x7FFF8000);
      if ( (char)(((v13 + 4) & 7) + 3) < v14 || !v14 )
      {
        result = *(_DWORD *)(v13 + 4);
        goto LABEL_19;
      }
      goto LABEL_45;
    }
LABEL_44:
    __asan_report_load8(v12);
LABEL_45:
    __asan_report_load4(v12);
  }
  result = 0;
LABEL_19:
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 589: range 000000000C80FBD2-000000000C80FC68
// local variable allocation has failed, the output may be wrong!
void __fastcall common::minet::Packet::setSource(
        common::minet::Packet *const this,
        uint32_t service_type,
        uint32_t app_id)
{
  char v3; // r8

  v3 = *(_BYTE *)(((unsigned __int64)&this->head_.source_service_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 4) & 7) + 3) >= v3 && v3 )
  {
    __asan_report_store4(&this->head_.source_service_, *(_QWORD *)&service_type);
    JUMPOUT(0xC80FC17LL);
  }
  this->head_.source_service_ = service_type;
  common::minet::Packet::setServiceAppId(this, service_type, app_id);
};

// Line 596: range 000000000C80E220-000000000C80E716
uint32_t __fastcall common::minet::Packet::getSourceAppId(common::minet::Packet *const this)
{
  char v1; // cl
  google::protobuf::uint32 *p_source_service; // rdi

  v1 = *(_BYTE *)(((unsigned __int64)&this->head_.source_service_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 4) & 7) + 3) < v1 || !v1 )
    return common::minet::Packet::getServiceAppId(this, this->head_.source_service_);
  p_source_service = &this->head_.source_service_;
  __asan_report_load4(p_source_service);
  return common::minet::Packet::getTargetAppId((common::minet::Packet *const)p_source_service);
};

// Line 629: range 000000000C80C686-000000000C80C759
// local variable allocation has failed, the output may be wrong!
void __fastcall common::minet::Packet::setMultiThreadIndex(common::minet::Packet *const this, uint32_t thread_index)
{
  __int64 v2; // rdx
  google::protobuf::uint32 *p_multi_thread_index; // rdx
  char v4; // al
  common::minet::Packet *v5; // rdi

  v2 = *(unsigned __int8 *)(((unsigned __int64)&this->head_.is_set_multi_thread_ >> 3) + 0x7FFF8000);
  if ( (char)v2 <= (((unsigned __int8)this + 9) & 7) && (_BYTE)v2 )
  {
    __asan_report_store1(&this->head_.is_set_multi_thread_, *(_QWORD *)&thread_index, v2);
  }
  else
  {
    this->head_.is_set_multi_thread_ = 1;
    p_multi_thread_index = &this->head_.multi_thread_index_;
    v4 = *(_BYTE *)(((unsigned __int64)&this->head_.multi_thread_index_ >> 3) + 0x7FFF8000);
    if ( !v4 || v4 > 3 )
    {
      this->head_.multi_thread_index_ = thread_index;
      return;
    }
  }
  v5 = (common::minet::Packet *)p_multi_thread_index;
  __asan_report_store4(p_multi_thread_index, *(_QWORD *)&thread_index);
  common::minet::Packet::getMultiThreadIndex(v5);
};

// Line 642: range 000000000C809AC0-000000000C80A23B
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/packet.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      if ( !`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero )
      {
        `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = 1;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
        {
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, &std::__ioinit);
          JUMPOUT(0xC809B53LL);
        }
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                             + 9;
      }
    }
    __asan_after_dynamic_init();
  }
};
