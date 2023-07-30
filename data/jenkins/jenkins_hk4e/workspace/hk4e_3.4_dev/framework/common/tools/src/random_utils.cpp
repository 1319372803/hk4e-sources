// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/src/random_utils.cpp

// Line 31: range 0000000019B646C8-0000000019B648FD
void __cdecl common::tools::RandomUtils::init()
{
  std::forward_iterator_tag v0; // cl
  unsigned __int64 v1; // rbp
  _DWORD *v2; // rbx
  __int64 v3; // rax
  int v4; // r15d
  std::string v5; // [rsp+0h] [rbp-1518h] BYREF
  char v6[5368]; // [rsp+20h] [rbp-14F8h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(5312LL);
    if ( v3 )
      v1 = v3;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 5000 5 rd:32";
  *(_QWORD *)(v1 + 16) = common::tools::RandomUtils::init;
  v2 = (_DWORD *)(v1 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = 61937;
  v2[536862877] = -218103808;
  v2[536862878] = -202116109;
  v2[536862879] = -202116109;
  v2[536862880] = -202116109;
  v2[536862881] = -202116109;
  v2[536862882] = -202116109;
  v2[536862883] = -202116109;
  v2[536862884] = -202116109;
  v2[536862885] = -202116109;
  v5._M_dataplus._M_p = v5._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v5, &byte_1B5CF587[-7], byte_1B5CF587, v0);
  std::random_device::_M_init(v1 + 48, &v5);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v5._M_dataplus._M_p != &v5._anon_0 )
    operator delete(v5._M_dataplus._M_p);
  common::tools::RandomUtils::seed_ ^= (v1 + 48) ^ (unsigned int)std::random_device::_M_getval((std::random_device *)(v1 + 48));
  v4 = time(0LL);
  common::tools::RandomUtils::seed_ ^= v4 + syscall(186LL);
  std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>::seed(
    &common::tools::RandomUtils::rand_genatator_,
    common::tools::RandomUtils::seed_);
  std::random_device::_M_fini((std::random_device *)(v1 + 48));
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8274) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF827C) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8284) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF828C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8294) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_7(v1, 5312LL, v6);
  }
};

// Line 42: range 0000000019B649F2-0000000019B655AD
std::string *__fastcall common::tools::RandomUtils::randSimpleString[abi:cxx11](std::string *retstr, uint32_t len)
{
  void *v2; // rsp
  std::forward_iterator_tag v3; // cl
  char v5[31]; // [rsp+0h] [rbp-20h] BYREF
  char v6; // [rsp+1Fh] [rbp-1h] BYREF

  if ( !(_BYTE)`guard variable for'common::tools::RandomUtils::randSimpleString[abi:cxx11](unsigned int)::gen
    && __cxa_guard_acquire(&`guard variable for'common::tools::RandomUtils::randSimpleString[abi:cxx11](unsigned int)::gen) )
  {
    common::tools::RandomUtils::randSimpleString[abi:cxx11](unsigned int)::gen._eng = &common::tools::RandomUtils::rand_genatator_;
    common::tools::RandomUtils::randSimpleString[abi:cxx11](unsigned int)::gen._dist = (boost::random::variate_generator<std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>&,boost::random::uniform_smallint<int> >::distribution_type)0x7A00000061LL;
    __cxa_guard_release(&`guard variable for'common::tools::RandomUtils::randSimpleString[abi:cxx11](unsigned int)::gen);
  }
  v2 = alloca(len + 32LL - (len & 0x1F) + 88);
  __asan_alloca_poison(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0LL) + 32, len);
  std::generate_n<char *,unsigned int,std::reference_wrapper<boost::random::variate_generator<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul> &,boost::random::uniform_smallint<int>>>>(
    (char *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0LL) + 32),
    len,
    (std::reference_wrapper<boost::random::variate_generator<std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>&,boost::random::uniform_smallint<int> > >)&common::tools::RandomUtils::randSimpleString[abi:cxx11](unsigned int)::gen);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(retstr);
    JUMPOUT(0x19B64AE9LL);
  }
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  std::string::_M_construct<char const*>(
    retstr,
    (const char *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0LL) + 32),
    (const char *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0LL) + 32 + len),
    v3);
  __asan_allocas_unpoison(v5, v5);
  return retstr;
};

// Line 85: range 0000000019B655AF-0000000019B655C6
void __cdecl GLOBAL__sub_I_random_utils_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 85: range 0000000019B648FF-0000000019B649F1
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  float v2; // xmm1_4

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/random_utils.cpp");
    if ( __priority != 0xFFFF )
      goto LABEL_3;
    std::ios_base::Init::Init(&std::__ioinit);
    __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
    std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>::seed(
      &common::tools::RandomUtils::rand_genatator_,
      0x1571uLL);
    common::tools::RandomUtils::init();
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
    __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
    common::tools::RandomUtils::randomTestProbability(v2);
  }
};
