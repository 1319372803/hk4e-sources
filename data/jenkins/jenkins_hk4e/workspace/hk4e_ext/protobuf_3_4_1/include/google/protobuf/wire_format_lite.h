// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/protobuf_3_4_1/include/google/protobuf/wire_format_lite.h

// Line 780: range 00000000165A9E7E-00000000165A9E92
google::protobuf::uint32 __cdecl google::protobuf::internal::WireFormatLite::MakeTag(
        int field_number,
        google::protobuf::internal::WireFormatLite::WireType type)
{
  return type | (8 * field_number);
};

// Line 784: range 00000000165A9E94-00000000165A9EA2
google::protobuf::internal::WireFormatLite::WireType __cdecl google::protobuf::internal::WireFormatLite::GetTagWireType(
        google::protobuf::uint32 tag)
{
  return tag & 7;
};

// Line 788: range 00000000165A9EA4-00000000165A9EB2
int __cdecl google::protobuf::internal::WireFormatLite::GetTagFieldNumber(google::protobuf::uint32 tag)
{
  return tag >> 3;
};

// Line 804: range 00000000165A9EB4-00000000165A9F69
google::protobuf::uint32 __cdecl google::protobuf::internal::WireFormatLite::EncodeFloat(float value)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  google::protobuf::uint32 v4; // edx
  char v6[80]; // [rsp+10h] [rbp-50h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v1 + 16) = google::protobuf::internal::WireFormatLite::EncodeFloat;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(float *)(v1 + 32) = value;
  v4 = *(_DWORD *)(v1 + 32);
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v4;
};

// Line 810: range 00000000165A9F6A-00000000165AA019
float __cdecl google::protobuf::internal::WireFormatLite::DecodeFloat(google::protobuf::uint32 value)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  float result; // xmm0_4
  char v5[80]; // [rsp+10h] [rbp-50h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v1 + 16) = google::protobuf::internal::WireFormatLite::DecodeFloat;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = value;
  result = *(float *)(v1 + 32);
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 816: range 00000000165AA01A-00000000165AA0D1
google::protobuf::uint64 __cdecl google::protobuf::internal::WireFormatLite::EncodeDouble(double value)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  google::protobuf::uint64 v4; // rdx
  char v6[80]; // [rsp+10h] [rbp-50h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = google::protobuf::internal::WireFormatLite::EncodeDouble;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  *(double *)(v1 + 32) = value;
  v4 = *(_QWORD *)(v1 + 32);
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v4;
};

// Line 822: range 00000000165AA0D2-00000000165AA184
double __cdecl google::protobuf::internal::WireFormatLite::DecodeDouble(google::protobuf::uint64 value)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  double result; // xmm0_8
  char v5[80]; // [rsp+10h] [rbp-50h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = google::protobuf::internal::WireFormatLite::DecodeDouble;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  *(_QWORD *)(v1 + 32) = value;
  result = *(double *)(v1 + 32);
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 874: range 00000000165AA186-00000000165AA1AA
bool __cdecl google::protobuf::internal::WireFormatLite::ReadString(
        google::protobuf::io::CodedInputStream *input,
        std::string *value)
{
  return google::protobuf::internal::WireFormatLite::ReadBytes(input, value);
};
