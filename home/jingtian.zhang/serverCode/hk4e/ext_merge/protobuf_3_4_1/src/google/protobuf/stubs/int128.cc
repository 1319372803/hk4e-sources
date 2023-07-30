// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/stubs/int128.cc

// Line 83: range 000000000C895470-000000000C895931
// local variable allocation has failed, the output may be wrong!
void __fastcall google::protobuf::uint128::DivModImpl(
        google::protobuf::uint128 *this,
        google::protobuf::uint128 a2,
        google::protobuf::uint128 a3,
        google::protobuf::uint128 *a4)
{
  _QWORD *hi; // r14
  google::protobuf::uint128 *v6; // r13
  google::protobuf::uint64 lo; // r12
  google::protobuf::uint64 v8; // rbp
  google::protobuf::uint64 v9; // rbx
  __int64 v10; // rsi
  google::protobuf::uint64 v11; // rsi
  __int64 v12; // rsi
  unsigned __int64 v13; // rsi
  int v14; // edx
  unsigned __int64 v15; // rsi
  unsigned int v16; // ecx
  unsigned __int16 v17; // esi^2
  unsigned __int64 v18; // rdi
  int v19; // esi
  int v20; // eax
  unsigned __int64 v21; // rdx
  unsigned int v22; // ecx
  int v23; // esi
  unsigned __int128 v24; // rax
  google::protobuf::internal::LogMessage_0 *v25; // rax
  unsigned __int64 v26; // rsi
  google::protobuf::internal::LogMessage_0 *v27; // rax
  google::protobuf::internal::LogMessage_0 *v28; // rax
  google::protobuf::internal::LogMessage_0 *v29; // rax
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // eax
  unsigned __int64 v33; // rdx
  unsigned int v34; // ecx
  __int128 v35; // rdi
  bool v36; // cl
  google::protobuf::uint64 v37; // rcx
  google::protobuf::uint64 v38; // rsi
  unsigned int v39; // rsi^4
  __int64 v40; // rsi
  google::protobuf::uint64 v41; // [rsp+8h] [rbp-A0h]
  google::protobuf::uint64 v42; // [rsp+18h] [rbp-90h]
  google::protobuf::internal::LogFinisher v43; // [rsp+2Fh] [rbp-79h] BYREF
  google::protobuf::internal::LogMessage_0 v44; // [rsp+30h] [rbp-78h] BYREF

  hi = (_QWORD *)a3.hi_;
  v6 = this;
  lo = a2.lo_;
  v8 = a2.hi_;
  v9 = a3.lo_;
  v42 = a2.hi_;
  v41 = a3.lo_;
  if ( __PAIR128__(a3.lo_, a2.hi_) == 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v44, LOGLEVEL_FATAL_0, "google/protobuf/stubs/int128.cc", 85);
    v25 = google::protobuf::internal::LogMessage::operator<<(&v44, "Division or mod by zero: dividend.hi=");
    v27 = google::protobuf::internal::LogMessage::operator<<(v25, v26);
    v28 = google::protobuf::internal::LogMessage::operator<<(v27, ", lo=");
    v29 = google::protobuf::internal::LogMessage::operator<<(v28, (unsigned __int64)this);
    google::protobuf::internal::LogFinisher::operator=(&v43, v29);
    google::protobuf::internal::LogMessage::~LogMessage(&v44);
    if ( v26 )
    {
LABEL_3:
      if ( v11 >= v41 )
        goto LABEL_4;
LABEL_52:
      *hi = 0LL;
      hi[1] = 0LL;
      a4->lo_ = (google::protobuf::uint64)this;
      a4->hi_ = v38;
      return;
    }
    if ( (google::protobuf::uint128 *)v42 != this )
      goto LABEL_25;
LABEL_54:
    *hi = 1LL;
    hi[1] = 0LL;
    a4->lo_ = 0LL;
    a4->hi_ = 0LL;
    return;
  }
  if ( v10 != a3.lo_ )
    goto LABEL_3;
  if ( a2.hi_ > (unsigned __int64)this )
    goto LABEL_52;
  if ( (google::protobuf::uint128 *)a2.hi_ == this )
    goto LABEL_54;
LABEL_4:
  if ( v12 )
  {
    if ( v13 > 0xFFFFFFFF )
    {
      v40 = v39;
      v14 = 32;
    }
    else
    {
      v14 = 0;
    }
    v16 = v15;
    if ( v15 > 0xFFFF )
    {
      v16 = v17;
      v14 |= 0x10u;
    }
    if ( v16 > 0xFF )
    {
      v16 >>= 8;
      v14 |= 8u;
    }
    if ( v16 > 0xF )
    {
      v16 >>= 4;
      v14 |= 4u;
    }
    v18 = v41;
    v19 = v14 + ((0x3333333322221100uLL >> (4 * (unsigned __int8)v16)) & 3) + 64;
    if ( !v41 )
      goto LABEL_14;
LABEL_34:
    if ( v18 <= 0xFFFFFFFF )
    {
      v33 = v41;
      v32 = 0;
    }
    else
    {
      v32 = 32;
      v33 = HIDWORD(v18);
    }
    v34 = v33;
    if ( v33 > 0xFFFF )
    {
      v34 = WORD1(v33);
      v32 |= 0x10u;
    }
    if ( v34 <= 0xFF )
    {
      if ( v34 <= 0xF )
      {
        v23 = v19 - (v32 + ((0x3333333322221100uLL >> (4 * (unsigned __int8)v34)) & 3) + 64);
        if ( v23 > 63 )
          goto LABEL_22;
        goto LABEL_41;
      }
    }
    else
    {
      v34 >>= 8;
      v32 |= 8u;
      if ( v34 <= 0xF )
      {
        v23 = v19 - (v32 + ((0x3333333322221100uLL >> (4 * (unsigned __int8)v34)) & 3) + 64);
        goto LABEL_41;
      }
    }
    v23 = v19 - (((0x3333333322221100uLL >> (4 * (unsigned __int8)(v34 >> 4))) & 3) + (v32 | 4) + 64);
    goto LABEL_41;
  }
LABEL_25:
  if ( (unsigned __int64)this > 0xFFFFFFFF )
  {
    this = (google::protobuf::uint128 *)((unsigned __int64)this >> 32);
    v30 = 32;
  }
  else
  {
    v30 = 0;
  }
  v31 = (unsigned int)this;
  if ( (unsigned __int64)this > 0xFFFF )
  {
    v31 = (unsigned int)this >> 16;
    v30 |= 0x10u;
  }
  if ( v31 > 0xFF )
  {
    v31 >>= 8;
    v30 |= 8u;
  }
  if ( v31 > 0xF )
  {
    v31 >>= 4;
    v30 |= 4u;
  }
  v18 = v41;
  v19 = v30 + ((0x3333333322221100uLL >> (4 * (unsigned __int8)v31)) & 3);
  if ( v41 )
    goto LABEL_34;
LABEL_14:
  if ( v42 <= 0xFFFFFFFF )
  {
    v21 = v42;
    v20 = 0;
  }
  else
  {
    v20 = 32;
    v21 = HIDWORD(v42);
  }
  v22 = v21;
  if ( v21 > 0xFFFF )
  {
    v22 = WORD1(v21);
    v20 |= 0x10u;
  }
  if ( v22 > 0xFF )
  {
    v22 >>= 8;
    v20 |= 8u;
  }
  if ( v22 <= 0xF )
  {
    v23 = v19 - (((0x3333333322221100uLL >> (4 * (unsigned __int8)v22)) & 3) + v20);
    if ( v23 > 63 )
    {
      if ( v23 > 127 )
      {
        *hi = 0LL;
        hi[1] = 0LL;
        a4->lo_ = (google::protobuf::uint64)v6;
        a4->hi_ = lo;
        return;
      }
      goto LABEL_22;
    }
  }
  else
  {
    v23 = v19 - (((0x3333333322221100uLL >> (4 * (unsigned __int8)(v22 >> 4))) & 3) + (v20 | 4));
    if ( v23 > 63 )
    {
LABEL_22:
      *(_QWORD *)&v24 = 0LL;
      *((_QWORD *)&v24 + 1) = 1LL << ((unsigned __int8)v23 - 64);
      v8 = 0LL;
      v9 = v42 << ((unsigned __int8)v23 - 64);
      goto LABEL_43;
    }
  }
LABEL_41:
  if ( v23 )
  {
    v9 = (v42 >> (64 - (unsigned __int8)v23)) | (v41 << v23);
    v8 = v42 << v23;
    *((_QWORD *)&v24 + 1) = 1uLL >> (64 - (unsigned __int8)v23);
    *(_QWORD *)&v24 = 1LL << v23;
  }
  else
  {
    v24 = 1uLL;
  }
LABEL_43:
  v35 = 0uLL;
  while ( v24 != 0 )
  {
    v36 = lo >= v9;
    if ( lo == v9 )
      v36 = (unsigned __int64)v6 >= v8;
    if ( v36 )
    {
      lo = (__PAIR128__(lo, (unsigned __int64)v6) - __PAIR128__(v9, v8)) >> 64;
      v6 = (google::protobuf::uint128 *)((char *)v6 - v8);
      v35 |= v24;
    }
    v24 >>= 1;
    v37 = v9;
    v9 >>= 1;
    v8 = (v37 << 63) | (v8 >> 1);
  }
  *(_OWORD *)hi = v35;
  a4->lo_ = (google::protobuf::uint64)v6;
  a4->hi_ = lo;
};

// Line 85: range 000000000C72A2C2-000000000C72A2CF
void __fastcall __noreturn google::protobuf::uint128::DivModImpl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        google::protobuf::internal::LogMessage_0 a12)
{
  struct _Unwind_Exception *v12; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a12);
  _Unwind_Resume(v12);
};

// Line 125: range 000000000C895940-000000000C8959A1
google::protobuf::uint128 *__fastcall google::protobuf::uint128::operator/=(
        google::protobuf::uint128 *const this,
        const google::protobuf::uint128 *divisor)
{
  google::protobuf::uint64 lo; // rax
  google::protobuf::uint64 hi; // rdx
  google::protobuf::uint128 *v5; // rdi
  google::protobuf::uint64 v6; // rsi
  google::protobuf::uint128 *result; // rax
  google::protobuf::uint128 quotient; // [rsp+0h] [rbp-28h] BYREF
  google::protobuf::uint128 remainder; // [rsp+10h] [rbp-18h] BYREF

  lo = divisor->lo_;
  hi = divisor->hi_;
  v5 = (google::protobuf::uint128 *)this->lo_;
  v6 = this->hi_;
  quotient.lo_ = 0LL;
  quotient.hi_ = 0LL;
  remainder.lo_ = 0LL;
  remainder.hi_ = 0LL;
  google::protobuf::uint128::DivModImpl(
    v5,
    (google::protobuf::uint128)__PAIR128__(lo, v6),
    (google::protobuf::uint128)__PAIR128__(&quotient, hi),
    &remainder);
  result = this;
  *(__m128i *)this = _mm_load_si128((const __m128i *)&quotient);
  return result;
};

// Line 132: range 000000000C8959B0-000000000C895A12
google::protobuf::uint128 *__fastcall google::protobuf::uint128::operator%=(
        google::protobuf::uint128 *const this,
        const google::protobuf::uint128 *divisor)
{
  google::protobuf::uint64 lo; // rax
  google::protobuf::uint64 hi; // rdx
  google::protobuf::uint128 *v5; // rdi
  google::protobuf::uint64 v6; // rsi
  google::protobuf::uint128 *result; // rax
  google::protobuf::uint128 quotient; // [rsp+0h] [rbp-28h] BYREF
  google::protobuf::uint128 remainder; // [rsp+10h] [rbp-18h] BYREF

  lo = divisor->lo_;
  hi = divisor->hi_;
  v5 = (google::protobuf::uint128 *)this->lo_;
  v6 = this->hi_;
  quotient.lo_ = 0LL;
  quotient.hi_ = 0LL;
  remainder.lo_ = 0LL;
  remainder.hi_ = 0LL;
  google::protobuf::uint128::DivModImpl(
    v5,
    (google::protobuf::uint128)__PAIR128__(lo, v6),
    (google::protobuf::uint128)__PAIR128__(&quotient, hi),
    &remainder);
  result = this;
  *(__m128i *)this = _mm_load_si128((const __m128i *)&remainder);
  return result;
};

// Line 140: range 000000000C895A20-000000000C896105
__int64 __fastcall google::protobuf::operator<<(__int64 *a1, const __m128i *a2)
{
  __int64 v2; // r13
  unsigned __int64 v3; // r12
  int v5; // r15d
  int v6; // eax
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  google::protobuf::uint128 v9; // xmm0
  __int64 v10; // rdx
  unsigned __int64 v11; // r9
  char *v12; // rax
  unsigned __int64 v13; // r12
  unsigned int v14; // r15d
  char *v15; // r14
  char v16; // al
  __int64 v17; // r8
  __int64 v18; // r12
  __int64 v19; // rax
  _QWORD *v21; // rax
  char *v22; // r12
  _QWORD *v23; // rax
  char *v24; // r12
  google::protobuf::uint64 lo; // rsi
  char v26; // al
  const std::ctype<char> *v27; // r14
  const std::ctype<char> *v28; // r15
  char v29; // al
  const std::ctype<char> *v30; // r14
  std::ctype<char>::char_type (__fastcall *v31)(const std::ctype<char> *const, char); // rax
  std::ctype<char>::char_type (__fastcall *v32)(const std::ctype<char> *const, char); // rax
  std::ctype<char>::char_type (__fastcall *v33)(const std::ctype<char> *const, char); // rax
  std::ctype<char>::char_type (__fastcall *v34)(const std::ctype<char> *const, char); // rax
  const std::ctype<char> *v35; // [rsp+8h] [rbp-210h]
  google::protobuf::uint128 v36; // [rsp+10h] [rbp-208h] BYREF
  google::protobuf::uint128 v37; // [rsp+20h] [rbp-1F8h] BYREF
  google::protobuf::uint128 v38; // [rsp+30h] [rbp-1E8h] BYREF
  void *v39; // [rsp+40h] [rbp-1D8h] BYREF
  unsigned __int64 v40; // [rsp+48h] [rbp-1D0h]
  char v41[16]; // [rsp+50h] [rbp-1C8h] BYREF
  _QWORD *v42; // [rsp+60h] [rbp-1B8h] BYREF
  void *v43; // [rsp+68h] [rbp-1B0h] BYREF
  __int64 v44[2]; // [rsp+70h] [rbp-1A8h]
  unsigned __int64 v45; // [rsp+80h] [rbp-198h]
  const char *v46; // [rsp+88h] [rbp-190h]
  unsigned __int64 v47; // [rsp+90h] [rbp-188h]
  __int64 v48; // [rsp+98h] [rbp-180h]
  std::locale v49; // [rsp+A0h] [rbp-178h] BYREF
  int v50; // [rsp+A8h] [rbp-170h]
  void *v51[2]; // [rsp+B0h] [rbp-168h] BYREF
  char v52[16]; // [rsp+C0h] [rbp-158h] BYREF
  __int64 v53[3]; // [rsp+D0h] [rbp-148h] BYREF
  unsigned int v54; // [rsp+E8h] [rbp-130h]
  __int64 v55; // [rsp+1A8h] [rbp-70h]
  __int16 v56; // [rsp+1B0h] [rbp-68h]
  __int64 v57; // [rsp+1B8h] [rbp-60h]
  __int64 v58; // [rsp+1C0h] [rbp-58h]
  __int64 v59; // [rsp+1C8h] [rbp-50h]
  __int64 v60; // [rsp+1D0h] [rbp-48h]

  v2 = 15LL;
  v3 = 0x1000000000000000LL;
  v5 = *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 24);
  v6 = v5 & 0x4A;
  if ( v6 != 8 )
  {
    v3 = 0x8000000000000000LL;
    if ( v6 != 64 )
      v3 = 0x8AC7230489E80000LL;
    v2 = 2LL * (v6 == 64) + 19;
  }
  std::ios_base::ios_base((std::ios_base *)v53);
  v7 = (_QWORD *)qword_1FB24EC8;
  v56 = 0;
  v8 = (_QWORD **)((char *)&v42 + *(_QWORD *)(qword_1FB24EC8 - 24));
  v53[0] = (__int64)&unk_1FB251E8;
  v55 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v42 = (_QWORD *)qword_1FB24EC8;
  *v8 = qword_1FB24ED0;
  std::ios::init(v8, 0LL);
  v42 = &unk_1FB25170;
  v53[0] = (__int64)&unk_1FB25198;
  v43 = &unk_1FB24EF0;
  v44[0] = 0LL;
  v44[1] = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  std::locale::locale(&v49);
  v43 = &unk_1FB24FF0;
  v50 = 16;
  v51[0] = v52;
  v51[1] = 0LL;
  v52[0] = 0;
  std::ios::init(v53, &v43);
  v9 = (google::protobuf::uint128)_mm_loadu_si128(a2);
  v37.lo_ = 0LL;
  v36 = v9;
  v37.hi_ = 0LL;
  v54 = v5 & 0x424A | v54 & 0xFFFFBDB5;
  google::protobuf::uint128::DivModImpl(
    (google::protobuf::uint128 *)v9.lo_,
    (google::protobuf::uint128)__PAIR128__(v3, v9.hi_),
    (google::protobuf::uint128)__PAIR128__(&v36, 0LL),
    &v37);
  v38.lo_ = 0LL;
  v38.hi_ = 0LL;
  google::protobuf::uint128::DivModImpl(
    (google::protobuf::uint128 *)v36.lo_,
    (google::protobuf::uint128)__PAIR128__(v3, v36.hi_),
    (google::protobuf::uint128)__PAIR128__(&v36, 0LL),
    &v38);
  if ( v36.lo_ )
  {
    std::ostream::_M_insert<unsigned long>(&v42, v36.lo_);
    v23 = v42;
    v24 = (char *)&v42 + *(v42 - 3);
    *((_DWORD *)v24 + 6) &= ~0x200u;
    if ( !v24[225] )
    {
      v30 = (const std::ctype<char> *)*((_QWORD *)v24 + 30);
      if ( !v30 )
        std::__throw_bad_cast();
      if ( !*((_BYTE *)v30 + 56) )
      {
        std::ctype<char>::_M_widen_init(*((_QWORD *)v24 + 30));
        v31 = *(std::ctype<char>::char_type (__fastcall **)(const std::ctype<char> *const, char))(*(_QWORD *)v30 + 48LL);
        if ( v31 != std::ctype<char>::do_widen )
          v31(v30, 32);
        v23 = v42;
      }
      v24[225] = 1;
    }
    v24[224] = 48;
    lo = v38.lo_;
    *(__int64 *)((char *)v44 + *(v23 - 3)) = v2;
    std::ostream::_M_insert<unsigned long>(&v42, lo);
    *(__int64 *)((char *)v44 + *(v42 - 3)) = v2;
  }
  else if ( v38.lo_ )
  {
    std::ostream::_M_insert<unsigned long>(&v42, v38.lo_);
    v21 = v42;
    v22 = (char *)&v42 + *(v42 - 3);
    *((_DWORD *)v22 + 6) &= ~0x200u;
    if ( !v22[225] )
    {
      v27 = (const std::ctype<char> *)*((_QWORD *)v22 + 30);
      if ( !v27 )
        std::__throw_bad_cast();
      if ( !*((_BYTE *)v27 + 56) )
      {
        std::ctype<char>::_M_widen_init(*((_QWORD *)v22 + 30));
        v34 = *(std::ctype<char>::char_type (__fastcall **)(const std::ctype<char> *const, char))(*(_QWORD *)v27 + 48LL);
        if ( v34 != std::ctype<char>::do_widen )
          v34(v27, 32);
        v21 = v42;
      }
      v22[225] = 1;
    }
    v22[224] = 48;
    *(__int64 *)((char *)v44 + *(v21 - 3)) = v2;
  }
  std::ostream::_M_insert<unsigned long>(&v42, v37.lo_);
  v41[0] = 0;
  v39 = v41;
  v40 = 0LL;
  if ( v47 )
  {
    if ( v47 > v45 )
      std::string::_M_replace(&v39, 0LL, 0LL, v46, v47 - (_QWORD)v46);
    else
      std::string::_M_replace(&v39, 0LL, 0LL, v46, v45 - (_QWORD)v46);
  }
  else
  {
    std::string::_M_assign(&v39, v51);
  }
  v10 = *a1;
  v11 = v40;
  v12 = (char *)a1 + *(_QWORD *)(*a1 - 24);
  v13 = *((_QWORD *)v12 + 2);
  *((_QWORD *)v12 + 2) = 0LL;
  if ( v13 > v11 )
  {
    v14 = v5 & 0xB0;
    v15 = (char *)a1 + *(_QWORD *)(v10 - 24);
    v16 = v15[225];
    if ( v14 == 32 )
    {
      if ( v16 )
      {
        v14 = v15[224];
      }
      else
      {
        v35 = (const std::ctype<char> *)*((_QWORD *)v15 + 30);
        if ( !v35 )
          std::__throw_bad_cast();
        if ( *((_BYTE *)v35 + 56) )
        {
          v14 = *((char *)v35 + 89);
          v26 = *((_BYTE *)v35 + 89);
        }
        else
        {
          std::ctype<char>::_M_widen_init(v35);
          v33 = *(std::ctype<char>::char_type (__fastcall **)(const std::ctype<char> *const, char))(*(_QWORD *)v35 + 48LL);
          if ( v33 == std::ctype<char>::do_widen )
          {
            v11 = v40;
            v26 = 32;
          }
          else
          {
            v26 = v33(v35, 32);
            v11 = v40;
            v14 = v26;
          }
        }
        v15[224] = v26;
        v15[225] = 1;
      }
      std::string::_M_replace_aux(&v39, v11, 0LL, v13 - v11, v14);
    }
    else
    {
      if ( v16 )
      {
        v17 = (unsigned int)v15[224];
      }
      else
      {
        v28 = (const std::ctype<char> *)*((_QWORD *)v15 + 30);
        if ( !v28 )
          std::__throw_bad_cast();
        if ( *((_BYTE *)v28 + 56) )
        {
          v17 = (unsigned int)*((char *)v28 + 89);
          v29 = *((_BYTE *)v28 + 89);
        }
        else
        {
          std::ctype<char>::_M_widen_init(*((_QWORD *)v15 + 30));
          v32 = *(std::ctype<char>::char_type (__fastcall **)(const std::ctype<char> *const, char))(*(_QWORD *)v28 + 48LL);
          if ( v32 == std::ctype<char>::do_widen )
          {
            v11 = v40;
            v17 = 32LL;
            v29 = 32;
          }
          else
          {
            v29 = v32(v28, 32);
            v11 = v40;
            v17 = (unsigned int)v29;
          }
        }
        v15[224] = v29;
        v15[225] = 1;
      }
      std::string::_M_replace_aux(&v39, 0LL, 0LL, v13 - v11, v17);
    }
    v11 = v40;
  }
  v18 = std::__ostream_insert<char,std::char_traits<char>>(a1, v39, v11);
  if ( v39 != v41 )
    operator delete(v39);
  v42 = &unk_1FB25170;
  v53[0] = (__int64)&unk_1FB25198;
  v43 = &unk_1FB24FF0;
  if ( v51[0] != v52 )
    operator delete(v51[0]);
  v43 = &unk_1FB24EF0;
  std::locale::~locale(&v49);
  v19 = *(v7 - 3);
  v42 = v7;
  *(_QWORD **)((char *)&v42 + v19) = (_QWORD *)qword_1FB24ED0;
  v53[0] = (__int64)&unk_1FB251E8;
  std::ios_base::~ios_base((std::ios_base *)v53);
  return v18;
};

// Line 201: range 000000000C7467E0-000000000C746801
void __cdecl GLOBAL__sub_I__ZN6google8protobuf11kuint128maxE()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
