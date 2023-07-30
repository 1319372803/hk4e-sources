// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/include/random_utils.h

// Line 126: range 000000000CF53050-000000000CF530F9
unsigned int __cdecl common::tools::RandomUtils::rand<unsigned int>()
{
  unsigned int v0; // ebx
  unsigned int v1; // eax

  if ( !(_BYTE)`guard variable for'unsigned int common::tools::RandomUtils::rand<unsigned int>(void)::distribution
    && __cxa_guard_acquire(&`guard variable for'unsigned int common::tools::RandomUtils::rand<unsigned int>(void)::distribution) )
  {
    v0 = std::numeric_limits<unsigned int>::max();
    v1 = std::numeric_limits<unsigned int>::lowest();
    std::uniform_int_distribution<unsigned int>::uniform_int_distribution(
      &common::tools::RandomUtils::rand<unsigned int>(void)::distribution,
      v1,
      v0);
    __cxa_guard_release(&`guard variable for'unsigned int common::tools::RandomUtils::rand<unsigned int>(void)::distribution);
  }
  return std::uniform_int_distribution<unsigned int>::operator()<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>(
           &common::tools::RandomUtils::rand<unsigned int>(void)::distribution,
           &common::tools::RandomUtils::rand_genatator_);
};

// Line 133: range 000000000CF536C2-000000000CF5384D
unsigned int __cdecl common::tools::RandomUtils::rand<unsigned int>(uint32_t seed)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rcx
  unsigned int v3; // ebx
  unsigned int v4; // eax

  v1 = (unsigned __int64)&`guard variable for'unsigned int common::tools::RandomUtils::rand<unsigned int>(unsigned int)::rand_genatator
     + __readfsqword(0);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) != 0 && (char)(v1 & 7) >= *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v1);
  if ( !*(_BYTE *)v1 )
  {
    std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>::mersenne_twister_engine((std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *const)((char *)&common::tools::RandomUtils::rand<unsigned int>(unsigned int)::rand_genatator + __readfsqword(0)));
    v2 = (unsigned __int64)&`guard variable for'unsigned int common::tools::RandomUtils::rand<unsigned int>(unsigned int)::rand_genatator
       + __readfsqword(0);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)(v2 & 7) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_store1(v2);
    *(_BYTE *)v2 = 1;
  }
  std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>::seed(
    (std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *const)((char *)&common::tools::RandomUtils::rand<unsigned int>(unsigned int)::rand_genatator + __readfsqword(0)),
    seed);
  if ( !(_BYTE)`guard variable for'unsigned int common::tools::RandomUtils::rand<unsigned int>(unsigned int)::distribution
    && __cxa_guard_acquire(&`guard variable for'unsigned int common::tools::RandomUtils::rand<unsigned int>(unsigned int)::distribution) )
  {
    v3 = std::numeric_limits<unsigned int>::max();
    v4 = std::numeric_limits<unsigned int>::lowest();
    std::uniform_int_distribution<unsigned int>::uniform_int_distribution(
      &common::tools::RandomUtils::rand<unsigned int>(unsigned int)::distribution,
      v4,
      v3);
    __cxa_guard_release(&`guard variable for'unsigned int common::tools::RandomUtils::rand<unsigned int>(unsigned int)::distribution);
  }
  return std::uniform_int_distribution<unsigned int>::operator()<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>(
           &common::tools::RandomUtils::rand<unsigned int>(unsigned int)::distribution,
           (std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *)((char *)&common::tools::RandomUtils::rand<unsigned int>(unsigned int)::rand_genatator + __readfsqword(0)));
};

// Line 143: range 0000000013029AB0-0000000013029B32
unsigned int __cdecl common::tools::RandomUtils::rand<unsigned int>(std::mt19937 *rand_genatator)
{
  unsigned int v1; // ebx
  unsigned int v2; // eax

  if ( !(_BYTE)`guard variable for'unsigned int common::tools::RandomUtils::rand<unsigned int>(std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul> &)::distribution
    && __cxa_guard_acquire(&`guard variable for'unsigned int common::tools::RandomUtils::rand<unsigned int>(std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul> &)::distribution) )
  {
    v1 = std::numeric_limits<unsigned int>::max();
    v2 = std::numeric_limits<unsigned int>::lowest();
    std::uniform_int_distribution<unsigned int>::uniform_int_distribution(
      &common::tools::RandomUtils::rand<unsigned int>(std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul> &)::distribution,
      v2,
      v1);
    __cxa_guard_release(&`guard variable for'unsigned int common::tools::RandomUtils::rand<unsigned int>(std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul> &)::distribution);
  }
  return std::uniform_int_distribution<unsigned int>::operator()<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>(
           &common::tools::RandomUtils::rand<unsigned int>(std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul> &)::distribution,
           rand_genatator);
};

// Line 163: range 0000000014E2D6F2-0000000014E2D7DE
__int64 __fastcall common::tools::RandomUtils::rand<long>(__int64 min, __int64 max)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  unsigned __int64 v4; // r12
  __int64 result; // rax
  __int64 vars0[4]; // [rsp+0h] [rbp+0h] BYREF
  std::uniform_int_distribution<long int> _20[2]; // [rsp+20h] [rbp+20h] BYREF

  v2 = min;
  v3 = max;
  if ( _asan_option_detect_stack_use_after_return )
    __asan_stack_malloc_0(64LL);
  vars0[0] = 1102416563LL;
  vars0[1] = (__int64)"1 32 16 16 distribution:169";
  vars0[2] = (__int64)common::tools::RandomUtils::rand<long>;
  v4 = (unsigned __int64)vars0 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( min == max )
  {
    result = min;
  }
  else
  {
    if ( min <= max )
    {
      v3 = min;
      v2 = max;
    }
    _20[0]._M_param._M_a = v3;
    _20[0]._M_param._M_b = v2;
    result = std::uniform_int_distribution<long>::operator()<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>(
               _20,
               &common::tools::RandomUtils::rand_genatator_,
               &_20[0]._M_param);
  }
  *(_QWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8000) = 0LL;
  return result;
};

// Line 163: range 000000000CE76E38-000000000CE76FA8
float __fastcall common::tools::RandomUtils::rand<float>(float min, float max)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  float v5; // eax
  __m128i v6; // xmm0
  float result; // xmm0_4
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 7 min:163 48 4 7 max:163 64 8 16 distribution:169";
  *(_QWORD *)(v2 + 16) = common::tools::RandomUtils::rand<float>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  *(float *)(v2 + 32) = min;
  *(float *)(v2 + 48) = max;
  if ( *(float *)(v2 + 32) == *(float *)(v2 + 48) )
  {
    v5 = *(float *)(v2 + 32);
  }
  else
  {
    if ( *(float *)(v2 + 32) > *(float *)(v2 + 48) )
      std::swap<float>((float *)(v2 + 32), (float *)(v2 + 48));
    v6 = _mm_cvtsi32_si128(*(_DWORD *)(v2 + 32));
    std::uniform_real_distribution<float>::uniform_real_distribution(
      (std::uniform_real_distribution<float> *const)(v2 + 64),
      *(float *)v6.m128i_i32,
      *(float *)(v2 + 48));
    *(float *)v6.m128i_i32 = std::uniform_real_distribution<float>::operator()<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>(
                               (std::uniform_real_distribution<float> *const)(v2 + 64),
                               &common::tools::RandomUtils::rand_genatator_);
    v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  }
  result = v5;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 163: range 00000000148052C8-000000001480540E
std::uniform_int_distribution<int>::result_type __fastcall common::tools::RandomUtils::rand<int>(int min, int max)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::uniform_int_distribution<int>::result_type result; // eax
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 7 min:163 48 4 7 max:163 64 8 16 distribution:169";
  *(_QWORD *)(v2 + 16) = common::tools::RandomUtils::rand<int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 32) = min;
  *(_DWORD *)(v2 + 48) = max;
  if ( *(_DWORD *)(v2 + 32) == *(_DWORD *)(v2 + 48) )
  {
    result = *(_DWORD *)(v2 + 32);
  }
  else
  {
    if ( *(_DWORD *)(v2 + 32) > *(_DWORD *)(v2 + 48) )
      std::swap<int>((int *)(v2 + 32), (int *)(v2 + 48));
    std::uniform_int_distribution<int>::uniform_int_distribution(
      (std::uniform_int_distribution<int> *const)(v2 + 64),
      *(_DWORD *)(v2 + 32),
      *(_DWORD *)(v2 + 48));
    result = std::uniform_int_distribution<int>::operator()<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>(
               (std::uniform_int_distribution<int> *const)(v2 + 64),
               &common::tools::RandomUtils::rand_genatator_);
  }
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 163: range 000000000CAAF1B8-000000000CAAF2A0
unsigned int __fastcall common::tools::RandomUtils::rand<unsigned int>(unsigned int min, unsigned int max)
{
  unsigned int v2; // ebx
  unsigned int v3; // r14d
  unsigned __int64 v4; // r12
  unsigned int result; // eax
  __int64 vars0[4]; // [rsp+0h] [rbp+0h] BYREF
  std::uniform_int_distribution<unsigned int> _20[4]; // [rsp+20h] [rbp+20h] BYREF

  v2 = min;
  v3 = max;
  if ( _asan_option_detect_stack_use_after_return )
    __asan_stack_malloc_0(64LL);
  vars0[0] = 1102416563LL;
  vars0[1] = (__int64)"1 32 8 16 distribution:169";
  vars0[2] = (__int64)common::tools::RandomUtils::rand<unsigned int>;
  v4 = (unsigned __int64)vars0 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( min == max )
  {
    result = min;
  }
  else
  {
    if ( min <= max )
    {
      v3 = min;
      v2 = max;
    }
    _20[0]._M_param._M_a = v3;
    _20[0]._M_param._M_b = v2;
    result = std::uniform_int_distribution<unsigned int>::operator()<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>(
               _20,
               &common::tools::RandomUtils::rand_genatator_,
               &_20[0]._M_param);
  }
  *(_QWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8000) = 0LL;
  return result;
};

// Line 174: range 0000000013029832-000000001302997F
std::uniform_int_distribution<unsigned int>::result_type __fastcall common::tools::RandomUtils::rand<unsigned int>(
        unsigned int min,
        unsigned int max,
        std::mt19937 *rand_genatator)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::uniform_int_distribution<unsigned int>::result_type result; // eax
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 7 min:174 48 4 7 max:174 64 8 16 distribution:180";
  *(_QWORD *)(v3 + 16) = common::tools::RandomUtils::rand<unsigned int>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 32) = min;
  *(_DWORD *)(v3 + 48) = max;
  if ( *(_DWORD *)(v3 + 32) == *(_DWORD *)(v3 + 48) )
  {
    result = *(_DWORD *)(v3 + 32);
  }
  else
  {
    if ( *(_DWORD *)(v3 + 32) > *(_DWORD *)(v3 + 48) )
      std::swap<unsigned int>((unsigned int *)(v3 + 32), (unsigned int *)(v3 + 48));
    std::uniform_int_distribution<unsigned int>::uniform_int_distribution(
      (std::uniform_int_distribution<unsigned int> *const)(v3 + 64),
      *(_DWORD *)(v3 + 32),
      *(_DWORD *)(v3 + 48));
    result = std::uniform_int_distribution<unsigned int>::operator()<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>(
               (std::uniform_int_distribution<unsigned int> *const)(v3 + 64),
               rand_genatator);
  }
  if ( v8 == (char *)v3 )
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
  return result;
};

// Line 232: range 0000000013C6D792-0000000013C6DD98
int32_t __cdecl common::tools::RandomUtils::weightSelectOne<data::BoredActionPriorityExcelConfig,unsigned int data::BoredActionPriorityExcelConfig::*>(
        const std::vector<data::BoredActionPriorityExcelConfig> *input_vec,
        uint32_t *select_idx,
        unsigned int *member,
        uint32_t random_seed)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned __int64 v7; // rcx
  common::tools::RandomUtils::weightSelectOne<data::BoredActionPriorityExcelConfig,unsigned int data::BoredActionPriorityExcelConfig::*>::U *v8; // rcx
  char v9; // al
  int32_t result; // eax
  unsigned int *v11; // rcx
  uint32_t v12; // edi
  unsigned __int64 v13; // rcx
  common::tools::RandomUtils::weightSelectOne<data::BoredActionPriorityExcelConfig,unsigned int data::BoredActionPriorityExcelConfig::*>::U sum_weight; // [rsp+24h] [rbp-DCh]
  unsigned int rand_weight; // [rsp+28h] [rbp-D8h]
  common::tools::RandomUtils::weightSelectOne<data::BoredActionPriorityExcelConfig,unsigned int data::BoredActionPriorityExcelConfig::*>::U new_sum_weight; // [rsp+2Ch] [rbp-D4h]
  size_t idx; // [rsp+30h] [rbp-D0h]
  size_t idx_0; // [rsp+38h] [rbp-C8h]
  char v21[192]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = common::tools::RandomUtils::weightSelectOne<data::BoredActionPriorityExcelConfig,unsigned int data::BoredActionPriorityExcelConfig::*>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862722] = -218959118;
  v6[536862724] = -202116109;
  sum_weight = 0;
  for ( idx = 0LL; idx < std::vector<data::BoredActionPriorityExcelConfig>::size(input_vec); ++idx )
  {
    v7 = (unsigned __int64)member
       + (_QWORD)std::vector<data::BoredActionPriorityExcelConfig>::operator[](input_vec, idx);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)((v7 & 7) + 3) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v7);
    new_sum_weight = *(_DWORD *)v7 + sum_weight;
    if ( new_sum_weight < sum_weight )
      goto LABEL_12;
    v8 = (unsigned int *)((char *)member
                        + (_QWORD)std::vector<data::BoredActionPriorityExcelConfig>::operator[](input_vec, idx));
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    if ( new_sum_weight >= *v8 )
      v9 = 0;
    else
LABEL_12:
      v9 = 1;
    if ( v9 )
    {
      if ( *(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 32, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 32),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/tools/include/random_utils.h",
        "weightSelectOne",
        243);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 32), "sum weight overflow.");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 32));
      result = -1;
      goto LABEL_40;
    }
    sum_weight = new_sum_weight;
  }
  if ( sum_weight )
  {
    if ( *(_BYTE *)(((unsigned __int64)select_idx >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)select_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)select_idx >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(select_idx);
    }
    *select_idx = 0;
    if ( random_seed )
      rand_weight = common::tools::RandomUtils::rand<unsigned int>(random_seed) % sum_weight;
    else
      rand_weight = common::tools::RandomUtils::rand<unsigned int>() % sum_weight;
    for ( idx_0 = 0LL; idx_0 < std::vector<data::BoredActionPriorityExcelConfig>::size(input_vec); ++idx_0 )
    {
      v11 = (unsigned int *)((char *)member
                           + (_QWORD)std::vector<data::BoredActionPriorityExcelConfig>::operator[](input_vec, idx_0));
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      if ( rand_weight < *v11 )
      {
        v12 = idx_0;
        if ( *(_BYTE *)(((unsigned __int64)select_idx >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)select_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)select_idx >> 3) + 0x7FFF8000) )
        {
          v12 = (unsigned int)select_idx;
          __asan_report_store4(select_idx);
        }
        *select_idx = v12;
        break;
      }
      v13 = (unsigned __int64)member
          + (_QWORD)std::vector<data::BoredActionPriorityExcelConfig>::operator[](input_vec, idx_0);
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0 && (char)((v13 & 7) + 3) >= *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        __asan_report_load4(v13);
      rand_weight -= *(_DWORD *)v13;
    }
    result = 0;
  }
  else
  {
    if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/random_utils.h",
      "weightSelectOne",
      251);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 96), "sum weight is zero.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
    result = -1;
  }
LABEL_40:
  if ( v21 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 232: range 0000000013C6E218-0000000013C6E81E
int32_t __cdecl common::tools::RandomUtils::weightSelectOne<data::BoredMonsterConfig,unsigned int data::BoredMonsterConfig::*>(
        const std::vector<data::BoredMonsterConfig> *input_vec,
        uint32_t *select_idx,
        unsigned int *member,
        uint32_t random_seed)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned __int64 v7; // rcx
  common::tools::RandomUtils::weightSelectOne<data::BoredMonsterConfig,unsigned int data::BoredMonsterConfig::*>::U *v8; // rcx
  char v9; // al
  int32_t result; // eax
  unsigned int *v11; // rcx
  uint32_t v12; // edi
  unsigned __int64 v13; // rcx
  common::tools::RandomUtils::weightSelectOne<data::BoredMonsterConfig,unsigned int data::BoredMonsterConfig::*>::U sum_weight; // [rsp+24h] [rbp-DCh]
  unsigned int rand_weight; // [rsp+28h] [rbp-D8h]
  common::tools::RandomUtils::weightSelectOne<data::BoredMonsterConfig,unsigned int data::BoredMonsterConfig::*>::U new_sum_weight; // [rsp+2Ch] [rbp-D4h]
  size_t idx; // [rsp+30h] [rbp-D0h]
  size_t idx_0; // [rsp+38h] [rbp-C8h]
  char v21[192]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = common::tools::RandomUtils::weightSelectOne<data::BoredMonsterConfig,unsigned int data::BoredMonsterConfig::*>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862722] = -218959118;
  v6[536862724] = -202116109;
  sum_weight = 0;
  for ( idx = 0LL; idx < std::vector<data::BoredMonsterConfig>::size(input_vec); ++idx )
  {
    v7 = (unsigned __int64)member + (_QWORD)std::vector<data::BoredMonsterConfig>::operator[](input_vec, idx);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)((v7 & 7) + 3) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v7);
    new_sum_weight = *(_DWORD *)v7 + sum_weight;
    if ( new_sum_weight < sum_weight )
      goto LABEL_12;
    v8 = (unsigned int *)((char *)member + (_QWORD)std::vector<data::BoredMonsterConfig>::operator[](input_vec, idx));
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    if ( new_sum_weight >= *v8 )
      v9 = 0;
    else
LABEL_12:
      v9 = 1;
    if ( v9 )
    {
      if ( *(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 32, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 32),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/tools/include/random_utils.h",
        "weightSelectOne",
        243);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 32), "sum weight overflow.");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 32));
      result = -1;
      goto LABEL_40;
    }
    sum_weight = new_sum_weight;
  }
  if ( sum_weight )
  {
    if ( *(_BYTE *)(((unsigned __int64)select_idx >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)select_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)select_idx >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(select_idx);
    }
    *select_idx = 0;
    if ( random_seed )
      rand_weight = common::tools::RandomUtils::rand<unsigned int>(random_seed) % sum_weight;
    else
      rand_weight = common::tools::RandomUtils::rand<unsigned int>() % sum_weight;
    for ( idx_0 = 0LL; idx_0 < std::vector<data::BoredMonsterConfig>::size(input_vec); ++idx_0 )
    {
      v11 = (unsigned int *)((char *)member + (_QWORD)std::vector<data::BoredMonsterConfig>::operator[](
                                                        input_vec,
                                                        idx_0));
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      if ( rand_weight < *v11 )
      {
        v12 = idx_0;
        if ( *(_BYTE *)(((unsigned __int64)select_idx >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)select_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)select_idx >> 3) + 0x7FFF8000) )
        {
          v12 = (unsigned int)select_idx;
          __asan_report_store4(select_idx);
        }
        *select_idx = v12;
        break;
      }
      v13 = (unsigned __int64)member + (_QWORD)std::vector<data::BoredMonsterConfig>::operator[](input_vec, idx_0);
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0 && (char)((v13 & 7) + 3) >= *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        __asan_report_load4(v13);
      rand_weight -= *(_DWORD *)v13;
    }
    result = 0;
  }
  else
  {
    if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/random_utils.h",
      "weightSelectOne",
      251);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 96), "sum weight is zero.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
    result = -1;
  }
LABEL_40:
  if ( v21 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 232: range 0000000013C83C3E-0000000013C84244
int32_t __cdecl common::tools::RandomUtils::weightSelectOne<data::EnvironmentWeightType,unsigned int data::EnvironmentWeightType::*>(
        const std::vector<data::EnvironmentWeightType> *input_vec,
        uint32_t *select_idx,
        unsigned int *member,
        uint32_t random_seed)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned __int64 v7; // rcx
  common::tools::RandomUtils::weightSelectOne<data::EnvironmentWeightType,unsigned int data::EnvironmentWeightType::*>::U *v8; // rcx
  char v9; // al
  int32_t result; // eax
  unsigned int *v11; // rcx
  uint32_t v12; // edi
  unsigned __int64 v13; // rcx
  common::tools::RandomUtils::weightSelectOne<data::EnvironmentWeightType,unsigned int data::EnvironmentWeightType::*>::U sum_weight; // [rsp+24h] [rbp-DCh]
  unsigned int rand_weight; // [rsp+28h] [rbp-D8h]
  common::tools::RandomUtils::weightSelectOne<data::EnvironmentWeightType,unsigned int data::EnvironmentWeightType::*>::U new_sum_weight; // [rsp+2Ch] [rbp-D4h]
  size_t idx; // [rsp+30h] [rbp-D0h]
  size_t idx_0; // [rsp+38h] [rbp-C8h]
  char v21[192]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = common::tools::RandomUtils::weightSelectOne<data::EnvironmentWeightType,unsigned int data::EnvironmentWeightType::*>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862722] = -218959118;
  v6[536862724] = -202116109;
  sum_weight = 0;
  for ( idx = 0LL; idx < std::vector<data::EnvironmentWeightType>::size(input_vec); ++idx )
  {
    v7 = (unsigned __int64)member + (_QWORD)std::vector<data::EnvironmentWeightType>::operator[](input_vec, idx);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)((v7 & 7) + 3) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v7);
    new_sum_weight = *(_DWORD *)v7 + sum_weight;
    if ( new_sum_weight < sum_weight )
      goto LABEL_12;
    v8 = (unsigned int *)((char *)member + (_QWORD)std::vector<data::EnvironmentWeightType>::operator[](input_vec, idx));
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    if ( new_sum_weight >= *v8 )
      v9 = 0;
    else
LABEL_12:
      v9 = 1;
    if ( v9 )
    {
      if ( *(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 32, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 32),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/tools/include/random_utils.h",
        "weightSelectOne",
        243);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 32), "sum weight overflow.");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 32));
      result = -1;
      goto LABEL_40;
    }
    sum_weight = new_sum_weight;
  }
  if ( sum_weight )
  {
    if ( *(_BYTE *)(((unsigned __int64)select_idx >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)select_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)select_idx >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(select_idx);
    }
    *select_idx = 0;
    if ( random_seed )
      rand_weight = common::tools::RandomUtils::rand<unsigned int>(random_seed) % sum_weight;
    else
      rand_weight = common::tools::RandomUtils::rand<unsigned int>() % sum_weight;
    for ( idx_0 = 0LL; idx_0 < std::vector<data::EnvironmentWeightType>::size(input_vec); ++idx_0 )
    {
      v11 = (unsigned int *)((char *)member
                           + (_QWORD)std::vector<data::EnvironmentWeightType>::operator[](input_vec, idx_0));
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      if ( rand_weight < *v11 )
      {
        v12 = idx_0;
        if ( *(_BYTE *)(((unsigned __int64)select_idx >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)select_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)select_idx >> 3) + 0x7FFF8000) )
        {
          v12 = (unsigned int)select_idx;
          __asan_report_store4(select_idx);
        }
        *select_idx = v12;
        break;
      }
      v13 = (unsigned __int64)member + (_QWORD)std::vector<data::EnvironmentWeightType>::operator[](input_vec, idx_0);
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0 && (char)((v13 & 7) + 3) >= *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        __asan_report_load4(v13);
      rand_weight -= *(_DWORD *)v13;
    }
    result = 0;
  }
  else
  {
    if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/random_utils.h",
      "weightSelectOne",
      251);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 96), "sum weight is zero.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
    result = -1;
  }
LABEL_40:
  if ( v21 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 232: range 0000000014807D5A-0000000014808360
int32_t __cdecl common::tools::RandomUtils::weightSelectOne<data::ReliquaryAffixExcelConfig,unsigned int data::ReliquaryAffixExcelConfig::*>(
        const std::vector<data::ReliquaryAffixExcelConfig> *input_vec,
        uint32_t *select_idx,
        unsigned int *member,
        uint32_t random_seed)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned __int64 v7; // rcx
  common::tools::RandomUtils::weightSelectOne<data::ReliquaryAffixExcelConfig,unsigned int data::ReliquaryAffixExcelConfig::*>::U *v8; // rcx
  char v9; // al
  int32_t result; // eax
  unsigned int *v11; // rcx
  uint32_t v12; // edi
  unsigned __int64 v13; // rcx
  common::tools::RandomUtils::weightSelectOne<data::ReliquaryAffixExcelConfig,unsigned int data::ReliquaryAffixExcelConfig::*>::U sum_weight; // [rsp+24h] [rbp-DCh]
  unsigned int rand_weight; // [rsp+28h] [rbp-D8h]
  common::tools::RandomUtils::weightSelectOne<data::ReliquaryAffixExcelConfig,unsigned int data::ReliquaryAffixExcelConfig::*>::U new_sum_weight; // [rsp+2Ch] [rbp-D4h]
  size_t idx; // [rsp+30h] [rbp-D0h]
  size_t idx_0; // [rsp+38h] [rbp-C8h]
  char v21[192]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = common::tools::RandomUtils::weightSelectOne<data::ReliquaryAffixExcelConfig,unsigned int data::ReliquaryAffixExcelConfig::*>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862722] = -218959118;
  v6[536862724] = -202116109;
  sum_weight = 0;
  for ( idx = 0LL; idx < std::vector<data::ReliquaryAffixExcelConfig>::size(input_vec); ++idx )
  {
    v7 = (unsigned __int64)member + (_QWORD)std::vector<data::ReliquaryAffixExcelConfig>::operator[](input_vec, idx);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)((v7 & 7) + 3) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v7);
    new_sum_weight = *(_DWORD *)v7 + sum_weight;
    if ( new_sum_weight < sum_weight )
      goto LABEL_12;
    v8 = (unsigned int *)((char *)member
                        + (_QWORD)std::vector<data::ReliquaryAffixExcelConfig>::operator[](input_vec, idx));
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    if ( new_sum_weight >= *v8 )
      v9 = 0;
    else
LABEL_12:
      v9 = 1;
    if ( v9 )
    {
      if ( *(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 32, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 32),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/tools/include/random_utils.h",
        "weightSelectOne",
        243);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 32), "sum weight overflow.");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 32));
      result = -1;
      goto LABEL_40;
    }
    sum_weight = new_sum_weight;
  }
  if ( sum_weight )
  {
    if ( *(_BYTE *)(((unsigned __int64)select_idx >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)select_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)select_idx >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(select_idx);
    }
    *select_idx = 0;
    if ( random_seed )
      rand_weight = common::tools::RandomUtils::rand<unsigned int>(random_seed) % sum_weight;
    else
      rand_weight = common::tools::RandomUtils::rand<unsigned int>() % sum_weight;
    for ( idx_0 = 0LL; idx_0 < std::vector<data::ReliquaryAffixExcelConfig>::size(input_vec); ++idx_0 )
    {
      v11 = (unsigned int *)((char *)member
                           + (_QWORD)std::vector<data::ReliquaryAffixExcelConfig>::operator[](input_vec, idx_0));
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      if ( rand_weight < *v11 )
      {
        v12 = idx_0;
        if ( *(_BYTE *)(((unsigned __int64)select_idx >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)select_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)select_idx >> 3) + 0x7FFF8000) )
        {
          v12 = (unsigned int)select_idx;
          __asan_report_store4(select_idx);
        }
        *select_idx = v12;
        break;
      }
      v13 = (unsigned __int64)member
          + (_QWORD)std::vector<data::ReliquaryAffixExcelConfig>::operator[](input_vec, idx_0);
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0 && (char)((v13 & 7) + 3) >= *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        __asan_report_load4(v13);
      rand_weight -= *(_DWORD *)v13;
    }
    result = 0;
  }
  else
  {
    if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/random_utils.h",
      "weightSelectOne",
      251);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 96), "sum weight is zero.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
    result = -1;
  }
LABEL_40:
  if ( v21 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 232: range 0000000014806890-0000000014806E96
int32_t __cdecl common::tools::RandomUtils::weightSelectOne<data::ReliquaryMainPropExcelConfig,unsigned int data::ReliquaryMainPropExcelConfig::*>(
        const std::vector<data::ReliquaryMainPropExcelConfig> *input_vec,
        uint32_t *select_idx,
        unsigned int *member,
        uint32_t random_seed)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned __int64 v7; // rcx
  common::tools::RandomUtils::weightSelectOne<data::ReliquaryMainPropExcelConfig,unsigned int data::ReliquaryMainPropExcelConfig::*>::U *v8; // rcx
  char v9; // al
  int32_t result; // eax
  unsigned int *v11; // rcx
  uint32_t v12; // edi
  unsigned __int64 v13; // rcx
  common::tools::RandomUtils::weightSelectOne<data::ReliquaryMainPropExcelConfig,unsigned int data::ReliquaryMainPropExcelConfig::*>::U sum_weight; // [rsp+24h] [rbp-DCh]
  unsigned int rand_weight; // [rsp+28h] [rbp-D8h]
  common::tools::RandomUtils::weightSelectOne<data::ReliquaryMainPropExcelConfig,unsigned int data::ReliquaryMainPropExcelConfig::*>::U new_sum_weight; // [rsp+2Ch] [rbp-D4h]
  size_t idx; // [rsp+30h] [rbp-D0h]
  size_t idx_0; // [rsp+38h] [rbp-C8h]
  char v21[192]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = common::tools::RandomUtils::weightSelectOne<data::ReliquaryMainPropExcelConfig,unsigned int data::ReliquaryMainPropExcelConfig::*>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862722] = -218959118;
  v6[536862724] = -202116109;
  sum_weight = 0;
  for ( idx = 0LL; idx < std::vector<data::ReliquaryMainPropExcelConfig>::size(input_vec); ++idx )
  {
    v7 = (unsigned __int64)member + (_QWORD)std::vector<data::ReliquaryMainPropExcelConfig>::operator[](input_vec, idx);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)((v7 & 7) + 3) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v7);
    new_sum_weight = *(_DWORD *)v7 + sum_weight;
    if ( new_sum_weight < sum_weight )
      goto LABEL_12;
    v8 = (unsigned int *)((char *)member
                        + (_QWORD)std::vector<data::ReliquaryMainPropExcelConfig>::operator[](input_vec, idx));
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    if ( new_sum_weight >= *v8 )
      v9 = 0;
    else
LABEL_12:
      v9 = 1;
    if ( v9 )
    {
      if ( *(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 32, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 32),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/tools/include/random_utils.h",
        "weightSelectOne",
        243);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 32), "sum weight overflow.");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 32));
      result = -1;
      goto LABEL_40;
    }
    sum_weight = new_sum_weight;
  }
  if ( sum_weight )
  {
    if ( *(_BYTE *)(((unsigned __int64)select_idx >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)select_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)select_idx >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(select_idx);
    }
    *select_idx = 0;
    if ( random_seed )
      rand_weight = common::tools::RandomUtils::rand<unsigned int>(random_seed) % sum_weight;
    else
      rand_weight = common::tools::RandomUtils::rand<unsigned int>() % sum_weight;
    for ( idx_0 = 0LL; idx_0 < std::vector<data::ReliquaryMainPropExcelConfig>::size(input_vec); ++idx_0 )
    {
      v11 = (unsigned int *)((char *)member
                           + (_QWORD)std::vector<data::ReliquaryMainPropExcelConfig>::operator[](input_vec, idx_0));
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      if ( rand_weight < *v11 )
      {
        v12 = idx_0;
        if ( *(_BYTE *)(((unsigned __int64)select_idx >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)select_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)select_idx >> 3) + 0x7FFF8000) )
        {
          v12 = (unsigned int)select_idx;
          __asan_report_store4(select_idx);
        }
        *select_idx = v12;
        break;
      }
      v13 = (unsigned __int64)member
          + (_QWORD)std::vector<data::ReliquaryMainPropExcelConfig>::operator[](input_vec, idx_0);
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0 && (char)((v13 & 7) + 3) >= *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        __asan_report_load4(v13);
      rand_weight -= *(_DWORD *)v13;
    }
    result = 0;
  }
  else
  {
    if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/random_utils.h",
      "weightSelectOne",
      251);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 96), "sum weight is zero.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
    result = -1;
  }
LABEL_40:
  if ( v21 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 232: range 0000000014808430-0000000014808A36
int32_t __cdecl common::tools::RandomUtils::weightSelectOne<data::ReliquaryPowerupExcelConfig,unsigned int data::ReliquaryPowerupExcelConfig::*>(
        const std::vector<data::ReliquaryPowerupExcelConfig> *input_vec,
        uint32_t *select_idx,
        unsigned int *member,
        uint32_t random_seed)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned __int64 v7; // rcx
  common::tools::RandomUtils::weightSelectOne<data::ReliquaryPowerupExcelConfig,unsigned int data::ReliquaryPowerupExcelConfig::*>::U *v8; // rcx
  char v9; // al
  int32_t result; // eax
  unsigned int *v11; // rcx
  uint32_t v12; // edi
  unsigned __int64 v13; // rcx
  common::tools::RandomUtils::weightSelectOne<data::ReliquaryPowerupExcelConfig,unsigned int data::ReliquaryPowerupExcelConfig::*>::U sum_weight; // [rsp+24h] [rbp-DCh]
  unsigned int rand_weight; // [rsp+28h] [rbp-D8h]
  common::tools::RandomUtils::weightSelectOne<data::ReliquaryPowerupExcelConfig,unsigned int data::ReliquaryPowerupExcelConfig::*>::U new_sum_weight; // [rsp+2Ch] [rbp-D4h]
  size_t idx; // [rsp+30h] [rbp-D0h]
  size_t idx_0; // [rsp+38h] [rbp-C8h]
  char v21[192]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = common::tools::RandomUtils::weightSelectOne<data::ReliquaryPowerupExcelConfig,unsigned int data::ReliquaryPowerupExcelConfig::*>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862722] = -218959118;
  v6[536862724] = -202116109;
  sum_weight = 0;
  for ( idx = 0LL; idx < std::vector<data::ReliquaryPowerupExcelConfig>::size(input_vec); ++idx )
  {
    v7 = (unsigned __int64)member + (_QWORD)std::vector<data::ReliquaryPowerupExcelConfig>::operator[](input_vec, idx);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)((v7 & 7) + 3) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v7);
    new_sum_weight = *(_DWORD *)v7 + sum_weight;
    if ( new_sum_weight < sum_weight )
      goto LABEL_12;
    v8 = (unsigned int *)((char *)member
                        + (_QWORD)std::vector<data::ReliquaryPowerupExcelConfig>::operator[](input_vec, idx));
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    if ( new_sum_weight >= *v8 )
      v9 = 0;
    else
LABEL_12:
      v9 = 1;
    if ( v9 )
    {
      if ( *(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 32, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 32),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/tools/include/random_utils.h",
        "weightSelectOne",
        243);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 32), "sum weight overflow.");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 32));
      result = -1;
      goto LABEL_40;
    }
    sum_weight = new_sum_weight;
  }
  if ( sum_weight )
  {
    if ( *(_BYTE *)(((unsigned __int64)select_idx >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)select_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)select_idx >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(select_idx);
    }
    *select_idx = 0;
    if ( random_seed )
      rand_weight = common::tools::RandomUtils::rand<unsigned int>(random_seed) % sum_weight;
    else
      rand_weight = common::tools::RandomUtils::rand<unsigned int>() % sum_weight;
    for ( idx_0 = 0LL; idx_0 < std::vector<data::ReliquaryPowerupExcelConfig>::size(input_vec); ++idx_0 )
    {
      v11 = (unsigned int *)((char *)member
                           + (_QWORD)std::vector<data::ReliquaryPowerupExcelConfig>::operator[](input_vec, idx_0));
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      if ( rand_weight < *v11 )
      {
        v12 = idx_0;
        if ( *(_BYTE *)(((unsigned __int64)select_idx >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)select_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)select_idx >> 3) + 0x7FFF8000) )
        {
          v12 = (unsigned int)select_idx;
          __asan_report_store4(select_idx);
        }
        *select_idx = v12;
        break;
      }
      v13 = (unsigned __int64)member
          + (_QWORD)std::vector<data::ReliquaryPowerupExcelConfig>::operator[](input_vec, idx_0);
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0 && (char)((v13 & 7) + 3) >= *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        __asan_report_load4(v13);
      rand_weight -= *(_DWORD *)v13;
    }
    result = 0;
  }
  else
  {
    if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/random_utils.h",
      "weightSelectOne",
      251);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 96), "sum weight is zero.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
    result = -1;
  }
LABEL_40:
  if ( v21 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 279: range 000000000CE696C6-000000000CE69E0B
int32_t __cdecl common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
        const std::map<unsigned int,unsigned int> *input_map,
        unsigned int *select_key,
        uint32_t random_seed)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  bool v7; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v8; // rdx
  unsigned int *p_second; // rax
  int v10; // edx
  unsigned int v11; // eax
  bool v12; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v13; // rdx
  unsigned int *v14; // rax
  std::pair<unsigned int const,unsigned int> *v15; // rax
  unsigned int *v16; // rdx
  unsigned int v17; // ecx
  int32_t result; // eax
  unsigned int sum_weight; // [rsp+2Ch] [rbp-164h]
  unsigned int rand_weight; // [rsp+30h] [rbp-160h]
  unsigned int weight; // [rsp+34h] [rbp-15Ch]
  unsigned int weight_0; // [rsp+3Ch] [rbp-154h]
  char v24[336]; // [rsp+40h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 32 8 8 iter:283 64 8 9 <unknown> 96 8 8 iter:304 128 8 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862726] = -218959118;
  v6[536862728] = -202116109;
  sum_weight = 0;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 32);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v4 + 32) = std::map<unsigned int,unsigned int>::begin(input_map);
  while ( 1 )
  {
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 64);
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v4 + 64) = std::map<unsigned int,unsigned int>::end(input_map);
    v7 = std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 32),
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 64));
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( !v7 )
    {
      v10 = 1;
      goto LABEL_19;
    }
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 32));
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    weight = v8->second;
    if ( sum_weight + weight < sum_weight || sum_weight + weight < weight )
      break;
    sum_weight += weight;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(
      (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 32),
      0);
  }
  *(_DWORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v4 + 160) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 65) & 7) >= *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 160, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v4 + 160),
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "../framework/common/tools/include/random_utils.h",
    "weightSelectOne",
    290);
  common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 160), "sum weight overflow.");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 160));
  *(_DWORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = -117901064;
  v3 = -1;
  v10 = 0;
LABEL_19:
  *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v10 == 1 )
  {
    if ( sum_weight )
    {
      if ( random_seed )
        v11 = common::tools::RandomUtils::rand<unsigned int>(random_seed) % sum_weight;
      else
        v11 = common::tools::RandomUtils::rand<unsigned int>() % sum_weight;
      rand_weight = v11;
      *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 96);
      *(std::map<unsigned int,unsigned int>::const_iterator *)(v4 + 96) = std::map<unsigned int,unsigned int>::begin(input_map);
      while ( 1 )
      {
        *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v4 + 128);
        *(std::map<unsigned int,unsigned int>::const_iterator *)(v4 + 128) = std::map<unsigned int,unsigned int>::end(input_map);
        v12 = std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 96),
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 128));
        *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
        if ( !v12 )
          break;
        v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 96));
        v14 = &v13->second;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v14);
        }
        weight_0 = v13->second;
        if ( rand_weight < weight_0 )
        {
          v15 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 96));
          v16 = (unsigned int *)v15;
          if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v15);
          }
          v17 = *v16;
          if ( *(_BYTE *)(((unsigned __int64)select_key >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)select_key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)select_key >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_store4(select_key);
          }
          *select_key = v17;
          break;
        }
        rand_weight -= weight_0;
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(
          (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 96),
          0);
      }
      v3 = 0;
    }
    else
    {
      *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 32 + 31) & 7) >= *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/tools/include/random_utils.h",
        "weightSelectOne",
        298);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 224), "sum weight is zero.");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 224));
      v3 = -1;
    }
  }
  result = v3;
  if ( v24 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 282: range 000000000C8106C0-000000000C810825
unsigned int __fastcall common::tools::RandomUtils::rand<unsigned int>(
        unsigned int min,
        unsigned int max,
        uint32_t seed)
{
  unsigned int v3; // ebx
  unsigned int v4; // r12d
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r14
  std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *v8; // r15
  unsigned int result; // eax
  __int64 v10; // rax
  std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>::result_type seeda; // [rsp+8h] [rbp-80h]
  char v12[120]; // [rsp+10h] [rbp-78h] BYREF

  v3 = min;
  v4 = max;
  v6 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_0(64LL);
    if ( v10 )
      v6 = v10;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 8 16 distribution:158";
  *(_QWORD *)(v6 + 16) = common::tools::RandomUtils::rand<unsigned int>;
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116352;
  if ( min == max )
  {
    result = min;
  }
  else
  {
    if ( min <= max )
    {
      v4 = min;
      v3 = max;
    }
    if ( !`guard variable for'unsigned int common::tools::RandomUtils::rand<unsigned int>(unsigned int,unsigned int,unsigned int)::rand_genatator[__readfsqword(0)] )
    {
      std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>::seed(
        (std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *const)((char *)&common::tools::RandomUtils::rand<unsigned int>(unsigned int,unsigned int,unsigned int)::rand_genatator + __readfsqword(0)),
        0x1571uLL);
      `guard variable for'unsigned int common::tools::RandomUtils::rand<unsigned int>(unsigned int,unsigned int,unsigned int)::rand_genatator[__readfsqword(0)] = 1;
    }
    seeda = seed;
    v8 = (std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *)((char *)&common::tools::RandomUtils::rand<unsigned int>(unsigned int,unsigned int,unsigned int)::rand_genatator + __readfsqword(0));
    std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>::seed(
      v8,
      seeda);
    *(_DWORD *)(v6 + 32) = v4;
    *(_DWORD *)(v6 + 36) = v3;
    result = std::uniform_int_distribution<unsigned int>::operator()<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>(
               (std::uniform_int_distribution<unsigned int> *const)(v6 + 32),
               v8,
               (const std::uniform_int_distribution<unsigned int>::param_type *)(v6 + 32));
  }
  if ( v12 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 346: range 0000000012F3A0DA-0000000012F3A109
void __cdecl common::tools::RandomUtils::randomSelect<unsigned int>(
        const std::vector<unsigned int> *data_vec,
        std::vector<unsigned int> *result_vec,
        uint32_t num)
{
  common::tools::RandomUtils::randomSelect<unsigned int>(
    data_vec,
    result_vec,
    num,
    &common::tools::RandomUtils::rand_genatator_);
};

// Line 352: range 0000000012F4328E-0000000012F433EF
void __cdecl common::tools::RandomUtils::randomSelect<data::TreasureMapRegionExcelConfig const*>(
        const std::vector<const data::TreasureMapRegionExcelConfig*> *data_vec,
        std::vector<const data::TreasureMapRegionExcelConfig*> *result_vec,
        uint32_t num,
        std::mt19937 *rand_generator)
{
  unsigned int v5; // ecx
  std::vector<const data::TreasureMapRegionExcelConfig*>::size_type v6; // rdx
  const std::vector<const data::TreasureMapRegionExcelConfig*>::value_type *v7; // rdx
  unsigned __int64 v8; // rbx
  const std::vector<const data::TreasureMapRegionExcelConfig*>::value_type *v9; // rdx
  unsigned int numa; // [rsp+Ch] [rbp-34h]
  uint32_t idx; // [rsp+28h] [rbp-18h]

  numa = num;
  if ( num && std::vector<data::TreasureMapRegionExcelConfig const*>::size(data_vec) )
  {
    if ( numa < std::vector<data::TreasureMapRegionExcelConfig const*>::size(data_vec) )
    {
      if ( numa == 1 )
      {
        v5 = std::vector<data::TreasureMapRegionExcelConfig const*>::size(data_vec) - 1;
        v6 = common::tools::RandomUtils::rand<unsigned int>(0, v5, rand_generator);
        v7 = std::vector<data::TreasureMapRegionExcelConfig const*>::operator[](data_vec, v6);
        std::vector<data::TreasureMapRegionExcelConfig const*>::push_back(result_vec, v7);
      }
      else
      {
        for ( idx = 0; idx < std::vector<data::TreasureMapRegionExcelConfig const*>::size(data_vec); ++idx )
        {
          v8 = common::tools::RandomUtils::rand<unsigned int>(rand_generator);
          if ( (unsigned int)(v8 % (std::vector<data::TreasureMapRegionExcelConfig const*>::size(data_vec) - idx)) < numa )
          {
            v9 = std::vector<data::TreasureMapRegionExcelConfig const*>::operator[](data_vec, idx);
            std::vector<data::TreasureMapRegionExcelConfig const*>::push_back(result_vec, v9);
            --numa;
          }
          if ( !numa )
            break;
        }
      }
    }
    else
    {
      std::vector<data::TreasureMapRegionExcelConfig const*>::operator=(result_vec, data_vec);
    }
  }
};

// Line 352: range 0000000012F4391A-0000000012F43A7B
void __cdecl common::tools::RandomUtils::randomSelect<unsigned int>(
        const std::vector<unsigned int> *data_vec,
        std::vector<unsigned int> *result_vec,
        uint32_t num,
        std::mt19937 *rand_generator)
{
  unsigned int v5; // ecx
  std::vector<unsigned int>::size_type v6; // rdx
  const std::vector<unsigned int>::value_type *v7; // rdx
  unsigned __int64 v8; // rbx
  const std::vector<unsigned int>::value_type *v9; // rdx
  unsigned int numa; // [rsp+Ch] [rbp-34h]
  uint32_t idx; // [rsp+28h] [rbp-18h]

  numa = num;
  if ( num && std::vector<unsigned int>::size(data_vec) )
  {
    if ( numa < std::vector<unsigned int>::size(data_vec) )
    {
      if ( numa == 1 )
      {
        v5 = std::vector<unsigned int>::size(data_vec) - 1;
        v6 = common::tools::RandomUtils::rand<unsigned int>(0, v5, rand_generator);
        v7 = std::vector<unsigned int>::operator[](data_vec, v6);
        std::vector<unsigned int>::push_back(result_vec, v7);
      }
      else
      {
        for ( idx = 0; idx < std::vector<unsigned int>::size(data_vec); ++idx )
        {
          v8 = common::tools::RandomUtils::rand<unsigned int>(rand_generator);
          if ( (unsigned int)(v8 % (std::vector<unsigned int>::size(data_vec) - idx)) < numa )
          {
            v9 = std::vector<unsigned int>::operator[](data_vec, idx);
            std::vector<unsigned int>::push_back(result_vec, v9);
            --numa;
          }
          if ( !numa )
            break;
        }
      }
    }
    else
    {
      std::vector<unsigned int>::operator=(result_vec, data_vec);
    }
  }
};

// Line 385: range 000000000CE691F0-000000000CE6951D
void __cdecl common::tools::RandomUtils::randomSelect<unsigned int>(
        const std::vector<unsigned int> *data_vec,
        std::set<unsigned int> *result_set,
        uint32_t num)
{
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  const std::set<unsigned int>::value_type *v7; // rdx
  int v8; // eax
  std::vector<unsigned int>::size_type v9; // rdx
  const std::set<unsigned int>::value_type *v10; // rdx
  unsigned __int64 v11; // r12
  const std::set<unsigned int>::value_type *v12; // rdx
  uint32_t idx; // [rsp+28h] [rbp-A8h]
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)v4;
  }
  v3->_M_current = (const unsigned int *)1102416563;
  v3[1]._M_current = (const unsigned int *)"2 32 8 15 __for_begin:393 64 8 13 __for_end:393";
  v3[2]._M_current = (const unsigned int *)common::tools::RandomUtils::randomSelect<unsigned int>;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  if ( num && std::vector<unsigned int>::size(data_vec) )
  {
    if ( num < std::vector<unsigned int>::size(data_vec) )
    {
      if ( num == 1 )
      {
        v8 = std::vector<unsigned int>::size(data_vec);
        v9 = common::tools::RandomUtils::rand<unsigned int>(0, v8 - 1);
        v10 = std::vector<unsigned int>::operator[](data_vec, v9);
        std::set<unsigned int>::insert(result_set, v10);
      }
      else
      {
        for ( idx = 0; idx < std::vector<unsigned int>::size(data_vec); ++idx )
        {
          v11 = common::tools::RandomUtils::rand<unsigned int>();
          if ( (unsigned int)(v11 % (std::vector<unsigned int>::size(data_vec) - idx)) < num )
          {
            v12 = std::vector<unsigned int>::operator[](data_vec, idx);
            std::set<unsigned int>::insert(result_set, v12);
            --num;
          }
          if ( !num )
            break;
        }
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
        __asan_report_store8(&v3[4]);
      v3[4]._M_current = std::vector<unsigned int>::begin(data_vec)._M_current;
      if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
        __asan_report_store8(&v3[8]);
      v3[8]._M_current = std::vector<unsigned int>::end(data_vec)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(v3 + 4, v3 + 8) )
      {
        v7 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(v3 + 4);
        std::set<unsigned int>::insert(result_set, v7);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(v3 + 4);
      }
    }
  }
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_current = (const unsigned int *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 421: range 000000000F7DC0AA-000000000F7DC414
void __cdecl common::tools::RandomUtils::quickRandomSelect<unsigned long>(
        const std::vector<long unsigned int> *data_vec,
        std::vector<long unsigned int> *result_vec,
        uint32_t num)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // esi
  unsigned int v7; // ecx
  uint32_t *v8; // rax
  uint32_t *v9; // rdx
  const std::vector<long unsigned int>::value_type *v10; // rdx
  const std::vector<long unsigned int>::value_type *v11; // rdx
  uint32_t i; // [rsp+2Ch] [rbp-94h]
  uint32_t i_0; // [rsp+30h] [rbp-90h]
  unsigned int rand_index; // [rsp+34h] [rbp-8Ch]
  uint32_t end_pos; // [rsp+38h] [rbp-88h]
  uint32_t remain_count; // [rsp+3Ch] [rbp-84h]
  char v19[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 data_size:423 64 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::RandomUtils::quickRandomSelect<unsigned long>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  v6 = std::vector<unsigned long>::size(data_vec);
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 48);
  *(_DWORD *)(v3 + 48) = v6;
  if ( num && *(_DWORD *)(v3 + 48) )
  {
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 48);
    if ( num < *(_DWORD *)(v3 + 48) )
    {
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      rand_index = common::tools::RandomUtils::rand<unsigned int>(0, *(_DWORD *)(v3 + 48) - 1);
      v7 = rand_index + num;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 64);
      *(_DWORD *)(v3 + 64) = v7;
      v8 = (uint32_t *)std::min<unsigned int>((const unsigned int *)(v3 + 48), (const unsigned int *)(v3 + 64));
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      end_pos = *v9;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      for ( i = rand_index; i < end_pos; ++i )
      {
        v10 = std::vector<unsigned long>::operator[](data_vec, i);
        std::vector<unsigned long>::push_back(result_vec, v10);
      }
      if ( std::vector<unsigned long>::size(result_vec) < num )
      {
        remain_count = num - std::vector<unsigned long>::size(result_vec);
        for ( i_0 = 0; i_0 < remain_count; ++i_0 )
        {
          v11 = std::vector<unsigned long>::operator[](data_vec, i_0);
          std::vector<unsigned long>::push_back(result_vec, v11);
        }
      }
    }
    else
    {
      std::vector<unsigned long>::operator=(result_vec, data_vec);
    }
  }
  if ( v19 == (char *)v3 )
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
};
