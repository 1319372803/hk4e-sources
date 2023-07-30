// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/random.tcc

// Line 325: range 000000000C81020C-000000000C8106BE
void __fastcall std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>::seed(
        std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *const this,
        std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>::result_type __sd)
{
  unsigned __int64 i; // rcx
  std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *v3; // rdx
  unsigned __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_4;
  }
  this->_M_x[0] = (unsigned int)__sd;
  for ( i = 1LL; i <= 0x26F; ++i )
  {
    v3 = (std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *const)((char *)this + 8 * i - 8);
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
LABEL_4:
      this = v3;
      __asan_report_load8(v3);
    }
    else
    {
      v4 = i % 0x270 + 1812433253 * ((unsigned int)this->_M_x[i - 1] ^ (unsigned int)(this->_M_x[i - 1] >> 30));
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_x[i] >> 3) + 0x7FFF8000) )
      {
        this = (std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *const)((char *)this + 8 * i);
        __asan_report_store8();
        break;
      }
    }
    this->_M_x[i] = v4;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_p >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>::_M_gen_rand((std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *const)&this->_M_p);
  }
  else
  {
    this->_M_p = 624LL;
  }
};

// Line 3318: range 000000000D23422E-000000000D234331
float __cdecl std::generate_canonical<float,24ul,std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>(
        std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *__urng)
{
  std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>::result_type v1; // rbx
  __int64 v2; // rbx
  float v3; // xmm0_4
  __m128i v4; // xmm0
  float __ret; // [rsp+14h] [rbp-4Ch]
  float __sum; // [rsp+18h] [rbp-48h]
  float __tmp; // [rsp+1Ch] [rbp-44h]
  std::size_t __k; // [rsp+20h] [rbp-40h]

  __sum = 0.0;
  __tmp = 1.0;
  for ( __k = 1LL; __k; --__k )
  {
    v1 = std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>::operator()(__urng);
    v2 = v1
       - std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>::min();
    if ( v2 < 0 )
      v3 = (float)(v2 & 1 | (unsigned int)((unsigned __int64)v2 >> 1))
         + (float)(v2 & 1 | (unsigned int)((unsigned __int64)v2 >> 1));
    else
      v3 = (float)(int)v2;
    __sum = (float)(v3 * __tmp) + __sum;
    __tmp = __tmp * 4294967296.0;
  }
  __ret = __sum / __tmp;
  if ( (float)(__sum / __tmp) >= 1.0 )
  {
    v4 = (__m128i)0x3F800000u;
    *(float *)v4.m128i_i32 = std::nextafter(1.0, 0.0);
    return COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  }
  return __ret;
};
