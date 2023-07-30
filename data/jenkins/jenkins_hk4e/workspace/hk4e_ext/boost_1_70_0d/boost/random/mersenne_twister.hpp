// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/random/mersenne_twister.hpp

// Line 536: range 0000000019B69368-0000000019B69A25
void __fastcall boost::random::mersenne_twister_engine<unsigned int,32ul,624ul,397ul,31ul,2567483615u,11ul,4294967295u,7ul,2636928640u,15ul,4022730752u,18ul,1812433253u>::twist(
        boost::random::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *const this)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 i; // rdx
  boost::random::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *v3; // r8
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned __int64 v6; // r10
  char v7; // r9
  char v8; // r11
  unsigned __int64 j; // rdx
  boost::random::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *v10; // r8
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned __int64 v13; // r10
  char v14; // r9
  char v15; // r11
  unsigned __int64 k; // rdx
  boost::random::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *v17; // r8
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned __int64 v20; // r10
  char v21; // r9
  char v22; // r11
  char v23; // cl
  char v24; // dl
  char v25; // cl
  std::size_t *p_i; // rax
  boost::random::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *v27; // rdi
  unsigned __int64 v28; // rdx
  mpl_::true_ v29; // [rsp+10h] [rbp+8h]

  for ( i = 0LL; i <= 0xDD; i = v1 )
  {
    v1 = *(unsigned __int8 *)(((unsigned __int64)&this->x[i] >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 4 * i) & 7) + 3) >= (char)v1 && (_BYTE)v1 )
    {
      __asan_report_load4(&this->x[i]);
LABEL_3:
      this = v3;
      __asan_report_load4(v3);
      goto LABEL_4;
    }
    v1 = i + 1;
    v3 = (boost::random::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *)&this->x[i + 1];
    v7 = *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 4 * (i + 1)) & 7) + 3) >= v7 && v7 )
      goto LABEL_3;
    v5 = this->x[v1];
    v4 = v5 & 0x7FFFFFFF | this->x[i] & 0x80000000;
    v6 = i + 397;
    v8 = *(_BYTE *)(((unsigned __int64)&this->x[i + 397] >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 4 * (i - 115)) & 7) + 3) >= v8 && v8 )
    {
      this = (boost::random::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *const)((char *)this + 4 * i + 1588);
      __asan_report_load4(this);
      break;
    }
LABEL_4:
    this->x[i] = (-1727483681 * (v5 & 1)) ^ this->x[v6] ^ (v4 >> 1);
  }
  for ( j = 222LL; j <= 0xE2; j = v1 )
  {
    v1 = *(unsigned __int8 *)(((unsigned __int64)&this->x[j] >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 4 * j) & 7) + 3) >= (char)v1 && (_BYTE)v1 )
    {
      __asan_report_load4(&this->x[j]);
LABEL_15:
      this = v10;
      __asan_report_load4(v10);
      goto LABEL_16;
    }
    v1 = j + 1;
    v10 = (boost::random::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *)&this->x[j + 1];
    v14 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 4 * (j + 1)) & 7) + 3) >= v14 && v14 )
      goto LABEL_15;
    v12 = this->x[v1];
    v11 = v12 & 0x7FFFFFFF | this->x[j] & 0x80000000;
    v13 = j + 397;
    v15 = *(_BYTE *)(((unsigned __int64)&this->x[j + 397] >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 4 * (j - 115)) & 7) + 3) >= v15 && v15 )
    {
      this = (boost::random::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *const)((char *)this + 4 * j + 1588);
      __asan_report_load4(this);
      break;
    }
LABEL_16:
    this->x[j] = (-1727483681 * (v12 & 1)) ^ this->x[v13] ^ (v11 >> 1);
  }
  for ( k = 227LL; k <= 0x26E; k = v1 )
  {
    v1 = *(unsigned __int8 *)(((unsigned __int64)&this->x[k] >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 4 * k) & 7) + 3) >= (char)v1 && (_BYTE)v1 )
    {
      __asan_report_load4(&this->x[k]);
LABEL_27:
      this = v17;
      __asan_report_load4(v17);
      goto LABEL_28;
    }
    v1 = k + 1;
    v17 = (boost::random::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *)&this->x[k + 1];
    v21 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 4 * (k + 1)) & 7) + 3) >= v21 && v21 )
      goto LABEL_27;
    v19 = this->x[v1];
    v18 = v19 & 0x7FFFFFFF | this->x[k] & 0x80000000;
    v20 = k - 227;
    v22 = *(_BYTE *)(((unsigned __int64)&this->x[k - 227] >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 4 * (k + 29)) & 7) + 3) >= v22 && v22 )
    {
      this = (boost::random::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *const)((char *)this + 4 * k - 908);
      __asan_report_load4(this);
      break;
    }
LABEL_28:
    this->x[k] = (-1727483681 * (v19 & 1)) ^ this->x[v20] ^ (v18 >> 1);
  }
  v23 = *(_BYTE *)(((unsigned __int64)&this->x[623] >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 68) & 7) + 3) >= v23 && v23 )
  {
    this = (boost::random::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *const)((char *)this + 2492);
    __asan_report_load4(this);
LABEL_46:
    __asan_report_load4(this);
LABEL_47:
    __asan_report_load4(v1);
    goto LABEL_48;
  }
  v24 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v24 && v24 <= 3 )
    goto LABEL_46;
  v1 = (unsigned __int64)&this->x[396];
  v25 = *(_BYTE *)(((unsigned __int64)&this->x[396] >> 3) + 0x7FFF8000);
  if ( v25 && v25 <= 3 )
    goto LABEL_47;
  this->x[623] = (-1727483681 * (this->x[0] & 1)) ^ this->x[396] ^ ((this->x[0] & 0x7FFFFFFF | this->x[623] & 0x80000000) >> 1);
  p_i = &this->i;
  if ( !*(_BYTE *)(((unsigned __int64)&this->i >> 3) + 0x7FFF8000) )
  {
    this->i = 0LL;
    return;
  }
LABEL_48:
  v27 = (boost::random::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *)p_i;
  __asan_report_store8();
  boost::random::detail::generate_uniform_int<boost::random::mersenne_twister_engine<unsigned int,32ul,624ul,397ul,31ul,2567483615u,11ul,4294967295u,7ul,2636928640u,15ul,4022730752u,18ul,1812433253u>,unsigned long>(
    v27,
    v1,
    v28,
    v29);
};
