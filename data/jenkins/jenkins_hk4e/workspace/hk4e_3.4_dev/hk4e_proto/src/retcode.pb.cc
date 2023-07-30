// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/retcode.pb.cc

// Line 50: range 0000000018490621-0000000018490801
// local variable allocation has failed, the output may be wrong!
void __cdecl proto::protobuf_retcode_2eproto::`anonymous namespace'::protobuf_AssignDescriptors()
{
  unsigned __int64 p_filename; // r12
  __int64 v1; // rax
  _DWORD *v2; // r13
  int v3; // r15d
  int v4; // r14d
  int v5; // [rsp+0h] [rbp-D0h]
  const char **v6; // [rsp+8h] [rbp-C8h]
  int v7; // [rsp+10h] [rbp-C0h]
  google::protobuf::internal::LogMessage_0 factory; // [rsp+18h] [rbp-B8h] OVERLAPPED BYREF

  p_filename = (unsigned __int64)&factory.filename_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v1 = __asan_stack_malloc_1(128LL);
    if ( v1 )
      p_filename = v1;
  }
  *(_QWORD *)p_filename = 1102416563LL;
  *(_QWORD *)(p_filename + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(p_filename + 16) = proto::protobuf_retcode_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
  v2 = (_DWORD *)(p_filename >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234753551;
  v2[536862723] = -202116109;
  proto::protobuf_retcode_2eproto::AddDescriptors();
  *(_QWORD *)&factory.level_ = 0LL;
  v3 = (int)proto::protobuf_retcode_2eproto::file_default_instances;
  v4 = (int)proto::protobuf_retcode_2eproto::schemas;
  std::allocator<char>::allocator(p_filename + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(p_filename + 64),
    "retcode.proto",
    (const std::allocator<char> *)(p_filename + 48));
  google::protobuf::internal::AssignDescriptors(
    p_filename + 64,
    v4,
    v3,
    (int)proto::protobuf_retcode_2eproto::TableStruct::offsets,
    0,
    0,
    (__int64)proto::protobuf_retcode_2eproto::`anonymous namespace'::file_level_enum_descriptors,
    0LL,
    v5,
    (int)&factory.filename_,
    v7,
    factory);
  std::string::~string((void *)(p_filename + 64));
  *(_DWORD *)(((p_filename + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(p_filename + 48);
  if ( v6 == (const char **)p_filename )
  {
    *(_QWORD *)((p_filename >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_filename >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)p_filename = 1172321806LL;
    *(_QWORD *)((p_filename >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_filename >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 58: range 0000000018490802-000000001849081B
void __cdecl proto::protobuf_retcode_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce()
{
  google::protobuf::GoogleOnceInit(
    &proto::protobuf_retcode_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
    proto::protobuf_retcode_2eproto::`anonymous namespace'::protobuf_AssignDescriptors);
};

// Line 64: range 000000001849081C-000000001849082F
void __cdecl proto::protobuf_retcode_2eproto::`anonymous namespace'::protobuf_RegisterTypes(const std::string *a1)
{
  proto::protobuf_retcode_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
};

// Line 69: range 0000000018490830-0000000018490851
void __cdecl proto::protobuf_retcode_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx

  google::protobuf::internal::VerifyVersion((google::protobuf::internal *)0x2DD660, 3004000, "./src/retcode.pb.cc", v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
};

// Line 75: range 0000000018490852-000000001849086E
void __cdecl proto::protobuf_retcode_2eproto::InitDefaults()
{
  google::protobuf::GoogleOnceInit(
    &proto::protobuf_retcode_2eproto::InitDefaults(void)::once,
    proto::protobuf_retcode_2eproto::TableStruct::InitDefaultsImpl);
};

// Line 80: range 000000001849086F-000000001849089E
void __cdecl proto::protobuf_retcode_2eproto::`anonymous namespace'::AddDescriptorsImpl();

// Line 1173: range 000000001849089F-00000000184908B8
void __cdecl proto::protobuf_retcode_2eproto::AddDescriptors()
{
  google::protobuf::GoogleOnceInit(
    &proto::protobuf_retcode_2eproto::AddDescriptors(void)::once,
    proto::protobuf_retcode_2eproto::`anonymous namespace'::AddDescriptorsImpl);
};

// Line 1179: range 0000000018E54B6C-0000000018E54B7F
void __cdecl proto::protobuf_retcode_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(
        proto::protobuf_retcode_2eproto::StaticDescriptorInitializer *const this)
{
  proto::protobuf_retcode_2eproto::AddDescriptors();
};

// Line 1186: range 00000000184908B9-00000000184908CA
const google::protobuf::EnumDescriptor *__cdecl proto::Retcode_descriptor()
{
  proto::protobuf_retcode_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto::protobuf_retcode_2eproto::`anonymous namespace'::file_level_enum_descriptors[0];
};

// Line 1190: range 00000000184908CB-0000000018490FB0
bool __cdecl proto::Retcode_IsValid(int value)
{
  if ( value > 12303 )
    return 0;
  if ( value >= 12301 )
    return 1;
  if ( value <= 12260 )
  {
    if ( value >= 12251 )
      return 1;
    if ( value <= 12223 )
    {
      if ( value >= 12204 )
        return 1;
      if ( value <= 12202 )
      {
        if ( value >= 12201 )
          return 1;
        if ( value <= 12149 )
        {
          if ( value >= 12101 )
            return 1;
          if ( value <= 12021 )
          {
            if ( value >= 12000 )
              return 1;
            if ( value <= 11211 )
            {
              if ( value >= 11151 )
                return ((1LL << ((unsigned __int8)value + 113)) & 0x100C0000000001FFLL) != 0;
              if ( value <= 11104 )
              {
                if ( value >= 11101 )
                  return 1;
                if ( value <= 11093 )
                {
                  if ( value >= 11051 )
                    return 1;
                  if ( value <= 11007 )
                  {
                    if ( value >= 11001 || value == 10901 )
                      return 1;
                    if ( value > 10481 )
                      return 0;
                    if ( value >= 10300 )
                    {
                      switch ( value )
                      {
                        case 10300:
                        case 10301:
                        case 10302:
                        case 10303:
                        case 10304:
                        case 10305:
                        case 10306:
                        case 10307:
                        case 10310:
                        case 10315:
                        case 10316:
                        case 10317:
                        case 10318:
                        case 10319:
                        case 10320:
                        case 10350:
                        case 10351:
                        case 10352:
                        case 10353:
                        case 10354:
                        case 10355:
                        case 10366:
                        case 10371:
                        case 10380:
                        case 10381:
                        case 10382:
                        case 10383:
                        case 10390:
                        case 10396:
                        case 10397:
                        case 10398:
                        case 10399:
                        case 10400:
                        case 10401:
                        case 10402:
                        case 10406:
                        case 10407:
                        case 10408:
                        case 10409:
                        case 10410:
                        case 10411:
                        case 10412:
                        case 10413:
                        case 10414:
                        case 10427:
                        case 10428:
                        case 10436:
                        case 10446:
                        case 10447:
                        case 10448:
                        case 10456:
                        case 10457:
                        case 10458:
                        case 10459:
                        case 10460:
                        case 10461:
                        case 10462:
                        case 10463:
                        case 10464:
                        case 10466:
                        case 10467:
                        case 10481:
                          return 1;
                        default:
                          return 0;
                      }
                    }
                    if ( value > 10124 )
                      return 0;
                    if ( value >= 10000 )
                    {
                      switch ( value )
                      {
                        case 10000:
                        case 10001:
                        case 10002:
                        case 10004:
                        case 10005:
                        case 10006:
                        case 10007:
                        case 10008:
                        case 10009:
                        case 10015:
                        case 10016:
                        case 10021:
                        case 10022:
                        case 10023:
                        case 10024:
                        case 10025:
                        case 10031:
                        case 10032:
                        case 10033:
                        case 10034:
                        case 10035:
                        case 10036:
                        case 10037:
                        case 10038:
                        case 10039:
                        case 10040:
                        case 10041:
                        case 10042:
                        case 10043:
                        case 10045:
                        case 10046:
                        case 10047:
                        case 10048:
                        case 10049:
                        case 10050:
                        case 10051:
                        case 10052:
                        case 10053:
                        case 10054:
                        case 10056:
                        case 10057:
                        case 10058:
                        case 10059:
                        case 10060:
                        case 10061:
                        case 10071:
                        case 10072:
                        case 10073:
                        case 10074:
                        case 10075:
                        case 10076:
                        case 10077:
                        case 10078:
                        case 10079:
                        case 10080:
                        case 10081:
                        case 10082:
                        case 10090:
                        case 10091:
                        case 10092:
                        case 10093:
                        case 10094:
                        case 10095:
                        case 10096:
                        case 10097:
                        case 10098:
                        case 10099:
                        case 10100:
                        case 10101:
                        case 10102:
                        case 10103:
                        case 10104:
                        case 10105:
                        case 10110:
                        case 10111:
                        case 10112:
                        case 10113:
                        case 10114:
                        case 10120:
                        case 10121:
                        case 10122:
                        case 10123:
                        case 10124:
                          return 1;
                        default:
                          return 0;
                      }
                    }
                    if ( value > 9815 )
                      return 0;
                    if ( value >= 9701 )
                      return 1;
                    if ( value <= 9661 )
                    {
                      if ( value >= 9651 )
                        return 1;
                      if ( value <= 9605 )
                      {
                        if ( value >= 9601 )
                          return 1;
                        if ( value <= 9503 )
                        {
                          if ( value >= 9501 )
                            return 1;
                          if ( value <= 9302 )
                          {
                            if ( value >= 9301 )
                              return 1;
                            if ( value > 9266 )
                              return 0;
                            if ( value >= 9130 )
                            {
                              switch ( value )
                              {
                                case 9130:
                                case 9131:
                                case 9132:
                                case 9133:
                                case 9134:
                                case 9135:
                                case 9136:
                                case 9137:
                                case 9138:
                                case 9139:
                                case 9150:
                                case 9151:
                                case 9160:
                                case 9161:
                                case 9162:
                                case 9170:
                                case 9171:
                                case 9172:
                                case 9173:
                                case 9180:
                                case 9181:
                                case 9183:
                                case 9184:
                                case 9185:
                                case 9186:
                                case 9187:
                                case 9188:
                                case 9189:
                                case 9192:
                                case 9193:
                                case 9194:
                                case 9195:
                                case 9196:
                                case 9197:
                                case 9201:
                                case 9202:
                                case 9203:
                                case 9204:
                                case 9205:
                                case 9206:
                                case 9207:
                                case 9208:
                                case 9251:
                                case 9252:
                                case 9253:
                                case 9254:
                                case 9255:
                                case 9256:
                                case 9257:
                                case 9258:
                                case 9259:
                                case 9260:
                                case 9261:
                                case 9262:
                                case 9263:
                                case 9264:
                                case 9265:
                                case 9266:
                                  return 1;
                                default:
                                  return 0;
                              }
                            }
                            if ( value > 9123 )
                              return 0;
                            if ( value >= 9101 )
                              return 1;
                            if ( value <= 9009 )
                            {
                              if ( value >= 9001 )
                                return 1;
                              if ( value <= 8907 )
                              {
                                if ( value >= 8901 )
                                  return 1;
                                if ( value <= 8205 )
                                {
                                  if ( value >= 8201 )
                                    return 1;
                                  if ( value <= 8007 )
                                  {
                                    if ( value >= 8001 )
                                      return 1;
                                    if ( value <= 7161 )
                                    {
                                      if ( value >= 7101 )
                                        return ((1LL << ((unsigned __int8)value + 67)) & 0x1FFE0007FFF83FFFLL) != 0;
                                      if ( value <= 7084 )
                                      {
                                        if ( value >= 7081 )
                                          return 1;
                                        if ( value <= 7043 )
                                        {
                                          if ( value >= 7001 )
                                            return 1;
                                          if ( value <= 6004 )
                                          {
                                            if ( value >= 6001 )
                                              return 1;
                                            if ( value <= 5002 )
                                            {
                                              if ( value >= 5001 )
                                                return 1;
                                              if ( value <= 2016 )
                                              {
                                                if ( value >= 2001 )
                                                  return 1;
                                                if ( value <= 1599 )
                                                {
                                                  if ( value >= 1541 )
                                                    return ((1LL << ((unsigned __int8)value - 5)) & 0x7FFFF0001F0000FLL) != 0;
                                                  if ( value <= 1533 )
                                                  {
                                                    if ( value >= 1521 )
                                                      return 1;
                                                    if ( value <= 1510 )
                                                    {
                                                      if ( value >= 1501 )
                                                        return 1;
                                                      if ( value <= 1410 )
                                                      {
                                                        if ( value >= 1401 )
                                                          return 1;
                                                        if ( value <= 1333 )
                                                        {
                                                          if ( value >= 1330 )
                                                            return 1;
                                                          if ( value <= 1321 )
                                                          {
                                                            if ( value >= 1301 )
                                                              return 1;
                                                            if ( value <= 1251 )
                                                            {
                                                              if ( value >= 1223 )
                                                                return 1;
                                                              if ( value <= 1221 )
                                                              {
                                                                if ( value >= 1201 )
                                                                  return 1;
                                                                if ( value <= 1126 )
                                                                {
                                                                  if ( value >= 1101 )
                                                                    return 1;
                                                                  if ( value <= 1002 )
                                                                  {
                                                                    if ( value >= 1001 )
                                                                      return 1;
                                                                    if ( value <= 911 )
                                                                    {
                                                                      if ( value >= 860 )
                                                                        return ((1LL << ((unsigned __int8)value - 92)) & 0xCFFFF87FFFFFFLL) != 0;
                                                                      if ( value <= 833 )
                                                                      {
                                                                        if ( value >= 798 )
                                                                          return 1;
                                                                        if ( value <= 709 )
                                                                        {
                                                                          if ( value >= 660 )
                                                                            return 1;
                                                                          if ( value <= 656 )
                                                                          {
                                                                            if ( value >= 601 )
                                                                              return 1;
                                                                            if ( value <= 565 )
                                                                            {
                                                                              if ( value >= 551 )
                                                                                return 1;
                                                                              if ( value <= 531 )
                                                                              {
                                                                                if ( value >= 501 )
                                                                                  return 1;
                                                                                if ( value <= 407 )
                                                                                {
                                                                                  if ( value >= 401 )
                                                                                    return 1;
                                                                                  if ( value <= 305 )
                                                                                  {
                                                                                    if ( value >= 301 )
                                                                                      return 1;
                                                                                    if ( value <= 201 )
                                                                                    {
                                                                                      if ( value >= 140 )
                                                                                        return ((1LL << ((unsigned __int8)value + 116)) & 0x2000003FFFFFF007LL) != 0;
                                                                                      if ( value <= 136 )
                                                                                      {
                                                                                        if ( value >= 130 )
                                                                                          return 1;
                                                                                        if ( value <= 128 )
                                                                                        {
                                                                                          if ( value >= 101 )
                                                                                            return 1;
                                                                                          if ( value <= 8 )
                                                                                            return value >= -1;
                                                                                          if ( (unsigned int)(value - 10) <= 0x20 )
                                                                                            return 1;
                                                                                        }
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
};
