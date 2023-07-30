// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/creature/property.cpp

// Line 18: range 0000000017978F4C-0000000017978F7A
bool __cdecl shouldBroadcast(data::PropType type)
{
  if ( type <= PROP_GEAR_STOP_VAL )
    return type >= PROP_GEAR_START_VAL;
  return type == PROP_LEVEL;
};

// Line 32: range 0000000017978F7B-0000000017978FFA
proto::PropValue *__cdecl buildIntProp(proto::PropValue *retstr, uint32_t type, int64_t ival)
{
  proto::PropValue::PropValue(retstr);
  proto::PropValue::set_type(retstr, type);
  proto::PropValue::set_ival(retstr, ival);
  proto::PropValue::set_val(retstr, ival);
  return retstr;
};

// Line 42: range 0000000017978FFB-000000001797909F
proto::PropValue *__cdecl buildHundredIntProp(proto::PropValue *retstr, uint32_t type, float fval)
{
  proto::PropValue::PropValue(retstr);
  proto::PropValue::set_type(retstr, type);
  proto::PropValue::set_ival(retstr, (unsigned int)(int)(float)(100.0 * fval));
  proto::PropValue::set_val(retstr, (unsigned int)(int)(float)(100.0 * fval));
  return retstr;
};

// Line 52: range 00000000179790A0-0000000017979253
__int64 __fastcall appendIntPropValue(PropValueMap *map, uint32_t type, int64_t ival)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  proto::PropValue *v6; // r14
  proto::PropValue *v7; // rax
  __int64 result; // rax
  char v10[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 4 7 type:51 48 48 13 prop_value:53";
  *(_QWORD *)(v3 + 16) = appendIntPropValue;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 32) = type;
  proto::PropValue::PropValue((proto::PropValue *const)(v3 + 48));
  proto::PropValue::set_type((proto::PropValue *const)(v3 + 48), *(_DWORD *)(v3 + 32));
  proto::PropValue::set_ival((proto::PropValue *const)(v3 + 48), ival);
  proto::PropValue::set_val((proto::PropValue *const)(v3 + 48), ival);
  v6 = std::move<proto::PropValue &>((proto::PropValue *)(v3 + 48));
  v7 = google::protobuf::Map<unsigned int,proto::PropValue>::operator[](
         map,
         (const google::protobuf::Map<unsigned int,proto::PropValue>::key_type *)(v3 + 32));
  proto::PropValue::operator=(v7, v6);
  proto::PropValue::~PropValue((proto::PropValue *const)(v3 + 48));
  result = 0LL;
  if ( v10 == (char *)v3 )
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
  return result;
};

// Line 63: range 0000000017979254-00000000179792C5
int32_t __cdecl appendIntPropValue(proto::PropPair *prop_pair, uint32_t type, int64_t ival)
{
  proto::PropValue *prop_value; // [rsp+28h] [rbp-8h]

  proto::PropPair::set_type(prop_pair, type);
  prop_value = proto::PropPair::mutable_prop_value(prop_pair);
  proto::PropValue::set_type(prop_value, type);
  proto::PropValue::set_ival(prop_value, ival);
  proto::PropValue::set_val(prop_value, ival);
  return 0;
};

// Line 74: range 00000000179792C6-000000001797949E
__int64 __fastcall appendHundredIntPropValue(PropValueMap *map, uint32_t type, float fval)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  proto::PropValue *v6; // r14
  proto::PropValue *v7; // rax
  __int64 result; // rax
  char v9[176]; // [rsp+10h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 4 7 type:73 48 48 13 prop_value:75";
  *(_QWORD *)(v3 + 16) = appendHundredIntPropValue;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 32) = type;
  proto::PropValue::PropValue((proto::PropValue *const)(v3 + 48));
  proto::PropValue::set_type((proto::PropValue *const)(v3 + 48), *(_DWORD *)(v3 + 32));
  proto::PropValue::set_ival((proto::PropValue *const)(v3 + 48), (unsigned int)(int)(float)(100.0 * fval));
  proto::PropValue::set_val((proto::PropValue *const)(v3 + 48), (unsigned int)(int)(float)(100.0 * fval));
  v6 = std::move<proto::PropValue &>((proto::PropValue *)(v3 + 48));
  v7 = google::protobuf::Map<unsigned int,proto::PropValue>::operator[](
         map,
         (const google::protobuf::Map<unsigned int,proto::PropValue>::key_type *)(v3 + 32));
  proto::PropValue::operator=(v7, v6);
  proto::PropValue::~PropValue((proto::PropValue *const)(v3 + 48));
  result = 0LL;
  if ( v9 == (char *)v3 )
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
  return result;
};
