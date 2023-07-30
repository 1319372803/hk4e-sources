// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/net_tools/src/connect_packet.cpp

// Line 18: range 0000000019FCDBCA-0000000019FCDBCF
uint32_t __cdecl common::minet::KcpUtils::get_control_packet_len()
{
  return 20;
};

// Line 21: range 0000000019FCDBD0-0000000019FCDDFB
std::string *__fastcall common::minet::KcpUtils::making_control_packet[abi:cxx11](
        std::string *retstr,
        uint32_t head_magic,
        uint32_t tail_magic,
        uint32_t conv,
        uint32_t token,
        uint32_t data)
{
  std::string *v6; // rbx
  uint32_t control_packet_len; // eax
  unsigned __int32 v12; // r15d
  char v13; // dl
  unsigned __int32 v14; // r14d
  char *v15; // rdx
  char v16; // cl
  unsigned __int32 v17; // r13d
  std::string::size_type *p_M_string_length; // rdx
  char v19; // cl
  unsigned __int32 v20; // r12d
  char *v21; // rdx
  char v22; // cl
  unsigned __int32 v23; // ebp
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdx
  char v25; // cl

  v6 = retstr;
  control_packet_len = common::minet::KcpUtils::get_control_packet_len();
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_15;
  }
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  std::string::_M_construct(retstr, control_packet_len, 32LL);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8(retstr);
LABEL_16:
    __asan_report_store4(retstr);
LABEL_17:
    __asan_report_store4(v15);
LABEL_18:
    __asan_report_store4(p_M_string_length);
LABEL_19:
    __asan_report_store4(v21);
    goto LABEL_20;
  }
  retstr = (std::string *)retstr->_M_dataplus._M_p;
  v12 = _byteswap_ulong(head_magic);
  v13 = *(_BYTE *)(((unsigned __int64)v6->_M_dataplus._M_p >> 3) + 0x7FFF8000);
  if ( (char)(((__int64)v6->_M_dataplus._M_p & 7) + 3) >= v13 && v13 )
    goto LABEL_16;
  LODWORD(retstr->_M_dataplus._M_p) = v12;
  v14 = _byteswap_ulong(conv);
  v15 = (char *)&retstr->_M_dataplus._M_p + 4;
  v16 = *(_BYTE *)((((unsigned __int64)&retstr->_M_dataplus._M_p + 4) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)retstr + 4) & 7) + 3) >= v16 && v16 )
    goto LABEL_17;
  HIDWORD(retstr->_M_dataplus._M_p) = v14;
  v17 = _byteswap_ulong(token);
  p_M_string_length = &retstr->_M_string_length;
  v19 = *(_BYTE *)(((unsigned __int64)&retstr->_M_string_length >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)retstr + 8) & 7) + 3) >= v19 && v19 )
    goto LABEL_18;
  LODWORD(retstr->_M_string_length) = v17;
  v20 = _byteswap_ulong(data);
  v21 = (char *)&retstr->_M_string_length + 4;
  v22 = *(_BYTE *)((((unsigned __int64)&retstr->_M_string_length + 4) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)retstr + 12) & 7) + 3) >= v22 && v22 )
    goto LABEL_19;
  HIDWORD(retstr->_M_string_length) = v20;
  v23 = _byteswap_ulong(tail_magic);
  p_anon_0 = &retstr->_anon_0;
  v25 = *(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)retstr + 16) & 7) + 3) >= v25 && v25 )
  {
LABEL_20:
    __asan_report_store4(p_anon_0);
    JUMPOUT(0x19FCDD53LL);
  }
  *(_DWORD *)retstr->_anon_0._M_local_buf = v23;
  return v6;
};

// Line 59: range 0000000019FCDDFE-0000000019FCDE4F
uint32_t __fastcall common::minet::KcpUtils::grab_conv_from_control_packet(const char *data, size_t len)
{
  const char *v3; // rdi
  char v4; // dl

  if ( common::minet::KcpUtils::get_control_packet_len() == len )
  {
    v3 = data + 4;
    v4 = *(_BYTE *)(((unsigned __int64)(data + 4) >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)data + 4) & 7) + 3) < v4 || !v4 )
      return _byteswap_ulong(*((_DWORD *)data + 1));
    __asan_report_load4(v3);
  }
  return 0;
};

// Line 69: range 0000000019FCDE52-0000000019FCDEA3
uint32_t __fastcall common::minet::KcpUtils::grab_token_from_control_packet(const char *data, size_t len)
{
  const char *v3; // rdi
  char v4; // dl

  if ( common::minet::KcpUtils::get_control_packet_len() == len )
  {
    v3 = data + 8;
    v4 = *(_BYTE *)(((unsigned __int64)(data + 8) >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)data + 8) & 7) + 3) < v4 || !v4 )
      return _byteswap_ulong(*((_DWORD *)data + 2));
    __asan_report_load4(v3);
  }
  return 0;
};

// Line 79: range 0000000019FCDEA6-0000000019FCDEF7
uint32_t __fastcall common::minet::KcpUtils::grab_data_from_control_packet(const char *data, size_t len)
{
  const char *v3; // rdi
  char v4; // dl

  if ( common::minet::KcpUtils::get_control_packet_len() == len )
  {
    v3 = data + 12;
    v4 = *(_BYTE *)(((unsigned __int64)(data + 12) >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)data + 12) & 7) + 3) < v4 || !v4 )
      return _byteswap_ulong(*((_DWORD *)data + 3));
    __asan_report_load4(v3);
  }
  return 0;
};

// Line 89: range 0000000019FCDEFA-0000000019FCDF81
std::string *__fastcall common::minet::KcpUtils::making_connect_packet[abi:cxx11](
        std::string *retstr,
        uint32_t conv,
        uint32_t token,
        uint32_t data)
{
  if ( *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7)
    || *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store_n(retstr, 32LL);
    JUMPOUT(0x19FCDF69LL);
  }
  common::minet::KcpUtils::making_control_packet[abi:cxx11](retstr, 0xFFu, 0xFFFFFFFF, conv, token, data);
  return retstr;
};

// Line 99: range 0000000019FCDF82-0000000019FCE009
std::string *__fastcall common::minet::KcpUtils::making_send_back_conv_packet[abi:cxx11](
        std::string *retstr,
        uint32_t conv,
        uint32_t token,
        uint32_t data)
{
  if ( *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7)
    || *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store_n(retstr, 32LL);
    JUMPOUT(0x19FCDFF1LL);
  }
  common::minet::KcpUtils::making_control_packet[abi:cxx11](retstr, 0x145u, 0x14514545u, conv, token, data);
  return retstr;
};

// Line 109: range 0000000019FCE00A-0000000019FCE091
std::string *__fastcall common::minet::KcpUtils::making_disconnect_packet[abi:cxx11](
        std::string *retstr,
        uint32_t conv,
        uint32_t token,
        uint32_t data)
{
  if ( *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7)
    || *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store_n(retstr, 32LL);
    JUMPOUT(0x19FCE079LL);
  }
  common::minet::KcpUtils::making_control_packet[abi:cxx11](retstr, 0x194u, 0x19419494u, conv, token, data);
  return retstr;
};

// Line 118: range 0000000019FCE092-0000000019FCE0A9
void __cdecl GLOBAL__sub_I_connect_packet_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 118: range 0000000019FCDB7E-0000000019FCDBC8
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/connect_packet.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
    }
    __asan_after_dynamic_init();
  }
};
