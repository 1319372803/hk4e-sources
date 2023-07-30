// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/random.h

// Line 69: range 000000000D1573E0-000000000D15741E
void __cdecl std::__detail::_Adaptor<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>,float>::_Adaptor(
        std::__detail::_Adaptor<std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>,float> *const this,
        std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *__g)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_g = __g;
};

// Line 77: range 000000000D04C278-000000000D04C31D
void __cdecl std::uniform_real_distribution<float>::param_type::param_type(
        std::uniform_real_distribution<float>::param_type *const this,
        float __a,
        float __b)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->_M_a = __a;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_b >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_M_b >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_M_b);
  }
  this->_M_b = __b;
};

// Line 79: range 000000000D0C5186-000000000D0C5190
std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>::result_type __cdecl std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>::min()
{
  return 0LL;
};

// Line 135: range 000000000D231836-000000000D231854
unsigned __int64 __cdecl std::__detail::_Mod<unsigned long,4294967296ul,1ul,0ul,true,true>::__calc(
        unsigned __int64 __x)
{
  return (unsigned int)__x;
};

// Line 135: range 000000000D231855-000000000D231899
unsigned __int64 __cdecl std::__detail::_Mod<unsigned long,624ul,1ul,0ul,true,true>::__calc(unsigned __int64 __x)
{
  return __x % 0x270;
};

// Line 146: range 000000000D1301CC-000000000D1301E5
unsigned __int64 __cdecl std::__detail::__mod<unsigned long,4294967296ul,1ul,0ul>(unsigned __int64 __x)
{
  return std::__detail::_Mod<unsigned long,4294967296ul,1ul,0ul,true,true>::__calc(__x);
};

// Line 146: range 000000000D1301E6-000000000D1301FF
unsigned __int64 __cdecl std::__detail::__mod<unsigned long,624ul,1ul,0ul>(unsigned __int64 __x)
{
  return std::__detail::_Mod<unsigned long,624ul,1ul,0ul,true,true>::__calc(__x);
};

// Line 177: range 000000000D157420-000000000D15745D
float __cdecl std::__detail::_Adaptor<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>,float>::operator()(
        std::__detail::_Adaptor<std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>,float> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return std::generate_canonical<float,24ul,std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>(this->_M_g);
};

// Line 196: range 000000000CF63222-000000000CF63255
void __cdecl std::uniform_real_distribution<float>::uniform_real_distribution(
        std::uniform_real_distribution<float> *const this,
        float __a,
        float __b)
{
  std::uniform_real_distribution<float>::param_type::param_type(&this->_M_param, __a, __b);
};

// Line 516: range 000000000D03F100-000000000D03F11F
void __cdecl std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>::mersenne_twister_engine(
        std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *const this)
{
  std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>::mersenne_twister_engine(
    this,
    0x1571uLL);
};

// Line 519: range 000000000D1301A6-000000000D1301CB
void __cdecl std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>::mersenne_twister_engine(
        std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *const this,
        std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>::result_type __sd)
{
  std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>::seed(
    this,
    __sd);
};

// Line 1758: range 000000000D1574B0-000000000D1574FC
std::uniform_real_distribution<float>::result_type __cdecl std::uniform_real_distribution<float>::param_type::a(
        const std::uniform_real_distribution<float>::param_type *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  return this->_M_a;
};

// Line 1762: range 000000000D15745E-000000000D1574AF
std::uniform_real_distribution<float>::result_type __cdecl std::uniform_real_distribution<float>::param_type::b(
        const std::uniform_real_distribution<float>::param_type *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_b >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_M_b >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_M_b);
  }
  return this->_M_b;
};

// Line 1852: range 000000000CF63256-000000000CF6327E
std::uniform_real_distribution<float>::result_type __cdecl std::uniform_real_distribution<float>::operator()<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>(
        std::uniform_real_distribution<float> *const this,
        std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *__urng)
{
  return std::uniform_real_distribution<float>::operator()<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>(
           this,
           __urng,
           &this->_M_param);
};

// Line 1857: range 000000000D04C31E-000000000D04C444
std::uniform_real_distribution<float>::result_type __cdecl std::uniform_real_distribution<float>::operator()<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>(
        std::uniform_real_distribution<float> *const this,
        std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *__urng,
        const std::uniform_real_distribution<float>::param_type *__p)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::uniform_real_distribution<float>::result_type result; // xmm0_4
  float v7; // [rsp+0h] [rbp-80h]
  float v8; // [rsp+4h] [rbp-7Ch]
  float v9; // [rsp+4h] [rbp-7Ch]
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 12 __aurng:1861";
  *(_QWORD *)(v3 + 16) = std::uniform_real_distribution<float>::operator()<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  std::__detail::_Adaptor<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>,float>::_Adaptor(
    (std::__detail::_Adaptor<std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>,float> *const)(v3 + 32),
    __urng);
  v8 = std::__detail::_Adaptor<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>,float>::operator()((std::__detail::_Adaptor<std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>,float> *const)(v3 + 32));
  v7 = std::uniform_real_distribution<float>::param_type::b(__p);
  v9 = (float)(v7 - std::uniform_real_distribution<float>::param_type::a(__p)) * v8;
  result = std::uniform_real_distribution<float>::param_type::a(__p) + v9;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
