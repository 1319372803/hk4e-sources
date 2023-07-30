// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/math_def.h

// Line 38: range 000000000CDFF5E4-000000000CDFF5F7
float __cdecl square(float val)
{
  return val * val;
};

// Line 38: range 000000000CDFF4F0-000000000CDFF5E3
void __cdecl Vector3::Vector3(Vector3 *const this, float x_, float y_, float z_)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->x = x_;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->y = y_;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->z, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->z = z_;
};

// Line 157: range 000000000CDFF69E-000000000CDFF7B6
void __cdecl Vector2::Vector2(Vector2 *const this, const Vector3 *v3)
{
  float x; // xmm0_4
  float z; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v3);
  }
  x = v3->x;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->x = x;
  if ( *(_BYTE *)(((unsigned __int64)&v3->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v3 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v3->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v3->z);
  }
  z = v3->z;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->y = z;
};

// Line 157: range 000000000CDFF5F8-000000000CDFF69D
void __cdecl Vector2::Vector2(Vector2 *const this, float x_, float y_)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->x = x_;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->y = y_;
};

// Line 159: range 000000000CDFF7B8-000000000CDFF8D0
void __cdecl Vector2::Vector2(Vector2 *const this, const data::Point2D *point)
{
  float x; // xmm0_4
  float y; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)point >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)point & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(point);
  }
  x = point->x;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->x = x;
  if ( *(_BYTE *)(((unsigned __int64)&point->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)point + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&point->y);
  }
  y = point->y;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->y = y;
};

// Line 160: range 000000000CDFF8D2-000000000CDFFAD3
Vector2 __cdecl Vector2::operator-(const Vector2 *const this, const Vector2 *other)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  double v5; // xmm0_8
  float v6; // xmm2_4
  double v7; // xmm0_8
  Vector2 v8; // xmm0_8
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = Vector2::operator-;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  *(float *)&v5 = this->y;
  if ( *(_BYTE *)(((unsigned __int64)&other->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->y >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load4(&other->y);
  }
  v6 = *(float *)&v5 - other->y;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  *(float *)&v7 = this->x;
  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)other & 7) + 3) >= *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
    v7 = __asan_report_load4(other);
  }
  Vector2::Vector2((Vector2 *const)(v2 + 32), *(float *)&v7 - other->x, v6);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v2 + 32);
  v8 = *(Vector2 *)(v2 + 32);
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v8;
};

// Line 161: range 000000000CDFFAD4-000000000CDFFBF7
float __cdecl Vector2::cross(const Vector2 *const this, const Vector2 *other)
{
  float x; // xmm1_4
  double v3; // xmm0_8
  float y; // xmm2_4

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
  *(float *)&v3 = other->y * x;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(&this->y);
  }
  y = this->y;
  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)other & 7) + 3) >= *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(other);
  }
  return *(float *)&v3 - (float)(other->x * y);
};

// Line 164: range 000000000CDFFBF8-000000000CE00380
std::string *__cdecl Vector2::toString[abi:cxx11](std::string *retstr, const Vector2 *const this)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int y_low; // esi
  int x_low; // esi
  char v9[480]; // [rsp+10h] [rbp-1E0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 32"
                        "0 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = Vector2::toString[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  y_low = LODWORD(this->y);
  if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
  {
    y_low = 32;
    __asan_report_store_n(v2 + 320, 32LL);
  }
  std::to_string((std::string *)(v2 + 320), *(float *)&y_low);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  x_low = LODWORD(this->x);
  if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
  {
    x_low = 32;
    __asan_report_store_n(v2 + 128, 32LL);
  }
  std::to_string((std::string *)(v2 + 128), *(float *)&x_low);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "(",
    (const std::allocator<char> *)(v2 + 48));
  if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 192, 32LL);
  }
  std::operator+<char>((std::string *)(v2 + 192), (std::string *)(v2 + 64), (std::string *)(v2 + 128));
  if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 256, 32LL);
  }
  std::operator+<char>((std::string *)(v2 + 256), (std::string *)(v2 + 192), ",");
  if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 384, 32LL);
  }
  std::operator+<char>((std::string *)(v2 + 384), (std::string *)(v2 + 256), (std::string *)(v2 + 320));
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::operator+<char>(retstr, (std::string *)(v2 + 384), ")");
  std::string::~string((void *)(v2 + 384));
  *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 256));
  *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 192));
  *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 320));
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
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
  }
  return retstr;
};

// Line 175: range 000000000CE0041C-000000000CE0044D
int32_t __cdecl sign(float val)
{
  if ( val >= -0.00000011920929 )
    return val > 0.00000011920929;
  else
    return -1;
};

// Line 175: range 000000000CE00382-000000000CE0041B
void __cdecl Coordinate::Coordinate(Coordinate *const this, int32_t x_, int32_t y_)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->x = x_;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->y = y_;
};

// Line 232: range 000000000F778186-000000000F7781A0
void __cdecl InteriorCheckablePolygon::InteriorCheckablePolygon(InteriorCheckablePolygon *const this)
{
  std::vector<InteriorCheckablePolygon::Strip>::vector(&this->strip_vec);
};

// Line 232: range 000000000F9ABACC-000000000F9ABAF1
void __cdecl InteriorCheckablePolygon::InteriorCheckablePolygon(
        InteriorCheckablePolygon *const this,
        InteriorCheckablePolygon *a2)
{
  std::vector<InteriorCheckablePolygon::Strip>::vector(&this->strip_vec, &a2->strip_vec);
};

// Line 232: range 000000000F7781A2-000000000F7781BC
void __cdecl InteriorCheckablePolygon::~InteriorCheckablePolygon(InteriorCheckablePolygon *const this)
{
  std::vector<InteriorCheckablePolygon::Strip>::~vector(&this->strip_vec);
};

// Line 245: range 000000000D3287CA-000000000D328863
void __cdecl InteriorCheckablePolygon::Segment::Segment(InteriorCheckablePolygon::Segment *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->low_x = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->high_x >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->high_x >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->high_x, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->high_x = 0.0;
};

// Line 249: range 000000000CE0044E-000000000CE00742
std::string *__cdecl InteriorCheckablePolygon::Segment::toString[abi:cxx11](
        std::string *retstr,
        const InteriorCheckablePolygon::Segment *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  std::_Setprecision v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r14
  std::_Setprecision v9; // eax
  __int64 v10; // rcx
  char v12[560]; // [rsp+10h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 392 6 ss:251";
  *(_QWORD *)(v2 + 16) = InteriorCheckablePolygon::Segment::toString[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
  v4[536862735] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 48);
  v5._M_n = std::setprecision(10)._M_n;
  v6 = std::operator<<<char,std::char_traits<char>>(v2 + 64, (unsigned int)v5._M_n);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  v7 = std::ostream::operator<<(v6, *(double *)_mm_cvtsi32_si128(LODWORD(this->low_x)).m128i_i64);
  v8 = std::operator<<<std::char_traits<char>>(v7, "~");
  v9._M_n = std::setprecision(10)._M_n;
  v10 = std::operator<<<char,std::char_traits<char>>(v8, (unsigned int)v9._M_n);
  if ( *(_BYTE *)(((unsigned __int64)&this->high_x >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->high_x >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->high_x);
  }
  std::ostream::operator<<(v10, *(double *)_mm_cvtsi32_si128(LODWORD(this->high_x)).m128i_i64);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v2 + 48);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 48);
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
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
  return retstr;
};

// Line 258: range 000000000D3285E6-000000000D32863F
void __cdecl InteriorCheckablePolygon::Strip::Strip(InteriorCheckablePolygon::Strip *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->y = 0.0;
  std::vector<InteriorCheckablePolygon::Segment>::vector(&this->segment_vec);
};

// Line 258: range 000000000D430DD0-000000000D430E6B
void __cdecl InteriorCheckablePolygon::Strip::Strip(
        InteriorCheckablePolygon::Strip *const this,
        InteriorCheckablePolygon::Strip *a2)
{
  float y; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  y = a2->y;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->y = y;
  std::vector<InteriorCheckablePolygon::Segment>::vector(&this->segment_vec, &a2->segment_vec);
};

// Line 258: range 000000000D32876E-000000000D32878C
void __cdecl InteriorCheckablePolygon::Strip::~Strip(InteriorCheckablePolygon::Strip *const this)
{
  std::vector<InteriorCheckablePolygon::Segment>::~vector(&this->segment_vec);
};

// Line 262: range 000000000CE00744-000000000CE00BD7
std::string *__cdecl InteriorCheckablePolygon::Strip::toString[abi:cxx11](
        std::string *retstr,
        const InteriorCheckablePolygon::Strip *const this)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // r14
  std::_Setprecision v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  const InteriorCheckablePolygon::Segment *v9; // rsi
  __int64 v10; // r14
  std::vector<InteriorCheckablePolygon::Segment>::size_type v11; // rax
  size_t i; // [rsp+28h] [rbp-278h]
  char v15[624]; // [rsp+30h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 32 9 <unknown> 112 392 6 ss:264";
  *(_QWORD *)(v2 + 16) = InteriorCheckablePolygon::Strip::toString[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862735] = -218103808;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 112);
  v5 = std::operator<<<std::char_traits<char>>(v2 + 128, "{y:");
  v6._M_n = std::setprecision(10)._M_n;
  v7 = std::operator<<<char,std::char_traits<char>>(v5, (unsigned int)v6._M_n);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  v8 = std::ostream::operator<<(v7, *(double *)_mm_cvtsi32_si128(LODWORD(this->y)).m128i_i64);
  std::operator<<<std::char_traits<char>>(v8, " segments:[");
  for ( i = 0LL; i < std::vector<InteriorCheckablePolygon::Segment>::size(&this->segment_vec); ++i )
  {
    *(_DWORD *)(((v2 + 48) >> 3) + 0x7FFF8000) = 0;
    v9 = std::vector<InteriorCheckablePolygon::Segment>::operator[](&this->segment_vec, i);
    if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 79) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 79) >> 3) + 0x7FFF8000) )
    {
      v9 = (const InteriorCheckablePolygon::Segment *)32;
      __asan_report_store_n(v2 + 48, 32LL);
    }
    InteriorCheckablePolygon::Segment::toString[abi:cxx11]((std::string *)(v2 + 48), v9);
    v10 = std::operator<<<char>(v2 + 128, v2 + 48);
    v11 = std::vector<InteriorCheckablePolygon::Segment>::size(&this->segment_vec);
    std::operator<<<std::char_traits<char>>(v10, (unsigned int)asc_1A0DD420[i + 1 == v11]);
    std::string::~string((void *)(v2 + 48));
    *(_DWORD *)(((v2 + 48) >> 3) + 0x7FFF8000) = -117901064;
  }
  std::operator<<<std::char_traits<char>>(v2 + 128, "}");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v2 + 112);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 112);
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
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
  }
  return retstr;
};

// Line 295: range 000000000CE00BD8-000000000CE00D22
void __cdecl RouteAxisAngle::RouteAxisAngle(RouteAxisAngle *const this, const Vector3 *axis, float angle)
{
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->axis.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->axis.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 12LL);
  }
  if ( ((unsigned __int8)axis & 7) >= *(_BYTE *)(((unsigned __int64)axis >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)axis >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&axis->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)axis + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&axis->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(axis, 12LL);
  }
  this->axis = *axis;
  if ( *(_BYTE *)(((unsigned __int64)&this->angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->angle, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->angle = angle;
};

// Line 339: range 000000000CE00D24-000000000CE00E4D
void __cdecl Quaternion::Quaternion(Quaternion *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->x = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->y = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->z, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->z = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->w, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->w = 0.0;
};

// Line 339: range 000000000CE00E4E-000000000CE00F8F
void __cdecl Quaternion::Quaternion(Quaternion *const this, float px, float py, float pz, float pw)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->x = px;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->y = py;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->z, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->z = pz;
  if ( *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->w, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->w = pw;
};

// Line 358: range 000000000CE00F90-000000000CE013B3
Quaternion __cdecl Quaternion::inverseAndMod(const Quaternion *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rax
  float w; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm4_4
  __int64 v10; // xmm0_8
  __int64 v11; // xmm1_8
  float m; // [rsp+1Ch] [rbp-A4h]
  char v13[160]; // [rsp+20h] [rbp-A0h] BYREF
  Quaternion result; // 0:xmm0_8.8,8:xmm1_8.8

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = Quaternion::inverseAndMod;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  *(float *)v1.m128i_i32 = Quaternion::mod(this);
  m = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  if ( m >= 0.00000011920929 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->w);
    }
    w = this->w;
    if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->z);
    }
    v8 = (float)-this->z / m;
    if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->y);
    }
    v9 = (float)-this->y / m;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(this);
    }
    Quaternion::Quaternion((Quaternion *const)(v2 + 32), (float)-this->x / m, v9, v8, w);
    if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load16(v2 + 32);
    v6 = *(_QWORD *)(v2 + 32);
    v5 = *(_QWORD *)(v2 + 40);
  }
  else
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
      "./src/math_def.h",
      "inverseAndMod",
      363);
    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[10])"mod is 0!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
    if ( !(_BYTE)`guard variable for'Quaternion::inverseAndMod(void)::q
      && __cxa_guard_acquire(&`guard variable for'Quaternion::inverseAndMod(void)::q) )
    {
      Quaternion::Quaternion(&Quaternion::inverseAndMod(void)const::q, 0.0, 0.0, 0.0, 1.0);
      __cxa_guard_release(&`guard variable for'Quaternion::inverseAndMod(void)::q);
    }
    v5 = *(_QWORD *)&Quaternion::inverseAndMod(void)const::q.z;
    v6 = *(_QWORD *)&Quaternion::inverseAndMod(void)const::q.x;
  }
  v10 = v6;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v11 = v5;
  result.z = *(float *)&v11;
  result.w = *((float *)&v11 + 1);
  result.x = *(float *)&v10;
  result.y = *((float *)&v10 + 1);
  return result;
};

// Line 371: range 000000000CE013B4-000000000CE01510
float __cdecl Quaternion::mod(const Quaternion *const this)
{
  float v1; // xmm1_4
  float v2; // xmm1_4
  float v3; // xmm1_4

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
  v3 = v2 + (float)(this->z * this->z);
  if ( *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->w);
  }
  return std::sqrt((float)(this->w * this->w) + v3);
};

// Line 415: range 000000000CE01580-000000000CE015C1
void __cdecl BaseDFNode::BaseDFNode(BaseDFNode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BaseDFNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseDFNode = v2;
};

// Line 420: range 000000000CE01554-000000000CE0157E
void __cdecl BaseDFNode::~BaseDFNode(BaseDFNode *const this)
{
  BaseDFNode::~BaseDFNode(this);
  operator delete(this, 8uLL);
};

// Line 420: range 000000000CE01512-000000000CE01553
void __cdecl BaseDFNode::~BaseDFNode(BaseDFNode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BaseDFNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseDFNode = v2;
};

// Line 425: range 000000000D49115E-000000000D4911AB
void __cdecl FixedDFNode::~FixedDFNode(FixedDFNode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FixedDFNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseDFNode = v2;
  BaseDFNode::~BaseDFNode(this);
};

// Line 425: range 000000000D4911AC-000000000D4911D6
void __cdecl FixedDFNode::~FixedDFNode(FixedDFNode *const this)
{
  FixedDFNode::~FixedDFNode(this);
  operator delete(this, 0x10uLL);
};

// Line 428: range 000000000CE015C2-000000000CE0164F
void __cdecl FixedDFNode::FixedDFNode(FixedDFNode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseDFNode::BaseDFNode(this);
  v2 = (int (**)(...))(&`vtable for'FixedDFNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseDFNode = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v1);
  }
  this->value = 0.0;
};

// Line 435: range 000000000D431538-000000000D431595
void __cdecl DynamicDFNode::DynamicDFNode(DynamicDFNode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseDFNode::BaseDFNode(this);
  v2 = (int (**)(...))(&`vtable for'DynamicDFNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseDFNode = v2;
  std::string::basic_string(&this->key);
};

// Line 435: range 000000000D4910D4-000000000D491131
void __cdecl DynamicDFNode::~DynamicDFNode(DynamicDFNode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DynamicDFNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseDFNode = v2;
  std::string::~string(&this->key);
  BaseDFNode::~BaseDFNode(this);
};

// Line 435: range 000000000D491132-000000000D49115C
void __cdecl DynamicDFNode::~DynamicDFNode(DynamicDFNode *const this)
{
  DynamicDFNode::~DynamicDFNode(this);
  operator delete(this, 0x28uLL);
};

// Line 443: range 000000000D431014-000000000D431081
void __cdecl BinOpDFNode::BinOpDFNode(BinOpDFNode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseDFNode::BaseDFNode(this);
  v2 = (int (**)(...))(&`vtable for'BinOpDFNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseDFNode = v2;
  std::shared_ptr<BaseDFNode>::shared_ptr(&this->left_ptr);
  std::shared_ptr<BaseDFNode>::shared_ptr(&this->right_ptr);
};

// Line 443: range 000000000D49103A-000000000D4910A7
void __cdecl BinOpDFNode::~BinOpDFNode(BinOpDFNode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BinOpDFNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseDFNode = v2;
  std::shared_ptr<BaseDFNode>::~shared_ptr(&this->right_ptr);
  std::shared_ptr<BaseDFNode>::~shared_ptr(&this->left_ptr);
  BaseDFNode::~BaseDFNode(this);
};

// Line 443: range 000000000D4910A8-000000000D4910D2
void __cdecl BinOpDFNode::~BinOpDFNode(BinOpDFNode *const this)
{
  BinOpDFNode::~BinOpDFNode(this);
  operator delete(this, 0x30uLL);
};

// Line 465: range 000000000CE01650-000000000CE01690
bool __cdecl CommonMiscs::isAlmostZero(float f, float epsilon)
{
  return epsilon > f && f > (float)-epsilon;
};

// Line 39844: range 000000000F776758-000000000F7768F8
void __cdecl Vector3::Vector3(Vector3 *const this, const data::Vector *vec)
{
  float x; // xmm0_4
  float y; // xmm0_4
  float z; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)vec >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)vec & 7) + 3) >= *(_BYTE *)(((unsigned __int64)vec >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(vec);
  }
  x = vec->x;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->x = x;
  if ( *(_BYTE *)(((unsigned __int64)&vec->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)vec + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vec->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&vec->y);
  }
  y = vec->y;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->y = y;
  if ( *(_BYTE *)(((unsigned __int64)&vec->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)vec + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vec->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&vec->z);
  }
  z = vec->z;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->z, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->z = z;
};
