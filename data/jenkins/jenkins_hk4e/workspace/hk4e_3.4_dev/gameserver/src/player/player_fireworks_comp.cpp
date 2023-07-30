// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/player_fireworks_comp.cpp

// Line 22: range 000000001799F5F0-000000001799F7C8
int32_t __cdecl FireworksReformData::fromBin(
        FireworksReformData *const this,
        const proto::FireworksReformBin *bin_data)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rdx
  char v6; // al
  int32_t result; // eax
  const proto::FireworksReformBin *bin_dataa; // [rsp+0h] [rbp-90h]
  google::protobuf::RepeatedPtrField<proto::FireworksParamBin>::const_iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  google::protobuf::RepeatedPtrField<proto::FireworksParamBin>::const_iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  const google::protobuf::RepeatedPtrField<proto::FireworksParamBin> *__for_range; // [rsp+20h] [rbp-70h]
  const proto::FireworksParamBin *reform_param_bin; // [rsp+28h] [rbp-68h]
  char v13[96]; // [rsp+30h] [rbp-60h] BYREF

  bin_dataa = bin_data;
  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 param:27";
  *(_QWORD *)(v2 + 16) = FireworksReformData::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  v5 = proto::FireworksReformBin::id(bin_data);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(bin_data) = v6 != 0;
    __asan_report_store4(this, bin_data, v5);
  }
  this->id = v5;
  std::vector<FireworksParam>::clear(&this->reform_param_vec);
  __for_range = proto::FireworksReformBin::reform_param_bin_list(bin_dataa);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FireworksParamBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FireworksParamBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::FireworksParamBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    reform_param_bin = google::protobuf::internal::RepeatedPtrIterator<proto::FireworksParamBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 32) = proto::FireworksParamBin::type(reform_param_bin);
    *(_DWORD *)(v2 + 36) = proto::FireworksParamBin::value(reform_param_bin);
    std::vector<FireworksParam>::push_back(
      &this->reform_param_vec,
      (const std::vector<FireworksParam>::value_type *)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::FireworksParamBin const>::operator++(&__for_begin);
  }
  result = 0;
  if ( v13 == (char *)v2 )
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

// Line 36: range 000000001799F7CA-000000001799F936
int32_t __cdecl FireworksReformData::toBin(const FireworksReformData *const this, proto::FireworksReformBin *bin_data)
{
  std::vector<FireworksParam>::const_iterator __for_begin; // [rsp+18h] [rbp-28h] BYREF
  std::vector<FireworksParam>::const_iterator __for_end; // [rsp+20h] [rbp-20h] BYREF
  const std::vector<FireworksParam> *__for_range; // [rsp+28h] [rbp-18h]
  const FireworksParam *param; // [rsp+30h] [rbp-10h]
  proto::FireworksParamBin *reform_param_bin; // [rsp+38h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::FireworksReformBin::set_id(bin_data, this->id);
  __for_range = &this->reform_param_vec;
  __for_begin._M_current = std::vector<FireworksParam>::begin(&this->reform_param_vec)._M_current;
  __for_end._M_current = std::vector<FireworksParam>::end(&this->reform_param_vec)._M_current;
  while ( __gnu_cxx::operator!=<FireworksParam const*,std::vector<FireworksParam>>(&__for_begin, &__for_end) )
  {
    param = __gnu_cxx::__normal_iterator<FireworksParam const*,std::vector<FireworksParam>>::operator*(&__for_begin);
    reform_param_bin = proto::FireworksReformBin::add_reform_param_bin_list(bin_data);
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    proto::FireworksParamBin::set_type(reform_param_bin, param->type);
    if ( *(_BYTE *)(((unsigned __int64)&param->value >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->value >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->value);
    }
    proto::FireworksParamBin::set_value(reform_param_bin, param->value);
    __gnu_cxx::__normal_iterator<FireworksParam const*,std::vector<FireworksParam>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 48: range 000000001799F938-000000001799FB10
int32_t __cdecl FireworksReformData::fromClient(
        FireworksReformData *const this,
        const proto::FireworksReformData *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rdx
  char v6; // al
  int32_t result; // eax
  const proto::FireworksReformData *protoa; // [rsp+0h] [rbp-90h]
  google::protobuf::RepeatedPtrField<proto::FireworksReformParam>::const_iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  google::protobuf::RepeatedPtrField<proto::FireworksReformParam>::const_iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  const google::protobuf::RepeatedPtrField<proto::FireworksReformParam> *__for_range; // [rsp+20h] [rbp-70h]
  const proto::FireworksReformParam *reform_param_proto; // [rsp+28h] [rbp-68h]
  char v13[96]; // [rsp+30h] [rbp-60h] BYREF

  protoa = proto;
  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 param:53";
  *(_QWORD *)(v2 + 16) = FireworksReformData::fromClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  v5 = proto::FireworksReformData::id(proto);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(proto) = v6 != 0;
    __asan_report_store4(this, proto, v5);
  }
  this->id = v5;
  std::vector<FireworksParam>::clear(&this->reform_param_vec);
  __for_range = proto::FireworksReformData::reform_param_list(protoa);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FireworksReformParam>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FireworksReformParam>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::FireworksReformParam const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    reform_param_proto = google::protobuf::internal::RepeatedPtrIterator<proto::FireworksReformParam const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 32) = proto::FireworksReformParam::type(reform_param_proto);
    *(_DWORD *)(v2 + 36) = proto::FireworksReformParam::value(reform_param_proto);
    std::vector<FireworksParam>::push_back(
      &this->reform_param_vec,
      (const std::vector<FireworksParam>::value_type *)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::FireworksReformParam const>::operator++(&__for_begin);
  }
  result = 0;
  if ( v13 == (char *)v2 )
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

// Line 62: range 000000001799FB12-000000001799FC80
int32_t __cdecl FireworksReformData::toClient(const FireworksReformData *const this, proto::FireworksReformData *proto)
{
  std::vector<FireworksParam>::const_iterator __for_begin; // [rsp+18h] [rbp-28h] BYREF
  std::vector<FireworksParam>::const_iterator __for_end; // [rsp+20h] [rbp-20h] BYREF
  const std::vector<FireworksParam> *__for_range; // [rsp+28h] [rbp-18h]
  const FireworksParam *param; // [rsp+30h] [rbp-10h]
  proto::FireworksReformParam *reform_param_proto; // [rsp+38h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::FireworksReformData::set_id(proto, this->id);
  __for_range = &this->reform_param_vec;
  __for_begin._M_current = std::vector<FireworksParam>::begin(&this->reform_param_vec)._M_current;
  __for_end._M_current = std::vector<FireworksParam>::end(&this->reform_param_vec)._M_current;
  while ( __gnu_cxx::operator!=<FireworksParam const*,std::vector<FireworksParam>>(&__for_begin, &__for_end) )
  {
    param = __gnu_cxx::__normal_iterator<FireworksParam const*,std::vector<FireworksParam>>::operator*(&__for_begin);
    reform_param_proto = proto::FireworksReformData::add_reform_param_list(proto);
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    proto::FireworksReformParam::set_type(reform_param_proto, (proto::FireworksReformParamType)param->type);
    if ( *(_BYTE *)(((unsigned __int64)&param->value >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->value >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->value);
    }
    proto::FireworksReformParam::set_value(reform_param_proto, param->value);
    __gnu_cxx::__normal_iterator<FireworksParam const*,std::vector<FireworksParam>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 74: range 000000001799FC82-000000001799FEA8
int32_t __cdecl FireworksLaunchSchemeData::fromBin(
        FireworksLaunchSchemeData *const this,
        const proto::FireworksLaunchSchemeBin *bin_data)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rdx
  char v6; // al
  const google::protobuf::RepeatedField<unsigned int> *v7; // rax
  int32_t result; // eax
  const proto::FireworksLaunchSchemeBin *bin_dataa; // [rsp+0h] [rbp-A0h]
  google::protobuf::RepeatedPtrField<proto::FireworksParamBin>::const_iterator __for_begin; // [rsp+10h] [rbp-90h] BYREF
  google::protobuf::RepeatedPtrField<proto::FireworksParamBin>::const_iterator __for_end; // [rsp+18h] [rbp-88h] BYREF
  const google::protobuf::RepeatedPtrField<proto::FireworksParamBin> *__for_range; // [rsp+20h] [rbp-80h]
  const proto::FireworksParamBin *launch_param_bin; // [rsp+28h] [rbp-78h]
  char v14[112]; // [rsp+30h] [rbp-70h] BYREF

  bin_dataa = bin_data;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 param:81";
  *(_QWORD *)(v2 + 16) = FireworksLaunchSchemeData::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  v5 = proto::FireworksLaunchSchemeBin::scheme_id(bin_data);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(bin_data) = v6 != 0;
    __asan_report_store4(this, bin_data, v5);
  }
  this->scheme_id = v5;
  std::vector<unsigned int>::clear(&this->fireworks_id_vec);
  v7 = proto::FireworksLaunchSchemeBin::fireworks_id_list(bin_dataa);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v7, &this->fireworks_id_vec);
  std::vector<FireworksParam>::clear(&this->launch_param_vec);
  __for_range = proto::FireworksLaunchSchemeBin::launch_param_bin_list(bin_dataa);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FireworksParamBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FireworksParamBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::FireworksParamBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    launch_param_bin = google::protobuf::internal::RepeatedPtrIterator<proto::FireworksParamBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 32) = proto::FireworksParamBin::type(launch_param_bin);
    *(_DWORD *)(v2 + 36) = proto::FireworksParamBin::value(launch_param_bin);
    std::vector<FireworksParam>::push_back(
      &this->launch_param_vec,
      (const std::vector<FireworksParam>::value_type *)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::FireworksParamBin const>::operator++(&__for_begin);
  }
  result = 0;
  if ( v14 == (char *)v2 )
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

// Line 90: range 000000001799FEAA-00000000179A0038
int32_t __cdecl FireworksLaunchSchemeData::toBin(
        const FireworksLaunchSchemeData *const this,
        proto::FireworksLaunchSchemeBin *bin_data)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  std::vector<FireworksParam>::const_iterator __for_begin; // [rsp+18h] [rbp-28h] BYREF
  std::vector<FireworksParam>::const_iterator __for_end; // [rsp+20h] [rbp-20h] BYREF
  const std::vector<FireworksParam> *__for_range; // [rsp+28h] [rbp-18h]
  const FireworksParam *param; // [rsp+30h] [rbp-10h]
  proto::FireworksParamBin *launch_param_bin; // [rsp+38h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::FireworksLaunchSchemeBin::set_scheme_id(bin_data, this->scheme_id);
  v2 = proto::FireworksLaunchSchemeBin::mutable_fireworks_id_list(bin_data);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->fireworks_id_vec, v2);
  __for_range = &this->launch_param_vec;
  __for_begin._M_current = std::vector<FireworksParam>::begin(&this->launch_param_vec)._M_current;
  __for_end._M_current = std::vector<FireworksParam>::end(&this->launch_param_vec)._M_current;
  while ( __gnu_cxx::operator!=<FireworksParam const*,std::vector<FireworksParam>>(&__for_begin, &__for_end) )
  {
    param = __gnu_cxx::__normal_iterator<FireworksParam const*,std::vector<FireworksParam>>::operator*(&__for_begin);
    launch_param_bin = proto::FireworksLaunchSchemeBin::add_launch_param_bin_list(bin_data);
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    proto::FireworksParamBin::set_type(launch_param_bin, param->type);
    if ( *(_BYTE *)(((unsigned __int64)&param->value >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->value >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->value);
    }
    proto::FireworksParamBin::set_value(launch_param_bin, param->value);
    __gnu_cxx::__normal_iterator<FireworksParam const*,std::vector<FireworksParam>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 103: range 00000000179A003A-00000000179A0260
int32_t __cdecl FireworksLaunchSchemeData::fromClient(
        FireworksLaunchSchemeData *const this,
        const proto::FireworksLaunchSchemeData *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rdx
  char v6; // al
  const google::protobuf::RepeatedField<unsigned int> *v7; // rax
  int32_t result; // eax
  const proto::FireworksLaunchSchemeData *protoa; // [rsp+0h] [rbp-A0h]
  google::protobuf::RepeatedPtrField<proto::FireworksLaunchParam>::const_iterator __for_begin; // [rsp+10h] [rbp-90h] BYREF
  google::protobuf::RepeatedPtrField<proto::FireworksLaunchParam>::const_iterator __for_end; // [rsp+18h] [rbp-88h] BYREF
  const google::protobuf::RepeatedPtrField<proto::FireworksLaunchParam> *__for_range; // [rsp+20h] [rbp-80h]
  const proto::FireworksLaunchParam *launch_param_proto; // [rsp+28h] [rbp-78h]
  char v14[112]; // [rsp+30h] [rbp-70h] BYREF

  protoa = proto;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 9 param:110";
  *(_QWORD *)(v2 + 16) = FireworksLaunchSchemeData::fromClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  v5 = proto::FireworksLaunchSchemeData::scheme_id(proto);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(proto) = v6 != 0;
    __asan_report_store4(this, proto, v5);
  }
  this->scheme_id = v5;
  std::vector<unsigned int>::clear(&this->fireworks_id_vec);
  v7 = proto::FireworksLaunchSchemeData::fireworks_id_list(protoa);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v7, &this->fireworks_id_vec);
  std::vector<FireworksParam>::clear(&this->launch_param_vec);
  __for_range = proto::FireworksLaunchSchemeData::launch_param_list(protoa);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FireworksLaunchParam>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FireworksLaunchParam>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::FireworksLaunchParam const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    launch_param_proto = google::protobuf::internal::RepeatedPtrIterator<proto::FireworksLaunchParam const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 32) = proto::FireworksLaunchParam::type(launch_param_proto);
    *(_DWORD *)(v2 + 36) = proto::FireworksLaunchParam::value(launch_param_proto);
    std::vector<FireworksParam>::push_back(
      &this->launch_param_vec,
      (const std::vector<FireworksParam>::value_type *)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::FireworksLaunchParam const>::operator++(&__for_begin);
  }
  result = 0;
  if ( v14 == (char *)v2 )
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

// Line 119: range 00000000179A0262-00000000179A03F2
int32_t __cdecl FireworksLaunchSchemeData::toClient(
        const FireworksLaunchSchemeData *const this,
        proto::FireworksLaunchSchemeData *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  std::vector<FireworksParam>::const_iterator __for_begin; // [rsp+18h] [rbp-28h] BYREF
  std::vector<FireworksParam>::const_iterator __for_end; // [rsp+20h] [rbp-20h] BYREF
  const std::vector<FireworksParam> *__for_range; // [rsp+28h] [rbp-18h]
  const FireworksParam *param; // [rsp+30h] [rbp-10h]
  proto::FireworksLaunchParam *launch_param_proto; // [rsp+38h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::FireworksLaunchSchemeData::set_scheme_id(proto, this->scheme_id);
  v2 = proto::FireworksLaunchSchemeData::mutable_fireworks_id_list(proto);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->fireworks_id_vec, v2);
  __for_range = &this->launch_param_vec;
  __for_begin._M_current = std::vector<FireworksParam>::begin(&this->launch_param_vec)._M_current;
  __for_end._M_current = std::vector<FireworksParam>::end(&this->launch_param_vec)._M_current;
  while ( __gnu_cxx::operator!=<FireworksParam const*,std::vector<FireworksParam>>(&__for_begin, &__for_end) )
  {
    param = __gnu_cxx::__normal_iterator<FireworksParam const*,std::vector<FireworksParam>>::operator*(&__for_begin);
    launch_param_proto = proto::FireworksLaunchSchemeData::add_launch_param_list(proto);
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    proto::FireworksLaunchParam::set_type(launch_param_proto, (proto::FireworksLaunchParamType)param->type);
    if ( *(_BYTE *)(((unsigned __int64)&param->value >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->value >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->value);
    }
    proto::FireworksLaunchParam::set_value(launch_param_proto, param->value);
    __gnu_cxx::__normal_iterator<FireworksParam const*,std::vector<FireworksParam>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 132: range 00000000179A03F4-00000000179A08CB
int32_t __cdecl PlayerFireworksComp::fromBin(
        PlayerFireworksComp *const this,
        const proto::PlayerDataBin *player_data_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  google::protobuf::RepeatedPtrField<proto::FireworksReformBin>::const_iterator *p_for_end; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  FireworksReformData *v9; // rax
  __int64 use_launch_scheme_id; // rdx
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  FireworksLaunchSchemeData *v15; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::FireworksReformBin>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  google::protobuf::RepeatedPtrField<proto::FireworksReformBin>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const proto::PlayerFireworksCompBin *proto_comp; // [rsp+28h] [rbp-A8h]
  const google::protobuf::RepeatedPtrField<proto::FireworksReformBin> *__for_range; // [rsp+30h] [rbp-A0h]
  const google::protobuf::RepeatedPtrField<proto::FireworksLaunchSchemeBin> *__for_range_0; // [rsp+38h] [rbp-98h]
  const proto::FireworksLaunchSchemeBin *launch_scheme_bin; // [rsp+40h] [rbp-90h]
  const proto::FireworksReformBin *fireworks_reform_bin; // [rsp+48h] [rbp-88h]
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-80h] BYREF
  char v25[96]; // [rsp+70h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 scheme_id:151";
  *(_QWORD *)(v2 + 16) = PlayerFireworksComp::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  proto_comp = proto::PlayerDataBin::fireworks_bin(player_data_bin);
  std::map<unsigned int,FireworksReformData>::clear(&this->fireworks_reform_data_map_);
  __for_range = proto::PlayerFireworksCompBin::fireworks_reform_bin_list(proto_comp);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FireworksReformBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FireworksReformBin>::end(__for_range).it_;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::FireworksReformBin const>::operator!=(
            &__for_begin,
            &__for_end) )
      break;
    fireworks_reform_bin = google::protobuf::internal::RepeatedPtrIterator<proto::FireworksReformBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = proto::FireworksReformBin::id(fireworks_reform_bin);
    if ( common::tools::MiscUtils::isContains<std::map<unsigned int,FireworksReformData>,unsigned int>(
           &this->fireworks_reform_data_map_,
           (const unsigned int *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_fireworks_comp.cpp",
        "fromBin",
        141);
      v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v24,
             (const char (*)[37])"[FIREWORKS] duplicate fireworks id: ");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
      v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])" player_:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v8, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    else
    {
      v9 = std::map<unsigned int,FireworksReformData>::operator[](
             &this->fireworks_reform_data_map_,
             (const std::map<unsigned int,FireworksReformData>::key_type *)(v2 + 32));
      FireworksReformData::fromBin(v9, fireworks_reform_bin);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::FireworksReformBin const>::operator++(&__for_begin);
  }
  use_launch_scheme_id = proto::PlayerFireworksCompBin::last_use_launch_scheme_id(proto_comp);
  v11 = *(_BYTE *)(((unsigned __int64)&this->last_use_launch_scheme_id_ >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(p_for_end) = v11 != 0;
    __asan_report_store4(&this->last_use_launch_scheme_id_, p_for_end, use_launch_scheme_id);
  }
  this->last_use_launch_scheme_id_ = use_launch_scheme_id;
  std::map<unsigned int,FireworksLaunchSchemeData>::clear(&this->fireworks_launch_scheme_data_map_);
  __for_range_0 = proto::PlayerFireworksCompBin::launch_scheme_bin_list(proto_comp);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FireworksLaunchSchemeBin>::begin(__for_range_0).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FireworksLaunchSchemeBin>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::FireworksLaunchSchemeBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::FireworksLaunchSchemeBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::FireworksLaunchSchemeBin>::iterator *)&__for_end) )
  {
    launch_scheme_bin = google::protobuf::internal::RepeatedPtrIterator<proto::FireworksLaunchSchemeBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::FireworksLaunchSchemeBin> *const)&__for_begin);
    *(_DWORD *)(v2 + 32) = proto::FireworksLaunchSchemeBin::scheme_id(launch_scheme_bin);
    if ( common::tools::MiscUtils::isContains<std::map<unsigned int,FireworksLaunchSchemeData>,unsigned int>(
           &this->fireworks_launch_scheme_data_map_,
           (const unsigned int *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_fireworks_comp.cpp",
        "fromBin",
        154);
      v12 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v24,
              (const char (*)[41])"[FIREWORKS] duplicate launch scheme_id: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
      v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])" player_:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v14, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    else
    {
      v15 = std::map<unsigned int,FireworksLaunchSchemeData>::operator[](
              &this->fireworks_launch_scheme_data_map_,
              (const std::map<unsigned int,FireworksLaunchSchemeData>::key_type *)(v2 + 32));
      FireworksLaunchSchemeData::fromBin(v15, launch_scheme_bin);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::FireworksLaunchSchemeBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::FireworksLaunchSchemeBin> *const)&__for_begin);
  }
  result = 0;
  if ( v25 == (char *)v2 )
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

// Line 163: range 00000000179A08CC-00000000179A0A7B
int32_t __cdecl PlayerFireworksComp::toBin(PlayerFireworksComp *const this, proto::PlayerDataBin *player_data_bin)
{
  proto::FireworksReformBin *v2; // rax
  proto::FireworksLaunchSchemeBin *v3; // rax
  std::map<unsigned int,FireworksReformData>::iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,FireworksReformData>::iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  proto::PlayerFireworksCompBin *proto_comp; // [rsp+28h] [rbp-48h]
  std::map<unsigned int,FireworksReformData> *__for_range; // [rsp+30h] [rbp-40h]
  std::map<unsigned int,FireworksLaunchSchemeData> *__for_range_0; // [rsp+38h] [rbp-38h]
  const std::pair<unsigned int const,FireworksLaunchSchemeData> *v10; // [rsp+40h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,FireworksLaunchSchemeData> >::type *_; // [rsp+48h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,FireworksLaunchSchemeData> >::type *launch_scheme_data; // [rsp+50h] [rbp-20h]
  const std::pair<unsigned int const,FireworksReformData> *v13; // [rsp+58h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,FireworksReformData> >::type *fireworks_id; // [rsp+60h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,FireworksReformData> >::type *fireworks_reform_data; // [rsp+68h] [rbp-8h]

  proto_comp = proto::PlayerDataBin::mutable_fireworks_bin(player_data_bin);
  __for_range = &this->fireworks_reform_data_map_;
  __for_begin._M_node = std::map<unsigned int,FireworksReformData>::begin(&this->fireworks_reform_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,FireworksReformData>::end(&this->fireworks_reform_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,FireworksReformData>>::operator*(&__for_begin);
    fireworks_id = std::get<0ul,unsigned int const,FireworksReformData>(v13);
    fireworks_reform_data = (std::tuple_element<1,const std::pair<unsigned int const,FireworksReformData> >::type *)std::get<1ul,unsigned int const,FireworksReformData>(v13);
    v2 = proto::PlayerFireworksCompBin::add_fireworks_reform_bin_list(proto_comp);
    FireworksReformData::toBin(fireworks_reform_data, v2);
    std::_Rb_tree_iterator<std::pair<unsigned int const,FireworksReformData>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->last_use_launch_scheme_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_use_launch_scheme_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_use_launch_scheme_id_);
  }
  proto::PlayerFireworksCompBin::set_last_use_launch_scheme_id(proto_comp, this->last_use_launch_scheme_id_);
  __for_range_0 = &this->fireworks_launch_scheme_data_map_;
  __for_begin._M_node = std::map<unsigned int,FireworksLaunchSchemeData>::begin(&this->fireworks_launch_scheme_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,FireworksLaunchSchemeData>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,FireworksLaunchSchemeData> >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,FireworksLaunchSchemeData> >::_Self *)&__for_end) )
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,FireworksLaunchSchemeData>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,FireworksLaunchSchemeData> > *const)&__for_begin);
    _ = std::get<0ul,unsigned int const,FireworksLaunchSchemeData>(v10);
    launch_scheme_data = (std::tuple_element<1,const std::pair<unsigned int const,FireworksLaunchSchemeData> >::type *)std::get<1ul,unsigned int const,FireworksLaunchSchemeData>(v10);
    v3 = proto::PlayerFireworksCompBin::add_launch_scheme_bin_list(proto_comp);
    FireworksLaunchSchemeData::toBin(launch_scheme_data, v3);
    std::_Rb_tree_iterator<std::pair<unsigned int const,FireworksLaunchSchemeData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,FireworksLaunchSchemeData> > *const)&__for_begin);
  }
  return 0;
};

// Line 180: range 00000000179A0A7C-00000000179A0AAB
int32_t __cdecl PlayerFireworksComp::notifyAllData(PlayerFireworksComp *const this)
{
  PlayerFireworksComp::notifyFireworksReformData(this, 0);
  PlayerFireworksComp::notifyFireworksLaunchData(this);
  return 0;
};

// Line 187: range 00000000179A0AAC-00000000179A19F5
int32_t __cdecl PlayerFireworksComp::onReformFireworks(
        PlayerFireworksComp *const this,
        const proto::ReformFireworksReq *req,
        proto::ReformFireworksRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t ItemComp; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  int32_t v10; // r14d
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  __int64 v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rcx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  std::__detail::_Node_const_iterator<std::pair<const data::FireworksReformParamType,FireworksReformParamInfo>,false,false>::pointer v32; // rax
  bool *p_is_can_reform; // rax
  uint32_t v34; // edi
  uint32_t v35; // edi
  char v36; // al
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rcx
  google::protobuf::int32 v48; // ecx
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // r14
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  FireworksReformData *v57; // rax
  int32_t result; // eax
  int v60; // [rsp+24h] [rbp-19Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::FireworksReformParam>::const_iterator __for_begin; // [rsp+28h] [rbp-198h] BYREF
  google::protobuf::RepeatedPtrField<proto::FireworksReformParam>::const_iterator __for_end; // [rsp+30h] [rbp-190h] BYREF
  unsigned __int64 val; // [rsp+38h] [rbp-188h] BYREF
  const proto::FireworksReformData *fireworks_reform_data; // [rsp+40h] [rbp-180h]
  const data::MaterialExcelConfig *material_config_ptr; // [rsp+48h] [rbp-178h]
  const FireworksExcelConfigMgr *config_mgr; // [rsp+50h] [rbp-170h]
  const std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo> *reform_param_config_map_ptr; // [rsp+58h] [rbp-168h]
  const google::protobuf::RepeatedPtrField<proto::FireworksReformParam> *reform_param_list; // [rsp+60h] [rbp-160h]
  const google::protobuf::RepeatedPtrField<proto::FireworksReformParam> *__for_range; // [rsp+68h] [rbp-158h]
  const proto::FireworksReformParam *reform_param; // [rsp+70h] [rbp-150h]
  const FireworksReformParamInfo *reform_param_config_info; // [rsp+78h] [rbp-148h]
  std::shared_ptr<Config> v72; // [rsp+80h] [rbp-140h] BYREF
  common::milog::MiLogStream v73; // [rsp+90h] [rbp-130h] BYREF
  char v74[272]; // [rsp+B0h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v74;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 16 fireworks_id:189 48 4 21 reform_param_type:225 64 4 28 reform_param_config_type:234 80"
                        " 8 8 iter:235 112 16 16 material_ptr:192 144 48 25 reform_param_type_set:221";
  *(_QWORD *)(v3 + 16) = PlayerFireworksComp::onReformFireworks;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862726] = -202116109;
  fireworks_reform_data = proto::ReformFireworksReq::fireworks_reform_data(req);
  *(_DWORD *)(v3 + 32) = proto::FireworksReformData::id(fireworks_reform_data);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = (unsigned int)Player::getItemComp(this->player_);
  PlayerItemComp::findMaterial((PlayerItemComp *const)(v3 + 112), ItemComp);
  if ( std::operator==<Material>(0LL, (const std::shared_ptr<Material> *)(v3 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v73,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_fireworks_comp.cpp",
      "onReformFireworks",
      195);
    v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v73,
           (const char (*)[44])"[FIREWORKS] player not have the fireworks: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])" player_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    operator<<(v9, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v73);
    v10 = -1;
    goto LABEL_59;
  }
  v11 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
  material_config_ptr = Material::getMaterialConfig(v11);
  if ( !material_config_ptr )
    goto LABEL_14;
  if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)material_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&material_config_ptr->material_type);
  }
  if ( material_config_ptr->material_type != MATERIAL_FIREWORKS )
  {
LABEL_14:
    common::milog::MiLogStream::create(
      &v73,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_fireworks_comp.cpp",
      "onReformFireworks",
      201);
    v12 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v73,
            (const char (*)[40])"[FIREWORKS] material is not fireworks: ");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])" player_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v72);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v72)->design_config.txt_config_mgr.fireworks_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v72);
  reform_param_config_map_ptr = FireworksExcelConfigMgr::getFireworksReformParamConfig(config_mgr, *(_DWORD *)(v3 + 32));
  if ( !reform_param_config_map_ptr )
  {
    common::milog::MiLogStream::create(
      &v73,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_fireworks_comp.cpp",
      "onReformFireworks",
      210);
    v14 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
            &v73,
            (const char (*)[67])"[FIREWORKS] get fireworks reform param config fail, fireworks_id: ");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
    v16 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v15, (const char (*)[10])" player_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v16, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v73);
    v10 = -1;
    goto LABEL_59;
  }
  reform_param_list = proto::FireworksReformData::reform_param_list(fireworks_reform_data);
  v17 = google::protobuf::RepeatedPtrField<proto::FireworksReformParam>::size(reform_param_list);
  if ( v17 != std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo>::size(reform_param_config_map_ptr) )
  {
    common::milog::MiLogStream::create(
      &v73,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_fireworks_comp.cpp",
      "onReformFireworks",
      217);
    v18 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            &v73,
            (const char (*)[27])"[FIREWORKS] fireworks_id: ");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 32));
    v20 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            v19,
            (const char (*)[27])" reform param config size:");
    val = std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo>::size(reform_param_config_map_ptr);
    v21 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v20, &val);
    v22 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v21,
            (const char (*)[24])" reform param req size:");
    v60 = google::protobuf::RepeatedPtrField<proto::FireworksReformParam>::size(reform_param_list);
    v23 = common::milog::MiLogStream::operator<<<int,(int *)0>(v22, &v60);
    v24 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v23, (const char (*)[10])" player_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v24, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v73);
    v10 = -1;
    goto LABEL_59;
  }
  std::set<proto::FireworksReformParamType>::set((std::set<proto::FireworksReformParamType> *const)(v3 + 144));
  __for_range = reform_param_list;
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FireworksReformParam>::begin(reform_param_list).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FireworksReformParam>::end(reform_param_list).it_;
  while ( 1 )
  {
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::FireworksReformParam const>::operator!=(
            &__for_begin,
            &__for_end) )
    {
      v57 = std::map<unsigned int,FireworksReformData>::operator[](
              &this->fireworks_reform_data_map_,
              (const std::map<unsigned int,FireworksReformData>::key_type *)(v3 + 32));
      FireworksReformData::fromClient(v57, fireworks_reform_data);
      PlayerFireworksComp::notifyFireworksReformData(this, *(_DWORD *)(v3 + 32));
      v10 = 0;
      goto LABEL_58;
    }
    reform_param = google::protobuf::internal::RepeatedPtrIterator<proto::FireworksReformParam const>::operator*(&__for_begin);
    *(_DWORD *)(v3 + 48) = proto::FireworksReformParam::type(reform_param);
    if ( common::tools::MiscUtils::isContains<std::set<proto::FireworksReformParamType>,proto::FireworksReformParamType>(
           (std::set<proto::FireworksReformParamType> *)(v3 + 144),
           (const proto::FireworksReformParamType *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v73,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_fireworks_comp.cpp",
        "onReformFireworks",
        228);
      v25 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v73,
              (const char (*)[42])"[FIREWORKS] duplicate reform param type: ");
      v26 = common::milog::MiLogStream::operator<<<proto::FireworksReformParamType,(proto::FireworksReformParamType*)0>(
              v25,
              (const proto::FireworksReformParamType *)(v3 + 48));
      v27 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v26, (const char (*)[10])" player_:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_30:
      operator<<(v27, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v73);
      v10 = -1;
      goto LABEL_58;
    }
    std::set<proto::FireworksReformParamType>::insert(
      (std::set<proto::FireworksReformParamType> *const)(v3 + 144),
      (const std::set<proto::FireworksReformParamType>::value_type *)(v3 + 48));
    *(_DWORD *)(v3 + 64) = PlayerFireworksComp::getReformParamConfigType(
                             this,
                             *(proto::FireworksReformParamType *)(v3 + 48));
    *(std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo>::const_iterator *)(v3 + 80) = std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo>::find(reform_param_config_map_ptr, (const std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo>::key_type *)(v3 + 64));
    val = (unsigned __int64)std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo>::end(reform_param_config_map_ptr)._M_cur;
    if ( std::__detail::operator==<std::pair<data::FireworksReformParamType const,FireworksReformParamInfo>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<const data::FireworksReformParamType,FireworksReformParamInfo>,false> *)(v3 + 80),
           (const std::__detail::_Node_iterator_base<std::pair<const data::FireworksReformParamType,FireworksReformParamInfo>,false> *)&val) )
    {
      common::milog::MiLogStream::create(
        &v73,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_fireworks_comp.cpp",
        "onReformFireworks",
        238);
      v28 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              &v73,
              (const char (*)[57])"[FIREWORKS] not find reform param config, fireworks_id: ");
      v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v3 + 32));
      v30 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v29,
              (const char (*)[27])" reform_param_config_type:");
      v31 = common::milog::MiLogStream::operator<<<data::FireworksReformParamType,(data::FireworksReformParamType*)0>(
              v30,
              (const data::FireworksReformParamType *)(v3 + 64));
      v27 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v31, (const char (*)[10])" player_:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_30;
    }
    v32 = std::__detail::_Node_const_iterator<std::pair<data::FireworksReformParamType const,FireworksReformParamInfo>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const data::FireworksReformParamType,FireworksReformParamInfo>,false,false> *const)(v3 + 80));
    reform_param_config_info = &v32->second;
    p_is_can_reform = &v32->second.is_can_reform;
    if ( *(_BYTE *)(((unsigned __int64)p_is_can_reform >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_can_reform & 7) >= *(_BYTE *)(((unsigned __int64)p_is_can_reform >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_can_reform);
    }
    if ( !reform_param_config_info->is_can_reform )
      break;
    v34 = proto::FireworksReformParam::value(reform_param);
    if ( *(_BYTE *)(((unsigned __int64)&reform_param_config_info->value_min >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)reform_param_config_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reform_param_config_info->value_min >> 3)
                                                                              + 0x7FFF8000) )
    {
      v34 = (_DWORD)reform_param_config_info + 12;
      __asan_report_load4(&reform_param_config_info->value_min);
    }
    if ( v34 < reform_param_config_info->value_min )
      goto LABEL_44;
    v35 = proto::FireworksReformParam::value(reform_param);
    if ( *(_BYTE *)(((unsigned __int64)&reform_param_config_info->value_max >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)reform_param_config_info + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reform_param_config_info->value_max >> 3)
                                                                              + 0x7FFF8000) )
    {
      v35 = (_DWORD)reform_param_config_info + 16;
      __asan_report_load4(&reform_param_config_info->value_max);
    }
    if ( v35 <= reform_param_config_info->value_max )
      v36 = 0;
    else
LABEL_44:
      v36 = 1;
    if ( v36 )
    {
      common::milog::MiLogStream::create(
        &v73,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_fireworks_comp.cpp",
        "onReformFireworks",
        247);
      v37 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
              &v73,
              (const char (*)[55])"[FIREWORKS] reform param value invalid, fireworks_id: ");
      v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v3 + 32));
      v39 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v38,
              (const char (*)[27])" reform_param_config_type:");
      v40 = common::milog::MiLogStream::operator<<<data::FireworksReformParamType,(data::FireworksReformParamType*)0>(
              v39,
              (const data::FireworksReformParamType *)(v3 + 64));
      v41 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v40, (const char (*)[8])" value:");
      v60 = proto::FireworksReformParam::value(reform_param);
      v42 = common::milog::MiLogStream::operator<<<int,(int *)0>(v41, &v60);
      v43 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v42, (const char (*)[6])" min:");
      v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v43,
              &reform_param_config_info->value_min);
      v45 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v44, (const char (*)[6])" max:");
      v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v45,
              &reform_param_config_info->value_max);
      v47 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v46, (const char (*)[10])" player_:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_49;
    }
LABEL_56:
    google::protobuf::internal::RepeatedPtrIterator<proto::FireworksReformParam const>::operator++(&__for_begin);
  }
  v48 = proto::FireworksReformParam::value(reform_param);
  if ( *(_BYTE *)(((unsigned __int64)&reform_param_config_info->standard_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)reform_param_config_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reform_param_config_info->standard_value >> 3)
                                                                           + 0x7FFF8000) )
  {
    __asan_report_load4(&reform_param_config_info->standard_value);
  }
  if ( v48 == reform_param_config_info->standard_value )
    goto LABEL_56;
  common::milog::MiLogStream::create(
    &v73,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player_fireworks_comp.cpp",
    "onReformFireworks",
    256);
  v49 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
          &v73,
          (const char (*)[55])"[FIREWORKS] reform param value invalid, fireworks_id: ");
  v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, (const unsigned int *)(v3 + 32));
  v51 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          v50,
          (const char (*)[27])" reform_param_config_type:");
  v52 = common::milog::MiLogStream::operator<<<data::FireworksReformParamType,(data::FireworksReformParamType*)0>(
          v51,
          (const data::FireworksReformParamType *)(v3 + 64));
  v53 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v52, (const char (*)[8])" value:");
  v60 = proto::FireworksReformParam::value(reform_param);
  v54 = common::milog::MiLogStream::operator<<<int,(int *)0>(v53, &v60);
  v55 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          v54,
          (const char (*)[27])" not equal standard_value:");
  v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v55,
          &reform_param_config_info->standard_value);
  v47 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v56, (const char (*)[10])" player_:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
LABEL_49:
  operator<<(v47, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v73);
  v10 = -1;
LABEL_58:
  std::set<proto::FireworksReformParamType>::~set((std::set<proto::FireworksReformParamType> *const)(v3 + 144));
LABEL_59:
  std::shared_ptr<Material>::~shared_ptr((std::shared_ptr<Material> *const)(v3 + 112));
  result = v10;
  if ( v74 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 270: range 00000000179A19F6-00000000179A2A12
int32_t __cdecl PlayerFireworksComp::onLaunchFireworks(
        PlayerFireworksComp *const this,
        const proto::LaunchFireworksReq *req,
        proto::LaunchFireworksRsp *rsp_0)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  int v18; // r15d
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  google::protobuf::RepeatedPtrField<proto::FireworksLaunchParam>::const_iterator *p_for_end_0; // rsi
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rcx
  proto::FireworksLaunchParamType v30; // edx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  google::protobuf::int32 v38; // r14d
  __gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *v39; // rax
  google::protobuf::int32 *v40; // rdx
  google::protobuf::int32 v41; // r14d
  __gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *v42; // rax
  google::protobuf::int32 *v43; // rdx
  char v44; // al
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // r14
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  uint32_t v51; // ecx
  char v52; // al
  FireworksLaunchSchemeData *v53; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::FireworksLaunchParam>::const_iterator __for_begin_0; // [rsp+28h] [rbp-1B8h] BYREF
  google::protobuf::RepeatedPtrField<proto::FireworksLaunchParam>::const_iterator __for_end_0; // [rsp+30h] [rbp-1B0h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-1A8h]
  const proto::FireworksLaunchSchemeData *scheme_data; // [rsp+40h] [rbp-1A0h]
  const google::protobuf::RepeatedField<unsigned int> *fireworks_id_list; // [rsp+48h] [rbp-198h]
  PlayerItemComp *player_item_comp; // [rsp+50h] [rbp-190h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+58h] [rbp-188h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+60h] [rbp-180h]
  const data::MaterialExcelConfig *material_config_ptr; // [rsp+68h] [rbp-178h]
  const google::protobuf::RepeatedPtrField<proto::FireworksLaunchParam> *launch_param_list; // [rsp+70h] [rbp-170h]
  const google::protobuf::RepeatedPtrField<proto::FireworksLaunchParam> *__for_range_0; // [rsp+78h] [rbp-168h]
  const proto::FireworksLaunchParam *launch_param; // [rsp+80h] [rbp-160h]
  const data::FireworksLaunchExcelConfig *fireworks_launch_config_ptr; // [rsp+88h] [rbp-158h]
  common::milog::MiLogStream v68; // [rsp+90h] [rbp-150h] BYREF
  char v69[304]; // [rsp+B0h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 32 4 13 scheme_id:272 48 4 31 fireworks_launch_max_length:281 64 4 17 fireworks_num:282 80 4 2"
                        "0 launch_param_max:309 96 4 21 launch_param_type:320 112 4 28 launch_param_config_type:329 128 4"
                        " 16 fireworks_id:290 144 16 16 material_ptr:293 176 48 25 launch_param_type_set:316";
  *(_QWORD *)(v4 + 16) = PlayerFireworksComp::onLaunchFireworks;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = 61956;
  v6[536862725] = 62194;
  v6[536862727] = -202116109;
  scheme_data = proto::LaunchFireworksReq::scheme_data(req);
  *(_DWORD *)(v4 + 32) = proto::FireworksLaunchSchemeData::scheme_id(scheme_data);
  if ( !*(_DWORD *)(v4 + 32) || *(_DWORD *)(v4 + 32) > 3u )
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_fireworks_comp.cpp",
      "onLaunchFireworks",
      275);
    v7 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v68,
           (const char (*)[48])"[FIREWORKS] invalid fireworks launch scheme id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])" player_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_36;
  }
  fireworks_id_list = proto::FireworksLaunchSchemeData::fireworks_id_list(scheme_data);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 144));
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
  *(_DWORD *)(v4 + 48) = ConstValueExcelConfigMgr::getFireworksLaunchMaxLength(&v10->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 144));
  *(_DWORD *)(v4 + 64) = google::protobuf::RepeatedField<unsigned int>::size(fireworks_id_list);
  if ( *(_DWORD *)(v4 + 64) > *(_DWORD *)(v4 + 48) )
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_fireworks_comp.cpp",
      "onLaunchFireworks",
      285);
    v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v68,
            (const char (*)[43])"[FIREWORKS] invalid launch fireworks num: ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 64));
    v13 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            v12,
            (const char (*)[30])" fireworks_launch_max_length:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])" player_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_36;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player_item_comp = Player::getItemComp(this->player_);
  __for_range = fireworks_id_list;
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(fireworks_id_list);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(fireworks_id_list);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin);
    }
    *(_DWORD *)(v4 + 128) = *__for_begin;
    PlayerItemComp::findMaterial((PlayerItemComp *const)(v4 + 144), (uint32_t)player_item_comp);
    if ( std::operator==<Material>(0LL, (const std::shared_ptr<Material> *)(v4 + 144)) )
    {
      common::milog::MiLogStream::create(
        &v68,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_fireworks_comp.cpp",
        "onLaunchFireworks",
        296);
      v15 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v68,
              (const char (*)[44])"[FIREWORKS] player not have the fireworks: ");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v15,
              (const unsigned int *)(v4 + 128));
      v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v16, (const char (*)[10])" player_:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_22:
      operator<<(v17, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v68);
      v3 = -1;
      v18 = 0;
      goto LABEL_31;
    }
    v19 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    material_config_ptr = Material::getMaterialConfig(v19);
    if ( !material_config_ptr )
      goto LABEL_27;
    if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)material_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&material_config_ptr->material_type);
    }
    if ( material_config_ptr->material_type != MATERIAL_FIREWORKS )
    {
LABEL_27:
      common::milog::MiLogStream::create(
        &v68,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_fireworks_comp.cpp",
        "onLaunchFireworks",
        302);
      v20 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v68,
              (const char (*)[23])"[FIREWORKS] material: ");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v20,
              (const unsigned int *)(v4 + 128));
      v17 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v21, (const char (*)[28])off_2625E260);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_22;
    }
    v18 = 1;
LABEL_31:
    std::shared_ptr<Material>::~shared_ptr((std::shared_ptr<Material> *const)(v4 + 144));
    if ( v18 != 1 )
      goto LABEL_68;
    ++__for_begin;
  }
  launch_param_list = proto::FireworksLaunchSchemeData::launch_param_list(scheme_data);
  *(_DWORD *)(v4 + 80) = 5;
  if ( google::protobuf::RepeatedPtrField<proto::FireworksLaunchParam>::size(launch_param_list) + 1 == *(_DWORD *)(v4 + 80) )
  {
    std::set<proto::FireworksLaunchParamType>::set((std::set<proto::FireworksLaunchParamType> *const)(v4 + 176));
    __for_range_0 = launch_param_list;
    __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::FireworksLaunchParam>::begin(launch_param_list).it_;
    __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::FireworksLaunchParam>::end(launch_param_list).it_;
    while ( 1 )
    {
      p_for_end_0 = &__for_end_0;
      if ( !google::protobuf::internal::RepeatedPtrIterator<proto::FireworksLaunchParam const>::operator!=(
              &__for_begin_0,
              &__for_end_0) )
        break;
      launch_param = google::protobuf::internal::RepeatedPtrIterator<proto::FireworksLaunchParam const>::operator*(&__for_begin_0);
      *(_DWORD *)(v4 + 96) = proto::FireworksLaunchParam::type(launch_param);
      if ( common::tools::MiscUtils::isContains<std::set<proto::FireworksLaunchParamType>,proto::FireworksLaunchParamType>(
             (std::set<proto::FireworksLaunchParamType> *)(v4 + 176),
             (const proto::FireworksLaunchParamType *)(v4 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_fireworks_comp.cpp",
          "onLaunchFireworks",
          323);
        v27 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v68,
                (const char (*)[32])"[FIREWORKS] launch param type: ");
        v28 = common::milog::MiLogStream::operator<<<proto::FireworksLaunchParamType,(proto::FireworksLaunchParamType*)0>(
                v27,
                (const proto::FireworksLaunchParamType *)(v4 + 96));
        v29 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v28,
                (const char (*)[21])" duplicate, player_:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
LABEL_62:
        operator<<(v29, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v68);
        v3 = -1;
        goto LABEL_67;
      }
      std::set<proto::FireworksLaunchParamType>::insert(
        (std::set<proto::FireworksLaunchParamType> *const)(v4 + 176),
        (const std::set<proto::FireworksLaunchParamType>::value_type *)(v4 + 96));
      v30 = proto::FireworksLaunchParam::type(launch_param);
      *(_DWORD *)(v4 + 112) = PlayerFireworksComp::getLaunchParamConfigType(this, v30);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v4 + 144));
      v31 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
      fireworks_launch_config_ptr = data::FireworksExcelConfigMgrBase::findFireworksLaunchExcelConfig(
                                      &v31->design_config.txt_config_mgr.fireworks_config_mgr,
                                      (data::FireworksLaunchParamType)*(_DWORD *)(v4 + 112));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 144));
      if ( !fireworks_launch_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_fireworks_comp.cpp",
          "onLaunchFireworks",
          333);
        v32 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                &v68,
                (const char (*)[69])"[FIREWORKS] not find launch param config, launch_param_config_type: ");
        v33 = common::milog::MiLogStream::operator<<<data::FireworksLaunchParamType,(data::FireworksLaunchParamType*)0>(
                v32,
                (const data::FireworksLaunchParamType *)(v4 + 112));
        v29 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v33, (const char (*)[10])" player_:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_62;
      }
      if ( std::vector<int>::size(&fireworks_launch_config_ptr->adjust_range) != 2 )
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_fireworks_comp.cpp",
          "onLaunchFireworks",
          338);
        v34 = common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
                &v68,
                (const char (*)[79])"[FIREWORKS] launch param adjust range config error, launch_param_config_type: ");
        v35 = common::milog::MiLogStream::operator<<<data::FireworksLaunchParamType,(data::FireworksLaunchParamType*)0>(
                v34,
                (const data::FireworksLaunchParamType *)(v4 + 112));
        v36 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v35, (const char (*)[15])" adjust_range:");
        v37 = common::milog::MiLogStream::operator<<<int>(v36, &fireworks_launch_config_ptr->adjust_range);
        v29 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v37, (const char (*)[10])" player_:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_62;
      }
      v38 = proto::FireworksLaunchParam::value(launch_param);
      v39 = (__gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *)std::vector<int>::operator[](
                                                                                &fireworks_launch_config_ptr->adjust_range,
                                                                                0LL);
      v40 = v39;
      if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v39 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v39);
      }
      if ( v38 < *v40 )
        goto LABEL_57;
      v41 = proto::FireworksLaunchParam::value(launch_param);
      v42 = (__gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *)std::vector<int>::operator[](
                                                                                &fireworks_launch_config_ptr->adjust_range,
                                                                                1uLL);
      v43 = v42;
      if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v42);
      }
      if ( v41 <= *v43 )
        v44 = 0;
      else
LABEL_57:
        v44 = 1;
      if ( v44 )
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_fireworks_comp.cpp",
          "onLaunchFireworks",
          344);
        v45 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                &v68,
                (const char (*)[67])"[FIREWORKS] launch param value invalid, launch_param_config_type: ");
        v46 = common::milog::MiLogStream::operator<<<data::FireworksLaunchParamType,(data::FireworksLaunchParamType*)0>(
                v45,
                (const data::FireworksLaunchParamType *)(v4 + 112));
        v47 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v46, (const char (*)[8])" value:");
        *(_DWORD *)(v4 + 128) = proto::FireworksLaunchParam::value(launch_param);
        v48 = common::milog::MiLogStream::operator<<<int,(int *)0>(v47, (const int *)(v4 + 128));
        v49 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v48, (const char (*)[15])" adjust_range:");
        v50 = common::milog::MiLogStream::operator<<<int>(v49, &fireworks_launch_config_ptr->adjust_range);
        v29 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v50, (const char (*)[10])" player_:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_62;
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::FireworksLaunchParam const>::operator++(&__for_begin_0);
    }
    v51 = *(_DWORD *)(v4 + 32);
    v52 = *(_BYTE *)(((unsigned __int64)&this->last_use_launch_scheme_id_ >> 3) + 0x7FFF8000);
    if ( v52 != 0 && v52 <= 3 )
    {
      LOBYTE(p_for_end_0) = v52 != 0;
      __asan_report_store4(&this->last_use_launch_scheme_id_, p_for_end_0, &this->last_use_launch_scheme_id_);
    }
    this->last_use_launch_scheme_id_ = v51;
    v53 = std::map<unsigned int,FireworksLaunchSchemeData>::operator[](
            &this->fireworks_launch_scheme_data_map_,
            (const std::map<unsigned int,FireworksLaunchSchemeData>::key_type *)(v4 + 32));
    FireworksLaunchSchemeData::fromClient(v53, scheme_data);
    PlayerFireworksComp::notifyFireworksLaunchData(this);
    v3 = 0;
LABEL_67:
    std::set<proto::FireworksLaunchParamType>::~set((std::set<proto::FireworksLaunchParamType> *const)(v4 + 176));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_fireworks_comp.cpp",
      "onLaunchFireworks",
      313);
    v22 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v68,
            (const char (*)[31])"[FIREWORKS] launch param num: ");
    *(_DWORD *)(v4 + 128) = google::protobuf::RepeatedPtrField<proto::FireworksLaunchParam>::size(launch_param_list);
    v23 = common::milog::MiLogStream::operator<<<int,(int *)0>(v22, (const int *)(v4 + 128));
    v24 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v23, (const char (*)[19])" launch_param_max:");
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v4 + 80));
    v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v25, (const char (*)[10])" player_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_36:
    operator<<(v9, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v68);
    v3 = -1;
  }
LABEL_68:
  result = v3;
  if ( v69 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 358: range 00000000179A2A14-00000000179A2DEE
void __fastcall PlayerFireworksComp::notifyFireworksReformData(PlayerFireworksComp *const this, uint32_t fireworks_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  FireworksReformData *p_second; // r14
  proto::FireworksReformData *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  proto::FireworksReformData *v10; // rax
  std::map<unsigned int,FireworksReformData>::iterator __for_end; // [rsp+18h] [rbp-118h] BYREF
  std::map<unsigned int,FireworksReformData> *__for_range; // [rsp+20h] [rbp-110h]
  const std::pair<unsigned int const,FireworksReformData> *v13; // [rsp+28h] [rbp-108h]
  std::tuple_element<0,const std::pair<unsigned int const,FireworksReformData> >::type *_; // [rsp+30h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,FireworksReformData> >::type *fireworks_reform_data; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-F0h] BYREF
  char v17[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 16 fireworks_id:357 48 8 8 iter:362 80 48 10 notify:359";
  *(_QWORD *)(v2 + 16) = PlayerFireworksComp::notifyFireworksReformData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 32) = fireworks_id;
  proto::FireworksReformDataNotify::FireworksReformDataNotify((proto::FireworksReformDataNotify *const)(v2 + 80));
  if ( !*(_DWORD *)(v2 + 32) )
  {
    __for_range = &this->fireworks_reform_data_map_;
    *(std::map<unsigned int,FireworksReformData>::iterator *)(v2 + 48) = std::map<unsigned int,FireworksReformData>::begin(&this->fireworks_reform_data_map_);
    __for_end._M_node = std::map<unsigned int,FireworksReformData>::end(__for_range)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,FireworksReformData> >::_Self *)(v2 + 48),
              &__for_end) )
    {
      v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,FireworksReformData>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,FireworksReformData> > *const)(v2 + 48));
      _ = std::get<0ul,unsigned int const,FireworksReformData>(v13);
      fireworks_reform_data = (std::tuple_element<1,const std::pair<unsigned int const,FireworksReformData> >::type *)std::get<1ul,unsigned int const,FireworksReformData>(v13);
      v10 = proto::FireworksReformDataNotify::add_fireworks_reform_data_list((proto::FireworksReformDataNotify *const)(v2 + 80));
      FireworksReformData::toClient(fireworks_reform_data, v10);
      std::_Rb_tree_iterator<std::pair<unsigned int const,FireworksReformData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,FireworksReformData> > *const)(v2 + 48));
    }
    goto LABEL_13;
  }
  *(std::map<unsigned int,FireworksReformData>::iterator *)(v2 + 48) = std::map<unsigned int,FireworksReformData>::find(
                                                                         &this->fireworks_reform_data_map_,
                                                                         (const std::map<unsigned int,FireworksReformData>::key_type *)(v2 + 32));
  __for_end._M_node = std::map<unsigned int,FireworksReformData>::end(&this->fireworks_reform_data_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,FireworksReformData> >::_Self *)(v2 + 48),
         &__for_end) )
  {
    p_second = &std::_Rb_tree_iterator<std::pair<unsigned int const,FireworksReformData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,FireworksReformData> > *const)(v2 + 48))->second;
    v6 = proto::FireworksReformDataNotify::add_fireworks_reform_data_list((proto::FireworksReformDataNotify *const)(v2 + 80));
    FireworksReformData::toClient(p_second, v6);
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
    goto LABEL_16;
  }
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/player_fireworks_comp.cpp",
    "notifyFireworksReformData",
    369);
  v7 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
         &v16,
         (const char (*)[58])"[FIREWORKS] not find fireworks reform data, fireworks_id:");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
  v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])" player_:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  operator<<(v9, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v16);
LABEL_16:
  proto::FireworksReformDataNotify::~FireworksReformDataNotify((proto::FireworksReformDataNotify *const)(v2 + 80));
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 384: range 00000000179A2DF0-00000000179A3078
void __cdecl PlayerFireworksComp::notifyFireworksLaunchData(PlayerFireworksComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  proto::FireworksLaunchSchemeData *v4; // rax
  std::map<unsigned int,FireworksLaunchSchemeData>::iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  std::map<unsigned int,FireworksLaunchSchemeData>::iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  std::map<unsigned int,FireworksLaunchSchemeData> *__for_range; // [rsp+20h] [rbp-C0h]
  const std::pair<unsigned int const,FireworksLaunchSchemeData> *v8; // [rsp+28h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,FireworksLaunchSchemeData> >::type *_; // [rsp+30h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,FireworksLaunchSchemeData> >::type *launch_scheme_data; // [rsp+38h] [rbp-A8h]
  char v11[160]; // [rsp+40h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 48 10 notify:385";
  *(_QWORD *)(v1 + 16) = PlayerFireworksComp::notifyFireworksLaunchData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  proto::FireworksLaunchDataNotify::FireworksLaunchDataNotify((proto::FireworksLaunchDataNotify *const)(v1 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->last_use_launch_scheme_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_use_launch_scheme_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_use_launch_scheme_id_);
  }
  proto::FireworksLaunchDataNotify::set_last_use_scheme_id(
    (proto::FireworksLaunchDataNotify *const)(v1 + 48),
    this->last_use_launch_scheme_id_);
  __for_range = &this->fireworks_launch_scheme_data_map_;
  __for_begin._M_node = std::map<unsigned int,FireworksLaunchSchemeData>::begin(&this->fireworks_launch_scheme_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,FireworksLaunchSchemeData>::end(&this->fireworks_launch_scheme_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,FireworksLaunchSchemeData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,FireworksLaunchSchemeData>(v8);
    launch_scheme_data = (std::tuple_element<1,const std::pair<unsigned int const,FireworksLaunchSchemeData> >::type *)std::get<1ul,unsigned int const,FireworksLaunchSchemeData>(v8);
    v4 = proto::FireworksLaunchDataNotify::add_scheme_data_list((proto::FireworksLaunchDataNotify *const)(v1 + 48));
    FireworksLaunchSchemeData::toClient(launch_scheme_data, v4);
    std::_Rb_tree_iterator<std::pair<unsigned int const,FireworksLaunchSchemeData>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  proto::FireworksLaunchDataNotify::~FireworksLaunchDataNotify((proto::FireworksLaunchDataNotify *const)(v1 + 48));
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 395: range 00000000179A307A-00000000179A326E
__int64 __fastcall PlayerFireworksComp::getReformParamConfigType(
        PlayerFireworksComp *const this,
        proto::FireworksReformParamType reform_param_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 21 reform_param_type:394";
  *(_QWORD *)(v2 + 16) = PlayerFireworksComp::getReformParamConfigType;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = reform_param_type;
  switch ( *(_DWORD *)(v2 + 32) )
  {
    case 1:
      result = 1LL;
      break;
    case 2:
      result = 2LL;
      break;
    case 3:
      result = 3LL;
      break;
    case 4:
      result = 4LL;
      break;
    case 5:
      result = 5LL;
      break;
    default:
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_fireworks_comp.cpp",
        "getReformParamConfigType",
        409);
      v6 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
             &v9,
             (const char (*)[72])"[FIREWORKS] invalid proto FireworksReformParamType, reform_param_type: ");
      v7 = common::milog::MiLogStream::operator<<<proto::FireworksReformParamType,(proto::FireworksReformParamType*)0>(
             v6,
             (const proto::FireworksReformParamType *)(v2 + 32));
      v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])" player_:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v8, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v9);
      result = 0LL;
      break;
  }
  if ( v10 == (char *)v2 )
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

// Line 416: range 00000000179A3270-00000000179A3453
__int64 __fastcall PlayerFireworksComp::getLaunchParamConfigType(
        PlayerFireworksComp *const this,
        proto::FireworksLaunchParamType launch_param_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // eax
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-80h] BYREF
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 21 launch_param_type:415";
  *(_QWORD *)(v2 + 16) = PlayerFireworksComp::getLaunchParamConfigType;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = launch_param_type;
  v5 = *(_DWORD *)(v2 + 32);
  if ( v5 == 4 )
  {
    result = 4LL;
  }
  else
  {
    if ( v5 <= 4 )
    {
      switch ( v5 )
      {
        case 3:
          result = 3LL;
          goto LABEL_17;
        case 1:
          result = 1LL;
          goto LABEL_17;
        case 2:
          result = 2LL;
          goto LABEL_17;
      }
    }
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_fireworks_comp.cpp",
      "getLaunchParamConfigType",
      428);
    v7 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
           &v10,
           (const char (*)[71])"[FIREWORKS] invalid proto FireworksLaunchParamType, launch_param_type:");
    v8 = common::milog::MiLogStream::operator<<<proto::FireworksLaunchParamType,(proto::FireworksLaunchParamType*)0>(
           v7,
           (const proto::FireworksLaunchParamType *)(v2 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])" player_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v9, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0LL;
  }
LABEL_17:
  if ( v11 == (char *)v2 )
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
