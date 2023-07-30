// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/protobuf_3_4_1/include/google/protobuf/generated_enum_reflection.h

// Line 70: range 0000000012210626-000000001221077C
bool __cdecl google::protobuf::internal::ParseNamedEnum<proto::ChangHpReason>(
        const google::protobuf::EnumDescriptor *descriptor,
        const std::string *name,
        proto::ChangHpReason *value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool result; // al
  proto::ChangHpReason v7; // ecx
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 tmp:73";
  *(_QWORD *)(v3 + 16) = google::protobuf::internal::ParseNamedEnum<proto::ChangHpReason>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( !google::protobuf::internal::ParseNamedEnum(descriptor, name, (int *)(v3 + 32)) )
  {
    result = 0;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 32);
    v7 = *(_DWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(value);
    }
    *value = v7;
    result = 1;
  }
  if ( v9 == (char *)v3 )
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

// Line 70: range 000000000E8F1EE2-000000000E8F2038
bool __cdecl google::protobuf::internal::ParseNamedEnum<proto::MultistagePlayType>(
        const google::protobuf::EnumDescriptor *descriptor,
        const std::string *name,
        proto::MultistagePlayType *value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool result; // al
  proto::MultistagePlayType v7; // ecx
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 tmp:73";
  *(_QWORD *)(v3 + 16) = google::protobuf::internal::ParseNamedEnum<proto::MultistagePlayType>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( !google::protobuf::internal::ParseNamedEnum(descriptor, name, (int *)(v3 + 32)) )
  {
    result = 0;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 32);
    v7 = *(_DWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(value);
    }
    *value = v7;
    result = 1;
  }
  if ( v9 == (char *)v3 )
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

// Line 284: range 000000000C652229-000000000C65237F
bool __cdecl google::protobuf::internal::ParseNamedEnum<proto::PlatformType>(
        const google::protobuf::EnumDescriptor *descriptor,
        const std::string *name,
        proto::PlatformType *value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool result; // al
  proto::PlatformType v7; // ecx
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 tmp:73";
  *(_QWORD *)(v3 + 16) = google::protobuf::internal::ParseNamedEnum<proto::PlatformType>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( !google::protobuf::internal::ParseNamedEnum(descriptor, name, (int *)(v3 + 32)) )
  {
    result = 0;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 32);
    v7 = *(_DWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(value);
    }
    *value = v7;
    result = 1;
  }
  if ( v9 == (char *)v3 )
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
