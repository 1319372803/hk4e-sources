// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/math_def.cpp

// Line 28: range 000000000CCEFE64-000000000CCEFF6A
void __cdecl Vector3::Vector3(Vector3 *const this, const proto::VectorBin *bin)
{
  __m128i v2; // xmm0
  float v3; // ecx
  char v4; // dl
  float v5; // ecx
  char v6; // dl
  float v7; // ecx
  char v8; // dl
  const proto::VectorBin *bina; // [rsp+0h] [rbp-10h]

  bina = bin;
  *(float *)v2.m128i_i32 = proto::VectorBin::x(bin);
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  v4 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v4 != 0 && (char)(((unsigned __int8)this & 7) + 3) >= v4 )
  {
    LOBYTE(bin) = v4 != 0;
    __asan_report_store4(this, bin);
  }
  this->x = v3;
  *(float *)v2.m128i_i32 = proto::VectorBin::y(bina);
  v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  v6 = *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(bin) = v6 != 0;
    __asan_report_store4(&this->y, bin);
  }
  this->y = v5;
  *(float *)v2.m128i_i32 = proto::VectorBin::z(bina);
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  v8 = *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this + 8) & 7) + 3) >= v8 )
  {
    LOBYTE(bin) = v8 != 0;
    __asan_report_store4(&this->z, bin);
  }
  this->z = v7;
};

// Line 31: range 000000000CCEFF6C-000000000CCF006F
void __cdecl Vector3::toBin(const Vector3 *const this, proto::VectorBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::VectorBin::set_x(bin, this->x);
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  proto::VectorBin::set_y(bin, this->y);
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  proto::VectorBin::set_z(bin, this->z);
};

// Line 38: range 000000000CCF0070-000000000CCF0173
void __cdecl Vector3::toClient(const Vector3 *const this, proto::Vector *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::Vector::set_x(proto, this->x);
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  proto::Vector::set_y(proto, this->y);
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  proto::Vector::set_z(proto, this->z);
};

// Line 44: range 000000000CCF0174-000000000CCF0475
void __cdecl Vector3::Vector3(Vector3 *const this, const std::vector<float> *vec)
{
  float z; // xmm0_4
  float y; // xmm0_4
  __gnu_cxx::__alloc_traits<std::allocator<float>,float>::value_type *v4; // rax
  float *v5; // rdx
  float v6; // xmm0_4
  __gnu_cxx::__alloc_traits<std::allocator<float>,float>::value_type *v7; // rax
  float *v8; // rdx
  float v9; // xmm0_4
  __gnu_cxx::__alloc_traits<std::allocator<float>,float>::value_type *v10; // rax
  float *v11; // rdx
  float v12; // xmm0_4
  uint32_t i; // [rsp+1Ch] [rbp-14h]

  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->z, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->z = 0.0;
  z = this->z;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->y = z;
  y = this->y;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->x = y;
  for ( i = 0; i < std::vector<float>::size(vec); ++i )
  {
    if ( i )
    {
      if ( i == 1 )
      {
        v7 = (__gnu_cxx::__alloc_traits<std::allocator<float>,float>::value_type *)std::vector<float>::operator[](
                                                                                     vec,
                                                                                     1uLL);
        v8 = v7;
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v7);
        }
        v9 = *v8;
        if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&this->y, (((_BYTE)this + 4) & 7u) + 3);
        }
        this->y = v9;
      }
      else if ( i == 2 )
      {
        v10 = (__gnu_cxx::__alloc_traits<std::allocator<float>,float>::value_type *)std::vector<float>::operator[](
                                                                                      vec,
                                                                                      2uLL);
        v11 = v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10);
        }
        v12 = *v11;
        if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&this->z, (((_BYTE)this + 8) & 7u) + 3);
        }
        this->z = v12;
      }
    }
    else
    {
      v4 = (__gnu_cxx::__alloc_traits<std::allocator<float>,float>::value_type *)std::vector<float>::operator[](
                                                                                   vec,
                                                                                   0LL);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      v6 = *v5;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
      }
      this->x = v6;
    }
  }
};

// Line 59: range 000000000CCF0476-000000000CCF0589
proto::Vector *__cdecl Vector3::operator proto::Vector(proto::Vector *retstr, const Vector3 *const this)
{
  proto::Vector::Vector(retstr);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::Vector::set_x(retstr, this->x);
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  proto::Vector::set_y(retstr, this->y);
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  proto::Vector::set_z(retstr, this->z);
  return retstr;
};

// Line 68: range 000000000CCF058A-000000000CCF0876
float __fastcall Vector3::operator[](const Vector3 *const this, uint32_t index)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // eax
  float result; // xmm0_4
  common::milog::MiLogStream *v7; // rax
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 index:67 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = Vector3::operator[];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = index;
  v5 = *(_DWORD *)(v2 + 48);
  if ( v5 == 2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->z);
    }
    result = this->z;
  }
  else if ( v5 > 2 )
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/math_def.cpp",
      "operator[]",
      78);
    v7 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[15])"invalid index:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0.0;
  }
  else if ( v5 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->y);
    }
    result = this->y;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(this);
    }
    result = this->x;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 84: range 000000000CCF0878-000000000CCF0AA6
Vector3 __cdecl Vector3::operator*(const Vector3 *const this, float scalar)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  __int64 v8; // xmm0_8
  __int64 v9; // [rsp+8h] [rbp-98h]
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF
  Vector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 9 <unknown>";
  *(_QWORD *)(v2 + 16) = Vector3::operator*;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  v5 = this->z * scalar;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  v6 = this->y * scalar;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  Vector3::Vector3((Vector3 *const)(v2 + 32), this->x * scalar, v6, v5);
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 43) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 43) & 7) >= *(_BYTE *)(((v2 + 43) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v2 + 32, 12LL);
  }
  v9 = *(_QWORD *)(v2 + 32);
  v7 = *(float *)(v2 + 40);
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v8 = v9;
  result.x = *(float *)&v8;
  result.y = *((float *)&v8 + 1);
  result.z = v7;
  return result;
};

// Line 89: range 000000000CCF0AA8-000000000CCF0F01
Vector3 __cdecl Vector3::operator/(const Vector3 *const this, float scalar)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  __int64 v8; // xmm0_8
  __int64 v10; // [rsp+34h] [rbp-CCh]
  float v11; // [rsp+3Ch] [rbp-C4h]
  char v12[192]; // [rsp+40h] [rbp-C0h] BYREF
  Vector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 12 9 <unknown> 64 12 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = Vector3::operator/;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -219020288;
  v4[536862724] = -202116109;
  if ( scalar == 0.0 )
  {
    if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/math_def.cpp",
      "operator/",
      94);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
      (common::milog::MiLogStream *const)(v2 + 96),
      (const char (*)[15])"scalar is zero");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1024;
    Vector3::Vector3((Vector3 *const)(v2 + 64), 0.0, 0.0, 0.0);
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 75) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 75) & 7) >= *(_BYTE *)(((v2 + 75) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v2 + 64, 12LL);
    }
    v10 = *(_QWORD *)(v2 + 64);
    v11 = *(float *)(v2 + 72);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->z);
    }
    v5 = this->z / scalar;
    if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->y);
    }
    v6 = this->y / scalar;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(this);
    }
    Vector3::Vector3((Vector3 *const)(v2 + 32), this->x / scalar, v6, v5);
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 43) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 43) & 7) >= *(_BYTE *)(((v2 + 43) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v2 + 32, 12LL);
    }
    v10 = *(_QWORD *)(v2 + 32);
    v11 = *(float *)(v2 + 40);
  }
  v7 = v11;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  v8 = v10;
  result.x = *(float *)&v8;
  result.y = *((float *)&v8 + 1);
  result.z = v7;
  return result;
};

// Line 100: range 000000000CCF0F02-000000000CCF1140
Vector3 __cdecl Vector3::operator-(const Vector3 *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm1_4
  __int64 v7; // xmm0_8
  __int64 v8; // [rsp+8h] [rbp-98h]
  char v9[96]; // [rsp+40h] [rbp-60h] BYREF
  Vector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 12 9 <unknown>";
  *(_QWORD *)(v1 + 16) = Vector3::operator-;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  v4 = -this->z;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  v5 = -this->y;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  Vector3::Vector3((Vector3 *const)(v1 + 32), -this->x, v5, v4);
  if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v1 + 43) >> 3) + 0x7FFF8000) != 0
    && (char)((v1 + 43) & 7) >= *(_BYTE *)(((v1 + 43) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v1 + 32, 12LL);
  }
  v8 = *(_QWORD *)(v1 + 32);
  v6 = *(float *)(v1 + 40);
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v7 = v8;
  result.x = *(float *)&v7;
  result.y = *((float *)&v7 + 1);
  result.z = v6;
  return result;
};

// Line 105: range 000000000CCF1142-000000000CCF1175
void __cdecl Vector3::reset(Vector3 *const this)
{
  Vector3 *v1; // rax

  v1 = (Vector3 *)operator new(0xCuLL, this);
  Vector3::Vector3(v1, 0.0, 0.0, 0.0);
};

// Line 111: range 000000000CCF1176-000000000CCF127D
float __cdecl Vector3::getLength(const Vector3 *const this)
{
  float v1; // xmm1_4
  float v2; // xmm1_4

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  v1 = this->x * this->x;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  v2 = v1 + (float)(this->y * this->y);
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  return std::sqrt((float)(this->z * this->z) + v2);
};

// Line 116: range 000000000CCF127E-000000000CCF14A6
float __cdecl Vector3::unitize(Vector3 *const this)
{
  __m128i v1; // xmm0
  float z; // xmm0_4
  float y; // xmm0_4
  float length; // [rsp+18h] [rbp-8h]
  float reciprocal; // [rsp+1Ch] [rbp-4h]

  *(float *)v1.m128i_i32 = Vector3::getLength(this);
  length = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  if ( length <= 0.00000011920929 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->z, (((_BYTE)this + 8) & 7u) + 3);
    }
    this->z = 0.0;
    z = this->z;
    if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->y, (((_BYTE)this + 4) & 7u) + 3);
    }
    this->y = z;
    y = this->y;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
    }
    this->x = y;
    return this->x;
  }
  else
  {
    reciprocal = 1.0 / length;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(this);
    }
    this->x = this->x * reciprocal;
    if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->y);
    }
    this->y = this->y * reciprocal;
    if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->z);
    }
    this->z = this->z * reciprocal;
  }
  return length;
};

// Line 133: range 000000000CCF14A8-000000000CCF15C8
bool __cdecl Vector3::isZero(const Vector3 *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  if ( std::abs(this->x) >= 0.00000011920929 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  if ( std::abs(this->y) >= 0.00000011920929 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  return std::abs(this->z) < 0.00000011920929;
};

// Line 138: range 000000000CCF15CA-000000000CCF16E8
bool __cdecl Vector3::isValid(const Vector3 *const this)
{
  char v1; // al

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  if ( !std::isfinite(this->x) )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  if ( !std::isfinite(this->y) )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  if ( !std::isfinite(this->z) )
LABEL_10:
    v1 = 1;
  else
    v1 = 0;
  return v1 == 0;
};

// Line 147: range 000000000CCF16EA-000000000CCF1A26
bool __cdecl Vector3::isValidRot(const Vector3 *const this)
{
  char v1; // al

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  if ( std::isinf(this->x) )
    goto LABEL_31;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  if ( std::isinf(this->y) )
    goto LABEL_31;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  if ( std::isinf(this->z) )
    goto LABEL_31;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  if ( std::isnan(this->x) )
    goto LABEL_31;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  if ( std::isnan(this->y) )
    goto LABEL_31;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  if ( std::isnan(this->z) )
    goto LABEL_31;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  if ( this->x < -1.0 || this->x > 361.0 )
    goto LABEL_31;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  if ( this->y < -1.0 || this->y > 361.0 )
    goto LABEL_31;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  if ( this->z < -1.0 || this->z > 361.0 )
LABEL_31:
    v1 = 1;
  else
    v1 = 0;
  return v1 == 0;
};

// Line 160: range 000000000CCF1A28-000000000CCF1D6B
Vector3 __cdecl Vector3::cross(const Vector3 *const this, const Vector3 *other)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  float x; // xmm1_4
  double v6; // xmm0_8
  float y; // xmm2_4
  float v8; // xmm4_4
  double v9; // xmm0_8
  float v10; // xmm2_4
  float v11; // xmm1_4
  __int64 v12; // xmm0_8
  __int64 v13; // [rsp+8h] [rbp-98h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF
  Vector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 6 v3:161";
  *(_QWORD *)(v2 + 16) = Vector3::cross;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  x = this->x;
  if ( *(_BYTE *)(((unsigned __int64)&other->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->y);
  }
  *(float *)&v6 = other->y * x;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    v6 = __asan_report_load4(&this->y);
  }
  y = this->y;
  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)other & 7) + 3) >= *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
    v6 = __asan_report_load4(other);
  }
  v8 = *(float *)&v6 - (float)(other->x * y);
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  *(float *)&v9 = other->x * this->z;
  v10 = this->x;
  if ( *(_BYTE *)(((unsigned __int64)&other->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->z >> 3) + 0x7FFF8000) )
  {
    v9 = __asan_report_load4(&other->z);
  }
  Vector3::Vector3(
    (Vector3 *const)(v2 + 32),
    (float)(other->z * this->y) - (float)(other->y * this->z),
    *(float *)&v9 - (float)(other->z * v10),
    v8);
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 43) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 43) & 7) >= *(_BYTE *)(((v2 + 43) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v2 + 32, 12LL);
  }
  v13 = *(_QWORD *)(v2 + 32);
  v11 = *(float *)(v2 + 40);
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v12 = v13;
  result.x = *(float *)&v12;
  result.y = *((float *)&v12 + 1);
  result.z = v11;
  return result;
};

// Line 166: range 000000000CCF1D6C-000000000CCF1F1F
float __cdecl Vector3::dot(const Vector3 *const this, const Vector3 *other)
{
  float x; // xmm1_4
  float v3; // xmm1_4
  float y; // xmm2_4
  float v5; // xmm1_4
  float z; // xmm2_4

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  x = this->x;
  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)other & 7) + 3) >= *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(other);
  }
  v3 = x * other->x;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  y = this->y;
  if ( *(_BYTE *)(((unsigned __int64)&other->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->y);
  }
  v5 = v3 + (float)(other->y * y);
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  z = this->z;
  if ( *(_BYTE *)(((unsigned __int64)&other->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->z);
  }
  return (float)(other->z * z) + v5;
};

// Line 171: range 000000000CCF1F20-000000000CCF2297
std::string *__cdecl Vector3::toString[abi:cxx11](std::string *retstr, const Vector3 *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // r14
  std::_Setprecision v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  char v15[528]; // [rsp+10h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 376 6 os:172";
  *(_QWORD *)(v2 + 16) = Vector3::toString[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862732] = -218103808;
  v4[536862733] = -202116109;
  v4[536862734] = -202116109;
  std::ostringstream::basic_ostringstream(v2 + 32);
  v5 = std::ostream::operator<<(v2 + 32, std::fixed);
  v6._M_n = std::setprecision(1)._M_n;
  v7 = std::operator<<<char,std::char_traits<char>>(v5, (unsigned int)v6._M_n);
  v8 = std::operator<<<std::char_traits<char>>(v7, "{");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  v9 = std::ostream::operator<<(v8, *(double *)_mm_cvtsi32_si128(LODWORD(this->x)).m128i_i64);
  v10 = std::operator<<<std::char_traits<char>>(v9, ",");
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  v11 = std::ostream::operator<<(v10, *(double *)_mm_cvtsi32_si128(LODWORD(this->y)).m128i_i64);
  v12 = std::operator<<<std::char_traits<char>>(v11, ",");
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  v13 = std::ostream::operator<<(v12, *(double *)_mm_cvtsi32_si128(LODWORD(this->z)).m128i_i64);
  std::operator<<<std::char_traits<char>>(v13, "}");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::ostringstream::str(retstr, v2 + 32);
  std::ostringstream::~ostringstream(v2 + 32);
  if ( v15 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  return retstr;
};

// Line 178: range 000000000CCF2298-000000000CCF248D
bool __cdecl operator==(const Vector3 *left, const Vector3 *right)
{
  double v2; // xmm0_8
  double v3; // xmm0_8
  double v4; // xmm0_8

  if ( *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)left & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(left);
  }
  *(float *)&v2 = left->x;
  if ( *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)right & 7) + 3) >= *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4(right);
  }
  if ( std::abs(*(float *)&v2 - right->x) >= 0.00000011920929 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&left->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)left + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&left->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&left->y);
  }
  *(float *)&v3 = left->y;
  if ( *(_BYTE *)(((unsigned __int64)&right->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)right + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&right->y >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(&right->y);
  }
  if ( std::abs(*(float *)&v3 - right->y) >= 0.00000011920929 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&left->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)left + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&left->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&left->z);
  }
  *(float *)&v4 = left->z;
  if ( *(_BYTE *)(((unsigned __int64)&right->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)right + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&right->z >> 3) + 0x7FFF8000) )
  {
    v4 = __asan_report_load4(&right->z);
  }
  return std::abs(*(float *)&v4 - right->z) < 0.00000011920929;
};

// Line 185: range 000000000CCF248E-000000000CCF24B5
bool __cdecl operator!=(const Vector3 *left, const Vector3 *right)
{
  return !operator==(left, right);
};

// Line 190: range 000000000CCF24B6-000000000CCF27AA
Vector3 __cdecl operator+(const Vector3 *left, const Vector3 *right)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  float z; // xmm1_4
  float v6; // xmm2_4
  float y; // xmm1_4
  float v8; // xmm3_4
  float x; // xmm1_4
  float v10; // xmm1_4
  __int64 v11; // xmm0_8
  __int64 v12; // [rsp+8h] [rbp-98h]
  char v13[96]; // [rsp+40h] [rbp-60h] BYREF
  Vector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 9 <unknown>";
  *(_QWORD *)(v2 + 16) = operator+;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)&left->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)left + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&left->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&left->z);
  }
  z = left->z;
  if ( *(_BYTE *)(((unsigned __int64)&right->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)right + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&right->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&right->z);
  }
  v6 = z + right->z;
  if ( *(_BYTE *)(((unsigned __int64)&left->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)left + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&left->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&left->y);
  }
  y = left->y;
  if ( *(_BYTE *)(((unsigned __int64)&right->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)right + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&right->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&right->y);
  }
  v8 = y + right->y;
  if ( *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)left & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(left);
  }
  x = left->x;
  if ( *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)right & 7) + 3) >= *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(right);
  }
  Vector3::Vector3((Vector3 *const)(v2 + 32), right->x + x, v8, v6);
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 43) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 43) & 7) >= *(_BYTE *)(((v2 + 43) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v2 + 32, 12LL);
  }
  v12 = *(_QWORD *)(v2 + 32);
  v10 = *(float *)(v2 + 40);
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v11 = v12;
  result.x = *(float *)&v11;
  result.y = *((float *)&v11 + 1);
  result.z = v10;
  return result;
};

// Line 195: range 000000000CCF27AB-000000000CCF2A9F
Vector3 __cdecl operator-(const Vector3 *left, const Vector3 *right)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  double v5; // xmm0_8
  float v6; // xmm2_4
  double v7; // xmm0_8
  float v8; // xmm3_4
  double v9; // xmm0_8
  float v10; // xmm1_4
  __int64 v11; // xmm0_8
  __int64 v12; // [rsp+8h] [rbp-98h]
  char v13[96]; // [rsp+40h] [rbp-60h] BYREF
  Vector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 9 <unknown>";
  *(_QWORD *)(v2 + 16) = operator-;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)&left->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)left + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&left->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&left->z);
  }
  *(float *)&v5 = left->z;
  if ( *(_BYTE *)(((unsigned __int64)&right->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)right + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&right->z >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load4(&right->z);
  }
  v6 = *(float *)&v5 - right->z;
  if ( *(_BYTE *)(((unsigned __int64)&left->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)left + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&left->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&left->y);
  }
  *(float *)&v7 = left->y;
  if ( *(_BYTE *)(((unsigned __int64)&right->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)right + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&right->y >> 3) + 0x7FFF8000) )
  {
    v7 = __asan_report_load4(&right->y);
  }
  v8 = *(float *)&v7 - right->y;
  if ( *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)left & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(left);
  }
  *(float *)&v9 = left->x;
  if ( *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)right & 7) + 3) >= *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) )
  {
    v9 = __asan_report_load4(right);
  }
  Vector3::Vector3((Vector3 *const)(v2 + 32), *(float *)&v9 - right->x, v8, v6);
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 43) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 43) & 7) >= *(_BYTE *)(((v2 + 43) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v2 + 32, 12LL);
  }
  v12 = *(_QWORD *)(v2 + 32);
  v10 = *(float *)(v2 + 40);
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v11 = v12;
  result.x = *(float *)&v11;
  result.y = *((float *)&v11 + 1);
  result.z = v10;
  return result;
};

// Line 200: range 000000000CCF2AA0-000000000CCF2B47
Vector3 *__cdecl operator+=(Vector3 *left, const Vector3 *right)
{
  if ( ((unsigned __int8)left & 7) >= *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&left->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)left + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&left->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(left, 12LL);
  }
  *left = operator+(left, right);
  return left;
};

// Line 206: range 000000000CCF2B48-000000000CCF2BEF
Vector3 *__cdecl operator-=(Vector3 *left, const Vector3 *right)
{
  if ( ((unsigned __int8)left & 7) >= *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&left->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)left + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&left->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(left, 12LL);
  }
  *left = operator-(left, right);
  return left;
};

// Line 212: range 000000000CCF2BF0-000000000CCF2C98
Vector3 *__cdecl operator*=(Vector3 *vec, float scalar)
{
  if ( ((unsigned __int8)vec & 7) >= *(_BYTE *)(((unsigned __int64)vec >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)vec >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&vec->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)vec + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&vec->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(vec, 12LL);
  }
  *vec = Vector3::operator*(vec, scalar);
  return vec;
};

// Line 218: range 000000000CCF2C99-000000000CCF2F04
Vector3 *__cdecl operator/=(Vector3 *vec, float scalar)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Vector3 *result; // rax
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = operator/=;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( scalar == 0.0 )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/math_def.cpp",
      "operator/=",
      225);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
      (common::milog::MiLogStream *const)(v2 + 32),
      (const char (*)[15])"scalar is zero");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
  }
  else
  {
    if ( ((unsigned __int8)vec & 7) >= *(_BYTE *)(((unsigned __int64)vec >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)vec >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&vec->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)vec + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&vec->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(vec, 12LL);
    }
    *vec = Vector3::operator/(vec, scalar);
  }
  result = vec;
  if ( v6 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 231: range 000000000CCF2F05-000000000CCF30EB
float __cdecl getDistance(const Vector3 *pos1, const Vector3 *pos2)
{
  double v2; // xmm0_8
  double v3; // xmm0_8
  double v4; // xmm0_8
  __gnu_cxx::__promote_2<float,int,float,double>::__type v5; // xmm0_8
  double v7; // [rsp+8h] [rbp-18h]
  double v8; // [rsp+8h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)pos2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pos2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(pos2);
  }
  *(float *)&v2 = pos2->x;
  if ( *(_BYTE *)(((unsigned __int64)pos1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pos1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos1 >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4(pos1);
  }
  v7 = std::pow<float,int>(*(float *)&v2 - pos1->x, 2);
  if ( *(_BYTE *)(((unsigned __int64)&pos2->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pos2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos2->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pos2->y);
  }
  *(float *)&v3 = pos2->y;
  if ( *(_BYTE *)(((unsigned __int64)&pos1->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pos1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos1->y >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(&pos1->y);
  }
  v8 = std::pow<float,int>(*(float *)&v3 - pos1->y, 2) + v7;
  if ( *(_BYTE *)(((unsigned __int64)&pos2->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pos2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos2->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pos2->z);
  }
  *(float *)&v4 = pos2->z;
  if ( *(_BYTE *)(((unsigned __int64)&pos1->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pos1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos1->z >> 3) + 0x7FFF8000) )
  {
    v4 = __asan_report_load4(&pos1->z);
  }
  v5 = std::pow<float,int>(*(float *)&v4 - pos1->z, 2);
  return sqrt(v5 + v8);
};

// Line 236: range 000000000CCF30EC-000000000CCF3232
float __cdecl getDistance(const Vector3 *pos, const data::Point2D *point)
{
  double v2; // xmm0_8
  double v3; // xmm0_8
  __gnu_cxx::__promote_2<float,int,float,double>::__type v4; // xmm0_8
  double v6; // [rsp+8h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)point >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)point & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(point);
  }
  *(float *)&v2 = point->x;
  if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4(pos);
  }
  v6 = std::pow<float,int>(*(float *)&v2 - pos->x, 2);
  if ( *(_BYTE *)(((unsigned __int64)&point->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)point + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&point->y);
  }
  *(float *)&v3 = point->y;
  if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(&pos->z);
  }
  v4 = std::pow<float,int>(*(float *)&v3 - pos->z, 2);
  return sqrt(v4 + v6);
};

// Line 241: range 000000000CCF3233-000000000CCF3379
float __cdecl getPlaneDistance(const Vector3 *pos1, const Vector3 *pos2)
{
  double v2; // xmm0_8
  double v3; // xmm0_8
  __gnu_cxx::__promote_2<float,int,float,double>::__type v4; // xmm0_8
  double v6; // [rsp+8h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)pos2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pos2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(pos2);
  }
  *(float *)&v2 = pos2->x;
  if ( *(_BYTE *)(((unsigned __int64)pos1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pos1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos1 >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4(pos1);
  }
  v6 = std::pow<float,int>(*(float *)&v2 - pos1->x, 2);
  if ( *(_BYTE *)(((unsigned __int64)&pos2->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pos2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos2->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pos2->z);
  }
  *(float *)&v3 = pos2->z;
  if ( *(_BYTE *)(((unsigned __int64)&pos1->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pos1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos1->z >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(&pos1->z);
  }
  v4 = std::pow<float,int>(*(float *)&v3 - pos1->z, 2);
  return sqrt(v4 + v6);
};

// Line 246: range 000000000CCF337A-000000000CCF35F1
Vector3 __cdecl angleToRadian(const Vector3 *rot)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  __int64 v8; // xmm0_8
  __int64 v9; // [rsp+8h] [rbp-98h]
  char v10[96]; // [rsp+40h] [rbp-60h] BYREF
  Vector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 12 10 output:247";
  *(_QWORD *)(v1 + 16) = angleToRadian;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)&rot->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rot + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rot->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rot->z);
  }
  v4 = 3.141592653589793 * rot->z / 180.0;
  if ( *(_BYTE *)(((unsigned __int64)&rot->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rot + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rot->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rot->y);
  }
  v5 = 3.141592653589793 * rot->y / 180.0;
  if ( *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rot & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(rot);
  }
  v6 = 3.141592653589793 * rot->x / 180.0;
  Vector3::Vector3((Vector3 *const)(v1 + 32), v6, v5, v4);
  if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v1 + 43) >> 3) + 0x7FFF8000) != 0
    && (char)((v1 + 43) & 7) >= *(_BYTE *)(((v1 + 43) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v1 + 32, 12LL);
  }
  v9 = *(_QWORD *)(v1 + 32);
  v7 = *(float *)(v1 + 40);
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v8 = v9;
  result.x = *(float *)&v8;
  result.y = *((float *)&v8 + 1);
  result.z = v7;
  return result;
};

// Line 252: range 000000000CCF35F2-000000000CCF3869
Vector3 __cdecl radianToAngle(const Vector3 *rot)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  __int64 v8; // xmm0_8
  __int64 v9; // [rsp+8h] [rbp-98h]
  char v10[96]; // [rsp+40h] [rbp-60h] BYREF
  Vector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 12 10 output:253";
  *(_QWORD *)(v1 + 16) = radianToAngle;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)&rot->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rot + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rot->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rot->z);
  }
  v4 = (float)(180.0 * rot->z) / 3.141592653589793;
  if ( *(_BYTE *)(((unsigned __int64)&rot->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rot + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rot->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rot->y);
  }
  v5 = (float)(180.0 * rot->y) / 3.141592653589793;
  if ( *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rot & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(rot);
  }
  v6 = (float)(180.0 * rot->x) / 3.141592653589793;
  Vector3::Vector3((Vector3 *const)(v1 + 32), v6, v5, v4);
  if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v1 + 43) >> 3) + 0x7FFF8000) != 0
    && (char)((v1 + 43) & 7) >= *(_BYTE *)(((v1 + 43) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v1 + 32, 12LL);
  }
  v9 = *(_QWORD *)(v1 + 32);
  v7 = *(float *)(v1 + 40);
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v8 = v9;
  result.x = *(float *)&v8;
  result.y = *((float *)&v8 + 1);
  result.z = v7;
  return result;
};

// Line 258: range 000000000CCF386A-000000000CCF3DC0
Vector3 __cdecl directionToRotation(const Vector3 *dir, bool is_degree)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  double v10; // xmm0_8
  float v11; // xmm0_4
  float v12; // xmm1_4
  __int64 v13; // xmm0_8
  __int64 v14; // [rsp+8h] [rbp-B8h]
  char v15[128]; // [rsp+40h] [rbp-80h] BYREF
  Vector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 12 7 tmp:259 64 12 7 rot:261";
  *(_QWORD *)(v2 + 16) = directionToRotation;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -202177536;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 43) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 43) & 7) >= *(_BYTE *)(((v2 + 43) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 32, 12LL);
  }
  if ( ((unsigned __int8)dir & 7) >= *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&dir->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)dir + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&dir->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(dir, 12LL);
  }
  *(Vector3 *)(v2 + 32) = *dir;
  Vector3::unitize((Vector3 *const)(v2 + 32));
  Vector3::Vector3((Vector3 *const)(v2 + 64), 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  v5 = *(float *)(v2 + 32) * *(float *)(v2 + 32);
  if ( *(_BYTE *)(((v2 + 36) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 36) & 7) + 3) >= *(_BYTE *)(((v2 + 36) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2 + 36);
  }
  v6 = v5 + (float)(*(float *)(v2 + 36) * *(float *)(v2 + 36));
  v7 = *(float *)(v2 + 36);
  if ( *(_BYTE *)(((v2 + 40) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 40) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 40);
  v8 = -atan2f(*(float *)(v2 + 40) * v7, v6);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 64, (((_BYTE)v2 + 36) & 7u) + 3);
  *(float *)(v2 + 64) = v8;
  v9 = -std::asin(*(float *)(v2 + 40) * (float)-*(float *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 68) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 68) & 7) + 3) >= *(_BYTE *)(((v2 + 68) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v2 + 68, (((_BYTE)v2 + 68) & 7u) + 3);
  }
  *(float *)(v2 + 68) = v9;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  LODWORD(v10) = *(_DWORD *)(v2 + 32);
  if ( *(_BYTE *)(((v2 + 36) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 36) & 7) + 3) >= *(_BYTE *)(((v2 + 36) >> 3) + 0x7FFF8000) )
  {
    v10 = __asan_report_load4(v2 + 36);
  }
  v11 = -atan2f(*(float *)(v2 + 36), *(float *)&v10);
  if ( *(_BYTE *)(((v2 + 72) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 72) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 72, (((_BYTE)v2 + 36) & 7u) + 3);
  *(float *)(v2 + 72) = v11;
  if ( is_degree )
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 75) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 75) & 7) >= *(_BYTE *)(((v2 + 75) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 12LL);
    }
    *(Vector3 *)(v2 + 64) = radianToAngle((const Vector3 *)(v2 + 64));
  }
  if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 75) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 75) & 7) >= *(_BYTE *)(((v2 + 75) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v2 + 64, 12LL);
  }
  v14 = *(_QWORD *)(v2 + 64);
  v12 = *(float *)(v2 + 72);
  if ( v15 == (char *)v2 )
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
  v13 = v14;
  result.x = *(float *)&v13;
  result.y = *((float *)&v13 + 1);
  result.z = v12;
  return result;
};

// Line 273: range 000000000CCF3DC1-000000000CCF3ECF
// local variable allocation has failed, the output may be wrong!
Vector3 __cdecl lookAt(const Vector3 *dir)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  float v4; // xmm1_4
  __int64 v5; // xmm0_8
  __int64 v6; // xmm0_8
  __int64 v7; // [rsp+8h] [rbp-98h]
  const Vector3 *dira; // [rsp+28h] [rbp-78h]
  __int64 v9; // [rsp+34h] [rbp-6Ch]
  float v10; // [rsp+3Ch] [rbp-64h]
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF
  Vector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  dira = dir;
  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 12 6 up:274";
  *(_QWORD *)(v1 + 16) = lookAt;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202177536;
  Vector3::Vector3((Vector3 *const)(v1 + 32), 0.0, 1.0, 0.0);
  *(Vector3 *)(&v4 - 2) = lookAt(dira, (const Vector3 *)(v1 + 32));
  v9 = v5;
  v10 = v4;
  v7 = v5;
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v6 = v7;
  result.x = *(float *)&v6;
  result.y = *((float *)&v6 + 1);
  result.z = v4;
  return result;
};

// Line 279: range 000000000CCF3ED0-000000000CCF45AE
Vector3 __cdecl lookAt(const Vector3 *dir, const Vector3 *up)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  float v5; // xmm1_4
  __int64 v6; // xmm0_8
  __int64 v7; // [rsp+8h] [rbp-178h]
  char v8[320]; // [rsp+40h] [rbp-140h] BYREF
  Vector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 12 5 z:280 80 12 5 x:282 112 12 5 y:284 144 12 7 rot:289 176 12 9 <unknown> 208 36 5 m:285";
  *(_QWORD *)(v2 + 16) = lookAt;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = 0x4000000;
  v4[536862722] = 62194;
  v4[536862722] = 0x4000000;
  v4[536862723] = 62194;
  v4[536862723] = 0x4000000;
  v4[536862724] = 62194;
  v4[536862724] = 0x4000000;
  v4[536862725] = 62194;
  v4[536862725] = 0x4000000;
  v4[536862726] = 62194;
  v4[536862727] = -217841664;
  v4[536862728] = -202116109;
  if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 59) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 59) & 7) >= *(_BYTE *)(((v2 + 59) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 48, 12LL);
  }
  if ( ((unsigned __int8)dir & 7) >= *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&dir->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)dir + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&dir->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(dir, 12LL);
  }
  *(Vector3 *)(v2 + 48) = *dir;
  Vector3::unitize((Vector3 *const)(v2 + 48));
  if ( *(char *)(((v2 + 80) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 91) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 91) & 7) >= *(_BYTE *)(((v2 + 91) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 80, 12LL);
  }
  *(Vector3 *)(v2 + 80) = Vector3::cross(up, dir);
  Vector3::unitize((Vector3 *const)(v2 + 80));
  if ( *(char *)(((v2 + 112) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 123) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 123) & 7) >= *(_BYTE *)(((v2 + 123) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 112, 12LL);
  }
  *(Vector3 *)(v2 + 112) = Vector3::cross((const Vector3 *const)(v2 + 48), (const Vector3 *)(v2 + 80));
  if ( *(char *)(((v2 + 208) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 243) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 48 + 35) & 7) >= *(_BYTE *)(((v2 + 243) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 208, 36LL);
  }
  *(_QWORD *)(v2 + 208) = 0LL;
  *(_QWORD *)(v2 + 216) = 0LL;
  *(_QWORD *)(v2 + 224) = 0LL;
  *(_QWORD *)(v2 + 232) = 0LL;
  *(_DWORD *)(v2 + 240) = 0;
  Matrix3::setCol((Matrix3 *const)(v2 + 208), 0, (const Vector3 *)(v2 + 80));
  Matrix3::setCol((Matrix3 *const)(v2 + 208), 1u, (const Vector3 *)(v2 + 112));
  Matrix3::setCol((Matrix3 *const)(v2 + 208), 2u, (const Vector3 *)(v2 + 48));
  Vector3::Vector3((Vector3 *const)(v2 + 144), 0.0, 0.0, 0.0);
  Matrix3::toEulerAnglesXYZ(
    (const Matrix3 *const)(v2 + 208),
    (float *)(v2 + 144),
    (float *)(v2 + 148),
    (float *)(v2 + 152));
  if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 187) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 80 + 11) & 7) >= *(_BYTE *)(((v2 + 187) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 176, 12LL);
  }
  *(Vector3 *)(v2 + 176) = Vector3::operator*((const Vector3 *const)(v2 + 144), 180.0);
  if ( *(char *)(((v2 + 144) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 155) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 101) & 7) >= *(_BYTE *)(((v2 + 155) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 144, 12LL);
  }
  *(Vector3 *)(v2 + 144) = Vector3::operator/((const Vector3 *const)(v2 + 176), 3.1415927);
  *(_WORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -1800;
  if ( *(char *)(((v2 + 144) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 155) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 101) & 7) >= *(_BYTE *)(((v2 + 155) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v2 + 144, 12LL);
  }
  v7 = *(_QWORD *)(v2 + 144);
  v5 = *(float *)(v2 + 152);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  v6 = v7;
  result.x = *(float *)&v6;
  result.y = *((float *)&v6 + 1);
  result.z = v5;
  return result;
};

// Line 296: range 000000000CCF45AF-000000000CCF4A79
Vector3 __cdecl rotationToDirection(const Vector3 *rot, bool is_degree)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  float v5; // xmm2_4
  float v6; // xmm3_4
  float v7; // xmm0_4
  float z; // xmm1_4
  double v9; // xmm0_8
  float v10; // xmm1_4
  __int64 v11; // xmm0_8
  __int64 v12; // [rsp+8h] [rbp-F8h]
  char v13[192]; // [rsp+40h] [rbp-C0h] BYREF
  Vector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 12 7 dir:306 80 36 7 mtx:297";
  *(_QWORD *)(v2 + 16) = rotationToDirection;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = 0x4000000;
  v4[536862722] = 62194;
  v4[536862723] = -217841664;
  v4[536862724] = -202116109;
  if ( *(char *)(((v2 + 80) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 115) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 115) & 7) >= *(_BYTE *)(((v2 + 115) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 80, 36LL);
  }
  *(_QWORD *)(v2 + 80) = 0LL;
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_DWORD *)(v2 + 112) = 0;
  if ( is_degree )
  {
    if ( *(_BYTE *)(((unsigned __int64)&rot->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rot + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rot->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rot->z);
    }
    v5 = 3.141592653589793 * rot->z / 180.0;
    if ( *(_BYTE *)(((unsigned __int64)&rot->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rot + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rot->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rot->y);
    }
    v6 = 3.141592653589793 * rot->y / 180.0;
    if ( *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)rot & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(rot);
    }
    v7 = 3.141592653589793 * rot->x / 180.0;
    Matrix3::fromEulerAnglesXYZ((Matrix3 *const)(v2 + 80), v7, v6, v5);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&rot->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rot + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rot->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rot->z);
    }
    z = rot->z;
    if ( *(_BYTE *)(((unsigned __int64)&rot->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rot + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rot->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rot->y);
    }
    *(float *)&v9 = rot->y;
    if ( *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)rot & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) )
    {
      v9 = __asan_report_load4(rot);
    }
    Matrix3::fromEulerAnglesXYZ((Matrix3 *const)(v2 + 80), rot->x, *(float *)&v9, z);
  }
  Vector3::Vector3((Vector3 *const)(v2 + 48), 0.0, 0.0, 0.0);
  Matrix3::getCol((Matrix3 *const)(v2 + 80), 2u, (Vector3 *)(v2 + 48));
  if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 59) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 59) & 7) >= *(_BYTE *)(((v2 + 59) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v2 + 48, 12LL);
  }
  v12 = *(_QWORD *)(v2 + 48);
  v10 = *(float *)(v2 + 56);
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  v11 = v12;
  result.x = *(float *)&v11;
  result.y = *((float *)&v11 + 1);
  result.z = v10;
  return result;
};

// Line 312: range 000000000CCF4A7A-000000000CCF4B02
float __cdecl calcTwoDirAngle(const Vector3 *dir1, const Vector3 *dir2)
{
  float Length; // [rsp+8h] [rbp-28h]
  float v4; // [rsp+Ch] [rbp-24h]
  float cos; // [rsp+2Ch] [rbp-4h]

  v4 = Vector3::dot(dir1, dir2);
  Length = Vector3::getLength(dir1);
  cos = v4 / (float)(Vector3::getLength(dir2) * Length);
  return (float)(std::acos(cos) * 180.0) / 3.141592653589793;
};

// Line 318: range 000000000CCF4B03-000000000CCF4E46
Vector3 __cdecl interpolate(const Vector3 *vec1, const Vector3 *vec2, float t)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  float z; // xmm1_4
  float v7; // xmm4_4
  float y; // xmm1_4
  float v9; // xmm3_4
  float x; // xmm1_4
  float v11; // xmm1_4
  __int64 v12; // xmm0_8
  __int64 v13; // [rsp+8h] [rbp-A8h]
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF
  Vector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 12 10 output:319";
  *(_QWORD *)(v3 + 16) = interpolate;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)&vec1->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)vec1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vec1->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&vec1->z);
  }
  z = vec1->z;
  if ( *(_BYTE *)(((unsigned __int64)&vec2->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)vec2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vec2->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&vec2->z);
  }
  v7 = z + (float)((float)(vec2->z - vec1->z) * t);
  if ( *(_BYTE *)(((unsigned __int64)&vec1->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)vec1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vec1->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&vec1->y);
  }
  y = vec1->y;
  if ( *(_BYTE *)(((unsigned __int64)&vec2->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)vec2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vec2->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&vec2->y);
  }
  v9 = y + (float)((float)(vec2->y - vec1->y) * t);
  if ( *(_BYTE *)(((unsigned __int64)vec1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)vec1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)vec1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(vec1);
  }
  x = vec1->x;
  if ( *(_BYTE *)(((unsigned __int64)vec2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)vec2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)vec2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(vec2);
  }
  Vector3::Vector3((Vector3 *const)(v3 + 32), (float)((float)(vec2->x - vec1->x) * t) + x, v9, v7);
  if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 43) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 43) & 7) >= *(_BYTE *)(((v3 + 43) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v3 + 32, 12LL);
  }
  v13 = *(_QWORD *)(v3 + 32);
  v11 = *(float *)(v3 + 40);
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v12 = v13;
  result.x = *(float *)&v12;
  result.y = *((float *)&v12 + 1);
  result.z = v11;
  return result;
};

// Line 325: range 000000000CCF4E48-000000000CCF4EFA
float __cdecl Vector2::getLength(const Vector2 *const this)
{
  float v1; // xmm1_4

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  v1 = this->x * this->x;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  return std::sqrt((float)(this->y * this->y) + v1);
};

// Line 330: range 000000000CCF4EFC-000000000CCF4FD5
void __cdecl Vector2::normalize(Vector2 *const this)
{
  __m128i v1; // xmm0
  float length; // [rsp+1Ch] [rbp-4h]

  *(float *)v1.m128i_i32 = Vector2::getLength(this);
  length = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  if ( length != 0.0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(this);
    }
    this->x = this->x / length;
    if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->y);
    }
    this->y = this->y / length;
  }
};

// Line 341: range 000000000CCF4FD6-000000000CCF5058
float __cdecl Matrix3::getEntry(const Matrix3 *const this, uint32_t row, uint32_t col)
{
  unsigned __int64 v3; // rax

  v3 = (unsigned __int64)&this->entries[row][col];
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) != 0 && (char)((v3 & 7) + 3) >= *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load4(v3);
  return this->entries[row][col];
};

// Line 346: range 000000000CCF505A-000000000CCF5154
void __cdecl Matrix3::makeRotation(Matrix3 *const this, float angle, const Vector3 *axis)
{
  float z; // xmm2_4
  float y; // xmm1_4

  if ( *(_BYTE *)(((unsigned __int64)&axis->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)axis + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&axis->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&axis->z);
  }
  z = axis->z;
  if ( *(_BYTE *)(((unsigned __int64)&axis->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)axis + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&axis->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&axis->y);
  }
  y = axis->y;
  if ( *(_BYTE *)(((unsigned __int64)axis >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)axis & 7) + 3) >= *(_BYTE *)(((unsigned __int64)axis >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(axis);
  }
  Matrix3::makeRotation(this, angle, axis->x, y, z);
};

// Line 351: range 000000000CCF5156-000000000CCF5517
void __cdecl Matrix3::makeRotation(Matrix3 *const this, float angle, float x, float y, float z)
{
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  float sn; // [rsp+20h] [rbp-30h]
  float cs_0; // [rsp+24h] [rbp-2Ch]
  float omcs; // [rsp+28h] [rbp-28h]
  float xym; // [rsp+38h] [rbp-18h]
  float xzm; // [rsp+3Ch] [rbp-14h]
  float yzm; // [rsp+40h] [rbp-10h]
  float xsin; // [rsp+44h] [rbp-Ch]
  float ysin; // [rsp+48h] [rbp-8h]
  float zsin; // [rsp+4Ch] [rbp-4h]

  v5 = _mm_cvtsi32_si128(LODWORD(angle));
  *(float *)v5.m128i_i32 = std::sin(*(float *)v5.m128i_i32);
  sn = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  v6 = _mm_cvtsi32_si128(LODWORD(angle));
  *(float *)v6.m128i_i32 = std::cos(*(float *)v6.m128i_i32);
  cs_0 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  omcs = 1.0 - cs_0;
  xym = (float)(x * y) * (float)(1.0 - cs_0);
  xzm = (float)(x * z) * (float)(1.0 - cs_0);
  yzm = (float)(y * z) * (float)(1.0 - cs_0);
  xsin = x * sn;
  ysin = y * sn;
  zsin = z * sn;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->entries[0][0] = (float)((float)(x * x) * (float)(1.0 - cs_0)) + cs_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[0][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[0][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entries[0][1], (((_BYTE)this + 4) & 7u) + 3);
  }
  this->entries[0][1] = xym + zsin;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[0][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[0][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entries[0][2], (((_BYTE)this + 8) & 7u) + 3);
  }
  this->entries[0][2] = xzm - ysin;
  if ( *(_BYTE *)(((unsigned __int64)this->entries[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->entries[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this->entries[1], (((_BYTE)this + 12) & 7u) + 3);
  }
  this->entries[1][0] = xym - zsin;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[1][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[1][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entries[1][1], (((_BYTE)this + 16) & 7u) + 3);
  }
  this->entries[1][1] = (float)((float)(y * y) * omcs) + cs_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[1][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[1][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entries[1][2], (((_BYTE)this + 20) & 7u) + 3);
  }
  this->entries[1][2] = yzm + xsin;
  if ( *(_BYTE *)(((unsigned __int64)this->entries[2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->entries[2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this->entries[2], (((_BYTE)this + 24) & 7u) + 3);
  }
  this->entries[2][0] = xzm + ysin;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[2][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[2][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entries[2][1], (((_BYTE)this + 28) & 7u) + 3);
  }
  this->entries[2][1] = yzm - xsin;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[2][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[2][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entries[2][2], (((_BYTE)this + 32) & 7u) + 3);
  }
  this->entries[2][2] = (float)((float)(z * z) * omcs) + cs_0;
};

// Line 378: range 000000000CCF5518-000000000CCF57E7
void __cdecl Matrix3::makeXRotation(Matrix3 *const this, float angle)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm0
  float sn; // [rsp+18h] [rbp-8h]
  float cs_0; // [rsp+1Ch] [rbp-4h]

  v2 = _mm_cvtsi32_si128(LODWORD(angle));
  *(float *)v2.m128i_i32 = std::sin(*(float *)v2.m128i_i32);
  sn = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  v3 = _mm_cvtsi32_si128(LODWORD(angle));
  *(float *)v3.m128i_i32 = std::cos(*(float *)v3.m128i_i32);
  cs_0 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->entries[0][0] = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[0][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[0][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entries[0][1], (((_BYTE)this + 4) & 7u) + 3);
  }
  this->entries[0][1] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[0][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[0][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entries[0][2], (((_BYTE)this + 8) & 7u) + 3);
  }
  this->entries[0][2] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)this->entries[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->entries[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this->entries[1], (((_BYTE)this + 12) & 7u) + 3);
  }
  this->entries[1][0] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[1][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[1][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entries[1][1], (((_BYTE)this + 16) & 7u) + 3);
  }
  this->entries[1][1] = cs_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[1][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[1][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entries[1][2], (((_BYTE)this + 20) & 7u) + 3);
  }
  this->entries[1][2] = -sn;
  if ( *(_BYTE *)(((unsigned __int64)this->entries[2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->entries[2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this->entries[2], (((_BYTE)this + 24) & 7u) + 3);
  }
  this->entries[2][0] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[2][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[2][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entries[2][1], (((_BYTE)this + 28) & 7u) + 3);
  }
  this->entries[2][1] = sn;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[2][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[2][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entries[2][2], (((_BYTE)this + 32) & 7u) + 3);
  }
  this->entries[2][2] = cs_0;
};

// Line 394: range 000000000CCF57E8-000000000CCF5AB7
void __cdecl Matrix3::makeYRotation(Matrix3 *const this, float angle)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm0
  float sn; // [rsp+18h] [rbp-8h]
  float cs_0; // [rsp+1Ch] [rbp-4h]

  v2 = _mm_cvtsi32_si128(LODWORD(angle));
  *(float *)v2.m128i_i32 = std::sin(*(float *)v2.m128i_i32);
  sn = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  v3 = _mm_cvtsi32_si128(LODWORD(angle));
  *(float *)v3.m128i_i32 = std::cos(*(float *)v3.m128i_i32);
  cs_0 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->entries[0][0] = cs_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[0][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[0][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entries[0][1], (((_BYTE)this + 4) & 7u) + 3);
  }
  this->entries[0][1] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[0][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[0][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entries[0][2], (((_BYTE)this + 8) & 7u) + 3);
  }
  this->entries[0][2] = sn;
  if ( *(_BYTE *)(((unsigned __int64)this->entries[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->entries[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this->entries[1], (((_BYTE)this + 12) & 7u) + 3);
  }
  this->entries[1][0] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[1][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[1][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entries[1][1], (((_BYTE)this + 16) & 7u) + 3);
  }
  this->entries[1][1] = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[1][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[1][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entries[1][2], (((_BYTE)this + 20) & 7u) + 3);
  }
  this->entries[1][2] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)this->entries[2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->entries[2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this->entries[2], (((_BYTE)this + 24) & 7u) + 3);
  }
  this->entries[2][0] = -sn;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[2][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[2][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entries[2][1], (((_BYTE)this + 28) & 7u) + 3);
  }
  this->entries[2][1] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[2][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[2][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entries[2][2], (((_BYTE)this + 32) & 7u) + 3);
  }
  this->entries[2][2] = cs_0;
};

// Line 410: range 000000000CCF5AB8-000000000CCF5D87
void __cdecl Matrix3::makeZRotation(Matrix3 *const this, float angle)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm0
  float sn; // [rsp+18h] [rbp-8h]
  float cs_0; // [rsp+1Ch] [rbp-4h]

  v2 = _mm_cvtsi32_si128(LODWORD(angle));
  *(float *)v2.m128i_i32 = std::sin(*(float *)v2.m128i_i32);
  sn = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  v3 = _mm_cvtsi32_si128(LODWORD(angle));
  *(float *)v3.m128i_i32 = std::cos(*(float *)v3.m128i_i32);
  cs_0 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->entries[0][0] = cs_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[0][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[0][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entries[0][1], (((_BYTE)this + 4) & 7u) + 3);
  }
  this->entries[0][1] = -sn;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[0][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[0][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entries[0][2], (((_BYTE)this + 8) & 7u) + 3);
  }
  this->entries[0][2] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)this->entries[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->entries[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this->entries[1], (((_BYTE)this + 12) & 7u) + 3);
  }
  this->entries[1][0] = sn;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[1][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[1][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entries[1][1], (((_BYTE)this + 16) & 7u) + 3);
  }
  this->entries[1][1] = cs_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[1][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[1][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entries[1][2], (((_BYTE)this + 20) & 7u) + 3);
  }
  this->entries[1][2] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)this->entries[2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->entries[2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this->entries[2], (((_BYTE)this + 24) & 7u) + 3);
  }
  this->entries[2][0] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[2][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[2][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entries[2][1], (((_BYTE)this + 28) & 7u) + 3);
  }
  this->entries[2][1] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[2][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[2][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entries[2][2], (((_BYTE)this + 32) & 7u) + 3);
  }
  this->entries[2][2] = 1.0;
};

// Line 426: range 000000000CCF5D88-000000000CCF6294
void __cdecl Matrix3::fromEulerAnglesXYZ(Matrix3 *const this, float x_angle, float y_angle, float z_angle)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  Matrix3 *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rdx
  Matrix3 v10; // [rsp+0h] [rbp-1E0h] BYREF
  float z_anglea; // [rsp+3Ch] [rbp-1A4h]
  float y_anglea; // [rsp+40h] [rbp-1A0h]
  float x_anglea; // [rsp+44h] [rbp-19Ch]
  Matrix3 *thisa; // [rsp+48h] [rbp-198h]
  char v15[400]; // [rsp+50h] [rbp-190h] BYREF

  thisa = this;
  x_anglea = x_angle;
  y_anglea = y_angle;
  z_anglea = z_angle;
  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 36 9 x_rot:427 112 36 9 y_rot:427 192 36 9 z_rot:427 272 36 9 <unknown>";
  *(_QWORD *)(v4 + 16) = Matrix3::fromEulerAnglesXYZ;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862722] = -218959356;
  v6[536862723] = 62194;
  v6[536862724] = -234618880;
  v6[536862725] = -218959118;
  v6[536862727] = -218959356;
  v6[536862728] = 62194;
  v6[536862729] = -217841664;
  v6[536862730] = -202116109;
  if ( *(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 67) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 67) & 7) >= *(_BYTE *)(((v4 + 67) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 32, 36LL);
  }
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_QWORD *)(v4 + 40) = 0LL;
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_QWORD *)(v4 + 56) = 0LL;
  *(_DWORD *)(v4 + 64) = 0;
  if ( *(char *)(((v4 + 112) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 147) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 109) & 7) >= *(_BYTE *)(((v4 + 147) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 112, 36LL);
  }
  *(_QWORD *)(v4 + 112) = 0LL;
  *(_QWORD *)(v4 + 120) = 0LL;
  *(_QWORD *)(v4 + 128) = 0LL;
  *(_QWORD *)(v4 + 136) = 0LL;
  *(_DWORD *)(v4 + 144) = 0;
  if ( *(char *)(((v4 + 192) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 227) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 29) & 7) >= *(_BYTE *)(((v4 + 227) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 192, 36LL);
  }
  *(_QWORD *)(v4 + 192) = 0LL;
  *(_QWORD *)(v4 + 200) = 0LL;
  *(_QWORD *)(v4 + 208) = 0LL;
  *(_QWORD *)(v4 + 216) = 0LL;
  *(_DWORD *)(v4 + 224) = 0;
  Matrix3::makeXRotation((Matrix3 *const)(v4 + 32), x_anglea);
  Matrix3::makeYRotation((Matrix3 *const)(v4 + 112), y_anglea);
  Matrix3::makeZRotation((Matrix3 *const)(v4 + 192), z_anglea);
  if ( *(char *)(((v4 + 272) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 307) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 51) & 7) >= *(_BYTE *)(((v4 + 307) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 272, 36LL);
  }
  Matrix3::operator*((Matrix3 *)(v4 + 272), (const Matrix3 *const)(v4 + 112), (const Matrix3 *)(v4 + 32));
  if ( ((unsigned __int8)thisa & 7) >= *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&thisa->entries[2][2] + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)thisa + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&thisa->entries[2][2] + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(thisa, 36LL);
  }
  v7 = thisa;
  Matrix3::operator*(&v10, (const Matrix3 *const)(v4 + 272), (const Matrix3 *)(v4 + 192));
  v8 = *(_QWORD *)&v10.entries[0][2];
  *(_QWORD *)&v7->entries[0][0] = *(_QWORD *)&v10.entries[0][0];
  *(_QWORD *)&v7->entries[0][2] = v8;
  v9 = *(_QWORD *)&v10.entries[2][0];
  *(_QWORD *)&v7->entries[1][1] = *(_QWORD *)&v10.entries[1][1];
  *(_QWORD *)&v7->entries[2][0] = v9;
  v7->entries[2][2] = v10.entries[2][2];
  if ( v15 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 435: range 000000000CCF6296-000000000CCF6786
Vector3 __cdecl Matrix3::operator*(const Matrix3 *const this, const Vector3 *pt)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  double v10; // xmm0_8
  float v11; // xmm2_4
  float v12; // xmm2_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  __int64 v17; // xmm0_8
  __int64 v18; // [rsp+8h] [rbp-98h]
  char v19[96]; // [rsp+40h] [rbp-60h] BYREF
  Vector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 6 p3:436";
  *(_QWORD *)(v2 + 16) = Matrix3::operator*;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  v5 = this->entries[0][0];
  if ( *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pt & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(pt);
  }
  v6 = v5 * pt->x;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[0][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[0][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entries[0][1]);
  }
  v7 = this->entries[0][1];
  if ( *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pt + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pt->y);
  }
  v8 = v6 + (float)(pt->y * v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[0][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[0][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entries[0][2]);
  }
  v9 = this->entries[0][2];
  if ( *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pt + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pt->z);
  }
  *(float *)&v10 = (float)(pt->z * v9) + v8;
  if ( *(_BYTE *)(((unsigned __int64)this->entries[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->entries[1] >> 3) + 0x7FFF8000) )
  {
    v10 = __asan_report_load4(this->entries[1]);
  }
  v11 = this->entries[1][0] * pt->x;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[1][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[1][1] >> 3) + 0x7FFF8000) )
  {
    v10 = __asan_report_load4(&this->entries[1][1]);
  }
  v12 = v11 + (float)(pt->y * this->entries[1][1]);
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[1][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[1][2] >> 3) + 0x7FFF8000) )
  {
    v10 = __asan_report_load4(&this->entries[1][2]);
  }
  v13 = v12 + (float)(pt->z * this->entries[1][2]);
  if ( *(_BYTE *)(((unsigned __int64)this->entries[2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->entries[2] >> 3) + 0x7FFF8000) )
  {
    v10 = __asan_report_load4(this->entries[2]);
  }
  v14 = this->entries[2][0] * pt->x;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[2][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[2][1] >> 3) + 0x7FFF8000) )
  {
    v10 = __asan_report_load4(&this->entries[2][1]);
  }
  v15 = v14 + (float)(pt->y * this->entries[2][1]);
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[2][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[2][2] >> 3) + 0x7FFF8000) )
  {
    v10 = __asan_report_load4(&this->entries[2][2]);
  }
  Vector3::Vector3((Vector3 *const)(v2 + 32), *(float *)&v10, v13, (float)(pt->z * this->entries[2][2]) + v15);
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 43) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 43) & 7) >= *(_BYTE *)(((v2 + 43) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v2 + 32, 12LL);
  }
  v18 = *(_QWORD *)(v2 + 32);
  v16 = *(float *)(v2 + 40);
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v17 = v18;
  result.x = *(float *)&v17;
  result.y = *((float *)&v17 + 1);
  result.z = v16;
  return result;
};

// Line 446: range 000000000CCF6788-000000000CCF70DD
Matrix3 *__cdecl Matrix3::operator*(Matrix3 *retstr, const Matrix3 *const this, const Matrix3 *mat)
{
  float v3; // xmm1_4
  float v4; // xmm1_4
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  float v30; // xmm0_4

  *(_OWORD *)&retstr->entries[0][0] = 0uLL;
  *(_QWORD *)&retstr->entries[1][1] = 0LL;
  *(_QWORD *)&retstr->entries[2][0] = 0LL;
  retstr->entries[2][2] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  v3 = this->entries[0][0];
  if ( *(_BYTE *)(((unsigned __int64)mat >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)mat & 7) + 3) >= *(_BYTE *)(((unsigned __int64)mat >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(mat);
  }
  v4 = v3 * mat->entries[0][0];
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[0][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[0][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entries[0][1]);
  }
  v5 = this->entries[0][1];
  if ( *(_BYTE *)(((unsigned __int64)mat->entries[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)mat + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)mat->entries[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(mat->entries[1]);
  }
  v6 = v4 + (float)(mat->entries[1][0] * v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[0][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[0][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entries[0][2]);
  }
  v7 = this->entries[0][2];
  if ( *(_BYTE *)(((unsigned __int64)mat->entries[2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)mat + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)mat->entries[2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(mat->entries[2]);
  }
  v8 = (float)(mat->entries[2][0] * v7) + v6;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)retstr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(retstr, ((unsigned __int8)retstr & 7u) + 3);
  }
  retstr->entries[0][0] = v8;
  if ( *(_BYTE *)(((unsigned __int64)this->entries[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->entries[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this->entries[1]);
  }
  v9 = this->entries[1][0] * mat->entries[0][0];
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[1][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[1][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entries[1][1]);
  }
  v10 = v9 + (float)(mat->entries[1][0] * this->entries[1][1]);
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[1][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[1][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entries[1][2]);
  }
  v11 = (float)(mat->entries[2][0] * this->entries[1][2]) + v10;
  if ( *(_BYTE *)(((unsigned __int64)retstr->entries[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)retstr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retstr->entries[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(retstr->entries[1], (((_BYTE)retstr + 12) & 7u) + 3);
  }
  retstr->entries[1][0] = v11;
  if ( *(_BYTE *)(((unsigned __int64)this->entries[2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->entries[2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this->entries[2]);
  }
  v12 = this->entries[2][0] * mat->entries[0][0];
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[2][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[2][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entries[2][1]);
  }
  v13 = v12 + (float)(mat->entries[1][0] * this->entries[2][1]);
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[2][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[2][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entries[2][2]);
  }
  v14 = (float)(mat->entries[2][0] * this->entries[2][2]) + v13;
  if ( *(_BYTE *)(((unsigned __int64)retstr->entries[2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)retstr + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retstr->entries[2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(retstr->entries[2], (((_BYTE)retstr + 24) & 7u) + 3);
  }
  retstr->entries[2][0] = v14;
  v15 = this->entries[0][0];
  if ( *(_BYTE *)(((unsigned __int64)&mat->entries[0][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)mat + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mat->entries[0][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&mat->entries[0][1]);
  }
  v16 = v15 * mat->entries[0][1];
  v17 = this->entries[0][1];
  if ( *(_BYTE *)(((unsigned __int64)&mat->entries[1][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)mat + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mat->entries[1][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&mat->entries[1][1]);
  }
  v18 = v16 + (float)(mat->entries[1][1] * v17);
  v19 = this->entries[0][2];
  if ( *(_BYTE *)(((unsigned __int64)&mat->entries[2][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)mat + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mat->entries[2][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&mat->entries[2][1]);
  }
  v20 = (float)(mat->entries[2][1] * v19) + v18;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->entries[0][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)retstr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&retstr->entries[0][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&retstr->entries[0][1], (((_BYTE)retstr + 4) & 7u) + 3);
  }
  retstr->entries[0][1] = v20;
  v21 = (float)(mat->entries[2][1] * this->entries[1][2])
      + (float)((float)(this->entries[1][0] * mat->entries[0][1]) + (float)(mat->entries[1][1] * this->entries[1][1]));
  if ( *(_BYTE *)(((unsigned __int64)&retstr->entries[1][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)retstr + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&retstr->entries[1][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&retstr->entries[1][1], (((_BYTE)retstr + 16) & 7u) + 3);
  }
  retstr->entries[1][1] = v21;
  v22 = (float)(mat->entries[2][1] * this->entries[2][2])
      + (float)((float)(this->entries[2][0] * mat->entries[0][1]) + (float)(mat->entries[1][1] * this->entries[2][1]));
  if ( *(_BYTE *)(((unsigned __int64)&retstr->entries[2][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)retstr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&retstr->entries[2][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&retstr->entries[2][1], (((_BYTE)retstr + 28) & 7u) + 3);
  }
  retstr->entries[2][1] = v22;
  v23 = this->entries[0][0];
  if ( *(_BYTE *)(((unsigned __int64)&mat->entries[0][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)mat + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mat->entries[0][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&mat->entries[0][2]);
  }
  v24 = v23 * mat->entries[0][2];
  v25 = this->entries[0][1];
  if ( *(_BYTE *)(((unsigned __int64)&mat->entries[1][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)mat + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mat->entries[1][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&mat->entries[1][2]);
  }
  v26 = v24 + (float)(mat->entries[1][2] * v25);
  v27 = this->entries[0][2];
  if ( *(_BYTE *)(((unsigned __int64)&mat->entries[2][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)mat + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mat->entries[2][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&mat->entries[2][2]);
  }
  v28 = (float)(mat->entries[2][2] * v27) + v26;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->entries[0][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)retstr + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&retstr->entries[0][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&retstr->entries[0][2], (((_BYTE)retstr + 8) & 7u) + 3);
  }
  retstr->entries[0][2] = v28;
  v29 = (float)(mat->entries[2][2] * this->entries[1][2])
      + (float)((float)(this->entries[1][0] * mat->entries[0][2]) + (float)(mat->entries[1][2] * this->entries[1][1]));
  if ( *(_BYTE *)(((unsigned __int64)&retstr->entries[1][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)retstr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&retstr->entries[1][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&retstr->entries[1][2], (((_BYTE)retstr + 20) & 7u) + 3);
  }
  retstr->entries[1][2] = v29;
  v30 = (float)(mat->entries[2][2] * this->entries[2][2])
      + (float)((float)(this->entries[2][0] * mat->entries[0][2]) + (float)(mat->entries[1][2] * this->entries[2][1]));
  if ( *(_BYTE *)(((unsigned __int64)&retstr->entries[2][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)retstr + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&retstr->entries[2][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&retstr->entries[2][2], (((_BYTE)retstr + 32) & 7u) + 3);
  }
  retstr->entries[2][2] = v30;
  return retstr;
};

// Line 488: range 000000000CCF70DE-000000000CCF78D0
bool __cdecl Matrix3::toEulerAnglesXYZ(const Matrix3 *const this, float *x_angle, float *y_angle, float *z_angle)
{
  __int64 v4; // rsi
  __m128i v5; // xmm0
  int v6; // ecx
  char v7; // dl
  double v8; // xmm0_8
  __int64 v9; // rsi
  float v10; // xmm1_4
  __m128i v11; // xmm0
  int v12; // ecx
  char v13; // dl
  double v14; // xmm0_8
  __int64 v15; // rsi
  float v16; // xmm1_4
  __m128i v17; // xmm0
  int v18; // ecx
  char v19; // dl
  double v20; // xmm0_8
  __int64 v21; // rsi
  float v22; // xmm1_4
  __m128i v23; // xmm0
  int v24; // ecx
  char v25; // dl
  float v26; // xmm2_4
  __int64 v27; // rsi
  __m128i v28; // xmm0
  int v29; // ecx
  char v30; // dl
  float v31; // xmm0_4
  float v32; // xmm0_4
  float v33; // xmm0_4
  float v34; // xmm0_4
  float v35; // xmm0_4
  float v36; // xmm0_4

  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[1][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[1][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entries[1][2]);
  }
  if ( this->entries[1][2] >= 1.0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)x_angle >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)x_angle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)x_angle >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(x_angle, ((unsigned __int8)x_angle & 7u) + 3);
    }
    *x_angle = -1.5707964;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(this);
    }
    v26 = this->entries[0][0];
    v27 = (((_BYTE)this + 4) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->entries[0][1] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[0][1] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->entries[0][1]);
    }
    v28 = (__m128i)_mm_xor_ps((__m128)LODWORD(this->entries[0][1]), (__m128)0x80000000);
    *(float *)v28.m128i_i32 = atan2f(*(float *)v28.m128i_i32, v26);
    v29 = _mm_cvtsi128_si32(v28);
    v30 = *(_BYTE *)(((unsigned __int64)y_angle >> 3) + 0x7FFF8000);
    if ( v30 != 0 && (char)(((unsigned __int8)y_angle & 7) + 3) >= v30 )
    {
      LOBYTE(v27) = v30 != 0;
      __asan_report_store4(y_angle, v27);
    }
    *(_DWORD *)y_angle = v29;
    if ( *(_BYTE *)(((unsigned __int64)z_angle >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)z_angle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)z_angle >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(z_angle, ((unsigned __int8)z_angle & 7u) + 3);
    }
    *z_angle = 0.0;
  }
  else if ( this->entries[1][2] <= -1.0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)x_angle >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)x_angle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)x_angle >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(x_angle, ((unsigned __int8)x_angle & 7u) + 3);
    }
    *x_angle = 1.5707964;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(this);
    }
    *(float *)&v20 = this->entries[0][0];
    v21 = (((_BYTE)this + 4) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->entries[0][1] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[0][1] >> 3) + 0x7FFF8000) )
    {
      v20 = __asan_report_load4(&this->entries[0][1]);
    }
    v22 = *(float *)&v20;
    v23 = _mm_cvtsi32_si128(LODWORD(this->entries[0][1]));
    *(float *)v23.m128i_i32 = atan2f(*(float *)v23.m128i_i32, v22);
    v24 = _mm_cvtsi128_si32(v23);
    v25 = *(_BYTE *)(((unsigned __int64)y_angle >> 3) + 0x7FFF8000);
    if ( v25 != 0 && (char)(((unsigned __int8)y_angle & 7) + 3) >= v25 )
    {
      LOBYTE(v21) = v25 != 0;
      __asan_report_store4(y_angle, v21);
    }
    *(_DWORD *)y_angle = v24;
    if ( *(_BYTE *)(((unsigned __int64)z_angle >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)z_angle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)z_angle >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(z_angle, ((unsigned __int8)z_angle & 7u) + 3);
    }
    *z_angle = 0.0;
  }
  else
  {
    v5 = (__m128i)_mm_xor_ps((__m128)LODWORD(this->entries[1][2]), (__m128)0x80000000);
    *(float *)v5.m128i_i32 = std::asin(*(float *)v5.m128i_i32);
    v6 = _mm_cvtsi128_si32(v5);
    v7 = *(_BYTE *)(((unsigned __int64)x_angle >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (char)(((unsigned __int8)x_angle & 7) + 3) >= v7 )
    {
      LOBYTE(v4) = v7 != 0;
      __asan_report_store4(x_angle, v4);
    }
    *(_DWORD *)x_angle = v6;
    if ( *(_BYTE *)(((unsigned __int64)&this->entries[2][2] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[2][2] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->entries[2][2]);
    }
    *(float *)&v8 = this->entries[2][2];
    v9 = (((_BYTE)this + 8) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->entries[0][2] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[0][2] >> 3) + 0x7FFF8000) )
    {
      v8 = __asan_report_load4(&this->entries[0][2]);
    }
    v10 = *(float *)&v8;
    v11 = _mm_cvtsi32_si128(LODWORD(this->entries[0][2]));
    *(float *)v11.m128i_i32 = atan2f(*(float *)v11.m128i_i32, v10);
    v12 = _mm_cvtsi128_si32(v11);
    v13 = *(_BYTE *)(((unsigned __int64)y_angle >> 3) + 0x7FFF8000);
    if ( v13 != 0 && (char)(((unsigned __int8)y_angle & 7) + 3) >= v13 )
    {
      LOBYTE(v9) = v13 != 0;
      __asan_report_store4(y_angle, v9);
    }
    *(_DWORD *)y_angle = v12;
    if ( *(_BYTE *)(((unsigned __int64)&this->entries[1][1] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[1][1] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->entries[1][1]);
    }
    *(float *)&v14 = this->entries[1][1];
    v15 = (((_BYTE)this + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)this->entries[1] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->entries[1] >> 3) + 0x7FFF8000) )
    {
      v14 = __asan_report_load4(this->entries[1]);
    }
    v16 = *(float *)&v14;
    v17 = _mm_cvtsi32_si128(LODWORD(this->entries[1][0]));
    *(float *)v17.m128i_i32 = atan2f(*(float *)v17.m128i_i32, v16);
    v18 = _mm_cvtsi128_si32(v17);
    v19 = *(_BYTE *)(((unsigned __int64)z_angle >> 3) + 0x7FFF8000);
    if ( v19 != 0 && (char)(((unsigned __int8)z_angle & 7) + 3) >= v19 )
    {
      LOBYTE(v15) = v19 != 0;
      __asan_report_store4(z_angle, v15);
    }
    *(_DWORD *)z_angle = v18;
  }
  if ( *(_BYTE *)(((unsigned __int64)x_angle >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)x_angle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)x_angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(x_angle);
  }
  if ( *x_angle >= 0.0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)x_angle >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)x_angle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)x_angle >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(x_angle);
    }
    if ( *x_angle > 6.283185307179586 )
    {
      v32 = *x_angle - 6.283185307179586;
      *x_angle = v32;
    }
  }
  else
  {
    v31 = *x_angle + 6.283185307179586;
    *x_angle = v31;
  }
  if ( *(_BYTE *)(((unsigned __int64)y_angle >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)y_angle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)y_angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(y_angle);
  }
  if ( *y_angle >= 0.0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)y_angle >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)y_angle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)y_angle >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(y_angle);
    }
    if ( *y_angle > 6.283185307179586 )
    {
      v34 = *y_angle - 6.283185307179586;
      *y_angle = v34;
    }
  }
  else
  {
    v33 = *y_angle + 6.283185307179586;
    *y_angle = v33;
  }
  if ( *(_BYTE *)(((unsigned __int64)z_angle >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)z_angle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)z_angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(z_angle);
  }
  if ( *z_angle >= 0.0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)z_angle >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)z_angle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)z_angle >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(z_angle);
    }
    if ( *z_angle > 6.283185307179586 )
    {
      v36 = *z_angle - 6.283185307179586;
      *z_angle = v36;
    }
  }
  else
  {
    v35 = *z_angle + 6.283185307179586;
    *z_angle = v35;
  }
  return 1;
};

// Line 523: range 000000000CCF78D2-000000000CCF7937
void __cdecl Matrix3::makeZero(Matrix3 *const this)
{
  Matrix3::setCol(this, 0, 0.0, 0.0, 0.0);
  Matrix3::setCol(this, 1u, 0.0, 0.0, 0.0);
  Matrix3::setCol(this, 2u, 0.0, 0.0, 0.0);
};

// Line 530: range 000000000CCF7938-000000000CCF7D1C
void __fastcall Matrix3::setCol(Matrix3 *const this, uint32_t col, unsigned __int64 col_vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // edi
  float v8; // xmm0_4
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // edi
  float v12; // xmm0_4
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // edi
  float v16; // xmm0_4
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  char v21[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 col:529 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = Matrix3::setCol;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 48) = col;
  if ( *(_DWORD *)(v3 + 48) <= 2u )
  {
    v7 = *(_DWORD *)(v3 + 48);
    if ( *(_BYTE *)((col_vec >> 3) + 0x7FFF8000) != 0
      && (char)((col_vec & 7) + 3) >= *(_BYTE *)((col_vec >> 3) + 0x7FFF8000) )
    {
      v7 = col_vec;
      __asan_report_load4(col_vec);
    }
    v8 = *(float *)col_vec;
    v9 = (unsigned __int64)this + 4 * v7;
    v10 = ((4 * (_BYTE)v7 + (_BYTE)this) & 7u) + 3;
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * v7 + (_BYTE)this) & 7) + 3) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    {
      v7 = 4 * v7 + (_DWORD)this;
      __asan_report_store4(v9, v10);
    }
    this->entries[0][v7] = v8;
    v11 = *(_DWORD *)(v3 + 48);
    if ( *(_BYTE *)(((col_vec + 4) >> 3) + 0x7FFF8000) != 0
      && (char)(((col_vec + 4) & 7) + 3) >= *(_BYTE *)(((col_vec + 4) >> 3) + 0x7FFF8000) )
    {
      v11 = col_vec + 4;
      __asan_report_load4(col_vec + 4);
    }
    v12 = *(float *)(col_vec + 4);
    v13 = (unsigned __int64)&this->entries[1][v11];
    v14 = ((4 * ((_BYTE)v11 + 3) + (_BYTE)this) & 7u) + 3;
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * (v11 + 3) + (_BYTE)this) & 7) + 3) >= *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
    {
      v11 = 4 * (v11 + 3) + (_DWORD)this;
      __asan_report_store4(v13, v14);
    }
    this->entries[1][v11] = v12;
    v15 = *(_DWORD *)(v3 + 48);
    if ( *(_BYTE *)(((col_vec + 8) >> 3) + 0x7FFF8000) != 0
      && (char)(((col_vec + 8) & 7) + 3) >= *(_BYTE *)(((col_vec + 8) >> 3) + 0x7FFF8000) )
    {
      v15 = col_vec + 8;
      __asan_report_load4(col_vec + 8);
    }
    v16 = *(float *)(col_vec + 8);
    v17 = (unsigned __int64)&this->entries[2][v15];
    v18 = ((4 * ((_BYTE)v15 + 6) + (_BYTE)this) & 7u) + 3;
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * (v15 + 6) + (_BYTE)this) & 7) + 3) >= *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
    {
      v15 = 4 * (v15 + 6) + (_DWORD)this;
      __asan_report_store4(v17, v18);
    }
    this->entries[2][v15] = v16;
  }
  else
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/math_def.cpp",
      "setCol",
      533);
    v6 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[13])"invalid col:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
  }
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 542: range 000000000CCF7D1E-000000000CCF8052
void __fastcall Matrix3::setCol(Matrix3 *const this, uint32_t col, float f0, float f1, float f2)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // edi
  char v10; // dl
  int v11; // edi
  char v12; // dl
  int v13; // edi
  char v14; // dl
  char v16[160]; // [rsp+20h] [rbp-A0h] BYREF

  v5 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 7 col:541 64 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = Matrix3::setCol;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862723] = -202116109;
  *(_DWORD *)(v5 + 48) = col;
  if ( *(_DWORD *)(v5 + 48) <= 2u )
  {
    v9 = *(_DWORD *)(v5 + 48);
    v10 = *(_BYTE *)((((unsigned __int64)this + 4 * v9) >> 3) + 0x7FFF8000);
    if ( v10 != 0 && (char)(((4 * v9 + (_BYTE)this) & 7) + 3) >= v10 )
    {
      v9 = 4 * *(_DWORD *)(v5 + 48) + (_DWORD)this;
      __asan_report_store4(
        (char *)this + 4 * *(unsigned int *)(v5 + 48),
        ((4 * (unsigned __int8)*(_DWORD *)(v5 + 48) + (_BYTE)this) & 7u) + 3);
    }
    this->entries[0][v9] = f0;
    v11 = *(_DWORD *)(v5 + 48);
    v12 = *(_BYTE *)(((unsigned __int64)&this->entries[1][v11] >> 3) + 0x7FFF8000);
    if ( v12 != 0 && (char)(((4 * (v11 + 3) + (_BYTE)this) & 7) + 3) >= v12 )
    {
      v11 = 4 * (*(_DWORD *)(v5 + 48) + 3) + (_DWORD)this;
      __asan_report_store4(
        &this->entries[1][*(unsigned int *)(v5 + 48)],
        ((4 * ((unsigned __int8)*(_DWORD *)(v5 + 48) + 3) + (_BYTE)this) & 7u) + 3);
    }
    this->entries[1][v11] = f1;
    v13 = *(_DWORD *)(v5 + 48);
    v14 = *(_BYTE *)(((unsigned __int64)&this->entries[2][v13] >> 3) + 0x7FFF8000);
    if ( v14 != 0 && (char)(((4 * (v13 + 6) + (_BYTE)this) & 7) + 3) >= v14 )
    {
      v13 = 4 * (*(_DWORD *)(v5 + 48) + 6) + (_DWORD)this;
      __asan_report_store4(
        &this->entries[2][*(unsigned int *)(v5 + 48)],
        ((4 * ((unsigned __int8)*(_DWORD *)(v5 + 48) + 6) + (_BYTE)this) & 7u) + 3);
    }
    this->entries[2][v13] = f2;
  }
  else
  {
    if ( *(char *)(((v5 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/math_def.cpp",
      "setCol",
      545);
    v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
           (common::milog::MiLogStream *const)(v5 + 64),
           (const char (*)[13])"invalid col:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 64));
  }
  if ( v16 == (char *)v5 )
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
};

// Line 554: range 000000000CCF8054-000000000CCF8438
void __fastcall Matrix3::getCol(Matrix3 *const this, uint32_t col, unsigned __int64 col_vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // edi
  unsigned __int64 v8; // rax
  float v9; // xmm0_4
  int v10; // edi
  unsigned __int64 v11; // rax
  float v12; // xmm0_4
  int v13; // edi
  unsigned __int64 v14; // rax
  float v15; // xmm0_4
  char v18[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 col:553 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = Matrix3::getCol;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 48) = col;
  if ( *(_DWORD *)(v3 + 48) <= 2u )
  {
    v7 = *(_DWORD *)(v3 + 48);
    v8 = (unsigned __int64)this + 4 * v7;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * v7 + (_BYTE)this) & 7) + 3) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    {
      v7 = v8;
      __asan_report_load4(v8);
    }
    v9 = this->entries[0][v7];
    if ( *(_BYTE *)((col_vec >> 3) + 0x7FFF8000) != 0
      && (char)((col_vec & 7) + 3) >= *(_BYTE *)((col_vec >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(col_vec, (unsigned int)(col_vec & 7) + 3);
    }
    *(float *)col_vec = v9;
    v10 = *(_DWORD *)(v3 + 48);
    v11 = (unsigned __int64)&this->entries[1][v10];
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * (v10 + 3) + (_BYTE)this) & 7) + 3) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    {
      v10 = v11;
      __asan_report_load4(v11);
    }
    v12 = this->entries[1][v10];
    if ( *(_BYTE *)(((col_vec + 4) >> 3) + 0x7FFF8000) != 0
      && (char)(((col_vec + 4) & 7) + 3) >= *(_BYTE *)(((col_vec + 4) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(col_vec + 4, (((_BYTE)col_vec + 4) & 7u) + 3);
    }
    *(float *)(col_vec + 4) = v12;
    v13 = *(_DWORD *)(v3 + 48);
    v14 = (unsigned __int64)&this->entries[2][v13];
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * (v13 + 6) + (_BYTE)this) & 7) + 3) >= *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
    {
      v13 = v14;
      __asan_report_load4(v14);
    }
    v15 = this->entries[2][v13];
    if ( *(_BYTE *)(((col_vec + 8) >> 3) + 0x7FFF8000) != 0
      && (char)(((col_vec + 8) & 7) + 3) >= *(_BYTE *)(((col_vec + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(col_vec + 8, (((_BYTE)col_vec + 8) & 7u) + 3);
    }
    *(float *)(col_vec + 8) = v15;
  }
  else
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/math_def.cpp",
      "getCol",
      557);
    v6 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[13])"invalid col:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
  }
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 566: range 000000000CCF843A-000000000CCF8D8F
bool __cdecl Matrix3::reorthogonalize(Matrix3 *const this)
{
  float v1; // xmm1_4
  float v2; // xmm1_4
  __m128i v3; // xmm0
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  __m128i v10; // xmm0
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  __m128i v16; // xmm0
  float length; // [rsp+14h] [rbp-Ch]
  float lengtha; // [rsp+14h] [rbp-Ch]
  float lengthb; // [rsp+14h] [rbp-Ch]
  float inv_length; // [rsp+18h] [rbp-8h]
  float inv_lengtha; // [rsp+18h] [rbp-8h]
  float inv_lengthb; // [rsp+18h] [rbp-8h]
  float dot; // [rsp+1Ch] [rbp-4h]
  float dota; // [rsp+1Ch] [rbp-4h]
  float dotb; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  v1 = this->entries[0][0] * this->entries[0][0];
  if ( *(_BYTE *)(((unsigned __int64)this->entries[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->entries[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this->entries[1]);
  }
  v2 = v1 + (float)(this->entries[1][0] * this->entries[1][0]);
  if ( *(_BYTE *)(((unsigned __int64)this->entries[2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->entries[2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this->entries[2]);
  }
  v3 = (__m128i)LODWORD(this->entries[2][0]);
  *(float *)v3.m128i_i32 = std::sqrt((float)(*(float *)v3.m128i_i32 * this->entries[2][0]) + v2);
  length = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  if ( length < 0.00000011920929 )
    return 0;
  inv_length = 1.0 / length;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  this->entries[0][0] = this->entries[0][0] * inv_length;
  if ( *(_BYTE *)(((unsigned __int64)this->entries[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->entries[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this->entries[1]);
  }
  this->entries[1][0] = this->entries[1][0] * inv_length;
  if ( *(_BYTE *)(((unsigned __int64)this->entries[2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->entries[2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this->entries[2]);
  }
  this->entries[2][0] = this->entries[2][0] * inv_length;
  v5 = this->entries[0][0];
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[0][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[0][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entries[0][1]);
  }
  v6 = v5 * this->entries[0][1];
  v7 = this->entries[1][0];
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[1][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[1][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entries[1][1]);
  }
  v8 = v6 + (float)(this->entries[1][1] * v7);
  v9 = this->entries[2][0];
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[2][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[2][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entries[2][1]);
  }
  dot = (float)(this->entries[2][1] * v9) + v8;
  this->entries[0][1] = this->entries[0][1] - (float)(this->entries[0][0] * dot);
  this->entries[1][1] = this->entries[1][1] - (float)(this->entries[1][0] * dot);
  this->entries[2][1] = this->entries[2][1] - (float)(this->entries[2][0] * dot);
  v10 = (__m128i)LODWORD(this->entries[2][1]);
  *(float *)v10.m128i_i32 = std::sqrt(
                              (float)(*(float *)v10.m128i_i32 * this->entries[2][1])
                            + (float)((float)(this->entries[0][1] * this->entries[0][1])
                                    + (float)(this->entries[1][1] * this->entries[1][1])));
  lengtha = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
  if ( lengtha < 0.00000011920929 )
    return 0;
  inv_lengtha = 1.0 / lengtha;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[0][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[0][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entries[0][1]);
  }
  this->entries[0][1] = this->entries[0][1] * inv_lengtha;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[1][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[1][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entries[1][1]);
  }
  this->entries[1][1] = this->entries[1][1] * inv_lengtha;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[2][1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[2][1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entries[2][1]);
  }
  this->entries[2][1] = this->entries[2][1] * inv_lengtha;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  v11 = this->entries[0][0];
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[0][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[0][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entries[0][2]);
  }
  v12 = v11 * this->entries[0][2];
  if ( *(_BYTE *)(((unsigned __int64)this->entries[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->entries[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this->entries[1]);
  }
  v13 = this->entries[1][0];
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[1][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[1][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entries[1][2]);
  }
  v14 = v12 + (float)(this->entries[1][2] * v13);
  if ( *(_BYTE *)(((unsigned __int64)this->entries[2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->entries[2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this->entries[2]);
  }
  v15 = this->entries[2][0];
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[2][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[2][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entries[2][2]);
  }
  dota = (float)(this->entries[2][2] * v15) + v14;
  this->entries[0][2] = this->entries[0][2] - (float)(this->entries[0][0] * dota);
  this->entries[1][2] = this->entries[1][2] - (float)(this->entries[1][0] * dota);
  this->entries[2][2] = this->entries[2][2] - (float)(this->entries[2][0] * dota);
  dotb = (float)(this->entries[2][2] * this->entries[2][1])
       + (float)((float)(this->entries[0][1] * this->entries[0][2]) + (float)(this->entries[1][2] * this->entries[1][1]));
  this->entries[0][2] = this->entries[0][2] - (float)(this->entries[0][1] * dotb);
  this->entries[1][2] = this->entries[1][2] - (float)(this->entries[1][1] * dotb);
  this->entries[2][2] = this->entries[2][2] - (float)(this->entries[2][1] * dotb);
  v16 = (__m128i)LODWORD(this->entries[2][2]);
  *(float *)v16.m128i_i32 = std::sqrt(
                              (float)(*(float *)v16.m128i_i32 * this->entries[2][2])
                            + (float)((float)(this->entries[0][2] * this->entries[0][2])
                                    + (float)(this->entries[1][2] * this->entries[1][2])));
  lengthb = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
  if ( lengthb < 0.00000011920929 )
    return 0;
  inv_lengthb = 1.0 / lengthb;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[0][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[0][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entries[0][2]);
  }
  this->entries[0][2] = this->entries[0][2] * inv_lengthb;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[1][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[1][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entries[1][2]);
  }
  this->entries[1][2] = this->entries[1][2] * inv_lengthb;
  if ( *(_BYTE *)(((unsigned __int64)&this->entries[2][2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entries[2][2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entries[2][2]);
  }
  this->entries[2][2] = this->entries[2][2] * inv_lengthb;
  return 1;
};

// Line 643: range 000000000CCF8D90-000000000CCF8EB9
bool __cdecl operator==(const Coordinate *left, const Coordinate *right)
{
  int32_t x; // ecx
  int32_t y; // ecx

  if ( *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)left & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(left);
  }
  x = left->x;
  if ( *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)right & 7) + 3) >= *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(right);
  }
  if ( x != right->x )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&left->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)left + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&left->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&left->y);
  }
  y = left->y;
  if ( *(_BYTE *)(((unsigned __int64)&right->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)right + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&right->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&right->y);
  }
  return y == right->y;
};

// Line 648: range 000000000CCF8EBA-000000000CCF8FE3
bool __cdecl operator!=(const Coordinate *left, const Coordinate *right)
{
  int32_t x; // ecx
  int32_t y; // ecx

  if ( *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)left & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(left);
  }
  x = left->x;
  if ( *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)right & 7) + 3) >= *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(right);
  }
  if ( x != right->x )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&left->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)left + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&left->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&left->y);
  }
  y = left->y;
  if ( *(_BYTE *)(((unsigned __int64)&right->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)right + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&right->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&right->y);
  }
  return y != right->y;
};

// Line 653: range 000000000CCF8FE4-000000000CCF9187
bool __cdecl operator<(const Coordinate *left, const Coordinate *right)
{
  int32_t x; // ecx
  int32_t y; // ecx
  int32_t v5; // ecx

  if ( *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)left & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(left);
  }
  x = left->x;
  if ( *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)right & 7) + 3) >= *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(right);
  }
  if ( x == right->x )
  {
    if ( *(_BYTE *)(((unsigned __int64)&left->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)left + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&left->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&left->y);
    }
    y = left->y;
    if ( *(_BYTE *)(((unsigned __int64)&right->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)right + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&right->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&right->y);
    }
    return y < right->y;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)left & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(left);
    }
    v5 = left->x;
    if ( *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)right & 7) + 3) >= *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(right);
    }
    return v5 < right->x;
  }
};

// Line 658: range 000000000CCF9188-000000000CCF9467
std::string *__cdecl Coordinate::toString[abi:cxx11](std::string *retstr, const Coordinate *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  char v10[512]; // [rsp+10h] [rbp-200h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 376 6 os:659";
  *(_QWORD *)(v2 + 16) = Coordinate::toString[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862732] = -218103808;
  v4[536862733] = -202116109;
  v4[536862734] = -202116109;
  std::ostringstream::basic_ostringstream(v2 + 32);
  v5 = std::operator<<<std::char_traits<char>>(v2 + 32, "{");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  v6 = std::ostream::operator<<(v5, (unsigned int)this->x);
  v7 = std::operator<<<std::char_traits<char>>(v6, ",");
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  v8 = std::ostream::operator<<(v7, (unsigned int)this->y);
  std::operator<<<std::char_traits<char>>(v8, "}");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::ostringstream::str(retstr, v2 + 32);
  std::ostringstream::~ostringstream(v2 + 32);
  if ( v10 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  return retstr;
};

// Line 668: range 000000000CCF9468-000000000CCF98E0
bool __cdecl isRectangleIntersectCircle(const AxisAlignedRectangle *rect, const Circle *circle)
{
  __m128i x_low; // xmm0
  __m128i y_low; // xmm0
  float v4; // xmm1_4
  float v6; // xmm1_4
  float v7; // [rsp+Ch] [rbp-24h]
  float dist_x; // [rsp+24h] [rbp-Ch]
  float dist_y; // [rsp+28h] [rbp-8h]
  float corner_dist_square; // [rsp+2Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)rect >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rect & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rect >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(rect);
  }
  x_low = (__m128i)LODWORD(rect->x);
  if ( *(_BYTE *)(((unsigned __int64)circle >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)circle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)circle >> 3) + 0x7FFF8000) )
  {
    *(double *)x_low.m128i_i64 = __asan_report_load4(circle);
  }
  *(float *)x_low.m128i_i32 = std::abs(*(float *)x_low.m128i_i32 - circle->x);
  dist_x = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  if ( *(_BYTE *)(((unsigned __int64)&rect->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rect + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rect->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rect->y);
  }
  y_low = (__m128i)LODWORD(rect->y);
  if ( *(_BYTE *)(((unsigned __int64)&circle->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)circle + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&circle->y >> 3) + 0x7FFF8000) )
  {
    *(double *)y_low.m128i_i64 = __asan_report_load4(&circle->y);
  }
  *(float *)y_low.m128i_i32 = std::abs(*(float *)y_low.m128i_i32 - circle->y);
  dist_y = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
  if ( *(_BYTE *)(((unsigned __int64)&rect->width >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rect + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rect->width >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rect->width);
  }
  v4 = rect->width / 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&circle->radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)circle + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&circle->radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&circle->radius);
  }
  if ( dist_x > (float)(v4 + circle->radius) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&rect->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rect + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rect->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rect->height);
  }
  v6 = rect->height / 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&circle->radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)circle + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&circle->radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&circle->radius);
  }
  if ( dist_y > (float)(v6 + circle->radius) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&rect->width >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rect + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rect->width >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rect->width);
  }
  if ( (float)(rect->width / 2.0) >= dist_x )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&rect->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rect + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rect->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rect->height);
  }
  if ( (float)(rect->height / 2.0) >= dist_y )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&rect->width >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rect + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rect->width >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rect->width);
  }
  v7 = square(dist_x - (float)(rect->width / 2.0));
  if ( *(_BYTE *)(((unsigned __int64)&rect->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rect + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rect->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rect->height);
  }
  corner_dist_square = square(dist_y - (float)(rect->height / 2.0)) + v7;
  if ( *(_BYTE *)(((unsigned __int64)&circle->radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)circle + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&circle->radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&circle->radius);
  }
  return square(circle->radius) >= corner_dist_square;
};

// Line 686: range 000000000CCF98E1-000000000CCF9B4E
bool __cdecl isPointInsideGrid(const Vector2 *low_left, const Vector2 *high_right, const Vector2 *point)
{
  double v3; // xmm0_8
  double v4; // xmm0_8
  double v5; // xmm0_8
  double v6; // xmm0_8

  if ( *(_BYTE *)(((unsigned __int64)low_left >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)low_left & 7) + 3) >= *(_BYTE *)(((unsigned __int64)low_left >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(low_left);
  }
  *(float *)&v3 = low_left->x;
  if ( *(_BYTE *)(((unsigned __int64)point >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)point & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(point);
  }
  if ( sign(*(float *)&v3 - point->x) > 0 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)point >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)point & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(point);
  }
  *(float *)&v4 = point->x;
  if ( *(_BYTE *)(((unsigned __int64)high_right >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)high_right & 7) + 3) >= *(_BYTE *)(((unsigned __int64)high_right >> 3) + 0x7FFF8000) )
  {
    v4 = __asan_report_load4(high_right);
  }
  if ( sign(*(float *)&v4 - high_right->x) > 0 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&low_left->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)low_left + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&low_left->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&low_left->y);
  }
  *(float *)&v5 = low_left->y;
  if ( *(_BYTE *)(((unsigned __int64)&point->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)point + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point->y >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load4(&point->y);
  }
  if ( sign(*(float *)&v5 - point->y) > 0 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&point->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)point + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&point->y);
  }
  *(float *)&v6 = point->y;
  if ( *(_BYTE *)(((unsigned __int64)&high_right->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)high_right + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&high_right->y >> 3) + 0x7FFF8000) )
  {
    v6 = __asan_report_load4(&high_right->y);
  }
  return sign(*(float *)&v6 - high_right->y) <= 0;
};

// Line 692: range 000000000CCF9B4F-000000000CCF9E3A
bool __cdecl isInSegmentDifferentSide(const Vector2 *p1, const Vector2 *p2, const Vector2 *q1, const Vector2 *q2)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  float v7; // xmm0_4
  float v8; // xmm0_4
  bool result; // al
  int32_t s1; // [rsp+28h] [rbp-C8h]
  int32_t s2; // [rsp+2Ch] [rbp-C4h]
  char v14[192]; // [rsp+30h] [rbp-C0h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v4 + 16) = isInSegmentDifferentSide;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -202116352;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 32, p2);
  *(Vector2 *)(v4 + 32) = Vector2::operator-(p1, q1);
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, q1);
  *(Vector2 *)(v4 + 64) = Vector2::operator-(p2, q1);
  v7 = Vector2::cross((const Vector2 *const)(v4 + 32), (const Vector2 *)(v4 + 64));
  s1 = sign(v7);
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, v4 + 64);
  *(Vector2 *)(v4 + 96) = Vector2::operator-(p1, q2);
  *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 128, q2);
  *(Vector2 *)(v4 + 128) = Vector2::operator-(p2, q2);
  v8 = Vector2::cross((const Vector2 *const)(v4 + 96), (const Vector2 *)(v4 + 128));
  s2 = sign(v8);
  result = !s1 || !s2 || s1 != s2;
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 699: range 000000000CCF9E3B-000000000CCF9E98
bool __cdecl isSegmentIntersect(const Vector2 *p1, const Vector2 *p2, const Vector2 *q1, const Vector2 *q2)
{
  return isInSegmentDifferentSide(p1, p2, q1, q2) && isInSegmentDifferentSide(q1, q2, p1, p2);
};

// Line 704: range 000000000CCFA128-000000000CCFA9B2
bool __cdecl calcSegmentIntersection(
        const Vector2 *p1,
        const Vector2 *p2,
        const Vector2 *q1,
        const Vector2 *q2,
        Vector2 *p)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  float y; // xmm2_4
  float x; // xmm1_4
  double v10; // xmm0_8
  int x_low; // esi
  float v12; // xmm2_4
  float v13; // xmm1_4
  double v14; // xmm0_8
  int v15; // esi
  float v16; // xmm1_4
  double v17; // xmm0_8
  float v18; // xmm2_4
  bool result; // al
  float v20; // xmm1_4
  double v21; // xmm0_8
  float v22; // xmm2_4
  float v23; // xmm0_4
  double v24; // xmm0_8
  float v25; // xmm0_4
  float d; // [rsp+3Ch] [rbp-D4h]
  std::tuple_element<0,std::tuple<float,float,float> >::type *a1; // [rsp+40h] [rbp-D0h]
  std::tuple_element<0,std::tuple<float,float> >::type *b1; // [rsp+48h] [rbp-C8h]
  std::tuple_element<0,std::tuple<float> >::type *c1; // [rsp+50h] [rbp-C0h]
  std::tuple_element<0,std::tuple<float,float,float> >::type *a2; // [rsp+58h] [rbp-B8h]
  std::tuple_element<0,std::tuple<float,float> >::type *b2; // [rsp+60h] [rbp-B0h]
  std::tuple_element<0,std::tuple<float> >::type *c2; // [rsp+68h] [rbp-A8h]
  char v36[160]; // [rsp+70h] [rbp-A0h] BYREF

  v5 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 48 1 13 calc_coef:705 64 12 9 <unknown> 96 12 9 <unknown>";
  *(_QWORD *)(v5 + 16) = calcSegmentIntersection;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -219020288;
  v7[536862723] = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)&p2->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)p2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p2->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&p2->y);
  }
  y = p2->y;
  if ( *(_BYTE *)(((unsigned __int64)p2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p2);
  }
  x = p2->x;
  if ( *(_BYTE *)(((unsigned __int64)&p1->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)p1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p1->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&p1->y);
  }
  *(float *)&v10 = p1->y;
  if ( *(_BYTE *)(((unsigned __int64)p1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p1 >> 3) + 0x7FFF8000) )
  {
    v10 = __asan_report_load4(p1);
  }
  x_low = LODWORD(p1->x);
  if ( *(char *)(((v5 + 64) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v5 + 75) >> 3) + 0x7FFF8000) != 0
    && (char)((v5 + 75) & 7) >= *(_BYTE *)(((v5 + 75) >> 3) + 0x7FFF8000) )
  {
    x_low = 12;
    v10 = __asan_report_store_n(v5 + 64, 12LL);
  }
  calcSegmentIntersection(Vector2 const&,Vector2 const&,Vector2 const&,Vector2 const&,Vector2&)::{lambda(float,float,float,float)#1}::operator()(
    (const calcSegmentIntersection::<lambda(float, float, float, float)> *const)(v5 + 64),
    *(float *)&x_low,
    *(float *)&v10,
    x,
    y);
  a1 = std::get<0ul,float,float,float>((std::tuple<float,float,float> *)(v5 + 64));
  b1 = std::get<1ul,float,float,float>((std::tuple<float,float,float> *)(v5 + 64));
  c1 = std::get<2ul,float,float,float>((std::tuple<float,float,float> *)(v5 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&q2->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)q2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q2->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&q2->y);
  }
  v12 = q2->y;
  if ( *(_BYTE *)(((unsigned __int64)q2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)q2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)q2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(q2);
  }
  v13 = q2->x;
  if ( *(_BYTE *)(((unsigned __int64)&q1->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)q1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q1->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&q1->y);
  }
  *(float *)&v14 = q1->y;
  if ( *(_BYTE *)(((unsigned __int64)q1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)q1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)q1 >> 3) + 0x7FFF8000) )
  {
    v14 = __asan_report_load4(q1);
  }
  v15 = LODWORD(q1->x);
  if ( *(char *)(((v5 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v5 + 107) >> 3) + 0x7FFF8000) != 0
    && (char)((v5 + 107) & 7) >= *(_BYTE *)(((v5 + 107) >> 3) + 0x7FFF8000) )
  {
    v15 = 12;
    v14 = __asan_report_store_n(v5 + 96, 12LL);
  }
  calcSegmentIntersection(Vector2 const&,Vector2 const&,Vector2 const&,Vector2 const&,Vector2&)::{lambda(float,float,float,float)#1}::operator()(
    (const calcSegmentIntersection::<lambda(float, float, float, float)> *const)(v5 + 96),
    *(float *)&v15,
    *(float *)&v14,
    v13,
    v12);
  a2 = std::get<0ul,float,float,float>((std::tuple<float,float,float> *)(v5 + 96));
  b2 = std::get<1ul,float,float,float>((std::tuple<float,float,float> *)(v5 + 96));
  c2 = std::get<2ul,float,float,float>((std::tuple<float,float,float> *)(v5 + 96));
  if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)a1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(a1);
  }
  v16 = *a1;
  if ( *(_BYTE *)(((unsigned __int64)b2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)b2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)b2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(b2);
  }
  *(float *)&v17 = *b2 * v16;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)a2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
  {
    v17 = __asan_report_load4(a2);
  }
  v18 = *a2;
  if ( *(_BYTE *)(((unsigned __int64)b1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)b1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)b1 >> 3) + 0x7FFF8000) )
  {
    v17 = __asan_report_load4(b1);
  }
  d = *(float *)&v17 - (float)(*b1 * v18);
  if ( std::fabs(d) >= 0.00000011920929 )
  {
    if ( *(_BYTE *)(((unsigned __int64)b1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)b1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)b1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(b1);
    }
    v20 = *b1;
    if ( *(_BYTE *)(((unsigned __int64)c2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)c2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)c2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(c2);
    }
    *(float *)&v21 = *c2 * v20;
    if ( *(_BYTE *)(((unsigned __int64)b2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)b2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)b2 >> 3) + 0x7FFF8000) )
    {
      v21 = __asan_report_load4(b2);
    }
    v22 = *b2;
    if ( *(_BYTE *)(((unsigned __int64)c1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)c1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)c1 >> 3) + 0x7FFF8000) )
    {
      v21 = __asan_report_load4(c1);
    }
    v23 = (float)(*(float *)&v21 - (float)(*c1 * v22)) / d;
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p, ((unsigned __int8)p & 7u) + 3);
    }
    p->x = v23;
    if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)a2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(a2);
    }
    *(float *)&v24 = *c1 * *a2;
    if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)a1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
    {
      v24 = __asan_report_load4(a1);
    }
    v25 = (float)(*(float *)&v24 - (float)(*c2 * *a1)) / d;
    if ( *(_BYTE *)(((unsigned __int64)&p->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&p->y, (((_BYTE)p + 4) & 7u) + 3);
    }
    p->y = v25;
    result = 1;
  }
  else
  {
    result = 0;
  }
  if ( v36 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 705: range 000000000CCF9E9A-000000000CCFA127
// local variable allocation has failed, the output may be wrong!
std::tuple<float,float,float> __cdecl calcSegmentIntersection(Vector2 const&,Vector2 const&,Vector2 const&,Vector2 const&,Vector2&)::{lambda(float,float,float,float)#1}::operator()(
        const calcSegmentIntersection::<lambda(float, float, float, float)> *const __closure,
        float x1,
        float y1,
        float x2,
        float y2)
{
  __int64 v5; // rsi
  float *v6; // r9
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  _DWORD *v10; // r12
  char v11; // dl
  char v12; // dl
  char v13; // dl
  float *v14; // r8
  std::_Tuple_impl<1,float,float> v15; // xmm0_8
  float v16; // xmm1_4
  char v17[128]; // [rsp+20h] [rbp-80h] BYREF
  std::tuple<float,float,float> result; // 0:xmm0_8.8,8:xmm1_4.4

  v7 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v7 = v8;
  }
  v9 = v7 + 96;
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "3 32 4 9 <unknown> 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v7 + 16) = calcSegmentIntersection(Vector2 const&,Vector2 const&,Vector2 const&,Vector2 const&,Vector2&)::{lambda(float,float,float,float)#1}::operator();
  v10 = (_DWORD *)(v7 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234556924;
  v10[536862722] = -202116348;
  v11 = *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(v5) = v11 != 0;
    v9 = __asan_report_store4(v7 + 64, v5);
  }
  *(float *)(v9 - 32) = (float)((float)(y1 - y2) * x1) - (float)((float)(x1 - x2) * y1);
  v12 = *(_BYTE *)(((unsigned __int64)(v9 - 48) >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v5) = v12 != 0;
    v9 = __asan_report_store4(v9 - 48, v5);
  }
  *(float *)(v9 - 48) = x1 - x2;
  v13 = *(_BYTE *)(((unsigned __int64)(v9 - 64) >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(v5) = v13 != 0;
    v9 = __asan_report_store4(v9 - 64, v5);
  }
  *(float *)(v9 - 64) = y2 - y1;
  v14 = (float *)((((unsigned __int8)__closure & 7) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000)) & (unsigned __int8)(*(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0));
  if ( (unsigned __int8)v14 | (*(_BYTE *)(((unsigned __int64)&__closure[11] >> 3) + 0x7FFF8000) != 0
                            && (((unsigned __int8)__closure + 11) & 7) >= *(_BYTE *)(((unsigned __int64)&__closure[11] >> 3)
                                                                                   + 0x7FFF8000)) )
    __asan_report_store_n(__closure, 12LL);
  *(std::tuple<float,float,float> *)&v15.std::_Tuple_impl<2,float>::std::_Head_base<2,float,false>::_M_head_impl = std::make_tuple<float,float,float>((float *)__closure->gap0, (float *)(v9 - 64), (float *)(v9 - 48), (float *)(v9 - 32), v14, v6);
  if ( v17 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
  }
  result.std::_Tuple_impl<1,float,float> = v15;
  result.std::_Tuple_impl<0,float,float,float>::std::_Head_base<0,float,false>::_M_head_impl = v16;
  return result;
};

// Line 723: range 000000000CCFA9B3-000000000CCFAC2A
bool __cdecl isPointInsideSector(
        const Vector2 *center,
        const Vector2 *dir,
        float radius,
        float theta,
        const Vector2 *target_point)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  bool result; // al
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  __m128i v12; // xmm0
  float squared_length; // [rsp+20h] [rbp-70h]
  float center_point_dot_dir; // [rsp+28h] [rbp-68h]
  float cos_theta; // [rsp+2Ch] [rbp-64h]
  char v19[96]; // [rsp+30h] [rbp-60h] BYREF

  v5 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 20 center_point_dir:724";
  *(_QWORD *)(v5 + 16) = isPointInsideSector;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116352;
  *(Vector2 *)(v5 + 32) = Vector2::operator-(target_point, center);
  squared_length = (float)(*(float *)(v5 + 36) * *(float *)(v5 + 36))
                 + (float)(*(float *)(v5 + 32) * *(float *)(v5 + 32));
  if ( squared_length <= (float)(radius * radius) )
  {
    v9 = *(float *)(v5 + 32);
    if ( *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dir & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(dir);
    }
    v10 = v9 * dir->x;
    v11 = *(float *)(v5 + 36);
    if ( *(_BYTE *)(((unsigned __int64)&dir->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dir + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dir->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&dir->y);
    }
    center_point_dot_dir = (float)(dir->y * v11) + v10;
    v12 = _mm_cvtsi32_si128(LODWORD(theta));
    *(float *)v12.m128i_i32 = std::cos(*(float *)v12.m128i_i32);
    cos_theta = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
    if ( center_point_dot_dir < 0.0 || cos_theta < 0.0 )
    {
      if ( center_point_dot_dir >= 0.0 || cos_theta >= 0.0 )
        result = center_point_dot_dir >= 0.0;
      else
        result = (float)((float)(squared_length * cos_theta) * cos_theta) > (float)(center_point_dot_dir
                                                                                  * center_point_dot_dir);
    }
    else
    {
      result = (float)(center_point_dot_dir * center_point_dot_dir) > (float)((float)(squared_length * cos_theta)
                                                                            * cos_theta);
    }
  }
  else
  {
    result = 0;
  }
  if ( v19 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 742: range 000000000CCFAC2B-000000000CCFAEFC
bool __cdecl isPointInsideSectorRing(
        const Vector2 *center,
        const Vector2 *dir,
        float inner_radius,
        float outter_radius,
        float theta,
        const Vector2 *target_point)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  bool result; // al
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  __m128i v13; // xmm0
  float squared_length; // [rsp+3Ch] [rbp-74h]
  float center_point_dot_dir; // [rsp+48h] [rbp-68h]
  float cos_theta; // [rsp+4Ch] [rbp-64h]
  char v20[96]; // [rsp+50h] [rbp-60h] BYREF

  v6 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 8 20 center_point_dir:747";
  *(_QWORD *)(v6 + 16) = isPointInsideSectorRing;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202116352;
  if ( inner_radius <= outter_radius )
  {
    *(Vector2 *)(v6 + 32) = Vector2::operator-(target_point, center);
    squared_length = (float)(*(float *)(v6 + 36) * *(float *)(v6 + 36))
                   + (float)(*(float *)(v6 + 32) * *(float *)(v6 + 32));
    if ( (float)(inner_radius * inner_radius) <= squared_length
      && squared_length <= (float)(outter_radius * outter_radius) )
    {
      v10 = *(float *)(v6 + 32);
      if ( *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)dir & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(dir);
      }
      v11 = v10 * dir->x;
      v12 = *(float *)(v6 + 36);
      if ( *(_BYTE *)(((unsigned __int64)&dir->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dir + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dir->y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&dir->y);
      }
      center_point_dot_dir = (float)(dir->y * v12) + v11;
      v13 = _mm_cvtsi32_si128(LODWORD(theta));
      *(float *)v13.m128i_i32 = std::cos(*(float *)v13.m128i_i32);
      cos_theta = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
      if ( center_point_dot_dir < 0.0 || cos_theta < 0.0 )
      {
        if ( center_point_dot_dir >= 0.0 || cos_theta >= 0.0 )
          result = center_point_dot_dir >= 0.0;
        else
          result = (float)((float)(squared_length * cos_theta) * cos_theta) > (float)(center_point_dot_dir
                                                                                    * center_point_dot_dir);
      }
      else
      {
        result = (float)(center_point_dot_dir * center_point_dot_dir) > (float)((float)(squared_length * cos_theta)
                                                                              * cos_theta);
      }
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  if ( v20 == (char *)v6 )
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

// Line 766: range 000000000CCFAEFD-000000000CCFB1E7
bool __cdecl isGridIntersectLineSegment(
        const Vector2 *low_left,
        const Vector2 *high_right,
        const Vector2 *point1,
        const Vector2 *point2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  bool result; // al
  float x; // ecx
  float v10; // ecx
  char v13[128]; // [rsp+20h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 8 13 high_left:772 64 8 13 low_right:773";
  *(_QWORD *)(v4 + 16) = isGridIntersectLineSegment;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202116352;
  if ( isPointInsideGrid(low_left, high_right, point1) || isPointInsideGrid(low_left, high_right, point2) )
  {
    result = 1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)low_left >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)low_left & 7) + 3) >= *(_BYTE *)(((unsigned __int64)low_left >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(low_left);
    }
    x = low_left->x;
    if ( *(_BYTE *)(((unsigned __int64)&high_right->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)high_right + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&high_right->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&high_right->y);
    }
    Vector2::Vector2((Vector2 *const)(v4 + 32), x, high_right->y);
    if ( *(_BYTE *)(((unsigned __int64)high_right >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)high_right & 7) + 3) >= *(_BYTE *)(((unsigned __int64)high_right >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(high_right);
    }
    v10 = high_right->x;
    if ( *(_BYTE *)(((unsigned __int64)&low_left->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)low_left + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&low_left->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&low_left->y);
    }
    Vector2::Vector2((Vector2 *const)(v4 + 64), v10, low_left->y);
    result = isSegmentIntersect((const Vector2 *)(v4 + 32), (const Vector2 *)(v4 + 64), point1, point2)
          || isSegmentIntersect(low_left, high_right, point1, point2);
  }
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 779: range 000000000CCFBB28-000000000CCFD798
int32_t __cdecl InteriorCheckablePolygon::initByPointVec(
        InteriorCheckablePolygon *const this,
        const data::Point2DList *point_vec)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  const data::Point2D *v8; // rax
  const data::Point2D *v9; // rax
  double v10; // xmm0_8
  double v11; // xmm0_8
  char *v12; // rsi
  std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > *v13; // rcx
  std::vector<InteriorCheckablePolygon::Strip>::size_type v14; // rsi
  bool v15; // al
  std::vector<InteriorCheckablePolygon::Strip>::size_type v16; // rax
  std::_Rb_tree_iterator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > >::pointer v17; // rax
  char v18; // dl
  std::vector<InteriorCheckablePolygon::Strip>::size_type v19; // rsi
  float first; // xmm0_4
  float y; // xmm0_4
  std::_Rb_tree_iterator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > >::_Self *v22; // rax
  bool v23; // al
  int v24; // eax
  std::_Rb_tree_iterator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > >::pointer v25; // rax
  char v26; // dl
  float v27; // xmm0_4
  char *v28; // rsi
  bool v29; // al
  std::_List_iterator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge>::pointer v30; // rdx
  char v31; // cl
  float v32; // xmm1_4
  char v33; // r14
  const InteriorCheckablePolygon::initByPointVec::SpanningEdge *M_current; // r14
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  char *v38; // rsi
  std::vector<InteriorCheckablePolygon::Segment>::size_type v39; // rsi
  std::vector<InteriorCheckablePolygon::Segment>::size_type v40; // rax
  float *v41; // rdx
  char v42; // al
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // r14
  int v49; // edx
  InteriorCheckablePolygon::Segment *v50; // r14
  std::vector<InteriorCheckablePolygon::Segment>::iterator v51; // rax
  InteriorCheckablePolygon::initByPointVec::<lambda(const InteriorCheckablePolygon::Segment&, const InteriorCheckablePolygon::Segment&)> v52; // dl
  int v53; // edx
  const InteriorCheckablePolygon::initByPointVec::SpanningEdge *__last; // [rsp+0h] [rbp-530h]
  size_t i_0; // [rsp+28h] [rbp-508h]
  size_t i; // [rsp+30h] [rbp-500h]
  size_t j_0; // [rsp+38h] [rbp-4F8h]
  InteriorCheckablePolygon::Strip *strip; // [rsp+40h] [rbp-4F0h]
  std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > *spanning_edge_vec; // [rsp+48h] [rbp-4E8h]
  std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > *__for_range_0; // [rsp+50h] [rbp-4E0h]
  std::_List_iterator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge>::reference spanning_edge; // [rsp+58h] [rbp-4D8h]
  InteriorCheckablePolygon::Segment *segment; // [rsp+60h] [rbp-4D0h]
  std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > *__for_range; // [rsp+68h] [rbp-4C8h]
  std::_List_iterator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge>::reference cutting_edge; // [rsp+70h] [rbp-4C0h]
  size_t j; // [rsp+78h] [rbp-4B8h]
  char v68[1200]; // [rsp+80h] [rbp-4B0h] BYREF

  v3 = (unsigned __int64)v68;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1152LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "27 32 1 9 <unknown> 48 4 9 low_y:837 64 4 10 high_y:843 80 8 18 starting_point:823 112 8 16 endi"
                        "ng_point:824 144 8 8 iter:834 176 8 9 <unknown> 208 8 9 <unknown> 240 8 6 it:845 272 8 9 <unknow"
                        "n> 304 8 9 <unknown> 336 8 9 <unknown> 368 8 9 <unknown> 400 8 15 __for_begin:854 432 8 13 __for"
                        "_end:854 464 8 15 __for_begin:863 496 8 13 __for_end:863 528 16 9 <unknown> 560 24 21 cutting_ed"
                        "ge_list:796 624 32 9 <unknown> 688 32 9 <unknown> 752 32 9 <unknown> 816 32 9 <unknown> 880 32 9"
                        " <unknown> 944 32 9 <unknown> 1008 32 9 <unknown> 1072 48 22 spanning_edges_map:795";
  *(_QWORD *)(v3 + 16) = InteriorCheckablePolygon::initByPointVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862726] = -234881024;
  v5[536862727] = 62194;
  v5[536862727] = -234881024;
  v5[536862728] = 62194;
  v5[536862728] = -234881024;
  v5[536862729] = 62194;
  v5[536862729] = -234881024;
  v5[536862730] = 62194;
  v5[536862730] = -234881024;
  v5[536862731] = 62194;
  v5[536862731] = -234881024;
  v5[536862732] = 62194;
  v5[536862732] = -234881024;
  v5[536862733] = 62194;
  v5[536862733] = -234881024;
  v5[536862734] = 62194;
  v5[536862734] = -234881024;
  v5[536862735] = 62194;
  v5[536862735] = -234881024;
  v5[536862736] = 62194;
  v5[536862737] = 62194;
  v5[536862738] = -218959360;
  v5[536862739] = 62194;
  v5[536862740] = -219021312;
  v5[536862741] = 62194;
  v5[536862742] = -219021312;
  v5[536862743] = 62194;
  v5[536862744] = -219021312;
  v5[536862745] = 62194;
  v5[536862746] = -219021312;
  v5[536862747] = 62194;
  v5[536862748] = -219021312;
  v5[536862749] = 62194;
  v5[536862750] = -219021312;
  v5[536862751] = 62194;
  v5[536862752] = -219021312;
  v5[536862753] = 62194;
  v5[536862755] = -202116109;
  std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge>>>>::allocator((std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > > *const)(v3 + 32));
  std::map<float,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge>>,InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::{lambda(float,float)#1},std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge>>>>>::map(
    (std::map<float,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >,InteriorCheckablePolygon::initByPointVec(const Point2DList&)::<lambda(float,float)>,std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > > > *const)(v3 + 1072),
    &InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::compare_floats,
    (const std::map<float,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >,InteriorCheckablePolygon::initByPointVec(const Point2DList&)::<lambda(float,float)>,std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > > >::allocator_type *)(v3 + 32));
  std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge>>>>::~allocator((std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > > *const)(v3 + 32));
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  v6 = ((v3 + 560) >> 3) + 2147450880;
  *(_WORD *)v6 = 0;
  *(_BYTE *)(v6 + 2) = 0;
  std::list<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::list((std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > *const)(v3 + 560));
  if ( std::vector<data::Point2D>::empty(point_vec) )
  {
    *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 624) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 655) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 655) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 624, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 624),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/math_def.cpp",
      "initByPointVec",
      817);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 624),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v7, (const char (*)[20])"point_vec is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 624));
    *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
  }
  else
  {
    for ( i_0 = 0LL; i_0 < std::vector<data::Point2D>::size(point_vec); ++i_0 )
    {
      j = (i_0 + 1) % std::vector<data::Point2D>::size(point_vec);
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
      v8 = std::vector<data::Point2D>::operator[](point_vec, i_0);
      Vector2::Vector2((Vector2 *const)(v3 + 80), v8);
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
      v9 = std::vector<data::Point2D>::operator[](point_vec, j);
      Vector2::Vector2((Vector2 *const)(v3 + 112), v9);
      if ( *(_BYTE *)(((v3 + 84) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 84) & 7) + 3) >= *(_BYTE *)(((v3 + 84) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v3 + 84);
      }
      LODWORD(v10) = *(_DWORD *)(v3 + 84);
      if ( *(_BYTE *)(((v3 + 116) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 116) & 7) + 3) >= *(_BYTE *)(((v3 + 116) >> 3) + 0x7FFF8000) )
      {
        v10 = __asan_report_load4(v3 + 116);
      }
      if ( std::fabs(*(float *)&v10 - *(float *)(v3 + 116)) > 0.001 )
      {
        if ( *(_BYTE *)(((v3 + 84) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 + 84) & 7) + 3) >= *(_BYTE *)(((v3 + 84) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v3 + 84);
        }
        LODWORD(v11) = *(_DWORD *)(v3 + 84);
        if ( *(_BYTE *)(((v3 + 116) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 + 116) & 7) + 3) >= *(_BYTE *)(((v3 + 116) >> 3) + 0x7FFF8000) )
        {
          v11 = __asan_report_load4(v3 + 116);
        }
        if ( *(float *)&v11 > *(float *)(v3 + 116) )
          std::swap<Vector2>((Vector2 *)(v3 + 80), (Vector2 *)(v3 + 112));
        v12 = (char *)(v3 + 84);
        v13 = std::map<float,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge>>,InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::{lambda(float,float)#1},std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge>>>>>::operator[](
                (std::map<float,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >,InteriorCheckablePolygon::initByPointVec(const Point2DList&)::<lambda(float,float)>,std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > > > *const)(v3 + 1072),
                (const std::map<float,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >,InteriorCheckablePolygon::initByPointVec(const Point2DList&)::<lambda(float,float)>,std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > > >::key_type *)(v3 + 84));
        *(_WORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 528, v12);
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v3 + 80);
        *(_QWORD *)(v3 + 528) = *(_QWORD *)(v3 + 80);
        if ( *(_BYTE *)(((v3 + 536) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 536, v12);
        if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v3 + 112);
        *(_QWORD *)(v3 + 536) = *(_QWORD *)(v3 + 112);
        std::vector<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge>>::push_back(
          v13,
          (std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >::value_type *)(v3 + 528));
        *(_WORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -1800;
        std::map<float,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge>>,InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::{lambda(float,float)#1},std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge>>>>>::operator[](
          (std::map<float,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >,InteriorCheckablePolygon::initByPointVec(const Point2DList&)::<lambda(float,float)>,std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > > > *const)(v3 + 1072),
          (const std::map<float,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >,InteriorCheckablePolygon::initByPointVec(const Point2DList&)::<lambda(float,float)>,std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > > >::key_type *)(v3 + 116));
      }
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    }
    i = 0LL;
    v14 = std::map<float,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge>>,InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::{lambda(float,float)#1},std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge>>>>>::size((const std::map<float,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >,InteriorCheckablePolygon::initByPointVec(const Point2DList&)::<lambda(float,float)>,std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > > > *const)(v3 + 1072));
    std::vector<InteriorCheckablePolygon::Strip>::resize(&this->strip_vec, v14);
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 144, v14);
    *(std::map<float,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >,InteriorCheckablePolygon::initByPointVec(const Point2DList&)::<lambda(float,float)>,std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > > >::iterator *)(v3 + 144) = std::map<float,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge>>,InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::{lambda(float,float)#1},std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge>>>>>::begin((std::map<float,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >,InteriorCheckablePolygon::initByPointVec(const Point2DList&)::<lambda(float,float)>,std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > > > *const)(v3 + 1072));
    while ( 1 )
    {
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 176, v14);
      *(std::map<float,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >,InteriorCheckablePolygon::initByPointVec(const Point2DList&)::<lambda(float,float)>,std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > > >::iterator *)(v3 + 176) = std::map<float,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge>>,InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::{lambda(float,float)#1},std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge>>>>>::end((std::map<float,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >,InteriorCheckablePolygon::initByPointVec(const Point2DList&)::<lambda(float,float)>,std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > > > *const)(v3 + 1072));
      v15 = std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > >::_Self *)(v3 + 144),
              (const std::_Rb_tree_iterator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > >::_Self *)(v3 + 176));
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
      if ( !v15 )
        break;
      v16 = i++;
      v19 = v16;
      strip = std::vector<InteriorCheckablePolygon::Strip>::operator[](&this->strip_vec, v16);
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v17 = std::_Rb_tree_iterator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge>>>>::operator->((const std::_Rb_tree_iterator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > > *const)(v3 + 144));
      v18 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
      LOBYTE(v19) = v18 != 0;
      if ( v18 != 0 && v18 <= 3 )
        __asan_report_load4(v17);
      first = v17->first;
      if ( *(_BYTE *)(((unsigned __int64)strip >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)strip >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(strip, v19);
      }
      strip->y = first;
      y = strip->y;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 48, v19);
      *(float *)(v3 + 48) = y;
      spanning_edge_vec = &std::_Rb_tree_iterator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge>>>>::operator->((const std::_Rb_tree_iterator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > > *const)(v3 + 144))->second;
      *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 208, v19);
      *(std::map<float,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >,InteriorCheckablePolygon::initByPointVec(const Point2DList&)::<lambda(float,float)>,std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > > >::iterator *)(v3 + 208) = std::map<float,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge>>,InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::{lambda(float,float)#1},std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge>>>>>::end((std::map<float,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >,InteriorCheckablePolygon::initByPointVec(const Point2DList&)::<lambda(float,float)>,std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > > > *const)(v3 + 1072));
      v22 = std::_Rb_tree_iterator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge>>>>::operator++((std::_Rb_tree_iterator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > > *const)(v3 + 144));
      v14 = v3 + 208;
      v23 = std::operator==(
              v22,
              (const std::_Rb_tree_iterator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > >::_Self *)(v3 + 208));
      *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
      if ( v23 )
      {
        v24 = 0;
      }
      else
      {
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
        v25 = std::_Rb_tree_iterator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge>>>>::operator->((const std::_Rb_tree_iterator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > > *const)(v3 + 144));
        v26 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
        LOBYTE(v14) = v26 != 0;
        if ( v26 != 0 && v26 <= 3 )
          __asan_report_load4(v25);
        v27 = v25->first;
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 64, v14);
        *(float *)(v3 + 64) = v27;
        *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 240, v14);
        *(std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >::iterator *)(v3 + 240) = std::list<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::begin((std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > *const)(v3 + 560));
        while ( 1 )
        {
          *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 272, v14);
          *(std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >::iterator *)(v3 + 272) = std::list<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::end((std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > *const)(v3 + 560));
          v28 = (char *)(v3 + 272);
          v29 = std::operator!=(
                  (const std::_List_iterator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge>::_Self *)(v3 + 240),
                  (const std::_List_iterator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge>::_Self *)(v3 + 272));
          *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
          if ( !v29 )
            break;
          v30 = std::_List_iterator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>::operator->((const std::_List_iterator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> *const)(v3 + 240));
          v31 = *(_BYTE *)(((unsigned __int64)&v30->ending_point.y >> 3) + 0x7FFF8000);
          LOBYTE(v28) = v31 != 0;
          if ( v31 != 0 && (char)((((_BYTE)v30 + 12) & 7) + 3) >= v31 )
            __asan_report_load4(&v30->ending_point.y);
          v32 = v30->ending_point.y;
          if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 48);
          v33 = 0;
          if ( (float)(*(float *)(v3 + 48) + 0.001) <= v32 )
          {
            if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 240, v28);
            v14 = 1LL;
            *(std::_List_iterator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> *)(v3 + 240) = std::next<std::_List_iterator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>(*(std::_List_iterator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> *)(v3 + 240), 1LL);
          }
          else
          {
            *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
            std::_List_const_iterator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>::_List_const_iterator(
              (std::_List_const_iterator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> *const)(v3 + 304),
              (const std::_List_const_iterator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge>::iterator *)(v3 + 240));
            v33 = 1;
            if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 240, v3 + 240);
            if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) )
              __asan_report_load8(v3 + 304);
            v14 = *(_QWORD *)(v3 + 304);
            *(std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >::iterator *)(v3 + 240) = std::list<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::erase((std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > *const)(v3 + 560), (std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >::const_iterator)v14);
          }
          if ( v33 )
            *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = -8;
        }
        *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
        __last = std::vector<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge>>::end(spanning_edge_vec)._M_current;
        M_current = std::vector<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge>>::begin(spanning_edge_vec)._M_current;
        *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 336, v28);
        *(std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >::iterator *)(v3 + 336) = std::list<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::end((std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > *const)(v3 + 560));
        std::_List_const_iterator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>::_List_const_iterator(
          (std::_List_const_iterator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> *const)(v3 + 368),
          (const std::_List_const_iterator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge>::iterator *)(v3 + 336));
        if ( *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v3 + 368);
        std::list<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::insert<__gnu_cxx::__normal_iterator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge const*,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>>,void>(
          (std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > *const)(v3 + 560),
          *(std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >::const_iterator *)(v3 + 368),
          (__gnu_cxx::__normal_iterator<const InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge*,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > >)M_current,
          (__gnu_cxx::__normal_iterator<const InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge*,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > >)__last);
        *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = -8;
        if ( std::list<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::empty((const std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > *const)(v3 + 560))
          || (std::list<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::size((const std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > *const)(v3 + 560)) & 1) == 1 )
        {
          *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 688) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 688, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 688),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/math_def.cpp",
            "initByPointVec",
            853);
          v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 688),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v37 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  v36,
                  (const char (*)[32])"empty or odd segments in strip:");
          *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 752) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 15) & 7) >= *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 752, 32LL);
          }
          InteriorCheckablePolygon::Strip::toString[abi:cxx11]((std::string *)(v3 + 752), strip);
          v38 = (char *)(v3 + 752);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v37, (const std::string *)(v3 + 752));
          std::string::~string((void *)(v3 + 752));
          *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = -117901064;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 688));
          *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = -117901064;
          __for_range = (std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > *)(v3 + 560);
          *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 400, v38);
          *(std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >::iterator *)(v3 + 400) = std::list<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::begin(__for_range);
          *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 432, v38);
          *(std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >::iterator *)(v3 + 432) = std::list<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::end(__for_range);
          while ( 1 )
          {
            v14 = v3 + 432;
            if ( !std::operator!=(
                    (const std::_List_iterator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge>::_Self *)(v3 + 400),
                    (const std::_List_iterator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge>::_Self *)(v3 + 432)) )
              break;
            cutting_edge = std::_List_iterator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>::operator*((const std::_List_iterator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> *const)(v3 + 400));
            *(_DWORD *)(((v3 + 816) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 816) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 847) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 847) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 816, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 816),
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/math_def.cpp",
              "initByPointVec",
              856);
            *(_DWORD *)(((v3 + 880) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 880) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 911) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 911) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 880, 32LL);
            }
            InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge::toString(
              (std::string *)(v3 + 880),
              cutting_edge);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              (common::milog::MiLogStream *const)(v3 + 816),
              (const std::string *)(v3 + 880));
            std::string::~string((void *)(v3 + 880));
            *(_DWORD *)(((v3 + 880) >> 3) + 0x7FFF8000) = -117901064;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 816));
            *(_DWORD *)(((v3 + 816) >> 3) + 0x7FFF8000) = -117901064;
            std::_List_iterator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>::operator++((std::_List_iterator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> *const)(v3 + 400));
          }
          *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = -8;
          v2 = -1;
          v24 = 1;
        }
        else
        {
          j_0 = 0LL;
          v39 = std::list<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::size((const std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > *const)(v3 + 560));
          std::vector<InteriorCheckablePolygon::Segment>::resize(&strip->segment_vec, v39);
          __for_range_0 = (std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > *)(v3 + 560);
          *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 464, v39);
          *(std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >::iterator *)(v3 + 464) = std::list<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::begin(__for_range_0);
          *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 496, v39);
          *(std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >::iterator *)(v3 + 496) = std::list<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::end(__for_range_0);
          while ( 1 )
          {
            v14 = v3 + 496;
            if ( !std::operator!=(
                    (const std::_List_iterator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge>::_Self *)(v3 + 464),
                    (const std::_List_iterator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge>::_Self *)(v3 + 496)) )
            {
              v49 = 1;
              goto LABEL_120;
            }
            spanning_edge = std::_List_iterator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>::operator*((const std::_List_iterator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> *const)(v3 + 464));
            v40 = j_0++;
            segment = std::vector<InteriorCheckablePolygon::Segment>::operator[](&strip->segment_vec, v40);
            v41 = (float *)segment;
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 48);
            if ( InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::{lambda(InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge const&,float,float &)#2}::operator()(
                   &InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::calc_crossing_point,
                   spanning_edge,
                   *(float *)(v3 + 48),
                   v41) )
            {
              goto LABEL_110;
            }
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 64);
            if ( InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::{lambda(InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge const&,float,float &)#2}::operator()(
                   &InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::calc_crossing_point,
                   spanning_edge,
                   *(float *)(v3 + 64),
                   &segment->high_x) )
            {
LABEL_110:
              v42 = 1;
            }
            else
            {
              v42 = 0;
            }
            if ( v42 )
              break;
            std::_List_iterator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>::operator++((std::_List_iterator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> *const)(v3 + 464));
          }
          *(_DWORD *)(((v3 + 944) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 944) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 975) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 975) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 944, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 944),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/math_def.cpp",
            "initByPointVec",
            868);
          v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 944),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v44 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v43, (const char (*)[7])"low_y:");
          v45 = common::milog::MiLogStream::operator<<<float,(float *)0>(v44, (const float *)(v3 + 48));
          v46 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v45, (const char (*)[9])" high_y:");
          v47 = common::milog::MiLogStream::operator<<<float,(float *)0>(v46, (const float *)(v3 + 64));
          v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v47,
                  (const char (*)[16])" spanning_edge:");
          *(_DWORD *)(((v3 + 1008) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1008) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1039) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 15) & 7) >= *(_BYTE *)(((v3 + 1039) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1008, 32LL);
          }
          InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge::toString(
            (std::string *)(v3 + 1008),
            spanning_edge);
          v14 = v3 + 1008;
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v48, (const std::string *)(v3 + 1008));
          std::string::~string((void *)(v3 + 1008));
          *(_DWORD *)(((v3 + 1008) >> 3) + 0x7FFF8000) = -117901064;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 944));
          *(_DWORD *)(((v3 + 944) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v49 = 0;
LABEL_120:
          *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) = -8;
          if ( v49 == 1 )
          {
            v50 = std::vector<InteriorCheckablePolygon::Segment>::end(&strip->segment_vec)._M_current;
            v51._M_current = std::vector<InteriorCheckablePolygon::Segment>::begin(&strip->segment_vec)._M_current;
            v14 = (std::vector<InteriorCheckablePolygon::Strip>::size_type)v50;
            std::sort<__gnu_cxx::__normal_iterator<InteriorCheckablePolygon::Segment *,std::vector<InteriorCheckablePolygon::Segment>>,InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::{lambda(InteriorCheckablePolygon::Segment const&,InteriorCheckablePolygon::Segment const&)#3}>(
              v51,
              (__gnu_cxx::__normal_iterator<InteriorCheckablePolygon::Segment*,std::vector<InteriorCheckablePolygon::Segment> >)v50,
              v52);
            v24 = 2;
          }
          else
          {
            v24 = 1;
          }
        }
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( !v24 )
        break;
      if ( v24 != 2 )
      {
        v53 = 0;
        goto LABEL_127;
      }
    }
    v53 = 1;
LABEL_127:
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v53 == 1 )
      v2 = 0;
  }
  std::list<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::~list((std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > *const)(v3 + 560));
  std::map<float,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge>>,InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::{lambda(float,float)#1},std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector const&<data::Point2D,std::allocator<std::vector const&>>)::SpanningEdge>>>>>::~map((std::map<float,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >,InteriorCheckablePolygon::initByPointVec(const Point2DList&)::<lambda(float,float)>,std::allocator<std::pair<float const,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > > > *const)(v3 + 1072));
  if ( v68 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8080) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 136) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF808C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1152LL, v68);
  }
  return v2;
};

// Line 781: range 000000000CCFB1E8-000000000CCFB22E
bool __cdecl InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::{lambda(float,float)#1}::operator()(
        const InteriorCheckablePolygon::initByPointVec::<lambda(float, float)> *const __closure,
        float y1,
        float y2)
{
  return std::fabs(y1 - y2) > 0.001 && y2 > y1;
};

// Line 788: range 000000000CCFB230-000000000CCFB686
std::string *__cdecl InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge::toString(
        std::string *retstr,
        const InteriorCheckablePolygon::initByPointVec::SpanningEdge *const this)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 p_ending_point; // rsi
  const InteriorCheckablePolygon::initByPointVec::SpanningEdge *thisa; // [rsp+0h] [rbp-2C0h]
  char v10[688]; // [rsp+10h] [rbp-2B0h] BYREF

  thisa = this;
  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(640LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 32 9 <unknown> 112 32 9 <unknown> 176 392 6 ss:790";
  *(_QWORD *)(v2 + 16) = InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge::toString;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862724] = -219021312;
  v4[536862725] = 62194;
  v4[536862737] = -218103808;
  v4[536862738] = -202116109;
  v4[536862739] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 176);
  if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 79) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 79) >> 3) + 0x7FFF8000) )
  {
    this = (const InteriorCheckablePolygon::initByPointVec::SpanningEdge *const)32;
    __asan_report_store_n(v2 + 48, 32LL);
  }
  Vector2::toString[abi:cxx11]((std::string *)(v2 + 48), &this->starting_point);
  v5 = std::operator<<<char>(v2 + 192, v2 + 48);
  v6 = std::operator<<<std::char_traits<char>>(v5, "->");
  p_ending_point = (__int64)&thisa->ending_point;
  if ( *(char *)(((v2 + 112) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) )
  {
    p_ending_point = 32LL;
    __asan_report_store_n(v2 + 112, 32LL);
  }
  Vector2::toString[abi:cxx11]((std::string *)(v2 + 112), (const Vector2 *const)p_ending_point);
  std::operator<<<char>(v6, v2 + 112);
  std::string::~string((void *)(v2 + 112));
  *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 48));
  *(_DWORD *)(((v2 + 48) >> 3) + 0x7FFF8000) = -117901064;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v2 + 176);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 176);
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF804C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 799: range 000000000CCFB714-000000000CCFB952
int32_t __cdecl InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::{lambda(InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge const&,float,float &)#2}::operator()(
        const InteriorCheckablePolygon::initByPointVec::<lambda(const InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge&, float, float&)> *const __closure,
        const InteriorCheckablePolygon::initByPointVec::SpanningEdge *spanning_edge,
        float y,
        float *x)
{
  double v4; // xmm0_8
  double v5; // xmm0_8
  float v7; // xmm1_4
  float v8; // xmm0_4
  float dy; // [rsp+28h] [rbp-8h]
  float dx_0; // [rsp+2Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&spanning_edge->ending_point.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)spanning_edge + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&spanning_edge->ending_point.y >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4(&spanning_edge->ending_point.y);
  }
  *(float *)&v4 = spanning_edge->ending_point.y;
  if ( *(_BYTE *)(((unsigned __int64)&spanning_edge->starting_point.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)spanning_edge + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&spanning_edge->starting_point.y >> 3)
                                                                + 0x7FFF8000) )
  {
    v4 = __asan_report_load4(&spanning_edge->starting_point.y);
  }
  dy = *(float *)&v4 - spanning_edge->starting_point.y;
  if ( *(_BYTE *)(((unsigned __int64)&spanning_edge->ending_point >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)spanning_edge + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&spanning_edge->ending_point >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&spanning_edge->ending_point);
  }
  *(float *)&v5 = spanning_edge->ending_point.x;
  if ( *(_BYTE *)(((unsigned __int64)spanning_edge >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)spanning_edge & 7) + 3) >= *(_BYTE *)(((unsigned __int64)spanning_edge >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load4(spanning_edge);
  }
  dx_0 = *(float *)&v5 - spanning_edge->starting_point.x;
  if ( CommonMiscs::isAlmostZero(dy, 0.001) )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&spanning_edge->starting_point.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)spanning_edge + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&spanning_edge->starting_point.y >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&spanning_edge->starting_point.y);
  }
  v7 = (float)(dx_0 / dy) * (float)(y - spanning_edge->starting_point.y);
  if ( *(_BYTE *)(((unsigned __int64)spanning_edge >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)spanning_edge & 7) + 3) >= *(_BYTE *)(((unsigned __int64)spanning_edge >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(spanning_edge);
  }
  v8 = spanning_edge->starting_point.x + v7;
  if ( *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)x & 7) + 3) >= *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(x, ((unsigned __int8)x & 7u) + 3);
  }
  *x = v8;
  return 0;
};

// Line 809: range 000000000CCFB954-000000000CCFBB27
bool __cdecl InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::{lambda(InteriorCheckablePolygon::Segment const&,InteriorCheckablePolygon::Segment const&)#3}::operator()(
        const InteriorCheckablePolygon::initByPointVec::<lambda(const InteriorCheckablePolygon::Segment&, const InteriorCheckablePolygon::Segment&)> *const __closure,
        const InteriorCheckablePolygon::Segment *lhs,
        const InteriorCheckablePolygon::Segment *rhs)
{
  double v3; // xmm0_8
  float low_x; // xmm1_4
  double v6; // xmm0_8

  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)lhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(lhs);
  }
  *(float *)&v3 = lhs->low_x;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(rhs);
  }
  if ( std::fabs(*(float *)&v3 - rhs->low_x) <= 0.001 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&rhs->high_x >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->high_x >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->high_x);
    }
    *(float *)&v6 = rhs->high_x;
    if ( *(_BYTE *)(((unsigned __int64)&lhs->high_x >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)lhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->high_x >> 3) + 0x7FFF8000) )
    {
      v6 = __asan_report_load4(&lhs->high_x);
    }
    return InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::{lambda(float,float)#1}::operator()(
             &InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::compare_floats,
             lhs->high_x,
             *(float *)&v6);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)lhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(lhs);
    }
    low_x = lhs->low_x;
    if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)rhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(rhs);
    }
    return rhs->low_x > low_x;
  }
};

// Line 881: range 000000000CCFD79A-000000000CCFDCAC
bool __cdecl InteriorCheckablePolygon::isPointInsidePolygon(
        const InteriorCheckablePolygon *const this,
        const Vector2 *point)
{
  std::vector<InteriorCheckablePolygon::Strip>::const_reference v3; // rax
  double v4; // xmm0_8
  std::vector<InteriorCheckablePolygon::Strip>::const_reference v5; // rax
  double v6; // xmm0_8
  std::vector<InteriorCheckablePolygon::Strip>::const_reference v7; // rax
  double v8; // xmm0_8
  float *p_high_x; // rax
  double v10; // xmm0_8
  float *v11; // rax
  double v12; // xmm0_8
  uint32_t first; // [rsp+1Ch] [rbp-34h]
  uint32_t firsta; // [rsp+1Ch] [rbp-34h]
  uint32_t firstb; // [rsp+1Ch] [rbp-34h]
  unsigned int last; // [rsp+20h] [rbp-30h]
  uint32_t lasta; // [rsp+20h] [rbp-30h]
  uint32_t n; // [rsp+24h] [rbp-2Ch]
  float delta_high_y; // [rsp+2Ch] [rbp-24h]
  float delta_low_y; // [rsp+30h] [rbp-20h]
  std::vector<InteriorCheckablePolygon::Segment> *segment_vec; // [rsp+38h] [rbp-18h]
  std::vector<InteriorCheckablePolygon::Segment>::const_reference segment_0; // [rsp+40h] [rbp-10h]
  std::vector<InteriorCheckablePolygon::Segment>::const_reference segment; // [rsp+48h] [rbp-8h]

  if ( std::vector<InteriorCheckablePolygon::Strip>::empty(&this->strip_vec) )
    return 0;
  n = std::vector<InteriorCheckablePolygon::Strip>::size(&this->strip_vec);
  first = 0;
  last = n;
  while ( first < last )
  {
    v3 = std::vector<InteriorCheckablePolygon::Strip>::operator[](&this->strip_vec, (first + last) >> 1);
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v3);
    }
    *(float *)&v4 = v3->y;
    if ( *(_BYTE *)(((unsigned __int64)&point->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)point + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point->y >> 3) + 0x7FFF8000) )
    {
      v4 = __asan_report_load4(&point->y);
    }
    if ( *(float *)&v4 <= (float)(point->y + 0.001) )
      first = ((first + last) >> 1) + 1;
    else
      last = (first + last) >> 1;
  }
  if ( first >= n || !first )
    return 0;
  firsta = first - 1;
  segment_vec = &std::vector<InteriorCheckablePolygon::Strip>::operator[](&this->strip_vec, firsta)->segment_vec;
  if ( std::vector<InteriorCheckablePolygon::Segment>::size(segment_vec) <= 1 )
    return 0;
  v5 = std::vector<InteriorCheckablePolygon::Strip>::operator[](&this->strip_vec, firsta + 1);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(v5);
  }
  *(float *)&v6 = v5->y;
  if ( *(_BYTE *)(((unsigned __int64)&point->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)point + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point->y >> 3) + 0x7FFF8000) )
  {
    v6 = __asan_report_load4(&point->y);
  }
  delta_high_y = *(float *)&v6 - point->y;
  v7 = std::vector<InteriorCheckablePolygon::Strip>::operator[](&this->strip_vec, firsta);
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(v7);
  }
  *(float *)&v8 = v7->y;
  if ( *(_BYTE *)(((unsigned __int64)&point->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)point + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point->y >> 3) + 0x7FFF8000) )
  {
    v8 = __asan_report_load4(&point->y);
  }
  delta_low_y = *(float *)&v8 - point->y;
  firstb = 0;
  lasta = std::vector<InteriorCheckablePolygon::Segment>::size(segment_vec) >> 1;
  while ( firstb < lasta )
  {
    segment_0 = std::vector<InteriorCheckablePolygon::Segment>::operator[](segment_vec, 2 * ((firstb + lasta) >> 1));
    p_high_x = &segment_0->high_x;
    if ( *(_BYTE *)(((unsigned __int64)p_high_x >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_high_x & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_high_x >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_high_x);
    }
    *(float *)&v10 = segment_0->high_x;
    if ( *(_BYTE *)(((unsigned __int64)point >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)point & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point >> 3) + 0x7FFF8000) )
    {
      v10 = __asan_report_load4(point);
    }
    *(float *)&v10 = (float)(*(float *)&v10 - point->x) * delta_low_y;
    if ( *(_BYTE *)(((unsigned __int64)segment_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)segment_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)segment_0 >> 3) + 0x7FFF8000) )
    {
      v10 = __asan_report_load4(segment_0);
    }
    if ( (float)(*(float *)&v10 - (float)((float)(segment_0->low_x - point->x) * delta_high_y)) >= -0.001 )
      firstb = ((firstb + lasta) >> 1) + 1;
    else
      lasta = (firstb + lasta) >> 1;
  }
  if ( !firstb )
    return 0;
  segment = std::vector<InteriorCheckablePolygon::Segment>::operator[](segment_vec, 2 * firstb - 1);
  v11 = &segment->high_x;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v11);
  }
  *(float *)&v12 = segment->high_x;
  if ( *(_BYTE *)(((unsigned __int64)point >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)point & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point >> 3) + 0x7FFF8000) )
  {
    v12 = __asan_report_load4(point);
  }
  *(float *)&v12 = (float)(*(float *)&v12 - point->x) * delta_low_y;
  if ( *(_BYTE *)(((unsigned __int64)segment >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)segment & 7) + 3) >= *(_BYTE *)(((unsigned __int64)segment >> 3) + 0x7FFF8000) )
  {
    v12 = __asan_report_load4(segment);
  }
  return (float)(*(float *)&v12 - (float)((float)(segment->low_x - point->x) * delta_high_y)) < 0.001;
};

// Line 919: range 000000000CCFDCAD-000000000CCFE1E4
// local variable allocation has failed, the output may be wrong!
bool __cdecl isLineSegmentIntersectSphere(
        const Vector3 *point1,
        const Vector3 *point2,
        const Vector3 *sphere_center,
        float sphere_radius)
{
  __m128i v4; // xmm1
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  __int64 v8; // xmm0_8
  __m128i v9; // xmm2
  bool result; // al
  float v11; // [rsp+0h] [rbp-110h]
  float segment_length; // [rsp+2Ch] [rbp-E4h]
  float segment_extent; // [rsp+30h] [rbp-E0h]
  float a1; // [rsp+38h] [rbp-D8h]
  float tmp0; // [rsp+40h] [rbp-D0h]
  float qm; // [rsp+48h] [rbp-C8h]
  char v19[192]; // [rsp+50h] [rbp-C0h] BYREF

  v5 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 12 18 segment_center:920 64 12 9 <unknown> 96 12 21 segment_direction:921 128 12 8 diff:925";
  *(_QWORD *)(v5 + 16) = isLineSegmentIntersectSphere;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219020288;
  v7[536862722] = -219020288;
  v7[536862723] = -219020288;
  v7[536862724] = -202177536;
  if ( *(char *)(((v5 + 64) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v5 + 75) >> 3) + 0x7FFF8000) != 0
    && (char)((v5 + 75) & 7) >= *(_BYTE *)(((v5 + 75) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v5 + 64, 12LL);
  }
  *(Vector3 *)(v5 + 64) = operator+(point1, point2);
  if ( *(char *)(((v5 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v5 + 43) >> 3) + 0x7FFF8000) != 0
    && (char)((v5 + 43) & 7) >= *(_BYTE *)(((v5 + 43) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v5 + 32, 12LL);
  }
  *(Vector3 *)(v5 + 32) = Vector3::operator/((const Vector3 *const)(v5 + 64), 2.0);
  *(_WORD *)(((v5 + 64) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v5 + 96) >> 3) + 0x7FFF8000) = 1024;
  if ( *(char *)(((v5 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v5 + 107) >> 3) + 0x7FFF8000) != 0
    && (char)((v5 + 107) & 7) >= *(_BYTE *)(((v5 + 107) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v5 + 96, 12LL);
  }
  *(Vector3 *)((char *)&v4 - 8) = operator-(point2, point1);
  *(_QWORD *)(v5 + 96) = v8;
  *(_DWORD *)(v5 + 104) = v4.m128i_i32[0];
  Vector3::getLength((const Vector3 *const)(v5 + 96));
  segment_length = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  segment_extent = segment_length / 2.0;
  Vector3::unitize((Vector3 *const)(v5 + 96));
  *(_WORD *)(((v5 + 128) >> 3) + 0x7FFF8000) = 1024;
  if ( *(char *)(((v5 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v5 + 139) >> 3) + 0x7FFF8000) != 0
    && (char)((v5 - 117) & 7) >= *(_BYTE *)(((v5 + 139) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v5 + 128, 12LL);
  }
  *(Vector3 *)(v5 + 128) = operator-((const Vector3 *)(v5 + 32), sphere_center);
  v11 = Vector3::dot((const Vector3 *const)(v5 + 128), (const Vector3 *)(v5 + 128));
  v9 = (__m128i)LODWORD(v11);
  *(float *)v9.m128i_i32 = v11 - square(sphere_radius);
  Vector3::dot((const Vector3 *const)(v5 + 96), (const Vector3 *)(v5 + 128));
  a1 = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
  if ( (float)(square(a1) - *(float *)v9.m128i_i32) >= 0.0 )
  {
    tmp0 = square(segment_extent) + *(float *)v9.m128i_i32;
    qm = tmp0 - (float)(a1 * segment_length);
    result = (float)(qm * (float)(tmp0 + (float)(a1 * segment_length))) <= 0.0
          || qm > 0.0 && segment_extent > std::abs(a1);
  }
  else
  {
    result = 0;
  }
  if ( v19 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 942: range 000000000CCFE1E5-000000000CCFEC38
bool __cdecl isLineSegmentIntersectCube(
        const Vector3 *point1,
        const Vector3 *point2,
        const Vector3 *cube_center,
        const Vector3 *cube_size)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  bool result; // al
  float v12; // [rsp+Ch] [rbp-104h]
  float v13; // [rsp+Ch] [rbp-104h]
  float v14; // [rsp+Ch] [rbp-104h]
  float v15; // [rsp+Ch] [rbp-104h]
  float v16; // [rsp+Ch] [rbp-104h]
  float v17; // [rsp+Ch] [rbp-104h]
  float v18; // [rsp+Ch] [rbp-104h]
  float v19; // [rsp+Ch] [rbp-104h]
  float v20; // [rsp+Ch] [rbp-104h]
  float v21; // [rsp+Ch] [rbp-104h]
  float v22; // [rsp+Ch] [rbp-104h]
  float v23; // [rsp+Ch] [rbp-104h]
  float v24; // [rsp+Ch] [rbp-104h]
  float v25; // [rsp+Ch] [rbp-104h]
  float v26; // [rsp+Ch] [rbp-104h]
  float v27; // [rsp+Ch] [rbp-104h]
  float v28; // [rsp+Ch] [rbp-104h]
  float v29; // [rsp+Ch] [rbp-104h]
  float v30; // [rsp+Ch] [rbp-104h]
  float start_ratio; // [rsp+30h] [rbp-E0h]
  float end_ratio; // [rsp+34h] [rbp-DCh]
  float final_start_ratio; // [rsp+38h] [rbp-D8h]
  float final_end_ratio; // [rsp+3Ch] [rbp-D4h]
  uint32_t inner_count; // [rsp+40h] [rbp-D0h]
  uint32_t i; // [rsp+44h] [rbp-CCh]
  float diff_0; // [rsp+48h] [rbp-C8h]
  float diff; // [rsp+4Ch] [rbp-C4h]
  char v41[192]; // [rsp+50h] [rbp-C0h] BYREF

  v4 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 12 7 min:943 64 12 9 <unknown> 96 12 7 max:944 128 12 9 <unknown>";
  *(_QWORD *)(v4 + 16) = isLineSegmentIntersectCube;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219020288;
  v6[536862722] = -219020288;
  v6[536862723] = -219020288;
  v6[536862724] = -202177536;
  if ( *(char *)(((v4 + 64) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 75) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 75) & 7) >= *(_BYTE *)(((v4 + 75) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 64, 12LL);
  }
  *(Vector3 *)(v4 + 64) = Vector3::operator/(cube_size, 2.0);
  if ( *(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 43) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 43) & 7) >= *(_BYTE *)(((v4 + 43) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 32, 12LL);
  }
  *(Vector3 *)(v4 + 32) = operator-(cube_center, (const Vector3 *)(v4 + 64));
  *(_WORD *)(((v4 + 64) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v4 + 96) >> 3) + 0x7FFF8000) = 1024;
  *(_WORD *)(((v4 + 128) >> 3) + 0x7FFF8000) = 1024;
  if ( *(char *)(((v4 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 139) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 117) & 7) >= *(_BYTE *)(((v4 + 139) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 128, 12LL);
  }
  *(Vector3 *)(v4 + 128) = Vector3::operator/(cube_size, 2.0);
  if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 107) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 107) & 7) >= *(_BYTE *)(((v4 + 107) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 96, 12LL);
  }
  *(Vector3 *)(v4 + 96) = operator+(cube_center, (const Vector3 *)(v4 + 128));
  *(_WORD *)(((v4 + 128) >> 3) + 0x7FFF8000) = -1800;
  final_start_ratio = 0.0;
  final_end_ratio = 1.0;
  inner_count = 0;
  for ( i = 0; i <= 2; ++i )
  {
    start_ratio = 0.0;
    end_ratio = 1.0;
    v12 = Vector3::operator[](point1, i);
    if ( Vector3::operator[](point2, i) <= v12 )
    {
      v22 = Vector3::operator[](point2, i);
      if ( v22 > Vector3::operator[]((const Vector3 *const)(v4 + 96), i)
        || (v23 = Vector3::operator[](point1, i), Vector3::operator[]((const Vector3 *const)(v4 + 32), i) > v23) )
      {
        result = 0;
        goto LABEL_57;
      }
      v24 = Vector3::operator[](point2, i);
      if ( v24 > Vector3::operator[]((const Vector3 *const)(v4 + 32), i) )
      {
        v25 = Vector3::operator[](point1, i);
        if ( Vector3::operator[]((const Vector3 *const)(v4 + 96), i) > v25 )
        {
          ++inner_count;
          continue;
        }
      }
      v26 = Vector3::operator[](point1, i);
      diff_0 = v26 - Vector3::operator[](point2, i);
      if ( diff_0 > 0.00000011920929 )
      {
        v27 = Vector3::operator[](point1, i);
        if ( v27 > Vector3::operator[]((const Vector3 *const)(v4 + 96), i) )
        {
          v28 = Vector3::operator[](point1, i);
          start_ratio = (float)(v28 - Vector3::operator[]((const Vector3 *const)(v4 + 96), i)) / diff_0;
        }
        v29 = Vector3::operator[](point2, i);
        if ( Vector3::operator[]((const Vector3 *const)(v4 + 32), i) > v29 )
        {
          v30 = Vector3::operator[](point1, i);
          end_ratio = (float)(v30 - Vector3::operator[]((const Vector3 *const)(v4 + 32), i)) / diff_0;
        }
      }
    }
    else
    {
      v13 = Vector3::operator[](point1, i);
      if ( v13 > Vector3::operator[]((const Vector3 *const)(v4 + 96), i)
        || (v14 = Vector3::operator[](point2, i), Vector3::operator[]((const Vector3 *const)(v4 + 32), i) > v14) )
      {
        result = 0;
        goto LABEL_57;
      }
      v15 = Vector3::operator[](point1, i);
      if ( v15 > Vector3::operator[]((const Vector3 *const)(v4 + 32), i) )
      {
        v16 = Vector3::operator[](point2, i);
        if ( Vector3::operator[]((const Vector3 *const)(v4 + 96), i) > v16 )
        {
          ++inner_count;
          continue;
        }
      }
      v17 = Vector3::operator[](point2, i);
      diff = v17 - Vector3::operator[](point1, i);
      if ( diff > 0.00000011920929 )
      {
        v18 = Vector3::operator[](point1, i);
        if ( Vector3::operator[]((const Vector3 *const)(v4 + 32), i) > v18 )
        {
          v19 = Vector3::operator[]((const Vector3 *const)(v4 + 32), i);
          start_ratio = (float)(v19 - Vector3::operator[](point1, i)) / diff;
        }
        v20 = Vector3::operator[](point2, i);
        if ( v20 > Vector3::operator[]((const Vector3 *const)(v4 + 96), i) )
        {
          v21 = Vector3::operator[]((const Vector3 *const)(v4 + 96), i);
          end_ratio = (float)(v21 - Vector3::operator[](point1, i)) / diff;
        }
      }
    }
    if ( start_ratio > final_start_ratio )
      final_start_ratio = start_ratio;
    if ( final_end_ratio > end_ratio )
      final_end_ratio = end_ratio;
    if ( final_start_ratio > final_end_ratio )
    {
      result = 0;
      goto LABEL_57;
    }
  }
  result = inner_count <= 2;
LABEL_57:
  if ( v41 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 1013: range 000000000CCFEC3A-000000000CCFEE8A
void __cdecl Quaternion::fromAxisAngle(Quaternion *const this, const Vector3 *axis, float angle)
{
  unsigned int v3; // xmm0_4
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  float v6; // ecx
  char v7; // dl
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  const Vector3 *axisa; // [rsp+10h] [rbp-20h]
  unsigned int halfRad; // [rsp+28h] [rbp-8h]
  float s; // [rsp+2Ch] [rbp-4h]

  axisa = axis;
  *(float *)&v3 = 0.5 * (3.141592653589793 * angle / 180.0);
  halfRad = v3;
  v4 = _mm_cvtsi32_si128(v3);
  *(float *)v4.m128i_i32 = sinf(*(float *)v4.m128i_i32);
  s = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  v5 = _mm_cvtsi32_si128(halfRad);
  *(float *)v5.m128i_i32 = cosf(*(float *)v5.m128i_i32);
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  v7 = *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(axis) = v7 != 0;
    __asan_report_store4(&this->w, axis);
  }
  this->w = v6;
  if ( *(_BYTE *)(((unsigned __int64)axisa >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)axisa & 7) + 3) >= *(_BYTE *)(((unsigned __int64)axisa >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(axisa);
  }
  v8 = axisa->x * s;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->x = v8;
  if ( *(_BYTE *)(((unsigned __int64)&axisa->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)axisa + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&axisa->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&axisa->y);
  }
  v9 = axisa->y * s;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->y = v9;
  if ( *(_BYTE *)(((unsigned __int64)&axisa->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)axisa + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&axisa->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&axisa->z);
  }
  v10 = axisa->z * s;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->z, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->z = v10;
};

// Line 1024: range 000000000CCFEE8C-000000000CCFF55F
void __cdecl Quaternion::toAxisAngle(Quaternion *const this, Vector3 *axis, float *angle)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  float *p_w; // rcx
  char v7; // al
  float *v8; // rsi
  const float *v9; // rcx
  char v10; // al
  float *v11; // rax
  float *v12; // rdx
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float x; // xmm0_4
  float y; // xmm0_4
  float z; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  Vector3 *axisa; // [rsp+10h] [rbp-A0h]
  float s; // [rsp+2Ch] [rbp-84h]
  char v26[128]; // [rsp+30h] [rbp-80h] BYREF

  axisa = axis;
  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = Quaternion::toAxisAngle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  p_w = &this->w;
  v7 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(axis) = v7 != 0;
    __asan_report_store4(v3 + 48, axis);
  }
  *(_DWORD *)(v3 + 48) = 1065353216;
  v8 = p_w;
  v9 = std::min<float>((const float *)(v3 + 48), p_w);
  v10 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(v3 + 64, v8);
  }
  *(_DWORD *)(v3 + 64) = -1082130432;
  v11 = (float *)std::max<float>((const float *)(v3 + 64), v9);
  v12 = v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v11);
  }
  v13 = *v12;
  if ( *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->w, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->w = v13;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->w);
  }
  v14 = acosf(this->w);
  v15 = 180.0 * (v14 + v14) / 3.141592653589793;
  if ( *(_BYTE *)(((unsigned __int64)angle >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)angle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(angle, ((unsigned __int8)angle & 7u) + 3);
  }
  *angle = v15;
  v16 = sqrt(1.0 - (float)(this->w * this->w));
  s = v16;
  if ( v16 >= 0.00000011920929 )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(this);
    }
    v20 = this->x / s;
    if ( *(_BYTE *)(((unsigned __int64)axisa >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)axisa & 7) + 3) >= *(_BYTE *)(((unsigned __int64)axisa >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(axisa, ((unsigned __int8)axisa & 7u) + 3);
    }
    axisa->x = v20;
    if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->y);
    }
    v21 = this->y / s;
    if ( *(_BYTE *)(((unsigned __int64)&axisa->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)axisa + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&axisa->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&axisa->y, (((_BYTE)axisa + 4) & 7u) + 3);
    }
    axisa->y = v21;
    if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->z);
    }
    v22 = this->z / s;
    if ( *(_BYTE *)(((unsigned __int64)&axisa->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)axisa + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&axisa->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&axisa->z, (((_BYTE)axisa + 8) & 7u) + 3);
    }
    axisa->z = v22;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(this);
    }
    x = this->x;
    if ( *(_BYTE *)(((unsigned __int64)axisa >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)axisa & 7) + 3) >= *(_BYTE *)(((unsigned __int64)axisa >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(axisa, ((unsigned __int8)axisa & 7u) + 3);
    }
    axisa->x = x;
    if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->y);
    }
    y = this->y;
    if ( *(_BYTE *)(((unsigned __int64)&axisa->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)axisa + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&axisa->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&axisa->y, (((_BYTE)axisa + 4) & 7u) + 3);
    }
    axisa->y = y;
    if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->z);
    }
    z = this->z;
    if ( *(_BYTE *)(((unsigned __int64)&axisa->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)axisa + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&axisa->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&axisa->z, (((_BYTE)axisa + 8) & 7u) + 3);
    }
    axisa->z = z;
  }
  if ( v26 == (char *)v3 )
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

// Line 1044: range 000000000CCFF560-000000000CCFF830
void __cdecl Quaternion::fromEuler(Quaternion *const this, const Vector3 *euler)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float cX_0; // [rsp+18h] [rbp-D8h]
  float sX; // [rsp+1Ch] [rbp-D4h]
  float cY; // [rsp+20h] [rbp-D0h]
  float sY; // [rsp+24h] [rbp-CCh]
  float cZ; // [rsp+28h] [rbp-C8h]
  char v16[192]; // [rsp+30h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 12 11 radian:1045 64 16 7 qX:1056 96 16 7 qY:1057 128 16 7 qZ:1058";
  *(_QWORD *)(v2 + 16) = Quaternion::fromEuler;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  *(Vector3 *)(v2 + 32) = angleToRadian(euler);
  v5 = cos(*(float *)(v2 + 32) / 2.0);
  cX_0 = v5;
  v6 = sin(*(float *)(v2 + 32) / 2.0);
  sX = v6;
  v7 = cos(*(float *)(v2 + 36) / 2.0);
  cY = v7;
  v8 = sin(*(float *)(v2 + 36) / 2.0);
  sY = v8;
  v9 = cos(*(float *)(v2 + 40) / 2.0);
  cZ = v9;
  v10 = sin(*(float *)(v2 + 40) / 2.0);
  Quaternion::Quaternion((Quaternion *const)(v2 + 64), sX, 0.0, 0.0, cX_0);
  Quaternion::Quaternion((Quaternion *const)(v2 + 96), 0.0, sY, 0.0, cY);
  Quaternion::Quaternion((Quaternion *const)(v2 + 128), 0.0, 0.0, v10, cZ);
  Quaternion::createQuaternionFromAxisQuaternions(
    (const Quaternion *)(v2 + 96),
    (const Quaternion *)(v2 + 64),
    (const Quaternion *)(v2 + 128),
    this);
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1064: range 000000000CCFF832-000000000CD000CA
void __cdecl Quaternion::toEuler(const Quaternion *const this, Vector3 *euler)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  float x; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  int v10; // xmm0_4
  float v11; // xmm0_4
  __int64 v12; // rsi
  __m128i v13; // xmm0
  float v14; // ecx
  char v15; // dl
  __m128i v16; // xmm0
  float v17; // ecx
  char v18; // dl
  int v19; // xmm0_4
  float v20; // xmm0_4
  __int64 v21; // rsi
  __m128i v22; // xmm0
  float v23; // ecx
  char v24; // dl
  float v25; // [rsp+Ch] [rbp-114h]
  float v26; // [rsp+Ch] [rbp-114h]
  float a; // [rsp+30h] [rbp-F0h]
  float b; // [rsp+34h] [rbp-ECh]
  float c; // [rsp+38h] [rbp-E8h]
  float e; // [rsp+3Ch] [rbp-E4h]
  char v32[224]; // [rsp+40h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 28 6 v:1069 112 40 6 d:1066";
  *(_QWORD *)(v2 + 16) = Quaternion::toEuler;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219020288;
  v4[536862723] = 62194;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  *(float *)(v2 + 112) = this->x * this->x;
  x = this->x;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  *(float *)(v2 + 116) = this->y * x;
  v6 = this->x;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  *(float *)(v2 + 120) = this->z * v6;
  v7 = this->x;
  if ( *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->w);
  }
  *(float *)(v2 + 124) = this->w * v7;
  *(float *)(v2 + 128) = this->y * this->y;
  *(float *)(v2 + 132) = this->z * this->y;
  *(float *)(v2 + 136) = this->w * this->y;
  *(float *)(v2 + 140) = this->z * this->z;
  *(float *)(v2 + 144) = this->w * this->z;
  *(float *)(v2 + 148) = this->w * this->w;
  *(float *)(v2 + 72) = *(float *)(v2 + 132) - *(float *)(v2 + 124);
  v8 = *(float *)(v2 + 144) + *(float *)(v2 + 116);
  *(float *)(v2 + 64) = v8 + v8;
  *(float *)(v2 + 68) = *(float *)(v2 + 148)
                      + (float)((float)(*(float *)(v2 + 128) - *(float *)(v2 + 140)) - *(float *)(v2 + 112));
  *(_DWORD *)(v2 + 48) = -1082130432;
  *(float *)(v2 + 52) = *(float *)(v2 + 72) + *(float *)(v2 + 72);
  if ( std::fabs(*(float *)(v2 + 72)) >= 0.49999899 )
  {
    a = *(float *)(v2 + 144) + *(float *)(v2 + 116);
    b = *(float *)(v2 + 124) - *(float *)(v2 + 132);
    c = *(float *)(v2 + 116) - *(float *)(v2 + 144);
    e = *(float *)(v2 + 124) + *(float *)(v2 + 132);
    *(float *)(v2 + 56) = (float)(b * c) + (float)(a * e);
    *(float *)(v2 + 60) = (float)(b * e) - (float)(a * c);
    if ( *(float *)(v2 + 52) >= -1.0 )
    {
      if ( *(float *)(v2 + 52) <= 1.0 )
        v19 = *(_DWORD *)(v2 + 52);
      else
        v19 = 1065353216;
    }
    else
    {
      v19 = -1082130432;
    }
    *(_DWORD *)(v2 + 52) = v19;
    v26 = *(float *)(v2 + 48);
    v20 = std::asin(*(float *)(v2 + 52)) * v26;
    v21 = ((unsigned __int8)euler & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)euler >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)euler & 7) + 3) >= *(_BYTE *)(((unsigned __int64)euler >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(euler, v21);
    }
    euler->x = v20;
    v22 = _mm_cvtsi32_si128(*(_DWORD *)(v2 + 56));
    *(float *)v22.m128i_i32 = std::atan2(*(float *)v22.m128i_i32, *(float *)(v2 + 60));
    v23 = COERCE_FLOAT(_mm_cvtsi128_si32(v22));
    v24 = *(_BYTE *)(((unsigned __int64)&euler->y >> 3) + 0x7FFF8000);
    if ( v24 != 0 && (char)((((_BYTE)euler + 4) & 7) + 3) >= v24 )
    {
      LOBYTE(v21) = v24 != 0;
      __asan_report_store4(&euler->y, v21);
    }
    euler->y = v23;
    if ( *(_BYTE *)(((unsigned __int64)&euler->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)euler + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&euler->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&euler->z, (((_BYTE)euler + 8) & 7u) + 3);
    }
    euler->z = 0.0;
  }
  else
  {
    v9 = *(float *)(v2 + 136) + *(float *)(v2 + 120);
    *(float *)(v2 + 56) = v9 + v9;
    *(float *)(v2 + 60) = *(float *)(v2 + 148)
                        + (float)((float)(*(float *)(v2 + 140) - *(float *)(v2 + 112)) - *(float *)(v2 + 128));
    if ( *(float *)(v2 + 52) >= -1.0 )
    {
      if ( *(float *)(v2 + 52) <= 1.0 )
        v10 = *(_DWORD *)(v2 + 52);
      else
        v10 = 1065353216;
    }
    else
    {
      v10 = -1082130432;
    }
    *(_DWORD *)(v2 + 52) = v10;
    v25 = *(float *)(v2 + 48);
    v11 = std::asin(*(float *)(v2 + 52)) * v25;
    v12 = ((unsigned __int8)euler & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)euler >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)euler & 7) + 3) >= *(_BYTE *)(((unsigned __int64)euler >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(euler, v12);
    }
    euler->x = v11;
    v13 = _mm_cvtsi32_si128(*(_DWORD *)(v2 + 56));
    *(float *)v13.m128i_i32 = std::atan2(*(float *)v13.m128i_i32, *(float *)(v2 + 60));
    v14 = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
    v15 = *(_BYTE *)(((unsigned __int64)&euler->y >> 3) + 0x7FFF8000);
    if ( v15 != 0 && (char)((((_BYTE)euler + 4) & 7) + 3) >= v15 )
    {
      LOBYTE(v12) = v15 != 0;
      __asan_report_store4(&euler->y, v12);
    }
    euler->y = v14;
    v16 = _mm_cvtsi32_si128(*(_DWORD *)(v2 + 64));
    *(float *)v16.m128i_i32 = std::atan2(*(float *)v16.m128i_i32, *(float *)(v2 + 68));
    v17 = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
    v18 = *(_BYTE *)(((unsigned __int64)&euler->z >> 3) + 0x7FFF8000);
    if ( v18 != 0 && (char)((((_BYTE)euler + 8) & 7) + 3) >= v18 )
    {
      LOBYTE(v12) = v18 != 0;
      __asan_report_store4(&euler->z, v12);
    }
    euler->z = v17;
  }
  if ( ((unsigned __int8)euler & 7) >= *(_BYTE *)(((unsigned __int64)euler >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)euler >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&euler->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)euler + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&euler->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(euler, 12LL);
  }
  *euler = radianToAngle(euler);
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1109: range 000000000CD000CC-000000000CD00239
Vector3 __cdecl Quaternion::toEuler(const Quaternion *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  float v4; // xmm1_4
  __int64 v5; // xmm0_8
  __int64 v6; // [rsp+8h] [rbp-98h]
  const Quaternion *thisa; // [rsp+28h] [rbp-78h]
  __int64 v8; // [rsp+34h] [rbp-6Ch]
  float v9; // [rsp+3Ch] [rbp-64h]
  char v10[96]; // [rsp+40h] [rbp-60h] BYREF
  Vector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  thisa = this;
  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 12 10 euler:1110";
  *(_QWORD *)(v1 + 16) = Quaternion::toEuler;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202177536;
  Vector3::Vector3((Vector3 *const)(v1 + 32), 0.0, 0.0, 0.0);
  Quaternion::toEuler(thisa, (Vector3 *)(v1 + 32));
  if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v1 + 43) >> 3) + 0x7FFF8000) != 0
    && (char)((v1 + 43) & 7) >= *(_BYTE *)(((v1 + 43) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v1 + 32, 12LL);
  }
  v8 = *(_QWORD *)(v1 + 32);
  v9 = *(float *)(v1 + 40);
  v6 = v8;
  v4 = v9;
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v5 = v6;
  result.x = *(float *)&v5;
  result.y = *((float *)&v5 + 1);
  result.z = v4;
  return result;
};

// Line 1117: range 000000000CD0023A-000000000CD00618
Vector3 __cdecl Quaternion::rotateVector3(const Quaternion *const this, const Vector3 *vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  float z; // xmm1_4
  double v6; // xmm0_8
  float v7; // xmm1_4
  __int64 v8; // xmm0_8
  __int64 v9; // [rsp+8h] [rbp-118h]
  char v10[224]; // [rsp+40h] [rbp-E0h] BYREF
  Vector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 12 9 <unknown> 64 16 8 tmp:1118 96 16 11 result:1119 128 16 9 <unknown> 160 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = Quaternion::rotateVector3;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&vec->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)vec + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vec->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&vec->z);
  }
  z = vec->z;
  if ( *(_BYTE *)(((unsigned __int64)&vec->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)vec + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vec->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&vec->y);
  }
  *(float *)&v6 = vec->y;
  if ( *(_BYTE *)(((unsigned __int64)vec >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)vec & 7) + 3) >= *(_BYTE *)(((unsigned __int64)vec >> 3) + 0x7FFF8000) )
  {
    v6 = __asan_report_load4(vec);
  }
  Quaternion::Quaternion((Quaternion *const)(v2 + 64), vec->x, *(float *)&v6, z, 0.0);
  if ( *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(Quaternion *)(v2 + 160) = Quaternion::inverseAndMod(this);
  if ( *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(Quaternion *)(v2 + 128) = operator*(this, (const Quaternion *)(v2 + 64));
  *(Quaternion *)(v2 + 96) = operator*((const Quaternion *)(v2 + 128), (const Quaternion *)(v2 + 160));
  *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 1024;
  Vector3::Vector3((Vector3 *const)(v2 + 32), *(float *)(v2 + 96), *(float *)(v2 + 100), *(float *)(v2 + 104));
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 43) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 64 + 107) & 7) >= *(_BYTE *)(((v2 + 43) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v2 + 32, 12LL);
  }
  v9 = *(_QWORD *)(v2 + 32);
  v7 = *(float *)(v2 + 40);
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v8 = v9;
  result.x = *(float *)&v8;
  result.y = *((float *)&v8 + 1);
  result.z = v7;
  return result;
};

// Line 1124: range 000000000CD00619-000000000CD00A81
Quaternion __cdecl operator*(const Quaternion *lhs, const Quaternion *rhs)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  float w; // xmm1_4
  double v6; // xmm0_8
  float x; // xmm2_4
  float y; // xmm2_4
  float z; // xmm2_4
  __int64 v10; // xmm0_8
  __int64 v11; // xmm1_8
  __int64 v12; // [rsp+8h] [rbp-78h]
  char v13[96]; // [rsp+20h] [rbp-60h] BYREF
  Quaternion result; // 0:xmm0_8.8,8:xmm1_8.8

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = operator*;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->w);
  }
  w = lhs->w;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->w);
  }
  *(float *)&v6 = rhs->w * w;
  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)lhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) )
  {
    v6 = __asan_report_load4(lhs);
  }
  x = lhs->x;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
  {
    v6 = __asan_report_load4(rhs);
  }
  *(float *)&v6 = *(float *)&v6 - (float)(rhs->x * x);
  if ( *(_BYTE *)(((unsigned __int64)&lhs->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->y >> 3) + 0x7FFF8000) )
  {
    v6 = __asan_report_load4(&lhs->y);
  }
  y = lhs->y;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->y >> 3) + 0x7FFF8000) )
  {
    v6 = __asan_report_load4(&rhs->y);
  }
  *(float *)&v6 = *(float *)&v6 - (float)(rhs->y * y);
  if ( *(_BYTE *)(((unsigned __int64)&lhs->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->z >> 3) + 0x7FFF8000) )
  {
    v6 = __asan_report_load4(&lhs->z);
  }
  z = lhs->z;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->z >> 3) + 0x7FFF8000) )
  {
    v6 = __asan_report_load4(&rhs->z);
  }
  Quaternion::Quaternion(
    (Quaternion *const)(v2 + 32),
    (float)((float)(rhs->z * lhs->y) + (float)((float)(lhs->w * rhs->x) + (float)(rhs->w * lhs->x)))
  - (float)(rhs->y * lhs->z),
    (float)((float)(rhs->x * lhs->z) + (float)((float)(lhs->w * rhs->y) + (float)(rhs->w * lhs->y)))
  - (float)(rhs->z * lhs->x),
    (float)((float)(rhs->y * lhs->x) + (float)((float)(lhs->w * rhs->z) + (float)(rhs->w * lhs->z)))
  - (float)(rhs->x * lhs->y),
    *(float *)&v6 - (float)(rhs->z * z));
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v2 + 32);
  v10 = *(_QWORD *)(v2 + 32);
  v12 = *(_QWORD *)(v2 + 40);
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v11 = v12;
  result.z = *(float *)&v11;
  result.w = *((float *)&v11 + 1);
  result.x = *(float *)&v10;
  result.y = *((float *)&v10 + 1);
  return result;
};

// Line 1133: range 000000000CD00A82-000000000CD00CC0
Quaternion __cdecl Quaternion::createQuaternionFromAxisQuaternions(
        const Quaternion *q1,
        const Quaternion *q2,
        const Quaternion *q3,
        Quaternion *result)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  __int64 v7; // xmm0_8
  __int64 v8; // xmm1_8
  __int64 v9; // [rsp+8h] [rbp-88h]
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF
  Quaternion v13; // 0:xmm0_8.8,8:xmm1_8.8

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v4 + 16) = Quaternion::createQuaternionFromAxisQuaternions;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v4 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(Quaternion *)(v4 + 32) = operator*(q1, q2);
  if ( ((unsigned __int8)result & 7) >= *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&result->w + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)result + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&result->w + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(result, 16LL);
  }
  *result = operator*((const Quaternion *)(v4 + 32), q3);
  *(_WORD *)(((v4 + 32) >> 3) + 0x7FFF8000) = -1800;
  if ( ((unsigned __int8)result & 7) >= *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&result->w + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)result + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&result->w + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(result, 16LL);
  }
  v7 = *(_QWORD *)&result->x;
  v9 = *(_QWORD *)&result->z;
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v8 = v9;
  v13.z = *(float *)&v8;
  v13.w = *((float *)&v8 + 1);
  v13.x = *(float *)&v7;
  v13.y = *((float *)&v7 + 1);
  return v13;
};

// Line 1139: range 000000000CD00CC2-000000000CD00E17
void __cdecl Quaternion::toClient(const Quaternion *const this, proto::MathQuaternion *proto_quaternion)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::MathQuaternion::set_x(proto_quaternion, this->x);
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  proto::MathQuaternion::set_y(proto_quaternion, this->y);
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  proto::MathQuaternion::set_z(proto_quaternion, this->z);
  if ( *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->w);
  }
  proto::MathQuaternion::set_w(proto_quaternion, this->w);
};

// Line 1147: range 000000000CD00E18-000000000CD00F75
std::string *__cdecl Quaternion::toString[abi:cxx11](std::string *retstr, const Quaternion *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 10 euler:1148";
  *(_QWORD *)(v2 + 16) = Quaternion::toString[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  Vector3::Vector3((Vector3 *const)(v2 + 32), 0.0, 0.0, 0.0);
  Quaternion::toEuler(this, (Vector3 *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  Vector3::toString[abi:cxx11](retstr, (const Vector3 *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 1155: range 000000000CD00F76-000000000CD01086
Quaternion __cdecl Quaternion::fromRotation(const Vector3 *rot)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  __int64 v4; // xmm0_8
  __int64 v5; // xmm1_8
  __int64 v6; // [rsp+0h] [rbp-70h]
  const Vector3 *rota; // [rsp+8h] [rbp-68h]
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF
  Quaternion result; // 0:xmm0_8.8,8:xmm1_8.8

  rota = rot;
  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 9 quat:1156";
  *(_QWORD *)(v1 + 16) = Quaternion::fromRotation;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Quaternion::Quaternion((Quaternion *const)(v1 + 32));
  Quaternion::fromEuler((Quaternion *const)(v1 + 32), rota);
  if ( *(_WORD *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v1 + 32);
  v4 = *(_QWORD *)(v1 + 32);
  v6 = *(_QWORD *)(v1 + 40);
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v5 = v6;
  result.z = *(float *)&v5;
  result.w = *((float *)&v5 + 1);
  result.x = *(float *)&v4;
  result.y = *((float *)&v4 + 1);
  return result;
};

// Line 1163: range 000000000CD01088-000000000CD011DE
Quaternion __cdecl Quaternion::fromAxisAngle(const RouteAxisAngle *axis_angle)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  __int64 v4; // xmm0_8
  __int64 v5; // xmm1_8
  __int64 v6; // [rsp+0h] [rbp-70h]
  const RouteAxisAngle *axis_anglea; // [rsp+8h] [rbp-68h]
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF
  Quaternion result; // 0:xmm0_8.8,8:xmm1_8.8

  axis_anglea = axis_angle;
  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 9 quat:1164";
  *(_QWORD *)(v1 + 16) = Quaternion::fromAxisAngle;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Quaternion::Quaternion((Quaternion *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&axis_anglea->angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)axis_anglea + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&axis_anglea->angle >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4(&axis_anglea->angle);
  }
  Quaternion::fromAxisAngle((Quaternion *const)(v1 + 32), &axis_anglea->axis, axis_anglea->angle);
  if ( *(_WORD *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v1 + 32);
  v4 = *(_QWORD *)(v1 + 32);
  v6 = *(_QWORD *)(v1 + 40);
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v5 = v6;
  result.z = *(float *)&v5;
  result.w = *((float *)&v5 + 1);
  result.x = *(float *)&v4;
  result.y = *((float *)&v4 + 1);
  return result;
};

// Line 1171: range 000000000CD011E0-000000000CD0160E
float __cdecl Quaternion::calcDeltaRotation(const Vector3 *rot1, const Vector3 *rot2)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  __m128i v6; // xmm0
  int v7; // edx
  char v8; // al
  float result; // xmm0_4
  char v10[256]; // [rsp+10h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 10 angle:1174 64 12 9 axis:1173 96 16 19 delta_rotation:1172 128 16 9 <unknown> 160 16 9 "
                        "<unknown> 192 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = Quaternion::calcDeltaRotation;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219020288;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -202178560;
  if ( *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(Quaternion *)(v2 + 192) = Quaternion::fromRotation(rot2);
  if ( *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(Quaternion *)(v2 + 128) = Quaternion::fromRotation(rot1);
  if ( *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(Quaternion *)(v2 + 160) = Quaternion::inverseAndMod((const Quaternion *const)(v2 + 128));
  if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(Quaternion *)(v2 + 96) = operator*((const Quaternion *)(v2 + 160), (const Quaternion *)(v2 + 192));
  *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1024;
  Vector3::Vector3((Vector3 *const)(v2 + 64), 0.0, 0.0, 0.0);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v2 + 192);
  *(_DWORD *)(v2 + 48) = 0;
  v5 = (char *)(v2 + 64);
  Quaternion::toAxisAngle((Quaternion *const)(v2 + 96), (Vector3 *)(v2 + 64), (float *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  v6 = _mm_cvtsi32_si128(*(_DWORD *)(v2 + 48));
  *(float *)v6.m128i_i32 = std::fmod(*(float *)v6.m128i_i32, 360.0);
  v7 = _mm_cvtsi128_si32(v6);
  v8 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v5) = v8 != 0;
    __asan_report_store4(v2 + 48, v5);
  }
  *(_DWORD *)(v2 + 48) = v7;
  if ( *(float *)(v2 + 48) > 180.0 )
    *(float *)(v2 + 48) = 360.0 - *(float *)(v2 + 48);
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(float *)(v2 + 48);
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1185: range 000000000CD01610-000000000CD01A19
RouteAxisAngle __cdecl RouteAxisAngle::canonicalize(const RouteAxisAngle *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  __m128i v4; // xmm0
  __int64 v5; // xmm0_8
  __int64 v6; // xmm1_8
  __int64 v7; // [rsp+8h] [rbp-C8h]
  float angle; // [rsp+3Ch] [rbp-94h]
  char v9[128]; // [rsp+50h] [rbp-80h] BYREF
  RouteAxisAngle result; // 0:xmm0_8.8,8:xmm1_8.8

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 12 9 axis:1186 64 16 9 <unknown>";
  *(_QWORD *)(v1 + 16) = RouteAxisAngle::canonicalize;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219020288;
  v3[536862722] = -202178560;
  if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v1 + 43) >> 3) + 0x7FFF8000) != 0
    && (char)((v1 + 43) & 7) >= *(_BYTE *)(((v1 + 43) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v1 + 32, 12LL);
  }
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->axis.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->axis.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(this, 12LL);
  }
  *(_QWORD *)(v1 + 32) = *(_QWORD *)&this->axis.x;
  *(float *)(v1 + 40) = this->axis.z;
  if ( *(_BYTE *)(((unsigned __int64)&this->angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->angle);
  }
  v4 = _mm_cvtsi32_si128(LODWORD(this->angle));
  *(float *)v4.m128i_i32 = std::fmod(*(float *)v4.m128i_i32, 360.0);
  angle = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  if ( angle < 0.0 )
  {
    if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 43) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 43) & 7) >= *(_BYTE *)(((v1 + 43) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 32, 12LL);
    }
    *(Vector3 *)(v1 + 32) = Vector3::operator-((const Vector3 *const)(v1 + 32));
    angle = -angle;
  }
  if ( angle > 180.0 )
  {
    angle = 360.0 - angle;
    if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 43) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 43) & 7) >= *(_BYTE *)(((v1 + 43) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 32, 12LL);
    }
    *(Vector3 *)(v1 + 32) = Vector3::operator-((const Vector3 *const)(v1 + 32));
  }
  RouteAxisAngle::RouteAxisAngle((RouteAxisAngle *const)(v1 + 64), (const Vector3 *)(v1 + 32), angle);
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v1 + 64);
  v5 = *(_QWORD *)(v1 + 64);
  v7 = *(_QWORD *)(v1 + 72);
  if ( v9 == (char *)v1 )
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
  v6 = v7;
  *(_QWORD *)&result.axis.z = v6;
  *(_QWORD *)&result.axis.x = v5;
  return result;
};

// Line 1203: range 000000000CD01A1A-000000000CD023A9
std::shared_ptr<BaseDFNode> __cdecl BaseDFNode::createNodeFromStr(const std::string *str)
{
  const std::string *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned int (__fastcall **vptr_BaseDFNode)(std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // rdx
  common::milog::MiLogStream *v7; // rdx
  std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned int (__fastcall **v9)(std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // rdx
  common::milog::MiLogStream *v10; // rdx
  std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned int (__fastcall **v12)(std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // rdx
  common::milog::MiLogStream *v13; // rdx
  std::shared_ptr<BaseDFNode> result; // rax
  char v15[400]; // [rsp+10h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 16 13 node_ptr:1205 64 16 9 <unknown> 96 16 9 <unknown> 128 16 9 <unknown> 160 32 9 <unknow"
                        "n> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BaseDFNode::createNodeFromStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  if ( !(_BYTE)`guard variable for'BaseDFNode::createNodeFromStr(std::string const&)::dyn_reg
    && __cxa_guard_acquire(&`guard variable for'BaseDFNode::createNodeFromStr(std::string const&)::dyn_reg) )
  {
    std::basic_regex<char,std::regex_traits<char>>::basic_regex(
      &BaseDFNode::createNodeFromStr(std::string const&)::dyn_reg,
      "^%",
      (std::basic_regex<char,std::regex_traits<char> >::flag_type)16);
    __cxa_guard_release(&`guard variable for'BaseDFNode::createNodeFromStr(std::string const&)::dyn_reg);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::basic_regex<char,std::regex_traits<char>>::~basic_regex,
      &BaseDFNode::createNodeFromStr(std::string const&)::dyn_reg,
      &_dso_handle);
  }
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(v2 + 40) = 0LL;
  if ( std::string::find_first_of(v1, "+-*/") != -1 )
  {
    if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    common::tools::perf::make_shared<BinOpDFNode>();
    std::shared_ptr<BaseDFNode>::operator=<BinOpDFNode>(
      (std::shared_ptr<BaseDFNode> *const)(v2 + 32),
      (std::shared_ptr<BinOpDFNode> *)(v2 + 64));
    std::shared_ptr<BinOpDFNode>::~shared_ptr((std::shared_ptr<BinOpDFNode> *const)(v2 + 64));
    *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -1800;
    v5 = std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5);
    vptr_BaseDFNode = (unsigned int (__fastcall **)(std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v5->_vptr_BaseDFNode;
    if ( *(_BYTE *)(((unsigned __int64)v5->_vptr_BaseDFNode >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5->_vptr_BaseDFNode);
    if ( (*vptr_BaseDFNode)(v5) )
    {
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/math_def.cpp",
        "createNodeFromStr",
        1211);
      v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[33])"parse bin op dfnode failed, str:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, v1);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<BaseDFNode>::shared_ptr((std::shared_ptr<BaseDFNode> *const)str, 0LL);
      goto LABEL_44;
    }
LABEL_43:
    std::shared_ptr<BaseDFNode>::shared_ptr(
      (std::shared_ptr<BaseDFNode> *const)str,
      (std::shared_ptr<BaseDFNode> *)(v2 + 32));
    goto LABEL_44;
  }
  if ( std::regex_search<std::char_traits<char>,std::allocator<char>,char,std::regex_traits<char>>(
         v1,
         &BaseDFNode::createNodeFromStr(std::string const&)::dyn_reg,
         (std::regex_constants::match_flag_type)0) )
  {
    if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    common::tools::perf::make_shared<DynamicDFNode>();
    std::shared_ptr<BaseDFNode>::operator=<DynamicDFNode>(
      (std::shared_ptr<BaseDFNode> *const)(v2 + 32),
      (std::shared_ptr<DynamicDFNode> *)(v2 + 96));
    std::shared_ptr<DynamicDFNode>::~shared_ptr((std::shared_ptr<DynamicDFNode> *const)(v2 + 96));
    *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -1800;
    v8 = std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v8);
    v9 = (unsigned int (__fastcall **)(std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v8->_vptr_BaseDFNode;
    if ( *(_BYTE *)(((unsigned __int64)v8->_vptr_BaseDFNode >> 3) + 0x7FFF8000) )
      __asan_report_load8(v8->_vptr_BaseDFNode);
    if ( !(*v9)(v8) )
      goto LABEL_43;
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/math_def.cpp",
      "createNodeFromStr",
      1221);
    v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            (common::milog::MiLogStream *const)(v2 + 224),
            (const char (*)[34])"parse dynamic dfnode failed, str:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, v1);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<BaseDFNode>::shared_ptr((std::shared_ptr<BaseDFNode> *const)str, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    common::tools::perf::make_shared<FixedDFNode>();
    std::shared_ptr<BaseDFNode>::operator=<FixedDFNode>(
      (std::shared_ptr<BaseDFNode> *const)(v2 + 32),
      (std::shared_ptr<FixedDFNode> *)(v2 + 128));
    std::shared_ptr<FixedDFNode>::~shared_ptr((std::shared_ptr<FixedDFNode> *const)(v2 + 128));
    *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -1800;
    v11 = std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v11);
    v12 = (unsigned int (__fastcall **)(std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v11->_vptr_BaseDFNode;
    if ( *(_BYTE *)(((unsigned __int64)v11->_vptr_BaseDFNode >> 3) + 0x7FFF8000) )
      __asan_report_load8(v11->_vptr_BaseDFNode);
    if ( !(*v12)(v11) )
      goto LABEL_43;
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 288, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/math_def.cpp",
      "createNodeFromStr",
      1229);
    v13 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            (common::milog::MiLogStream *const)(v2 + 288),
            (const char (*)[32])"parse fixed dfnode failed, str:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, v1);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<BaseDFNode>::shared_ptr((std::shared_ptr<BaseDFNode> *const)str, 0LL);
  }
LABEL_44:
  std::shared_ptr<BaseDFNode>::~shared_ptr((std::shared_ptr<BaseDFNode> *const)(v2 + 32));
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<BaseDFNode,(__gnu_cxx::_Lock_policy)2>::element_type *)str;
  return result;
};

// Line 1236: range 000000000CD023AA-000000000CD023D7
int32_t __cdecl FixedDFNode::fromStr(FixedDFNode *const this, const std::string *str)
{
  return common::tools::StringUtils::strToNum<float>(str, &this->value, 1);
};

// Line 1241: range 000000000CD023D8-000000000CD0249D
std::string *__cdecl FixedDFNode::toStr[abi:cxx11](std::string *retstr, FixedDFNode *const this)
{
  int value_low; // esi

  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->value);
  }
  value_low = LODWORD(this->value);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    value_low = 32;
    __asan_report_store_n(retstr, 32LL);
  }
  std::to_string(retstr, *(float *)&value_low);
  return retstr;
};

// Line 1246: range 000000000CD0249E-000000000CD02606
int32_t __cdecl FixedDFNode::getHashValue(const FixedDFNode *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t result; // eax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 hash_value:1247";
  *(_QWORD *)(v2 + 16) = FixedDFNode::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->value);
  }
  common::tools::HashUtils::appendHash(this->value, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1253: range 000000000CD02608-000000000CD0278B
int32_t __cdecl DynamicDFNode::fromStr(DynamicDFNode *const this, const std::string *str)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DynamicDFNode::fromStr;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 32, 32LL);
  }
  std::string::substr(v2 + 32, str, 1LL, -1LL);
  std::string::operator=(&this->key, v2 + 32);
  std::string::~string((void *)(v2 + 32));
  result = 0;
  if ( v6 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 1259: range 000000000CD0278C-000000000CD02825
std::string *__cdecl DynamicDFNode::toStr[abi:cxx11](std::string *retstr, DynamicDFNode *const this)
{
  std::string *p_key; // rsi

  p_key = &this->key;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    p_key = (std::string *)32;
    __asan_report_store_n(retstr, 32LL);
  }
  std::operator+<char>(retstr, "%", p_key);
  return retstr;
};

// Line 1264: range 000000000CD02826-000000000CD0295B
int32_t __cdecl DynamicDFNode::getHashValue(const DynamicDFNode *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t result; // eax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 hash_value:1265";
  *(_QWORD *)(v2 + 16) = DynamicDFNode::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  common::tools::HashUtils::appendHash(&this->key, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1271: range 000000000CD0295C-000000000CD03675
int32_t __cdecl BinOpDFNode::fromStr(BinOpDFNode *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  _BYTE *v7; // rdx
  char v8; // cl
  _BOOL4 v9; // ecx
  char v10; // al
  char *v11; // rdi
  common::milog::MiLogStream *v13; // rdx
  int32_t result; // eax
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  _BYTE *v17; // rdx
  char v18; // cl
  __int64 v19; // rsi
  char *v20; // rdi
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rdx
  __int64 first_add_sub_idx; // [rsp+10h] [rbp-290h]
  __int64 first_mul_div_idx; // [rsp+18h] [rbp-288h]
  char v28[640]; // [rsp+20h] [rbp-280h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 16 9 <unknown> 64 16 9 <unknown> 96 16 9 <unknown> 128 16 9 <unknown> 160 32 9 <unknown> 2"
                        "24 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 54"
                        "4 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BinOpDFNode::fromStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -202116109;
  first_add_sub_idx = std::string::find_first_of(str, "+-");
  if ( first_add_sub_idx == -1 )
  {
    first_mul_div_idx = std::string::find_first_of(str, "*/");
    if ( first_mul_div_idx == -1 )
    {
      if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 544, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 544),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/math_def.cpp",
        "fromStr",
        1298);
      v23 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              (common::milog::MiLogStream *const)(v2 + 544),
              (const char (*)[21])"no +-*/ in str, str:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
      result = -1;
    }
    else
    {
      v15 = first_mul_div_idx;
      v16 = std::string::operator[](str, first_mul_div_idx);
      v17 = (_BYTE *)v16;
      v18 = *(_BYTE *)((v16 >> 3) + 0x7FFF8000);
      if ( v18 != 0 && (char)(v16 & 7) >= v18 )
      {
        LOBYTE(v15) = v18 != 0;
        __asan_report_load1(v16, v15, v16);
      }
      if ( *v17 == 42 )
        v19 = 11LL;
      else
        v19 = 12LL;
      if ( *(_BYTE *)(((unsigned __int64)&this->op_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->op_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->op_type, v19);
      }
      this->op_type = v19;
      if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 352, 32LL);
      }
      std::string::substr(v2 + 352, str, 0LL, first_mul_div_idx);
      if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      BaseDFNode::createNodeFromStr((const std::string *)(v2 + 96));
      std::shared_ptr<BaseDFNode>::operator=(&this->left_ptr, (std::shared_ptr<BaseDFNode> *)(v2 + 96));
      std::shared_ptr<BaseDFNode>::~shared_ptr((std::shared_ptr<BaseDFNode> *const)(v2 + 96));
      *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -1800;
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      v20 = (char *)(first_mul_div_idx + 1);
      if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
      {
        v20 = (char *)(v2 + 416);
        __asan_report_store_n(v2 + 416, 32LL);
      }
      std::string::substr(v2 + 416, str, v20, -1LL);
      if ( *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      BaseDFNode::createNodeFromStr((const std::string *)(v2 + 128));
      std::shared_ptr<BaseDFNode>::operator=(&this->right_ptr, (std::shared_ptr<BaseDFNode> *)(v2 + 128));
      std::shared_ptr<BaseDFNode>::~shared_ptr((std::shared_ptr<BaseDFNode> *const)(v2 + 128));
      *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -1800;
      std::string::~string((void *)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      if ( std::operator==<BaseDFNode>(&this->left_ptr, 0LL) || std::operator==<BaseDFNode>(&this->right_ptr, 0LL) )
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/math_def.cpp",
          "fromStr",
          1293);
        v22 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                (common::milog::MiLogStream *const)(v2 + 480),
                (const char (*)[31])"parse BinOpDFNode failed, str:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, str);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        result = -1;
      }
      else
      {
        result = 0;
      }
    }
  }
  else
  {
    v5 = first_add_sub_idx;
    v6 = std::string::operator[](str, first_add_sub_idx);
    v7 = (_BYTE *)v6;
    v8 = *(_BYTE *)((v6 >> 3) + 0x7FFF8000);
    if ( v8 != 0 && (char)(v6 & 7) >= v8 )
    {
      LOBYTE(v5) = v8 != 0;
      __asan_report_load1(v6, v5, v6);
    }
    v9 = *v7 != 43;
    v10 = *(_BYTE *)(((unsigned __int64)&this->op_type >> 3) + 0x7FFF8000);
    if ( v10 != 0 && v10 <= 3 )
    {
      LOBYTE(v5) = v10 != 0;
      __asan_report_store4(&this->op_type, v5);
    }
    this->op_type = v9;
    if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 160, 32LL);
    }
    std::string::substr(v2 + 160, str, 0LL, first_add_sub_idx);
    if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    BaseDFNode::createNodeFromStr((const std::string *)(v2 + 32));
    std::shared_ptr<BaseDFNode>::operator=(&this->left_ptr, (std::shared_ptr<BaseDFNode> *)(v2 + 32));
    std::shared_ptr<BaseDFNode>::~shared_ptr((std::shared_ptr<BaseDFNode> *const)(v2 + 32));
    *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -1800;
    std::string::~string((void *)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    v11 = (char *)(first_add_sub_idx + 1);
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      v11 = (char *)(v2 + 224);
      __asan_report_store_n(v2 + 224, 32LL);
    }
    std::string::substr(v2 + 224, str, v11, -1LL);
    if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    BaseDFNode::createNodeFromStr((const std::string *)(v2 + 64));
    std::shared_ptr<BaseDFNode>::operator=(&this->right_ptr, (std::shared_ptr<BaseDFNode> *)(v2 + 64));
    std::shared_ptr<BaseDFNode>::~shared_ptr((std::shared_ptr<BaseDFNode> *const)(v2 + 64));
    *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -1800;
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    if ( std::operator==<BaseDFNode>(&this->left_ptr, 0LL) || std::operator==<BaseDFNode>(&this->right_ptr, 0LL) )
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/math_def.cpp",
        "fromStr",
        1280);
      v13 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              (common::milog::MiLogStream *const)(v2 + 288),
              (const char (*)[31])"parse BinOpDFNode failed, str:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 1303: range 000000000CD03676-000000000CD038F2
int32_t __cdecl BinOpDFNode::getHashValue(const BinOpDFNode *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  int32_t v7; // eax
  std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned __int64 v9; // rdx
  int32_t v10; // eax
  int32_t result; // eax
  char v12[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 hash_value:1304";
  *(_QWORD *)(v2 + 16) = BinOpDFNode::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->op_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->op_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->op_type);
  }
  common::tools::HashUtils::appendHash(this->op_type, (int32_t *)(v2 + 32));
  if ( std::operator!=<BaseDFNode>(&this->left_ptr, 0LL) )
  {
    v5 = std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->left_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5);
    v6 = (unsigned __int64)(v5->_vptr_BaseDFNode + 4);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5->_vptr_BaseDFNode + 4);
    v7 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v6)(v5);
    common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  }
  if ( std::operator!=<BaseDFNode>(&this->right_ptr, 0LL) )
  {
    v8 = std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->right_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v8);
    v9 = (unsigned __int64)(v8->_vptr_BaseDFNode + 4);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v8->_vptr_BaseDFNode + 4);
    v10 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v9)(v8);
    common::tools::HashUtils::appendHash(v10, (int32_t *)(v2 + 32));
  }
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1318: range 000000000CD038F4-000000000CD04153
std::string *__cdecl BinOpDFNode::toStr[abi:cxx11](std::string *retstr, BinOpDFNode *const this)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  BinOpDFNode::OpType op_type; // eax
  char v6; // r14
  char v7; // r15
  std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned __int64 v9; // rdx
  void (__fastcall *v10)(unsigned __int64, std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // r8
  char v11; // r14
  char v12; // r15
  std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  unsigned __int64 v14; // rdx
  void (__fastcall *v15)(unsigned __int64, std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // r8
  char v17[400]; // [rsp+20h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 7 op:1319 160 32 11 left_s:1336 224 3"
                        "2 12 right_s:1337 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BinOpDFNode::toStr[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "?",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->op_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->op_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->op_type);
  }
  op_type = this->op_type;
  if ( op_type == DIV )
  {
    std::string::operator=(v2 + 96, "/");
  }
  else if ( op_type <= DIV )
  {
    if ( op_type == MUL )
    {
      std::string::operator=(v2 + 96, "*");
    }
    else if ( op_type )
    {
      if ( op_type == SUB )
        std::string::operator=(v2 + 96, "-");
    }
    else
    {
      std::string::operator=(v2 + 96, "+");
    }
  }
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  v6 = 0;
  v7 = 0;
  if ( std::operator==<BaseDFNode>(&this->left_ptr, 0LL) )
  {
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    v6 = 1;
    v7 = 1;
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 160),
      byte_1A0D8BA0,
      (const std::allocator<char> *)(v2 + 64));
  }
  else
  {
    v8 = std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->left_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v8);
    v9 = (unsigned __int64)(v8->_vptr_BaseDFNode + 1);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v8->_vptr_BaseDFNode + 1);
    v10 = *(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v9;
    if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 160, 32LL);
    }
    v10(v2 + 160, v8);
  }
  if ( v7 )
    std::allocator<char>::~allocator(v2 + 64);
  if ( v6 )
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  v11 = 0;
  v12 = 0;
  if ( std::operator==<BaseDFNode>(&this->right_ptr, 0LL) )
  {
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 80);
    v11 = 1;
    v12 = 1;
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      byte_1A0D8BA0,
      (const std::allocator<char> *)(v2 + 80));
  }
  else
  {
    v13 = std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->right_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13);
    v14 = (unsigned __int64)(v13->_vptr_BaseDFNode + 1);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13->_vptr_BaseDFNode + 1);
    v15 = *(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v14;
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    v15(v2 + 224, v13);
  }
  if ( v12 )
    std::allocator<char>::~allocator(v2 + 80);
  if ( v11 )
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 288, 32LL);
  }
  std::operator+<char>((std::string *)(v2 + 288), (const std::string *)(v2 + 160), (const std::string *)(v2 + 96));
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::operator+<char>(retstr, (std::string *)(v2 + 288), (const std::string *)(v2 + 224));
  std::string::~string((void *)(v2 + 288));
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 224));
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 96));
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return retstr;
};

// Line 1343: range 000000000CD04154-000000000CD050DA
// local variable allocation has failed, the output may be wrong!
bool __cdecl CommonMiscs::evaluateLogicComb(data::LogicType comb, const std::vector<bool> *bool_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::__iterator_traits<std::_Bit_const_iterator,void>::difference_type v6; // rbx
  std::vector<bool>::const_iterator v7; // rdi
  std::__iterator_traits<std::_Bit_const_iterator,void>::difference_type v8; // rbx
  std::vector<bool>::const_iterator v9; // rdi
  std::__iterator_traits<std::_Bit_const_iterator,void>::difference_type v10; // rbx
  std::__iterator_traits<std::_Bit_const_iterator,void>::difference_type v11; // rbx
  std::vector<bool>::const_iterator v12; // rdi
  std::__iterator_traits<std::_Bit_const_iterator,void>::difference_type v13; // rbx
  std::__iterator_traits<std::_Bit_const_iterator,void>::difference_type v14; // rbx
  std::vector<bool>::const_iterator __last; // [rsp+10h] [rbp-3D0h]
  std::vector<bool>::const_iterator v17; // [rsp+30h] [rbp-3B0h]
  std::vector<bool>::const_iterator v18; // [rsp+50h] [rbp-390h]
  std::_Bit_const_iterator::const_iterator v19; // [rsp+70h] [rbp-370h]
  std::vector<bool>::const_iterator v20; // [rsp+90h] [rbp-350h]
  std::vector<bool>::const_iterator v21; // [rsp+B0h] [rbp-330h]
  std::vector<bool>::const_iterator v22; // [rsp+D0h] [rbp-310h]
  std::_Bit_const_iterator::const_iterator v23; // [rsp+F0h] [rbp-2F0h]
  std::vector<bool>::const_iterator v24; // [rsp+110h] [rbp-2D0h]
  std::vector<bool>::const_iterator v25; // [rsp+130h] [rbp-2B0h]
  std::_Bit_const_iterator::const_iterator v26; // [rsp+150h] [rbp-290h]
  std::vector<bool>::const_iterator v27; // [rsp+170h] [rbp-270h]
  std::vector<bool>::const_iterator v28; // [rsp+190h] [rbp-250h]
  char v29[560]; // [rsp+1B0h] [rbp-230h] BYREF
  std::_Bit_const_iterator v30; // 0:rdi.12
  std::_Bit_const_iterator v31; // 0:rdi.12
  std::_Bit_const_iterator v32; // 0:rdi.12
  std::_Bit_const_iterator v33; // 0:rdi.12
  std::_Bit_const_iterator v34; // 0:rdi.12
  std::_Bit_const_iterator v35; // 0:rdi.12
  std::_Bit_const_iterator v36; // 0:rdi.12
  std::_Bit_const_iterator v37; // 0:rdi.12
  std::_Bit_const_iterator v38; // 0:rdi.12
  std::_Bit_const_iterator v39; // 0:rdi.12

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "21 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 16 9 <unknown> 288 16 9 <unknown> 320 16 9 <unknown"
                        "> 352 16 9 <unknown> 384 16 9 <unknown> 416 16 9 <unknown> 448 16 9 <unknown> 480 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CommonMiscs::evaluateLogicComb;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234753535;
  v4[536862727] = -234753535;
  v4[536862728] = -219021312;
  v4[536862729] = -219021312;
  v4[536862730] = -219021312;
  v4[536862731] = -219021312;
  v4[536862732] = -219021312;
  v4[536862733] = -219021312;
  v4[536862734] = -219021312;
  v4[536862735] = -202178560;
  if ( std::vector<bool>::empty(bool_vec) )
  {
    result = 1;
  }
  else
  {
    switch ( comb )
    {
      case LOGIC_OR:
        if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 48, bool_vec, v2 + 48);
        *(_BYTE *)(v2 + 48) = 1;
        __last = std::vector<bool>::end(bool_vec);
        v30 = std::vector<bool>::begin(bool_vec);
        result = std::count<std::_Bit_const_iterator,bool>(v30, __last, (const bool *)(v2 + 48)) > 0;
        break;
      case LOGIC_A_AND_ETCOR:
        if ( std::vector<bool>::size(bool_vec) == 1 )
          goto LABEL_11;
        if ( !std::vector<bool>::operator[](bool_vec, 0LL) )
          goto LABEL_19;
        if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 64, 0LL, v2 + 64);
        *(_BYTE *)(v2 + 64) = 1;
        v17 = std::vector<bool>::end(bool_vec);
        if ( *(_WORD *)(((v2 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        *(std::vector<bool>::const_iterator *)(v2 + 256) = std::vector<bool>::begin(bool_vec);
        v31 = std::_Bit_const_iterator::operator+((const std::_Bit_const_iterator *const)(v2 + 256), 1LL);
        if ( std::count<std::_Bit_const_iterator,bool>(v31, v17, (const bool *)(v2 + 64)) > 0 )
          result = 1;
        else
LABEL_19:
          result = 0;
        break;
      case LOGIC_A_AND_B_AND_ETCOR:
        if ( std::vector<bool>::size(bool_vec) > 2 )
        {
          if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(v2 + 96, bool_vec, v2 + 96);
          *(_BYTE *)(v2 + 96) = 1;
          if ( *(_WORD *)(((v2 + 288) >> 3) + 0x7FFF8000) )
            __asan_report_store16();
          *(std::vector<bool>::const_iterator *)(v2 + 288) = std::vector<bool>::begin(bool_vec);
          v19 = std::_Bit_const_iterator::operator+((const std::_Bit_const_iterator *const)(v2 + 288), 2LL);
          v7 = std::vector<bool>::begin(bool_vec);
          if ( std::count<std::_Bit_const_iterator,bool>(v7, v19, (const bool *)(v2 + 96)) != 2 )
            goto LABEL_35;
          if ( *(char *)(((v2 + 112) >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(v2 + 112, *(_QWORD *)&v7._M_offset, v2 + 112);
          *(_BYTE *)(v2 + 112) = 1;
          v20 = std::vector<bool>::end(bool_vec);
          if ( *(_WORD *)(((v2 + 320) >> 3) + 0x7FFF8000) )
            __asan_report_store16();
          *(std::vector<bool>::const_iterator *)(v2 + 320) = std::vector<bool>::begin(bool_vec);
          v33 = std::_Bit_const_iterator::operator+((const std::_Bit_const_iterator *const)(v2 + 320), 2LL);
          if ( std::count<std::_Bit_const_iterator,bool>(v33, v20, (const bool *)(v2 + 112)) > 0 )
            result = 1;
          else
LABEL_35:
            result = 0;
        }
        else
        {
          if ( *(char *)(((v2 + 80) >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(v2 + 80, bool_vec, v2 + 80);
          *(_BYTE *)(v2 + 80) = 1;
          v18 = std::vector<bool>::end(bool_vec);
          v32 = std::vector<bool>::begin(bool_vec);
          v6 = std::count<std::_Bit_const_iterator,bool>(v32, v18, (const bool *)(v2 + 80));
          result = v6 == std::vector<bool>::size(bool_vec);
        }
        break;
      case LOGIC_A_OR_ETCAND:
        if ( std::vector<bool>::size(bool_vec) == 1 )
        {
LABEL_11:
          result = std::vector<bool>::operator[](bool_vec, 0LL);
        }
        else
        {
          if ( std::vector<bool>::operator[](bool_vec, 0LL) )
            goto LABEL_43;
          if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(v2 + 128, 0LL, v2 + 128);
          *(_BYTE *)(v2 + 128) = 1;
          v21 = std::vector<bool>::end(bool_vec);
          if ( *(_WORD *)(((v2 + 352) >> 3) + 0x7FFF8000) )
            __asan_report_store16();
          *(std::vector<bool>::const_iterator *)(v2 + 352) = std::vector<bool>::begin(bool_vec);
          v34 = std::_Bit_const_iterator::operator+((const std::_Bit_const_iterator *const)(v2 + 352), 1LL);
          v8 = std::count<std::_Bit_const_iterator,bool>(v34, v21, (const bool *)(v2 + 128));
          if ( v8 == std::vector<bool>::size(bool_vec) - 1 )
LABEL_43:
            result = 1;
          else
            result = 0;
        }
        break;
      case LOGIC_A_OR_B_OR_ETCAND:
        if ( std::vector<bool>::size(bool_vec) > 2 )
        {
          if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(v2 + 160, bool_vec, v2 + 160);
          *(_BYTE *)(v2 + 160) = 1;
          if ( *(_WORD *)(((v2 + 384) >> 3) + 0x7FFF8000) )
            __asan_report_store16();
          *(std::vector<bool>::const_iterator *)(v2 + 384) = std::vector<bool>::begin(bool_vec);
          v23 = std::_Bit_const_iterator::operator+((const std::_Bit_const_iterator *const)(v2 + 384), 2LL);
          v9 = std::vector<bool>::begin(bool_vec);
          if ( std::count<std::_Bit_const_iterator,bool>(v9, v23, (const bool *)(v2 + 160)) > 0 )
            goto LABEL_59;
          if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(v2 + 176, *(_QWORD *)&v9._M_offset, v2 + 176);
          *(_BYTE *)(v2 + 176) = 1;
          v24 = std::vector<bool>::end(bool_vec);
          if ( *(_WORD *)(((v2 + 416) >> 3) + 0x7FFF8000) )
            __asan_report_store16();
          *(std::vector<bool>::const_iterator *)(v2 + 416) = std::vector<bool>::begin(bool_vec);
          v36 = std::_Bit_const_iterator::operator+((const std::_Bit_const_iterator *const)(v2 + 416), 2LL);
          v10 = std::count<std::_Bit_const_iterator,bool>(v36, v24, (const bool *)(v2 + 176));
          if ( v10 == std::vector<bool>::size(bool_vec) - 2 )
LABEL_59:
            result = 1;
          else
            result = 0;
        }
        else
        {
          if ( *(char *)(((v2 + 144) >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(v2 + 144, bool_vec, v2 + 144);
          *(_BYTE *)(v2 + 144) = 1;
          v22 = std::vector<bool>::end(bool_vec);
          v35 = std::vector<bool>::begin(bool_vec);
          result = std::count<std::_Bit_const_iterator,bool>(v35, v22, (const bool *)(v2 + 144)) > 0;
        }
        break;
      case LOGIC_A_AND_B_OR_ETCAND:
        if ( std::vector<bool>::size(bool_vec) > 2 )
        {
          if ( *(char *)(((v2 + 208) >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(v2 + 208, bool_vec, v2 + 208);
          *(_BYTE *)(v2 + 208) = 1;
          if ( *(_WORD *)(((v2 + 448) >> 3) + 0x7FFF8000) )
            __asan_report_store16();
          *(std::vector<bool>::const_iterator *)(v2 + 448) = std::vector<bool>::begin(bool_vec);
          v26 = std::_Bit_const_iterator::operator+((const std::_Bit_const_iterator *const)(v2 + 448), 2LL);
          v12 = std::vector<bool>::begin(bool_vec);
          if ( std::count<std::_Bit_const_iterator,bool>(v12, v26, (const bool *)(v2 + 208)) == 2 )
            goto LABEL_75;
          if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(v2 + 224, *(_QWORD *)&v12._M_offset, v2 + 224);
          *(_BYTE *)(v2 + 224) = 1;
          v27 = std::vector<bool>::end(bool_vec);
          if ( *(_WORD *)(((v2 + 480) >> 3) + 0x7FFF8000) )
            __asan_report_store16();
          *(std::vector<bool>::const_iterator *)(v2 + 480) = std::vector<bool>::begin(bool_vec);
          v38 = std::_Bit_const_iterator::operator+((const std::_Bit_const_iterator *const)(v2 + 480), 2LL);
          v13 = std::count<std::_Bit_const_iterator,bool>(v38, v27, (const bool *)(v2 + 224));
          if ( v13 == std::vector<bool>::size(bool_vec) - 2 )
LABEL_75:
            result = 1;
          else
            result = 0;
        }
        else
        {
          if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(v2 + 192, bool_vec, v2 + 192);
          *(_BYTE *)(v2 + 192) = 1;
          v25 = std::vector<bool>::end(bool_vec);
          v37 = std::vector<bool>::begin(bool_vec);
          v11 = std::count<std::_Bit_const_iterator,bool>(v37, v25, (const bool *)(v2 + 192));
          result = v11 == std::vector<bool>::size(bool_vec);
        }
        break;
      default:
        if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 240, bool_vec, v2 + 240);
        *(_BYTE *)(v2 + 240) = 1;
        v28 = std::vector<bool>::end(bool_vec);
        v39 = std::vector<bool>::begin(bool_vec);
        v14 = std::count<std::_Bit_const_iterator,bool>(v39, v28, (const bool *)(v2 + 240));
        result = v14 == std::vector<bool>::size(bool_vec);
        break;
    }
  }
  if ( v29 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1414: range 000000000CD050DC-000000000CD05457
__int64 __fastcall CommonMiscs::multiplyFloatToUInt(data::RoundType round_type, float f, uint32_t num)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  float v12; // xmm0_4
  __int64 v13; // rax
  float v14; // xmm0_4
  int v15; // eax
  unsigned __int64 num_per_thousand; // [rsp+10h] [rbp-D0h]
  double total_num; // [rsp+18h] [rbp-C8h]
  char v18[192]; // [rsp+20h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 15 round_type:1413 64 4 6 f:1413 80 4 8 num:1413 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = CommonMiscs::multiplyFloatToUInt;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = round_type;
  *(float *)(v3 + 64) = f;
  *(_DWORD *)(v3 + 80) = num;
  if ( *(float *)(v3 + 64) >= 0.0 )
  {
    v12 = std::round(1000.0 * *(float *)(v3 + 64));
    if ( v12 >= 9.223372e18 )
      num_per_thousand = (unsigned int)(int)(float)(v12 - 9.223372e18) ^ 0x8000000000000000LL;
    else
      num_per_thousand = (unsigned int)(int)v12;
    v13 = num_per_thousand * *(unsigned int *)(v3 + 80);
    if ( v13 < 0 )
      v14 = (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1))
          + (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1));
    else
      v14 = (float)(int)v13;
    total_num = (float)(v14 / 1000.0);
    v15 = *(_DWORD *)(v3 + 48);
    if ( v15 == 1 )
    {
      result = (unsigned int)(int)round(total_num);
    }
    else if ( v15 == 2 )
    {
      result = (unsigned int)(int)ceil(total_num);
    }
    else
    {
      result = (unsigned int)(int)floor(total_num);
    }
  }
  else
  {
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/math_def.cpp",
      "multiplyFloatToUInt",
      1417);
    v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           (common::milog::MiLogStream *const)(v3 + 96),
           (const char (*)[24])"float is under zero. f:");
    v7 = common::milog::MiLogStream::operator<<<float,(float *)0>(v6, (const float *)(v3 + 64));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" num:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 80));
    v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" roundType:");
    common::milog::MiLogStream::operator<<<data::RoundType,(data::RoundType*)0>(v10, (const data::RoundType *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    result = 0LL;
  }
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
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

// Line 1436: range 000000000CD05458-000000000CD05495
uint32_t __cdecl CommonMiscs::genRandomByXorShiftRNG32(uint32_t seed, uint32_t range)
{
  uint32_t result; // [rsp+14h] [rbp-4h]

  result = (((seed << 13) ^ seed) >> 17) ^ (seed << 13) ^ seed;
  return ((32 * result) ^ result) % range;
};
