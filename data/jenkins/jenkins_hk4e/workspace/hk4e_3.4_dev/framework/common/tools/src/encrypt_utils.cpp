// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/src/encrypt_utils.cpp

// Line 24: range 0000000019B40DE8-0000000019B40DFE
uint64_t __cdecl common::tools::EncrynptTool::genSecretKeySeed()
{
  __int64 v0; // rax

  LODWORD(v0) = common::tools::RandomUtils::rand<unsigned int>();
  return (v0 << 32) | common::tools::TimeUtils::getNow();
};

// Line 70: range 0000000019B40A72-0000000019B40DE3
std::string *__fastcall common::tools::EncrynptTool::encrynpt(
        std::string *retstr,
        const std::string *data,
        const std::string *secret_key)
{
  std::forward_iterator_tag v3; // cl
  std::string *v5; // r13
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r15
  const std::string *p_M_string_length; // rdi
  __int64 v10; // rax
  std::string::size_type *v11; // rdi
  std::string::size_type M_string_length; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  char v15; // r8
  char v16; // al
  char v17; // dl
  char *v18; // rax
  void *p_anon_0; // rdi
  std::string::size_type v21; // r9
  uint32_t key_len; // [rsp+Ch] [rbp-ACh]
  char v23[152]; // [rsp+20h] [rbp-98h] BYREF

  v5 = (std::string *)data;
  v7 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_1(96LL);
    if ( v10 )
      v7 = v10;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 32 13 encrynpted:79";
  *(_QWORD *)(v7 + 16) = common::tools::EncrynptTool::encrynpt;
  v8 = v7 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&secret_key->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&secret_key->_M_string_length);
LABEL_11:
    __asan_report_store8(retstr);
    goto LABEL_12;
  }
  key_len = secret_key->_M_string_length;
  if ( key_len )
    goto LABEL_14;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
    goto LABEL_11;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  if ( !*(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
  {
    data = (const std::string *)data->_M_dataplus._M_p;
    p_M_string_length = (const std::string *)&v5->_M_string_length;
    if ( !*(_BYTE *)(((unsigned __int64)&v5->_M_string_length >> 3) + 0x7FFF8000) )
    {
      std::string::_M_construct<char *>(retstr, (char *)data, (char *)data + v5->_M_string_length, v3);
LABEL_36:
      if ( v23 != (char *)v7 )
        goto LABEL_47;
      *(_DWORD *)((v7 >> 3) + 0x7FFF8000) = 0;
      *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
      return retstr;
    }
    goto LABEL_13;
  }
LABEL_12:
  p_M_string_length = data;
  __asan_report_load8(data);
LABEL_13:
  __asan_report_load8(p_M_string_length);
LABEL_14:
  *(_QWORD *)(v7 + 32) = v7 + 48;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    v11 = (std::string::size_type *)v5;
    __asan_report_load8(v5);
    goto LABEL_18;
  }
  data = (const std::string *)v5->_M_dataplus._M_p;
  v11 = &v5->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v5->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(v11);
    goto LABEL_19;
  }
  std::string::_M_construct<char *>(
    (std::string *const)(v7 + 32),
    (char *)data,
    (char *)data + v5->_M_string_length,
    v3);
  M_string_length = v5->_M_string_length;
  LODWORD(data) = 0;
  while ( (unsigned int)data != M_string_length )
  {
    if ( *(_BYTE *)(((unsigned __int64)secret_key >> 3) + 0x7FFF8000) )
    {
LABEL_19:
      __asan_report_load8(secret_key);
LABEL_20:
      M_string_length = v13;
      v14 = __asan_report_load1(v13);
      goto LABEL_21;
    }
    v13 = (unsigned __int64)&secret_key->_M_dataplus._M_p[(unsigned int)data % key_len];
    v16 = *(_BYTE *)((v13 >> 3) + 0x7FFF8000);
    if ( v16 <= (char)(v13 & 7) && v16 )
      goto LABEL_20;
    v15 = *(_BYTE *)v13;
    v14 = *(_QWORD *)(v7 + 32) + (unsigned int)data;
    v17 = *(_BYTE *)((v14 >> 3) + 0x7FFF8000);
    if ( v17 <= ((*(_BYTE *)(v7 + 32) + (unsigned __int8)data) & 7) && v17 )
    {
      __asan_report_load1(v14);
      break;
    }
LABEL_21:
    *(_BYTE *)v14 ^= v15;
    LODWORD(data) = (_DWORD)data + 1;
  }
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(retstr);
LABEL_40:
    v21 = *(_QWORD *)(v7 + 56);
    if ( (*(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000) == 0
       || *(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000) > (((unsigned __int8)retstr + 16) & 7))
      && (*(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) == 0
       || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) > (((unsigned __int8)retstr + 31) & 7)) )
    {
      retstr->_anon_0._M_allocated_capacity = *(_QWORD *)(v7 + 48);
      *(&retstr->_anon_0._M_allocated_capacity + 1) = v21;
LABEL_34:
      p_anon_0 = &retstr->_M_string_length;
      if ( *(_BYTE *)(((unsigned __int64)&retstr->_M_string_length >> 3) + 0x7FFF8000) )
        goto LABEL_46;
      retstr->_M_string_length = *(_QWORD *)(v7 + 40);
      goto LABEL_36;
    }
    __asan_report_store_n(&retstr->_anon_0, 16LL);
LABEL_44:
    p_anon_0 = retstr;
    __asan_report_store8(retstr);
    goto LABEL_45;
  }
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  v18 = *(char **)(v7 + 32);
  if ( v18 == (char *)(v7 + 48) )
    goto LABEL_40;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
    goto LABEL_44;
  retstr->_M_dataplus._M_p = v18;
  p_anon_0 = &retstr->_anon_0;
  if ( !*(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000) )
  {
    retstr->_anon_0._M_allocated_capacity = *(_QWORD *)(v7 + 48);
    goto LABEL_34;
  }
LABEL_45:
  __asan_report_store8(p_anon_0);
LABEL_46:
  __asan_report_store8(p_anon_0);
LABEL_47:
  *(_QWORD *)v7 = 1172321806LL;
  *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
  return retstr;
};

// Line 88: range 0000000019B40DFF-0000000019B40E16
void __cdecl GLOBAL__sub_I_encrypt_utils_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 88: range 0000000019B4068C-0000000019B40A6F
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/encrypt_utils.cpp");
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
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
          JUMPOUT(0x19B4071FLL);
        }
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                             + 9;
      }
    }
    __asan_after_dynamic_init();
  }
};
