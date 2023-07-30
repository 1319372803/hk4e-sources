// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/base/src/net_utils.cpp

// Line 34: range 000000000C9F644C-000000000C9F66EF
int32_t __cdecl common::tools::NetUtils::init()
{
  const char *v0; // r13
  unsigned __int64 v1; // r12
  _DWORD *v2; // r14
  unsigned __int64 i; // rbx
  __int64 v4; // rax
  int32_t result; // eax
  unsigned __int64 v6; // rax
  char v7; // cl
  const char *v8; // rdx
  const char *v9; // rsi
  char *v10; // rdi
  char *v11; // rdi
  char v12; // bl
  char v13[184]; // [rsp+10h] [rbp-B8h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v1 = v4;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 17 head_addrs_ptr:44 64 32 12 card_name:52";
  *(_QWORD *)(v1 + 16) = common::tools::NetUtils::init;
  v2 = (_DWORD *)(v1 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -218959360;
  v2[536862723] = -202116109;
  if ( common::tools::NetUtils::inner_ip_int_ )
  {
    printf("can not recall init, skip this call");
    result = 0;
    goto LABEL_33;
  }
  *(_QWORD *)(v1 + 32) = 0LL;
  getifaddrs((struct ifaddrs **)(v1 + 32));
  for ( i = *(_QWORD *)(v1 + 32); ; i = *(_QWORD *)i )
  {
    if ( !i )
      goto LABEL_30;
    if ( *(_BYTE *)(((i + 24) >> 3) + 0x7FFF8000) )
    {
      v6 = __asan_report_load8(i + 24);
    }
    else
    {
      v6 = *(_QWORD *)(i + 24);
      if ( !v6 )
        goto LABEL_9;
      v7 = *(_BYTE *)((v6 >> 3) + 0x7FFF8000);
      if ( (char)((v6 & 7) + 1) >= v7 && v7 )
      {
        __asan_report_load2(*(_QWORD *)(i + 24));
        goto LABEL_17;
      }
    }
    if ( *(_WORD *)v6 != 17 )
      goto LABEL_9;
LABEL_17:
    if ( *(_BYTE *)(((i + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(i + 8);
LABEL_24:
      v8 = v0 - 1;
      goto LABEL_20;
    }
    v0 = *(const char **)(i + 8);
    *(_QWORD *)(v1 + 64) = v1 + 80;
    if ( !v0 )
      goto LABEL_24;
    v8 = &v0[strlen(v0)];
LABEL_20:
    v9 = v0;
    v0 = (const char *)(v1 + 64);
    std::string::_M_construct<char const*>((std::string *const)(v1 + 64), v9, v8, (std::forward_iterator_tag)v7);
    if ( (unsigned int)std::string::compare(v1 + 64, "lo") )
    {
      if ( !common::tools::NetUtils::getInnerIpByCardName(
              (const std::string *)(v1 + 64),
              &common::tools::NetUtils::inner_ip_str_[abi:cxx11]) )
        break;
    }
    v10 = *(char **)(v1 + 64);
    if ( v10 != (char *)(v1 + 80) )
      operator delete(v10);
LABEL_9:
    if ( *(_BYTE *)((i >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(i);
LABEL_30:
      v12 = 0;
      goto LABEL_31;
    }
  }
  v11 = *(char **)(v1 + 64);
  if ( v11 != (char *)(v1 + 80) )
    operator delete(v11);
  v12 = 1;
LABEL_31:
  freeifaddrs(*(struct ifaddrs **)(v1 + 32));
  if ( v12 )
  {
    common::tools::NetUtils::inner_ip_int_ = common::tools::NetUtils::inetAton(&common::tools::NetUtils::inner_ip_str_[abi:cxx11]);
    result = 0;
  }
  else
  {
    puts("fail to get inner ip");
    result = -1;
  }
LABEL_33:
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 95: range 000000000C9F61DE-000000000C9F624F
uint64_t __fastcall common::tools::NetUtils::ntohll(uint64_t num)
{
  return HIBYTE(num) | ((BYTE6(num) | ((BYTE5(num) | ((BYTE4(num) | ((BYTE3(num) | ((BYTE2(num) | ((BYTE1(num) | (unsigned __int64)(unsigned __int16)((_WORD)num << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
};

// Line 129: range 000000000C9F6250-000000000C9F627F
uint32_t __fastcall common::tools::NetUtils::inetAton(const std::string *ip_str)
{
  if ( !*(_BYTE *)(((unsigned __int64)ip_str >> 3) + 0x7FFF8000) )
    return inet_addr(ip_str->_M_dataplus._M_p);
  __asan_report_load8(ip_str);
  return common::tools::NetUtils::getInnerIpInt();
};

// Line 140: range 000000000C9F694C-000000000C9F69E1
std::string *__cdecl common::tools::NetUtils::getInnerIpStr[abi:cxx11](std::string *retstr)
{
  std::forward_iterator_tag v1; // cl
  __int64 v2; // rsi
  std::string::size_type *p_M_string_length; // rdi
  std::string *result; // rax

  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(retstr, v2);
    goto LABEL_6;
  }
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)&common::tools::NetUtils::inner_ip_str_[abi:cxx11] >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    p_M_string_length = (std::string::size_type *)&common::tools::NetUtils::inner_ip_str_[abi:cxx11];
    __asan_report_load8(&common::tools::NetUtils::inner_ip_str_[abi:cxx11]);
    goto LABEL_7;
  }
  p_M_string_length = &common::tools::NetUtils::inner_ip_str_[abi:cxx11]._M_string_length;
  if ( !*(_BYTE *)(((unsigned __int64)&common::tools::NetUtils::inner_ip_str_[abi:cxx11]._M_string_length >> 3)
                 + 0x7FFF8000) )
  {
    std::string::_M_construct<char *>(
      retstr,
      common::tools::NetUtils::inner_ip_str_[abi:cxx11]._M_dataplus._M_p,
      &common::tools::NetUtils::inner_ip_str_[abi:cxx11]._M_dataplus._M_p[common::tools::NetUtils::inner_ip_str_[abi:cxx11]._M_string_length],
      v1);
    return retstr;
  }
LABEL_7:
  __asan_report_load8(p_M_string_length);
  GLOBAL__sub_I_net_utils_cpp();
  return result;
};

// Line 146: range 000000000C9F6280-000000000C9F644A
int32_t __fastcall common::tools::NetUtils::getInnerIpByCardName(const std::string *card_name, std::string *ip_str)
{
  int v2; // r12d
  unsigned __int64 v3; // rbx
  _DWORD *v4; // rbp
  int v5; // eax
  int v6; // r14d
  char *v7; // r15
  size_t v8; // r8
  __int64 v10; // rax
  char v11[184]; // [rsp+10h] [rbp-B8h] BYREF

  v2 = (int)card_name;
  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_1(128LL);
    if ( v10 )
      v3 = v10;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 40 7 ifr:147";
  *(_QWORD *)(v3 + 16) = common::tools::NetUtils::getInnerIpByCardName;
  v4 = (_DWORD *)(v3 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)card_name >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(card_name);
    goto LABEL_13;
  }
  snprintf((char *)(v3 + 48), 0x10uLL, card_name->_M_dataplus._M_p);
  v5 = socket(2, 2, 0);
  v2 = v5;
  if ( v5 >= 0 )
  {
    v6 = ioctl(v5, 0x8915uLL, v3 + 48);
    if ( !v6 )
    {
      v7 = inet_ntoa(*(struct in_addr *)(v3 + 68));
      v8 = strlen(v7);
      if ( !*(_BYTE *)(((unsigned __int64)&ip_str->_M_string_length >> 3) + 0x7FFF8000) )
      {
        std::string::_M_replace(ip_str, 0LL, ip_str->_M_string_length, v7, v8);
        close(v2);
        goto LABEL_7;
      }
      __asan_report_load8(&ip_str->_M_string_length);
      goto LABEL_15;
    }
LABEL_13:
    close(v2);
    v6 = -1;
    goto LABEL_7;
  }
LABEL_15:
  v6 = -1;
LABEL_7:
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v6;
};

// Line 185: range 000000000C9F66F1-000000000C9F694A
// local variable allocation has failed, the output may be wrong!
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  __int64 v2; // rcx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdx
  std::string *p_M_string_length; // rdi

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/net_utils.cpp");
    if ( __priority != 0xFFFF )
    {
LABEL_3:
      __asan_after_dynamic_init();
      return;
    }
    if ( *(_BYTE *)(((unsigned __int64)&common::tools::NetUtils::inner_ip_str_[abi:cxx11] >> 3) + 0x7FFF8000) )
    {
      p_M_string_length = &common::tools::NetUtils::inner_ip_str_[abi:cxx11];
      __asan_report_store8(&common::tools::NetUtils::inner_ip_str_[abi:cxx11], *(_QWORD *)&__priority);
    }
    else
    {
      p_anon_0 = &common::tools::NetUtils::inner_ip_str_[abi:cxx11]._anon_0;
      common::tools::NetUtils::inner_ip_str_[abi:cxx11]._M_dataplus._M_p = common::tools::NetUtils::inner_ip_str_[abi:cxx11]._anon_0._M_local_buf;
      p_M_string_length = (std::string *)&common::tools::NetUtils::inner_ip_str_[abi:cxx11]._M_string_length;
      if ( !*(_BYTE *)(((unsigned __int64)&common::tools::NetUtils::inner_ip_str_[abi:cxx11]._M_string_length >> 3)
                     + 0x7FFF8000) )
      {
        common::tools::NetUtils::inner_ip_str_[abi:cxx11]._M_string_length = 0LL;
        p_M_string_length = (std::string *)&common::tools::NetUtils::inner_ip_str_[abi:cxx11]._anon_0;
        if ( *(char *)(((unsigned __int64)&common::tools::NetUtils::inner_ip_str_[abi:cxx11]._anon_0 >> 3) + 0x7FFF8000) >= 0 )
        {
          common::tools::NetUtils::inner_ip_str_[abi:cxx11]._anon_0._M_local_buf[0] = 0;
          __cxa_atexit(
            (void (__fastcall *)(void *))&std::string::~string,
            &common::tools::NetUtils::inner_ip_str_[abi:cxx11],
            &_dso_handle);
          if ( common::tools::NetUtils::init() )
          {
            puts("init NetUtils failed");
            __asan_handle_no_return("init NetUtils failed", &common::tools::NetUtils::inner_ip_str_[abi:cxx11]);
            exit(1);
          }
          goto LABEL_3;
        }
        goto LABEL_11;
      }
    }
    __asan_report_store8(p_M_string_length, *(_QWORD *)&__priority);
LABEL_11:
    __asan_report_store1(p_M_string_length, __priority, p_anon_0, v2);
    common::tools::NetUtils::inetNtoa[abi:cxx11](p_M_string_length, 0xFFFFu);
  }
};
